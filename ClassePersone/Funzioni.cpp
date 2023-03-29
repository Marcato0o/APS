pair<unsigned, unsigned> CalcolaMeseFrequente(string nome_file) {
    ifstream is(nome_file);
    vector<unsigned> occorrenze(12,0); // Vettore di mesi in cui incremento il mese se lo leggo dal file.
    Persona pers;
    unsigned i;

    while(is >> pers)
        occorrenze[pers.DataNascita().Mese()-1]++;

    for(i = 1;  i < occorrenze.size(); i++) {
        if(occorrenze[i] > occorrenze[max])
            max = i;
    }

    return make_pair(max+1, occorrenze[max]);
}

pair<string, unsigned> CalcolaNomeFrequente(string nome_file) {
    // Creo vettore di coppie(nome, occorrenze), aggiungo un elemento se il nome corrente è nuovo(pushback), incremento il corrispondente se è gia stato inserito.

    ifstream is(nome_file);
    vector<pair<string, unsigned>> occorrenze;
    Persona pers;
    unsigned i, max = 0;
    bool trovato = false;

    while(is >> pers) {
        trovato = false;
        for(i = 0; i < occorrenze.size; i++)
            if (occorrenze[i].first == pers.Nome())
            {
                occorrenze[i].second++;
                trovato = true;
                break;
            }
            if(!trovato)
                occorrenze.pushback(make_pair(pers.Nome(), 1));
    }

    for(i = 1;  i < occorrenze.size(); i++) {
        if(occorrenze[i].second > occorrenze[max].second)
            max = i;
    }

    return occorrenze[max];
}
