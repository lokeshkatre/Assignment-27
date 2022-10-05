#include <iostream>
using namespace std;
class fraction
{
private:
    long numerator;
    long denominator;

public:
    fraction(long int n = 0, long int m = 0)
    {
        numerator = n;
        denominator = m;
    }
    fraction operator++()
    {
        ++numerator;
        ++denominator;
        return (*this);
    }
    fraction operator++(int num)
    {
        fraction temp = *this;
        numerator++;
        denominator++;
        return temp;
    }
    friend void operator<<(ostream &output, fraction &t)
    {
        output << t.numerator << "/" << t.denominator<<endl;
    }
    friend void operator>>(istream &input, fraction &t)
    {
        cout << "Numerator:\t:\t";
        input >> t.numerator;
        cout << "Denominator\t:\t";
        input >> t.denominator;
    }
};
int main()
{
    fraction f1,f2;
    cout<<"f1\t:\t";
    cout<<f1;
    cout<<"f2\t:\t";
    cout<<f2;
    cout<<"\n\nEnter 1st Fraction value\n\n";
    cin>>f1;
    cout<<"\nf1++\t:\t";
    f1++;
    cout<<f1;
    cout<<"\n++f1\t:\t";
    ++f1;
    cout<<f1;
    cout<<"\n\nEnter 2st Fraction value\n\n";
    cin>>f2;
    
    cout<<"\n\nf2  =  ++f1"<<endl;
    f2=++f1;
     cout<<"f1\t:\t";
     cout<<f1;
     cout<<"f2\t:\t";
     cout<<f2;

     cout<<"\n\nf2  =  f1++"<<endl;
     f2=f1++;
     cout<<"f1\t:\t";
     cout<<f1;
     cout<<"f2\t:\t";
     cout<<f2;
     
     
    return 0;
}