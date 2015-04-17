#include <windows.h>
#include "public.h"
#include "vjoyinterface.h"

__declspec(dllexport __stdcall) BOOL _vJoyEnabled (void) {
    return vJoyEnabled();
}

__declspec(dllexport __stdcall) SHORT _GetvJoyVersion (void) {
    return GetvJoyVersion();
}

__declspec(dllexport __stdcall) PVOID _GetvJoyProductString (void) {
    return GetvJoyProductString();
}

__declspec(dllexport __stdcall) PVOID _GetvJoyManufacturerString (void) {
    return GetvJoyManufacturerString();
}

__declspec(dllexport __stdcall) PVOID _GetvJoySerialNumberString (void) {
    return GetvJoySerialNumberString();
}

__declspec(dllexport __stdcall) enum VjdStat _GetVJDStatus (UINT rID) {
    return GetVJDStatus(rID);
}

__declspec(dllexport __stdcall) BOOL _AcquireVJD (UINT rID) {
    return AcquireVJD(rID);
}

__declspec(dllexport __stdcall) VOID _RelinquishVJD (UINT rID) {
    RelinquishVJD(rID);
}

__declspec(dllexport __stdcall) BOOL _UpdateVJD (UINT rID, PVOID pData) {
    return UpdateVJD(rID, pData);
}

__declspec(dllexport __stdcall) int _GetVJDButtonNumber (UINT rID) {
    return GetVJDButtonNumber(rID);
}

__declspec(dllexport __stdcall) int _GetVJDDiscPovNumber (UINT rID) {
    return GetVJDDiscPovNumber(rID);
}

__declspec(dllexport __stdcall) int _GetVJDContPovNumber (UINT rID) {
    return GetVJDContPovNumber(rID);
}

__declspec(dllexport __stdcall) BOOL _GetVJDAxisExist (UINT rID, UINT Axis) {
    return GetVJDAxisExist(rID, Axis);
}

__declspec(dllexport __stdcall) BOOL _GetVJDAxisMax (UINT rID, UINT Axis, LONG * Max) {
    return GetVJDAxisMax(rID, Axis, Max);
}

__declspec(dllexport __stdcall) BOOL _GetVJDAxisMin (UINT rID, UINT Axis, LONG * Min) {
    return GetVJDAxisMin(rID, Axis, Min);
}

__declspec(dllexport __stdcall) BOOL _ResetVJD (UINT rID) {
    return ResetVJD(rID);
}

__declspec(dllexport __stdcall) void _ResetAll (void) {
    ResetAll();
}

__declspec(dllexport __stdcall) BOOL _ResetButtons (UINT rID) {
    return ResetButtons(rID);
}

__declspec(dllexport __stdcall) BOOL _ResetPovs (UINT rID) {
    return ResetPovs(rID);
}

__declspec(dllexport __stdcall) BOOL _SetAxis (LONG Value, UINT rID, UINT Axis) {
    return SetAxis(Value, rID, Axis);
}

__declspec(dllexport __stdcall) BOOL _SetBtn (BOOL Value, UINT rID, UCHAR nBtn) {
    return SetBtn(Value, rID, nBtn);
}

__declspec(dllexport __stdcall) BOOL _SetDiscPov (int Value, UINT rID, UCHAR nPov) {
    return SetDiscPov(Value, rID, nPov);
}

__declspec(dllexport __stdcall) BOOL _SetContPov (DWORD Value, UINT rID, UCHAR nPov) {
    return SetContPov(Value, rID, nPov);
}
