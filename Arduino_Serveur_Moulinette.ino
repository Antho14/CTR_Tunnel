#include <SPI.h>
#include <Ethernet.h>
/* Connexion ethernet */

//----------------------------------------------------------------------------------------------------------------//    
// L'adresse MAC du shield
byte mac[] = { 0x90, 0xA2, 0xDA, 0x11, 0x1A, 0xCF };//A VOIR 

// L'adresse IP que prendra le shield
byte ip[] = { 192,168,1, 20 };  //A VOIR 

// L'adresse IP de la passerelle
byte gateway[] = { 192,168,1, 1 };// A voir Moulinette

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

// Variable de réception d’une chaine de caractère
String msg ;

//----------------------------------------------------------------------------------------------------------------//    
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
              // TESTE DE LA COMMUNICATION.
              String  TabCapteur[16];
              char c = client.read(); //on lit ce qu'il raconte
               Serial.println(c);
              //msg= msg+TabCapteur[];
              if(TabCapteur[0] == '!'&& TabCapteur[1]== 0x20) 
                break;
          }
          else
          break;
      }
      
      // Message reçu
      Serial.println("Message : "+ msg);
      
    }
}      
//----------------------------------------------------------------------------------------------------------------// 
   // On regarde ce que le client nous demande    
    /*  if(TabCapteur[0] == '!'&& TabCapteur[1]== 0x20)
      {
        msg="";
        msg= msg+TabCapteur[2]+TabCapteur[3]+TabCapteur[4];
        Serial.println("voici les donnees du capteur de fumée"+ msg);
        client.println("voici les donnees du capteur de fumée"+ msg); // Message envoyé au client
        
        msg="";
        msg= msg+TabCapteur[6]+TabCapteur[7]+TabCapteur[8]+TabCapteur[9]+TabCapteur[10];
        Serial.println("voici les donnees du capteur de CO2"+ msg);
        client.println("voici les donnees du capteur de CO2"+ msg); // Message envoyé au client
      
        msg="";
        msg= msg+TabCapteur[12]+TabCapteur[13]+TabCapteur[14];
        Serial.println("voici les donnees du capteur de Luminosité"+ msg);
        client.println("voici les donnees du capteur de Luminosité"+ msg); // Message envoyé au client
      
    }
   else 
   {
     Serial.println("Trame invalide");
     client.println("Trame invalide"); // Message envoyé au client
    }
*/
    
