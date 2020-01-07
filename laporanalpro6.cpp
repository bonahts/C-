#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int x,y,i;
void sort();
struct data
{
	string mk;
	int harga;
	};
struct pembeli{
	string nama;
	int total,jumlah,jam,menit,tempat,hasil;
	data makan[50];
	};
	pembeli plg[50];

main()
{
	
	cout<<"\n Masukkan Jumlah Pelanggan :";cin>>i;
	cout<<endl;
	
	for(x=0; x<i; x++)
	{
		cout<<"Nama	:";cin>>plg[x].nama;
		cout<<"Jumlah Pesanan	:";cin>>plg[x].jumlah;
		plg[x].hasil=0;
		for (y=0; y<plg[x].jumlah; y++)
		{
			cout<<"Nama Makanan	:";cin>>plg[x].makan[y].mk;
			cout<<"Harga 		:";cin>>plg[x].makan[y].harga;
			plg[x].hasil=plg[x].hasil+plg[x].makan[y].harga;
		}
		cout<<"Waktu :"<<endl;
		cout<<"Jam	:";cin>>plg[x].jam;
		cout<<"Menit	:";cin>>plg[x].menit;
		cout<<"Biaya Sewa Tempat :";
		
		
		if ((plg[x].menit/60)>0)
		{
			plg[x].tempat=(10000*(plg[x].menit/60));
			if(plg[x].menit%60>0)
			{
				plg[x].tempat=plg[x].tempat+200*(plg[x].menit%60);
			}
		}
		else 
		{
			plg[x].tempat=(plg[x].menit%60)*200;
		
		}
		plg[x].tempat=plg[x].tempat+plg[x].jam*10000;
		cout<<plg[x].tempat<<endl;
		plg[x].total=plg[x].tempat + plg[x].hasil;;
		cout<<"Total Pembayaran: "<<plg[x].total<<endl;
	}
	sort();
	cout<<endl;
	
}
void sort()
{
	cout<<"Pengurutan Berdasarkan Jumlah Total Terbanyak :	"<<endl;
	
	string c;
	for (y=0; y<i-1; y++)
	for (x=0; x<y-1-i; x++)
	{
		if(plg[x].total>plg[x+1].total)
		{
			c=plg[x].nama;
			plg[x].nama=plg[x+1].nama;
			plg[x+1].nama=c;
		}
	
	}
	for (x=0; x<i; x++)
	{
		cout<<plg[x].nama<<endl;
	}
	
		
		
	
	
	
	
	
	
	
	
	
	
	
}
