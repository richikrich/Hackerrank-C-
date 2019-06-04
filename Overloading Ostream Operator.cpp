#include <iostream>

using namespace std;

class Person {
public:
    Person(const string& first_name, const string& last_name) : first_name_(first_name), last_name_(last_name) {}
    const string& get_first_name() const {
      return first_name_;
    }
    const string& get_last_name() const {
      return last_name_;
    }
    /*friend ostream & operator << (ostream &out, const Person &P); //we make a global method and if we want to allow them to access private data members of class, we must make them friend.
     //However, since the functions are public, we'll just use them to get the required values.
    */
private:
    string first_name_;
    string last_name_;

};
// Enter your code here.
ostream & operator << (ostream &out, const Person &P)
{
	out<<"first_name="<<P.get_first_name()<<",last_name="<<P.get_last_name();
	return out;
}


int main() {
	cout<<"\nEnter first name, last name and event respectively: \n";
    string first_name, last_name, event;
    cin >> first_name >> last_name >> event;
    auto p = Person(first_name, last_name);
    cout << p << " " << event << endl;
    return 0;
}
