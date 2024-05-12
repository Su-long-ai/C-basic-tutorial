#include <iostream>
using namespace std;
class MyPrint
{
public:
    void operator()(const string text)const
    {
        cout << text << endl;
    }
};
void doPrint(const MyPrint& p, const string text)
{
    p(text);
}
void test01()
{
    MyPrint p;
    doPrint(p, "Hello World");
}
int main()
{
    test01();
    return 0;
}

