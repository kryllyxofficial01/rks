#pragma once

#include <iostream>
#include <map>

/**
 * Container for all current register values.
 */
struct Registers {
	std::map<int, uint16_t> registers = {
		{0, 0}, // A
		{1, 0}, // B
		{2, 0}, // C
		{3, 0}, // D
		{4, 0}, // F
		{5, 0}, // PC
		{6, 0}  // SP
	};
};
