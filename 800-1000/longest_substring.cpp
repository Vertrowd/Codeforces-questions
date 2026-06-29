#include <iostream>
#include <set>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{

    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    auto start = high_resolution_clock::now();

    int n = s.length();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        set<char> st;
        for (int j = i; j < n; j++)
        {
            if (st.find(s[j]) == st.end())
            {
                st.insert(s[j]);
            }
            else
            {
                break;
            }
        }
        ans = max(ans, (int)st.size());
    }
    cout << ans;

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << '\n'
         << "Time taken " << duration.count() << " ms";
    return 0;
}