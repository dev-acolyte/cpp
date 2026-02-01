#include<iostream>
#include<string>
#include<vector>
using namespace std;


//自定义类型
class Person
{
public:
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
public:
	string m_Name;
	int m_Age;
};
//存放对象
void test01()
{
	
	vector<Person> v;
	
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);
	
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	
	for(vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout<< "Name: " << (*it).m_Name << " Age: " << (*it).m_Age << endl;
	}
}
//存放对象指针
void test02()
{
	
	vector<Person*> v;
	
	//创建数据
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);
	
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);
	
	for(vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout<< "Name: " << (*it)->m_Name << " Age: " << (*it)->m_Age << endl;
	}
}
int main()
{
	
	test01();
	
	cout<<"-------------------------------"<<endl;
	
	test02();
	
	return 0;
}
