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
        FString("Ôö¼ÓÎïÀíÉËº¦"));

    GameplayTags.Attributes_Primary_Intelligence = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Primary.Intelligence"),
        FString("Ôö¼ÓÄ§·¨ÉËº¦"));

    GameplayTags.Attributes_Primary_Resilience = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Primary.Resilience"),
        FString("Ôö¼Ó»¤¼×¸ú»¤¼×´©Í¸Á¦"));

    GameplayTags.Attributes_Primary_Vigor = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Primary.Vigor"),
        FString("Ôö¼ÓÉúÃüÖµ"));

    /*
    *Secondary
    */
    GameplayTags.Attributes_Secondary_Armor = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Secondary.Armor"),
        FString("¼õÉÙÊÕµ½µÄÉËº¦£¬Ìá¸ß¸ñµ²¼¸ÂÊ"));

    GameplayTags.Attributes_Secondary_ArmorPenetration = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Secondary.ArmorPenetration"),
        FString("ºöÂÔ»¤¼×,±©»÷¼¸ÂÊÉÏÉý"));

    GameplayTags.Attributes_Secondary_BlockChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Secondary.BlockChance"),
        FString("¸ñµ²£¬¼õÉÙÒ»°ë¼´½«µ½À´µÄÉËº¦"));

    GameplayTags.Attributes_Secondary_CriticalHitChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Secondary.CriticalHitChance"),
        FString("±©»÷£¬Ë«±¶¹¥»÷ÉËº¦µÄ´¥·¢¼¸ÂÊ"));

    GameplayTags.Attributes_Secondary_CriticalHitDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Secondary.CriticalHitDamage"),
        FString("±©»÷ÉËº¦£¬±©»÷Ê±µÄ±©»÷ÉËº¦"));

    GameplayTags.Attributes_Secondary_CriticalHitResistance = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Secondary.CriticalHitResistance"),
        FString("±©»÷¿¹ÐÔ£¬¼õÉÙ±©»÷µÄÉËº¦"));

    GameplayTags.Attributes_Secondary_HealthRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Secondary.HealthRegeneration"),
        FString("»ØÑª£¬Ã¿Ãë»ØÑªµÄÊýÖµ"));

    GameplayTags.Attributes_Secondary_ManaRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Secondary.ManaRegeneration"),
        FString("»ØÀ¶£¬Ã¿Ãë»ØÀ¶µÄÊýÖµ"));

    GameplayTags.Attributes_Secondary_MaxHealth = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Secondary.MaxHealth"),
        FString("×î´óÉúÃüÖµ"));

    GameplayTags.Attributes_Secondary_MaxMana = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Secondary.MaxMana"),
        FString("×î´ó·¨Á¦Öµ"));

    /*
     * Input Tags
     */

    GameplayTags.InputTag_LMB = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("InputTag.LMB"),
        FString("Input Tag for Left Mouse Button")
    );
    GameplayTags.InputTag_RMB = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("InputTag.RMB"),
        FString("Input Tag for Right Mouse Button")
    );
    GameplayTags.InputTag_1 = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("InputTag.1"),
        FString("Input Tag for 1 key")
    );
    GameplayTags.InputTag_2 = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("InputTag.2"),
        FString("Input Tag for 2 key")
    );
    GameplayTags.InputTag_3 = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("InputTag.3"),
        FString("Input Tag for 3 key")
    );
    GameplayTags.InputTag_4 = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("InputTag.4"),
        FString("Input Tag for 4 key")
    );

    GameplayTags.Damage = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Damage"),
        FString("ÉËº¦")
    );

    /*
	* Damage Types
    */
    GameplayTags.Damage_Fire = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Damage.Fire"),
        FString("火焰伤害类型")
    );
    GameplayTags.Damage_Lighting = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Damage.Lighting"),
        FString("雷电伤害类型")
    );
    GameplayTags.Damage_Arcane = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Damage.Arcane"),
        FString("神秘伤害类型")
    );
    GameplayTags.Damage_Physical = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Damage.Physical"),
        FString("物理伤害类型")
    );
    /*
    * Resistances
    */
    GameplayTags.Attributes_Resistance_Fire = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Resistance.Fire"),
        FString("抵抗火焰伤害类型")
    );
    GameplayTags.Attributes_Resistance_Lighting = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Resistance.Lighting"),
        FString("抵抗雷电伤害类型")
    );
    GameplayTags.Attributes_Resistance_Arcane = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Resistance.Arcane"),
        FString("抵抗神秘伤害类型")
    );
    GameplayTags.Attributes_Resistance_Physical = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Attributes.Resistance.Physical"),
        FString("抵抗物理伤害类型")
    );

    /*
	* Map of Damage Types to Resistances
    */
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Fire, GameplayTags.Attributes_Resistance_Fire);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Lighting, GameplayTags.Attributes_Resistance_Lighting);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Arcane, GameplayTags.Attributes_Resistance_Arcane);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Physical, GameplayTags.Attributes_Resistance_Physical);

    /*
	* Effects Tags
    */


    GameplayTags.Effects_HitReact = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Effects.HitReact"),
        FString("¹¥»÷ÃüÖÐ±êÇ©")
    );


    /*
    * Abilities
    */

    GameplayTags.Effects_HitReact = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("Abilities.Attack"),
        FString("伤害 能力 Tag")
    );
}
