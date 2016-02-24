task main()
{
	int speed=0;
	float batteryLife=getBatteryVoltage();

	speed = rand()%100+1;

	displayTextLine(3,"speed %d power %d",speed,speed);
	displayTextLine(4,"battery %d",speed,speed);

	motor(motorB)=speed;
	motor(motorC)=speed;
	wait1Msec(2000);
}
