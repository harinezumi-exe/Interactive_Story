// Interaktywne opowiadanie
// Autor: Anna Jaroszyńska, klasa 2c ZSŁ, 18 maja 2020
// Projekt na zaliczenie drugiego semestru PAIPów - program w C++
// Program w formie interaktywnego opowiadania, którego treść wyświetlana jest w CLI
// Za pomocą którego użytkownik dokonuje interakcji z programem
// Historia ma wiele zakończeń, zależnie od wyborów użytkownika
// Wprowadajac dane nie należy uwzględniać polskich znaków ani wielkich liter czy znaków interpunkcyjnych.


#include <iostream>
#include <Windows.h>
#include <WinBase.h>
#include <chrono>
#include <thread>
#include <cstdlib>

using namespace std;
using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono_literals; // jednostki czasu
using std::chrono::system_clock;  // jakbym jednak chciala uzyc sleep_until do ktorego potrzeba zegara systemowego



// Globalne zmienne

string nameReader;
string firstTurn;
int scoreTV = 0;



// Przywołanie wszystkich funkcji, żeby się program nie gubił

void howDidIDo(int scoreTV), tvInterview(), enteringTheTreasury(), sfinxReacc(string sfinxAnswer), sfinxRiddle(), monuments(),
sarcophagus(), goingDownstairs(), firstFork(string firstTurn), backToTheBeginning(), wakingUpAtTheMurderers(), electricChair(),
shot(), actionBeforeTheSteepStairs(int beforeTheSteepStairs), chamberWhatToWatch(int exploringTheChamber), sfinxIsAlive(int shouldIStayOrShouldIGo),
convoWithTheMurderer(int attitudeTowardsTheKidnaper), tvFactCheck(int questionNmbr, int TVQuestion);



int main() {

    // Imię użytkownika

    cout << "Jak masz na imie? ";

    cin >> nameReader;

    // Uzyskanie wartości zmiennej środowiskowej Windowsa %COMPUTERNAME%

    TCHAR hostName[256];
    DWORD hostName_len = 256;
    GetComputerName(hostName, &hostName_len);

    // Wstęp i instrukcje

    cout << "Witaj " << nameReader << "! Ja nazywam sie " << hostName << " i chce cie zaprosic do udzialu w pewnej historii." << endl;

    cout << endl;

    cout << "Przepraszam za brak polskich znakow, ale cmd ma z nimi problem :/" << endl;

    cout << endl;

    cout << "Sterowanie:" << endl;
    cout << "1. Akapity pojawiaja sie automatycznie." << endl;
    cout << "2. Wybierajac opcje wpisz jej numer." << endl;
    cout << "3. Wpisujac nie uzywaj polskich znakow, znakow interpunkcyjnych ani wielkich liter." << endl;

    sleep_for(2s);
    cout << endl;

    // Początek historii

    cout << "To byla twoja pierwsza praca. Wczesniej oczywiscie zdarzalo ci sie byc zatrudnionym, ale to bardziej przez przypadek." << endl;
    cout << "Prace sezonowe, ulotki, chyba raz nawet jakis staz w korporacji sie przytrafil. Glowne zadanie: parzenie kawy." << endl;
    cout << "Teraz jednak bylo inaczej. W koncu powazna praca na powaznym stanowisku. Mama byla dumna, gdy o tym uslyszala." << endl;
    cout << "No i do tego w branzy, ktora pokrywa sie z twoja pasja i wyksztalceniem. Konczac archeologie znajomi i rodzina" << endl;
    cout << "wrozyli ci tylko prace w ktorejs ze znanych sieci restauracji fast - foodowych, ewentualnie, jak sie poszczesci," << endl;
    cout << "franczyze Zabki. A tu prosze, zaraz po studiach pojawila sie mozliwosc pracy w biurze podrozy jako rezydent w Egipcie." << endl;
    cout << "Fortuna nareszcie sie do ciebie usmiechnela - historia i kultura starozytnego Egiptu to twoj konik." << endl;

    sleep_for(4s);
    cout << endl;

    cout << "Dlatego tez usmiech nie znikal z twojej twarzy w drodze do pracy. Dzisiaj bowiem konczyl sie okres probno-szkoleniowy" << endl;
    cout << "i masz, wraz z jednym z przewodnikow, leciec do Kairu. On na dwa tygodnie, zeby pokazac ci co i jak, zapoznac" << endl;
    cout << "z lokalnymi przedstawicielami biura i oprowadzic pare wycieczek po piramidach - a ty na caly sezon, moze nawet" << endl;
    cout << "i dluzej. To byl zdecydowanie jeden z najlepszych dni twojego zycia, jakkolwiek patetycznie by to nie brzmialo." << endl;

    sleep_for(3s);
    cout << endl;
    
    cout << "Czujesz palace promienie slonca na swoim karku. Ocierasz wierzchem dloni pot splywajacy ci po czole i zastanawiasz sie" << endl;
    cout << "ile jeszcze bedziecie czekac na wasza kolej. Oczywiscie, super ze Tomek zgodzil sie zabrac cie na wycieczke po" << endl;
    cout << "piramidach razem z jakas wycieczka, ale nie wspominal, ze bedziecie stac w kolejce 2 godziny na sloncu. No coz, musisz" << endl;
    cout << "wytrzymac. Szkoda tylko, ze nie masz jedzenia, a woda ci sie wlasnie skonczyla. Dobrze, ze przynajmniej jestes" << endl;
    cout << "z Tomkiemi wczasowiczami. Nie zostawia cie samego jak sie zle poczujesz." << endl;

    sleep_for(3s);
    cout << endl;

    cout << "Nareszcie jestescie w srodku! Nigdy wczesniej cien nie wydawal ci sie takim blogoslawienstwem. Czujesz przyjemny chlod" << endl;
    cout << "kamieni od razu sie lepiej czujesz. Warto bylo czekac tyle na wejscie. Idziecie szerokim korytarzem. Tomek opowiada o" << endl;
    cout << "pochowanym tu faraonie i kresli ogolny zarys tego, jak wygladal w tych czasach Egipt, ale szybko przestajesz go sluchac." << endl;
    cout << "Historie starozytnego Egiptu znasz na wyrywki. Poza tym twoja uwage w calosci zajmuja hieroglify i malunki na scianach." << endl;
    cout << "Oswietlone delikatnym blaskiem jarzeniowek symbole przeniosly cie do Kraju Faraonow. Widzisz oczami duszy wszystkie" << endl;
    cout << "opisywane sceny, a zwyklymi oczami, ze twoja grupa gdzies zniknela. Niestety musisz sie oderwac od marzen i ich dogonic." << endl;
    cout << "Biegniesz korytarzem i czujesz uklucie strachu - a co jesli sie tu zgubisz? I dopiero teraz zauwazasz glod i pragnienie." << endl;
    cout << "Nie jest ciekawie. Biegniesz zastanawiajac sie co zrobisz, jesli ich serio nie znajdziesz, przez co nie zwracasz zbytnio" << endl;
    cout << "uwagi gdzie wlasciwie biegniesz. Nagly widok sciany wyrwal cie z rozmyslan - jestes na rozwidleniu. Skrecasz w..." << endl;
    cout << "[prawo / lewo] " << endl;

    cout << endl;


    // Rozwidlenie - pierwsza decyzja

    cin >> firstTurn;

    firstFork(firstTurn);
}

