#include "penumbra/penumbra.h"

int
main()
{
    PTester pt(__FILE__);
    int a = 10;
    pt.assertEqual(a, 3, __LINE__, "twasn't 3");
    pt.assertEqual(a, 10, __LINE__);
    pt.assertZero(a, __LINE__);
    pt.assertNull(&a, __LINE__);
    pt.assertNull(nullptr, __LINE__);
    return 0;
}