// Copyright (C) 2018 Rob Caelers <rob.caelers@gmail.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#ifndef LOOPP_OTA_OTAERRORS_HPP
#define LOOPP_OTA_OTAERRORS_HPP

#include <string>
#include <system_error>

namespace loopp
{
  namespace ota
  {
    enum class OTAErrc
    {
      // no 0
      Timeout = 1,
      InternalError,
      InvalidURI
    };

    std::error_code make_error_code(OTAErrc);
  } // namespace ota
} // namespace loopp

namespace std
{
  template<>
  struct is_error_code_enum<loopp::ota::OTAErrc> : true_type
  {
  };
} // namespace std

#endif // LOOPP_OTA_OTAERRORS_HPP