// Decyzja na pierwszym rozwidleniu

void firstFork(string firstTurn) {

    // Skręt w prawo

    if (firstTurn == "prawo")
    {
        cout << endl;

        cout << "w waski, wijacy sie w dol korytarz. Tutaj juz nie ma ani hieroglifow, ani malowidel na scianach. 'To jest jeszcze" << endl;
        cout << "normalne. Nie wszystkie korytarze byly ozdabiane. Troche gorzej, ze nie ma jarzeniowek' - myslisz. Zatrzymujesz sie" << endl;
        cout << "przed ostrym skretem w lewo i..." << endl;

        sleep_for(3s);
        cout << endl;

        cout << "1. Wyjmujesz latarke i probujesz zorientowac sie gdzie jestes na mapie." << endl;
        cout << "2. Skrecasz w lewo." << endl;
        cout << "3. Cofasz sie" << endl;

        cout << endl;

        int firstNarrowCorridorWhereTo;
        cin >> firstNarrowCorridorWhereTo;

        cout << endl;

        // Sprawdzenie odpowiedzi i odpowiednia reakcja na nią.
        // Jeśli podana wartość nie mieści się w zakresie lub
        // nie jest data type int wprowadzona wartość będzie
        // zignorowana i odrzucona, a użytkownik zostanie zapytany
        // o jej ponowne wprowadzenie.
        // Funkcja cin.ignore() będzie 'wyciągać' i ignorować
        // kolejno 65536 znaków z input stream, zakładam, że nikt
        // nie będzie wpiswał więcej znaków.
        // Aby nie było tego limitu można użyć numeric_limits<streamsize>::max(),
        // ale w zależności od compilera ma tendencje do powodowania błędów,
        // więc bezpieczniej użyc poprostu wysokiej liczby.
        // Pętla while zapewnia przejście do dalszych częsci kodu
        // dopiero po uzyskaniu prawidłowej wartości.

        int i = 1;

        while (i > 0)
        {
            if (firstNarrowCorridorWhereTo == 1)
            {
                cout << "Nie ma mapy." << endl;
                cout << "O nie, musiala mi wypasc podczas biegu - myslisz. Co robisz?" << endl;

                cout << endl;

                cin >> firstNarrowCorridorWhereTo;
            }

            else if (firstNarrowCorridorWhereTo == 2)
            {
                i--;
                backToTheBeginning();
            }

            else if (firstNarrowCorridorWhereTo == 3)
            {
                i--;

                cout << "Wracasz na rozwidlenie. Tym razem skrecasz w... [prawo/lewo]" << endl;

                cout << endl;

                cin >> firstTurn;
                firstFork(firstTurn);
            }
            else
            {
                cin.clear();
                cin.ignore(65536, '\n');

                cout << "ERROR1: Wrong argument. Enter a correct one: ";
                cin >> firstNarrowCorridorWhereTo;
            }

        }

    }
    else if (firstTurn == "lewo")
    {
        cout << "idziesz kawalek i widzisz ogromne, strome schody prowadzace w dol. Decydujesz sie..." << endl;

        cout << endl;

        cout << "1. Sprawdzic mape - nie ma sensu meczyc sie ze schodami jesli to zla droga." << endl;
        cout << "2. Zawrocic." << endl;
        cout << "3. Zejsc na dol" << endl;

        cout << endl;

        int beforeTheSteepStairs;
        cin >> beforeTheSteepStairs;

        actionBeforeTheSteepStairs(beforeTheSteepStairs);
    }

    else
    {
        // W przypadku nieprawidłowej wartości
        // zostanie ona wpisana jeszcze raz, a funkcja ponownie uruchomiona,
        // dzięki temu można popełnić wiele błędów

        cout << "ERROR1: Wrong argument. Enter a correct one:" << endl;

        cout << endl;

        cin >> firstTurn;
        firstFork(firstTurn);
    }
}



