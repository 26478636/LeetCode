#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int nums[] = {2, -4, 2, 6, 8, 4};
    sort(nums, nums + 6);
    cout << nums[0] << endl;
    return 0;
}