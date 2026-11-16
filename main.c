#include <stdio.h>

int main (void) {
     
     char prato[2][20] = {"pizza", "lanche"};
     char acompanhamento[2][30] = {"batata", "anel de cebola"};
     char bebida[2][30] = {"refrigerante", "suco"};
     char opcao_pagamento[2][8] = {"cartao", "pix"};
     int opcao_combo;
     int pagamento;
    
     printf("==============MENU DE COMBOS==============\n");
     printf("1- COMBO TRADICIONAL: %s + %s + %s\n", prato[0], bebida[0], acompanhamento[1]);
     printf("2- COMBO ESPECIAL: %s + %s + %s\n", prato[1], bebida[1], acompanhamento[1]);
     printf("3- COMBO DO DIA: %s + %s + %s\n", prato[1], bebida[1], acompanhamento[0]);
     printf("escolha a forma de pagamento: %s ou %s\n ", opcao_pagamento[0], opcao_pagamento[1]);
    
     printf("Escolha o numero do combo: ");
     scanf("%d", &opcao_combo);
    
     printf("escolha a forma de pagamento: 1 - %s ou 2 - %s\n ", opcao_pagamento[0], opcao_pagamento[1]);
     scanf("%d", &pagamento);
    
     switch (opcao_combo) {
         case 1:
             printf("\n pedido confirmado!\n saindo: %s + %s + %s\n", prato[0], bebida[0], acompanhamento[1]);
             break;
    
             case 2:
             printf("\n pedido confirmado!\n saindo: %s + %s + %s\n", prato[1], bebida[1], acompanhamento[1]);
             break;
    
             case 3:
    
             printf("\n pedido confirmado!\n saindo: %s + %s + %s\n", prato[1], bebida[1], acompanhamento[0]);
     }

    
     switch (pagamento) {
         case 1:
             printf("\n pagamento no %s confirmado! seu pedido saira em breve", opcao_pagamento[0]);
             break;
    
           case 2:
           printf("\n pagamento no %s confirmado! seu pedido saira em breve ", opcao_pagamento[1]);
           break;
}

return 0;
}



           
