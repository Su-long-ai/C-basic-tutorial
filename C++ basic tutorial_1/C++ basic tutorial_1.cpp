#include <iostream>
#include <cmath>
#include"FileName.h"
#include<string>
#include <ctime>

using namespace std;
//注释罢了
/*ababb

a
a
sas
ababab*/
//话说感觉多行注释没单行注释快捷）

#define day 
//函数(注意，函数要写在main前）
int 加法(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
void 虚假交换(int num1, int num2)
{
	int temp1 = num1;
	num1 = num2;
	num2 = temp1;
}
void 无餐无饭()  //无参无返
{
	cout << "没错，你既没菜吃也没饭吃" << endl;
}
void 有餐无饭(int haihaihai)  //有参无返
{
	cout << "你有菜吃但没饭吃，咸死" << haihaihai << endl;
}
int 无餐有饭()             //无参有返
{
	cout << "你有饭吃但没菜吃，淡死" << endl;
	return 114514;
}
int 有餐有饭(int num1)          //有参有返
{
	cout << "恭喜，你又有饭吃又有菜吃" << endl;
	return num1;
}
int 更大(int num1,int num2);  //这是函数的声明捏
void 绷不住了()
{
}
void 真实交换(int* p7, int* p8)
{
	int temp1 = *p7;
	*p7 = *p8;	
	*p8 = temp1;	
}
void 冒泡排序(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int o = 0; o < len - 1 - i; o++)
		{
			if (arr[o] > arr[o + 1])
			{

				int 临时内 = arr[o];
				arr[o] = arr[o + 1];
				arr[o + 1] = 临时内;
			}
		}
	}
}
string nameseed = "ABCDE";
struct Student
{
	string sname;
	int score;
};
struct Teacher
{
	string tname;
	struct Student sArry[5];
};
string namefield [] = {"A","B","C","D","E"};
void 赋值(struct Teacher tArry[], int len)
{
	for (int i44 = 0; i44 < len; i44++)
	{
		tArry[i44].tname = "Teacher_";
		tArry[i44].tname += namefield[i44];
		for (int i45 = 0; i45 < 5; i45++)
		{
			tArry[i44].sArry[i45].sname = "Student_";
			tArry[i44].sArry[i45].sname += namefield[i45];
			int random = rand() % 59 + 40;
			tArry[i44].sArry[i45].score = random;
				
		}
	
	}    
}
void 打印(struct Teacher tArry[], int len)
{
	for (int i46 = 0; i46 < len; i46++)
	{
		cout << tArry[i46].tname << endl;
		for (int i47 = 0; i47 < 5; i47++)
		{
			cout << tArry[i46].sArry[i47].sname << "  " << tArry[i46].sArry[i47].score << endl;
		}
	}

}
struct 英雄
{
	string name;
	int age;
	string sex;
};

