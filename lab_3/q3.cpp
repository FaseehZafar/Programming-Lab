#include<iostream>
using namespace std;
int main(){

  int i=1,a=0,b=0,c=0,counter=0;
  
  cout<<"Enter the integer:";
  cin>>a;

  for(int i=1;i<=a;i++){
  b=a/i;
  if(a%i==0){
    counter++;
    }
  }
  
  if(counter==2){
  
  cout<<"Prime Number!!"<<endl;
  
    }
  
    else{
    cout<<"Not A Prime Number!!"<<endl;
    
      }
  

return 0;
}
