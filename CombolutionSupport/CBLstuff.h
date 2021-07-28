#include <string>
#include <sstream>
#include <shlwapi.h>
#include <psapi.h>

#include "..\ME2-SDK\ME3TweaksHeader.h"




struct PowerInfo
{
	int iOwner; // 1 for Shepard, 2 for Hench, 0 otherwise
	bool CBL; // true if CBL script
	char ptype[50];
	int iCool;
};

struct PowerCooldown
{
	char name[50];
	float shared[3];
	float individual[3];
};

wstringstream& operator<<(wstringstream& ss, const FString& fStr)
{

	for (auto i = 0; i < fStr.Num() && fStr(i) != 0; i++)
	{
		ss << fStr(i);
	}
	return ss;
}

bool init_PowerCooldown(struct PowerCooldown* p_cool)
{	
	int i;
	for (i = 0; i < 50; i++) // init everything just in case
	{
		strcpy(p_cool[i].name, "Default");
		p_cool[i].shared[0] = p_cool[i].shared[1] = p_cool[i].shared[2] = 3.0;
		p_cool[i].individual[0] = p_cool[i].individual[1] = p_cool[i].individual[2] = 6.0;
	}

	i = 1;
	strcpy(p_cool[i].name, "CommonShort"); // Throw, etc (3.0-9.0 in vanilla)
	p_cool[i].shared[1] = 3.0;
	p_cool[i].shared[0] = p_cool[i].shared[2] = 9.0;
	p_cool[i].individual[1] = 9.0;
	p_cool[i].individual[0] = p_cool[i].individual[2] = 12.0;

	i = 2;
	strcpy(p_cool[i].name, "CommonMedium"); // Cryo etc (4.5-9.0 in vanilla)
	p_cool[i].shared[1] = 4.5;
	p_cool[i].shared[0] = p_cool[i].shared[2] = 9.0;
	p_cool[i].individual[1] = 12.0;
	p_cool[i].individual[0] = p_cool[i].individual[2] = 16.0;

	i = 3;
	strcpy(p_cool[i].name, "CommonLong"); // Warp, Overload, etc (6.0-12.0 in vanilla)
	p_cool[i].shared[1] = 6.0;
	p_cool[i].shared[0] = p_cool[i].shared[2] = 12.0;
	p_cool[i].individual[1] = 15.0;
	p_cool[i].individual[0] = p_cool[i].individual[2] = 20.0;

	i = 4;
	strcpy(p_cool[i].name, "CombatDrone"); // Combat Drone (3.0-30.0 in vanilla)
	p_cool[i].shared[1] = 3.0;
	p_cool[i].shared[0] = p_cool[i].shared[2] = 20.0;
	p_cool[i].individual[1] = 9.0;
	p_cool[i].individual[0] = p_cool[i].individual[2] = 30.0;

	i = 5;
	strcpy(p_cool[i].name, "PowerArmor"); // Tech Armor, Barrier, etc (12.0 in vanilla)
	p_cool[i].shared[1] = 12.0;
	p_cool[i].shared[0] = p_cool[i].shared[2] = 12.0;
	p_cool[i].individual[1] = 45.0;
	p_cool[i].individual[0] = p_cool[i].individual[2] = 60.0;

	i = 6;
	strcpy(p_cool[i].name, "Concussive"); // Concussive Shot (6.0-12.0 in vanilla)
	p_cool[i].shared[1] = 6.0;
	p_cool[i].shared[0] = p_cool[i].shared[2] = 12.0;
	p_cool[i].individual[1] = 12.0;
	p_cool[i].individual[0] = p_cool[i].individual[2] = 16.0;

	i = 7;
	strcpy(p_cool[i].name, "Grenade"); // Inferno and Flashbang (6.0-9.0 in vanilla)
	p_cool[i].shared[1] = 6.0;
	p_cool[i].shared[0] = p_cool[i].shared[2] = 9.0;
	p_cool[i].individual[1] = 15.0;
	p_cool[i].individual[0] = p_cool[i].individual[2] = 16.0;

	i = 8;
	strcpy(p_cool[i].name, "RiotShield"); // RiotShield (12.0 in original mod)
	p_cool[i].shared[1] = 12.0;
	p_cool[i].shared[0] = p_cool[i].shared[2] = 24.0;
	p_cool[i].individual[1] = 30.0;
	p_cool[i].individual[0] = p_cool[i].individual[2] = 40.0;

	return true;
}

