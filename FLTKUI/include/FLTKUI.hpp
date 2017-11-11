#ifndef FLTKUI_H
#define FLTKUI_H
#include <iostream>

#include <UniversalUI.hpp>
#include<FL/Fl.H>
#include<FL/Fl_Window.H>
#include<FL/fl_ask.H>
#include<FL/Fl_Box.H>

#include "config.h"

using namespace std;
using namespace uui;
namespace uui {
class FLTKUI: public UI
{
	private:
		Fl_Window *window = nullptr;
	public:
	FLTKUI();
	virtual void set(std::string, void (*)(UI *, void *)) override;
	virtual void run(std::string, void * = nullptr) override;
	virtual void error(std::string, std::string="OK") override;
	virtual void alert(std::string, UI::action=PROMPT, std::string="OK", std::string="Cancel") override;
};
}
#endif
