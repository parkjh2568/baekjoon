#include <iostream>
#include <map>
using namespace std;

int main() {
    map<long long, long long> a;
    long long cnt, temp;
    long long big1=0,big2=0;
    cin >> cnt;
    for(long long i = 0; i < cnt; i++)
    {
        cin >> temp;
        a[temp]++;
    }
    for(auto& k_b : a) {
        if (k_b.second > big2)
            big2=k_b.second, big1=k_b.first;
    }
    cout<<big1;
}