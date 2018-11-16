#ifndef		TEST2_HH_
# define	TEST2_HH_

# include <string>

class Test2
{
  int		value_;
  std::string	name_;

public:
  Test2();
  Test2(Test2 const& other);
  Test2(int value, std::string const& name);
  ~Test2();

  int			getValue() const;
  std::string const&	getName() const;
};

#endif // !TEST2_HH_
