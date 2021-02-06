#include <stdlib.h>
#include<iostream>
#include<random>
using namespace std;
// функция хелп тут кароч просто содержится текст без переменных
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
// сами функции // если заметишь то в математических функциях есть int a, int b это переменные чтобы записывать формулы)
void bcalcplus(int a, int b) { // функция отвечающая за сумму чисел
	int answer;
	answer = a + b;
	cout << "Answer: " << answer;
}

void bcalcminus(int a, int b) { //аналогично как выше ток это минус
	int answer;

	answer = a - b;
	cout << "Answer: " << answer;
}

void bcalcmulti(int a, int b) {
	int answer;

	answer = a * b;
	cout << "Answer: " << answer;
}

void bcalcsub(int a, int b) {
	int answer;

	answer = a / b;

	cout << "Answer: " << answer;
}

void fcalcmulti(float a, float b) {
	float answer;

	answer = a * b;
	cout << "Answer: " << answer;
}

void fcalcsub(float a, float b) {
	float answer;

	answer = a / b;

	cout << "Answer: " << answer;
}

void fcalcplus(float a, float b) {
	float answer;

	answer = a + b;
	cout << "Answer: " << answer;
}

void fcalcminus(float a, float b) { // все точно так-же как выше только на числах с плавающей точкай)
	float answer;

	answer = a - b;
	cout << "Answer: " << answer;
}

void loop(int i, int a) { // это крч типо цикл чисел от х до y например если я ебану 10 и 100 то у мя в кмд будут показыватся числа от 10 до 100 по порядку
	int c;
	for (c = i; c < a; c++) {
		cout << c << endl;
	}
}
// ну и самое основное рабочее пространство в котором ты юзаешь функции, выводишь функции + тут важно если ты делаешь функции внутри рабочего пространства то
// переменные надо сразу в начале инициализировать иначе кароч нихяу не заработает + тут переменные должны иметь разные названия в отличии от функций выше.
int main() {
	// переменные (нужны чтобы задавать им значения)
	// int - integral т.е числа без точки
	// float - числа с плавающей точкой(идеально если юзать для каких-то формул)
	setlocale(LC_ALL, "Russian");
	int bcalca;
	int bcalcb;
	char answerc;
	float fcalca;
	float fcalcb;
	int i;
	int a;
	// стринги) кхм стринг отвечает за текст т.е внутри стрингов ты можешь держать текст
	string version;
	string bcalcoperator;
	// версия
	version = "0.1 alpha";
	// привествие
	// cout отвечает за вывод текста без переменной типо сразу выводишь
	cout << "" << endl;
	cout << "-------------------" << endl;
	cout << "" << endl;
	cout << "Welcome!" << endl;
	cout << "Let's get started!" << endl;
	cout << "Print 'help'" << endl;
	cout << "" << endl;
	cout << "-------------------" << endl;
	cout << "" << endl;
	// рабочее пространство
	a: // возврат в начало функции чтобы еще раз вписать команду
	string answer;
	cin >> answer;
	// если написать Help то запустится функция хелп
	if (answer == "Help"){// если ответ равен хелп то...
		Help();// ... запустится эта функция
	}else if(answer == "help") { // тут аналогично только с маленькой буквой ибо в с++ маленькая и большая играют роль
		Help();
	}
	// если написать bcalc запустится функция bcalc
	if (answer == "bcalc") {
		cout << "" << endl;
		cout << "First number: " << endl; //первое число
		cin >> bcalca;//переменная в которую записываем это первое число
		cout << "Second number: " << endl; //аналогично как и с первым ток это второе число
		cin >> bcalcb;
		cout << "Operator(plus/minus): " << endl;
		cin >> bcalcoperator;
		cout << "" << endl;
		if (bcalcoperator == "plus") {
			bcalcplus(bcalca, bcalcb);
		}
		else if (bcalcoperator == "minus") {			
			bcalcminus(bcalca, bcalcb);
		}
	}
	// если написать fcalc запустится функция fcalc
	if (answer == "fcalc") {
		cout << "" << endl;
		cout << "First number: " << endl; // тут кароч все аналогично с функцией выше ток тут числа типо 2.0 3.5 а там числа 2 3
		cin >> fcalca;
		cout << "Second number: " << endl;
		cin >> fcalcb;
		cout << "Operator(plus/minus): " << endl;
		cin >> bcalcoperator;
		cout << "" << endl;

		if (bcalcoperator == "plus") {
			fcalcplus(fcalca, fcalcb);
		}
		else if (bcalcoperator == "minus") {
			fcalcminus(fcalca, fcalcb);
		}


	}
	// если написать loop то запустится эта функция
	if (answer == "loop") { // если ответ равен loop то...
		cout << "" << endl;
		cout << "First number: " << endl; 
		cin >> i;
		cout << "Second number: " << endl;
		cin >> a;
		cout << "" << endl;
		loop(i, a);
	}
	// аналогично как из функциями выше просто мне уже лень все это писать
	if (answer == "-v") {
		cout << "version of cmdcalc - " << version << endl;
	}
	// секретная функция которая не указана в хелп (можешь поменять бтв)
	if (answer == "secret") {
		cout << "   _______________                        |*\_/*|________" << endl;
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

	if (answer == "secondsecret") {
		cout << "_00000000_0000000" << endl;
		cout << "_0000000000000000" << endl;
		cout << "__00000000000000" << endl;
		cout << "____00000000000" << endl;
		cout << "_______00000" << endl;
		cout << "_________0" << endl;
		cout << "________*__000000___00000" << endl;
		cout << "_______*__00000000_0000000" << endl;
		cout << "______*___0000000000000000" << endl;
		cout << "______*___0000000000000000" << endl;
		cout << "_______*_____00000000000" << endl;
		cout << "________*_______00000" << endl;
		cout << "_________*________0" << endl;
		cout << "000000___00000___*" << endl;
		cout << "00000000_0000000___*" << endl;
		cout << "0000000000000000____*" << endl;
		cout << "_00000000000000_____*" << endl;
		cout << "___00000000000_____*" << endl;
		cout << "______00000_______*" << endl;
		cout << "________0________*" << endl;
	}
	// функция отвечающая за рандом
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
		// тут кароч генератор рандомных чисел между х и y но обьяснять как он работает нет смысла ибо это все стандарт по документации
		random_device rd;
		mt19937 engine(rd());
		uniform_int_distribution<> dist(x, w); // вот dist т.е дистанс отвечает от какого до какого числа генерировать
		auto random_number = dist(engine);
		cout << "Random number beetwen " << x << " and " << w << " is : " << random_number << endl;
		// в этом генераторе есть серьезный баг нельзя от числа больше типо 200-100 всегда надо от числа меньше типо 100-200 иначе краш)
	}
	goto a; // после выполнения функции вернутся в начало
}