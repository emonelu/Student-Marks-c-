// StudentMarks.cpp 
// Do a school system, that asks students to enter marks for 5 subjects,
// then
// enter name and  admission number,
// then print the results, like average and grades.
// CopyRight Mihai Ignat (emonelu)

#include <iostream>
using namespace std;
int marks[5];
int i;
float total, avg;
string firstName;
string familyName;
int admissionNumber;

int main()
{
	cout << "================================================\n";
	cout << "Welcome to Starthmore Grades!\nCalculate your average grades!\n";
	cout << "================================================\n";
	cout << "Press enter to start...\n";
	cout << "================================================\n";
	cin.get();
	cout << "Enter your First Name: \n";
	cin >> firstName;
	cout << "================================================\n";
	cout << "Enter your Family Name: \n";
	cin >> familyName;
	cout << "================================================\n";
	cout << "Enter your Student number: \n";
	cin >> admissionNumber;
	cout << "================================================\n";
	

	for ( i = 0; i < 5; i++)
	{
		cout << "Enter your marks of Subject(from 0 to 100)\n"<<i+1<<". ";
		cin >> marks[i];
		total = total + marks[i];
		
	}
	avg = total / 5;
	cout <<  "====="<<admissionNumber<<" "<<firstName<<" "<<familyName<<"'s grade is: ";
	if (avg >= 80) 
	{
		cout << "A! =====\n=====You you nailed it boiii!!!=====\n";
	}
	else if (avg>=60 && avg<80)
	{
		cout << "B =====\n=====Quite ok, next time aim for the A!=====\n";
	}
	else if (avg>=50 && avg<60)
	{
		cout << "C =====\n=====Not bad, but you can more than that.=====\n";
	}
	else if (avg >= 45 && avg < 50)
	{
		cout << "D =====\n=====Don't take D as a success.=====\n";
	}
	else 
	{
		cout << "F =====\n=====When you give up it means you never wanted it.=====\n";
	}

	return 0;
}
