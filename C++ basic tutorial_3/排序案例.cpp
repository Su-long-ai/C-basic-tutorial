#include <iostream>
#include <list>
using namespace std;
class Person
{
public:
    Person(string name, int age, double height)
    {
        m_name = name;
        m_age = age;
        m_height = height;
    }
    string m_name;
    int m_age;
    double m_height;
};
bool Compare(const Person& p1, const Person& p2)
{
    return p1.m_age < p2.m_age;
    if (p1.m_age == p2.m_age)
    {
        return p1.m_height > p2.m_height;
    }
}
void Print(const list <Person>& L)
{
    for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
    {
        cout << it->m_name << " " << it->m_age << " " << it->m_height << endl;
    }
}
void test01()
{
    Person p1("张三", 35, 1.5);
    Person p2("李四", 40, 1.6);
    Person p3("王五", 35, 1.4);
    list<Person> L1;
    L1.push_back(p1);
    L1.push_back(p2);
    L1.push_back(p3);
    L1.sort(Compare);
    Print(L1);
}
int main()
{
    test01();
    return 0;
}
