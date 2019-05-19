//
// Created by sea on 1/20/19.
//
// 2019. SEA
//

#include "util/common_util.h"
#include "application.h"

int main(int argc, char **argv) {
    ssr::util::register_logger();
    ssr::Application app;
    return app.run(argc, argv);
}