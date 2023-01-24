/* NODE *delete_node(NODE *head,int i)
{
     if(head==NULL)
     {
        return head;
     }

     if(i==0)
     {
        NODE *temp=head;
        head=head->next;
        delete temp;
        return head;
     }
     
    node*p = delete_node(head->next,i-1)
    head->next=p;
    p=head;
    return head;
}


*/