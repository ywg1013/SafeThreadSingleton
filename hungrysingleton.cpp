#include "hungrysingleton.h"


HungrySingleton* HungrySingleton::m_instance = new HungrySingleton();
HungrySingleton::GC HungrySingleton::m_gc;

HungrySingleton::HungrySingleton()
{

}

HungrySingleton::~HungrySingleton()
{
   std::cout<< "destroy hungrysingleton" << std::endl;
}
