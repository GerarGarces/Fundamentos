#include<iostream>
using namespace std;

int main()
{
	float x,y,s,r,d,m;
	cout<<"ingrese el valor de x="; cin>>x;
	cout<<"ingrese el valor de y="; cin>>y;
	s=x+y;
	r=x-y;
	m=x*y;
	d=x/y;
	cout<<"el resultafo de la suma es"<<x<<"+"<<y<<"="<<s<<endl;
	cout<<"el resultafo de la resta es"<<x<<"-"<<y<<"="<<r<<endl;
	cout<<"el resultafo de la multiplicacion es"<<x<<"*"<<y<<"="<<m<<endl;
	cout<<"el resultafo de la dividion es"<<x<<"/"<<y<<"="<<d<<endl;

	return 0;
}

