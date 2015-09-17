#pragma once 

enum EffectFunctionality 
{
	TRANSFORMATION = 1,
	MATERIAL = TRANSFORMATION << 1,
	ILLUMINATION = MATERIAL << 1,
	SKINNING = ILLUMINATION << 1,
	BUMP_MAPPING = SKINNING << 1,
	
};