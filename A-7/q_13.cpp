#include<iostream>
using namespace std;
void checksum(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j = i+1;j<n;j++){

				if(a[i]+a[j] ==n){
					cout<<i<<":"<<a[i]<<" "<<j<<":"<<a[j]<<endl;
				
			}
			else{
				continue;
			}
		}
	}
}
int main(){
	int a[1000];
	int n;
	int sum;
	cout<<"array size:";
	cin>>n;
	cout<<"enter sum value:";
	cin>>sum;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	checksum(a,sum);
	return 0;

}