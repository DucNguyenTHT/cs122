using namespace std;

class nganHang
{
	string soTaiKhoan;
	string chuSoHuu;
	string passWord;
	int soTienHienCo;
	int b;
	int chon;
public:
	int dschon();
	virtual void nhap()
	{
		cout << "nhapSoTaiKhoan: ";
		cin.ignore();
		getline(cin,soTaiKhoan);
		cout << "nhapTenChuSoHuu: ";
		getline(cin, chuSoHuu);
		cout << "nhapPassWord: ";
		getline(cin, passWord);
		cout << "in so tien hien co: ";
		cin >> soTienHienCo;
	}
	virtual void xuat()
	{
		cout << "SoTaiKhoan cua quy khach la: " << soTaiKhoan << endl;
		cout << "chu so huu cua tai khoan la: " << chuSoHuu << endl;
		cout << "passWord la: " << passWord << endl;
		cout << "sotien hien co la: " << soTienHienCo << endl;
	}
	virtual int themTien()
	{
		cout << "nhap so tien can them: ";
		cin >> b;
		soTienHienCo = b + soTienHienCo;
		return soTienHienCo;
	}
	virtual int truTien()
	{
		cout << "nhap so tien can tru di: ";
		cin >> b;
		soTienHienCo = soTienHienCo - b;
		return soTienHienCo;
	}
	virtual void ds()
	{
		do
		{
			chon = dschon();
			switch (chon)
			{
			case 1: nhap(); break;
			case 2: xuat(); break;
			case 3:	themTien(); break;
			case 4: truTien(); break;
			}
			system("pause");
			system("cls");
		} while (chon != 0);
	}
};

int nganHang::dschon()
{
	cout << "1. nhap vao thong tin tai khoan.\n";
	cout << "2. xuat thong tin tai khoan.\n";
	cout << "3. them tien.\n";
	cout << "4. tru tien.\n";
	cout << "su lua chon cua ban la: ";
	cin >> chon;
	return chon;
}
