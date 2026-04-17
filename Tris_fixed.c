#include <stdio.h>

void printBoard(char a, char b, char c, char d, char e, char f, char g, char h, char i) {
    printf (" %c | %c | %c \n", a, b, c); 
    printf ("---+---+---\n"); 
    printf (" %c | %c | %c \n", d, e, f); 
    printf ("---+---+---\n"); 
    printf (" %c | %c | %c \n", g, h, i);
}

void makeMove(int posizione, char *a, char *b, char *c, char *d, char *e, char *f, char *g, char *h, char *i, char giocatore) {
    if (posizione == 1 && *a == ' '){
        *a = giocatore;
    } else if (posizione == 2 && *b == ' '){
        *b = giocatore;
    } else if (posizione == 3 && *c == ' '){
        *c = giocatore;
    } else if (posizione == 4 && *d == ' '){
        *d = giocatore;
    } else if (posizione == 5 && *e == ' '){
        *e = giocatore; 
    } else if (posizione == 6 && *f == ' '){
        *f = giocatore;
    } else if (posizione == 7 && *g == ' '){
        *g = giocatore;
    } else if (posizione == 8 && *h == ' '){
        *h = giocatore; 
    } else if (posizione == 9 && *i == ' '){
        *i = giocatore;
    } else {
        printf ("La casella è occupata\n");
    }
}

int checkWin(char a, char b, char c, char d, char e, char f, char g, char h, char i) {
    if ((a == b && b == c && a != ' ') || 
        (d == e && e == f && d != ' ') || 
        (g == h && h == i && g != ' ') || 
        (a == d && d == g && a != ' ') ||
        (b == e && e == h && b != ' ') || 
        (c == f && f == i && c != ' ') || 
        (a == e && e == i && a != ' ') || 
        (c == e && e == g && c != ' ')) {
        return 1;
    }
    return 0;
}

int main (){
    int posizione;
    int mosse = 0;
    char a = ' ', b = ' ', c = ' ', d = ' ', e = ' ', f = ' ', g = ' ', h = ' ', i = ' ';
    char giocatore = 'X';
   
    printf ("GIOCO DEL TRIS: il campo da gioco\n"); 
    printBoard(a, b, c, d, e, f, g, h, i);

    // 9 mosse possibili
    for (int mossa = 1; mossa <= 9; mossa++) {
        printf ("\nGiocatore %c, scegli una posizione (1-9)\n", giocatore);
        scanf ("%d", &posizione);
        
        makeMove(posizione, &a, &b, &c, &d, &e, &f, &g, &h, &i, giocatore);
        printBoard(a, b, c, d, e, f, g, h, i);
        
        // Controlla vittoria dopo la mossa 5
        if (mossa >= 5) {
            if (checkWin(a, b, c, d, e, f, g, h, i)) {
                printf ("Giocatore %c hai vinto!\n", giocatore);
                return 0;
            }
        }
        
        // Cambio giocatore
        if (giocatore == 'X') giocatore = 'O';
        else giocatore = 'X';
    }
    
    // Se arriviamo qui, è pareggio (tutte 9 caselle piene senza vincitore)
    printf("Pareggio!\n");
    return 0;
}
