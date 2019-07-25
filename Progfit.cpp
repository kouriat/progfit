#include<iostream>
using namespace std;
struct user{
	
	string nom;
	int age;
	float poids;
	float budget;
	
};

void Menu(int choix)
{ cout<<"  choix 1 :  Programme de Musculation \n ";
  cout<<" choix 2 :  Programme de Nutrition \n ";
  cout<<" choix 3 : quitter  \n ";	
  cout<<"votre choix  ";
}

void saisiruser(user &u1)
{
	cout<<"Donner votre nom \n";
	cin>>u1.nom;
	cout<<"donner votre age \n";
	cin>>u1.age;
	cout<<"donne votre poids en Kg \n";
	cin>>u1.poids;
	cout<<"donner votre budget (mois) \n";
	cin>>u1.budget;
	while(u1.budget<130)
	{ cout<<"Le budget minimum c'est 130euro pour le gym \n redonner votre budget" ;
	cin>>u1.budget;		
	}
	

	
}

// fonction de budget faible
void faible()
{
	cout<<"********************************************************  Votre Programme   ******************************************************** \n";
	cout<<" | 08:00 | Repas 1: 4 oeuf + 1/2L de lait + 2tranche Pain complet + 1/2L de l'eau  or Pancakes + 1/2L de l'eau  \n";
	cout<<" | 10:00 | Repas 2: Banane + 1/2L de l'eau  \n";
	cout<<" | 12:30 | Repas 3: 150g de riz + 200g poulet  + 1/2L de l'eau  \n";
	cout<<" | 15:00 | Repas 4: Pomme + 1/2L de l'eau  \n";
	cout<<" | 18:00 | Repas 5: cafe + Banane  + 1/2L de l'eau  \n";//avant de partir en gym
	cout<<" | 20:30 | Repas 6: 200g pates+ thon + 1/2L de l'eau  \n";
	cout<<"Vous avez besoin de 130 euro \n";
	
}

//fonction budget moyen
void moyen()
{
	cout<<"********************************************************  Votre Programme   ******************************************************** \n";
	cout<<" | 08:00 | Repas 1: 4 oeuf + 1/2L de lait + 2tranche Pain complet + 1/2L de l'eau  or Pancakes + 1/2L de l'eau  \n";
	cout<<" | 10:00 | Repas 2: Banane + 1/2L de l'eau + why protein   \n";
	cout<<" | 12:30 | Repas 3: 150g de riz + 200g poulet  + 1/2L de l'eau  \n";
	cout<<" | 15:00 | Repas 4: Pomme + 1/2L de l'eau  \n + why Protein";
	cout<<" | 18:00 | Repas 5: cafe + Banane  + 1/2L de l'eau  \n";//avant de partir en gym
	cout<<" | 20:30 | Repas 6: 200g pates+ thon + 1/2L de l'eau  \n";
	cout<<"Vous avez besoin de 200 euro \n";
	
}
void bon()
{
		cout<<"********************************************************  Votre Programme   ******************************************************** \n";
	cout<<" | 08:00 | Repas 1: 4 oeuf + 1/2L de lait + why protein + 1/2L de l'eau + 20g l'amande + vitamine or Pancakes + 1/2L de l'eau +why protein +vitamine + 20g l'amande \n";
	cout<<" | 10:00 | Repas 2: protein barre + Banane + 1/2L de l'eau + why protein   \n";
	cout<<" | 12:30 | Repas 3: 100g de riz + 200g poulet +brocoli + 20g l'amande 1/2L de l'eau  \n";
	cout<<" | 15:00 | Repas 4: 200g saumon +Pomme + 1/2L de l'eau  \n + why Protein";
	cout<<" | 18:00 | Repas 5: bcaa +protein barre +cafe + Banane  + 1/2L de l'eau  \n";//avant de partir en gym
	cout<<" | 20:30 | Repas 6: 100g pates+ 200g viande + brocoli + 1/2L de l'eau+ 20gl 'amande  \n";
	cout<<"Vous avez besoin de 350 euro \n";
	
	
}

// Prog de Muscle

