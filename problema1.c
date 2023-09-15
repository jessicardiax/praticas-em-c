#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    double temp;
    char unidade;

    printf("Informe a temperatura do paciente: ");
    scanf("%lf", &temp);

    printf("Digite a unidade da temperatura (C para Celsius, F para Fahrenheit): ");
    scanf(" %c", &unidade);

    if (unidade == 'C' || unidade == 'c') {
        if (temp < 35) {
            printf("O paciente está com hipotermia %.2lf ºC\n", temp);
        } else if (temp >= 35 && temp <= 36.5) {
            
            printf("Paciente em risco, a temperatura corporal do paciente é de %.2lf ºC\n", temp);
        } else if (temp > 36.5 && temp < 37.5) {
            
            printf("Paciente está com a temperatura normal %.2lf ºC\n", temp);
        } else if (temp >= 37.5 && temp <= 40) {
            
            printf("O paciente está em risco, temperatura do paciente %.2lf ºC\n", temp);
        } else if (temp > 40) {
            
            printf("Paciente está com hiperpirexia %.2lf ºC\n", temp);
        }
    } else if (unidade == 'F' || unidade == 'f') {
        if (temp < 95) {
            
            printf("O paciente está com hipotermia %.2lf ºF\n", temp);
        } else if (temp >= 95 && temp <= 97.7) {
            
            printf("Paciente em risco, a temperatura corporal do paciente é de %.2lf ºF\n", temp);
        } else if (temp >= 97.7 && temp <= 99.5) {
            
            printf("Paciente está com a temperatura normal %.2lf ºF\n", temp);
        } else if (temp >= 99.5 && temp <= 104) {
            
            printf("O paciente está em risco, temperatura do paciente %.2lf ºF\n", temp);
        } else if (temp > 104) {
            
            printf("O paciente está com hiperpirexia %.2lf ºF\n", temp);
        }
    } else {
        printf("temperatura não reconhecida\n");
    }

    return 0;
}
