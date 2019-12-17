//
// Created by sea on 1/20/19.
//

#ifndef SHADOWSOCKS_COMMON_UTIL_H
#define SHADOWSOCKS_COMMON_UTIL_H

#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/stdout_color_sinks.h>

namespace ss {

namespace util {

void register_logger();

} //namespace util

} //namespace ss

#endif //SHADOWSOCKS_COMMON_UTIL_H
