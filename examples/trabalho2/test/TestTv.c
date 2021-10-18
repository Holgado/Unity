#include "tv_lib.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(TV);

TEST_SETUP(TV)
{
}

TEST_TEAR_DOWN(TV)
{
}

// Teste Funcional Sistematico
TEST(TV, TestTV1)
{
  // 0 - sucesso
  TEST_ASSERT_EQUAL(0, payment(123.00, "regular"));
}

TEST(TV, TestTV2)
{
  // 0 - sucesso
  TEST_ASSERT_EQUAL(0, payment(4213.00, "estudante"));
}

TEST(TV, TestTV3)
{
  // 0 - sucesso
  TEST_ASSERT_EQUAL(0, payment(135.00, "aposentado"));
}

TEST(TV, TestTV4)
{
  // 0 - sucesso
  TEST_ASSERT_EQUAL(0, payment(50000.00, "VIP"));
}

TEST(TV, TestTV5)
{
  // 1 - erro no valor
  TEST_ASSERT_EQUAL(1, payment(350000000000000000000000000000000000000, "regular"));
}

TEST(TV, TestTV6)
{
  // 1 - erro no valor
  TEST_ASSERT_EQUAL(1, payment(0, "estudante"));
}

TEST(TV, TestTV7)
{
  // 1 - erro no valor
  TEST_ASSERT_EQUAL(1, payment(-10.00, "aposentado"));
}

TEST(TV, TestTV8)
{
  // 1 - erro no valor
  TEST_ASSERT_EQUAL(1, payment(99999.01, "VIP"));
}

TEST(TV, TestTV9)
{
  // 2 - status incorreto
  TEST_ASSERT_EQUAL(2, payment(521.00, ""));
}

TEST(TV, TestTV10)
{
  // 2 - status incorreto
  TEST_ASSERT_EQUAL(2, payment(32.00, "dadgsdgsdgsdgewgsevea"));
}

TEST(TV, TestTV11)
{
  // 2 - status incorreto
  TEST_ASSERT_EQUAL(2, payment(213.00, "414124"));
}

TEST(TV, TestTV12)
{
  // 2 - status incorreto
  TEST_ASSERT_EQUAL(2, payment(52.00, "$%@4fef3"));
}

TEST(TV, TestTV13)
{
  // 2 - status incorreto
  TEST_ASSERT_EQUAL(2, payment(422.00, "farinha"));
}