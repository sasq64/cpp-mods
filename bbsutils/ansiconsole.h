#ifndef BBS_ANSICONSOLE_H
#define BBS_ANSICONSOLE_H

#include "console.h"

namespace bbs {

class AnsiConsole : public Console {
public:
	AnsiConsole(Terminal &terminal);

	void putChar(Char c);

protected:

	virtual bool impl_scroll_screen(int dy) override;
	virtual void impl_color(int fg, int bg) override;
	virtual void impl_gotoxy(int x, int y) override;
	virtual int impl_handlekey() override;
	virtual void impl_clear() override;
	//virtual void impl_translate(Char &c) override;

};

}

#endif // BBS_ANSICONSOLE_H