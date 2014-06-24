#pragma once
#include "gresource.h"
class GRoom :
	public GResource
{
public:

	GRoom(void);
	~GRoom(void);
	gbVector2d<uint> size;
};

