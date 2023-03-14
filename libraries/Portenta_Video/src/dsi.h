#ifndef _DSI_H_
#define _DSI_H_

int                     stm32_dsi_config(uint8_t bus, struct edid *edid, struct display_timing *dt);
void                    stm32_LCD_Clear(uint32_t color);
void                    stm32_LCD_DrawImage(void *pSrc, void *pDst, uint32_t xSize, uint32_t ySize, uint32_t ColorMode);
void                    stm32_LCD_FillArea(void *pDst, uint32_t xSize, uint32_t ySize, uint32_t ColorMode);
void                    stm32_configue_CLUT(uint32_t* clut);
uint32_t                getNextFrameBuffer(void);
uint32_t                getCurrentFrameBuffer(void);
uint32_t                stm32_getXSize(void);
uint32_t                stm32_getYSize(void);
uint32_t                getFramebufferEnd(void );
DMA2D_HandleTypeDef*    stm32_get_DMA2D(void);

#endif /* _DSI_H_ */