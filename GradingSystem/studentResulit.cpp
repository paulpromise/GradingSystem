//These program is to calculate students Results for WIUC (Student Grading System)
// Declare all usable variables that will be used for the program


#include <iostream>
// #include <string>
using namespace std;

int main(){

// Declare all five Variables
string StudentName; // student name variable
string CouresName; // Course Work Variable
int ExamsResults; // ExamsResult Variable
int CWorkIA; // Coure Work and IA Variable 
int Grade; // Grade Variable

// Assign Values to three variables

StudentName = "Paul Promise";
CWorkIA = 25;
ExamsResults = 56;
// Add Course work and exams results(Multiply the result by 7)
Grade = CWorkIA + ExamsResults;
Grade *= 7;
// Pring out Grade Value
cout << "Student final Grade: " << Grade << endl;


}