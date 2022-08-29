#include "UnSortedList.h"
#include <iostream>
using namespace std;

int main() {
    float val;
    UnsortedList *thePointerList;

    cout << "Let's see what happen to the List :)";
    thePointerList = new UnsortedList(); // Instantiate a list object
    thePointerList->Insert(5, 3.1f);
    thePointerList->Insert(1, 5.6f);
    thePointerList->Insert(3, 8.3f);
    thePointerList->Insert(2, 7.4f);
    thePointerList->Insert(4, 2.5f);
    // Show what is in the list
    thePointerList->PrintList();

    // Test the list length function
    cout << "\nList now contains " << thePointerList->ListLength() << " items.\n\n";

    // Test delete function
    cout << "Testing delete of last item in list.\n";
    thePointerList->Delete(3);
    thePointerList->PrintList();

//    if(thePointerList->Delete(3)){
//        cout << "Oops! Should not have been able to delete.\n";
//    }else{
//        cout << "Unable to locate item to delete.\n";
//
//    }


}
