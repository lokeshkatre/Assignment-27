#include<iostream>
using namespace std;
class time
{
     private :
     int hr,min,sec;
     public:
     
     friend int operator>>(istream &input,time &t)
     {
        cout<<"\n Enter Hours:";
        input>>t.hr;
        cout<<"\n Enter min:";
        input>>t.min;
        cout<<"\n Enter sec:";
        input>>t.sec;
        if(t.hr>24)
        return 1;
        else return 0;
     }
    friend void operator<<(ostream &output,time &t)
    {
        output<<"\n hours   :"<<t.hr;
        output<<"\n minutes :"<<t.min;
        output<<"\n seconds :"<<t.sec;  
    }
   
   int operator==(time t1) 
   {
      int totalTime=hr*3600+min*60+sec;
      int totalTime1=t1.hr*3600+min*60+sec;
      if(totalTime==totalTime1)
      return 1;
      else return 0;
   }
    
};
int main()
{
   time t1,t2;
   cout<<"Enter first Time:"<<endl;
   if(cin>>t1)
   {
      cout<<"\nINVALID TIME INPUT"<<endl;
      return 0;
   }
   cout<<"\nFirst time:"<<endl;
   cout<<t1;
   cout<<"\n\n\nEnter second time:"<<endl;
   if(cin>>t2)
   {
      cout<<"\nINVALID TIME INPUT"<<endl;
      return 0;
   }
   cout<<"\nsecond time:"<<endl;
   cout<<t2;
   if(t1==t2)
   cout<<"\n\nTimes are same"<<endl;
   else
   cout<<"\n\nTimes are NOT same"<<endl;
   
return 0;
}