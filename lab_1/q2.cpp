#include<iostream>
using namespace std;
int main(){
  int a=0,b=0,c=0,d=0;
  float total_cost=0,tax=0,final_cost=0,tax_rate=0;

  cout<<"Enter the cost of 1st item: "<<endl;
  cin>>a;
  
  cout<<"Enter the cost of 2nd item: "<<endl;
  cin>>b;
  
  cout<<"Enter the cost of 3rd item: "<<endl;
  cin>>c;
  
  cout<<"Enter the cost of 4th item: "<<endl;
  cin>>d;
  
  cout<<"Enter the Tax Rate "<<endl;
  cin>>tax_rate;
  
  total_cost=a+b+c+d;
  tax=total_cost*(tax_rate/100);
  final_cost=total_cost+tax;
  
  cout<<"The Final Cost is: "<<final_cost;
  
  

return 0;
}
