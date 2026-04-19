# 介绍
这个仓库我是用来备份STM32H723ZGT6移植过LWIP并且使用Keil AC6编译器通过的工程代码
LWIP使用**裸机**接口

**芯片**:stm32h723zgt6

一块demo板子，只有主芯片与引出的pin引脚插针

**网卡**:lan8720

独立模块，通过杜邦线与stm32h723zgt6引脚连接，且**没有复位引脚**

# 连接方式
    PC1     ------> ETH_MDC
    PA1     ------> ETH_REF_CLK
    PA2     ------> ETH_MDIO
    PA7     ------> ETH_CRS_DV
    PC4     ------> ETH_RXD0
    PC5     ------> ETH_RXD1
    PG11     ------> ETH_TX_EN
    PG13     ------> ETH_TXD0
    PG14     ------> ETH_TXD1