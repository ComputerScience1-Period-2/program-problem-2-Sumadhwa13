/* 
Sumadhwa Guruprasad	- 9/25/2017 - Period 2
*/


#include <iostream>
#include <conio.h>

using namespace std;

void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';

}

void main() {
	int number_of_beanies;
	char fingers;
	bool abnormal_fingers = false; 
	double sqrt_two;

	int num_one, num_two, num_three, num_four, num_five;



	cout << "How many beanies do you have? ";
	cin >> number_of_beanies;
	cout << "How many fingers do you have? (1/2/3/4) ";
	cin >> fingers;
	if (fingers != '4') {
		abnormal_fingers = true;
	}
	cout << "What is the square root of two? ";
	cin >> sqrt_two;

	cout << "Give me three RANDOM whole numbers!! " << endl;
	cout << "Number One ";
	cin >> num_one;
	cout << "Number Two ";
	cin >> num_two;
	cout << "Number Three ";
	cin >> num_three;

	cout << "Wow! I can't believe you have " << number_of_beanies << " beanies!" << endl;
	cout << boolalpha << "It is " << abnormal_fingers << " to say that you are a normal human being." << endl;
	cout << "So you think the square root of two is " << sqrt_two << ", hmm?" << endl;

	cout << num_one << " - " << num_two << " = " << num_one - num_two << endl; 
	num_five = num_two / num_three;
	cout << num_two << " / " << num_three << " = " << num_five << endl;
	
		pause();
}
