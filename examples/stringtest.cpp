#include "penumbra/penumbra.h"

int
main()
{
    PTester pt(__FILE__);
    std::string a = "test";
    pt.assertEqual(a, "not test", __LINE__, "twasn't \"not test\"");
    pt.assertEqual(a, "lorem impsum dolor sit ammet", __LINE__);
    pt.assertEqual(a, "test", __LINE__);
    pt.assertNull(&a, __LINE__);
    pt.assertNull(nullptr, __LINE__);
    pt.assertNull(&a, __LINE__, "This pointer is not null");
    return 0;
}