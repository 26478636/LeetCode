#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

//学生类型
struct student{
    string name;
    int avg,cla,paper;
    char off,west;
    int num,sum;
};

student stu[1005];
//学生总数
int n,ans;

//判断奖学金
int func(student& a){
    a.sum=0;
    if(a.avg>80 && a.paper>=1) a.sum+=8000;
    if(a.avg>85 && a.cla>80) a.sum+=4000;
    if(a.avg>90) a.sum+=2000;
    if(a.avg>85 && a.west='Y') a.sum+=1000;
    if(a.cla>80 && a.off>='Y') a.sum+=850;
    return a.sum;
}

//输出顺序
bool check(const student& a,const student& b){
    if(a.sum==b.sum){
        return a.num>b.num;
    }
    return a.sum>b.sum;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>stu[i].name>>stu[i].avg>>stu[i].cla>>stu[i].off>>stu[i].west>>stu[i].paper>>endl;
        std[i].num=i;
        ans+=func(std[i]);
    }
    sort(stu,std+n,check);
    
    return 0;
}