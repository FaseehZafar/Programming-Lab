#include<iostream>
using namespace std;
int main()
{
   int arr[6]={0};
   for(int i=0;i<6;i++)
   {
     cin>>arr[i];
   }
   cout<<"Array is :";
   for(int i=0;i<6;i++)
   {
     cout<<arr[i]<<" ";
   }
   for(int i=0;i<6;i++)
   {
     if(arr[i]+1==arr[i+1])
     {
       continue;
     }
     else
     {
       cout<<"Missing number is "<<arr[i]+1;
       break;
     }
   }
   return 0;
 }  