﻿#include "Truck.h"

map<DIRECTION, vector<vector<wstring>>> Truck::spriteSheet = {
{
	DIRECTION::RIGHT,
	{
		{
			L"┌―――――――――――――――┐┌―――╥―┐ ",
			L"|               │├―――╨―┴┐",
			L"╞═══════════════╡│ -   (│",
			L"│               ││      │",
			L"╘══(O)════(O)═══╧╧══(O)═╛ "
		},
		{
			L"              ____  ",
			L"             ║    \\ ",
			L"  ┌――――――――――╨―――――\\",
			L"  │            -  (│",
			L" ═╧(o)════════(o)══╛"
		},
		{
			L"                  /\\\\      _____   ",
			L"    ,――――――      /  \\\\____/__│__\\_ ",
			L" ,--┴---:---`--,/   |)       │   (│",
			L"══(O)═════(O)══╛    ╘(O)═══════(O)╛"
		},
		{
			L" _______0=0_____  ",
			L"│            │  \\ ",
			L"│  ambulance └―――┤",
			L"╞═══════════════(│",
			L"╘══(O)══════(O)══╛"
		},
		{
			L" ________________________   ",
			L"│     │ │    │     │     \\  ",
			L"├――――-┼―┼―――-┼―――――┼-―――――\\ ",
			L"│)                    -   (\\",
			L"╘═════(O)═════════(O)══════╛"
		}
	}
},
{
	DIRECTION::LEFT,
	{
		{
			L"    _____     //\\                 ",
			L" __/__│__\\___//  \\    ,―――――――,   ",
			L"|)    │      (│   \\,------:---┴--,",
			L"╘(O)═══════(O)╛    ╘═(o)═════(o)══"
		},
		{
			 L"   ________________________ ",
			 L"  /   │ │    │     │       │",
			 L" /―――-┼―┼―――-┼―――――┼-――――――┤",
			 L"/)  -                     (│",
			 L"╘═════(O)════════════(O)═══╛"
		},
		{
			L"  ______0=0______ ",
			L" /   │           │",
			L"├――――┘ ambulance │",
			L"│)═══════════════╡",
			L"╘══(O)══════(O)══╛"
		},
		{
			L" __________________ ",
			L"│[_][_][_][_][_][_]│",
			L"│o _          _  _ |",
			L"╘═(O)════════(O)(O)╛"
		}
	}
}		 	 
};		 


Truck::Truck(float x, float y, int min_x, int max_x, float speed, DIRECTION dir) : 
	Vehicle(x, y, min_x, max_x, speed, spriteSheet[dir][rand() % spriteSheet[dir].size()], dir) {}