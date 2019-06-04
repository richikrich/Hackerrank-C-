#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

/* Define the exception here */

class BadLengthException : public exception
{
	public:
	int n;
	BadLengthException(int x)
	{
		n=x;
	}
	/*int get_err() const {return n;} ////the hackerrank editor has it's code locked and won't let me do this, but it works!! */
	int what()
	{
		return n;
	}
};

bool checkUsername(string username) {
	bool isValid = true;
	int n = username.length();
	if(n < 5) {
		throw BadLengthException(n);
	}
	for(int i = 0; i < n-1; i++) {
		if(username[i] == 'w' && username[i+1] == 'w') {
			isValid = false;
		}
	}
	return isValid;
}

int main() {
	cout<<"Enter no. of queries: \n";
	int T; cin >> T;
	while(T--) {
		string username;
		cout << "\nEnter username: \n";
		cin >> username;
		try 
		{
			bool isValid = checkUsername(username);
			if(isValid)
			 {
				cout << "Valid" << '\n';
			}
			 else
			  {
				cout << "Invalid" << '\n';
			}
		}
		 /*catch (BadLengthException e)
		  {
			cout << "Too short: " << e.get_err() << '\n'; //the hackerrank editor has it's code locked and won't let me do this, but it works!!
		}*/
		catch (BadLengthException e)
		  {
			cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}

