#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
219,
228,
229,
230,
231,
232,
233,
234,
235,
238,
239,
303,
304,
305,
329,
330,
331,
343,
344,
345,
346,
433,
434,
435,
438,
472,
473,
475,
477,
479,
481,
486,
494,
495,
496,
497,
498,
499,
500,
501,
502,
590,
591,
656,
662,
665,
667,
672,
673,
675,
676,
680,
681,
683,
685,
686,
689,
690,
691,
694,
696,
699,
701,
703,
712,
773,
775,
777,
787,
788,
789,
791,
797,
798,
799,
800,
801,
809,
810,
811,
815,
816,
818,
820,
1019,
1173,
1174,
6684,
6685,
6687,
6688,
6689,
6690,
6691,
6693,
6695,
6697,
6698,
6706,
6708,
6713,
6715,
6717,
6719,
6770,
6771,
6773,
6774,
6775,
6776,
6777,
6779,
6781,
7657,
7661,
7663,
7664,
7665,
7666,
7903,
7904,
7905,
7906,
7924,
7925,
7926,
7928,
7968,
8028,
8030,
8032,
8040,
8041,
8042,
8043,
8472,
8476,
8477,
8503,
8520,
8527,
8534,
8545,
8548,
8568,
8641,
8643,
8652,
8654,
8655,
8662,
8676,
8696,
8697,
8705,
8707,
8714,
8715,
8718,
8720,
8725,
8731,
8732,
8739,
8741,
8753,
8756,
8757,
8758,
8769,
8778,
8784,
8785,
8786,
8788,
8789,
8806,
8808,
8822,
8839,
8866,
8893,
8894,
9372,
9462,
9463,
9638,
9639,
9643,
9644,
9645,
9650,
9716,
10151,
10152,
10514,
10524,
11128,
11149,
11151,
11153,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
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
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
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
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
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
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
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
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
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
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
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
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 219,
ves_icall_System_Array_InternalCreate,
// token 228,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 229,
ves_icall_System_Array_CanChangePrimitive,
// token 230,
ves_icall_System_Array_FastCopy,
// token 231,
ves_icall_System_Array_GetLengthInternal_raw,
// token 232,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 233,
ves_icall_System_Array_GetGenericValue_icall,
// token 234,
ves_icall_System_Array_GetValueImpl_raw,
// token 235,
ves_icall_System_Array_SetGenericValue_icall,
// token 238,
ves_icall_System_Array_SetValueImpl_raw,
// token 239,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 303,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 304,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 305,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 329,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 330,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 331,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 343,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 344,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 345,
ves_icall_System_Enum_InternalGetCorElementType,
// token 346,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 433,
ves_icall_System_Environment_get_ProcessorCount,
// token 434,
ves_icall_System_Environment_get_TickCount,
// token 435,
ves_icall_System_Environment_get_TickCount64,
// token 438,
ves_icall_System_Environment_FailFast_raw,
// token 472,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 473,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 475,
ves_icall_System_GC_SuppressFinalize_raw,
// token 477,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 479,
ves_icall_System_GC_GetGCMemoryInfo,
// token 481,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 486,
ves_icall_System_Object_MemberwiseClone_raw,
// token 494,
ves_icall_System_Math_Ceiling,
// token 495,
ves_icall_System_Math_Cos,
// token 496,
ves_icall_System_Math_Floor,
// token 497,
ves_icall_System_Math_Log10,
// token 498,
ves_icall_System_Math_Pow,
// token 499,
ves_icall_System_Math_Sin,
// token 500,
ves_icall_System_Math_Sqrt,
// token 501,
ves_icall_System_Math_Tan,
// token 502,
ves_icall_System_Math_ModF,
// token 590,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 591,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 656,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 662,
ves_icall_RuntimeType_make_array_type_raw,
// token 665,
ves_icall_RuntimeType_make_byref_type_raw,
// token 667,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 672,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 673,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 675,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 676,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 680,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 681,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 683,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 685,
ves_icall_System_RuntimeType_getFullName_raw,
// token 686,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 689,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 690,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 691,
ves_icall_RuntimeType_GetFields_native_raw,
// token 694,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 696,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 699,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 701,
ves_icall_RuntimeType_GetName_raw,
// token 703,
ves_icall_RuntimeType_GetNamespace_raw,
// token 712,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 773,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 775,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 777,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 787,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 788,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 789,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 791,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 797,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 798,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 799,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 800,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 801,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 809,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 810,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 811,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 815,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 816,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 818,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 820,
ves_icall_System_String_FastAllocateString_raw,
// token 1019,
ves_icall_System_Type_internal_from_handle_raw,
// token 1173,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1174,
ves_icall_System_ValueType_Equals_raw,
// token 6684,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6685,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6687,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6688,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6689,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6690,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6691,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6693,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6695,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6697,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6698,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 6706,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6708,
mono_monitor_exit_icall_raw,
// token 6713,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6715,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6717,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6719,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6770,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6771,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6773,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6774,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6775,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6776,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6777,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6779,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6781,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7657,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7661,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7663,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7664,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7665,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7666,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7903,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7904,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7905,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7906,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7924,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7925,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7926,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7928,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 7968,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8028,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 8030,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 8032,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 8040,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8041,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8042,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 8043,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8472,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8476,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8477,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8503,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8520,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8527,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8534,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8545,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8548,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8568,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8641,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8643,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8652,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8654,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8655,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8662,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8676,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8696,
ves_icall_reflection_get_token_raw,
// token 8697,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8705,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8707,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8714,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8715,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8718,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 8720,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8725,
ves_icall_reflection_get_token_raw,
// token 8731,
ves_icall_get_method_info_raw,
// token 8732,
ves_icall_get_method_attributes,
// token 8739,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8741,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8753,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8756,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8757,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8758,
ves_icall_reflection_get_token_raw,
// token 8769,
ves_icall_InternalInvoke_raw,
// token 8778,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8784,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8785,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8786,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8788,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8789,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8806,
ves_icall_InvokeClassConstructor_raw,
// token 8808,
ves_icall_InternalInvoke_raw,
// token 8822,
ves_icall_reflection_get_token_raw,
// token 8839,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8866,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8893,
ves_icall_reflection_get_token_raw,
// token 8894,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9372,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9462,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9463,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9638,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9639,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9643,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 9644,
ves_icall_ModuleBuilder_getToken_raw,
// token 9645,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 9650,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9716,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 10151,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 10152,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10514,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10524,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 11128,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 11149,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 11151,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 11153,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
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
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
