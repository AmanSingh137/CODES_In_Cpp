Node* reverse(Node* head)
    {
        Node* current = head;
        Node *prev = NULL, *next = NULL;
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        return head;
    }
    Node* reverseBetween(Node* head, int m, int n)
    {
        //code here
        if(m==n) return head;
        int k = 1;
        Node *p1, *p2, *p3, *p4, *temp;
        temp = head;
        if(m==1)
        {
            while(temp->next!=NULL and k!=n)
            {
                temp = temp->next;
                k++;
            }
            p2 = temp;
            p3 = temp->next;
            p2->next=NULL;
            head = reverse(head);
            temp = head;
            while(temp->next!=NULL) temp = temp->next;
            temp->next = p3;
            return head;
        }
        while(k<m)
        {
            if(k==m-1) p1=temp;
            temp = temp->next;
            k++;
        }
        p1->next = NULL;
        p2=temp;
        while(k<n)
        {
            temp = temp->next;
            k++;
        }
        p3=temp;
        temp = temp->next;
        p3->next=NULL;
        p4= temp;
        p2 = reverse(p2);
        p1->next = p2;
        while(p2->next !=NULL) p2 = p2->next;
        p2->next = p4;
        return head;
    }
