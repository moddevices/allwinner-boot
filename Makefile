all:
	make -f make_boot  -C boot1/driver/nand-lib -j8
	make -f make_nand  -C boot1/core -j8
	make -C boot1/apps/Boot_Android -j8

clean:
	find . -name "*.o" -delete
	rm -f boot1/apps/Boot_Android/__image.axf
	rm -f boot1/core/boot1_nand
	rm -f boot1/driver/drv_nand/bsp_nfc_boot1_for_boot.lib
	rm -f boot1/driver/drv_nand/bsp_nfc_boot1_for_card.lib
