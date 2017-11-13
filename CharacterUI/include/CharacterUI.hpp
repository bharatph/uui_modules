#include <iostream>
#include <UniversalUI.hpp>

#include "config.h"

using namespace std;
using namespace uui;

class CharacterUI: public UI
{
	public:
	CharacterUI();
	virtual void error(std::string msg, std::string ok_msg="OK") /*override*/;
	virtual void alert(std::string, UI::action=PROMPT, std::string="OK", std::string="Cancel") /*override*/;
};

