#include<iostream>
using namespace std;

void reverse(int ar[],int first,int last);
void print(int ar[],int n);
int main()
{
 int ar[]={1,2,3,4,5,6,7,8};
 int n=sizeof(ar)/sizeof(ar[0]);
 print(ar,n);
 reverse(ar,0,n-1);
 print(ar,n);
 return 0;
}

void reverse(int ar[],int first,int last)
{
 int temp;
 if(first>=last)
  return;
 temp=ar[first];
 ar[first]=ar[last];
 ar[last]=temp;
 reverse(ar,first+1,last-1);
}

void print(int ar[],int n)
{
 cout<<"\n";
 for(int i=0;i<n;i++)
  cout<<ar[i]<<"  ";
 cout<<"\n";
}
