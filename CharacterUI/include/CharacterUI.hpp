#include <UniversalUI.hpp>
#include <iostream>

#include "config.h"

using namespace std;
using namespace uui;

class CharacterUI : public UI {
public:
  CharacterUI();
  virtual void error(std::string msg, std::string ok_msg = "OK") /*override*/;
  virtual int alert(std::string, uui::action = PROMPT, std::string = "OK",
                    std::string = "Cancel") /*override*/;
};
