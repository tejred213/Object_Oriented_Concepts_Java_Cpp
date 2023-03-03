#include <iostream>
using namespace std;

class complex
{
public:
float real;
float imag;
complex();
complex(float x,float y);
complex operator+(complex x)
{
complex c;
c.real=real+x.real;
c.imag=real+x.imag;
return c;
}
friend complex operator*(complex& m1,complex &m2);
friend complex operator-(complex&c1,complex &c2);
friend void operator >>(istream &in1,complex &c1)
{
cout<<"Enter real part: ";
in1>>c1.real;
cout<<"Enter imaginary part: ";
in1>>c1.imag;
}
friend void operator <<(ostream &out1,complex &c1)
{
out1<<c1.real<<endl;
out1<<c1.imag<<endl;
}
void display();
};

complex::complex()
{
real=0;
imag=0.0;
}

complex::complex(float x,float y)
{
real=x;
imag=y;
}

/*complex operator+(complex&ca, complex&cb)
{
complex temp;
temp.real=ca.real+cb.real;
temp.imag=ca.imag+cb.imag;
return temp;
}*/

complex operator-(complex&ca, complex&cb)
{
complex temp;
temp.real=ca.real-cb.real;
temp.imag=ca.imag-cb.imag;
return temp;
}

complex operator*(complex& ca, complex& cb)
{
complex mul;
mul.real=ca.real*cb.real;
mul.imag=ca.imag*cb.imag;
return mul;
}

void complex::display()
{
cout<<real<<"+j"<<imag<<"\n"<<endl;
}

int main()
{
complex c1,c2,c3,c4,c5,c6,c7;
c1=complex(9.7,5.4);
c2=complex(8.7,4.8);
cout<<"c1="; c1.display();
cout<<"c2="; c2.display();
c3=c1+c2;
cout<<"Addition= "; c3.display();
c3=c1-c2;
cout<<"Subtraction= "; c3.display();
c3=c1*c2;
cout<<"Multiplication= "; c3.display();
cin>>c4;
cout<<"Complex number is "<<c4.real<<"+"<<+c4.imag<<"j"<<endl;
cin>>c5;
cout<<"Complex number is "<<c5.real<<"+"<<+c5.imag<<"j"<<endl;
c3=c4+c5;
cout<<c3;
c3=c4-c5;
cout<<c3;
c3=c4*c5;
cout<<c3;
return 0;
}