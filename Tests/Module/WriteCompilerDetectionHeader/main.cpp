
#include "test_compiler_detection.h"

#define JOIN_IMPL(A, B) A ## B
#define JOIN(A, B) JOIN_IMPL(A, B)
#define CHECK(FEATURE) (JOIN(TEST_COMPILER_, FEATURE) == JOIN(EXPECTED_COMPILER_, FEATURE))

#if !CHECK(CXX_DELEGATING_CONSTRUCTORS)
#error cxx_delegating_constructors expected availability did not match.
#endif

#if !CHECK(CXX_VARIADIC_TEMPLATES)
#error cxx_variadic_templates expected availability did not match.
#endif

int main()
{
  return 0;
}
