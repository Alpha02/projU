#pragma once
#include "gresource.h"
#include "GAnimation.h"
class GTile :
	public GResource
{
public:
	GTile(void);
	~GTile(void);
	GAnimation *src_imgs;
	uint image_start_index;
	uint image_speed;
	gbRect cutRect;
};

