﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "BobAndAliceGameSubsystem.generated.h"

UCLASS()
class BOBANDALICE_5_2_API UBobAndAliceGameSubsystem : public UGameInstanceSubsystem
{
  GENERATED_BODY()

public:
  virtual void Initialize(FSubsystemCollectionBase &Collection) override;

  virtual void Deinitialize() override;


  UPROPERTY (EditAnywhere, BlueprintReadWrite, Category = "Variables")
  float RemainingTime;

  UPROPERTY (EditAnywhere, BlueprintReadWrite, Category = "Variables")
  bool isDeliveredPackage;

  UPROPERTY (EditAnywhere, BlueprintReadWrite, Category = "Variables")
  bool isCollectedPackage;

  UFUNCTION (BlueprintCallable, Category = "Variables")
  void SetData (float currentRemainingTime, bool currentIsPackageDelivered,
	             bool currentIsPackageCollected);
};
