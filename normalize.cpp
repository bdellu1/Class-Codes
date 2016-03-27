 #include <iostream>
 #include <iomanip>
 #include <cmath>
 #include <cstdlib>
   
 /**
  * @normalize.cpp
  * @author  Brandon Dellucky <bdellu1@lsu.edu>
  * @brief This program receives an array of numbers via stdin and outputs th    e normalized values 
  **/
  
 /**
  * This function calculates the mean value of an array of floats
  * @param a array of numbers
  * @param n size of array
  * @return  mean
  **/
 float mean(float *a, int n) {
   float total = 0.0;
   for(int i=0; i<n; i++){
     total += a[i];
   }
   return total/n;
 }
 /**
  * This function calculates the standard deviation of an array of floats, us    ing the mean function
  * @param a array of numbers
  * @param n size of array 
  * @return  standard deviation
  **/
 float stddev(float *a, int n) {
   float avg = mean(a,n), total = 0.0;
   for(int i=0; i<n; i++){
     total += pow((a[i]-avg),2);
   }
   return sqrt(total/n);
 }
  
 /**
  * This function normalizes the entire array using the standard deviation
  * @param a array of numbers
  * @param n size of array
  * @return  normalized array
  **/
float *normalize(float *a, int n) {
   float deviation = stddev(a,n), avg = mean(a,n);
   for(int i=0; i<n; i++){
     a[i] = (a[i] - avg)/deviation;
   }
   return a;
 }
  
  
 int main() {
   int  n = 0, limit=1;
   float *a = (float *)malloc(limit*sizeof(float));
   std::string num;
  
   std::cout << "> ";
   while (std::cin >> num) {
     if (num == "quit") break;
     a[n++] = std::stof(num);
     if (n>=limit) {
       limit *= 2;
       a = (float *)realloc(a, limit*sizeof(float));
     }
   std::cout << "> ";
}
    
   normalize(a,n);
   for(int count=0; count<n; count++){
     std::cout << a[count] << " ";
   }
   std::cout << std::endl;
  
   free(a);
}
