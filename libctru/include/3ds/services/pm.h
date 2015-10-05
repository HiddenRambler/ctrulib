/**
 * @file pm.h
 * @brief PM (Process Manager) service.
 */
#pragma once

/// Initializes PM.
Result pmInit(void);

/// Exits PM.
Result pmExit(void);

/**
 * @brief Launches a title.
 * @param mediatype Mediatype of the title.
 * @param titleid ID of the title.
 * @param launch_flags Flags to launch the title with.
 */
Result PM_LaunchTitle(u8 mediatype, u64 titleid, u32 launch_flags);

/**
 * @brief Gets launch flags from a title's exheader.
 * @param mediatype Mediatype of the title.
 * @param titleid ID of the title.
 * @param out Pointer to write the launch flags to.
 */
Result PM_GetTitleExheaderFlags(u8 mediatype, u64 titleid, u8* out);

/**
 * @brief Sets the current FIRM launch parameters.
 * @param size Size of the FIRM launch parameter buffer.
 * @param in Buffer to retrieve the launch parameters from.
 */
Result PM_SetFIRMLaunchParams(u32 size, u8* in);

/**
 * @brief Gets the current FIRM launch parameters.
 * @param size Size of the FIRM launch parameter buffer.
 * @param out Buffer to write the launch parameters to.
 */
Result PM_GetFIRMLaunchParams(u32 size, u8* out);

/**
 * @brief Sets the current FIRM launch parameters.
 * @param firm_titleid_low Low Title ID of the FIRM title to launch.
 * @param size Size of the FIRM launch parameter buffer.
 * @param in Buffer to retrieve the launch parameters from.
 */
Result PM_LaunchFIRMSetParams(u32 firm_titleid_low, u32 size, u8* in);
