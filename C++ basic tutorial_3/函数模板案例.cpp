#include<iostream>	
using namespace std;
template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
template<typename T>
void Compare(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			mySwap(arr[max], arr[i]);
		}
	}
}
template<typename T>
void Print(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}
void test01()
{
	int a[6] = { 55,2123,6,13,565,343 };
	int len = sizeof(a) / sizeof(a[0]);
	Compare(a, len);
	Print(a, len);
}
int main()
{
	test01();
	return 0;
}