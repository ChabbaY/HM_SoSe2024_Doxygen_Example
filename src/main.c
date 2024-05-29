/**
 * @file      main.c
 * @brief     Main file to demonstrate the list management library
 * @details   This file contains the main function to demonstrate the usage of the list management library. 
 *            It initializes a list, adds elements to it, removes an element, and displays the list.
 * @author    Your Name
 * @copyright MIT License, see repository LICENSE file
 */

#include "list.h"

int main() {
    List myList;
    
    list_init(&myList);
    
    list_add(&myList, 10);
    list_add(&myList, 20);
    list_add(&myList, 30);
    
    printf("List after adding elements: ");
    list_display(&myList);
    
    list_remove(&myList, 20);
    
    printf("List after removing an element: ");
    list_display(&myList);
    
    // Clean up
    free(myList.data);
    
    return 0;
}
