#include<iostream>
#include<math.h>
#include<string>
#include<cstring>
using namespace std;
void patternMaker(char a[],int start,int end,int len,char ans_array[],int k){

// char Letters[][4] = {
//     {'0'},
//     {'1'},
//     {'a', 'b', 'c'},
//     {'d', 'e', 'f',' '},
//     {'g', 'h', 'i',' '},
//     {'j', 'k', 'l',' '},
//     {'m', 'n', 'o', ' '},
//     {'p', 'q', 'r', 's'},
//     {'t', 'u', 'v', ' '},
//     {'w', 'x', 'y', 'z'}
//   };
const char Letters[10][5] = {"", "", "abc", "def", "ghi", "jkl",
                               "mno", "pqrs", "tuv", "wxyz"};
 
if(start > end){
	// for(int i=0;ans_array[i]!='\n';i++){
	// 	cout<<a[i];
	// }
	// cout<<endl;
	return;
}
int size = 0;
for(int i=0; Letters[start][i] !='\n';i++){
	size++;
}

if(len >=size){
	// int x = 0;
	// *len = x;
	return;
}



	int digit = a[start]-'0';
	cout<<digit<<endl;
	ans_array[k] = Letters[digit][len];
	ans_array[k+1] = '\n';
	patternMaker(a,start+1,end,len,ans_array,k+1);

	patternMaker(a,start,end,len+1,ans_array,k+1);
return;
// 	cout<<Letters[digit][len];
// 	start = start+1;
// 		patternMaker(a,start,len,size);
// 	cout<<endl;

// 	cout<<Letters[digit-1][len];
// 	len = len+1;
// 	cout<<"start"<<start<<endl;
// 	patternMaker(a,start,len,size);
// 	return;

// }
}
int main(){
char ans_array[100];
char a[100];
	char ch ;
	int size = 0;
	for (int i =0;ch!='\n';i++){
		ch = cin.get();
		a[i] = ch;

		size++;
	}

patternMaker(a,0,size-1,0,ans_array,0);
return 0;
}