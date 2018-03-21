/**LAB WEEK 3: LINES + CIRCLES
 * CS3210
 * @author Dennis Droese
 * @file main.cpp
 * @date March 21, 2018
 */

/*
 * A simple test for drawing lines + circles.
 */


#include "x11context.h"
#include <unistd.h>
#include <iostream>
 
int main(void)
{
	GraphicsContext* gc = new X11Context(800,600,GraphicsContext::BLACK);
 
 
	// draw some lines
	gc->setColor(GraphicsContext::GREEN);
	gc->setPixel(10,10);
	gc->setPixel(30,30);
	gc->drawLine(100,100,100,500);
	gc->setColor(GraphicsContext::RED);
	gc->drawLine(100,500,500,500);
	gc->setColor(GraphicsContext::BLUE);
	gc->drawLine(500,500,500,100);
	gc->setColor(GraphicsContext::YELLOW);
	gc->drawLine(500,100,100,100);
	gc->setColor(GraphicsContext::MAGENTA);
	gc->drawCircle(300,300,200);

	// New tests below this line.

	// Line from outside the bounds.
	gc->drawLine(-200,-200,200,200);

	// circle from outside the bounds
	gc->drawCircle(12,-30,100);

	// line that is actually just a point.
	gc->drawLine(40,20,40,20);

	// circle with a radius of 0.  Should not draw.
	gc->drawCircle(40,30,0);

	sleep(8);
 
	delete gc;
 
	return 0;
}
