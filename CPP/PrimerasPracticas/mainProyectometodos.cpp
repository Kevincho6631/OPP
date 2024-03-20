#include <iostream>

using namespace std;

class MyClass {
	public:
		void myMethod(){
			cout << "Hola Mundo";
		}
};

int main() {
	MyClass Obj1;
	Obj1.myMethod();
	return 0;
}
