#include<iostream>	
using namespace std;
template<class T_name, class T_age>
class Person
{
public:
	Person(T_name name, T_age age)
	{
		m_name = name;
		m_age = age;
	}
	void Print()
	{
		cout << m_age << endl;
		cout << m_name << endl;
	}
private:
	T_name m_name;
	T_age m_age;
};
void test01()
{
	const string a = "ÕÅÈý";
	const int b = 18;
	Person <string, int>p1(a, b);
	p1.Print();
}
int main()
{
	test01();
	return 0;
}










