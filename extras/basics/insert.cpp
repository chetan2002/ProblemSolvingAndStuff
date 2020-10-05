#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[10000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int pos;
	cin>>pos;
    int value;
    cin>>value;
	for(int i=n;i>pos;i--){
		arr[i]=arr[i-1];
	}
	n++;
    arr[pos]=value;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}


}


//1 2 3 4 5 6
