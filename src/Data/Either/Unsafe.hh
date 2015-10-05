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

  inline auto unsafeThrow(const any& message) -> any {
    throw runtime_error(message);
  }

}

#endif // Data_Either_Unsafe_FFI_HH
