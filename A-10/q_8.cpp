#include<iostream>
using namespace std;
void shifter(char a[],int i,int start){

	if(start<=i+3){
		
		return;
	}
			
	a[start] =a[start-2];
	a[start-1] = a[start-3];
	


	shifter(a,i,start-2);



}
void changepi(char a[],int size,int i){

	if( i >= size){

		for (int i =0;i<size;i++){

		cout<<a[i];
	}
		return;
	}
	if(a[i] =='p' && a[i+1] == 'i'){

		size = size+2;
		a[size+1] = '\n';
		shifter(a,i,size);

		a[i] = '3';
		a[i+1] = '.';
		a[i+2] = '1';
		a[i+3] = '4';
		


	 return changepi(a,size,i);


	}

	 return changepi(a,size,i+1);

}
int main(){
	char a[100];
	char ch ;
	int size = 0;
	for (int i =0;ch!='\n';i++){
		ch = cin.get();
		a[i] = ch;

		size++;
	}

	changepi(a,size-1,0);
return 0;
}