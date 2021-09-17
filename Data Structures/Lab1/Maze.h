#ifndef MAZE_H // Prevent duplicate definition
#define MAZE_H

bool traverse_maze();
void test_maze(int maze[5][5]);              // forward declaration
bool dead_end(int xPosition, int yPosition); // forward declaration

#endif // MAZE_H