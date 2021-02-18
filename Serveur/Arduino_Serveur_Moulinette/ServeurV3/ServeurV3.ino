#include <SPI.h>
#include <Ethernet.h>
#include <SoftwareSerial.h>
/* Connexion ethernet */

//Define Des Different Actionneur
#define Rampe1 32
#define Rampe2 34
#define Rampe3 36
#define FeuxD 38
#define FeuxG 40
#define Capteur 42
#define VentilateurH 44
#define VentilateurB 46

//----------------------------------------------------------------------------------------------------------------//
// L'adresse MAC du shield
byte mac[] = { 0x90, 0xA2, 0xDA, 0x11, 0x1A, 0xCF };//A VOIR
// L'adresse IP que prendra le shield
byte ip[] = { 192, 168, 1, 20 }; //good
// L'adresse IP de la passerelle
byte gateway[] = { 192, 168, 1, 1 }; // good
// Attachement d'un objet "server" sur le port 2000
EthernetServer server(2000);
//----------------------------------------------------------------------------------------------------------------//
void setup()
{

  ActionneurInit();
}
//--------------------------------------------------------------------------------------------------------------------//
String msg ;
char msgRecu;
String TabMsg[7];

void loop()
{
  // Attente de la connexion d'un client
  EthernetClient client = server.available();
  if (client)
  {
    msg = ""; // Remise à zero de la variable de réception
    for (int i = 0 ; i < 7 ; i++) TabMsg[i] = "";
    Serial.println("Client connecté ...");
    while (client.connected())
    {
      // si le client nous envoie quelque chose
      if (client.available() > 0)
      {
        for (int i = 0 ; i < 7 ; i++)
        {
          char msgRecu = client.read(); //on lit ce qu'il raconte
          TabMsg[i] += msgRecu;
          msg += msgRecu;
          if (msgRecu == '\n') break;
        }
      }
      else
        break;
    }
    FonctionActionneur();
  }
}
//-------------------------------------------------Fonction----------------------------------------------------------------//
void FonctionActionneur(void)
{
  /*//feux droit Vert
    if (TabMsg[0] == "!" && TabMsg[1] == "F" && TabMsg[2] == "D" && TabMsg[3] == "D" && TabMsg[4] == "_" && TabMsg[5] == "O" && TabMsg[6] == "N")
    {
    Serial.println("Message : " + msg);
    digitalWrite(FeuxD, LOW);
    }
    //feux droit Rouge
    else if (TabMsg[0] == "!" && TabMsg[1] == "F" && TabMsg[2] == "D" && TabMsg[3] == "D" && TabMsg[4] == "_" && TabMsg[5] == "O" && TabMsg[6] == "F")
    {
    Serial.println("Message : " + msg);
    digitalWrite(FeuxD, HIGH);
    }*/

  //VentilateurHaut Allumé
  if (TabMsg[0] == "!" && TabMsg[1] == "V" && TabMsg[2] == "H" && TabMsg[3] == "H" && TabMsg[4] == "_" && TabMsg[5] == "O" && TabMsg[6] == "N")
  {
    Serial.println("Message : " + msg);
    digitalWrite(VentilateurH, LOW);
  }
  //VentilateurHaut eteint
  else if (TabMsg[0] == "!" && TabMsg[1] == "V" && TabMsg[2] == "H" && TabMsg[3] == "H" && TabMsg[4] == "_" && TabMsg[5] == "O" && TabMsg[6] == "F")
  {
    Serial.println("Message : " + msg);
    digitalWrite(VentilateurH, HIGH);
  }

}
//---------------------------------------------------------------------------------------------------------------------------//
void ActionneurInit(void)
{

  // Initialisation liaison série pour déboguer
  Serial.begin(9600);
  Serial.println("Liaison Serie ok ...");
  // Configuration de la Ethernet shield
  Ethernet.begin(mac, ip, gateway);
  // Donne une seconde au shield pour s'initialiser
  delay(1000);

  pinMode(Rampe1, OUTPUT);
  pinMode(Rampe2, OUTPUT);
  pinMode(Rampe3, OUTPUT);
  pinMode(FeuxD, OUTPUT);
  pinMode(FeuxG, OUTPUT);
  pinMode(Capteur, OUTPUT);
  pinMode(VentilateurH, OUTPUT);
  pinMode(VentilateurB, OUTPUT);

  digitalWrite(Rampe1, HIGH);
  digitalWrite(Rampe2, HIGH);
  digitalWrite(Rampe3, HIGH);
  digitalWrite(FeuxD, HIGH);
  digitalWrite(FeuxG, HIGH);
  digitalWrite(Capteur, HIGH);
  digitalWrite(VentilateurH, HIGH);
  digitalWrite(VentilateurB, HIGH);
}
