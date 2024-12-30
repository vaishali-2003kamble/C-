#include<iostream>
using namespace std;
class complex
{
	private:
	int real;
	int img;
	public:
	complex(int r,int i)
	{
		real=r;
		img=i;
	}
	friend istream &operator>>(istream &in,complex &c);
	friend ostream &operator<<(ostream &out,const complex &c);
};
istream &operator>>(istream &in,complex &c)
{
	in>>c.real;
	in>>c.img;
	return in;	
}
ostream &operator<<(ostream &out,const complex &c)
{
	out<<"real :- "<<c.real<<endl;
	out<<"img :- "<<c.img<<endl;
	out<<"real + img:- ";
	out<<c.real<<"+"<<c.img<<"i"<<endl;
	return out;
}
int main()
{
	int real,img;
	complex c1(real,img);
	cout<<"enter real and imaginary ";
	cin>>c1;
	cout<<c1;
}
