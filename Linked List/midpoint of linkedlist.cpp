#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};


Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

Node *midPoint(Node *head)
{
    Node *slow =head;
    Node *fast =head;

    if(head==NULL || head-> next==NULL)
    {
        return head;
    }
    while(fast->next != NULL || fast->next->next!+NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
/*
NODE *midPoint(Node * head)
{
    int length=0;
    node *temp =head;
    while(temp!=NULL)
    {
        length++;
        temp=temp->next;
    }

    if (length%2!=0)
    {
        int mid=length%2;
		
    }
}




*/
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		Node *mid = midPoint(head);
		if (mid != NULL)
		{
			cout << mid->data;
		}
		cout << endl;
	}
	return 0;
}