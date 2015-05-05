// =============== BEGIN ASSESSMENT HEADER ================
/// @file lab4.h
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

#ifndef _LAB4_H_
#define _LAB4_H_


#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void preorder(int m, int n, int k, bool first) {
    if (m + n >= k) {
        return;
    }
    if (first == true) { //base case
        cout << "pre-order" << endl;
        first = false;
        preorder(2,1,k,first);
        preorder(3,1,k,first);
    }
    else {
        cout << m << " " << n << endl;
        preorder((2*m)-n,m,k,first);
        preorder((2*m)+n,m,k,first);
        preorder(m+(2*n),n,k,first);
    }
}

void postorder(int m, int n, int k, bool first) {
    if (m+n >= k) {
        return;
    }
    if (first == true) { //base case
        cout << "post-order" << endl;
        first = false;
        postorder(2,1,k,first);
        postorder(3,1,k,first);
    }
    else {
        postorder((2*m)-n,m,k,first);
        postorder((2*m)+n,m,k,first);
        postorder(m+(2*n),n,k,first);
        cout << m << " " << n << endl;
    }
   
}


void sorted (int m, int n, int k, bool first) {
    if (m + n >= k) {
        return;
    }
    if (first == true) { //base case
        cout << "pre-order" << endl;
        first = false;
        sorted(2,1,k,first);
        sorted(3,1,k,first);
    }
    else {
        cout << m << " " << n << endl;
        sorted((2*m)-n,m,k,first);
        sorted((2*m)+n,m,k,first);
        sorted(m+(2*n),n,k,first);
    }
}









#endif