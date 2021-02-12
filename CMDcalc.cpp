#include <stdlib.h>
#include<iostream>
#include<random>
using namespace std;

void Help() {
	cout << "------------------------------------------------" << endl;
	cout << "" << endl;
	cout << "Basic integral calculator - 'bcalc'" << endl;
	cout << "Basic float calculator - 'fcalc'" << endl;
	cout << "Int loop - 'loop'" << endl;
	cout << "Version - '-v'" << endl;
	cout << "Random number beetwen x and y - 'random'" << endl;
	cout << "------------------------------------------------" << endl;
}

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

void loop(int i, int a) { 
	int c;
	for (c = i; c < a; c++) {
		cout << c << endl;
	}
}

class info {
public:
	string version;
	string release_date;
	string author;
};

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

	information.version = "0.2 alpha";
	information.release_date = "12.02.2021";
	information.author = "nominori-dev on github";

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
	cin >> answer;
	if (answer == "Help"){
		Help();
	}else if(answer == "help") { 
		Help();
	}

	if (answer == "bcalc") {
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

	if (answer == "fcalc") {
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

	if (answer == "loop") { 
		cout << "" << endl;
		cout << "First number: " << endl; 
		cin >> i;
		cout << "Second number: " << endl;
		cin >> a;
		cout << "" << endl;
		loop(i, a);
	}

	if (answer == "-v") {
		cout << "Version of cmdcalc: " << information.version << endl;
		cout << "Release date of cmdcalc version: " << information.release_date << endl;
		cout << "Author of cmdcalc: " << information.author << endl;
	}

	if (answer == "secret") {
		cout << " ⢸⣿⣿⠇⡶⠄⣿⣿⠿⠟⡛⠛⠻⣿⡿⠿⠿⣿⣗⢣⣿⣿⣿⣿" << endl;
		cout << "  |  ___________  |     .-.     .-.      ||_/-\_|______  |" << endl;
		cout << "  | |           | |    .****. .****.     | |           | |" << endl;
		cout << "  | |   0   0   | |    .*****.*****.     | |   0   0   | |" << endl;
		cout << "  | |     -     | |     .*********.      | |     -     | |" << endl;
		cout << "  | |   \___/   | |      .*******.       | |   \___/   | |" << endl;
		cout << "  | |___     ___| |       .*****.        | |___________| |" << endl;
		cout << "  |_____|\_/|_____|        .***.         |_______________|" << endl;
		cout << "   _|__|/ \|_|_.............*.............._|________|_" << endl;
		cout << "'   / ********** \                          / ********** \'" << endl;
		cout << "' /  ************  \                      /  ************  \'" << endl;
	}

	if (answer == "random") {
		int x;
		int w;
		cout << "" << endl;
		cout << "if you choose between 20 and 10(or something like that) program will be crash" << endl;
		cout << "First number: " << endl;
		cin >> x;
		cout << "Second number: " << endl;
		cin >> w;
		cout << "" << endl;

		random_device rd;
		mt19937 engine(rd());
		uniform_int_distribution<> dist(x, w); 
		auto random_number = dist(engine);
		cout << "Random number beetwen " << x << " and " << w << " is : " << random_number << endl;

	}
	if (answer == "secondsecret") {
		cout << "_00000000_0000000" << endl;
		cout << "_0000000000000000" << endl;
		cout << "__00000000000000" << endl;
		cout << "____00000000000" << endl;
		cout << "_______00000" << endl;
	}
	goto a;
}