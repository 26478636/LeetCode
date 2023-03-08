#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int n,m;
double num[1005];

int func(double x){
    int t=0;
    for(int i=0;i<n;i++){
        t+=num[i]/x;
    }
    return t;
}

double fb(){
    double l=0,r=num[n-1];
    while(r-l>0.0001){
        double mid=(l+r)/2;
        //计算别切成的段数
        int s=func(mid);
        if(s>=m){
            l=mid;
        }else{
            r=mid;
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
    //调用二分查找
    double tt=fb();
    printf("%.2f\n",(int)(tt*100)/100.0);
    return 0;
}