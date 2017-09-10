#include<iostream>
using namespace std;
void reverse_string(char a[],int len,int start){
	if(start >len/2){
		for(int i = 0;i<=len;i++){
			cout<<a[i];
		}
		return ;
	}
	int temp = a[len-start];
	a[len-start] = a[start];
	a[start]  = temp;
	start = start +1;
	return reverse_string(a,len,start);

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
	reverse_string(a,len,0);

	return 0;

}