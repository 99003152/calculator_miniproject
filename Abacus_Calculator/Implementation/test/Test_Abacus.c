#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calci.h>
#define PROJECT_NAME    "Abacus"

/* Prototypes for all the test functions */
void test_add(void);
void test_sub(void);
void test_mul(void);
void test_div(void);
void test_squr(void);
void test_vol_cube(void);
void test_vol_cuboid(void);
void test_vol_sphere(void);
void test_vol_cone(void);
void test_vol_cylinder(void);
void test_Triangle(void);
void test_Circle(void);
void test_Rectangle(void);
void test_Square(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "sub", test_sub);
  CU_add_test(suite, "mul", test_mul);
  CU_add_test(suite, "div", test_div);
  CU_add_test(suite, "squr", test_squr);
  CU_add_test(suite, "vol_cube", test_vol_cube);
  CU_add_test(suite, "vol_cuboid", test_vol_cuboid);
  CU_add_test(suite, "vol_sphere", test_vol_sphere);
  CU_add_test(suite, "vol_cone", test_vol_cone);
  CU_add_test(suite, "vol_cylinder", test_vol_cylinder);
  CU_add_test(suite, "Triangle", test_Triangle);
  CU_add_test(suite, "Circle", test_Circle);
  CU_add_test(suite, "Rectangle", test_Rectangle);
  CU_add_test(suite, "Square", test_Square);
 

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
void test_add(void) {
    CU_ASSERT(30 == add(10, 20));
}
void test_sub(void){
    CU_ASSERT(50 == sub(100, 50));
}
void test_mul(void){
    CU_ASSERT(200 == mul(10, 20));
}
void test_div(void){
    CU_ASSERT( 2 == div(20, 10));
}
void test_squr(void){
    CU_ASSERT( 400 == squr(20));
}
void test_vol_cube(void){
    CU_ASSERT(1000 == vol_cube(10));
}
void test_vol_cuboid(void){
    CU_ASSERT( 6000 == vol_cuboid(10,20,30));
}
void test_vol_sphere(void){
    CU_ASSERT( 4176 == vol_sphere(10));
}
void test_vol_cone(void){
    CU_ASSERT( 2072 == vol_cone(10,20));
}
void test_vol_cylinder(void){
    CU_ASSERT( 6280 == vol_cylinder(10,20));
}
void test_Triangle(void){
    CU_ASSERT( 100 == B_H_Triangle(10,20));
}
void test_Circle(void){
    CU_ASSERT( 314 == Circle(10));
}
void test_Rectangle(void){
    CU_ASSERT( 200 == Rectangle(10,20));
}
void test_Square(void){
    CU_ASSERT( 100 == Square(10));
}
