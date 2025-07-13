#include "global.h"
#include "life.h"
#include "snake.h"
#include "box.h"
#include "boat.h"
#include "bigblink.h"
#include "matrix.h"
#include "simulation.h"	

//ADDing a trackable comment.What the fuck!
//Game matrix simulation
class Matrix;
class Simulation;

int main() {

	const int numLife = 4;
	Life **population = new Life*[numLife];
	
	population[0] = new Boat(8, 4); 
	population[1] = new Snake(18, 14);
	population[2] = new BigBlink(3, 13);
	population[3] = new Box(9, 13);
	
	// Create the game
	Simulation s(population, numLife);

	// Debugger Exercise
	s.one('n' - 'j');

	// Run the game
	s.simulate();

	// Report
	s.report();

	// Clean up
	delete population[0];
	delete population[1];
	delete population[2];
	delete population[3];
	delete[] population;

}
