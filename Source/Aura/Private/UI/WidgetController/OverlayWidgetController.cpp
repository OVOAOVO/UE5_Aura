// CopyRight OVOAOVO


#include "UI/WidgetController/OverlayWidgetController.h"


void UOverlayWidgetController::BroadcastInitialValues()
{
	const UAuraAttributeSet* AuraAttrubuteSet = CastChecked<UAuraAttributeSet>(AttributeSet);

	OnHealthChanged.Broadcast(AuraAttrubuteSet->GetHealth());
	OnMaxHealthChanged.Broadcast(AuraAttrubuteSet->GetMaxHealth());
}
