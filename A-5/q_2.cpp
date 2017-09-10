#include<iostream>
using namespace std;

void selection_sort(int a[],int n){
	if(n ==1){

		return;
	}
	selection_sort(a,n-1);
	int j;
	
	j = n-1;
	while(j>=0 && a[j] < a[j-1]){
	
		int temp = a[j];
		a[j] =a[j-1];
		a[j-1] =temp;
		j--;
	}

	
}
int main(){
	int arr[100];
	int x;

	cout<<"enter number of elements req:";
	cin>>x;
	cout<<"enter the array to be sorted:";
	for(int i=0;i<x;i++){
		cin>>arr[i];
	}
	selection_sort(arr,x);
	for (int i=0;i<x;i++){
		cout<<" "<<arr[i]<<endl;
	}

	return 0;
}