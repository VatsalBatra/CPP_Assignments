#include<iostream>
using namespace std;
//HOW TO DO USING INT BINARY_SEARCH INSTEAD OF VOID
void reverse_number(int a[],int len,int start){
	if(start > len/2){
			for(int i = 0;i<=len;i++){
			cout<<a[i]<<endl;
		}
		return ;
	}

	int temp = a[len-start];
	a[len-start] = a[start];
	a[start] = temp;
	start = start+1;
	return reverse_number(a,len,start);


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
	
	reverse_number(a,n-1,0);

 	return 0;
}