//
// Created by sea on 1/20/19.
//

#include <giomm.h>
#include <libnotifymm.h>
#include "ui_util.h"

namespace ssr {

void util::notify(const char *title, const char *content, const char *icon) {
    Notify::init("ShadowsocksR");
    Notify::Notification notification(title, content, icon);
    notification.show();
}

void util::dialog(Gtk::Window &parent,
                  const char *content,
                  Gtk::MessageType type) {
    Gtk::MessageDialog dialog(parent, content, false, type);
    dialog.run();
}

} //namespace ssr