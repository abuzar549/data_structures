#include <iostream>
using namespace std;
// Diagonal Matrix

int main()
{
	int m;
	cout<<"enter dimension of your matrix";
	cin>>m;
	int arr[m];
	
	cout<<"enter the diagonal elements of your matrix row wise";
	for (int i=0;i<m;i++)
	{
		cin>>arr[i];
		
	}
	for (int i=0; i<m;i++)
	{
		for (int j=0; j<m;j++)
		{
			if(i==j)
			cout<<arr[i]<<" ";
			
			else
			cout<<"0 ";
		}
		cout<<endl;
	}
}
	
	
	

