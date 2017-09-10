#include<iostream>
using namespace std;
int main(){
	int i ;
	char n;
	cout<<"enter desired character:";
	cin>>n;
	i =n;
	if(i<=122 &&i>=97){
		cout<<"LOWERCASE";
	}
	else if(i<=90 &&i>=65){
			cout<<"UPPERCASE";

		
	}
	else{
		cout<<"INVALID INPUT";
	}
	return 0;
}