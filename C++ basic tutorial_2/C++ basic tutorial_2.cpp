#include <iostream>
#include <algorithm>
#include "���ֽ̳̽���ƪ.h"
using namespace std;
void exchange(int*a,int*b)   //���ǵ�ַ���ݣ���ϰһ��
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swap(int& c, int& d)
{
	int temp = c;
	c = d;
	d = temp;
}
int& ReferenceFunction()
{
	static int a = 10;
	return a;
}
void ConstantReference(const int &val)    //��������
{
	cout << "val=" << val << endl;
}
int FunctionDefaultParameters(int a, int b = 20, int c = 10)    //����Ĭ�ϲ���
{
	return a + b + c;
}
void PlaceholderParameters(int a,int)    //����ռλ����
{
}
class PersonStatic
{
public:
	static int m_A;    //��̬��Ա����
};
int PersonStatic::m_A = 100;    //���ⶨ���Ա����������������
const double PI = 3.14;
int main()
{
	//������ڴ�ģ��
	{
		//��������ǰ
		//��Ϊȫ�����ʹ�����
		//ȫ�ֱ䣨������д��mainǰ
		//static int a;    ��static�����ӳ������������ڣ�
		//���Ǿ�̬����
		/*����
		�ַ�������    
		����HELLO WORLD��
		const���ε�ȫ�ֱ���
		const���εľֲ�����*/
		//const int c_l_a��c��const g��globalȫ�� l��local�ֲ���
		//ȫ������ȫ�ֱ�����ȫ�ֳ������ַ�����������̬ȫ�ֱ�������̬�ֲ�����
		//�ֲ����оֲ��������ֲ�����


		//�������к�
		//ջ������Ҫ���ؾֲ������ĵ�ַ��������Ա�ܲ��ˣ�
		//�β�Ҳ�����ջ��
		//����(����Ա�ܵ���)
		/*����new�ؼ�����ʹ���ݿ��ٵ�����
	               new int(10);          */
		/*����delete�ؼ�����ʹ�����е������ͷ�
                 delete [] arr;
			���������ͷ�����,Ҫ��[]��    */
	}


	//���ã���������������������Զ�����ָ���ֶ�����Ц����
	{
	    /*    int a = 0;
		      int &b = a;    */
		//���ñ����ʼ���ҳ�ʼ�����ܸı䣨b���a�ı������ܱ��c�ı�����


		//��������������
		int a = 10;
		int b = 20;
		//exchange(&a, &b);
		swap(a, b);
		cout << a << " " << b << endl;    //ʵ�ν�����

		
		//��������������ֵ
		//��Ҫ���ؾֲ�����������
		//�����ĵ��ÿ�����Ϊ��ֵ
		ReferenceFunction() = 1000;
		cout << ReferenceFunction() << endl;

		//���õı���
		//��������c++�ڲ�ʵ��һ��ָ�볣����ָ�򲻿ɸ�,ָ���ֵ�ɸģ�
		//��������
		/*    int a = 10;
			  const int & ref = 10;    *///����const��Ϊֻ���������޸�
	}


	//�������
	{
		//����Ĭ�ϲ��������ĳ��λ���Ѿ���Ĭ�ϲ�������ô�����λ������Ҫ��Ĭ��ֵ��
		cout << FunctionDefaultParameters(10) << endl;
		/*    int func2(int a = 10, int b = 10);
			  int func2(int a = 20, int b = 20)
			  {
				   return a + b;
			   }                                    *///���Ǵ���д�����������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���


			   //����ռλ����
		PlaceholderParameters(10, 10);
		//ռλ������������Ĭ�ϲ���


		//�����أ�ch��ng���أ������ú�������ͬ��
		//������1��ͬһ���������� 2������������ͬ 3���������Ͳ�ͬ�������ͬ��˳��ͬ
		/*    void func()
			  void func(int a)
			  void func(double a)    */
			  //ע�⣺�����ķ���ֵ��������Ϊ�������ص�����


			  //��������ע������
			  //������Ϊ���ص�����
			  //������������Ĭ�ϲ���
			  /*    void func2(int a , int b = 10)
					{}
					void func2(int a)
					{}
					func2(10);                        *///��ʱ�������ܵ�������
	}


	//������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������
		//�����ˣ������ˣ�C++����������Ͷ������ˣ�C++���ص㣩


		//��Ͷ��󣨷�װ���̳У���̬��
	{
		//��װ
		{
			//��װ������
			//���һ��Բ�����ܳ�
			class Circle    //classΪ��
			{
			public:    //����Ȩ�ޣ��˴�Ϊð�ţ�
				int m_r;    //���ԣ��뾶����������Ա���ԣ���Ա������
				double calculateZC()    //��Ϊ����ȡԲ���ܳ�����������Ա��������Ա������
				{                       //���е����Ժ���Ϊͳһ��Ϊ��Ա
					return 2 * PI * m_r;
				}
			};
			Circle c1;    //ʵ����
			c1.m_r = 10;    //��Բ��������Ը�ֵ
			cout << "Բ���ܳ�Ϊ" << c1.calculateZC() << endl;
			//ѧ����
			class Student
			{
			public:
				string name;
				int number;
				void func()
				{
					cout << name << "  " << number << endl;
				}
			};
			Student A;
			A.name = "����";
			A.number = 10;
			A.func();
			Student B;
			B.name = "����";
			B.number = 20;
			B.func();


			//����Ȩ��
			//����Ȩ��  public      ��Ա���ڿ��Է���    ������Է���    
			//����Ȩ��  protrcted   ��Ա���ڿ��Է���    ���ⲻ�ܷ���    ���ӿ��Է��ʸ����еı�������
			//˽��Ȩ��  private     ��Ա���ڿ��Է���    ���ⲻ�ܷ���    ���Ӳ����Է��ʸ��׵�˽������


			//struct��class������
			//Ĭ�ϵķ���Ȩ�޲�ͬ
			//structĬ�Ϲ���,classĬ��˽��


			//��Ա��������Ϊ˽��
			class Person
			{
			public:
				void setname(string name)
				{
					m_name = name;    //��������
				}
				string getname()
				{
					return m_name;    //��ȡ����
				}                     
				//��������Ϊ�ɶ���д
				//ֻ����һ��Ϊֻд��ֻ����һ��Ϊֻ��
			private:
				string m_name;
				int m_age;
				string m_telephoneNumber;
			};
		}


		//����ĳ�ʼ��������
		{
			//���캯������������������Ҫ�У��㲻д����������д��
			//���캯��    ���г�ʼ���������Զ�������ֻ����һ�Σ���û�з���ֵ��Ҳ����дvoid���������в������������أ�
			//��������    �����������  ��Ҫ����ǰ���~��       ��û�з���ֵ��Ҳ����дvoid�����������в������������أ�����������ǰ���Զ���������������ֻ����һ�Σ�


			//���캯���ķ��༰����
			//���ղ�������    �޲ι�����вι���
			/*    Person()         //�޲Σ�Ĭ�ϣ�
			      {
				   }
				  Person(int a)    //�в�
				  {
				  }                */
			//�������ͷ���    ��ͨ���죨��������ʾ�����Ϳ�������
			/*    Person( const Person &p )
			      {
				  }*/                      //��������
			//����
			//1�����ŷ�������Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ��()����Ϊ�ᵱ�ɺ��������������Ƽ��������
			//Person p1;
			//Person p2(10);
			//Person p3(p2);
			//2����ʾ��
			//Person p1;
			//Person p2 = Person(10);
			//Person p3 = Person(p2);
			//Person(10);    //��������    ��ǰ��ִ�н�����ϵͳ���������յ���������
			//ע�⣺��Ҫ���ÿ����������캯������ʼ����������    Ʃ�����������ΪPerson (p3) === Person p3�����������Ⱥ�ûд��
			//3����ʽת����
			//Person p4 = 10;    //�൱��Person p4 = Person(10);
			//Person p5 = p4;


			//�������캯������ʱ��������P108�������е��Ѷ���
			//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
			//2��ֵ���ݵķ�ʽ������������ֵ
			//3��ֵ��ʽ���ؾֲ�����


			//���캯���ĵ��ù���
			//1��Ĭ������£����������ٸ�һ�������3��������Ĭ�Ϲ��죬��������������������
			//Ĭ�Ϲ��죨��ʵ�֣�
			//������������ʵ�֣�
			//����������ֵ������
			//2���������д���вι��캯�����������Ͳ��ṩĬ�Ϲ��죬�����ṩ�������죻д�˿������캯���Ͳ��ṩ��ͨ���캯��


			//�����ǳ����
			//ǳ�������򵥵ĸ�ֵ��������
			//������ڶ�����������ռ䣬���п�������
			class Person
			{
			public:
				Person()
				{
					cout << "Person��Ĭ�Ϲ��캯������" << endl;
				}
				Person(int age, int height)
				{
					m_Age = age;
					m_Height = new int(height);    //�����ڶ���
					cout << "Person���вι��캯������" << endl;
				}
				Person(const Person& p)
				{
					cout << "Person�������캯������" << endl;
					m_Age = p.m_Age;
					//m_Height = p.m_Height;    ������Ĭ��ʵ�����д���
					//�������
					m_Height = new int(*p.m_Height);
				}
				~Person()
				{
					//�������룬�����������������ͷŲ���
					if (m_Height != NULL)
					{
						delete m_Height;
						m_Height = NULL;    //�����Ƿ�ֹҰָ��
					}
					cout << "Person��������������" << endl;
				}
				int m_Age;
				int* m_Height;
			};
			

			//��ʼ���б�
			/*		public:
						Person(int a,int b,int c):m_A(a),m_B(b),m_C(c)
						{
							������Բ�д
						}                                                */


			//�������Ϊ���Ա
			/*		class A{};
					class B
					{ 
							A a;
					};
										*/
			//�������������Ϊ�����Ա������ʱ���ȹ���������ٹ�������������˳���빹���෴


			//��̬��Ա
			//��̬��Ա����
			//1.���ж�����ͬһ������
			//2.�ڱ���׶η����ڴ�
			//3.���������������ʼ��
			//��̬��Ա���������ַ��ʷ�ʽ
			//1.ͨ���������
			PersonStatic a;
			cout << a.m_A << endl;
			//2.ͨ����������
			cout << PersonStatic::m_A << endl;
			//��̬��Ա����Ҳ�з���Ȩ�ޣ�������private��
			//��̬��Ա����
			//1.���ж�����ͬһ������
			//2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
			//���÷�ʽ�뾲̬��Ա����һ��
			//һ��Ҳ�з���Ȩ��
		}


		//C++����ģ�ͺ�thisָ��
		{
			//��Ա�����ͳ�Ա�����ֿ��洢
			//ֻ�зǾ�̬��Ա����������Ķ���
			//�ն���ռ1�ֽ�
			

			//thisָ�����
			//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
			//�����Ǹ�ָ�볣��
			//���ã�1.������Ƴ�ͻ
			/*		class person
					{
					public:
						person(int age)
						{
							this->age = age;
						}
						int age;
					};
					void test()
					{
						person a(18);
						cout << a.age << endl;
					}							
										*/
			//���ã�2.���ض�������*this
			/*		class Person
					{
					public:
						Person(int age)
						{
							this->age = age;
						}
						int age;
						Person &PersonAddAge (Person &p)
						{
							this->age += p.age;		 
							return *this;
						}
						int age;
					};
					void test()
					{
						Person p1(10);
						Person p2(10);
						p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
						cout << p2.age << endl;
					}
													*/

			
            //��ָ����ʳ�Ա����
			/*
			   class Person
			{
			public:
				void show()
				{
				cout<<""<<endl;
				}
				int age;
				void showa()
				{
				    if(this==NULL)
				    {
				        return;
				    }
				    cout<<""<<age<<endl;    //�˴��ڵ���ʱ���Զ�д��this->age
				};
			void test()
			{
			Person * p = NULL;
			p->show();
	     	p->showa();
			}
		                       */


			//const���γ�Ա����
			//������
			/*
		    class Person
			{
			public:
				void show() const     //�������const
			    {                     //�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸ģ�const Person * const this��
			       this->m_b=100;     
				   this->m_a=100;    //this�Ǳ�����Ĭ�ϼӵ�
			   	}
				int m_a;
				mutable int m_b;     //��������������ڳ�������Ҳ���޸����ֵ
		    }
			*/
			//������
			/*
			const Person p;    //����ǰ��const����ɳ�����
			p.m_a=100;         //�˴��ᱨ��
			p.m_b=100;         //�˴����ᱨ��mutable������
			p.show();          //������ֻ�ܵ��ó�����
			*/
		}


		//��Ԫ
		{
			//ȫ�ֺ�������Ԫ
			/*
			class Building
			{
				friend void goodGay(Building* building);    //goodGeyȫ�ֺ������Է���˽�г�Ա
			public:
				Building()
				{
					m_SittingRoom = "����";
					m_BedRoom = "����";
				}
				string m_SittingRoom;
			private:
				string m_BedRoom;
			};
			void goodGay(Building *building)
			{
				cout << "ȫ�ֺ������ڷ��ʣ�" << building->m_BedRoom << endl;
			}
			void test01()
			{
				Building building;
				goodGey(&building);
			}
			int main()
			{
				test01();
				return 0;
			}
			*/


			//������Ԫ
			/*
			class Building;    //��������������
			class GoodGay
			{
			public:
				GoodGay();
				void visit();
				Building* building;
			};
			class Building
			{
				friend class GoodGay;    //�˴���Ԫ
			public:
				Building();
				string m_SittingRoom;
			private:
				string m_BedRoom;
			};
			Building::Building()    //����������д��Ա����
			{
				m_SittingRoom = "����";
				m_BedRoom = "����";
			}
			GoodGay::GoodGay()
			{
				building = new Building;
			}
			void GoodGay::visit()
			{
				cout << "GoodGay�����ڷ��ʣ�" << building->m_BedRoom << endl;
			}
			void test01()
			{
				GoodGay gg;
				gg.visit();
			}
			int main()
			{
			    test01();
				return 0;
			}
			*/


			//��Ա��������Ԫ
			//ʡ����
			//friend void GoodGay::visit();
		}


		//���������
		{
			//�Ӻ����������
			//��������һ��ͨ������
			/*
			�������� operator+ (,,,,,,)
			{
				//����@%#%����@
			}
			Person p3 = p1 + p2;
			*/


			//�������������
			/*
			class Person
			{
				friend void test01();
				friend ostream& operator<< (ostream& cout, Person& p);    //ostreamΪ�������������
			private:
				int m_a;
				int m_b;
			};
			ostream& operator<< (ostream& cout, Person& p)
			{
				cout << p.m_a << endl << p.m_b;
				return cout;
			}
			void test01()
			{
				Person p;
				p.m_a = 10;
				p.m_b = 10;
				cout << p << endl;
			}
			int main()
			{
				test01();
				return 0;
			}
			*/


			//�������������
			/*
			class MY
			{
				friend ostream& operator<< (ostream& cout, MY& p);
			public:
				MY()
				{
					m_Num = 0;
				}
				MY& operator++()    //���õ���
				{
					m_Num++;
					return *this;
				}
				MY operator++(int)    //int����ռλ������������������ǰ�úͺ��õ������˴�Ϊǰ�õ�����
				{                      //���������ô��ݣ���Ϊ�᷵�ص��Ǿֲ����������������ô���
					MY temp = *this;   //temp�ں���ִ�����ᱻ�ͷŵ�
					m_Num++;
					return temp;
				}
			private:
				int m_Num;
			};
			ostream& operator<< (ostream& cout, MY& p)
			{
				cout << p.m_Num;
				return cout;
			}
			void test01()
			{
				MY myint;
				cout << ++myint << endl;
			}
			void test02()
			{
				MY myint;
				cout << myint << endl;
				myint++;
				cout << myint << endl;

			}
			int main()
			{
				test02();
				return 0;
			}
			*/


			//��ֵ���������
			//C++���������ٻ��һ��������ĸ�����
			//ǰ������Ĭ�Ϻ���������һ���Ǹ�ֵ�����operator=�������Խ���ֵ����
			/*
			#include <bits/stdc++.h>
			#include<iostream>
			using namespace std;
			class Person
			{
			public:
				int* m_age;
				Person(int age)
				{
					m_age = new int(age);//new���ص��ǵ�ַ����ָ�����
				}
				~Person()
				{
					if (m_age != NULL)
					{
						delete m_age;
						m_age = NULL;
					}
				}
				Person& operator=(Person& p)
				{
					if (m_age != NULL)
					{
						delete m_age;
						m_age = NULL;
					}
					m_age = new int(*p.m_age);    //���
					return *this;
				}
			private:
			};
			void test01()
			{
				Person p1(18);
				Person p2(20);
				p1 = p2;
				cout << *p1.m_age << endl;
				cout << *p2.m_age << endl;
			}
			int main()
			{
				test01();
				return 0;
			}
			*/


			//��ϵ���������
			/*
			#include <bits/stdc++.h>
			#include<iostream>
			using namespace std;
			class Person
			{
			public:
			string m_name;
			int m_age;
			Person(string name, int age)
			{
				m_name = name;
				m_age = age;
			}
			bool operator==(Person& p)
			{
				if ((m_age == p.m_age) && (m_name == p.m_name))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			private:
			};
			void test01()
			{
				Person p1("Tom", 18);
				Person p2("Tom", 18);
				if (p1 == p2)
				{
					cout << "p1��p2���" << endl;
				}
				else
				{
					cout << "p1��p2�����" << endl;
				}
			}
			int main()
			{
				test01();
				return 0;
			}
			*/


			//�����������������
			//�������غ�ʹ�õķ�ʽ�ǳ������ĵ��ã���˱���Ϊ�º���
			//�º����ǳ���û�й̶�д��
			/*
			#include <bits/stdc++.h>
			#include<iostream>
			using namespace std;
			class Person
			{
			public:
				void operator()(string text)    //����������ַ��������Ƿº���д���ǳ������Ա任����
				{
					cout << text << endl;
				}
			private:
			};
			void test01()
			{
				Person p1;
				p1("Hello World");
				//������������
				Person()("Hello World X 2");    //Person()������һ������
			}
			int main()
			{
				test01();
				return 0;
			}
			*/
		}


		//�̳У���Զ�����������֮һ��
		{
			//�̳еĻ����﷨
			//�̳еĺô��������ظ�����
			//�﷨��    class ���� : �̳з�ʽ ����
			//����Ҳ��Ϊ������
			//����Ҳ��Ϊ����
			/*
			#include <bits/stdc++.h>
			#include<iostream>
			using namespace std;
			class BasePage
			{
			public:
				void header()
				{
					cout << "ͷ��" << endl;
				}
				void footer()
				{
					cout << "�ײ�" << endl;
				}
				void left()
				{
					cout << "��" << endl;
				}
			};
			class Java :public BasePage
			{
			public:
				void content()
				{
					cout << "Java" << endl;
				}
			};
			void test01()
			{
				cout << "��ҳ��" << endl;
				Java Java;
				Java.header();
				Java.footer();
				Java.left();
				Java.content();
			}
			int main()
			{
				test01();
				return 0;
			}
			*/


			//�̳з�ʽ
			//�����private�������ּ̳з�ʽ���඼�ò�������ʵ˽�г�Աֻ�Ǳ������ˣ����ǻ�̳���ȥ���������ڴ�ģ�
			//���������зǾ�̬��Ա���Զ��ᱻ����̳�
			//���м̳У�����
			//�����̳У�����ɱ���Ȩ��
			//˽�м̳У������˽��Ȩ��


			//�̳��еĶ���ģ��
			//���ÿ�����Ա������ʾ���߲鿴����ģ��
			//��ת�̷�    D:
			//��ת�ļ�·��    cd ����·��
			//cl /d1 reportSingleClassLayout���� �ļ���    ����һ����L���ڶ�����һ�����ļ�����ȷ��������ֽ̳̽���ƪ.cpp����TAB�����Զ���ȫ��


			//�̳��й��������˳��
			//����̳и���󣬵������������Ҳ����ø���Ĺ��캯��
			//�������ӹ�������������
			//�ȸ��ף�����ӣ��������꣬�����ߣ����ˣ���ʮ�깦�£�


			//�̳�ͬ����Ա����ʽ
			//��������ͬ����Ա��ֱ�ӷ���
			//���ʸ���ͬ����Ա����Ҫ��������
			/*
			#include <bits/stdc++.h>
			#include<iostream>
			using namespace std;
			class Father
			{
			public:
				int m_a;
				Father()
				{
					m_a = 100;
				}
				void func()
				{
					cout << "Father" << endl;
				}
				void func(int a)    //����
				{
					cout << "Father��int" << endl;
				}
			};
			class Son :public Father
			{
			public:
				int m_a;
				Son()
				{
					m_a = 200;
				}
				void func()
				{
					cout << "Son" << endl;
				}
			};
			void test01()
			{
				Son a;
				cout << a.m_a << endl;
				cout << a.Father::m_a << endl;     //ͨ�����������ʸ����е�ͬ����Ա����Ҫ��������
			}
			void test02()
			{
				Son b;
				b.func();
				b.Father::func();
				b.Father::func(100);    //��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������ͬ����Ա����
				//�������ʾͼ�������
			}
			int main()
			{
				test01();
				test02();
				return 0;
			}
			*/


			//�̳�ͬ����̬��Ա����ʽ
			//��ͬ���Ǿ�̬��Ա�Ĵ���ʽһ��������Ͳ�����׸����
			//��̬��Ա��������˵���������ʼ��
			//Son::Father::m_a��ͨ���������ʣ�
			//a.Father::m_a��ͨ��������ʣ�


			//��̳��﷨��ʵ�ʿ����в�����ʹ�ã�
			//һ������̳ж������
			//class Son :public Father1, public Father2


			//���μ̳�
			//����������̳�ͬһ�����࣬����ĳ����ͬʱ�̳�����������
			//������̳���������μ̳е����⣨����������̳�������ͬ�����ݣ�������Դ�˷ѣ�
			//virtual�ؼ���
			//�̳���������vbptr�������ָ�룬ָ��vbtable������������v��virtual�飩��b��base���ࣩ��ptr��pointerָ�룩
			//ͨ��ƫ�����ҵ�Ψһ�����ݣ�����ƫ������ɶ���Լ�ȥ�飩
		}


		//��̬�����������������֮һ��
		{
			//��̬�Ļ�������
			//��̬��̬���������غ�������������ھ�̬��̬�����ú�����
			//��̬��̬����������麯��ʵ������ʱ��̬����ָ���֣�
			//���𣺾�̬������ַ��󶨣�����׶�ȷ��������̬�����н׶Σ�
			//��̬��̬����������
			//1���м̳й�ϵ
			//2��������д������麯������д����������ֵ���������������б�Ҫ��ͬ��
			//��̬��̬ʹ�ã������ָ���������ִ���������
			/*
			#include <bits/stdc++.h>
			#include<iostream>
			using namespace std;
			class Animal
			{
			public:
				virtual void speak()    //����virtual����麯����������ַ������ˣ�
				{
					cout << "speak" << endl;
				}
			};
			class Cat :public Animal
			{
			public:
				void speak()          //������virtual��д�ɲ�д
				{
					cout << "miao~" << endl;
				}
			};
			//ִ��speak����
			//���־��ǵ�ַ��󶨣��ڱ���׶�ȷ��������ַ
			void DoSpeak(Animal& animal)    //Animal &animal = cat
			{
				animal.speak();
			}
			void test01()
			{
				Cat cat1;
				DoSpeak(cat1);
			}
			int main()
			{
				test01();
				return 0;
			}
			*/
			//��ϰ��ֻ�зǾ�̬��Ա�����洢����
			//�ڰ����е�Animal���д����vfptr
			//vfptr���麯������ָ�룩��v��virtual��f��function��p��pointer��
			//vfptrָ��vftable���麯���������ڼ�¼�麯���ĵ�ַ��&Animal::speak������v��virtual��f��function��table��table������
			//��������д������麯���������е��麯�����ڲ����滻�������麯���ĵ�ַ
			//�������ָ���������ָ����������ʱ�򣬷�����̬


			//��̬����һ����������
			//����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
			//��̬�ô���
			//1����֯�ṹ����
			//2���ɶ���ǿ
			//3������ǰ�ںͺ�����չ�Լ�ά���Ը�
			/*
			#include <bits/stdc++.h>
			#include<iostream>
			using namespace std;
			class AbstractCalculator
			{
			public:
				int m_num1;
				int m_num2;
				virtual int getResult()
				{
					return 0;
				}
			};
			class AddCalculator :public AbstractCalculator    //�ӷ��������ࣨ����ͬ����д�ˣ�
			{
			public:
				virtual int getResult()
				{
					return m_num1 + m_num2;
				}
			};
			class SubCalculator :public AbstractCalculator
			{
			public:
				virtual int getResult()
				{
					return m_num1 - m_num2;
				}
			};
			void test01()
			{
				AbstractCalculator* abc = new AddCalculator;
				cin >> abc->m_num1 >> abc->m_num2;
				cout << abc->m_num1 << "+" << abc->m_num2 << "=" << abc->getResult() << endl;
				delete abc;
				abc = new SubCalculator;
				cin >> abc->m_num1 >> abc->m_num2;
				cout << abc->m_num1 << "-" << abc->m_num2 << "=" << abc->getResult() << endl;
			}
			int main()
			{
				test01();
				return 0;
			}
			*/


			//���麯���ͳ�����
			//���麯���﷨��
			//virtual ����ֵ���� ������ (�����б�) = 0;
			//�������д��麯��ʱ�������Ҳ������������
			//�������ص㣺
			//1���޷�ʵ��������
			//2�����������д�������еĴ��麯������������Ҳ�ǳ�����


			//��̬��������������Ʒ
			//����P139


			//�������ʹ�������
			//1�����Խ������ָ���ͷ��������
			//2����Ҫ�о���ĺ���ʵ��
			//����ָ��������ʱ�򲻻���������е�����������������������ж������ԣ������ڴ�й©
			//�д��������������Ҳ���ڳ�����
			/*
			#include <bits/stdc++.h>
			#include<iostream>
			using namespace std;
			class Base
			{
			public:
				virtual ~Base() = 0;       //����������ע�⣬��Ҫ�ô���ʵ��,��Ϊ�﷨ǿ�ƣ����ܸ���Ҳ���ж������ݣ�
				virtual void speak() = 0;
			};
			Base::~Base()
			{

			}
			class Coffee :public Base
			{
			public:
				Coffee(string name)
				{
					m_name = new string(name);
				}
				~Coffee()
				{
					if (m_name != NULL)
					{
						delete m_name;
						m_name = NULL;
					}
				}
				virtual void speak()
				{
					cout << *m_name << "����" << endl;
				}
				string* m_name;
			};
			class Tea :public Base
			{
			public:

			};
			void test01()
			{
				Base* a = new Coffee("Coffee1");
				a->speak();
			}
			int main()
			{
				test01();
				return 0;
			}
			*/


			//��̬��������������װ
			/*
			   #include <bits/stdc++.h>
			   #include<iostream>
			   using namespace std;
			   class CPU
			   {
			   public:
				   virtual void JS() = 0;
			   };
			   class VC
			   {
			   public:
				   virtual void XS() = 0;
			   };
			   class RAM
			   {
			   public:
				   virtual void CC() = 0;
			   };
			   class InterCPU :public CPU
			   {
			   public:
				   virtual void JS()
				   {
					   cout << "Inter Cpu" << endl;
				   }
			   };
			   class InterVC :public VC
			   {
			   public:
				   virtual void XS()
				   {
					   cout << "Inter VC" << endl;
				   }
			   };
			   class InterRAM :public RAM
			   {
			   public:
				   virtual void CC()
				   {
					   cout << "Inter RAM" << endl;
				   }
			   };
			   class LenovoCpu :public CPU
			   {
			   public:
				   virtual void JS()
				   {
					   cout << "Lenovo Cpu" << endl;
				   }
			   };
			   class LenovoVC :public VC
			   {
			   public:
				   virtual void XS()
				   {
					   cout << "Lenovo VC" << endl;
				   }
			   };
			   class LenovoRAM :public RAM
			   {
			   public:
				   virtual void CC()
				   {
					   cout << "Lenovo RAM" << endl;
				   }
			   };
			   class Computer
			   {
			   public:
				   Computer(CPU& cpu, VC& vc, RAM& ram)
				   {
					   cpu.JS();
					   vc.XS();
					   ram.CC();
				   }
			   };
			   void test01()
			   {
				   InterCPU a1;
				   InterVC a2;
				   InterRAM a3;
				   Computer a(a1, a2, a3);
			   }
			   int main()
			   {
				   test01();
				   return 0;
			   }
			*/
		}
	}


	//�ļ�����
	{
		//д�ļ�
		//�����ͷ�ļ�<fstream>
		//�ı��ļ���ASCII����ʽ
		//�������ļ�����������ʽ��һ���������
		//ofstream:д����
		//ifstream:������
		//fstream:��д����
		//1��ͷ�ļ�
		//2������������
		//ofstream ofs
		//3�����ļ�
		//ofs.open("�ļ�·��",�򿪷�ʽ)
		//4��д����
		//ofs<<"д�������"
		//5���ر��ļ�
		//ofs.close()
		//�ļ��򿪷�ʽ��
		//ios::in
		//ios::out
		//ios::ate
		//ios::app
		//ios::trunc
		//ios::binary
		//����Ҫ����ʹ����|


		//���ļ�
		/*
		#include <bits / stdc++.h>
		#include<iostream>
		#include <fstream>
		using namespace std;
		void test01()
		{
			ofstream ofs;
			ofs.open("text01", ios::out);
			ofs << "ABC�ķ��hi�ӿ���ĤƬǯ����ͼv����ԭ��";
			ofs.close();
		}
		void test02()
		{
			ifstream ifs;
			ifs.open("text01", ios::in);
			char ch[1024] = { 0 };
			while (ifs >> ch)
			{
				cout << ch << endl;
			}
			ifs.close();
		}
		void test03()
		{
			ifstream ifs;
			ifs.open("text01", ios::in);
			char ch[1024] = { 0 };
			while (ifs.getline(ch, sizeof(ch)))
			{
				cout << ch << endl;
			}
			ifs.close();
		}
		void test04()    //���ֱȽϺ�
		{
			ifstream ifs;
			ifs.open("text01", ios::in);
			string c;
			while (getline(ifs, c))
			{
				cout << c;
			}
			ifs.close();
		}
		void test05()
		{
			ifstream ifs;
			ifs.open("text01", ios::in);
			char ch;
			while (ifs.get(ch))
			{
				cout << ch;
			}
			ifs.close();
		}
		void test06()
		{
			ifstream ifs;
			ifs.open("text01", ios::in);
			char ch;
			while ((ch = ifs.get()) != EOF)    //EOF:�ļ�β
			{
				cout << ch;
			}
			ifs.close();
		}
		int main()
		{
			test04();
			return 0;
		}
		*/
		
        
        //�������ļ�
		/*
		#include <bits/stdc++.h>
		#include<iostream>
		#include <fstream>
		using namespace std;
		class Person
		{
		public:
			char m_name[64];
			int m_age;
		};
		void test01()
		{
			ofstream ofs("Person", ios::binary | ios::out);
			Person p = { "����",18 };
			ofs.write((const char*)&p, sizeof(p));
			ofs.close();
		}
		void test02()
		{
			ifstream ifs;
			ifs.open("Person", ios::binary | ios::in);
			if (!ifs.is_open())
			{
				cout << "�ļ���ʧ��" << endl;
				return;
			}
			Person p;
			ifs.read((char*)&p, sizeof(p));
			cout << p.m_age << endl << p.m_name << endl;
			ifs.close();
		}
		int main()
		{
			test02();
			return 0;
		}
		*/		
	}
return 0;
}
//�����Щ���õ�֪ʶ
//1������ָ��unique_ptr
//2��printf
