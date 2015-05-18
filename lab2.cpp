// =============== BEGIN ASSESSMENT HEADER ================
/// @file lab2.cpp
/// @brief Lab 2 for CS 14 <Spring 2015>
///
/// @author Roland Francis Cellona [rcell001@ucr.edu]
/// @SID 861011690
/// @date April 13th, 2015
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

using namespace std;

#include "lab2.h"

bool isPrime (int i) {
    if (i == 1 || i == 0) {
        return false;
    }
    int j;
    int total = i;
    for (j = 2; j < i; ++j) {
        while (total > 0) {
            total = total - j;
            if (total == 0) {
                return false;
            }
        }
        total = i;
    }
    return true;
}

int primeCount(forward_list<int> lst) {
    
}


List<Type> List::elementSwap(List<Type> lst, int pos) {
    
}

List::List() {
    head = 0;
}

List::~List()) {
}

void List::push_front(int value) {
    if (head == 0) {
      Node *temp = new Node(value);
      head = temp;
    }
    else {
        Node *temp = new Node(value);
        temp->next = head;
        head = temp;
    }
}