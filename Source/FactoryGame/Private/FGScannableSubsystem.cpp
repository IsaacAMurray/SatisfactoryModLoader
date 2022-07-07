// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGScannableSubsystem.h"

AFGScannableSubsystem* AFGScannableSubsystem::Get(UWorld* world){ return nullptr; }
AFGScannableSubsystem* AFGScannableSubsystem::Get(UObject* worldContext){ return nullptr; }
void AFGScannableSubsystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGScannableSubsystem, mUnlootedDropPods);
}
void AFGScannableSubsystem::BeginPlay(){ }
void AFGScannableSubsystem::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGScannableSubsystem::RegisterRadarTower( AFGBuildableRadarTower* radarTower){ }
void AFGScannableSubsystem::UnRegisterRadarTower( AFGBuildableRadarTower* radarTower){ }
void AFGScannableSubsystem::OnLevelPlacedActorDestroyed(AActor* destroyedActor){ }
void AFGScannableSubsystem::OnDropPodLooted( AFGDropPod* dropPod){ }
void AFGScannableSubsystem::OnCreatureSpawnerUpdated( AFGCreatureSpawner* creatureSpawner, bool scannable){ }
void AFGScannableSubsystem::CacheDestroyedActors(){ }
void AFGScannableSubsystem::CacheDropPods(){ }