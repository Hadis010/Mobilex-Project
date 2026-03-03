/*===============================================================
// Nom du fichier : Activite0_v1.c
// Auteur : HafsaDn
// Date de création : Février 2022
// Version : V1
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Description :
//le moteur tourne dans un sens
// Après 4 secondes,
// le moteur tourne dans le sens inverse
// ?-------------------------------------------------------------
// A noter :
// - le capteur de contact est sur l'entrée 1
// - le moteur est sur la sortie A
//===============================================================*/
task main()
{
	setMotorSpeed(motorC,75);
	setMotorSpeed(motorA,75);
	// Le moteur tourne pendant cet instant
	sleep(4000);
	displayCenteredBigTextLine(4,"En route !");
	setMotorSpeed(motorC,-75);
	setMotorSpeed(motorA,-75);
	// Le moteur tourne dans le sens inverse
	sleep(4000);
}
