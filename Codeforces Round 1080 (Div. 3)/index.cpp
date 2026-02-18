#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <fstream>
using namespace std;

int main() {

    ofstream fout("input.txt");

    int n = 100000;

    fout << 1 << "\n";
    fout << n << "\n";

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        v[i] = i + 1;

    random_device rd;
    mt19937 gen(rd());
    shuffle(v.begin(), v.end(), gen);

    for (int i = 0; i < n; i++)
        fout << v[i] << " ";

    fout << "\n";

    fout.close();

    return 0;
}
