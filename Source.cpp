#include <iostream>
using namespace std;
int main()
{
	int a ;
	int b ;
	int r = 0;
	int q = 0;
	int x = 0, x1 = 0, x2 = 1;
	int y = 0, y1 = 1, y2 = 0;
	
	cout<<"ingrese un valor para a: ";cin>>a;
	cout<<"--------------------------"<<endl;
	while(a<0){
	cout<<"ingrese un valor POSITIVO para a: ";cin>>a;	
	}
	cout<<"ingrese un valor para b: ";cin>>b;
	cout<<"--------------------------"<<endl;
	while(b<0){
	cout<<"ingrese un valor POSITIVO para b: ";cin>>b;	
	}
		
	if (b == 0)
	{
		return b;
	}
	while (b > 0)
	{
		q = (a / b);
		r = a - q * b;
		x = x2 - q * x1;
		y = y2 - q * y1;
		a = b;
		b = r;
		x2 = x1;
		x1 = x;
		y2 = y1;
		y1 = y;
	}
	cout <<"{ "<<"mcd(a,b) = "<< a << ";" <<" x = " << x2 << ";"<<" y = " << y2<<" }";
}
