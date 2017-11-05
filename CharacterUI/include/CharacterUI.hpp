#include <iostream>
#include <UniversalUI.hpp>

#include "config.h"

using namespace std;

class CharacterUI: public UI
{
	public:
	CharacterUI();
	virtual void error(std::string msg, std::string ok_msg="OK") override;
	virtual void alert(std::string msg, UI::action ac=UI::DISPLAY, std::string ok_msg="OK", std::string cancel_msg="Cancel") override;
};

