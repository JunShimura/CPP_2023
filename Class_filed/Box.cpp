#include"Box.h"	// Box�̃v���g�^�C�v

Box::Box(float width, float height, float depth)
{
	this->width = width;
	this->height = height;
	this->depth = depth;
}
//�\�ʐς��擾���郁�\�b�hGetSurface���݂�
float Box::GetSurface()
{
	//�v�Z����
	return (width * height + depth * height + width * depth) * 2; //�\�ʐς��v�Z���Ԃ� 
}
//�̐ς��擾���郁�\�b�hGetVolume���݂�
float Box::GetVolume()
{
	return width * height * depth;   //�̐ς��v�Z���Ԃ�
}