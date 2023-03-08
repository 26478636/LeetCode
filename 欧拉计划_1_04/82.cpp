#include <iostream>
#include <algorithm>

using namespace std;

int n,m;
int num[10005];

int func(int x){
    int sum=0;
    for(int i=0;i<n;i++){
        if(num[i]>x){
            sum+=num[i]-x;
        }   
    }
    return sum;
}

//二分查找
int fb(){
    int l=0,r=num[n-1]-num[0];
    while(l!=r){
        int mid=(l+r+1)/2;
        //被伐的长度
        int s=func(mid);
        if(s>=mid){
            l=mid;
        }else{
            r=mid-1;
        }
    }
    return l;
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    sort(num,num+n);
    cout<<fb()<<endl;
    return 0;
}