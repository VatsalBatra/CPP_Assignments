#include<iostream>
using namespace std;
int main(){
	char temp = 'A';
	int n;
	cout<<"enter number of lines req:";
	cin>>n;
	for(int k = n;k>0 ;k--){
		temp ='A';
		for(int i =0 ;i<k;i++){
			cout<<temp;
			temp = temp+1;

		}
		temp=temp-1;

		for(int j = 0  ;j< k ;j++){
			char y =temp-j;
			cout<<y;


		}
		 	cout<<endl;
	}
	return 0;


}
