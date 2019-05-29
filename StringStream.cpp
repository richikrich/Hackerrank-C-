#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
	vector<int> streamer;
	stringstream ss(str);
	char ch;
	int x;
	while(ss>>x) //while we have an integer extracting from ss
	{
		streamer.push_back(x);
		ss >> ch; //the next character is extracted
	}
	return streamer;
	//I'm not too sure about the explanatory comments I have made, gotta recheck!
}

int main() {
    string str;
    cout << "Enter a string of comma seperated integers: \n";
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << "Integer " << i+1 <<": " << integers[i] << "\n";
    }
    
    return 0;
}
