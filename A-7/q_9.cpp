#include<iostream>
using namespace std;
void addNumber(char a[],char b[],char ans[]){
	int len=0;
	int length =0;
	for(int i=0;a[i]!='\n';i++){
		len++;
	}
		for(int i=0;b[i]!='\n';i++){
		length++;
	}
	int n = 0;
	int j=0;
	
	for(int i=len-1;i>=0;i--){
		int j=len;
		int k = a[i] +b[i] - '0'-'0' + n ;
		char l = k; 
		n =0;
		if( k >= 10){
			n = k/10;
			k = k%10;

		}

		ans[i] = k + '0';
	
		// cout<<k;

	}
	if(n!=0){

	 cout<<n;
	}
	 	for(int i=0;i<len;i++){
		cout<<ans[i];
	}
	
	

}
int main(){
		char ch;
	char c;
	int len = 0;
	char a[100];
	char b[100];
	int length =0 ;
	char ans[1000];
	for(int i=0;ch!='\n';i++){
		ch = cin.get();
		a[i]=ch;
		len++;

	}
	for(int i=0;c!='\n';i++){
		c = cin.get();
		b[i]=c;
		length++;

	}
	if(len!- length){
		cout<<"please use 0 to make to number of equal length";
	}

	addNumber(a,b,ans);
	return 0 ;
	
}