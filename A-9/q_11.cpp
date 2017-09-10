#include<iostream>
using namespace std;
void move_back(char a[],int *len, int start){
	if(start == *len){
		a[*len-1] = '\0';
		*len = *len-1;
		return;
	}
	a[start] = a[start+1];


	return move_back(a,len,start+1);
}
void remove_dup(char a[],int len,int start){
	if(start >= len){
		for(int i=0;a[i]!='\0';i++){
			cout<<a[i];
		}
		return;
	}

	else if(a[start] == a[start + 1]){
		move_back(a,&len,start);

		return remove_dup(a,len,start);

	}
	else{
		start = start+1;
		return remove_dup(a,len,start);


	}
}
int main(){
	char ch;
	char c;
	int len = 0;
	char a[100];
	cout<<"enter the string:";
	for(int i=0;ch!='\n';i++){
		ch = cin.get();
		a[i] = ch;
		len++;

	}

	remove_dup(a,len-1,0);

	return 0;

}