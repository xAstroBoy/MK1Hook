#include "AIFighter.h"
#include "AIFighter.h"

const std::array<AIFighter::FighterInfo, 21> AIFighter::fighters = { {
    {AIFighter::IDs::None,          0, "None"},
    {AIFighter::IDs::ButtonMasher,   1, "ButtonMasher"},
    {AIFighter::IDs::Placeholder2,   2, "Placeholder2"},
    {AIFighter::IDs::Placeholder3,   3, "Placeholder3"},
    {AIFighter::IDs::Normal,         4, "Normal"},
    {AIFighter::IDs::Dummy,          5, "Dummy"},
    {AIFighter::IDs::Verifier,       6, "Verifier"},
    {AIFighter::IDs::Placeholder7,   7, "Placeholder7"},
    {AIFighter::IDs::Fighter,        8, "Fighter"},
    {AIFighter::IDs::Placeholder9,   9, "Placeholder9"},
    {AIFighter::IDs::Placeholder10, 10, "Placeholder10"},
	{AIFighter::IDs::Placeholder11, 11, "Placeholder11"},
    {AIFighter::IDs::Placeholder12, 12, "Placeholder12"},
	{AIFighter::IDs::Placeholder13, 13, "Placeholder13"},
    {AIFighter::IDs::Placeholder14, 14, "Placeholder14"},
    {AIFighter::IDs::Placeholder15, 15, "Placeholder15"},
    {AIFighter::IDs::Placeholder16, 16, "Placeholder16"},
    {AIFighter::IDs::Placeholder17, 17, "Placeholder17"},
    {AIFighter::IDs::Placeholder18, 18, "Placeholder18"},
    {AIFighter::IDs::Placeholder19, 19, "Placeholder19"},
    {AIFighter::IDs::Placeholder20, 20, "Placeholder20"},


} };

const size_t AIFighter::kCount = AIFighter::fighters.size();

size_t AIFighter::Count() noexcept {
    return kCount;
}

int AIFighter::ToID(IDs mode) noexcept {
    return fighters[static_cast<size_t>(mode)].numericId;
}

const char* AIFighter::ToString(IDs mode) noexcept {
    return fighters[static_cast<size_t>(mode)].name;
}

AIFighter::IDs AIFighter::FromString(const char* s) noexcept {
    if (!s) return IDs::None;

    std::string str(s);
    auto pos = str.rfind(".mko");
    if (pos != std::string::npos) str.resize(pos);

    for (const auto& fighter : fighters) {
        if (str == fighter.name) {
            return fighter.id;
        }
    }
    return IDs::None;
}

AIFighter::IDs AIFighter::FromID(int id) noexcept {
    for (const auto& fighter : fighters) {
        if (fighter.numericId == id) {
            return fighter.id;
        }
    }
    return IDs::None;
}

const char* AIFighter::IDToString(int id) {
    return ToString(FromID(id));
}