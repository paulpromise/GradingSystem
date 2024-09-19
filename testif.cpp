#include <iostream>
using namespace std;
int main(){



    int ConAcessment1;
    int ConAcessment2;
    int ConAcessment3;
    int TotalMarkConAssessment;


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

    TotalMarkConAssessment = ConAcessment1 + ConAcessment2 + ConAcessment3 / 30 * 100;

    cout << " Value for TotalMarkConAssessment: " << TotalMarkConAssessment << endl;
}

