 #include "dice.h"
   
 namespace di{
 
   /**
    * Finds a random number between 1 and "sides" "number" times
    * @param number how many random numbers to find 
    * @param sides max integer that can be found by rand
    * @return the sum of random integers found
    */
   int dice_roll(int number, int sides){
     srand(time(NULL));
     int sum = 0;
     for (int i=0; i<number; i++)
       sum += rand()%sides+1;
     return sum;
   }
   
   /**
    * Approximates pi using the Monte Carlo method
    * @param n (honestly I'm not sure why this parameter was specified :/)
    * @return The approximation
    */
   float pi(int n){
     int inside = 0;
     float x,y;
     srand(time(NULL));
     for(int i=0; i<=1000; i++){
       x = ((float) rand() / (RAND_MAX));
       y = ((float) rand() / (RAND_MAX));
       if(sqrt(x*x + y*y) < 1)
         inside = inside + 1;
     }
     return (4.0*inside)/1000.0;
   }
 };
