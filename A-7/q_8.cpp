#include<iostream>
using namespace std;
void compress(char a[]){
	int len = 0;
		int count =1;
	for(int i = 0;a[i]!='\n';i++){
		len++;
	}

	cout<<len<<endl;
	// if(len ==2){
	// 	len = len+1;
	// 	a[i+1] = count +'0';
	// 	count =1;
	// 	a[len-1] = '\n';
	// 	return;


	// }
	// if(len ==1){
	// 	len = len+1;
	// 	a[i+1] = '0';
	// 	count =1;
	// 	a[len-1] = '\n';
	// 	return;

	// }
	


	for(int i = 0;a[i]!='\n';i++){
		if(a[i]==a[i+1]){
		count++;
		continue;	
		}
		else{
		cout<<count<<endl;
		int n = count-2;
		if(n>0){
			a[i- count+2] =count +'0';
			for(int j = i;j<n;j++ ){
				cout<<"yo"<<endl;
				a[j] = a[j-count+1] ;


			}
			count = 1;
			i = i - n;
		}
		else if(n==0){
			cout<<"case_2:";
			a[i] = '2';
			count =1;

		}
		else if(n<0 &&a[i+1]!='\n'){
			cout<<"ND "<<" "<<endl;
			for(int j =len-1;j>i;j-- ){

				//cou<<"dd";
				cout<<"before "<<a[j+1]<<" "<<a[j]<<endl;
				a[j+1] = a[j];
					cout<<"after "<<a[j+1]<<" "<<a[j]<<endl;
			}
			
			a[i+1] = count +'0';
			len = len+1;
			count =1;
			a[len-1] = '\n';
			i=i+1;
			for(int j = 0;a[j]!='\n';j++ ){
				cout<<endl<<"uououo "<<a[j]<<endl;
			}
		}
	}


}
for(int j = 0;a[j]!='\n';j++ ){
		cout<<a[j];
	}
}
int main(){
		char ch;
	char c;
	int len;
	char a[100];

	for(int i=0;ch!='\n';i++){
		ch = cin.get();
		a[i]=ch;
		len++;

	}
	
	compress(a);

	return 0;
}