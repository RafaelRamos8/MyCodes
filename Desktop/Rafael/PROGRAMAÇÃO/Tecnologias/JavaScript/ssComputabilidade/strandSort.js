function strandSort(input) {
    if (input.length === 0) {
        return;
    }

    let sublist = [];
    sublist.push(input[0]);
    input.shift();

    let indice = 0;

    while (indice < input.length) {
        if (input[indice] > sublist[sublist.length - 1]) {
            sublist.push(input[indice]);
            input.splice(indice, 1);
        } else {
            indice++;
        }
    }

    let sublistaAuxiliar = [];

    while (sublist.length > 0 && listaOrdenada.length > 0) {
        if (sublist[0] >= listaOrdenada[0]) {
            sublistaAuxiliar.push(listaOrdenada.shift());
        } else {
            sublistaAuxiliar.push(sublist.shift());
        }
    }

    sublistaAuxiliar = sublistaAuxiliar.concat(sublist).concat(listaOrdenada);
    listaOrdenada = sublistaAuxiliar;

    if (input.length > 0) {
        strandSort(input);
    }
}

//-----------------------------------------------------------------------------------------------------

// Função para gerar um array ordenado (melhor caso)
function gerarArrayOrdenado(tamanho) {
    let array = [];
    for (let i = 0; i < tamanho; i++) {
        array.push(i);
    }
    return array;
}

//-----------------------------------------------------------------------------------------------------

// Função para gerar um array de números aleatórios (medio caso)
function gerarArrayAleatorio(tamanho, maximoValor) {
    let array = [];
    for (let i = 0; i < tamanho; i++) {
        array.push(Math.floor(Math.random() * maximoValor));
    }
    return array;
}

//-----------------------------------------------------------------------------------------------------

// Função para gerar um array em ordem decrescente (pior caso)
function gerarArrayInvertido(tamanho) {  
    let array = [];
    for (let i = tamanho - 1; i >= 0; i--) {
        array.push(i);
    }
    return array;
}
//-----------------------------------------------------------------------------------------------------

// Define o tamanho do array e o valor máximo dos números
const TAMANHO_ARRAY = 9000;  // Você pode mudar o tamanho aqui
const VALOR_MAXIMO = 9000;  // Define o valor máximo dos números aleatórios

// Gera um array ordenado/aleatorio/invertido referente ao melhor/medio/pior caso com base no tamanho especificado

let input = gerarArrayOrdenado(TAMANHO_ARRAY);                               // <----------------------------  melhor caso O(n)
//let input = gerarArrayAleatorio(TAMANHO_ARRAY, VALOR_MAXIMO);                // <----------------------------  medio caso O(n log n)
//let input = gerarArrayInvertido(TAMANHO_ARRAY);                                // <----------------------------  pior caso O(n²)

// Inicializa listaOrdenada como uma lista vazia
let listaOrdenada = [];

// Medição de tempo de execução
console.time("StrandSort Execution Time");

// Chama a função strandSort para ordenar o array gerado
strandSort(input);

// Exibe o array original e o array ordenado no console
console.log("Array original: ", input);
console.log("Array ordenado: ", listaOrdenada);

// Fim da medição de tempo
console.timeEnd("StrandSort Execution Time");
