#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
180,
186,
187,
188,
189,
190,
191,
192,
193,
194,
197,
198,
301,
302,
304,
331,
332,
333,
353,
354,
355,
356,
439,
440,
441,
444,
480,
481,
483,
485,
487,
489,
494,
502,
503,
504,
505,
506,
507,
508,
509,
510,
642,
650,
653,
655,
660,
661,
663,
664,
668,
669,
671,
672,
675,
676,
677,
680,
682,
685,
687,
689,
758,
760,
762,
771,
772,
773,
774,
776,
783,
784,
785,
786,
787,
795,
796,
797,
801,
802,
804,
808,
809,
810,
1076,
1253,
1254,
5972,
5973,
5975,
5976,
5977,
5978,
5979,
5981,
5983,
5985,
5986,
5994,
5996,
6000,
6001,
6003,
6005,
6007,
6018,
6027,
6028,
6030,
6031,
6032,
6033,
6034,
6036,
6038,
6999,
7003,
7005,
7006,
7007,
7008,
7142,
7143,
7144,
7145,
7165,
7166,
7167,
7169,
7210,
7277,
7279,
7289,
7290,
7291,
7705,
7708,
7709,
7739,
7760,
7766,
7773,
7783,
7787,
7864,
7866,
7879,
7881,
7882,
7883,
7890,
7903,
7923,
7924,
7932,
7934,
7941,
7942,
7945,
7947,
7952,
7958,
7959,
7966,
7968,
7980,
7983,
7984,
7985,
7996,
8005,
8011,
8012,
8013,
8015,
8016,
8034,
8036,
8050,
8073,
8074,
8094,
8124,
8125,
8518,
8519,
8662,
8901,
8902,
8908,
8909,
8910,
8915,
8976,
9289,
9290,
10215,
10236,
10243,
10245,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyExtensions_ApplyUpdate (int,int,int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 180,
ves_icall_System_Array_InternalCreate,
// token 186,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 187,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 188,
ves_icall_System_Array_CanChangePrimitive,
// token 189,
ves_icall_System_Array_FastCopy_raw,
// token 190,
ves_icall_System_Array_GetLength_raw,
// token 191,
ves_icall_System_Array_GetLowerBound_raw,
// token 192,
ves_icall_System_Array_GetGenericValue_icall,
// token 193,
ves_icall_System_Array_GetValueImpl_raw,
// token 194,
ves_icall_System_Array_SetGenericValue_icall,
// token 197,
ves_icall_System_Array_SetValueImpl_raw,
// token 198,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 301,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 302,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 304,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 331,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 332,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 333,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 353,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 354,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 355,
ves_icall_System_Enum_InternalGetCorElementType,
// token 356,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 439,
ves_icall_System_Environment_get_ProcessorCount,
// token 440,
ves_icall_System_Environment_get_TickCount,
// token 441,
ves_icall_System_Environment_get_TickCount64,
// token 444,
ves_icall_System_Environment_FailFast_raw,
// token 480,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 481,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 483,
ves_icall_System_GC_SuppressFinalize_raw,
// token 485,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 487,
ves_icall_System_GC_GetGCMemoryInfo,
// token 489,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 494,
ves_icall_System_Object_MemberwiseClone_raw,
// token 502,
ves_icall_System_Math_Ceiling,
// token 503,
ves_icall_System_Math_Cos,
// token 504,
ves_icall_System_Math_Floor,
// token 505,
ves_icall_System_Math_Log10,
// token 506,
ves_icall_System_Math_Pow,
// token 507,
ves_icall_System_Math_Sin,
// token 508,
ves_icall_System_Math_Sqrt,
// token 509,
ves_icall_System_Math_Tan,
// token 510,
ves_icall_System_Math_ModF,
// token 642,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 650,
ves_icall_RuntimeType_make_array_type_raw,
// token 653,
ves_icall_RuntimeType_make_byref_type_raw,
// token 655,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 660,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 661,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 663,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 664,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 668,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 669,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 671,
ves_icall_System_RuntimeType_getFullName_raw,
// token 672,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 675,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 676,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 677,
ves_icall_RuntimeType_GetFields_native_raw,
// token 680,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 682,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 685,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 687,
ves_icall_RuntimeType_GetName_raw,
// token 689,
ves_icall_RuntimeType_GetNamespace_raw,
// token 758,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 760,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 762,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 771,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 772,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 773,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 774,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 776,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 783,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 784,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 785,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 786,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 787,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 795,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 796,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 797,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 801,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 802,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 804,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 808,
ves_icall_System_String_FastAllocateString_raw,
// token 809,
ves_icall_System_String_InternalIsInterned_raw,
// token 810,
ves_icall_System_String_InternalIntern_raw,
// token 1076,
ves_icall_System_Type_internal_from_handle_raw,
// token 1253,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1254,
ves_icall_System_ValueType_Equals_raw,
// token 5972,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5973,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5975,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5976,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5977,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5978,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5979,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5981,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5983,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5985,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 5986,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5994,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5996,
mono_monitor_exit_icall_raw,
// token 6000,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 6001,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6003,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6005,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6007,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6018,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 6027,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6028,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6030,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6031,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6032,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6033,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6034,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6036,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6038,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6999,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7003,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7005,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7006,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7007,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7008,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7142,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7143,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7144,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7145,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7165,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7166,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7167,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7169,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 7210,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7277,
mono_object_hash_icall_raw,
// token 7279,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 7289,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7290,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7291,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 7705,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 7708,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 7709,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 7739,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 7760,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 7766,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 7773,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 7783,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 7787,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 7864,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 7866,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 7879,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 7881,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 7882,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 7883,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 7890,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 7903,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 7923,
ves_icall_reflection_get_token_raw,
// token 7924,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 7932,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 7934,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 7941,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 7942,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 7945,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 7947,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 7952,
ves_icall_reflection_get_token_raw,
// token 7958,
ves_icall_get_method_info_raw,
// token 7959,
ves_icall_get_method_attributes,
// token 7966,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 7968,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 7980,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 7983,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 7984,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 7985,
ves_icall_reflection_get_token_raw,
// token 7996,
ves_icall_InternalInvoke_raw,
// token 8005,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8011,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8012,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8013,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8015,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8016,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8034,
ves_icall_InvokeClassConstructor_raw,
// token 8036,
ves_icall_InternalInvoke_raw,
// token 8050,
ves_icall_reflection_get_token_raw,
// token 8073,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 8074,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8094,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8124,
ves_icall_reflection_get_token_raw,
// token 8125,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 8518,
ves_icall_AssemblyExtensions_ApplyUpdate,
// token 8519,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 8662,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 8901,
ves_icall_ModuleBuilder_basic_init_raw,
// token 8902,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 8908,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 8909,
ves_icall_ModuleBuilder_getToken_raw,
// token 8910,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 8915,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 8976,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 9289,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 9290,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10215,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 10236,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10243,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10245,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
};
