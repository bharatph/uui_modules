#ifndef FLTKUI_H
#define FLTKUI_H
#include <iostream>
#include <thread>

#include <FL/Fl.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Window.H>
#include <FL/fl_ask.H>
#include <UniversalUI.hpp>

#include "config.h"

using namespace std;
using namespace uui;
namespace uui {
class FLTKUI : public UI {
private:
  Fl_Window *window = nullptr;
  static void run_threaded(UI *, callback, void *);

public:
  FLTKUI();
  virtual void set(std::string, std::vector<std::string> *, callback) override;
  virtual void run(std::string, void *, bool = false) override;
  virtual void error(std::string, std::string = "OK") override;
  virtual int alert(std::string, uui::action = PROMPT, std::string = "OK",
                    std::string = "Cancel") override;
  virtual void wait_for(std::string);
  virtual void exit() override;
};
} // namespace uui
#endif
