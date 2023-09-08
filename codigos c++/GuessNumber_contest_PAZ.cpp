#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string a;
	
	while(cin>>a){
		
		if(a== "*") break;
		
		if(a[0] =='N')  cout<<-1<<endl;
		
		else{
			long long b =1;
		    long long c =1;
		    
		    while(b< a.size()){
		    	if(a[b] == 'Y') c= c* (b+1 ) / __gcd(c, b+1 );
		    	b++;
		    	
		    	
			}
			b =1 ;
			
			bool d=true ;
			
			while(b< a.size()){
				if(a[b] == 'N' &&  c% (b+1) ==0) {
					d= false ;
					break;
				}
				b++;
			}
			
			if(d) cout<<c<<endl;
			else cout<<"-1"<<endl;
			
			
			}
			
			
			
		}
		return 0;
		
		
	}
	
	
	
	