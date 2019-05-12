#pragma once
#ifndef POINT3D_H
#define POINT3D_H
class point3D
{
	double x, y, z;
public:
	point3D();
	point3D(double x, double y, double z);
	void show();
	~point3D();

};

#endif POINT3D_H