// ----- WĄSKI KORYTARZ I SPOTKANIE Z MORDERCĄ -----

// Powrot pod drzwi piramidy, spotkanie 

void backToTheBeginning() {

    cout << "Okazalo sie, ze ta droga prowadzi na poczatek trasy. Zauwazasz, ze drzwi sa zamkniete, ale szybko przestajesz o tym" << endl;
    cout << "myslec, bo wspaniale ozdobione sciany znowu przykuly twoja uwage. Zauwazasz tym razem cos dziwnego. To lacinski" << endl;
    cout << "alfabet! Ale jak to mozliwe? Przeciez ta piramida zostala zbudowana przed powstaniem Imperium Rzymskiego. Nie wygladaja" << endl;
    cout << "jak slowo, bardziej jak litery w przypadkowej kolejnosci. Zauwazasz troche nizej od tajemniczego napisu 'ROT-13'" << endl;

    sleep_for(2s);
    cout << endl;
    
    cout << "Chcesz odczytac i miec 2 minuty na rozszyfrowanie napisu przed dalszym ciagiem historii? [tak/nie]" << endl;
    
    cout << endl;

    string readEncryptedMessage;
    cin >> readEncryptedMessage;
    cout << endl;

    // Szyfr Cezara, 2 min powinny wystarczyć na wyszukanie
    // strony deszyfrującej

    if (readEncryptedMessage == "tak")
    {
        cout << "CEBFMR B QBOEN BPRAR" << endl;
        cout << endl;
        sleep_for(120s);

    }

    cout << "Zastanawia cie, skad sie tu wzial ten napis." << endl;
    
    cout << endl;
    sleep_for(2s);
    
    cout << "Czy wczesniej go nie bylo?" << endl;
    
    cout << endl;
    sleep_for(2s);
    
    cout << "A moze poprostu go nie zauwazyl..." << endl;
    cout << "Czujesz mocne uderzenie w tyl glowy i tracisz przytomnosc." << endl;
    
    cout << endl;

    wakingUpAtTheMurderers();
}



// Pobudka u mordercy

void wakingUpAtTheMurderers() {

    cout << endl;

    cout << "Budzisz sie z potwornym uczuciem glodu, pragnienia i ogromnym bolem glowy. Otwierasz oczy i rozgladasz sie dookola." << endl;

    sleep_for(2s);
    cout << endl;

    cout << "Jestes w jakims opuszczonym budynku. Pachnie tu plesnia i stechlizna. Jest noc. Zza wybitego okna slyszysz grzmot." << endl;

    sleep_for(2s);
    cout << endl;

    cout << "'Nie ma opcji, ze jest tu prad w taka pogode' - myslisz, mimowolnie patrzac na niedzialajaca lampe. Probojesz wstac," << endl;
    cout << "ale mocno zwiazane sznury uniemozliwiaja ci to. Siedzisz i zastanawiasz sie co sie dzieje." << endl;

    sleep_for(2s);
    cout << endl;

    cout << "Zza plecow slyszysz kroki i zaczynasz panikowac." << endl;

    sleep_for(2s);
    cout << endl;

    cout << "Twoim oczom ukazuje sie mezczyzna w srednim wieku. Wyglada na Europejczyka, co cie troche zaskakuje. Widzisz triumf" << endl;
    cout << "w jego oczach." << endl;

    sleep_for(4s);
    cout << endl;

    cout << "Witaj " << nameReader << ", pewnie zastanawiasz sie, kim jestem oraz czemu cie tu sprowadzilem - mowiac" << endl;
    cout << "to zdejmuje material kneblujacy ci usta." << endl;

    cout << endl;

    cout << "1. Wypusc mnie! Pomocy!!! Ratunkuuuuuu!" << endl;
    cout << "2. Tak, wytlumacz mi to" << endl;

    cout << endl;

    int attitudeTowardsTheKidnaper;
    cin >> attitudeTowardsTheKidnaper;

    cout << endl;

    convoWithTheMurderer(attitudeTowardsTheKidnaper);

}

