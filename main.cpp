#include<iostream>
#include"LinkedList.h"
using namespace std;
linkedList::linkedList()
{
    head = NULL;
}

void linkedList::Push(int data)

{
    node *newNode,*tmp;
    newNode = new node;
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }

    else

    {
        tmp = head;
        head = newNode;
        head->next = tmp;

    }
}

void linkedList::Pop()

{
    node *tmp = head;
    head = head->next;
    delete tmp;
}

int linkedList::Peek()

{

    return head->data;

}

void linkedList::insertionSort()

{

    if (head == NULL || head->next == NULL)

        return ;

    node *newNode = new node;

    newNode->data = head->data;

    newNode->next = NULL;

    node *cur = head->next;

    while (cur != NULL)
    {
        node *pointer1 = newNode;

        node *next = cur->next;

        if (cur->data <= newNode->data)
        {
            node *head1 = newNode;

            newNode = cur;

            newNode->next = head1;
        }
        else
        {
            while (pointer1->next != NULL)

            {
                if (cur->data > pointer1->data && cur->data <= pointer1->next->data)

                {

                    node *next1= pointer1->next;

                    pointer1->next = cur;

                    cur->next = next1;

                }

                pointer1 = pointer1->next;

            }

            if (pointer1->next == NULL && cur->data > pointer1->data)

            {

                pointer1->next = cur;

                cur->next = NULL;

            }

        }
        cur = next;

    }

    head= newNode;
}
void linkedList::print()
{
    node *cur = head;
    while (cur != NULL)
    {

        cout << cur->data << " " << endl;

        cur = cur->next;

    }
    cout << endl;
}
int linkedList::size()
{
    node *cur = head;
    int count = 0;
    while (cur != NULL)
    {
        count++;

        cur = cur->next;

    }
    return count;
}
int main()
{
    linkedList list;

    list.Push(10);

    list.Push(4);

    list.Push(14);

    list.Push(9);

    list.Push(3);

    cout << "Before sorting: " << endl;

    list.print();

    list.insertionSort();

    cout << "After sorting: " << endl;

    list.print();

    cout << "Peek: "<<list.Peek()<<" \ndata "<< list.Peek()<<" is popped" << endl;

    list.Pop();

    cout << "Peek: "<<list.Peek()<<"\ndata "<<list.Peek()<<" is popped" << endl;

    list.Pop();

    cout << "Peek: " << list.Peek() << endl;

}
