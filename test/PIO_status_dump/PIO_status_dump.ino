/*
  sam3a8c PIO Status Dumper
  Chun-Yu Wang
  wicanr2@gmail.com 
*/

struct my_PIO_status {
  uint32_t PSR; //PIO Status Register
  uint32_t OSR; //PIO Output Status Register
  uint32_t IFSR;// PIO  Glitch Input Filter Status Register
  uint32_t ODSR;// PIO Output Data Status Register  
  uint32_t PDSR;// Pin Data Status Register
  uint32_t IMR; //Interrupt Mask Register
  uint32_t ISR; //Interrupt Status Register
  uint32_t MDSR; //Multi-driver Status Register
  uint32_t PUSR;// Pad Pull-up Status Register
  uint32_t ABSR;// Peripheral AB Select Register
  uint32_t OWSR;// Output Write Status Register
  uint32_t ELSR;// Edge/Level Status Register
  uint32_t FRLHSR; //Fall/Rise-Low/High Status Register
  uint32_t LOCKSR; //Lock Status
  uint32_t WPMR ; // Write Protect Mode Register
  uint32_t WPSR; //Write Protect Status Register
};

// global variable
struct my_PIO_status init_PIOA, init_PIOB;
struct my_PIO_status current_PIOA, current_PIOB;

void dump_PIO_init() 
{
    init_PIOA.PSR = (REG_PIOA_PSR);
    init_PIOA.OSR = (REG_PIOA_OSR);
    init_PIOA.IFSR= (REG_PIOA_IFSR);
    init_PIOA.ODSR = (REG_PIOA_ODSR);
    init_PIOA.PDSR = (REG_PIOA_PDSR);
    init_PIOA.IMR = (REG_PIOA_IMR);
    init_PIOA.ISR = (REG_PIOA_ISR);
    init_PIOA.MDSR = (REG_PIOA_MDSR);
    init_PIOA.PUSR = (REG_PIOA_PUSR);
    init_PIOA.ABSR = (REG_PIOA_ABSR);
    init_PIOA.OWSR = (REG_PIOA_OWSR);
    init_PIOA.ELSR = (REG_PIOA_ELSR);
    init_PIOA.FRLHSR = (REG_PIOA_FRLHSR);
    init_PIOA.LOCKSR = (REG_PIOA_LOCKSR);
    init_PIOA.WPMR = (REG_PIOA_WPMR);
    init_PIOA.WPSR = (REG_PIOA_WPSR);

    init_PIOB.PSR = (REG_PIOB_PSR);
    init_PIOB.OSR = (REG_PIOB_OSR);
    init_PIOB.IFSR= (REG_PIOB_IFSR);
    init_PIOB.ODSR = (REG_PIOB_ODSR);
    init_PIOB.PDSR = (REG_PIOB_PDSR);
    init_PIOB.IMR = (REG_PIOB_IMR);
    init_PIOB.ISR = (REG_PIOB_ISR);
    init_PIOB.MDSR = (REG_PIOB_MDSR);
    init_PIOB.PUSR = (REG_PIOB_PUSR);
    init_PIOB.ABSR = (REG_PIOB_ABSR);
    init_PIOB.OWSR = (REG_PIOB_OWSR);
    init_PIOB.ELSR = (REG_PIOB_ELSR);
    init_PIOB.FRLHSR = (REG_PIOB_FRLHSR);
    init_PIOB.LOCKSR = (REG_PIOB_LOCKSR);
    init_PIOB.WPMR = (REG_PIOB_WPMR);
    init_PIOB.WPSR = (REG_PIOB_WPSR);
}

void dump_PIO_current() 
{
    current_PIOA.PSR = (REG_PIOA_PSR);
    current_PIOA.OSR = (REG_PIOA_OSR);
    current_PIOA.IFSR= (REG_PIOA_IFSR);
    current_PIOA.ODSR = (REG_PIOA_ODSR);
    current_PIOA.PDSR = (REG_PIOA_PDSR);
    current_PIOA.IMR = (REG_PIOA_IMR);
    current_PIOA.ISR = (REG_PIOA_ISR);
    current_PIOA.MDSR = (REG_PIOA_MDSR);
    current_PIOA.PUSR = (REG_PIOA_PUSR);
    current_PIOA.ABSR = (REG_PIOA_ABSR);
    current_PIOA.OWSR = (REG_PIOA_OWSR);
    current_PIOA.ELSR = (REG_PIOA_ELSR);
    current_PIOA.FRLHSR = (REG_PIOA_FRLHSR);
    current_PIOA.LOCKSR = (REG_PIOA_LOCKSR);
    current_PIOA.WPMR = (REG_PIOA_WPMR);
    current_PIOA.WPSR = (REG_PIOA_WPSR);

    current_PIOB.PSR = (REG_PIOB_PSR);
    current_PIOB.OSR = (REG_PIOB_OSR);
    current_PIOB.IFSR= (REG_PIOB_IFSR);
    current_PIOB.ODSR = (REG_PIOB_ODSR);
    current_PIOB.PDSR = (REG_PIOB_PDSR);
    current_PIOB.IMR = (REG_PIOB_IMR);
    current_PIOB.ISR = (REG_PIOB_ISR);
    current_PIOB.MDSR = (REG_PIOB_MDSR);
    current_PIOB.PUSR = (REG_PIOB_PUSR);
    current_PIOB.ABSR = (REG_PIOB_ABSR);
    current_PIOB.OWSR = (REG_PIOB_OWSR);
    current_PIOB.ELSR = (REG_PIOB_ELSR);
    current_PIOB.FRLHSR = (REG_PIOB_FRLHSR);
    current_PIOB.LOCKSR = (REG_PIOB_LOCKSR);
    current_PIOB.WPMR = (REG_PIOB_WPMR);
    current_PIOB.WPSR = (REG_PIOB_WPSR);
}

