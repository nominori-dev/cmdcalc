#include <stdlib.h>
#include<iostream>
#include<fstream>
#include<random>
#include<Windows.h>
#define BUFFER 8192

using namespace std;

// help void
void Help() {
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int col = 12;
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, col);
	cout << "------------------------------------------------" << endl;
	cout << "" << endl;
	cout << "Basic float calculator - 'fcalc'" << endl;
	cout << "Int loop - 'loop'" << endl;
	cout << "Version - '-v'" << endl;
	cout << "Random number beetwen x and y - 'random'" << endl;
	cout << "Create car or human - 'create'" << endl;
	cout << "Your car or human - 'show'" << endl;
	cout << "Small math test - 'test'" << endl;
	cout << "" << endl;
	cout << "------------------------------------------------" << endl;
}

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

// main void
int main() {
	float fcalca,fcalcb;
	int i,a;
	string bcalcoperator;
	//objects init
	Car car;
	Human Human;
	Fcalc fcalc;
	//information about CMDcalc

	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int col = 12;

	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, col);
	//Welcome message
	cout << "" << endl;
	cout << "-------------------" << endl;
	cout << "" << endl;
	cout << "Welcome! " << endl;
	cout << "Let's get started!" << endl;
	cout << "Print 'help'" << endl;
	cout << "" << endl;
	cout << "-------------------" << endl;
	cout << "" << endl;
a:
	// string answers

	string answer,answer2,answer3,answer4,answer5,answer6,answer7;


	cin >> answer;
	if (answer == "Help" || answer == "help"){
		Help();
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
		cout << "Version of cmdcalc: 1.1.0" << endl;
		cout << "Release date of cmdcalc version: 15.04.2021" << endl;
		cout << "Author of cmdcalc: nominori-dev" << endl;
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

	if (answer == "test" || answer == "Test") {
		cout << "Question: 2+2 = ?" << endl;
		cout << "Type answer: ";
		cin >> answer7;

		if (answer7 == "4") {
			cout << "Congratulations! You passed math test!" << endl;
		}
		else {
			cout << "Lol you noob!!!" << endl;
		}
	}

	goto a;
	SetConsoleTextAttribute(hConsole, 15); //set back to black background and white text
	system("pause");
}