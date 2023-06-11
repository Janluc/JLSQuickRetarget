// Fill out your copyright notice in the Description page of Project Settings.


#include "JLSRigActionUtility.h"
#include "EditorUtilityLibrary.h"
#include "IKRigDefinition.h"
#include "Framework/Notifications/NotificationManager.h"
#include "RigEditor/IKRigController.h"
#include "Widgets/Notifications/SNotificationList.h"

UClass* UJLSRigActionUtility::GetSupportedClass_Implementation()
{
	return UIKRigDefinition::StaticClass();
}

void UJLSRigActionUtility::FingersRetargetChains(UIKRigController* IKRigController)
{
	IKRigController->AddRetargetChain(TEXT("LeftIndex"), TEXT("index_01_l"), TEXT("index_03_l"));
	IKRigController->AddRetargetChain(TEXT("LeftMiddle"), TEXT("middle_01_l"), TEXT("middle_03_l"));
	IKRigController->AddRetargetChain(TEXT("LeftRing"), TEXT("ring_01_l"), TEXT("ring_03_l"));
	IKRigController->AddRetargetChain(TEXT("LeftPinky"), TEXT("pinky_01_l"), TEXT("pinky_03_l"));
	IKRigController->AddRetargetChain(TEXT("LeftThumb"), TEXT("thumb_01_l"), TEXT("thumb_03_l"));

	IKRigController->AddRetargetChain(TEXT("RightIndex"), TEXT("index_01_r"), TEXT("index_03_r"));
	IKRigController->AddRetargetChain(TEXT("RightMiddle"), TEXT("middle_01_r"), TEXT("middle_03_r"));
	IKRigController->AddRetargetChain(TEXT("RightRing"), TEXT("ring_01_r"), TEXT("ring_03_r"));
	IKRigController->AddRetargetChain(TEXT("RightPinky"), TEXT("pinky_01_r"), TEXT("pinky_03_r"));
	IKRigController->AddRetargetChain(TEXT("RightThumb"), TEXT("thumb_01_r"), TEXT("thumb_03_r"));
}

void UJLSRigActionUtility::ArmsTwistChains(UIKRigController* IKRigController)
{
	IKRigController->AddRetargetChain(TEXT("LeftLowerArmTwist01"), TEXT("lowerarm_twist_01_l"), TEXT("lowerarm_twist_01_l"));
	IKRigController->AddRetargetChain(TEXT("LeftLowerArmTwist02"), TEXT("lowerarm_twist_02_l"), TEXT("lowerarm_twist_02_l"));

	IKRigController->AddRetargetChain(TEXT("LeftUpperArmTwist01"), TEXT("upperarm_twist_01_l"), TEXT("upperarm_twist_01_l"));
	IKRigController->AddRetargetChain(TEXT("LeftUpperArmTwist02"), TEXT("upperarm_twist_02_l"), TEXT("upperarm_twist_02_l"));

	IKRigController->AddRetargetChain(TEXT("RightLowerArmTwist01"), TEXT("lowerarm_twist_01_r"), TEXT("lowerarm_twist_01_r"));
	IKRigController->AddRetargetChain(TEXT("RightLowerArmTwist02"), TEXT("lowerarm_twist_02_r"), TEXT("lowerarm_twist_02_r"));

	IKRigController->AddRetargetChain(TEXT("RightUpperArmTwist01"), TEXT("upperarm_twist_01_r"), TEXT("upperarm_twist_01_r"));
	IKRigController->AddRetargetChain(TEXT("RightUpperArmTwist02"), TEXT("upperarm_twist_02_r"), TEXT("upperarm_twist_02_r"));
}

void UJLSRigActionUtility::LegsTwistChains(UIKRigController* IKRigController)
{
	IKRigController->AddRetargetChain(TEXT("LeftThighTwist01"), TEXT("thigh_twist_01_l"), TEXT("thigh_twist_01_l"));
	IKRigController->AddRetargetChain(TEXT("LeftThighTwist02"), TEXT("thigh_twist_02_l"), TEXT("thigh_twist_02_l"));

	IKRigController->AddRetargetChain(TEXT("RightThighTwist01"), TEXT("lowerarm_twist_01_r"), TEXT("lowerarm_twist_01_r"));
	IKRigController->AddRetargetChain(TEXT("RightThighTwist02"), TEXT("lowerarm_twist_02_r"), TEXT("lowerarm_twist_02_r"));
		
	IKRigController->AddRetargetChain(TEXT("LeftCalfTwist01"), TEXT("calf_twist_01_l"), TEXT("calf_twist_01_l"));
	IKRigController->AddRetargetChain(TEXT("LeftCalfTwist02"), TEXT("calf_twist_02_l"), TEXT("calf_twist_02_l"));
		
	IKRigController->AddRetargetChain(TEXT("RightCalfTwist01"), TEXT("calf_twist_01_r"), TEXT("calf_twist_01_r"));
	IKRigController->AddRetargetChain(TEXT("RightCalfTwist02"), TEXT("calf_twist_02_r"), TEXT("calf_twist_02_r"));
}

