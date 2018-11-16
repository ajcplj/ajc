#include "Test.hh"

Test::Test()
  : value_(0), name_("none")
{}

Test::Test(Test const& other)
  : value_(other.value_), name_(other.name_)
{}

Test::Test(int value, std::string const& name)
  : value_(value), name_(name)
{}

Test::~Test()
{}


int			Test::getValue() const
{
  return (value_);
}

std::string const&	Test::getName() const
{
  return (name_);
}
