#pragma once
#include "gobj.h"
class GView :
	public GObj
{
public:
	GView(void);
	~GView(void);
//	gbPoint point_screen_left_top;
//	gbRect ScreenArea;
	gbRect room_area;
	gbRect screen_area;
};

