#include<iostream>
using namespace std;
int main(){
	int m;
	int b[1000];
	cout<<"enter number of elements:";
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	int n;
	int a[1000];
	int m_1=0;
	int m_2=0;
	cout<<"enter number of elements:";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k=0;
	int j=0;

	for(int i =0;i<=n;i++){
		if(j==n){
			m_2 = m_1;
			m_1	=a[0];
			
			break;
		}
		else if(k == n){
			m_2 = m_1;
			m_1	=b[0];
			
			break;
		}
		else if(a[k]>b[j]){
			m_2 = m_1;
			m_1 = b[j];
			j++;
		}
		else if(a[k] <= b[j]){
			m_2 = m_1;
			m_1 = a[k];
			k++;
		}


		
	}
	cout<<endl<<m_1<<" "<<m_2<<endl;
	cout<<(m_1+m_2)/2<<endl;

	return 0;
}