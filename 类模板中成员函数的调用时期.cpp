#include<iostream>
#include<string>
using namespace std;
class Person1
{
public:
	void showPerson1()
	{
		cout<<"Person1 show"<<endl;
	}
};
class Person2
{
public:
	void showPerson2()
	{
		cout<<"Person2 show"<<endl;
	}
};
template<class T>
class Myclass
{
public:
	 T obj;
	 //类模板中的成员函数，并不是一开始就创建的，而是在模板调用时生成
	 void func1() { obj.showPerson1(); }
	 void func2() { obj.showPerson2(); }
};
void test01()
{
	Myclass<Person1>m;
	m.func1();
//	m.func2();编译时才出错，说明函数调用才会去创建成员函数
}
int main()
{
	test01();
	return 0;
}