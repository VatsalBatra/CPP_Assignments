#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b,c;
	int flag =0;
	cout<<"enter a,b,c for ax^2 +bx +c :";
	cin>>a>>b>>c;
	float descriminant = b*b-4*a*c;
	if(descriminant<0){
		cout<<"IMAGINARY ROOTS"<<endl;
		float imaginary_part =sqrt(-descriminant)/2*a;
		float y =imaginary_part;

		float root_1 = (-b )/(2*a) ;

	float root_2 = (-b)/(2*a);
	cout<<"root 1:"<<root_1<<'+'<<y<<'i'<<endl<<"root 2:"<<root_2<<'-'<<y<<'i'<<endl;


	}
	if(descriminant > 0){
		cout<<"DIFFERENT REAL ROOTS"<<endl;
		flag =1;
	}
	if(descriminant==0){
		cout<<"IDENTICAL REAL ROOTS"<<endl;
		flag =1;
	}
	if(flag==1){
		float root_1 = (-b + sqrt(descriminant))/(2*a);

		float root_2 = (-b - sqrt(descriminant))/(2*a);
		cout<<"root 1:"<<root_1<<endl<<"root 2:"<<root_2<<endl;
	}


	return 0;
}