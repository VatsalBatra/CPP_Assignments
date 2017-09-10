#include<iostream>
using namespace std;
void rotate_n(char a[],int len,int n){
		int i;
	for( i = 0;i<n;i++){
		
		char temp;
		temp = a[len-2];
	
		for (int i = 0; i < len-2; i++)

		{
		a[len-2-i] = a[len-3-i];
		}
		a[0] = temp;

		
	}
	a[i+len] = '\n';

	
	for(int j =0 ;a[j]!='\n';j++){
			cout<<a[j];
		} 

}
int main(){
	char ch;
	char c;
	int len;
	char a[100];
	char b[100];
	for(int i=0;ch!='\n';i++){
		ch = cin.get();
		a[i]=ch;
		len++;

	}
	int n;
	cout<<"enter rotation number:";
	cin>>n;
	rotate_n(a,len,n);
	return 0;
}