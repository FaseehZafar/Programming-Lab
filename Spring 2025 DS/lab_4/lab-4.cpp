 #include <iostream>
using namespace std;

int main() {
	
	int n;
	cout<<"Enter The Number of rows for first pattern: ";
	cin>>n;
	
		  for (int i = 1; i<=n ; i++) {
 	
 	for (int j = n; j>=i ; j--) {
    	
			 	cout<<"* ";
			 }
			 
			 	cout<<endl;
			 }
			 
	int m,c;
	cout<<"Enter The Number of rows for second pattern: ";
	cin>>m;	
	
	
	 for (int i = 1; i <=m ; i++) {
    	
    	for (int j = 1; j <= i; j++) {
    		
    		c=c+1;
    		cout<<c<<" ";
    		
    		 }   
	  
			cout<<endl;
			}	 
			
			
	int o;
	cout<<"Enter The Number of rows for third pattern: ";
	cin>>o;	
	
	
	for (int i = 1; i<=m ; i++) {
 	
	 	for (int j = m; j>=i ; j--) {
    	
			 	cout<<" ";
			 }
			 
    	
    	for (int k = 0; k < 2*i-1; k++) {
    		
    		cout<<"*";
    		
    		 }   
	  
			cout<<endl;
			}	
			
			
	int p;
	cout<<"Enter The Number of rows for fourth pattern: ";
	cin>>p;	
	
	
	for (int i = 1; i<=p ; i++) {
    	
    	for (int j = 1; j <= p; j++) {
    		
    		if(j==1){
    			cout<<"*";
			}
			
			else if(i==j){
    			cout<<"*";
			}
    		
    		else if(i==p){
    			cout<<"*";
			}
			else{
				cout<<" ";
			}
    		
    		 }   
	  
			cout<<endl;
			}
			 
	int q;
	cout<<"Enter The Number of rows for fifth pattern: ";
	cin>>q;	
	
	
	for (int i = 1; i<=q ; i++) {
    	
    	for (int j = 1; j <= q; j++) {
    		
    		if(i==1){
    			cout<<"*";
			}
			
			else if(i==q){
    			cout<<"*";
			}
    		
    		else if(j==1){
    			cout<<"*";
			}
			
			else if(j==q){
    			cout<<"*";
			}
			else{
				cout<<" ";
			}
    		
    		 }   
	  
			cout<<endl;
			}
			 
			 
			 

    return 0;
}