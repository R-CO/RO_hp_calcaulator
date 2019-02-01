#include "ro_hp_calculator.h"

#include "CharacterHpInfo.h"

rco::RoHpCalculator::RoHpCalculator()
{
}

const int rco::RoHpCalculator::CalculateMaxHp(CharacterJob character_job, int vit, int mhp_percentage, int extra_mhp)
{
    // TODO: MHP�p�⤽���G[ ��¦��q  *�]1+ VIT /100�^+ HP�����W�[�� ]  *�]1+ MHP%�W�[�˳ơ^
    double vit_part = 1.0 + (static_cast<double>(vit) / 100.0);
    double mhp_part = 1.0 + (static_cast<double>(mhp_percentage) / 100.0);
    const int kResultMaxhp = static_cast<int>((static_cast<int>(character_hp_info_.GetCharacter175BasicHp(character_job) * vit_part) + extra_mhp) * mhp_part);
    return kResultMaxhp;
}
