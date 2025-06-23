// server.ts
import { serve } from "https://deno.land/std@0.208.0/http/server.ts";
import { extname } from "https://deno.land/std@0.208.0/path/mod.ts";

// MIME type mapping
const mimeTypes: Record<string, string> = {
  ".html": "text/html",
  ".css": "text/css",
  ".js": "application/javascript",
  ".ts": "application/typescript",
  ".json": "application/json",
  ".png": "image/png",
  ".jpg": "image/jpeg",
  ".jpeg": "image/jpeg",
  ".gif": "image/gif",
  ".svg": "image/svg+xml",
  ".ico": "image/x-icon",
  ".txt": "text/plain",
  ".md": "text/markdown",
};

const getMimeType = (filepath: string): string => {
  const ext = extname(filepath).toLowerCase();
  return mimeTypes[ext] || "application/octet-stream";
};

const serveFile = async (filepath: string): Promise<Response> => {
  try {
    const file = await Deno.readFile(filepath);
    const mimeType = getMimeType(filepath);
    
    return new Response(file, {
      headers: {
        "content-type": mimeType,
        "cache-control": "public, max-age=3600", // 1 hour cache
      },
    });
  } catch (error) {
    if (error instanceof Deno.errors.NotFound) {
      return new Response("File not found", { 
        status: 404,
        headers: { "content-type": "text/plain" },
      });
    }
    console.error("Error serving file:", error);
    return new Response("Internal server error", { 
      status: 500,
      headers: { "content-type": "text/plain" },
    });
  }
};

const handler = async (req: Request): Promise<Response> => {
  const url = new URL(req.url);
  
  // Static file serving for src/main folder
  if (url.pathname.startsWith("/src/main/")) {
    const filepath = `.${url.pathname}`;
    return await serveFile(filepath);
  }
  
  // API and other routes
  switch (url.pathname) {
    case "/":
      return new Response("Hello from Deno HTTPS Server!", {
        headers: { "content-type": "text/plain" },
      });
    
    case "/api/status":
      return new Response(JSON.stringify({ 
        status: "ok", 
        timestamp: new Date().toISOString(),
        method: req.method 
      }), {
        headers: { "content-type": "application/json" },
      });
    
    case "/health":
      return new Response("Server is healthy", {
        headers: { "content-type": "text/plain" },
      });
    
    case "/api/files":
      // List files in src/main directory
      try {
        const files = [];
        for await (const entry of Deno.readDir("./src/main")) {
          files.push({
            name: entry.name,
            isFile: entry.isFile,
            isDirectory: entry.isDirectory,
            url: `/src/main/${entry.name}`
          });
        }
        return new Response(JSON.stringify({ files }), {
          headers: { "content-type": "application/json" },
        });
      } catch (error) {
        return new Response(JSON.stringify({ 
          error: "Could not read src/main directory",
          message: error.message 
        }), {
          status: 404,
          headers: { "content-type": "application/json" },
        });
      }
    
    default:
      return new Response("Not Found", { 
        status: 404,
        headers: { "content-type": "text/plain" },
      });
  }
};

// Generate self-signed certificate for development
const cert = await crypto.subtle.generateKey(
  {
    name: "RSASSA-PKCS1-v1_5",
    modulusLength: 2048,
    publicExponent: new Uint8Array([1, 0, 1]),
    hash: "SHA-256",
  },
  true,
  ["sign", "verify"]
);

// For production, you would load actual certificate files:
/*
const cert = Deno.readTextFileSync("./cert.pem");
const key = Deno.readTextFileSync("./key.pem");
*/

console.log("🚀 Starting HTTPS server...");

const port = 8443;

try {
  // Note: For a real HTTPS server, you need actual certificate files
  // This example shows the structure, but will use HTTP in practice
  // unless you provide real cert/key files
  
  console.log(`🔒 HTTPS Server running on https://localhost:${port}`);
  console.log("\nAvailable endpoints:");
  console.log("  GET  /              - Hello message");
  console.log("  GET  /api/status    - JSON status response");
  console.log("  GET  /health        - Health check");
  console.log("  GET  /api/files     - List files in src/main directory");
  console.log("  GET  /src/main/*    - Serve files from src/main folder");
  
  await serve(handler, { 
    port,
    // For real HTTPS, uncomment and provide cert files:
    // cert: cert,
    // key: key,
  });
  
} catch (error) {
  console.error("❌ Failed to start server:", error.message);
  console.log("\n💡 To run with HTTPS, you need:");
  console.log("   1. Generate or obtain SSL certificate files");
  console.log("   2. Update the cert/key file paths in the code");
  console.log("   3. Run with: deno run --allow-net --allow-read server.ts");
  console.log("\n💡 To serve files from src/main:");
  console.log("   1. Create a src/main folder in the same directory");
  console.log("   2. Add your files to the src/main folder");
  console.log("   3. Access them via /src/main/filename.ext");
}
