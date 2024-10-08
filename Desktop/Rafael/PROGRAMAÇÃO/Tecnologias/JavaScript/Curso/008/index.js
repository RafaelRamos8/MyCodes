// Falsy = false, 0, "", NaN, undefined e NULL
// Truthy = todos os outros diferente do "falsy"

if(null){
    console.log("Bom Dia!");
}else{
    console.log("Boa Noite!");
}

// operador ternario

const velocidade = 85;
const warn = 80;

// condicao ? true : false;
// const condicao = velocidade >= warn ? console.log("Recebeu uma multa") : console.log("Continua andando");

const condicao = velocidade >= warn
    ? console.log("Recebeu uma multa")
    : console.log("Continua andando");

//exatamente mesma coisa que isso \/

if(velocidade >= warn){
    console.log("Recebeu uma multa");
}else{
    console.log("Continua andando");
}