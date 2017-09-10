#include<iostream>
using namespace std;
int main(){
	char a[1000];
	char ch;
	int j=0;
	cout<<"enter directions:";
	while (ch != '\n') {


        ch = cin.get();
        a[j] = ch;
        j++;
    }
    int flag = 0;
    int n=0;
    int s=0;
    int e=0;
    int w=0;
    int i=0;
    while(a[i] != '\n'){
    	if(a[i] == 'n' || a[i] == 'N'){
    		n++;
    	}
    	else if(a[i] == 's' || a[i] == 'S'){
    		s++;
    	}
    	else if(a[i] == 'e' || a[i] == 'E'){
    		e++;
    	}
    	else if(a[i] == 'w' || a[i] == 'W'){
    		w++;
    	}
    	else {
    		cout<<"Wrong Input";
    		flag = 0;
    		break;
    	}
    	i++;

    }

    char b[100];
    int l=0;
    
    	if(e-w > 0){
    		int r = e-w ;
    		while(r>0){
    		b[l]='E';
    		l++;
    		r--;
    		}


    	}
    	if(n-s > 0){
    		int r = n-s ;
    		while(r>0){
    		b[l]='N';
    		l++;
    		r--;
    		}


    	}
    	if(s-n > 0){
    		int r = s-n ;
    		while(r>0){
    		b[l]='S';
    		l++;
    		r--;
    		}


    	}
    	if(e-w > 0){
    		int r = w-e ;
    		while(r>0){
    		b[l]='W';
    		l++;
    		r--;
    		}


    	}

    	b[l] ='\n';
    	int y=0;
    	while(b[y]!='\n'){
    		cout<<b[y]<<" ";
    		y++;
    	}
    	cout<<endl;


	return 0;
}