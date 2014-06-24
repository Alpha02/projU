#pragma once
#include "gresource.h"
class GImage :
	public GResource
{
public:
	GImage(void);
	~GImage(void);
//	uint width;
//	uint height;
//	gbVector2d size;
	gbVector2d<uint> size;
};

