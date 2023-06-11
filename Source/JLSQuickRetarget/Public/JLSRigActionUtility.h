// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetActionUtility.h"
#include "RigEditor/IKRigController.h"
#include "JLSRigActionUtility.generated.h"

/**
 * 
 */
UCLASS()
class JLSQUICKRETARGET_API UJLSRigActionUtility : public UAssetActionUtility
{
	GENERATED_BODY()

	
	UClass* GetSupportedClass_Implementation();
	void FingersRetargetChains(UIKRigController* IKRigController);
	void ArmsTwistChains(UIKRigController* IKRigController);
	void LegsTwistChains(UIKRigController* IKRigController);
	void BaseBodyChains(UIKRigController* IKRigController);
	void IKChains(UIKRigController* IKRigController);
	void ClavicleChains(UIKRigController* IKRigController);
	void SendNotification(FString Message, float Duration);

	UFUNCTION(CallInEditor)
	void QuickSetRetargetChains();
};
