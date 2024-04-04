#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<< "enter the integer which you want to print in english but lesser or equal then 9:";
	cin >> n;
	if(n<=9&&n>=1)
	{
		if(n==1)
		{
			cout<<"one";
			
		}
		else if(n==2)
		{
			cout <<"two";
		}
		else if(n==3)
		{
			cout<<"three";
		}
		else if (n==4)
		{
			cout <<"four";
		}
		else if(n==5)
		{
			cout<<"five";
		}
		else if(n==6)
		{
			cout<<"six";
		}
		else if (n==7)
		{
			cout <<"seven";
		}
		else if (n==8)
		{
			cout <<"eight";
		}
		else
		{
			cout<<"nine";
		}
	}
		else
		{
			cout<<"no is greater than 9";
		}
	
	return 0;
}
