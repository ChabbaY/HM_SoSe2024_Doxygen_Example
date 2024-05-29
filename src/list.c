/**
 * @file      list.c
 * @brief     Implementation of a simple list management library
 * @details   This file contains the definitions of the functions declared in list.h, 
 *            including functions to add, remove, and display elements in the list.
 * @author    Your Name
 * @copyright MIT License, see repository LICENSE file
 */

#include "list.h"

void list_init(List *list) {
    list->data = NULL;
    list->size = 0;
}

void list_add(List *list, int value) {
    list->data = (int *)realloc(list->data, (list->size + 1) * sizeof(int));
    if (list->data == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    list->data[list->size] = value;
    list->size++;
}

void list_remove(List *list, int value) {
    size_t i, j;
    for (i = 0; i < list->size; i++) {
        if (list->data[i] == value) {
            for (j = i; j < list->size - 1; j++) {
                list->data[j] = list->data[j + 1];
            }
            list->size--;
            list->data = (int *)realloc(list->data, list->size * sizeof(int));
            return;
        }
    }
    fprintf(stderr, "Value not found in the list\n");
}

void list_display(const List *list) {
    size_t i;
    for (i = 0; i < list->size; i++) {
        printf("%d ", list->data[i]);
    }
    printf("\n");
}
