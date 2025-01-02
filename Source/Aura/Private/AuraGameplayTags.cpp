// CopyRight OVOAOVO

#include "AuraGameplayTags.h"
#include "GameplayTagsManager.h"

FAuraGameplayTags FAuraGameplayTags::GameplayTags;

void FAuraGameplayTags::InitializeNativeGameplayTags()
{
    /*
    *Primary
    */
    GameplayTags.Attributes_Primary_Strength = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Primary.Strength"),
        FString("增加物理伤害"));

    GameplayTags.Attributes_Primary_Intelligence = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Primary.Intelligence"),
        FString("增加魔法伤害"));

    GameplayTags.Attributes_Primary_Resilience = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Primary.Resilience"),
        FString("增加护甲跟护甲穿透力"));

    GameplayTags.Attributes_Primary_Vigor = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Primary.Vigor"),
        FString("增加生命值"));

    /*
    *Secondary
    */
    GameplayTags.Attributes_Secondary_Armor = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Secondary.Armor"),
        FString("减少收到的伤害，提高格挡几率"));

    GameplayTags.Attributes_Secondary_ArmorPenetration = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Secondary.ArmorPenetration"),
        FString("忽略护甲,暴击几率上升"));

    GameplayTags.Attributes_Secondary_BlockChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Secondary.BlockChance"),
        FString("格挡，减少一半即将到来的伤害"));

    GameplayTags.Attributes_Secondary_CriticalHitChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Secondary.CriticalHitChance"),
        FString("暴击，双倍攻击伤害的触发几率"));

    GameplayTags.Attributes_Secondary_CriticalHitDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Secondary.CriticalHitDamage"),
        FString("暴击伤害，暴击时的暴击伤害"));

    GameplayTags.Attributes_Secondary_CriticalHitResistance = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Secondary.CriticalHitResistance"),
        FString("暴击抗性，减少暴击的伤害"));

    GameplayTags.Attributes_Secondary_HealthRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Secondary.HealthRegeneration"),
        FString("回血，每秒回血的数值"));

    GameplayTags.Attributes_Secondary_ManaRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Secondary.ManaRegeneration"),
        FString("回蓝，每秒回蓝的数值"));

    GameplayTags.Attributes_Secondary_MaxHealth = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Secondary.MaxHealth"),
        FString("最大生命值"));

    GameplayTags.Attributes_Secondary_MaxMana = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Secondary.MaxMana"),
        FString("最大法力值"));
}
