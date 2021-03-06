/*
	Conrad 'Condzi' Kubacki 2017
	https://github.com/condzi
*/

#pragma once

#include <Core/Config.hpp>

namespace con {
constexpr uint8_t CONSOLE_CAPACITY = 72;
// Should depend on screen size!
constexpr uint8_t CONSOLE_VIEW_BUFFER = 48;
constexpr uint8_t CONSOLE_TEXT_SIZE = 30;
// IDEA: Move this values to settings ^
// Will broke if DESIGNED_X change.
constexpr uint16_t CONSOLE_MAX_TEXT_WIDTH = 965;
}