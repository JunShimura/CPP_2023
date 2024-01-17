#include"Box.h"	// Boxのプロトタイプ

Box::Box(float width, float height, float depth)
{
	this->width = width;
	this->height = height;
	this->depth = depth;
}
//表面積を取得するメソッドGetSurfaceが在る
float Box::GetSurface()
{
	//計算する
	return (width * height + depth * height + width * depth) * 2; //表面積を計算し返す 
}
//体積を取得するメソッドGetVolumeが在る
float Box::GetVolume()
{
	return width * height * depth;   //体積を計算し返す
}