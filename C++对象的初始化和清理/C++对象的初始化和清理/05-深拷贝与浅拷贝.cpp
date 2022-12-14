//#include <iostream>
//using namespace std;
//
////深拷贝与浅拷贝
////如果有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题
//
//class Person {
//public:
//	Person() {
//		cout << "Person 的默认构造函数调用" << endl;
//	}
//	Person(int age,int height) {
//		cout << "Person 的有参构造函数调用" << endl;
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "地址1为：" << m_Height << endl;
//	}
//	
//	//自己实现拷贝构造函数，解决浅拷贝带来的问题
//	Person(const Person& p) {
//		cout << "Person 拷贝构造函数的调用" << endl;
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height;  //编译器默认实现就是这行代码
//		//深拷贝操作
//		m_Height = new int(*p.m_Height);
//		cout << "地址2为：" << m_Height << endl;
//
//	}
//	
//	~Person() {
//		//析构代码，将堆区开辟的数据做释放操作
//		if (m_Height != NULL) {
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person 的析构函数调用" << endl;	
//	}
//	int m_Age;  //年龄
//	int* m_Height;  //身高
//};
//
//void test01() {
//	Person p1(18,160);
//	cout << "p1的年龄为：" << p1.m_Age << "身高为：" << *p1.m_Height << endl;
//
//	Person p2(p1);
//	cout << "p2的年龄为：" << p2.m_Age << "身高为：" << *p1.m_Height << endl;
//}
//
//
//int main() {
//
//	test01();
//	getchar();
//	return 0;
//}