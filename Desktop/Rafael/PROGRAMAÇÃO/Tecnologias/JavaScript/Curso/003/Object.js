/* Aula sobre Objects*/
/* 
Objeto: Tenis (propiedade) "Cadarço", "palmilha"
Objeto: Celular (propiedade) 
Objeto: Drone (propiedade) 

propiedade/atributos/funcionalidades
*/

console.log(
    {
        tenis: { //objeto tenis
            disponivel: false,
            quantidade: 150,
            valor: 150,
            cadarço:{ //objeto cadarço dentro do objeto tenis
                cor: "rosa",
                tamanho: "G",
            },
            palmilha: {
                tamanho: 37,
                cor: "roxo",
            },
        },
    })