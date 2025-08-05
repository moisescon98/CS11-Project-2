/* Author: Moises Concepcion
	Date: June 26, 2024
	Program: ConcepcionProject2.cpp
	Description: Student Grading System (SGS)
*/


#include <iostream>
#include<string>
using namespace std;

int main()
{
	//Variable Declaration and Initialization
	int ID = int();
	string fname = string();
	string lname = string();
	double CS11Score, CS12Score, CS22Score = double();
	double totalScore = double();
	double averageScore = double();

	//Header
	cout << "Student Grading System (SGS) " << endl;
	cout << "Long Beach City College" << endl;
	cout << "Author: Moises Conepcion" << endl;
	cout << "Date: June 26, 2024" << endl;
	cout << "============================" << endl;

	//Inputs
	cout << "Enter your ID Number: ";
	cin >> ID;

	cout << "Enter your first name: ";
	cin >> fname;

	cout << "Enter your last name: ";
	cin >> lname;

	cout << "Enter your score for the class CS11: ";
	cin >> CS11Score;

	cout << "Enter your score for the class CS12: ";
	cin >> CS12Score;

	cout << "Enter your score for the class CS22: ";
	cin >> CS22Score;

	//Processing
	totalScore = CS11Score + CS12Score + CS22Score;
	averageScore = totalScore / 3;

	//Outputs
	cout << "ID: " << ID << endl;
	cout << "First Name: " << fname << endl;
	cout << "Last Name: " << lname << endl;
	cout << "Student's Total Score : " << totalScore << endl;
	cout << "Student's Average Score : " << averageScore << endl;

	if (averageScore >= 90)
		cout << "Grade: A" << endl << "Comments: Excellent, Great Job!" << endl;
	else if (averageScore >= 80 && averageScore < 90)
		cout << "Grade: B" << endl;
	else if (averageScore >= 70 && averageScore < 80)
		cout << "Grade: C" << endl;
	else  if (averageScore >= 60 && averageScore < 70)
		cout << "Grade: D" << endl;
	else if (averageScore < 60)
		cout << "Grade: F" << endl << "Comments: You should consider retaking the courses with low scores. As well as visit the tutoring center for help." << endl;
	
	system("pause");
	return 0;
}
