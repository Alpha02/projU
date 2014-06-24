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

	// ���ز��ȣ�����ͼ��ȣ�
	uint getWidth(void);
	// ���ز�߶ȣ�����ͼ�߶ȣ�
	uint getHeight(void);
	GTile **tiles;
	bool visible;
};

