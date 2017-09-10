#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number of racks:";
	cin>>n;
	for(int i = 0;i<n;i++){
		for (int j=0;j<n-i;j++){
			cout<<" ";
		}
		int temp = 1;
		for(int k =0 ; k<=i ;k++){
			cout<<" "<<temp;
			temp = temp*(i-k)/(k+1);
		}
		cout<<endl;
	}


	return 0;
}