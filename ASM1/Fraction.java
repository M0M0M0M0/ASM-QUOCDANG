package main.session2;

public class Fraction {
    int tuSo;
    int mauSo;
    boolean daNhap = false;

    public Fraction() {

    }

    public Fraction(int x, int y) {
        this.tuSo = x;
        this.mauSo = y;
        daNhap = true;
    }

    public void nhapTu(int a) {
        this.tuSo = a;
    }

    public void nhapMau(int b) {
        if (b != 0) this.mauSo = b;
        else System.out.println("Mau so can khac 0.");
        return;
    }

    public void nhapFraction(int a, int b) {
        nhapTu(a);
        nhapMau(b);
    }

    public void inFraction() {
        if (!daNhap) System.out.println("Chua nhap phan so.");
        else System.out.print("Phan so hien tai la " + this.tuSo + "/" + this.mauSo);
    }

    public void rutGonFraction() {
        if (this.tuSo == 0) {
            this.mauSo = 1;
            return;
        }
        int ucln = 1;
        int min;

        if (Math.abs(this.tuSo) < Math.abs(this.mauSo)) min = Math.abs(this.tuSo);
        else min = Math.abs(this.mauSo);

        for (int i = 1; i <= min; i++) {
            if (this.tuSo % i == 0 && this.mauSo % i == 0) ucln = i;
        }
        this.tuSo /= ucln;
        this.mauSo /= ucln;
        if (this.mauSo < 0) {
            this.tuSo *= -1;
            this.mauSo *= -1;
        }
        System.out.println("Phan so hien tai la " + this.tuSo + "/" + this.mauSo);
    }

    public void nghichDaoFraction() {
        if (this.tuSo == 0) {
            System.out.println("Khong the nghich dao phan so.");
            return;
        }
        int temp;
        temp = this.tuSo;
        this.tuSo = this.mauSo;
        this.mauSo = temp;
        if (this.mauSo < 0) {
            this.tuSo *= -1;
            this.mauSo *= -1;
        }
        System.out.println("Phan so hien tai la " + this.tuSo + "/" + this.mauSo);
    }

    public Fraction add(Fraction other) {
        int tuSoMoi;
        int mauSoMoi;
        tuSoMoi = this.tuSo * other.mauSo + other.tuSo * this.mauSo;
        mauSoMoi = this.mauSo * other.mauSo;
        Fraction temp = new Fraction(tuSoMoi, mauSoMoi);
        temp.rutGonFraction();
        return temp;
    }

    public Fraction subtract(Fraction other) {
        int tuSoMoi;
        int mauSoMoi;
        tuSoMoi = this.tuSo * other.mauSo - other.tuSo * this.mauSo;
        mauSoMoi = this.mauSo * other.mauSo;
        Fraction temp = new Fraction(tuSoMoi, mauSoMoi);
        temp.rutGonFraction();
        return temp;
    }

    public Fraction multiply(Fraction other) {
        int tuSoMoi;
        int mauSoMoi;
        tuSoMoi = this.tuSo * other.tuSo;
        mauSoMoi = this.mauSo * other.mauSo;
        Fraction temp = new Fraction(tuSoMoi, mauSoMoi);
        temp.rutGonFraction();
        return temp;
    }

    public Fraction divine(Fraction other) {
        int tuSoMoi;
        int mauSoMoi;
        tuSoMoi = this.tuSo * other.tuSo;
        mauSoMoi = this.mauSo * other.mauSo;
        Fraction temp = new Fraction(tuSoMoi, mauSoMoi);
        temp.rutGonFraction();
        return temp;
    }
}
