#include "breakoutcore.h"

nori::Ball::Ball(){

	this->body="@";
	this->x=30+2;
	this->y=27;
}

nori::Bar::Bar(){
	this->body="-----";
	this->x=30;
	this->y=28;
}

nori::Player::Player(){}

void nori::BreakoutGame::Init(){
	initscr();
	noecho();
	curs_set(0);
	keypad(stdscr,true);
}

nori::BreakoutGame::BreakoutGame(){
	this->Init();

}

void nori::BreakoutGame::Start(){
	
}
