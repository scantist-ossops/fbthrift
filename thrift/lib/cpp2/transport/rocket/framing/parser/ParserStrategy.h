/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>

namespace apache {
namespace thrift {
namespace rocket {

// C++20 concept
// template <typename Strategy>
// concept ParserStrategy = requires (Strategy s) {
// { s.getReadBuffer(std::declval<void**>(), std::declval<size_t*>()) } ->
// std::same_as<void>; { s.readDataAvailable(std::declval<size_t>()) } ->
// std::same_as<void>; {
// s.readBufferAvailable(std::declval<std::unique_ptr<folly::IOBuf>>()) } ->
// std::same_as<void>;
//};
template <class T, template <typename> class Strategy>
class ParserStrategy : private Strategy<T> {
 public:
  explicit ParserStrategy(T& owner) : Strategy<T>(owner) {}

  void getReadBuffer(void** bufReturn, size_t* lenReturn) {
    Strategy<T>::getReadBuffer(bufReturn, lenReturn);
  }

  void readDataAvailable(size_t len) { Strategy<T>::readDataAvailable(len); }

  void readBufferAvailable(std::unique_ptr<folly::IOBuf> buf) {
    Strategy<T>::readBufferAvailable(std::move(buf));
  }
};

} // namespace rocket
} // namespace thrift
} // namespace apache
