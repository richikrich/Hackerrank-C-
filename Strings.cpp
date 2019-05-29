#include <iostream>
#include <string>
using namespace std;

void swap(char *s, char *t)
{
	char *temp;
	*temp=*s;
	*s=*t;
	*t=*temp;
}

int main() {
	// Complete the program
    string a,b;
    cout << "Enter the strings: \n";
    cin >> a; cin >> b;
    cout << "The length of entered strings are:\n" << a.size() <<" "<<b.size()<<"\n";
    cout << "Concatenating: \n" << a+b <<"\n";
    swap(&a[0],&b[0]);
    cout<< "After swapping the first two letters: \n"<< a<<" "<<b;
	return 0;
}
