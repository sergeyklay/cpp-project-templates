// Copyright 2020 Serghei Iakovlev <egrep@protonmail.ch>
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/// \file ChuckNorris.hpp
/// \brief Provides simple interface to interact with Chuck Norris.

#ifndef STARS_CHUCKNORRIS_HPP_
#define STARS_CHUCKNORRIS_HPP_

#include <string>

namespace stars {

/// \brief Chuck Norris Implementation class.
class ChuckNorrisImpl;

/// \brief Public Chuck Norris class.
class ChuckNorris {
 public:
  ChuckNorris();
  ~ChuckNorris();

  // Make sure you cannot copy Chuck Norris
  ChuckNorris(ChuckNorris const &) = delete;
  ChuckNorris &operator=(ChuckNorris const &) = delete;

  // Make sure you cannot move Chuck Norris
  ChuckNorris(ChuckNorris &&) = delete;
  ChuckNorris &operator=(ChuckNorris &&) = delete;

  std::string getFact();
  [[nodiscard]] int getStatus() const;

 private:
  stars::ChuckNorrisImpl *pimpl;
};
}  // namespace stars

#endif  // STARS_CHUCKNORRIS_HPP_
