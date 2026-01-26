#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int cntH = 0, cntL = 0, cntBoth = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] <= h && arr[i] <= l)
                cntBoth++;
            else if (arr[i] <= h)
                cntH++;
            else if (arr[i] <= l)
                cntL++;
        }

        int maxPairs = min(n / 2, min(cntH + cntBoth, cntL + cntBoth));

        while (maxPairs > 0) {
            int needFromBoth =
                max(0, maxPairs - cntH) +
                max(0, maxPairs - cntL);

            if (needFromBoth <= cntBoth)
                break;

            maxPairs--;
        }

        cout << maxPairs << endl;
    }

    return 0;
}
