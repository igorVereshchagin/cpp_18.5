#include <iostream>

int how_rabbit_jump(int steps)
{
  if (steps < 0)
    return 0;
  else if (steps == 0)
    return 1;
  else
    return how_rabbit_jump(steps - 1) + how_rabbit_jump(steps - 2) + how_rabbit_jump(steps - 3);
}

int main()
{
  for (int i = 0; i < 10; i++)
    std::cout << how_rabbit_jump(i) << std::endl;
}
