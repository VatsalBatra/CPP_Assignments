#include<iostream>
using namespace std;
//SQUARE_ROOT UPTO 5 DECIMAL PLACES
int main(){


	int n;
	cout<<"enter the number:";
	cin>>n;
	int dividend,divisor,digit;
	int i=1;
	int j=0;
	while(i*i<n){
		i=i+1;
	}

	i=i-1;
	divisor = 2*i;

	dividend = (n-i*i);
	cout<<i;
	cout<<".";
	while(j<=5){
		digit = 0;
		dividend = dividend*100;
		while((divisor*10+digit)*digit<dividend){
			digit=digit+1;

		}

		digit=digit-1;
		cout<<digit;
		dividend = dividend -((divisor*10+digit)*digit);
		divisor = divisor*10 + 2*digit;
		j = j+1;
		




	}
	cout<<endl;
	return 0;


}


