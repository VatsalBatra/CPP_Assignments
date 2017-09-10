#include<iostream>
using namespace std;
int main(){
	int n;
	int temp = 0 ;
	int flag = 0;
	cout<<"enter number of enteries:";
	cin>>n;
	int a[1000];
	cout<<"enter values:";
	for (int i = 0;i<n;i++){
		cin>>a[i];
	}
	for(int i = 1; i <n ; i++){
		if(a[i-1] > a[i]){
			temp = i;
		}
		else{

			break;
		}

	}
	if(temp == n-1){
		cout<<"no";
	}
	
	for(int i = temp;i<n-1;i++ ){

		if( a[i] < a[i+1]){
			flag = 1;

		}
		else{
			flag = 0;
			cout<<"no";
			break;
		}


	}
	if(flag == 1){
		cout<<"yes";
	}

	return 0;
}