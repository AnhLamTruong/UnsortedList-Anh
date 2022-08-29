// Purpose: Implementation file for a demonstration of an unsorted
//		list implemented as an array.

#include "UnSortedList.h"

//Class constructor
//Initialize the private data
UnsortedList::UnsortedList() {
    count = -1;
}

//Class destructor
//Freed the private data
UnsortedList::~UnsortedList() {

}
//ClearList
//Remove all items from the list
void UnsortedList::ClearList() {
    count = -1;
}

//InsertItemsToList
// Insert an item into the list in the next open slot.
void UnsortedList::Insert(int key, float val) {
    if(isFull()){
        cout<<"List is Full :("<<endl;
    }else{
        count++;
        theList[count].key=key;
        theList[count].value=val;
    }
}

//DeleteItems
//Delete an item from the list and move all others up to close up the empty space.
void UnsortedList::Delete(int key) {
    int follower, finder = 0;
    if(isEmpty()){
        cout<<"List is empty :("<<endl;
    }while((finder <= count) && (key != theList[finder].key))
    {
        finder++;
    }
    // Check to see if the item was found
    if(finder>count){
        cout<<"NOT FOUND!!!"<<endl;
    }else{
        for(follower = finder; follower < count; follower++)
        {
            theList[follower] = theList[follower+1]; // Using whole structure copy
        }
        count--; // Reset count
    }
}

//SearchItems
//Search for an item by key and copy the value into the variable *returnVal.

bool UnsortedList::Search(int key, float *returnVal) {
    int finder = 0;
    while((finder <= count) && (key != theList[finder].key))
    {
        finder++;
    }
    // If item not found return FALSE
    if(finder > count) {
        return false;
    }else{}
        *returnVal = theList[finder].value; // Copy the data
        return true;
}

//Return the number of items in the list.
int UnsortedList::ListLength() {
    return count+1;;
}

//Return true if the list is empty
bool UnsortedList::isEmpty() {
    return (count==-1);
}

//Return true if the list is full
//Returns: TRUE if full, otherwise FALSE
bool UnsortedList::isFull() {
    return count>=MAX_SIZE;
}


//Simply Print :)
void UnsortedList::PrintList() {
    int i;

    cout << "\n\nItems in the List\n";
    cout << "-----------------------------------------------------------\n";
    cout << "Key\t\tData\n";
    cout << "-----------------------------------------------------------\n";

    for(i=0; i<=count; i++)
    {
        cout << theList[i].key << "\t\t" << theList[i].value<< "\n";
    }
    cout << "-----------------------------------------------------------\n\n";
}
