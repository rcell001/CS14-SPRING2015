// =============== BEGIN ASSESSMENT HEADER ================
/// @file selectionsort.h
/// @brief Lab 6 for CS 14 <Spring 2015>
///
/// @author Roland Francis Cellona [rcell001@ucr.edu]
/// @SID 861011690
/// @date May 11th, 2015
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
/// 
///
/// Approach:
// ================== END ASSESSMENT HEADER ===============

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <utility>
#include <iterator>

using namespace std;

#ifndef _ssort_h_
#define _ssort_h_


template <typename L>
void selectonsort (L &l) {
    auto it = begin(l);      //this is the iterator that goes through the whole container
    auto it2 = begin(l);     //this is the iterator that keeps track of how far through the container you are
    auto biggest = begin(l); //this is the iterator that keeps track of the biggest value
    auto end = end(l);       //iterator that points to the last value in the container
    
    while (it2 != end) {         //go through all values
        it = it2;
        while (it != end) {      //go through the container
            if (*it > *biggest) {//if the current value is bigger than the recorded biggest one
                biggest = it;
            }
            ++it;
        }
        if (*it > *biggest) {   //the case if the last value is the biggest
            biggest = it;
        }
        swap(it2,biggest);
        ++it2;
    }
}








#endif