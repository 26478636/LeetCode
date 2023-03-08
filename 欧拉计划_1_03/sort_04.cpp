#include <iostream>
#include <algorithm>

using namespace std;

//定义数组类型
struct node{
    int x;
    int y;
};

//定义数组
node num[1005];

//判断大小
bool check(const node& a,const node& b){
    if(a.x==b.x) return a.y<b.y;
    return a.x<b.x;
}

int main(){
    num[0].x=1,num[0].y=2;
    num[1].x=5,num[1].y=7;
    num[2].x=0,num[2].y=8;
    num[3].x=0,num[3].y=7;
    num[4].x=1,num[4].y=8;
    sort(num,num+5,check);
    for(int i=0;i<5;i++){
        cout<<i<<" "<<num[i].x<<" "<<num[i].y<<endl;
    }

    return 0;
}