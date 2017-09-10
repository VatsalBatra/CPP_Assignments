#include<iostream>
using namespace std;

int paths(int x,int y){

	if(x==1||y==1){
		return 1;
	}
	return paths(x,y-1)+paths(x-1,y);

}
int main(){

	int x =0;
	int y =0;
	cout<<"enter number of rows:";
	cin>>x;
	cout<<"enter number of columns:";
	cin>>y;



	int z = paths(x,y);
	cout<<"number of paths:"<<z<<endl;
 	return 0;
}