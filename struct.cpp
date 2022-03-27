#include<iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

int main()
{
	struct student s1;
	s1.name = "chensibo";
	s1.age = 19;
	s1.score = 100;

	cout << s1.name << s1.age << s1.score << endl;

	struct student arr[3] =
	{
		{"chensibo1",19,80},
		{"zhouyibo",20,100},
		{"xiangzelongg",20,100}
	};

	for (int i = 0; i < 3; i++)
	{
		cout << arr[i].name << arr[i].age << arr[i].score << endl;
	}

	student x = { "1234",12,90 };
	student* p = &x;
	cout << p->name << p->age << p->score << endl;


	 


	return 0;
}