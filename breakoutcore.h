#ifndef __BREAKOUT_CORE_H__

#define __BREAKOUT_CORE_H__

#include <ncurses.h>
#include <string>

namespace nori{
	
	class Ball{
		public:
			Ball();
			
			int x,y;		
			std::string body;
	};
	class Bar{ 
		public:
			Bar();
			
			int x,y;
			std::string body;
	};
	class Player{
		public:
			Ball ball;
			Bar padle;
			Player();
	};
	class BreakoutGame{
		private:
			Player player;
			std::string brick;
			int score;

			void ShowTItle();
			void MainLoop();
		public:
			BreakoutGame();
			~BreakoutGame();
			
			void Start();
	};
};
#endif 