void UJLSRigActionUtility::BaseBodyChains(UIKRigController* IKRigController)
{
	IKRigController->AddRetargetChain(TEXT("Root"), TEXT("root"), TEXT("root"));
	IKRigController->AddRetargetChain(TEXT("Spine"), TEXT("spine_01"), TEXT("spine_03"));
	IKRigController->AddRetargetChain(TEXT("Head"), TEXT("neck_01"), TEXT("head"));
	IKRigController->AddRetargetChain(TEXT("LeftArm"), TEXT("clavicle_l"), TEXT("hand_l"));
	IKRigController->AddRetargetChain(TEXT("RightArm"), TEXT("clavicle_r"), TEXT("hand_r"));
	IKRigController->AddRetargetChain(TEXT("LeftLeg"), TEXT("thigh_l"), TEXT("ball_l"));
	IKRigController->AddRetargetChain(TEXT("RightLeg"), TEXT("thigh_r"), TEXT("ball_r"));
}

void UJLSRigActionUtility::IKChains(UIKRigController* IKRigController)
{
	IKRigController->AddRetargetChain(TEXT("LeftFootIK"), TEXT("ik_foot_l"), TEXT("ik_foot_l"));
	IKRigController->AddRetargetChain(TEXT("RightFootIK"), TEXT("ik_foot_r"), TEXT("ik_foot_r"));

	IKRigController->AddRetargetChain(TEXT("LeftHandIK"), TEXT("ik_hand_l"), TEXT("ik_hand_l"));
	IKRigController->AddRetargetChain(TEXT("RightHandIK"), TEXT("ik_hand_r"), TEXT("ik_hand_r"));

	IKRigController->AddRetargetChain(TEXT("FootRootIK"), TEXT("ik_foot_root"), TEXT("ik_foot_root"));
	IKRigController->AddRetargetChain(TEXT("HandRootIK"), TEXT("ik_hand_root"), TEXT("ik_hand_root"));
}

void UJLSRigActionUtility::ClavicleChains(UIKRigController* IKRigController)
{
	IKRigController->AddRetargetChain(TEXT("LeftClavicle"), TEXT("clavicle_l"), TEXT("clavicle_l"));
	IKRigController->AddRetargetChain(TEXT("RightClavicle"), TEXT("clavicle_r"), TEXT("clavicle_r"));
}

void UJLSRigActionUtility::SendNotification(FString Message, float Duration)
{
	
	FNotificationInfo Info= FText::AsCultureInvariant(Message);
	Info.ExpireDuration = Duration;
	FSlateNotificationManager::Get().AddNotification(Info);
}

void UJLSRigActionUtility::QuickSetRetargetChains()
{
	TArray<UObject*> SelectedObjects = UEditorUtilityLibrary::GetSelectedAssets();
	TArray<UObject*> UnusedObjects = TArray<UObject*>();
	
	if (SelectedObjects[0])
	{
		UIKRigDefinition* IKRig = Cast<UIKRigDefinition>(SelectedObjects[0]);
		if (!IKRig)
		{
			SendNotification("Not an IKRig", 3.f);
			return;
		}
		UIKRigController* IKRigController = UIKRigController::GetIKRigController(IKRig);

		IKRigController->SetRetargetRoot("pelvis");

		BaseBodyChains(IKRigController);

		FingersRetargetChains(IKRigController);

		ArmsTwistChains(IKRigController);
		
		LegsTwistChains(IKRigController);

		ClavicleChains(IKRigController);

		IKChains(IKRigController);


		SendNotification("Retarget Chains set!", 3.f);
		
	}
	else
	{
		SendNotification("Failed", 3.f);
	}
}
