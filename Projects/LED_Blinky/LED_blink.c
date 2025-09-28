#include <stdint.h>

#define GPIOC_BASE 0x40011000U
#define RCC_BASE 0x40021000U

/*GPIOx Registers*/
#define GPIOx_CRL 0x00U
#define GPIOx_CRH 0x04U
#define GPIOx_IDR 0x08U
#define GPIOx_ODR 0x0CU
#define GPIOx_BSRR 0x10U
#define GPIOx_BRR 0x14U



/*GPIOC Registers*/
#define GPIOC_CRL (GPIOC_BASE+GPIOx_CRL)
#define GPIOC_CRH (GPIOC_BASE+GPIOx_CRH)
#define GPIOC_IDR (GPIOC_BASE+GPIOx_IDR)
#define GPIOC_ODR (GPIOC_BASE+GPIOx_ODR)
#define GPIOC_BSRR (GPIOC_BASE+GPIOx_BSRR)
#define GPIOC_BRR (GPIOC_BASE+GPIOx_BRR)

/*RCC_APB2 enable*/

#define RCC_APB2ENR (RCC_BASE + 0x18U)

/*delay*/
void delay();

int main(void)
{
	volatile uint32_t *pgpiocaddcrh = (uint32_t *) GPIOC_CRH;
	volatile uint32_t *pgpiocaddodr = (uint32_t *) GPIOC_ODR;

	volatile uint32_t *papb2enradd = (uint32_t *) RCC_APB2ENR;

    *papb2enradd |=(1<<4);

    *pgpiocaddcrh  &= ~(0xF<<20);

	*pgpiocaddcrh  |= (0x02<<20);


	while(1)
	{
		*pgpiocaddodr ^= (1<<13);
		delay(500000);
	}
}

void delay(volatile uint32_t x)
	{
		while(x--);
	}
