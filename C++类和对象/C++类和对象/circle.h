#pragma once
#include <iostream>
#include "point.h"
using namespace std;

//圆类
class Circle {
private:
	int m_R;  //半径

	//在类中可以让另一个类作为本类的成员
	Point m_Center;  //圆心
public:
	//设置半径
	void setR(int r);
	//获取半径
	int getR();
	//设置圆心
	void setCenter(Point center);
	//获取圆心
	Point getCenter();
};