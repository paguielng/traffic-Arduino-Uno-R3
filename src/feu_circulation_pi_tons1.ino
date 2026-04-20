/*
    simulation de feu tricolore avec un passage pieton
    
    feu vert tricolore (voiture) sur broche 10,  allumée pendant 3s
    feu orange tricolore sur broche 11, allumée pendant 1s
    feu rouge tricolore sur broche 12, allumée pendant 3s

    feu Vert bicolore (pieton) sur broche 8
    feu rouge bicolore sur broche 9
   
*/

// association de variable et de pin 
// pour le feu tricolore "voiture"
int feuVert = 10;
int feuOrange = 11;
int feuRouge = 12;

// pour le feu bicolore "piéton"
int pietonVert = 8;
int pietonRouge = 9;


// le code dans cette fonction est exécuté une fois au début 
void setup() {

// indique les 3 broches de sorties pour le feu tricolore voiture:  
pinMode(feuVert, OUTPUT); 
pinMode(feuOrange, OUTPUT); 
pinMode(feuRouge, OUTPUT);

// indique les 2 broches de sorties pour le feu bicolore piéton: 
pinMode(pietonVert, OUTPUT); 
pinMode(pietonRouge, OUTPUT);
} 


// le code dans cette fonction est exécuté en boucle 
void loop() {  
digitalWrite(feuVert, HIGH); // allumer le feu vert tricolore (voiture)
digitalWrite(pietonRouge, HIGH); // allumer le feu rouge bicolore (pieton)
delay(3000); // un premier temps d'attente

digitalWrite(feuVert, LOW);  // feu vert tricolore éteint
digitalWrite(feuOrange, HIGH); // feu orange tricolore allumé
delay(1000); // attendre 1s 

digitalWrite(pietonVert, HIGH); // feu vert pieton allumé
digitalWrite(pietonRouge, LOW); // feu rouge pieton éteint
digitalWrite(feuOrange, LOW);    // éteindre le feu orange tricolore
digitalWrite(feuRouge, HIGH);   // allumer le feu rouge tricolore
delay(3000);                    // attendre 3s

digitalWrite(feuRouge, LOW);     // éteindre feu rouge tricolore 
digitalWrite(pietonVert, LOW); // feu vert pieton éteint
digitalWrite(pietonRouge, HIGH); // feu rouge pieton allumé
digitalWrite(feuVert, HIGH); // allumer le feu vert tricolore (voiture)
delay(1000); // attendre 1s 

}