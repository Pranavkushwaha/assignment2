#include"Saving.h"
void Saving::deposit()
{
        float money;
        char ch='y';
        while(ch=='y'||ch=='Y')
        {
        cout<<"Enter amount you want to deposit : ";
        cin>>money;
        cout<<"\n\n";
        amount=money+amount;
	cout<<"Want to deposit more amount : ";
        cin>>ch;
	}
}
void Saving::withdraw()
{
	float money;
	char ch='y';
	while(ch=='y'||ch=='Y')
	{
	cout<<"Enter amount you want to withdraw : ";
	cin>>money;
	cout<<"\n\n";
	cout<<"Want to withdraw more amount : ";
	cin>>ch;
        amount=amount-money;
	}
}
void Saving::display()
{
	cout<<"Available Balance in Saving account is : "<<amount<<endl;
}


