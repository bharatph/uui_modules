#include <iostream>

#include<FL/Fl.H>
#include<FL/Fl_Window.H>
#include<FL/fl_ask.H>
#include<FL/Fl_Box.H>

#include <UniversalUI.hpp>
#include "config.h"

using namespace std;

class FLTKUI: public UI
{
	private:
		Fl_Window *window = nullptr;
	public:
	FLTKUI();
	virtual void error(std::string msg,  std::string ok_msg="OK") override;
	virtual void alert(std::string msg, UI::action ac=DISPLAY, std::string ok_msg="OK", std::string cancel_msg="Cancel") override;
};

