#include<iostream>
using namespace std;
int main(){
	int count =0;
	int n;
	cout<<"enter an integer:";
	cin>>n;
	int k;
	while(n!=0){
		k = n%2;
		if(k == 1){
			count++;
		}
		n = n/2;
	}
	cout<<count;

}