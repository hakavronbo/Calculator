#include <iostream>`
   using namespace std;
 int main(){
   float a1,a2;
    cout << "Write first number: " << endl;
  cin >> a1;

   cout << "Write second number: " << endl;
    cin >> a2;

  char a4;
    cout << "write a math operation: (+, -, *, /)";
 cin >> a4;

	if (a4 == '+') {
		cout << "a1 + a2 = " << a1 + a2;
	}
	else if (a4 == '-') {
		cout << "a1 - a2 = " << a1 - a2;
	}
	else if (a4 == '*') {
		cout << "a1 * a2 = " << a1 * a2;
	}
	else if (a4 == '/') {
		if (a2 != 0) {
			cout << "a1 / a2 = " << a1 / a2;
		}
		else {
			cout << "Error: division by zero!";
		}
	}
	else {
		cout << "Invalid operation!";
	}

    return 0;
}