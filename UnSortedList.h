//
// Created by User on 2022/8/28.
//

#ifndef UNTITLED_UNSORTEDLIST_H
#define UNTITLED_UNSORTEDLIST_H

#include <iostream>
#define MAX_SIZE  50     // Define maximum length of the list

using namespace std;

struct ListItem{
    int     key;
    float   value;
};

class UnsortedList{
    public:
        UnsortedList();               // Class constructor
        ~UnsortedList();              // Class destuctor
        void ClearList();             // Remove all items from the list
        void Insert(int key, float value);// Add an item to the list
        void Delete(int key);         // Delete an item from the list
        bool Search(int key, float *returnVal); // Search for an item in the list
        int ListLength();             // Return number of items in list
        bool isEmpty();               // Return true if list is empty
        bool isFull();                // Return true if list is full
        void PrintList();             // Print all items in the list
    private:
        int count;                     // Index to head of the list
        ListItem theList[MAX_SIZE];   // The list
};

#endif //UNTITLED_UNSORTEDLIST_H
