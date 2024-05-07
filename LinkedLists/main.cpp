#include "LinkedLists.h"

LinkedLists* lists = new LinkedLists;

ListNode* head = nullptr;

int main() {
	lists->MakeNode(&head, 10);
	lists->MakeNode(&head, 20);
	lists->InsertFirst(&head, 0);
	lists->InsertAfter(head->next, 40);
	lists->PrintList(head);
	lists->DeleteAfter(head->next);
	lists->PrintList(head);
	lists->GetNode(head, 2);
	lists->Find(head, 20);
	lists->DeleteList(&head);
	lists->PrintList(head);
}