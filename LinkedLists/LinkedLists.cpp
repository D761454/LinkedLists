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
	ListNode* newNode = new ListNode;

	newNode->data = d;
	newNode->next = *head;
	*head = newNode;

	return newNode;
}

void LinkedLists::InsertAfter(ListNode* lastNode, int d) {
	ListNode* newNode = new ListNode;

	newNode->data = d;
	newNode->next = lastNode->next;
	lastNode->next = newNode;
}

void LinkedLists::DeleteList(ListNode** node) {
	ListNode* pTemp = *node;
	ListNode* next;

	while (pTemp != nullptr) {
		next = pTemp->next;
		delete pTemp;
		pTemp = next;
	}
	*node = nullptr;
}

void LinkedLists::DeleteAfter(ListNode* node) {
	ListNode* pTemp;
	if (node != nullptr && node->next != nullptr) {
		pTemp = node->next;
		node->next = pTemp->next;

		delete pTemp;
	}
}

ListNode* LinkedLists::GetNode(ListNode* node, int pos) {
	int count = 0;

	while (node != nullptr) {
		if (count == pos) {
			std::cout << "Data stored at position " << pos << " is: " << node->data << std::endl;
			return node;
		}
		count++;
		node = node->next;
	}
	std::cout << pos << " was not a valid position..." << std::endl;
	return nullptr;
}

void LinkedLists::DeleteAt(ListNode* node, int pos) {
	int count = 0;
	ListNode* pTemp;

	// find item before target
	// if target exists
	// get item after target
	// set pointer for item before target to point to item after target
	// if item after target doesnt exist, set item before target to point to nullptr

	while (node != nullptr) {
		if (count == pos-1) {
			if (node->next != nullptr) {
				pTemp = node->next;
				if (pTemp->next != nullptr) {
					node->next = pTemp->next;
				}
				else {
					node->next = nullptr;
				}

				delete pTemp;
			}
		}
		count++;
		node = node->next;
	}
}

ListNode* LinkedLists::Find(ListNode* node, int val) {
	while (node != nullptr) {
		if (node->data == val) {
			std::cout << val << " is present in the list." << std::endl;
			return node;
		}
		node = node->next;
	}
	std::cout << val << " was not a valid item..." << std::endl;
	return nullptr;
}

void LinkedLists::PrintList(ListNode* node) {
	while (node != nullptr) {
		std::cout << std::setw(5) << "| " << node->data << " |-->";
		node = node->next;
	}

	if (node == nullptr) {
		std::cout << "| NULL |" << std::endl;
	}

	std::cout << std::endl;
}