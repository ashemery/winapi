DWORD ConvertLittle2BigEndianDW(void* lpArray, DWORD dwLocation) {
        DWORD dwResult = ((BYTE*)lpArray)[dwLocation + 3];
        dwResult = (dwResult << 8) | ((BYTE*)lpArray)[dwLocation + 2];
        dwResult = (dwResult << 8) | ((BYTE*)lpArray)[dwLocation + 1];
        dwResult = (dwResult << 8) | ((BYTE*)lpArray)[dwLocation];
    return dwResult;
};
