#include <iostream>
#include <UniversalUI.hpp>

#include "config.h"

using namespace std;

namespace uui
{
class CharacterUI : public UI
{
  private:
	static CharacterUI *instance;

  public:
	static CharacterUI *getInstance();
	virtual void error(std::string msg, std::string ok_msg = "OK") /*override*/;
	virtual int alert(std::string, uui::action = PROMPT, std::string = "OK",
					  std::string = "Cancel") /*override*/;

  protected:
	CharacterUI();
};
}
