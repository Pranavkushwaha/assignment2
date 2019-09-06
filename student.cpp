#include <iostream>
using namespace std;

struct Student{
	int roll;
	char name[20];
	float percent;
};

int main()
{
	struct Student arr[5];
	for(int i=0; i<5; i++)
	{
		cout << "Enter roll no.: ";
		cin >> arr[i].roll;
