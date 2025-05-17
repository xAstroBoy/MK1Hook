#include "PlayerInfo.h"
#include <string>
#include "../AIFighter.h"


void PlayerInfo::AdjustMeter(float value)
{
	static uintptr_t pat = _pattern(PATID_PlayerInfo_AdjustMeter);
	if (pat)
		((void(__fastcall*)(PlayerInfo*, float, bool, bool))pat)(this, value, 1, 0);
}

void PlayerInfo::SetMeter(float value)
{
	// wrapper cuz set meter is either inlined or gone
	AdjustMeter(value);
}

void PlayerInfo::SetDamageMult(float value)
{
	*(float*)((int64)this + 216) = value;
}

AIDrone* PlayerInfo::GetDrone()
{
	static uintptr_t pat = _pattern(PATID_PlayerInfo_GetDrone);
	if (pat)
		return	((AIDrone * (__fastcall*)(PlayerInfo*))pat)(this);
	return nullptr;
}

int AIDrone::GetDroneLevel()
{
	static uintptr_t pat = _pattern(PATID_AIDrone_GetLevel);
	if (pat)
		return	((int(__fastcall*)(AIDrone*))pat)(this);
	return 0;
}


void AIDrone::Set(AIFighter::IDs scriptEnum) {
    static uintptr_t pat = _pattern(PATID_AIDrone_Set);
    if (!pat) return;
    ((void(__fastcall*)(AIDrone*, int))pat)(this, AIFighter::ToID(scriptEnum));
}