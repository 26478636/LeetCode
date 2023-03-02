#include <iostream>

using namespace std;

//输入
long long n;
char s[100005];

//存储c的个数
long cnum[100005];
//存储w的个数
long wnum[100005];

//结果
long ans;

int main(){
    cin>>n>>&s[1];
    //c的个数存储
    for(int i=1;i<=n;i++){
        cnum[i]=cnum[i-1]+(s[i]=='C');
    }
    for(int i=n;i>0;i--){
        wnum[i]=wnum[i+1]+(s[i]=='W');
    }
    for(int i=1;i<=n;i++){
        if(s[i]=='O'){
            ans+=cnum[i]*wnum[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}