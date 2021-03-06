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

#include <cstring>
#include <iostream>

#include "stars/ChuckNorris.hpp"
#include "stars/Version.hpp"

int main(int argc, char** argv) {
  if (argc > 1 && strcmp(argv[1], "--version") == 0) {
    std::cout << PROJECT_VERSION_FULL
              << " (built: " << PROJECT_PACKAGE_BUILD_DATE << ") " << std::endl;
    std::cout << "Copyright " << PROJECT_COPYRIGHT << " ("
              << PROJECT_PACKAGE_URL << ")" << std::endl
              << std::endl;

    return 0;
  }

  stars::ChuckNorris chuckNorris;
  auto const fact = chuckNorris.getFact();

  if (chuckNorris.getStatus() == 1) {
    std::cout << fact << std::endl;

    return 0;
  }

  return 1;
}
