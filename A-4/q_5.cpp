#include<iostream>
using namespace std;
int main(){
	int n;
	int a[1000];
	cout<<"enter number of elements:";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int i=0;
	int max =-10000;
	int b[1000] ={0};
	while(i<n){
		b[a[i]] =b[a[i]]+1;
		if(a[i]>max){
			max=a[i];
		}
		i++;
	}
	for(int k=0;k<=max ;k++){
		if(b[k]!=0){
		cout<<k<<"-"<<b[k]<<endl;
		}
	}

	return 0;
}