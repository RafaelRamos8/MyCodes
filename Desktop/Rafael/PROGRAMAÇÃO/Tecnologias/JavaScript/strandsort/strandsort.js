function strandSort(input) {
    // Se o array de entrada estiver vazio, retorna imediatamente (caso base da recursão)
    if (input.length === 0) {
        return;
    }

    // Inicializa a sublista com o primeiro elemento de input
    let sublist = [];
    sublist.push(input[0]);

    // Remove o primeiro elemento de input, pois já foi adicionado à sublist
    input.shift();

    let indice = 0;

    // Enquanto percorremos a lista de entrada...
    while (indice < input.length) {
        // Se o elemento atual de input for maior que o último elemento de sublist...
        if (input[indice] > sublist[sublist.length - 1]) {
            // Adiciona o elemento atual de input na sublist
            sublist.push(input[indice]);
            // Remove o elemento atual de input, já que ele foi transferido para sublist
            input.splice(indice, 1);
        } else {
            // Caso contrário, passa para o próximo elemento
            indice++;
        }
    }

    // Cria uma lista auxiliar que servirá para combinar sublist e listaOrdenada
    let sublistaAuxiliar = [];
    
    // Enquanto tanto sublist quanto listaOrdenada não estiverem vazias...
    while (sublist.length > 0 && listaOrdenada.length > 0) {
        // Se o primeiro elemento de sublist for maior ou igual ao primeiro de listaOrdenada...
        if (sublist[0] >= listaOrdenada[0]) {
            // Move o primeiro elemento de listaOrdenada para a lista auxiliar
            sublistaAuxiliar.push(listaOrdenada.shift());
        } else {
            // Caso contrário, move o primeiro elemento de sublist para a lista auxiliar
            sublistaAuxiliar.push(sublist.shift());
        }
    }

    // Combina o que sobrou em sublist e listaOrdenada na lista auxiliar
    // Isso garante que todos os elementos restantes sejam ordenados
    sublistaAuxiliar = sublistaAuxiliar.concat(sublist).concat(listaOrdenada);
    
    //Atualiza listaOrdenada com a lista auxiliar completamente combinada e ordenada
    listaOrdenada = sublistaAuxiliar;
    

    // Se ainda houver elementos em input, chama recursivamente o strandSort
    if (input.length > 0) {
        strandSort(input);
    }
}

// Lista de entrada a ser ordenada
let input = [7, 8, 1, 6, 14, 9, 2, 10, 3, 4, 13, 5, 0, 11, 12];
// Inicializa listaOrdenada como uma lista vazia
let listaOrdenada = [];

// Chama a função strandSort para ordenar a lista de entrada
strandSort(input);

// Exibe a lista ordenada no console
console.log(listaOrdenada);