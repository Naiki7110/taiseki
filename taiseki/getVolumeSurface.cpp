#pragma once
double getVolumeSurface(double width, double height, double depth, double *surface)
{
	*surface = 2 * (width * height) + 2 * (width * depth) + 2 * (height * depth);
	return width * height * depth;
}