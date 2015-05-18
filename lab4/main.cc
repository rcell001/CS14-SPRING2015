// =============== BEGIN ASSESSMENT HEADER ================
/// @file main.cc
/// @brief Lab 4 for CS 14 <Spring 2015>
///
/// @author Roland Francis Cellona [rcell001@ucr.edu]
/// @SID 861011690
/// @date April 27th, 2015
///
/// @par Enrollment Notes
/// Lecture Section: 002
/// @par
/// Lab Section: 022
/// @par
/// TA: Mandar
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
// ================== END ASSESSMENT HEADER ===============



#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "lab4.h"

using namespace std;

int main() {
    
    int k = 9;
    bool first = true;
    preorder(2, 1, k, first);
    
    postorder(2,1,k,first);
    sorted(2,1,k,first);
    
    
    cout << endl;
    return 0;
}











