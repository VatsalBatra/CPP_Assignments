#include<iostream>
using namespace std;
void match(char a[],char b[],int n,int m){
	int i;
	int j;
	int count = 0;
	for( i=0;i<n;i++){

		if(a[i] == b[0]){

			for( j=0;j<m;j++){
				if(a[i+j] ==b[j]){
					continue;
				}
				else{
					break;
				}
			}
		
			if(j==m){
				
						
						count = i;}
			

		
		}
	}
	cout<<count;
}
int main(){
		char ch;
	char c;
	int len = 0;
	char a[100];
	char b[100];
	int length =0 ;
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

	match(a,b,len-1,length-1);
	return 0 ;
	
}