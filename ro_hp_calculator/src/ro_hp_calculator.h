#ifndef _RO_HP_CALCULATOR_H_
#define _RO_HP_CALCULATOR_H_

#include "CharacterHpInfo.h"

namespace rco {

class RoHpCalculator
{
public:
    RoHpCalculator();

    const int CalculateMaxHp(CharacterJob character_job, int vit = 0, int mhp_percentage = 0, int extra_mhp = 0);

private:
    // these seems not required
    /*CharacterJob character_job_;
    int vit_;
    int mhp_percentage_;
    int extra_mhp_;*/

    CharacterHpInfo character_hp_info_;
}; // end of class RoHPCalculator

}; // end of namespcae "rco"

#endif
