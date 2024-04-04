#include <iostream>
using namespace std;

class MyClass{
	public: //Atributo publico
		int x;
	private:
		int y;
			
			public:
				
		void setY(int s){
			y=s;
		}
		
		int getY(){
			return y;
		}
		
};

int main(){
	MyClass myObj;
	myObj.x = 25;
	myObj.setY(50);
	cout << "Este es x = " << myObj.x << endl;
	cout << "Este es y = " << myObj.getY() << endl;
	return 0;
}
