
task main()
{

if (getIRRemoteButtons(S4) == 5){
	float n, k;
        //Le moteur A est en arrière à 20%.
	setMotorSpeed(motorA,-20);
        //Le moteur A est en avant à 20% .
	setMotorSpeed(motorD,20);
        //Renvoie le nombre de degrés effectués par le moteur D.
	n = getMotorEncoder(motorD);
	k = n*60;
	sleep (5000);
	}else {
        //Le moteur A est à 0%.
		setMotorSpeed(motorA,0);
        //Le moteur D est à 0%.
	setMotorSpeed(motorD,0);
	sleep(2000);
	}

}
