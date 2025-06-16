#include<iostream>
using namespace std;
int main(){

  int a=0;
  float b=0;
  
  cout<<"Enter the number of units consumed: ";
  cin>>a;
  
    b=(a<=50)?(a*0.5):(a<=150)?(a*0.75):(a<=250)?(a*1.2):(a>250)?(a*1.5+((20/100)*(a*1.5))):0;
    cout<<b<<endl;
  
  
return 0;
}
