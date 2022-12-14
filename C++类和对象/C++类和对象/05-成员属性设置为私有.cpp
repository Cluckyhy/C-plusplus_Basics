#include <iostream>
using namespace std;
#include <string>

//成员属性设置为私有
//1、可以自己控制读写权限
//2、对于写可以检测数据的有效性

//设计人类
class Person05 {
private:
	//姓名  //可读可写
	string m_Name;
	//年龄  //可读可写
	int m_Age;
	//情人  //只写
	string m_Lover;

public:
	//设置姓名：
	void setName(string name) {
		m_Name = name;
	}
	//获取姓名：
	string getName() {
		return m_Name;
	}
	//获取年龄：  可读可写 如果想修改（年龄的范围必须是0~150之间）
	int getAge() {
		//m_Age = 0;
		return m_Age;
	}
	//设置年龄：
	void setAge(int age) {
		if (age < 0 || age>150) {
			m_Age = 0;
			cout << "你这个老妖精！" << endl;
			return;
		}
		m_Age = age;
	}
	
	//设置情人：  只写
	void setLover(string lover) {
		m_Lover = lover;
	}
};

int main05() {

	Person05 p1;
	//p1.m_Name = "张三";
	p1.setName("张三");
	cout << "姓名为： " << p1.getName() << endl;
	p1.setAge(1000);
	cout << "年龄为： " << p1.getAge() << endl;
	//设置情人
	p1.setLover("huahua");
	//cout << "情人" << p1.getLover() << endl;  数据是不可以访问的

	getchar();
	return 0;
}