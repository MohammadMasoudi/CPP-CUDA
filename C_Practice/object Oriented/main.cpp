#include <iostream>
using namespace std;
class Circle
{
	public:
		void	readradious();
		void	calculations();
		void 	displayResults();
	private:
		float radius;
		float area;
		float perime;
};

//******************************
void Circle::readradious(){
	cout <<"Enter the radius of the circle:";
	cin >> radius;
}
//******************************
void Circle::calculations(){
	area = radius*radius*3.14;
	perime = 2*3.14*radius;
}
//******************************
void Circle::displayResults(){
	cout << "Area= " << area << "\nPrime= " << perime;
}
//******************************

int main()
{
	Circle Ccal;
	Ccal.readradious();
	Ccal.calculations();
	Ccal.displayResults();
	cin.get();
	cin.get();
	return 0;
}