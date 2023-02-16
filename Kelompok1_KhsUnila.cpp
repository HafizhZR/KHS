#include <iostream>
using namespace std;

struct biodata
{
	char nama[70],npm [50], semester[50], prodi[40], matkul[50], enter[100];
	char nilaiMutu;
	float nilaiAkhir, bobotNilai;
	float sks, nilai;
};


int main(){
	string username, password;
	int a, b;
	int bdata, tampilkan, logout, pilih, simpan, jml, ulangLagi;
	float jBobot = 0, ipk=0, jsks=0, jumlahNilai=0;
	
	cout << "Tugas Mini Project KHS Universitas Lampung" << endl << endl;
	cout << "\t\tKelompok 1" << endl << endl;
	cout << "Nama Anggota : "<< endl << endl;
	cout << "1. Hafizh Zaghlul Rizal		2055061017" << endl;
	cout << "2. Zeri Nurtilia		2015061024" << endl;
	cout << "3. Walovi Lestari Nurrafa	2015061074" << endl;
	cout << "4. M. Hamzah Hasan		2015061072" << endl << endl;
	system("pause");
	system("cls");
	
	login :
	cout << "\t|=======================================================|"<< endl;
	cout << "\t|       Selamat Datang di KHS Universitas Lampung       |"<< endl;
	cout << "\t|=======================================================|"<< endl << endl;
	
	cout << "Silahkan login untuk memulai program KHS Universitas Lampung!" << endl << endl;
	cout << "\tUsername : ";
	cin >> username;			// inputkan username dengan kata kunci "admin"
	cout << "\tPassword : ";
	cin >> password;			// inputkan password dengan kata kunci "password"
	
	if(username == "admin"){
		if(password == "password"){
			cout << "\nLogin Berhasil!" << endl << endl;
		}else{
			cout << "\nUsername atau password yang anda masukkan salah, silahkan coba lagi!" << endl << endl;
			system("pause");
			system("cls");
			goto login;
}
	}else{
		cout << "\nUsername atau password yang anda masukkan salah, silahkan coba lagi!" << endl << endl;
		system("pause");
		system("cls");
		goto login;
	}
	system("pause");
system("cls");
	data:
	biodata mhs[2000];
		cout << "\t|=======================================================|"<< endl;
		cout << "\t|       Selamat Datang di KHS Universitas Lampung       |"<< endl;
		cout << "\t|=======================================================|"<< endl << endl;
		cout << "\t|    1. Input Data dan Nilai Mahasiswa                  |"<< endl;
		cout << "\t|    2. Tampilkan Data dan Nilai Mahasiswa              |"<< endl;
		cout << "\t|    3. Keluar                                          |"<< endl;
		cout << endl;
		cout << "Masukkan Pilihan : ";
		cin >> pilih; 			 // inputkan pilihan dengan mengetik angka 1, 2, atau 3
		
		switch (pilih){
			case 1:
				bdata:
					system("cls");
					cout << "\t\t=================================================\n";
					cout << "\t\t|            INPUT BIODATA MAHASISWA            |\n";
					cout << "\t\t=================================================\n";
					cout << endl;
					for(a = 0; a<1 ; a++){
					
					cin.getline(mhs[a].enter,100);
					cout << "   Nama\t\t : ";
					cin.getline(mhs[a].nama,70);		//inputkan nama mahasiswa
					cout << "   NPM\t\t : ";
					cin.getline(mhs[a].npm,50);			// inputkan npm mahasiswa
					cout << "   Semester\t : ";
					cin.getline(mhs[a].semester,50);	// inputkan semester mahasiswa
					cout << "   Program Studi : ";
					cin.getline(mhs[a].prodi,40);		// inputkan program studi mahasiswa
			
					cout << "\n------------------------\n";
					input:
					cout << "\nJumlah Mata Kuliah  = ";
					cin >> jml;  						// inputkan jumlah mata kuliah dengan angka
					cout << endl;
					system("cls");
					
					cout << "\t\t=================================================\n";
					cout << "\t\t|            DATA NILAI MATA KULIAH             |\n";
					cout << "\t\t=================================================\n";
					cout << endl;
					
					for(b=0;b<jml;b++){
						cin.getline(mhs[b].enter,100);
						cout << ""<<b+1<<". Nama Mata Kuliah\t: ";
						cin.getline(mhs[b].matkul,50);		// inputkan nama mata kuliah terdiri dari 3-10 huruf
						cout << "   SKS \t\t\t: ";
						cin >> mhs[b].sks;					// inputkan jumlah sks dalam bentuk angka
						cout << "   Nilai\t\t: ";
						cin >> mhs[b].nilai;				// inputkan nilai dalam bentuk angka
						if (mhs[b].nilai >= 80 && mhs[b].nilai <= 100){
								mhs[b].nilaiMutu = 'A';
								mhs[b].bobotNilai = 4;
								cout << "   Nilai Mutu\t\t: " << mhs[b].nilaiMutu << endl;
								cout << "   Nilai Bobot\t\t: " << mhs[b].bobotNilai << endl;
							}
							else if(mhs[b].nilai >= 70 && mhs[b].nilai < 80 ){
								mhs[b].nilaiMutu = 'B';
								mhs[b].bobotNilai = 3;
								cout << "   Nilai Mutu\t\t: " << mhs[b].nilaiMutu << endl;
								cout << "   Nilai Bobot\t\t: " << mhs[b].bobotNilai << endl;
							}
							else if(mhs[b].nilai >= 60 && mhs[b].nilai < 70 ){
								mhs[b].nilaiMutu = 'C';
								mhs[b].bobotNilai = 2;
								cout << "   Nilai Mutu\t\t: " << mhs[b].nilaiMutu << endl;
								cout << "   Nilai Bobot\t\t: " << mhs[b].bobotNilai << endl;
							}
							else if(mhs[b].nilai >= 50 && mhs[b].nilai < 60 ){
								mhs[b].nilaiMutu = 'D';
								mhs[b].bobotNilai = 1;
								cout << "   Nilai Mutu\t\t: " << mhs[b].nilaiMutu << endl;
								cout << "   Nilai Bobot\t\t: " << mhs[b].bobotNilai << endl;
							}
							else if(mhs[b].nilai >= 0 && mhs[b].nilai < 50 ){
								mhs[b].nilaiMutu = 'E';
								mhs[b].bobotNilai = 0;
								cout << "   Nilai Mutu\t\t: " << mhs[b].nilaiMutu << endl;
								cout << "   Nilai Bobot\t\t: " << mhs[b].bobotNilai << endl;
							}
						jsks += mhs[b].sks;
						jBobot += mhs[b].bobotNilai*mhs[b].sks;
						
						jumlahNilai += mhs[b].nilai;
						
						ipk = jBobot / jsks ;
						
						cout << "==========================================\n";
					}
					system("pause");
					system("cls");
				
				}
					cout << "Apakah Anda Ingin menyimpan data? : "<< endl;
					cout << "1. Ya" << endl;
					cout << "2. Tidak" << endl << endl;
					cout << "Jawab : ";
					cin >> simpan;							// ketik 1 untuk menyimpan data, atau ketik 2 untuk tidak menyimpan data
						if(simpan==1){
							system("cls");
							cout << "(Data Tersimpan)"<< endl;
							system("pause");
							system("cls");
							goto data;
						}
						else if (simpan==2){
							system("cls");
							cout << "(Data Tidak Tersimpan)" << endl << endl;
							cout << "Apakah anda ingin mengulang program KHS?"<< endl;
							cout << "1. Ya" << endl;
							cout << "2. Tidak" << endl << endl;
							cout << "Jawab : ";
							cin >> ulangLagi;				// ketik 1 untuk mengulang program KHS, atau ketik 2 untuk keluar dari program KHS
								if (ulangLagi==1){
									system("cls");
									goto data;
									}
								else{
									goto logout;
									}
							}
		
			case 2:
				tampilkan :
					system("cls");
					if (pilih == 1 && simpan == 1 && pilih == 2 || simpan == 1 && pilih == 2){
						cout << "\t|=======================================================|"<< endl;
						cout << "\t|           KHS MAHASISWA TEKNIK INFORMATIKA            |"<< endl;
						cout << "\t|                 UNIVERSITAS LAMPUNG                   |"<< endl;
						cout << "\t|=======================================================|"<< endl << endl;
					
							for(a = 0;a<1 ; a++){
							
							cin.getline(mhs[a].enter,100);
							cout << endl;
							cout << "   Nama Mahasiswa : "<< mhs[a].nama << endl;
							cout << "   NPM\t\t  : "<< mhs[a].npm << endl;
							cout << "   Semester\t  : "<< mhs[a].semester << endl;
							cout << "   Program Studi  : "<< mhs[a].prodi << endl << endl;
							cout << "   =============================================================="<< endl;
							cout << "   | Mata Kuliah\t| Sks\t| Nilai Mutu | Bobot\t| Nilai\t|"<< endl;
							cout << "   --------------------------------------------------------------"<< endl;
							
							for (b=0;b<jml;b++){
								cout << "   | "<< mhs[b].matkul << "\t\t| " << mhs[b].sks << "\t| " << mhs[b].nilaiMutu << "          | " << mhs[b].bobotNilai;
								cout << "\t| "<< mhs[b].nilai << "\t|";
								cout << endl;
						}
							cout <<"   ==============================================================\n";
							mhs[a].nilaiAkhir = jumlahNilai/jml;
							if (mhs[a].nilaiAkhir >= 80 && mhs[a].nilaiAkhir <= 100){
								cout << "\n   Jumlah Sks Semester ini : " << jsks;
								cout << endl;
								cout << "\n   Nilai Akhir\t : " << mhs[a].nilaiAkhir;
								cout << endl;
								cout << "\n   Nilai Huruf\t : A";
								cout << endl;
								cout << "\n   IPK\t\t : "<< ipk;
								cout << endl;
								cout << "\n   SKS maksimal yang dapat diambil : 24" << endl;
							}
							else if(mhs[a].nilaiAkhir >= 70 && mhs[a].nilaiAkhir < 80 ){
								cout << "\n   Jumlah Sks Semester ini : " << jsks;
								cout << endl;
								cout << "\n   Nilai Akhir\t : " << mhs[a].nilaiAkhir;
								cout << endl;
								cout << "\n   Nilai Huruf\t : B";
								cout << endl;
								cout << "\n   IPK\t\t : "<< ipk;
								cout << endl;
								cout << "\n   SKS maksimal yang dapat diambil : 22" << endl;
							}
							else if(mhs[a].nilaiAkhir >= 60 && mhs[a].nilaiAkhir < 70 ){
								cout << "\n   Jumlah Sks Semester ini : " << jsks;
								cout << endl;
								cout << "\n   Nilai Akhir\t : " << mhs[a].nilaiAkhir;
								cout << endl;
								cout << "\n   Nilai Huruf\t : C";
								cout << endl;
								cout << "\n   IPK\t\t : "<< ipk;
								cout << endl;
								cout << "\n   SKS maksimal yang dapat diambil : 20" << endl;
							}
							else if(mhs[a].nilaiAkhir >= 50 && mhs[a].nilaiAkhir < 60 ){
								cout << "\n   Jumlah Sks Semester ini : " << jsks;
								cout << endl;
								cout << "\n   Nilai Akhir\t : " << mhs[a].nilaiAkhir;
								cout << endl;
								cout << "\n   Nilai Huruf\t : D";
								cout << endl;
								cout << "\n   IPK\t\t : "<< ipk;
								cout << endl;
								cout << "\n   SKS maksimal yang dapat diambil : 18" << endl;
							}
							else if(mhs[a].nilaiAkhir >= 0 && mhs[a].nilaiAkhir < 50 ){
								cout << "\n   Jumlah Sks Semester ini : " << jsks;
								cout << endl;
								cout << "\n   Nilai Akhir\t : " << mhs[a].nilaiAkhir;
								cout << endl;
								cout << "\n   Nilai Huruf\t : E";
								cout << endl;
								cout << "\n   IPK\t\t : "<< ipk;
								cout << endl;
								cout << "\n   SKS maksimal yang dapat diambil : 16" << endl;
							}
						
							cout << endl;
							cout << "   --------------------------------------------------------------\n";
						}
				
							system("pause");
							system("cls");	
						}
							cout << "Apakah Anda Ingin menyimpan data? : "<< endl;
							cout << "1. Ya" << endl;
							cout << "2. Tidak" << endl << endl;
							cout << "Jawab : ";
							cin >> simpan;					// ketik 1 untuk menyimpan data, atau ketik 2 untuk tidak menyimpan data
							if(simpan==1){
							system("cls");
							cout << "[[  Data Tersimpan  ]]"<< endl;
							system("pause");
							system("cls");
							goto data;
						}
							else if (simpan==2){
							system("cls");
							cout << "(Data Tidak Tersimpan)" << endl << endl;
							cout << "Apakah anda ingin mengulang program KHS Universitas Lampung?"<< endl;
							cout << "1. Ya" << endl;
							cout << "2. Tidak" << endl << endl;
							cout << "Jawab : ";
							cin >> ulangLagi;				// ketik 1 untuk mengulang program KHS, atau ketik 2 untuk keluar dari program KHS
								if (ulangLagi == 1){
									system("cls");
									goto data;
									}
								else{
									goto logout;
									}
						 }
			case 3 :
				logout :
					system("cls");
							cout << "\t=================================================\n";
							cout << "\t|            KHS UNIVERSITAS LAMPUNG            |\n";
							cout << "\t=================================================\n";
							cout << endl << endl;
							cout << "Silahkan logout untuk keluar dari program KHS Universitas Lampung!" << endl << endl;
							cout << "\tUsername : ";
							cin >> username;			// inputkan username dengan kata kunci "admin"
							cout << "\tPassword : ";
							cin >> password;			// inputkan password dengan kata kunci "password"
	
							if(username == "admin"){
							if(password == "password"){
							cout << "\nLogout Success!" << endl << endl;
							cout << "Terima Kasih telah menggunakan KHS Universitas Lampung"<< endl;
							return 0;
							}else{
							cout << "\nUsername atau password yang anda masukkan salah, silahkan coba lagi!" << endl << endl;
							system("pause");
							system("cls");
							goto logout;
							}
							}else{
							cout << "\nUsername atau password yang anda masukkan salah, silahkan coba lagi!" << endl << endl;
							system("pause");
							system("cls");
							goto logout;
							}					
					}
					return 0;
					}
