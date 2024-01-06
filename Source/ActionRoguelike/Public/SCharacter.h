// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SCharacter.generated.h"

UCLASS()
class ACTIONROGUELIKE_API ASCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnyWhere)
	class USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnyWhere)
	class UCameraComponent* CameraComp;

	class USInteractionComponent* InteractionComp;

	UPROPERTY(EditAnywhere, Category = "Attack")
	class UAnimMontage* AttackAnim;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class USAttributeComponent* AttributeComp;

	void MoveForward(float Value);
	void MoveRight(float Value);

	void PrimaryAttack();
	void PrimaryAttack_TimeElapsed();
	void SecondaryAttack();
	void SecondaryAttack_TimeElapsed();
	void Dash();
	void Dash_TimeElapsed();
	void PrimaryInteract();
	void SpawnProjectile(TSubclassOf<AActor> Projectile);

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ProjectileClass;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ProjectileBlackHoleClass;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> DashProjectileClass;

	FTimerHandle TimerHandle_PrimaryAttack;
	FTimerHandle TimerHandle_SecondaryAttack;
	FTimerHandle TimerHandle_Dash;

	void OnHealthChanged(AActor* InstigatorActor, USAttributeComponent* OwningComp, float NewHealth, float Delta);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(Exec)
	void HealSelf(float Amount = 100);

};
