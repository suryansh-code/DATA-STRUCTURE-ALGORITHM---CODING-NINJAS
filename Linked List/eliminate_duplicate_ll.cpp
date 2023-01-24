/*
NODE *remove_duplicates(NODE *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    NODE *curr=head;
    while(curr->next!=NULL)
    {
        if(curr->data == (curr->next->data))
        {
            NODE *temp=curr->next->next;
            delete curr->next;
            curr->next=temp;
        }
        else
        {
            curr=curr->next;
        }
    }

}


*/