#include<bits/stdc++.h>

using namespace std;

const int MaxBadGuesses = 9;
j
const string Word_List[] = {"ability","able","about","above",
"accept","according","account","across","action","activity","actually","address","administration","admit","adult","affect","again","against","agency","agent","agree","agreement","ahead","allow","almost","alone","along","already","also","although","always","among","amount","analysis","and","animal","another","answer","anyone","anything","appear","apply","approach","area","argue","around","arrive","art","article","artist","assume","attack","attention","attorney","audience","author","authority","available","avoid","away","baby","back","ball","bank","bar","base","beat","beautiful","because","become","bed","before","begin","behavior","behind","believe","benefit","best","better","between","beyond","big","bill","billion","black","blood","blue","board","body","book","born","both","box","boy","break","bring","brother","budget","build","building","business","call","camera","campaign","cancer","candidate","capital","car","card","care","career","carry","case","catch","cause","cell","center","central","century","certain","certainly","chair","challenge","chance","change","character","charge","check","child","choice","choose",
"church","citizen","city","civil","claim","class","clear","clearly","close","coach","cold","collection","college","color","come","commercial","common","community","company","compare","computer","concern","condition","conference","consider","consumer","contain","continue","control","cost","could","country","couple","course","court","cover","create","crime","cultural","culture","cup","current","customer","cut","dark","data","daughter","day","dead","deal","death","debate","decade","decide","decision","deep","defense","degree","Democrat","democratic","describe","design","despite","detail","determine","develop","development","die","difference","different","difficult","dinner","direction","director","discover","discuss","discussion","disease","doctor","dog","door","down","draw","dream","drive","drop","drug","during","each","early","east","easy","eat","economic","economy","edge","education","effect","effort","eight","either","election","else","employee","end","energy","enjoy","enough","enter","entire","environment","environmental","especially","establish","even","evening","event","ever","every","everybody","everyone","everything","evidence","exactly","example","executive","exist",
"expect","experience","expert","explain","eye","face","fact","factor","fail","fall","family","far","fast","father","fear","federal","feel","feeling","few","field","fight","figure","fill","film","final","finally","financial","find","fine","finger","finish","fire","firm","first","fish","five","floor","fly","focus","follow","food","foot","for","force","foreign","forget","form","former","forward","four","free","friend","from","front","full","fund","future","game","garden","gas","general","generation","get","girl","give","glass","go","goal","good","government","great","green","ground","group","grow","growth","guess","gun","guy","hair","half","hand","hang","happen","happy","hard","have","head","health","hear","heart","heat","heavy","help","her","here","herself","high","him","himself","his","history","hit","hold","home","hope","hospital","hotel","hour","house","however","huge","human","hundred","husband","idea","identify","image","imagine","impact","important","improve","include","including","increase","indeed","indicate","individual","industry","information","inside","instead","institution","interest","interesting","international","interview","into","investment","involve","issue",
"item","itself","job","join","just","keep","key","kid","kill","kind","kitchen","know","knowledge","land","language","large","last","late","later","laugh","law","lawyer","lay","lead","leader","learn","least","leave","left","leg","legal","less","let","letter","level","lie","life","light","like","likely","line","list","listen","little","live","local","long","look","lose","loss","lot","love","low","machine","magazine","main","maintain","major","majority","make","man","manage","management","manager","many","market","marriage","material","matter","may","maybe","mean","measure","media","medical","meet","meeting","member","memory","mention","message","method","middle","might","military","million","mind","minute","miss","mission","model","modern","moment","money","month","more","morning","most","mother","mouth","move","movement","movie","Mr","Mrs","much","music","must","myself","name","nation","national","natural","nature","near","nearly","necessary","need","network","never","new","news","newspaper","next","nice","night","north","note","nothing","notice","number","occur","office","officer","official","often","operation","opportunity","option","organization","other","others","outside",
"owner","page","pain","painting","paper","parent","part","participant","particular","particularly","partner","party","pass","past","patient","pattern","pay","peace","people","per","perform","performance","perhaps","period","person","personal","phone","physical","pick","picture","piece","place","plan","plant","play","player","PM","point","police","policy","political","politics","poor","popular","population","position","positive","possible","power","practice","prepare","present","president","pressure","pretty","prevent","price","private","probably","problem","process","produce","product","production","professional","professor","program","project","property","protect","prove","provide","public","pull","purpose","push","put","quality","question","quickly","quite","race","radio","raise","range","rate","rather","reach","read","ready","real","reality","realize","really","reason","receive","recent","recently","recognize","record","red","reduce","reflect","region","relate","relationship","religious","remain","remember","remove","report","represent","Republican","require","research","resource","respond","response","responsibility","rest","result","return","reveal","rich","right","rise",
"risk","road","rock","role","room","rule","run","safe","same","save","say","scene","school","science","scientist","score","sea","season","seat","second","section","security","see","seek","seem","sell","send","senior","sense",
"series","serious","serve","service","set","seven","several","sexual","shake","share","shoot","short","shot","should","shoulder","show","side","sign","significant","similar","simple","simply","since","sing","single","sister","site","situation","six","size","skill","skin","small","smile","social","society","soldier","some","somebody","someone","something","sometimes","sound","source","south","southern","space","speak","special","specific","speech","spend","sport","spring","staff","stage","stand","standard","star","start","state","statement","station","stay","step","still","stock","stop","store","story","strategy","street","strong","structure","student","study","stuff","style","subject","success","successful","such","suddenly","suffer","suggest","summer","support","sure","surface","system","table","take","talk","task","tax","teach","teacher","team","technology","television","term","test","thank","themselves","then","theory","thought","thousand","threat","three","through","throughout","time","today","together","tonight","total","tough","toward","town","trade","traditional","training","travel","treat","treatment","tree","trial","trip","trouble","true","truth",
"under","understand","usually","value","various","victim","view","violence","visit","voice","wait","walk","wall","want","war","watch","water","way","we","weapon","wear","week","weight","well","west","western","what","whatever","when","where","whether","which","while","white","who","whole","whom","whose","why","wide","wife","will","win","wind","window","wish","with","within","without","woman","wonder","word","work","worker","world","worry","would","write","writer","wrong","yard","yeah","year","young","yourself"};
const int Word_Count = sizeof(Word_List) / sizeof(string);
const string Figure[] = {
    "  ---------------   \n"
    "  |                 \n"
    "  |                 \n"
    "  |                 \n"
    "  |                 \n"
    "  |     \n"
    "=====   \n",
    "  ---------------   \n"
    "  |           |     \n"
    "  |                 \n"
    "  |                 \n"
    "  |                 \n"
    "  |     \n"
    "=====   \n",
    "  ---------------   \n"
    "  |           |     \n"
    "  |           O     \n"
    "  |                 \n"
    "  |                 \n"
    "  |     \n"
    "=====   \n",
    "  ---------------   \n"
    "  |           |    \n"
    "  |           O     \n"
    "  |           |     \n"
    "  |                 \n"
    "  |     \n"
    "=====   \n",
    "  ---------------   \n"
    "  |           |     \n"
    "  |           O     \n"
    "  |          /|     \n"
    "  |                 \n"
    "  |     \n"
    "=====   \n",
    "  ---------------  \n"
    "  |           |    \n"
    "  |           O    \n"
    "  |          /|\   \n"
    "  |                \n"
    "  |     \n"
    "=====   \n",
    "  ---------------  \n"
    "  |           |    \n"
    "  |           O    \n"
    "  |          /|\   \n"
    "  |          /     \n"
    "  |     \n"
    "=====   \n",
    "  ---------------  \n"
    "  |           |    \n"
    "  |           O    \n"
    "  |          /|\   \n"
    "  |          / \   \n"
    "  |     \n"
    "=====   \n",
    "  ---------------  \n"
    "  |  D        |    \n"
    "  |  E        O    \n"
    "  |  A       /|\   \n"
    "  |  T       / \   \n"
    "  |  H  \n"
    "=====   \n",               };
