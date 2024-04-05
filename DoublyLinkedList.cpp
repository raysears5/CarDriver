/***********************
Ray Sears J00710706
SinglyLinkedList.cpp

Implements SinglyLinkedList class 

Modified from code provided by Leo Denton 2019 or earlier
CSC-231 CCDavidson 2020
************************/

#include "DoublyLinkedList.h"
using namespace std;

// Constructors. Only default constructor is needed for new empty list
  DoublyLinkedList::DoublyLinkedList()
	: head(NULL) { }
  

  // Destructor deletes object 
  DoublyLinkedList::~DoublyLinkedList()
  { 
	  while (!empty()) 
	  {
			removeFront(); // calls function to remove element and release memory
	  }
  }

  // Is list empty?
  bool DoublyLinkedList::empty() const			
  { 
	  return (head == NULL); 
  }

  // Get front node.
  const Car& DoublyLinkedList::front() const		
  { 
	  return head->car; 
  }

  // Add node to front.
  void DoublyLinkedList::addFront(const Car& e) 
  {	
    Node* temp = new Node;	// create new node
    temp->car = e;			// store data
    temp->next = head;		// current head is now next of new node
    head = temp;			// new node is now the new head
  }

	// Remove node from front
   void DoublyLinkedList::removeFront() 
   {
	   if ( !empty() ) 
	   {
			Node* temp = head;	// temp saves the current head
			head = temp->next;	// new head is the old head's next
			delete temp;		   // delete the previous head
	   }
   }

   void DoublyLinkedList::displayList() const
   {
	   if ( !empty() )
	   {
		   cout << "The following cars are in this list:\n";
		   Node* temp = head;	   
		   while (temp)	        // temp evaluates to true if it is not NULL.
		   {
			   cout << temp->car << endl;
			   temp = temp->next;	// Move to the next node, which if it's NULL
		   }						     // will cause the loop to terminate.	   
		   cout << endl;
	   }
	   else
	   {
		   cout << "There are no cars in this list.\n";
	   }
   }