WORD ConvertLittle2BigEndianW(void* lpArray, DWORD dwLocation) {
        WORD wResult = ((BYTE*)lpArray)[dwLocation + 1];
    return (wResult << 8) | ((BYTE*)lpArray)[dwLocation];
};