void convoWithTheMurderer(int attitudeTowardsTheKidnaper) 
{
    if (attitudeTowardsTheKidnaper == 1)
    {
        cout << "Mezczyzna spowrotem zaklada material na twoje usta." << endl;

        sleep_for(2s);
        cout << endl;

        cout << "'Nie ma sensu krzyczec, nikt cie tu nie uslyszy. Ale skoro nie chcesz mnie wysluchac, to trudno. Spodziewalem sie," << endl;
        cout << "ze zareagujesz tak, jak inni' - mowi." << endl;

        sleep_for(3s);
        shot();
    }

    else if (attitudeTowardsTheKidnaper == 2)
    {

        cout << "Spojrzal sie na ciebie zdumiony." << endl;

        sleep_for(1s);
        cout << endl;

        cout << "'No no no, " << nameReader << " zaskakujesz mnie. Jestes pierwsza osoba, ktora chce mnie wysluchac, a nie bezmyslnie" << endl;
        cout << "wola o pomoc. W takim razie z checia ci opowiem o sobie.'" << endl;

        sleep_for(3s);
        cout << endl;

        cout << "'Pochodze tak jak ty, z Polski. Wychowywalem sie bez rodzicow. Byli oni dzialaczami opozycji w czasach PRL. Jak sie" << endl;
        cout << "pewnie domyslasz, rzad nie byl fanem ich dzialan, tak jak reszty opozycji. Starano sie uciszyc ich wszelkimi" << endl;
        cout << "dostepnymi sposobami. Udalo im sie dopasc moich rodzicow. Agenci SB zabili ich w ich wlasnym mieszkaniu i" << endl;
        cout << "upozorowali to tak, jakby zwykli wlamywacze zastali w domu wlascicieli i spanikowali. Mialem wtedy 5 lat i bylem u" << endl;
        cout << "babci, wiec przezylem. Przez wiekszosc mojego zycia wierzylem w historie o wlamywaczach, ale 2 lata temu odkrylem" << endl;
        cout << "prawde dzieki koledze, ktory zajmuje sie archiwami Sluzby Bezpieczenstwa. Wyobraz sobie, ze po prawie piecdziesieciu" << endl;
        cout << "latach zycia dowiadujesz sie, ze panstwo zabilo twoich rodzicow i nikt nie ponosi za to odpowiedzialnosci." << endl;
        cout << "Postanowilem to zmienic. Dlatego wlasnie cie tu sprowadzilem. Jestes ostatnia osoba na liscie. Tak oczywiscie, nie" << endl;
        cout << "jestes bylym agentem SB, ale twoj ojciec byl. Twoj ojciec nie zyje, wiec ty musisz odpowiedziec za jego zbrodnie." << endl;
        cout << "Spotykamy sie w Egipcie, poniewaz moj egipski przyjaciel zalatwial dla mnie krzeslo elektryczne na ta okazje," << endl;
        cout << "a ty od niedawna rezydujesz tutaj. Czy to nie wspanialy zbieg okolicznosci?'" << endl;

        sleep_for(10s);
        cout << endl;

        cout << "'Jednakze dzieki temu, ze sluchasz mojej historii, pozwole ci wybrac sposob, w jaki umrzesz. Masz dwie opcje:" << endl;

        cout << endl;

        cout << "1. Strzal pistoletu" << endl;
        cout << "2. Krzeslo elektryczne" << endl;

        sleep_for(2s);
        cout << endl;

        cout << "Ta historia cie zszokowala. Nie potrafisz wydobyc z siebie slowa, masz milion mysli w glowie." << endl;

        sleep_for(3s);
        cout << endl;

        cout << "Cos ci nie pasuje w tej historii, chcesz zaprotestowac, ale nie dajesz rady zebrac mysli." << endl;
        cout << "Przerazenie, szok i zmeczenie zwyciezaja. Chcesz juz tylko, zeby to sie skonczylo, wiec wybierasz: ";

        int deathCause;
        int i = 1;

        cin >> deathCause;

        while (i > 0)
        {
            if (deathCause == 1)
            {
                i--;
                shot();
            }
            else if (deathCause == 2)
            {
                i--;
                electricChair();
            }
            else
            {
                cin.clear();
                cin.ignore(65536, '\n');

                cout << "ERROR1: Wrong argument. Enter a correct one: ";

                cin >> deathCause;
            }
        }
    }
    else
    {
        cin.clear();
        cin.ignore(65536, '\n');

        cout << "ERROR1: Wrong argument. Enter a correct one: ";

        cin >> attitudeTowardsTheKidnaper;
        convoWithTheMurderer(attitudeTowardsTheKidnaper);
    }
}


// Strzał

void shot() {

    cout << endl;

    cout << "Wyciaga pistolet i strzela ci w glowe." << endl;

    sleep_for(2s);
    cout << endl;
    cout << "Umierasz." << endl;

    sleep_for(2s);
    cout << endl;
    cout << endl;

    cout << "Nie jest to jedyne dostepne zakonczenie tej historii" << endl;
}


// Krzesło

void electricChair() {

    cout << "'Najpierw mnie wysluchujesz, pozniej wybierasz krzeslo przygotowane specjalnie dla ciebie. Zaczynam cie lubic.'" << endl;

    cout << endl;

    cout << "Odwiazuje cie od krzesla i prowadzi cie pod sciane, ktora przed chwila znajdowala sie za twoimi plecami. Na widok" << endl;
    cout << "krzesla elektrycznego masz przed oczami ostatnia scene z filmu 'Zielona mila'. Ogarnia cie przerazenie, chcesz uciekac" << endl;
    cout << "ale mezczyzna mocno cie trzyma. Siadasz. Mezczyzna podpina ci elektrody do nogi i glowy. Staje przy przycisku, zapewne" << endl;
    cout << "wlaczajacym przeplyw pradu. Naciska." << endl;

    sleep_for(10s);
    cout << endl;

    cout << "Slyszysz huk rozwalanych drzwi. Do pomieszczenia wbiega odzdzial policjantow. Chwytaja morderce a ciebie uwalniaja." << endl;

    sleep_for(2s);
    cout << endl;

    cout << "'Masz szczescie, ze nie ma pradu w budynku' - odzywa sie do ciebie po arabsku policjant." << endl;

    cout << endl;

    cout << "Wszystko dzieje sie tak szybko, migaja ci przed oczami twarze roznych osob, slyszysz jakies komendy po arabsku, jakis" << endl;
    cout << "lekarz chyba cos do ciebie mowi. Nie zwracasz na nic uwagi. W glowie masz tylko jedna mysl:" << endl;

    sleep_for(3s);
    cout << endl;

    cout << "'Uratowala mnie burza'" << endl;

    sleep_for(2s);
    cout << endl;
    cout << endl;

    cout << "Nie jest to jedyne dostepne zakonczenie tej historii." << endl;

}





// ----- STROME SCHODY I ZEJSCIE DO KOMNATY -----



