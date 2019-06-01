#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cout << "Enter length of array: \n";
    int n, some_value,q; cin >> n;
    vector<int> v; cout << "Enter inputs: \n";
    for(int i=0;i<n;i++)
    {
        cin >> some_value;
        v.push_back(some_value);
    }
    vector<int>::iterator low;
    cout <<"Enter the number of queries: \n"; cin>>q;
    for(int i=0;i<q;i++)
    {
        cout << "Enter query: \n"; cin >> some_value;
        low = lower_bound(v.begin(), v.end(), some_value);
        int j=low-v.begin();
        if(v[j]==some_value){cout<<"Yes "<<j+1<<"\n";}
        else {cout<<"No "<<j+1<<"\n";}
    }
    return 0;
}
