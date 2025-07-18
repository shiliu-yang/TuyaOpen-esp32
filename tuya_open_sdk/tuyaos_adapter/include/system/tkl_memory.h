/**
* @file tkl_memory.h
* @brief Common process - adapter the semaphore api provide by OS
* @version 0.1
* @date 2020-11-09
*
* @copyright Copyright 2021-2030 Tuya Inc. All Rights Reserved.
*
*/
#ifndef __TKL_MEMORY_H__
#define __TKL_MEMORY_H__

#include "tuya_cloud_types.h"

#include "sdkconfig.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
* @brief Alloc memory of system
*
* @param[in] size: memory size
*
* @note This API is used to alloc memory of system.
*
* @return the memory address malloced
*/
void *tkl_system_malloc(size_t size);

/**
* @brief Free memory of system
*
* @param[in] ptr: memory point
*
* @note This API is used to free memory of system.
*
* @return void
*/
void tkl_system_free(void* ptr);

/**
 * @brief Allocate and clear the memory
 * 
 * @param[in]       nitems      the numbers of memory block
 * @param[in]       size        the size of the memory block
 *
 * @return the memory address calloced
 */
void *tkl_system_calloc(size_t nitems, size_t size);

/**
 * @brief Re-allocate the memory
 * 
 * @param[in]       nitems      source memory address
 * @param[in]       size        the size after re-allocate
 *
 * @return void
 */
void *tkl_system_realloc(void* ptr, size_t size);

/**
* @brief Get system free heap size
*
* @param none
*
* @return heap size
*/
int tkl_system_get_free_heap_size(void);

#if defined (CONFIG_SPIRAM)
/**
 * @brief Alloc memory of PSRAM
 *
 * @param[in] size: memory size
 *
 * @note This API is used to alloc memory of PSRAM.
 *
 * @return the memory address malloced
 */
void *tkl_system_psram_malloc(size_t size);

/**
 * @brief Free memory of PSRAM
 *
 * @param[in] ptr: memory point
 *
 * @note This API is used to free memory of PSRAM.
 *
 * @return void
 */
void tkl_system_psram_free(void* ptr);

/**
 * @brief Get PSRAM free heap size
 *
 * @param none
 *
 * @return PSRAM heap size
 */
int tkl_system_psram_get_free_heap_size(void);
#endif // CONFIG_SPIRAM

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif 

