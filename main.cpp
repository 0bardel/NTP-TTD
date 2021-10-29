#include <iostream>
#include "functions.h"
#include <gtest/gtest.h>

TEST(myfunctions, add)
{
  GTEST_ASSERT_EQ(add(10, 22), 32);
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
/*
int main()
{
  std::cout << "Container creation and filling." << std::endl;
  myContainer a;
  printContainer(a);

  a.N = 6;
  printContainer(a);

  myContainer b;
  std::cout << (fillContainerWithFibonacci(&b, 0) ? "OK" : "Fail") << std::endl;
  std::cout << (fillContainerWithFibonacci(0, 11) ? "OK" : "Fail") << std::endl;
  std::cout << (fillContainerWithFibonacci(&b, 11) ? "OK" : "Fail") << std::endl;
  printContainer(b);

  checkContainerSpouse(&a);
  checkContainerSpouse(&b);
  std::cout << "Struct marrying" << std::endl;
  myContainer c = a;
  marry(&a, &c);

  marry(&a, &a);

  marry(&a, &b);
  checkContainerSpouse(&a);
  checkContainerSpouse(&b);

  divorce(&a, &b);
  checkContainerSpouse(&a);
  checkContainerSpouse(&b);

  std::cout << "Children linking" << std::endl;
  myContainer a1 = formChild(0, 0);
  printContainer(a1);
  std::cout << ">>" << std::endl;
  myContainer a2 = formChild(&a, 0);
  printContainer(a2);
  std::cout << ">>" << std::endl;
  formChild(&a, &b);
  std::cout << ">>" << std::endl;
  marry(&a, &b);
  myContainer a3 = formChild(&a, &b);
  printParents(&a);
  printParents(&b);
  printParents(&a3);
}
*/
