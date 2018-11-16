#include "Test2.hh"

Test2::Test2()
  : value_(0), name_("none")
{}

Test2::Test2(Test2 const& other)
  : value_(other.value_), name_(other.name_)
{}

Test2::Test2(int value, std::string const& name)
  : value_(value), name_(name)
{}

Test2::~Test2()
{}


int			Test2::getValue() const
{
  return (value_);
}

std::string const&	Test2::getName() const
{
  return (name_);
}
