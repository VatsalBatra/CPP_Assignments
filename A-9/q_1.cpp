#include<iostream>
using namespace std;
//HOW TO DO USING INT BINARY_SEARCH INSTEAD OF VOID
void binary_search(int a[],int mid,int start, int end,int num){
	if(start <= end){
		mid = (start + end)/2;
		if(num == a[mid]){
			cout<<"found it";

		}
		else if( num > a[mid]){

			start = mid+1;
			binary_search(a,mid,start,end,num);

		}
		else{
			end = mid-1;
			binary_search(a,mid,start,end,num);
		}

	}
	else{
		// for(int i = 0;i<end;i++){
		// 	cout<<a[i]<<endl;
		// }
		cout<<"not found";
	}

}
int main(){
	int a[100];
	int n =0;
	int y;
	cout<<"enter number to be found:";
	cin>>y;
	cout<<"enter number of elements:";
	cin>>n;
	cout<<"enter elements:";
	for(int i = 0;i < n ;i++){
		cin>>a[i];
	}
	binary_search(a,0,0,n-1,y);

 	return 0;
}