#include "prime.h"
#include<math.h>

int flag=1; // flag variable to set 0 if not prime

int prime(int number)
{
   int loop_var;
        
    if(number<2)  //< neither prime nor composite
      return -1;

    else
      {
         for(loop_var=2;loop_var<=sqrt(number);loop_var++)
          {
             if((number%loop_var)==0)
                {
                    flag=0; //< not a prime number
                     break;
                }
           }
       }

    return flag;
}
