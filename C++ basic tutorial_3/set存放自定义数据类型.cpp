#include <iostream>
#include <set>
using namespace std;
class Person
{
public:
    Person(const string name, const int age)
    {
        m_name = name;
        m_age = age;
    }
    string m_name;
    int m_age;
};
class MyCompare
{
public:
    bool operator()(const Person& a, const Person& b)const
    {
        return a.m_age < b.m_age;
    }
};
template<typename T>
void Print(const set<Person, T>& s)
{
    for (set<Person>::const_iterator it = s.begin(); it != s.end(); it++)
    {
        cout << it->m_name << " " << it->m_age << " ";
    }
}
void test01()
{
    Person p1("张三", 30);
    Person p2("李四", 35);
    Person p3("王五", 40);
    set<Person, MyCompare>s1;
    s1.insert(p1);
    s1.insert(p2);
    s1.insert(p3);
    Print(s1);
}
int main()
{
    test01();
    return 0;
}










