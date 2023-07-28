// Copyright (C) 2020  Matthew "strager" Glazar
// See end of file for extended copyright information.

#ifndef QUICK_LINT_JS_TYPESCRIPT_TEST_H
#define QUICK_LINT_JS_TYPESCRIPT_TEST_H

#include <quick-lint-js/container/padded-string.h>
#include <quick-lint-js/fe/linter.h>
#include <quick-lint-js/port/char8.h>
#include <vector>

namespace quick_lint_js {
struct typescript_test_unit {
  Padded_String data;
  String8 name;

  // Returns std::nullopt if this file should not be parsed or linted.
  std::optional<Linter_Options> get_linter_options() const;
};

using typescript_test_units = std::vector<typescript_test_unit>;

typescript_test_units extract_units_from_typescript_test(
    Padded_String&& file, String8_View test_file_name);
}

#endif

// quick-lint-js finds bugs in JavaScript programs.
// Copyright (C) 2020  Matthew "strager" Glazar
//
// This file is part of quick-lint-js.
//
// quick-lint-js is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// quick-lint-js is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with quick-lint-js.  If not, see <https://www.gnu.org/licenses/>.
