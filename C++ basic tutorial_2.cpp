#include <iostream>
#include <algorithm>
#include "新手教程进阶篇.h"
using namespace std;
void exchange(int*a,int*b)   //这是地址传递，复习一下
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
void ConstantReference(const int &val)    //常量引用
{
	cout << "val=" << val << endl;
}
int FunctionDefaultParameters(int a, int b = 20, int c = 10)    //函数默认参数
{
	return a + b + c;
}
void PlaceholderParameters(int a,int)    //函数占位参数
{
}
class PersonStatic
{
public:
	static int m_A;    //静态成员变量
};
int PersonStatic::m_A = 100;    //类外定义成员变量（类内声明）
const double PI = 3.14;
int main()
{
	//程序的内存模型
	{
		//程序运行前
		//分为全局区和代码区
		//全局变（常）量写在main前
		//static int a;    （static可以延长变量生命周期）
		//这是静态变量
		/*常量
		字符串常量    
		就像“HELLO WORLD”
		const修饰的全局变量
		const修饰的局部变量*/
		//const int c_l_a（c是const g是global全局 l是local局部）
		//全局区有全局变量，全局常量，字符串常量，静态全局变量，静态局部变量
		//局部区有局部变量，局部常量


		//程序运行后
		//栈区（不要返回局部变量的地址）（程序员管不了）
		//形参也会放在栈区
		//堆区(程序员管得了)
		/*运用new关键字来使数据开辟到堆区
	               new int(10);          */
		/*运用delete关键字来使堆区中的数据释放
                 delete [] arr;
			（这是在释放数组,要加[]）    */
	}


	//引用（给变量起别名）（引用自动挡，指针手动挡（笑））
	{
	    /*    int a = 0;
		      int &b = a;    */
		//引用必须初始化且初始化后不能改变（b变成a的别名后不能变成c的别名）


		//引用做函数参数
		int a = 10;
		int b = 20;
		//exchange(&a, &b);
		swap(a, b);
		cout << a << " " << b << endl;    //实参交换了

		
		//引用做函数返回值
		//不要返回局部变量的引用
		//函数的调用可以作为左值
		ReferenceFunction() = 1000;
		cout << ReferenceFunction() << endl;

		//引用的本质
		//本质是在c++内部实现一个指针常量（指向不可改,指向的值可改）
		//常量引用
		/*    int a = 10;
			  const int & ref = 10;    *///加入const后为只读，不可修改
	}


	//函数提高
	{
		//函数默认参数（如果某个位置已经有默认参数，那么从这个位置往后都要有默认值）
		cout << FunctionDefaultParameters(10) << endl;
		/*    int func2(int a = 10, int b = 10);
			  int func2(int a = 20, int b = 20)
			  {
				   return a + b;
			   }                                    *///这是错误写法，如果函数声明有默认参数，函数实现就不能有默认参数


			   //函数占位参数
		PlaceholderParameters(10, 10);
		//占位参数还可以有默认参数


		//函数重（chóng）载（可以让函数名相同）
		//条件：1、同一个作用域下 2、函数名称相同 3、参数类型不同或个数不同或顺序不同
		/*    void func()
			  void func(int a)
			  void func(double a)    */
			  //注意：函数的返回值不可以作为函数重载的条件


			  //函数重载注意事项
			  //引用作为重载的条件
			  //函数重载碰到默认参数
			  /*    void func2(int a , int b = 10)
					{}
					void func2(int a)
					{}
					func2(10);                        *///此时两个都能调，报错
	}


	//————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
		//它来了，它来了，C++带着它的类和对象来了（C++的重点）


		//类和对象（封装，继承，多态）
	{
		//封装
		{
			//封装的意义
			//设计一个圆并求周长
			class Circle    //class为类
			{
			public:    //公共权限（此处为冒号）
				int m_r;    //属性（半径）（别名成员属性，成员变量）
				double calculateZC()    //行为（获取圆的周长）（别名成员函数，成员方法）
				{                       //类中的属性和行为统一称为成员
					return 2 * PI * m_r;
				}
			};
			Circle c1;    //实例化
			c1.m_r = 10;    //给圆对象的属性赋值
			cout << "圆的周长为" << c1.calculateZC() << endl;
			//学生类
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
			A.name = "张三";
			A.number = 10;
			A.func();
			Student B;
			B.name = "李四";
			B.number = 20;
			B.func();


			//访问权限
			//公共权限  public      成员类内可以访问    类外可以访问    
			//保护权限  protrcted   成员类内可以访问    类外不能访问    儿子可以访问父亲中的保护内容
			//私有权限  private     成员类内可以访问    类外不能访问    儿子不可以访问父亲的私有内容


			//struct和class的区别
			//默认的访问权限不同
			//struct默认公共,class默认私有


			//成员属性设置为私有
			class Person
			{
			public:
				void setname(string name)
				{
					m_name = name;    //设置姓名
				}
				string getname()
				{
					return m_name;    //获取姓名
				}                     
				//这样姓名为可读可写
				//只有上一个为只写，只有下一个为只读
			private:
				string m_name;
				int m_age;
				string m_telephoneNumber;
			};
		}


		//对象的初始化和清理
		{
			//构造函数和析构函数（必须要有，你不写编译器帮你写）
			//构造函数    进行初始化操作（自动调用且只调用一次）（没有返回值，也不用写void）（可以有参数，可以重载）
			//析构函数    进行清除操作  （要在最前面加~）       （没有返回值，也不用写void）（不可以有参数，不能重载）（对象销毁前会自动调用析构函数且只调用一次）


			//构造函数的分类及调用
			//按照参数分类    无参构造和有参构造
			/*    Person()         //无参（默认）
			      {
				   }
				  Person(int a)    //有参
				  {
				  }                */
			//按照类型分类    普通构造（以上两个示例）和拷贝构造
			/*    Person( const Person &p )
			      {
				  }*/                      //拷贝构造
			//调用
			//1、括号法（调用默认构造函数的时候，不要加()，因为会当成函数的声明）（推荐用这个）
			//Person p1;
			//Person p2(10);
			//Person p3(p2);
			//2、显示法
			//Person p1;
			//Person p2 = Person(10);
			//Person p3 = Person(p2);
			//Person(10);    //匿名对象    当前行执行结束后，系统会立即回收掉匿名对象
			//注意：不要利用拷贝函数构造函数来初始化匿名对象    譬如编译器会认为Person (p3) === Person p3（这里三个等号没写错）
			//3、隐式转换法
			//Person p4 = 10;    //相当于Person p4 = Person(10);
			//Person p5 = p4;


			//拷贝构造函数调用时机（黑马P108，这里有点难懂）
			//1、使用一个已经创建完毕的对象来初始化一个新对象
			//2、值传递的方式给函数参数传值
			//3、值方式返回局部对象


			//构造函数的调用规则
			//1、默认情况下，编译器至少给一个类添加3个函数（默认构造，析构函数，拷贝函数）
			//默认构造（空实现）
			//析构函数（空实现）
			//拷贝函数（值拷贝）
			//2、如果我们写了有参构造函数，编译器就不提供默认构造，但仍提供拷贝构造；写了拷贝构造函数就不提供普通构造函数


			//深拷贝与浅拷贝
			//浅拷贝：简单的赋值拷贝操作
			//深拷贝：在堆区重新申请空间，进行拷贝操作
			class Person
			{
			public:
				Person()
				{
					cout << "Person的默认构造函数调用" << endl;
				}
				Person(int age, int height)
				{
					m_Age = age;
					m_Height = new int(height);    //创建在堆区
					cout << "Person的有参构造函数调用" << endl;
				}
				Person(const Person& p)
				{
					cout << "Person拷贝构造函数调用" << endl;
					m_Age = p.m_Age;
					//m_Height = p.m_Height;    编译器默认实现这行代码
					//深拷贝操作
					m_Height = new int(*p.m_Height);
				}
				~Person()
				{
					//析构代码，将堆区开辟数据做释放操作
					if (m_Height != NULL)
					{
						delete m_Height;
						m_Height = NULL;    //这行是防止野指针
					}
					cout << "Person的析构函数调用" << endl;
				}
				int m_Age;
				int* m_Height;
			};
			

			//初始化列表
			/*		public:
						Person(int a,int b,int c):m_A(a),m_B(b),m_C(c)
						{
							这里可以不写
						}                                                */


			//类对象作为类成员
			/*		class A{};
					class B
					{ 
							A a;
					};
										*/
			//当其他类对象作为本类成员，构造时候先构造类对象，再构造自身。析构的顺序与构造相反


			//静态成员
			//静态成员变量
			//1.所有对象共享同一份数据
			//2.在编译阶段分配内存
			//3.类内声明，类外初始化
			//静态成员变量有两种访问方式
			//1.通过对象访问
			PersonStatic a;
			cout << a.m_A << endl;
			//2.通过类名访问
			cout << PersonStatic::m_A << endl;
			//静态成员变量也有访问权限，例如在private中
			//静态成员函数
			//1.所有对象共享同一个函数
			//2.静态成员函数只能访问静态成员变量
			//调用方式与静态成员变量一样
			//一样也有访问权限
		}


		//C++对象模型和this指针
		{
			//成员变量和成员函数分开存储
			//只有非静态成员变量属于类的对象
			//空对象占1字节
			

			//this指针概念
			//this指针指向被调用的成员函数所属的对象
			//本质是个指针常量
			//作用：1.解决名称冲突
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
			//作用：2.返回对象本身用*this
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

			
            //空指针访问成员函数
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
				    cout<<""<<age<<endl;    //此处在调用时会自动写上this->age
				};
			void test()
			{
			Person * p = NULL;
			p->show();
	     	p->showa();
			}
		                       */


			//const修饰成员函数
			//常函数
			/*
		    class Person
			{
			public:
				void show() const     //这里加了const
			    {                     //在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改（const Person * const this）
			       this->m_b=100;     
				   this->m_a=100;    //this是编译器默认加的
			   	}
				int m_a;
				mutable int m_b;     //特殊变量，即便在常函数中也可修改这个值
		    }
			*/
			//常对象
			/*
			const Person p;    //对象前加const，变成常对象
			p.m_a=100;         //此处会报错
			p.m_b=100;         //此处不会报错，mutable的作用
			p.show();          //常对象只能调用常函数
			*/
		}


		//友元
		{
			//全局函数做友元
			/*
			class Building
			{
				friend void goodGay(Building* building);    //goodGey全局函数可以访问私有成员
			public:
				Building()
				{
					m_SittingRoom = "客厅";
					m_BedRoom = "卧室";
				}
				string m_SittingRoom;
			private:
				string m_BedRoom;
			};
			void goodGay(Building *building)
			{
				cout << "全局函数正在访问：" << building->m_BedRoom << endl;
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


			//类做友元
			/*
			class Building;    //先声明，防报错
			class GoodGay
			{
			public:
				GoodGay();
				void visit();
				Building* building;
			};
			class Building
			{
				friend class GoodGay;    //此处友元
			public:
				Building();
				string m_SittingRoom;
			private:
				string m_BedRoom;
			};
			Building::Building()    //这里是类外写成员函数
			{
				m_SittingRoom = "客厅";
				m_BedRoom = "卧室";
			}
			GoodGay::GoodGay()
			{
				building = new Building;
			}
			void GoodGay::visit()
			{
				cout << "GoodGay类正在访问：" << building->m_BedRoom << endl;
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


			//成员函数做友元
			//省流了
			//friend void GoodGay::visit();
		}


		//运算符重载
		{
			//加号运算符重载
			//编译器起一个通用名称
			/*
			函数类型 operator+ (,,,,,,)
			{
				//！￥@%#%！￥@
			}
			Person p3 = p1 + p2;
			*/


			//左移运算符重载
			/*
			class Person
			{
				friend void test01();
				friend ostream& operator<< (ostream& cout, Person& p);    //ostream为输出流，类型名
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


			//递增运算符重载
			/*
			class MY
			{
				friend ostream& operator<< (ostream& cout, MY& p);
			public:
				MY()
				{
					m_Num = 0;
				}
				MY& operator++()    //后置递增
				{
					m_Num++;
					return *this;
				}
				MY operator++(int)    //int代表占位参数，可以用于区分前置和后置递增（此处为前置递增）
				{                      //不能用引用传递，因为会返回的是局部变量，不能用引用传递
					MY temp = *this;   //temp在函数执行完后会被释放掉
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


			//赋值运算符重载
			//C++编译器至少会给一个类添加四个函数
			//前三个是默认函数，还有一个是赋值运算符operator=，对属性进行值拷贝
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
					m_age = new int(age);//new返回的是地址，用指针接收
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
					m_age = new int(*p.m_age);    //深拷贝
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


			//关系运算符重载
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
					cout << "p1与p2相等" << endl;
				}
				else
				{
					cout << "p1与p2不相等" << endl;
				}
			}
			int main()
			{
				test01();
				return 0;
			}
			*/


			//函数调用运算符重载
			//由于重载后使用的方式非常像函数的调用，因此被称为仿函数
			//仿函数非常灵活，没有固定写法
			/*
			#include <bits/stdc++.h>
			#include<iostream>
			using namespace std;
			class Person
			{
			public:
				void operator()(string text)    //这里是输出字符串，但是仿函数写法非常灵活，可以变换功能
				{
					cout << text << endl;
				}
			private:
			};
			void test01()
			{
				Person p1;
				p1("Hello World");
				//匿名函数对象
				Person()("Hello World X 2");    //Person()创建了一个对象
			}
			int main()
			{
				test01();
				return 0;
			}
			*/
		}


		//继承（面对对象三大特性之一）
		{
			//继承的基本语法
			//继承的好处：减少重复代码
			//语法：    class 子类 : 继承方式 父类
			//子类也称为派生类
			//父类也称为基类
			/*
			#include <bits/stdc++.h>
			#include<iostream>
			using namespace std;
			class BasePage
			{
			public:
				void header()
				{
					cout << "头部" << endl;
				}
				void footer()
				{
					cout << "底部" << endl;
				}
				void left()
				{
					cout << "左部" << endl;
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
				cout << "网页：" << endl;
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


			//继承方式
			//父类的private不管哪种继承方式子类都拿不到（其实私有成员只是被隐藏了，还是会继承下去，还是有内存的）
			//父类中所有非静态成员属性都会被子类继承
			//公有继承：不变
			//保护继承：都变成保护权限
			//私有继承：都变成私有权限


			//继承中的对象模型
			//利用开发人员命令提示工具查看对象模型
			//跳转盘符    D:
			//跳转文件路径    cd 具体路径
			//cl /d1 reportSingleClassLayout类名 文件名    （第一个是L，第二个是一）（文件名打比方就是新手教程进阶篇.cpp，按TAB可以自动补全）


			//继承中构造和析构顺序
			//子类继承父类后，当创建子类对象，也会调用父类的构造函数
			//父构，子构，子析，父析
			//先父亲，后儿子，儿子走完，父亲走（完了，减十年功德）


			//继承同名成员处理方式
			//访问子类同名成员，直接访问
			//访问父类同名成员，需要加作用域
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
				void func(int a)    //重载
				{
					cout << "Father的int" << endl;
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
				cout << a.Father::m_a << endl;     //通过子类对象访问父类中的同名成员，需要加作用域
			}
			void test02()
			{
				Son b;
				b.func();
				b.Father::func();
				b.Father::func(100);    //如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
				//如果想访问就加作用域
			}
			int main()
			{
				test01();
				test02();
				return 0;
			}
			*/


			//继承同名静态成员处理方式
			//与同名非静态成员的处理方式一样，这里就不过多赘述了
			//静态成员变量类内说明，类外初始化
			//Son::Father::m_a（通过类名访问）
			//a.Father::m_a（通过对象访问）


			//多继承语法（实际开发中不建议使用）
			//一个子类继承多个父类
			//class Son :public Father1, public Father2


			//菱形继承
			//两个派生类继承同一个基类，又有某个类同时继承两个派生类
			//利用虚继承来解决菱形继承的问题（问题是子类继承两份相同的数据，导致资源浪费）
			//virtual关键字
			//继承下来的是vbptr（虚基类指针，指向vbtable（虚基类表））（v—virtual虚）（b—base基类）（ptr—pointer指针）
			//通过偏移量找到唯一的数据（别问偏移量是啥，自己去查）
		}


		//多态（类与对象三大特性之一）
		{
			//多态的基本概念
			//静态多态：函数重载和运算符重载属于静态多态，复用函数名
			//动态多态：派生类和虚函数实现运行时多态（多指这种）
			//区别：静态函数地址早绑定（编译阶段确定），动态晚（运行阶段）
			//动态多态满足条件：
			//1、有继承关系
			//2、子类重写父类的虚函数（重写：函数返回值、函数名、参数列表都要相同）
			//动态多态使用：父类的指针或者引用执行子类对象
			/*
			#include <bits/stdc++.h>
			#include<iostream>
			using namespace std;
			class Animal
			{
			public:
				virtual void speak()    //加上virtual变成虚函数（这样地址就晚绑定了）
				{
					cout << "speak" << endl;
				}
			};
			class Cat :public Animal
			{
			public:
				void speak()          //子类中virtual可写可不写
				{
					cout << "miao~" << endl;
				}
			};
			//执行speak函数
			//这种就是地址早绑定，在编译阶段确定函数地址
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
			//复习：只有非静态成员变量存储于类
			//在案例中的Animal类中存放了vfptr
			//vfptr（虚函数（表）指针）（v—virtual，f—function，p—pointer）
			//vfptr指向vftable（虚函数表）（表内记录虚函数的地址（&Animal::speak））（v—virtual，f—function，table—table（表））
			//当子类重写父类的虚函数，子类中的虚函数表内部会替换成子类虚函数的地址
			//当父类的指针或者引用指向子类对象的时候，发生多态


			//多态案例一：计算器类
			//开闭原则：对扩展进行开放，对修改进行关闭
			//多态好处：
			//1、组织结构清晰
			//2、可读性强
			//3、对于前期和后期扩展以及维护性高
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
			class AddCalculator :public AbstractCalculator    //加法计算器类（以下同理，不写了）
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


			//纯虚函数和抽象类
			//纯虚函数语法：
			//virtual 返回值类型 函数名 (参数列表) = 0;
			//当类中有纯虚函数时，这个类也被叫做抽象类
			//抽象类特点：
			//1、无法实例化对象
			//2、子类必须重写抽象类中的纯虚函数，否则子类也是抽象类


			//多态案例二：制作饮品
			//黑马P139


			//虚析构和纯虚析构
			//1、可以解决父类指针释放子类对象
			//2、都要有具体的函数实现
			//父类指针在析构时候不会调用子类中的析构函数，导致子类如果有堆区属性，出现内存泄漏
			//有纯虚析构后这个类也属于抽象类
			/*
			#include <bits/stdc++.h>
			#include<iostream>
			using namespace std;
			class Base
			{
			public:
				virtual ~Base() = 0;       //纯虚析构（注意，需要用代码实现,因为语法强制，可能父类也会有堆区数据）
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
					cout << *m_name << "咖啡" << endl;
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


			//多态案例三：电脑组装
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


	//文件操作
	{
		//写文件
		//需包含头文件<fstream>
		//文本文件：ASCII码形式
		//二进制文件：二进制形式（一般读不懂）
		//ofstream:写操作
		//ifstream:读操作
		//fstream:读写操作
		//1、头文件
		//2、创建流对象
		//ofstream ofs
		//3、打开文件
		//ofs.open("文件路径",打开方式)
		//4、写数据
		//ofs<<"写入的数据"
		//5、关闭文件
		//ofs.close()
		//文件打开方式：
		//ios::in
		//ios::out
		//ios::ate
		//ios::app
		//ios::trunc
		//ios::binary
		//方法要搭配使用用|


		//读文件
		/*
		#include <bits / stdc++.h>
		#include<iostream>
		#include <fstream>
		using namespace std;
		void test01()
		{
			ofstream ofs;
			ofs.open("text01", ios::out);
			ofs << "ABC的风格hi加快了膜片钳如上图v五项原则";
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
		void test04()    //这种比较好
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
			while ((ch = ifs.get()) != EOF)    //EOF:文件尾
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
		
        
        //二进制文件
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
			Person p = { "张三",18 };
			ofs.write((const char*)&p, sizeof(p));
			ofs.close();
		}
		void test02()
		{
			ifstream ifs;
			ifs.open("Person", ios::binary | ios::in);
			if (!ifs.is_open())
			{
				cout << "文件打开失败" << endl;
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
//这里记些有用的知识
//1，智能指针unique_ptr
//2，printf
