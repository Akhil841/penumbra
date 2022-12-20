#include "penumbra/penumbra.h"

class T: public Umbra
{
    public:
        T()
        {
            t = 0;
        }
        T(int t)
        {
            this->t = t;
        }
        bool equals(void* other)
        {
            T* o = (T*) other;
            return this->t == o->t;
        }
    private:
        int t;
};

int main()
{
    T a(3);
    std::vector<Umbra> vec;
    PTester pt(__FILE__);
    pt.assertEmpty(vec, __LINE__);
    pt.assertEqual(3, 3, __LINE__);
    pt.assertEqual(a, a, __LINE__);
    pt.assertFalse(false, __LINE__);
    pt.assertNull(nullptr, __LINE__);
    pt.assertTrue(true, __LINE__);
    pt.assertZero(0, __LINE__);
}