// PROGRAM COFFEE SHOP
// ARDENA AFIF 'DEVELOPER'
// UNIVERSITY OF DARUSSALAM GONTOR

#include <iostream>
#include <iomanip>

using namespace std;


// User memilih menu yang akan dibuka
int judul() {
	
	int pilihan;
		
		cout<<" ====================================================";cout<<endl;		
	    cout<<" +\t\tProgram Coffee Shop\t\t    +";cout<<endl;	    
	    cout<<" +\t\t    Ardena Coffee\t\t    +";cout<<endl;	    
	    cout<<" +\t\t     Purwokerto\t\t\t    +"<<endl;
		cout<<" ====================================================";cout<<endl; cout<<endl;
}


//user Memilih Pesanan
void pemesanan() {
	int item, pil, sing, milk, espresso;
	
	cout<<" ===================================================\n";
	cout<<" |\t\t Daftar Menu Kopi\t\t   |\n";
	cout<<" ===================================================\n";
	
	cout<<" ===> 1. Singnature\n";
	cout<<" ===> 2. MilkShake / Boba\n";
	cout<<" ===> 3. Espresso Based\n";
	cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	
	cout<<" Silahkan Pilih (1 - 3) : "; cin>>pil;
	cout<<endl<<endl;
		
		system("cls");
		
	switch(pil){
		case 1 :
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" |\t\tSingnature\t\t |\n";
			cout<<" =========================================\n";
			
			cout<<" ==> 1. Arenga Pinnata \t\t 9K\n ==> 2. Habiscus S\t\t10K\n";
			cout<<" ==> 3. Citrus X Limon\t\t10K\n ==> 4. Calamellus\t\t12K\n";
			cout<<" ==> 5. Cucumis Melon\t\t10K\n ==> 6. Citrus H2O\t\t10K\n";
			cout<<" ==> 7. V. Planifolia\t\t10K\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" Silahkan Pilih (1 - 7) : "; cin>>sing;
			
			break;
			
		case 2 :
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" |\t     MilkShake / Boba\t\t |\n";
			cout<<" =========================================\n";
			
			cout<<" \t\t\tMilkShake    Boba\n";
			cout<<" \t\t\t---------    -----\n";
			
			cout<<" => 1. Nira\t\t   8K\t      10K\n";
			cout<<" => 2. Taro\t\t   8K\t      10K\n";
			cout<<" => 3. Vanilla\t\t   8K\t      10K\n";
			cout<<" => 4. Matca\t\t   8K\t      10K\n";
			cout<<" => 5. Redvelvet\t   8K\t      10K\n";
			cout<<" => 6. Dark Chocolate\t   8K\t      10K\n";
			cout<<" => 7. Bubble Gum\t   8K\t      10K\n";
			cout<<" => 8. Salted Caramel\t   8K\t      10K\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" Silahkan Pilih (1 - 8) : "; cin>>milk;
			
			break;
		
		case 3 :
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" |\t     Espresso Based\t\t |\n";
			cout<<" =========================================\n";
			
			cout<<" \t\t\t   Hot        Ice\n";
			cout<<" \t\t\t  -----      -----\n";
			
			cout<<" => 1. Americano\t   8K\t      10K\n";
			cout<<" => 2. Long Black\t   8K\t      10K\n";
			cout<<" => 3. Supresso\t\t   8K\t      10K\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" Silahkan Pilih (1 - 3) : "; cin>>espresso;
			
			break;
			
		default :
			cout<<endl;
			cout<<" ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
			cout<<"  Maaf, Anda Salah Memasukkan\n";
			cout<<"      Silahkan Coba Lagi !\n";
			cout<<" =============================\n";
	}
}


