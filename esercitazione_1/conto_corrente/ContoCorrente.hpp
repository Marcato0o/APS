// File ContoCorrente.hpp
#ifndef CONTO_CORRENTE_HPP
#define CONTO_CORRRENTE_HPP



using namespace std;

class ContoCorrente {
    public:
        // Constructors
        ContoCorrente() { saldo_cent = 0.0; tasso_interesse = 0; }
        ContoCorrente(double tasso_int) { saldo_cent = 0.0; tasso_interesse = tasso_int; }
        // Getters
        double TassoInteresse() const{ return tasso_interesse; }
        int SaldoInEuro() const { return saldo_cent / 100; }
        unsigned SaldoCentesimi() const { return saldo_cent - SaldoInEuro() * 100; }
        double SaldoInLire() const { return saldo_cent / 100 * EUR_TO_L; }
        // General methods
        void FissaTassoInteresse(double nuovo_tasso) { tasso_interesse = nuovo_tasso; }
        void DepositaEuro(int eur, unsigned cent) { saldo_cent += eur*100 + cent; }
        void PrelevaEuro(unsigned eur, unsigned cent) { saldo_cent -=  (eur * 100 + cent); }
        void AggiornaSaldo() { saldo_cent += ((1 + tasso_interesse) * saldo_cent ); }
        // Class elements
        unsigned saldo_cent;
        double tasso_interesse;
        
        private: 
            const double EUR_TO_L = 1936.27;
};

#endif