#Generate a OR Code Using Python



import qrcode
data = "ASGEN PHARMACEUTICAL"

qr = qrcode.make(data)
type(qr)
qr.save("qrcode.png")

print("QR Code Generated Successfully!")