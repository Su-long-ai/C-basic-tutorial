#include<iostream>	
using namespace std;
template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		m_name = name;
		m_age = age;
	}
	void Show();
private:
	T1 m_name;
	T2 m_age;
};
void Person<string, int>::Show()
{
	cout << m_name << endl;
	cout << m_age << endl;
}
void printPerson1(Person<string, int>& p)    //指定传入类型（最常用）
{
	p.Show();
}
template<class T1, class T2>
void printPerson2(Person<T1, T2>& p)    //参数模板化
{
	p.Show();
	cout << "T1的类型为：" << typeid(T1).name() << endl;    //可以知道推导出来的类型
	cout << "T2的类型为：" << typeid(T2).name() << endl;
}
template<class T>
void printPerson3(T& p)    //整个类模板化
{
	p.Show();
}
void test01()
{
	Person<string, int>p1("张三", 18);
	printPerson1(p1);
	printPerson2(p1);
	printPerson3(p1);
}
int main()
{
	test01();
	return 0;
}










