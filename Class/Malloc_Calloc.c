/* Allocation de mémoire pour un entier. */
int *ptr = (int*) malloc(sizeof (int)); 
if (ptr == NULL) 
{
   printf("Impossible d'allouer la mémoire\n");
   exit(-1);
}
else
   printf("Mémoire allouée avec succès.\n");


/* Allocation de mémoire pour un tableau de 10 éléments de type int. */
int *ptr = (int*) calloc(20 ,sizeof (int));
if (ptr == NULL) 
{
   printf("Impossible d'allouer de la mémoire\n");
   exit(-1);
} 
else
   printf("Mémoire allouée avec succè.\n");