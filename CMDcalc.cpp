#include <stdlib.h>
#include<iostream>
#include<fstream>
#include<random>
using namespace std;

// help void
void Help() {
	cout << "------------------------------------------------" << endl;
	cout << "" << endl;
	cout << "Basic integral calculator - 'bcalc'" << endl;
	cout << "Basic float calculator - 'fcalc'" << endl;
	cout << "Int loop - 'loop'" << endl;
	cout << "Version - '-v'" << endl;
	cout << "Random number beetwen x and y - 'random'" << endl;
	cout << "Create car or human - 'create'" << endl;
	cout << "Your car or human - 'show'" << endl;
	cout << "------------------------------------------------" << endl;
}

// Integral calc class
class Bcalc {
public:
	int a;
	int b;
	void plus(int y, int x) {
		int ans;
		a = y;
		b = x;

		ans = a + b;
		cout << "Answer is: " << ans << endl;
	}
	void minus(int y, int x) {
		int ans;
		a = y;
		b = x;

		ans = a - b;
		cout << "Answer is: " << ans << endl;
	}
};

//Float calc class
class Fcalc {
public:
	float a;
	float b;
	void plus(float y, float x) {
		float ans;
		a = y;
		b = x;

		ans = a + b;
		cout << "Answer is: " << ans << endl;
	}
	void minus(float y, float x) {
		float ans;
		a = y;
		b = x;

		ans = a - b;
		cout << "Answer is: " << ans << endl;
	}
};

// Car class
class Car {
public:
	string brand;
	string model;
	string year;
};

// Human class
class Human{
public:
	string first_name;
	string middle_name;
	string last_name;
	int age;
	int weight;
	int height;
};

