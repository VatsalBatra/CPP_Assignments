#include<iostream>
using namespace std;

int main() {

    int count = 0;
    char ch; 
    char a[1000];
    int i=0;
    	int character = 0; 
	int line = 1;
	int words = 1;
    while (ch != '$') {


        ch = cin.get();
        a[i] = ch;
        i++;
    }

    int j=0;
    while(a[j] != '$'){
    	cout<<a[j]<<" "<<j<<endl;
    	if(a[j]=='\n'){
			line++;

		}
		j++;
    }
    j=j-1;
    i=0;
    int flag =0;
    while(a[i]!='$'){
    	if(a[i] == ' ' || a[i] == '\n' ||a[i] == '\t' ){
    		flag = 1; 
    	}
    	else{
    		if(flag == 1){
    			words ++;
    		}
    		flag = 0;
    	}
    	i++;
    }
 //    while(a[i+1]!='$'){
 //    	cout<<a[i]<<endl;
	// 	if(a[i] == ' ' && a[i+1] != ' '){
	// 		words ++;
	// 		cout<<words;
	// 	}
	// 	if(a[i] == '\n' && a[i+1] != '\n'){
	// 		words ++;
	// 		cout<<words;
	// 	}
	// 	if(a[i] == ' ' && a[i+1] != '\n'){
	// 		words ++;
	// 		cout<<words;
	// 	}
	// 	if(a[i] == '\n' && a[i+1] != ' '){
	// 		words ++;
	// 		cout<<words;
	// 	}
	// 	i++;
	// }
	
    cout<<"CHARACTERS:"<< j<<endl<<"WORDS:"<<words<<endl<<"LINES:"<<line<<endl;

    return 0;
}
