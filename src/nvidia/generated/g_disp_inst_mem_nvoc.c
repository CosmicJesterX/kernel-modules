#define NVOC_DISP_INST_MEM_H_PRIVATE_ACCESS_ALLOWED

// Version of generated metadata structures
#ifdef NVOC_METADATA_VERSION
#undef NVOC_METADATA_VERSION
#endif
#define NVOC_METADATA_VERSION 2

#include "nvoc/runtime.h"
#include "nvoc/rtti.h"
#include "nvtypes.h"
#include "nvport/nvport.h"
#include "nvport/inline/util_valist.h"
#include "utils/nvassert.h"
#include "g_disp_inst_mem_nvoc.h"


#ifdef DEBUG
char __nvoc_class_id_uniqueness_check__0x8223e2 = 1;
#endif

extern const struct NVOC_CLASS_DEF __nvoc_class_def_DisplayInstanceMemory;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_Object;

// Forward declarations for DisplayInstanceMemory
void __nvoc_init__Object(Object*);
void __nvoc_init__DisplayInstanceMemory(DisplayInstanceMemory*, RmHalspecOwner *pRmhalspecowner);
void __nvoc_init_funcTable_DisplayInstanceMemory(DisplayInstanceMemory*, RmHalspecOwner *pRmhalspecowner);
NV_STATUS __nvoc_ctor_DisplayInstanceMemory(DisplayInstanceMemory*, RmHalspecOwner *pRmhalspecowner);
void __nvoc_init_dataField_DisplayInstanceMemory(DisplayInstanceMemory*, RmHalspecOwner *pRmhalspecowner);
void __nvoc_dtor_DisplayInstanceMemory(DisplayInstanceMemory*);

// Structures used within RTTI (run-time type information)
extern const struct NVOC_CASTINFO __nvoc_castinfo__DisplayInstanceMemory;
extern const struct NVOC_EXPORT_INFO __nvoc_export_info__DisplayInstanceMemory;

// Down-thunk(s) to bridge DisplayInstanceMemory methods from ancestors (if any)

// Up-thunk(s) to bridge DisplayInstanceMemory methods to ancestors (if any)

const struct NVOC_CLASS_DEF __nvoc_class_def_DisplayInstanceMemory = 
{
    /*classInfo=*/ {
        /*size=*/               sizeof(DisplayInstanceMemory),
        /*classId=*/            classId(DisplayInstanceMemory),
        /*providerId=*/         &__nvoc_rtti_provider,
#if NV_PRINTF_STRINGS_ALLOWED
        /*name=*/               "DisplayInstanceMemory",
#endif
    },
    /*objCreatefn=*/        (NVOC_DYNAMIC_OBJ_CREATE) &__nvoc_objCreateDynamic_DisplayInstanceMemory,
    /*pCastInfo=*/          &__nvoc_castinfo__DisplayInstanceMemory,
    /*pExportInfo=*/        &__nvoc_export_info__DisplayInstanceMemory
};


// Metadata with per-class RTTI with ancestor(s)
static const struct NVOC_METADATA__DisplayInstanceMemory __nvoc_metadata__DisplayInstanceMemory = {
    .rtti.pClassDef = &__nvoc_class_def_DisplayInstanceMemory,    // (instmem) this
    .rtti.dtor      = (NVOC_DYNAMIC_DTOR) &__nvoc_dtor_DisplayInstanceMemory,
    .rtti.offset    = 0,
    .metadata__Object.rtti.pClassDef = &__nvoc_class_def_Object,    // (obj) super
    .metadata__Object.rtti.dtor      = &__nvoc_destructFromBase,
    .metadata__Object.rtti.offset    = NV_OFFSETOF(DisplayInstanceMemory, __nvoc_base_Object),
};


// Dynamic down-casting information
const struct NVOC_CASTINFO __nvoc_castinfo__DisplayInstanceMemory = {
    .numRelatives = 2,
    .relatives = {
        &__nvoc_metadata__DisplayInstanceMemory.rtti,    // [0]: (instmem) this
        &__nvoc_metadata__DisplayInstanceMemory.metadata__Object.rtti,    // [1]: (obj) super
    }
};

const struct NVOC_EXPORT_INFO __nvoc_export_info__DisplayInstanceMemory = 
{
    /*numEntries=*/     0,
    /*pExportEntries=*/  0
};

void __nvoc_dtor_Object(Object*);
void __nvoc_dtor_DisplayInstanceMemory(DisplayInstanceMemory *pThis) {
    __nvoc_instmemDestruct(pThis);
    __nvoc_dtor_Object(&pThis->__nvoc_base_Object);
    PORT_UNREFERENCED_VARIABLE(pThis);
}

void __nvoc_init_dataField_DisplayInstanceMemory(DisplayInstanceMemory *pThis, RmHalspecOwner *pRmhalspecowner) {
    DispIpHal *dispIpHal = &pRmhalspecowner->dispIpHal;
    const unsigned long dispIpHal_HalVarIdx = (unsigned long)dispIpHal->__nvoc_HalVarIdx;
    PORT_UNREFERENCED_VARIABLE(pThis);
    PORT_UNREFERENCED_VARIABLE(pRmhalspecowner);
    PORT_UNREFERENCED_VARIABLE(dispIpHal);
    PORT_UNREFERENCED_VARIABLE(dispIpHal_HalVarIdx);
}

