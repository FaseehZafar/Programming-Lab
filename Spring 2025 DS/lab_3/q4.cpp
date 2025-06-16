#include<iostream>
using namespace std;
int main(){

  int i=0,a=0,b=0,c=0,d=0;
  
  cout<<"Enter the value of a:";
  cin>>a;
  
  cout<<"Enter the value of b:";
  cin>>b;
  
  
  if(a==b){
    c=1;
    }
  
  else if(a>b){
  c=2;
  d=1;
    }
    else if(b>a){
    c=3;
    d=2;
      }
      else{
      }

    switch(c){
      case 1:cout<<"They are Equal!!"<<endl;
      break;
      
      case 2:cout<<"a is greater than b"<<endl;
      switch(d){
      case 1:cout<<"b is smaller than a!!"<<endl;
      break;
      }
      break;
      
      case 3:cout<<"b is greater than a"<<endl;
      switch(d){
      case 2:cout<<"a is smaller than b!!"<<endl;
      break;
      }
      break;
      
      default:cout<<"Incorrect numbers";
      break;
      }
  
return 0;
}
