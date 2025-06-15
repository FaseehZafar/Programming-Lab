#include<iostream>
#include<cmath>
using namespace std;
int main(){

  float distance=0,fuel_rate=0,cost_litre=0,total_fuel=0,total_cost=0;
  
  cout<<"Enter the value of distance: "<<endl;
  cin>>distance;
  
  cout<<"Enter the fuel consumption rate: "<<endl;
  cin>>fuel_rate;
  
  cout<<"Enter the value of cost per litre "<<endl;
  cin>>cost_litre;
  
  total_fuel=distance/fuel_rate;
  cout<<"The total fuel is: "<<total_fuel<<endl;
  
  total_cost=total_fuel*cost_litre;
  cout<<"The total cost is: "<<total_cost<<endl;
  
  
return 0;
}
