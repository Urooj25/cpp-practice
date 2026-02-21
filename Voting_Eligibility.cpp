#include<iostream>
using namespace std;
int main()
{
	int age;
	string name;
	cout<<"Enter your Name:";
	cin>>name;
	cout<<"Enter your age:";
	cin>>age;
	if(age>=18){
	cout<<"Congratulations "<<name<<  ", you are eligible for voting";}
	else
	{cout<<"You are not eligible";
	}
	return 0;
}
