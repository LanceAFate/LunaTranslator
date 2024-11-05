﻿   
#define ALREADY_INJECTED L"已經注入" 
#define NEED_32_BIT L"架構不匹配：請嘗試使用 32 位元注入此處理程序" 
#define NEED_64_BIT L"架構不匹配：請嘗試使用 64 位元注入此處理程序" 
#define INJECT_FAILED L"注入失敗" 
#define INVALID_CODEPAGE L"無法轉換文字（無效的字碼頁？）" 
#define PIPE_CONNECTED u8"管道已連接" 
#define INSERTING_HOOK u8"注入勾點：%s %p" 
#define REMOVING_HOOK u8"移除勾點：%s" 
#define TOO_MANY_HOOKS u8"勾點數量已達上限：無法注入" 
#define HOOK_SEARCH_STARTING u8"開始搜尋勾點" 
#define HOOK_SEARCH_INITIALIZING u8"初始化勾點搜尋（%f%%）" 
#define NOT_ENOUGH_TEXT u8"文字長度不足，無法精確搜尋" 
#define HOOK_SEARCH_INITIALIZED u8"搜尋初始化完成，建立了 %zd 個勾點" 
#define MAKE_GAME_PROCESS_TEXT u8"請點擊遊戲區域，在接下來的 %d 秒內使遊戲強制處理文字" 
#define HOOK_SEARCH_FINISHED u8"勾點搜尋完畢，找到了 %d 條結果" 
#define OUT_OF_RECORDS_RETRY u8"搜尋結果已達上限，如果結果不理想，請重試（預設最大紀錄數增加）" 
#define FUNC_MISSING u8"函式不存在" 
#define MODULE_MISSING u8"模組不存在" 
#define GARBAGE_MEMORY u8"記憶體一直在改變，無法有效讀取" 
#define SEND_ERROR u8"Sender 錯誤（可能是由於錯誤或不穩定的 H-code）：%s" 
#define READ_ERROR u8"Reader 錯誤（可能是由於錯誤或不穩定的 R-code）：%s" 
#define SearchForHooks_ERROR u8"搜尋勾點錯誤：記憶體移除，嘗試重新分配 %d" 
#define ResultsNum u8"%d 個結果被找到" 
#define HIJACK_ERROR u8"Hijack 錯誤" 
#define COULD_NOT_FIND u8"無法找到文字" 
#define CONSOLE L"控制台" 
#define InvalidLength  u8"可能存在錯誤（無效的文字長度 %d 出現 %s）" 
#define InsertHookFailed u8"勾點注入失敗 %s" 
#define Match_Error u8"匹配 %s 引擎時發生錯誤" 
#define Attach_Error u8"連接到 %s 引擎時發生錯誤" 
#define MatchedEngine u8"匹配到 %s 引擎" 
#define ConfirmStop u8"確認是 %s 引擎，停止匹配" 
#define Attach_Stop u8"成功連接到 %s 引擎" 
#define ProcessRange u8"取得處理程序記憶體位址範圍 0x%p 到 0x%p" 
#define WarningDummy u8"警告，注入的處理程序記憶體很小，可能是無用處理程序！" 
#define WndSelectProcess L"選擇處理程序" 
#define WndLunaHostGui L"LunaHost GUI" 
#define WndSetting L"設定" 
#define WndPlugins L"外掛程式" 
#define NotifyInvalidHookCode L"特殊碼無效" 
#define BtnSelectProcess L"選擇處理程序" 
#define BtnDetach L"從遊戲分離" 
#define BtnSaveHook L"儲存勾點" 
#define BtnShowSettingWindow L"設定" 
#define BtnAttach L"注入處理程序" 
#define BtnRefresh L"重新整理" 
#define BtnToClipboard L"複製到剪貼簿" 
#define BtnReadOnly L"文字框唯讀" 
#define BtnInsertUserHook L"插入特殊碼" 
#define BtnSearchHook L"搜尋勾點" 
#define BtnPlugin L"外掛程式" 
#define LblFlushDelay L"排清延遲" 
#define LblFilterRepeat L"過濾重複文字" 
#define LblCodePage L"預設字碼頁" 
#define LblMaxBuff L"最大緩衝區長度"
#define LblMaxHist L"最大快取文字長度"
#define LblAutoAttach L"自動附加"
#define LblAutoAttach_savedonly L"自動附加（僅限儲存過配置的遊戲）"
#define MenuCopyHookCode L"複製特殊碼" 
#define MenuRemoveHook L"移除勾點" 
#define MenuDetachProcess L"離開處理程序" 
#define MenuRemeberSelect L"記住選擇的勾點" 
#define MenuForgetSelect L"忘掉選擇的勾點" 
#define MenuAddPlugin L"新增外掛程式" 
#define MenuRemovePlugin L"移除外掛程式" 
#define MenuPluginRankUp L"上移" 
#define MenuPluginRankDown L"下移" 
#define MenuPluginEnable L"使用" 
#define MenuPluginVisSetting L"顯示設定" 
#define DefaultFont L"Microsoft JhengHei" 
#define CantLoadQtLoader L"無法載入 QtLoader.dll"
#define InvalidPlugin L"外掛程式無效！"
#define InvalidDll L"DLL 無效！"
#define InvalidDump L"重複！"
#define MsgError L"錯誤"
#define SEARCH_CJK L"搜尋中文 / 日文 / 韓文"
#define HS_SETTINGS L"設定"
#define BtnOk L"確定"
#define HS_START_HOOK_SEARCH L"開始搜尋勾點"
#define HS_SEARCH_PATTERN L"搜尋匹配特徵（Hex Byte Array）"
#define HS_SEARCH_DURATION L"搜尋持續時間（ms）"
#define HS_SEARCH_MODULE L"搜尋指定模組"
#define HS_PATTERN_OFFSET L"相對於特徵位址的偏移值"
#define HS_MAX_HOOK_SEARCH_RECORDS L"搜尋結果達到上限"
#define HS_MIN_ADDRESS L"起始位址（hex）"
#define HS_MAX_ADDRESS L"結束位址（hex）"
#define HS_STRING_OFFSET L"字串偏移值（hex）"
#define HS_HOOK_SEARCH_FILTER L"結果必須匹配的正則表達式"
#define HS_TEXT L"文字"
#define HS_CODEPAGE L"字碼頁"
#define HS_SEARCH_FOR_TEXT L"搜尋指定文字"
#define VersionLatest L"最新版本"
#define VersionCurrent L"目前版本"
#define ProjectHomePage L"GitHub：https://github.com/HIllya51/LunaTranslator\n專案首頁：https://lunatranslator.org\nPatreon：https://patreon.com/HIllya51\nDiscord：https://discord.com/invite/ErtDwVeAbB"
#define LIST_HOOK L"Hook"
#define LIST_TEXT L"文字"
#define PROC_CONN L"處理程序已連接 %d"
#define PROC_DISCONN L"處理程序已中斷連接 %d"
#define COPYSELECTION L"自動將文字框中選取的文字複製到剪貼簿"
#define FONTSELECT L"選擇字體"