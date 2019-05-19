//
// Created by sea on 1/20/19.
//

#ifndef SHADOWSOCKSR_MAIN_WINDOW_H
#define SHADOWSOCKSR_MAIN_WINDOW_H

#include <gtkmm/window.h>
#include <gtkmm/builder.h>

namespace ssr {

class MainWindow : public Gtk::Window {
 public:
  MainWindow(BaseObjectType *object, const Glib::RefPtr<Gtk::Builder> &builder);

  MainWindow(const MainWindow &) = delete;

  ~MainWindow() override;
};

} //namespace ssr

#endif //SHADOWSOCKSR_MAIN_WINDOW_H
