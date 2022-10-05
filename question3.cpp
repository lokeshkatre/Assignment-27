#include<iostream>
using namespace std;
class Complex
{
    private:
    double real,img;
    public:
    Complex(){}
    Complex(double x,double y)
    {
        real=x;
        img=y;
    }
    void display()
    {
        cout<<"real="<<real<<" imaginary="<<img<<endl;
    }
    friend Complex operator+(Complex,Complex);
};
Complex operator+(Complex c1,Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
int main()
{
    Complex c1(2,3),c2(4,5);
    Complex c3=c1+c2;
    c3.display();
}