# Projet Mobilex — Robot LEGO Mindstorms EV3

Projet de robotique avec **LEGO Mindstorms EV3**, programmé en **C** avec **ROBOTC**. Le robot **Mobilex** réalise un **parking automatique** et peut être piloté manuellement à l’aide d’une télécommande IR.

---

## Description

Mobilex est un robot à deux roues (moteurs A et D) équipé de :

- **Capteur ultrason** : mesure des distances pour le mode parking automatique et la détection d’obstacles  
- **Capteur IR / télécommande** : pilotage manuel (avancer, reculer, tourner à gauche/droite)

Le programme propose **deux modes** :

1. **Mode manuel** : déplacement du robot via la télécommande IR (boutons 5, 8, 10, 11). Le bouton 7 permet de passer en mode automatique.  
2. **Mode automatique** : le robot avance jusqu’à détecter un obstacle (distance ≤ 10 cm), effectue une manœuvre de recul et de rotation, puis affiche des informations sur l’écran EV3.

---

## Matériel

- **Brique** : LEGO Mindstorms EV3  
- **Moteurs** : 2 moteurs EV3 Large (sorties A et D)  
- **Capteurs** :  
  - Capteur ultrason EV3 (entrée S1 ou S4 selon la version)  
  - Capteur IR EV3 + télécommande IR (entrée S4)  
- **Environnement** : ROBOTC pour EV3  

---

## Structure du projet

| Fichier | Rôle |
|--------|------|
| `Projetfinal.c` | Version finale : mode manuel + mode automatique + fonction de rotation |
| `V2Final.c` | Version 2 finale du programme principal |
| `Parking_automatique.c` | Programme simplifié de parking automatique |
| `Fonction.c` | Fonction utilitaire `faireTournerMobilex()` |
| `LegoD*.c`, `Activite2_*.c`, etc. | Versions intermédiaires et activités (moteurs, capteurs) |
| `Nonfinal/` | Dossier contenant des versions non finales et archives |

---

## Télécommande IR (mode manuel)

- **Bouton 5** : tourner à gauche  
- **Bouton 8** : tourner à droite  
- **Bouton 10** : reculer  
- **Bouton 11** : avancer  
- **Bouton 7** : passer en mode automatique  

En mode automatique, le **bouton gauche** (brick) permet de faire tourner le robot et de reprendre le contrôle.

---

## Compilation et déploiement

1. Ouvrir le projet dans **ROBOTC for LEGO Mindstorms**.  
2. Vérifier la configuration des capteurs et moteurs (entrées/sorties utilisées dans le code).  
3. Compiler le programme (Build).  
4. Télécharger le `.rbf` sur la brique EV3 via USB ou Bluetooth.  
5. Lancer le programme depuis la brique EV3.

---

## Prérequis

- [ROBOTC for LEGO Mindstorms](https://www.roboticseducation.org/robotc/) (ou environnement compatible EV3 en C)  
- Firmware EV3 compatible ROBOTC  
- Kit LEGO Mindstorms EV3 avec capteur ultrason et télécommande IR  

---

## Auteur

Projet réalisé dans le cadre d’activités de robotique (év. février 2022).  
Répertoire contient plusieurs itérations (LegoD, parking-auto, V2, etc.) ayant conduit à la version `Projetfinal.c`.

---

## Licence

Projet à but pédagogique. Libre d’utilisation et de modification pour l’apprentissage de la robotique avec LEGO Mindstorms EV3.
