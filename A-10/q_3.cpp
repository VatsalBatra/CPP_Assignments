#include<iostream>
using namespace std;
void pattern(int a[],int start,int end,char ans_array[],int k){

	if(start >end){
		for(int i = 0;i<k;i++){
			cout<<ans_array[i]<<" ";
		}
		cout<<endl;
		return;
	}
	if(1){
		ans_array[k] = a[start] + 64;
		pattern(a,start+1,end,ans_array,k+1);
	}
	if(a[start] == 1||a[start] == 2){
		if(a[start+1] && a[start+1] < 7){
			int digit  = a[start]*10 + a[start+1] + 64;

			ans_array[k] = digit;
			pattern(a,start+2,end,ans_array,k+1);
			
			}
		// else{
		// pattern(a,start+1,end,ans_array,k+1);
		// 	}
			return;
	}

return;




	}
int main(){
	int a[100];
	char ans_array[100];
	int n=0;
	cout<<"q_3";
	cout<<"enter number of elements:";
	cin>>n;
	cout<<"enter elements:";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	pattern(a,0,n-1,ans_array,0);
	return 0;

}