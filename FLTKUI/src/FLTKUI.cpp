#include <FLTKUI.hpp>
#include <clog/clog.h>

uui::FLTKUI *uui::FLTKUI::instance =nullptr;


uui::FLTKUI *uui::FLTKUI::getInstance(){
  if(instance == nullptr){
    instance = new FLTKUI();
  }
  return instance;
}

uui::FLTKUI::FLTKUI() {
  // if(cannot_open_display_devices)switch_to_cli;
  window = new Fl_Window(340, 180);
  window->show();
  Fl::run();
}

void uui::FLTKUI::set(std::string name, std::vector<std::string> *input_info,
                      callback cb) {
  commands->insert(std::make_pair(name, cb));
  static int x;
  static int y;
  for (const std::string &s : *input_info) {
    x += 25;
    y += 25;
    Fl_Button *btn = new Fl_Button(x - 25, y - 24, x, y, s.c_str());
    window->add(btn);
  }
}

void uui::FLTKUI::run_threaded(UI *ui, callback cb, void *args) {
  cb(ui, args);
}

void uui::FLTKUI::run(std::string name, void *args, bool async) {
  log_inf("FLTKUI::set", "Launching predefined functions");
  uui::callback cb = (*commands)[name];
  if (cb == nullptr) {
    log_fat("FLTKUI::set", "Empty callback");
    return;
  }
  if (async) {
    // UI::threads->insert(std::make_pair(name, cb_thread.get_id()));
    threads->push_back(std::thread(run_threaded, this->instance, cb, args));
  } else
    cb(this->instance, args);
}

void uui::FLTKUI::wait_for(std::string name) {
  // std::thread::id th_id = (*threads)[name];
  for (auto &th : *threads) {
    th.join();
  }
}

void uui::FLTKUI::error(std::string msg, std::string ok_msg) {
  switch (fl_choice(msg.c_str(), ok_msg.c_str(), 0, 0))
    ;
}

int uui::FLTKUI::alert(std::string msg, uui::action ac, std::string ok_msg,
                       std::string cancel_msg) {
  return fl_choice(msg.c_str(), ok_msg.c_str(), cancel_msg.c_str(), 0);
}
void uui::FLTKUI::close() { window->hide(); }
