#pragma once
#include "..\utils.h"
#include"../AIFighter.h"

// 0x81C3FA9 - makedrone

struct AIDroneInfo {
    unsigned char ScriptID;
    unsigned char Level;
    char pad[78];
};

class AIDrone {
public:
    int GetDroneLevel();
    void Set(AIFighter::IDs scriptEnum);
};

class PlayerInfo {
public:
    void AdjustMeter(float value);
    void SetMeter(float value);
    void SetDamageMult(float value);
    AIDrone* GetDrone();
};
