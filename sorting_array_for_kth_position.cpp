#include<iostream> 
using namespace std;
 
int main()
{
int a[50],n,i,j,temp,k;
cout<<"Enter the size of array: ";
cin>>n;
cout<<"Enter the elements in an array: "; 
for(i=0;i<n;++i)
cin>>a[i];
for(i=1;i<n;++i)
{
for(j=0;j<(n-i);++j)
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
cout<<"Sorted array: ";
for(i=0;i<n;++i)
{
	cout<<" "<<a[i];
}
cout<<"Enter the value of k for the kth position element in the array ";
cin>>k;
for(i=0;i<n;++i)
{
	if(i+1==k)
	{
		cout<<"Kth element is";
		cout<<a[i];
	}
} 
}