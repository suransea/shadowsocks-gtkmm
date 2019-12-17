//
// Created by sea on 1/20/19.
//

#include <gtkmm/button.h>
#include <gtkmm/treemodel.h>
#include <gtkmm/comboboxtext.h>
#include <gtkmm/liststore.h>
#include "main_window.h"
#include "../util/ui_util.h"

namespace ss {

MainWindow::MainWindow(BaseObjectType *object, const Glib::RefPtr<Gtk::Builder> &builder)
    : Gtk::Window(object) {
    auto &&obj = builder->get_object("server_liststore");
    auto &&model = Glib::RefPtr<Gtk::ListStore>::cast_dynamic(obj);
    auto &&iter = model->append();
}

} //namespace ss