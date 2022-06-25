#include<bits/stdc++.h>
using namespace std;
using ll=long long;
typedef float f;
typedef double d;
typedef char c;
typedef short s;
#define MAX_SIZE 1000000000
#define MIN_SIZE 0
#define F false
#define T true
void Input(int Array[],int Size){
    for(int index=0;index<Size;++index){
        cin>>Array[index];
    }
}
int Count(int Array[],int Size_of_array){
    vector<int>Dynamic_Array;
    set<int>Unique_Element;
    for(int index=0;index<Size_of_array;++index){
        Unique_Element.insert(Array[index]);
    }
    set<int>::iterator element;
    for(element=Unique_Element.begin();element!=Unique_Element.end();++element){
        Dynamic_Array.push_back(*element);
    }
    int Size=Dynamic_Array.size();
    int dp[Size+1][Size_of_array+1];
    for(int i=0;i<Size+1;++i){
        for(int j=0;j<Size_of_array+1;++j){
            dp[i][j]=0;
        }
    }
    for(int i=0;i<Size+1;++i){
        for(int j=0;j<Size_of_array+1;++j){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            else if(Array[j-1]==Dynamic_Array[i-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[Size][Size_of_array];
}
int main(int atgc,char* argv[]){
    ios_base::sync_with_stdio(F);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    Input(arr,n);
    cout<<Count(arr,n);
}
