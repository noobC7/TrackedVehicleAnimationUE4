// Fill out your copyright notice in the Description page of Project Settings.


#include "RenderTargetOperation.h"


#include "Engine/TextureRenderTarget2D.h"
#include "Misc/FileHelper.h"
TArray<uint8> URenderTargetOperation::ExportRenderTargetToBP(UTextureRenderTarget2D* rt)
{
    FTextureRenderTargetResource* rtResource = rt->GameThread_GetRenderTargetResource();
    FReadSurfaceDataFlags readPixelFlags(RCM_UNorm);

    TArray<FColor> outBMP;

    for (FColor& color : outBMP)
    {
        color.A = 255;
    }
    outBMP.AddUninitialized(rt->GetSurfaceWidth() * rt->GetSurfaceHeight());
    rtResource->ReadPixels(outBMP, readPixelFlags);

    FIntPoint destSize(rt->GetSurfaceWidth(), rt->GetSurfaceHeight());
    TArray<uint8> CompressedBitmap;
    FImageUtils::CompressImageArray(destSize.X, destSize.Y, outBMP, CompressedBitmap);

    return CompressedBitmap;
}