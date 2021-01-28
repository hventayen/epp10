// ADD ANSWER TO THIS FILE

#include "CharLinkedList.h"

bool CharLinkedList::checkList() {
  // COMPLETE THIS FOR PROBLEM 2
  return true;// dummy value to stop warnings while doing Problem 3. Remove this line.

}

bool CharLinkedList::checkRecurse (SNode *ptr) {
  // COMPLETE THIS FOR PROBLEM 3
  if (ptr == nullptr)
  {
    return true;
  }
  if (ptr->elem != 'G' && ptr->elem != 'A' && ptr->elem != 'T' && ptr->elem != 'C')
  {
    return false;
  }
  else
  {
    return checkRecurse(ptr->next);
  }
}

void CharLinkedList::addFront(char x) {
  SNode *tmp = head;
	head = new SNode;
	head->next = tmp;
	head->elem = x;
}

// recursion helper function called from main for PROBLEM 3
bool CharLinkedList::checkRecurseHelper () {
  return checkRecurse(head);
}
