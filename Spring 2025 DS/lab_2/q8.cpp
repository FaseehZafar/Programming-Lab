#include<iostream>
using namespace std;
int main(){

  float s=0,a=0,b=0,c=0;
  
  cout<<"Enter the value of a: "<<endl;
  cin>>a;
  
  cout<<"Enter the value of b: "<<endl;
  cin>>b;
  
  cout<<"Enter the value of c: "<<endl;
  cin>>c;
  
  s=((a*a)+(b*b)+(c*c)+(2*a*b)+(2*b*c)+(2*c*a));
  cout<<"The value of expression is: "<<s<<endl;
  
  
return 0;
}
