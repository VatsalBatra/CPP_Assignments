#include<iostream>
using namespace std;
bool check(char a[],int start,int end){

if(start >= end){
	return true;
}
if(a[0] != 'a'){
	return false;
}
if(a[start] == 'a'){
	if(a[start+1])
		if(a[start + 1] == 'a' || a[start+1] == 'b' && a[start + 2] == 'b') {
	check(a,start+1,end);
	}

}
if(a[start-1] == 'b' && a[start] == 'b')
	if(a[start+1]){
		if(a[start+1] == 'a' ||a[start+1]=='\n'){
	check(a,start+1,end);
	}


	}
	return false;
}
int main(){
	char ch; 
	char a[100];
	int size = 0;
	for(int i=0;ch != '\n';i++){
		ch = cin.get();
		a[i] = ch;
		size ++;
	}
	check(a,0,size-1);
	return 0;
}