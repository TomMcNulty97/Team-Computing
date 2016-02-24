/* Program that chooses random way */
task main()
{
	int num;

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

	//makes random decision on which way to go
	num=rand()%2;
	if(num==0)
	{
		//turn left
		motor[motorB]=0;
		motor[motorC]=50;
		wait1Msec(650);

		//straight
		motor[motorB]=50;
		motor[motorC]=50;
		wait1Msec(2000);

		//turn left
		motor[motorB]=0;
		motor[motorC]=50;
		wait1Msec(650);

		//straight
		motor[motorB]=50;
		motor[motorC]=50;
		wait1Msec(800);

		//turn left
		motor[motorB]=0;
		motor[motorC]=50;
		wait1Msec(650);

		//straight
		motor[motorB]=50;
		motor[motorC]=50;
		wait1Msec(1200);
	}//end if

	else
	{
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
		wait1Msec(700);

		//straight
		motor[motorB]=50;
		motor[motorC]=50;
		wait1Msec(1000);
	}//end else

}//end task main()
