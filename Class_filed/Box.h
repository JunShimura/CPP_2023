#pragma once
/// <summary>
/// Box
/// </summary>
class Box {
private:
	float width;    // ��
	float height;   // ����
	float depth;    // ���s

public:
	Box(float width, float height, float depth);
	float GetSurface();
	float GetVolume();
};