#include<iostream>
using namespace std;
int main(){ 
	int n,m;
	char sign;
	cout<<"enter the numbers:";
	cin>>n>>m;
	cout<<"enter the operation sign:";
	cin>>sign;
	if(sign == '+'){
		cout<<n+m;
	}
	else if(sign == '-'){
		cout<<n-m;
	}

	else if(sign == '*'){
		cout<<n*m;
	}

	else if(sign == '/'){
		cout<<n/m;
	}
	else if(sign == '%'){
		cout<< n % m;

	}
	else{
		cout<<"INVALID OPERATION";
	}




	return 0;
}