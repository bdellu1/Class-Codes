 #include <iostream>
 #include "util.h"
    
 int main()
 {
   std::string a = "stressed";
   std::cout << util::reverse(a) << std::endl;
   
   std::cout << util::sum_up_to_n(100) << std::endl;
    
   std::cout << util::isprime(7) << std::endl;
   
   float b[4] = {1,2,3,4};
   std::cout << util::mean(b, 4) << std::endl;
    
   int c[4] = {1,2,3,4};
   std::cout << util::max(c, 4) << std::endl;
    
   std::cout << util::min(c, 4) << std::endl;
    
   char d[4] = "-54";
   std::cout << util::is_integer(d) << std::endl;
   
   util::printNumArray(c, 4);
   
   util::printCharArray(d, 4);
 }
