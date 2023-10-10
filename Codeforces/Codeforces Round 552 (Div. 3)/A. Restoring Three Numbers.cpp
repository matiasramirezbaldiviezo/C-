
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int n,m,a;
   cin>>n;
   cin>>m;
   cin>>a;
   int r=m*n;
   int c=a*a;
   int aux=0;
   while(r>0){
     r=r-c;
     aux++;
   }
   cout<<aux+1<<endl;

    return 0;
}