void enable_PIO_control_all() 
{
    (REG_PIOA_WPMR) = 0x50494F00; // Disable Write Protect
    (REG_PIOA_PER) = 0xFFFFFFFF; // Enable PIO control all pin 

    (REG_PIOB_WPMR) = 0x50494F00; // Disable Write Protect
    (REG_PIOB_PER) = 0xFFFFFFFF; // Enable PIO control all pin 
}
void disable_PIO_control_all() {

    (REG_PIOA_WPMR) = 0x50494F00; // Disable Write Protect
    (REG_PIOA_PDR) = 0xFFFFFFFF; // Disable PIO control all pin 
    
    (REG_PIOB_WPMR) = 0x50494F00; // Disable Write Protect
    (REG_PIOB_PDR) = 0xFFFFFFFF; // Disable PIO control all pin 
}


#define M_STATUS(prefix, name, field, sa, sb ) \
    do {\
        SerialUSB.print(prefix);  \
        SerialUSB.print(" "); \
        SerialUSB.print(name  " init_value: ");    \
        SerialUSB.print(sa->field,HEX);    \
        SerialUSB.print(" current_value: ");    \
        SerialUSB.println(sb->field,HEX); \
    }while(0);


void print_status(char* prefix,struct my_PIO_status *origin_status, struct my_PIO_status* current_status) 
{
   M_STATUS(prefix,"PIO Status Register (PSR)",PSR, origin_status, current_status);
   M_STATUS(prefix,"PIO Output Status Register (OSR)",OSR, origin_status, current_status);
   M_STATUS(prefix,"PIO Glitch Input Filter Status Register (IFSR)",IFSR, origin_status, current_status);
   M_STATUS(prefix,"PIO Output Data Status Register (ODSR)",ODSR, origin_status, current_status);
   M_STATUS(prefix,"Pin Data Status Register (PDSR)",PDSR, origin_status, current_status);
   M_STATUS(prefix,"Interrupt Mask Register (IMR)",IMR, origin_status, current_status);
   M_STATUS(prefix,"Interrupt Status Register (ISR)",ISR, origin_status, current_status);
   M_STATUS(prefix,"Multi-driver Status Register (MDSR)",MDSR, origin_status, current_status);
   M_STATUS(prefix,"Pad Pull-up Status Register (PUSR)",PUSR, origin_status, current_status);
   M_STATUS(prefix,"Peripheral AB Select Register (ABSR)",ABSR, origin_status, current_status);
   M_STATUS(prefix,"Output Write Status Register (OWSR)",OWSR, origin_status, current_status);
   M_STATUS(prefix,"Edge/Level Status Register (ELSR)",ELSR, origin_status, current_status);
   M_STATUS(prefix,"Fall/Rise Low/High Status Register (FRLHSR)",FRLHSR, origin_status, current_status);
   M_STATUS(prefix,"Locak Status (LOCAKSR)",LOCKSR, origin_status, current_status);
   M_STATUS(prefix,"Write Protect Mode Register (WPMR)",WPMR, origin_status, current_status);
   M_STATUS(prefix,"Write Protect Status Register (WPSR)",WPSR, origin_status, current_status);
}

void setup() {
    // put your setup code here, to run once:
    SerialUSB.begin(9600);
    dump_PIO_init();
}

void loop() {
    // put your main code here, to run repeatedly:

    SerialUSB.println("enable PIOA PIOB");
    enable_PIO_control_all();
    dump_PIO_current();
    //REG_PIOA_SODR = PIO_PB19 | PIO_PB18 | PIO_PB17;
    //REG_PIOB_SODR = PIO_PB19 | PIO_PB18 | PIO_PB17;
    REG_PIOB_SODR = 0x000F0000;
    REG_PIOA_SODR = 0x000F0000;
    
    print_status("PIOA", &init_PIOA, &current_PIOA);
    print_status("PIOB", &init_PIOB, &current_PIOB);
    
    SerialUSB.println("disable PIOA PIOB");
    disable_PIO_control_all();
    dump_PIO_current();
    print_status("PIOA", &init_PIOA, &current_PIOA);
    print_status("PIOB", &init_PIOB, &current_PIOB);

}
