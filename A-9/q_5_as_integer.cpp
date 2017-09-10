#include<iostream>
using namespace std;
//HOW TO DO USING INT BINARY_SEARCH INSTEAD OF VOID
int reverse_number(int a,int rev){
	int num = 0;
	if(a == 0){
		return rev;
	}
	num = a%10;
	rev = rev*10 + num;
	a=a/10;
	return reverse_number(a,rev);

}
int main(){
	int a;
	cout<<"enter a number:";
	cin>>a;
	
	int x = reverse_number(a,0);
	cout<<x<<endl;

 	return 0;
}