#include "StdAfx.h"
#include "GMap.h"


GMap::GMap(void)
{
}


GMap::~GMap(void)
{
}

void GMap::addLayer(GLayer * new_layer){
	layers.push_front(new_layer);
	new_layer->mother_map=this;
}
void GMap::removeLayer(GLayer * target_layer){
	if(!target_layer)return;
	layers.remove(target_layer);
	target_layer->mother_map=NULL;
}
GLayer * GMap::getLayer(uchar depth){
	list<GLayer*>::iterator i;
	for(i=layers.begin();i!=layers.end();i++){
		if((*i)->depth==depth)return (*i);
	}
	return NULL;
}
void GMap::removeLayer(uchar depth){
	removeLayer(getLayer(depth));
}