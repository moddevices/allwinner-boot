all:
	make -f make_boot -C boot1/driver/nand-lib -j8
	make -f make_nand -C boot1/core -j8
	make -C boot1/apps/Boot_Android -j8

patch: sys_config.fex
	busybox unix2dos sys_config.fex
	./pack/pctools/linux/mod_update/script sys_config.fex
	./pack/pctools/linux/mod_update/update_boot1 ./workspace/egon/boot1_nand.bin sys_config.bin NAND

clean:
	find . -name "*.o" -delete
	rm -f sys_config.bin
	rm -f boot1/apps/Boot_Android/__image.axf
	rm -f boot1/core/boot1_nand
	rm -f boot1/driver/drv_nand/bsp_nfc_boot1_for_boot.lib
	rm -f boot1/driver/drv_nand/bsp_nfc_boot1_for_card.lib
	rm -f pack/chips/sun7i/eGon/boot1_nand.bin
	rm -f workspace/egon/boot1_nand.bin
	rm -f workspace/wboot/bootfs/boot.axf
