#include "LinkedLists.h"

LinkedLists::LinkedLists() {

}

LinkedLists::~LinkedLists() {

}

ListNode* LinkedLists::MakeNode(ListNode** head, int d) {
	ListNode* newNode = new ListNode;
	ListNode* last = *head;

	newNode->data = d;
	newNode->next = nullptr;

	if (*head == nullptr) {
		*head = newNode;
		return newNode;
	}

	while (last->next != nullptr) {
		last = last->next;
	}

	last->next = newNode;

	return newNode;
}

ListNode* LinkedLists::InsertFirst(ListNode** head, int d) {

}

void LinkedLists::InsertAfter(ListNode* lastNode, int d) {

}

void LinkedLists::DeleteList(ListNode** node) {

}

void LinkedLists::DeleteAfter(ListNode* node) {

}

ListNode* LinkedLists::GetNode(ListNode* node, int pos) {

}

ListNode* LinkedLists::Find(ListNode* node, int val) {

}

void LinkedLists::PrintList(ListNode* node) {

}