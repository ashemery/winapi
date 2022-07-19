WORD ConvertLittle2BigEndianW(void* lpArray, DWORD dwLocation) {
        WORD wResult = ((BYTE*)lpArray)[dwLocation + 1];
    return (wResult << 8) | ((BYTE*)lpArray)[dwLocation];
};

DWORD ConvertLittle2BigEndianDW(void* lpArray, DWORD dwLocation) {
        DWORD dwResult = ((BYTE*)lpArray)[dwLocation + 3];
        dwResult = (dwResult << 8) | ((BYTE*)lpArray)[dwLocation + 2];
        dwResult = (dwResult << 8) | ((BYTE*)lpArray)[dwLocation + 1];
        dwResult = (dwResult << 8) | ((BYTE*)lpArray)[dwLocation];
    return dwResult;
};
