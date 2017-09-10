#include<iostream>
using namespace std;
int count_steps(int n){
	if(n==1){
		return 1;

	}
	if(n==2){
		return 2;

	}
	if(n==3){
		return 4;

	}

	return count_steps(n-1)+count_steps(n-2)+count_steps(n-3);
}
int main(){
	int n;
	cout<<"enter number of steps:";
	cin>>n;
	int x = count_steps(n);
	cout<<"number of ways:"<<x<<endl;
	return 0;
}