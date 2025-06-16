#include<iostream>
using namespace std;
int main(){


  int a , b ,c,  sum;
  
  
  cout<<"Enter number:";
  cin>>c;

    for (int i = 1; i <= c; ++i) {
        a=1 , b=1;
        for (int j = 1; j <= i; ++j) {  
        
            cout << a<< " ";   
            sum=a+b ;
            a=b;
            b=sum;
        }
        cout << endl;  
    }
  

return 0;
}

