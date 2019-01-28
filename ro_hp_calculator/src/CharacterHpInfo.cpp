#include "CharacterHpInfo.h"

rco::CharacterHpInfo::CharacterHpInfo()
#if __cplusplus > 199711L
    : Character175BasicHp
      {
          0,     // None
          23125, // Rune Knight
          14062, // Warlock
          14543, // Arch Bishop
          21218, // Guillotine Cross
          20781, // Mechanic
          17418, // Ranger
          21725, // Royal Guard
          14793, // Sorcerer
          18106, // Sura
          19775, // Shadow Chaser
          15625, // Genetic
          17412, // Minstrel
          17412  // Wanderer
      }
#endif
{
#if __cplusplus <= 199711L
    Character175BasicHp.push_back(0);     // None
    Character175BasicHp.push_back(23125); // Rune Knight
    Character175BasicHp.push_back(14062); // Warlock
    Character175BasicHp.push_back(14543); // Arch Bishop
    Character175BasicHp.push_back(21218); // Guillotine Cross
    Character175BasicHp.push_back(20781); // Mechanic
    Character175BasicHp.push_back(17418); // Ranger
    Character175BasicHp.push_back(21725); // Royal Guard
    Character175BasicHp.push_back(14793); // Sorcerer
    Character175BasicHp.push_back(18106); // Sura
    Character175BasicHp.push_back(19775); // Shadow Chaser
    Character175BasicHp.push_back(15625); // Genetic
    Character175BasicHp.push_back(17412); // Minstrel
    Character175BasicHp.push_back(17412); // Wanderer
#endif 
}

const int rco::CharacterHpInfo::GetCharacter175BasicHp(CharacterJob character_job) const
{
    return Character175BasicHp[character_job];
}
