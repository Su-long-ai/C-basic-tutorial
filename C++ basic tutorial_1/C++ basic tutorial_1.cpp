#include <iostream>
#include <cmath>
#include"FileName.h"
#include<string>
#include <ctime>

using namespace std;
//ע�Ͱ���
/*ababb

a
a
sas
ababab*/
//��˵�о�����ע��û����ע�Ϳ�ݣ�

#define day 
//����(ע�⣬����Ҫд��mainǰ��
int �ӷ�(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
void ��ٽ���(int num1, int num2)
{
	int temp1 = num1;
	num1 = num2;
	num2 = temp1;
}
void �޲��޷�()  //�޲��޷�
{
	cout << "û�����û�˳�Ҳû����" << endl;
}
void �в��޷�(int haihaihai)  //�в��޷�
{
	cout << "���в˳Ե�û���ԣ�����" << haihaihai << endl;
}
int �޲��з�()             //�޲��з�
{
	cout << "���з��Ե�û�˳ԣ�����" << endl;
	return 114514;
}
int �в��з�(int num1)          //�в��з�
{
	cout << "��ϲ�������з������в˳�" << endl;
	return num1;
}
int ����(int num1,int num2);  //���Ǻ�����������
void ����ס��()
{
}
void ��ʵ����(int* p7, int* p8)
{
	int temp1 = *p7;
	*p7 = *p8;	
	*p8 = temp1;	
}
void ð������(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int o = 0; o < len - 1 - i; o++)
		{
			if (arr[o] > arr[o + 1])
			{

				int ��ʱ�� = arr[o];
				arr[o] = arr[o + 1];
				arr[o + 1] = ��ʱ��;
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
void ��ֵ(struct Teacher tArry[], int len)
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
void ��ӡ(struct Teacher tArry[], int len)
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
struct Ӣ��
{
	string name;
	int age;
	string sex;
};

void Ӣ������(struct Ӣ�� Ӣ������[], int len2)
{
	for (int i48 = 0; i48 < len2 - 1; i48++)
	{
		for (int i49 = 0; i49 < len2 - i48 - 1; i49++)
		{
			if (Ӣ������[i48].age > Ӣ������[i48 + 1].age)
			{
				struct Ӣ�� temp2 = Ӣ������[i48];
				Ӣ������[i48] = Ӣ������[i48 + 1];
				Ӣ������[i48 + 1] = temp2;
			}
		}

	}
}
int main()
{
	const int  �� = 103423274;

	const int  b = 11;          //��ʶ������������������һ���ַ�����Ϊ����
	//�Ƚ����׵��ǣ�������$,������ʶ��

	cout << "��*b= " << �� / b << endl;



	long float c = 3.14l;   //��float�ı���Ҫ��f����ȻС����Ĭ��Ϊdouble
	//��float��double���⻹�� long double
  //һ��С��ֻ����ʾ��λ��Ч����
	cout << "long double" << sizeof(long double) << endl;
	float d = 3e2;         //���3e2�⿪������3*10^2
	float e = 3e-2;     //������������3*10^-2
	char ch = 'f';          //char chֻռ��һ���ַ��Ŀռ�,���Կ����Ż���
	char ch2 = 'g';
	cout << ch << endl;
	cout << (int)ch << endl;              //���ǲ�ASCII�룬a��97��A��65
	cout << "\\" << endl;
	cout << "HELLO WORLD\n";            //ת���ַ�������<<endlд��˳
	cout << "aaaa\taaaa\taaaa" << endl; //\t ������������������
	cout << '\a' << endl;
	//c���
	char str[] = "666";
	cout << str << endl;
	//c++���
	string str2 = "hello";
	cout << str2 << endl;


	bool flag = false;
	cout << flag << endl;

	int g = 0;
	cout << "����Ҫʹgȡ��ֵ" << endl;
	cin >> g;
	cout << "g=" << g << endl;

	//+-*/  %
	//a++������ԭ��a��ֵ��һ
	int h = 10;
	int j = ++h * 10;
	cout << j << endl;  //jΪ40����ʱh�ȼ�һ����10���
	int y = 10;
	int k = y++ * 10;
	cout << k << endl;  //y����10��˵ó�kΪ100���������ʹyΪ11


	//a=0,a+=2����a+2
	//==�����    ��=������
	//=��ֵ�����������˳���Ǵ�������

	//��aΪ�٣���aΪ��    ���a��b��Ϊ�棬��a&&bΪ��      ���a��bΪ�棬��a||bΪ��
	//ֻҪ��Ϊ�㣬������

	//�����е����ֻ���ƪ����
//	��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������
	//�������̽ṹ


	int score = 0;
	cout << "����score" << endl;
	cin >> score;
	if (score > 750)  //���ﲻҪ�ӷֺ�
	{
		cout << "6" << endl;
	}
	else if (score > 600)   //�������������if��������ռ�ø���������Դ
	{
		cout << "����" << endl;
	}
	else
	{
		cout << "������" << endl;
	}

	//����Ƕ��if

	/*int a1 = 10;
	int a2 = 20;
	int a3 = 0;
	a3 = a1 < a2 ? a1 : a2;
	cout << a3 << endl;*/
	//ctrl+k+c���Խ�ѡ������ע�͵�



//	int a1 = 10;
//	int a2 = 20;
//	int a3 = 0;
//	a3 = a1 < a2 ? a1 : a2;    //��Ŀ�����
//	cout << a3 << endl;
//
//
//	int score1 = 0;
//	cout << "����score" << endl;
//	cin >> score1;
//	switch (score1)
//	{
//	case 10:
//		cout << "����" << endl;
//		break;
//	case 0:
//		cout << "���򼫵�" << endl;
//		break;
//	default:
//		cout << "�Ҳ�����" << endl;
//		break;
//	}
//
//
//	//��ϰ����һ����ֻС�������(��Ȼ�˴�����Ŀ���������㣩
//	int С��1 = 0;
//	int С��2 = 0;
//	int С��3 = 0;
//	cout << "����" << endl;
//	cin >> С��1 >> С��2 >> С��3;
//	if (С��1 > С��2 && С��1 > С��3)
//	{
//		cout << "С��1����" << endl;
//	}
//	else if (С��2 > С��1 && С��2 > С��3)
//	{
//		cout << "С��2����" << endl;
//	}
//	else
//	{
//		cout << "С��3����" << endl;
//	}  //ע�����ﲻ����һ���ص����
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
//	//��ϰ��������������
//	//srand((unsigned int)time(NULL));
//	//int num1 = rand() % 100 + 1;     //���ʾ����һ��һ��һ�ٵ������(ֻ�����д�����α������ý����һ�д�������������
//	//cout << "��������" << endl;
//	//int num2 = 0;
//	//while (num1 != num2)
//	//{
//	//	cin >> num2;
//	//	if (num1 > num2)
//	//	{
//	//		cout << "��С��" << endl;
//	//		
//	//	}
//	//	else if (num1 < num2)
//	//	{
//	//		cout << "�´���" << endl;
//	//		
//	//	}
//	//	else
//	//	{
//	//		cout << "�¶���" << endl;
//	//		break;
//	//	}
//	//}
//
//
//	//dowhlie��while�����ǣ�dowhile����ִ��һ�Σ����ж�
//
//
//
//	//��ϰ��������ˮ�ɻ���
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
//	for (int c5 = 0; c5 < 100; c5++)         //forѭ�����
//	{
//		cout << c5 << endl;
//	}
//
//
//
//	//��ϰ�����ģ�������
//	for (int d1 = 1; d1 < 101; d1++)
//	{
//		if (d1 % 10 == 7 || d1 / 10 == 7 || d1 % 7 == 0)
//		{
//			cout << "������" << endl;
//		}
//		else
//		{
//			cout << d1 << endl;
//		}
//	}
//
//
//	//Ƕ��ѭ��
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
//	//��ϰ�����壬�˷��ھ���
//	for (int d3 = 1; d3 < 10; d3++)
//	{
//		for (int d4 = 1; d4 < 10; d4++)
//		{
//			cout << d3; cout << "*"; cout << d4; cout << "="; cout << d3 * d4 << endl;
//		}
//	}
//
//
//	//break��������ѡ��ṹ��ѭ���ṹ
//	//continue������������������䣬ִ����һ��ѭ��
//
//
//
//	//goto��������������ת���
//	//goto flag;
//	//flag:��ע����ð�ţ�


	//���ֻ���ƪ����
//������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������

	//����
	int arr[] = { 6,6,6,6,6 };
	cout << arr[0] << endl;
	cout << sizeof(arr) / sizeof(arr[0]) << endl;  //����������Ԫ�صĸ���
	cout << arr << endl;	//���������׵�ַ    //arrǰ���ϣ�int�����Խ�ʮ������ת��Ϊʮ����
	cout << (int)&arr[0] << endl;      //���������һ��Ԫ�صĵ�ַ
	//���������ܸ�ֵ


	//��ϰ����������ֻС�������
	int arr1[] = { 300,350,200,400,250 };
	int max = 0;
	for (int i4 = 0; i4 < 6; i4++)
	{/*
		if (arr1[i4] > max)
		{
			max = (int)arr1[i4];
		}*/
		max = arr1[i4] > max ? arr1[i4] : max;          //��������Ŀ�����������

	}
	cout << max << endl;


	//��ϰ�����ߣ�����Ԫ������
	int arr2[] = { 1,3,2,5,4 };
	int start = 0;
	int end = sizeof(arr2) / sizeof(arr2[0]) - 1;
	while (start < end)
	{
		int ��ʱ�ڴ� = arr2[start];
		arr2[start] = arr2[end];
		arr2[end] = ��ʱ�ڴ�;
		start++;
		end--;
	}
	for (int f23 = 0; f23 < 5; f23++)
	{
		cout << arr2[f23] << endl;
	}


	//ð������
	int arr3[9] = { 4,2,8,0,5,7,1,3,9 };
	int end3 = sizeof(arr3) / sizeof(arr3[0]) - 1	;
	for (int f1 = 0; f1 < 8; f1++)
	{
		for (int f2 = 0; f2 < 8 - f1; f2++)
		{
			if (arr3[f2] > arr3[f2 + 1])
			{
				int ��ʱ�ڴ�2 = arr3[f2];
				arr3[f2] = arr3[f2 + 1];
				arr3[f2 + 1] = ��ʱ�ڴ�2;
			}
		}

	}
	for (int f24 = 0; f24 < 9; f24++)
	{
		cout << " " << arr3[f24];
	}

	cout << endl;

	//��ά����
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

	cout << "��ά�����һ��Ԫ���׵�ַ" << (int)&arr4[0][0] << endl;  //�˴�&Ϊȡַ����


	////��ϰ�����ˣ����Գɼ�ͳ��
	//int score[3][3] =
	//{
	//	{100,100,100},
	//	{90,50,100},
	//	{60,70,80}
	//};
	//string name[] = { "��","��","��" };
	//for (int ���������� = 0; ���������� < 3; ����������++)		
	//{
	//	int sum = 0;
	//	for (int f9 = 0; f9 < 3; f9++)
	//	{
	//		sum += score[����������][f9];
	//	}
	//	cout << name[����������] << sum << endl;
	//}


	//�����ĵ���
	int h7 = 50;
	int h8 = 45;
	int h9 = �ӷ�(h8, h7);
	cout << h9 << endl;


	//�βθı䲻�ı�ʵ��


	//���ִ����
	//��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������


	//ָ��
	//ָ�뱣���ַ
	int a11 = 77;
	int* p = &a11;
	*p = 777;
	cout << a11 << endl;
	cout << *p << endl;
	cout << sizeof(p) << endl;      //ʡ����8����������������йأ�


	//��ָ����Ұָ��
	int* p1 = NULL;    //��ָ��
	int* p2 = (int*)0x1100;  //Ұָ��


	//const����ָ��
	int a12 = 10;
	int a13 = 10;
	const int* p3 = &a12;       //����ָ��(ָ���ܸģ������ܸ�ָ���ֵ)
	int* const p4 = &a12;       //ָ�볣����ָ���ܸģ����ܸ�ָ���ֵ��
	const int* const p5 = &a12; //����ָ��(ָ���ָ���ֵ�����ܸģ�


	//ָ�������
	int arr6[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* p6 = arr6;
	for (int i33 = 0; i33 < 10; i33++)
	{
		cout << *p6 ;
		p6++;
	}
	cout << endl;



	//ָ�롢���顢����
	int arr7[] = {4,3,6,9,1,2,10,8,7,5};
	int len = sizeof(arr7) / sizeof(arr7[0]);
	ð������(arr7, len);
	for (int i34 = 0; i34 < len; i34++)
	{
		cout << arr7[i34] << endl;
		
	}
	



	//�ṹ��
	struct ���ļ�¼
	{
		string name;
		int Year;
		int Month;
		int Day;
	};
	���ļ�¼ s1 = { "hihihi",6,6};


	//�ṹ������
	struct ���ļ�¼ ���ļ�¼������[] =
	{
		{"����",114,514},
		{"llll",333,437847}
	};
	���ļ�¼������[1].name = "����";
	for (int i37 = 0; i37 < 2; i37++)
	{
		cout << ���ļ�¼������[i37].name << endl;

	};


	//�ṹ��ָ��
	���ļ�¼* p11 = &s1;
	cout << p11->name << endl;



	//�ṹ��Ƕ�׽ṹ��
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
	t.stu.name = "С��"; 
	*/

	//�ṹ������������
	/*void printStudent(struct student s1)
	{
		cout << s1.name << endl;                  //ֵ����
	}
	printStudent(s1)

		void printStudent(struct student* p)
	{
		cout << p->name;
	}
	printStudent(&s1)           */                        //��ַ����(Ч�ʸ�)



	//�ṹ����const��ʹ��
	/*void printStudent(const struct student* p)
	{                                                     //�������޷��޸���
		cout << p->name;
	}*/
			

	//�ṹ�尸��1(���忴����p70�����ô���Ŀ�ˣ�
	/*struct Teacher tArry[3];
	int len1 = sizeof(tArry) / sizeof(tArry[0]);
	��ֵ(tArry, len1);
	srand((unsigned int)time(NULL));
	��ӡ(tArry, len);*/


	//�ṹ�尸��2
	
	struct Ӣ�� Ӣ������[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	int len2 = sizeof(Ӣ������) / sizeof(Ӣ������[0]);
	cout << len2 << "len2";
	Ӣ������(Ӣ������, len2);
	for (int i50 = 0; i50 < len2; i50++)
	{
		cout << Ӣ������[i50].name << " "<<Ӣ������[i50].age <<" " <<Ӣ������[i50].sex << endl;
	}
	//����Ϊʲô���к󲻶ԣ��ʾ���ȥ������p71
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//����ƪ�����ӭ�ӵ���������
	return 0;
}
int ����(int num1, int num2)
{
	int num3 = 0;
	if (num1 > num2)
	{
		num3 = num1;
	}
	else if (num1 < num2)
	{
		num3 = num1;                   //����ֱ��return num1>num2?num1:num2;
	}
	else
	{
		cout << "��������һ������" << endl;
	}
	return num3;
}
        
//�������һ���˵����ò�Ҫ������
//�Ҳ����������߳�
//ʵ����ȫ���̶̳��ǻ���qwq