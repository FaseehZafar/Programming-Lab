#include<iostream>
using namespace std;
int main()
{
  int a[6]={0};
  for(int i=0;i<=5;i++)
  {
    cin>>a[i];
  }
  cout<<"Array is :";
  for(int i=0;i<6;i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
  
  for(int i=0;i<=5;i++){
  int count=0;
  	for(int j=0;j<=5;j++){
  		
  		if(a[j]==a[i]){
  			count++;
		  }
	  }
     cout<<a[i]<<" Occurs "<<count<<" times."<<endl;
  }
  return 0;
}