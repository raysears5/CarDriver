/*
Ray Sears J00710706
Node.h
*/
#pragma once
#ifndef NODE_H
#define NODE_H

#include "Car.h"

class Node {
private:
    Car car;        // The car element in this node
    Node* next;     // A pointer to the next item in the list
    Node* prev;     // A pointer to the previous item in the list

    // The list needs access to this Node class
    // Access is provided by friend declaration
    friend class DoublyLinkedList;
};

#endif
