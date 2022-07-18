listint_t *add_nodeint_end(listint_t **head, const int n)
{
	    listint_t* new = (listint_t*)malloc(sizeof(listint_t));
	        listint_t *last = *head;
		    
		    if (new != NULL)
			        {
					    
					        new -> n = n;
						        new -> next = NULL;
							    
							        if (*head == NULL)
									        {
											            *head = new;
												                return (new);
														        }
								    
								        while (last -> next != NULL)
										            last = last -> next;
									        
									        last -> next = new;
										        return (new);
											    }
		        else
				    {
					            return(NULL);
						        }
}
