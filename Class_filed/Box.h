#pragma once
/// <summary>
/// Box
/// </summary>
class Box {
private:
	float width;    // •
	float height;   // ‚‚³
	float depth;    // ‰œs

public:
	Box(float width, float height, float depth);
	float GetSurface();
	float GetVolume();
};