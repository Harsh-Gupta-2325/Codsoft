#include<iostream>
using namespace std;
int main()
{
	int n1,n2,ch;
	cout<<"Simple Calculator:\n";
	cout<<"1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n";
	cout<<"Input your choice(1-4): ";
	cin>>ch;
	cout<<"Enter Two Numbers: ";
	cin>>n1>>n2;
	switch(ch)
	{
		case 1: cout<<n1<<" + "<<n2<<"= "<<n1+n2; break;
		case 2: cout<<n1<<" - "<<n2<<"= "<<n1-n2; break;
		case 3: cout<<n1<<" * "<<n2<<"= "<<n1*n2; break;
		case 4: cout<<n1<<" / "<<n2<<"= "<<n1/n2; break;
		default: cout<<"Wrong Choice!!"<<endl;
	}
}