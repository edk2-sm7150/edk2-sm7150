FILE DRIVER = 8e9bd160-b184-11df-94e2-0800200c9a66 {
    SECTION DXE_DEPEX = Dxe/Xiaomi/sweet/DALSYSDxe/DALSYSDxe.depex
    SECTION PE32 = Dxe/Xiaomi/sweet/DALSYSDxe/DALSYSDxe.efi
    SECTION UI = "DALSYSDxe"
}

FILE DRIVER = 5bd181db-0487-4f1a-ae73-820e165611b3 {
    SECTION DXE_DEPEX = Dxe/Xiaomi/sweet/ButtonsDxe/ButtonsDxe.depex
    SECTION PE32 = Dxe/Xiaomi/sweet/ButtonsDxe/ButtonsDxe.efi
    SECTION UI = "ButtonsDxe"
}

FILE DRIVER = cd823a4d-7dec-4531-ae5d-4134fa4127b8 {
    SECTION DXE_DEPEX = Dxe/sm7150/UsbConfigDxe/UsbConfigDxe.depex
    SECTION PE32 = Dxe/sm7150/UsbConfigDxe/UsbConfigDxe.efi
    SECTION UI = "UsbConfigDxe"
}

FILE DRIVER = 11faed4c-b21f-4d88-8e48-c4c28a1e50df {
    SECTION DXE_DEPEX = Dxe/sm7150/UsbPwrCtrlDxe/UsbPwrCtrlDxe.depex
    SECTION PE32 = Dxe/sm7150/UsbPwrCtrlDxe/UsbPwrCtrlDxe.efi
    SECTION UI = "UsbPwrCtrlDxe"
}

FILE DRIVER = 94f8a6a7-dc34-4101-88c1-99179cceae83 {
    SECTION DXE_DEPEX = Dxe/sm7150/UsbfnDwc3Dxe/UsbfnDwc3Dxe.depex
    SECTION PE32 = Dxe/sm7150/UsbfnDwc3Dxe/UsbfnDwc3Dxe.efi
    SECTION UI = "UsbfnDwc3Dxe"
}

FILE DRIVER = 5776232E-082D-4B75-9A0E-FE1D13F7A5D9 {
    SECTION DXE_DEPEX = Dxe/Xiaomi/sweet/PmicDxe/PmicDxeLa.depex
    SECTION PE32 = Dxe/Xiaomi/sweet/PmicDxe/PmicDxeLa.efi
    SECTION UI = "PmicDxe"
}

FILE DRIVER = 9A00771F-36D4-4DD5-8916-C48ED9B16B86 {
    SECTION DXE_DEPEX = Dxe/Xiaomi/sweet/HALIOMMUDxe/HALIOMMUDxe.depex
    SECTION PE32 = Dxe/Xiaomi/sweet/HALIOMMUDxe/HALIOMMUDxe.efi
    SECTION UI = "HALIOMMU"
}

FILE FREEFORM = 7E374E25-8E01-4FEE-87F2-390C23C606CD {
    SECTION RAW = F11/AcpiTables/sweet/DSDT.aml
    SECTION RAW = F11/AcpiTables/7180/dbg2.acpi
    SECTION RAW = F11/AcpiTables/7180/bgrt.acpi
    SECTION RAW = F11/AcpiTables/7180/Csrt.acpi
    SECTION RAW = F11/AcpiTables/7180/spcr.acpi
    SECTION RAW = F11/AcpiTables/7180/Facp.acpi
    SECTION RAW = F11/AcpiTables/7180/Madt.acpi
    SECTION RAW = F11/AcpiTables/7180/Facs.acpi
    SECTION RAW = F11/AcpiTables/7180/Gtdt.acpi
    SECTION RAW = F11/AcpiTables/7180/IORT.acpi
    SECTION RAW = F11/AcpiTables/7180/Mcfg.acpi
    SECTION RAW = F11/AcpiTables/7180/Pptt.acpi
    SECTION RAW = F11/AcpiTables/7180/TPM2.acpi
    SECTION UI = "AcpiTables"
}

# FILE FREEFORM = 25462CDA-221F-47DF-AC1D-259CFAA4E326 {
# 	 SECTION RAW = FdtBlob/mainline/sweet/sm7150-xiaomi-sweet.dtb
# }
