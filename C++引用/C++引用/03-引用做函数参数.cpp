#include <iostream>
using namespace std;

//交换函数

//1、值传递
void mySwap01(int a,int b) {
	int temp = a;
	a = b;
	b = temp;

	cout << "mySwap01-a = " << a << endl;
	cout << "mySwap01-b = " << b << endl;
}

//2、地址传递
void mySwap02(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
//3、引用传递
void mySwap03(int& num1, int& num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main03() {
	int a = 10;
	int b = 20;
	//mySwap01(a, b);   //值传递，形参不会修饰实参
	//mySwap02(&a, &b);   //地址传递，形参会修饰实参
	mySwap03(a, b);    //引用传递，形参也是会修饰实参的
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	getchar();
	return 0;
}