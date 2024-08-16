#ifndef CAT_H 
#define CAT_H 
#include <string>
#include <iostream>

class Cat{
public:
  Cat(std::string name);
  Cat()=default;

  void  cat_info( ) const{
    std::cout<<"cat info name :"<<name<<std::endl;
  }
  /// @brief 
  /// @return 
  std::string get_name()
  {
    return name;
  }
  void set_cat_name(const std::string &name)
  {
     this->name=name;
  }
private:
  std::string name;

};








#endif
