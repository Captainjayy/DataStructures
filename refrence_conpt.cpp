#include<iostream>
#include<iomanip>
using namespace std;
void add(int &hh);
main()
{
	int a=20;
	int k=44;
	int &b=a;
	b=6969;
	int x=9898;
	int *p=&x;
	int &v=*p;
	int &n=v;
	//a=v=n=k;//n=700;
	cout<<"a  b  x  p  v  n  "<<"\t"<<a<<endl<<b<<"\t"<<x<<"\t"<<*p<<"\t"<<v<<"\t"<<n;
	
	add(k);
	//delete(p);
}
void add(int &h)
{
	h=h+10;
	cout<<endl<<endl<<endl<<"\ninside the function"<<setw(20)<<h;
}
