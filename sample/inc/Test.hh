#ifndef		TEST_HH_
# define	TEST_HH_

# include <string>

class Test
{
  int		value_;
  std::string	name_;

public:
  Test();
  Test(Test const& other);
  Test(int value, std::string const& name);
  ~Test();

  int			getValue() const;
  std::string const&	getName() const;
};

#endif // !TEST_HH_
