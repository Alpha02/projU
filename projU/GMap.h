#pragma once
#include "gresource.h"
#include "GLayer.h"
class GMap :
	public GResource
{
public:
	list<GLayer*> layers;
//	uint width,height;
	GMap(void);
	~GMap(void);
	void addLayer(GLayer * new_layer);
	void removeLayer(GLayer * target_layer);
	GLayer * getLayer(uchar depth);
	void removeLayer(uchar depth);
	gbVector2d<uint> size;
};

