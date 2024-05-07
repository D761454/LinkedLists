#include "LinkedLists.h"

LinkedLists* lists = new LinkedLists;

ListNode* head = nullptr;

int main() {
	lists->MakeNode(&head, 10);
	lists->MakeNode(&head, 20);
	lists->PrintList(head);
}