void 英雄排序(struct 英雄 英雄数组[], int len2)
{
	for (int i48 = 0; i48 < len2 - 1; i48++)
	{
		for (int i49 = 0; i49 < len2 - i48 - 1; i49++)
		{
			if (英雄数组[i48].age > 英雄数组[i48 + 1].age)
			{
				struct 英雄 temp2 = 英雄数组[i48];
				英雄数组[i48] = 英雄数组[i48 + 1];
				英雄数组[i48 + 1] = temp2;
			}
		}

	}
}
int main()
{
	const int  ￥ = 103423274;

	const int  b = 11;          //标识符（变量，常量）第一个字符不能为数字
	//比较离谱的是，可以用$,￥做标识符

	cout << "￥*b= " << ￥ / b << endl;



	long float c = 3.14l;   //用float的变量要加f，不然小数会默认为double
	//除float和double以外还有 long double
  //一般小数只会显示六位有效数字
	cout << "long double" << sizeof(long double) << endl;
	float d = 3e2;         //这个3e2解开来就是3*10^2
	float e = 3e-2;     //这个解出来就是3*10^-2
	char ch = 'f';          //char ch只占用一个字符的空间,所以可以优化嘞
	char ch2 = 'g';
	cout << ch << endl;
	cout << (int)ch << endl;              //这是查ASCII码，a是97，A是65
	cout << "\\" << endl;
	cout << "HELLO WORLD\n";            //转义字符，还是<<endl写着顺
	cout << "aaaa\taaaa\taaaa" << endl; //\t 能整齐输出后面的内容
	cout << '\a' << endl;
	//c风格
	char str[] = "666";
	cout << str << endl;
	//c++风格
	string str2 = "hello";
	cout << str2 << endl;


	bool flag = false;
	cout << flag << endl;

	int g = 0;
	cout << "输入要使g取的值" << endl;
	cin >> g;
	cout << "g=" << g << endl;

	//+-*/  %
	//a++就是让原本a的值加一
	int h = 10;
	int j = ++h * 10;
	cout << j << endl;  //j为40，此时h先加一后与10相乘
	int y = 10;
	int k = y++ * 10;
	cout << k << endl;  //y先与10相乘得出k为100，后在相加使y为11


	//a=0,a+=2就是a+2
	//==相等于    ！=不等于
	//=赋值运算符的运算顺序是从右往左

	//若a为假，则！a为真    如果a和b都为真，则a&&b为真      如果a或b为真，则a||b为真
	//只要不为零，都是真

	//新手中的新手基础篇结束
//	————————————————————————————————————————————————————————————————————————————————————————
	//程序流程结构


	int score = 0;
	cout << "输入score" << endl;
	cin >> score;
	if (score > 750)  //这里不要加分号
	{
		cout << "6" << endl;
	}
	else if (score > 600)   //这里可以用两个if，不过会占用更多运行资源
	{
		cout << "符合" << endl;
	}
	else
	{
		cout << "不符合" << endl;
	}

	//还有嵌套if

	/*int a1 = 10;
	int a2 = 20;
	int a3 = 0;
	a3 = a1 < a2 ? a1 : a2;
	cout << a3 << endl;*/
	//ctrl+k+c可以将选中区域注释掉



//	int a1 = 10;
//	int a2 = 20;
//	int a3 = 0;
//	a3 = a1 < a2 ? a1 : a2;    //三目运算符
//	cout << a3 << endl;
//
//
//	int score1 = 0;
//	cout << "输入score" << endl;
//	cin >> score1;
//	switch (score1)
//	{
//	case 10:
//		cout << "极点" << endl;
//		break;
//	case 0:
//		cout << "反向极点" << endl;
//		break;
//	default:
//		cout << "我不到啊" << endl;
//		break;
//	}
//
//
//	//练习案例一，三只小猪称体重(当然此处用三目运算符更简便）
//	int 小猪1 = 0;
//	int 小猪2 = 0;
//	int 小猪3 = 0;
//	cout << "输入" << endl;
//	cin >> 小猪1 >> 小猪2 >> 小猪3;
//	if (小猪1 > 小猪2 && 小猪1 > 小猪3)
//	{
//		cout << "小猪1最重" << endl;
//	}
//	else if (小猪2 > 小猪1 && 小猪2 > 小猪3)
//	{
//		cout << "小猪2最重" << endl;
//	}
//	else
//	{
//		cout << "小猪3最重" << endl;
//	}  //注：这里不考虑一样重的情况
//
//
////while
//	int num = 0;
//	while (num < 10)
//	{
//		cout << num << endl;
//		num++;
//
//	}
//
//	//练习案例二，猜数字
//	//srand((unsigned int)time(NULL));
//	//int num1 = rand() % 100 + 1;     //这表示生成一个一到一百的随机数(只有这行代码是伪随机，得结合上一行代码才是真随机）
//	//cout << "输入数字" << endl;
//	//int num2 = 0;
//	//while (num1 != num2)
//	//{
//	//	cin >> num2;
//	//	if (num1 > num2)
//	//	{
//	//		cout << "猜小了" << endl;
//	//		
//	//	}
//	//	else if (num1 < num2)
//	//	{
//	//		cout << "猜大了" << endl;
//	//		
//	//	}
//	//	else
//	//	{
//	//		cout << "猜对了" << endl;
//	//		break;
//	//	}
//	//}
//
//
//	//dowhlie与while区别是，dowhile会先执行一次，再判断
//
//
//
//	//练习案例三，水仙花数
//	int c4 = 100;
//	do
//	{
//		int c1 = 0;
//		int c2 = 0;
//		int c3 = 0;
//
//		c1 = c4 % 10;
//		c2 = c4 / 10 % 10;
//		c3 = c4 / 100;
//		if (c1 * c1 * c1 + c2 * c2 * c2 + c3 * c3 * c3 == c4)
//		{
//			cout << c4 << endl;
//		}
//
//		c4++;
//	}
//
//
//
//	while (c4 < 1000);
//
//
//
//	for (int c5 = 0; c5 < 100; c5++)         //for循环语句
//	{
//		cout << c5 << endl;
//	}
//
//
//
//	//练习案例四，敲桌子
//	for (int d1 = 1; d1 < 101; d1++)
//	{
//		if (d1 % 10 == 7 || d1 / 10 == 7 || d1 % 7 == 0)
//		{
//			cout << "敲桌子" << endl;
//		}
//		else
//		{
//			cout << d1 << endl;
//		}
//	}
//
//
//	//嵌套循环
//	for (int d2 = 0; d2 < 10; d2++)
//	{
//		for (int d3 = 0; d3 < 10; d3++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//
//
//
//	//练习案例五，乘法口诀表
//	for (int d3 = 1; d3 < 10; d3++)
//	{
//		for (int d4 = 1; d4 < 10; d4++)
//		{
//			cout << d3; cout << "*"; cout << d4; cout << "="; cout << d3 * d4 << endl;
//		}
//	}
//
//
//	//break用与跳出选择结构和循环结构
//	//continue用于跳过接下来的语句，执行下一次循环
//
//
//
//	//goto飞雷神，无条件跳转语句
//	//goto flag;
//	//flag:（注意是冒号）


	//新手基础篇结束
//————————————————————————————————————————————————————————————————————————————————————————————————

	//数组
	int arr[] = { 6,6,6,6,6 };
	cout << arr[0] << endl;
	cout << sizeof(arr) / sizeof(arr[0]) << endl;  //这是数组中元素的个数
	cout << arr << endl;	//这是数组首地址    //arr前加上（int）可以将十六进制转化为十进制
	cout << (int)&arr[0] << endl;      //这是数组第一个元素的地址
	//数组名不能赋值


	//练习案例六，五只小猪称体重
	int arr1[] = { 300,350,200,400,250 };
	int max = 0;
	for (int i4 = 0; i4 < 6; i4++)
	{/*
		if (arr1[i4] > max)
		{
			max = (int)arr1[i4];
		}*/
		max = arr1[i4] > max ? arr1[i4] : max;          //这是用三目运算符的做法

	}
	cout << max << endl;


	//练习案例七，数组元素逆置
	int arr2[] = { 1,3,2,5,4 };
	int start = 0;
	int end = sizeof(arr2) / sizeof(arr2[0]) - 1;
	while (start < end)
	{
		int 临时内存 = arr2[start];
		arr2[start] = arr2[end];
		arr2[end] = 临时内存;
		start++;
		end--;
	}
	for (int f23 = 0; f23 < 5; f23++)
	{
		cout << arr2[f23] << endl;
	}


	//冒泡排序
	int arr3[9] = { 4,2,8,0,5,7,1,3,9 };
	int end3 = sizeof(arr3) / sizeof(arr3[0]) - 1	;
	for (int f1 = 0; f1 < 8; f1++)
	{
		for (int f2 = 0; f2 < 8 - f1; f2++)
		{
			if (arr3[f2] > arr3[f2 + 1])
			{
				int 临时内存2 = arr3[f2];
				arr3[f2] = arr3[f2 + 1];
				arr3[f2 + 1] = 临时内存2;
			}
		}

	}
	for (int f24 = 0; f24 < 9; f24++)
	{
		cout << " " << arr3[f24];
	}

	cout << endl;

	//二维数组
	int arr4[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	for (int f6 = 0; f6 < 2; f6++)
	{
		for (int f7 = 0; f7 < 3; f7++)
		{
			cout << " " << arr4[f6][f7];
		}
		cout << endl;
	}

	cout << "二维数组第一个元素首地址" << (int)&arr4[0][0] << endl;  //此处&为取址符号


	////练习案例八，考试成绩统计
	//int score[3][3] =
	//{
	//	{100,100,100},
	//	{90,50,100},
	//	{60,70,80}
	//};
	//string name[] = { "三","四","五" };
	//for (int 不可能重名 = 0; 不可能重名 < 3; 不可能重名++)		
	//{
	//	int sum = 0;
	//	for (int f9 = 0; f9 < 3; f9++)
	//	{
	//		sum += score[不可能重名][f9];
	//	}
	//	cout << name[不可能重名] << sum << endl;
	//}


	//函数的调用
	int h7 = 50;
	int h8 = 45;
	int h9 = 加法(h8, h7);
	cout << h9 << endl;


	//形参改变不改变实参


	//新手村结束
	//——————————————————————————————————————————————————————————————————————————————————————————————


	//指针
	//指针保存地址
	int a11 = 77;
	int* p = &a11;
	*p = 777;
	cout << a11 << endl;
	cout << *p << endl;
	cout << sizeof(p) << endl;      //省流，8（这与编译器环境有关）


	//空指针与野指针
	int* p1 = NULL;    //空指针
	int* p2 = (int*)0x1100;  //野指针


	//const修饰指针
	int a12 = 10;
	int a13 = 10;
	const int* p3 = &a12;       //常量指针(指向能改，但不能改指向的值)
	int* const p4 = &a12;       //指针常量（指向不能改，但能改指向的值）
	const int* const p5 = &a12; //修饰指针(指向和指向的值都不能改）


	//指针和数组
	int arr6[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* p6 = arr6;
	for (int i33 = 0; i33 < 10; i33++)
	{
		cout << *p6 ;
		p6++;
	}
	cout << endl;



	//指针、数组、函数
	int arr7[] = {4,3,6,9,1,2,10,8,7,5};
	int len = sizeof(arr7) / sizeof(arr7[0]);
	冒泡排序(arr7, len);
	for (int i34 = 0; i34 < len; i34++)
	{
		cout << arr7[i34] << endl;
		
	}
	



	//结构体
	struct 借阅记录
	{
		string name;
		int Year;
		int Month;
		int Day;
	};
	借阅记录 s1 = { "hihihi",6,6};


	//结构体数组
	struct 借阅记录 借阅记录的数组[] =
	{
		{"张三",114,514},
		{"llll",333,437847}
	};
	借阅记录的数组[1].name = "李四";
	for (int i37 = 0; i37 < 2; i37++)
	{
		cout << 借阅记录的数组[i37].name << endl;

	};


	//结构体指针
	借阅记录* p11 = &s1;
	cout << p11->name << endl;



	//结构体嵌套结构体
	/*struct student
	{
		string name;
	};
	struct teacher
	{
		string name;
		int age;
		struct student stu ;
	};
	teacher t;
	t.name = "kkkk";
	t.age = 67;
	t.stu.name = "小王"; 
	*/

	//结构体做函数参数
	/*void printStudent(struct student s1)
	{
		cout << s1.name << endl;                  //值传递
	}
	printStudent(s1)

		void printStudent(struct student* p)
	{
		cout << p->name;
	}
	printStudent(&s1)           */                        //地址传递(效率高)



	//结构体中const的使用
	/*void printStudent(const struct student* p)
	{                                                     //这样就无法修改了
		cout << p->name;
	}*/
			

	//结构体案例1(具体看黑马p70，懒得打题目了）
	/*struct Teacher tArry[3];
	int len1 = sizeof(tArry) / sizeof(tArry[0]);
	赋值(tArry, len1);
	srand((unsigned int)time(NULL));
	打印(tArry, len);*/


	//结构体案例2
	
	struct 英雄 英雄数组[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	int len2 = sizeof(英雄数组) / sizeof(英雄数组[0]);
	cout << len2 << "len2";
	英雄排序(英雄数组, len2);
	for (int i50 = 0; i50 < len2; i50++)
	{
		cout << 英雄数组[i50].name << " "<<英雄数组[i50].age <<" " <<英雄数组[i50].sex << endl;
	}
	//别问为什么运行后不对，问就是去看黑马p71
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//基础篇结束里，迎接地狱吧烧年
	return 0;
}
int 更大(int num1, int num2)
{
	int num3 = 0;
	if (num1 > num2)
	{
		num3 = num1;
	}
	else if (num1 < num2)
	{
		num3 = num1;                   //或者直接return num1>num2?num1:num2;
	}
	else
	{
		cout << "这两个数一样大捏" << endl;
	}
	return num3;
}
        
//回来后我还是说，最好不要用中文
//我测回来看后好羞耻
//实际上全部教程都是基础qwq