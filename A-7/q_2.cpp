#include<iostream>
using namespace std;
void reverse(char a[] , int len){
	int i;
	for( i = 0;i<len/2;i++){
		
		char temp;
		temp = a[i];
		a[i] = a[len-2-i];
		a[len-2-i] = temp;
		
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
	
	reverse(a,len);
	return 0;
}