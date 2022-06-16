

#include <iostream>
#include <string>
using namespace std;
class visitor
{
	
	int age;
	string name;
	static int Count;
	static int MIN;
	static int MAX;
	static int sr;
public:
	
	visitor() {
		age = 0;
		name = "";

	}


	visitor(int age, string name) {
		this->age = age;
		this->name = name;
		Count++;
		sr += this->age;
		if (MIN > this->age) MIN = this->age;
		if (MAX < this->age) MAX = this->age;
	}

	static int count() {
		return Count;
	}
	static int min() {
		return MIN;
	}
	static int max() {
		return MAX;
	}
	static int SR() {
		return sr / Count;
	}


	~visitor() {

	}
};

int visitor::Count = 0;
int visitor::MIN = 1000;
int visitor::MAX = 0;
int visitor::sr = 0;


int main()
{
	visitor A(13, "Victor");
	visitor B(22, "Anttor");
	cout << visitor::count() << endl;
	cout << visitor::min() << endl;
	cout << visitor::max() << endl;
	cout << visitor::SR() << endl;
	return 0;
}