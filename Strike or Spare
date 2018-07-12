#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool palindrome(int x){
int num=x,rev=0;
while(num!=0)
{
int digit=num%10;
 rev=(rev*10)+digit;
num=num/10;
}
if(rev==x)
return true;

else return false;
}

int main(){
int t;
cin>>t;
for(int i=0;i<t;i++)
{unsigned long long n;
cin>>n;
if(n==1)
cout<<"1 1"<<endl;
else{
unsigned long long count=0;
unsigned long long length=n;
cout<<length<<endl;
for(unsigned long long j=pow(10,length-1);j<pow(10,length);j++)
{
if(palindrome(j))
count++;
}
unsigned long long q=pow(10,length)-pow(10,length-1);

for(unsigned long long j=count;j>1;j--)
{ if(count==1)
  break;

else{
  while((count%j==0)&&(q%j==0))
  {
  	count=count/j;
  	q=q/j;
  }
}
}
cout<<count<<" "<<q<<endl;
}
}
}
