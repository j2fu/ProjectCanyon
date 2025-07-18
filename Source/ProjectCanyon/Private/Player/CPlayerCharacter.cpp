// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/CPlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

ACPlayerCharacter::ACPlayerCharacter()
{
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Boom"));
	CameraBoom->SetupAttachment(GetRootComponent());

	ViewCam = CreateDefaultSubobject<UCameraComponent>(TEXT("View Cam"));
	ViewCam->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
}
