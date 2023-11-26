#include <stdlib.h>
#include <stdio.h>
struct node
{
int coeff;
int exp;
struct node *next;
};
void display(struct node *head);

struct node *p,*q,*r, *head1,*head2,*head3, *tail1,*tail2,*tail3;
int item,n1,n2;
void main()
{
    int i,ch;
head1 = NULL;
head2 = NULL;
head3= NULL;
printf("enter number of terms in polynomial 1");
scanf("%d",&n1);
for (i=0;i<n1;i++)
{
    		p = (struct node*)malloc(sizeof(struct node));
	printf("enter exponent of %d element",i+1);
scanf("%d",&p->exp);
printf("enter coeffient of %d element",i+1);
scanf("%d",&p->coeff);
p->next=NULL;
if(head1==NULL)
{
    head1=p;
    tail1=p;
}
else 
{
    tail1->next=p;
    tail1=p;
}
}
printf("polynomial 1:");
display(head1);
printf("enter number of terms in polynomial 2");
scanf("%d",&n2);
for (i=0;i<n2;i++)
{
        		q = (struct node*)malloc(sizeof(struct node));
printf("enter exponent of %d element",i+1);
scanf("%d",&q->exp);
printf("enter coeffient of %d element",i+1);
scanf("%d",&q->coeff);
q->next=NULL;
if(head2==NULL)
{
    head2=q;
    tail2=q;
}
else 
{
    tail2->next=q;
    tail2=q;
}
}
printf("polynomial 2:");
display(head2);
printf("Menu:\n1.Addition\n2.Multiplication\n");
scanf("%d",&ch);
if (ch==1)
{
head3=NULL;
p=head1;
q=head2;
while (p != NULL && q != NULL)
			{
				r = (struct node*)malloc(sizeof(struct node));
				
				if(p->exp > q->exp)
				{
					r->exp = p->exp;
					r->coeff = p->coeff;
					r->next = NULL;
					p = p->next;
				}
				
				else if(p->exp < q->exp)
				{
					r->exp = q->exp;
					r->coeff = q->coeff;
					r->next = NULL;
					q = q->next;
				}
				
				else if((p->coeff + q->coeff) != 0)
				{
					r->exp = p->exp;
					r->coeff = p->coeff + q->coeff;
					r->next = NULL;						
					p = p->next;
					q = q->next;
				}
if(head3 == NULL)
				{
					head3 = r;
					tail3 = r;
				}
				
				else
				{
					tail3->next = r;
					tail3 = r;
				}
			}
			while(p != NULL)
			{
				r = (struct node*)malloc(sizeof(struct node));
				r->exp = p->exp;
				r->coeff = p->coeff;
				r->next = NULL;
				tail3->next = r;
				tail3 = r;

				if(p->next == NULL)
					break;
				
				p = p->next;
			}
			
			while(q != NULL)
			{
				r = (struct node*)malloc(sizeof(struct node));
				r->exp = q->exp;
				r->coeff = q->coeff;
				r->next = NULL;
				tail3->next = r;
				tail3 = r;
				
				if(q->next == NULL)
					break;
					
				q = q->next;
			}
			printf("resultant polynomial:");
			display(head3);
}
else if(ch==2)
{
    head3=NULL;
    p=head1;
    q=head2;
    while (p != NULL)
			{
				q=head2;
				while(q!=NULL)
				{
				r = (struct node*)malloc(sizeof(struct node));
				r->exp=p->exp+q->exp;
				r->coeff = p->coeff * q->coeff;
			    q = q->next;
			    if(head3 == NULL)
					{
						head3 = r;
						tail3 = r;
					}

					else
					{
						tail3->next = r;
						tail3 = r;
					}
				}

				p = p->next;
			}
		printf("resultant polynomial:\n");
		display(head3);
}
}

void display(struct node *head) {
    struct node *p = head;

    while (p != NULL) {
        printf("%dx^%d ", p->coeff, p->exp);
        if (p->next != NULL) {
            printf("+ ");
        }
        p = p->next;
    }
    printf("\n");
}
