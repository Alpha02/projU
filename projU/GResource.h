#pragma once
#include "gobj.h"
#include <list>
class GResource:
	public GObj
{
public:
	char * url;
	bool loaded;
	GResource(void);
	~GResource(void);
};

