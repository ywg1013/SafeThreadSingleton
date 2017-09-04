#ifndef HUNGRYSINGLETON_H
#define HUNGRYSINGLETON_H
#include <iostream>

class HungrySingleton
{
private:
  HungrySingleton();
  ~HungrySingleton();

public:
  static HungrySingleton* Instance(){
    return m_instance;
  }

private:
  static HungrySingleton* m_instance;

  class GC
  {
    public:
    GC(){
    }
    ~GC(){
      if (m_instance)
      {
        delete m_instance;
        m_instance = NULL;
      }
    }
  };
  static GC m_gc;
};

#endif // HUNGRYSINGLETON_H
