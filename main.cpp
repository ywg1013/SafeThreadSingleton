
#include "lazysingleton.h"
#include "hungrysingleton.h"


/*
 * 由于要进行线程同步，所以在访问量比较大，或者可能访问的线程比较多时，采用饿汉实现，可以拥有更好的性能,以空间换时间。
 * 在访问量较小时，采用懒汉实现,以时间换空间。
*/

int main(int argc, char *argv[])
{

  HungrySingleton* hungry = HungrySingleton::Instance();
  LazySingleton* lazy = LazySingleton::Instance();

}
