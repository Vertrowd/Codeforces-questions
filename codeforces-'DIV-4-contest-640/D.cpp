#include <vector>
#include <iostream>

using namespace std;


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int a_sum=arr[0];
        int a_c_sum=arr[0];
        int b_sum=0;
        int b_c_sum=0;
        int left=1;
        int right=arr.size()-1;
        int count=1;
        while (left<=right)
        {
            if (a_sum>b_sum)
            {
                b_c_sum=0;
                while (a_c_sum>=b_c_sum && right>=left)
                {
                    
                    b_sum+=arr[right];
                    b_c_sum+=arr[right];
                    right--;
                    
                }
                
            }else{
                a_c_sum=0;
                while (b_c_sum>=a_c_sum && right>=left)
                {
                    a_sum+=arr[left];
                    a_c_sum+=arr[left];
                    left++;
                }
            }
            count++;
            
        }
        cout<<count<<" "<<a_sum<<" "<<b_sum<<endl;
    }



    return 0;
}