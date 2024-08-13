//*2  Hacer un programa para solicitar por teclado un número y luego devolver su
//* valor elevado al cubo.

function potencia(n, p) {
  let = r;
  r = Math.pow(n, p);
  console.log(r);
}

// potencia(2, 3);

//*3  Hacer un programa que permita ingresar el año actual y el año de la fecha de
//* nacimiento de una persona y luego calcule y emita por pantalla su edad.
//* Nota: no hay que tener en cuenta si la persona cumplió años o no,
//* simplemente calcular.

function edad(yearA, yearB) {
  let edad = yearA - yearB;
  console.log(edad);
}

// edad(2024, 2001);

//*4 Hacer un programa que permita ingresar los kilómetros existentes entre dos
//* ciudades y la velocidad promedio de un vehículo. Calcular y emitir por pantalla
//* el tiempo aproximado que demandará llegar de un punto a otro teniendo en
//* cuenta los datos ingresados.

function distancia(kilometros, velocidad) {
  let t = kilometros / velocidad;
  console.log(t);
}

// distancia(1200,200)

//*5 Una casa de computación paga a sus empleados un sueldo fijo de ARS15000
//* más una comisión del 5% sobre el total facturado por cada empleado. Hacer un
//* programa para ingresar el total facturado por un empleado y que luego calcule
//* y emita por pantalla el sueldo total a cobrar por el mismo.

function cobrar(totalF) {
  const sFijo = 15000;
  const comision = 0.95;

  let sf = sFijo * comision;
  console.log(sf);
}
// cobrar(5000)
