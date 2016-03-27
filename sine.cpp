 #include <iostream>
 #include <cmath>
 #include <iomanip>
    
 double factorial(double n){
   double fact = 1;
   for (int i = 1; i <= n; i++)
   {
     fact *= i;
   }
   return fact;
 }
   
 double sine(double x){
   double pi = 3.141592, rad = (x*(pi/180)), sum = 0, iter;
   int n = 1, sign = 1;
   do
   {
     iter = pow(rad, n) / (factorial(n));
     sum += iter * sign;
     n += 2;
     sign *= (-1);
   } while (iter > 0.0001);
   return sum;
 }
   
 double cosine(double x){
   double pi = 3.141592, rad = (x*(pi/180)), sum = 0, iter;
   int n = 0, sign = -1;
   do
   {
     iter = pow(rad, n) / (factorial(n));
     sum += iter * sign;
     n += 2;
     sign *= (-1);
   } while (iter > 0.0001);
   return fabs(sum);
 }
   
 int main()
 {
   std::cout << "The   sine of   0 is "  << std::setprecision(5) << sine(0) << std::endl;
   std::cout << "The cosine of   0 is "  << std::setprecision(5) << cosine(0) << std::endl;
   std::cout << "The   sine of  30 is "  << std::setprecision(5) << sine(30) << std::endl;
   std::cout << "The cosine of  30 is "  << std::setprecision(5) << cosine(30) << std::endl;
   std::cout << "The   sine of  60 is "  << std::setprecision(5) << sine(60) << std::endl;
   std::cout << "The cosine of  60 is "  << std::setprecision(5) << cosine(60) << std::endl;
   std::cout << "The   sine of  90 is "  << std::setprecision(5) << sine(90) << std::endl;
   std::cout << "The cosine of  90 is "  << std::setprecision(5) << cosine(90) << std::endl;
   std::cout << "The   sine of 180 is "  << std::setprecision(5) << sine(180) << std::endl;
   std::cout << "The cosine of 180 is "  << std::setprecision(5) << cosine(180) << std::endl;
 }
