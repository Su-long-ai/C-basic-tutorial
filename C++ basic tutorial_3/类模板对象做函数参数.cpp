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
void printPerson1(Person<string, int>& p)    //ָ���������ͣ���ã�
{
	p.Show();
}
template<class T1, class T2>
void printPerson2(Person<T1, T2>& p)    //����ģ�廯
{
	p.Show();
	cout << "T1������Ϊ��" << typeid(T1).name() << endl;    //����֪���Ƶ�����������
	cout << "T2������Ϊ��" << typeid(T2).name() << endl;
}
template<class T>
void printPerson3(T& p)    //������ģ�廯
{
	p.Show();
}
void test01()
{
	Person<string, int>p1("����", 18);
	printPerson1(p1);
	printPerson2(p1);
	printPerson3(p1);
}
int main()
{
	test01();
	return 0;
}










