#include <SPI.h>
#include <Ethernet.h>
/* Connexion ethernet */

//----------------------------------------------------------------------------------------------------------------//    
// L'adresse MAC du shield
byte mac[] = { 0x90, 0xA2, 0xDA, 0x11, 0x1A, 0xCF };//A VOIR 

// L'adresse IP que prendra le shield
byte ip[] = { 192,168,1, 20 };  //good

// L'adresse IP de la passerelle
byte gateway[] = { 192,168,1, 1 };// good
// Attachement d'un objet "server" sur le port 2000
EthernetServer server(2000);


//----------------------------------------------------------------------------------------------------------------//   
void setup() 
{
  // Initialisation liaison série pour déboguer
  Serial.begin(9600);
  Serial.println("Liaison Serie ok ...");
  
  // Configuration de la Ethernet shield
  Ethernet.begin(mac, ip, gateway);
  
  // Donne une seconde au shield pour s'initialiser
  delay(1000);
}
//--------------------------------------------------------------------------------------------------------------------//
String msg ;
void loop()
{
  // Attente de la connexion d'un client
  EthernetClient client = server.available();
  if (client) 
  {
      msg = ""; // Remise à zero de la variable de réception
      Serial.println("Client connecté ...");
      while(client.connected())
      {
          // si le client nous envoie quelque chose
          if (client.available() > 0)
          {
              char carlu = client.read(); //on lit ce qu'il raconte
              msg+= carlu;
              if(carlu == '\n') break;
           }
          else
            break;
     }
      // Message reçu
      Serial.println("Message : "+ msg);
      // On regarde ce que le client nous demande
      if(msg == "AA")
          {
          // allumer la led
          Serial.println("Allumer la led A ...");
          client.println("Allumer la led A ..."); // Message envoyé au client
          }
          else if (msg == "aa")
          {
          Serial.println("Eteindre la led ...");
          client.println("Eteindre la led A ..."); // Message envoyé au client
          }
          else
          {
          Serial.println("Erreur code ...");
          client.println("Erreur code ..."); // Message envoyé au client
          }

  }
}
