 #include <iostream>
 #include <cmath>
 #include <iomanip>
 #include "util.h"
   
 namespace util{
   
   /**
    * Reverses a given string
    * @param s string to reverse
    * @return reversed string
    */
   std::string reverse(std::string s) {
     for (int i=0; i<s.size()/2; i++)
       std::swap(s[i], s[s.size()-i-1]);
     return s;
   }
   /**
    * Efficiently sums 1 to n
    * @param n number to sum to
    * @return sum
    */
   int sum_up_to_n(int n){
     return n*(n+1)/2;
   }
   
   /**
    * Checks if a number is prime efficiently.
    * @param n number to check
    * @return true if prime, false if not
    */
   bool isprime(int n){
     for(int i=2; i<sqrt(n); i++){
       if(n%i == 0)
         return false;
     }
     return true;
   }
   
   /**
    * Computes the mean
    * @param *a array to find mean
    * @param n  size of array
    * @return   mean of array
    */
   float mean(float *a, int n) {
     float s = 0.0;
     for (int i=0; i<n; i++)
       s += a[i];
     return s/n;
   }
   
   /**
    * Finds the max of an array
    * @param a[] array
    * @param n   size of array
    * @return    max of array
    */
   int max(int a[], int n) {
     int m = a[0];
     for (int i=1; i<n; i++)
       if (a[i] > m)
         m = a[i];
     return m;
   }
   
   /**
    * Finds the min of an array
    * @param a[] array
    * @param n   size of array
    * @return    min of array
    */ 
   int min(int a[], int n) {
     int m = a[0];
     for (int i=1; i<n; i++)
       if (a[i] < m)
         m = a[i];
     return m;
   }
   
   /**
    * Checks if a character is an integer
    * @param *a char given
    * @return true if integer, false if not
    */
   bool is_integer(char *a) {
     int i=0;
     if (a[0] == '-') i++;
     while (a[i] != '\0') {
       if (!isdigit(a[i]))
         return false;
       i++;
     }
     return true;
   }
   
   /**
    * Prints an array of integers
    * @param a* array
    * @param n  size of array
    */
   void printNumArray(int *a, int n){
     for(int i=0; i<n; i++)
       std::cout << a[i] << " ";
     std::cout << std::endl;
   }
   
   /**
    * Prints an array of characters
    * @param a* array
    * @param n  size of array
    */
   void printCharArray(char *a, int n){
     for(int i=0; i<n; i++)
       std::cout << a[i];
     std::cout << std::endl;
   }
 }
