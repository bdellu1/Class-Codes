 #ifndef UTIL_H
 #define UTIL_H
    
 namespace util{
   std::string reverse(std::string s);
   int sum_up_to_n(int n);
   bool isprime(int n);
   float mean(float *a, int n);
   int max(int a[], int n);
   int min(int a[], int n);
   bool is_integer(char *a);
   void printNumArray(int *a, int n);
   void printCharArray(char *a, int n);
 };
   
 #endif
