//
// Created by sea on 1/20/19.
//

#include "application.h"
#include "ui/main_window.h"

namespace ssr {

Application::Application()
    : Gtk::Application("com.sea.shadowsocksr") {
}

void Application::on_startup() {
    Gtk::Application::on_startup();
}

void Application::on_activate() {
    Gtk::Application::on_activate();
    auto builder = Gtk::Builder::create();
    builder->add_from_resource("/com/sea/ssr/main.glade");
    MainWindow *window;
    builder->get_widget_derived("main_window", window);
    window->signal_hide().connect([window] { delete window; });
    add_window(*window);
    window->show();
}

} //namespace ssr
