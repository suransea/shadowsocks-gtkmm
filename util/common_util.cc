//
// Created by sea on 1/20/19.
//

#include "common_util.h"

namespace ssr {

void util::register_logger() {
    auto &&path = getenv("HOME") + std::string("/shadowsocksr.log");
    std::vector<spdlog::sink_ptr> sinks;
    sinks.push_back(std::make_shared<spdlog::sinks::stdout_color_sink_st>());
    sinks.push_back(std::make_shared<spdlog::sinks::basic_file_sink_st>(path));
    auto &&logger = std::make_shared<spdlog::logger>("ssr", sinks.begin(), sinks.end());
    logger->set_level(spdlog::level::debug);
    spdlog::register_logger(logger);
}

} //namespace ssr