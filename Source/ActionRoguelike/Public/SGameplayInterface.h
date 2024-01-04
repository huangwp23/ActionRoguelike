// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SGameplayInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USGameplayInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ACTIONROGUELIKE_API ISGameplayInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	/*
	* 修饰符，这是一种将C++函数交给蓝图的方法，
	* BlueprintCallable只是把函数交给蓝图使得蓝图可以调用
	* 而BlueprintImplementableEvent则是只在C++中声明或者调用函数，而函数的具体实现交给蓝图。
	* BlueprintNativeEvent则可以在C++中实现，只不过要在末尾添加上后缀_Implementation。
	* 而在蓝图中，我们可以选择要不要重写则会个函数
	*/
	UFUNCTION(BlueprintNativeEvent)
	void Interact(APawn* InstigatorPawn);
};
