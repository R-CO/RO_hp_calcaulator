#ifndef _RO_HP_CALCULATOR_H_
#define _RO_HP_CALCULATOR_H_

namespace rco {

class RoHpCalculator
{
public:
    RoHpCalculator(int vit = 1, int mhp_percentage = 0, int extra_mhp = 0);

    

private:
    int vit_;
    int mhp_percentage_;
    int extra_mhp_;

    enum EnumCharcterJob
    {
        kRuneKnight = 0,
        kWarlock,
        kArchBishop,
        kGuillotineCross,
        kMechanic,
        kRanger,
        kRoyalGuard,
        kSorcerer,
        kSura,
        kShadowChaser,
        kGenetic,
        kMinstrel,
        kWanderer
    };

}; // end of class RoHPCalculator

}; // end of namespcae "rco"

#endif
