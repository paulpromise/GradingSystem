// This is a simple project to calculate student result

#include <iostream>
using namespace std;
int main() {
    // define all vairables to be used
    string FistName;
    string LastName;
    string StudentName;
    string StudentCourse;
    string StudentLevel;
    int ConAcessment1;
    int ConAcessment2;
    int ConAcessment3;
    int TotalMarkConAssessment;
    int ExamsResult;
    float Grade;

    // Take input from the user
     cout << "Please Enter Student Fist Name: " << endl;
    cin >> FistName;
   
    cout << "Please Enter Student Last Name: " << endl;
    cin >> LastName;

    // User input for Student Course and and Level
    cout << "Please Enter Student Course: " << endl;
    cin >> StudentCourse;

    cout << "Please Enter Student Level: " << endl;
    cin >> StudentLevel;

    // Store first Name and last neme into student Name variable
    
    StudentName = FistName + ' ' + LastName;
    // cout << "Student Name: " << StudentName;
 
    /*Take input for Continious Assessment 
        Assessment1 less than 50
        Assessment2 less than 30
        Assessment3 less than 20
    */

   // Assessment1
   cout << "Please Enter Student Continious Assessment 1: " << endl;
   cin >> ConAcessment1;

   if(ConAcessment1 > 50 ){
    cout << "input Error" << endl;
    return 0;
   }
    // Assessment2
    
   cout << "Please Enter Student Continious Assessment 2: " << endl;
   cin >> ConAcessment2;

   if(ConAcessment2 > 30 ){
    cout << "input Error" << endl;
    return 0;
   }

    // Assessment3

cout << "Please Enter Student Continious Assessment 3: " << endl;
   cin >> ConAcessment3;

   if(ConAcessment3 > 30 ){
    cout << "input Error" << endl;
    return 0;
   }

   // Compute Marks for Continous Assessment and store value in new variable

    TotalMarkConAssessment = ConAcessment1 + ConAcessment2 + ConAcessment3 / 100;

    // Exams Result less than 
    cout << "Please Enter Exams Result: " << endl;
    cin >> ExamsResult;

}