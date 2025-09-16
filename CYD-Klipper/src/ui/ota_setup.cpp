#include "../lib/ESP32OTAPull.h"
#include "lvgl.h"
#include "ui_utils.h"
#include "../core/lv_setup.h"
#include "../core/data_setup.h"
#include "../conf/global_config.h"
#include "ota_setup.h"
#include "../core/semaphore.h"

// --- OTA DISABLED ---
// OTA functionality has been disabled for this fork.
// The following variables and functions are stubbed out to prevent updates.

// const char *ota_url = "https://suchmememanyskill.github.io/CYD-Klipper/OTA.json";
// ESP32OTAPull ota_pull;
static bool update_available = false;
static bool ready_for_ota_update = false;

String ota_new_version_name()
{
    // OTA is disabled, return an empty string.
    return "";
}

bool ota_has_update()
{
    // OTA is disabled, always return false.
    return false;
}

// These UI-related variables and the callback are no longer needed
// as ota_do_update will not use them.
// static int last_callback_time = 0;
// lv_obj_t *percentage_bar;
// lv_obj_t *update_label;
// void do_update_callback(int offset, int totallength) { }


void ota_do_update(bool variant_automatic)
{
    // OTA is disabled, do nothing.
    LOG_LN("OTA update triggered, but functionality is disabled in this fork.");
    // Optionally, you could show a message to the user on the screen.
    // For example:
    // lv_obj_clean(lv_scr_act());
    // lv_obj_t * label = lv_label_create(lv_scr_act());
    // lv_obj_center(label);
    // lv_label_set_text(label, "OTA Updates are disabled.");
}

void ota_init()
{
    // OTA is disabled, so we do nothing here.
    // This prevents the initial check for updates on startup.
    LOG_LN("OTA: Update checks are disabled in this fork.");
    update_available = false;
}

void set_ready_for_ota_update()
{
    // OTA is disabled.
    ready_for_ota_update = false;
}

bool is_ready_for_ota_update()
{
    // OTA is disabled.
    return false;
}