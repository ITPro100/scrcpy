#ifndef SC_SDL_H
#define SC_SDL_H

#include "common.h"

#include <stdint.h>
#include <SDL3/SDL_video.h>

SDL_Window *
sc_sdl_create_window(const char *title, int64_t x, int64_t y, int64_t width,
                     int64_t height, int64_t flags);

#endif
