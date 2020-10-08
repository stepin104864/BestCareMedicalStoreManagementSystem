#include "unity.h"
#include "medicalstoremanagement.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_PurchaseMedicine(void)
{
    TEST_ASSERT(PurchaseMedicine(9));
}

void test_EnterInfoAboutMedicine(void)
{
    TEST_ASSERT(EnterInfoAboutMedicine(9));
}
void test_KnowInfoAboutMedicine(void)
{
    TEST_ASSERT(KnowInfoAboutMedicine(9));
}
void test_StockOfMedicine(void)
{
    TEST_ASSERT(StockOfMedicine(9));
}
void test_AddMedicineinStore(void)
{
    TEST_ASSERT(AddMedicineinStore(9,m));
}
void test_DeleteMedicineStore(void)
{
    TEST_ASSERT(DeleteMedicineStore(9));
}
void test_ChangeMedicineDetails(void)
{
    TEST_ASSERT(ChangeMedicineDetails(9));
}

int  test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_PurchaseMedicine);
  RUN_TEST(test_EnterInfoAboutMedicine);
  RUN_TEST(test_KnowInfoAboutMedicine);
  RUN_TEST(test_StockOfMedicine);
  RUN_TEST(test_AddMedicineinStore);
  RUN_TEST(test_DeleteMedicineStore);
  RUN_TEST(test_ChangeMedicineDetails);


  /* Close the Unity Test Framework */
  return UNITY_END();
}


