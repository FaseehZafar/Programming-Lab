#include<iostream>
#include<cmath>
using namespace std;
int main(){

  float p=0,A=1,r=0,t=0;
  
  cout<<"Enter the value of p: "<<endl;
  cin>>p;
  
  cout<<"Enter the value of r: "<<endl;
  cin>>r;
  
  cout<<"Enter the value of t: "<<endl;
  cin>>t;
  
  p*=pow((1+(r/100)),t);
  A *= p;
  cout<<"The value of A is: "<<A<<endl;
  
  
return 0;
}
