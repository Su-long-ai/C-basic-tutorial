#include <iostream>
#include <vector>    
#include <algorithm>    
using namespace std;
class Person
{
public:
    Person(string name, int age)
    {
        m_name = name;
        m_age = age;
    }
    string m_name;
    int m_age;
};
void test01()
{
    vector<Person> v;
    Person p1("A", 10);
    Person p2("B", 20);
    Person p3("C", 30);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    for (vector<Person>::iterator itBegin = v.begin(); itBegin != v.end(); itBegin++)
    {
        cout << (*itBegin).m_name << endl << (*itBegin).m_age << endl;
        cout << itBegin->m_name << endl << itBegin->m_age << endl;
    }
}
int main()
{
    test01();
    return 0;
}










