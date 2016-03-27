 #include <iostream>
 #include <cmath>
 #include <iomanip>
 #include "util.h"
   
 namespace util{
     
   std::string reverse(std::string s) {
     for (int i=0; i<s.size()/2; i++)
       std::swap(s[i], s[s.size()-i-1]);
     return s;
   }
    
   int sum_up_to_n(int n){
     return n*(n+1)/2;
   }
    
   bool isprime(int n){
     for(int i=2; i<sqrt(n); i++){
       if(n%i == 0)
         return false;
     }
     return true;
   }
   
   float mean(float *a, int n) {
     float s = 0.0;
     for (int i=0; i<n; i++)
       s += a[i];
     return s/n;
   }
    
   int max(int a[], int n) {
     int m = a[0];
     for (int i=1; i<n; i++)
       if (a[i] > m)
         m = a[i];
     return m;
   }
    
   int min(int a[], int n) {
     int m = a[0];
     for (int i=1; i<n; i++)
       if (a[i] < m)
         m = a[i];
     return m;
   }
    
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
   
   void printNumArray(int *a, int n){
     for(int i=0; i<n; i++)
       std::cout << a[i] << " ";
     std::cout << std::endl;
   }
   
   void printCharArray(char *a, int n){
     for(int i=0; i<n; i++)
       std::cout << a[i];
     std::cout << std::endl;
   }
 }
