#include <hw03.h>
#include <cstring>
#include <iostream>

void hw03(char* str, const char* pattern)
{
  if(str == nullptr || pattern == nullptr) {
    std::cout << "Nullptr" << std::endl;
    return;
  }
  
  if(str[0] == '\0') {
    std::cout << str << std::endl;
    return;
  }

  char* pos = std::strstr(str,pattern); // первое вхождение паттерн в стр
  if(pos != nullptr) {
    std::size_t len = std::strlen(pattern);
    std::memmove(pos,pos+len,std::strlen(pos+len)+1);
  }
  std::cout << str << std::endl;
}