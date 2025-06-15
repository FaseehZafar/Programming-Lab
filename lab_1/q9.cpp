#include<iostream>
using namespace std;
int main(){

  int n=0,reversed=0;
  
  cout<<"Enter the four digit number to be reversed: "<<endl;
  cin>>n;
  
  reversed=(n%10)*1000+((n/10)%10)*100+((n/100)%10)*10+(n/1000);
  
  cout<<"The reversed number is : "<<reversed<<endl;
  
  
return 0;
}
