size_t listint_len(const listint_t *h)
{
	    listint_t *ptr=h;
	        int count = 0;
		    
		    while (ptr != NULL)
			        {
					        ptr = ptr -> next;
						        count++;
							    }
		        return(count);
}
