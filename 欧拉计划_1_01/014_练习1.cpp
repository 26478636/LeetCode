#include <iostream>

using namespace std;

//递归公式
long long check(int n){
    if(n==1||n==2){
        return 1;
    }
    return check(n-1)+check(n-2);
}

int main(){
    int t;
    cin>>t;

    // long long ans=check(t);
    // cout<<"ans= "<<ans<<endl;

    long long arr[55]={1,1};

    for(int i=2;i<t;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }

    cout<<"arr[i-1]= "<<arr[t-1]<<endl;

    return 0;
}