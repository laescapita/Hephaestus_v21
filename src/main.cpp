/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\leono                                            */
/*    Created:      Thu May 07 2020                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----
#include "vex.h"
#include "autoFunctions.h"
#include "userFunctions.h"

using namespace vex;

vex::competition Competition;

//This will be used to reset any values that have been used for either auton or user control
void preAuton( void )
{
  Brain.Screen.newLine();
  Brain.Screen.print("Pre-Autonmous is Running");
}

//Autonomous method
void auton ( void )
{
  Brain.Screen.newLine();
  Brain.Screen.print("Skills Autonomous");

  Brain.Screen.newLine();
  Brain.Screen.print("Skills Autonomous Ended");
}

//Sets the controls for all the motors
void userControl( void )
{
  Brain.Screen.newLine();
  Brain.Screen.print("Mecanum Drive");
  
  while(true)
  {
     int Ax1Pos = Controller1.Axis1.position();
     int Ax3Pos = Controller1.Axis3.position();
     int Ax4Pos = Controller1.Axis4.position();

     //Actual Joystick Drive and Buttons
     //joyStickDrive(Ax1Pos, Ax3Pos, Ax4Pos);
  }
 
 vex::task::sleep(20);

}
 
//Where stuff goes down 
int main() 
{
  Competition.autonomous( auton );

  Competition.drivercontrol( userControl );

  preAuton();

  Brain.Screen.newLine();
  Brain.Screen.print("Match Ended");

  while(1)
  {
    vex::task::sleep(100);
  }
  
}
