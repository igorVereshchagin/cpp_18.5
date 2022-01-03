#include <iostream>

int how_rabbit_jump(int steps, int max = 3)
{
  if (steps < 0)
    return 0;
  else if (steps == 0)
    return 1;
  else
  {
    int res = 0;
    for (int i = 0; i < max; i++)
      res += how_rabbit_jump(steps - (i + 1), max);
    return res;
  }
}

int main()
{
  for (int i = 0; i < 10; i++)
    std::cout << how_rabbit_jump(i, 2) << std::endl;
  for (int i = 0; i < 10; i++)
    std::cout << how_rabbit_jump(i) << std::endl;
}
