#include <iostream>
using namespace std;
int main()
{
	int arr[10],n,i,max;
	cout<<"ENTER ARRAY SIZE";
	cin>>n;
	cout<<"ENTER THE ELEMENTS OF ARRAY";
	for(i=0;i<n;i++)
		cin>>arr[i];
		max=arr[0];
		for (i=0;i<n;i++)
		{
			if(max<arr[i])
				max=arr[i];
		}
cout<<"GREATEST ELEMENT IS:" << max;
return 0;
}