void loop(int i, int a) { 
	int c;
	for (c = i; c < a; c++) {
		cout << c << endl;
	}
}
// Informator class
class info {
public:
	string version;
	string release_date;
	string author;
};
// main void
int main() {
	int bcalca;
	int bcalcb;
	float fcalca;
	float fcalcb;
	int i;
	int a;
	Bcalc bcalc;
	Fcalc fcalc;
	string bcalcoperator;
	info information;
	//objects init
	Car car;
	Human Human;

	//information about CMDcalc
	information.version = "0.2 alpha";
	information.release_date = "12.02.2021";
	information.author = "nominori-dev on github";

	//Welcome message
	cout << "" << endl;
	cout << "-------------------" << endl;
	cout << "" << endl;
	cout << "Welcome!" << endl;
	cout << "Let's get started!" << endl;
	cout << "Print 'help'" << endl;
	cout << "" << endl;
	cout << "-------------------" << endl;
	cout << "" << endl;

a:

	string answer;

	string answer2;

	string answer3;

	string answer4;
	
	string answer5;

	string answer6;

	cin >> answer;
	if (answer == "Help" || answer == "help"){
		Help();
	}

	if (answer == "bcalc" || answer == "Bcalc") {
		cout << "" << endl;
		cout << "First number: " << endl; 
		cin >> bcalca;
		cout << "Second number: " << endl; 
		cin >> bcalcb;
		cout << "Operator(plus/minus): " << endl;
		cin >> bcalcoperator;
		cout << "" << endl;
		if (bcalcoperator == "plus") {
			bcalc.plus(bcalca, bcalcb);
		}
		else if (bcalcoperator == "minus") {			
			bcalc.minus(bcalca, bcalcb);
		}
	}

	if (answer == "fcalc" || answer == "Fcalc") {
		cout << "" << endl;
		cout << "First number: " << endl; 
		cin >> fcalca;
		cout << "Second number: " << endl;
		cin >> fcalcb;
		cout << "Operator(plus/minus): " << endl;
		cin >> bcalcoperator;
		cout << "" << endl;

		if (bcalcoperator == "plus") {
			fcalc.plus(fcalca, fcalcb);
		}
		else if (bcalcoperator == "minus") {
			fcalc.minus(fcalca, fcalcb);
		}
	}

	if (answer == "loop" || answer == "Loop") {
		cout << "" << endl;
		cout << "First number: " << endl; 
		cin >> i;
		cout << "Second number: " << endl;
		cin >> a;
		cout << "" << endl;
		loop(i, a);
	}
	if (answer == "Create" || answer == "create") {
		cout << "What do you want to create?(Car/Human)" << endl;
		cin >> answer2;
		
		if (answer2 == "Car" || answer2 == "car") {
			cout << "Brand: ";
			cin >> car.brand;
			cout << "Model: ";
			cin >> car.model;
			cout << "Year: ";
			cin >> car.year;

			cout << "" << endl;
			cout << "Your car: " << car.brand << " " << car.model << " " << car.year << endl;
			cout << "Do you want to save your car?(Yes/No)" << endl;
			cin >> answer3;
			
			if (answer3 == "Yes" || answer3 == "yes"){
				ofstream carsave;

				carsave.open("carsave.txt");
				carsave << car.brand << " " << car.model << " " << car.year;
				carsave.close();
				cout << "Your car saved to carsave.txt" << endl;
			}
			else if (answer3 == "No" || answer3 == "no") {
				cout << "Ok, but you can see your car by typing 'show'" << endl;
			}
		}

		if (answer2 == "Human" || answer2 == "human") {
			cout << "First name: ";
			cin >> Human.first_name;
			cout << "Middle name: ";
			cin >> Human.middle_name;
			cout << "Last name: ";
			cin >> Human.last_name;
			cout << "Age: ";
			cin >> Human.age;
			cout << "Weight: ";
			cin >> Human.weight;
			cout << "Height: ";
			cin >> Human.height;

			cout << "" << endl;
			cout << "------------------------------------" << endl;
			cout << "Your human: " << endl;
			cout << "First name: "<< Human.first_name << endl;
			cout << "Middle name: " << Human.middle_name << endl;
			cout << "Last name: " << Human.last_name << endl;
			cout << "Age: "<<  Human.age << endl;
			cout << "Height: " << Human.height << endl;
			cout << "Weight: " << Human.weight << endl;
			cout << "------------------------------------" << endl;
			cout << "" << endl;

			cout << "Do you want to save your human?(Yes/No)" << endl;
			cin >> answer4;

			if (answer4 == "Yes" || answer4 == "yes") {
				ofstream humansave;

				humansave.open("humansave.txt");
				humansave << "Your human: " << endl;
				humansave << "First name: " << Human.first_name << endl;
				humansave << "Middle name: " << Human.middle_name << endl;
				humansave << "Last name: " << Human.last_name << endl;
				humansave << "Age: " << Human.age << endl;
				humansave << "Height: " << Human.height << endl;
				humansave << "Weight: " << Human.weight << endl;
				humansave.close();
				cout << "Your human saved to humansave.txt" << endl;
			}
			else if (answer4 == "No" || answer4 == "no") {
				cout << "Ok, but you can see your human by typing 'show'" << endl;
			}
		}
	}

	//Show function
	if (answer == "show" || answer == "Show") {
		cout << "WARNING! Maybe problem if you not already created Human or Car" << endl;
		cout << "What do you want to show? (Car/Human)" << endl;
		cin >> answer5;

		if (answer5 == "Car" || answer5 == "car") {
			cout << "Your car: " << car.brand << " " << car.model << " " << car.year << endl;
		}
		else if (answer5 == "Human" || answer5 == "human") {

			cout << "" << endl;
			cout << "------------------------------------" << endl;
			cout << "Your human: " << endl;
			cout << "First name: " << Human.first_name << endl;
			cout << "Middle name: " << Human.middle_name << endl;
			cout << "Last name: " << Human.last_name << endl;
			cout << "Age: " << Human.age << endl;
			cout << "Height: " << Human.height << endl;
			cout << "Weight: " << Human.weight << endl;
			cout << "------------------------------------" << endl;
			cout << "" << endl;

		}
	}
	if (answer == "-v") {
		cout << "Version of cmdcalc: " << information.version << endl;
		cout << "Release date of cmdcalc version: " << information.release_date << endl;
		cout << "Author of cmdcalc: " << information.author << endl;
	}

	//Random function
	if (answer == "random" || answer == "Random") {
		int x;
		int w;
		cout << "" << endl;
		cout << "if you choose between 20 and 10(or something like that) program will be crash" << endl;
		cout << "First number: " << endl;
		cin >> x;
		cout << "Second number: " << endl;
		cin >> w;
		cout << "" << endl;

		//random number generator
		random_device rd;
		mt19937 engine(rd());
		uniform_int_distribution<> dist(x, w); 
		auto random_number = dist(engine);
		cout << "Random number beetwen " << x << " and " << w << " is : " << random_number << endl;
	}
	goto a;
}