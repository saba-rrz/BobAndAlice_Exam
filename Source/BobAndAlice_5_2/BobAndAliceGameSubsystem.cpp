#include "BobAndAliceGameSubsystem.h"

void
UBobAndAliceGameSubsystem::Initialize (FSubsystemCollectionBase &Collection)
{
	Super::Initialize (Collection);
	UBobAndAliceGameSubsystem::RemainingTime = 45.0f;
}

void
UBobAndAliceGameSubsystem::Deinitialize ()
{
	Super::Deinitialize ();
}

void
UBobAndAliceGameSubsystem::SetData (float currentRemainingTime,
                                    bool currentIsPackageDelivered,
                                    bool currentIsPackageCollected)
{
	UBobAndAliceGameSubsystem::RemainingTime = currentRemainingTime;
	UBobAndAliceGameSubsystem::isDeliveredPackage = currentIsPackageDelivered;
	UBobAndAliceGameSubsystem::isCollectedPackage = currentIsPackageCollected;
}