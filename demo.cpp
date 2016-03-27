 #include <iostream>
 #include "dice.h"
   
 int main(){
   std::cout << "  2d6: "  << di::dice_roll(2,6) << std::endl;
   std::cout << "  pi:  "  << di::pi(2)           << std::endl;
 }
