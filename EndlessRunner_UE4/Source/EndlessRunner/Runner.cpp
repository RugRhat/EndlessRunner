// Fill out your copyright notice in the Description page of Project Settings.


#include "Runner.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ARunner::ARunner()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Creates spring arm which controls camera movement.
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);

	// Creates & attaches camera to spring arm.
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void ARunner::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ARunner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddMovementInput(GetActorForwardVector() * Speed);
}

// Called to bind functionality to input
void ARunner::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &ARunner::Dodge);

	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);
}

// void ARunner::Dodge(float AxisValue) 
// {
// 	AddMovementInput(GetActorRightVector() * AxisValue);
// }