// Decyzja przed schodami

    void actionBeforeTheSteepStairs(int beforeTheSteepStairs)
    {
        if (beforeTheSteepStairs == 1)
        {
            cout << "Nie ma mapy." << endl;
            cout << "O nie, musiala mi wypasc podczas biegu - myslisz. Co robisz?" << endl;

            cout << endl;
            
            cin >> beforeTheSteepStairs;

            actionBeforeTheSteepStairs(beforeTheSteepStairs);
        }

        else if (beforeTheSteepStairs == 2)
        {
            cout << "Wracasz na rozwidlenie. Tym razem skrecasz w... [prawo/lewo]" << endl;

            cout << endl;

            cin >> firstTurn;
            firstFork(firstTurn);
        }

        else if (beforeTheSteepStairs == 3) {

            goingDownstairs();

            cout << endl;
        }
        else {
            cin.clear();
            cin.ignore(65536, '\n');
            
            cout << "ERROR1: Wrong argument. Enter a correct one: ";
            
            cin >> beforeTheSteepStairs;
            actionBeforeTheSteepStairs(beforeTheSteepStairs);
            
            cout << endl;
        }
    }


// Zejscie do komnaty

    void goingDownstairs() {

        cout << endl;

        cout << "Idziesz schodami w dol. Z kazdym pokononanym stopniem jest coraz ciemniej, wiesz, ze oddalasz sie od trasy turystycznej." << endl;
        cout << "'Jakim cudem mozna tak latwo sie tu dostac? Moze nie wiedza, ze jest tu takie miejsce? Jak w ogole tu dotrzec? Przez" << endl;
        cout << "ten bieg na oslep nie pamietam trasy'" << endl;

        sleep_for(3s);
        cout << endl;

        cout << "Wyjmujesz latarke i oswietlasz sobie droge." << endl;

        sleep_for(1s);
        cout << endl;

        cout << "Parenascie stopni dalej twoim oczom ukazuje sie wielka komnata. Widzisz wspaniale kolumny, posagi jakis bogow lub" << endl;
        cout << "demonow, ozdoby na scianach i hieroglify. Na srodku stoi sarkofag." << endl;

        sleep_for(2s);
        cout << endl;

        cout << "'Przeciez w tej piramidzie nie ma pogrzebanych faraonow. A nawet jesli by byli, to przeciez te komnaty bylyby na trasie'" << endl;

        cout << endl;

        cout << "Podchodzisz obejrzec blizej:" << endl;

        cout << endl;

        cout << "1. sarkofag" << endl;
        cout << "2. posagi" << endl;

        cout << endl;

        int exploringTheChamber;
        cin >> exploringTheChamber;

        chamberWhatToWatch(exploringTheChamber);
    }


// Co obejrzeć w komnacie

    void chamberWhatToWatch(int exploringTheChamber)
    {
        if (exploringTheChamber == 1)
        {
            sarcophagus();
        }

        else if (exploringTheChamber == 2)
        {
            monuments();
        }
        else
        {
            cin.clear();
            cin.ignore(65536, '\n');

            cout << "ERROR1: Wrong argument. Enter a correct one: ";

            cin >> exploringTheChamber;

            chamberWhatToWatch(exploringTheChamber);
        }
    }


// Ogladanie sarkofagu

    void sarcophagus() {
    
        cout << endl;
        cout << endl;

        cout << "Jest pieknie zachowany. Kolory nie sa kompletnie wyplowiale, mnostwo zlotych zdobien. Obok widzisz pare amuletow i ofiar" << endl;
        cout << "majacych pomoc wladcy w zyciu posmiertnym. Szukasz jakis znakow, ktore pomoglyby ci w zidentyfikowaniu mumii." << endl;
    
        sleep_for(3s);
            cout << endl;

        cout << "Dostrzegasz napis na jednym z bokow sarkofagu i probujesz odczytac." << endl;

        sleep_for(2s);
        cout << endl;

        cout << "Ne..." << endl;

        sleep_for(1s);
        cout << endl;

        cout << "Nefe..." << endl;

        sleep_for(1s);
        cout << endl;

        cout << "'Neferkare? To niemozliwe! Jego grobowiec nie zostal jeszcze znaleziony! Niektorzy badacze nawet neguja istnienie" << endl;
        cout << "tego wladcy!'" << endl;

        sleep_for(3s);
        cout << endl;

        cout << "'Czyzbym w trakcie biegu na oslep odkry...'" << endl;

        sleep_for(1s);
        cout << endl;

        cout << "Czujesz mocne uderzenie w tyl glowy i tracisz przytomnosc." << endl;

        wakingUpAtTheMurderers();

    }


// Oglądanie posagów

    void monuments() {
    
        cout << endl;
        cout << endl;
    
        cout << "Uwaznie studiujesz postac znajdujaca sie najblizej wejscia. Ma cialo lwa i glowe czlowieka. Rozpoznajesz w niej Sfinksa" << endl;
    
        cout << endl;
    
        cout << "'A wiec to ty strzezesz skarbow tego nieznajomego wladcy, co?' - pytasz sie stwora ogladajac go z kazdej strony." << endl;
    
        sleep_for(3s);
        cout << endl;
    
        cout << "Nagle jej glowa sie poruszyla. Obrocila sie i spojrzala na ciebie. Zmrozilo ci krew w zylach." << endl;
    
        sleep_for(1s);
        cout << endl;
    
        cout << "'To cos zyje?' - przemknelo ci przez mysl." << endl;
    
        sleep_for(1s);
        cout << endl;
    
        cout << "'Tak, to ja strzege skarbca mojego pana przed takimi jak ty. Wielu przed toba probowalo go okrasc, ale zaden nie" << endl;
        cout << "przezyl. Moj pan, Neferkare, postanowil, ze wejsc do skarbca bedzie mogl tylko ten, kto udowodni swoja madrasc" << endl;
        cout << "prawidlowo odpowiadajac na zagadke. W kazdym innym wypadku intruz musi zginac. Co wybierasz?'" << endl;
    
        sleep_for(3s);
        cout << endl;
    
        cout << "Czujesz przerazenie. Na rozmowie o prace nikt cie nie uprzedzal, ze jednym z obowiazkow jest przechytrzenie Sfinksa." << endl;
        cout << "Musisz cos jednak wybrac: " << endl;
    
        cout << endl;
    
        cout << "1. Zagadka" << endl;
        cout << "2. Ucieczka" << endl;
    
        cout << endl;
    
        int shouldIStayOrShouldIGo;
        cin >> shouldIStayOrShouldIGo;
    
        sfinxIsAlive(shouldIStayOrShouldIGo);
    }


