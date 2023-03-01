#include <iostream>
#include <algorithm>

using namespace std;

//n个人过河
int n;
//每个人(n)过河所用的时间
int num[105];
//n个人过河总的时间
int ans;

int main(){
    cin>>n;
    //传输入
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    sort(num,num+n);
    for(int i=n-1;i>=0;i-=2){
        if(i==0){
            ans+=num[0];
        }else if(i==1){
            ans+=num[1];
        }else if(i==2){
            ans+=num[1]+num[0]+num[2];
            break;//运用的很巧妙，别忘了
        }else{
            //要物归原主
            ans+=min(num[i]+num[0]+num[i-1]+num[0],num[1]+num[0]+num[i]+num[1]);
        }
    }
    cout<<ans<<endl;
    return 0;
}