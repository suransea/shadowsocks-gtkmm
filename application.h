//
// Created by sea on 1/20/19.
//

#ifndef SHADOWSOCKSR_APPLICATION_H
#define SHADOWSOCKSR_APPLICATION_H

#include <gtkmm/application.h>

namespace ssr {

class Application : public Gtk::Application {
 public:
  Application();

  Application(const Application &) = delete;

 protected:
  void on_startup() override;

  void on_activate() override;

};

} //namespace ssr

#endif //SHADOWSOCKSR_APPLICATION_H
