#pragma once
#include "gobj.h"
class GListener :
	public GObj
{
public:
	GListener(void);
	~GListener(void);
	void onKey(void);
	void onKeyUp(void);
	void onKeyDown(void);
	void onMouseMove(int mx, int my);
	void onLeftButton(void);
	void onLeftButtonDown(void);
	void onLeftButtonUp(void);
	void onRightButton(void);
	void onRightButtonDown(void);
	void onRightButtonUp(void);
	void onStep(void);
	void onBeforeStep(void);
	void onAfterStep(void);
	void onDraw(void);
	void onTimer(uint index);
};

