#include "ro_hp_calculator.h"

#include "CharacterHpInfo.h"

rco::RoHpCalculator::RoHpCalculator()
{
}

const int rco::RoHpCalculator::CalculateMaxHp(CharacterJob character_job, int vit, int mhp_percentage, int extra_mhp)
{
    // TODO: MHP計算公式：[ 基礎血量  *（1+ VIT /100）+ HP直接增加值 ]  *（1+ MHP%增加裝備）
    double vit_part = 1.0 + (vit / 100.0);
    double mhp_part = 1.0 + (mhp_percentage / 100.0);
    const int result_max_hp = static_cast<int>((static_cast<int>(character_hp_info_.GetCharacter175BasicHp(character_job) * vit_part) + extra_mhp) * mhp_part);
    return result_max_hp;
}
