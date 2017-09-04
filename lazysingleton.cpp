#include "lazysingleton.h"
#include <iostream>

LazySingleton::LazySingleton()
{

}

LazySingleton::~LazySingleton()
{
   std::cout<< "destroy lazysingleton" << std::endl;
}
