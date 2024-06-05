using System;

class Program
{
    static void Main(string[] args)
    {
        double result = Log(10); // Llamada de ejemplo a la función Log
        Console.WriteLine(result); // Imprime el resultado en la consola
    }

    static double Log(double y)
    {
        double result;
        result = Math.Log10(y); // Utiliza Math.Log10 para calcular el logaritmo en base 10
        return result; // Devuelve el resultado
    }
}

//double log(double y)
//{
  //  double reult;
	//Sentencias que calculan el resultado (el logaritmo)
    //En función del parámetro y. Por ejemplo:
   // result = log10(y);
  //  return result //Devuelve el vlor calculado
//}

void main()
{
    double x;
    x=Log(2);
    printf("%f/n",x);
}

void main()
{
    double x, n;
    scanf("%f/n", &n);
    x=Log(2);
    printf("%f/n",x);
}

#define N 10
int m[N]; //Los elementos son m[0], m[1], m[2], m[3], m[4], ..., [9]