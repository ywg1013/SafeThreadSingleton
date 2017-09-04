#ifndef LAZYSINGLETON_H
#define LAZYSINGLETON_H


class LazySingleton
{
private:
   LazySingleton();
  ~LazySingleton();

public:
   static LazySingleton* Instance(){
       static LazySingleton instance;
       return &instance;
   }
};

#endif // LAZYSINGLETON_H
