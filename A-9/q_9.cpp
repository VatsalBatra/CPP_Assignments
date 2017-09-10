#include<iostream>
using namespace std;
int smallest(int a[],int start,int len,int small){

	if(start >= len){

		return small;
	}
	else{
	if(a[small] > a[start]){

	
		small = start;
		start = start+1;
		return smallest(a,start,len,small);


	}
	else{
		start = start+1;
		return smallest(a,start,len,small);
	}
}
}
void selection_Sort(int a[],int start, int len){

	if(start >= len-1){

		for(int i=0;i<len;i++){
			cout<<a[i];
		}
		return;
	}

int index  = smallest(a,start,len,start);
int temp = a[start];
a[start] = a[index];
a[index] = temp;

start =start+1;

selection_Sort(a,start,len);

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
	selection_Sort(a,0,n);

 	return 0;
}