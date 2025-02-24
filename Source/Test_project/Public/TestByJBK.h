#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TestByJBK.generated.h"

UCLASS()
class TEST_PROJECT_API ATestByJBK : public APawn
{
	GENERATED_BODY()

public:
	ATestByJBK();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
