#include<iostream>
using namespace std;
void Bubble_Sort(int a[],int n){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j = 0;j<n-i-1;j++){
			if(a[j]<a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
			else{
				continue;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	int a[100];
	int n;
	cout<<"enter size:";
	cin>>n;
	cout<<"enter values:";
	for (int i = 0;i<n;++i){
		cin>>a[i];
	}
	Bubble_Sort(a,n);
	
	return 0;
}