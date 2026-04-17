#include <stdio.h>

int main() {
   
    char a=' ', b=' ', c=' ';
    char d=' ', e=' ', f=' ';
    char g=' ', h=' ', i=' ';

    char giocatore = 'X'; 
    int pos;
    int mosse = 0;
    int fine;

    printf("GIOCO DEL TRIS\n");

    printf("\n %c | %c | %c\n", a,b,c);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", d,e,f);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", g,h,i);

    printf("\nGiocatore %c, scegli una posizione (1-9): ", giocatore);
    scanf("%d", &pos);

    if(pos==1 && a==' ') {
        a=giocatore;
        mosse++;
    } else if(pos==2 && b==' ') {
        b=giocatore;
        mosse++;
    } else if(pos==3 && c==' ') {
        c=giocatore;
        mosse++;
    } else if(pos==4 && d==' ') {
        d=giocatore;
        mosse++;
    } else if(pos==5 && e==' ') {
        e=giocatore;
        mosse++;
    } else if(pos==6 && f==' ') {
        f=giocatore;
        mosse++;
    } else if(pos==7 && g==' ') {
        g=giocatore;
        mosse++;
    } else if(pos==8 && h==' ') {
        h=giocatore;
        mosse++;
    } else if(pos==9 && i==' ') {
        i=giocatore;
        mosse++;
    } else {
        printf("Mossa non valida\n");
    }

    printf("\n %c | %c | %c\n", a,b,c);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", d,e,f);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", g,h,i);

    if ((a==giocatore && b==giocatore && c==giocatore) ||
        (d==giocatore && e==giocatore && f==giocatore) ||
        (g==giocatore && h==giocatore && i==giocatore) ||
        (a==giocatore && d==giocatore && g==giocatore) ||
        (b==giocatore && e==giocatore && h==giocatore) ||
        (c==giocatore && f==giocatore && i==giocatore) ||
        (a==giocatore && e==giocatore && i==giocatore) ||
        (c==giocatore && e==giocatore && g==giocatore)) {
        printf("\nGiocatore %c ha vinto!\n", giocatore);
        printf("=== FINE GIOCO ===\n");
        return 0;
    }

    if(giocatore=='X') giocatore='O';
    else giocatore='X';

    printf("\nGiocatore %c, scegli una posizione (1-9): ", giocatore);
    scanf("%d", &pos);

    if(pos==1 && a==' ') {
        a=giocatore;
        mosse++;
    } else if(pos==2 && b==' ') {
        b=giocatore;
        mosse++;
    } else if(pos==3 && c==' ') {
        c=giocatore;
        mosse++;
    } else if(pos==4 && d==' ') {
        d=giocatore;
        mosse++;
    } else if(pos==5 && e==' ') {
        e=giocatore;
        mosse++;
    } else if(pos==6 && f==' ') {
        f=giocatore;
        mosse++;
    } else if(pos==7 && g==' ') {
        g=giocatore;
        mosse++;
    } else if(pos==8 && h==' ') {
        h=giocatore;
        mosse++;
    } else if(pos==9 && i==' ') {
        i=giocatore;
        mosse++;
    } else {
        printf("Mossa non valida\n");
    }

    printf("\n %c | %c | %c\n", a,b,c);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", d,e,f);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", g,h,i);

    if ((a==giocatore && b==giocatore && c==giocatore) ||
        (d==giocatore && e==giocatore && f==giocatore) ||
        (g==giocatore && h==giocatore && i==giocatore) ||
        (a==giocatore && d==giocatore && g==giocatore) ||
        (b==giocatore && e==giocatore && h==giocatore) ||
        (c==giocatore && f==giocatore && i==giocatore) ||
        (a==giocatore && e==giocatore && i==giocatore) ||
        (c==giocatore && e==giocatore && g==giocatore)) {
        printf("\nGiocatore %c ha vinto!\n", giocatore);
        printf("=== FINE GIOCO ===\n");
        return 0;
    }

    if(giocatore=='X') giocatore='O';
    else giocatore='X';

    printf("\nGiocatore %c, scegli una posizione (1-9): ", giocatore);
    scanf("%d", &pos);

    if(pos==1 && a==' ') {
        a=giocatore;
        mosse++;
    } else if(pos==2 && b==' ') {
        b=giocatore;
        mosse++;
    } else if(pos==3 && c==' ') {
        c=giocatore;
        mosse++;
    } else if(pos==4 && d==' ') {
        d=giocatore;
        mosse++;
    } else if(pos==5 && e==' ') {
        e=giocatore;
        mosse++;
    } else if(pos==6 && f==' ') {
        f=giocatore;
        mosse++;
    } else if(pos==7 && g==' ') {
        g=giocatore;
        mosse++;
    } else if(pos==8 && h==' ') {
        h=giocatore;
        mosse++;
    } else if(pos==9 && i==' ') {
        i=giocatore;
        mosse++;
    } else {
        printf("Mossa non valida\n");
    }

    printf("\n %c | %c | %c\n", a,b,c);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", d,e,f);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", g,h,i);

    if ((a==giocatore && b==giocatore && c==giocatore) ||
        (d==giocatore && e==giocatore && f==giocatore) ||
        (g==giocatore && h==giocatore && i==giocatore) ||
        (a==giocatore && d==giocatore && g==giocatore) ||
        (b==giocatore && e==giocatore && h==giocatore) ||
        (c==giocatore && f==giocatore && i==giocatore) ||
        (a==giocatore && e==giocatore && i==giocatore) ||
        (c==giocatore && e==giocatore && g==giocatore)) {
        printf("\nGiocatore %c ha vinto!\n", giocatore);
        printf("=== FINE GIOCO ===\n");
        return 0;
    }


    if(giocatore=='X') giocatore='O';
    else giocatore='X';

    printf("\nGiocatore %c, scegli una posizione (1-9): ", giocatore);
    scanf("%d", &pos);

    if(pos==1 && a==' ') {
        a=giocatore;
        mosse++;
    } else if(pos==2 && b==' ') {
        b=giocatore;
        mosse++;
    } else if(pos==3 && c==' ') {
        c=giocatore;
        mosse++;
    } else if(pos==4 && d==' ') {
        d=giocatore;
        mosse++;
    } else if(pos==5 && e==' ') {
        e=giocatore;
        mosse++;
    } else if(pos==6 && f==' ') {
        f=giocatore;
        mosse++;
    } else if(pos==7 && g==' ') {
        g=giocatore;
        mosse++;
    } else if(pos==8 && h==' ') {
        h=giocatore;
        mosse++;
    } else if(pos==9 && i==' ') {
        i=giocatore;
        mosse++;
    } else {
        printf("Mossa non valida\n");
    }

    printf("\n %c | %c | %c\n", a,b,c);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", d,e,f);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", g,h,i);

    if ((a==giocatore && b==giocatore && c==giocatore) ||
        (d==giocatore && e==giocatore && f==giocatore) ||
        (g==giocatore && h==giocatore && i==giocatore) ||
        (a==giocatore && d==giocatore && g==giocatore) ||
        (b==giocatore && e==giocatore && h==giocatore) ||
        (c==giocatore && f==giocatore && i==giocatore) ||
        (a==giocatore && e==giocatore && i==giocatore) ||
        (c==giocatore && e==giocatore && g==giocatore)) {
        printf("\nGiocatore %c ha vinto!\n", giocatore);
        printf("=== FINE GIOCO ===\n");
        return 0;
    }

    if(giocatore=='X') giocatore='O';
    else giocatore='X';

    
    printf("\nGiocatore %c, scegli una posizione (1-9): ", giocatore);
    scanf("%d", &pos);

    if(pos==1 && a==' ') {
        a=giocatore;
        mosse++;
    } else if(pos==2 && b==' ') {
        b=giocatore;
        mosse++;
    } else if(pos==3 && c==' ') {
        c=giocatore;
        mosse++;
    } else if(pos==4 && d==' ') {
        d=giocatore;
        mosse++;
    } else if(pos==5 && e==' ') {
        e=giocatore;
        mosse++;
    } else if(pos==6 && f==' ') {
        f=giocatore;
        mosse++;
    } else if(pos==7 && g==' ') {
        g=giocatore;
        mosse++;
    } else if(pos==8 && h==' ') {
        h=giocatore;
        mosse++;
    } else if(pos==9 && i==' ') {
        i=giocatore;
        mosse++;
    } else {
        printf("Mossa non valida\n");
    }

    printf("\n %c | %c | %c\n", a,b,c);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", d,e,f);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", g,h,i);


    if ((a==giocatore && b==giocatore && c==giocatore) ||
        (d==giocatore && e==giocatore && f==giocatore) ||
        (g==giocatore && h==giocatore && i==giocatore) ||
        (a==giocatore && d==giocatore && g==giocatore) ||
        (b==giocatore && e==giocatore && h==giocatore) ||
        (c==giocatore && f==giocatore && i==giocatore) ||
        (a==giocatore && e==giocatore && i==giocatore) ||
        (c==giocatore && e==giocatore && g==giocatore)) {
        printf("\nGiocatore %c ha vinto!\n", giocatore);
        printf("=== FINE GIOCO ===\n");
        return 0;
    }

  
    if(giocatore=='X') giocatore='O';
    else giocatore='X';

    printf("\nGiocatore %c, scegli una posizione (1-9): ", giocatore);
    scanf("%d", &pos);

    if(pos==1 && a==' ') {
        a=giocatore;
        mosse++;
    } else if(pos==2 && b==' ') {
        b=giocatore;
        mosse++;
    } else if(pos==3 && c==' ') {
        c=giocatore;
        mosse++;
    } else if(pos==4 && d==' ') {
        d=giocatore;
        mosse++;
    } else if(pos==5 && e==' ') {
        e=giocatore;
        mosse++;
    } else if(pos==6 && f==' ') {
        f=giocatore;
        mosse++;
    } else if(pos==7 && g==' ') {
        g=giocatore;
        mosse++;
    } else if(pos==8 && h==' ') {
        h=giocatore;
        mosse++;
    } else if(pos==9 && i==' ') {
        i=giocatore;
        mosse++;
    } else {
        printf("Mossa non valida\n");
    }

    printf("\n %c | %c | %c\n", a,b,c);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", d,e,f);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", g,h,i);

    if ((a==giocatore && b==giocatore && c==giocatore) ||
        (d==giocatore && e==giocatore && f==giocatore) ||
        (g==giocatore && h==giocatore && i==giocatore) ||
        (a==giocatore && d==giocatore && g==giocatore) ||
        (b==giocatore && e==giocatore && h==giocatore) ||
        (c==giocatore && f==giocatore && i==giocatore) ||
        (a==giocatore && e==giocatore && i==giocatore) ||
        (c==giocatore && e==giocatore && g==giocatore)) {
        printf("\nGiocatore %c ha vinto!\n", giocatore);
        printf("=== FINE GIOCO ===\n");
        return 0;
    }

    if(giocatore=='X') giocatore='O';
    else giocatore='X';

    printf("\nGiocatore %c, scegli una posizione (1-9): ", giocatore);
    scanf("%d", &pos);

    if(pos==1 && a==' ') {
        a=giocatore;
        mosse++;
    } else if(pos==2 && b==' ') {
        b=giocatore;
        mosse++;
    } else if(pos==3 && c==' ') {
        c=giocatore;
        mosse++;
    } else if(pos==4 && d==' ') {
        d=giocatore;
        mosse++;
    } else if(pos==5 && e==' ') {
        e=giocatore;
        mosse++;
    } else if(pos==6 && f==' ') {
        f=giocatore;
        mosse++;
    } else if(pos==7 && g==' ') {
        g=giocatore;
        mosse++;
    } else if(pos==8 && h==' ') {
        h=giocatore;
        mosse++;
    } else if(pos==9 && i==' ') {
        i=giocatore;
        mosse++;
    } else {
        printf("Mossa non valida\n");
    }

    printf("\n %c | %c | %c\n", a,b,c);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", d,e,f);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", g,h,i);

    if ((a==giocatore && b==giocatore && c==giocatore) ||
        (d==giocatore && e==giocatore && f==giocatore) ||
        (g==giocatore && h==giocatore && i==giocatore) ||
        (a==giocatore && d==giocatore && g==giocatore) ||
        (b==giocatore && e==giocatore && h==giocatore) ||
        (c==giocatore && f==giocatore && i==giocatore) ||
        (a==giocatore && e==giocatore && i==giocatore) ||
        (c==giocatore && e==giocatore && g==giocatore)) {
        printf("\nGiocatore %c ha vinto!\n", giocatore);
        printf("=== FINE GIOCO ===\n");
        return 0;
    }

    /* Cambio giocatore */
    if(giocatore=='X') giocatore='O';
    else giocatore='X';

    printf("\nGiocatore %c, scegli una posizione (1-9): ", giocatore);
    scanf("%d", &pos);

    if(pos==1 && a==' ') {
        a=giocatore;
        mosse++;
    } else if(pos==2 && b==' ') {
        b=giocatore;
        mosse++;
    } else if(pos==3 && c==' ') {
        c=giocatore;
        mosse++;
    } else if(pos==4 && d==' ') {
        d=giocatore;
        mosse++;
    } else if(pos==5 && e==' ') {
        e=giocatore;
        mosse++;
    } else if(pos==6 && f==' ') {
        f=giocatore;
        mosse++;
    } else if(pos==7 && g==' ') {
        g=giocatore;
        mosse++;
    } else if(pos==8 && h==' ') {
        h=giocatore;
        mosse++;
    } else if(pos==9 && i==' ') {
        i=giocatore;
        mosse++;
    } else {
        printf("Mossa non valida\n");
    }

    printf("\n %c | %c | %c\n", a,b,c);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", d,e,f);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", g,h,i);

    if ((a==giocatore && b==giocatore && c==giocatore) ||
        (d==giocatore && e==giocatore && f==giocatore) ||
        (g==giocatore && h==giocatore && i==giocatore) ||
        (a==giocatore && d==giocatore && g==giocatore) ||
        (b==giocatore && e==giocatore && h==giocatore) ||
        (c==giocatore && f==giocatore && i==giocatore) ||
        (a==giocatore && e==giocatore && i==giocatore) ||
        (c==giocatore && e==giocatore && g==giocatore)) {
        printf("\nGiocatore %c ha vinto!\n", giocatore);
        printf("=== FINE GIOCO ===\n");
        return 0;
    }

    if(giocatore=='X') giocatore='O';
    else giocatore='X';

    printf("\nGiocatore %c, scegli una posizione (1-9): ", giocatore);
    scanf("%d", &pos);

    if(pos==1 && a==' ') {
        a=giocatore;
        mosse++;
    } else if(pos==2 && b==' ') {
        b=giocatore;
        mosse++;
    } else if(pos==3 && c==' ') {
        c=giocatore;
        mosse++;
    } else if(pos==4 && d==' ') {
        d=giocatore;
        mosse++;
    } else if(pos==5 && e==' ') {
        e=giocatore;
        mosse++;
    } else if(pos==6 && f==' ') {
        f=giocatore;
        mosse++;
    } else if(pos==7 && g==' ') {
        g=giocatore;
        mosse++;
    } else if(pos==8 && h==' ') {
        h=giocatore;
        mosse++;
    } else if(pos==9 && i==' ') {
        i=giocatore;
        mosse++;
    } else {
        printf("Mossa non valida\n");
    }

    printf("\n %c | %c | %c\n", a,b,c);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", d,e,f);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", g,h,i);

    if ((a==giocatore && b==giocatore && c==giocatore) ||
        (d==giocatore && e==giocatore && f==giocatore) ||
        (g==giocatore && h==giocatore && i==giocatore) ||
        (a==giocatore && d==giocatore && g==giocatore) ||
        (b==giocatore && e==giocatore && h==giocatore) ||
        (c==giocatore && f==giocatore && i==giocatore) ||
        (a==giocatore && e==giocatore && i==giocatore) ||
        (c==giocatore && e==giocatore && g==giocatore)) {
        printf("\nGiocatore %c ha vinto!\n", giocatore);
    } else {
        printf("\nPareggio!\n");
    }

    printf("=== FINE GIOCO ===\n");
    return 0;
}