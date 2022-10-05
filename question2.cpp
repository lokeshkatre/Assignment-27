#include<iostream>
using namespace std;
class Complex
{
    private:
    double real,img;
    public:
    void set(double x,double y)
    {
        real=x;
        img=y;
    }
    void operator ++()
    {
        real++;
        img++;
    }
    void operator --()
    {
        real--;
        img--;
    }
    void display()
    {
        cout<<"real ="<<real<<" imaginary="<<img<<endl;
    }
};
int main()
{
    Complex c1;
    c1.set(4,6);
    ++c1;
    c1.display();
    --c1;
    c1.display();

    return 0;

}