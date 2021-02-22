# C-20-std-midpoint-Test
A test of the new std::midpoint implementation.

After reading through the newest implementations of C++20, I came across a new std::midpoint function that was added to the <numeric> header. I know it was a simple function, but I was curious cause typing out,

> float x,y;
> auto sum = (x+y)/2;

seemed just as easy, if not easier, than

> #include <numeric>
> float x,y;
> auto sum = std::midpoint(x,y);
