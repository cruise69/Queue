#pragma once
#include <iostream>
using namespace std;

template <typename T>
class clsMyQueue
{
protected:
    class Node
    {
    public:
        T value;
        Node *next = NULL;
        Node *prev = NULL;
    };
    Node *head = new Node();
    unsigned long long _size = 0;

public:
    Node *GetLastNode()
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        return temp;
    }
    void Push(T value)
    {
        Node *temp = new Node();
        temp->value = value;
        Node *temp2 = GetLastNode();
        temp2->next = temp;
        temp->prev = temp2;
    }
    void Pop()
    {
        Node *toDelete = head->next;
        Node *toModify = toDelete->next;
        toModify->prev = toDelete->prev;
        delete toDelete;
        toDelete = nullptr;
        head->next = toModify;
    }
    void ListNodes()
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
            cout << temp->value << '\n';
        }
    }
};