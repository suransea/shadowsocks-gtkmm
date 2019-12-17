//
// Created by sea on 1/20/19.
//
// 2019. SEA
//

#include "util/common_util.h"
#include "application.h"

int main(int argc, char **argv) {
    ss::util::register_logger();
    ss::Application app;
    return app.run(argc, argv);
}
