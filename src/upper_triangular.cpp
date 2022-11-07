#include <iostream>
using namespace std;
// upper triangular matrix

int main()
{
	int m,k=0;
	cout<<"enter dimension of your matrix";
	cin>>m;
	int arr[m];
	int ele = ((m*(m+1))/2);
	
	cout<<"enter the diagonal elements of your matrix row wise";
	for (int i=0; i<ele ;i++)
	{
		cin>>arr[i];
		
	}
	for (int i=0; i<m;i++)
	{
		for (int j=0; j<m;j++)
		{
			if (i==j || i<j)
			{
			cout<<arr[k]<<" ";
			k++;
			}
			
			else 
			cout<<"0 ";
		}
		cout<<endl;
	}
}
