 
// PROGRAM COFFEE SHOP
// ARDENA AFIF 'DEVELOPER'
// UNIVERSITY OF DARUSSALAM GONTOR

#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>

using namespace std;

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
	int pil, sing, milk, espresso, pilihan, jml, total, bayar, kurang, kembalian;
	int hargaS[4]={8000, 9000, 10000, 12000}, h=0;
	int hargaM[3]={8000, 9000, 10000}, i=0;
	int hargaE[3]={8000, 10000, 12000}, j=0;
	string nama;
	bool saldo;
	char menu[20];

	cout<<" Masukkan Nama Pemesan : "; cin>>nama; 
	cout<<endl<<endl;
	
	cout<<" Pilihan Menu yang Tersedia ---\n";
	cout<<" ===================================================\n";
	cout<<" |\t\t Daftar Menu Tersedia\t\t   |\n";
	cout<<" ===================================================\n";
	
	cout<<" ===> 1. Singnature\n";
	cout<<" ===> 2. MilkShake \n";
	cout<<" ===> 3. Espresso Based\n";
	cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	
	cout<<" Silahkan Pilih (1 - 3) : "; cin>>pil;
	cout<<endl<<endl;
		
		system("cls");
		
	switch(pil){
		case 1 :
			cout<<" ===================================================\n";
			cout<<" |\t\t Daftar Menu Tersedia\t\t   |\n";
			cout<<" ===================================================\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" |\t\tSingnature\t\t |\n";
			cout<<" =========================================\n";
			
			cout<<" ==> 1. Arenga Pinnata \t\tRp  9.000\n ==> 2. Habiscus S\t\tRp 10.000\n";
			cout<<" ==> 3. Citrus X Limon\t\tRp  9.000\n ==> 4. Calamellus\t\tRp 12.000\n";
			cout<<" ==> 5. Cucumis Melon\t\tRp  8.000\n ==> 6. Citrus H2O\t\tRp 10.000\n";
			cout<<" ==> 7. V. Planifolia\t\tRp 12.000\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" Silahkan Pilih (1 - 7) : "; cin>>sing;
			cout<<" Jumlah Pesanan : "; cin>>jml;
			cout<<endl;	
			
			switch(sing) {
			case 1 :
				strcpy(menu,"Arenga Pinata");
				h = 1;
				break;
			case 2 :
				strcpy(menu,"Habiscus S");
				h = 2;
				break;
			case 3 :
				strcpy(menu,"Citrus X Limon");
				h = 1;
				break;
			case 4 :
				strcpy(menu,"Calamellus");
				h = 3;
				break;
			case 5 :
				strcpy(menu,"Cucumis Melon");
				break;
			case 6 :
				strcpy(menu,"Citrus H2O");
				h = 2;
				break;
			case 7 :
				strcpy(menu,"V. Planifolia");
				h = 3;
				break;
				
			default :
				cout<<endl;
				cout<<" ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
				cout<<"  Maaf, Anda Salah Memasukkan\n";
				cout<<"      Silahkan Coba Lagi !\n";
				cout<<" =============================\n";
			}
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" Anda Memilih "<<menu<<" sebanyak "<<jml<<" gelas"<<endl;
			
			system("cls");
			total = jml * hargaS[h];
			
			cout<<" ====================================================";cout<<endl;
			cout<<" +\t\t   Nota Pembayaran\t\t    +\n";
			cout<<" +\t\t    Ardena Coffee\t\t    +";cout<<endl;	    
		    cout<<" +\t\t     Purwokerto\t\t\t    +"<<endl;
			cout<<" ====================================================";cout<<endl;
			cout<<" Nama Pemesan			: "<<nama<<endl;
			cout<<" Menu Pesanan			: "<<menu<<endl;
			cout<<" Jumlah Pesanan			: "<<jml<<" gelas\n";
			cout<<" Harga Pesanan Per Gelas	: Rp "<<hargaS[h]<<endl;			
			cout<<" ------------------------------------------------\n";
			cout<<" Total Pembayaran		: Rp "<<total<<endl<<endl;
			cout<<" ++++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<" Silahkan bayar disini		: Rp "; cin>>bayar;
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
			cout<<endl;
			
			cout<<" Uang yang anda bayar		: Rp "<<bayar<<endl;
			
			if (bayar < total){
				while (saldo = bayar < total){
					cout<<" ~> Uang Anda Kurang <~\n";
					cout<<" Silahkan bayar lagi		: Rp "; cin>>kurang;
					bayar += kurang;
					cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<" Jumlah Pembayaran		: Rp "<<bayar<<endl;
				} if(bayar == total){
						cout<<"\n  	 ~> Uang Anda Pas <~\n";
						cout<<" 	~~> Terima Kasih  <~~\n";
					} else if (bayar > total){
						kembalian = bayar - total;
						cout<<" ~> Uang Kembalian		: Rp "<<kembalian<<endl;
						cout<<"\n 	~~> Terima Kasih <~~\n";
					}
			} else if (bayar == total){
				cout<<"\n  	 ~> Uang Anda Pas <~\n";
				cout<<" 	~~> Terima Kasih  <~~\n";
			} else if (bayar > total){
				kembalian = bayar - total;
				cout<<" ~> Uang Kembalian		: Rp "<<kembalian<<endl;
				cout<<"\n 	~~> Terima Kasih  <~~\n";
			} else {
				cout<<endl;
				cout<<" ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
				cout<<"  Maaf, Anda Salah Memasukkan\n";
				cout<<"      Silahkan Coba Lagi !\n";
				cout<<" =============================\n";
			}
			
			break;
			
			
		case 2 :
			system("cls");
			
			
			cout<<" ===================================================\n";
			cout<<" |\t\t Daftar Menu Tersedia\t\t   |\n";
			cout<<" ===================================================\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" |\t     MilkShake \t\t\t |\n";
			cout<<" =========================================\n";
						
			cout<<" \t\t\t\tMilkShake\n";
			cout<<" \t\t\t\t---------\n";
						
			cout<<" => 1. Nira\t\t\tRp  8.000\n";
			cout<<" => 2. Taro\t\t\tRp 10.000\n";
			cout<<" => 3. Vanilla\t\t\tRp  9.000\n";
			cout<<" => 4. Matca\t\t\tRp 10.000\n";
			cout<<" => 5. Redvelvet\t\tRp  9.000\n";
			cout<<" => 6. Dark Chocolate\t\tRp  8.000\n";
			cout<<" => 7. Bubble Gum\t\tRp 10.000\n";
			cout<<" => 8. Salted Caramel\t\tRp  8.000\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";				
				
			cout << " Pilih Pesanan Anda (1 - 8): "; cin>>milk;
			cout<<" Jumlah Pesanan : "; cin>>jml;
			cout<<endl;	
			
			switch(milk) {
			case 1 :
				strcpy(menu,"Nira");
				break;
			case 2 :
				strcpy(menu,"Taro");
				i = 2;
				break;
			case 3 :
				strcpy(menu,"Vanilla");
				i = 1;
				break;
			case 4 :
				strcpy(menu,"Matca");
				i = 2;
				break;
			case 5 :
				strcpy(menu,"Redvelvet");
				i = 1;
				break;
			case 6 :
				strcpy(menu,"Dark Chocolate");
				break;
			case 7 :
				strcpy(menu,"Bubble Gum");
				i = 2;
				break;
			case 8 :
				strcpy(menu,"Salted Caramel");
				break;
			default :
				cout<<endl;
				cout<<" ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
				cout<<"  Maaf, Anda Salah Memasukkan\n";
				cout<<"      Silahkan Coba Lagi !\n";
				cout<<" =============================\n";
			}
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" Anda Memilih "<<menu<<" sebanyak "<<jml<<" gelas"<<endl;
			
			system("cls");
			total = jml * hargaM[i];
			
			cout<<" ====================================================";cout<<endl;
			cout<<" +\t\t   Nota Pembayaran\t\t    +\n";
			cout<<" +\t\t    Ardena Coffee\t\t    +";cout<<endl;	    
		    cout<<" +\t\t     Purwokerto\t\t\t    +"<<endl;
			cout<<" ====================================================";cout<<endl;
			cout<<" Nama Pemesan			: "<<nama<<endl;
			cout<<" Menu Pesanan			: "<<menu<<endl;
			cout<<" Jumlah Pesanan			: "<<jml<<" gelas\n";
			cout<<" Harga Pesanan Per Gelas	: Rp "<<hargaM[i]<<endl;			
			cout<<" ------------------------------------------------\n";
			cout<<" Total Pembayaran		: Rp "<<total<<endl<<endl;
			cout<<" ++++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<" Silahkan bayar disini		: Rp "; cin>>bayar;
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
			cout<<endl;
			
			cout<<" Uang yang anda bayar		: Rp "<<bayar<<endl;
			
			if (bayar < total){
				while (saldo = bayar < total){
					cout<<" ~> Uang Anda Kurang <~\n";
					cout<<" Silahkan bayar lagi		: Rp "; cin>>kurang;
					bayar += kurang;
					cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<" Jumlah Pembayaran		: Rp "<<bayar<<endl;
				} if(bayar == total){
						cout<<"\n  	 ~> Uang Anda Pas <~\n";
						cout<<" 	~~> Terima Kasih  <~~\n";
					} else if (bayar > total){
						kembalian = bayar - total;
						cout<<" ~> Uang Kembalian		: Rp "<<kembalian<<endl;
						cout<<"\n 	~~> Terima Kasih <~~\n";
					}
			} else if (bayar == total){
				cout<<"\n  	 ~> Uang Anda Pas <~\n";
				cout<<" 	~~> Terima Kasih  <~~\n";
			} else if (bayar > total){
				kembalian = bayar - total;
				cout<<" ~> Uang Kembalian		: Rp "<<kembalian<<endl;
				cout<<"\n 	~~> Terima Kasih  <~~\n";
			} else {
				cout<<endl;
				cout<<" ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
				cout<<"  Maaf, Anda Salah Memasukkan\n";
				cout<<"      Silahkan Coba Lagi !\n";
				cout<<" =============================\n";
			}
			 
			break;
	
		case 3 :
			cout<<" ===================================================\n";
			cout<<" |\t\t Daftar Menu Tersedia\t\t   |\n";
			cout<<" ===================================================\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" |\t     Espresso Based\t\t |\n";
			cout<<" =========================================\n";
			
			cout<<" \t\t\t\t    Hot\n";
			cout<<" \t\t\t\t ---------\n";
			
			cout<<" => 1. Americano\t\t Rp  8.000\n";
			cout<<" => 2. Long Black\t\t Rp 10.000\n";
			cout<<" => 3. Supresso\t\t\t Rp 12.000\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" Silahkan Pilih (1 - 3) : "; cin>>espresso;
			cout<<" Jumlah Pesanan : "; cin>>jml;
			cout<<endl;	
			
			switch(espresso) {
			case 1 :
				strcpy(menu,"Americano");
				break;
			case 2 :
				strcpy(menu,"Long Black");
				j = 1;
				break;
			case 3 :
				strcpy(menu,"Supresso");
				j = 2;
				break;
			
			default :
				cout<<endl;
				cout<<" ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
				cout<<"  Maaf, Anda Salah Memasukkan\n";
				cout<<"      Silahkan Coba Lagi !\n";
				cout<<" =============================\n";
			}
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" Anda Memilih "<<menu<<" sebanyak "<<jml<<" gelas"<<endl;
			
			system("cls");
			total = jml * hargaE[j];
			
			cout<<" ====================================================";cout<<endl;
			cout<<" +\t\t   Nota Pembayaran\t\t    +\n";
			cout<<" +\t\t    Ardena Coffee\t\t    +";cout<<endl;	    
		    cout<<" +\t\t     Purwokerto\t\t\t    +"<<endl;
			cout<<" ====================================================";cout<<endl;
			cout<<" Nama Pemesan			: "<<nama<<endl;
			cout<<" Menu Pesanan			: "<<menu<<endl;
			cout<<" Jumlah Pesanan			: "<<jml<<" gelas\n";
			cout<<" Harga Pesanan Per Gelas	: Rp "<<hargaE[j]<<endl;			
			cout<<" ------------------------------------------------\n";
			cout<<" Total Pembayaran		: Rp "<<total<<endl<<endl;
			cout<<" ++++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<" Silahkan bayar disini		: Rp "; cin>>bayar;
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
			cout<<endl;
			
			cout<<" Uang yang anda bayar		: Rp "<<bayar<<endl;
			cout<<" __________________________________________\n";
			
			if (bayar < total){
				while (saldo = bayar < total){
					cout<<" ~> Uang Anda Kurang <~\n";
					cout<<" Silahkan bayar lagi		: Rp "; cin>>kurang;
					bayar += kurang;
					cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout<<" Jumlah Pembayaran		: Rp "<<bayar<<endl;
				} if(bayar == total){
						cout<<"\n  	 ~> Uang Anda Pas <~\n";
						cout<<" 	~~> Terima Kasih  <~~\n";
					} else if (bayar > total){
						kembalian = bayar - total;
						cout<<" ~> Uang Kembalian		: Rp "<<kembalian<<endl;
						cout<<"\n 	~~> Terima Kasih <~~\n";
					}
			} else if (bayar == total){
				cout<<"\n  	 ~> Uang Anda Pas <~\n";
				cout<<" 	~~> Terima Kasih  <~~\n";
			} else if (bayar > total){
				kembalian = bayar - total;
				cout<<" ~> Uang Kembalian		: Rp "<<kembalian<<endl;
				cout<<"\n 	~~> Terima Kasih  <~~\n";
			} else {
				cout<<endl;
				cout<<" ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
				cout<<"  Maaf, Anda Salah Memasukkan\n";
				cout<<"      Silahkan Coba Lagi !\n";
				cout<<" =============================\n";
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

//user Mengecek Sisa Item
void sisaItem() {
	int item, pil, sing, milk, espresso, angka;
	
	cout<<" ===================================================\n";
	cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
	cout<<" ===================================================\n";
	
	cout<<" ===> 1. Singnature\n";
	cout<<" ===> 2. MilkShake / Boba\n";
	cout<<" ===> 3. Espresso Based\n";
	cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	
	cout<<" Silahkan Pilih (1 - 3) : "; cin>>pil;
	cout<<endl<<endl;
	
		system("cls");
	
	switch(pil){
		case 1 : // <Singnature>
			cout<<" ===================================================\n";
			cout<<" |\t\t Daftar Menu Tersedia\t\t   |\n";
			cout<<" ===================================================\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" |\t\tSingnature\t\t |\n";
			cout<<" =========================================\n";
			
			cout<<" ==> 1. Arenga Pinnata \t\tRp  9.000\n ==> 2. Habiscus S\t\tRp 10.000\n";
			cout<<" ==> 3. Citrus X Limon\t\tRp  9.000\n ==> 4. Calamellus\t\tRp 12.000\n";
			cout<<" ==> 5. Cucumis Melon\t\tRp  8.000\n ==> 6. Citrus H2O\t\tRp 10.000\n";
			cout<<" ==> 7. V. Planifolia\t\tRp 12.000\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" Silahkan Pilih (1 - 7) : "; cin>>sing;
			
			system("cls");
			if(sing == 1){ //pilihan ke-1 (Arenga Pinnata)
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Arenga Pinnata sebanyak 30 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pesanan  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 30 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa yang tersedia   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 	   
			} 
			
			else if (sing == 2){ //pilihan ke-2 (Habiscus S)
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Habiscus S sebanyak 30 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pesanan  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 30 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa yang tersedia   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			} 
			
			else if (sing == 3){ //pilihan ke-3 (Citrus X Limon)
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Citrus X Limon sebanyak 30 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pesanan  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 30 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa yang tersedia   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if (sing == 4){ //pilihan ke-4 (Calamellus)
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Calamellus sebanyak 30 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pesanan  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 30 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa yang tersedia   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if (sing == 5){ //pilihan ke-5 (Cucumis Melon)
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Cucumis Melon sebanyak 30 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pesanan  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 30 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa yang tersedia   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if (sing == 6){ //pilihan ke-6 (Citrus H2O)
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Citrus H2O sebanyak 30 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pesanan  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 30 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa yang tersedia   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if (sing == 7){ //pilihan ke-7 (V. Planifolia)
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah V. Planifolia sebanyak 30 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pesanan  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 30 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa yang tersedia   : "<<kopiKSONG;cout<<endl;
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
			
			
		case 2 : // <Milkshake / Boba>
			
			cout<<" ===================================================\n";
			cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
			cout<<" ===================================================\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" |\t     MilkShake \t\t\t |\n";
			cout<<" =========================================\n";
						
			cout<<" \t\t\t\tMilkShake\n";
			cout<<" \t\t\t\t---------\n";
						
			cout<<" => 1. Nira\t\t\tRp  8.000\n";
			cout<<" => 2. Taro\t\t\tRp 10.000\n";
			cout<<" => 3. Vanilla\t\t\tRp  9.000\n";
			cout<<" => 4. Matca\t\t\tRp 10.000\n";
			cout<<" => 5. Redvelvet\t\tRp  9.000\n";
			cout<<" => 6. Dark Chocolate\t\tRp  8.000\n";
			cout<<" => 7. Bubble Gum\t\tRp 10.000\n";
			cout<<" => 8. Salted Caramel\t\tRp  8.000\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" Silahkan Pilih (1 - 8) : "; cin>>milk;
			
			system("cls");
			
			if(milk == 1) { //Pilihan ke-1 (Nira)
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Nira sebanyak 50 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Kopi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pesanan  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 50 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa yang tersedia   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if(milk == 2) { //Pilihan ke-2 (Taro)
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Taro sebanyak 50 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pesanan  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 50 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa yang tersedia   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if(milk == 3) { //Pilihan ke-3 (Vanilla)
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Vanilla sebanyak 50 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pesanan  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 50 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa yang tersedia   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if(milk == 4) { //Pilihan ke-4 (Matca)
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Matca sebanyak 50 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pesanan  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 50 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa yang tersedia   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if(milk == 5) { //Pilihan ke-5 (Redvelvet)
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Redvelvet sebanyak 50 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pesanan  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 50 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa yang tersedia   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if(milk == 6) { //Pilihan ke-6 (Dark Chocolate)
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Dark Chocolate sebanyak 50 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pesanan  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 50 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa yang tersedia   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if(milk == 7) { //Pilihan ke-7 (Bubble Gum)
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Bubble Gum sebanyak 50 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pesanan  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 50 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa yang tersedia   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if(milk == 8) { //Pilihan ke-8 (Slated Caramel)
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Salted Caramel sebanyak 50 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pesanan  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 50 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa yang tersedia   : "<<kopiKSONG;cout<<endl;
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
		
		
		
		case 3 : // <Espresso Based>
			
			cout<<" ===================================================\n";
			cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
			cout<<" ===================================================\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" |\t     Espresso Based\t\t |\n";
			cout<<" =========================================\n";
			
			cout<<" \t\t\t\t    Hot\n";
			cout<<" \t\t\t\t ---------\n";
			
			cout<<" => 1. Americano\t\t Rp  8.000\n";
			cout<<" => 2. Long Black\t\t Rp 10.000\n";
			cout<<" => 3. Supresso\t\t\t Rp 12.000\n";
			
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<" Silahkan Pilih (1 - 3) : "; cin>>espresso;
			
			system("cls");
			
			switch(espresso){
				
			}
			
			
			if (espresso == 1) { //Pilihan ke-1 (Americano)
				
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Americano sebanyak 45 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pesanan  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 45 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa yang tersedia   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl; 
			}
			
			else if (espresso == 2){ //Pilihan ke-2 (Long Black)
			
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Long Black sebanyak 45 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pesanan  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 45 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa yang tersedia   : "<<kopiKSONG;cout<<endl;
				cout<<" ===================================================="<<endl;
				cout<<endl;
			}
			
			else if (espresso == 3){ //Pilihan ke-3 (Supresso)
			
				cout<<" ===================================================\n";
				cout<<" |\t\t  Sisa Menu Tersedia\t\t   |\n";
				cout<<" ===================================================\n";
				
				int kopiTerisi,kopiKSONG;
				
				cout<<endl;
				cout<<"     -> Keterangan <-"<<endl;
				cout<<" Jumlah Supresso sebanyak 45 Gelas"<<endl;
				cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<" Masukkan Jumlah Porsi Yang Ingin Dipesan"<<endl;
		
				cout<<" Jumlah Pesanan  : ";
				cin>>kopiTerisi;
	
				kopiKSONG = 45 - kopiTerisi;
				
				cout<<" ===================================================="<<endl;
				cout<<" Sisa yang tersedia   : "<<kopiKSONG;cout<<endl;
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
		
		switch(pilihan){ // User memilih menu yang akan dibuka
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
		cout<<" ~> Apakah Anda Ingin Keluar ? <~\n\n";
		cout<<" ============================\n";
		cout<<" Kembali ke Menu Utama\t[T] \n";
		cout<<" Keluar Program\t\t[Y] \n";
		cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	
		cout<<" Silahkan Pilih [Y/T] : ";
		cin >>status;
			
		cout<<endl;
		system("cls");
			
		}while (status == 'T'|| status == 't');
			keluar();
		
		
		return 0;
	

}
