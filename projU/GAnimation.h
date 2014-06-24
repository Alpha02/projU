#pragma once
#include "gresource.h"
#include "GImage.h"
class GAnimation :
	public GResource
{
public:
	GAnimation(void);
	~GAnimation(void);
	GImage *images;
	uint image_number;
//	uint width;
//	uint height;
//	gbVector2int size;
	gbVector2d<uint> size;
};

