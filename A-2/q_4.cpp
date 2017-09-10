#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter year:";
	cin>>n;
	if(n%100 == 0){
		if(n%400 ==0 ){
			cout<<"yes";
		}
		else{
			cout<<"no";
		}
	}
	else if(n%4 ==0){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}


	return 0;
}