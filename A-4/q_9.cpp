#include<iostream>
using namespace std;
int main(){
	int a[1000];
	int n;
	cout<<"enter number of entries:";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];

	}
	for(int i=0;i<n/2;i++){
		int temp = a[n-1-i];
		a[n-i-1]=a[i];
		a[i] =temp;
	}
	for(int i=0;i<n;i++){
		cout<<endl<<a[i]<<endl;

	}

	return 0;
}