bool Check_Ctrl_Key(char key, bool *canToggle)
{
	if ((GetKeyState(key) & 0x8000) && (GetKeyState(VK_CONTROL) & 0x8000)) {
		if (*canToggle) {
			*canToggle = false; // Will not activate combo again until you re-press combo
			return true;
		}
	}
	else if (!(GetKeyState(key) & 0x8000) || !(GetKeyState(VK_CONTROL) & 0x8000)) {
			*canToggle = true; // can press key combo again
	}
	return false;
}


TArray<USFXPower*> get_SFXPowers()
{
	TArray<USFXPower*> SFXPow;
	auto Objects = FindObjectsOfType(USFXPower::StaticClass());
	for (int i = 0; i < Objects.Count; i++)
	{
		auto obj = static_cast<USFXPower*>(Objects.Data[i]);
		SFXPow.Add(obj);
	}
	return SFXPow;
}

TArray<UBioPower*> get_BioPowers()
{
	TArray<UBioPower*> BioPow;
	auto Objects = FindObjectsOfType(UBioPower::StaticClass());
	for (int i = 0; i < Objects.Count; i++)
	{
		auto obj = static_cast<UBioPower*>(Objects.Data[i]);
		BioPow.Add(obj);
	}
	return BioPow;
}

TArray<UBioPowerScript*> get_BioPowerScripts()
{
	TArray<UBioPowerScript*> BioPSc;
	auto Objects = FindObjectsOfType(UBioPowerScript::StaticClass());
	for (int i = 0; i < Objects.Count; i++)
	{
		auto obj = static_cast<UBioPowerScript*>(Objects.Data[i]);
		BioPSc.Add(obj);
	}
	return BioPSc;
}

bool IsPlayer(UObject* pawn)
{
	if (pawn == nullptr) 
		{ return false; }

	if (isPartOf(pawn->GetName(), "Player"))
	{
		return true;
	}
	return false;
}

bool IsHench(UObject* pawn)
{
	if (pawn == nullptr)
	{
		return false;
	}

	if (isPartOf(pawn->GetName(), "Thane") || isPartOf(pawn->GetName(), "Samara") || isPartOf(pawn->GetName(), "Miranda") || isPartOf(pawn->GetName(), "Morinth"))
	{
		return true;
	}
	if (isPartOf(pawn->GetName(), "Tali") || isPartOf(pawn->GetName(), "Jack") || isPartOf(pawn->GetName(), "Liara") || isPartOf(pawn->GetName(), "Garrus") || isPartOf(pawn->GetName(), "Legion"))
	{
		return true;
	}
	if (isPartOf(pawn->GetName(), "Jacob") || isPartOf(pawn->GetName(), "Grunt") || isPartOf(pawn->GetName(), "Kasumi") || isPartOf(pawn->GetName(), "Zaeed") || isPartOf(pawn->GetName(), "Mordin"))
	{
		return true;
	}
	return false;
}