// Rozmowa ze Sfinksem

    void sfinxIsAlive(int shouldIStayOrShouldIGo)
    {
        if (shouldIStayOrShouldIGo == 1)
        {
            sfinxRiddle();
        }
        
        else if (shouldIStayOrShouldIGo == 2)
        {
            cout << "Odwracasz sie i biegniesz spowrotem na schody. Nie dotykasz nawet pierwszego stopnia gdy czujesz jak ogromne cialo" << endl;
            cout << "stwora przygniata cie do ziemi i dusi." << endl;
    
            sleep_for(2s);
            cout << endl;
    
            cout << "Umierasz." << endl;
    
            sleep_for(2s);
            cout << endl;
            cout << endl;
    
            cout << "Nie jest to jedyne dostepne zakonczenie tej historii." << endl;
    
        }
        else
        {
            cin.clear();
            cin.ignore(65536, '\n');

            cout << "ERROR1: Wrong argument. Enter a correct one: ";
            cin >> shouldIStayOrShouldIGo;

            sfinxIsAlive(shouldIStayOrShouldIGo);
        }

    }


// Zagadka Sfinksa

    void sfinxRiddle() {
    
        cout << endl;
    
        cout << "'Co to za zwierze, obdarzone glosem, co rano chodzi na czworakach, w poludnie na dwoch nogach, a wieczorem na trzech?'" << endl;
        
        cout << endl;
    
        cout << "[1 slowo, bez polskich znakow]" << endl;
    
        string sfinxAnswer;
        cin >> sfinxAnswer;
    
        sfinxReacc(sfinxAnswer);
    
    }

// Sprawdzenie odpowiedzi

    void sfinxReacc(string sfinxAnswer)
    {
        if (sfinxAnswer != "czlowiek")
        {
            
            cout << endl;
    
            cout << "W mgnieniu oka Sfinks uzywa i zaskakuje z podwyzszenia. Czujesz jak ogromne cialo stwora przygniata cie do ziemi i dusi." << endl;
    
            sleep_for(3s);
            cout << endl;
    
            cout << "Umierasz." << endl;
    
            sleep_for(2s);
            cout << endl;
            cout << endl;
    
            cout << "Nie jest to jedyne dostepne zakonczenie tej historii." << endl;
    
        }
    
        else
        {
            enteringTheTreasury();
        }
    }



// Wejście do skarbca

    void enteringTheTreasury() {
    
        cout << endl;
    
        cout << "'Gratuluje dobrej odpowiedzi. Skarbiec jest teraz twoj' - mowiac to Sfinks wstaje i odslania przed toba ukryte wejscie" << endl;
        cout << "do kolejnej komnaty. Wchodzi tam i ginie w mroku. Wchodzisz do srodka. Nie zauwazasz nigdzie Sfinksa, za to widzisz" << endl;
        cout << "mnostwo skarbow: zlota, srebra, kamieni szlachetnych, ozdobnej porcelany. Jedna sciana jest calkowicie przeznaczona na" << endl;
        cout << "zwoje papirusu. Siegasz po jeden i odkrywasz, ze sa to kroniki z czasow panowania Neferkare i jego poprzednikow." << endl;
    
        sleep_for(3s);
        cout << endl;
    
        cout << "Spedzasz kolejne godziny przegladajac zbiory skarbca. Jest to niespotykane odkrycie - grobowiec nie jest ofiara" << endl;
        cout << "zlodziei, wszystko jest zachowane w niesomowitej kondycji i dostarczy naukowcom materialu na wiele lat badan." << endl;
    
        sleep_for(2s);
        cout << endl;
    
        cout << "W trakcie ogladania zdobionych urn stawiasz noge na plycie, ktora zapada sie pod wplywem nacisku. Uruchamia jakis" << endl;
        cout << "mechanizm i jedna ze scian odkrywa wyjscie z piramidy." << endl;
    
        sleep_for(2s);
        cout << endl;
    
        cout << "'Tedy pewnie wyszedl Sfinks' - myslisz sobie i postanawiasz pojsc w jego slady.'" << endl;
    
        sleep_for(2s);
        cout << endl;
    
        cout << "Znowu czujesz palace promienie Slonca. Brakowalo ci ich. Dopiero teraz odczuwasz, jak wraca uczucie glodu, zmeczenia i" << endl;
        cout << "pragnienia. Idziesz w kierunku kas z biletami." << endl;
    
        sleep_for(2s);
        cout << endl;
    
        cout << "Widzisz kilka radiowozow i grupe policjantow. Aresztuja jakiegos mezczyzne w srednim wieku, wygladajacego na" << endl;
        cout << "Europejczyka. Podchodzisz do jednego ze strozow prawa i zaczynasz opowiadac o swoim odkryciu. Policjant przerywa ci i" << endl;
        cout << "mowi, ze aresztowali seryjnego morderce, ktory chcial cie zabic." << endl;
    
        sleep_for(2s);
        cout << endl;
    
        cout << "Nie mozesz w to uwierzyc." << endl;
    
        sleep_for(3s);
        cout << endl;
    
        cout << "'Ktos chcial mnie zabic?'" << endl;
    
        sleep_for(2s);
        cout << endl;
    
        cout << "Patrzysz na aresztowanego. Ten podnosi glowe i zaczyna krzyczec do ciebie po polsku:" << endl;
    
        cout << endl;
    
        cout << "'Ty potworze! Twoj ojciec zabil moich rodzicow i nie spotkala go zadna kara! Zabije cie! Odpowiesz za jego zbrodnie!'" << endl;
    
        sleep_for(2s);
        cout << endl;
        
        cout << "Nie rozumiesz o czym on mowi. Twoj ojciec byl lekarzem, studiowal i wieksza czesc zycia spedzil w Kanadzie." << endl;
    
        cout << endl;
    
        cout << "Policjant zaprowadza cie do karetki, gdzie zajmuje sie toba ratownik." << endl;
    
        sleep_for(3s);
        cout << endl;
        cout << endl;
    
        cout << "Tydzien pozniej." << endl;
    
        cout << endl;
    
        cout << "Caly swiat uslyszal o twoim odkryciu. Egiptolodzy i archeolodzy z calego swiata zjechali sie, zeby zbadac grobowiec" << endl;
        cout << "Neferkare." << endl;
    
        sleep_for(2s);
        cout << endl;
    
        cout << "Okazalo sie, ze morderca pomylil osoby. Istnieje widocznie inna osoba o imieniu '" << nameReader << "' i twoim" << endl;
        cout << "nazwisku, ktorej ojciec zabil jego rodzicow." << endl;
    
        sleep_for(2s);
        cout << endl;
    
        cout << "Szykujesz sie na przemowe, ktora masz zrobic razem z Ministrem Starozytnosci dla egipskiej telewizji. W ramach" << endl;
        cout << "podziekowania otrzymales od tego Ministerstwa nagrode finansowa i mozliwe, ze zostaniesz, aby razem z innymi" << endl;
        cout << "archeologami zajac sie poznaniem nowego grobowca." << endl;
    
        sleep_for(3s);
        cout << endl;
    
        cout << "A mowili, ze archeologia to slaby kierunek studiow." << endl;
    
        tvInterview();
    }


