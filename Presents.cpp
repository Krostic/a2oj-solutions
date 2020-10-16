#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	cin>>num;
	int arr[num];
	int narr[num];
	for(int i=1;i<=num;i++){
		cin>>arr[i];
	}
	for(int i=1;i<=num;i++){
		narr[arr[i]]=i;
	}
	for(int i=1;i<=num;i++){
		cout<<narr[i]<<" ";
	}
	return 0;
}
