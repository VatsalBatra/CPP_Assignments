#include<iostream>
using namespace std;
void reverse_string(char a[],char b[],int len,int start){
	if(start ==len){
	

		cout<<"reverse"<<endl;
		return;
	}
if(a[start] == b[len-start-1]){
	start = start+1;
	return reverse_string(a,b,len,start);
}
else{
cout<<"not reverse"<<endl;
return;
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
	int leng = 0;
	char b[100];
	cout<<"enter the string:";
	for(int i=0;c!='\n';i++){
		c = cin.get();
		b[i] = c;
		leng++;
	}
	if(len != leng){
		cout<<"not reverse"<<endl;
		return 0;

	}

	reverse_string(a,b,len-1,0);

	return 0;

}