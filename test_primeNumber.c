#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <primeNumber.h>
#define PROJECT_NAME    "Prime_number_check"

/* Prototypes for all the test functions */
void test_not_prime(void);
void test_prime(void);
void test_negative_zero(void);
/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "not prime", test_not_prime);
  CU_add_test(suite, "prime", prime);
  CU_add_test(suite, "negative or zero", test_not_prime);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_not_prime(void) {
  
  CU_ASSERT(-1 == primeNumber(56));
  
  /* Dummy fail*/
  CU_ASSERT(-1 == primeNumber(13));
}

void test_prime(void) {
  CU_ASSERT(1 == primeNumber(3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == primeNumber(12));
}

void test_negative_zero(void) {
  CU_ASSERT(0 == primeNumber(-3));
  
  /* Dummy fail*/
  CU_ASSERT(0 == primeNumber(14));
}


