#pragma once

#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;
template <class T>

class clsMyQueue
{

protected:
    clsDblLinkedList<T> _MyList;

public:
    void Push(T Item)
    {
        _MyList.InsertAtTheEnd(Item);
    }

    void Pop()
    {
        _MyList.DeleteFirstNode();
    }

    void Print()
    {
        _MyList.ListNodes();
    }

    int Size()
    {
        return _MyList.Size();
    }

    bool IsEmpty()
    {
        return _MyList.IsEmpty();
    }

    T front()
    {
        return _MyList.GetItem(0);
    }

    T back()
    {
        return _MyList.GetItem(Size() - 1);
    }
    T GetItem(unsigned long long Index)
    {
        return _MyList.GetItem(Index);
    }
    void Reverse()
    {
        _MyList.Reverse();
    }
    void UpdateItem(unsigned long long Index, T value)
    {
        _MyList.UpdateItem(value, Index);
    }
    void InsertAfter(unsigned long long Index, T value)
    {
        _MyList.InsertAfter(_MyList.GetItem(Index), value);
    }
    void InsertAtFront(T value)
    {
        _MyList.InsertAtTheBegining(value);
    }
    void InsertAtBack(T value)
    {
        _MyList.InsertAtTheEnd(value);
    }
    void Clear()
    {
        _MyList.Clear();
    }
};
