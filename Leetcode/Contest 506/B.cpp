#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> &nums)
{
    int sum = 0;
    int ans = INT_MIN;

    for (int x : nums)
    {
        sum += x;
        ans = max(ans, sum);

        if (sum < 0)
            sum = 0;
    }

    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int n1 = maxSubArray(arr);
    while (k > 0)
    {

        for (int i = 0; i < n; i++)
        {
            int priority = i;

            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] > arr[priority])
                {
                    priority = j;
                }
            }

            if (priority != i)
            {
                swap(arr[i], arr[priority]);
                k--;
            }
        }

    }

    int n2 = maxSubArray(arr);
    cout<<n1<<" "<<n2;
    if (n1>n2){return n1;
    
    }
    else{
        return n2;
    }

    return 0;
}