//
// Created by sea on 1/20/19.
//

#ifndef SHADOWSOCKS_APPLICATION_H
#define SHADOWSOCKS_APPLICATION_H

#include <gtkmm/application.h>

namespace ss {

class Application : public Gtk::Application {
 public:
  Application();

  Application(const Application &) = delete;

 protected:
  void on_startup() override;

  void on_activate() override;

};

} //namespace ss

#endif //SHADOWSOCKS_APPLICATION_H
