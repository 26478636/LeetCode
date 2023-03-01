#include <iostream>
#include <cmath>

using namespace std;

//11赛制--每一分所记录在谁身上，A || B;
int num_11[10005][2];
//比赛进行到第几局
int ans_11;
int num_21[10005][2];
int ans_21;

//调用输出
//记录每一盘比分
void print(){
    for(int i=0;i<=ans_11;i++){
        cout<<num_11[i][0]<<":"<<num_11[i][1]<<endl;
    }
    cout<<endl;
    for(int i=0;i<=ans_21;i++){
        cout<<num_21[i][0]<<":"<<num_21[i][1]<<endl;
    }
}

int main(){
    char s[30];
    //循环读入
    while(cin>>s){
        for(int i=0;s[i];i++){
            if(s[i]=='E'){
                //比赛结束，调用输出函数
                print();
                return 0;
            }
            if(s[i]=='W'){
                //存储每一分的结果，到底计在谁身上了
                num_11[ans_11][0]++;
                num_21[ans_21][0]++;
            }else{
                num_11[ans_11][1]++;
                num_21[ans_21][1]++;
            }
            if((num_11[ans_11][0]>=11||num_11[ans_11][1]>=11)&&abs(num_11[ans_11][0]-num_11[ans_11][1])>=2){
                ans_11++;
            }
            if((num_21[ans_21][0]>=21||num_21[ans_21][1]>=21)&&abs(num_21[ans_21][0]-num_21[ans_21][1])>=2){
                ans_21++;
            }
        }
    }


    return 0;
}