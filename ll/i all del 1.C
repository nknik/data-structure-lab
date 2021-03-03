#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct node
{
    int info;
    struct node *next;
};

typedef struct node *NODEPTR;

NODEPTR list = NULL;

void insert_beg(int x)
{
    NODEPTR q;
    q = (struct node *)malloc(sizeof(struct node));
    q->info = x;
    q->next = list;
    list = q;
}

void del_beg()
{
    NODEPTR p, q;
    p = q = list;
    if (list == NULL)
        printf("under flow condition\n");
    else if (list->next == NULL)
    {
        p = list;
        free(p);
        list = NULL;
    }
    else
    {
        while (p->next != NULL)
        {
            q = p;
            p = p->next;
        }
        q->next = NULL;
        free(p);
    }
}

void insert_end(int x)
{
    NODEPTR p, q;
    p = list;
    q = (struct node *)malloc(sizeof(struct node));
    q->info = x;
    q->next = NULL;
    if (list == NULL)
        insert_beg(x);
    else
    {
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = q;
    }
}
void insert_any(int x, int pstn)
{
    int k, i;
    NODEPTR p, q;
    q = (struct node *)malloc(sizeof(struct node));
    q->info = x;
    q->next = NULL;
    k = count();
    if (pstn <= k + 1)
    {
        if (pstn <= 1)
        {
            insert_beg(x);
        }
        else if (pstn == k + 1)
        {
            insert_end(x);
        }
        else
        {
            for (i = 0; i < pstn - 2; i++)
            {
                p = p->next;
            }
            q->next = p->next;
            p->next = q;
        }
    }
}

count()
{
    NODEPTR p;
    int count = 1;
    p = list;
    if (list == NULL)
    {
        count = 0;
        printf("no node in the list");
        return (count);
    }
    else
    {
        while (p->next != NULL)
        {
            p = p->next;
            count++;
        }
        printf("the number of node in the list are%d", count);
        return (count);
    }
}
void display()
{
    NODEPTR q;
    q = list;
    printf("list (%d)", list);
    for (q = list; q != NULL; q = q->next)
    {
        printf("-->[%d(%u)|%u]", q->info, q, q->next);
    }
    printf("\n");
}
void main()
{
    int ch, x, pstn;
    clrscr();
    do
    {
        printf("\t 1] INSERT FROM BEGINING \n");
        printf("\t 2] DEL AT BEG \n");
        printf("\t 3] INSERT AT END \n");
        printf("\t 4] DISPLAY\n ");
        printf("\t 5] count\n ");
        printf("\t 6] inset at any\n ");
        printf("\t ENTER YOUR CHOICE:\n");

        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\n Enter the element you want to insert");
            scanf("%d", &x);
            insert_beg(x);
            break;
        case 2:
            printf("\n Enter the element you want to del");
            del_beg();
            break;
        case 3:
            printf("\n Enter the element you want to insert");
            scanf("%d", &x);
            insert_end(x);
            break;
        case 4:
            display();
            break;
        case 5:
            count();
            break;
        case 6:
            printf("\nEnter the element to insert: ");
            scanf("%d", &x);
            printf("\nWhere do you want to insert %d? ", x);
            scanf("%d", &pstn);
            insert_any(x, pstn);
            break;
        }
    } while (ch);
    getch();
}
