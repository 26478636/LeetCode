#include <iostream>
#include <cstring>

using namespace std;

//char型输入
char s1[1005];
char s2[1005];
//int型输入
int num1[1005];
int num2[1005];
//输出
int ans[2005];

int main(){
    //传输入
    cin>>s1>>s2;
    num1[0]=strlen(s1);
    num2[0]=strlen(s2);
    //存储int型
    for(int i=1,j=num1[0];i<=num1[0];i++,j--){
        num1[i]=s1[j-1]-'0';
    }
    for(int i=1,j=num2[0];i<=num2[0];i++,j--){
        num2[i]=s2[j-1]-'0';
    }
    //相乘
    ans[0]=num1[0]+num2[0]-1;
    for(int i=1;i<=num1[0];i++){
        for(int j=1;j<=num2[0];j++){
            ans[i+j-1]+=num1[i]*num2[j];
        }
    }
    //进位
    for(int i=1;i<=ans[0];i++){
        if(ans[i]>9){
            ans[i+1]+=ans[i]/10;
            ans[i]=ans[i]%10;
            if(ans[0]==i) ans[0]++;
        }
    }
    //输出
    for(int i=ans[0];i>=1;i--){
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}