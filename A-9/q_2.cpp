#include<iostream>
using namespace std;
//HOW TO DO USING INT BINARY_SEARCH INSTEAD OF VOID
int recursive_sum(int a[],int end,int sum){
	
if(end < 0){
	return sum;
}
sum = a[end] + sum ;

end = end-1;
return recursive_sum(a,end,sum);


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
	int x = recursive_sum(a,n-1,0);
	cout<<x;
 	return 0;
}