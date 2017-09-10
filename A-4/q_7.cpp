#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter numbers of elements in odd :";
	cin>>n;
	int a[1000];
	int index = 0;
	for (int i = 0; i <n; i++ )
	{
		cin>>a[i];
		
	}
	sort(a,a+n);
	for(int i=0;i<n-1;i++){
		if(i%2 ==0){
			if(a[i] != a[i+1]){

				index = i;
			cout<<a[index];
			break;
			}

		}

	}
	return 0;
}