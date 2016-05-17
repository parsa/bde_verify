// csabase_attachments.cpp                                            -*-C++-*-

#include <csabase_attachments.h>

csabase::AttachmentBase::~AttachmentBase()
{
}

csabase::Attachments::Attachments()
{
}

csabase::Attachments::~Attachments()
{
    for (size_t i = 0; i < d_attachments.size(); ++i) {
        delete d_attachments[i];
    }
}

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
