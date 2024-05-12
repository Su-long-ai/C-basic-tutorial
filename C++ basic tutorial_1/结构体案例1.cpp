#include <iostream>
#include <ctime>
using namespace std;
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
string namefield[] = { "A","B","C","D","E" };
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
int main()
{
	struct Teacher tArry[3];
	int len1 = sizeof(tArry) / sizeof(tArry[0]);
	赋值(tArry, len1);
	srand((unsigned int)time(NULL));
	打印(tArry, len1);
	return 0;
}