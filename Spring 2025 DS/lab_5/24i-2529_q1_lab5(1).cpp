#include <iostream>
using namespace std;

void perfect_number(int n) {  

	int sum=0;
	
    for(int i=n;i>=0;i--){
    	
		if(n%i==0&&n!=i){
			 sum=sum+i;
			 
			if(n==sum){
		cout<<"The number Entered is Perfect!!!!"<<endl;
		}
		
		else{
			//cout<<"The Number is not Perfect...."<<endl;
		}
		
		}
		
		else{
			//cout<<"The Number is not a perfect number...."<<endl;
		}
			
	}
	
}

int main() {
	
	int n=0;
	cout<<"Enter the Number to be checked: ";
	cin>>n;

			 perfect_number(n);
			 
	return 0;
}