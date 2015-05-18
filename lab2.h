// =============== BEGIN ASSESSMENT HEADER ================
/// @file lab2.h
/// @brief Lab 1 for CS 14 <Spring 2015>
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

#ifndef _LAB2_H_
#define _LAB2_H_


#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

struct IntNode {
    int data;
    IntNode *next;
    IntNode(int data) : data(data), next(0) {}
};

class List {
    private:
      Node *head;
    public:
      List();
      ~List();
      List<Type> elementSwap(List<Type> lst, int pos);
      void push_front(int value);
      
};




#endif