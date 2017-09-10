#include <cstring>
#include<iostream>

using namespace std;
char *chararr(char a[],int n){
	int temp;
	for(int i=0;i<n;i++){
		for(int j = 0;j<n-i;j++){
			if(a[j]<a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
			else{
				continue;
			}
		}
	}

	return a;

}
void comparepnc(char a[],char b[],int c,int d){
	
	chararr(a,c);
	chararr(b,d);

	int i;
	if(c!=d){
		cout<<"notsame";
		return;
	}
	// for(int j =0 ;a[j]!='\n';j++){
	// 		cout<<a[j];
	// 	}
	
	// for(int j =0 ;b[j]!='\n';j++){
	// 		cout<<b[j];
	// 	}
	
	for( i =0 ; i<c;i++){
		if(a[i]!=b[i]){
			cout<<"not same";
			break;
		}

	}
	if(i ==c){
		cout<<"same";
	}
//WHY ISNT STRCMP not WORKING
	// cout<<strcmp(a,b);
	 // if(!strcmp(a,b))
  //   {
  //       cout<<"Strings are equal!";
  //   }
}
int main(){
	char ch;
	char c;
	int len=0;
	int length =0;
	char a[100];
	char b[100];
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
	comparepnc(a,b,len-1,length-1);
	return 0;
}