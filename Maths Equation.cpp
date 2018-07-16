#include <iostream>
using namespace std;

int main() {
	int n,q;
	cin>>n>>q;
	int arr[n][2];
	int solution[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i][0]>>arr[i][1];
		solution[i]= 4 * arr[i][0] * arr[i][1] + 2 * max(arr[i][0],arr[i][1]);
	}
	int k;
	for(int j=0;j<q;j++)
	{  int count=0;
		cin>>k;
		for(int i=0;i<n;i++)
		{
			if(k==solution[i])
			count++;
		}
	}
	
	return 0;
}
