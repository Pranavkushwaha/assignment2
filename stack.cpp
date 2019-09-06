#include<iostream>
#include<stdexcept>
#define SIZE 5
using namespace std;
class Stack
{
	private:
		int top;
		int arr[SIZE];
	public:
		Stack():top(-1)
		{}	
		bool IsEmpty()
		{
			return (-1==top);
		}
		bool IsFull()
		{
			return (SIZE-1==top);
		}
		int peep()
		{
			if(IsEmpty())
			{
				throw runtime_error("stack underflow");
			}
			return arr[top];
		}
		int pop()
		{
			if(IsEmpty())
			{
				throw runtime_error("stack Underflow");
			}
			return arr[top--];
		}
		void push(int ele)
		{
			if(IsFull())
			{
				throw runtime_error("Stack Overflow");
			}
			arr[++top]=ele;
		}
};
int main()
{
	Stack s;
	try
	{
		s.push(11);
		s.push(22);
		s.push(33);
		s.push(44);
		//s.push(55);
		//s.push(66);
		//s.push(77);
	}
	catch(runtime_error e)
	{
		cout<<"\n"<<e.what();
	}case 1:
                while(x>0)
                {
                        num=x%2;
                        try
                        {
                                s.push(num);
                        }
                        catch(runtime_error e)
                        {
                        //cout<<e.what();
                        }
                        x=x/2;
                }
                cout<<"Binary Equivalent of number is : ";
case 1:
                while(x>0)
                {
                        num=x%2;
                        try
                        {
                                s.push(num);
                        }
                        catch(runtime_error e)
                        {
                        //cout<<e.what();
                        }
                        x=x/2;
                }
                cout<<"Binary Equivalent of number is : ";
                try
                {
                        for(int i=0;i<4;i++)
                        cout<<s.pop();
#include<iostream>
#include<stdexcept>
#define SIZE 5
using namespace std;
class Stack
{
        private:
                int top;
                int arr[SIZE];
        public:
                Stack():top(-1)
                {}
                bool IsEmpty()
                {
                        return (-1==top);
                }
                bool IsFull()
                {
                }
                catch(runtime_error e)
                {
                        cout<<e.what();
                }
                break;
                try
                {
                        for(int i=0;i<4;i++)
                        cout<<s.pop();
                }
                catch(runtime_error e)
                {
                        cout<<e.what();
                }
                break;

	try
	{
		cout<<"Element deleted"<<s.pop();
		for(int i=1;i<4;i++)
		{
			cout<<"\n"<<s.pop();
		}
	}
	catch(runtime_error e)
	{
		cout<<"\n"<<e.what();
	}
	return 0;
}
