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
		template <typename... T>
		void set(std::string, callback<T...>, std::vector<std::string> *);
		template <typename... T>
		void run(std::string, T...);
		virtual void error(std::string, std::string="OK");;
		virtual void alert(std::string, UI::action=PROMPT, std::string="OK", std::string="Cancel");
};
}
#endif
