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

void add_link(number **list, int value , int value_new)
{
    printf("test");
	number *tmp = *list;

	while(tmp->next != NULL)
	{
		if(tmp->next->value == value)
		{
			number *futur_lien = tmp->next;
                number *item = malloc(sizeof(*item));
    
                item->value = value_new;
                item->next = futur_lien;

                tmp->next = item;
            printf("ok\n");
		}
        break;
		tmp = tmp->next;
	}
}

number *create_list(int value)
{
    number *first = malloc(sizeof(*first));
    
    first->value = value;
    first->next = NULL;

    return first;
}

int main() {
    number *list = create_list(10)
    ;
    int n;
    int n1;
    int n2;
    int n3;
    while(n != 3){
    printf("0 pour ecrir 1 pour aficher 2 pour ajouter 3 pour leave\n");
    printf("ecrire un nombre pour le mode \n");
    scanf("%d",&n);
    if (n == 0){
        
    printf("ecrire un nombre a ajouter\n");
    scanf("%d",&n1);
    add_to_end(&list, n1);
        

    }
    else if (n == 1){
        display_list(&list);

    }
    else if (n==2){
        printf("ecrire ou ajouter un nombre\n");
        scanf("%d",&n2);
        printf("ecrire le un nombre a ajouter\n");
        scanf("%d",&n3);
        add_link(&list,n2,n3);
    }
}

}