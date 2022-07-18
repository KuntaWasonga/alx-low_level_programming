size_t print_listint(const listint_t *h)
{
	    listint_t *ptr = h;
	        int count = 0;
		    
		    while (ptr != NULL)
			        {
					     printf("%d\n", ptr->n);
					          ptr=ptr->next;
						       count++;
						           }
		        return (count);
}
