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
	cout<< myObj.getY();
	return 0;
}
