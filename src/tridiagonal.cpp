#include <iostream>
using namespace std;
// tridiagonal matrix

int main()
{
	int m,k=0;
	cout<<"enter dimension of your matrix";
	cin>>m;
	int arr[m];
	
	cout<<"enter the elements of your tridiagonal matrix row wise";
	for (int i=0; i<(3*m-2) ;i++)
	{
		cin>>arr[i];
		
	}
	for (int i=0; i<m;i++)
	{
		for (int j=0; j<m;j++)
		{
			if (i==j || i-j ==1 || j-i==1)
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

