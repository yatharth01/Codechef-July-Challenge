#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
for(int i=0;i<t;i++)
{unsigned long long n,q;
cin>>n;
if(n==1)
cout<<"1 1";
else{
if(n%2!=0)
n=n-1;

int x=n/2;
cout<<"1 1";
for(int j=0;j<x;j++)
cout<<"0";

}
cout<<endl;
}
}
