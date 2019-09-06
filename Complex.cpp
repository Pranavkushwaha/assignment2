#include<iostream>
using namespace std;
class Complex
{
	private:
		int real;
		int img;
	public:
		Complex(): real(0), img(0)
		{
		}
		Complex(int i, int j):real(i), img(j){}
		void accept()
		{
			cout<<"enter real value"<<endl;
			cin>>real;
			cout<<"enter img value"<<endl;
                        cin>>img;
		}
		void display()
		{
			cout<<"real part="<<real<<endl;
			cout<<"img  part="<<img<<endl;

		}
};
int main()
{
	Complex c1, c2;
	Complex c3(3,4);
	cout << "Default constructor called\n";
	c1.display();
	cout << "\nParameterized constructor:\n";
	c3.display();
	cout << "\n";
	c2.accept();
	c2.display();
	return 0;
}
