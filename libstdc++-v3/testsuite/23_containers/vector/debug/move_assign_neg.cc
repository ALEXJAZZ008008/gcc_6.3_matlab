// Copyright (C) 2013-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.
//
// { dg-options "-std=gnu++11" }
// { dg-do run { xfail *-*-* } }

#include <debug/vector>

#include <testsuite_allocator.h>
#include <testsuite_hooks.h>

void test01()
{
  bool test __attribute__((unused)) = true;

  typedef __gnu_test::propagating_allocator<int, false> alloc_type;
  typedef __gnu_debug::vector<int, alloc_type> test_type;

  test_type v1(alloc_type(1));
  v1 = { 0, 1, 2, 3 };

  test_type v2(alloc_type(2));
  v2 = { 4, 5, 6, 7 };

  auto it = v2.begin();

  v1 = std::move(v2);

  VERIFY( it == v1.begin() ); // Error, it is singular
}

int main()
{
  test01();
  return 0;
}
