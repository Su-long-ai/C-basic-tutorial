#include <iostream>
using namespace std;
template<class T>
class MyArray
{
public:
    MyArray(int cap)
    {
        m_capacity = cap;
        m_size = 0;
        p = new T[m_capacity];
    }
    MyArray(const MyArray& arr)
    {
        m_capacity = arr.m_capacity;
        m_size = arr.m_size;
        p = new T[arr.m_capacity];
        for (int i = 0; i < m_size; i++)
        {
            p[i] = arr.p[i];
        }
    }
    ~MyArray()
    {
        if (p != NULL)
        {
            delete[] p;    //因为是个数组，所以[]
            p = NULL;
        }
    }
    MyArray& operator=(const MyArray& arr)
    {
        if (p != NULL)
        {
            delete[] p;
            p = NULL;
            m_capacity = 0;
            m_size = 0;
        }
        m_capacity = arr.m_capacity;
        m_size = arr.m_size;
        p = new T[arr.m_capacity];
        for (int i = 0; i < m_size; i++)
        {
            p[i] = arr.p[i];
        }
        return *this;
    }
    T& operator[](int xb)
    {
        return p[xb];
    }
    void WCF(const T& a);
    void WSF();
    void Print();
private:
    T* p;
    int m_capacity;
    int m_size;
};
template<class T>
void MyArray<T>::WCF(const T& a)
{
    if (m_size == m_capacity)
    {
        cout << "容量已满，插不下啦" << endl;
        return;
    }
    else
    {
        p[m_size] = a;
        m_size++;
    }
}
template<class T>
void MyArray<T>::WSF()
{
    if (m_size == 0)
    {
        cout << "没东西，删不了" << endl;
        return;
    }
    p[m_size] = NULL;
    m_size--;
}
template<class T>
void MyArray<T>::Print()
{
    if (m_size == 0)
    {
        cout << "没东西" << endl;
    }
    for (int i = 0; i < m_size; i++)
    {
        cout << p[i] << endl;
    }
}
void test01()
{
    MyArray <int>arr1(10);
    arr1.WCF(9);
    arr1.WCF(22);
    arr1.WSF();
    arr1.Print();
    arr1[0] = 100;
    cout << arr1[0] << endl;
}
int main()
{
    test01();
    return 0;
}