NV_STATUS __nvoc_ctor_Object(Object* );
NV_STATUS __nvoc_ctor_DisplayInstanceMemory(DisplayInstanceMemory *pThis, RmHalspecOwner *pRmhalspecowner) {
    NV_STATUS status = NV_OK;
    status = __nvoc_ctor_Object(&pThis->__nvoc_base_Object);
    if (status != NV_OK) goto __nvoc_ctor_DisplayInstanceMemory_fail_Object;
    __nvoc_init_dataField_DisplayInstanceMemory(pThis, pRmhalspecowner);

    status = __nvoc_instmemConstruct(pThis);
    if (status != NV_OK) goto __nvoc_ctor_DisplayInstanceMemory_fail__init;
    goto __nvoc_ctor_DisplayInstanceMemory_exit; // Success

__nvoc_ctor_DisplayInstanceMemory_fail__init:
    __nvoc_dtor_Object(&pThis->__nvoc_base_Object);
__nvoc_ctor_DisplayInstanceMemory_fail_Object:
__nvoc_ctor_DisplayInstanceMemory_exit:

    return status;
}

// Vtable initialization
static void __nvoc_init_funcTable_DisplayInstanceMemory_1(DisplayInstanceMemory *pThis, RmHalspecOwner *pRmhalspecowner) {
    DispIpHal *dispIpHal = &pRmhalspecowner->dispIpHal;
    const unsigned long dispIpHal_HalVarIdx = (unsigned long)dispIpHal->__nvoc_HalVarIdx;
    PORT_UNREFERENCED_VARIABLE(pThis);
    PORT_UNREFERENCED_VARIABLE(pRmhalspecowner);
    PORT_UNREFERENCED_VARIABLE(dispIpHal);
    PORT_UNREFERENCED_VARIABLE(dispIpHal_HalVarIdx);

    // instmemGetSize -- halified (2 hals) body
    if (( ((dispIpHal_HalVarIdx >> 5) == 0UL) && ((1UL << (dispIpHal_HalVarIdx & 0x1f)) & 0x00080000UL) )) /* DispIpHal: DISPv0000 */ 
    {
        pThis->__instmemGetSize__ = &instmemGetSize_f2d351;
    }
    else
    {
        pThis->__instmemGetSize__ = &instmemGetSize_v03_00;
    }

    // instmemGetHashTableBaseAddr -- halified (2 hals) body
    if (( ((dispIpHal_HalVarIdx >> 5) == 0UL) && ((1UL << (dispIpHal_HalVarIdx & 0x1f)) & 0x00080000UL) )) /* DispIpHal: DISPv0000 */ 
    {
        pThis->__instmemGetHashTableBaseAddr__ = &instmemGetHashTableBaseAddr_4a4dee;
    }
    else
    {
        pThis->__instmemGetHashTableBaseAddr__ = &instmemGetHashTableBaseAddr_v03_00;
    }

    // instmemIsValid -- halified (2 hals) body
    if (( ((dispIpHal_HalVarIdx >> 5) == 0UL) && ((1UL << (dispIpHal_HalVarIdx & 0x1f)) & 0x00080000UL) )) /* DispIpHal: DISPv0000 */ 
    {
        pThis->__instmemIsValid__ = &instmemIsValid_3dd2c9;
    }
    else
    {
        pThis->__instmemIsValid__ = &instmemIsValid_v03_00;
    }

    // instmemGenerateHashTableData -- halified (2 hals) body
    if (( ((dispIpHal_HalVarIdx >> 5) == 0UL) && ((1UL << (dispIpHal_HalVarIdx & 0x1f)) & 0x00080000UL) )) /* DispIpHal: DISPv0000 */ 
    {
        pThis->__instmemGenerateHashTableData__ = &instmemGenerateHashTableData_4a4dee;
    }
    else
    {
        pThis->__instmemGenerateHashTableData__ = &instmemGenerateHashTableData_v03_00;
    }

    // instmemHashFunc -- halified (2 hals) body
    if (( ((dispIpHal_HalVarIdx >> 5) == 0UL) && ((1UL << (dispIpHal_HalVarIdx & 0x1f)) & 0x00080000UL) )) /* DispIpHal: DISPv0000 */ 
    {
        pThis->__instmemHashFunc__ = &instmemHashFunc_46f6a7;
    }
    else
    {
        pThis->__instmemHashFunc__ = &instmemHashFunc_v03_00;
    }

    // instmemCommitContextDma -- halified (2 hals) body
    if (( ((dispIpHal_HalVarIdx >> 5) == 0UL) && ((1UL << (dispIpHal_HalVarIdx & 0x1f)) & 0x00080000UL) )) /* DispIpHal: DISPv0000 */ 
    {
        pThis->__instmemCommitContextDma__ = &instmemCommitContextDma_46f6a7;
    }
    else
    {
        pThis->__instmemCommitContextDma__ = &instmemCommitContextDma_v03_00;
    }

    // instmemUpdateContextDma -- halified (2 hals) body
    if (( ((dispIpHal_HalVarIdx >> 5) == 0UL) && ((1UL << (dispIpHal_HalVarIdx & 0x1f)) & 0x00080000UL) )) /* DispIpHal: DISPv0000 */ 
    {
        pThis->__instmemUpdateContextDma__ = &instmemUpdateContextDma_46f6a7;
    }
    else
    {
        pThis->__instmemUpdateContextDma__ = &instmemUpdateContextDma_v03_00;
    }
} // End __nvoc_init_funcTable_DisplayInstanceMemory_1 with approximately 14 basic block(s).


