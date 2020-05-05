#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int dan[366] = { 0 };
	int mesec[12] = { 0 };
	int godina[2] = { 0 };

	int krajnji_dan;
	int krajnji_mesec;
	int krajnja_godina;

	int i, j = 0, n = 0;

	int broj_obolelih[366] = { 0 };
	int broj_izlecenih[366] = { 0 };
	int broj_umrlih[366] = { 0 };

	printf("Unesite pocetni datum: ");
	printf("\n\tDan: ");
	scanf("%d", &dan[0]);
	printf("\n\tMesec: ");
	scanf("%d", &mesec[0]);
	printf("\n\tGodina: ");
	scanf("%d", &godina[0]);

	printf("Unesite danasnji datum: ");
	printf("\n\tDan: ");
	scanf("%d", &krajnji_dan);
	printf("\n\tMesec: ");
	scanf("%d", &krajnji_mesec);
	printf("\n\tGodina: ");
	scanf("%d", &krajnja_godina);
	if (godina[0] == krajnja_godina)
	{
		if (mesec[0] == krajnji_mesec)
		{
			if (dan[0] <= krajnji_dan)
			{
				for (i = dan[0]; i <= krajnji_dan; i++)
				{
					printf("\nDatum: %d. %d.", i, mesec[0]);
					printf("\n\tBroj obolelih: ");
					scanf("%d", &broj_obolelih[0 + n]);
					printf("\n\tBroj izlecenih: ");
					scanf("%d", &broj_izlecenih[0 + n]);
					printf("\n\tBroj umrlih: ");
					scanf("%d", &broj_umrlih[0 + n]);

					dan[0 + j] = i;
					j++;
					n++;
				}
			}
			else
			{
				printf("Niste uneli dobar datum!");
			}
		}
		else if (mesec[0] != krajnji_mesec)
		{

			switch (mesec[0])
			{
			case 1:
			{
				for (i = dan[0]; i <= 31; i++)
				{
					printf("\n\tDatum: %d. %d.", i, mesec[0]);
					printf("\n\tBroj obolelih: ");
					scanf("%d", &broj_obolelih[0 + n]);
					printf("\n\tBroj izlecenih: ");
					scanf("%d", &broj_izlecenih[0 + n]);
					printf("\n\tBroj umrlih: ");
					scanf("%d", &broj_umrlih[0 + n]);
					dan[0 + j] = i;
					j++;
					n++;
				}
				if (krajnji_mesec == 2)
				{
					mesec[1] = 2;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 3 || krajnji_mesec == 4 || krajnji_mesec == 5 || krajnji_mesec == 6 || krajnji_mesec == 7 || krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[1] = 2;
					if ((godina[0] % 400 == 0) || (godina[0] % 100 != 0 && godina[0] % 4 == 0))
					{
						for (i = 1; i <= 29; i++)
						{
							printf("\n\tDatum: %d. %d.", i, mesec[1]);
							printf("\n\tBroj obolelih: ");
							scanf("%d", &broj_obolelih[0 + n]);
							printf("\n\tBroj izlecenih: ");
							scanf("%d", &broj_izlecenih[0 + n]);
							printf("\n\tBroj umrlih: ");
							scanf("%d", &broj_umrlih[0 + n]);
							dan[0 + j] = i;
							j++;
							n++;

						}
					}
					else
					{
						for (i = 1; i <= 28; i++)
						{
							printf("\n\tDatum: %d. %d.", i, mesec[1]);
							printf("\n\tBroj obolelih: ");
							scanf("%d", &broj_obolelih[0 + n]);
							printf("\n\tBroj izlecenih: ");
							scanf("%d", &broj_izlecenih[0 + n]);
							printf("\n\tBroj umrlih: ");
							scanf("%d", &broj_umrlih[0 + n]);
							dan[0 + j] = i;
							j++;
							n++;

						}

					}

				}
				if (krajnji_mesec == 3)
				{
					mesec[2] = 3;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 4 || krajnji_mesec == 5 || krajnji_mesec == 6 || krajnji_mesec == 7 || krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[2] = 3;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[2]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 4)
				{
					mesec[3] = 4;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 5 || krajnji_mesec == 6 || krajnji_mesec == 7 || krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[3] = 4;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[3]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 5)
				{
					mesec[4] = 5;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 6 || krajnji_mesec == 7 || krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[4] = 5;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[4]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 6)
				{
					mesec[5] = 6;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 7 || krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[5] = 6;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[5]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 7)
				{
					mesec[6] = 7;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[6] = 7;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[6]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 8)
				{
					mesec[7] = 8;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[7] = 8;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[7]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 9)
				{
					mesec[8] = 9;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[8] = 9;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[8]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 10)
				{
					mesec[9] = 10;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[9] = 10;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[9]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 11)
				{
					mesec[10] = 11;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 12)
				{
					mesec[10] = 11;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[10]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}

					mesec[11] = 12;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}

				break;
			}
			case 2:
			{

				if ((godina[0] % 400 == 0) || (godina[0] % 100 != 0 && godina[0] % 4 == 0))
				{
					for (i = dan[0]; i <= 29; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[0]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;

					}
				}
				else
				{
					for (i = dan[0]; i <= 28; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[0]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;

					}
				}
				if (krajnji_mesec == 3)
				{
					mesec[1] = 3;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 4 || krajnji_mesec == 5 || krajnji_mesec == 6 || krajnji_mesec == 7 || krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[1] = 3;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[1]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 4)
				{
					mesec[2] = 4;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 5 || krajnji_mesec == 6 || krajnji_mesec == 7 || krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[2] = 4;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[2]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 5)
				{
					mesec[3] = 5;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 6 || krajnji_mesec == 7 || krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[3] = 5;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[3]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 6)
				{
					mesec[4] = 6;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 7 || krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[4] = 6;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[4]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 7)
				{
					mesec[5] = 7;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[5] = 7;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[5]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 8)
				{
					mesec[6] = 8;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[6] = 8;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[6]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 9)
				{
					mesec[7] = 9;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[7] = 9;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[7]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 10)
				{
					mesec[8] = 10;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[8] = 10;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[8]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 11)
				{
					mesec[9] = 11;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 12)
				{
					mesec[9] = 11;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[9]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}

					mesec[10] = 12;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}

				break;

			}
			case 3:
			{
				for (i = dan[0]; i <= 31; i++)
				{
					printf("\n\tDatum: %d. %d.", i, mesec[0]);
					printf("\n\tBroj obolelih: ");
					scanf("%d", &broj_obolelih[0 + n]);
					printf("\n\tBroj izlecenih: ");
					scanf("%d", &broj_izlecenih[0 + n]);
					printf("\n\tBroj umrlih: ");
					scanf("%d", &broj_umrlih[0 + n]);
					dan[0 + j] = i;
					j++;
					n++;
				}

				if (krajnji_mesec == 4)
				{
					mesec[1] = 4;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 5 || krajnji_mesec == 6 || krajnji_mesec == 7 || krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[1] = 4;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[1]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 5)
				{
					mesec[2] = 5;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 6 || krajnji_mesec == 7 || krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[2] = 5;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[2]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 6)
				{
					mesec[3] = 6;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 7 || krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[3] = 6;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[3]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 7)
				{
					mesec[4] = 7;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[4] = 7;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[4]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 8)
				{
					mesec[5] = 8;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[5] = 8;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[5]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 9)
				{
					mesec[6] = 9;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[6] = 9;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[6]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 10)
				{
					mesec[7] = 10;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[7] = 10;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[7]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 11)
				{
					mesec[8] = 11;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 12)
				{
					mesec[8] = 11;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[8]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}

					mesec[9] = 12;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}

				break;
			}

			case 4:
			{
				for (i = dan[0]; i <= 30; i++)
				{
					printf("\n\tDatum: %d. %d.", i, mesec[0]);
					printf("\n\tBroj obolelih: ");
					scanf("%d", &broj_obolelih[0 + n]);
					printf("\n\tBroj izlecenih: ");
					scanf("%d", &broj_izlecenih[0 + n]);
					printf("\n\tBroj umrlih: ");
					scanf("%d", &broj_umrlih[0 + n]);
					dan[0 + j] = i;
					j++;
					n++;
				}

				if (krajnji_mesec == 5)
				{
					mesec[1] = 5;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 6 || krajnji_mesec == 7 || krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[1] = 5;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[1]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 6)
				{
					mesec[2] = 6;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 7 || krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[2] = 6;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[2]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 7)
				{
					mesec[3] = 7;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[3] = 7;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[3]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 8)
				{
					mesec[4] = 8;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[4] = 8;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[4]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 9)
				{
					mesec[5] = 9;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[5] = 9;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[5]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 10)
				{
					mesec[6] = 10;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[6] = 10;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[6]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 11)
				{
					mesec[7] = 11;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 12)
				{
					mesec[7] = 11;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[7]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}

					mesec[8] = 12;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}

				break;
			}
			case 5:
			{

				for (i = dan[0]; i <= 31; i++)
				{
					printf("\n\tDatum: %d. %d.", i, mesec[0]);
					printf("\n\tBroj obolelih: ");
					scanf("%d", &broj_obolelih[0 + n]);
					printf("\n\tBroj izlecenih: ");
					scanf("%d", &broj_izlecenih[0 + n]);
					printf("\n\tBroj umrlih: ");
					scanf("%d", &broj_umrlih[0 + n]);
					dan[0 + j] = i;
					j++;
					n++;
				}

				if (krajnji_mesec == 6)
				{
					mesec[1] = 6;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 7 || krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[1] = 6;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[1]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 7)
				{
					mesec[2] = 7;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[2] = 7;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[2]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 8)
				{
					mesec[3] = 8;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[3] = 8;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[3]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 9)
				{
					mesec[4] = 9;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[4] = 9;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[4]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 10)
				{
					mesec[5] = 10;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[5] = 10;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[5]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 11)
				{
					mesec[6] = 11;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 12)
				{
					mesec[6] = 11;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[6]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}

					mesec[7] = 12;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}

				break;

			}
			case 6:
			{

				for (i = dan[0]; i <= 30; i++)
				{
					printf("\n\tDatum: %d. %d.", i, mesec[0]);
					printf("\n\tBroj obolelih: ");
					scanf("%d", &broj_obolelih[0 + n]);
					printf("\n\tBroj izlecenih: ");
					scanf("%d", &broj_izlecenih[0 + n]);
					printf("\n\tBroj umrlih: ");
					scanf("%d", &broj_umrlih[0 + n]);
					dan[0 + j] = i;
					j++;
					n++;
				}

				if (krajnji_mesec == 7)
				{
					mesec[1] = 7;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 8 || krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[1] = 7;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[1]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 8)
				{
					mesec[2] = 8;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[2] = 8;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[2]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 9)
				{
					mesec[3] = 9;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[3] = 9;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[4]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 10)
				{
					mesec[4] = 10;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[4] = 10;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[4]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 11)
				{
					mesec[5] = 11;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 12)
				{
					mesec[5] = 11;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[5]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}

					mesec[6] = 12;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}

				break;

			}
			case 7:
			{

				for (i = dan[0]; i <= 31; i++)
				{
					printf("\n\tDatum: %d. %d.", i, mesec[0]);
					printf("\n\tBroj obolelih: ");
					scanf("%d", &broj_obolelih[0 + n]);
					printf("\n\tBroj izlecenih: ");
					scanf("%d", &broj_izlecenih[0 + n]);
					printf("\n\tBroj umrlih: ");
					scanf("%d", &broj_umrlih[0 + n]);
					dan[0 + j] = i;
					j++;
					n++;
				}

				if (krajnji_mesec == 8)
				{
					mesec[1] = 8;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 9 || krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[1] = 8;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[1]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 9)
				{
					mesec[2] = 9;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[2] = 9;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[2]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 10)
				{
					mesec[3] = 10;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[3] = 10;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[3]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 11)
				{
					mesec[4] = 11;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 12)
				{
					mesec[4] = 11;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[4]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}

					mesec[5] = 12;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}

				break;

			}
			case 8:
			{

				for (i = dan[0]; i <= 31; i++)
				{
					printf("\n\tDatum: %d. %d.", i, mesec[0]);
					printf("\n\tBroj obolelih: ");
					scanf("%d", &broj_obolelih[0 + n]);
					printf("\n\tBroj izlecenih: ");
					scanf("%d", &broj_izlecenih[0 + n]);
					printf("\n\tBroj umrlih: ");
					scanf("%d", &broj_umrlih[0 + n]);
					dan[0 + j] = i;
					j++;
					n++;
				}

				if (krajnji_mesec == 9)
				{
					mesec[1] = 9;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 10 || krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[1] = 9;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[1]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 10)
				{
					mesec[2] = 10;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[2] = 10;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[2]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 11)
				{
					mesec[3] = 11;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 12)
				{
					mesec[3] = 11;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[3]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}

					mesec[4] = 12;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}

				break;

			}
			case 9:
			{

				for (i = dan[0]; i <= 30; i++)
				{
					printf("\n\tDatum: %d. %d.", i, mesec[0]);
					printf("\n\tBroj obolelih: ");
					scanf("%d", &broj_obolelih[0 + n]);
					printf("\n\tBroj izlecenih: ");
					scanf("%d", &broj_izlecenih[0 + n]);
					printf("\n\tBroj umrlih: ");
					scanf("%d", &broj_umrlih[0 + n]);
					dan[0 + j] = i;
					j++;
					n++;
				}

				if (krajnji_mesec == 10)
				{
					mesec[1] = 10;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 11 || krajnji_mesec == 12)
				{
					mesec[1] = 10;
					for (i = 1; i <= 31; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[1]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 11)
				{
					mesec[2] = 11;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 12)
				{
					mesec[2] = 11;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[2]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}

					mesec[3] = 12;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}

				break;

			}
			case 10:
			{
				for (i = dan[0]; i <= 31; i++)
				{
					printf("\n\tDatum: %d. %d.", i, mesec[0]);
					printf("\n\tBroj obolelih: ");
					scanf("%d", &broj_obolelih[0 + n]);
					printf("\n\tBroj izlecenih: ");
					scanf("%d", &broj_izlecenih[0 + n]);
					printf("\n\tBroj umrlih: ");
					scanf("%d", &broj_umrlih[0 + n]);
					dan[0 + j] = i;
					j++;
					n++;
				}

				if (krajnji_mesec == 11)
				{
					mesec[1] = 11;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}
				if (krajnji_mesec == 12)
				{
					mesec[1] = 11;
					for (i = 1; i <= 30; i++)
					{
						printf("\n\tDatum: %d. %d.", i, mesec[1]);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}

					mesec[2] = 12;
					for (i = 1; i <= krajnji_dan; i++)
					{
						printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
						printf("\n\tBroj obolelih: ");
						scanf("%d", &broj_obolelih[0 + n]);
						printf("\n\tBroj izlecenih: ");
						scanf("%d", &broj_izlecenih[0 + n]);
						printf("\n\tBroj umrlih: ");
						scanf("%d", &broj_umrlih[0 + n]);
						dan[0 + j] = i;
						j++;
						n++;
					}
				}

				break;

			}
			case 11:
			{
				for (i = dan[0]; i <= 30; i++)
				{
					printf("\n\tDatum: %d. %d.", i, mesec[0]);
					printf("\n\tBroj obolelih: ");
					scanf("%d", &broj_obolelih[0 + n]);
					printf("\n\tBroj izlecenih: ");
					scanf("%d", &broj_izlecenih[0 + n]);
					printf("\n\tBroj umrlih: ");
					scanf("%d", &broj_umrlih[0 + n]);
					dan[0 + j] = i;
					j++;
					n++;
				}

				mesec[1] = 12;
				for (i = 1; i <= krajnji_dan; i++)
				{
					printf("\n\tDatum: %d. %d.", i, krajnji_mesec);
					printf("\n\tBroj obolelih: ");
					scanf("%d", &broj_obolelih[0 + n]);
					printf("\n\tBroj izlecenih: ");
					scanf("%d", &broj_izlecenih[0 + n]);
					printf("\n\tBroj umrlih: ");
					scanf("%d", &broj_umrlih[0 + n]);
					dan[0 + j] = i;
					j++;
					n++;
				}


				break;

			}
			default: printf("Niste ukucali dobar datum!");

			}


		}
	}
	else
	{
		printf("Niste ukucali dobar datum!");
	}

	getch();
}