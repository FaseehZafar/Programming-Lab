#include<iostream>
using namespace std;
int main(){

  int i=0,asci=0,sum=0;
  char name[20]={};
  
  cout<<"Enter your name:";
  cin>>name;

  for(int i=0;i<=5;i++){
  asci=name[i];
  sum+=asci;
  }
  
  cout<<sum<<endl;
  
  if(sum%2==0){
  
  cout<<"Even Number!!"<<endl;
  
    }
  
    else{
    cout<<"Odd Number!!"<<endl;
    
      }
  

return 0;
}
