#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   // Enter your code here. Read input from STDIN. Print output to STDOUT 
    int n,some_value,x;
    cout << "Enter size of vector: \n";
    cin >> n;
    vector<int> v;
    vector<int>::iterator it; //Iterators work similar to pointers
    cout << "Input: ";
    for(int i=0; i<n; i++)
    {
		cin >> some_value;
		v.push_back(some_value);
	}
	cout<<"Index to be erased: "; 
	cin >> x;
	v.erase(v.begin()+(x-1));
	int arr[2];
	cout << "Enter the range to be erased: ";
	for(int i=0;i<2;i++) {cin >> arr[i];}
	v.erase(v.begin()+(arr[0]-1),v.begin()+(arr[1]-1));
	cout << "Size of the remaining vector is: " << v.size() << "\n" << "Vector: " ;
	for(it=v.begin();it!=v.end();++it)
	{
		cout<<*it<<" ";
	}
	return 0;
}
