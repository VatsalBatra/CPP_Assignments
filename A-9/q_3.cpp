#include<iostream>
using namespace std;

bool dec_val(int a[],int end){

		if(end==0){

			return true;
		}
		else if(a[end]<a[end-1]){
			end = end-1;
		
			return dec_val(a,end);
		}
		else{
	
		return false;
	}

}
int main(){
	int a[100];
	int n =0;

	cout<<"enter number of elements:";
	cin>>n;
	cout<<"enter elements:";
	for(int i = 0;i < n ;i++){
		cin>>a[i];
	}
	int x = dec_val(a,n-1);
	if(x==1){
		cout<<"in dec order"<<endl;
	}
	else{
		cout<<"not in dec order"<<endl;
	}
 	return 0;
}