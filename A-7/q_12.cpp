#include<iostream>
using namespace std;
int* pushzero(int a[],int n){
	int count =0;
	int i=0;
	while(i<n){
		if(a[i] ==0){
			count++;


			for(int j=i;j<n-1;j++){
				a[j] = a[j+1];

			}
			a[n-1]=0;
			i=i-1;
			

		}
		if(count>=n){
			break;
		}

			i=i+1;

	}
	return a;
}
int main(){
	int a[1000];
	int n;
	cout<<"array size:";
	cin>>n;
 	cout<<"enter array:";
		for(int i=0;i<n;i++){
		cin>>a[i];
	}
	pushzero(a,n);

	for(int j =0 ;j<n;j++){
			cout<<a[j];
		}

	return 0;

}