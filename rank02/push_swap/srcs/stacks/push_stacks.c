#include "push_swap.h"

void insert_node(t_stack *stack, t_node *node)
{
    if (!stack)
        return;
    if (stack->size == 0)
    {
        stack->top = node;
        stack->bot = node;
    }
    else
    {
        stack->top->next = node;
        node->prev = stack->top;
        stack->top = node;
    }
    stack->size++;
}