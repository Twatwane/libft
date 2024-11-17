#include <stdio.h>
#include <stdlib.h>
#include "libft.h" // Assurez-vous que votre fichier header contient les déclarations nécessaires

// Fonction pour afficher une liste chaînée
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

static void print_list_int(t_list *lst)
{
    while (lst)
    {
        // Cast de content en int* puis déférencement pour afficher la valeur
        printf("%d -> ", *(int *)lst->content);  
        lst = lst->next;
    }
    printf("NULL\n");
}

void	delfunc(void *)  // fonction exemple qui ne fait rien 
{
	return ;
}

void *multiply_by_2(void *x)
{
    // Convertir le void* en pointeur sur int
    int *int_x = (int *)x;

    // Allouer de la mémoire pour le résultat
    int *result = malloc(sizeof(int));

    // Vérifier si l'allocation de mémoire a réussi
    if (!result)
	{
		printf("\nmultiply by 2 bug\n");
        return NULL;
	}

    // Multiplier la valeur pointée par x par 2 et stocker dans result
    *result = (*int_x) * 2;

    return (void *)result; // Retourner le résultat comme un void*
}

// Fonction pour tester `ft_lstdup`
int main(void)
{
    // Création de la liste d'origine
	t_list *lst = NULL;
	
    ft_lstadd_back(&lst, ft_lstnew("hello"));
    ft_lstadd_back(&lst, ft_lstnew("world"));
    ft_lstadd_back(&lst, ft_lstnew("!"));

    printf("Liste originale :\n");
    print_list(lst);

    // Duplication de la liste
    t_list *dup_lst = ft_lstdup(lst, &delfunc);

    printf("\nListe dupliquée :\n");
    print_list(dup_lst);

    // Vérification si les deux listes sont indépendantes
    printf("\nModification de la liste originale...\n");
    lst->content = "modified"; // Libération de la mémoire de l'élément initial
    lst->content = ft_strdup("Modified"); // Modification du contenu

    printf("\nListe originale après modification :\n");
    print_list(lst);

    printf("\nListe dupliquée après modification de l'originale :\n");
    print_list(dup_lst);

    // Libération des deux listes
    ft_lstclear(&lst, &delfunc);
    ft_lstclear(&dup_lst, &delfunc);

	printf("\ntry map :\n");
	t_list *new = NULL;
    int val1 = NULL, val2 = 2, val3 = 4;
    ft_lstadd_back(&new, ft_lstnew(&val1));  // Ajouter l'élément avec la valeur 0
    //ft_lstadd_back(&new, ft_lstnew(&val2));  // Ajouter l'élément avec la valeur 2
    ft_lstadd_back(&new, ft_lstnew(&val3));  // Ajouter l'élément avec la valeur 4
	ft_lstmap(new, &multiply_by_2, &delfunc);
	print_list_int(new);

    return 0;
}
