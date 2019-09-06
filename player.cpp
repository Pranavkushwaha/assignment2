#include"player.h"
using namespace std;
Player::Player():name(" "),age(0),country(" ")
{}
Player::Player(string s,int n,string p)
{
	strcpy(name,s);
	age=n;
	strcpy(country,p);
}
void Player::display()
{
	cout<<"Name : "<<name<<endl;
	cout<<"Age : "<<age<<endl;
	cout<<"Country : "<<country<<endl;
}
void Player::accept()
{
	cout<<"Enter name : "<<endl;
	cin.ignore();
	getline(cin,name);
	cout<<"Enter age : "<<endl;
	cin>>age;
	cout<<"Enter country : "<<endl;
	cin.ignore();
	getline(cin,country);

}
