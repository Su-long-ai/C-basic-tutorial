#include<iostream>	
using namespace std;
template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
void test01()
{
	int a = 5;
	int b = 10;
	mySwap(a, b);
	cout << a << endl;
	cout << b << endl;
}
int main()
{
	test01();
	return 0;
}