#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String>
struct Dictionary_2_t74667C424CDD2B5DB81CEC61E57169FA17BCF782;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product>
struct Dictionary_2_tA68216B8C589E227DC058B5D6C083EA10CFF7064;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product>
struct HashSet_1_t609586F7A2EB402C5AA35903DB236CD264F2D707;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t83DC1A9F0F77879B6812C63406A0B53B8B159195;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem>
struct ICollection_1_t72875F7D6704D6E2B2CF57114FAF51DE055AF16B;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.StoreID>
struct ICollection_1_t6F6F2A13A5D5A3DFFC0FF7ECC6911440818763F2;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>
struct IEnumerable_1_t481D1B803A5BB0B2761E6C00F668FFB5ED89AF01;
// System.Collections.Generic.IList`1<UnityEngine.Purchasing.ProductCatalogPayout>
struct IList_1_t5782533D5E6AC981C087D069F354496A8ECF804F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>
struct List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>
struct List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.LocalizedProductDescription>
struct List_1_tBBF0C4A89F4F15C3B5BDDC3A752D02FF043A40E8;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct List_1_t90C2DD43EBC206D8B33EA68730C68B8DC0D6E9FA;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogItem>
struct List_1_tF9E4155F905E46DBB10A4779C193F32620147794;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout>
struct List_1_t48BDDF48EBA5EFE2DF289544A05B3FA63F1C6DA5;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID>
struct List_1_t86E14981FC609E067B0863BFFD976BE10F7D760C;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>
struct UnityEvent_1_t6F642369BDFC7D0E708896E55DA6FB6124268644;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Int32Enum>
struct UnityEvent_2_t41C0620CCB22F69FCEF4542D5D5518083D1A18CE;
// UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>
struct UnityEvent_2_tCFCF0C97EE0ABE297CC34E23A38D361505D5AAFF;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Purchasing.IAPButton[]
struct IAPButtonU5BU5D_t03C185F98123D7772864156EDF7618C84407126E;
// UnityEngine.Purchasing.IAPListener[]
struct IAPListenerU5BU5D_t424DB96D728C3038730383F1040BF052680B8386;
// UnityEngine.Purchasing.Extension.IPurchasingModule[]
struct IPurchasingModuleU5BU5D_t22376E8A94924F3A1ABB5C37A4D985015234036A;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Purchasing.PayoutDefinition[]
struct PayoutDefinitionU5BU5D_tC6633E17F7FC9AC15D2AB4B23962DC9D01979B5F;
// UnityEngine.Purchasing.Product[]
struct ProductU5BU5D_t730BA37CF8A2E27DF6BB25D559268D5F1C8B028E;
// UnityEngine.Purchasing.ProductCatalogItem[]
struct ProductCatalogItemU5BU5D_t736755D87F8B9CBBE84DB1DA5DB0B1F2AF1E287E;
// UnityEngine.Purchasing.ProductCatalogPayout[]
struct ProductCatalogPayoutU5BU5D_t65D026A82C5AD54BDC42B986AE3A7E54F7FFB21A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Purchasing.StoreID[]
struct StoreIDU5BU5D_tC0768CECF1E1B2F0D1C15644CF45911814D13085;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Purchasing.CodelessIAPStoreListener
struct CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Purchasing.ConfigurationBuilder
struct ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.Purchasing.IAPButton
struct IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8;
// UnityEngine.Purchasing.IAPListener
struct IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16;
// UnityEngine.Purchasing.IAppleExtensions
struct IAppleExtensions_t41229C4C01DD93794E730B8AFB9EEEBEC33C0238;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Purchasing.IDs
struct IDs_tE35195DC62A54F327C2E33D7B285CC8D4A869316;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t398F6D0D455CCAEAA32E0D79E6ACAF9554B1A298;
// UnityEngine.Purchasing.IGooglePlayStoreExtensions
struct IGooglePlayStoreExtensions_t5C73808BD965EB1E0F9F58213D11A16D0ACD2C61;
// UnityEngine.ILogger
struct ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42;
// UnityEngine.Purchasing.IMicrosoftExtensions
struct IMicrosoftExtensions_t58C55ED3EE8548425A77EB9EFC4AB9AE26523820;
// UnityEngine.Purchasing.INativeStoreProvider
struct INativeStoreProvider_t914FA36839115F95C08EEE7AD84B1C86C843CD25;
// UnityEngine.Purchasing.IProductCatalogImpl
struct IProductCatalogImpl_tDDD62175F121461C97EC07147671B803D2286C0A;
// UnityEngine.Purchasing.Extension.IPurchasingBinder
struct IPurchasingBinder_t10F2C525DF749C178EFA3A470BD6D9C00221ADD4;
// UnityEngine.Purchasing.Extension.IPurchasingModule
struct IPurchasingModule_t60E830BBA4F2DF8765D08BA4CE5A6E004D0DDAE7;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_tA7C537E1DC9AA11A82CBD2DD131B6552064AD667;
// UnityEngine.Purchasing.IStoreListener
struct IStoreListener_t989A5D55525E5BD7994ACC2506C5ADFB3F097A7D;
// UnityEngine.Purchasing.Telemetry.ITelemetryDiagnosticsInstanceWrapper
struct ITelemetryDiagnosticsInstanceWrapper_tE9C80569B5FADDB74AC6BA62B240969EEC271D78;
// UnityEngine.Purchasing.Telemetry.ITelemetryMetricsInstanceWrapper
struct ITelemetryMetricsInstanceWrapper_tCE178641236A54365C7446885E9FE7A0B95F9EDD;
// Uniject.IUtil
struct IUtil_t57381F702008EC2AD5F50703BDD602CCA678BE66;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Purchasing.LocalizedProductDescription
struct LocalizedProductDescription_t36BA1F51798AD6D84D7501225651BB2EFF207924;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Purchasing.PayoutDefinition
struct PayoutDefinition_t7093E2ED065CDF614DA16100B584AD490982BC60;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.Purchasing.Price
struct Price_tEB0E5E45033C6A0BC0C5D2A29C0E6C04D0FDBCDC;
// UnityEngine.Purchasing.Product
struct Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E;
// UnityEngine.Purchasing.ProductCatalog
struct ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1;
// UnityEngine.Purchasing.ProductCatalogItem
struct ProductCatalogItem_tBBB809AC7547B118E718170833CB6729F80F4215;
// UnityEngine.Purchasing.ProductCatalogPayout
struct ProductCatalogPayout_tE89C644B8939AE7B342D29BE28762A7A1700FDD2;
// UnityEngine.Purchasing.ProductCollection
struct ProductCollection_tB918E64F4183B0EF135D05E7BC5835C6BBA50C69;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t8C8138607558F5A57C08B6257B38FC2C77B32164;
// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39;
// UnityEngine.Purchasing.PurchasingFactory
struct PurchasingFactory_tC87E368967334D76A150DEE74D0DDFEB9A502935;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Purchasing.WinRTStore
struct WinRTStore_t48E00F03328D89136362A032D73E709EF91A3777;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_t18A57F5B4A0DEB7D32E384CC96C3FF22F93CC062;
// UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_t0684C539D061372B1102E2EF9665451BB93462D4;
// UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_t3CEE18D062CFFB96EC548A9E4398FD9A19DD8AAD;
// UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_t2AE278DD03F5A737F83AEC56260D3387AA4B89D1;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance
struct StoreInstance_tE334F08374C14889F3118AFD0E1F280950C138D6;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppleExtensions_t41229C4C01DD93794E730B8AFB9EEEBEC33C0238_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t6F6F2A13A5D5A3DFFC0FF7ECC6911440818763F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDs_tE35195DC62A54F327C2E33D7B285CC8D4A869316_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t1E8D1779ABD1E98623257F896B4FC7F02C56205B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t4076D8B864B1EE4AAD0F1EA515422C97A28F5565_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tCE9DC57AC4E2631A2B076CF152DD9F9E6503D560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t171A84C413FDF3E2F95C5288538DE5082D8CEA36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2588D83224D47CDA8F0539AE756839D83D0464A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t9CA73EDA51927153AB5C0B450478F319FE02D8EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGooglePlayStoreExtensions_t5C73808BD965EB1E0F9F58213D11A16D0ACD2C61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMicrosoftExtensions_t58C55ED3EE8548425A77EB9EFC4AB9AE26523820_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStoreController_tA7C537E1DC9AA11A82CBD2DD131B6552064AD667_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationFailureReason_t12ED90915B992AD9C401B5C057AA5E8EB8838B89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t90C2DD43EBC206D8B33EA68730C68B8DC0D6E9FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PayoutDefinition_t7093E2ED065CDF614DA16100B584AD490982BC60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1EF35329A9C666A6162702EC4141FF8A8DCCD553;
IL2CPP_EXTERN_C String_t* _stringLiteral4F5969530815E6A540A3ECE75D68272FE8482067;
IL2CPP_EXTERN_C String_t* _stringLiteral537EA891070FBA82E19DC218DBB64246306F9338;
IL2CPP_EXTERN_C String_t* _stringLiteral56F1AEC2FF8B133E2CAF514BFB5AEEC1B7603B66;
IL2CPP_EXTERN_C String_t* _stringLiteral67447C652AC9BD7A3846D4B6116649F7EB15FED3;
IL2CPP_EXTERN_C String_t* _stringLiteral68BC2DE434AD588010148C07EDD3A570968E602A;
IL2CPP_EXTERN_C String_t* _stringLiteral95C26DB7F9C79787B411F513085839C1185CEE39;
IL2CPP_EXTERN_C String_t* _stringLiteral9DAAF1E37F9978FDDF8079C7917C5BE032B2F350;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E7A3FB4D90EDF8B2F2EA0B4348061782111095;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralF5A61BB4FAA639A1E99385D655E6B58C0195FB0A;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisIPurchasingModule_t60E830BBA4F2DF8765D08BA4CE5A6E004D0DDAE7_m8C255C34C8C6D093C4C28F95A2CF6590737F5D34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2_m2D17DA0F4C5D0E8035DBA3AFF2E4CD4728BD1286_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2_m24A0E6D20988F35E631F653D2F454DE416651718_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodelessIAPStoreListener_GetStoreExtensions_TisIAppleExtensions_t41229C4C01DD93794E730B8AFB9EEEBEC33C0238_mE6AFB5675C0006FD9A9BF845DE9472129C353B48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodelessIAPStoreListener_GetStoreExtensions_TisIGooglePlayStoreExtensions_t5C73808BD965EB1E0F9F58213D11A16D0ACD2C61_m91B7FA730E50D6F5D2C16D475E9A7FF13EF81BEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodelessIAPStoreListener_GetStoreExtensions_TisIMicrosoftExtensions_t58C55ED3EE8548425A77EB9EFC4AB9AE26523820_m5275FD40FCF05F2ABCEC70990F738F9512E3E700_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2735887092BE30AA645A46BB3CCC53DB3B59D116_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m30D730BCE0C3172B784398F96CE37E4FCA221F9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBBFA90FC613401AE9C93AEC635842B3EB29261D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCF4FCF4676A858509D81ACF13266CE933156DE8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m75BD104A9E78705D934354F0614D0BB6C714EC8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE7C24D2F02F8300E2633487FD35D1033C59EF508_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPButton_OnTransactionsRestored_m2E6774FDF15FAE173138BAC1BAE6F22B0DE74FAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPButton_PurchaseProduct_m23E2C90E3E7DF715DD1BF39D411F59C1CBE84687_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAPButton_Restore_mD680231EBD8C6879B89B8A1D9A24F307D1872FFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8CB1712A70264CBC4633BD2F8C3DED2C86E5190A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9605C0C5FF5366B40B3F7EC7EFC2829677FE3C24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mABC6D60D2D21571F0951AFDCFF71B7D9AA17A5C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB872FCF7A7556E330B4665845885B81D71198276_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC2AC3CF3F1BBDE36BC62DF419D61748ED14A125F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m48FAC2F0826AB6BA815EED270370149484AE7829_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mC9D92234C1B0423B7F578F03A3D70AB928EE9387_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m7BED80EBE5D5D79D74D703160CE7B30A1A383217_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1342ABA033C6BF6662A8E7C8FF4B7381ED85030D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4EB160F19392823782B2C12C7E19F4E96BAAF735_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6081C9EA1A90CB7600CE3945137B7E61A6C6F3D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m9A516C3E6F41327FB166AE0BE973DAA3416CB5F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mDDF4EB01E8483CBDC91067C213EE4D41C8C1C9F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m6AE411932003550130B01DF3C2F48A386E3D53C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m40A605F14C3DC31CA6795C04E5B7373496F4C2F2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IPurchasingModuleU5BU5D_t22376E8A94924F3A1ABB5C37A4D985015234036A;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PayoutDefinitionU5BU5D_tC6633E17F7FC9AC15D2AB4B23962DC9D01979B5F;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFD5AE2FED6CE63C099012638301E76F31F2DFDF0 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>
struct List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IAPButtonU5BU5D_t03C185F98123D7772864156EDF7618C84407126E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IAPButtonU5BU5D_t03C185F98123D7772864156EDF7618C84407126E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>
struct List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IAPListenerU5BU5D_t424DB96D728C3038730383F1040BF052680B8386* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IAPListenerU5BU5D_t424DB96D728C3038730383F1040BF052680B8386* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct List_1_t90C2DD43EBC206D8B33EA68730C68B8DC0D6E9FA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PayoutDefinitionU5BU5D_tC6633E17F7FC9AC15D2AB4B23962DC9D01979B5F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t90C2DD43EBC206D8B33EA68730C68B8DC0D6E9FA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PayoutDefinitionU5BU5D_tC6633E17F7FC9AC15D2AB4B23962DC9D01979B5F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogItem>
struct List_1_tF9E4155F905E46DBB10A4779C193F32620147794  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ProductCatalogItemU5BU5D_t736755D87F8B9CBBE84DB1DA5DB0B1F2AF1E287E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF9E4155F905E46DBB10A4779C193F32620147794_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ProductCatalogItemU5BU5D_t736755D87F8B9CBBE84DB1DA5DB0B1F2AF1E287E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout>
struct List_1_t48BDDF48EBA5EFE2DF289544A05B3FA63F1C6DA5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ProductCatalogPayoutU5BU5D_t65D026A82C5AD54BDC42B986AE3A7E54F7FFB21A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t48BDDF48EBA5EFE2DF289544A05B3FA63F1C6DA5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ProductCatalogPayoutU5BU5D_t65D026A82C5AD54BDC42B986AE3A7E54F7FFB21A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID>
struct List_1_t86E14981FC609E067B0863BFFD976BE10F7D760C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StoreIDU5BU5D_tC0768CECF1E1B2F0D1C15644CF45911814D13085* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t86E14981FC609E067B0863BFFD976BE10F7D760C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StoreIDU5BU5D_tC0768CECF1E1B2F0D1C15644CF45911814D13085* ___s_emptyArray_5;
};

// UnityEngine.Purchasing.Extension.AbstractPurchasingModule
struct AbstractPurchasingModule_t2CC681047C9428D3A74AD55F014C31823C70D20D  : public RuntimeObject
{
	// UnityEngine.Purchasing.Extension.IPurchasingBinder UnityEngine.Purchasing.Extension.AbstractPurchasingModule::m_Binder
	RuntimeObject* ___m_Binder_0;
};
struct Il2CppArrayBounds;

// UnityEngine.Purchasing.CodelessIAPStoreListener
struct CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton> UnityEngine.Purchasing.CodelessIAPStoreListener::activeButtons
	List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926* ___activeButtons_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener> UnityEngine.Purchasing.CodelessIAPStoreListener::activeListeners
	List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294* ___activeListeners_2;
	// UnityEngine.Purchasing.IStoreController UnityEngine.Purchasing.CodelessIAPStoreListener::controller
	RuntimeObject* ___controller_4;
	// UnityEngine.Purchasing.IExtensionProvider UnityEngine.Purchasing.CodelessIAPStoreListener::extensions
	RuntimeObject* ___extensions_5;
	// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.CodelessIAPStoreListener::m_Builder
	ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* ___m_Builder_6;
	// UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.CodelessIAPStoreListener::catalog
	ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1* ___catalog_7;
};

struct CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_StaticFields
{
	// UnityEngine.Purchasing.CodelessIAPStoreListener UnityEngine.Purchasing.CodelessIAPStoreListener::instance
	CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* ___instance_0;
	// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::unityPurchasingInitialized
	bool ___unityPurchasingInitialized_3;
	// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::initializationComplete
	bool ___initializationComplete_8;
};

