/**
 * @color-cat.cpp
 * @author Brandon Dellucky <bdellu1@lsu.edu>
 * @brief  Takes in a file with a color scheme and outputs the file with colors
 */

 #include <iostream>
 #include <fstream>
 #include <string>
 #include <iomanip>
 #include <stdlib.h>
 #include "color.h"
 
 /**
  * Checks if file exists
  * @param filename
  */
 void print(std::string filename) {
   std::ifstream input(filename.c_str());
    if (!input.is_open())
      throw "File could not be opened!";
 }
   
 /**
  * Shows usage error
  * @param *progname program name
  */
 void usage(char *progname){
    std::cerr << "usage: " << progname << " file" << std::endl;
    std::cerr << "File could not be opened!" << std::endl;
 }
  
 int main(int argc, char **argv)
 {
   if(argc !=2){
     usage(argv[0]);
      exit(EXIT_FAILURE);}
  
   std::ifstream input(argv[1]);
   
   try {
     print(argv[1]);
   } catch (const char *e) {
     std::cerr << e << std::endl;
   }
   
   string s;
   while(getline(input,s)){
       int n = s.size(), i=0;
       char c=' ';
       while(i<n){
           if(s[i]=='['){
             c = s[i+1];
             i = i + 2;}
           else{
             switch(c)
             {
               case 'r': std::cout << color::red << s[i];
                         break;
               case 'w': std::cout << color::white << s[i];
                         break;
               case 'b': std::cout << color::blue << s[i];
                         break;
               case 'y': std::cout << color::yellow << s[i];
                         break;
               case 'm': std::cout << color::magenta << s[i];
                         break;
               case 'g': std::cout << color::green << s[i];
                         break;
               default: std::cout << s[i];
             }
           }
           i++;
       }
   std::cout << std::endl;
   }
}
       
