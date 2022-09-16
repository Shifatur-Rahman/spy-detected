#include<iostream>
using namespace std;
int main(){

int t,n,i;
cin>>t;

while(t--){
	cin>>n;
	int arr[n];
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	bool count = false;
	for(i=1; i<=n-1; i++ ){
		if(arr[i] != arr[i-1] && arr[i] != arr[i+1]){
			cout<<i+1<<endl;
			count = true;
		}
}

if(!count){
	if(arr[0] != arr[1]){
		cout<<1<<endl;
	} else{
	    cout<<n<<endl;
	}
}

}





}