bool get_PowerInfo(TArray<USFXPower*> SFXPow, struct PowerInfo* p_info)
{
	char power_name[500], powerscript_name[500];
	bool onCooldown = false;

	for (int i = 0; i < SFXPow.Count; i++)
	{
		auto xpow = SFXPow.Data[i];
		if (IsPlayer(xpow->MyPawn)) {
			p_info[i].iOwner = 1;
		}
		else if (IsHench(xpow->MyPawn)) {
			p_info[i].iOwner = 2;
		}
		else {
			p_info[i].iOwner = 0;
		}

		if (p_info[i].iOwner > 0 && xpow->GetCooldownRemaining() > 0.0)
			{
			 onCooldown = true;
			}

		strcpy(powerscript_name, "NULL");
		if (xpow->PowerScriptClass != nullptr) { strcpy(powerscript_name, xpow->PowerScriptClass->GetName()); }
		else { strcpy(powerscript_name, "NULL"); }

		if (isPartOf(powerscript_name, "CBL")){p_info[i].CBL=true;}
		else {p_info[i].CBL = false;}

		strcpy(power_name, xpow->GetName()); 
		if (!p_info[i].iOwner)
		{
			strcpy(p_info[i].ptype, "NoChange");
			p_info[i].iCool = 0;
		}
		else if (isPartOf(power_name, "Melee") || isPartOf(power_name, "Loyalty") || isPartOf(power_name, "Passive"))
		{
			strcpy(p_info[i].ptype, "NoChange");
			p_info[i].iCool = 0;
		}
		else if (isPartOf(power_name, "KasumiAssassinate"))
		{
			strcpy(p_info[i].ptype, "NoChange");
			p_info[i].iCool = 0;
		}
		else if (isPartOf(power_name, "Ammo") || isPartOf(power_name, "FirstAid"))
		{
			strcpy(p_info[i].ptype, "KeepCool");
			p_info[i].iCool = 0;
		}
		else if (isPartOf(power_name, "KasumiCloak"))
		{
			strcpy(p_info[i].ptype, "ShadowStrike");
			p_info[i].iCool = 1;
		}
		else if (isPartOf(power_name, "Adrenaline") || isPartOf(power_name, "BioticCharge") || isPartOf(power_name, "Cloak"))
		{
			strcpy(p_info[i].ptype, "KeepCool");
			p_info[i].iCool = 0;
		}
		else if (isPartOf(power_name, "Warp"))
		{
			strcpy(p_info[i].ptype, "Warp");
			p_info[i].iCool = 3;
		}
		else if (isPartOf(power_name, "Throw"))
		{
			strcpy(p_info[i].ptype, "Throw");
			p_info[i].iCool = 1;
		}
		else if (isPartOf(power_name, "Pull"))
		{
			strcpy(p_info[i].ptype, "Pull");
			p_info[i].iCool = 1;
		}
		else if (isPartOf(power_name, "Singularity") && isPartOf(power_name, "Liara"))
		{
			strcpy(p_info[i].ptype, "SingularityLiara");
			p_info[i].iCool = 3;
		}
		else if (isPartOf(power_name, "Singularity"))
		{
			strcpy(p_info[i].ptype, "Singularity");
			p_info[i].iCool = 3;
		}
		else if (isPartOf(power_name, "Shockwave"))
		{
			strcpy(p_info[i].ptype, "Shockwave");
			p_info[i].iCool = 3;
		}
		else if (isPartOf(power_name, "Reave"))
		{
			strcpy(p_info[i].ptype, "Reave");
			p_info[i].iCool = 3;
		}
		else if (isPartOf(power_name, "Dominate"))
		{
			strcpy(p_info[i].ptype, "Dominate");
			p_info[i].iCool = 3;
		}
		else if (isPartOf(power_name, "Crush"))
		{
			strcpy(p_info[i].ptype, "Slam");
			p_info[i].iCool = 1;
		}
		else if (isPartOf(power_name, "AIHacking"))
		{
			strcpy(p_info[i].ptype, "AIHacking");
			p_info[i].iCool = 3;
		}
		else if (isPartOf(power_name, "CombatDrone"))
		{
			strcpy(p_info[i].ptype, "CombatDrone");
			p_info[i].iCool = 4;
		}
		else if (isPartOf(power_name, "CryoFreeze"))
		{
			strcpy(p_info[i].ptype, "CryoFreeze");
			p_info[i].iCool = 2;
		}
		else if (isPartOf(power_name, "Incinerate"))
		{
			strcpy(p_info[i].ptype, "Incinerate");
			p_info[i].iCool = 3;
		}
		else if (isPartOf(power_name, "Overload"))
		{
			strcpy(p_info[i].ptype, "Overload");
			p_info[i].iCool = 3;
		}
		else if (isPartOf(power_name, "ShieldJack"))
		{
			strcpy(p_info[i].ptype, "EnergyDrain");
			p_info[i].iCool = 3;
		}
		else if (isPartOf(power_name, "NeuralShock"))
		{
			strcpy(p_info[i].ptype, "NeuralShock");
			p_info[i].iCool = 1;
		}
		else if (isPartOf(power_name, "PowerArmor") || isPartOf(power_name, "Fortification") || isPartOf(power_name, "Barrier") || isPartOf(power_name, "ShieldBoost"))
		{
			strcpy(p_info[i].ptype, "PowerArmor");
			p_info[i].iCool = 5;
		}
		else if (isPartOf(power_name, "Concussive"))
		{
			strcpy(p_info[i].ptype, "Concussive");
			p_info[i].iCool = 6;
		}
		else if (isPartOf(power_name, "KasumiUnique"))
		{
			strcpy(p_info[i].ptype, "Flashbang");
			p_info[i].iCool = 7;
		}
		else if (isPartOf(power_name, "ZaeedUnique"))
		{
			strcpy(p_info[i].ptype, "Inferno");
			p_info[i].iCool = 7;
		}
		else if (isPartOf(power_name, "Stasis"))
		{
			strcpy(p_info[i].ptype, "Stasis");
			p_info[i].iCool = 3;
		}
		else if (isPartOf(power_name, "Carnage")) // Recovered Powers
		{
			strcpy(p_info[i].ptype, "Carnage");
			p_info[i].iCool = 3;
		}
		else if (isPartOf(power_name, "KsmShock")) // Recovered Powers
		{
			strcpy(p_info[i].ptype, "KsmShock");
			p_info[i].iCool = 3;
		}
		else if (isPartOf(power_name, "RiotShield")) // Recovered Powers
		{
			strcpy(p_info[i].ptype, "RiotShield");
			p_info[i].iCool = 8;
		}
		else if (isPartOf(power_name, "ColossusPulse") || isPartOf(power_name, "GethSiege")) // Recovered Powers
		{
			strcpy(p_info[i].ptype, "GethSiege");
			p_info[i].iCool = 2;
		}
		else
		{
			strcpy(p_info[i].ptype, "KeepCool");
			p_info[i].iCool = 0;
		}

	}
	return onCooldown;
}


