/*===============================================================
// Nom du fichier : Activite1_v1.c
// Auteur : HafsaDn
// Date de création : Février 2022
// Version : V1
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Description :
// Le capteur est appuiyé,
// Le moteur marche dans un sens
// Le capteur est relâché
// Le moteur marche dans le sens inverse
// –-------------------------------------------------------------
// A noter :
// - le capteur de contact est sur l'entrée 1
// - le moteur est sur la sortie A
//===============================================================*/
task main()
{
if (SensorValue[S1]==1)
setMotorSpeed(motorC,75);
	setMotorSpeed(motorA,75);
	// Le moteur tourne pendant cet instant
	sleep(4000);
}
else
	// le capteur est relâché
	setMotorSpeed(motorC,-75);
	setMotorSpeed(motorA,-75);
	// Le moteur tourne dans le sens inverse
	sleep(4000);
}
