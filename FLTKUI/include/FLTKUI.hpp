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
class FLTKUI : public UI
{
	private:
		Fl_Window *window = nullptr;
	public:
		FLTKUI(); 
		void set(std::string, std::vector<std::string> *, callback) override;
		void run(std::string, void *) override;
		virtual void error(std::string, std::string="OK") override;
		virtual void alert(std::string, UI::action=PROMPT, std::string="OK", std::string="Cancel") override;
};
}
#endif
