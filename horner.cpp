 #include <iostream>
 #include <iomanip>
 #include <stdlib.h>
 #include <cmath>
   
 int polynomial(int p[], int n, int x){
   int result = p[n-1];
   for (int i=n-2; i>=0; i--)
     result = result*x + p[i];
   return result;
 }
  
 void usage(char *progname){
   std::cerr << "usage: " << progname << " x coefficients..." << std::endl;
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
  
 int main(int argc, char **argv) {
   if(argc <= 2){
     usage(argv[0]);
     exit(EXIT_FAILURE);
   }
  
   try {
     for(int a=1; a<argc; a++){
       if(!is_integer(argv[a]))
       throw "Arguments must be integers!";}
    }
   catch (const char *e) {
     std::cerr << e << std::endl;
   }
  
   int n = argc-2;
   int a[n];
   for(int i=0; i<n; i++)
     a[i] = atoi(argv[i+2]);
 
   for(int b=n-1; b>=0; b--){
     if(b == 0)
       std::cout << a[b] << " = ";
     else
       std::cout << a[b] << "*" << argv[1] << "^" << b << " + ";
   }
   std::cout <<  polynomial(a, n, atoi(argv[1])) << std::endl;
 }
