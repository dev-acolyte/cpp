#include<iostream>
#include<string>
using namespace std;
template<class NameType,class AgeType=int>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		m_Name = name;
		m_Age = age;
	}
	void showPerson()
	{
		cout<<"name: "<<m_Name<<" age: "<<m_Age<<endl;
	}
	NameType m_Name;
    AgeType m_Age;
};
void test01()
{
	//类模板的语法
	//类模板没有自动类型推导
	//Person p("孙悟空",100) 错误
	Person <string,int>p("孙悟空",100);
	p.showPerson();
	//类模板可以有默认参数类型
	Person <string>p1("猪八戒",99);
	p1.showPerson();
}
int main()
{
	test01();
	return 0;
}