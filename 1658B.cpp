#include <bits/stdc++.h>
using namespace std;
 
#define int int64_t
 
 
int32_t main() {
	
    int t=1;
    cin>>t;
    
    while(t--)
    {
    	
    	int n;
    	cin>>n;
    	if(n%2)
    	cout<<0<<endl;
    	else
    	{
	    	int ans=1;
	    	
	    	for(int i=1;i<=n/2;i++)
	    	{
	    		ans *=i;
	    		ans%=998244353;
	    		ans *=i;
	    		ans%=998244353;
	    	}
	    	cout<<ans<<endl;
	          
      }
        
        
    }
    
	return 0;
}