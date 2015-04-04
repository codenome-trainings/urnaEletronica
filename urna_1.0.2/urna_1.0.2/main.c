#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //Bibliot�ca do comando Sleep
#include <locale.h> //Incorpora��o da bibliot�ca de caracteres especiais
#include <conio.h>




int main()
{
    /*Vari�veis do ambiente do programa*/
    int menuPrincipal, candidato;


    /*Vari�veis dos candidatos*/
    int aecioNeves;
    int dilmaRousseff=0;
    int eduardoJorge=0;
    int eymael=0;
    int levyFidelix=0;
    int lucianaGenro=0;
    int marinaSilva=0;
    int mauroLasi=0;
    int pastorEveraldo=0;
    int ruiCPimenta=0;
    int zeMaria=0;
    int votoNulo=0;
    int votoBranco=0;

    /*Estrutura que recebe os votos*/

    int aecioNevesVoto=0;
    int dilmaRousseffVoto=0;
    int eduardoJorgeVoto=0;
    int eymaelVoto=0;
    int levyFidelixVoto=0;
    int lucianaGenroVoto=0;
    int marinaSilvaVoto=0;
    int mauroLasiVoto=0;
    int pastorEveraldoVoto=0;
    int ruiCPimentaVoto=0;
    int zeMariaVoto=0;
    int votoNuloVoto=0;
    int votoBrancoVoto=0;


    /*Incorpora��o da bibliot�ca de caracteres especiais*/
    setlocale(LC_ALL, "Portuguese");

    /*Menu Principal-----------------------------------------------------------------------------------------------------------*/
    while (menuPrincipal)
    {

        printf("(1) Iniciar a vota��o \n");
        printf("(2) Apresentar Resultados das Vota��es\n");
        printf("(3) Sair \n\n");

        printf("Escolha uma op��o: ");
        scanf("%d", &menuPrincipal);

    /*FIM Menu Principal-------------------------------------------------------------------------------------------------------*/


    /*Op��o 1 - Processo de vota��o dos candidatos-----------------------------------------------------------------------------*/
        switch(menuPrincipal) {
            case 1:
                system("cls");
                printf("Iniciando processo de vota��o... \n\n\n");

                printf("(45) A�cio Neves\n");
                printf("(13) Dilma Rousseff\n");
                printf("(43) Eduardo Jorge\n");
                printf("(27) Eymael\n");
                printf("(28) Levy Fidelix\n");
                printf("(50) Luciana Genro\n");
                printf("(40) Marina Silva\n");
                printf("(21) Mauro Iasi\n");
                printf("(20) Pastor Everaldo\n");
                printf("(29) Rui Costa Pimenta\n");
                printf("(16) Z� Maria\n");
                printf("(0)  Voto nulo\n");
                printf("(1)  Votam em branco\n");

                printf("Digite o n�mero do candidato: ");
                scanf("%d", &candidato);

                    switch(candidato) {

                        //Candidato A�cio Neves
                        case 45:
                        system("cls");
                        aecioNeves=0;
                        printf("N�mero: 45\nCandidato: A�cio Neves\nCargo: Presidente\nPartido: PSDB\nColiga��o: Coliga��o: MUDA BRASIL (PSDB / PMN / SD / DEM / PEN / PTN / PTB / PTC / PT do B)\nVice Presidente: Aloysio Nunes Ferreira\n\n");
                        printf("Voc� est� certo disso?\n");
                        printf("(1)  SIM!\n");
                        printf("(0)  N�O!\n");
                        printf("Digite sua op��o: ");
                        scanf("%d", &aecioNeves);
                        system("cls");
                        if (aecioNeves == 1) {
                            printf("Parab�ns! Seu voto foi realizado com sucesso!\n");
                            aecioNevesVoto = aecioNevesVoto+1;
                            sleep(3);
                            system("cls");
                            break;

                        }
                        if (aecioNeves == 0){
                            break;
                        }
                        else
                            printf("Op��oo inv�lida, voltando ao menu principal para votar novamente.\n");
                            sleep(3);
                            system("cls");
                        break;

                        //Candidato Dilma Rousseff
                        case 13:
                        system("cls");
                        printf("N�mero: 13\nCandidata: Dilma Roussef\nCargo: Presidenta\nPartido: Partido dos Trabalhadores\nColiga��o: COLIGA��O COM A FOR?A DO POVO (PT / PMDB / PSD / PP / PR / PROS / PDT / PC do B / PRB)\nVice Presidente: Michel Temer\n\n");
                        printf("Voc� est� certo disso?\n");
                        printf("(1)  SIM!\n");
                        printf("(0)  N�O!\n");
                        printf("Digite sua op��o: ");
                        scanf("%d", &dilmaRousseff);
                        system("cls");
                        if (dilmaRousseff == 1) {
                            printf("Parab�ns! Seu voto foi realizado com sucesso!\n");
                            dilmaRousseffVoto = dilmaRousseffVoto+1;
                            sleep(3);
                            system("cls");
                            break;
                        }
                        if (dilmaRousseff == 0){
                            break;
                        }
                        else
                            printf("Op��o inv�lida, voltando ao menu principal para votar novamente.\n");
                            sleep(3);
                            system("cls");
                        break;

                        //Candidato Eduardo Jorge
                        case 43:
                        system("cls");
                        printf("N�mero: 43\nCandidato: Eduardo Jorge\nCargo: Presidente\nPartido: Partido Verde\nColiga��o:  PV\nVice Presidenta: C�lia Sacramento\n\n");
                        printf("Voc� est� certo disso?\n");
                        printf("(1)  SIM!\n");
                        printf("(0)  N�O!\n");
                        printf("Digite sua op��o: ");
                        scanf("%d", &eduardoJorge);
                        system("cls");
                        if (eduardoJorge == 1) {
                            printf("Parab�ns! Seu voto foi realizado com sucesso!\n");
                            eduardoJorgeVoto = eduardoJorgeVoto+1;
                            sleep(3);
                            system("cls");
                            break;
                        }
                        if (eduardoJorge == 0){
                            break;
                        }
                        else
                            printf("Op��o inv�lida, voltando ao menu principal para votar novamente.\n");
                            sleep(3);
                            system("cls");
                        break;

                        //Candidato Eymael
                        case 27:
                        system("cls");
                        printf("N�mero: 27\nCandidato: Eymael\nCargo: Presidente\nPartido: Partido Social Democrata Crist�o\nColiga��o: PSDC\nVice Presidente: Roberto Lopes\n\n");
                        printf("Voc� est� certo disso?\n");
                        printf("(1)  SIM!\n");
                        printf("(0)  N?O!\n");
                        printf("Digite sua op��o: ");
                        scanf("%d", &eymael);
                        system("cls");
                        if (eymael == 1) {
                            printf("Parab�ns! Seu voto foi realizado com sucesso!\n");
                            eymaelVoto = eymaelVoto+1;
                            sleep(3);
                            system("cls");
                            break;
                        }
                        if (eymael == 0){
                            break;
                        }
                        else
                            printf("Op��o inv�lida, voltando ao menu principal para votar novamente.\n");
                            sleep(3);
                            system("cls");
                        break;


                        //Candidato Levy Fidelix
                        case 28:
                        system("cls");
                        printf("N�mero: 28\nCandidato: Levy Fidelix\nCargo: Presidente\nPartido: Partido Renovador Trabalhista Brasileiro\nColiga��o: PRTB\nVice Presidente: Cel. Jos� Alves\n\n");
                        printf("Voc� est� certo disso?\n");
                        printf("(1)  SIM!\n");
                        printf("(0)  N�O!\n");
                        printf("Digite sua op��o: ");
                        scanf("%d", &levyFidelix);
                        system("cls");
                        if (levyFidelix == 1) {
                            printf("Parab�ns! Seu voto foi realizado com sucesso!\n");
                            levyFidelixVoto = levyFidelixVoto+1;
                            sleep(3);
                            system("cls");
                            break;
                        }
                        if (levyFidelix == 0){
                            break;
                        }
                        else
                            printf("Op��o inv�lida, voltando ao menu principal para votar novamente.\n");
                            sleep(3);
                            system("cls");
                        break;


                        //Candidato Luciana Genro
                        case 50:
                        system("cls");
                        printf("N�mero: 50\nCandidata: Luciana Genro\nCargo: Presidenta\nPartido: Partido Socialismo e Liberdade\nColiga��o: PSOL\nVice Presidente: Jorge Paz\n\n");
                        printf("Voc� est� certo disso?\n");
                        printf("(1)  SIM!\n");
                        printf("(0)  N�O!\n");
                        printf("Digite sua op��o: ");
                        scanf("%d", &lucianaGenro);
                        system("cls");
                        if (lucianaGenro == 1) {
                            printf("Parab�ns! Seu voto foi realizado com sucesso!\n");
                            lucianaGenroVoto = lucianaGenroVoto+1;
                            sleep(3);
                            system("cls");
                            break;
                        }
                        if (lucianaGenro == 0){
                            break;
                        }
                        else
                            printf("Op��o inv�lida, voltando ao menu principal para votar novamente.\n");
                            sleep(3);
                            system("cls");
                        break;



                        //Candidato Marina Silva
                        case 40:
                        system("cls");
                        printf("N�mero: 40\nCandidata: Marina Silva\nCargo: Presidenta\nPartido: Partido Socialista Brasileiro\nColiga��o: UNIDOS PELO BRASIL (PHS / PRP / PPS / PPL / PSB / PSL)\nVice Presidente: Beto Albuquerque\n\n");
                        printf("Voc� est� certo disso?\n");
                        printf("(1)  SIM!\n");
                        printf("(0)  N�O!\n");
                        printf("Digite sua op��o: ");
                        scanf("%d", &marinaSilva);
                        system("cls");
                        if (marinaSilva == 1) {
                            printf("Parab�ns! Seu voto foi realizado com sucesso!\n");
                            marinaSilvaVoto = marinaSilvaVoto+1;
                            sleep(3);
                            system("cls");
                            break;
                        }
                        if (marinaSilva == 0){
                            break;
                        }
                        else
                            printf("Op��o invalida, voltando ao menu principal para votar novamente.\n");
                            sleep(3);
                            system("cls");
                        break;


                        //Candidato Mauro Lasi
                        case 21:
                        system("cls");
                        printf("N�mero: 21\nCandidato: Mauro Lasi\nCargo: Presidente\nPartido: Partido Comunista Brasileiro\nColiga��o: PCB\nVice Presidente: Sofia Manzano\n\n");
                        printf("Voc� est� certo disso?\n");
                        printf("(1)  SIM!\n");
                        printf("(0)  N�O!\n");
                        printf("Digite sua op��o: ");
                        scanf("%d", &mauroLasi);
                        system("cls");
                        if (mauroLasi == 1) {
                            printf("Parab�ns! Seu voto foi realizado com sucesso!\n");
                            mauroLasiVoto = mauroLasiVoto+1;
                            sleep(3);
                            system("cls");
                            break;
                        }
                        if (mauroLasi == 0){
                            break;
                        }
                        else
                            printf("Op��o inv�lida, voltando ao menu principal para votar novamente.\n");
                            sleep(3);
                            system("cls");
                        break;


                        //Candidato Pastor Everaldo
                        case 20:
                        system("cls");
                        printf("N�mero: 20\nCandidato: Pastor Everaldo\nCargo: Presidente\nPartido: Partido Social Crist�o\nColiga��o: PSC\nVice Presidente: Leonardo Gadelha\n\n");
                        printf("Voc� est� certo disso?\n");
                        printf("(1)  SIM!\n");
                        printf("(0)  N�O!\n");
                        printf("Digite sua op��o: ");
                        scanf("%d", &pastorEveraldo);
                        system("cls");
                        if (pastorEveraldo == 1) {
                            printf("Parab�ns! Seu voto foi realizado com sucesso!\n");
                            pastorEveraldoVoto = pastorEveraldoVoto+1;
                            sleep(3);
                            system("cls");
                            break;
                        }
                        if (pastorEveraldo == 0){
                            break;
                        }
                        else
                            printf("Op��o inv�lida, voltando ao menu principal para votar novamente.\n");
                            sleep(3);
                            system("cls");
                        break;

                        //Candidato Rui Costa Pimenta
                        case 29:
                        system("cls");
                        printf("N�mero: 29\nCandidato: Rui Costa Pimenta\nCargo: Presidente\nPartido: Partido da Causa Oper�ria\nColiga��o: PCO\nVice Presidente: Ricardo Machado\n\n");
                        printf("Voc� est� certo disso?\n");
                        printf("(1)  SIM!\n");
                        printf("(0)  N�O!\n");
                        printf("Digite sua op��o: ");
                        scanf("%d", &ruiCPimenta);
                        system("cls");
                        if (ruiCPimenta == 1) {
                            printf("Parab�ns! Seu voto foi realizado com sucesso!\n");
                            ruiCPimentaVoto = ruiCPimentaVoto+1;
                            sleep(3);
                            system("cls");
                            break;
                        }
                        if (ruiCPimenta == 0){
                            break;
                        }
                        else
                            printf("Op��o inv�lida, voltando ao menu principal para votar novamente.\n");
                            sleep(3);
                            system("cls");
                        break;



                        //Candidato Z� maria
                        case 16:
                        system("cls");
                        printf("N�mero: 16\nCandidato: Z� Maria\nCargo: Presidente\nPartido: Partido Socialista dos Trabalhadores Unificados\nColiga��o: PSTU\nVice Presidente: Claudia Durans\n\n");
                        printf("Voc� est� certo disso?\n");
                        printf("(1)  SIM!\n");
                        printf("(0)  N�O!\n");
                        printf("Digite sua op��o: ");
                        scanf("%d", &zeMaria);
                        system("cls");
                        if (zeMaria == 1) {
                            printf("Parab�ns! Seu voto foi realizado com sucesso!\n");
                            zeMariaVoto = zeMariaVoto+1;
                            sleep(3);
                            system("cls");
                            break;
                        }
                        if (zeMaria == 0){
                            break;
                        }
                        else
                            printf("Op��o inv�lida, voltando ao menu principal para votar novamente.\n");
                            sleep(3);
                            system("cls");
                        break;


                        //Candidato Voto Nulo
                        case 0:
                        system("cls");
                        printf("N�mero: 0\nVOTO NULO\n");
                        printf("Voc� est� certo disso?\n");
                        printf("(1)  SIM!\n");
                        printf("(0)  N�O!\n");
                        printf("Digite sua op��o: ");
                        scanf("%d", &votoNulo);
                        system("cls");
                        if (votoNulo == 1) {
                            printf("Parab�ns! Seu voto foi realizado com sucesso!\n");
                            votoNuloVoto = votoNuloVoto+1;
                            sleep(3);
                            system("cls");
                            break;
                        }
                        if (votoNulo == 0){
                            break;
                        }
                        else
                            printf("Op��o inv�lida, voltando ao menu principal para votar novamente.\n");
                            sleep(3);
                            system("cls");
                        break;


                        //Candidato Voto Branco
                        case 1:
                        system("cls");
                        printf("N�mero: 1\nVOTO BRANCO\n");
                        printf("Voc� est� certo disso?\n");
                        printf("(1)  SIM!\n");
                        printf("(0)  N�O!\n");
                        printf("Digite sua op��o: ");
                        scanf("%d", &votoBranco);
                        system("cls");
                        if (votoBranco == 1) {
                            printf("Parab�ns! Seu voto foi realizado com sucesso!\n");
                            votoBrancoVoto = votoBrancoVoto+1;
                            sleep(3);
                            system("cls");
                            break;
                        }
                        if (votoBranco == 0){
                            break;
                        }
                        else
                            printf("Op��o inv�lida, voltando ao menu principal para votar novamente.\n");
                            sleep(3);
                            system("cls");
                        break;


                        //Op��es n�o validadas

                        default:
                            printf("Op��o inv�lida. Tente novamente.");
                            sleep(3);
                            system("cls");
                            break;

                    }
                break;

            /*Op��o 1 - FIM Processo de vota��o dos candidatos-----------------------------------------------------------------*/

            /*Apresentando resultados da vota��o--------------*/
            case 2:
                printf("Apresentando resultados da vota��o... \n\n\n\n");

                printf("Resultados da vota��o: \n\n");
                printf("A�cio Neves: %d\n", aecioNevesVoto);
                printf("Dilma Rousseff: %d\n", dilmaRousseffVoto);
                printf("Eduardo Jorge: %d\n", eduardoJorgeVoto);
                printf("Eymael: %d\n", eymaelVoto);
                printf("Levy Fidelix: %d\n", levyFidelixVoto);
                printf("Luciana Genro: %d\n", lucianaGenroVoto);
                printf("Marina Silva: %d\n", marinaSilvaVoto);
                printf("Mauro Iasi: %d\n", mauroLasiVoto);
                printf("Pastor Everaldo: %d\n", pastorEveraldoVoto);
                printf("Rui Costa Pimenta: %d\n", ruiCPimentaVoto);
                printf("Z� Maria: %d\n", zeMariaVoto);
                printf("Voto nulo: %d\n", votoNuloVoto);
                printf("Votam em branco: %d\n", votoBrancoVoto);


                printf("\n");
                printf("Saindo... ");
                printf("\n\n\n");

                exit(0);

            /*Finalizando programa--------------*/
            case 3:
                printf("\n\n\n");
                printf("Saindo... ");
                printf("\n\n\n\n\n\n");
                exit(0);


            default: printf("\n\nOp��o Inv�lida. Tente novamente. \n");
            sleep(3);
            system("cls");
            break;
        }

    }
    system("pause");
    return 0;
}
