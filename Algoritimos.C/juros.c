int main (void) {
    float valorPrest, taxaJuros, valorFinal;
    int tempoDias;

    printf ("Informe o valor da prestação");
    scanf ("%f", & valorPrest);

    printf ("Informe a taxaJuros");
    scanf ("%f", & taxaJuros);

    printf ("Informe o tempo em dias");
    scanf ("%d", & tempoDias);

    valorFinal = valorPrest + (valorPrest * (taxaJuros/100) * tempoDias);

    printf ("/n O valor a ser pago é %f", valorFinal);
}