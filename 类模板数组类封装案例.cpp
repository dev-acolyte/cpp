#include<iostream>
#include<string>
using namespace std;

template<class T>
class MyArray
{
public:
	
	MyArray(int capacity)
	{
		m_Capacity = capacity;
		m_Size = 0;
		pAddress = new T[m_Capacity];
	}
	
	MyArray(const MyArray& arr)
	{
		m_Capacity = arr.m_Capacity;
		m_Size = arr.m_Size;
		pAddress = new T[arr.m_Capacity];
		for(int i=0; i < m_Size; i++)
		{
			pAddress[i] = arr.pAddress[i];
		}
	}
	
	MyArray& operator=(const MyArray& arr)
	{
		if(pAddress != NULL){
			delete[] pAddress;
			pAddress = NULL;
			m_Capacity = 0;
			m_Size = 0;
		}
		m_Capacity = arr.m_Capacity;
		m_Size = arr.m_Size;
		pAddress = new T[arr.m_Capacity];
		for(int i=0; i < m_Size; i++)
		{
			pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}
	
    //尾插法
	void Push_Back(const T& val)
	{
		if(m_Capacity == m_Size)
		{
			return;
		}
		
	    pAddress[this->m_Size] = val;
	    m_Size++;
	}

   //尾删法
    void Pop_Back()
    {
		if(m_Size == 0)
		{
			return;
		}
		m_Size--;
	}
	
	//通过下标方式访问数组中的元素 用引用可以实现 arr[0] = 100;
	T& operator[] (int index)
	{
		return pAddress[index];
	}
	
	int getCapacity()
	{
		return m_Capacity;
	}
	
	int getSize()
	{
		return m_Size;
	}
	
	~MyArray()
	{
		if(pAddress != NULL)
		{
			delete[] pAddress;
			pAddress = NULL;
		}
	}
	
private:
	
	T* pAddress;  //指针指向堆区开辟的真实数组
	
	int m_Capacity; //数组容量
	
	int m_Size; //数组大小
	
};

void printInArray(MyArray <int>& arr)
{
	for(int i = 0; i < arr.getSize(); i++)
	{
		cout<< arr[i] <<endl;
	}
}

void test01()
{
	
	MyArray <int>arr1(5);
	
	for(int i=0; i < 5; i++)
	{
		arr1.Push_Back(i);
	}
	cout<<"arr1的打印输出为："<< endl;
	
	printInArray(arr1);
	cout<< "arr1的容量为: " << arr1.getCapacity() << endl;
	cout<< "arr2的大小为：" << arr1.getSize() << endl;
	
	MyArray <int>arr2(arr1);
	
	cout<< "arr2的打印输出为: " <<endl;
	
	printInArray(arr2);
	
	//尾删
	arr2.Pop_Back();
	cout<< "arr2尾删后：" <<endl;
	printInArray(arr2);
	cout<< "arr2的容量为: " << arr2.getCapacity() << endl;
	cout<< "arr2的大小为：" << arr2.getSize() << endl;
}
int main()
{
	test01();
	return 0;
}
