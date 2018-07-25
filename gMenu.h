#ifndef GMENU_H_INCLUDED
#define GMENU_H_INCLUDED

#include <vector>
#include <SDL2/SDL.h>
#include "common.h"
#include "gButton.h"

using namespace std;


class gMenu
{
private:
    int x;
    int y;
    int w;
    int h;
    char cont;
    vector<gButton> list_buttons;
    ty_param s_context;

public:
    void init_menu(void);
    gMenu(ty_param);
    ~gMenu();
    void displayMenu(SDL_Event pevent);
    int ControlButtonEvents(SDL_MouseButtonEvent pMotion);
    void ControlMouseEvents(SDL_MouseMotionEvent pMotion);
    bool isInRectangle(SDL_MouseMotionEvent pmotion, SDL_Rect prect);
    bool isInRectangle2(SDL_MouseButtonEvent pmotion, SDL_Rect prect);
    void exit_menu(void);
    char get_continue(void);
    void set_continue(char c);
    gButton debug_get_button();
};

#endif // GMENU_H_INCLUDED
