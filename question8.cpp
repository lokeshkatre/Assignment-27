#include<iostream>
using namespace std;
class Matrix
{
    private :
    int arr[3][3];
    public:
    friend void operator>>(istream &input, Matrix &t)
    {
        cout << "\nEnter Matrix element(3 x 3):\n\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                input>>t.arr[i][j];
            }
        }
    }
    Matrix operator-()
    {
        Matrix temp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            temp.arr[i][j]=-arr[i][j];
        }
        return temp;
    }
    void display()
    {
        cout<<"\n\nMatrix is :\n\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<arr[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Matrix m;
    cin>>m;
    m.display();
    m=-m;
    m.display();
    
}