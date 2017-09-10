#include<iostream>
using namespace std;
int main(){
	int n;
	int k;
	int i=0;
	int sum = 0;
	cout<<"enter number:";
	cin>>n;
	k =n;
	int count =0;
	int digit,temp_digit;

	while(k!=0){
		count ++;
		k=k/10;

	}

	int temp =n;

	while( temp !=0){
		digit = temp%10;
		temp_digit = digit;
	
		for(i=0;i<count-1;i++){

			digit =digit*temp_digit;

		}
		sum = sum +digit;
		temp = temp/10;
	}

	if(n ==sum){
		cout<<"ARMSTRONG NUMBER";

	}
	else{
		cout<<"NOT AN ARMSTRONG NUMBER";
	}
	return 0;
}