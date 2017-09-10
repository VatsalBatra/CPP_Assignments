#include<iostream>
using namespace std;
int fib(int n,int a,int b){
if(a == n){
	return 1;

}
if(a > n){
	return 0;

}
int temp = b;
b = a+b;
a= temp;
 return fib(n,a,b);
}
int main(){
	int n;
	cout<<"enter the number:";
	cin>>n; 
	int k = fib(n,0,1);
	cout<<k;
	return 0;
}