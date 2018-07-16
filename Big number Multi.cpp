#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{  string s1,s2;
		cin>>s1>>s2;
		int length=s1.size();
		int length2=s2.size();
		
		long long sum=0;
		
		for(int j=0;j<length;j++)
		{
		  sum= ((sum%3) +((s1[j]-'0')%3))%3;
		}
	        //	cout<<sum<<endl;
		long long sum2=0;
		for(int j=0;j<length2;j++)
		{
		 sum2= ((sum2%3)+((s2[j]-'0')%3))%3;
		}
		int ans;
		ans= ((sum%3) * (sum2%3))%3;
		cout<<ans<<endl;
		
	}
	return 0;
}
