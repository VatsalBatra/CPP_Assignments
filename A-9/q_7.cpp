#include<iostream>
using namespace std;
// HOW WITHOUT START
float geo_sum(int k,float sum,int start,float add){
	
	if(k == start)
	{
		return sum + 1;
	}
	add = add * 1/2 ;

	start = start+1;
	sum = sum + add;

	return geo_sum(k,sum,start,add);

}
int main(){
	int a[100];
	int k =0;
	cout<<"enter number of elements:";
	cin>>k;
	
	float x = geo_sum(k,0,0,0.5);
	cout<<"sum is:"<<" "<<x<<endl;
 	return 0;
}