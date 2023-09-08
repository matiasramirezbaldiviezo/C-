#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
    int t;
    cin >> t;
    int x=0;
    while(t--) {
        int n;
        cin >> n;
        
        if( n==1 || n==2 ){
        	x=0;
		}
		else {
			if(n%2==0){
				x=(n/2)-1 ;
				
				
			}
			else{
				x=((n+1)/2)-1;
				
				
			}
			
			
			
			
		}
		
        
        cout <<x <<endl;
    }
    
}