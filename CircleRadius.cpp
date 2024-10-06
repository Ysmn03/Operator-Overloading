#include <iostream>
using namespace std;
const double PI=3.14;
class circle
{
	double radius;
	friend bool operator==(circle r1,circle r2);
public:
	circle();
	void set(int r);
	void print ();
	double area(int r);
	circle operator+(circle ra);
	
};
bool operator==(circle ra1,circle ra2);

circle::circle()
{
	radius=0;
}
void circle::set(int r)
{
	radius=r;
}
void circle::print()
{
	cout<<"Your raduis is\t"<<radius<<endl;
}
double circle::area(int r)
{
	double a;
	a=PI*r*r;
	return a;
}
circle circle::operator+(circle ra)
{
	circle sum;
	sum.radius = radius + ra.radius;
	return sum;
}
bool operator==(circle ra1,circle ra2)
{
	return (ra1.radius==ra2.radius);
}
int main()
{
	circle c1;
	c1.print();
	c1.set(4);
	c1.print();
	cout<<c1.area(4)<<endl;
	circle c2,c3;
	c2.set(5);
	c3=c2+c1;
	c3.print();
	if(c2==c1)
		cout<<"they are equal"<<endl;
	else
		cout<<"they are not equal"<<endl;
}