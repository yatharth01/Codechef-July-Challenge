#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int prime_no(int n){
	int x=0;
	for(int j=2;j<n;j++)
	{
		if(n%j==0)
		{x=1;
		break;
		}
		
		else x=0;
	   
	}
	if(x==0)
	return true;
	else return false;

}


int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{           int n;
		cin>>n;
		int arr[n];
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		int check=0;
		sort(arr,arr+n);
		if(arr[0]==1)
		{   for(int j=1;j<n;j++)
			{ if(prime_no(arr[j]))
				{  check=1;
					cout<<arr[j]<<endl;
					break;
				}
			}
			if(check==0)
				cout<<"-1"<<endl;
		}
		else cout<<"-1"<<endl;
	}
	return 0;
}