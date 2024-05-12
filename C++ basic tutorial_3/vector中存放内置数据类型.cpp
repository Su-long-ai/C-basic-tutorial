#include <iostream>
#include <vector>    
#include <algorithm>    //标准算法头文件
using namespace std;
void myPrint(int val)
{
    cout << val << endl;
}
void test01()
{
    vector<int> v;
    v.push_back(10);    //这是插入了数据10
    v.push_back(20);
    v.push_back(30);
    ////第一种遍历方式
    //vector<int>::iterator itBegin = v.begin();    //起始迭代器，指向容器中第一个元素
    //vector<int>::iterator itEnd = v.end();        //结束迭代器，指向容器最后一个元素的下一个位置
    //while (itBegin != itEnd)
    //{
    //    cout << *itBegin << endl;
    //    itBegin++;
    //}
    ////第二种遍历方式
    //for (vector<int>::iterator itbegin = v.begin(); itbegin != v.end(); itbegin++)    //这样
    //{
    //    cout << *itbegin << endl;
    //}
    //第三种遍历方式（利用STL提供的遍历算法）
    //for_each(v.begin(), v.end(), myPrint);
    //第四种遍历方式
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";          //此处也可以cout<<v.at(i)<<" ";

    }

}
int main()
{
    test01();
    return 0;
}