// Wystąpienie w telewizji
    
    void tvInterview() {
    
        cout << endl;
        cout << endl;
    
        cout << "Podczas przemowienia:" << endl;
    
        sleep_for(2s);
        cout << endl;
    
        cout << "'Tydzien temu dokonano tutaj niezwykle waznego odkrycia. Poznalismy wreszcie miejsce pochowku faraona Nebka, tym samym" << endl;
        cout << "ostatecznie potwierdzajac jego istnienie. Sam grobowiec jak i skarbiec sa zachowane w swietnym stanie. Zbiory skarbow," << endl;
        cout << "amuletow i dokumentow posluza za material badawczy i liczymy, ze przybliza nam wiecej szczegolow z dawnych losow i" << endl;
        cout << "zwyczajow panujacych w starozytnym Egipcie. Jest to bez watpienia jedno z najwazniejszych odkryc ostatnich czasow i" << endl;
        cout << "wywolalo wielkie poruszenie w swiecie historykow i archeologow. Jest z nami " << nameReader << " z Polski," << endl;
        cout << "odkrywca tego wspanialego obiektu, z wyksztalcenia archeolog ze specjalizacja w historii starozytnego Egiptu. Nasi" << endl;
        cout << "widzowie maja wiele pytan dotyczacych Neferkare, gdyz nie wiedzielismy o nim do tej pory za wiele, wiec w tym momencie" << endl;
        cout << "udostepniamy mozliwosc polaczenia sie z nami i " << nameReader << " odpowie na wasze watpliwosci." << endl;
    
        sleep_for(10s);
        cout << endl;
        
    
        cout << "Pierwszy widz sie laczy i pyta:" << endl;
    
        cout << endl;
        int questionNmbr = 1;
    
        cout << "'W ktorym roku panowal?'" << endl;
    
        cout << endl;
    
        cout << "Neferkare panowal w..." << endl;
        cout << "1) 25 p.n.e" << endl;
        cout << "2) 26 p.n.e" << endl;
        cout << "3) 27 p.n.e" << endl; // poprawna
    
        cout << endl;
    
        int TVQuestion;
        cin >> TVQuestion;
    
        tvFactCheck(questionNmbr, TVQuestion);
    
        cout << "'Z ktorej dysnastii pochodzi?'" << endl;
        questionNmbr++;
    
        cout << endl;
    
        cout << "1) z III" << endl; // poprawna
        cout << "2) z V" << endl;
        cout << "3) z I" << endl;
    
        cout << endl;
    
        cin >> TVQuestion;
    
        tvFactCheck(questionNmbr, TVQuestion);
    
        cout << "'Co oznacza imie 'Nebka'?'" << endl;
    
        cout << endl;
        questionNmbr++;
    
        cout << "1) wladca ka, czyli slonca" << endl;
        cout << "2) wladca ka, czyli duszy" << endl; // poprawnie
        cout << "3) wladca ka, czyli swiatla" << endl;
    
        cout << endl;
        cin >> TVQuestion;
    
        tvFactCheck(questionNmbr, TVQuestion);
    
        cout << "'Nebkara to prenomen, jak brzmialo jego prawdziwe imie?'" << endl;
        questionNmbr++;
    
        cout << endl;
    
        cout << "1) Akhenaten" << endl;
        cout << "2) Sanakht" << endl; // poprawnie
        cout << "3) Amenhotep" << endl;
    
        cout << endl;
    
        cin >> TVQuestion;
    
        tvFactCheck(questionNmbr, TVQuestion);
    
        sleep_for(5s);
    
        howDidIDo(scoreTV);
    }

    // Sprawdzanie odpowiedzi skrócone do jednej funkcji dla oszczędności miejsca.
    // Każde pytanie z osobna ma sprawdzanie i poprawę błędów.

    void tvFactCheck(int questionNmbr, int TVQuestion)
    {
        switch (questionNmbr)
        {
        case 1:
            if (TVQuestion == 3)
            {
                cout << endl;
                cout << "'Dziekujemy, kolejny widz sie z nami laczy.'" << endl;
                scoreTV++;
                cout << endl;
            }
            else if (TVQuestion == 1 || TVQuestion == 2)
            {
                cout << endl;
                cout << "Minister patrzy sie na ciebie dziwnie i mowi '" << nameReader << " oczywiscie ma na mysli 27 p.n.e." << endl;
                cout << "Mamy kolejnego widza na linii.'" << endl;
                cout << endl;
            }
            else
            {
                cin.clear();
                cin.ignore(65536, '\n');

                cout << "ERROR1: Wrong argument. Enter a correct one: ";
                cin >> TVQuestion;
                tvFactCheck(questionNmbr, TVQuestion);
            }
            break;

        case 2:
            if (TVQuestion == 1)
            {
                cout << endl;
                cout << "'Dziekujemy, kolejny widz sie z nami laczy.'" << endl;
                scoreTV++;
                cout << endl;
            }
            else if (TVQuestion == 2 || TVQuestion == 3)
            {
                cout << endl;
                cout << "Minister patrzy sie na ciebie dziwnie i mowi '" << nameReader << " oczywiscie ma na mysli III dynastie." << endl;
                cout << "Mamy kolejnego widza na linii.'" << endl;
                cout << endl;
            }
            else
            {
                cin.clear();
                cin.ignore(65536, '\n');

                cout << "ERROR1: Wrong argument. Enter a correct one: ";
                cin >> TVQuestion;
                tvFactCheck(questionNmbr, TVQuestion);
            }
            break;

        case 3:
            if (TVQuestion == 2)
            {
                cout << endl;
                cout << "'Dziekujemy, kolejny widz sie z nami laczy.'" << endl;
                scoreTV++;
                cout << endl;
            }
            else if (TVQuestion == 1 || TVQuestion == 3)
            {
                cout << endl;
                cout << "Minister patrzy sie na ciebie dziwnie i mowi '" << nameReader << " oczywiscie ma na mysli wladce duszy." << endl;
                cout << "Mamy kolejnego widza na linii.'" << endl;
                cout << endl;
            }
            else
            {
                cin.clear();
                cin.ignore(65536, '\n');

                cout << "ERROR1: Wrong argument. Enter a correct one: ";
                cin >> TVQuestion;
                tvFactCheck(questionNmbr, TVQuestion);
            }
            break;

        case 4:
            if (TVQuestion == 2)
            {
                cout << endl;
                cout << "'Dziekujemy za pytanie.' mowi Minister i patrzy sie na producenta stojacego poza kadrem." << endl;
                scoreTV++;
                cout << endl;
            }
            else if (TVQuestion == 1 || TVQuestion == 3)
            {
                cout << endl;
                cout << "Minister patrzy sie na ciebie dziwnie i mowi '" << nameReader << " oczywiscie ma na mysli Sanakht.'" << endl;
                cout << endl;
            }
            else
            {
                cin.clear();
                cin.ignore(65536, '\n');

                cout << "ERROR1: Wrong argument. Enter a correct one: ";
                cin >> TVQuestion;
                tvFactCheck(questionNmbr, TVQuestion);
            }
            break;

        }
    }


