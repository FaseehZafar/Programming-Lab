#include <iostream>
using namespace std;

int main(){
	
	int n;
	int a[6]={0};
	
	cout<<"Enter the value of elements: "<<endl;
	for(int i=0;i<=5;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<=5;i++){
		
		if(a[i]>a[i+1]&&a[i]>a[i+2]&&a[i]>a[i+3]&&a[i]>a[i+4]&&a[i]>a[i+5]){
			
			cout<<a[i]<<", ";
			
		}
		
		else{
		continue;
		}
	}
	
	cout<<a[5];
	
	
	
	
    return 0;
}