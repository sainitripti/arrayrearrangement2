#include<iostream>
using namespace std;

void reverse(int ar[],int n);
void print(int ar[],int n);
int main()
{
 int ar[]={1,2,3,4,5,6,7,8};
 int n=sizeof(ar)/sizeof(ar[0]);
 print(ar,n);
 reverse(ar,n);
 print(ar,n);
 return 0;
}
void reverse(int ar[],int n)
{
 int i=0,j=n-1,temp;
 while(i<j)
 {
  temp=ar[i];
  ar[i]=ar[j];
  ar[j]=temp;
  i++;
  j--;
 }
}

void print(int ar[],int n)
{
 cout<<"\n";
 for(int i=0;i<n;i++)
  cout<<ar[i]<<"  ";
 cout<<"\n";
}
