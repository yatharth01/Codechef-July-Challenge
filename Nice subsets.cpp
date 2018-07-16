#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{  int n;
		cin>>n;
		int arr[n];
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		bool good=false;
	   for(int j=0;j<n;j++)
	   {
	   	if(arr[j]==1)
	   	{
	   		 good = true;
	   		 break;
	   	}
	   }
	   
	   int maximum;
	   maximum= *max_element(arr,arr+n);
	   
	   if(good)
	   cout<<"YES"<<endl;
	  
	   else{
	             int check=0;
	   	 for(int k=0;k<n;k++)
	   	 {
	   	 	if(arr[k]%2==0)
	   	 	{
	   	 		check=1;
	   	 	}
	   	 	
	   	 	else if((arr[k]%2!=0)&& (check==1))
	   	 	{
	   	 		good=true;
	   	 		break;
	   	 	}
	   	 }
	   
	   if(good)
	   cout<<"YES"<<endl;
	   
	   else{
	   for(int j=3;j<maximum;j=j+2)
	            { int check=0;
	   	 for(int k=0;k<n;k++)
	   	 {
	   	 	if(arr[k]%j==0)
	   	 	{
	   	 		check=1;
	   	 	}
	   	 	
	   	 	else if((arr[k]%j!=0)&& (check==1))
	   	 	{
	   	 		good=true;
	   	 		break;
	   	 	}
	   	 }
	   	 
	   }
	   if(good)
	   cout<<"YES"<<endl;
	   	 
	    else cout<<"NO"<<endl;
	   //cout<<"No"<<endl;
	   }
	   }
	   }

	
	return 0;
}
