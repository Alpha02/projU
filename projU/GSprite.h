#pragma once
#include "gresource.h"
#include "GAnimation.h"
class GSprite :
	public GResource
{
public:
	GSprite(void);
	~GSprite(void);
	GAnimation *animation;
	uint image_index;
	uint image_speed;
//	int x_center;
//	int y_center;
	gbPoint center;
	gbVector2d<float> scale;
};

