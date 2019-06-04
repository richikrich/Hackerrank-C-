#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

class Server {
private:
	static int load;
public:
	static int compute(long long A, long long B) {
		load += 1;
		if(A < 0) {
			throw std::invalid_argument("A is negative");
		}
		vector<int> v(A, 0);
		int real = -1, cmplx = sqrt(-1);
		if(B == 0) throw 0;
		real = (A/B)*real;
		int ans = v.at(B);
		return real + A - B*ans;
	}
	static int getLoad() {
		return load;
	}
};
int Server::load = 0;

int main() {
	cout<<"Enter number of queries: \n";
	int T; cin >> T;
	while(T--) {
		long long A, B;
		cout<<"Enter 2 numeric inputs: \n";
		cin >> A >> B;
        /* Enter your code here. */
        try
        {
            int x=Server::compute(A,B);
            cout<<x;
        }
        catch(bad_alloc& excep_obj)
        {
            cout << "Not enough memory" << "\n";
        }
        catch(exception& e)
        {
            cout<<"Exception: "<<e.what()<<"\n"; //what() is a function which returns a string naming the type of error
                                                //it can be overloaded.

        }
        catch(...)
		{
		    cout<<"Other exception"<<"\n";
		}


	}
	cout << Server::getLoad() << endl;
	return 0;
}