string chooseWord(){
    int randomIndex = rand() % Word_Count;
    return Word_List[randomIndex];
}

void renderGame(string guessedWord, int badGuessCount){
    cout << Figure[badGuessCount] << endl;
    cout << guessedWord << endl;
    cout <<"Number of wrong guesses: " << badGuessCount << endl;
}

char readAGuess(){
    char c;
    cout <<" Enter your guess: ";
    cin >> c;
    return c;
}

string update(string guessedWord, char guess, string secretWord){
    for(int i = 0; i < guessedWord.length(); i++){
        if(guess == secretWord[i]) guessedWord[i] = guess;
    }
    return guessedWord;
}

void displayResult(bool lost){
    if(lost)cout <<"YOU LOST!!!"<<endl <<"The word is: "<< chooseWord();
    else cout <<"YOU WON!!!"<<endl <<"The word is: "<< chooseWord();
}

bool contains(string word, char c){
    return (word.find_first_of(c) != string::npos);
}
int main()
{
    srand(time(0));
    string secretWord = chooseWord();
    string guessedWord = string(secretWord.length(), '-');
    int badGuessCount = 0;

    do{
        renderGame(guessedWord, badGuessCount);
        char guess = readAGuess();
        if(contains(secretWord, guess)){
            guessedWord = update(guessedWord, guess, secretWord);
        }
        else badGuessCount++;
    } while (badGuessCount < MaxBadGuesses && guessedWord != secretWord);

    displayResult(badGuessCount == MaxBadGuesses);

    return 0;
}
