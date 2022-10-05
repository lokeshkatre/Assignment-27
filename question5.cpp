#include<iostream>
using namespace std;
class Numbers
{
    private:
    int x,y,z;
    public:
    void input()
    {
        cout<<"Enter Three Numbers"<<endl;
        cout<<"first:";
        cin>>x;
        cout<<"second:";
        cin>>y;
        cout<<"third:";
        cin>>z;
    }
    void operator-()
    {
        x=-x;
        y=-y;
        z=-z;
    }
    void display()
    {
        cout<<x<<"\t"<<y<<"\t"<<z<<endl;
    }
};
int main()
{
    Numbers n;
    n.input();
    cout<<"numbers are:"<<endl;
    n.display();
    -n;
    cout<<"numbers are:"<<endl;
    n.display();

}