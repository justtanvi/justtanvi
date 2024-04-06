#include<iostream>
using namespace std;

void add(int n1 , int n2)
{
	
	cout<<"Addition :" <<n1 + n2<<endl;
	
}

void mul(int n1,int n2)
{
	cout<<"Multiplication : "<<n1 * n2 <<endl;
}



int main()
{
	int a,b;
	cout<<"Enter the number"<<endl;
	cin>>a>>b;
	add(a,b);
	mul(a,b);
	return 0;
	
	
}
