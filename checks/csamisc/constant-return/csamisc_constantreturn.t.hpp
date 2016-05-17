// csamisc_constantreturn.t.hpp                                       -*-C++-*-

#ifndef INCLUDED_CSAMISC_CONSTANTRETURN
#define INCLUDED_CSAMISC_CONSTANTRETURN

#if !defined(INCLUDED_BDES_IDENT)
#  include <bdes_ident.h>
#endif
#ifndef INCLUDED_CSASCM_VERSION
#  include <csascm_version.h>
#endif

// -----------------------------------------------------------------------------

namespace bde_verify
{
    namespace csamisc
    {
        struct constantreturn
        {
            static int x();
            static int f();
            static int g();
            static int h();
            static void v();
        };
    }
}

// -----------------------------------------------------------------------------

#endif

// ----------------------------------------------------------------------------
// Copyright (C) 2014 Bloomberg Finance L.P.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// ----------------------------- END-OF-FILE ----------------------------------