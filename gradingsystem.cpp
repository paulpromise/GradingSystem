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
    float TotaloFConAssessment;
    float ConAcessmentPercentage;
    float  ExamsResultPercentage;
    float ExamsResult;
    float ExamsAndIA;
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

            TotaloFConAssessment = ConAcessment1 + ConAcessment2 + ConAcessment3;

            ConAcessmentPercentage = TotaloFConAssessment / 100 * 30;
            cout << "Student Course Work Result" << ConAcessmentPercentage << endl;

    

    // Exams Result less than 
    cout << "Please Enter Exams Result: " << endl;
    cin >> ExamsResult;
    cout << "ExamsResult: " << ExamsResult << endl;

    // Check if exams results less than 100%
    if(ExamsResult > 99 ){
        cout << "Input Error" << endl;
        return 0;
    };

    ExamsResultPercentage = ExamsResult / 100 * 70;

    ExamsAndIA = ExamsResultPercentage + ConAcessmentPercentage;
    
    // check result and grade student

    cout << "Student Name: " << StudentName << endl;
    cout << "Student Course: " << StudentCourse << endl;
    cout << "Student Level: " << StudentLevel << endl;
    cout << "Exams and IA Result: " << ExamsAndIA << endl;
    
    if (ExamsAndIA >= 80)
    {
        cout << "Grade: A" << ExamsAndIA << endl; 
    } else if (ExamsAndIA >= 75)
    {
        cout << "Grade: B" << endl;
    } else if (ExamsAndIA >= 50){
        cout << "Grade : C" << ExamsAndIA << endl;
    } else {
        cout << "Fail" << endl;
    }
}