#include<iostream>
using namespace std;
class mystring
{
    private:
    char str[100];
    public:
    void get()
    {
        cin>>str;
    }
    void operator!()
    {
        
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]>=65&& str[i]<=90)
            str[i]=str[i]+32;
            else if(str[i]>=97 && str[i]<=122)
            str[i]=str[i]-32;
        }
        cout<<"\n\nreverse case string is  :\n\n"<<str;
        
    }
    void display()
    {
        cout<<"\n\nstring is :\n\n";
        cout<<str;
    }
};
int main()
{
    mystring str;
    str.get();
    str.display();
    !str;
    return 0;
}