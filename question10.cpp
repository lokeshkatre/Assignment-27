#include<iostream>
using namespace std;
class Matrix
{
    private :
    int arr[3][3];
    public:
    void display()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<arr[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    Matrix operator+(Matrix m)
    {
        Matrix m2;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j< 3;j++)
            {
                m2.arr[i][j]=arr[i][j]+m.arr[i][j];
            }
        }
        return m2;
    }
    friend void operator>>(istream &input, Matrix &t)
    {
        cout << "\n\nEnter Matrix element(3 x 3):\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                input>>t.arr[i][j];
            }
        }
    }
    
};
int main()
{
    Matrix m1,m2,m3;
    cin>>m1;
    cin>>m2;
    cout<<"\nFirst Matrix :"<<endl;
    m1.display();
    cout<<"\nSecond Matrix :"<<endl;
    m2.display();
    m3=m1+m2;
    cout<<"\nAddition of Matrix :\n";
    m3.display();
    return 0;   
    
}