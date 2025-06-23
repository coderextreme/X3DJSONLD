import http.server
import ssl

# Generate a self-signed certificate and key (for testing purposes only, in production use a certificate from a trusted CA)
# openssl req -x509 -nodes -days 365 -newkey rsa:2048 -keyout key.pem -out cert.pem

# Define the server address and port
server_address = ('localhost', 3000) # Listen on all interfaces, port 4443

# Create an HTTP request handler
httpd = http.server.HTTPServer(server_address, http.server.SimpleHTTPRequestHandler)

# Load the SSL certificate and key
context = ssl.SSLContext(ssl.PROTOCOL_TLS_SERVER)
context.load_cert_chain(certfile="cert.pem", keyfile="key.pem")

# Wrap the server's socket with SSL
httpd.socket = context.wrap_socket(httpd.socket, server_side=True)

print(f"Server started at https://{server_address[0]}:{server_address[1]}")

# Start the server
httpd.serve_forever()
