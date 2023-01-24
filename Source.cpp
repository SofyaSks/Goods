#include <iostream>
#include <fstream>

using namespace std;


class Grocery {

public:

	Grocery() {
		name = "";
		price = 0;
		weight = 0;
	}

protected:
	string name;
	int price;
	double weight;


};

class Products : public Grocery {

public:

	Products() {
		name = " ";
		price = 0;
		weight = 0;
	}
};

class Chemistry : public Grocery {

public:
	Chemistry(){
		name = " ";
		price = 0;
		weight = 0;
	}
};

class Time {
public:
	Time(){}

	Time(int h) { hours = h; }

	int getHours() { return hours; }

protected:
	int hours;
};

class Bread : public Products, public Time {


public:
	Bread(int q) {
		name = "Bread";
		price = 30;
		weight = 200;
		hours = 72;
		quantity = q;
	}

	string getName() {
		return name;
	}

	int getPrice() {
		return price;
	}

	double getWeight() {
		return weight;
	}

	int getFullPrice() {
		return price * quantity;
	}

	int getFullWeight() {
		return weight * quantity;
	}

	void showInfo() {
		cout << "Product name: " << name << endl;
		cout << "Price for one: " << price << endl;
		cout << "Weight: " << weight << endl;
		cout << "Expire time: " << hours << endl;
		cout << "Quantity: " << quantity << endl;
		cout << "Full Price is: " << getFullPrice() << endl;
		cout << "Full weight is: " << getFullWeight() << endl << endl;
	}

private:
	int quantity;
};



class Milk : public Products, public Time {
public:
	Milk (int q) {
		name = "Milk";
		price = 60;
		weight = 1000;
		hours = 72;
		quantity = q;
	}

	string getName() {
		return name;
	}

	int getPrice() {
		return price;
	}

	double getWeight() {
		return weight;
	}

	int getFullPrice() {
		return price * quantity;
	}

	int getFullWeight() {
		return weight * quantity;
	}

	void showInfo() {
		cout << "Product name: " << name << endl;
		cout << "Price for one: " << price << endl;
		cout << "Weight: " << weight << endl;
		cout << "Expire time: " << hours << endl;
		cout << "Quantity: " << quantity << endl;
		cout << "Full Price is: " << getFullPrice() << endl;
		cout << "Full weight is: " << getFullWeight() << endl << endl;
	}

private:
	int quantity;
};
	

class Cheese : public Products, public Time {

public:
	Cheese ( int q) {
		name = "Cheese";
		price = 1500;
		weight = 700;
		hours = 100;
		quantity = q;
	}

	string getName() {
		return name;
	}

	int getPrice() {
		return price;
	}

	double getWeight() {
		return weight;
	}

	int getFullPrice() {
		return price * quantity;
	}

	int getFullWeight() {
		return weight * quantity;
	}

	void showInfo() {
		cout << "Product name: " << name << endl;
		cout << "Price for one: " << price << endl;
		cout << "Weight: " << weight << endl;
		cout << "Expire time: " << hours << endl;
		cout << "Quantity: " << quantity << endl;
		cout << "Full Price is: " << getFullPrice() << endl;
		cout << "Full weight is: " << getFullWeight() << endl << endl;
	}

private:
	int quantity;
};
	
class Soap : public Chemistry, public Time {

public:
	Soap (int q) {
		name = "Soap";
		price = 5;
		weight = 50;
		hours = 365;
		quantity = q;
	}

	string getName() {
		return name;
	}

	int getPrice() {
		return price;
	}

	double getWeight() {
		return weight;
	}

	int getFullPrice() {
		return price * quantity;
	}

	int getFullWeight() {
		return weight * quantity;
	}

	void showInfo() {
		cout << "Product name: " << name << endl;
		cout << "Price for one: " << price << endl;
		cout << "Weight: " << weight << endl;
		cout << "Expire time: " << hours << endl;
		cout << "Quantity: " << quantity << endl;
		cout << "Full Price is: " << getFullPrice() << endl;
		cout << "Full weight is: " << getFullWeight() << endl << endl;
	}

private:
	int quantity;
};
	
class Powder : public Chemistry, public Time {
public:
	Powder (int q) {
		name = "Powder";
		price = 15;
		weight = 50;
		hours = 365;
		quantity = q;
	}

	string getName() {
		return name;
	}

	int getPrice() {
		return price;
	}

	double getWeight() {
		return weight;
	}

	int getFullPrice() {
		return price * quantity;
	}

	int getFullWeight() {
		return weight * quantity;
	}

	void showInfo() {
		cout << "Product name: " << name << endl;
		cout << "Price for one: " << price << endl;
		cout << "Weight: " << weight << endl;
		cout << "Expire time: " << hours << endl;
		cout << "Quantity: " << quantity << endl;
		cout << "Full Price is: " << getFullPrice() << endl;
		cout << "Full weight is: " << getFullWeight() << endl << endl;
	}

private:
	int quantity;
};
	
class AirFreshener : public Chemistry, public Time {
public:
	AirFreshener (int q) {
		name = "Air freshener";
		price = 25;
		weight = 100;
		hours = 365;
		quantity = q;
	}

	string getName() {
		return name;
	}

	int getPrice() {
		return price;
	}

	double getWeight() {
		return weight;
	}

	int getFullPrice() {
		return price * quantity;
	}

	int getFullWeight() {
		return weight * quantity;
	}

	void showInfo() {
		cout << "Product name: " << name << endl;
		cout << "Price for one: " << price << endl;
		cout << "Weight: " << weight << endl;
		cout << "Expire time: " << hours << endl;
		cout << "Quantity: " << quantity << endl;
		cout << "Full Price is: " << getFullPrice() << endl;
		cout << "Full weight is: " << getFullWeight() << endl << endl;
	}

	
private:
	int quantity;
};

int main() {

	
	Bread b(5);
	Milk m(2);
	Cheese c(1);
	Soap s(3);
	Powder p(6);
	AirFreshener a(4);

	b.showInfo();
	m.showInfo();
	c.showInfo();
	s.showInfo();
	p.showInfo();
	a.showInfo();


	


	return 0;
}














