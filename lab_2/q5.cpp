#include<iostream>
using namespace std;
int main(){

  float price=0,quantity=0,final_cost=0,tax=0,total_sales=0;
  
  cout<<"Enter the unit price of the choclates: "<<endl;
  cin>>price;
  
  cout<<"Enter the quantity of the choclates sold: "<<endl;
  cin>>quantity;
  
  total_sales=price*quantity;
  cout<<"Total sales: "<<total_sales<<endl;
  
  tax=total_sales*0.1;
  final_cost=total_sales-tax;
  
  cout<<"The Final Cost is: "<<final_cost<<endl;
return 0;
}