void Seche()
{
	
cout<<"********	** DAY 1  Back******** \n ";
cout<<"\n";
cout<<"Pullups ==> 5 sets x 20, 15, 12, 10, 10 reps \n";
cout<<" Pushups 5 ==> sets x 20 reps \n";
cout<<" Hammer strength machine rows ==> 4 sets x 12 reps\n ";
cout<<" Dumbbell rows ==> 4 sets x 12 reps \n";
cout<<"Swiss ball hyperextentions ==> 4 sets x 25, 20, 15, 15 reps \n";
cout<<"\n";
cout<<"***********************\n";
cout<<"\n";

cout<<"***** Day 2  Chest********\n ";
cout<<"\n";
cout<<"Barbell bench press ==> 8 sets x 12, 10, 10, 8, 8, 6, 4, 4, 4 reps \n";
cout<<" Incline dumbbell bench press ==> 4 sets x 12 reps \n";
cout<<"Hammer strength chest press ==> 4 sets x 15 reps \n";
cout<<"Weighted dip ==> 4 sets x 10 reps \n";
cout<<"Cable flyes ==>4 sets x 12 reps \n";
cout<<"\n";
cout<<"***********************\n";
cout<<"\n";
cout<<"***********Day 3  Legs *********** \n";
cout<<"\n";
cout<<"Back squat ==> 7 sets x 10, 8, 6, 5, 4, 3, 3 reps \n";
cout<<"Leg press ==> 1 x drop set to failure \n";
cout<<"Walking lunges ==> 4 sets x 20 reps \n";
cout<<"Leg extension ==> 3 sets x 20 reps \n";
cout<<"Single-leg curl ==> 3 sets x 20 reps \n";
cout<<"Standing calf raise ==>3 sets x 20 reps \n";
cout<<"\n";
cout<<"*************************************** \n";
cout<<"\n";
cout<<"**************Day 4  Shoulders**********\n";
cout<<"\n";
cout<<"Military press ==> 7 sets x 10, 8, 6, 5, 4, 3, 3 reps \n";
cout<<"Arnold press ==> 4 sets x 12 reps \n";
cout<<"Barbell shrugs ==> 4 sets x 12 reps \n";
cout<<"Dumbbell lateral raise ==> 3 sets x 15 reps \n";
cout<<"Dumbbell front raise ==> 3 sets x 15 reps \n";
cout<<"Dumbbell rear delt flyes ==> 3 sets x 15 reps \n";
cout<<"\n";
cout<<"*************************************** \n";
cout<<"\n";

cout<<"************** Day 5  Arms*********** \n";
cout<<"\n";
cout<<"Barbell biceps curl ==> 3 sets x 10 reps \n";
cout<<"Skull crusher ==> 3 sets x 10 reps \n ";
cout<<"Ez-bar preacher curl ==> 3 sets x 10 reps \n";
cout<<"Dumbbell lying triceps extension ==> 3 sets x 10 reps \n";
cout<<"Dumbbell hammer curl ==> 3 sets x 12 reps \n";
cout<<"Rope pressdown ==> 3 sets x 12 reps \n";
cout<<"Barbell wrist curl ==>3 sets x 20 reps \n";
cout<<"Barbell reverse wrist curl ==> 3 sets x 20 reps \n";
cout<<"*************************************** \n";
}

int main()
{
	user u;
	int choix;
	saisiruser(u);
do {
	
	Menu(choix);
	cin>>choix;
	
	switch(choix)
	{ 
	case 1: 
	
	if(u.poids >=85)
	{
		Seche();
	}
		if(u.poids <85)
	{
	cout<<" la masse \n";
	Seche();
	
	}break;
	
	case 2:
	 	
	 		
	//faible 130
	if(u.budget>=130 && u.budget<200)
	{
		cout<<"welcome "<<u.nom<<"  \n";
		faible();
	}
	//Moyen
	if(u.budget>=200 && u.budget<300)
	{
		cout<<"welcome "<<u.nom<<"  \n";
		moyen();
	}
	//bon
	if(u.budget>=300 )
	{
		cout<<"welcome "<<u.nom<<"  \n";
		bon();
	}
	break;
}
}while(choix!=3);
	

return 0;
	
}

