#include<iostream>
using namespace std;
int Sum(int arr[],int n,int value,int value2){
    long long S=0;
    for(int i=value;i<=value2;i++){
        S+=arr[i];
	}
    return S;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
	}
    int T,l,r;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>l>>r;
        cout<<Sum(arr,n,l,r)<<endl;
    }
}
