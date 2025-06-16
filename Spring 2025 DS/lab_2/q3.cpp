#include<iostream>
using namespace std;
int main(){

  float height=0,radius=0,pi=3.1415,perimeter=0,surface_area=0,volume=0;
  
  cout<<"Enter the height value: "<<endl;
  cin>>height;
  
  cout<<"Enter the radius value: "<<endl;
  cin>>radius;
  
  perimeter = 2*pi*radius;
  cout<<"The value of perimter is: "<<perimeter<<endl;
  
  surface_area = 2*pi*radius*height;
  cout<<"The value of surface area is: "<<surface_area<<endl;
  
  volume = height*pi*radius*radius;
  cout<<"The value of volume is: "<<volume<<endl;
  
return 0;
}
