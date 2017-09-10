#include<iostream>
using namespace std;
void swap(int *a,int *b){
	int temp  = *a;
	*a = *b;
	*b = temp;
	return;
}
int partition(int a[],int start,int end){
	int pt = start-1;
	int pivot = a[end];
	for(int i = start;i <= end; i++){
		if( a[i] <= pivot){
			swap( a+i,a+pt+1																																																																																																																																																																																																											AAQ																																																																																																																																																																																			 );
			pt++;

		}

	}
	cout<<"pivot point is:"<<a[pt-1]<<endl;
	return pt-1;
}
void quicksort(int a[],int start,int end){
if(start >= end){

	return;
}
int pivot_pt = partition(a,start,end);
quicksort(a,start,pivot_pt-1);
quicksort(a,pivot_pt+1,end);

}

int main(){
	int a[100];
	int n = 0;

	cout<<"enter number of elements:";
	cin>>n;
	cout<<"enter the array:";
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	quicksort(a,0,n-1);
	for(int i = 0;i<n;i++){
		cout<<a[i];
	}
	return 0;
}