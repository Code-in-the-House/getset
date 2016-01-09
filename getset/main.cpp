
using System;
class dortgen
{
    private int saat;
    private int dakika;
    private int saniye;
    // Saat değerini kontrol et
    public int Saat
    {
        get
        {
            return saat;
        }
        set
        {
            if (value < 24 && value >= 0)
                saat = value;
            else
                saat = 00;
        }
    }
    // Dakika değerini kontrol et
    public int Dakika
    {
        get
        {
            return dakika;
        }
        set
        {
            if (value < 60 && value >= 00)
                dakika = value;
            else
                dakika = 00;
        }
    }
    // Saniye değerini kontrol et
    public int Saniye
    {
        get
        {
            return saniye;
        }
        set
        {
            if (value < 60 && value >= 0)
                saniye = value;
            else
                saniye = 00;
        }
    }
    public void saatGoruntule()
    {
        Console.WriteLine(saat + " : " + dakika + " : " + saniye);
    }
    
}
class uygulama
{
    static void Main()
    {
        dortgen zaman = new dortgen();
        zaman.Saat = 19;
        zaman.Dakika = 07;
        zaman.Saniye = 59;
        zaman.saatGoruntule();
    }
}

