#pragma config(Motor,  motorB,          left,          tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          right,         tmotorEV3_Large, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	int speed=0,i;
	int num;

	//Loop to generate random positive speed between 1 and 100
	for(i=0;speed<1;i++)
	{
		speed = (rand()%80);
	}

  //Straight line for 1.9 seconds
	motor[motorB]=speed;
	motor[motorC]=speed;
	wait1Msec(95000/speed);

	//turn left
	motor[motorB]=0;
	motor[motorC]=speed;
	wait1Msec(32600/speed);

	//straight
	motor[motorB]=speed;
	motor[motorC]=speed;
	wait1Msec(100000/speed);

	//makes random decision on which way to go
	num=rand()%2;
	if(num==0)
	{
		//turn left
		motor[motorB]=0;
		motor[motorC]=speed;
		wait1Msec(32600/speed);

		//straight
		motor[motorB]=speed;
		motor[motorC]=speed;
		wait1Msec(100000/speed);

		//turn left
		motor[motorB]=0;
		motor[motorC]=speed;
		wait1Msec(32600/speed);

		//straight
		motor[motorB]=speed;
		motor[motorC]=speed;
		wait1Msec(40000/speed);

		//turn left
		motor[motorB]=0;
		motor[motorC]=speed;
		wait1Msec(32600/speed);

		//straight
		motor[motorB]=speed;
		motor[motorC]=speed;
		wait1Msec(60000/speed);
	}//end if

	else
	{
		//turn right
		motor[motorB]=speed;
		motor[motorC]=0;
		wait1Msec(32500/speed);

		//straight
		motor[motorB]=speed;
		motor[motorC]=speed;
		wait1Msec(47500/speed);

		//turn right
		motor[motorB]=speed;
		motor[motorC]=0;
		wait1Msec(35000/speed);

		//straight
		motor[motorB]=speed;
		motor[motorC]=speed;
		wait1Msec(50000/speed);
	}//end else


}
