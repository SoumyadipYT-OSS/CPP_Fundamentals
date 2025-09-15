using System.Runtime.InteropServices;

public static class NativeInterop
{
    [DllImport("protocol.dll", CallingConvention = CallingConvention.Cdecl)]
    public static extern int encode_packet(
        byte[] payload,
        int length,
        byte[] outBuffer,
        int outBufferSize
    );

    [DllImport("protocol.dll", CallingConvention = CallingConvention.Cdecl)]
    public static extern int decode_packet(
        byte[] data,
        int length,
        byte[] outPayload,
        int outPayloadSize
    );

    [DllImport("protocol.dll", CallingConvention = CallingConvention.Cdecl)]
    public static extern int send_packet(
        string ip,
        int port,
        byte[] payload,
        int length
    );
}