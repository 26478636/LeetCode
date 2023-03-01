#include <iostream>

using namespace std;

//输入每一轮的赛况
struct node{
    //输入，每次滚球的信息
    char s[3];
    //输入，每次滚球的得分
    int num1,num2;
    //输入，标签信息，加分制
    int flag;
};

node input[15];
int n;
int ans;

int main(){
    //输入
    while(cin>>input[n].s){
        if(input[n].s[0]=='/'){
            input[n].num1=10;
            input[n].num2=10;
            input[n].flag=2;
        }else if(input[n].s[1]=='/'){
            input[n].num1=input[n].s[0]-'0';
            input[n].num2=10;
            input[n].flag=1;
        }else{
            input[n].num1=input[n].s[0]-'0';
            input[n].num2=input[n].s[1]-'0'+input[n].num1;
            input[n].flag=0;
        }
        n++;
    }
    //得分
    for(int i=0;i<10;i++){
        ans+=input[i].num2;
        //加分
        if(input[i].flag==1){
            ans+=input[i+1].num1;
        }else if(input[i].flag==2){
            if(input[i+1].flag==2){
                ans+=10+input[i+2].num1;
            }else{
                ans+=input[i+1].num2;
            }
        }
    }
    cout<<endl;
    cout<<ans<<endl;
    return 0;
}