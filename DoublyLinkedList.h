/************
Ray Sears J00710706
DoublyLinkedList.h

Modified from code provided by Leo Denton 2019 or earlier
CSC-231 CCDavidson

************/

#pragma once
#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include "Node.h"

class DoublyLinkedList {
public:
    DoublyLinkedList();             // Empty list constructor
    ~DoublyLinkedList();            // Destructor
    bool empty() const;             // Is list empty
    const Car& front() const;       // Get front element in list
    const Car& back() const;        // Get back element in list
    void addFront(const Car& e);    // Add to front of list
    void addBack(const Car& e);     // Add to back of list
    void removeFront();             // Remove front item from list
    void removeBack();              // Remove back item from list
    void displayList() const;       // Display list of cars
private:
    Node* head;                     // Pointer to the head of the list
    Node* tail;                     // Pointer to the tail of the list
};

#endif
