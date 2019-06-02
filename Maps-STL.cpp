#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string, int> m; map<string,int>::iterator it;
    cout << "Enter no. of queries:\n";
    int q,ind,marks; cin >> q;
    string str;
    for (int i=0; i<q; i++)
    {
        cout << "\nEnter query: \n";
        cin>>ind>>str;
        if (ind==1)
        {
            cin>>marks;
            if (m.count(str)==1) //if this condition is not given, if an element already has the key, it won't be changed
            {
                m[str]+=marks;
            }
            else
            {
                m.insert(pair<string, int>(str,marks));
            }
        }
        else if(ind==2)
        {
            if(m.count(str)==1) {m.erase(str);}
        }
        else if(ind==3)
        {
            if(m.count(str)==1)
            {
                    cout<<m[str];
            }
            else
            {
                cout<<0;
            }

        }
        /*for (it = m.begin(); it != m.end(); ++it)
        {
            cout << '\t' << it->first << '\t' << it->second << '\n';
        }*/

    }
    return 0;
}



