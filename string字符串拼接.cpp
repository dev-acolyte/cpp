#include<iostream>
#include<string>
using namespace std;

/*函数原型
  string& operator+=(const char* str);            重载+=操作符
  string& operator+=(const char c);               重载+=操作符             
  string& operator+=(char string& str);           重载+=操作符
  string& append(const char *s);                  把字符串s连接到当前字符串结尾
  string& append(const char *s, int n);           把字符串s的前n个字符链接当前的字符串结尾       
  string& append(const string &s);                同operator+=(const string& str)
  string& append(const strung &s, int pos, int n);字符串s中从pos开始的n个字符连接到当前字符串结尾
*/
void test01()
{
	string str1 = "我"; 
	str1 += "爱你";
	cout << "str1 = " << str1 << endl;
	
	str1 += "，";
	cout << "str1 = " << str1 << endl;
	
	string str2 = "从我第一眼见你开始";
	str1 += str2;
	cout << "str1 = " << str1 << endl;
	
	string str3 = "I";
	str3.append(" love" );
	str3.append(" you forever", 3);
	//str3.append(str2);
	str3.append(str2,4,14);//注意！一个中文占两个字符的位置，从下标4位置开始，截取14个字符，拼接到字符串末尾
	cout << "str3 = " << str3 << endl;
		
}
int main()
{
	test01();
	return 0;
}
