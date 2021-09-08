#include<iostream>
using namespace std; 
int main ()
{
	int age,i;
	cout<<"Enter your age:";
	cin>>age;
	if(age>=18)
	{
		cout<<"\n you are eligible for voting";
	}
	else
	{
	     i=18-age;
	     cout<<"\n You are not eligible for voting.\n Wait for "<<i<<" more year(s)";
	}
	return (0);
}
