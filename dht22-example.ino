#include <DHT.h>    
//Costanti  
#define DHTPIN 4  //Pin a cui è connesso il sensore  
#define DHTTYPE DHT22   //Tipo di sensore che stiamo utilizzando (DHT22)  

DHT dht(DHTPIN, DHTTYPE); 
//Inizializza oggetto chiamato "dht", parametri: pin a cui è connesso il sensore, tipo di dht 11/22    
//Variabili  
int chk;  
float hum;  //Variabile in cui verrà inserita la % di umidità  
float temp; //Variabile in cui verrà inserita la temperatura    

void setup() {    
  Serial.begin(9600);    
  dht.begin();  
}    

void loop() {    
  delay(2000);  //Ritardo di 2 secondi. (E' possibile leggere dal sensore massimo una volta ogni 2 secondi)      
  //Leggi i dati e salvali nelle variabili hum e temp    
  hum = dht.readHumidity();    
  temp= dht.readTemperature();    
  //Stampa umidità e temperatura tramite monitor seriale    
  Serial.print("Umidità: ");    
  Serial.print(hum);    
  Serial.print(" %, Temp: ");    
  Serial.print(temp);    
  Serial.println(" Celsius");  
}
