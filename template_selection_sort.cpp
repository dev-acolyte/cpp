#include<iostream>
using namespace std;
template<class T>
void myPrint(T arr[], int len)
{
    for(int i=0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
template<class T>
void mySwap(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
template<class T>
void mySort(T arr[], int len)
{
    for(int i = 0; i < len; i++)
    {
        int max = i;
        for(int j = i+1;j < len;j++)
        {
            if(arr[j] > arr[max])
            {
                max = j;
            }
        }
        if(max != i)
        {
            mySwap(arr[max], arr[i]);
        }
    }
}
void test01()
{
    char charArr[] = "badcfe";
    int len = sizeof(charArr) / sizeof(char);
    mySort(charArr, len);
    myPrint(charArr, len);
}
int main(){
    test01();
    return 0;
}