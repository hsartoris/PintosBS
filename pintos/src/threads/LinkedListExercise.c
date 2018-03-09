/*
  Exercise: Pintos Linked Lists

  test_list demonstrates how to work with linked lists.
  Should be removed from kernel after you play with it!!

  1. Add this code at the end of thread.c
  2. Call test_list at the end of thread_start().
  3. Run "pintos run alarm-multiple".
  3. Finish the for-loop to print out the elements in the list.
  4. Find list code and figure out how list_entry works!
  5. You should then return allocated memory in a reasonable manner.
  6. Finally, remove these changes from thread.c when complete.

*/

// One element in the list
struct mystruct {
  char *word;
  struct list_elem elem;
};

/*
  Build a list and test that it works.
*/

int test_list() {
  struct list wordlist;
  char *stuff[] = {"The","rain","in","Spain","falls",
		   "mainly","in","the","plain.",NULL};
  int i;
  struct list_elem *e;
  
  list_init(&wordlist);

  if (list_empty(&wordlist)) printf("list is empty\n");
  else printf("list has %d elements\n",list_size(&wordlist));

  // Create linked list of mystructs.
  for (i = 0; stuff[i] != NULL; i++) {
    struct mystruct *s = (struct mystruct *) malloc(sizeof(struct mystruct));
    s->word = stuff[i];
    list_push_back (&wordlist, &s->elem); // onto end of list
  }
  if (list_empty(&wordlist)) printf("list is empty\n");
  else printf("list has %d elements\n",list_size(&wordlist));

  // Loop over list
  for (e = list_begin(&wordlist);
       e != list_end(&wordlist);
       e = list_next(e) ) {
    // TODO: Print out the items in the list.
    // You need to find and read the list code to figure this out.
    // You then also need to free the dynamically allocated memory!

  }
  
  return (0);
}


