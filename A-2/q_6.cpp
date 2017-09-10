#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter number to convert to binary:";
	cin>>n;
	int a[1000];
	int i =0 ;
	while(n !=0 ){
		a[i] = n%2;
		n=n/2;
		i++;

	}
	cout<<endl;
	for(int j=i-1;j>=0;j--){
		cout<<a[j];
	}



	return 0;

}