// UnityEngine.Purchasing.ConfigurationBuilder
struct ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D  : public RuntimeObject
{
	// System.Boolean UnityEngine.Purchasing.ConfigurationBuilder::<useCatalogProvider>k__BackingField
	bool ___U3CuseCatalogProviderU3Ek__BackingField_0;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.ConfigurationBuilder::<products>k__BackingField
	HashSet_1_t83DC1A9F0F77879B6812C63406A0B53B8B159195* ___U3CproductsU3Ek__BackingField_1;
	// UnityEngine.Purchasing.PurchasingFactory UnityEngine.Purchasing.ConfigurationBuilder::<factory>k__BackingField
	PurchasingFactory_tC87E368967334D76A150DEE74D0DDFEB9A502935* ___U3CfactoryU3Ek__BackingField_2;
};

// UnityEngine.Purchasing.IAPConfigurationHelper
struct IAPConfigurationHelper_t3DB1AC47092DDBB658F404FDEE14C72DDEBDBDAF  : public RuntimeObject
{
};

// UnityEngine.Purchasing.IDs
struct IDs_tE35195DC62A54F327C2E33D7B285CC8D4A869316  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Purchasing.IDs::m_Dic
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___m_Dic_0;
};

// UnityEngine.Purchasing.PayoutDefinition
struct PayoutDefinition_t7093E2ED065CDF614DA16100B584AD490982BC60  : public RuntimeObject
{
	// UnityEngine.Purchasing.PayoutType UnityEngine.Purchasing.PayoutDefinition::m_Type
	int32_t ___m_Type_0;
	// System.String UnityEngine.Purchasing.PayoutDefinition::m_Subtype
	String_t* ___m_Subtype_1;
	// System.Double UnityEngine.Purchasing.PayoutDefinition::m_Quantity
	double ___m_Quantity_2;
	// System.String UnityEngine.Purchasing.PayoutDefinition::m_Data
	String_t* ___m_Data_3;
};

// UnityEngine.Purchasing.Product
struct Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E  : public RuntimeObject
{
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::<definition>k__BackingField
	ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* ___U3CdefinitionU3Ek__BackingField_0;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::<metadata>k__BackingField
	ProductMetadata_t8C8138607558F5A57C08B6257B38FC2C77B32164* ___U3CmetadataU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Purchasing.Product::<availableToPurchase>k__BackingField
	bool ___U3CavailableToPurchaseU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Product::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Product::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_4;
};

// UnityEngine.Purchasing.ProductCatalog
struct ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1  : public RuntimeObject
{
	// System.String UnityEngine.Purchasing.ProductCatalog::appleSKU
	String_t* ___appleSKU_1;
	// System.String UnityEngine.Purchasing.ProductCatalog::appleTeamID
	String_t* ___appleTeamID_2;
	// System.Boolean UnityEngine.Purchasing.ProductCatalog::enableCodelessAutoInitialization
	bool ___enableCodelessAutoInitialization_3;
	// System.Boolean UnityEngine.Purchasing.ProductCatalog::enableUnityGamingServicesAutoInitialization
	bool ___enableUnityGamingServicesAutoInitialization_4;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::products
	List_1_tF9E4155F905E46DBB10A4779C193F32620147794* ___products_5;
};

struct ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1_StaticFields
{
	// UnityEngine.Purchasing.IProductCatalogImpl UnityEngine.Purchasing.ProductCatalog::instance
	RuntimeObject* ___instance_0;
};

// UnityEngine.Purchasing.ProductCatalogItem
struct ProductCatalogItem_tBBB809AC7547B118E718170833CB6729F80F4215  : public RuntimeObject
{
	// System.String UnityEngine.Purchasing.ProductCatalogItem::id
	String_t* ___id_0;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductCatalogItem::type
	int32_t ___type_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID> UnityEngine.Purchasing.ProductCatalogItem::storeIDs
	List_1_t86E14981FC609E067B0863BFFD976BE10F7D760C* ___storeIDs_2;
	// UnityEngine.Purchasing.LocalizedProductDescription UnityEngine.Purchasing.ProductCatalogItem::defaultDescription
	LocalizedProductDescription_t36BA1F51798AD6D84D7501225651BB2EFF207924* ___defaultDescription_3;
	// System.String UnityEngine.Purchasing.ProductCatalogItem::screenshotPath
	String_t* ___screenshotPath_4;
	// System.Int32 UnityEngine.Purchasing.ProductCatalogItem::applePriceTier
	int32_t ___applePriceTier_5;
	// UnityEngine.Purchasing.Price UnityEngine.Purchasing.ProductCatalogItem::googlePrice
	Price_tEB0E5E45033C6A0BC0C5D2A29C0E6C04D0FDBCDC* ___googlePrice_6;
	// System.String UnityEngine.Purchasing.ProductCatalogItem::pricingTemplateID
	String_t* ___pricingTemplateID_7;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.LocalizedProductDescription> UnityEngine.Purchasing.ProductCatalogItem::descriptions
	List_1_tBBF0C4A89F4F15C3B5BDDC3A752D02FF043A40E8* ___descriptions_8;
	// UnityEngine.Purchasing.Price UnityEngine.Purchasing.ProductCatalogItem::udpPrice
	Price_tEB0E5E45033C6A0BC0C5D2A29C0E6C04D0FDBCDC* ___udpPrice_9;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout> UnityEngine.Purchasing.ProductCatalogItem::payouts
	List_1_t48BDDF48EBA5EFE2DF289544A05B3FA63F1C6DA5* ___payouts_10;
};

// UnityEngine.Purchasing.ProductCatalogPayout
struct ProductCatalogPayout_tE89C644B8939AE7B342D29BE28762A7A1700FDD2  : public RuntimeObject
{
	// System.String UnityEngine.Purchasing.ProductCatalogPayout::t
	String_t* ___t_0;
	// System.String UnityEngine.Purchasing.ProductCatalogPayout::st
	String_t* ___st_2;
	// System.Double UnityEngine.Purchasing.ProductCatalogPayout::q
	double ___q_3;
	// System.String UnityEngine.Purchasing.ProductCatalogPayout::d
	String_t* ___d_5;
};

// UnityEngine.Purchasing.ProductCollection
struct ProductCollection_tB918E64F4183B0EF135D05E7BC5835C6BBA50C69  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_IdToProduct
	Dictionary_2_tA68216B8C589E227DC058B5D6C083EA10CFF7064* ___m_IdToProduct_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_StoreSpecificIdToProduct
	Dictionary_2_tA68216B8C589E227DC058B5D6C083EA10CFF7064* ___m_StoreSpecificIdToProduct_1;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::<set>k__BackingField
	HashSet_1_t609586F7A2EB402C5AA35903DB236CD264F2D707* ___U3CsetU3Ek__BackingField_2;
	// UnityEngine.Purchasing.Product[] UnityEngine.Purchasing.ProductCollection::<all>k__BackingField
	ProductU5BU5D_t730BA37CF8A2E27DF6BB25D559268D5F1C8B028E* ___U3CallU3Ek__BackingField_3;
};

// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517  : public RuntimeObject
{
	// System.String UnityEngine.Purchasing.ProductDefinition::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductDefinition::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_1;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Purchasing.ProductDefinition::<enabled>k__BackingField
	bool ___U3CenabledU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition> UnityEngine.Purchasing.ProductDefinition::m_Payouts
	List_1_t90C2DD43EBC206D8B33EA68730C68B8DC0D6E9FA* ___m_Payouts_4;
};

// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39  : public RuntimeObject
{
	// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchaseEventArgs::<purchasedProduct>k__BackingField
	Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* ___U3CpurchasedProductU3Ek__BackingField_0;
};

