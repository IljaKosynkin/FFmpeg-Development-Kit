// Copyright (C) 2011 The Android Open Source Project
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. Neither the name of the project nor the names of its contributors
//    may be used to endorse or promote products derived from this software
//    without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE PROJECT AND CONTRIBUTORS ``AS IS'' AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED.  IN NO EVENT SHALL THE PROJECT OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
// OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
// OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
// SUCH DAMAGE.
//
// type_info.cc: Methods for std::type_info.
//

#include <cxxabi.h>
#ifdef __ARM_EABI__
// ARM EABI requires string comprison for mangled type names for type_info
// equality.
#include <string.h>
#endif

#include <typeinfo>

namespace std
{
  type_info::~type_info()
  {
  }

#if !defined(LIBCXXABI)
  bool
  type_info::operator==(const type_info& rhs) const
  {
#ifdef __ARM_EABI__
    // IHI0041A CPPABI 3.2.5.6.  Because of weak linkage and share libraries,
    // we perform string comparison.
    return strcmp(this->__type_name, rhs.__type_name) == 0;
#else
    return this == &rhs;
#endif
  }

  bool
  type_info::operator!=(const type_info& rhs) const
  {
    return !this->operator==(rhs);
  }

  bool
  type_info::before(const type_info& rhs) const
  {
#ifdef __ARM_EABI__
    // IHI0041A CPPABI 3.2.5.6.  Because of weak linkage and share libraries,
    // we perform string comparison.
    return strcmp(this->__type_name, rhs.__type_name) < 0;
#else
    return this < &rhs;
#endif
  }
#endif // !defined(LIBCXXABI)

bad_cast::bad_cast() _GABIXX_NOEXCEPT {
}

bad_cast::~bad_cast() _GABIXX_NOEXCEPT {
}

const char* bad_cast::what() const _GABIXX_NOEXCEPT {
  return "std::bad_cast";
}

bad_typeid::bad_typeid() _GABIXX_NOEXCEPT {
}

bad_typeid::~bad_typeid() _GABIXX_NOEXCEPT {
}

const char* bad_typeid::what() const _GABIXX_NOEXCEPT {
  return "std::bad_typeid";
}

} // end namespace std
