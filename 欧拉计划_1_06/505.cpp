#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int n;
string num[105];

bool check(const string& a,const string& b){
    return a+b>b+a;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    sort(num,num+n,check);
    for(int i=0;i<n;i++){
        cout<<num[i];
    }
    cout<<endl;
    return 0;
}