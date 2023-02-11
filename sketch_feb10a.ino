
#define PIN_VOLT_SENSOR 13
float dc_v_value=0;
float adc_voltage=0;
float in_voltage=0;
// Valores de las resistencias
float R1 = 30000.0;
float R2 = 7500.0;
// Voltage de referencia
float ref_voltage = 5.0;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println ("Comrpbador de baterias"); 
  delay(1000);

}

void loop() {

  dc_v_value= analogRead(PIN_VOLT_SENSOR);
  Serial.println(dc_v_value,4);
// Determine voltage at ADC input
  adc_voltage  = (dc_v_value * ref_voltage) / 1024.0;
// Calculamos el divisor de voltage para optener la medida 
 in_voltage = adc_voltage / (R2 / (R1 + R2));
 Serial.print("Voltage = ");
  Serial.println(in_voltage, 4);
delay(1000);

}
