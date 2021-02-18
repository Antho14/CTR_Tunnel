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
#define CapteurF A5
#define CapteurC A4
#define CapteurL A3

int valF = 0, valC = 0, valL = 0;

void FonctionActionneur(void);
void ProjectInit(void);
//----------------------------------------------------------------------------------------------------------------//// L'adresse MAC du shield
byte mac[] = { 0x90, 0xA2, 0xDA, 0x11, 0x1A, 0xCF };
// L'adresse IP que prendra le shield
byte ip[] = { 192, 168, 1, 20 }; //good
// L'adresse IP de la passerelle
byte gateway[] = { 192, 168, 1, 1 }; // good
// Attachement d'un objet "server" sur le port 2000
EthernetServer server(2000);
//----------------------------------------------------------------------------------------------------------------//
void setup()
{
  ProjectInit();
}
//--------------------------------------------------------------------------------------------------------------------//
String msg ;
void loop()
{
  InitClient();
}

//----------------------------------------Partie Fonction -------------------------------




//------------------------------------------------------------------------------------------------
void ProjectInit(void)
{
  // Initialisation liaison série pour déboguer
  Serial.begin(9600);
  Serial.println("Liaison Serie ok ...");

  // Configuration de la Ethernet shield
  Ethernet.begin(mac, ip, gateway);

  // Donne une seconde au shield pour s'initialiser
  delay(1000);

  pinMode(A5, INPUT);
  pinMode(A4, INPUT);
  pinMode(A3, INPUT);

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
//------------------------------------------------------------------------------------------------

void InitClient(void)
{

  // Attente de la connexion d'un client
  EthernetClient client = server.available();
  if (client)
  {
    msg = ""; // Remise à zero de la variable de réception
    Serial.println("Client connecté ...");
    while (client.connected())
    {
      // si le client nous envoie quelque chose
      if (client.available() > 0)
      {
        char carlu = client.read(); //on lit ce qu'il raconte
        msg += carlu;
        if (carlu == '\n') break;
      }
      else
        break;
    }
    valF = analogRead(CapteurF); // turn the LED on (HIGH is the voltage level)
    valC = analogRead(CapteurC); // turn the LED on (HIGH is the voltage level)
    valL = analogRead(CapteurL); // turn the LED on (HIGH is the voltage level)
    // Message reçu
    Serial.println("Message : " + msg);
    // On regarde ce que le client nous demande
    FonctionActionneur();
  }
}
//-------------------------------------------------------------
void FonctionActionneur(void)
{
  //-------CAPTEUR----------
  //-------Capteur Fumee----
  if (msg.startsWith("?"))
  {

    if (msg == "?CAP_FU")
    {
      Serial.print(" Tension Capteur Fumee =");
      Serial.println(valF);
    }
    else if (msg == "?CAP_CO")
    {
      Serial.print(" Tension Capteur CO2 = ");
      Serial.println(valC);
    }
    //-------FEUX GAUCHE ----------------
    else if (msg == "?CAP_LU")
    {
      Serial.print(" Tension Capteur Lumi = ");
      Serial.println(valL);
    }
    //------------ORDRES POUR LES 3 Capteur----------------
    if (msg == "?CAP_AL")
    {
      Serial.print(" Tension Capteur Fumee =");
      Serial.println(valF);
      Serial.print(" Tension Capteur CO2 = ");
      Serial.println(valC);
      Serial.print(" Tension Capteur Lumi = ");
      Serial.println(valL);
    }
    else
    {
      Serial.println("Erreur code ...");
    }

  }
  //----------------------------------------------------------------------------------------------------------------------
  else
  {
    //---------ACTIONNEUR----------
    //------FEUX DROIT--------------
    if (msg == "!FDD_ON")
    {
      Serial.println("Message : " + msg);
      digitalWrite(FeuxD, LOW);
    }
    else if (msg == "!FDD_OF")
    {
      Serial.println("Message : " + msg);
      digitalWrite(FeuxD, HIGH);
    }
    //-------FEUX GAUCHE ----------------
    else if (msg == "!FGG_ON")
    {
      Serial.println("Message : " + msg);
      digitalWrite(FeuxG, LOW);
    }
    else if (msg == "!FGG_OF")
    {
      Serial.println("Message : " + msg);
      digitalWrite(FeuxG, HIGH);
    }
    //------VENTILATEUR HAUT--------------

    else if (msg == "!VHH_ON")
    {
      Serial.println("Message : " + msg);
      digitalWrite(VentilateurH, LOW);
    }
    else if (msg == "!VHH_OF")
    {
      Serial.println("Message : " + msg);
      digitalWrite(VentilateurH, HIGH);
    }
    //--------VENTILATEUR BAS-------------

    else if (msg == "!VBB_ON")
    {
      Serial.println("Message : " + msg);
      digitalWrite(VentilateurB, LOW);
    }
    else if (msg == "!VBB_OF")
    {
      Serial.println("Message : " + msg);
      digitalWrite(VentilateurB, HIGH);
    }
    //--------RAMPE1------------

    else if (msg == "!R11_ON")
    {
      Serial.println("Message : " + msg);
      digitalWrite(Rampe1, LOW);
    }
    else if (msg == "!R11_OF")
    {
      Serial.println("Message : " + msg);
      digitalWrite(Rampe1, HIGH);
    }
    //---------RAMPE2-------------

    else if (msg == "!R22_ON")
    {
      Serial.println("Message : " + msg);
      digitalWrite(Rampe2, LOW);
    }
    else if (msg == "!R22_OF")
    {
      Serial.println("Message : " + msg);
      digitalWrite(Rampe2, HIGH);
    }
    //---------RAMPE3------------

    else if (msg == "!R33_ON")
    {
      Serial.println("Message : " + msg);
      digitalWrite(Rampe3, LOW);
    }
    else if (msg == "!R33_OF")
    {
      Serial.println("Message : " + msg);
      digitalWrite(Rampe3, HIGH);
    }
    //--------DISPOSITIF (Toujours actif de preference)-------------

    else if (msg == "!CCC_ON")
    {
      Serial.println("Message : " + msg);
      digitalWrite(Capteur, LOW);
    }
    else if (msg == "!CCC_OF")
    {
      Serial.println("Message : " + msg);
      digitalWrite(Capteur, HIGH);
    }
    else
    {
      Serial.println("Erreur code ...");
    }
    //}
  }
}
