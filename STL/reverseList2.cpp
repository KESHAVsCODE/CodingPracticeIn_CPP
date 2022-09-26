        int l=1,r=1,c=0;
        if(left == right)
            return head;
        ListNode *t1=head,*t2=head,*temp1,*temp2,*start;
        while(l<left-1)
        {
            t1=t1->next;
            l++;
        }
        while(r<right-1)
        {
            t2=t2->next;
            r++;
        }
        temp1 = t2->next->next;
        if(left==1)
            start = t1;
        else
            start = t1->next;
        while(c<=right-left)
        {
            temp2 = start->next;
            start->next = temp1;
            temp1 = start;
            start = temp2;
           c++;
        }
        if(left==1)
            return temp1;
        t1->next = temp1;
        return head;