void set_SFXPowers_cooldown(TArray<USFXPower*> SFXPow, struct PowerInfo* p_info, struct PowerCooldown* p_cool, int shared_coold)
{
	int scld = 1;
	if (shared_coold == 0) scld = 0;

	for (int i = 0; i < SFXPow.Count; i++)
	{	
		
		auto xpow = SFXPow.Data[i];
		if (p_info[i].iOwner!=1 && p_info[i].iOwner != 2)continue; // ignore anything but Shep and Hench
		if (!strcmp(p_info[i].ptype,"NoChange"))continue; // ignore certain powers

		xpow->UsesSharedCooldown = (float) scld;

		if (!strcmp(p_info[i].ptype, "KeepCool"))continue; // don't change cooldown time for some powers

		if (scld)
		{
			xpow->CooldownTime.X = xpow->CooldownTime.Y = p_cool[p_info[i].iCool].shared[p_info[i].iOwner];
		}
		else
		{
			xpow->CooldownTime.X = xpow->CooldownTime.Y = p_cool[p_info[i].iCool].individual[p_info[i].iOwner];
		}
	}
}

int CBL_fix(TArray<USFXPower*> SFXPow, struct PowerInfo* p_info, char* xtype)
{
	int iCBL = -1;
	int nSFX = 0;

	for (int i = 0; i < SFXPow.Count; i++)
	{	
		if (!p_info[i].iOwner)continue; // ignore anything but Shep and Hench
		if (strcmp(xtype, p_info[i].ptype))continue; // ignore other powers
		if (p_info[i].CBL)iCBL = i;
		else nSFX++;
	}
	if (nSFX <= 0 || iCBL < 0)return 0; // no powers to fix, or nothing to fix them with

	for (int i = 0; i < SFXPow.Count; i++)
	{
		if (!p_info[i].iOwner)continue; // ignore anything but Shep and Hench
		if (strcmp(xtype, p_info[i].ptype))continue; // ignore other powers
		if (!p_info[i].CBL)
		{
			SFXPow.Data[i]->PowerScriptClass = SFXPow.Data[iCBL]->PowerScriptClass;
			if (SFXPow.Data[i]->OldPower != nullptr)
			{
				SFXPow.Data[i]->OldPower->Script = nullptr;
				SFXPow.Data[i]->OldPower->CreatePowerScript();
			}
		}
	}
	return 1;
}




/// <summary>
/// Screen Display
/// </summary>

static void RenderTextSLH(std::wstring msg, const float x, const float y, const char r, const char g, const char b, const float alpha, UCanvas* can)
{
	can->SetDrawColor(r, g, b, alpha * 255);
	can->SetPos(x, y + 64); //+ is Y start. To prevent overlay on top of the power bar thing
	can->DrawText(FString(msg.data()), 1, 1.0f, 1.0f);
}

