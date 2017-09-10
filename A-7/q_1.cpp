#include<iostream>
using namespace std;
	
void append(char a[],char b[],int len){
	int i;
	int j;
	cout<<"yoyoyo";
			
			for( i =0 ;b[i]!='\n';i++){
			a[i+len-1] = b[i];
		}
			
		a[i+len] = '\n';
		
		cout<<"array _1:";
			for( j =0 ;a[j]!='\n';j++){
			cout<<a[j];
		}

		cout<<endl<<j<<endl;
	

}
int main(){
	char ch ;
	char c;
		char a[100];
		char b[100];
		int len;
			cout<<"array _1:";
		for(int i =0 ;ch!='\n';i++){
			ch = cin.get();
			a[i] = ch;
			len++;
		}
		cout<<"array _2:";
			for(int i =0 ;c!='\n';i++){
				c = cin.get();
			b[i] =c;
		}
		cout<<len;
		append(a,b,len);
	
		return 0;
}