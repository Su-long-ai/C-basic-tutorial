#include <iostream>
using namespace std;
int main()
{
	//模板
	{
		//模板的概念
		{
			//建立通用的模具
			//模板不是万能的，而且不能直接使用，是个框架
			//学模板不是为了写模板，而是为了在STL能运用系统提供的模板
		}


		//函数模板
		{
			//函数模板语法
			//template<typename T>    
			//typename也可以用class代替,表明后面的符号是一种数据类型
			//T:通用的数据类型，名称可替换，通常大写
			//template:声明创建模板


			//函数模板注意事项
			//自动类型推导要一致的数据类型T
			//模板必须确定出T的数据类型后才可以使用


			//函数模板案例
			//数组排序


			//普通函数与函数模板的区别
			//普通函数可以发生隐式类型转换
			//函数模板用自动类型推导，不会发生隐式类型转换（注意自动推导要一致的数据类型T）（但是你可以多搞个数据类型T1）
			//函数模板用显示指定类型，可以发生隐式类型转换
			//隐式类型转换：输入函数的参数类型与函数应输入类型不同时会强制转换输入的参数类型


			//普通函数与函数模板的调用规则
			//你都有函数模板了，你还要普通函数干啥子
			//两者都能调用时，编译器优先调用普通函数
			//可以用空（也可以指定）模板参数列表强制调用模板函数（myPrint<>(a,b)）
			//函数模板可以发生重载
			//如果函数模板可以产生更好的匹配，优先调用函数模板（譬如普通函数还要隐式类型转换，函数模板不用，那就调用函数模板）


			//模板的局限性
			//模板的通用不是万能的（譬如你穿个自定义的数据类型）
			//我们可以具体化（template<> bool myCompare(Person &p1, Person &p2)）
			//不过好像没啥卵用，直接写个普通函数好了
		}


		//类模板
		{
			//类模板语法


			//类模板与函数模板区别
			//类模板莫得自动推导（C++17以后才支持）
			//只有类模板的参数列表中可以用默认参数（template<class T_name=string,class T_age=int>）
			//使用默认参数后下面创建对象时不用写类模板的参数列表（Person<> p1(a, b)）


			//类模板中成员函数创建时机
			//普通类中的成员函数一开始就可以创建，而类模板中的成员函数在调用时才创建


			//类模板对象做函数参数
			//三种：
			//指定传入的类型（最常用）
			//参数模板化
			//整个类模板化
			//typeid(T1).name()    可以知道数据类型


			//类模板与继承
			//子类继承的父类是个类模板时，子类在声明时要指定父类中T的类型
			//要想灵活的指定T，子类也要变模板


			//类模板成员函数类外实现
			//要加上模板参数列表


			//类模板分文件编写
			//头文件编写开头
			//#pragma once    （防止头文件重复包含）
			//头文件中写类，源文件中写成员函数实现
			//源文件（.cpp）
			//问题：只包含头文件时，链接不到源文件
			//解决方法：
			//1、直接包含源文件（但是很少用）
			//2、将.h和.cpp中的内容写在一起（在头文件中），后缀名改为.hpp（一看就知道是类模板）


			//类模板与友元
			//类内实现吧，类外实现太**烦了


			//类模板案例
		}
	}


	//STL
	{
		//STL基本概念
		//STL（Standard Template Library）标准模板库
		//STL广义上分为容器、算法、迭代器
		

		//STL六大组件
		//容器、算法、迭代器、仿函数、适配器（配接器）、空间配置器


		//容器
		//将最广泛的一些数据结构实现出来（数组，链表，树，栈，队列，集合，映射表等）
		//容器分为序列式容器（怎么放进去怎么排）和关联式容器（帮你排序）


		//算法
		//分为质变算法（会更改区间内的元素内容）和非质变算法（不会更改区间内的元素内容）
		

		//迭代器
		//容器与算法之间的粘合剂
		//每个容器都有专属的迭代器
		//迭代器很像指针
		//输入迭代器、输出迭代器、前向迭代器、双向迭代器、随机访问迭代器（常用后两个，最后一个很强大）


		//vector中存放内置数据类型
		//迭代器为：
		//vector<int>::iterator


		//vector中存放自定义数据类型


		//容器嵌套容器
	}


	//STL常用容器
	{
		//string容器
		{
			//string构造函数
			//string(5,'a')    //用5个a初始化


			//string赋值操作
			//用等号或者assign
			//string.assign(5,'a')


			//string字符串拼接
			//str += "Hello"
			//string.append(str1,2,4)    //截取str1中第二个（从零开始）字符开始的4个


			//string查找和替换
			//str1.find()    //有会返回第几位，无会返回-1
			//rfind()是从最后一位找
			//replace(2,3,"1111")    //从第二位到第三位，替换成1111


			//string字符串比较
			//str1.compare(str2)


			//string字符存取
			//str1[]
			//str2.at()


			//string插入和删除
			//插入
			//str1.insert(第几个位置,内容)
			//删除
			//str2.erase(第几个位置,删几个)


			//string字串
			//str1.substr(开始位置,结束位置)
		}


		//vector容器
		{
			//vector构造函数
			//vrctor<T> v


			//vector赋值操作
			//v2 = v1
			//v3.assign(v1.begin(),v1.end())


			//vector容量和大小
			//empty()                //判断是否为空
			//capacity()             //容器的容量
			//size()                 //容器的大小
			//resize(大小，填充数)   //重新指定大小,如果比原来长用0填充（也可以指定数来填充），比原来短就删掉超出部分
			//注意，resize只会改变大小，不会改变容量

			//vector插入和删除
			//push_back()                  //尾插
			//pop_back()                   //尾删
			//insert(v1.begin(),插入的东西)//插入
			//erase(迭代器)                //删除
			//clear()                      //清空


			//vector数据存取
			//v.front()    //获取第一个元素
			//v.back()     //获取最后一个元素


			//vector互换容器
			//vector<int> (v1).swap(v1)    //这里v1已经被赋值且resize过了
			//vector<int> (v1)    //是匿名对象，容量为v1的大小，交换后匿名对象会被系统回收
			//这样容量就会收缩


			//vector预留空间
			//可以减少vector在动态扩展容量时的扩展次数
			//reserve(int len)    //容器预留len个元素长度，不会初始化
			//vector扩展时首地址会变
		}


		//deque容器
		{
			//deque容器基本概念
			//双端数组，可以对头端进行插入和删除
			//与vector的区别：
			//deque头部的插入和删除速度快
			//deque访问元素的速度比vector慢
			//deque内部有中控器，维护每段缓冲区的内容


			//deque构造函数
			//和vector一样
			//deque<int>::const_iterator it    //只读迭代器


			//deque赋值操作
			//和vector一样


			//deque大小操作
			//和vector一样
			//deque没有容量之说


			//deque插入和删除
			//push_back()                  //尾插
			//pop_back()                   //尾删
			//push_front()                 //头插
			//pop_front()                  //头删
			//insert(位置,插入的东西)      //插入
			//erase(位置)                  //删除
			//clear()                      //清空


			//deque数据存取
			//d.at(int idx)    //获取idx所指的数据
			//d[idx]           //获取idx所指的数据
			//d.front()        //获取第一个元素
			//d.back()         //获取最后一个元素


			//deque排序
			//sort(iterator beg,iterator end)    //要包含algorithm头文件
			//vector也可以用sort
		} 


		//stack容器
		{
			//stack基本概念
			//先进后出的数据结构
			//栈不允许遍历行为


			//stack常用接口
			//top()    //获取栈顶元素
			//其他的和vector差不多，不过少一些，用法一样的
		}


		//queue容器
		{
			//queue基本概念
			//先进先出的数据结构
			//队列


			//queue常用接口
			//差不多，真的差不多
		}


		//list容器
		{
			//list基本概念
			//将数据链式存储
			//链表由结点构成，结点由数据域和指针域构成
			//链表优点：对任意位置进行快速插入和删除
			//链表缺点：遍历速度没有数组快，占用空间比数组大
			//list容器是双向循环链表，因为是非连续的内存空间，迭代器只支持前移和后移
			//list优点：不会造成内存浪费或溢出，插入删除很方便，不会造成原有迭代器失效


			//list构造函数
			//和vector差不多
			//list用不了[]


			//list赋值和交换
			//和vector差不多


			//list大小操作
			//size
			//empty
			//resize


			//list插入和删除
			//和vector差不多
			//remove(elem)    //删除容器中所有与elem值匹配的元素


			//list数据存取
			//front
			//back
			//不支持[]和at，不支持随机访问
			//但支持++和--


			//list反转和排序
			//L.reverse()    //反转链表
			//所有不支持随机访问迭代器的容器不能使用标准算法
			//但它们会在内部提供一些算法
			//L.sort()       //链表排序，当然，你可以自己写个函数来实现降序


			//排序案例
		}


		//set/multiset容器
		{
			//set基本概念
			//所有元素插入时会自动被排序
			//底层都是二叉树


			//set构造和赋值
			//都差不多嘛
			//赋值只有=


			//set大小和交换
			//size
			//empty
			//swap


			//set插入和删除
			//insert
			//clear
			//erase


			//set查找和统计
			//find(key)    //查找是否存在key，存在返回该键元素的迭代器，不存在返回set.end()
			//count(key)   //统计key的元素个数


			//set和multiset区别
			//set内不允许重复元素，multiset内允许
			//set插入数据同时会返回插入结果，表示插入是否成功


			//pair对组创建
			//pair<type,type> p (value1,value2)
			//pair<type,type> p = make_pair(value1,value2)
			//p.first    //第一个数据
			//p.second   //第二个数据


			//set存放内置数据类型


			//set存放自定义数据类型
			//自定义数据类型都会指定排序规则
		}


		//map/multimap容器
		{
			//map基本概念
			//map中所有元素都是pair
			//pair第一个值为key（键值），作为索引，第二个值为value（实值）
			//所有元素都会根据元素的键值自动排序
			//本质二叉树 
			//set不允许重复的key值，multimap可以


			//map构造和赋值
			//和set差不多
			//map<T,T>m
			//m.insert(pair<T,T>(value1,value2));
			//m.insert(make_pair(value1,value2))
			//遍历用first和second


			//map大小和交换
			//size
			//empty
			//swap


			//map插入和删除
			//insert
			//m[4]=40    //不建议用[]来插入
			//clear
			//erase


			//map查找和统计
			//和set差不多
			//find
			//count


			//map容器排序
			//差不多了啦，用仿函数
		}
	}


	//STL函数对象
	{
		//函数对象
		{
			//函数对象概念
			//重载函数调用操作符的类，其对象称为函数对象
			//其实就是仿函数啦


			//函数对象使用
			//函数对象可以作为参数传递
		}


		//谓词
		{
			//谓词概念
			//仿函数返回值类型是bool数据类型，称为谓词


			//一元谓词
			//参数只有一个的谓词叫做一元谓词


			//二元谓词
			//参数有两个的谓词叫做二元谓词
		}


		//内建函数对象
		{
			//内建函数对象意义
			//要包含头文件<functional>
			//分类：
			//算术仿函数、关系仿函数、逻辑仿函数


			//算术仿函数
			//negate 一元仿函数 取反仿函数
			//negate<T>n    n(num)
			//negate<T>()(num)
			//plus   二元仿函数 加法仿函数
			//plus<T>()(num1,num2)
			//其他的就自己看看吧


			//关系仿函数
			//sort(v.begin(),v.end(),greater<int>()) 
			//其他的就自己看看吧


			//逻辑运算符
			//logical_not    //逻辑非
		}
	}


	//STL常用算法
	{
		//常用遍历算法
		{
			//for_each
			//遍历
			//for_each(v.begin(),v.end(),仿函数或者普通函数)


			//transform
			//搬运容器到另一个容器
			//搬进去之前一定要先给目标容器开空间
			//transform(源容器起始迭代器,源容器结束迭代器,目标容器起始迭代器,普通函数或者仿函数)
		}


		//常用查找算法
		{
			//find             //查找元素
			//find(iterator beg,iterator end,value)
			 
			
			//find_if          //按条件查找元素
			//find_if(iterator beg,iterator end,函数或谓词)
			

			//adjacent_find    //查找相邻重复元素
			//adjacent_find(iterator beg,iterator end)
			 
			
			//binary_search    //二分查找法（查找指定元素是否存在）（比较快速）
			//注意：在无序序列中不可用
			//bool  binary_search(iterator beg,iterator end,value)
			 
			
			//count            //统计元素个数（返回个数）
			//count(iterator beg,iterator end,value)
			 
			
			//count_if         //按条件统计元素个数
			//count_if(iterator beg,iterator end,谓词)
		}


		//常用排序算法
		{
			//sort              //对容器内元素排序
			//sort(iterator beg,iterator end,谓词)    //谓词可填可不填，默认升序
			
			
			//random_shuffle    //指定范围内元素随机调整次序
			//random_shuffle(iterator beg,iterator end)    //记得加随机数种子来让它真实随机
			 
			
			//merge             //容器元素合并，并储存到另一容器中
			//两个容器必须是有序的
			//merge(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)    //最后一个为目标容器的开始迭代器
			 
			
			//reverse           //反转指定范围的元素
			//reverse(iterator beg,iterator end)
		}


		//常用拷贝和替换算法
		{
			//copy          //容器内指定范围的元素拷贝到另一容器中
			//copy(iterator beg1,iterator end1,iterator beg2)
			 
			
			//replace       //将容器内指定范围的旧元素修改为新元素
			//replace(iterator beg,iterator end,oldvalue,newvalue)
			 
			 
			//replace_if    //容器内指定范围满足条件的元素替换为新元素
			//replace_if(iterator beg,iterator end,谓词,newvalue)
			 
			
			//swap          //互换两个容器的元素 
			//swap(容器1,容器2)    //要同种容器
		}


		//常用算术生成算法（包含头文件<numeric>）
		{
			//accumulate    //计算容器元素累计总和
			//accumulate(iterator beg,iterator end,value)
			 
			 
			//fill          //向容器中添加元素
			//fill(iterator beg,iterator end,value)
		}


		//常用集合算法
		{
			//set_intersection    //求两个容器的交集
			//两个容器必须是有序的
			//目标容器需要提前开空间
			//resize(min(v1.size(),v2.size()))    //min需要包含algorithm
			//vector<int>::iterator itEnd=set_intersection(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)    //最后一个为目标容器的开始迭代器
			//for_each(vTarget.begin(),itEnd,myPrint)
			
			 
			//set_union           //求两个容器的并集
			//两个容器必须是有序的
			//set_union(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
			//还有有些操作没写出来，参照一下set_intersection
			
			
			//set_difference      //求两个容器的差集
			//set_difference(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
			//max
			//其他参考上面
		}
	}


	//完结啦
	return 0;
}