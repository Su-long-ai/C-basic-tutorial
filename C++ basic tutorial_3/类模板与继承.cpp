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
private:
	T1 m_name;
	T2 m_age;
};
template<class T1, class T2>
class Son :public Person<T1, T2>    //要想灵活的指定T，子类也要变模板
{

};
void test01()
{
	Person<string, int>p1("张三", 18);

}
int main()
{
	test01();
	return 0;
}










