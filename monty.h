#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ctype.h>

#define  _POSIX_C_SOURCE 200809L

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
* struct bus_s - variables -args, file, line content
* @arg: A pointer to a character (char) representing a value.
* @file: pointer to monty file
* @content: A pointer to a character (char) representing the line content.
* @lifi: An integer (int) flag used to indicate a change between stack and queue operations.
*
* Description: carries values and data through the program.
*
*/
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;

extern bus_t bus;

void function_push(stack_t **head, unsigned int number);
void function_pall(stack_t **head, unsigned int number);
void function_pint(stack_t **head, unsigned int number);
void function_pop(stack_t **head, unsigned int counter);
void function_swap(stack_t **head, unsigned int counter);
void add_stack(stack_t **head, unsigned int counter);
void function_nop(stack_t **head, unsigned int counter);
void addnode(stack_t **head, int n);
void function_queue(stack_t **head, unsigned int counter);
void function_stack(stack_t **head, unsigned int counter);
void addqueue(stack_t **head, int n);
void free_stack(stack_t *head);


char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);

#endif /* MONTY_H */
