///////////////////////////////////////////////////////////////////////////////
//
// Module      :  Unsafe.hh
// Copyright   :  (c) Andy Arvanitis 2015
// License     :  MIT
//
// Maintainer  :  Andy Arvanitis <andy.arvanitis@gmail.com>
// Stability   :  experimental
// Portability :
//
// Data.Either.Unsafe FFI functions
//
///////////////////////////////////////////////////////////////////////////////
//
#ifndef Data_Either_Unsafe_FFI_HH
#define Data_Either_Unsafe_FFI_HH

#include "PureScript/PureScript.hh"

namespace Data_Either_Unsafe {
  using namespace PureScript;

  // foreign import unsafeThrow :: forall a. String -> a

  template <typename A>
  inline auto unsafeThrow(const string& message) {
    throw runtime_error(message);
    return A();
  }

}

#endif // Data_Either_Unsafe_FFI_HH
