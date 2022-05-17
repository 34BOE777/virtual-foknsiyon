#include<iostream>
using namespace std;


class calisan{
string ad,soyad;
int sgn;
public:
	calisan(string ad,string soyad,int sgn):ad(ad),soyad(soyad),sgn(sgn){}
	virtual float kazanc()=0;
	void yazdir(){
		cout<<ad<<"  "<<soyad<<"  "<<sgn<<endl;
	}
	string getad(){
		return ad;
	}

	string getsoyad(){
		return soyad;
	}
	int getsgn(){
		return sgn;
	}

};
class mcalisan:public calisan{
private:
	int hmaas;
public:
	int gethmaas(){
		return hmaas;
	}


	mcalisan(string ad,string soyad,int sgn,int hmaas):calisan(ad,soyad,sgn),hmaas(hmaas){}
	

	float kazanc(){
		return hmaas;
	}
	

	void yazdir(){
		cout<<getad()<<"  "<<getsoyad()<<"  "<<getsgn()<<"  "<<hmaas<<endl;
	}
};

class kcalisan:public calisan{
private:
	int satismiktari;
	int kazancorani;
public:
	kcalisan(string ad,string soyad,int sgn,int satismiktari,int kazancorani):calisan(ad,soyad,sgn),satismiktari(satismiktari),kazancorani(kazancorani){}
	float kazanc(){
		return kazancorani*satismiktari;
	}
void yazdir(){
	cout<<getad()<<"  "<<getsoyad()<<"  "<<getsgn()<<"  "<<satismiktari<<"  "<<kazancorani<<endl;
}
    int getsatismiktari(){
    	return satismiktari;
    }
	int getkazancorani(){
		return kazancorani;
	}
};

class mkcalisan:public kcalisan{
private:
	int tabanmaas;
public:
	mkcalisan(string ad,string soyad,int sgn,int satismiktari,int kazancorani,int tabanmaas):kcalisan(ad,soyad,sgn,satismiktari,kazancorani),tabanmaas(tabanmaas){}
	float kazanc(){
		return getkazancorani()*getsatismiktari()+tabanmaas;
	}
	void yazdir(){
		cout<<getad()<<"  "<<getsoyad()<<"  "<<getsgn()<<"  "<<getsatismiktari()<<"  "<<getkazancorani()<<"  "<<tabanmaas<<endl;
	}
};


int main()
{
	mkcalisan mk1("nfvgoıdhlş","jkwerlk",12,12,12,1200);
	cout<<mk1.kazanc()<<endl;
	mk1.yazdir();


	return 0;
}