// Initialize vtable(s) for 7 virtual method(s).
void __nvoc_init_funcTable_DisplayInstanceMemory(DisplayInstanceMemory *pThis, RmHalspecOwner *pRmhalspecowner) {

    // Initialize vtable(s) with 7 per-object function pointer(s).
    __nvoc_init_funcTable_DisplayInstanceMemory_1(pThis, pRmhalspecowner);
}

// Initialize newly constructed object.
void __nvoc_init__DisplayInstanceMemory(DisplayInstanceMemory *pThis, RmHalspecOwner *pRmhalspecowner) {

    // Initialize pointers to inherited data.
    pThis->__nvoc_pbase_Object = &pThis->__nvoc_base_Object;    // (obj) super
    pThis->__nvoc_pbase_DisplayInstanceMemory = pThis;    // (instmem) this

    // Recurse to superclass initialization function(s).
    __nvoc_init__Object(&pThis->__nvoc_base_Object);

    // Pointer(s) to metadata structures(s)
    pThis->__nvoc_base_Object.__nvoc_metadata_ptr = &__nvoc_metadata__DisplayInstanceMemory.metadata__Object;    // (obj) super
    pThis->__nvoc_metadata_ptr = &__nvoc_metadata__DisplayInstanceMemory;    // (instmem) this

    // Initialize per-object vtables.
    __nvoc_init_funcTable_DisplayInstanceMemory(pThis, pRmhalspecowner);
}

NV_STATUS __nvoc_objCreate_DisplayInstanceMemory(DisplayInstanceMemory **ppThis, Dynamic *pParent, NvU32 createFlags)
{
    NV_STATUS status;
    Object *pParentObj = NULL;
    DisplayInstanceMemory *pThis;
    RmHalspecOwner *pRmhalspecowner;

    // Assign `pThis`, allocating memory unless suppressed by flag.
    status = __nvoc_handleObjCreateMemAlloc(createFlags, sizeof(DisplayInstanceMemory), (void**)&pThis, (void**)ppThis);
    if (status != NV_OK)
        return status;

    // Zero is the initial value for everything.
    portMemSet(pThis, 0, sizeof(DisplayInstanceMemory));

    pThis->__nvoc_base_Object.createFlags = createFlags;

    // pParent must be a valid object that derives from a halspec owner class.
    NV_ASSERT_OR_RETURN(pParent != NULL, NV_ERR_INVALID_ARGUMENT);

    // Link the child into the parent unless flagged not to do so.
    if (!(createFlags & NVOC_OBJ_CREATE_FLAGS_PARENT_HALSPEC_ONLY))
    {
        pParentObj = dynamicCast(pParent, Object);
        objAddChild(pParentObj, &pThis->__nvoc_base_Object);
    }
    else
    {
        pThis->__nvoc_base_Object.pParent = NULL;
    }

    if ((pRmhalspecowner = dynamicCast(pParent, RmHalspecOwner)) == NULL)
        pRmhalspecowner = objFindAncestorOfType(RmHalspecOwner, pParent);
    NV_ASSERT_OR_RETURN(pRmhalspecowner != NULL, NV_ERR_INVALID_ARGUMENT);

    __nvoc_init__DisplayInstanceMemory(pThis, pRmhalspecowner);
    status = __nvoc_ctor_DisplayInstanceMemory(pThis, pRmhalspecowner);
    if (status != NV_OK) goto __nvoc_objCreate_DisplayInstanceMemory_cleanup;

    // Assignment has no effect if NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT is set.
    *ppThis = pThis;

    return NV_OK;

__nvoc_objCreate_DisplayInstanceMemory_cleanup:

    // Unlink the child from the parent if it was linked above.
    if (pParentObj != NULL)
        objRemoveChild(pParentObj, &pThis->__nvoc_base_Object);

    // Do not call destructors here since the constructor already called them.
    if (createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
        portMemSet(pThis, 0, sizeof(DisplayInstanceMemory));
    else
    {
        portMemFree(pThis);
        *ppThis = NULL;
    }

    // coverity[leaked_storage:FALSE]
    return status;
}

NV_STATUS __nvoc_objCreateDynamic_DisplayInstanceMemory(DisplayInstanceMemory **ppThis, Dynamic *pParent, NvU32 createFlags, va_list args) {
    NV_STATUS status;

    status = __nvoc_objCreate_DisplayInstanceMemory(ppThis, pParent, createFlags);

    return status;
}

