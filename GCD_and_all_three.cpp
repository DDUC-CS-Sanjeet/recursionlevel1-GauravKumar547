#include<iostream>
using namespace std;

int gcdrecur(int a,int b);
int gcditer(int a,int b);
int factrecur(int num);
int factiter(int num);
int powerrecur(int a,int b,int c);
int poweriter(int a,int b);
int fabrecur(int num,int t1,int t2);
void fabiter(int num);
void print(int a,int b,int choice);
void printn(int num,int choice);
int main()
{
	cout<<"What you want to get done from this code:\n";
	cout<<"1.GCD\n";
	cout<<"2.Fabonacci series\n";
	cout<<"3.Raising power\n";
	cout<<"4.Factorial\n";
	int choice;
	cin>>choice;
	int a,b,num;
	switch(choice)
	{
		case 1:
			{
				cout<<"Enter the the numbers to find their gcd: ";
            	cin>>a>>b;
				print(a,b,choice);
				break;
			}
		case 2:
			{
				cout<<"Enter the number upto which the fabonacci series required: ";
				cin>>num;
				printn(num,choice);
				break;
			}
		case 3:
			{
				cout<<"Enter the number and its power(only positive integers) to get the value: ";
				cin>>a>>b;
				print(a,b,choice);
				break;
			}
		case 4:		
			{
				cout<<"Enter the number whose factorial is required: ";
				cin>>num;
				printn(num,choice);
				break;
			}
			default:
			cout<<"Invalid";	
				
	}
	return 0;
}
void print(int a ,int b,int choice)
{
	switch(choice)
	{
		case 1:
			{
				cout<<"The GCD of "<<a<<" and "<<b<<" with recursion is "<<gcdrecur(a,b)<<endl;
				cout<<"And, with iteration is "<<gcditer(a,b)<<endl;
				break;
			}
		
		case 3:
			{
				cout<<"The value of "<<a<<" with power "<<b<<" with recursion is "<<powerrecur(a,b,a)<<endl;
				cout<<"And, with iteration is "<<poweriter(a,b)<<endl;
				break;
			}
	
	}
	
}
void printn(int num,int choice)
{
	switch(choice)
	{
		case 2:
			{
				int t1=0,t2=1;
				cout<<"The required fabonacci series with recursion is: "<<t1<<t2;
				cout<<fabrecur(num,t1,t2);
				cout<<"\nAnd, with iteration is: "<<t1<<t2;
				fabiter(num);
				cout<<endl;
				break;
			}
		case 4:	
	 		{
				cout<<"The factorial of "<<num<<" with recursion is "<<factrecur(num)<<endl;
				cout<<"And, with iteration is "<<factiter(num);
				break;
			}
	}
	
}
int gcdrecur(int a,int b)
{
	if(a<0||b<0)
	{
		throw "Invalid";
	}
	if(b==1||b==0)
	{
		return a;
	}
	else
	{
		return gcdrecur(b,a%b);
	}
}
int gcditer(int a,int b)
{
		if(a<0||b<0)
	{
		throw "Invalid";
	}
	int temp=0;
	while(b!=0)
	{
		temp=a;
		a=b;
		b=temp%b;
	}
	return a;
}
int factiter(int num)
{
	int fact=1;
	for(int i=num;i>0;i--)
	{
		fact*=i;
	}
	return fact;
}
int factrecur(int num)
{
	if(num==0||num==1)
	{
		return 1;
	}
	else
	{
		return num*factrecur(num-1);
	}
}
int poweriter(int a,int b)
{
	int n=a;
	for(int i=1;i<b;i++)
	{
		a*=n;
	}
	return a;
}
int powerrecur(int a,int b,int c)
{
	if(b==0)
	{
		return 1;
	}
	if(b==1)
	{
		return a;
	}
	else
	{
		return powerrecur(a*c,b-1,c);
	}
}
void fabiter(int num)
{
	int t3,t1=0,t2=1;
	for(int i=3;i<=num;i++)
	{
		t3=t1+t2;
		cout<<t3;
		t1=t2;
		t2=t3;
	}
}
int fabrecur(int num,int t1,int t2)
{
	int t3=0;
	t3=t1+t2;
	if(num>3)
	{
		cout<<t3;
		return fabrecur(num-1,t2,t3);
	}
	
}
