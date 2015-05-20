#include "listing_04.07.h"

void X::foo(int i, std::string const& s)
{
}

std::string X::bar(std::string const& s)
{
    return s;
}

double Y::operator()(double d)
{
    return d;
}

X baz(X& x)
{
    return x;
}

move_only::move_only()
{
}

move_only::move_only(move_only&& m)
{
}

void move_only::operator()()
{
}


int main()
{
    return 0;
}
