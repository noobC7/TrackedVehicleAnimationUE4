// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include"ImageUtils.h"
#include "RenderTargetOperation.generated.h"

/**
 * 
 */
UCLASS()
class MMT_CONTENT_API URenderTargetOperation : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "SaveRenderTargetToFile", Keywords = "SaveRenderTargetToFile"), Category = "SaveToFile")
		static TArray<uint8> ExportRenderTargetToBP(UTextureRenderTarget2D* rt);
};
