#include <iostream>
#include "Test.hh"
#include "Test2.hh"

int		main(void)
{
  Test		*test1;
  Test2		*test2;
  std::string	name1;
  std::string	name2;

  name1 = "Paul";
  name2 = "Antoine";
  test1 = new Test(10, name1);
  test2 = new Test2(20, name2);

  std::cout << "Test\t: " << test1->getValue() << " | " << test1->getName()  << std::endl;
  std::cout << "Test2\t: " << test2->getValue() << " | " << test2->getName()  << std::endl;
  
  return (0);
}
