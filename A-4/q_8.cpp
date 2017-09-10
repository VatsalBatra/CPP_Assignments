#include<iostream>
using namespace std;


int main(){

	int a[1000];
	int b[1000];
	int n;
	int m;
	cout<<"enter number of elements in array 1 :";
	cin>>n;
	cout<<"enter number of elements in array 2 :";
	cin>>m;
	for (int i = 0; i < n;i++)
	{
		cin>>a[i];
	}
	for (int j = 0; j < m;j++)
	{
		cin>>b[j];

	}
	if(n<=m){
		sort(a,a+n);
		binary(a,b,m,0);
	}
	else{
		sort(b,b+m);
		binary(b,a,n,0);
	}














	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
		/* code */
	}
	for (int i = 0; i < m; ++i)
	{
		cout<<b[i]<<" ";
	}

	return 0;



}