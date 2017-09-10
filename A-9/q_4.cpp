#include<iostream>
using namespace std;

int zero_count(int a,int sum){

		// for(int i = 0;i<end;i++){
		// 	cout<<a[i]<<endl;
		// }

	if(a/10 == 0){
		return sum;
	}
	else if(a%10 ==0){
		sum = sum+1;
		a=a/10;
		return zero_count(a,sum);
	}
	return zero_count(a/10,sum);

}
int main(){
	int a;


	cout<<"enter number:";
	cin>>a;

	int x = zero_count(a,0);
cout<<"number of zero_count:"<<" "<<x<<endl; 
 	return 0;
}