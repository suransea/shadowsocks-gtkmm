//
// Created by sea on 1/20/19.
//

#ifndef SHADOWSOCKS_MAIN_WINDOW_H
#define SHADOWSOCKS_MAIN_WINDOW_H

#include <gtkmm/window.h>
#include <gtkmm/builder.h>

namespace ss {

class MainWindow : public Gtk::Window {
 public:
  MainWindow(BaseObjectType *object, const Glib::RefPtr<Gtk::Builder> &builder);

  MainWindow(const MainWindow &) = delete;

  ~MainWindow() = default;
};

} //namespace ss

#endif //SHADOWSOCKS_MAIN_WINDOW_H
