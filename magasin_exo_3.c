
#include<stdio.h>
#include<string.h>
main()
{
 static int coutTotal;
 int i,j,choix,c=1,a[9],cout[9];
 for(i=0;i<9;i++)
 a[i]=0;
 
 char nom[100];
 char article[9][100]={
 "Calice",
 "Fiole noire",
 "Les crapaud et leurs utilisations, tome 1", //section objets
 "Doigt de Troll",
 "Poire poilue",
 "Sel vert", //section ingredients
 "Scie",
 "Corde",
 "Sac de 2 metres"  //section "onveutpassavoir"
 };
 printf("Bonsoir mon brave! Entrez! Quel est votre prénom?\n");
 gets(nom);
 printf(" %s! Bienvenue a la boutique de l'etrange, jettez donc un oeil!  Litteralement...\n",nom);
 do{
  
  if(c==1){
  printf("Entrez \n1 - Objets\n2 - Ingredients\n3 - Divers\nAutre pour s'enfuir de la boutique\n");
  scanf("%d",&choix);
  switch(choix)
  {
   case 1:
   {
    int objetschoix;
    printf("Entrez \n1 - Calice - 100 ecus\n2 - Fiole noire- 500 ecus\n3 - Les crapaud et leurs utilisations, tome 1 - 800 ecus\nAutre pour s'enfuir de la boutique\n");
    scanf("%d",&objetschoix);
    cout[0]=100;
    cout[1]=500;
    cout[2]=800;
    switch(objetschoix)
    {
     case 1:
     {
      int num;
      printf("Vous avez choisi le Calice a 100 ecus. Etes vous certain de votre choix? Les retours ne sont pas acceptes. Si oui entrez 1, si non 2.\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[0]++;
       coutTotal+=100;
      }
      printf("Le cout total de votre panier est de %d\n",coutTotal);
      break;
     }
     case 2:
     {
      int num;
      printf("Vous avez choisi  la Fiole noire a 500 ecus. Etes vous certain de votre choix? Les retours ne sont pas acceptes. Si oui entrez 1, si non 2.\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[1]++;
       coutTotal+=500;
      }
      printf("Le cout total de votre panier est de %d\n",coutTotal);
      break;
     }
     case 3:
     {
      int num;
      printf("Vous avez choisi  Les crapaud et leurs utilisations, tome 1 a 800 ecus. Etes vous certain de votre choix? Les retours ne sont pas acceptes. Si oui entrez 1, si non 2.\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[2]++;
       coutTotal+=800;
      }
      printf("Le cout total de votre panier est de %d\n",coutTotal);
      break;
     }
     default:{
      printf("Sortir de la categorie objets\n");
      break;
     }
    }
    break;
   }
   case 2:
   {
    int Ingredientschoix;
    printf("Entrez \n1 - Doigt de Troll - 650 ecus\n2 - Poire poilue - 40 ecus\n3 - Sel vert - 80 ecus\nAutre pour s'enfuir de la boutique\n");
    scanf("%d",&Ingredientschoix);
    cout[3]=650;
    cout[4]=40;
    cout[5]=80;
    switch(Ingredientschoix)
    {
     case 1:
     {
      int num;
      printf("Vous avez choisi le Doigt de Troll a 650 ecus. Etes vous certain de votre choix? Les retours ne sont pas acceptes. Si oui entrez 1, si non 2.\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[3]++;
       coutTotal+=650;
      }
      printf("Le cout total de votre panier est de %d\n",coutTotal);
      break;
     }
     case 2:
     {
      int num;
      printf("Vous avez choisi la Poire poilue a 40 ecus. Etes vous certain de votre choix? Les retours ne sont pas acceptes. Si oui entrez 1, si non 2.\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[4]++;
       coutTotal+=40;
      }
      printf("Le cout total de votre panier est de %d\n",coutTotal);
      break;
     }
     case 3:
     {
      int num;
      printf("Vous avez choisi le Sel vert a 80 ecus. Etes vous certain de votre choix? Les retours ne sont pas acceptes. Si oui entrez 1, si non 2.\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[5]++;
       coutTotal+=80;
      }
      printf("Le cout total de votre panier est de %d\n",coutTotal);
      break;
     }
     default:{
      printf("Sortir de la categorie ingredients.\n");
      break;
     }
    }
    break;
   }
   case 3:
   {
    int diverschoix;
    printf("Entrez\n1 - Scie - 210 ecus\n2 - Corde - 55 ecus\n3 - Sac de 2 metres - 20 ecus\nAutre pour s'enfuir de la boutique\n");
    scanf("%d",&diverschoix);
    cout[6]=210;
    cout[7]=55;
    cout[8]=20;
    switch(diverschoix)
    {
     case 1:
     {
      int num;
      printf("Vous avez choisi la Scie a 210 ecus. Etes vous certain de votre choix? Les retours ne sont pas acceptes. Si oui entrez 1, si non 2.\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[6]++;
       coutTotal+=210;
      }
      printf("Le cout total de votre panier est de %d\n",coutTotal);
      break;
     }
     case 2:
     {
      int num;
      printf("Vous avez choisi la Corde a 55 ecus. Etes vous certain de votre choix? Les retours ne sont pas acceptes. Si oui entrez 1, si non 2.\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[7]++;
       coutTotal+=55;
      }
      printf("Le cout total de votre panier est de %d\n",coutTotal);
      break;
     }
     case 3:
     {
      int num;
      printf("Vous avez choisi le Sac de 2 metres a 20 ecus. Etes vous certain de votre choix? Les retours ne sont pas acceptes. Si oui entrez 1, si non 2.\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[8]++;
       coutTotal+=12800;
      }
      printf("Le cout total de votre panier est de %d\n",coutTotal);
      break;
     }
     default:{
      printf("Sortir de la categorie divers.\n");
      break;
     }
    }
    break;
   }
   default:
   {
    printf("Entrez un choix de categorie valide s'il vous plait.\n");
    break;
   }
  }
  printf("Le panier de %s \n",nom);
  printf("Article\tNom\t\t\tQuantite\t\t\tCout\n");
  for(i=0;i<9;i++)
  {
   if(a[i]!=0)
   {
    printf("%d\t%s\t\t%d\t\t\t%d\n",i,article[i],a[i],(cout[i]*a[i]));
   }
  }
  printf("Cout total\t\t\t\t\t%d\n",coutTotal);
  printf("Si vous souhaitez acheter autre chose entrez 1 pour ajouter un article\nAutre pour s'enfuir de la boutique\n");
  scanf("%d",&c);
 }
  if(c==1){
    printf("Entrez un article\n");
   }
       printf("Article dans le panier \n");
       printf("Article\tNom\t\t\tQuantite\t\tCout\n");
            for(i=0;i<9;i++)
      {
     if(a[i]!=0)
      {
    printf("%d\t%s\t\t%d\t\t%d\n",i,article[i],a[i],(cout[i]*a[i]));
      }
     }
        printf("Cout total\t\t\t\t\t%d\n",coutTotal);
        printf("Si vous souhaitez acheter autre chose entrez 1 pour ajouter un article\nAutre pour s'enfuir de la boutique\n");
     scanf("%d",&c);
  }
  
  while(c==1);
 printf("Le cout total de votre panier est de %d\n",coutTotal);
 printf("Merci de la visite, revenez si vous l'osez!\n",nom);
 
}