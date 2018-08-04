//===----------------- catch_member_pointer_nullptr.cpp -------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include <cassert>

#if __cplusplus >= 201103L

struct A
{
    const int i;
    int j;
};

typedef const int A::*md1;
typedef       int A::*md2;

void test1()
{
    try
    {
        throw nullptr;
        assert(false);
    }
    catch (md2)
    {
    }
    catch (md1)
    {
        assert(false);
    }
}

void test2()
{
    try
    {
        throw nullptr;
        assert(false);
    }
    catch (md1)
    {
    }
    catch (md2)
    {
        assert(false);
    }
}

#else

void test1()
{
}

void test2()
{
}

#endif

int main()
{
    test1();
    test2();
}
