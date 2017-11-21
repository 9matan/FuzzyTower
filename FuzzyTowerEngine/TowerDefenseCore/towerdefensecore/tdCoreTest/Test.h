#pragma once

#define TD_TEST_ENABLE

#define TD_TO_STRING(X) #X

// FLAGS
#define TD_TEST_FLAG_FULL_LOG 1

#define TD_TEST_IS_FLAG_FULL_LOG(flags) ((flags & TD_TEST_FLAG_FULL_LOG) != 0)

#ifdef TD_TEST_ENABLE
    #define TD_TEST_LOG(msg, ...) do{ printf(msg, __VA_ARGS__); printf("\n"); } while(false);
    #define TD_TEST_IF_LOG(condition, msg, ...) do{ if(condition) TD_TEST_LOG(msg, __VA_ARGS__); } while(false);
    #define TD_TEST_FULL_LOG(msg, ...) TD_TEST_IF_LOG(TD_TEST_IS_FLAG_FULL_LOG(testFlags), msg, __VA_ARGS__)
#else
    #define TD_TEST_LOG(msg, ...)
    #define TD_TEST_IF_LOG(condition, msg, ...)
    #define TD_TEST_FULL_LOG(condition, msg, ...)
#endif // TD_TEST_ENABLE

#define TD_TEST_PASSED(msg, ...) TD_TEST_LOG("%s OK %s", testName, msg); return true;
#define TD_TEST_FAILED(msg, ...) TD_TEST_LOG("%s FAILED %s", testName, msg); return false;

#ifdef TD_TEST_ENABLE  
    #define TD_SUBTEST_STRING(funcName) TD_TO_STRING(Subtest_##funcName)
    #define TD_TEST(funcName, ...) TowerDefense::funcName(0, __VA_ARGS__)
    #define TD_TEST_WITH_FLAGS(flags, funcName, ...) TowerDefense::funcName(flags, __VA_ARGS__)
    #define TD_SUBTEST(funcName, ...) \
        do { if(!funcName(__VA_ARGS__)) \
        { \
            TD_TEST_FAILED(TDE_SUBTEST_STRING(funcName)) \
        } } while(false);
#else
    #define TD_TEST(funcName, ...)
    #define TD_TEST_WITH_FLAGS(funcName, ...)
    #define TD_SUBTEST(funcName, ...) 
#endif // TD_TEST_ENABLE

#define TD_DECLARE_TEST(funcName, ...) tdBool const funcName(tdU32 const testFlags, __VA_ARGS__)
#define TD_BEGIN_TEST(funcName, ...) tdBool const funcName(tdU32 const testFlags, __VA_ARGS__) { char const* const testName = TD_TO_STRING(funcName);
#define TD_END_TEST() }