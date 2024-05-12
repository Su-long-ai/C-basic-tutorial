#include <iostream>
#include <set>
using namespace std;
class MyCompare
{
public:
    bool operator()(const int a, const int b)const
    {
        return a > b;
    }
};
template<typename T>
void Print(const set<int, T>& s)
{
    for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
}
void test01()
{
    set<int, MyCompare> s1;    //指定排序规则由大到小
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    Print(s1);
}
int main()
{
    test01();
    return 0;
}