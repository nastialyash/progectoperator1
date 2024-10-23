

#include <iostream>
using namespace std;
class Reservoir {
	string name;

	string type;          
	double width;              
	double length;             
	double maxDepth;
public:
	Reservoir(string n,string t,double w,double l,double m) {
		name = n;
		type = t;
		width = w;
		length = l;
		maxDepth = m;
	}
	void Show() const {
		cout << "Name : " << this->name << "Type : " << this->type << "Width : " << this->width << "Length : " << this->length << "Max : " << this->maxDepth << endl;
	}
	Reservoir(const Reservoir& other) {
		this->name = 1;
		this->type = 1;
		this->width = 0;
		this->length = 0;

	}






	~Reservoir() {}

	double surfaceArea() const {
		return width * length;
	}

	double volume() const {
		return width * length * maxDepth;
	}


	void copy(const Reservoir& other) {
		name = other.name;
		type = other.type;
		width = other.width;
		length = other.length;
		maxDepth = other.maxDepth;
	}
	bool isSame(const Reservoir& other) const {
		return type == other.type;
	}
	string setname() const {
		return name;
	}
	string getype() const {
		return type;
	}
	double widthset() const {
		return width;
	}
	double setlength()const {
		return length;
	}
	double getmax()const {
		return maxDepth;
	}
	void showInfo() {
		cout << "Name : " << name << endl;
		cout << "Type : " << type << endl;
		cout << "width " << width << endl;
		cout << "Length : " << length << endl;
		cout << "Max : " << maxDepth << endl;

		cout << "S =  " << surfaceArea() << endl;
		cout << "Volume is  " << volume() <<  endl;
	}
};
int main()
{
	Reservoir lake("Bycal", "Lake", 80, 636, 1642);
	lake.showInfo();

	Reservoir pond("HDLD", "sea", 30, 50, 5);
	pond.showInfo();



}

