#include<iostream>
using namespace std;

void insertion_sort(int a[],int n){
	if(n <=1){
		return;
	}
	insertion_sort(a,n-1);
	int last = a[n-1];
	int j=n-2;


	while(j>=0 && a[j] > last ){
		
		
		a[j+1] =a[j];
		j--;
	}
	a[j+1] =last;


	
}
int main(){
	int arr[100];
	int x;
	cout<<"enter number of array enteries:";
	cin>>x;
	cout<<"enter the array to be sorted:";
	for(int i=0;i<x;i++){
		cin>>arr[i];
	}
	insertion_sort(arr,x);
	for (int i=0;i<x;i++){
		cout<<" "<<arr[i]<<endl;
	}

	return 0;
}