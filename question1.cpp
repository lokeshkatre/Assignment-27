#include<iostream>
using namespace std;
class Complex 
{
    private :
    double real, img;
    public:
    void operator=(Complex C)
    {
        real=C.real;
        img=C.img;
    }
    void set(double x,double y)
    {
        real=x;
        img=y;
    }
    Complex operator+(Complex C)
    {
        Complex temp;
        temp.real=C.real+real;
        temp.img=C.img+img;
        return temp;
    }
    Complex operator-(Complex C)
    {
        Complex temp;
        temp.real=real-C.real;
        temp.img=img-C.img;
        return temp;
    }
    Complex operator*(Complex C)
    {
        Complex temp;
        temp.real=C.real*real-C.img*img;
        temp.img=C.real*img+C.img*real;
        return temp;
    }
    int operator==(Complex C)
    {
        if(C.real==real && C.img==img)
        return 1;
        else return 0;
    }
    void display()
    {
        cout<<"real="<<real<<" imaginary="<<img<<endl;
    }
};

int main()
{
  Complex c1,c2;
  c1.set(3,4);
  c2.set(5,6);
  Complex c3=c1+c2;   
  c3.display();
  c3=c1-c2;
  c3.display();
  c3=c1*c2;
  c3.display();
  int n=c1==c2;
  cout<<n<<endl;
  c1.set(5,6);
  n=c1==c2;
  cout<<n<<endl;
}