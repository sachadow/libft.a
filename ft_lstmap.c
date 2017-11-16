//
//
//
//

#include "header.h"

t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
  t_list  *first;
  t_list  *second;
  t_list  *third;

  first = f(lst);
  lst = lst->next;
  third = first;
  while (lst->next != NULL)
  {
    second = NULL;
    second = f(lst);
    third->next = second;
    third = second;
    lst = lst->next;
  }
  return (first);
}
