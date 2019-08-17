#include<iostream> 
using namespace std;  
    
int Sqrt(int x)  
{     
if (x == 0 || x == 1)  
       return x;   
     
int first = 1, last = x, search;    
while (first <= last)  
{         
	int mid = (first + last) / 2;   
        
	if (mid*mid == x) 
	return mid; 
        
if (mid*mid < x)  
{ 
		first = mid + 1; 
		search = mid; 
}  
	else  
		last = mid-1;         
} 
    return search; 
}  
int main()  
{      
    int x;
	cout<<"ENTER THE VALUE OF x";
	cin>> x;
    cout << Sqrt(x) << endl; 
    return 0;    
} 