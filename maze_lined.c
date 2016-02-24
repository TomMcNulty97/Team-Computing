/* Program that takes the robot to the lined area on the maze. */
task main()
{
	//Straight line for 1.9 seconds
	motor[motorB]=50;
	motor[motorC]=50;
	wait1Msec(1900);

	//turn left
	motor[motorB]=0;
	motor[motorC]=50;
	wait1Msec(650);

	//straight
	motor[motorB]=50;
	motor[motorC]=50;
	wait1Msec(2000);

	//turn right
	motor[motorB]=50;
	motor[motorC]=0;
	wait1Msec(650);

	//straight
	motor[motorB]=50;
	motor[motorC]=50;
	wait1Msec(950);

	//turn right
	motor[motorB]=50;
	motor[motorC]=0;
	wait1Msec(650);

	//straight
	motor[motorB]=50;
	motor[motorC]=50;
	wait1Msec(1000);
	//finish


}//end task main()
