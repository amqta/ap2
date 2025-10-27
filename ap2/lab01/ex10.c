/*
10 – Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme solicitado
abaixo:
• Horário: composto de hora, minutos e segundos.
• Data: composto de dia, mês e ano.
• Agenda: composto de uma data, horário e texto que descreve o compromisso.
*/

struct horario
{
    int hora, minuto, segundo;
};
struct data
{
    int dia, mes, ano;
};
struct agenda
{
    char compromisso[50];
};