int display_SFXPowers(TArray<USFXPower*> SFXPow, struct PowerInfo* p_info, int yIndex, ABioHUD* hud, int displayMode)
{
	unsigned char r = 0;
	unsigned char g = 255;
	unsigned char b = 0;
	float alpha = 1.0;
	int xx = 1;
	int yy = yIndex;

	yy++; 
	RenderTextSLH(s2ws(string_format("----- SFXPowers: %5d -----", SFXPow.Count)), xx * 5.0f, yy * 12.0f, r, g, b, alpha, hud->Canvas);
	yy += 2;


	char pawn_name[500], power_name[500], powerscript_name[500];
	float xrank, coold[2], coolg[2], coolb, cools, coolr;

	for (int i = 0; i < SFXPow.Count; i++)
	{
		auto xpow = SFXPow.Data[i];


		strcpy(power_name, xpow->GetName());
		strcpy(pawn_name, "NULL");
		if (xpow->MyPawn != nullptr) { strcpy(pawn_name, xpow->MyPawn->GetName()); }
		else { strcpy(pawn_name, "NULL"); }
		strcpy(powerscript_name, "NULL");
		if (xpow->PowerScriptClass != nullptr) { strcpy(powerscript_name, xpow->PowerScriptClass->GetFullName()); }
		else { strcpy(powerscript_name, "NULL"); }

		if (displayMode == 2 && !IsPlayer(xpow->MyPawn))continue;
		if (displayMode == 3 && !IsHench(xpow->MyPawn))continue;


		coold[0] = xpow->CooldownTime.X;
		coold[1] = xpow->CooldownTime.Y;
		//coolg[0] = xpow->GlobalCooldownTime.X;
		//coolg[1] = xpow->GlobalCooldownTime.Y;
		coolb = xpow->DynamicCooldownBonus;
		cools = (float)xpow->UsesSharedCooldown;
		coolr = xpow->GetCooldownRemaining();
		xrank = xpow->Rank;

		if (coolr > 0.0) { r = 0; g = 255; b = 0; }
		else { r = 200; g = 255; b = 225; }

		const wstring msg = s2ws(string_format("[%d][%d][%-10s] %-30s (%.0f) %-40s  [%p][%p] %-90s    cooldown %.0f [%5.2f %5.2f] x%5.2f  -->  %5.2f", p_info[i].iOwner, p_info[i].CBL, p_info[i].ptype, pawn_name, xrank, power_name, xpow->OldPower,xpow->PowerScriptClass, powerscript_name, cools, coold[0], coold[1], coolb, coolr));
		RenderTextSLH(msg, xx * 5.0f, yy * 12.0f, r, g, b, alpha, hud->Canvas);
		yy++;
	}
	return yy;
}


int display_BioPowers(TArray<UBioPower*> BioPow, int yIndex, ABioHUD* hud, int displayMode)
{
	unsigned char r = 0;
	unsigned char g = 255;
	unsigned char b = 0;
	float alpha = 1.0;
	int xx = 1;
	int yy = yIndex;

	yy++;
	RenderTextSLH(s2ws(string_format("----- BioPowers: %5d -----", BioPow.Count)), xx * 5.0f, yy * 12.0f, r, g, b, alpha, hud->Canvas);
	yy += 2;


	char outer_name[500], biopower_name[500], powerscript_name[500];
	// char pawn_name[200], biopower_name[200], powerscript_name[200];
	// float coold[2], coolg[2], coolb, cools, coolr;
	
	for (int i = 0; i < BioPow.Count; i++)
	{
		auto xpow = BioPow.Data[i];

		strcpy(biopower_name, xpow->GetName());
		strcpy(outer_name, "NULL");
		if (xpow->Outer != nullptr) { strcpy(outer_name, xpow->Outer->GetName()); }
		else { strcpy(outer_name, "NULL"); }
		strcpy(powerscript_name, "NULL");
		if (xpow->Script != nullptr) { strcpy(powerscript_name, xpow->Script->GetFullName()); }
		else { strcpy(powerscript_name, "NULL"); }

		if (displayMode == 2 && !IsPlayer(xpow->Outer))continue;
		if (displayMode == 3 && !IsHench(xpow->Outer))continue;

		r = 200; g = 255; b = 225; 
		const wstring msg = s2ws(string_format("%-40s [%p] %-20s  [%p] %-90s   ", outer_name, xpow, biopower_name, xpow->Script, powerscript_name));
		RenderTextSLH(msg, xx * 5.0f, yy * 12.0f, r, g, b, alpha, hud->Canvas);
		yy++;
	}
	return yy;
}


int display_BioPowerScripts(TArray<UBioPowerScript*> BioPSc, int yIndex, ABioHUD* hud, int displayMode)
{
	unsigned char r = 0;
	unsigned char g = 255;
	unsigned char b = 0;
	float alpha = 1.0;
	int xx = 1;
	int yy = yIndex;

	yy++;
	RenderTextSLH(s2ws(string_format("----- BioPowerScripts: %5d -----", BioPSc.Count)), xx * 5.0f, yy * 12.0f, r, g, b, alpha, hud->Canvas);
	yy += 2;


	char powerscript_name[500];
	// char pawn_name[200], biopower_name[200], powerscript_name[200];
	// float coold[2], coolg[2], coolb, cools, coolr;

	for (int i = 0; i < BioPSc.Count; i++)
	{
		auto xpow = BioPSc.Data[i];

		strcpy(powerscript_name, xpow->GetFullName());

		r = 200; g = 255; b = 225;
		const wstring msg = s2ws(string_format("%-90s   ", powerscript_name));
		RenderTextSLH(msg, xx * 5.0f, yy * 12.0f, r, g, b, alpha, hud->Canvas);
		yy++;
	}
	return yy;
}
