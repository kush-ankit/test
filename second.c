#include <stdio.h>


int main()

{
    int Ram ,Shyam ,Raja ;
    
    printf("Ram's Age:\n");
    scanf("%d",&Ram);
  
    printf("Shyam's Age:\n");
    scanf("%d",&Shyam);

    printf("Raja's Age:\n");
    scanf("%d",&Raja);

  if (Ram>Raja&&Ram>Shyam)
  {
    printf("Ram is older Brother.");
  }
  
  if (Raja>Ram&&Raja>Shyam)
  {
    printf("Raja is older brother.");
  }
  
  if (Shyam>Ram &&Shyam>Raja)
  {
      printf("Shyam is older brother.");
  }

}