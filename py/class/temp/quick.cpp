#include <iostream>
#include <chrono>
using namespace std;

int main()
{
    auto start = chrono::high_resolution_clock::now(); // Start time

    long long n1, m1;
    cin >> n1 >> m1;
    long long r = 1;
    while (m1 & 1)
    {
        if (m1 & 1)
            r *= n1;
        n1 = n1 * n1;
        m1 >>= 1;
    }
    cout << r;

    auto end = chrono::high_resolution_clock::now(); // End time
    chrono::duration<double> duration = end - start;
    cout << "\nExecution time: " << duration.count() << " seconds" << endl;

    return 0;
}