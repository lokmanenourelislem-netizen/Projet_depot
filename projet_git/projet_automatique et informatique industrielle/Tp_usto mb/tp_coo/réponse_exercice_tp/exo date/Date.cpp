#include "Date.h"


using namespace std;


///--------------------------
Date::Date()
{
    this->setToCurrentDate();
}
///--------------------------
Date::Date(unsigned int jour, unsigned int mois, unsigned int annee)
{
    if(this->isValideDate(jour, mois, annee))
    {
        m_jours = jour;
        m_mois = mois;
        m_annees = annee;
    }
    else
    {
        this->setToCurrentDate();
    }
}
///--------------------------
Date::~Date(){}
///*******************************************************
/*void Date::afficher()
{
    std::cout << m_jours << "/" << m_mois << "/" << m_annees << std::endl;
}*/
///--------------------------
//definition de la méthode demain
void Date::demain()
{
    unsigned int jour = m_jours, mois = m_mois, annee = m_annees;
    if(!this->isValideDate(jour+1, mois, annee))
        if(!this->isValideDate(jour=1, mois+1, annee))
        {
            annee++;
            mois = 1;
        }
        else
            mois++;
    else
        jour++;

    cout << jour << "/" << mois << "/" << annee << endl;
}


///--------------------------

//definition de la méthode changer date
void Date::changerDate(unsigned int jour, unsigned int mois, unsigned int annee)
{
    if(this->isValideDate(jour, mois, annee))
    {
        m_jours = jour;
        m_mois = mois;
        m_annees = annee;
    }
}
///--------------------------
//méthode changer jour
void Date::changerJours(unsigned int j)
{
    if(this->isValideDate(j, m_mois, m_annees))
        m_jours = j;
}
///--------------------------
//méthode changer mois
void Date::changerMois(unsigned int m)
{
    if(this->isValideDate(m_jours, m, m_annees))
        m_mois = m;
}
///--------------------------
//méthode changer année
void Date::changerAnnees(unsigned int y)
{
    if(this->isValideDate(m_jours, m_mois, y))
        m_annees = y;
}
///--------------------------
//méthode pour afficher la date actuel
void Date::setToCurrentDate(void)
{
    time_t tt;
    struct tm* ti;
    time(&tt);
    ti = localtime(&tt);
    m_annees = (ti->tm_year)+1900; /// ti->tm_year = annee_courante - 1900
    m_mois = (ti->tm_mon)+1; /// jan = 0!
    m_jours = ti->tm_mday;
}

///*******************************************************
bool Date::isLeap(int year){return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));}
///--------------------------
bool Date::isValideDate(int d, int m, int y)
{
    if(y < MIN_VALID_YR || y > MAX_VALID_YR)
        return false;
    if(m < 1 || m > 12)
        return false;
    if(d < 1 || d > 31)
        return false;
    if(m == 2)
    {
        if(this->isLeap(y))
            return (d<=29);
        else
            return (d<=28);
    }
    if(m == 4 || m == 6 || m == 9 || m == 11)
        return (d<=30);
    return true;
}
///--------------------------
std::string Date::get_date(void)
{
    string str;
    stringstream n; /// conversion int => string
    n<<m_jours<<"/" <<m_mois<<"/" <<m_annees<<".";
    n>>str;
    return str;
}
///*******************************************************
std::ostream& operator<<(std::ostream& flux, Date& date)
{
    flux << date.get_date() << "\n";
    return flux;
}
///--------------------------

