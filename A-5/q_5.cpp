#include<iostream>
using namespace std;

bool sumZero(int a[],int n){
	int sum =0;
	for(int i= 0;i<n;i++){
		if(a[i] ==0){
			return 1;
		}
		for (int j = i+1; j<n ; j++){
			sum =sum +a[j];
			if(sum ==0){
				return 1;
			}


		}
	}
	return 0 ;
	
}
	
int main(){
	int a[100];
	int x;
	cout<<"enter number of array enteries:";
	cin>>x;
	cout<<"enter the array :";

	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	int y = sumZero(a,x);
	if(y ==1){
		cout<<"zerosum";

	}
	else{
		cout<<"sumnotzero";
	}
	
	return 0;
}