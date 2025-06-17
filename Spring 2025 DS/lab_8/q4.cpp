#include<iostream>
using namespace std;
int main()
{
  int arr[6]={0};
  for(int i=0;i<6;i++)
  {
    cin>>arr[i];
  }
  cout<<endl<<"Array is :"<<endl;
  for(int i=0;i<6;i++)
  {
    cout<<arr[i]<<" ";
  }
  int target=0;
  cout<<"Enter target:"<<endl;
  cin>>target;
  for(int i=0;i<6;i++)
  {
   for(int j=i+1;j<6;j++)
   {
    if(arr[i]+arr[j]==target)
    {
      cout<<arr[i]<<"+"<<arr[j];
      break;
    }
    else
    {
    continue;
    }
   }
   break;
  }
  return 0;
}  