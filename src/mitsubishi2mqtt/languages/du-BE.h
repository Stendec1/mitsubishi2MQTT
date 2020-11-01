/*
  mitsubishi2mqtt - Mitsubishi Heat Pump to MQTT control for Home Assistant.
  Copyright (c) 2019 gysmo38, dzungpv, shampeon, endeavour, jascdk, chrdavis, alekslyse.  All right reserved.
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

//Main Menu
const char txt_control[] PROGMEM = "Control";
const char txt_setup[] PROGMEM = "Setup";
const char txt_status[] PROGMEM = "Status";
const char txt_firmware_upgrade[] PROGMEM = "Firmware Opladen";
const char txt_reboot[] PROGMEM = "Herstart";

//Setup Menu
const char txt_MQTT[] PROGMEM = "MQTT";
const char txt_WIFI[] PROGMEM = "WIFI";
const char txt_unit[] PROGMEM = "Unit";
const char txt_others[] PROGMEM = "Andere";
const char txt_reset[] PROGMEM = "Herstel configuratie";
const char txt_reset_confirm[] PROGMEM = "Ben je zeker dat je het toetsel wilt initialiseren?";

//Buttons
const char txt_back[] PROGMEM = "Terug";
const char txt_save[] PROGMEM = "Opslaan & Herstarten";
const char txt_logout[] PROGMEM = "Uitloggen";
const char txt_upgrade[] PROGMEM = "Start upgrade";
const char txt_login[] PROGMEM = "LOGIN";

//Form choices
const char txt_f_on[] PROGMEM = "AAN";
const char txt_f_off[] PROGMEM = "UIT";
const char txt_f_auto[] PROGMEM = "AUTO";
const char txt_f_heat[] PROGMEM = "WARM";
const char txt_f_dry[] PROGMEM = "DROOG";
const char txt_f_cool[] PROGMEM = "KOUD";
const char txt_f_fan[] PROGMEM = "VENTILATOR";
const char txt_f_quiet[] PROGMEM = "STIL";
const char txt_f_speed[] PROGMEM = "SNELHEID";
const char txt_f_swing[] PROGMEM = "SWING";
const char txt_f_pos[] PROGMEM = "POSITIE";
const char txt_f_celsius[] PROGMEM = "Celsius";
const char txt_f_fh[] PROGMEM = "Fahrenheit";
const char txt_f_allmodes[] PROGMEM = "Alle modes";
const char txt_f_noheat[] PROGMEM = "Alle modes behalve verwarmen";


//Page Reboot, save & Resseting
const char txt_m_reboot[] PROGMEM = "Herstarten... Terug in";
const char txt_m_reset[] PROGMEM = "initialiseren... Connect to SSID";
const char txt_m_save[] PROGMEM = "Opslaan configuratie en herstarten... Terug in";

//Page MQTT
const char txt_mqtt_title[] PROGMEM = "MQTT Parameters";
const char txt_mqtt_fn[] PROGMEM = "Vriendelijk name";
const char txt_mqtt_host[] PROGMEM = "Host";
const char txt_mqtt_port[] PROGMEM = "Poort (normaal 1883)";
const char txt_mqtt_user[] PROGMEM = "Gebruiker";
const char txt_mqtt_password[] PROGMEM = "Wachtwoord";
const char txt_mqtt_topic[] PROGMEM = "Topic";

//Page Others
const char txt_others_title[] PROGMEM = "Andere Parameters";
const char txt_others_haauto[] PROGMEM = "HA Autodiscovery";
const char txt_others_hatopic[] PROGMEM = "HA Autodiscovery topic";
const char txt_others_debug[] PROGMEM = "Debug";

//Page Status
const char txt_status_title[] PROGMEM = "Status";
const char txt_status_hvac[] PROGMEM = "HVAC Status";
const char txt_status_mqtt[] PROGMEM = "MQTT Status";
const char txt_status_wifi[] PROGMEM = "WIFI RSSI";
const char txt_status_connect[] PROGMEM = "GECONNECTEERD";
const char txt_status_disconnect[] PROGMEM = "AFGEKOPPELD";

//Page WIFI
const char txt_wifi_title[] PROGMEM = "WIFI Parameters";
const char txt_wifi_hostname[] PROGMEM = "Hostname";
const char txt_wifi_SSID[] PROGMEM = "SSID";
const char txt_wifi_psk[] PROGMEM = "PSK";
const char txt_wifi_otap[] PROGMEM = "OTA Wachtwoord";

//Page Control
const char txt_ctrl_title[] PROGMEM = "Control Unit";
const char txt_ctrl_temp[] PROGMEM = "Temperatuur";
const char txt_ctrl_power[] PROGMEM = "Aan/Uit";
const char txt_ctrl_mode[] PROGMEM = "Mode";
const char txt_ctrl_fan[] PROGMEM = "Ventilateur";
const char txt_ctrl_vane[] PROGMEM = "Vlimmen";
const char txt_ctrl_wvane[] PROGMEM = "Horizontale Vlimmen";
const char txt_ctrl_ctemp[] PROGMEM = "Huidige temperatuur";

//Page Unit
const char txt_unit_title[] PROGMEM = "Unit configuratie";
const char txt_unit_temp[] PROGMEM = "Temperatuur indicatie";
const char txt_unit_maxtemp[] PROGMEM = "Maximum temperatuur";
const char txt_unit_mintemp[] PROGMEM = "Minimum temperatuur";
const char txt_unit_steptemp[] PROGMEM = "Temperatuur stap";
const char txt_unit_modes[] PROGMEM = "Beschikbare modes";
const char txt_unit_password[] PROGMEM = "Web wachtwoord";

//Page Login
const char txt_login_title[] PROGMEM = "Authenticatie";
const char txt_login_password[] PROGMEM = "Wachtwoord";
const char txt_login_sucess[] PROGMEM = "Successvol ingelogd, je wordt zodadelijk toegelaten.";
const char txt_login_fail[] PROGMEM = "Foutieve gebruikersnaam/wachtwoord! Probeer opnieuw.";

//Page Upgrade
const char txt_upgrade_title[] PROGMEM = "Upgrade";
const char txt_upgrade_info[] PROGMEM = "Firmware OTA upgrade door bin bestand opladen";
const char txt_upgrade_start[] PROGMEM = "Opladen gestart";

//Page Upload
const char txt_upload_nofile[] PROGMEM = "Geen bestand geselecteerd";
const char txt_upload_filetoolarge[] PROGMEM = "Bestand is groter dan de beschikbare vrijer ruimte";
const char txt_upload_fileheader[] PROGMEM = "Bestand magic header start niet met 0xE9";
const char txt_upload_flashsize[] PROGMEM = "Flash bestand is groter dan flash de flash ruimte op het device";
const char txt_upload_buffer[] PROGMEM = "Bestand oplaad buffer komt niet overeen";
const char txt_upload_failed[] PROGMEM = "Opladen gefaald. Zet logging optie 3 aan voor meer informatie";
const char txt_upload_aborted[] PROGMEM = "Opladen onderbroken";
const char txt_upload_code[] PROGMEM = "Oplaad fout code ";
const char txt_upload_error[] PROGMEM = "Update fout code (zie Updater.cpp) ";
const char txt_upload_sucess[] PROGMEM = "Successvol";
const char txt_upload_refresh[] PROGMEM = "Herstart in";

//Page Init
const char txt_init_title[] PROGMEM = "Initiele setup";
const char txt_init_reboot_mes[] PROGMEM = "Herstarten en connecteren aan het WiFi netwderk! ZOu zichtbaar moeten zijn in het AP. ";
const char txt_init_reboot[] PROGMEM = "Herstarten...";
