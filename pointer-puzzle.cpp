/**
 *  @pointer-puzzle.cpp
 *  @author Brandon Dellucky <bdellu1@lsu.edu>
 *  @brief  This is a pointer puzzle.
 */

#include <iostream>

int main()
{
  char a[] = "Te o' hn tb iei sbti odt u it kle ikittndyh";
  char *ptr = a;
  for(int i=-1; i<=19; i++){
     std::cout << *(ptr+i+1);
     std::cout << *(ptr+43-i-2);
  }
  std::cout << *(ptr+3) << "." << std::endl;
}
