#include <iostream>
#include <vector>    
#include <algorithm>    //��׼�㷨ͷ�ļ�
using namespace std;
void myPrint(int val)
{
    cout << val << endl;
}
void test01()
{
    vector<int> v;
    v.push_back(10);    //���ǲ���������10
    v.push_back(20);
    v.push_back(30);
    ////��һ�ֱ�����ʽ
    //vector<int>::iterator itBegin = v.begin();    //��ʼ��������ָ�������е�һ��Ԫ��
    //vector<int>::iterator itEnd = v.end();        //������������ָ���������һ��Ԫ�ص���һ��λ��
    //while (itBegin != itEnd)
    //{
    //    cout << *itBegin << endl;
    //    itBegin++;
    //}
    ////�ڶ��ֱ�����ʽ
    //for (vector<int>::iterator itbegin = v.begin(); itbegin != v.end(); itbegin++)    //����
    //{
    //    cout << *itbegin << endl;
    //}
    //�����ֱ�����ʽ������STL�ṩ�ı����㷨��
    //for_each(v.begin(), v.end(), myPrint);
    //�����ֱ�����ʽ
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";          //�˴�Ҳ����cout<<v.at(i)<<" ";

    }

}
int main()
{
    test01();
    return 0;
}










