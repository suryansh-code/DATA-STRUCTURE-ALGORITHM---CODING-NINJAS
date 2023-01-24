/* NODE *insert_node(NODE *head , int i,int data)
{
    if(i==0)
    {
        NODE *p= new NODE(data);
        p->next=head;
        head=p;
        return p;
    }

    if(head==NULL || i<0)
    {
        return head;
    }

    head->next=insert_node(head->next,i-1,data);

    return head;       
} */