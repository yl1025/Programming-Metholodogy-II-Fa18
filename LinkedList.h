#ifndef PM2HW1P3_LINKEDLIST_H
#define PM2HW1P3_LINKEDLIST_H
#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class linkedList {
    node *head;

public:
    linkedList();

    void Push(int data);
    void insertionSort();
    void print();
    void Pop();
    int Peek();
    int size();

};
#endif //PM2HW1P3_LINKEDLIST_H
