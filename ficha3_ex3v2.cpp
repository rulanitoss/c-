{
    int numero1;
    int numero2;
    int soma = 0;

        for (int x=x;x<=2;x=0) {
            cout << "Introduza o primeiro numero:\n ";
            cin >> numero1;

            cout << "Introduza o segundo numero:\n ";
            cin >> numero2;

            if(numero1<numero2)
                {
                   for (int i = numero1; i <= numero2; i++)
                    {
                    soma = soma + i;
                    }
                    cout << "O somatorio dos numeros e: " << soma << endl;
                }
            else if (numero1>numero2)
                {
                    cout<<"o primeiro numero tem que ser menor que o segundo\n";
                }
            else
                cout<<"nao e possivel realizar a operacao";
            }

    return 0;
}
