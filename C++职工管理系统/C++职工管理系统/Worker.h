#pragma once
#include <iostream>
using namespace std;
#include <string>

//职工抽象类
class Worker {
public:
	//职工编号
	int m_Id;
	//职工姓名
	string m_Name;
	//部门编号
	int m_DeptId;
public:
	//显示个人信息
	virtual void ShowInfo() = 0;
	//获取岗位名称
	virtual string getDeptName() = 0;
};