// Analiza odpowiedzi
// 100-75% - pozytywna reakcja; 50-25% - negatywna
// 50% poprawnych - pseudolosowa liczba zdecyduje o reakcji Ministra
    
void howDidIDo(int scoreTV) {
    
    if (scoreTV >= 3)
    {
        cout << "'Dziekujemy wszystkim za zadane pytania, niestety nasz czas antenowy sie konczy.'" << endl;
    
        sleep_for(2s);
        cout << endl;
    
        cout << "Minister dziekuje ci, gratuluje swietnego wystepu i zaprasza do przewodzenia badaniami nad grobowcem." << endl;
    
        sleep_for(2s);
        cout << endl;
        cout << endl;
    
        cout << "Nie jest to jedyne dostepne zakonczenie tej historii." << endl;
    }
    else if (scoreTV == 2)
    {
        scoreTV = rand() % 5;
        howDidIDo(scoreTV);
    }
    else
    {
        cout << "'Przepraszam Panstwa, prosze o wyrozumialosc. Kazdy wystepujacy po raz pierwszy w telewizji i to jeszcze uzywajac" << endl;
        cout << "obcego jezyka ma prawo sie zestresowac. Dziekujemy Panstwu za pytania, niestety nasz czas antenowy sie konczy.'" << endl;
    
        cout << endl;
    
        cout << "Minister dziekuje ci za wystapienie i szybko odchodzi. W tym momencie dzwoni twoj szef i oferuje ci podwyzke." << endl;
    
        sleep_for(2s);
        cout << endl;
        cout << endl;
    
        cout << "Nie jest to jedyne dostepne zakonczenie tej historii." << endl;
    }
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file