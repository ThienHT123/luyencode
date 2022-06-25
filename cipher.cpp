#include<bits/stdc++.h>
using namespace std;
using ll=long long;
typedef int INT_32;
typedef float REAL;
typedef double DOUBLE;
typedef char CHAR;
typedef string STR_DEFINE;
#define Max 1000000000
#define MIN 0
#define T true
#define F false
INT_32 main(){
    STR_DEFINE Str;
    getline(cin,Str);
    INT_32 count=0;
    for(INT_32 c=0;c<Str.length();++c){
        if(Str[c]>='0' && Str[c]<='9'){
            count++;
        }
    }
    INT_32 n[Str.length()-count];
    vector<INT_32>Pos;
    for(INT_32 c=0;c<Str.length();++c){
        if(Str[c]>='0' && Str[c]<='9'){
            Pos.push_back(c);
        }
    }
    vector<INT_32>strcopy;
    vector<INT_32>::iterator it;
    vector<CHAR> c_1;
    for(it=Pos.begin();it!=Pos.end();++it){
          strcopy.push_back(Str[*it]);
    }
    for(INT_32 c=0;c<Str.length();++c){
        if(Str[c]>='A' && Str[c]<='z'){
            c_1.push_back(Str[c]);
        }
    }
    INT_32 j=0;
    for(it=strcopy.begin();it!=strcopy.end();++it){
        if(*it == 48){
            j+=0;
        }
        else if(*it == 49){
            j+=1;
        }
        else if(*it == 50){
            j+=2;
        }
        else if(*it == 51){
            j+=3;
        }
        else if(*it == 52){
            j+=4;
        }
        else if(*it == 53){
            j+=5;
        }
        else if(*it == 54){
            j+=6;
        }
        else if(*it == 55){
            j+=7;
        }
        else if(*it == 56){
            j+=8;
        }
        else if(*it == 57){
            j+=9;
        }
    }
    string nums=to_string(j);
    for(INT_32 i=0;i<c_1.size();++i){
        cout<<c_1[i];
        if(i==c_1.size()-1){
            cout<<nums;
        }
    }
}