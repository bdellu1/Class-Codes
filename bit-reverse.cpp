 #include <iostream>
 #include <fstream>
 #include <stdlib.h>
   
 void print(std::string filename) {
   std::ifstream input(filename.c_str());
   if (!input.is_open())
     throw "File could not be opened!";
 }
   
 void usage(char *progname){
    std::cerr << "usage: " << progname << " file" << std::endl;
    std::cerr << "File could not be opened!" << std::endl;
 }
   
   
 int main(int argc, char **argv)
 {
   if(argc !=3){
       usage(argv[0]);
       exit(EXIT_FAILURE);
   }
   std::ifstream input(argv[1]);
   
   try {
     print(argv[1]);
   }
   catch (const char *e) {
     std::cerr << e << std::endl;
   }
   
   std::ofstream output(argv[2]);
    
   input.seekg(0, std::ios::end);
   int n = input.tellg();
   char c;
   for (int i=1; i<=n; i++)
   {
     input.seekg(-i, std::ios::end);
     input.get(c);
     output << c;
   }
 }
