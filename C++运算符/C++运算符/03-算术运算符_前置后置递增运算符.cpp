//#include <iostream>
//using namespace std;
//
//int main() {
//
//	//1、前置递增
//	int a = 10;
//	a++;  //让变量+1的操作
//	cout <<"a ="<< a << endl;
//
//	//2、后置递增
//	int b = 10;
//	b++;  //让变量+1操作
//	cout << "b =" << b << endl;  
//
//	//3、前置和后置的区别
//	//前置递增 先让变量+1  然后进行表达式运算
//	int a2 = 10;
//	int b2 = ++a2 * 10;
//	cout << "a2 = " << a2 << "   b2 = " << b2 << endl;
//
//	//后置递增 先进行表达式运算，后让变量加1
//	int a3 = 10;
//	int b3 = a3++ * 10;
//	cout << "a3 =" << a3 << endl;
//	cout << "b3 = " << b3 << endl;
//
//	getchar();
//	return 0;
//}