#include<iostream>
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int ans = 0;
    int temp = 0;

    for (int i = 0; i < size; i++){
        temp = temp + a[i];

        if(temp < 0){
            temp = 0;
        }

        else if(temp > ans){
            ans = temp;
        }

    }

    return ans;
}

int main()
{
    int a[] = {31, -41, 59, 26, -53, 58, 97, -93, -23, 84};
    int n = sizeof(a)/sizeof(a[0]);
    int maxsum = maxSubArraySum(a, n);
    cout << maxsum;
    return 0;
}
