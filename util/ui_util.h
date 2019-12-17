//
// Created by sea on 1/20/19.
//

#ifndef SHADOWSOCKS_UI_UTIL_H
#define SHADOWSOCKS_UI_UTIL_H

#include <gtkmm/messagedialog.h>

namespace ss {

namespace util {

void notify(const char *title, const char *content, const char *icon = "dialog-information");

void dialog(Gtk::Window &parent, const char *content, Gtk::MessageType type = Gtk::MESSAGE_INFO);

} //namespace util

} //namespace ss

#endif //SHADOWSOCKS_UI_UTIL_H
