//递归法 && 记忆化数组
#include <iostream>

using namespace std;

long long num[55];

long long check(int n){
    if(n==1||n==2){
        return 1;
    }
    if(num[n]!=0){
        return num[n];
    }
    return num[n]=check(n-1)+check(n-2);
}

int main(){
    int t;
    cin>>t;
    cout<<"check(t)= "<<check(t)<<endl;

    return 0;
}