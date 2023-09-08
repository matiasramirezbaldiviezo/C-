#include <iostream>
#include <vector>
#include <math.h>
#include <bitset>

using namespace std;

int main()
{
	/*cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	
	
	*/
	
	
	
	int a =2 ;
	int b= 100000; 
	long long r=1000000000000 ;
	vector<bool> vector(b+1);
	
	
	for (int i=a ; i <b;i++){
		
		for(int j=2; j<=sqrt(i); j++){
			if(i%j==0){
				vector[i]=1;
				break;
				
				
			}
			
			}
			for(int h=2 ; h<b; h++){
				if(vector[h]==0)
				cout<<h<<endl;
				
			}
			
			
			
			
			
			
		
		
		
		
		}
		
	
		
	return 0;
}