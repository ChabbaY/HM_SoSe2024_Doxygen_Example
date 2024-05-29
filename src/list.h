/**
 * @file      list.h
 * @brief     Header file for a simple list management library
 * @details   This file contains the declarations for a simple list management library, 
 *            including functions to add, remove, and display elements in the list.
 * @author    Your Name
 * @copyright MIT License, see repository LICENSE file
 */

#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

/** @struct List
 *  @brief  Structure to represent a list.
 *  @var    List::data
 *          Pointer to the data array.
 *  @var    List::size
 *          Size of the list.
 */
typedef struct {
    int *data;
    size_t size;
} List;

/**
 * @brief  Initializes a list.
 * @param  list Pointer to the list to be initialized.
 */
void list_init(List *list);

/**
 * @brief  Adds an element to the list.
 * @param  list Pointer to the list.
 * @param  value The value to be added.
 */
void list_add(List *list, int value);

/**
 * @brief  Removes an element from the list.
 * @param  list Pointer to the list.
 * @param  value The value to be removed.
 */
void list_remove(List *list, int value);

/**
 * @brief  Displays the elements of the list.
 * @param  list Pointer to the list.
 */
void list_display(const List *list);

#endif // LIST_H
