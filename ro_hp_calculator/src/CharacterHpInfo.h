#ifndef _CHARACTER_HP_INFO_H_
#define _CHARACTER_HP_INFO_H_

#include <vector>

namespace rco {

enum CharacterJob
{
    kNoneJob = 0,
    kRuneKnight = 1,
    kWarlock = 2,
    kArchBishop = 3,
    kGuillotineCross = 4,
    kMechanic = 5,
    kRanger = 6,
    kRoyalGuard = 7,
    kSorcerer = 8,
    kSura = 9,
    kShadowChaser = 10,
    kGenetic = 11,
    kMinstrel = 12,
    kWanderer = 13
};

class CharacterHpInfo
{
public:
    CharacterHpInfo();

    const int GetCharacter175BasicHp(CharacterJob character_job) const;

private:
    std::vector<int> Character175BasicHp;
};

} // end of namespace "rco"

#endif // end of "_CHARACTER_HP_INFO_H_"
