#pragma once
#include "gresource.h"
#include "GTiles.h"
class GMap;
class GLayer :
	public GResource
{
public:
	uchar depth;
	GMap * mother_map;
	GLayer(void);
	~GLayer(void);

	// 返回层宽度（即地图宽度）
	uint getWidth(void);
	// 返回层高度（即地图高度）
	uint getHeight(void);
	GTile **tiles;
	bool visible;
};

