#include <iostream>
#include "Test.hh"

int		main(void)
{
  Test		*test1;

  std::string	name1;

  name1 = "Paul";
  test1 = new Test(10, name1);

  std::cout << "Test\t: " << test1->getValue() << " | " << test1->getName()  << std::endl;
  
  return (0);
}
