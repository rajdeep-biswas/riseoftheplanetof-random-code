#include <iostream>

using namespace std;

class Print {
	public:
	void sayHello() {
		cout << "Hello, world" << endl;
	}
};

int main() {
	Print print;
	print.sayHello();

	return 0;
}