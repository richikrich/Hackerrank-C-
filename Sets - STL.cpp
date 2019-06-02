#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> s;//each element of a set must be unique as the value of the element identifies it
    cout << "Enter the number of queries: \n";
    int q, q_1, q_2; cin >> q;
    set<int>::iterator it;
    for(int i=0;i<q;i++)
    {
        cout << "\nQuery: \n";
        cin >> q_1 >> q_2;
        if (q_1==1)
        {
            s.insert(q_2);
        }
        if (q_1==2)
        {
            if (s.count(q_2)==1)
            {
                s.erase(q_2);
            }
        }
        if (q_1==3)
        {
            if (s.count(q_2)==1)
            {
                cout << "Yes \n";
            }
            else
            {
                cout << "No \n";
            }
        }
        for(it=s.begin();it!=s.end();it++)
        {
            cout <<*it<<" ";
        }
    }
    return 0;
}
