#include <iostream>
#include <cstdio>
#include <cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    // Complete the code.
    int n, q;
    cout << "Length of variable sized array: \n"; cin >> n;
    cout << "No. of queries: \n"; cin >> q;
    //initialize a vector of size n
    vector <int> vect[n];
    int arr[q];
    for(int i=0;i<n;i++)
    {
		int n_i;
		cout << "Enter length of sub-array \n"; cin >> n_i;
		for(int j=0;j<n_i;j++)
		{
			int new_value;
			cout << "Input: \n"; cin >> new_value;
			vect[i].push_back(new_value);
		}
	}
	
	for(int i=0;i<q;i++)
	{
		int q_1, q_2;
		cout << "Enter desired queries: \n";
		cin >> q_1 >> q_2;
		arr[i]=vect[q_1][q_2];
	}
	for(int j=0;j<q;j++)
	{
		cout << "Output: " << arr[j] << "\n";
	}
    
}
