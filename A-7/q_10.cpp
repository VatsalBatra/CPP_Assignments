#include<iostream>
using namespace std;
//void squeeze is also easy and done
char* pushspace(char a[],int n){
	int count =0;
	int i=0;
	while(i<n && a[i]!='$'){

		if(a[i] ==' '){


			for(int j=i;j<n-1;j++){
				a[j] = a[j+1];

			}
			a[n-1]='$';
			i=i-1;
			

		}
			i=i+1;

	}
	return a;
}
int main(){
	char a[1000];
	int n = 0;
	char ch;
	
 	cout<<"enter array:";
		for(int i=0;ch!='\n';i++){
			ch = cin.get();
			a[i] = ch;
			n++;
		
		}
	pushspace(a,n);

	for(int j =0 ;a[j]!='$';j++){
			cout<<a[j];
		}

	return 0;

}