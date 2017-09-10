#include<iostream>
using namespace std;

int binary_Search(int a[],int n,int x,int start){
	int mid = (n + start)/2;
	if(start > n ){
	
		return -1;

	}
	else if(a[mid] == x){
		return mid;
		
	}
	else if(a[mid] < x){
		start = mid+1;
		return binary_Search(a,n,x,start);


	}
	else{
		n = mid-1;
		return binary_Search(a,n,x,start);

	}

}
int main(){
	int arr[100];
	int x;
	int n;
	cout<<"enter number of inputs req for array:";
	cin>>n;
	cout<<"enter the number to be found:";
	cin>>x;
	cout<<"enter the array sorted in ascending order:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int i = binary_Search(arr,n-1,x,0);
	cout<<"req number is at:"<<i;

	return 0;
}