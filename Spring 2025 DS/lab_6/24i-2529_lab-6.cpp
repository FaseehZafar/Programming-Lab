#include<iostream>
#include<cmath>
using namespace std;

int hour1,minute1,n,x,result;
void hours_conversion(int &minute)
{
  hour1=minute/60;
}
void minutes_conversion(int &hour)
{
  minute1=hour*60;
}

 void timesTen(int &a)
{
a=a*10;
}

int square(int i)
{
i=i*i;
return i;
}

int power(int &d,int i)
{
int result=pow(d,i);
return result;
}


int main(){
      
      int a;
      cout<<"enter the value of a: "<<endl;
      cin>>a;
      timesTen(a);
      cout<<"a times 10 is: "<<a<<endl;
      cout<<endl;
      
      
      
      int d;
      cout<<"enter the value of d: "<<endl;
      cin>>d;
      cout<<"Numb Sqr Powr"<<endl;
      int i=0;
      for(i=1;i<=10;i++){
  
      cout<<i<<"    "<<square(i)<<"   "<<power(d,i)<<endl;
      }
      
      int hour,minute;
  cout<<"Enter hours :";
  cin>>hour;
  cout<<"Enter minutes:";
  cin>>minute;
  int e;
  cout<<"Conversion"<<endl<<"1-All into hours"<<endl<<"2-All into minutes"<<endl;
  cin>>e;
  switch(e)
  {
   case 1:
   hours_conversion(minute);
   hour+=hour1;
   cout<<"Hours "<<hour<<endl;
   break;
   case 2:
   minutes_conversion(hour);
   minute+=minute1;
   cout<<"Minutes "<<minute<<endl;
   break;
   default:
   cout<<"Invalid operation.";
   break;
  }
  
      
      return 0;
  }
  


