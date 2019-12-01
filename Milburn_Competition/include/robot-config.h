using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor LB;
extern motor LF;
extern motor RF;
extern motor RB;
extern motor IL;
extern motor IR;
extern motor Tray;
extern motor Lift;
extern controller Controller1;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );