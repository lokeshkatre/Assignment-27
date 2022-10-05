#include<iostream>
#include<cstring>
using namespace std;
class CString
{
    private:
    char str[30];
    public:
    void get()
    {
        cout<<"Enter string:"<<endl;
        cin>>str;
    }
    void display()
    {
        cout<<str<<endl;
    }
    CString operator+(CString s)
    {
        CString s2;
        strcpy(s2.str,str);
        strcat(s2.str,s.str);
        return s2;
    }
    int operator==(CString &s1)
    {
        int num=strcmp(str,s1.str);
        if(num==0)
        return 1;
        else 
        return 0;
    }  
};
int main()
{
    CString s1,s2,s3;
    s1.get();
    s2.get();
    cout<<"\nFirst string:\n";
    s1.display();
    cout<<"\n\nsecond string:\n";
    s1.display();
    s3=s1+s2;
    cout<<"\n\nresultant string:\n";
    s3.display();
    if(s1==s2)
    cout<<"\n\nStrings are equal"<<endl;
    else
    cout<<"\n\nStrings are NOT equal"<<endl;
 return 0;
}