# C-20-std-midpoint-Test
A test of the new std::midpoint implementation.

After reading through the newest implementations of C++20, I came across a new std::midpoint function that was added to the <numeric> header. I know it was a simple function, but I was curious cause typing out,

```cpp
float x,y;
auto sum = (x+y)/2;
```

seemed just as easy, if not easier, than

```cpp
#include <numeric>
float x,y;
auto sum = std::midpoint(x,y);
```

*I don't exactly understand why this was added into C++20, since it seems like more includes, and more typing just to implement this feature. I would have a better understanding if std::midpoint took different parameters than integers, floating-points, or pointer values, since all of those are easy to implement with a small amount of math. I would also have a better understanding if std::midpoint took more than 2 parameters, but it doesn't.

*In the end, it is a nice feature if you want your code more readable and increase readability of extra long equations. Otherwise, I will not probably be using this feature and sticking to the simple math equation. 
