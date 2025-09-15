using System;

class Program
{
    static void Main()
    {
        byte[] payload = [1, 2, 3, 4, 5];
        byte[] outBuffer = new byte[1024];

        int encodedLength = NativeInterop.encode_packet(payload, payload.Length, outBuffer, outBuffer.Length);

        if (encodedLength > 0)
        {
            Console.WriteLine("Encoded packet length: " + encodedLength);
            Console.WriteLine("Encoded data:");
            for (int i = 0; i < encodedLength; i++)
            {
                Console.Write(outBuffer[i] + " ");
            }
            Console.WriteLine();
        }
        else
        {
            Console.WriteLine("Encoding failed, error code: " + encodedLength);
        }


        byte[] decoded = new byte[1024];
        int decodedLength = NativeInterop.decode_packet(outBuffer, encodedLength, decoded, decoded.Length);

        if (decodedLength > 0)
        {
            Console.WriteLine("Decoded payload:");
            for (int i = 0; i < decodedLength; i++)
            {
                Console.Write(decoded[i] + " ");
            }
            Console.WriteLine();
        }
        else
        {
            Console.WriteLine("Decoding failed, error code: " + decodedLength);
        }


        string ip = "127.0.0.1";
        int port = 12345;
        payload = [10, 20, 30, 40, 50];

        int sent = NativeInterop.send_packet(ip, port, payload, payload.Length);

        if (sent > 0)
            Console.WriteLine("Packet sent successfully!");
        else
            Console.WriteLine("Packet send failed, error code: " + sent);
    }
}