#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    int arr[1000005];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        }
        printf("%d",sum);
        
        return 0;
    }