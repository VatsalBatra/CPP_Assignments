#include<iostream>
#include<math.h>
using namespace std;
void printset(char a[],int counter, int size,int j ){
	
}
void subsets(char a[], int size,int x,int counter){
	if(counter == x){
		return;

	}
	printset(a,counter,size,0)


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

int x = pow(2,size)
subsets(a,size,x);
return 0;
}