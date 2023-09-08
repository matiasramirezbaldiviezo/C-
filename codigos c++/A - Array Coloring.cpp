#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;

    string palabra;
    int c=0;
    
    
    cin>>t;
    
    
    while (t--) {
    	
    	int n,p=0,im=0;
    	
    	cin>>n;
    	int v[n];
    
    	
    	for(int i=0 ; i<n ;i++){
    		cin>>c;
    		v[i]=c;
    		
    		if(v[i]%2==0) p++;
    		else im++;
    		
		}
		
		if(im%2==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

    
	}
  
    return 0;
}