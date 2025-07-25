import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("ArtDecoPrototypes.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("David Roussel")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("translator")
meta5.setContent("James Harney, Don Brutzman NPS")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("created")
meta6.setContent("7 April 2002")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("20 October 2019")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("http://vrmlstuff.free.fr/materials")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("subject")
meta9.setContent("Universal Media Material Library")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("identifier")
meta10.setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("generator")
meta11.setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("license")
meta12.setContent("../license.html")

head1.addMeta(meta12)

X3D0.setHead(head1)
Scene13 = x3d.Scene()
WorldInfo14 = x3d.WorldInfo()
WorldInfo14.setTitle("ArtDecoPrototypes.x3d")

Scene13.addChild(WorldInfo14)
ProtoDeclare15 = x3d.ProtoDeclare()
ProtoDeclare15.setName("ArtDeco00")
ProtoDeclare15.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare15.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody16 = x3d.ProtoBody()
Material17 = x3d.Material()
Material17.setAmbientIntensity(0.25)
Material17.setDiffuseColor(x3d.doubleToFloat([0.282435,0.085159,0.134462]))
Material17.setShininess(0.127273)
Material17.setSpecularColor(x3d.doubleToFloat([0.276305,0.11431,0.139857]))

ProtoBody16.addChild(Material17)

ProtoDeclare15.setProtoBody(ProtoBody16)

Scene13.addChild(ProtoDeclare15)
ProtoDeclare18 = x3d.ProtoDeclare()
ProtoDeclare18.setName("ArtDeco01")
ProtoDeclare18.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare18.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody19 = x3d.ProtoBody()
Material20 = x3d.Material()
Material20.setAmbientIntensity(0.254777)
Material20.setDiffuseColor(x3d.doubleToFloat([0.685208,0.134679,0.332385]))
Material20.setShininess(0.071429)
Material20.setSpecularColor(x3d.doubleToFloat([0.122449,0.050035,0.050035]))

ProtoBody19.addChild(Material20)

ProtoDeclare18.setProtoBody(ProtoBody19)

Scene13.addChild(ProtoDeclare18)
ProtoDeclare21 = x3d.ProtoDeclare()
ProtoDeclare21.setName("ArtDeco02")
ProtoDeclare21.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare21.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")

ProtoDeclare21.addComments(x3d.CommentsBlock('''computed conversion ambientIntensity=1.745282, normalized to 1.0'''))
ProtoBody22 = x3d.ProtoBody()
Material23 = x3d.Material()
Material23.setAmbientIntensity(1)
Material23.setDiffuseColor(x3d.doubleToFloat([0.536861,0.0529,0.245479]))
Material23.setShininess(0.832432)
Material23.setSpecularColor(x3d.doubleToFloat([0.805292,0.765198,0.747416]))

ProtoBody22.addChild(Material23)

ProtoDeclare21.setProtoBody(ProtoBody22)

Scene13.addChild(ProtoDeclare21)
ProtoDeclare24 = x3d.ProtoDeclare()
ProtoDeclare24.setName("ArtDeco03")
ProtoDeclare24.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare24.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody25 = x3d.ProtoBody()
Material26 = x3d.Material()
Material26.setAmbientIntensity(0.248649)
Material26.setDiffuseColor(x3d.doubleToFloat([1,0.452381,0.40339]))
Material26.setShininess(0.902703)
Material26.setSpecularColor(x3d.doubleToFloat([0.686486,0.396903,0.419275]))

ProtoBody25.addChild(Material26)

ProtoDeclare24.setProtoBody(ProtoBody25)

Scene13.addChild(ProtoDeclare24)
ProtoDeclare27 = x3d.ProtoDeclare()
ProtoDeclare27.setName("ArtDeco04")
ProtoDeclare27.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare27.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody28 = x3d.ProtoBody()
Material29 = x3d.Material()
Material29.setAmbientIntensity(0.25)
Material29.setDiffuseColor(x3d.doubleToFloat([0.748016,0.298362,0.342624]))
Material29.setShininess(0.69697)
Material29.setSpecularColor(x3d.doubleToFloat([0.345455,0.345455,0.345455]))

ProtoBody28.addChild(Material29)

ProtoDeclare27.setProtoBody(ProtoBody28)

Scene13.addChild(ProtoDeclare27)
ProtoDeclare30 = x3d.ProtoDeclare()
ProtoDeclare30.setName("ArtDeco05")
ProtoDeclare30.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare30.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody31 = x3d.ProtoBody()
Material32 = x3d.Material()
Material32.setAmbientIntensity(0.24359)
Material32.setDiffuseColor(x3d.doubleToFloat([0.945455,0.318988,0.321717]))
Material32.setShininess(0.018182)
Material32.setSpecularColor(x3d.doubleToFloat([0.072727,0.021705,0.010732]))

ProtoBody31.addChild(Material32)

ProtoDeclare30.setProtoBody(ProtoBody31)

Scene13.addChild(ProtoDeclare30)
ProtoDeclare33 = x3d.ProtoDeclare()
ProtoDeclare33.setName("ArtDeco06")
ProtoDeclare33.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare33.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody34 = x3d.ProtoBody()
Material35 = x3d.Material()
Material35.setAmbientIntensity(0.25946)
Material35.setDiffuseColor(x3d.doubleToFloat([0.228655,0.195513,0.425484]))
Material35.setShininess(0.542553)
Material35.setSpecularColor(x3d.doubleToFloat([0.324504,0.404255,0.404255]))

ProtoBody34.addChild(Material35)

ProtoDeclare33.setProtoBody(ProtoBody34)

Scene13.addChild(ProtoDeclare33)
ProtoDeclare36 = x3d.ProtoDeclare()
ProtoDeclare36.setName("ArtDeco07")
ProtoDeclare36.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare36.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody37 = x3d.ProtoBody()
Material38 = x3d.Material()
Material38.setAmbientIntensity(0.333333)
Material38.setDiffuseColor(x3d.doubleToFloat([0.200348,0.100857,0.320833]))
Material38.setShininess(0.133333)
Material38.setSpecularColor(x3d.doubleToFloat([0.311358,0.387879,0.387879]))

ProtoBody37.addChild(Material38)

ProtoDeclare36.setProtoBody(ProtoBody37)

Scene13.addChild(ProtoDeclare36)
ProtoDeclare39 = x3d.ProtoDeclare()
ProtoDeclare39.setName("ArtDeco08")
ProtoDeclare39.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare39.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody40 = x3d.ProtoBody()
Material41 = x3d.Material()
Material41.setAmbientIntensity(0.242424)
Material41.setDiffuseColor(x3d.doubleToFloat([0.330519,0.3389,0.6]))
Material41.setShininess(0.787879)
Material41.setSpecularColor(x3d.doubleToFloat([0.290909,0.290909,0.290909]))

ProtoBody40.addChild(Material41)

ProtoDeclare39.setProtoBody(ProtoBody40)

Scene13.addChild(ProtoDeclare39)
ProtoDeclare42 = x3d.ProtoDeclare()
ProtoDeclare42.setName("ArtDeco09")
ProtoDeclare42.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare42.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody43 = x3d.ProtoBody()
Material44 = x3d.Material()
Material44.setAmbientIntensity(0.333333)
Material44.setDiffuseColor(x3d.doubleToFloat([0.237059,0.096273,0.215625]))
Material44.setShininess(0.133333)
Material44.setSpecularColor(x3d.doubleToFloat([0.311358,0.387879,0.387879]))

ProtoBody43.addChild(Material44)

ProtoDeclare42.setProtoBody(ProtoBody43)

Scene13.addChild(ProtoDeclare42)
ProtoDeclare45 = x3d.ProtoDeclare()
ProtoDeclare45.setName("ArtDeco10")
ProtoDeclare45.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare45.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody46 = x3d.ProtoBody()
Material47 = x3d.Material()
Material47.setAmbientIntensity(0.242425)
Material47.setDiffuseColor(x3d.doubleToFloat([0.304,0.09025,0.207364]))
Material47.setShininess(0.072727)
Material47.setSpecularColor(x3d.doubleToFloat([0.6665,0.579046,0.830303]))

ProtoBody46.addChild(Material47)

ProtoDeclare45.setProtoBody(ProtoBody46)

Scene13.addChild(ProtoDeclare45)
ProtoDeclare48 = x3d.ProtoDeclare()
ProtoDeclare48.setName("ArtDeco11")
ProtoDeclare48.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare48.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody49 = x3d.ProtoBody()
Material50 = x3d.Material()
Material50.setAmbientIntensity(0.258928)
Material50.setDiffuseColor(x3d.doubleToFloat([0.335631,0.207672,0.238304]))
Material50.setEmissiveColor(x3d.doubleToFloat([0.010638,0.010638,0.010638]))
Material50.setShininess(0.021277)
Material50.setSpecularColor(x3d.doubleToFloat([0.198631,0.075403,0.138803]))

ProtoBody49.addChild(Material50)

ProtoDeclare48.setProtoBody(ProtoBody49)

Scene13.addChild(ProtoDeclare48)
ProtoDeclare51 = x3d.ProtoDeclare()
ProtoDeclare51.setName("ArtDeco12")
ProtoDeclare51.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare51.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody52 = x3d.ProtoBody()
Material53 = x3d.Material()
Material53.setAmbientIntensity(0.240838)
Material53.setDiffuseColor(x3d.doubleToFloat([0.876873,0.14715,0.00856]))
Material53.setShininess(0.076531)
Material53.setSpecularColor(x3d.doubleToFloat([0.193878,0.029416,0.029416]))

ProtoBody52.addChild(Material53)

ProtoDeclare51.setProtoBody(ProtoBody52)

Scene13.addChild(ProtoDeclare51)
ProtoDeclare54 = x3d.ProtoDeclare()
ProtoDeclare54.setName("ArtDeco13")
ProtoDeclare54.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare54.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody55 = x3d.ProtoBody()
Material56 = x3d.Material()
Material56.setAmbientIntensity(0.25)
Material56.setDiffuseColor(x3d.doubleToFloat([0.794445,0.249425,0]))
Material56.setShininess(0.551515)
Material56.setSpecularColor(x3d.doubleToFloat([0.62904,0.194211,0.033663]))

ProtoBody55.addChild(Material56)

ProtoDeclare54.setProtoBody(ProtoBody55)

Scene13.addChild(ProtoDeclare54)
ProtoDeclare57 = x3d.ProtoDeclare()
ProtoDeclare57.setName("ArtDeco14")
ProtoDeclare57.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare57.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody58 = x3d.ProtoBody()
Material59 = x3d.Material()
Material59.setAmbientIntensity(0.25)
Material59.setDiffuseColor(x3d.doubleToFloat([0.510609,0.17264,0.059872]))
Material59.setShininess(0.933333)
Material59.setSpecularColor(x3d.doubleToFloat([0.533333,0.533333,0.533333]))

ProtoBody58.addChild(Material59)

ProtoDeclare57.setProtoBody(ProtoBody58)

Scene13.addChild(ProtoDeclare57)
ProtoDeclare60 = x3d.ProtoDeclare()
ProtoDeclare60.setName("ArtDeco15")
ProtoDeclare60.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare60.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody61 = x3d.ProtoBody()
Material62 = x3d.Material()
Material62.setAmbientIntensity(0.255814)
Material62.setDiffuseColor(x3d.doubleToFloat([0.914894,0.444404,0.348914]))
Material62.setShininess(0.12766)
Material62.setSpecularColor(x3d.doubleToFloat([0.345745,0.143066,0]))

ProtoBody61.addChild(Material62)

ProtoDeclare60.setProtoBody(ProtoBody61)

Scene13.addChild(ProtoDeclare60)
ProtoDeclare63 = x3d.ProtoDeclare()
ProtoDeclare63.setName("ArtDeco16")
ProtoDeclare63.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare63.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody64 = x3d.ProtoBody()
Material65 = x3d.Material()
Material65.setAmbientIntensity(0.240838)
Material65.setDiffuseColor(x3d.doubleToFloat([0.876873,0.323147,0.199564]))
Material65.setShininess(0.80102)
Material65.setSpecularColor(x3d.doubleToFloat([0.816327,0.278677,0.278677]))

ProtoBody64.addChild(Material65)

ProtoDeclare63.setProtoBody(ProtoBody64)

Scene13.addChild(ProtoDeclare63)
ProtoDeclare66 = x3d.ProtoDeclare()
ProtoDeclare66.setName("ArtDeco17")
ProtoDeclare66.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare66.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody67 = x3d.ProtoBody()
Material68 = x3d.Material()
Material68.setAmbientIntensity(0.242424)
Material68.setDiffuseColor(x3d.doubleToFloat([0.515625,0.315496,0.252441]))
Material68.setShininess(0.933333)
Material68.setSpecularColor(x3d.doubleToFloat([0.533333,0.533333,0.533333]))

ProtoBody67.addChild(Material68)

ProtoDeclare66.setProtoBody(ProtoBody67)

Scene13.addChild(ProtoDeclare66)
ProtoDeclare69 = x3d.ProtoDeclare()
ProtoDeclare69.setName("ArtDeco18")
ProtoDeclare69.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare69.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody70 = x3d.ProtoBody()
Material71 = x3d.Material()
Material71.setAmbientIntensity(0.264706)
Material71.setDiffuseColor(x3d.doubleToFloat([0,0.346939,0.253624]))
Material71.setShininess(0.316327)
Material71.setSpecularColor(x3d.doubleToFloat([0,0.311074,0.357143]))

ProtoBody70.addChild(Material71)

ProtoDeclare69.setProtoBody(ProtoBody70)

Scene13.addChild(ProtoDeclare69)
ProtoDeclare72 = x3d.ProtoDeclare()
ProtoDeclare72.setName("ArtDeco19")
ProtoDeclare72.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare72.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody73 = x3d.ProtoBody()
Material74 = x3d.Material()
Material74.setAmbientIntensity(0.259259)
Material74.setDiffuseColor(x3d.doubleToFloat([0,0.251004,0.239248]))
Material74.setShininess(0.060606)
Material74.setSpecularColor(x3d.doubleToFloat([0.177935,0.249369,0.229278]))

ProtoBody73.addChild(Material74)

ProtoDeclare72.setProtoBody(ProtoBody73)

Scene13.addChild(ProtoDeclare72)
ProtoDeclare75 = x3d.ProtoDeclare()
ProtoDeclare75.setName("ArtDeco20")
ProtoDeclare75.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare75.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody76 = x3d.ProtoBody()
Material77 = x3d.Material()
Material77.setAmbientIntensity(0.24)
Material77.setDiffuseColor(x3d.doubleToFloat([0.228298,0.385771,0.186794]))
Material77.setShininess(0.393939)
Material77.setSpecularColor(x3d.doubleToFloat([0.200464,0.300145,0.293518]))

ProtoBody76.addChild(Material77)

ProtoDeclare75.setProtoBody(ProtoBody76)

Scene13.addChild(ProtoDeclare75)
ProtoDeclare78 = x3d.ProtoDeclare()
ProtoDeclare78.setName("ArtDeco21")
ProtoDeclare78.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare78.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody79 = x3d.ProtoBody()
Material80 = x3d.Material()
Material80.setAmbientIntensity(0.25)
Material80.setDiffuseColor(x3d.doubleToFloat([0.315389,0.544,0.258052]))
Material80.setShininess(0.509389)
Material80.setSpecularColor(x3d.doubleToFloat([0.456,0.456,0.456]))

ProtoBody79.addChild(Material80)

ProtoDeclare78.setProtoBody(ProtoBody79)

Scene13.addChild(ProtoDeclare78)
ProtoDeclare81 = x3d.ProtoDeclare()
ProtoDeclare81.setName("ArtDeco22")
ProtoDeclare81.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare81.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody82 = x3d.ProtoBody()
Material83 = x3d.Material()
Material83.setAmbientIntensity(0.246032)
Material83.setDiffuseColor(x3d.doubleToFloat([0.251104,0.312562,0.201724]))
Material83.setShininess(0.086735)
Material83.setSpecularColor(x3d.doubleToFloat([0.209184,0.113842,0.111328]))

ProtoBody82.addChild(Material83)

ProtoDeclare81.setProtoBody(ProtoBody82)

Scene13.addChild(ProtoDeclare81)
ProtoDeclare84 = x3d.ProtoDeclare()
ProtoDeclare84.setName("ArtDeco23")
ProtoDeclare84.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare84.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody85 = x3d.ProtoBody()
Material86 = x3d.Material()
Material86.setAmbientIntensity(0.242424)
Material86.setDiffuseColor(x3d.doubleToFloat([0.392348,0.456,0.417708]))
Material86.setShininess(0.933333)
Material86.setSpecularColor(x3d.doubleToFloat([0.533333,0.533333,0.533333]))

ProtoBody85.addChild(Material86)

ProtoDeclare84.setProtoBody(ProtoBody85)

Scene13.addChild(ProtoDeclare84)
ProtoDeclare87 = x3d.ProtoDeclare()
ProtoDeclare87.setName("ArtDeco24")
ProtoDeclare87.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare87.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody88 = x3d.ProtoBody()
Material89 = x3d.Material()
Material89.setAmbientIntensity(0.253968)
Material89.setDiffuseColor(x3d.doubleToFloat([1,0.854922,0]))
Material89.setShininess(1)
Material89.setSpecularColor(x3d.doubleToFloat([0.872449,0.247119,0.254214]))

ProtoBody88.addChild(Material89)

ProtoDeclare87.setProtoBody(ProtoBody88)

Scene13.addChild(ProtoDeclare87)
ProtoDeclare90 = x3d.ProtoDeclare()
ProtoDeclare90.setName("ArtDeco25")
ProtoDeclare90.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare90.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody91 = x3d.ProtoBody()
Material92 = x3d.Material()
Material92.setAmbientIntensity(0.25641)
Material92.setDiffuseColor(x3d.doubleToFloat([0.795918,0.505869,0.093315]))
Material92.setShininess(0.397959)
Material92.setSpecularColor(x3d.doubleToFloat([0.923469,0.428866,0.006369]))

ProtoBody91.addChild(Material92)

ProtoDeclare90.setProtoBody(ProtoBody91)

Scene13.addChild(ProtoDeclare90)
ProtoDeclare93 = x3d.ProtoDeclare()
ProtoDeclare93.setName("ArtDeco26")
ProtoDeclare93.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare93.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")

ProtoDeclare93.addComments(x3d.CommentsBlock('''computed conversion ambientIntensity=2.226234, normalized to 1.0'''))
ProtoBody94 = x3d.ProtoBody()
Material95 = x3d.Material()
Material95.setAmbientIntensity(1)
Material95.setDiffuseColor(x3d.doubleToFloat([0.331633,0.296582,0.279057]))
Material95.setShininess(0.096939)
Material95.setSpecularColor(x3d.doubleToFloat([0.311224,0.25183,0.133042]))

ProtoBody94.addChild(Material95)

ProtoDeclare93.setProtoBody(ProtoBody94)

Scene13.addChild(ProtoDeclare93)
ProtoDeclare96 = x3d.ProtoDeclare()
ProtoDeclare96.setName("ArtDeco27")
ProtoDeclare96.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare96.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody97 = x3d.ProtoBody()
Material98 = x3d.Material()
Material98.setAmbientIntensity(0.263158)
Material98.setDiffuseColor(x3d.doubleToFloat([0.345455,0.163262,0.122622]))
Material98.setShininess(0.048649)
Material98.setSpecularColor(x3d.doubleToFloat([0.212121,0.107475,0]))

ProtoBody97.addChild(Material98)

ProtoDeclare96.setProtoBody(ProtoBody97)

Scene13.addChild(ProtoDeclare96)
ProtoDeclare99 = x3d.ProtoDeclare()
ProtoDeclare99.setName("ArtDeco28")
ProtoDeclare99.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare99.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody100 = x3d.ProtoBody()
Material101 = x3d.Material()
Material101.setAmbientIntensity(0.240506)
Material101.setDiffuseColor(x3d.doubleToFloat([0.277281,0.104336,0.0799]))
Material101.setShininess(0.09697)
Material101.setSpecularColor(x3d.doubleToFloat([0.305587,0.141916,0.270572]))

ProtoBody100.addChild(Material101)

ProtoDeclare99.setProtoBody(ProtoBody100)

Scene13.addChild(ProtoDeclare99)
ProtoDeclare102 = x3d.ProtoDeclare()
ProtoDeclare102.setName("ArtDeco29")
ProtoDeclare102.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare102.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody103 = x3d.ProtoBody()
Material104 = x3d.Material()
Material104.setAmbientIntensity(0.215686)
Material104.setDiffuseColor(x3d.doubleToFloat([0.087034,0.025888,0]))
Material104.setShininess(0.045918)
Material104.setSpecularColor(x3d.doubleToFloat([0.224138,0.104091,0.104091]))

ProtoBody103.addChild(Material104)

ProtoDeclare102.setProtoBody(ProtoBody103)

Scene13.addChild(ProtoDeclare102)
ProtoDeclare105 = x3d.ProtoDeclare()
ProtoDeclare105.setName("ArtDeco30")
ProtoDeclare105.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare105.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody106 = x3d.ProtoBody()
Material107 = x3d.Material()
Material107.setAmbientIntensity(0)
Material107.setDiffuseColor(x3d.doubleToFloat([0,0,0]))
Material107.setShininess(0.081633)
Material107.setSpecularColor(x3d.doubleToFloat([0.293243,0.297387,0.290421]))

ProtoBody106.addChild(Material107)

ProtoDeclare105.setProtoBody(ProtoBody106)

Scene13.addChild(ProtoDeclare105)
ProtoDeclare108 = x3d.ProtoDeclare()
ProtoDeclare108.setName("ArtDeco31")
ProtoDeclare108.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare108.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody109 = x3d.ProtoBody()
Material110 = x3d.Material()
Material110.setAmbientIntensity(0.25641)
Material110.setDiffuseColor(x3d.doubleToFloat([0.236364,0.236364,0.236364]))
Material110.setShininess(0.054546)
Material110.setSpecularColor(x3d.doubleToFloat([0.29697,0.245839,0.295962]))

ProtoBody109.addChild(Material110)

ProtoDeclare108.setProtoBody(ProtoBody109)

Scene13.addChild(ProtoDeclare108)
ProtoDeclare111 = x3d.ProtoDeclare()
ProtoDeclare111.setName("ArtDeco32")
ProtoDeclare111.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare111.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody112 = x3d.ProtoBody()
Material113 = x3d.Material()
Material113.setAmbientIntensity(0.242424)
Material113.setDiffuseColor(x3d.doubleToFloat([0.38087,0.382957,0.417708]))
Material113.setShininess(0.933333)
Material113.setSpecularColor(x3d.doubleToFloat([0.533333,0.533333,0.533333]))

ProtoBody112.addChild(Material113)

ProtoDeclare111.setProtoBody(ProtoBody112)

Scene13.addChild(ProtoDeclare111)
ProtoDeclare114 = x3d.ProtoDeclare()
ProtoDeclare114.setName("ArtDeco33")
ProtoDeclare114.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare114.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody115 = x3d.ProtoBody()
Material116 = x3d.Material()
Material116.setAmbientIntensity(0.230089)
Material116.setDiffuseColor(x3d.doubleToFloat([0.610811,0.610811,0.610811]))
Material116.setShininess(0.897297)
Material116.setSpecularColor(x3d.doubleToFloat([0.767568,0.756757,0.764964]))

ProtoBody115.addChild(Material116)

ProtoDeclare114.setProtoBody(ProtoBody115)

Scene13.addChild(ProtoDeclare114)
ProtoDeclare117 = x3d.ProtoDeclare()
ProtoDeclare117.setName("ArtDeco34")
ProtoDeclare117.setAppinfo("UniversalMediaMaterials prototype")
ProtoDeclare117.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ProtoBody118 = x3d.ProtoBody()
Material119 = x3d.Material()
Material119.setAmbientIntensity(0.25)
Material119.setShininess(0)
Material119.setSpecularColor(x3d.doubleToFloat([0.2,0.2,0.2]))

ProtoBody118.addChild(Material119)

ProtoDeclare117.setProtoBody(ProtoBody118)

Scene13.addChild(ProtoDeclare117)
Anchor120 = x3d.Anchor()
Anchor120.setDescription("ArtDecoPrototypeExample")
Anchor120.setParameter(["target=_blank"])
Anchor120.setUrl(["../data/ArtDecoExamples.json","../data/ArtDecoExamples.x3d","ArtDecoExamples.json","ArtDecoExamples.x3d"])
Shape121 = x3d.Shape()
Appearance122 = x3d.Appearance()
Material123 = x3d.Material()
Material123.setDiffuseColor(x3d.doubleToFloat([0.8,0.4,0]))

Appearance122.setMaterial(Material123)

Shape121.setAppearance(Appearance122)
Text124 = x3d.Text()
Text124.setString(["ArtDecoExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","ArtDecoExamples.x3d"])
FontStyle125 = x3d.FontStyle()
FontStyle125.setJustify(["MIDDLE","MIDDLE"])
FontStyle125.setSize(0.8)

Text124.setFontStyle(FontStyle125)

Shape121.setGeometry(Text124)

Anchor120.addChild(Shape121)

Scene13.addChild(Anchor120)

X3D0.setScene(Scene13)
X3D0.toFileX3D("../data/ArtDecoPrototypes.new.graalpy.x3d")
X3D0.toFileJSON("../data/ArtDecoPrototypes.new.graalpy.json")
