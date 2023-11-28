// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the RECORD_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// RECORD_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef RECORDDLL_EXPORTS
#define RECORD_API __declspec(dllexport)
#else
#define RECORD_API __declspec(dllimport)
#endif

// This class is exported from the dll
//class RECORD_API CRecord{
//public:
//	CRecord(void);
//	 TODO: add your methods here.
//};

//extern RECORD_API int nRecord;

//RECORD_API int fnRecord(void);

RECORD_API int CALLBACK start();
RECORD_API PBYTE GetAudioData();
RECORD_API int GetSaveBufferLength();
RECORD_API void SetSaveBufferLength(DWORD newLength);
RECORD_API int GetSampleRate();
RECORD_API void SetSampleRate(int newSampleRate);
RECORD_API int GetBitsPerSample();
RECORD_API void SetBitsPerSample(int newBitsPerSample);
RECORD_API int GetNumChannels();
RECORD_API void SetNumChannels(int newChannels);
RECORD_API PBYTE GetAudioBackup();
RECORD_API int CALLBACK playStart(struct PlaybackParams params);