// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef QUICHE_QUIC_PLATFORM_API_QUIC_STR_CAT_H_
#define QUICHE_QUIC_PLATFORM_API_QUIC_STR_CAT_H_

#include <utility>

#include "net/third_party/quiche/src/quic/platform/api/quic_string.h"
#include "net/quic/platform/impl/quic_str_cat_impl.h"

namespace quic {

// Merges given strings or numbers with no delimiter.
template <typename... Args>
inline QuicString QuicStrCat(const Args&... args) {
  return QuicStrCatImpl(std::forward<const Args&>(args)...);
}

template <typename... Args>
inline QuicString QuicStringPrintf(const Args&... args) {
  return QuicStringPrintfImpl(std::forward<const Args&>(args)...);
}

}  // namespace quic

#endif  // QUICHE_QUIC_PLATFORM_API_QUIC_STR_CAT_H_
