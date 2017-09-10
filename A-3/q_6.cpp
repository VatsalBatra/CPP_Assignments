#include<iostream> 
using namespace std;
int main(){
	int n;
	cout<<"enter value of n:";
	cin>>n;
	for (int i=n;i>0;i--){
		for(int j=i;j>0;j--){
			cout<<"*";
		}
		for(int j=n-i;j > 0;j--){
			cout<<" ";
		}
		for(int j=0;j < n-i;j++){
			cout<<" ";
		}
		for(int j=i;j>0;j--){
			cout<<"*";
		}
		cout<<endl;
	}

	for (int i=0;i< n-1;i++){
		for(int j=i+1;j >=0;j--){
			cout<<"*";
		}

		for(int j=n-i-2;j>0;j--){
			cout<<" ";
		}
		for(int j =0;j<n-i-2;j++){
			cout<<" ";
		}
		for(int j=i+1;j >=0;j--){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}