#include<iostream>
using namespace std;
int main(){

  int a=2,b=1,c=0,i=0,sum=0;
  
  cout<<"Input:";
  cin>>c;
  cout<<"Output: "<<a<<" "<<b;
  
  for(int i=0;i<=c;i++){
  sum=a+b;
  cout<<" "<<sum;
  a=b;
  b=sum;
  
  }
  
  
  
return 0;
}


