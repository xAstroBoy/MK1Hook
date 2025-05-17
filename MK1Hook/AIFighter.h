#pragma once
#include <cstdint>
#include <string>
#include <array>

class AIFighter {
public:
    enum class IDs : uint8_t {
        None = 0,
        ButtonMasher = 1,
        Placeholder2 = 2,
        Placeholder3 = 3,
        Normal = 4,
        Dummy = 5,
        Verifier = 6,
        Placeholder7 = 7,
        Fighter = 8,
        Placeholder9 = 9,
        Placeholder10 = 10,
        Placeholder11 = 11,
		Placeholder12 = 12,
        Placeholder13 = 13,
		Placeholder14 = 14,
		Placeholder15 = 15,
		Placeholder16 = 16,
		Placeholder17 = 17,
		Placeholder18 = 18,
		Placeholder19 = 19,
		Placeholder20 = 20
    };

    struct FighterInfo {
        IDs id;
        int numericId;
        const char* name;
    };

    // Declaration of fighters array
    static const std::array<FighterInfo, 21> fighters;

    // Declaration of count constant
    static const size_t kCount;

    static size_t Count() noexcept;
    static int ToID(IDs mode) noexcept;
    static const char* ToString(IDs mode) noexcept;
    static IDs FromString(const char* s) noexcept;
    static IDs FromID(int id) noexcept;
    static const char* IDToString(int id);
};