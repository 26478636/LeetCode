#include <iostream>
using namespace std;

int n;
int sum;
int avg;
int ans;

struct node
{
    int num;
    int flag;
};

node arr[105];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        node[i].flag = i;
        cin >> node[i].num;
        sum += node[i].num;
    }
    avg = sum / n;

    return 0;
}