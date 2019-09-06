#include<iostream>
using namespace std;
class Time1
{
	private:
		int hrs;
		int min;
		int sec;
	public:
		Time1();
		Time1(int,int,int);
		void display();
		void accept();
		Time1 cmp(Time1);
		Time1 operator-(Time1);
};

