#include<stdio.h>
void main()
{
	float amount,result,pakistani_rupee,pound_sterling,dollar,riyal,dinar,yen,euro,swiss_franc,rupee,canadian_dollar,austrailian_dollar,lira,dirham,afghani,azerbaijan_manat,lari,iceland_krona,indonesia_rupiah,mexican_peso,omani_rial,thai_baht,argentine_peso,south_africa,spanish_euro,srilankan_rupee,uzbekistan_sum,vietnamese_dong,egyptian_pound,danish_kroner,albanian_lek,brazilian_real;    
	int choice;
	
	printf("\n\t--------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("\t==============================================================*CURRENCY CONVERTER*==========================================================\n");
	printf("\t--------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("\t*Following are the currencies with their choices that can be converted to any currency in the list below:\n");
	printf("\t _________________________________________\n");
	printf("\t|NO.|  CURRENCIES:                        |\n");
	printf("\t|---|-------------------------------------|\n");
	printf("\t|1. |  For Pakistani rupees               |\n");
	printf("\t|2. |  For US dollar                      |\n");
	printf("\t|3. |  For pound sterling                 |\n");
	printf("\t|4. |  For Dinar                          |\n");
	printf("\t|5. |  For Yen                            |\n");
	printf("\t|6. |  For Euro                           |\n");
	printf("\t|7. |  For Swiss Franc                    |\n");
	printf("\t|8. |  For riyal                          |\n");
	printf("\t|9. |  For Canadian Dollar                |\n");
	printf("\t|10.|  For Austrailian Dollar             |\n");
	printf("\t|11.|  For Lira                           |\n");
	printf("\t|12.|  For Dirham                         |\n");
	printf("\t|13.|  For Afghani                        |\n");
	printf("\t|14.|  For Azerbaijan manat               |\n");
	printf("\t|15.|  For Lari                           |\n");
	printf("\t|16.|  For Iceland Krona                  |\n");
	printf("\t|17.|  For Indonesia Rupiah               |\n");
	printf("\t|18.|  For Mexicam Peso                   |\n");
	printf("\t|19.|  For Omani Rial                     |\n");
	printf("\t|20.|  For Thai Baht                      |\n");
	printf("\t|___|_____________________________________|\n");
	printf("\n\t-------------------------------------------\n");
	
	printf("\tEnter your Choice : ");
	scanf("%d",&choice);
	printf("\t-------------------------------------------\n\n");
	printf("\tEnter amount : ");
	scanf("%f",&amount);
		
	printf("\t-------------------------------------------\n");
	
	switch(choice){                       
		case 1:                           //for rupee 
		dollar = amount / 207.58;
        printf("\n\t%.2f Rupee =  %.2f dollar", amount, dollar);
 
        pound_sterling = amount / 255.59;
        printf("\n\t%.2f Rupee =  %.2f Pound sterling", amount, pound_sterling);
 
        euro = amount / 220.10;
        printf("\n\t%.2f Rupee =  %.2f euro", amount, euro);
        
        riyal = amount / 55.53;
        printf("\n\t%.2f Rupee =  %.2f Riyal", amount, riyal);
        
        dinar = amount / 679.87;
        printf("\n\t%.2f Rupee =  %.2f Dinar", amount, dinar);
 
        yen = amount / 1.54;
        printf("\n\t%.2f Rupee =  %.2f Yen", amount, yen);
        
        swiss_franc = amount / 217.26;
        printf("\n\t%.2f Rupee =  %.2f Swiss franc", amount, swiss_franc);
 
        canadian_dollar = amount / 161.67;
        printf("\n\t%.2f Rupee =  %.2f Canadian dollar", amount, canadian_dollar);
 
        austrailian_dollar = amount / 144.82;
        printf("\n\t%.2f Rupee =  %.2f Austrailian Dollar", amount, austrailian_dollar);
        
        lira = amount / 12.33;
        printf("\n\t%.2f Rupee =  %.2f lira", amount, lira);
 
        dirham = amount / 56.74;
        printf("\n\t%.2f Rupee =  %.2f Dirham", amount, dirham);
 
        afghani= amount / 2.33;
        printf("\n\t%.2f Rupee =  %.2f Afghani", amount, afghani);
        
        azerbaijan_manat = amount / 122.59;
        printf("\n\t%.2f Rupee =  %.2f Azerbaijan manat", amount, azerbaijan_manat);
 
        lari = amount / 70.88;
        printf("\n\t%.2f Rupee =  %.2f lari", amount, lari);
 
        iceland_krona = amount / 1.57;
        printf("\n\t%.2f Rupee =  %.2f Iceland krona", amount, iceland_krona);
        
        indonesia_rupiah = amount * 71.16;
        printf("\n\t%.2f Rupee =  %.2f Indonesia Rupiah", amount, indonesia_rupiah);
 
        mexican_peso = amount / 10.49;
        printf("\n\t%.2f Rupee =  %.2f Mexian peso", amount, mexican_peso);
 
        omani_rial = amount / 541.21;
        printf("\n\t%.2f Rupee =  %.2f Omani rial", amount, omani_rial);
        
        thai_baht = amount / 5.88;
        printf("\n\t%.2f Rupee =  %.2f Thai baht", amount, thai_baht);
 
       
        break;
        
        case 2:                                //for us dollar
         pakistani_rupee=amount*207.58;
        printf("\n\t%.2f US dollar =  %.2f pakistani rupee", amount,pakistani_rupee );
        
        pound_sterling = amount / 1.23;
        printf("\n\t%.2f US dollar =  %.2f Pound sterling", amount, pound_sterling);
 
        euro = amount / 1.06 ;
        printf("\n\t%.2f US dollar =  %.2f euro", amount, euro);
        
        riyal = amount *3.75 ;
        printf("\n\t%.2f US dollar =  %.2f Riyal", amount, riyal);
        
        dinar = amount *1460.00;
        printf("\n\t%.2f US dollar =  %.2f Dinar", amount, dinar);
 
        yen = amount *135.21;
        printf("\n\t%.2f US dollar =  %.2f Yen", amount, yen);
        
        swiss_franc = amount / 1.04;
        printf("\n\t%.2f US dollar =  %.2f Swiss franc", amount, swiss_franc);
 
        canadian_dollar = amount *1.29;
        printf("\n\t%.2f US dollar =  %.2f Canadian dollar", amount, canadian_dollar);
 
        austrailian_dollar = amount *1.44;
        printf("\n\t%.2f US dollar =  %.2f Austrailian Dollar", amount, austrailian_dollar);
        
        lira = amount *16.89 ;
        printf("\n\t%.2f US dollar =  %.2f lira", amount, lira);
 
        dirham = amount *3.67;
        printf("\n\t%.2f US dollar =  %.2f Dirham", amount, dirham);
 
        afghani= amount *89.00;
        printf("\n\t%.2f US dollar =  %.2f Afghani", amount, afghani);
        
        azerbaijan_manat = amount *1.70;
        printf("\n\t%.2f US dollar =  %.2f Azerbaijan manat", amount, azerbaijan_manat);
 
        lari = amount *2.94;
        printf("\n\t%.2f US dollar =  %.2f lari", amount, lari);
 
        iceland_krona = amount *132.33;
        printf("\n\t%.2f US dollar =  %.2f Iceland krona", amount, iceland_krona);
        
        indonesia_rupiah = amount *14829.50;
        printf("\n\t%.2f US dollar =  %.2f Indonesia Rupiah", amount, indonesia_rupiah);
 
        mexican_peso = amount *19.87;
        printf("\n\t%.2f US dollar =  %.2f Mexian peso", amount, mexican_peso);
 
        omani_rial = amount /2.60;
        printf("\n\t%.2f US dollar =  %.2f Omani rial", amount, omani_rial);
        
        thai_baht = amount *35.43;
        printf("\n\t%.2f US dollar =  %.2f Thai baht", amount, thai_baht);
 
        
        break;
        
        case 3:                        //for pound sterling
        pakistani_rupee = amount *255.59;
        printf("\n\t%.2f Pound Sterling  =  %.2f Pakistani rupees", amount,pakistani_rupee );
        
        dollar = amount * 1.23;
        printf("\n\t%.2f Pound sterling  =  %.2f US dollar", amount, dollar);
 
        euro = amount * 1.16 ;
        printf("\n\t%.2f Pound sterling  =  %.2f euro", amount, euro);
        
        riyal = amount *4.60;
        printf("\n\t%.2f Pound sterling  =  %.2f Riyal", amount, riyal);
        
        dinar = amount /2.66;
        printf("\n\t%.2f Pound sterling  =  %.2f Dinar", amount, dinar);
 
        yen = amount *165.77;
        printf("\n\t%.2f Pound sterling  =  %.2f Yen", amount, yen);
        
        swiss_franc = amount *1.18;
        printf("\n\t%.2f Pound sterling  =  %.2f Swiss franc", amount, swiss_franc);
 
        canadian_dollar = amount *1.58;
        printf("\n\t%.2f Pound sterling  =  %.2f Canadian dollar", amount, canadian_dollar);
 
        austrailian_dollar = amount *1.77;
        printf("\n\t%.2f Pound sterling  =  %.2f Austrailian Dollar", amount, austrailian_dollar);
        
        lira = amount *20.77 ;
        printf("\n\t%.2f Pound sterling  =  %.2f lira", amount, lira);
 
        dirham = amount *4.50;
        printf("\n\t%.2f Pound sterling  =  %.2f Dirham", amount, dirham);
 
        afghani= amount *109.15;
        printf("\n\t%.2f pound sterling  =  %.2f Afghani", amount, afghani);
        
        azerbaijan_manat = amount *2.08;
        printf("\n\t%.2f Pound sterling  =  %.2f Azerbaijan manat", amount, azerbaijan_manat);
 
        lari = amount *3.61;
        printf("\n\t%.2f Pound sterling  =  %.2f lari", amount, lari);
 
        iceland_krona = amount *162.33;
        printf("\n\t%.2f Pound sterling  =  %.2f Iceland krona", amount, iceland_krona);
        
        indonesia_rupiah = amount *18187.64;
        printf("\n\t%.2f Pound sterling  =  %.2f Indonesia Rupiah", amount, indonesia_rupiah);
 
        mexican_peso = amount *24.36;
        printf("\n\t%.2f Pound sterling  =  %.2f Mexian peso", amount, mexican_peso);
 
        omani_rial = amount /2.12;
        printf("\n\t%.2f Pound sterling  =  %.2f Omani rial", amount, omani_rial);
        
        thai_baht = amount *43.45;
        printf("\n\t%.2f Pound sterling  =  %.2f Thai baht\n", amount, thai_baht);
 
        break;
        
        case 4:                        //for dinar
        	pakistani_rupee = amount *679.87;
        printf("\n\t%.2f dinar  =  %.2f Pakistani rupees", amount,pakistani_rupee );
        
        dollar = amount * 3.26;
        printf("\n\t%.2f dinar  =  %.2f US dollar", amount, dollar);
 
        euro = amount * 3.09 ;
        printf("\n\t%.2f dinar  =  %.2f euro", amount, euro);
        
        riyal = amount *12.24;
        printf("\n\t%.2f dinar  =  %.2f Riyal", amount, riyal);
        
        pound_sterling = amount *2.66;
        printf("\n\t%.2f dinar  =  %.2f pound sterling", amount, pound_sterling);
 
        yen = amount *441.10;
        printf("\n\t%.2f dinar  =  %.2f Yen", amount, yen);
        
        swiss_franc = amount * 3.13;
        printf("\n\t%.2f dinar  =  %.2f Swiss franc", amount, swiss_franc);
 
        canadian_dollar = amount *4.21;
        printf("\n\t%.2f dinar  =  %.2f Canadian dollar", amount, canadian_dollar);
 
        austrailian_dollar = amount *4.69;
        printf("\n\t%.2f dinar  =  %.2f Austrailian Dollar", amount, austrailian_dollar);
        
        lira = amount *55.09 ;
        printf("\n\t%.2f dinar  =  %.2f lira", amount, lira);
 
        dirham = amount *12.00;
        printf("\n\t%.2f dinar  =  %.2f Dirham", amount, dirham);
 
        afghani= amount *290.35;
        printf("\n\t%.2f dinar  =  %.2f Afghani", amount, afghani);
        
        azerbaijan_manat = amount *5.55;
        printf("\n\t%.2f dinar  =  %.2f Azerbaijan manat", amount, azerbaijan_manat);
 
        lari = amount *9.59;
        printf("\n\t%.2f dinar  =  %.2f lari", amount, lari);
 
        iceland_krona = amount *431.80;
        printf("\n\t%.2f dinar  =  %.2f Iceland krona", amount, iceland_krona);
        
        indonesia_rupiah = amount *48378.53;
        printf("\n\t%.2f dinar  =  %.2f Indonesia Rupiah", amount, indonesia_rupiah);
 
        mexican_peso = amount *64.81;
        printf("\n\t%.2f dinar  =  %.2f Mexian peso", amount, mexican_peso);
 
        omani_rial = amount *1.26;
        printf("\n\t%.2f dinar  =  %.2f Omani rial", amount, omani_rial);
        
        thai_baht = amount *115.58;
        printf("\n\t%.2f dinar  =  %.2f Thai baht", amount, thai_baht);
 
        break;
        
        case 5:                               //for yen
        yen = amount *1.54;
        printf("\n\t%.2f yen  =  %.2f Pakistani rupees", amount,yen );
        
        dollar = amount / 135.19;
        printf("\n\t%.2f yen  =  %.2f US dollar", amount, dollar);
 
        euro = amount / 142.71 ;
        printf("\n\t%.2f yen  =  %.2f euro", amount, euro);
        
        riyal = amount /36.02;
        printf("\n\t%.2f yen  =  %.2f Riyal", amount, riyal);
        
        dinar = amount /441.06;
        printf("\n\t%.2f yen  =  %.2f Dinar", amount, dinar);
 
        pound_sterling = amount /165.80;
        printf("\n\t%.2f yen  =  %.2f pound sterling", amount, pound_sterling);
        
        swiss_franc = amount / 140.93;
        printf("\n\t%.2f yen  =  %.2f Swiss franc", amount, swiss_franc);
 
        canadian_dollar = amount /104.79;
        printf("\n\t%.2f yen  =  %.2f Canadian dollar", amount, canadian_dollar);
 
        austrailian_dollar = amount /93.94;
        printf("\n\t%.2f yen  =  %.2f Austrailian Dollar", amount, austrailian_dollar);
        
        lira = amount /8.01 ;
        printf("\n\t%.2f yen  =  %.2f lira", amount, lira);
 
        dirham = amount /36.80;
        printf("\n\t%.2f yen  =  %.2f Dirham", amount, dirham);
 
        afghani= amount /1.52;
        printf("\n\t%.2f yen  =  %.2f Afghani", amount, afghani);
        
        azerbaijan_manat = amount /79.52;
        printf("\n\t%.2f yen  =  %.2f Azerbaijan manat", amount, azerbaijan_manat);
 
        lari = amount /45.98;
        printf("\n\t%.2f yen  =  %.2f lari", amount, lari);
 
        iceland_krona = amount /1.02;
        printf("\n\t%.2f yen  =  %.2f Iceland krona", amount, iceland_krona);
        
        indonesia_rupiah = amount *109.70;
        printf("\n\t%.2f yen  =  %.2f Indonesia Rupiah", amount, indonesia_rupiah);
 
        mexican_peso = amount /6.80;
        printf("\n\t%.2f yen  =  %.2f Mexian peso", amount, mexican_peso);
 
        omani_rial = amount /351.07;
        printf("\n\t%.2f yen  =  %.2f Omani rial", amount, omani_rial);
        
        thai_baht = amount /3.81;
        printf("\n\t%.2f yen  =  %.2f Thai baht", amount, thai_baht);
 
        break;
        
        case 6:                     //for euro
        	pakistani_rupee = amount *220.10;
        printf("\n\t%.2f euro  =  %.2f Pakistani rupees", amount,pakistani_rupee );
        
        dollar = amount * 1.06;
        printf("\n\t%.2f euro  =  %.2f US dollar", amount, dollar);
 
        pound_sterling = amount / 1.16 ;
        printf("\n\t%.2f euro  =  %.2f pound sterling", amount, pound_sterling);
        
        riyal = amount *3.96;
        printf("\n\t%.2f euro  =  %.2f Riyal", amount, riyal);
        
        dinar = amount /3.09;
        printf("\n\t%.2f euro  =  %.2f Dinar", amount, dinar);
 
        yen = amount *142.62;
        printf("\n\t%.2f euro  =  %.2f Yen", amount, yen);
        
        swiss_franc = amount * 1.01;
        printf("\n\t%.2f euro  =  %.2f Swiss franc", amount, swiss_franc);
 
        canadian_dollar = amount *1.36;
        printf("\n\t%.2f euro  =  %.2f Canadian dollar", amount, canadian_dollar);
 
        austrailian_dollar = amount *1.52;
        printf("\n\t%.2f euro  =  %.2f Austrailian Dollar", amount, austrailian_dollar);
        
        lira = amount *17.83 ;
        printf("\n\t%.2f euro  =  %.2f lira", amount, lira);
 
        dirham = amount *3.88;
        printf("\n\t%.2f euro  =  %.2f Dirham", amount, dirham);
 
        afghani= amount *93.99;
        printf("\n\t%.2f euro  =  %.2f Afghani", amount, afghani);
        
        azerbaijan_manat = amount *1.80;
        printf("\n\t%.2f euro  =  %.2f Azeryenbaijan manat", amount, azerbaijan_manat);
 
        lari = amount *3.10;
        printf("\n\t%.2f euro  =  %.2f lari", amount, lari);
 
        iceland_krona = amount *139.79;
        printf("\n\t%.2f euro  =  %.2f Iceland krona", amount, iceland_krona);
        
        indonesia_rupiah = amount *15661.73;
        printf("\n\t%.2f euro  =  %.2f Indonesia Rupiah", amount, indonesia_rupiah);
 
        mexican_peso = amount *20.97;
        printf("\n\t%.2f euro  =  %.2f Mexian peso", amount, mexican_peso);
 
        omani_rial = amount /2.46;
        printf("\n\t%.2f euro  =  %.2f Omani rial", amount, omani_rial);
        
        thai_baht = amount *37.42;
        printf("\n\t%.2f euro  =  %.2f Thai baht", amount, thai_baht);
 
        break;
        
        case 7:                   //for swiss franc
        pakistani_rupee = amount *217.26;
        printf("\n\t%.2f swiss franc  =  %.2f Pakistani rupees", amount,pakistani_rupee );
        
        dollar = amount * 1.04;
        printf("\n\t%.2f swiss franc  =  %.2f US dollar", amount, dollar);
 
        euro = amount / 1.01 ;
        printf("\n\t%.2f swiss franc  =  %.2f euro", amount, euro);
        
        riyal = amount *3.91;
        printf("\n\t%.2f swiss franc  =  %.2f Riyal", amount, riyal);
        
        dinar = amount /3.13;
        printf("\n\t%.2f swiss franc  =  %.2f Dinar", amount, dinar);
 
        yen = amount *140.96;
        printf("\n\t%.2f swiss franc  =  %.2f Yen", amount, yen);
        
        pound_sterling = amount / 1.18;
        printf("\n\t%.2f swiss franc  =  %.2f pound sterling", amount, pound_sterling);
 
        canadian_dollar = amount *1.34;
        printf("\n\t%.2f swiss franc  =  %.2f Canadian dollar", amount, canadian_dollar);
 
        austrailian_dollar = amount *1.50;
        printf("\n\t%.2f swiss franc  =  %.2f Austrailian Dollar", amount, austrailian_dollar);
        
        lira = amount *17.60 ;
        printf("\n\t%.2f swiss franc  =  %.2f lira", amount, lira);
 
        dirham = amount *3.83;
        printf("\n\t%.2f swiss franc  =  %.2f Dirham", amount, dirham);
 
        afghani= amount *92.79;
        printf("\n\t%.2f swiss franc  =  %.2f Afghani", amount, afghani);
        
        azerbaijan_manat = amount *1.77;
        printf("\n\t%.2f swiss franc  =  %.2f Azerbaijan manat", amount, azerbaijan_manat);
 
        lari = amount *3.07;
        printf("\n\t%.2f swiss franc  =  %.2f lari", amount, lari);
 
        iceland_krona = amount *137.99;
        printf("\n\t%.2f swiss franc  =  %.2f Iceland krona", amount, iceland_krona);
        
        indonesia_rupiah = amount *15460.24;
        printf("\n\t%.2f swiss franc  =  %.2f Indonesia Rupiah", amount, indonesia_rupiah);
 
        mexican_peso = amount *20.71;
        printf("\n\t%.2f swiss franc  =  %.2f Mexian peso", amount, mexican_peso);
 
        omani_rial = amount /2.49;
        printf("\n\t%.2f swiss franc  =  %.2f Omani rial", amount, omani_rial);
        
        thai_baht = amount *36.93;
        printf("\n\t%.2f swiss franc  =  %.2f Thai baht", amount, thai_baht);
 
        break;
        
        case 8:                          //for riyal
        	pakistani_rupee = amount *55.53;
        printf("\n\t%.2f riyal  =  %.2f Pakistani rupees", amount,pakistani_rupee );
        
        dollar = amount /3.57;
        printf("\n\t%.2f riyal  =  %.2f US dollar", amount, dollar);
 
        euro = amount /3.96 ;
        printf("\n\t%.2f riyal  =  %.2f euro", amount, euro);
        
        pound_sterling = amount /4.60;
        printf("\n\t%.2f riyal  =  %.2f pound sterling", amount, pound_sterling);
        
        dinar = amount /12.24;
        printf("\n\t%.2f riyal  =  %.2f Dinar", amount, dinar);
 
        yen = amount *36.03;
        printf("\n\t%.2f riyal  =  %.2f Yen", amount, yen);
        
        swiss_franc = amount / 3.91;
        printf("\n\t%.2f riyal  =  %.2f Swiss franc", amount, swiss_franc);
 
        canadian_dollar = amount /2.91;
        printf("\n\t%.2f riyal  =  %.2f Canadian dollar", amount, canadian_dollar);
 
        austrailian_dollar = amount /2.61;
        printf("\n\t%.2f riyal  =  %.2f Austrailian Dollar", amount, austrailian_dollar);
        
        lira = amount *4.50 ;
        printf("\n\t%.2f riyal  =  %.2f lira", amount, lira);
 
        dirham = amount /1.02;
        printf("\n\t%.2f riyal  =  %.2f Dirham", amount, dirham);
 
        afghani= amount *23.72;
        printf("\n\t%.2f riyal  =  %.2f Afghani", amount, afghani);
        
        azerbaijan_manat = amount /2.21;
        printf("\n\t%.2f riyal  =  %.2f Azerbaijan manat", amount, azerbaijan_manat);
 
        lari = amount /1.28;
        printf("\n\t%.2f riyal  =  %.2f lari", amount, lari);
 
        iceland_krona = amount *35.27;
        printf("\n\t%.2f riyal  =  %.2f Iceland krona", amount, iceland_krona);
        
        indonesia_rupiah = amount *3951.79;
        printf("\n\t%.2f riyal  =  %.2f Indonesia Rupiah", amount, indonesia_rupiah);
 
        mexican_peso = amount *5.29;
        printf("\n\t%.2f riyal  =  %.2f Mexian peso", amount, mexican_peso);
 
        omani_rial = amount /9.75;
        printf("\n\t%.2f riyal  =  %.2f Omani rial", amount, omani_rial);
        
        thai_baht = amount *9.44;
        printf("\n\t%.2f riyal  =  %.2f Thai baht", amount, thai_baht);
 
        break;
        
        case 9:                      //canadian dollar
        
        pakistani_rupee = amount *161.67;
        printf("\n\t%.2f canadian dollar  =  %.2f Pakistani rupees", amount,pakistani_rupee );
        
        dollar = amount /1.29;
        printf("\n\t%.2f canadian dollar  =  %.2f US dollar", amount, dollar);
 
        euro = amount / 1.36 ;
        printf("\n\t%.2f canadian dollar  =  %.2f euro", amount, euro);
        
        riyal = amount *2.91;
        printf("\n\t%.2f canadian dollar  =  %.2f Riyal", amount, riyal);
        
        dinar = amount /4.21;
        printf("\n\t%.2f canadian dollar  =  %.2f Dinar", amount, dinar);
 
        yen = amount *104.87;
        printf("\n\t%.2f canadian dollar  =  %.2f Yen", amount, yen);
        
        swiss_franc = amount / 1.34;
        printf("\n\t%.2f canadian dollar  =  %.2f Swiss franc", amount, swiss_franc);
 
        pound_sterling = amount /1.58;
        printf("\n\t%.2f canadian dollar  =  %.2f pound sterling", amount, pound_sterling);
 
        austrailian_dollar = amount *1.12;
        printf("\n\t%.2f canadian dollar  =  %.2f Austrailian Dollar", amount, austrailian_dollar);
        
        lira = amount *13.10 ;
        printf("\n\t%.2f canadian dollar  =  %.2f lira", amount, lira);
 
        dirham = amount *2.85;
        printf("\n\t%.2f canadian dollar  =  %.2f Dirham", amount, dirham);
 
        afghani= amount *69.04;
        printf("\n\t%.2f canadian dollar  =  %.2f Afghani", amount, afghani);
        
        azerbaijan_manat = amount *1.32;
        printf("\n\t%.2f canadian dollar  =  %.2f Azerbaijan manat", amount, azerbaijan_manat);
 
        lari = amount *2.28;
        printf("\n\t%.2f canadian dollar  =  %.2f lari", amount, lari);
 
        iceland_krona = amount *102.68;
        printf("\n\t%.2f canadian dollar  =  %.2f Iceland krona", amount, iceland_krona);
        
        indonesia_rupiah = amount *11503.99;
        printf("\n\t%.2f canadian dollar  =  %.2f Indonesia Rupiah", amount, indonesia_rupiah);
 
        mexican_peso = amount *15.41;
        printf("\n\t%.2f canadian dollar  =  %.2f Mexian peso", amount, mexican_peso);
 
        omani_rial = amount /3.35;
        printf("\n\t%.2f canadian dollar  =  %.2f Omani rial", amount, omani_rial);
        
        thai_baht = amount *27.48;
        printf("\n\t%.2f canadian dollar  =  %.2f Thai baht", amount, thai_baht);
 
        break;
        
        case 10:               //austrailian dollar
        
        pakistani_rupee = amount *144.82;
        printf("\n\t%.2f austrailian dollar  =  %.2f Pakistani rupees", amount,pakistani_rupee );
        
        dollar = amount /1.44;
        printf("\n\t%.2f austrailian dollar  =  %.2f US dollar", amount, dollar);
 
        euro = amount / 1.52 ;
        printf("\n\t%.2f austrailian dollar  =  %.2f euro", amount, euro);
        
        riyal = amount *2.61;
        printf("\n\t%.2f austrailian dollar  =  %.2f Riyal", amount, riyal);
        
        dinar = amount /4.70;
        printf("\n\t%.2f austrailian dollar  =  %.2f Dinar", amount, dinar);
 
        yen = amount *93.90;
        printf("\n\t%.2f austrailian dollar  =  %.2f Yen", amount, yen);
        
        swiss_franc = amount / 1.50;
        printf("\n\t%.2f austrailian dollar  =  %.2f Swiss franc", amount, swiss_franc);
 
        canadian_dollar = amount /1.12;
        printf("\n\t%.2f austrailian dollar  =  %.2f Canadian dollar", amount, canadian_dollar);
 
        pound_sterling = amount /1.77;
        printf("\n\t%.2f austrailian dollar  =  %.2f pound sterling", amount, pound_sterling);
        
        lira = amount *11.73 ;
        printf("\n\t%.2f austrailian dollar  =  %.2f lira", amount, lira);
 
        dirham = amount *2.55;
        printf("\n\t%.2f austrailian dollar  =  %.2f Dirham", amount, dirham);
 
        afghani= amount *61.85;
        printf("\n\t%.2f austrailian dollar  =  %.2f Afghani", amount, afghani);
        
        azerbaijan_manat = amount *1.18;
        printf("\n\t%.2f austrailian dollar  =  %.2f Azerbaijan manat", amount, azerbaijan_manat);
 
        lari = amount *2.04;
        printf("\n\t%.2f austrailian dollar  =  %.2f lari", amount, lari);
 
        iceland_krona = amount *91.98;
        printf("\n\t%.2f austrailian dollar  =  %.2f Iceland krona", amount, iceland_krona);
        
        indonesia_rupiah = amount *10304.95;
        printf("\n\t%.2f austrailian dollar  =  %.2f Indonesia Rupiah", amount, indonesia_rupiah);
 
        mexican_peso = amount *13.80;
        printf("\n\t%.2f austrailian dollar  =  %.2f Mexian peso", amount, mexican_peso);
 
        omani_rial = amount /3.74;
        printf("\n\t%.2f austrailian dollar  =  %.2f Omani rial", amount, omani_rial);
        
        thai_baht = amount *24.62;
        printf("\n\t%.2f austrailian dollar  =  %.2f Thai baht", amount, thai_baht);
 
        break;
        
        case 11:                     //for lira
        
        pakistani_rupee = amount *12.33;
        printf("\n\t%.2f lira  =  %.2f Pakistani rupees", amount,pakistani_rupee );
        
        dollar = amount / 16.90;
        printf("\n\t%.2f lira  =  %.2f US dollar", amount, dollar);
 
        euro = amount / 17.84 ;
        printf("\n\t%.2f lira  =  %.2f euro", amount, euro);
        
        riyal = amount /4.50;
        printf("\n\t%.2f lira  =  %.2f Riyal", amount, riyal);
        
        dinar = amount *86.40;
        printf("\n\t%.2f lira  =  %.2f Dinar", amount, dinar);
 
        yen = amount *8.00;
        printf("\n\t%.2f lira  =  %.2f Yen", amount, yen);
        
        swiss_franc = amount / 17.62;
        printf("\n\t%.2f lira  =  %.2f Swiss franc", amount, swiss_franc);
 
        canadian_dollar = amount /13.11;
        printf("\n\t%.2f lira  =  %.2f Canadian dollar", amount, canadian_dollar);
 
        austrailian_dollar = amount /11.74;
        printf("\n\t%.2f lira  =  %.2f Austrailian Dollar", amount, austrailian_dollar);
        
        pound_sterling = amount /20.72;
        printf("\n\t%.2f lira  =  %.2f pound sterling", amount, pound_sterling);
 
        dirham = amount /4.60;
        printf("\n\t%.2f lira  =  %.2f Dirham", amount, dirham);
 
        afghani= amount *5.27;
        printf("\n\t%.2f lira  =  %.2f Afghani", amount, afghani);
        
        azerbaijan_manat = amount /9.94;
        printf("\n\t%.2f lira  =  %.2f Azerbaijan manat", amount, azerbaijan_manat);
 
        lari = amount /5.75;
        printf("\n\t%.2f lira  =  %.2f lari", amount, lari);
 
        iceland_krona = amount *7.83;
        printf("\n\t%.2f lira  =  %.2f Iceland krona", amount, iceland_krona);
        
        indonesia_rupiah = amount *877.59;
        printf("\n\t%.2f lira  =  %.2f Indonesia Rupiah", amount, indonesia_rupiah);
 
        mexican_peso = amount *1.16;
        printf("\n\t%.2f lira  =  %.2f Mexian peso", amount, mexican_peso);
 
        omani_rial = amount /43.88;
        printf("\n\t%.2f lira  =  %.2f Omani rial", amount, omani_rial);
        
        thai_baht = amount *2.10;
        printf("\n\t%.2f lira  =  %.2f Thai baht", amount, thai_baht);
 
        break;
        
        case 12:                         //for dirham
        
        pakistani_rupee = amount *56.74;
        printf("\n\t%.2f dirham  =  %.2f Pakistani rupees", amount,pakistani_rupee );
        
        dollar = amount /3.67;
        printf("\n\t%.2f dirham  =  %.2f US dollar", amount, dollar);
 
        euro = amount /3.88 ;
        printf("\n\t%.2f dirham  =  %.2f euro", amount, euro);
        
        riyal = amount *1.02;
        printf("\n\t%.2f dirham  =  %.2f Riyal", amount, riyal);
        
        dinar = amount /11.98;
        printf("\n\t%.2f dirham  =  %.2f Dinar", amount, dinar);
 
        yen = amount *36.81;
        printf("\n\t%.2f dirham  =  %.2f Yen", amount, yen);
        
        swiss_franc = amount / 3.83;
        printf("\n\t%.2f dirham  =  %.2f Swiss franc", amount, swiss_franc);
 
        canadian_dollar = amount /2.85;
        printf("\n\t%.2f dirham  =  %.2f Canadian dollar", amount, canadian_dollar);
 
        austrailian_dollar = amount /2.55;
        printf("\n\t%.2f dirham  =  %.2f Austrailian Dollar", amount, austrailian_dollar);
        
        lira = amount *4.60 ;
        printf("\n\t%.2f dirham  =  %.2f lira", amount, lira);
 
        pound_sterling = amount /4.50;
        printf("\n\t%.2f dirham  =  %.2f pound sterling", amount, pound_sterling);
 
        afghani= amount *24.23;
        printf("\n\t%.2f dirham  =  %.2f Afghani", amount, afghani);
        
        azerbaijan_manat = amount /2.16;
        printf("\n\t%.2f dirham  =  %.2f Azerbaijan manat", amount, azerbaijan_manat);
 
        lari = amount /1.25;
        printf("\n\t%.2f dirham  =  %.2f lari", amount, lari);
 
        iceland_krona = amount *36.03;
        printf("\n\t%.2f dirham  =  %.2f Iceland krona", amount, iceland_krona);
        
        indonesia_rupiah = amount *4037.33;
        printf("\n\t%.2f dirham  =  %.2f Indonesia Rupiah", amount, indonesia_rupiah);
 
        mexican_peso = amount *5.41;
        printf("\n\t%.2f dirham  =  %.2f Mexian peso", amount, mexican_peso);
 
        omani_rial = amount /9.54;
        printf("\n\t%.2f dirham  =  %.2f Omani rial", amount, omani_rial);
        
        thai_baht = amount *9.65;
        printf("\n\t%.2f dirham  =  %.2f Thai baht", amount, thai_baht);
 
        break;
        
        case 13:                  //for afghani
        
        pakistani_rupee = amount *2.33;
        printf("\n\t%.2f afghani  =  %.2f Pakistani rupees", amount,pakistani_rupee );
        
        dollar = amount / 89.50;
        printf("\n\t%.2f afghani  =  %.2f US dollar", amount, dollar);
 
        euro = amount / 94.48 ;
        printf("\n\t%.2f afghani  =  %.2f euro", amount, euro);
        
        riyal = amount /23.85;
        printf("\n\t%.2f afghani  =  %.2f Riyal", amount, riyal);
        
        dinar = amount /292.00;
        printf("\n\t%.2f afghani  =  %.2f Dinar", amount, dinar);
 
        yen = amount *1.51;
        printf("\n\t%.2f afghani  =  %.2f Yen", amount, yen);
        
        swiss_franc = amount / 93.30;
        printf("\n\t%.2f afghani  =  %.2f Swiss franc", amount, swiss_franc);
 
        canadian_dollar = amount /69.42;
        printf("\n\t%.2f afghani  =  %.2f Canadian dollar", amount, canadian_dollar);
 
        austrailian_dollar = amount /62.19;
        printf("\n\t%.2f afghani  =  %.2f Austrailian Dollar", amount, austrailian_dollar);
        
        lira = amount /5.30 ;
        printf("\n\t%.2f afghani  =  %.2f lira", amount, lira);
 
        dirham = amount /24.37;
        printf("\n\t%.2f afghani  =  %.2f Dirham", amount, dirham);
 
        pound_sterling = amount *109.76;
        printf("\n\t%.2f afghani  =  %.2f pound sterling", amount, pound_sterling );
        
        azerbaijan_manat = amount /52.65;
        printf("\n\t%.2f afghani  =  %.2f Azerbaijan manat", amount, azerbaijan_manat);
 
        lari = amount /30.44;
        printf("\n\t%.2f afghani  =  %.2f lari", amount, lari);
 
        iceland_krona = amount *1.48;
        printf("\n\t%.2f afghani  =  %.2f Iceland krona", amount, iceland_krona);
        
        indonesia_rupiah = amount /166.62;
        printf("\n\t%.2f afghani  =  %.2f Indonesia Rupiah", amount, indonesia_rupiah);
 
        mexican_peso = amount /4.51;
        printf("\n\t%.2f afghani  =  %.2f Mexian peso", amount, mexican_peso);
 
        omani_rial = amount /232.42;
        printf("\n\t%.2f afghani  =  %.2f Omani rial", amount, omani_rial);
        
        thai_baht = amount /2.51;
        printf("\n\t%.2f afghani  =  %.2f Thai baht", amount, thai_baht);
 
        break;
        
        case 14:                             //for azerbaijan manat
        
        pakistani_rupee = amount *122.59;
        printf("\n\t%.2f azerbaijan manat  =  %.2f Pakistani rupees", amount,pakistani_rupee );
        
        dollar = amount / 1.70;
        printf("\n\t%.2f azerbaijan manat  =  %.2f US dollar", amount, dollar);
 
        euro = amount / 1.79 ;
        printf("\n\t%.2f azerbaijan manat  =  %.2f euro", amount, euro);
        
        riyal = amount *2.21;
        printf("\n\t%.2f azerbaijan manat  =  %.2f Riyal", amount, riyal);
        
        dinar = amount /5.55;
        printf("\n\t%.2f azerbaijan manat  =  %.2f Dinar", amount, dinar);
 
        yen = amount *79.54;
        printf("\n\t%.2f azerbaijan manat  =  %.2f Yen", amount, yen);
        
        swiss_franc = amount / 1.77;
        printf("\n\t%.2f azerbaijan manat  =  %.2f Swiss franc", amount, swiss_franc);
 
        canadian_dollar = amount /1.32;
        printf("\n\t%.2f azerbaijan manat  =  %.2f Canadian dollar", amount, canadian_dollar);
 
        austrailian_dollar = amount /1.18;
        printf("\n\t%.2f azerbaijan manat  =  %.2f Austrailian Dollar", amount, austrailian_dollar);
        
        lira = amount *9.93 ;
        printf("\n\t%.2f azerbaijan manat  =  %.2f lira", amount, lira);
 
        dirham = amount *2.16;
        printf("\n\t%.2f azerbaijan manat  =  %.2f Dirham", amount, dirham);
 
        afghani= amount *52.35;
        printf("\n\t%.2f azerbaijan manat  =  %.2f Afghani", amount, afghani);
        
        pound_sterling = amount /2.08;
        printf("\n\t%.2f azerbaijan manat  =  %.2f pound sterling", amount, pound_sterling);
 
        lari = amount *1.73;
        printf("\n\t%.2f azerbaijan manat  =  %.2f lari", amount, lari);
 
        iceland_krona = amount *77.86;
        printf("\n\t%.2f azerbaijan manat  =  %.2f Iceland krona", amount, iceland_krona);
        
        indonesia_rupiah = amount *8723.24;
        printf("\n\t%.2f azerbaijan manat  =  %.2f Indonesia Rupiah", amount, indonesia_rupiah);
 
        mexican_peso = amount *11.69;
        printf("\n\t%.2f azerbaijan manat  =  %.2f Mexian peso", amount, mexican_peso);
 
        omani_rial = amount /4.41;
        printf("\n\t%.2f azerbaijan manat  =  %.2f Omani rial", amount, omani_rial);
        
        thai_baht = amount *20.84;
        printf("\n\t%.2f azerbaijan manat  =  %.2f Thai baht", amount, thai_baht);
 
        break;
        
        case 15:                               // for lari
        
        pakistani_rupee = amount *70.88;
        printf("\n\t%.2f lari  =  %.2f Pakistani rupees", amount,pakistani_rupee );
        
        dollar = amount / 2.94;
        printf("\n\t%.2f lari  =  %.2f US dollar", amount, dollar);
 
        euro = amount / 3.10;
        printf("\n\t%.2f lari  =  %.2f euro", amount, euro);
        
        riyal = amount *1.28;
        printf("\n\t%.2f lari  =  %.2f Riyal", amount, riyal);
        
        dinar = amount /9.59;
        printf("\n\t%.2f lari  =  %.2f Dinar", amount, dinar);
 
        yen = amount *45.99;
        printf("\n\t%.2f lari  =  %.2f Yen", amount, yen);
        
        swiss_franc = amount / 3.07;
        printf("\n\t%.2f lari  =  %.2f Swiss franc", amount, swiss_franc);
 
        canadian_dollar = amount /2.298;
        printf("\n\t%.2f lari  =  %.2f Canadian dollar", amount, canadian_dollar);
 
        austrailian_dollar = amount /2.04;
        printf("\n\t%.2f lari  =  %.2f Austrailian Dollar", amount, austrailian_dollar);
        
        lira = amount *5.74 ;
        printf("\n\t%.2f lari  =  %.2f lira", amount, lira);
 
        dirham = amount *1.25;
        printf("\n\t%.2f lari  =  %.2f Dirham", amount, dirham);
 
        afghani= amount *30.27;
        printf("\n\t%.2f lari  =  %.2f Afghani", amount, afghani);
        
        azerbaijan_manat = amount /1.73;
        printf("\n\t%.2f lari  =  %.2f Azerbaijan manat", amount, azerbaijan_manat);
 
        pound_sterling = amount /3.61;
        printf("\n\t%.2f lari  =  %.2f pound sterling", amount, pound_sterling);
 
        iceland_krona = amount *45.02;
        printf("\n\t%.2f lari  =  %.2f Iceland krona", amount, iceland_krona);
        
        indonesia_rupiah = amount *5044.05;
        printf("\n\t%.2f lari  =  %.2f Indonesia Rupiah", amount, indonesia_rupiah);
 
        mexican_peso = amount *6.76;
        printf("\n\t%.2f lari  =  %.2f Mexian peso", amount, mexican_peso);
 
        omani_rial = amount /7.64;
        printf("\n\t%.2f lari  =  %.2f Omani rial", amount, omani_rial);
        
        thai_baht = amount *12.05;
        printf("\n\t%.2f lari  =  %.2f Thai baht", amount, thai_baht);
 
        break;
        
        case 16:                 //for iceland krona
        
        pakistani_rupee = amount *1.57;
        printf("\n\t%.2f iceland krona  =  %.2f Pakistani rupees", amount,pakistani_rupee );
        
        dollar = amount /132.36;
        printf("\n\t%.2f iceland krona  =  %.2f US dollar", amount, dollar);
 
        euro = amount /139.95;
        printf("\n\t%.2f iceland krona  =  %.2f euro", amount, euro);
        
        riyal = amount /35.33;
        printf("\n\t%.2f iceland krona  =  %.2f Riyal", amount, riyal);
        
        dinar = amount /432.54;
        printf("\n\t%.2f iceland krona  =  %.2f Dinar", amount, dinar);
 
        yen = amount *1.02;
        printf("\n\t%.2f iceland krona  =  %.2f Yen", amount, yen);
        
        swiss_franc = amount / 138.21;
        printf("\n\t%.2f iceland krona  =  %.2f Swiss franc", amount, swiss_franc);
 
        canadian_dollar = amount /102.83;
        printf("\n\t%.2f iceland krona  =  %.2f Canadian dollar", amount, canadian_dollar);
 
        austrailian_dollar = amount /92.13;
        printf("\n\t%.2f iceland krona  =  %.2f Austrailian Dollar", amount, austrailian_dollar);
        
        lira = amount /7.85 ;
        printf("\n\t%.2f iceland krona  =  %.2f lira", amount, lira);
 
        dirham = amount *36.09;
        printf("\n\t%.2f iceland krona  =  %.2f Dirham", amount, dirham);
 
        afghani= amount /1.49;
        printf("\n\t%.2f iceland krona  =  %.2f Afghani", amount, afghani);
        
        azerbaijan_manat = amount /77.98;
        printf("\n\t%.2f iceland krona  =  %.2f Azerbaijan manat", amount, azerbaijan_manat);
 
        lari = amount /45.09;
        printf("\n\t%.2f iceland krona  =  %.2f lari", amount, lari);
 
        pound_sterling = amount /162.59;
        printf("\n\t%.2f iceland krona  =  %.2f pound sterling", amount, pound_sterling);
        
        indonesia_rupiah = amount *111.86;
        printf("\n\t%.2f iceland krona  =  %.2f Indonesia Rupiah", amount, indonesia_rupiah);
 
        mexican_peso = amount /6.67;
        printf("\n\t%.2f iceland krona  =  %.2f Mexian peso", amount, mexican_peso);
 
        omani_rial = amount /344.28;
        printf("\n\t%.2f iceland krona  =  %.2f Omani rial", amount, omani_rial);
        
        thai_baht = amount /3.74;
        printf("\n\t%.2f iceland krona  =  %.2f Thai baht", amount, thai_baht);
 
        break;
        
        case 17:                         // for indonesia rupiah
        
        pakistani_rupee = amount/ 71.16;
        printf("\n\t%.2f indonesia rupiah  =  %.6f Pakistani rupees", amount,pakistani_rupee );
        
        dollar = amount / 14829.50;
        printf("\n\t%.2f Pindonesia rupiah =  %.6f US dollar", amount, dollar);
 
        euro = amount / 15655.32 ;
        printf("\n\t%.2f indonesia rupiah  =  %.6f euro", amount, euro);
        
        riyal = amount /3951.79;
        printf("\n\t%.2f indonesia rupiah  =  %.6f Riyal", amount, riyal);
        
        dinar = amount /48383.36;
        printf("\n\t%.2f indonesia rupiah  =  %.6f Dinar", amount, dinar);
 
        yen = amount /109.68;
        printf("\n\t%.2f indonesia rupiah  =  %.6f Yen", amount, yen);
        
        swiss_franc = amount / 15485.15;
        printf("\n\t%.2f indonesia rupiah  =  %.6f Swiss franc", amount, swiss_franc);
 
        canadian_dollar = amount /11503.09;
        printf("\n\t%.2f indonesia rupiah =  %.6f Canadian dollar", amount, canadian_dollar);
 
        austrailian_dollar = amount /10305.48;
        printf("\n\t%.2f indonesia rupiah  =  %.6f Austrailian Dollar", amount, austrailian_dollar);
        
        lira = amount /878.20 ;
        printf("\n\t%.2f indonesia rupiah  =  %.6f lira", amount, lira);
 
        dirham = amount /4037.33;
        printf("\n\t%.2f indonesia rupiah  =  %.6f Dirham", amount, dirham);
 
        afghani= amount /166.62;
        printf("\n\t%.2f indonesia rupiah  =  %.6f Afghani", amount, afghani);
        
        azerbaijan_manat = amount /8723.24;
        printf("\n\t%.2f indonesia rupiah  =  %.6f Azerbaijan manat", amount, azerbaijan_manat);
 
        lari = amount /5044.05;
        printf("\n\t%.2f indonesia rupiah  =  %.6f lari", amount, lari);
 
        iceland_krona = amount /112.04;
        printf("\n\t%.2f indonesia rupiah  =  %.6f Iceland krona", amount, iceland_krona);
        
        pound_sterling = amount /18187.64;
        printf("\n\t%.2f indonesia rupiah  =  %.6f pound sterling", amount, pound_sterling);
 
        mexican_peso = amount /746.48;
        printf("\n\t%.2f indonesia rupiah  =  %.6f Mexian peso", amount, mexican_peso);
 
        omani_rial = amount /38511.53;
        printf("\n\t%.2f indonesia rupiah  =  %.6f Omani rial", amount, omani_rial);
        
        thai_baht = amount /418.58;
        printf("\n\t%.2f indonesia rupiah  =  %.6f Thai baht", amount, thai_baht);
 
        break;
        
        case 18:                       // for mexican peso
        
        pakistani_rupee = amount *10.49;
        printf("\n\t%.2f mexican peso  =  %.2f Pakistani rupees", amount,pakistani_rupee );
        
        dollar = amount / 19.87;
        printf("\n\t%.2f mexican peso  =  %.2f US dollar", amount, dollar);
 
        euro = amount / 20.97 ;
        printf("\n\t%.2f mexican peso  =  %.2f euro", amount, euro);
        
        riyal = amount /5.29;
        printf("\n\t%.2f mexican peso  =  %.2f Riyal", amount, riyal);
        
        dinar = amount /64.82;
        printf("\n\t%.2f mexican peso  =  %.2f Dinar", amount, dinar);
 
        yen = amount *6.81;
        printf("\n\t%.2f mexican peso  =  %.2f Yen", amount, yen);
        
        swiss_franc = amount / 20.71;
        printf("\n\t%.2f mexican peso  =  %.2f Swiss franc", amount, swiss_franc);
 
        canadian_dollar = amount /15.41;
        printf("\n\t%.2f mexican peso  =  %.2f Canadian dollar", amount, canadian_dollar);
 
        austrailian_dollar = amount /13.81;
        printf("\n\t%.2f mexican peso  =  %.2f Austrailian Dollar", amount, austrailian_dollar);
        
        lira = amount /1.18 ;
        printf("\n\t%.2f mexican peso  =  %.2f lira", amount, lira);
 
        dirham = amount /5.41;
        printf("\n\t%.2f mexican peso  =  %.2f Dirham", amount, dirham);
 
        afghani= amount *4.48;
        printf("\n\t%.2f mexican peso  =  %.2f Afghani", amount, afghani);
        
        azerbaijan_manat = amount /11.69;
        printf("\n\t%.2f mexican peso  =  %.2f Azerbaijan manat", amount, azerbaijan_manat);
 
        lari = amount /6.76;
        printf("\n\t%.2f mexican peso  =  %.2f lari", amount, lari);
 
        iceland_krona = amount *6.66;
        printf("\n\t%.2f mexican peso  =  %.2f Iceland krona", amount, iceland_krona);
        
        indonesia_rupiah = amount *746.48;
        printf("\n\t%.2f mexican peso  =  %.2f Indonesia Rupiah", amount, indonesia_rupiah);
 
        pound_sterling = amount /24.36;
        printf("\n\t%.2f mexican peso  =  %.2f pound sterling", amount, pound_sterling);
 
        omani_rial = amount /51.59;
        printf("\n\t%.2f mexican peso  =  %.2f Omani rial", amount, omani_rial);
        
        thai_baht = amount *1.78;
        printf("\n\t%.2f mexican peso  =  %.2f Thai baht", amount, thai_baht);
 
        break;
        
        case 19:                 //for omani rial
        
        pakistani_rupee = amount *541.21;
        printf("\n\t%.2f omani rial  =  %.2f Pakistani rupees", amount,pakistani_rupee );
        
        dollar = amount *2.60;
        printf("\n\t%.2f omani rial  =  %.2f US dollar", amount, dollar);
 
        euro = amount * 2.46 ;
        printf("\n\t%.2f omani rial  =  %.2f euro", amount, euro);
        
        riyal = amount *9.75;
        printf("\n\t%.2f omani rial  =  %.2f Riyal", amount, riyal);
        
        dinar = amount /1.26;
        printf("\n\t%.2f omani rial  =  %.2f Dinar", amount, dinar);
 
        yen = amount *351.14;
        printf("\n\t%.2f omani rial  =  %.2f Yen", amount, yen);
        
        swiss_franc = amount * 2.49;
        printf("\n\t%.2f omani rial  =  %.2f Swiss franc", amount, swiss_franc);
 
        canadian_dollar = amount *3.35;
        printf("\n\t%.2f omani rial  =  %.2f Canadian dollar", amount, canadian_dollar);
 
        austrailian_dollar = amount *3.74;
        printf("\n\t%.2f omani rial  =  %.2f Austrailian Dollar", amount, austrailian_dollar);
        
        lira = amount *43.85 ;
        printf("\n\t%.2f omani rial  =  %.2f lira", amount, lira);
 
        dirham = amount *9.54;
        printf("\n\t%.2f omani rial  =  %.2f Dirham", amount, dirham);
 
        afghani= amount *231.13;
        printf("\n\t%.2f omani rial  =  %.2f Afghani", amount, afghani);
        
        azerbaijan_manat = amount *4.41;
        printf("\n\t%.2f omani rial  =  %.2f Azerbaijan manat", amount, azerbaijan_manat);
 
        lari = amount *7.64;
        printf("\n\t%.2f omani rial  =  %.2f lari", amount, lari);
 
        iceland_krona = amount *343.74;
        printf("\n\t%.2f omani rial  =  %.2f Iceland krona", amount, iceland_krona);
        
        indonesia_rupiah = amount *38512.05;
        printf("\n\t%.2f omani rial  =  %.2f Indonesia Rupiah", amount, indonesia_rupiah);
 
        mexican_peso = amount *51.59;
        printf("\n\t%.2f omani rial  =  %.2f Mexian peso", amount, mexican_peso);
 
        pound_sterling = amount *2.12;
        printf("\n\t%.2f omani rial  =  %.2f pound sterling", amount, pound_sterling);
        
        thai_baht = amount *92.01;
        printf("\n\t%.2f omani rial  =  %.2f Thai baht", amount, thai_baht);
 
        break;
        
        case 20:                   //for thai baht
        
        pakistani_rupee = amount *5.88;
        printf("\n\t%.2f thai baht  =  %.2f Pakistani rupees", amount,pakistani_rupee );
        
        dollar = amount /35.43;
        printf("\n\t%.2f thai baht  =  %.2f US dollar", amount, dollar);
 
        euro = amount /37.40 ;
        printf("\n\t%.2f thai baht  =  %.2f euro", amount, euro);
        
        riyal = amount /9.44;
        printf("\n\t%.2f thai baht  =  %.2f Riyal", amount, riyal);
        
        dinar = amount /115.59;
        printf("\n\t%.2f thai baht  =  %.2f Dinar", amount, dinar);
 
        yen = amount *3.81;
        printf("\n\t%.2f thai baht  =  %.2f Yen", amount, yen);
        
        swiss_franc = amount / 36.93;
        printf("\n\t%.2f thai baht  =  %.2f Swiss franc", amount, swiss_franc);
 
        canadian_dollar = amount /27.48;
        printf("\n\t%.2f thai baht  =  %.2f Canadian dollar", amount, canadian_dollar);
 
        austrailian_dollar = amount /24.62;
        printf("\n\t%.2f thai baht  =  %.2f Austrailian Dollar", amount, austrailian_dollar);
        
        lira = amount /2.10 ;
        printf("\n\t%.2f thai baht  =  %.2f lira", amount, lira);
 
        dirham = amount /9.65;
        printf("\n\t%.2f thai baht  =  %.2f Dirham", amount, dirham);
 
        afghani= amount *2.51;
        printf("\n\t%.2f thai baht  =  %.2f Afghani", amount, afghani);
        
        azerbaijan_manat = amount /20.84;
        printf("\n\t%.2f thai baht  =  %.2f Azerbaijan manat", amount, azerbaijan_manat);
 
        lari = amount /12.05;
        printf("\n\t%.2f thai baht  =  %.2f lari", amount, lari);
 
        iceland_krona = amount *3.74;
        printf("\n\t%.2f thai baht  =  %.2f Iceland krona", amount, iceland_krona);
        
        indonesia_rupiah = amount *418.58;
        printf("\n\t%.2f thai baht  =  %.2f Indonesia Rupiah", amount, indonesia_rupiah);
 
        mexican_peso = amount /1.78;
        printf("\n\t%.2f thai baht  =  %.2f Mexian peso", amount, mexican_peso);
 
        omani_rial = amount /92.00;
        printf("\n\t%.2f thai baht  =  %.2f Omani rial", amount, omani_rial);
        
        pound_sterling= amount /43.45;
        printf("\n\t%.2f Thai baht  =  %.2f pound sterling", amount, pound_sterling);
 
        break;
        
        default:
        	printf("\n\t-------------*INVALID CURRENCY*------------"); 
        
       
	}
}
