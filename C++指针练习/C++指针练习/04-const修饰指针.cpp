#include <iostream>
using namespace std;

int main04() {
	//1、const修饰指针  常量指针
	int a = 10;
	int b = 10;
	//指针指向的值不可以改，指针的指向可以改；
	const int* p = &a;
	//*p = 20; 报错；
	p = &b;  //正确；



	//2、const修饰常量  指针常量
	//指针的指向不可以改，指针指向的值可以改；
	int* const p2 = &a;
	*p2 = 20; //正确；
	//p2 = &b;  报错；



	//3、const修饰指针和常量
	//指针的指向，和指针指向的值都不可以改；
	const int* const p3 = &a;
	//*p3 = 20;  报错
	//p3 = &b;  报错
	getchar();
	return 0;
}