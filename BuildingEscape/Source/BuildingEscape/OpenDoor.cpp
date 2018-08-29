// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"


// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	AActor* Owner = GetOwner();

	FRotator NewRotation = FRotator(0.f, 20.f, 0.f);

	Owner->SetActorRotation(NewRotation);

	FString ObjectName = GetOwner()->GetName(),
		    ObjectRot = GetOwner()->GetTransform().GetRotation().ToString();

	UE_LOG(LogTemp, Warning, TEXT("%s is rotated at %s"), *ObjectName, *ObjectRot)

	// ...
	
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