//user Mengecek Sisa Item
void sisaItem() {
	int item, pil, sing, milk, espresso, angka;
	
	cout<<" ===================================================\n";
	cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
	cout<<" ===================================================\n";
	
	cout<<" ===> 1. Singnature\n";
	cout<<" ===> 2. MilkShake / Boba\n";
	cout<<" ===> 3. Espresso Based\n";
	cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	
	cout<<" Silahkan Pilih (1 - 3) : "; cin>>pil;
	cout<<endl<<endl;
	
		system("cls");
	
	switch(pil){
		case 1 :
			cout<<" ===================================================\n";
			cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
			cout<<" ===================================================\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" |\t\tSingnature\t\t |\n";
			cout<<" =========================================\n";
			
			cout<<" ==> 1. Arenga Pinnata \t\t 9K\n ==> 2. Habiscus S\t\t10K\n";
			cout<<" ==> 3. Citrus X Limon\t\t10K\n ==> 4. Calamellus\t\t12K\n";
			cout<<" ==> 5. Cucumis Melon\t\t10K\n ==> 6. Citrus H2O\t\t10K\n";
			cout<<" ==> 7. V. Planifolia\t\t10K\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" Silahkan Pilih (1 - 7) : "; cin>>sing;
			
			system("cls");
			if(sing == 1){ //pilihan ke-1
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Arenga Pinnata sebanyak 30 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Kopi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pemesanan Kopi  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 30 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa Kopi   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 	   
			} 
			
			else if (sing == 2){ //pilihan ke-2
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Habiscus S sebanyak 30 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Kopi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pemesanan Kopi  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 30 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa Kopi   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			} 
			
			else if (sing == 3){ //pilihan ke-3
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Citrus X Limon sebanyak 30 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Kopi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pemesanan Kopi  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 30 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa Kopi   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if (sing == 4){ //pilihan ke-4
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Calamellus sebanyak 30 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Kopi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pemesanan Kopi  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 30 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa Kopi   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if (sing == 5){ //pilihan ke-5
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Cucumis Melon sebanyak 30 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Kopi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pemesanan Kopi  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 30 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa Kopi   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if (sing == 6){ //pilihan ke-6
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Citrus H2O sebanyak 30 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Kopi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pemesanan Kopi  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 30 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa Kopi   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if (sing == 7){ //pilihan ke-7
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah V. Planifolia sebanyak 30 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Kopi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pemesanan Kopi  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 30 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa Kopi   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			} 
			
			else {
				cout<<endl;
				cout<<" ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
				cout<<"  Maaf, Anda Salah Memasukkan\n";
				cout<<"      Silahkan Coba Lagi !\n";
				cout<<" =============================\n";
			}			
			break;
			
			
		case 2 :
			
			cout<<" ===================================================\n";
			cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
			cout<<" ===================================================\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" |\t     MilkShake / Boba\t\t |\n";
			cout<<" =========================================\n";
			
			cout<<" \t\t\tMilkShake    Boba\n";
			cout<<" \t\t\t---------    -----\n";
			
			cout<<" => 1. Nira\t\t   8K\t      10K\n";
			cout<<" => 2. Taro\t\t   8K\t      10K\n";
			cout<<" => 3. Vanilla\t\t   8K\t      10K\n";
			cout<<" => 4. Matca\t\t   8K\t      10K\n";
			cout<<" => 5. Redvelvet\t   8K\t      10K\n";
			cout<<" => 6. Dark Chocolate\t   8K\t      10K\n";
			cout<<" => 7. Bubble Gum\t   8K\t      10K\n";
			cout<<" => 8. Salted Caramel\t   8K\t      10K\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" Silahkan Pilih (1 - 8) : "; cin>>milk;
			
			system("cls");
			
			if(milk == 1) { //Pilihan ke-1
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Nira sebanyak 50 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Kopi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pemesanan Kopi  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 50 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa Kopi   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if(milk == 2) { //Pilihan ke-2
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Taro sebanyak 50 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Kopi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pemesanan Kopi  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 50 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa Kopi   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if(milk == 3) { //Pilihan ke-3
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Vanilla sebanyak 50 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Kopi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pemesanan Kopi  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 50 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa Kopi   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if(milk == 4) { //Pilihan ke-4
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Matca sebanyak 50 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Kopi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pemesanan Kopi  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 50 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa Kopi   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if(milk == 5) { //Pilihan ke-5
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Redvelvet sebanyak 50 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Kopi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pemesanan Kopi  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 50 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa Kopi   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if(milk == 6) { //Pilihan ke-6
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Dark Chocolate sebanyak 50 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Kopi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pemesanan Kopi  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 50 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa Kopi   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if(milk == 7) { //Pilihan ke-7
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Bubble Gum sebanyak 50 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Kopi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pemesanan Kopi  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 50 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa Kopi   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if(milk == 8) { //Pilihan ke-8
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Salted Caramel sebanyak 50 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Kopi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pemesanan Kopi  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 50 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa Kopi   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else {
				cout<<endl;
				cout<<" ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
				cout<<"  Maaf, Anda Salah Memasukkan\n";
				cout<<"      Silahkan Coba Lagi !\n";
				cout<<" =============================\n";
			}
			break;
		
		
		
		case 3 :
			
			cout<<" ===================================================\n";
			cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
			cout<<" ===================================================\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" |\t     Espresso Based\t\t |\n";
			cout<<" =========================================\n";
			
			cout<<" \t\t\t   Hot        Ice\n";
			cout<<" \t\t\t  -----      -----\n";
			
			cout<<" => 1. Americano\t   8K\t      10K\n";
			cout<<" => 2. Long Black\t   8K\t      10K\n";
			cout<<" => 3. Supresso\t\t   8K\t      10K\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" Silahkan Pilih (1 - 3) : "; cin>>espresso;
			
			system("cls");
			
			if (espresso == 1) { //Pilihan ke-1
				
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Americano sebanyak 45 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Kopi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pemesanan Kopi  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 45 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa Kopi   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if (espresso == 2){ //Pilihan ke-2
			
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Long Black sebanyak 45 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Kopi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pemesanan Kopi  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 45 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa Kopi   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl;
			}
			
			else if (espresso == 3){ //Pilihan ke-3
			
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Kopi\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Supresso sebanyak 45 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Kopi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pemesanan Kopi  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 45 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa Kopi   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl;
			}
			break;
			
		default :
			cout<<endl;
			cout<<" ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
			cout<<"  Maaf, Anda Salah Memasukkan\n";
			cout<<"      Silahkan Coba Lagi !\n";
			cout<<" =============================\n";
	}
}


//Keluar Program
string keluar() {
	cout<<endl;
	cout<<"\tKeluar dari Program"<<endl<<endl;
		
	cout<<" ===================================\n";
	cout<<" |  Terima Kasih Atas Kunjungannya |\n";
	cout<<" ===================================\n";
		
}



main (){
	
	int pilihan;
	char status;
	
		do{
		
		judul();
	    
		cout<<"\t\t  MENU UTAMA\n";		 
		cout<<"\t---------------------------------"<<endl;	
		cout<<"\t| 1. Pemesanan Item\t\t|"<<endl;
		cout<<"\t| 2. Cek Sisa Item\t\t|"<<endl;
		cout<<"\t| 3. Keluar\t\t\t|"<<endl;		
	    cout<<"\t---------------------------------"<<endl;
	    cout<<" ===================================================="<<endl;
	    cout<<endl;
	    cout<<" Masukan Pilihan Anda (1-3) : ";cin>>pilihan;
	    cout<<endl;		
		
		system("cls");
		
		switch(pilihan){
	    	case 1 :
	    		system("cls");
	    		pemesanan();
	    		break;
	    	case 2 :
	    		sisaItem();
	    		break;
	    		system("cls");
	    	case 3 :
	    		keluar();
	    		break;
				system("cls");
			default :
				cout<<endl;
				cout<<" ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
				cout<<"  Maaf, Anda Salah Memasukkan\n";
				cout<<"      Silahkan Coba Lagi !\n";
				cout<<" =============================\n";
		} 
		
		
		//User memilih untuk kembali atau keluar program
		cout<<endl<<endl;
		cout<<" ~> Apakah Anda Yakin Ingin Keluar ? <~\n\n";
		cout<<" ============================\n";
		cout<<" Kembali ke Menu Utama\t[N] \n";
		cout<<" Keluar Program\t\t[Y] \n";
		cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	
		cout<<" Silahkan Pilih [Y/N] : ";
		cin >>status;
			
		cout<<endl;
		system("cls");
			
		}while (status == 'N'|| status == 'n');
			keluar();
		
		
		return 0;
	    

}