// UnityEngine.Purchasing.StoreID
struct StoreID_t803360E805747C2D896682F98A53DEFD1F4C5298  : public RuntimeObject
{
	// System.String UnityEngine.Purchasing.StoreID::store
	String_t* ___store_0;
	// System.String UnityEngine.Purchasing.StoreID::id
	String_t* ___id_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPButton>
struct Enumerator_t26A241FC3B5205E814C8D2BB26E578B7D8FE0B38 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPListener>
struct Enumerator_t4FCC39A68C9A097E71A0F4A8BF1A5B01855B604E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>
struct UnityEvent_1_t6F642369BDFC7D0E708896E55DA6FB6124268644  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>
struct UnityEvent_2_tCFCF0C97EE0ABE297CC34E23A38D361505D5AAFF  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489  : public AbstractPurchasingModule_t2CC681047C9428D3A74AD55F014C31823C70D20D
{
	// System.String UnityEngine.Purchasing.StandardPurchasingModule::k_Version
	String_t* ___k_Version_2;
	// UnityEngine.Purchasing.INativeStoreProvider UnityEngine.Purchasing.StandardPurchasingModule::m_NativeStoreProvider
	RuntimeObject* ___m_NativeStoreProvider_3;
	// UnityEngine.RuntimePlatform UnityEngine.Purchasing.StandardPurchasingModule::m_RuntimePlatform
	int32_t ___m_RuntimePlatform_4;
	// Uniject.IUtil UnityEngine.Purchasing.StandardPurchasingModule::<util>k__BackingField
	RuntimeObject* ___U3CutilU3Ek__BackingField_6;
	// UnityEngine.ILogger UnityEngine.Purchasing.StandardPurchasingModule::<logger>k__BackingField
	RuntimeObject* ___U3CloggerU3Ek__BackingField_7;
	// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance UnityEngine.Purchasing.StandardPurchasingModule::<storeInstance>k__BackingField
	StoreInstance_tE334F08374C14889F3118AFD0E1F280950C138D6* ___U3CstoreInstanceU3Ek__BackingField_8;
	// UnityEngine.Purchasing.Telemetry.ITelemetryMetricsInstanceWrapper UnityEngine.Purchasing.StandardPurchasingModule::<telemetryMetricsInstanceWrapper>k__BackingField
	RuntimeObject* ___U3CtelemetryMetricsInstanceWrapperU3Ek__BackingField_9;
	// UnityEngine.Purchasing.Telemetry.ITelemetryDiagnosticsInstanceWrapper UnityEngine.Purchasing.StandardPurchasingModule::<telemetryDiagnosticsInstanceWrapper>k__BackingField
	RuntimeObject* ___U3CtelemetryDiagnosticsInstanceWrapperU3Ek__BackingField_10;
	// UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StandardPurchasingModule::<appStore>k__BackingField
	int32_t ___U3CappStoreU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::usingMockMicrosoft
	bool ___usingMockMicrosoft_13;
	// UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreUIMode>k__BackingField
	int32_t ___U3CuseFakeStoreUIModeU3Ek__BackingField_14;
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreAlways>k__BackingField
	bool ___U3CuseFakeStoreAlwaysU3Ek__BackingField_15;
	// UnityEngine.Purchasing.WinRTStore UnityEngine.Purchasing.StandardPurchasingModule::windowsStore
	WinRTStore_t48E00F03328D89136362A032D73E709EF91A3777* ___windowsStore_16;
};

struct StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489_StaticFields
{
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::ModuleInstance
	StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489* ___ModuleInstance_5;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String> UnityEngine.Purchasing.StandardPurchasingModule::AndroidStoreNameMap
	Dictionary_2_t74667C424CDD2B5DB81CEC61E57169FA17BCF782* ___AndroidStoreNameMap_11;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t8C8138607558F5A57C08B6257B38FC2C77B32164  : public RuntimeObject
{
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedPriceString>k__BackingField
	String_t* ___U3ClocalizedPriceStringU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedTitle>k__BackingField
	String_t* ___U3ClocalizedTitleU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedDescription>k__BackingField
	String_t* ___U3ClocalizedDescriptionU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.ProductMetadata::<isoCurrencyCode>k__BackingField
	String_t* ___U3CisoCurrencyCodeU3Ek__BackingField_3;
	// System.Decimal UnityEngine.Purchasing.ProductMetadata::<localizedPrice>k__BackingField
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3ClocalizedPriceU3Ek__BackingField_4;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_t18A57F5B4A0DEB7D32E384CC96C3FF22F93CC062  : public UnityEvent_1_t6F642369BDFC7D0E708896E55DA6FB6124268644
{
};

// UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_t0684C539D061372B1102E2EF9665451BB93462D4  : public UnityEvent_2_tCFCF0C97EE0ABE297CC34E23A38D361505D5AAFF
{
};

// UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_t3CEE18D062CFFB96EC548A9E4398FD9A19DD8AAD  : public UnityEvent_1_t6F642369BDFC7D0E708896E55DA6FB6124268644
{
};

// UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_t2AE278DD03F5A737F83AEC56260D3387AA4B89D1  : public UnityEvent_2_tCFCF0C97EE0ABE297CC34E23A38D361505D5AAFF
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Purchasing.CodelessIAPStoreListener/<CreateCodelessIAPStoreListenerInstance>d__16
struct U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2 
{
	// System.Int32 UnityEngine.Purchasing.CodelessIAPStoreListener/<CreateCodelessIAPStoreListenerInstance>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder UnityEngine.Purchasing.CodelessIAPStoreListener/<CreateCodelessIAPStoreListenerInstance>d__16::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// System.Runtime.CompilerServices.TaskAwaiter UnityEngine.Purchasing.CodelessIAPStoreListener/<CreateCodelessIAPStoreListenerInstance>d__16::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_2;
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Purchasing.IAPButton
struct IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UnityEngine.Purchasing.IAPButton::productId
	String_t* ___productId_4;
	// UnityEngine.Purchasing.IAPButton/ButtonType UnityEngine.Purchasing.IAPButton::buttonType
	int32_t ___buttonType_5;
	// System.Boolean UnityEngine.Purchasing.IAPButton::consumePurchase
	bool ___consumePurchase_6;
	// UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent UnityEngine.Purchasing.IAPButton::onPurchaseComplete
	OnPurchaseCompletedEvent_t18A57F5B4A0DEB7D32E384CC96C3FF22F93CC062* ___onPurchaseComplete_7;
	// UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent UnityEngine.Purchasing.IAPButton::onPurchaseFailed
	OnPurchaseFailedEvent_t0684C539D061372B1102E2EF9665451BB93462D4* ___onPurchaseFailed_8;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::titleText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___titleText_9;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::descriptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___descriptionText_10;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::priceText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___priceText_11;
};

// UnityEngine.Purchasing.IAPListener
struct IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityEngine.Purchasing.IAPListener::consumePurchase
	bool ___consumePurchase_4;
	// System.Boolean UnityEngine.Purchasing.IAPListener::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_5;
	// UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent UnityEngine.Purchasing.IAPListener::onPurchaseComplete
	OnPurchaseCompletedEvent_t3CEE18D062CFFB96EC548A9E4398FD9A19DD8AAD* ___onPurchaseComplete_6;
	// UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent UnityEngine.Purchasing.IAPListener::onPurchaseFailed
	OnPurchaseFailedEvent_t2AE278DD03F5A737F83AEC56260D3387AA4B89D1* ___onPurchaseFailed_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Purchasing.Extension.IPurchasingModule[]
struct IPurchasingModuleU5BU5D_t22376E8A94924F3A1ABB5C37A4D985015234036A  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Purchasing.PayoutDefinition[]
struct PayoutDefinitionU5BU5D_tC6633E17F7FC9AC15D2AB4B23962DC9D01979B5F  : public RuntimeArray
{
	ALIGN_FIELD (8) PayoutDefinition_t7093E2ED065CDF614DA16100B584AD490982BC60* m_Items[1];

	inline PayoutDefinition_t7093E2ED065CDF614DA16100B584AD490982BC60* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PayoutDefinition_t7093E2ED065CDF614DA16100B584AD490982BC60** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PayoutDefinition_t7093E2ED065CDF614DA16100B584AD490982BC60* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PayoutDefinition_t7093E2ED065CDF614DA16100B584AD490982BC60* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PayoutDefinition_t7093E2ED065CDF614DA16100B584AD490982BC60** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PayoutDefinition_t7093E2ED065CDF614DA16100B584AD490982BC60* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<UnityEngine.Purchasing.CodelessIAPStoreListener/<CreateCodelessIAPStoreListenerInstance>d__16>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2_m24A0E6D20988F35E631F653D2F454DE416651718_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityEngine.Purchasing.CodelessIAPStoreListener/<CreateCodelessIAPStoreListenerInstance>d__16>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2_m2D17DA0F4C5D0E8035DBA3AFF2E4CD4728BD1286_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2* ___stateMachine1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Purchasing.CodelessIAPStoreListener::GetStoreExtensions<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CodelessIAPStoreListener_GetStoreExtensions_TisRuntimeObject_mBBD8AC4FC31E2B52CDB3B4D0248DD3B32F9B3BF0_gshared (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Int32Enum>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_mA9A3774883D1E75743D14D05936ADC9B3BAAD6F1_gshared (UnityEvent_2_t41C0620CCB22F69FCEF4542D5D5518083D1A18CE* __this, RuntimeObject* ___arg00, int32_t ___arg11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m3763FE208EDDC09B62A88DBCDAC86DEC203443BE_gshared (UnityEvent_2_t41C0620CCB22F69FCEF4542D5D5518083D1A18CE* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::LoadDefaultCatalog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1* ProductCatalog_LoadDefaultCatalog_m9234528E744434B6C15DB3BC81487D4794FBF9B6 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Purchasing.ProductCatalog::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProductCatalog_IsEmpty_mE15235CB170A308393E9E5940532887BFBFB4438 (ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::CreateCodelessIAPStoreListenerInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m341866D4268736C529F3CC49D41C990EA7C85BC9 (const RuntimeMethod* method) ;
// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489* StandardPurchasingModule_Instance_m6F638304EE123E1881DF2465316D5C1D3845CE0C (const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_useFakeStoreUIMode(UnityEngine.Purchasing.FakeStoreUIMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StandardPurchasingModule_set_useFakeStoreUIMode_m2221C886EC8FF153B0C2210AF2EF6DED271B826D_inline (StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.Purchasing.Extension.IPurchasingModule>()
inline IPurchasingModuleU5BU5D_t22376E8A94924F3A1ABB5C37A4D985015234036A* Array_Empty_TisIPurchasingModule_t60E830BBA4F2DF8765D08BA4CE5A6E004D0DDAE7_m8C255C34C8C6D093C4C28F95A2CF6590737F5D34_inline (const RuntimeMethod* method)
{
	return ((  IPurchasingModuleU5BU5D_t22376E8A94924F3A1ABB5C37A4D985015234036A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::Instance(UnityEngine.Purchasing.Extension.IPurchasingModule,UnityEngine.Purchasing.Extension.IPurchasingModule[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* ConfigurationBuilder_Instance_mB6F4C9969C39F797F8D3CE9A0973264080F19FC3 (RuntimeObject* ___first0, IPurchasingModuleU5BU5D_t22376E8A94924F3A1ABB5C37A4D985015234036A* ___rest1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.IAPConfigurationHelper::PopulateConfigurationBuilder(UnityEngine.Purchasing.ConfigurationBuilder&,UnityEngine.Purchasing.ProductCatalog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPConfigurationHelper_PopulateConfigurationBuilder_mC2A31DE0220AB4BD1E75E5D1881310461745EF4D (ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D** ___builder0, ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1* ___catalog1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.UnityPurchasing::Initialize(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.ConfigurationBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPurchasing_Initialize_m3A3660906A52840A068FBEDFDA87BFB7DA4441BF (RuntimeObject* ___listener0, ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* ___builder1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>::.ctor()
inline void List_1__ctor_m6081C9EA1A90CB7600CE3945137B7E61A6C6F3D3 (List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>::.ctor()
inline void List_1__ctor_m4EB160F19392823782B2C12C7E19F4E96BAAF735 (List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<UnityEngine.Purchasing.CodelessIAPStoreListener/<CreateCodelessIAPStoreListenerInstance>d__16>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2_m24A0E6D20988F35E631F653D2F454DE416651718 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2_m24A0E6D20988F35E631F653D2F454DE416651718_gshared)(__this, ___stateMachine0, method);
}
// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::ShouldAutoInitUgs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodelessIAPStoreListener_ShouldAutoInitUgs_m5BEE290EA1BEF7B1B108478258BA4142E9FFD899 (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_mA35969BCF3240B8BA63918BA0C527F809C477E27_inline (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Core.UnityServices::InitializeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnityServices_InitializeAsync_m88EAE879948B401E6B8125DCE89344DCBAB4FF34 (const RuntimeMethod* method) ;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::get_allProducts()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalog_get_allProducts_m93A191445C8495D516A695D8708996C8790EF1C7_inline (ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* ProductCollection_WithID_m823B1BBFE1B1A91B7AA2E2BDD821F0D24F0C5543 (ProductCollection_tB918E64F4183B0EF135D05E7BC5835C6BBA50C69* __this, String_t* ___id0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>::Add(T)
inline void List_1_Add_m9605C0C5FF5366B40B3F7EC7EFC2829677FE3C24_inline (List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926* __this, IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926*, IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>::Remove(T)
inline bool List_1_Remove_m48FAC2F0826AB6BA815EED270370149484AE7829 (List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926* __this, IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926*, IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>::Add(T)
inline void List_1_Add_mABC6D60D2D21571F0951AFDCFF71B7D9AA17A5C7_inline (List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294* __this, IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294*, IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>::Remove(T)
inline bool List_1_Remove_mC9D92234C1B0423B7F578F03A3D70AB928EE9387 (List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294* __this, IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294*, IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>::GetEnumerator()
inline Enumerator_t26A241FC3B5205E814C8D2BB26E578B7D8FE0B38 List_1_GetEnumerator_mB872FCF7A7556E330B4665845885B81D71198276 (List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t26A241FC3B5205E814C8D2BB26E578B7D8FE0B38 (*) (List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPButton>::Dispose()
inline void Enumerator_Dispose_m30D730BCE0C3172B784398F96CE37E4FCA221F9F (Enumerator_t26A241FC3B5205E814C8D2BB26E578B7D8FE0B38* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t26A241FC3B5205E814C8D2BB26E578B7D8FE0B38*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPButton>::get_Current()
inline IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* Enumerator_get_Current_m75BD104A9E78705D934354F0614D0BB6C714EC8A_inline (Enumerator_t26A241FC3B5205E814C8D2BB26E578B7D8FE0B38* __this, const RuntimeMethod* method)
{
	return ((  IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* (*) (Enumerator_t26A241FC3B5205E814C8D2BB26E578B7D8FE0B38*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Purchasing.IAPButton::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnPurchaseFailed_m7BE05E293755252902BA4324CDB78D675FE0022C (IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* __this, Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* ___product0, int32_t ___reason1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPButton>::MoveNext()
inline bool Enumerator_MoveNext_mBBFA90FC613401AE9C93AEC635842B3EB29261D5 (Enumerator_t26A241FC3B5205E814C8D2BB26E578B7D8FE0B38* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t26A241FC3B5205E814C8D2BB26E578B7D8FE0B38*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.IAPButton::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_UpdateText_m04AEC40D91B24D2D200C991B6208C0E965A97177 (IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchaseEventArgs::get_purchasedProduct()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* PurchaseEventArgs_get_purchasedProduct_m0CBC223B555D7D331959FF53E7EDCEBE5E304B56_inline (PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39* __this, const RuntimeMethod* method) ;
// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::get_definition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* Product_get_definition_m99F1AE5F43863A860DF8C2CFC049EF41560A4873_inline (Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Purchasing.ProductDefinition::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_mAC2DA1CF1E54C939E2099E9045B09CBAC6BAB99B_inline (ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* __this, const RuntimeMethod* method) ;
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPButton::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAPButton_ProcessPurchase_mD212CBE19D46A924EC90697F15396C633ADAF0C6 (IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* __this, PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39* ___e0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>::GetEnumerator()
inline Enumerator_t4FCC39A68C9A097E71A0F4A8BF1A5B01855B604E List_1_GetEnumerator_mC2AC3CF3F1BBDE36BC62DF419D61748ED14A125F (List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4FCC39A68C9A097E71A0F4A8BF1A5B01855B604E (*) (List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPListener>::Dispose()
inline void Enumerator_Dispose_m2735887092BE30AA645A46BB3CCC53DB3B59D116 (Enumerator_t4FCC39A68C9A097E71A0F4A8BF1A5B01855B604E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4FCC39A68C9A097E71A0F4A8BF1A5B01855B604E*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPListener>::get_Current()
inline IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16* Enumerator_get_Current_mE7C24D2F02F8300E2633487FD35D1033C59EF508_inline (Enumerator_t4FCC39A68C9A097E71A0F4A8BF1A5B01855B604E* __this, const RuntimeMethod* method)
{
	return ((  IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16* (*) (Enumerator_t4FCC39A68C9A097E71A0F4A8BF1A5B01855B604E*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPListener::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAPListener_ProcessPurchase_m1DF81E92FEA6213A11660DFE3B3E414D960D0A50 (IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16* __this, PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39* ___e0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPListener>::MoveNext()
inline bool Enumerator_MoveNext_mCF4FCF4676A858509D81ACF13266CE933156DE8F (Enumerator_t4FCC39A68C9A097E71A0F4A8BF1A5B01855B604E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4FCC39A68C9A097E71A0F4A8BF1A5B01855B604E*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.IAPListener::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPListener_OnPurchaseFailed_mB361558BB603975A6B5F07BD9F64D432BBD83550 (IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16* __this, Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* ___product0, int32_t ___reason1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener__ctor_mA5E552B229398B582F0763C918361C242266DF83 (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task UnityEngine.Purchasing.CodelessIAPStoreListener::AutoInitializeUnityGamingServicesIfEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CodelessIAPStoreListener_AutoInitializeUnityGamingServicesIfEnabled_mFA48C34E3D24C934B3625FCA83A1CE9130AE6457 (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityEngine.Purchasing.CodelessIAPStoreListener/<CreateCodelessIAPStoreListenerInstance>d__16>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2_m2D17DA0F4C5D0E8035DBA3AFF2E4CD4728BD1286 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2_m2D17DA0F4C5D0E8035DBA3AFF2E4CD4728BD1286_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitializePurchasing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_InitializePurchasing_m3A8B4236A34C0E70DC3E741970693412F5B6A7CE (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener/<CreateCodelessIAPStoreListenerInstance>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_MoveNext_mA8745BF31014C60BF9C2744F8AFE2240690CD48F (U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener/<CreateCodelessIAPStoreListenerInstance>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_SetStateMachine_mFD1A71A09A2D24239238FA7F713666AFD930FDB1 (U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// UnityEngine.Purchasing.CodelessIAPStoreListener UnityEngine.Purchasing.CodelessIAPStoreListener::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* CodelessIAPStoreListener_get_Instance_m99E2E2E79E7439942D59726758CC010A5BDD8C34 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::HasProductInCatalog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodelessIAPStoreListener_HasProductInCatalog_mED87E130232EA1AEDD68657851EDBF1B5D28B910 (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, String_t* ___productID0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::AddButton(UnityEngine.Purchasing.IAPButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_AddButton_mFD5CD8B448B4F7D9DAC6744EEE2B2C5A690CCAD6 (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* ___button0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::RemoveButton(UnityEngine.Purchasing.IAPButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_RemoveButton_m01159DC9A0279A7A34C387BDABC1A34A3441ACCA (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* ___button0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitiatePurchase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_InitiatePurchase_m71FAF4BDF2D42168897C526EBF45393D0928A0E1 (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, String_t* ___productID0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// T UnityEngine.Purchasing.CodelessIAPStoreListener::GetStoreExtensions<UnityEngine.Purchasing.IMicrosoftExtensions>()
inline RuntimeObject* CodelessIAPStoreListener_GetStoreExtensions_TisIMicrosoftExtensions_t58C55ED3EE8548425A77EB9EFC4AB9AE26523820_m5275FD40FCF05F2ABCEC70990F738F9512E3E700 (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6*, const RuntimeMethod*))CodelessIAPStoreListener_GetStoreExtensions_TisRuntimeObject_mBBD8AC4FC31E2B52CDB3B4D0248DD3B32F9B3BF0_gshared)(__this, method);
}
// T UnityEngine.Purchasing.CodelessIAPStoreListener::GetStoreExtensions<UnityEngine.Purchasing.IAppleExtensions>()
inline RuntimeObject* CodelessIAPStoreListener_GetStoreExtensions_TisIAppleExtensions_t41229C4C01DD93794E730B8AFB9EEEBEC33C0238_mE6AFB5675C0006FD9A9BF845DE9472129C353B48 (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6*, const RuntimeMethod*))CodelessIAPStoreListener_GetStoreExtensions_TisRuntimeObject_mBBD8AC4FC31E2B52CDB3B4D0248DD3B32F9B3BF0_gshared)(__this, method);
}
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared)(__this, ___object0, ___method1, method);
}
// UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StandardPurchasingModule::get_appStore()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StandardPurchasingModule_get_appStore_m19E96FCA4517781E9166DAA7E3413D7B0D61EE74_inline (StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489* __this, const RuntimeMethod* method) ;
// T UnityEngine.Purchasing.CodelessIAPStoreListener::GetStoreExtensions<UnityEngine.Purchasing.IGooglePlayStoreExtensions>()
inline RuntimeObject* CodelessIAPStoreListener_GetStoreExtensions_TisIGooglePlayStoreExtensions_t5C73808BD965EB1E0F9F58213D11A16D0ACD2C61_m91B7FA730E50D6F5D2C16D475E9A7FF13EF81BEE (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6*, const RuntimeMethod*))CodelessIAPStoreListener_GetStoreExtensions_TisRuntimeObject_mBBD8AC4FC31E2B52CDB3B4D0248DD3B32F9B3BF0_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>::Invoke(T0)
inline void UnityEvent_1_Invoke_m9A516C3E6F41327FB166AE0BE973DAA3416CB5F9 (UnityEvent_1_t6F642369BDFC7D0E708896E55DA6FB6124268644* __this, Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6F642369BDFC7D0E708896E55DA6FB6124268644*, Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_m6AE411932003550130B01DF3C2F48A386E3D53C3 (UnityEvent_2_tCFCF0C97EE0ABE297CC34E23A38D361505D5AAFF* __this, Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tCFCF0C97EE0ABE297CC34E23A38D361505D5AAFF*, Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E*, int32_t, const RuntimeMethod*))UnityEvent_2_Invoke_mA9A3774883D1E75743D14D05936ADC9B3BAAD6F1_gshared)(__this, ___arg00, ___arg11, method);
}
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.CodelessIAPStoreListener::GetProduct(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* CodelessIAPStoreListener_GetProduct_m8537652E27E1984D7E1872478EAFE968B0ECBA44 (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, String_t* ___productID0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::get_metadata()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ProductMetadata_t8C8138607558F5A57C08B6257B38FC2C77B32164* Product_get_metadata_mBACF5289A29D76CEB98A1CABD406840B8E4DF5C6_inline (Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedTitle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedTitle_mBD34BFB3B5913154B4ACBC630A4DF8A664C9E258_inline (ProductMetadata_t8C8138607558F5A57C08B6257B38FC2C77B32164* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedDescription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedDescription_mF1507A605C357667ED05FAC2F486D527CA4E2887_inline (ProductMetadata_t8C8138607558F5A57C08B6257B38FC2C77B32164* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedPriceString()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedPriceString_m83C55E96B4BC39284D88F9BAAC64E60DFF7D408F_inline (ProductMetadata_t8C8138607558F5A57C08B6257B38FC2C77B32164* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>::.ctor()
inline void UnityEvent_1__ctor_mDDF4EB01E8483CBDC91067C213EE4D41C8C1C9F7 (UnityEvent_1_t6F642369BDFC7D0E708896E55DA6FB6124268644* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6F642369BDFC7D0E708896E55DA6FB6124268644*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>::.ctor()
inline void UnityEvent_2__ctor_m40A605F14C3DC31CA6795C04E5B7373496F4C2F2 (UnityEvent_2_tCFCF0C97EE0ABE297CC34E23A38D361505D5AAFF* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tCFCF0C97EE0ABE297CC34E23A38D361505D5AAFF*, const RuntimeMethod*))UnityEvent_2__ctor_m3763FE208EDDC09B62A88DBCDAC86DEC203443BE_gshared)(__this, method);
}
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::get_allValidProducts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalog_get_allValidProducts_m6598853A6030B9100FE7555E14F9182FF8C939A1 (ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.StoreID> UnityEngine.Purchasing.ProductCatalogItem::get_allStoreIDs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalogItem_get_allStoreIDs_m1BB9AC26346BAE2B25F2557106CF54F1F0250152_inline (ProductCatalogItem_tBBB809AC7547B118E718170833CB6729F80F4215* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.IDs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDs__ctor_m6C335BDBF3A2649C4050BD8958BAEF1AC74EEB06 (IDs_tE35195DC62A54F327C2E33D7B285CC8D4A869316* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.IDs::Add(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDs_Add_m84DA48DEDD7208CAB754B9DEB36B56D0D8A22AF4 (IDs_tE35195DC62A54F327C2E33D7B285CC8D4A869316* __this, String_t* ___id0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___stores1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::.ctor()
inline void List_1__ctor_m1342ABA033C6BF6662A8E7C8FF4B7381ED85030D (List_1_t90C2DD43EBC206D8B33EA68730C68B8DC0D6E9FA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t90C2DD43EBC206D8B33EA68730C68B8DC0D6E9FA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.IList`1<UnityEngine.Purchasing.ProductCatalogPayout> UnityEngine.Purchasing.ProductCatalogItem::get_Payouts()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalogItem_get_Payouts_m555FC3D209B787F27BE8299B43A5878A7279666D_inline (ProductCatalogItem_tBBB809AC7547B118E718170833CB6729F80F4215* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Purchasing.ProductCatalogPayout::get_typeString()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_typeString_mDC2749C7C814424036321E9FE9F4443FCFCF1047_inline (ProductCatalogPayout_tE89C644B8939AE7B342D29BE28762A7A1700FDD2* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Purchasing.ProductCatalogPayout::get_subtype()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_subtype_m91A5CF105358C819EDB1894EA3DB00F669905B4E_inline (ProductCatalogPayout_tE89C644B8939AE7B342D29BE28762A7A1700FDD2* __this, const RuntimeMethod* method) ;
// System.Double UnityEngine.Purchasing.ProductCatalogPayout::get_quantity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ProductCatalogPayout_get_quantity_m4239B8AA7AF8C60D2FA8B9F8656B57FDD2CA6CF2_inline (ProductCatalogPayout_tE89C644B8939AE7B342D29BE28762A7A1700FDD2* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Purchasing.ProductCatalogPayout::get_data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_data_m5485BB13535F49FD58397B278767F60D1692F2CB_inline (ProductCatalogPayout_tE89C644B8939AE7B342D29BE28762A7A1700FDD2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.PayoutDefinition::.ctor(System.String,System.String,System.Double,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayoutDefinition__ctor_m28968555D4C084806CF43AC45E53DFAE49F741D1 (PayoutDefinition_t7093E2ED065CDF614DA16100B584AD490982BC60* __this, String_t* ___typeString0, String_t* ___subtype1, double ___quantity2, String_t* ___data3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::Add(T)
inline void List_1_Add_m8CB1712A70264CBC4633BD2F8C3DED2C86E5190A_inline (List_1_t90C2DD43EBC206D8B33EA68730C68B8DC0D6E9FA* __this, PayoutDefinition_t7093E2ED065CDF614DA16100B584AD490982BC60* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t90C2DD43EBC206D8B33EA68730C68B8DC0D6E9FA*, PayoutDefinition_t7093E2ED065CDF614DA16100B584AD490982BC60*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::ToArray()
inline PayoutDefinitionU5BU5D_tC6633E17F7FC9AC15D2AB4B23962DC9D01979B5F* List_1_ToArray_m7BED80EBE5D5D79D74D703160CE7B30A1A383217 (List_1_t90C2DD43EBC206D8B33EA68730C68B8DC0D6E9FA* __this, const RuntimeMethod* method)
{
	return ((  PayoutDefinitionU5BU5D_tC6633E17F7FC9AC15D2AB4B23962DC9D01979B5F* (*) (List_1_t90C2DD43EBC206D8B33EA68730C68B8DC0D6E9FA*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType,UnityEngine.Purchasing.IDs,System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* ConfigurationBuilder_AddProduct_m6799057993FE410B9ACF1D975D7A154EAF9F70AA (ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* __this, String_t* ___id0, int32_t ___type1, IDs_tE35195DC62A54F327C2E33D7B285CC8D4A869316* ___storeIDs2, RuntimeObject* ___payouts3, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::AddListener(UnityEngine.Purchasing.IAPListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_AddListener_m8618E1B4D47E5615C5404610A2E0AE86B2B9314F (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16* ___listener0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::RemoveListener(UnityEngine.Purchasing.IAPListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_RemoveListener_m7BDA66843A5BFC0D9F243E4260307DEDC8465DEE (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16* ___listener0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitializeCodelessPurchasingOnLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_InitializeCodelessPurchasingOnLoad_m86D05EF02E619B82DAF31E6E6A0911F6F6C7B58C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1* V_0 = NULL;
	{
		// var catalog = ProductCatalog.LoadDefaultCatalog();
		ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1* L_0;
		L_0 = ProductCatalog_LoadDefaultCatalog_m9234528E744434B6C15DB3BC81487D4794FBF9B6(NULL);
		V_0 = L_0;
		// if (catalog.enableCodelessAutoInitialization && !catalog.IsEmpty() && instance == null)
		ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = L_1->___enableCodelessAutoInitialization_3;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = ProductCatalog_IsEmpty_mE15235CB170A308393E9E5940532887BFBFB4438(L_3, NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* L_5 = ((CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var))->___instance_0;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		// CreateCodelessIAPStoreListenerInstance();
		CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m341866D4268736C529F3CC49D41C990EA7C85BC9(NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitializePurchasing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_InitializePurchasing_m3A8B4236A34C0E70DC3E741970693412F5B6A7CE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisIPurchasingModule_t60E830BBA4F2DF8765D08BA4CE5A6E004D0DDAE7_m8C255C34C8C6D093C4C28F95A2CF6590737F5D34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* V_0 = NULL;
	{
		// var module = StandardPurchasingModule.Instance();
		il2cpp_codegen_runtime_class_init_inline(StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489_il2cpp_TypeInfo_var);
		StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489* L_0;
		L_0 = StandardPurchasingModule_Instance_m6F638304EE123E1881DF2465316D5C1D3845CE0C(NULL);
		// module.useFakeStoreUIMode = FakeStoreUIMode.StandardUser;
		StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489* L_1 = L_0;
		NullCheck(L_1);
		StandardPurchasingModule_set_useFakeStoreUIMode_m2221C886EC8FF153B0C2210AF2EF6DED271B826D_inline(L_1, 1, NULL);
		// var builder = ConfigurationBuilder.Instance(module);
		IPurchasingModuleU5BU5D_t22376E8A94924F3A1ABB5C37A4D985015234036A* L_2;
		L_2 = Array_Empty_TisIPurchasingModule_t60E830BBA4F2DF8765D08BA4CE5A6E004D0DDAE7_m8C255C34C8C6D093C4C28F95A2CF6590737F5D34_inline(Array_Empty_TisIPurchasingModule_t60E830BBA4F2DF8765D08BA4CE5A6E004D0DDAE7_m8C255C34C8C6D093C4C28F95A2CF6590737F5D34_RuntimeMethod_var);
		ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* L_3;
		L_3 = ConfigurationBuilder_Instance_mB6F4C9969C39F797F8D3CE9A0973264080F19FC3(L_1, L_2, NULL);
		V_0 = L_3;
		// IAPConfigurationHelper.PopulateConfigurationBuilder(ref builder, instance.catalog);
		CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* L_4 = ((CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var))->___instance_0;
		NullCheck(L_4);
		ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1* L_5 = L_4->___catalog_7;
		IAPConfigurationHelper_PopulateConfigurationBuilder_mC2A31DE0220AB4BD1E75E5D1881310461745EF4D((&V_0), L_5, NULL);
		// instance.m_Builder = builder;
		CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* L_6 = ((CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var))->___instance_0;
		ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* L_7 = V_0;
		NullCheck(L_6);
		L_6->___m_Builder_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___m_Builder_6), (void*)L_7);
		// UnityPurchasing.Initialize(instance, builder);
		CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* L_8 = ((CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var))->___instance_0;
		ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* L_9 = V_0;
		UnityPurchasing_Initialize_m3A3660906A52840A068FBEDFDA87BFB7DA4441BF(L_8, L_9, NULL);
		// unityPurchasingInitialized = true;
		((CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var))->___unityPurchasingInitialized_3 = (bool)1;
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener__ctor_mA5E552B229398B582F0763C918361C242266DF83 (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4EB160F19392823782B2C12C7E19F4E96BAAF735_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6081C9EA1A90CB7600CE3945137B7E61A6C6F3D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<IAPButton> activeButtons = new List<IAPButton>();
		List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926* L_0 = (List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926*)il2cpp_codegen_object_new(List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6081C9EA1A90CB7600CE3945137B7E61A6C6F3D3(L_0, List_1__ctor_m6081C9EA1A90CB7600CE3945137B7E61A6C6F3D3_RuntimeMethod_var);
		__this->___activeButtons_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeButtons_1), (void*)L_0);
		// private readonly List<IAPListener> activeListeners = new List<IAPListener>();
		List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294* L_1 = (List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294*)il2cpp_codegen_object_new(List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m4EB160F19392823782B2C12C7E19F4E96BAAF735(L_1, List_1__ctor_m4EB160F19392823782B2C12C7E19F4E96BAAF735_RuntimeMethod_var);
		__this->___activeListeners_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeListeners_2), (void*)L_1);
		// private CodelessIAPStoreListener()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// catalog = ProductCatalog.LoadDefaultCatalog();
		ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1* L_2;
		L_2 = ProductCatalog_LoadDefaultCatalog_m9234528E744434B6C15DB3BC81487D4794FBF9B6(NULL);
		__this->___catalog_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___catalog_7), (void*)L_2);
		// }
		return;
	}
}
// UnityEngine.Purchasing.CodelessIAPStoreListener UnityEngine.Purchasing.CodelessIAPStoreListener::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* CodelessIAPStoreListener_get_Instance_m99E2E2E79E7439942D59726758CC010A5BDD8C34 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* L_0 = ((CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var))->___instance_0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// CreateCodelessIAPStoreListenerInstance();
		CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m341866D4268736C529F3CC49D41C990EA7C85BC9(NULL);
	}

IL_000c:
	{
		// return instance;
		CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* L_1 = ((CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var))->___instance_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::CreateCodelessIAPStoreListenerInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m341866D4268736C529F3CC49D41C990EA7C85BC9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2_m24A0E6D20988F35E631F653D2F454DE416651718_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2_m24A0E6D20988F35E631F653D2F454DE416651718(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2_m24A0E6D20988F35E631F653D2F454DE416651718_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task UnityEngine.Purchasing.CodelessIAPStoreListener::AutoInitializeUnityGamingServicesIfEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CodelessIAPStoreListener_AutoInitializeUnityGamingServicesIfEnabled_mFA48C34E3D24C934B3625FCA83A1CE9130AE6457 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ShouldAutoInitUgs()
		//     ? UnityServices.InitializeAsync()
		//     : Task.CompletedTask;
		bool L_0;
		L_0 = CodelessIAPStoreListener_ShouldAutoInitUgs_m5BEE290EA1BEF7B1B108478258BA4142E9FFD899(NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_get_CompletedTask_mA35969BCF3240B8BA63918BA0C527F809C477E27_inline(NULL);
		return L_1;
	}

IL_000d:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = UnityServices_InitializeAsync_m88EAE879948B401E6B8125DCE89344DCBAB4FF34(NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::ShouldAutoInitUgs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodelessIAPStoreListener_ShouldAutoInitUgs_m5BEE290EA1BEF7B1B108478258BA4142E9FFD899 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance.catalog.enableCodelessAutoInitialization &&
		//        instance.catalog.enableUnityGamingServicesAutoInitialization;
		CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* L_0 = ((CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var))->___instance_0;
		NullCheck(L_0);
		ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1* L_1 = L_0->___catalog_7;
		NullCheck(L_1);
		bool L_2 = L_1->___enableCodelessAutoInitialization_3;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* L_3 = ((CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var))->___instance_0;
		NullCheck(L_3);
		ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1* L_4 = L_3->___catalog_7;
		NullCheck(L_4);
		bool L_5 = L_4->___enableUnityGamingServicesAutoInitialization_4;
		return L_5;
	}

IL_0021:
	{
		return (bool)0;
	}
}
// UnityEngine.Purchasing.IStoreController UnityEngine.Purchasing.CodelessIAPStoreListener::get_StoreController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CodelessIAPStoreListener_get_StoreController_mB4F7CBF619276AE46435245CAFF6492B3086E92A (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, const RuntimeMethod* method) 
{
	{
		// public IStoreController StoreController => controller;
		RuntimeObject* L_0 = __this->___controller_4;
		return L_0;
	}
}
// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::HasProductInCatalog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodelessIAPStoreListener_HasProductInCatalog_mED87E130232EA1AEDD68657851EDBF1B5D28B910 (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, String_t* ___productID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1E8D1779ABD1E98623257F896B4FC7F02C56205B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9CA73EDA51927153AB5C0B450478F319FE02D8EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// foreach (var product in catalog.allProducts)
		ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1* L_0 = __this->___catalog_7;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ProductCatalog_get_allProducts_m93A191445C8495D516A695D8708996C8790EF1C7_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductCatalogItem>::GetEnumerator() */, IEnumerable_1_t1E8D1779ABD1E98623257F896B4FC7F02C56205B_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_003d;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002a_1;
			}

IL_0013_1:
			{
				// foreach (var product in catalog.allProducts)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				ProductCatalogItem_tBBB809AC7547B118E718170833CB6729F80F4215* L_6;
				L_6 = InterfaceFuncInvoker0< ProductCatalogItem_tBBB809AC7547B118E718170833CB6729F80F4215* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductCatalogItem>::get_Current() */, IEnumerator_1_t9CA73EDA51927153AB5C0B450478F319FE02D8EF_il2cpp_TypeInfo_var, L_5);
				// if (product.id == productID)
				NullCheck(L_6);
				String_t* L_7 = L_6->___id_0;
				String_t* L_8 = ___productID0;
				bool L_9;
				L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, L_8, NULL);
				if (!L_9)
				{
					goto IL_002a_1;
				}
			}
			{
				// return true;
				V_1 = (bool)1;
				goto IL_0040;
			}

IL_002a_1:
			{
				// foreach (var product in catalog.allProducts)
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// return false;
		return (bool)0;
	}

IL_0040:
	{
		// }
		bool L_12 = V_1;
		return L_12;
	}
}
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.CodelessIAPStoreListener::GetProduct(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* CodelessIAPStoreListener_GetProduct_m8537652E27E1984D7E1872478EAFE968B0ECBA44 (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, String_t* ___productID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreController_tA7C537E1DC9AA11A82CBD2DD131B6552064AD667_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E7A3FB4D90EDF8B2F2EA0B4348061782111095);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (controller != null && controller.products != null && !string.IsNullOrEmpty(productID))
		RuntimeObject* L_0 = __this->___controller_4;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_1 = __this->___controller_4;
		NullCheck(L_1);
		ProductCollection_tB918E64F4183B0EF135D05E7BC5835C6BBA50C69* L_2;
		L_2 = InterfaceFuncInvoker0< ProductCollection_tB918E64F4183B0EF135D05E7BC5835C6BBA50C69* >::Invoke(0 /* UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.IStoreController::get_products() */, IStoreController_tA7C537E1DC9AA11A82CBD2DD131B6552064AD667_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_3 = ___productID0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		// return controller.products.WithID(productID);
		RuntimeObject* L_5 = __this->___controller_4;
		NullCheck(L_5);
		ProductCollection_tB918E64F4183B0EF135D05E7BC5835C6BBA50C69* L_6;
		L_6 = InterfaceFuncInvoker0< ProductCollection_tB918E64F4183B0EF135D05E7BC5835C6BBA50C69* >::Invoke(0 /* UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.IStoreController::get_products() */, IStoreController_tA7C537E1DC9AA11A82CBD2DD131B6552064AD667_il2cpp_TypeInfo_var, L_5);
		String_t* L_7 = ___productID0;
		NullCheck(L_6);
		Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_8;
		L_8 = ProductCollection_WithID_m823B1BBFE1B1A91B7AA2E2BDD821F0D24F0C5543(L_6, L_7, NULL);
		return L_8;
	}

IL_002f:
	{
		// Debug.LogError("CodelessIAPStoreListener attempted to get unknown product " + productID);
		String_t* L_9 = ___productID0;
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB1E7A3FB4D90EDF8B2F2EA0B4348061782111095, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_10, NULL);
		// return null;
		return (Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E*)NULL;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::AddButton(UnityEngine.Purchasing.IAPButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_AddButton_mFD5CD8B448B4F7D9DAC6744EEE2B2C5A690CCAD6 (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* ___button0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9605C0C5FF5366B40B3F7EC7EFC2829677FE3C24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeButtons.Add(button);
		List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926* L_0 = __this->___activeButtons_1;
		IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* L_1 = ___button0;
		NullCheck(L_0);
		List_1_Add_m9605C0C5FF5366B40B3F7EC7EFC2829677FE3C24_inline(L_0, L_1, List_1_Add_m9605C0C5FF5366B40B3F7EC7EFC2829677FE3C24_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::RemoveButton(UnityEngine.Purchasing.IAPButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_RemoveButton_m01159DC9A0279A7A34C387BDABC1A34A3441ACCA (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* ___button0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m48FAC2F0826AB6BA815EED270370149484AE7829_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeButtons.Remove(button);
		List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926* L_0 = __this->___activeButtons_1;
		IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* L_1 = ___button0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m48FAC2F0826AB6BA815EED270370149484AE7829(L_0, L_1, List_1_Remove_m48FAC2F0826AB6BA815EED270370149484AE7829_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::AddListener(UnityEngine.Purchasing.IAPListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_AddListener_m8618E1B4D47E5615C5404610A2E0AE86B2B9314F (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mABC6D60D2D21571F0951AFDCFF71B7D9AA17A5C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeListeners.Add(listener);
		List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294* L_0 = __this->___activeListeners_2;
		IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16* L_1 = ___listener0;
		NullCheck(L_0);
		List_1_Add_mABC6D60D2D21571F0951AFDCFF71B7D9AA17A5C7_inline(L_0, L_1, List_1_Add_mABC6D60D2D21571F0951AFDCFF71B7D9AA17A5C7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::RemoveListener(UnityEngine.Purchasing.IAPListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_RemoveListener_m7BDA66843A5BFC0D9F243E4260307DEDC8465DEE (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mC9D92234C1B0423B7F578F03A3D70AB928EE9387_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeListeners.Remove(listener);
		List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294* L_0 = __this->___activeListeners_2;
		IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16* L_1 = ___listener0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mC9D92234C1B0423B7F578F03A3D70AB928EE9387(L_0, L_1, List_1_Remove_mC9D92234C1B0423B7F578F03A3D70AB928EE9387_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitiatePurchase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_InitiatePurchase_m71FAF4BDF2D42168897C526EBF45393D0928A0E1 (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, String_t* ___productID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m30D730BCE0C3172B784398F96CE37E4FCA221F9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBBFA90FC613401AE9C93AEC635842B3EB29261D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m75BD104A9E78705D934354F0614D0BB6C714EC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreController_tA7C537E1DC9AA11A82CBD2DD131B6552064AD667_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB872FCF7A7556E330B4665845885B81D71198276_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68BC2DE434AD588010148C07EDD3A570968E602A);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t26A241FC3B5205E814C8D2BB26E578B7D8FE0B38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* V_1 = NULL;
	{
		// if (controller == null)
		RuntimeObject* L_0 = __this->___controller_4;
		if (L_0)
		{
			goto IL_0058;
		}
	}
	{
		// Debug.LogError("Purchase failed because Purchasing was not initialized correctly");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral68BC2DE434AD588010148C07EDD3A570968E602A, NULL);
		// foreach (var button in activeButtons)
		List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926* L_1 = __this->___activeButtons_1;
		NullCheck(L_1);
		Enumerator_t26A241FC3B5205E814C8D2BB26E578B7D8FE0B38 L_2;
		L_2 = List_1_GetEnumerator_mB872FCF7A7556E330B4665845885B81D71198276(L_1, List_1_GetEnumerator_mB872FCF7A7556E330B4665845885B81D71198276_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m30D730BCE0C3172B784398F96CE37E4FCA221F9F((&V_0), Enumerator_Dispose_m30D730BCE0C3172B784398F96CE37E4FCA221F9F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003e_1;
			}

IL_0020_1:
			{
				// foreach (var button in activeButtons)
				IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* L_3;
				L_3 = Enumerator_get_Current_m75BD104A9E78705D934354F0614D0BB6C714EC8A_inline((&V_0), Enumerator_get_Current_m75BD104A9E78705D934354F0614D0BB6C714EC8A_RuntimeMethod_var);
				V_1 = L_3;
				// if (button.productId == productID)
				IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* L_4 = V_1;
				NullCheck(L_4);
				String_t* L_5 = L_4->___productId_4;
				String_t* L_6 = ___productID0;
				bool L_7;
				L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, L_6, NULL);
				if (!L_7)
				{
					goto IL_003e_1;
				}
			}
			{
				// button.OnPurchaseFailed(null, PurchaseFailureReason.PurchasingUnavailable);
				IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* L_8 = V_1;
				NullCheck(L_8);
				IAPButton_OnPurchaseFailed_m7BE05E293755252902BA4324CDB78D675FE0022C(L_8, (Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E*)NULL, 0, NULL);
			}

IL_003e_1:
			{
				// foreach (var button in activeButtons)
				bool L_9;
				L_9 = Enumerator_MoveNext_mBBFA90FC613401AE9C93AEC635842B3EB29261D5((&V_0), Enumerator_MoveNext_mBBFA90FC613401AE9C93AEC635842B3EB29261D5_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0057;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
		// return;
		return;
	}

IL_0058:
	{
		// controller.InitiatePurchase(productID);
		RuntimeObject* L_10 = __this->___controller_4;
		String_t* L_11 = ___productID0;
		NullCheck(L_10);
		InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void UnityEngine.Purchasing.IStoreController::InitiatePurchase(System.String) */, IStoreController_tA7C537E1DC9AA11A82CBD2DD131B6552064AD667_il2cpp_TypeInfo_var, L_10, L_11);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::OnInitialized(UnityEngine.Purchasing.IStoreController,UnityEngine.Purchasing.IExtensionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_OnInitialized_mFCF299043501CBD9E024830051E2B1C70454018D (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, RuntimeObject* ___controller0, RuntimeObject* ___extensions1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m30D730BCE0C3172B784398F96CE37E4FCA221F9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBBFA90FC613401AE9C93AEC635842B3EB29261D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m75BD104A9E78705D934354F0614D0BB6C714EC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB872FCF7A7556E330B4665845885B81D71198276_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t26A241FC3B5205E814C8D2BB26E578B7D8FE0B38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// initializationComplete = true;
		((CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var))->___initializationComplete_8 = (bool)1;
		// this.controller = controller;
		RuntimeObject* L_0 = ___controller0;
		__this->___controller_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controller_4), (void*)L_0);
		// this.extensions = extensions;
		RuntimeObject* L_1 = ___extensions1;
		__this->___extensions_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___extensions_5), (void*)L_1);
		// foreach (var button in activeButtons)
		List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926* L_2 = __this->___activeButtons_1;
		NullCheck(L_2);
		Enumerator_t26A241FC3B5205E814C8D2BB26E578B7D8FE0B38 L_3;
		L_3 = List_1_GetEnumerator_mB872FCF7A7556E330B4665845885B81D71198276(L_2, List_1_GetEnumerator_mB872FCF7A7556E330B4665845885B81D71198276_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m30D730BCE0C3172B784398F96CE37E4FCA221F9F((&V_0), Enumerator_Dispose_m30D730BCE0C3172B784398F96CE37E4FCA221F9F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002e_1;
			}

IL_0022_1:
			{
				// foreach (var button in activeButtons)
				IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* L_4;
				L_4 = Enumerator_get_Current_m75BD104A9E78705D934354F0614D0BB6C714EC8A_inline((&V_0), Enumerator_get_Current_m75BD104A9E78705D934354F0614D0BB6C714EC8A_RuntimeMethod_var);
				// button.UpdateText();
				NullCheck(L_4);
				IAPButton_UpdateText_m04AEC40D91B24D2D200C991B6208C0E965A97177(L_4, NULL);
			}

IL_002e_1:
			{
				// foreach (var button in activeButtons)
				bool L_5;
				L_5 = Enumerator_MoveNext_mBBFA90FC613401AE9C93AEC635842B3EB29261D5((&V_0), Enumerator_MoveNext_mBBFA90FC613401AE9C93AEC635842B3EB29261D5_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_0047;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_OnInitializeFailed_mF3133BD50AF6487E74332C611BC80A9F82331680 (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, int32_t ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationFailureReason_t12ED90915B992AD9C401B5C057AA5E8EB8838B89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67447C652AC9BD7A3846D4B6116649F7EB15FED3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(string.Format("Purchasing failed to initialize. Reason: {0}", error.ToString()));
		Il2CppFakeBox<int32_t> L_0(InitializationFailureReason_t12ED90915B992AD9C401B5C057AA5E8EB8838B89_il2cpp_TypeInfo_var, (&___error0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2;
		L_2 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral67447C652AC9BD7A3846D4B6116649F7EB15FED3, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_2, NULL);
		// }
		return;
	}
}
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.CodelessIAPStoreListener::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodelessIAPStoreListener_ProcessPurchase_mF53C66277C4E76EB7674A8DA1E327C012335480F (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2735887092BE30AA645A46BB3CCC53DB3B59D116_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m30D730BCE0C3172B784398F96CE37E4FCA221F9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBBFA90FC613401AE9C93AEC635842B3EB29261D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCF4FCF4676A858509D81ACF13266CE933156DE8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m75BD104A9E78705D934354F0614D0BB6C714EC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE7C24D2F02F8300E2633487FD35D1033C59EF508_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB872FCF7A7556E330B4665845885B81D71198276_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC2AC3CF3F1BBDE36BC62DF419D61748ED14A125F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56F1AEC2FF8B133E2CAF514BFB5AEEC1B7603B66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DAAF1E37F9978FDDF8079C7917C5BE032B2F350);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_t26A241FC3B5205E814C8D2BB26E578B7D8FE0B38 V_2;
	memset((&V_2), 0, sizeof(V_2));
	IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* V_3 = NULL;
	Enumerator_t4FCC39A68C9A097E71A0F4A8BF1A5B01855B604E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var consumePurchase = false;
		V_0 = (bool)0;
		// var resultProcessed = false;
		V_1 = (bool)0;
		// foreach (var button in activeButtons)
		List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926* L_0 = __this->___activeButtons_1;
		NullCheck(L_0);
		Enumerator_t26A241FC3B5205E814C8D2BB26E578B7D8FE0B38 L_1;
		L_1 = List_1_GetEnumerator_mB872FCF7A7556E330B4665845885B81D71198276(L_0, List_1_GetEnumerator_mB872FCF7A7556E330B4665845885B81D71198276_RuntimeMethod_var);
		V_2 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m30D730BCE0C3172B784398F96CE37E4FCA221F9F((&V_2), Enumerator_Dispose_m30D730BCE0C3172B784398F96CE37E4FCA221F9F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0044_1;
			}

IL_0012_1:
			{
				// foreach (var button in activeButtons)
				IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* L_2;
				L_2 = Enumerator_get_Current_m75BD104A9E78705D934354F0614D0BB6C714EC8A_inline((&V_2), Enumerator_get_Current_m75BD104A9E78705D934354F0614D0BB6C714EC8A_RuntimeMethod_var);
				V_3 = L_2;
				// if (button.productId == e.purchasedProduct.definition.id)
				IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* L_3 = V_3;
				NullCheck(L_3);
				String_t* L_4 = L_3->___productId_4;
				PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39* L_5 = ___e0;
				NullCheck(L_5);
				Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_6;
				L_6 = PurchaseEventArgs_get_purchasedProduct_m0CBC223B555D7D331959FF53E7EDCEBE5E304B56_inline(L_5, NULL);
				NullCheck(L_6);
				ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* L_7;
				L_7 = Product_get_definition_m99F1AE5F43863A860DF8C2CFC049EF41560A4873_inline(L_6, NULL);
				NullCheck(L_7);
				String_t* L_8;
				L_8 = ProductDefinition_get_id_mAC2DA1CF1E54C939E2099E9045B09CBAC6BAB99B_inline(L_7, NULL);
				bool L_9;
				L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, L_8, NULL);
				if (!L_9)
				{
					goto IL_0044_1;
				}
			}
			{
				// result = button.ProcessPurchase(e);
				IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* L_10 = V_3;
				PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39* L_11 = ___e0;
				NullCheck(L_10);
				int32_t L_12;
				L_12 = IAPButton_ProcessPurchase_mD212CBE19D46A924EC90697F15396C633ADAF0C6(L_10, L_11, NULL);
				// if (result == PurchaseProcessingResult.Complete)
				if (L_12)
				{
					goto IL_0042_1;
				}
			}
			{
				// consumePurchase = true;
				V_0 = (bool)1;
			}

IL_0042_1:
			{
				// resultProcessed = true;
				V_1 = (bool)1;
			}

IL_0044_1:
			{
				// foreach (var button in activeButtons)
				bool L_13;
				L_13 = Enumerator_MoveNext_mBBFA90FC613401AE9C93AEC635842B3EB29261D5((&V_2), Enumerator_MoveNext_mBBFA90FC613401AE9C93AEC635842B3EB29261D5_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_005d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005d:
	{
		// foreach (var listener in activeListeners)
		List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294* L_14 = __this->___activeListeners_2;
		NullCheck(L_14);
		Enumerator_t4FCC39A68C9A097E71A0F4A8BF1A5B01855B604E L_15;
		L_15 = List_1_GetEnumerator_mC2AC3CF3F1BBDE36BC62DF419D61748ED14A125F(L_14, List_1_GetEnumerator_mC2AC3CF3F1BBDE36BC62DF419D61748ED14A125F_RuntimeMethod_var);
		V_4 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m2735887092BE30AA645A46BB3CCC53DB3B59D116((&V_4), Enumerator_Dispose_m2735887092BE30AA645A46BB3CCC53DB3B59D116_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007f_1;
			}

IL_006c_1:
			{
				// foreach (var listener in activeListeners)
				IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16* L_16;
				L_16 = Enumerator_get_Current_mE7C24D2F02F8300E2633487FD35D1033C59EF508_inline((&V_4), Enumerator_get_Current_mE7C24D2F02F8300E2633487FD35D1033C59EF508_RuntimeMethod_var);
				// result = listener.ProcessPurchase(e);
				PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39* L_17 = ___e0;
				NullCheck(L_16);
				int32_t L_18;
				L_18 = IAPListener_ProcessPurchase_m1DF81E92FEA6213A11660DFE3B3E414D960D0A50(L_16, L_17, NULL);
				// if (result == PurchaseProcessingResult.Complete)
				if (L_18)
				{
					goto IL_007d_1;
				}
			}
			{
				// consumePurchase = true;
				V_0 = (bool)1;
			}

IL_007d_1:
			{
				// resultProcessed = true;
				V_1 = (bool)1;
			}

IL_007f_1:
			{
				// foreach (var listener in activeListeners)
				bool L_19;
				L_19 = Enumerator_MoveNext_mCF4FCF4676A858509D81ACF13266CE933156DE8F((&V_4), Enumerator_MoveNext_mCF4FCF4676A858509D81ACF13266CE933156DE8F_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_006c_1;
				}
			}
			{
				goto IL_0098;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0098:
	{
		// if (!resultProcessed)
		bool L_20 = V_1;
		if (L_20)
		{
			goto IL_00bf;
		}
	}
	{
		// Debug.LogError("Purchase not correctly processed for product \"" +
		//                  e.purchasedProduct.definition.id +
		//                  "\". Add an active IAPButton to process this purchase, or add an IAPListener to receive any unhandled purchase events.");
		PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39* L_21 = ___e0;
		NullCheck(L_21);
		Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_22;
		L_22 = PurchaseEventArgs_get_purchasedProduct_m0CBC223B555D7D331959FF53E7EDCEBE5E304B56_inline(L_21, NULL);
		NullCheck(L_22);
		ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* L_23;
		L_23 = Product_get_definition_m99F1AE5F43863A860DF8C2CFC049EF41560A4873_inline(L_22, NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = ProductDefinition_get_id_mAC2DA1CF1E54C939E2099E9045B09CBAC6BAB99B_inline(L_23, NULL);
		String_t* L_25;
		L_25 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral56F1AEC2FF8B133E2CAF514BFB5AEEC1B7603B66, L_24, _stringLiteral9DAAF1E37F9978FDDF8079C7917C5BE032B2F350, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_25, NULL);
	}

IL_00bf:
	{
		// return consumePurchase ? PurchaseProcessingResult.Complete : PurchaseProcessingResult.Pending;
		bool L_26 = V_0;
		if (L_26)
		{
			goto IL_00c4;
		}
	}
	{
		return (int32_t)(1);
	}

IL_00c4:
	{
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodelessIAPStoreListener_OnPurchaseFailed_m5339F261B8F2899CFDD16B016A9EDCED986D314E (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* __this, Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* ___product0, int32_t ___reason1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2735887092BE30AA645A46BB3CCC53DB3B59D116_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m30D730BCE0C3172B784398F96CE37E4FCA221F9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBBFA90FC613401AE9C93AEC635842B3EB29261D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCF4FCF4676A858509D81ACF13266CE933156DE8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m75BD104A9E78705D934354F0614D0BB6C714EC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE7C24D2F02F8300E2633487FD35D1033C59EF508_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB872FCF7A7556E330B4665845885B81D71198276_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC2AC3CF3F1BBDE36BC62DF419D61748ED14A125F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EF35329A9C666A6162702EC4141FF8A8DCCD553);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F5969530815E6A540A3ECE75D68272FE8482067);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t26A241FC3B5205E814C8D2BB26E578B7D8FE0B38 V_1;
	memset((&V_1), 0, sizeof(V_1));
	IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* V_2 = NULL;
	Enumerator_t4FCC39A68C9A097E71A0F4A8BF1A5B01855B604E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var resultProcessed = false;
		V_0 = (bool)0;
		// foreach (var button in activeButtons)
		List_1_t0F7AE3070E39088A0F31ED43630764C0AECA8926* L_0 = __this->___activeButtons_1;
		NullCheck(L_0);
		Enumerator_t26A241FC3B5205E814C8D2BB26E578B7D8FE0B38 L_1;
		L_1 = List_1_GetEnumerator_mB872FCF7A7556E330B4665845885B81D71198276(L_0, List_1_GetEnumerator_mB872FCF7A7556E330B4665845885B81D71198276_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m30D730BCE0C3172B784398F96CE37E4FCA221F9F((&V_1), Enumerator_Dispose_m30D730BCE0C3172B784398F96CE37E4FCA221F9F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003a_1;
			}

IL_0010_1:
			{
				// foreach (var button in activeButtons)
				IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* L_2;
				L_2 = Enumerator_get_Current_m75BD104A9E78705D934354F0614D0BB6C714EC8A_inline((&V_1), Enumerator_get_Current_m75BD104A9E78705D934354F0614D0BB6C714EC8A_RuntimeMethod_var);
				V_2 = L_2;
				// if (button.productId == product.definition.id)
				IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* L_3 = V_2;
				NullCheck(L_3);
				String_t* L_4 = L_3->___productId_4;
				Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_5 = ___product0;
				NullCheck(L_5);
				ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* L_6;
				L_6 = Product_get_definition_m99F1AE5F43863A860DF8C2CFC049EF41560A4873_inline(L_5, NULL);
				NullCheck(L_6);
				String_t* L_7;
				L_7 = ProductDefinition_get_id_mAC2DA1CF1E54C939E2099E9045B09CBAC6BAB99B_inline(L_6, NULL);
				bool L_8;
				L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, L_7, NULL);
				if (!L_8)
				{
					goto IL_003a_1;
				}
			}
			{
				// button.OnPurchaseFailed(product, reason);
				IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* L_9 = V_2;
				Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_10 = ___product0;
				int32_t L_11 = ___reason1;
				NullCheck(L_9);
				IAPButton_OnPurchaseFailed_m7BE05E293755252902BA4324CDB78D675FE0022C(L_9, L_10, L_11, NULL);
				// resultProcessed = true;
				V_0 = (bool)1;
			}

IL_003a_1:
			{
				// foreach (var button in activeButtons)
				bool L_12;
				L_12 = Enumerator_MoveNext_mBBFA90FC613401AE9C93AEC635842B3EB29261D5((&V_1), Enumerator_MoveNext_mBBFA90FC613401AE9C93AEC635842B3EB29261D5_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0053;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		// foreach (var listener in activeListeners)
		List_1_tEA5A072BFF6C4E4FC5412E9C62D389B500F03294* L_13 = __this->___activeListeners_2;
		NullCheck(L_13);
		Enumerator_t4FCC39A68C9A097E71A0F4A8BF1A5B01855B604E L_14;
		L_14 = List_1_GetEnumerator_mC2AC3CF3F1BBDE36BC62DF419D61748ED14A125F(L_13, List_1_GetEnumerator_mC2AC3CF3F1BBDE36BC62DF419D61748ED14A125F_RuntimeMethod_var);
		V_3 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m2735887092BE30AA645A46BB3CCC53DB3B59D116((&V_3), Enumerator_Dispose_m2735887092BE30AA645A46BB3CCC53DB3B59D116_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0071_1;
			}

IL_0061_1:
			{
				// foreach (var listener in activeListeners)
				IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16* L_15;
				L_15 = Enumerator_get_Current_mE7C24D2F02F8300E2633487FD35D1033C59EF508_inline((&V_3), Enumerator_get_Current_mE7C24D2F02F8300E2633487FD35D1033C59EF508_RuntimeMethod_var);
				// listener.OnPurchaseFailed(product, reason);
				Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_16 = ___product0;
				int32_t L_17 = ___reason1;
				NullCheck(L_15);
				IAPListener_OnPurchaseFailed_mB361558BB603975A6B5F07BD9F64D432BBD83550(L_15, L_16, L_17, NULL);
				// resultProcessed = true;
				V_0 = (bool)1;
			}

IL_0071_1:
			{
				// foreach (var listener in activeListeners)
				bool L_18;
				L_18 = Enumerator_MoveNext_mCF4FCF4676A858509D81ACF13266CE933156DE8F((&V_3), Enumerator_MoveNext_mCF4FCF4676A858509D81ACF13266CE933156DE8F_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_0061_1;
				}
			}
			{
				goto IL_008a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008a:
	{
		// if (!resultProcessed)
		bool L_19 = V_0;
		if (L_19)
		{
			goto IL_00ac;
		}
	}
	{
		// Debug.LogError("Failed purchase not correctly handled for product \"" + product.definition.id +
		//                   "\". Add an active IAPButton to handle this failure, or add an IAPListener to receive any unhandled purchase failures.");
		Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_20 = ___product0;
		NullCheck(L_20);
		ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* L_21;
		L_21 = Product_get_definition_m99F1AE5F43863A860DF8C2CFC049EF41560A4873_inline(L_20, NULL);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = ProductDefinition_get_id_mAC2DA1CF1E54C939E2099E9045B09CBAC6BAB99B_inline(L_21, NULL);
		String_t* L_23;
		L_23 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral4F5969530815E6A540A3ECE75D68272FE8482067, L_22, _stringLiteral1EF35329A9C666A6162702EC4141FF8A8DCCD553, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_23, NULL);
	}

IL_00ac:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener/<CreateCodelessIAPStoreListenerInstance>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_MoveNext_mA8745BF31014C60BF9C2744F8AFE2240690CD48F (U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2_m2D17DA0F4C5D0E8035DBA3AFF2E4CD4728BD1286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_004f_1;
			}
		}
		{
			// instance = new CodelessIAPStoreListener();
			CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* L_2 = (CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6*)il2cpp_codegen_object_new(CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			CodelessIAPStoreListener__ctor_mA5E552B229398B582F0763C918361C242266DF83(L_2, NULL);
			((CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var))->___instance_0 = L_2;
			Il2CppCodeGenWriteBarrier((void**)(&((CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var))->___instance_0), (void*)L_2);
			// if (!unityPurchasingInitialized)
			bool L_3 = ((CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var))->___unityPurchasingInitialized_3;
			if (L_3)
			{
				goto IL_0077_1;
			}
		}
		{
			// await AutoInitializeUnityGamingServicesIfEnabled();
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
			L_4 = CodelessIAPStoreListener_AutoInitializeUnityGamingServicesIfEnabled_mFA48C34E3D24C934B3625FCA83A1CE9130AE6457(NULL);
			NullCheck(L_4);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_5;
			L_5 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_4, NULL);
			V_1 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
			if (L_6)
			{
				goto IL_006b_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_8 = V_1;
			__this->___U3CU3Eu__1_2 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_2))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2_m2D17DA0F4C5D0E8035DBA3AFF2E4CD4728BD1286(L_9, (&V_1), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2_m2D17DA0F4C5D0E8035DBA3AFF2E4CD4728BD1286_RuntimeMethod_var);
			goto IL_00a3;
		}

IL_004f_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_10 = __this->___U3CU3Eu__1_2;
			V_1 = L_10;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_11 = (&__this->___U3CU3Eu__1_2);
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_006b_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
			// InitializePurchasing();
			CodelessIAPStoreListener_InitializePurchasing_m3A8B4236A34C0E70DC3E741970693412F5B6A7CE(NULL);
		}

IL_0077_1:
		{
			goto IL_0090;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_13 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_14 = V_2;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_13, L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a3;
	}// end catch (depth: 1)

IL_0090:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_15 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_15, NULL);
	}

IL_00a3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_MoveNext_mA8745BF31014C60BF9C2744F8AFE2240690CD48F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2*>(__this + _offset);
	U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_MoveNext_mA8745BF31014C60BF9C2744F8AFE2240690CD48F(_thisAdjusted, method);
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener/<CreateCodelessIAPStoreListenerInstance>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_SetStateMachine_mFD1A71A09A2D24239238FA7F713666AFD930FDB1 (U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_SetStateMachine_mFD1A71A09A2D24239238FA7F713666AFD930FDB1_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_t4221BF426416BA35A5BDC845EAC385FA91358FC2*>(__this + _offset);
	U3CCreateCodelessIAPStoreListenerInstanceU3Ed__16_SetStateMachine_mFD1A71A09A2D24239238FA7F713666AFD930FDB1(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.IAPButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_Start_m989675B1B09A93E5600B93D39755E99B891E6B60 (IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAPButton_PurchaseProduct_m23E2C90E3E7DF715DD1BF39D411F59C1CBE84687_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAPButton_Restore_mD680231EBD8C6879B89B8A1D9A24F307D1872FFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95C26DB7F9C79787B411F513085839C1185CEE39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5A61BB4FAA639A1E99385D655E6B58C0195FB0A);
		s_Il2CppMethodInitialized = true;
	}
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_0 = NULL;
	{
		// var button = GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		V_0 = L_0;
		// if (buttonType == ButtonType.Purchase)
		int32_t L_1 = __this->___buttonType_5;
		if (L_1)
		{
			goto IL_0072;
		}
	}
	{
		// if (button)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// button.onClick.AddListener(PurchaseProduct);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = V_0;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_4, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_6, __this, (intptr_t)((void*)IAPButton_PurchaseProduct_m23E2C90E3E7DF715DD1BF39D411F59C1CBE84687_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_5, L_6, NULL);
	}

IL_002e:
	{
		// if (string.IsNullOrEmpty(productId))
		String_t* L_7 = __this->___productId_4;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_7, NULL);
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// Debug.LogError("IAPButton productId is empty");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral95C26DB7F9C79787B411F513085839C1185CEE39, NULL);
	}

IL_0045:
	{
		// if (!CodelessIAPStoreListener.Instance.HasProductInCatalog(productId))
		CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* L_9;
		L_9 = CodelessIAPStoreListener_get_Instance_m99E2E2E79E7439942D59726758CC010A5BDD8C34(NULL);
		String_t* L_10 = __this->___productId_4;
		NullCheck(L_9);
		bool L_11;
		L_11 = CodelessIAPStoreListener_HasProductInCatalog_mED87E130232EA1AEDD68657851EDBF1B5D28B910(L_9, L_10, NULL);
		if (L_11)
		{
			goto IL_009a;
		}
	}
	{
		// Debug.LogWarning("The product catalog has no product with the ID \"" + productId + "\"");
		String_t* L_12 = __this->___productId_4;
		String_t* L_13;
		L_13 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralF5A61BB4FAA639A1E99385D655E6B58C0195FB0A, L_12, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_13, NULL);
		return;
	}

IL_0072:
	{
		// else if (buttonType == ButtonType.Restore)
		int32_t L_14 = __this->___buttonType_5;
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_009a;
		}
	}
	{
		// if (button)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_15, NULL);
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// button.onClick.AddListener(Restore);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = V_0;
		NullCheck(L_17);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_18;
		L_18 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_17, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_19 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_19, __this, (intptr_t)((void*)IAPButton_Restore_mD680231EBD8C6879B89B8A1D9A24F307D1872FFB_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_18, L_19, NULL);
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnEnable_mB176296ECE7775724C6EB321DBD913BC090BE506 (IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buttonType == ButtonType.Purchase)
		int32_t L_0 = __this->___buttonType_5;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// CodelessIAPStoreListener.Instance.AddButton(this);
		CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* L_1;
		L_1 = CodelessIAPStoreListener_get_Instance_m99E2E2E79E7439942D59726758CC010A5BDD8C34(NULL);
		NullCheck(L_1);
		CodelessIAPStoreListener_AddButton_mFD5CD8B448B4F7D9DAC6744EEE2B2C5A690CCAD6(L_1, __this, NULL);
		// if (CodelessIAPStoreListener.initializationComplete)
		bool L_2 = ((CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6_il2cpp_TypeInfo_var))->___initializationComplete_8;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// UpdateText();
		IAPButton_UpdateText_m04AEC40D91B24D2D200C991B6208C0E965A97177(__this, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnDisable_m390D571F92EEC6F8EEC17964ACFCA49A484E1E74 (IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* __this, const RuntimeMethod* method) 
{
	{
		// if (buttonType == ButtonType.Purchase)
		int32_t L_0 = __this->___buttonType_5;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// CodelessIAPStoreListener.Instance.RemoveButton(this);
		CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* L_1;
		L_1 = CodelessIAPStoreListener_get_Instance_m99E2E2E79E7439942D59726758CC010A5BDD8C34(NULL);
		NullCheck(L_1);
		CodelessIAPStoreListener_RemoveButton_m01159DC9A0279A7A34C387BDABC1A34A3441ACCA(L_1, __this, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::PurchaseProduct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_PurchaseProduct_m23E2C90E3E7DF715DD1BF39D411F59C1CBE84687 (IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* __this, const RuntimeMethod* method) 
{
	{
		// if (buttonType == ButtonType.Purchase)
		int32_t L_0 = __this->___buttonType_5;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// CodelessIAPStoreListener.Instance.InitiatePurchase(productId);
		CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* L_1;
		L_1 = CodelessIAPStoreListener_get_Instance_m99E2E2E79E7439942D59726758CC010A5BDD8C34(NULL);
		String_t* L_2 = __this->___productId_4;
		NullCheck(L_1);
		CodelessIAPStoreListener_InitiatePurchase_m71FAF4BDF2D42168897C526EBF45393D0928A0E1(L_1, L_2, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::Restore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_Restore_mD680231EBD8C6879B89B8A1D9A24F307D1872FFB (IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodelessIAPStoreListener_GetStoreExtensions_TisIAppleExtensions_t41229C4C01DD93794E730B8AFB9EEEBEC33C0238_mE6AFB5675C0006FD9A9BF845DE9472129C353B48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodelessIAPStoreListener_GetStoreExtensions_TisIGooglePlayStoreExtensions_t5C73808BD965EB1E0F9F58213D11A16D0ACD2C61_m91B7FA730E50D6F5D2C16D475E9A7FF13EF81BEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodelessIAPStoreListener_GetStoreExtensions_TisIMicrosoftExtensions_t58C55ED3EE8548425A77EB9EFC4AB9AE26523820_m5275FD40FCF05F2ABCEC70990F738F9512E3E700_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAPButton_OnTransactionsRestored_m2E6774FDF15FAE173138BAC1BAE6F22B0DE74FAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppleExtensions_t41229C4C01DD93794E730B8AFB9EEEBEC33C0238_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGooglePlayStoreExtensions_t5C73808BD965EB1E0F9F58213D11A16D0ACD2C61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMicrosoftExtensions_t58C55ED3EE8548425A77EB9EFC4AB9AE26523820_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral537EA891070FBA82E19DC218DBB64246306F9338);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (buttonType == ButtonType.Restore)
		int32_t L_0 = __this->___buttonType_5;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_00c0;
		}
	}
	{
		// if (Application.platform == RuntimePlatform.WSAPlayerX86 ||
		//     Application.platform == RuntimePlatform.WSAPlayerX64 ||
		//     Application.platform == RuntimePlatform.WSAPlayerARM)
		int32_t L_1;
		L_1 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)18))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2;
		L_2 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)19))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_3;
		L_3 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_0037;
		}
	}

IL_0027:
	{
		// CodelessIAPStoreListener.Instance.GetStoreExtensions<IMicrosoftExtensions>()
		//     .RestoreTransactions();
		CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* L_4;
		L_4 = CodelessIAPStoreListener_get_Instance_m99E2E2E79E7439942D59726758CC010A5BDD8C34(NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = CodelessIAPStoreListener_GetStoreExtensions_TisIMicrosoftExtensions_t58C55ED3EE8548425A77EB9EFC4AB9AE26523820_m5275FD40FCF05F2ABCEC70990F738F9512E3E700(L_4, CodelessIAPStoreListener_GetStoreExtensions_TisIMicrosoftExtensions_t58C55ED3EE8548425A77EB9EFC4AB9AE26523820_m5275FD40FCF05F2ABCEC70990F738F9512E3E700_RuntimeMethod_var);
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.Purchasing.IMicrosoftExtensions::RestoreTransactions() */, IMicrosoftExtensions_t58C55ED3EE8548425A77EB9EFC4AB9AE26523820_il2cpp_TypeInfo_var, L_5);
		return;
	}

IL_0037:
	{
		// else if (Application.platform == RuntimePlatform.IPhonePlayer ||
		//          Application.platform == RuntimePlatform.OSXPlayer ||
		//          Application.platform == RuntimePlatform.tvOS)
		int32_t L_6;
		L_6 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((((int32_t)L_6) == ((int32_t)8)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7;
		L_7 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_8;
		L_8 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)31)))))
		{
			goto IL_006c;
		}
	}

IL_0050:
	{
		// CodelessIAPStoreListener.Instance.GetStoreExtensions<IAppleExtensions>()
		//     .RestoreTransactions(OnTransactionsRestored);
		CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* L_9;
		L_9 = CodelessIAPStoreListener_get_Instance_m99E2E2E79E7439942D59726758CC010A5BDD8C34(NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = CodelessIAPStoreListener_GetStoreExtensions_TisIAppleExtensions_t41229C4C01DD93794E730B8AFB9EEEBEC33C0238_mE6AFB5675C0006FD9A9BF845DE9472129C353B48(L_9, CodelessIAPStoreListener_GetStoreExtensions_TisIAppleExtensions_t41229C4C01DD93794E730B8AFB9EEEBEC33C0238_mE6AFB5675C0006FD9A9BF845DE9472129C353B48_RuntimeMethod_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_11 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_11, __this, (intptr_t)((void*)IAPButton_OnTransactionsRestored_m2E6774FDF15FAE173138BAC1BAE6F22B0DE74FAC_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(2 /* System.Void UnityEngine.Purchasing.IAppleExtensions::RestoreTransactions(System.Action`1<System.Boolean>) */, IAppleExtensions_t41229C4C01DD93794E730B8AFB9EEEBEC33C0238_il2cpp_TypeInfo_var, L_10, L_11);
		return;
	}

IL_006c:
	{
		// else if (Application.platform == RuntimePlatform.Android &&
		//     StandardPurchasingModule.Instance().appStore == AppStore.GooglePlay)
		int32_t L_12;
		L_12 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_009e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489_il2cpp_TypeInfo_var);
		StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489* L_13;
		L_13 = StandardPurchasingModule_Instance_m6F638304EE123E1881DF2465316D5C1D3845CE0C(NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = StandardPurchasingModule_get_appStore_m19E96FCA4517781E9166DAA7E3413D7B0D61EE74_inline(L_13, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_009e;
		}
	}
	{
		// CodelessIAPStoreListener.Instance.GetStoreExtensions<IGooglePlayStoreExtensions>()
		//     .RestoreTransactions(OnTransactionsRestored);
		CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* L_15;
		L_15 = CodelessIAPStoreListener_get_Instance_m99E2E2E79E7439942D59726758CC010A5BDD8C34(NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = CodelessIAPStoreListener_GetStoreExtensions_TisIGooglePlayStoreExtensions_t5C73808BD965EB1E0F9F58213D11A16D0ACD2C61_m91B7FA730E50D6F5D2C16D475E9A7FF13EF81BEE(L_15, CodelessIAPStoreListener_GetStoreExtensions_TisIGooglePlayStoreExtensions_t5C73808BD965EB1E0F9F58213D11A16D0ACD2C61_m91B7FA730E50D6F5D2C16D475E9A7FF13EF81BEE_RuntimeMethod_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_17 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_17, __this, (intptr_t)((void*)IAPButton_OnTransactionsRestored_m2E6774FDF15FAE173138BAC1BAE6F22B0DE74FAC_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		InterfaceActionInvoker1< Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(3 /* System.Void UnityEngine.Purchasing.IGooglePlayStoreExtensions::RestoreTransactions(System.Action`1<System.Boolean>) */, IGooglePlayStoreExtensions_t5C73808BD965EB1E0F9F58213D11A16D0ACD2C61_il2cpp_TypeInfo_var, L_16, L_17);
		return;
	}

IL_009e:
	{
		// Debug.LogWarning(Application.platform.ToString() +
		//                  " is not a supported platform for the Codeless IAP restore button");
		int32_t L_18;
		L_18 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_0 = L_18;
		Il2CppFakeBox<int32_t> L_19(RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_20;
		L_20 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_19), NULL);
		String_t* L_21;
		L_21 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_20, _stringLiteral537EA891070FBA82E19DC218DBB64246306F9338, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_21, NULL);
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::OnTransactionsRestored(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnTransactionsRestored_m2E6774FDF15FAE173138BAC1BAE6F22B0DE74FAC (IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* __this, bool ___success0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPButton::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAPButton_ProcessPurchase_mD212CBE19D46A924EC90697F15396C633ADAF0C6 (IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* __this, PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m9A516C3E6F41327FB166AE0BE973DAA3416CB5F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onPurchaseComplete.Invoke(e.purchasedProduct);
		OnPurchaseCompletedEvent_t18A57F5B4A0DEB7D32E384CC96C3FF22F93CC062* L_0 = __this->___onPurchaseComplete_7;
		PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39* L_1 = ___e0;
		NullCheck(L_1);
		Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_2;
		L_2 = PurchaseEventArgs_get_purchasedProduct_m0CBC223B555D7D331959FF53E7EDCEBE5E304B56_inline(L_1, NULL);
		NullCheck(L_0);
		UnityEvent_1_Invoke_m9A516C3E6F41327FB166AE0BE973DAA3416CB5F9(L_0, L_2, UnityEvent_1_Invoke_m9A516C3E6F41327FB166AE0BE973DAA3416CB5F9_RuntimeMethod_var);
		// return consumePurchase ? PurchaseProcessingResult.Complete : PurchaseProcessingResult.Pending;
		bool L_3 = __this->___consumePurchase_6;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_001b:
	{
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_OnPurchaseFailed_m7BE05E293755252902BA4324CDB78D675FE0022C (IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* __this, Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* ___product0, int32_t ___reason1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m6AE411932003550130B01DF3C2F48A386E3D53C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onPurchaseFailed.Invoke(product, reason);
		OnPurchaseFailedEvent_t0684C539D061372B1102E2EF9665451BB93462D4* L_0 = __this->___onPurchaseFailed_8;
		Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_1 = ___product0;
		int32_t L_2 = ___reason1;
		NullCheck(L_0);
		UnityEvent_2_Invoke_m6AE411932003550130B01DF3C2F48A386E3D53C3(L_0, L_1, L_2, UnityEvent_2_Invoke_m6AE411932003550130B01DF3C2F48A386E3D53C3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton_UpdateText_m04AEC40D91B24D2D200C991B6208C0E965A97177 (IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* V_0 = NULL;
	{
		// var product = CodelessIAPStoreListener.Instance.GetProduct(productId);
		CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* L_0;
		L_0 = CodelessIAPStoreListener_get_Instance_m99E2E2E79E7439942D59726758CC010A5BDD8C34(NULL);
		String_t* L_1 = __this->___productId_4;
		NullCheck(L_0);
		Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_2;
		L_2 = CodelessIAPStoreListener_GetProduct_m8537652E27E1984D7E1872478EAFE968B0ECBA44(L_0, L_1, NULL);
		V_0 = L_2;
		// if (product != null)
		Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0080;
		}
	}
	{
		// if (titleText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___titleText_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// titleText.text = product.metadata.localizedTitle;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___titleText_9;
		Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_7 = V_0;
		NullCheck(L_7);
		ProductMetadata_t8C8138607558F5A57C08B6257B38FC2C77B32164* L_8;
		L_8 = Product_get_metadata_mBACF5289A29D76CEB98A1CABD406840B8E4DF5C6_inline(L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = ProductMetadata_get_localizedTitle_mBD34BFB3B5913154B4ACBC630A4DF8A664C9E258_inline(L_8, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
	}

IL_0038:
	{
		// if (descriptionText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___descriptionText_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		// descriptionText.text = product.metadata.localizedDescription;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___descriptionText_10;
		Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_13 = V_0;
		NullCheck(L_13);
		ProductMetadata_t8C8138607558F5A57C08B6257B38FC2C77B32164* L_14;
		L_14 = Product_get_metadata_mBACF5289A29D76CEB98A1CABD406840B8E4DF5C6_inline(L_13, NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = ProductMetadata_get_localizedDescription_mF1507A605C357667ED05FAC2F486D527CA4E2887_inline(L_14, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
	}

IL_005c:
	{
		// if (priceText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___priceText_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_0080;
		}
	}
	{
		// priceText.text = product.metadata.localizedPriceString;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___priceText_11;
		Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_19 = V_0;
		NullCheck(L_19);
		ProductMetadata_t8C8138607558F5A57C08B6257B38FC2C77B32164* L_20;
		L_20 = Product_get_metadata_mBACF5289A29D76CEB98A1CABD406840B8E4DF5C6_inline(L_19, NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = ProductMetadata_get_localizedPriceString_m83C55E96B4BC39284D88F9BAAC64E60DFF7D408F_inline(L_20, NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_21);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPButton__ctor_m7FF90E40B9EC40C472BA938C9E4B39F2DF9251F8 (IAPButton_t2055E62C16E5E1C4DA5790700F4BD6DC8F3A6AB8* __this, const RuntimeMethod* method) 
{
	{
		// public bool consumePurchase = true;
		__this->___consumePurchase_6 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPurchaseCompletedEvent__ctor_m3722A46B9CE493A7F870ABB77FE8E02EFB2621F9 (OnPurchaseCompletedEvent_t18A57F5B4A0DEB7D32E384CC96C3FF22F93CC062* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mDDF4EB01E8483CBDC91067C213EE4D41C8C1C9F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mDDF4EB01E8483CBDC91067C213EE4D41C8C1C9F7(__this, UnityEvent_1__ctor_mDDF4EB01E8483CBDC91067C213EE4D41C8C1C9F7_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPurchaseFailedEvent__ctor_m9162EA5C1CB1982B330C77EB4A6DB2832A16DBA7 (OnPurchaseFailedEvent_t0684C539D061372B1102E2EF9665451BB93462D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m40A605F14C3DC31CA6795C04E5B7373496F4C2F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m40A605F14C3DC31CA6795C04E5B7373496F4C2F2(__this, UnityEvent_2__ctor_m40A605F14C3DC31CA6795C04E5B7373496F4C2F2_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.IAPConfigurationHelper::PopulateConfigurationBuilder(UnityEngine.Purchasing.ConfigurationBuilder&,UnityEngine.Purchasing.ProductCatalog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPConfigurationHelper_PopulateConfigurationBuilder_mC2A31DE0220AB4BD1E75E5D1881310461745EF4D (ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D** ___builder0, ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1* ___catalog1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t6F6F2A13A5D5A3DFFC0FF7ECC6911440818763F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDs_tE35195DC62A54F327C2E33D7B285CC8D4A869316_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1E8D1779ABD1E98623257F896B4FC7F02C56205B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t4076D8B864B1EE4AAD0F1EA515422C97A28F5565_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE9DC57AC4E2631A2B076CF152DD9F9E6503D560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t171A84C413FDF3E2F95C5288538DE5082D8CEA36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2588D83224D47CDA8F0539AE756839D83D0464A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9CA73EDA51927153AB5C0B450478F319FE02D8EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8CB1712A70264CBC4633BD2F8C3DED2C86E5190A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m7BED80EBE5D5D79D74D703160CE7B30A1A383217_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1342ABA033C6BF6662A8E7C8FF4B7381ED85030D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t90C2DD43EBC206D8B33EA68730C68B8DC0D6E9FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PayoutDefinition_t7093E2ED065CDF614DA16100B584AD490982BC60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ProductCatalogItem_tBBB809AC7547B118E718170833CB6729F80F4215* V_1 = NULL;
	IDs_tE35195DC62A54F327C2E33D7B285CC8D4A869316* V_2 = NULL;
	List_1_t90C2DD43EBC206D8B33EA68730C68B8DC0D6E9FA* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	StoreID_t803360E805747C2D896682F98A53DEFD1F4C5298* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	ProductCatalogPayout_tE89C644B8939AE7B342D29BE28762A7A1700FDD2* V_7 = NULL;
	{
		// foreach (var product in catalog.allValidProducts)
		ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1* L_0 = ___catalog1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ProductCatalog_get_allValidProducts_m6598853A6030B9100FE7555E14F9182FF8C939A1(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductCatalogItem>::GetEnumerator() */, IEnumerable_1_t1E8D1779ABD1E98623257F896B4FC7F02C56205B_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fe:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0107;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0107:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00f1_1;
			}

IL_0011_1:
			{
				// foreach (var product in catalog.allValidProducts)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				ProductCatalogItem_tBBB809AC7547B118E718170833CB6729F80F4215* L_6;
				L_6 = InterfaceFuncInvoker0< ProductCatalogItem_tBBB809AC7547B118E718170833CB6729F80F4215* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductCatalogItem>::get_Current() */, IEnumerator_1_t9CA73EDA51927153AB5C0B450478F319FE02D8EF_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				// IDs ids = null;
				V_2 = (IDs_tE35195DC62A54F327C2E33D7B285CC8D4A869316*)NULL;
				// if (product.allStoreIDs.Count > 0)
				ProductCatalogItem_tBBB809AC7547B118E718170833CB6729F80F4215* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = ProductCatalogItem_get_allStoreIDs_m1BB9AC26346BAE2B25F2557106CF54F1F0250152_inline(L_7, NULL);
				NullCheck(L_8);
				int32_t L_9;
				L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.StoreID>::get_Count() */, ICollection_1_t6F6F2A13A5D5A3DFFC0FF7ECC6911440818763F2_il2cpp_TypeInfo_var, L_8);
				if ((((int32_t)L_9) <= ((int32_t)0)))
				{
					goto IL_007a_1;
				}
			}
			{
				// ids = new IDs();
				IDs_tE35195DC62A54F327C2E33D7B285CC8D4A869316* L_10 = (IDs_tE35195DC62A54F327C2E33D7B285CC8D4A869316*)il2cpp_codegen_object_new(IDs_tE35195DC62A54F327C2E33D7B285CC8D4A869316_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				IDs__ctor_m6C335BDBF3A2649C4050BD8958BAEF1AC74EEB06(L_10, NULL);
				V_2 = L_10;
				// foreach (var storeID in product.allStoreIDs)
				ProductCatalogItem_tBBB809AC7547B118E718170833CB6729F80F4215* L_11 = V_1;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = ProductCatalogItem_get_allStoreIDs_m1BB9AC26346BAE2B25F2557106CF54F1F0250152_inline(L_11, NULL);
				NullCheck(L_12);
				RuntimeObject* L_13;
				L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.StoreID>::GetEnumerator() */, IEnumerable_1_t4076D8B864B1EE4AAD0F1EA515422C97A28F5565_il2cpp_TypeInfo_var, L_12);
				V_4 = L_13;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_006e_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_14 = V_4;
							if (!L_14)
							{
								goto IL_0079_1;
							}
						}
						{
							RuntimeObject* L_15 = V_4;
							NullCheck(L_15);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_15);
						}

IL_0079_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0063_2;
					}

IL_003d_2:
					{
						// foreach (var storeID in product.allStoreIDs)
						RuntimeObject* L_16 = V_4;
						NullCheck(L_16);
						StoreID_t803360E805747C2D896682F98A53DEFD1F4C5298* L_17;
						L_17 = InterfaceFuncInvoker0< StoreID_t803360E805747C2D896682F98A53DEFD1F4C5298* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.StoreID>::get_Current() */, IEnumerator_1_t171A84C413FDF3E2F95C5288538DE5082D8CEA36_il2cpp_TypeInfo_var, L_16);
						V_5 = L_17;
						// ids.Add(storeID.id, storeID.store);
						IDs_tE35195DC62A54F327C2E33D7B285CC8D4A869316* L_18 = V_2;
						StoreID_t803360E805747C2D896682F98A53DEFD1F4C5298* L_19 = V_5;
						NullCheck(L_19);
						String_t* L_20 = L_19->___id_1;
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
						StoreID_t803360E805747C2D896682F98A53DEFD1F4C5298* L_23 = V_5;
						NullCheck(L_23);
						String_t* L_24 = L_23->___store_0;
						NullCheck(L_22);
						ArrayElementTypeCheck (L_22, L_24);
						(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_24);
						NullCheck(L_18);
						IDs_Add_m84DA48DEDD7208CAB754B9DEB36B56D0D8A22AF4(L_18, L_20, L_22, NULL);
					}

IL_0063_2:
					{
						// foreach (var storeID in product.allStoreIDs)
						RuntimeObject* L_25 = V_4;
						NullCheck(L_25);
						bool L_26;
						L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
						if (L_26)
						{
							goto IL_003d_2;
						}
					}
					{
						goto IL_007a_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_007a_1:
			{
				// var payoutDefinitions = new List<PayoutDefinition>();
				List_1_t90C2DD43EBC206D8B33EA68730C68B8DC0D6E9FA* L_27 = (List_1_t90C2DD43EBC206D8B33EA68730C68B8DC0D6E9FA*)il2cpp_codegen_object_new(List_1_t90C2DD43EBC206D8B33EA68730C68B8DC0D6E9FA_il2cpp_TypeInfo_var);
				NullCheck(L_27);
				List_1__ctor_m1342ABA033C6BF6662A8E7C8FF4B7381ED85030D(L_27, List_1__ctor_m1342ABA033C6BF6662A8E7C8FF4B7381ED85030D_RuntimeMethod_var);
				V_3 = L_27;
				// foreach (var payout in product.Payouts)
				ProductCatalogItem_tBBB809AC7547B118E718170833CB6729F80F4215* L_28 = V_1;
				NullCheck(L_28);
				RuntimeObject* L_29;
				L_29 = ProductCatalogItem_get_Payouts_m555FC3D209B787F27BE8299B43A5878A7279666D_inline(L_28, NULL);
				NullCheck(L_29);
				RuntimeObject* L_30;
				L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductCatalogPayout>::GetEnumerator() */, IEnumerable_1_tCE9DC57AC4E2631A2B076CF152DD9F9E6503D560_il2cpp_TypeInfo_var, L_29);
				V_6 = L_30;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00ca_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_31 = V_6;
							if (!L_31)
							{
								goto IL_00d5_1;
							}
						}
						{
							RuntimeObject* L_32 = V_6;
							NullCheck(L_32);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_32);
						}

IL_00d5_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00bf_2;
					}

IL_008f_2:
					{
						// foreach (var payout in product.Payouts)
						RuntimeObject* L_33 = V_6;
						NullCheck(L_33);
						ProductCatalogPayout_tE89C644B8939AE7B342D29BE28762A7A1700FDD2* L_34;
						L_34 = InterfaceFuncInvoker0< ProductCatalogPayout_tE89C644B8939AE7B342D29BE28762A7A1700FDD2* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductCatalogPayout>::get_Current() */, IEnumerator_1_t2588D83224D47CDA8F0539AE756839D83D0464A2_il2cpp_TypeInfo_var, L_33);
						V_7 = L_34;
						// payoutDefinitions.Add(new PayoutDefinition(payout.typeString, payout.subtype, payout.quantity, payout.data));
						List_1_t90C2DD43EBC206D8B33EA68730C68B8DC0D6E9FA* L_35 = V_3;
						ProductCatalogPayout_tE89C644B8939AE7B342D29BE28762A7A1700FDD2* L_36 = V_7;
						NullCheck(L_36);
						String_t* L_37;
						L_37 = ProductCatalogPayout_get_typeString_mDC2749C7C814424036321E9FE9F4443FCFCF1047_inline(L_36, NULL);
						ProductCatalogPayout_tE89C644B8939AE7B342D29BE28762A7A1700FDD2* L_38 = V_7;
						NullCheck(L_38);
						String_t* L_39;
						L_39 = ProductCatalogPayout_get_subtype_m91A5CF105358C819EDB1894EA3DB00F669905B4E_inline(L_38, NULL);
						ProductCatalogPayout_tE89C644B8939AE7B342D29BE28762A7A1700FDD2* L_40 = V_7;
						NullCheck(L_40);
						double L_41;
						L_41 = ProductCatalogPayout_get_quantity_m4239B8AA7AF8C60D2FA8B9F8656B57FDD2CA6CF2_inline(L_40, NULL);
						ProductCatalogPayout_tE89C644B8939AE7B342D29BE28762A7A1700FDD2* L_42 = V_7;
						NullCheck(L_42);
						String_t* L_43;
						L_43 = ProductCatalogPayout_get_data_m5485BB13535F49FD58397B278767F60D1692F2CB_inline(L_42, NULL);
						PayoutDefinition_t7093E2ED065CDF614DA16100B584AD490982BC60* L_44 = (PayoutDefinition_t7093E2ED065CDF614DA16100B584AD490982BC60*)il2cpp_codegen_object_new(PayoutDefinition_t7093E2ED065CDF614DA16100B584AD490982BC60_il2cpp_TypeInfo_var);
						NullCheck(L_44);
						PayoutDefinition__ctor_m28968555D4C084806CF43AC45E53DFAE49F741D1(L_44, L_37, L_39, L_41, L_43, NULL);
						NullCheck(L_35);
						List_1_Add_m8CB1712A70264CBC4633BD2F8C3DED2C86E5190A_inline(L_35, L_44, List_1_Add_m8CB1712A70264CBC4633BD2F8C3DED2C86E5190A_RuntimeMethod_var);
					}

IL_00bf_2:
					{
						// foreach (var payout in product.Payouts)
						RuntimeObject* L_45 = V_6;
						NullCheck(L_45);
						bool L_46;
						L_46 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_45);
						if (L_46)
						{
							goto IL_008f_2;
						}
					}
					{
						goto IL_00d6_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00d6_1:
			{
				// builder.AddProduct(product.id, product.type, ids, payoutDefinitions.ToArray());
				ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D** L_47 = ___builder0;
				ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* L_48 = *((ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D**)L_47);
				ProductCatalogItem_tBBB809AC7547B118E718170833CB6729F80F4215* L_49 = V_1;
				NullCheck(L_49);
				String_t* L_50 = L_49->___id_0;
				ProductCatalogItem_tBBB809AC7547B118E718170833CB6729F80F4215* L_51 = V_1;
				NullCheck(L_51);
				int32_t L_52 = L_51->___type_1;
				IDs_tE35195DC62A54F327C2E33D7B285CC8D4A869316* L_53 = V_2;
				List_1_t90C2DD43EBC206D8B33EA68730C68B8DC0D6E9FA* L_54 = V_3;
				NullCheck(L_54);
				PayoutDefinitionU5BU5D_tC6633E17F7FC9AC15D2AB4B23962DC9D01979B5F* L_55;
				L_55 = List_1_ToArray_m7BED80EBE5D5D79D74D703160CE7B30A1A383217(L_54, List_1_ToArray_m7BED80EBE5D5D79D74D703160CE7B30A1A383217_RuntimeMethod_var);
				NullCheck(L_48);
				ConfigurationBuilder_tCB23D9049605117E5216D50DC18E1D459590F90D* L_56;
				L_56 = ConfigurationBuilder_AddProduct_m6799057993FE410B9ACF1D975D7A154EAF9F70AA(L_48, L_50, L_52, L_53, (RuntimeObject*)L_55, NULL);
			}

IL_00f1_1:
			{
				// foreach (var product in catalog.allValidProducts)
				RuntimeObject* L_57 = V_0;
				NullCheck(L_57);
				bool L_58;
				L_58 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_57);
				if (L_58)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_0108;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0108:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.IAPListener::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPListener_OnEnable_m7F4F6367344A82D98491B63D69D58DAB5E6EDBB7 (IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dontDestroyOnLoad)
		bool L_0 = __this->___dontDestroyOnLoad_5;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_1, NULL);
	}

IL_0013:
	{
		// CodelessIAPStoreListener.Instance.AddListener(this);
		CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* L_2;
		L_2 = CodelessIAPStoreListener_get_Instance_m99E2E2E79E7439942D59726758CC010A5BDD8C34(NULL);
		NullCheck(L_2);
		CodelessIAPStoreListener_AddListener_m8618E1B4D47E5615C5404610A2E0AE86B2B9314F(L_2, __this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPListener::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPListener_OnDisable_m29581FE2217B6EF64DA0E2064A587C1EE682F41A (IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16* __this, const RuntimeMethod* method) 
{
	{
		// CodelessIAPStoreListener.Instance.RemoveListener(this);
		CodelessIAPStoreListener_tF75D3335EB4540A5DB617445D4E9494D7E19F3D6* L_0;
		L_0 = CodelessIAPStoreListener_get_Instance_m99E2E2E79E7439942D59726758CC010A5BDD8C34(NULL);
		NullCheck(L_0);
		CodelessIAPStoreListener_RemoveListener_m7BDA66843A5BFC0D9F243E4260307DEDC8465DEE(L_0, __this, NULL);
		// }
		return;
	}
}
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPListener::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAPListener_ProcessPurchase_m1DF81E92FEA6213A11660DFE3B3E414D960D0A50 (IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16* __this, PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m9A516C3E6F41327FB166AE0BE973DAA3416CB5F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onPurchaseComplete.Invoke(e.purchasedProduct);
		OnPurchaseCompletedEvent_t3CEE18D062CFFB96EC548A9E4398FD9A19DD8AAD* L_0 = __this->___onPurchaseComplete_6;
		PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39* L_1 = ___e0;
		NullCheck(L_1);
		Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_2;
		L_2 = PurchaseEventArgs_get_purchasedProduct_m0CBC223B555D7D331959FF53E7EDCEBE5E304B56_inline(L_1, NULL);
		NullCheck(L_0);
		UnityEvent_1_Invoke_m9A516C3E6F41327FB166AE0BE973DAA3416CB5F9(L_0, L_2, UnityEvent_1_Invoke_m9A516C3E6F41327FB166AE0BE973DAA3416CB5F9_RuntimeMethod_var);
		// return consumePurchase ? PurchaseProcessingResult.Complete : PurchaseProcessingResult.Pending;
		bool L_3 = __this->___consumePurchase_4;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_001b:
	{
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.Purchasing.IAPListener::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPListener_OnPurchaseFailed_mB361558BB603975A6B5F07BD9F64D432BBD83550 (IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16* __this, Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* ___product0, int32_t ___reason1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m6AE411932003550130B01DF3C2F48A386E3D53C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onPurchaseFailed.Invoke(product, reason);
		OnPurchaseFailedEvent_t2AE278DD03F5A737F83AEC56260D3387AA4B89D1* L_0 = __this->___onPurchaseFailed_7;
		Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_1 = ___product0;
		int32_t L_2 = ___reason1;
		NullCheck(L_0);
		UnityEvent_2_Invoke_m6AE411932003550130B01DF3C2F48A386E3D53C3(L_0, L_1, L_2, UnityEvent_2_Invoke_m6AE411932003550130B01DF3C2F48A386E3D53C3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPListener__ctor_mDB47B51F3D8DF897A8B87EFFE1881762E15B4B9F (IAPListener_t03EC13DC1694B8AD722FAFC7B9D0E41673AA7C16* __this, const RuntimeMethod* method) 
{
	{
		// public bool consumePurchase = true;
		__this->___consumePurchase_4 = (bool)1;
		// public bool dontDestroyOnLoad = true;
		__this->___dontDestroyOnLoad_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPurchaseCompletedEvent__ctor_m5104B4349DEB0909DC168A5B164E10351909CD69 (OnPurchaseCompletedEvent_t3CEE18D062CFFB96EC548A9E4398FD9A19DD8AAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mDDF4EB01E8483CBDC91067C213EE4D41C8C1C9F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mDDF4EB01E8483CBDC91067C213EE4D41C8C1C9F7(__this, UnityEvent_1__ctor_mDDF4EB01E8483CBDC91067C213EE4D41C8C1C9F7_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPurchaseFailedEvent__ctor_mC3846DC202004ACC32A0BF89B4BEC0244896A732 (OnPurchaseFailedEvent_t2AE278DD03F5A737F83AEC56260D3387AA4B89D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m40A605F14C3DC31CA6795C04E5B7373496F4C2F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m40A605F14C3DC31CA6795C04E5B7373496F4C2F2(__this, UnityEvent_2__ctor_m40A605F14C3DC31CA6795C04E5B7373496F4C2F2_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StandardPurchasingModule_set_useFakeStoreUIMode_m2221C886EC8FF153B0C2210AF2EF6DED271B826D_inline (StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public FakeStoreUIMode useFakeStoreUIMode { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CuseFakeStoreUIModeU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_mA35969BCF3240B8BA63918BA0C527F809C477E27_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalog_get_allProducts_m93A191445C8495D516A695D8708996C8790EF1C7_inline (ProductCatalog_t6F6B11865D55D089683F954BB3B223C00B33F8E1* __this, const RuntimeMethod* method) 
{
	{
		// public ICollection<ProductCatalogItem> allProducts => products;
		List_1_tF9E4155F905E46DBB10A4779C193F32620147794* L_0 = __this->___products_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* PurchaseEventArgs_get_purchasedProduct_m0CBC223B555D7D331959FF53E7EDCEBE5E304B56_inline (PurchaseEventArgs_t5203D89DD89FCB37A77025275F8AD1D71CF92A39* __this, const RuntimeMethod* method) 
{
	{
		// public Product purchasedProduct { get; private set; }
		Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* L_0 = __this->___U3CpurchasedProductU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* Product_get_definition_m99F1AE5F43863A860DF8C2CFC049EF41560A4873_inline (Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* __this, const RuntimeMethod* method) 
{
	{
		// public ProductDefinition definition { get; private set; }
		ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* L_0 = __this->___U3CdefinitionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_mAC2DA1CF1E54C939E2099E9045B09CBAC6BAB99B_inline (ProductDefinition_t0ECCC323EC3E52DE3143F374262050ADCECB1517* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; private set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StandardPurchasingModule_get_appStore_m19E96FCA4517781E9166DAA7E3413D7B0D61EE74_inline (StandardPurchasingModule_t988B3F7D9F73F5C6458E0DBB35AC92CDD3DA2489* __this, const RuntimeMethod* method) 
{
	{
		// public AppStore appStore { get; private set; }
		int32_t L_0 = __this->___U3CappStoreU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ProductMetadata_t8C8138607558F5A57C08B6257B38FC2C77B32164* Product_get_metadata_mBACF5289A29D76CEB98A1CABD406840B8E4DF5C6_inline (Product_t8CB4C6F2541BB4560097D6E07ABCB3AD3BB6082E* __this, const RuntimeMethod* method) 
{
	{
		// public ProductMetadata metadata { get; internal set; }
		ProductMetadata_t8C8138607558F5A57C08B6257B38FC2C77B32164* L_0 = __this->___U3CmetadataU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedTitle_mBD34BFB3B5913154B4ACBC630A4DF8A664C9E258_inline (ProductMetadata_t8C8138607558F5A57C08B6257B38FC2C77B32164* __this, const RuntimeMethod* method) 
{
	{
		// public string localizedTitle { get; internal set; }
		String_t* L_0 = __this->___U3ClocalizedTitleU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedDescription_mF1507A605C357667ED05FAC2F486D527CA4E2887_inline (ProductMetadata_t8C8138607558F5A57C08B6257B38FC2C77B32164* __this, const RuntimeMethod* method) 
{
	{
		// public string localizedDescription { get; internal set; }
		String_t* L_0 = __this->___U3ClocalizedDescriptionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedPriceString_m83C55E96B4BC39284D88F9BAAC64E60DFF7D408F_inline (ProductMetadata_t8C8138607558F5A57C08B6257B38FC2C77B32164* __this, const RuntimeMethod* method) 
{
	{
		// public string localizedPriceString { get; internal set; }
		String_t* L_0 = __this->___U3ClocalizedPriceStringU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalogItem_get_allStoreIDs_m1BB9AC26346BAE2B25F2557106CF54F1F0250152_inline (ProductCatalogItem_tBBB809AC7547B118E718170833CB6729F80F4215* __this, const RuntimeMethod* method) 
{
	{
		// public ICollection<StoreID> allStoreIDs => storeIDs;
		List_1_t86E14981FC609E067B0863BFFD976BE10F7D760C* L_0 = __this->___storeIDs_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalogItem_get_Payouts_m555FC3D209B787F27BE8299B43A5878A7279666D_inline (ProductCatalogItem_tBBB809AC7547B118E718170833CB6729F80F4215* __this, const RuntimeMethod* method) 
{
	{
		// public IList<ProductCatalogPayout> Payouts => payouts;
		List_1_t48BDDF48EBA5EFE2DF289544A05B3FA63F1C6DA5* L_0 = __this->___payouts_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_typeString_mDC2749C7C814424036321E9FE9F4443FCFCF1047_inline (ProductCatalogPayout_tE89C644B8939AE7B342D29BE28762A7A1700FDD2* __this, const RuntimeMethod* method) 
{
	{
		// public string typeString => t;
		String_t* L_0 = __this->___t_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_subtype_m91A5CF105358C819EDB1894EA3DB00F669905B4E_inline (ProductCatalogPayout_tE89C644B8939AE7B342D29BE28762A7A1700FDD2* __this, const RuntimeMethod* method) 
{
	{
		// get => st;
		String_t* L_0 = __this->___st_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ProductCatalogPayout_get_quantity_m4239B8AA7AF8C60D2FA8B9F8656B57FDD2CA6CF2_inline (ProductCatalogPayout_tE89C644B8939AE7B342D29BE28762A7A1700FDD2* __this, const RuntimeMethod* method) 
{
	{
		// get => q;
		double L_0 = __this->___q_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductCatalogPayout_get_data_m5485BB13535F49FD58397B278767F60D1692F2CB_inline (ProductCatalogPayout_tE89C644B8939AE7B342D29BE28762A7A1700FDD2* __this, const RuntimeMethod* method) 
{
	{
		// get => d;
		String_t* L_0 = __this->___d_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
