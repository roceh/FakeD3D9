#pragma once

#include <d3d9.h>

class FakeDirect3DDevice9 : public IDirect3DDevice9
{
public:
	FakeDirect3DDevice9(IDirect3DDevice9* pOriginal);
	virtual ~FakeDirect3DDevice9(void);

	// START: The original DX9 function definitions
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObj);
	virtual COM_DECLSPEC_NOTHROW ULONG   STDMETHODCALLTYPE AddRef(void);
	virtual COM_DECLSPEC_NOTHROW ULONG   STDMETHODCALLTYPE Release(void);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE TestCooperativeLevel(void);
	virtual COM_DECLSPEC_NOTHROW UINT    STDMETHODCALLTYPE GetAvailableTextureMem(void);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE EvictManagedResources(void);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetDirect3D(IDirect3D9** ppD3D9);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetDeviceCaps(D3DCAPS9* pCaps);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetDisplayMode(UINT iSwapChain, D3DDISPLAYMODE* pMode);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetCreationParameters(D3DDEVICE_CREATION_PARAMETERS* pParameters);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetCursorProperties(UINT XHotSpot, UINT YHotSpot, IDirect3DSurface9* pCursorBitmap);
	virtual COM_DECLSPEC_NOTHROW void    STDMETHODCALLTYPE SetCursorPosition(int X, int Y, DWORD Flags);
	virtual COM_DECLSPEC_NOTHROW BOOL    STDMETHODCALLTYPE ShowCursor(BOOL bShow);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE CreateAdditionalSwapChain(D3DPRESENT_PARAMETERS* pPresentationParameters, IDirect3DSwapChain9** pSwapChain);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetSwapChain(UINT iSwapChain, IDirect3DSwapChain9** pSwapChain);
	virtual COM_DECLSPEC_NOTHROW UINT    STDMETHODCALLTYPE GetNumberOfSwapChains(void);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE Reset(D3DPRESENT_PARAMETERS* pPresentationParameters);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE Present(CONST RECT* pSourceRect, CONST RECT* pDestRect, HWND hDestWindowOverride, CONST RGNDATA* pDirtyRegion);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetBackBuffer(UINT iSwapChain, UINT iBackBuffer, D3DBACKBUFFER_TYPE Type, IDirect3DSurface9** ppBackBuffer);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetRasterStatus(UINT iSwapChain, D3DRASTER_STATUS* pRasterStatus);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetDialogBoxMode(BOOL bEnableDialogs);
	virtual COM_DECLSPEC_NOTHROW void    STDMETHODCALLTYPE SetGammaRamp(UINT iSwapChain, DWORD Flags, CONST D3DGAMMARAMP* pRamp);
	virtual COM_DECLSPEC_NOTHROW void    STDMETHODCALLTYPE GetGammaRamp(UINT iSwapChain, D3DGAMMARAMP* pRamp);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE CreateTexture(UINT Width, UINT Height, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DTexture9** ppTexture, HANDLE* pSharedHandle);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE CreateVolumeTexture(UINT Width, UINT Height, UINT Depth, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DVolumeTexture9** ppVolumeTexture, HANDLE* pSharedHandle);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE CreateCubeTexture(UINT EdgeLength, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DCubeTexture9** ppCubeTexture, HANDLE* pSharedHandle);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE CreateVertexBuffer(UINT Length, DWORD Usage, DWORD FVF, D3DPOOL Pool, IDirect3DVertexBuffer9** ppVertexBuffer, HANDLE* pSharedHandle);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE CreateIndexBuffer(UINT Length, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DIndexBuffer9** ppIndexBuffer, HANDLE* pSharedHandle);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE CreateRenderTarget(UINT Width, UINT Height, D3DFORMAT Format, D3DMULTISAMPLE_TYPE MultiSample, DWORD MultisampleQuality, BOOL Lockable, IDirect3DSurface9** ppSurface, HANDLE* pSharedHandle);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE CreateDepthStencilSurface(UINT Width, UINT Height, D3DFORMAT Format, D3DMULTISAMPLE_TYPE MultiSample, DWORD MultisampleQuality, BOOL Discard, IDirect3DSurface9** ppSurface, HANDLE* pSharedHandle);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE UpdateSurface(IDirect3DSurface9* pSourceSurface, CONST RECT* pSourceRect, IDirect3DSurface9* pDestinationSurface, CONST POINT* pDestPoint);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE UpdateTexture(IDirect3DBaseTexture9* pSourceTexture, IDirect3DBaseTexture9* pDestinationTexture);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetRenderTargetData(IDirect3DSurface9* pRenderTarget, IDirect3DSurface9* pDestSurface);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetFrontBufferData(UINT iSwapChain, IDirect3DSurface9* pDestSurface);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE StretchRect(IDirect3DSurface9* pSourceSurface, CONST RECT* pSourceRect, IDirect3DSurface9* pDestSurface, CONST RECT* pDestRect, D3DTEXTUREFILTERTYPE Filter);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE ColorFill(IDirect3DSurface9* pSurface, CONST RECT* pRect, D3DCOLOR color);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE CreateOffscreenPlainSurface(UINT Width, UINT Height, D3DFORMAT Format, D3DPOOL Pool, IDirect3DSurface9** ppSurface, HANDLE* pSharedHandle);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetRenderTarget(DWORD RenderTargetIndex, IDirect3DSurface9* pRenderTarget);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetRenderTarget(DWORD RenderTargetIndex, IDirect3DSurface9** ppRenderTarget);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetDepthStencilSurface(IDirect3DSurface9* pNewZStencil);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetDepthStencilSurface(IDirect3DSurface9** ppZStencilSurface);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE BeginScene(void);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE EndScene(void);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE Clear(DWORD Count, CONST D3DRECT* pRects, DWORD Flags, D3DCOLOR Color, float Z, DWORD Stencil);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetTransform(D3DTRANSFORMSTATETYPE State, CONST D3DMATRIX* pMatrix);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetTransform(D3DTRANSFORMSTATETYPE State, D3DMATRIX* pMatrix);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE MultiplyTransform(D3DTRANSFORMSTATETYPE State, CONST D3DMATRIX* pMatrix);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetViewport(CONST D3DVIEWPORT9* pViewport);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetViewport(D3DVIEWPORT9* pViewport);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetMaterial(CONST D3DMATERIAL9* pMaterial);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetMaterial(D3DMATERIAL9* pMaterial);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetLight(DWORD Index, CONST D3DLIGHT9* pLight);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetLight(DWORD Index, D3DLIGHT9* pLight);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE LightEnable(DWORD Index, BOOL Enable);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetLightEnable(DWORD Index, BOOL* pEnable);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetClipPlane(DWORD Index, CONST float* pPlane);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetClipPlane(DWORD Index, float* pPlane);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetRenderState(D3DRENDERSTATETYPE State, DWORD Value);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetRenderState(D3DRENDERSTATETYPE State, DWORD* pValue);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE CreateStateBlock(D3DSTATEBLOCKTYPE Type, IDirect3DStateBlock9** ppSB);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE BeginStateBlock(void);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE EndStateBlock(IDirect3DStateBlock9** ppSB);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetClipStatus(CONST D3DCLIPSTATUS9* pClipStatus);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetClipStatus(D3DCLIPSTATUS9* pClipStatus);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetTexture(DWORD Stage, IDirect3DBaseTexture9** ppTexture);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetTexture(DWORD Stage, IDirect3DBaseTexture9* pTexture);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetTextureStageState(DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD* pValue);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetTextureStageState(DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD Value);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetSamplerState(DWORD Sampler, D3DSAMPLERSTATETYPE Type, DWORD* pValue);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetSamplerState(DWORD Sampler, D3DSAMPLERSTATETYPE Type, DWORD Value);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE ValidateDevice(DWORD* pNumPasses);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetPaletteEntries(UINT PaletteNumber, CONST PALETTEENTRY* pEntries);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetPaletteEntries(UINT PaletteNumber, PALETTEENTRY* pEntries);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetCurrentTexturePalette(UINT PaletteNumber);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetCurrentTexturePalette(UINT* PaletteNumber);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetScissorRect(CONST RECT* pRect);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetScissorRect(RECT* pRect);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetSoftwareVertexProcessing(BOOL bSoftware);
	virtual COM_DECLSPEC_NOTHROW BOOL    STDMETHODCALLTYPE GetSoftwareVertexProcessing(void);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetNPatchMode(float nSegments);
	virtual COM_DECLSPEC_NOTHROW float   STDMETHODCALLTYPE GetNPatchMode(void);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE DrawPrimitive(D3DPRIMITIVETYPE PrimitiveType, UINT StartVertex, UINT PrimitiveCount);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE DrawIndexedPrimitive(D3DPRIMITIVETYPE PrimitiveType, INT BaseVertexIndex, UINT MinVertexIndex, UINT NumVertices, UINT startIndex, UINT primCount);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE DrawPrimitiveUP(D3DPRIMITIVETYPE PrimitiveType, UINT PrimitiveCount, CONST void* pVertexStreamZeroData, UINT VertexStreamZeroStride);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE DrawIndexedPrimitiveUP(D3DPRIMITIVETYPE PrimitiveType, UINT MinVertexIndex, UINT NumVertices, UINT PrimitiveCount, CONST void* pIndexData, D3DFORMAT IndexDataFormat, CONST void* pVertexStreamZeroData, UINT VertexStreamZeroStride);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE ProcessVertices(UINT SrcStartIndex, UINT DestIndex, UINT VertexCount, IDirect3DVertexBuffer9* pDestBuffer, IDirect3DVertexDeclaration9* pVertexDecl, DWORD Flags);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE CreateVertexDeclaration(CONST D3DVERTEXELEMENT9* pVertexElements, IDirect3DVertexDeclaration9** ppDecl);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetVertexDeclaration(IDirect3DVertexDeclaration9* pDecl);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetVertexDeclaration(IDirect3DVertexDeclaration9** ppDecl);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetFVF(DWORD FVF);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetFVF(DWORD* pFVF);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE CreateVertexShader(CONST DWORD* pFunction, IDirect3DVertexShader9** ppShader);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetVertexShader(IDirect3DVertexShader9* pShader);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetVertexShader(IDirect3DVertexShader9** ppShader);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetVertexShaderConstantF(UINT StartRegister, CONST float* pConstantData, UINT Vector4fCount);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetVertexShaderConstantF(UINT StartRegister, float* pConstantData, UINT Vector4fCount);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetVertexShaderConstantI(UINT StartRegister, CONST int* pConstantData, UINT Vector4iCount);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetVertexShaderConstantI(UINT StartRegister, int* pConstantData, UINT Vector4iCount);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetVertexShaderConstantB(UINT StartRegister, CONST BOOL* pConstantData, UINT  BoolCount);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetVertexShaderConstantB(UINT StartRegister, BOOL* pConstantData, UINT BoolCount);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetStreamSource(UINT StreamNumber, IDirect3DVertexBuffer9* pStreamData, UINT OffsetInBytes, UINT Stride);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetStreamSource(UINT StreamNumber, IDirect3DVertexBuffer9** ppStreamData, UINT* OffsetInBytes, UINT* pStride);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetStreamSourceFreq(UINT StreamNumber, UINT Divider);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetStreamSourceFreq(UINT StreamNumber, UINT* Divider);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetIndices(IDirect3DIndexBuffer9* pIndexData);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetIndices(IDirect3DIndexBuffer9** ppIndexData);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE CreatePixelShader(CONST DWORD* pFunction, IDirect3DPixelShader9** ppShader);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetPixelShader(IDirect3DPixelShader9* pShader);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetPixelShader(IDirect3DPixelShader9** ppShader);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetPixelShaderConstantF(UINT StartRegister, CONST float* pConstantData, UINT Vector4fCount);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetPixelShaderConstantF(UINT StartRegister, float* pConstantData, UINT Vector4fCount);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetPixelShaderConstantI(UINT StartRegister, CONST int* pConstantData, UINT Vector4iCount);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetPixelShaderConstantI(UINT StartRegister, int* pConstantData, UINT Vector4iCount);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE SetPixelShaderConstantB(UINT StartRegister, CONST BOOL* pConstantData, UINT  BoolCount);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE GetPixelShaderConstantB(UINT StartRegister, BOOL* pConstantData, UINT BoolCount);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE DrawRectPatch(UINT Handle, CONST float* pNumSegs, CONST D3DRECTPATCH_INFO* pRectPatchInfo);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE DrawTriPatch(UINT Handle, CONST float* pNumSegs, CONST D3DTRIPATCH_INFO* pTriPatchInfo);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE DeletePatch(UINT Handle);
	virtual COM_DECLSPEC_NOTHROW HRESULT STDMETHODCALLTYPE CreateQuery(D3DQUERYTYPE Type, IDirect3DQuery9** ppQuery);
	// END: The original DX9 function definitions

private:
	IDirect3DDevice9* m_pIDirect3DDevice9;
};
