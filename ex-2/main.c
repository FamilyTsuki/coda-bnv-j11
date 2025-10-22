#include <stdlib.h>
#include <stdio.h>

typedef struct s_number number;

struct s_number {
    int value;
    number *next;
};

void display_list(number **list)
{
    number *tmp = *list;

    while(tmp != NULL)
    {
        printf("Y : %d \n", tmp->value);
        tmp = tmp->next;
    }
}

void add_to_end(number **list, int value)
{
    number *tmp = *list;

    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    number *item = malloc(sizeof(*item));
    
    item->value = value;
    item->next = NULL;

    tmp->next = item;
}

number *create_list(int value)
{
    number *first = malloc(sizeof(*first));
    
    first->value = value;
    first->next = NULL;

    return first;
}

int main() {
    number *list = create_list(10);
    display_list(&list);
    add_to_end(&list, 20);
    display_list(&list);
    

}