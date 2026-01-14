print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "ArtDecoPrototypes.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "David Roussel"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "translator"
meta5.content = "James Harney, Don Brutzman NPS"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "7 April 2002"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "20 October 2019"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "http://vrmlstuff.free.fr/materials"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "subject"
meta9.content = "Universal Media Material Library"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "identifier"
meta10.content = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "generator"
meta11.content = "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "license"
meta12.content = "../license.html"

head1.children.append(meta12)

X3D0.head = head1
Scene13 = x3d.Scene()
WorldInfo14 = x3d.WorldInfo()
WorldInfo14.title = "ArtDecoPrototypes.x3d"

Scene13.children.append(WorldInfo14)
ProtoDeclare15 = x3d.ProtoDeclare()
ProtoDeclare15.name = "ArtDeco00"
ProtoDeclare15.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare15.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody16 = x3d.ProtoBody()
Material17 = x3d.Material()
Material17.ambientIntensity = 0.25
Material17.diffuseColor = [0.282435,0.085159,0.134462]
Material17.shininess = 0.127273
Material17.specularColor = [0.276305,0.11431,0.139857]

ProtoBody16.children.append(Material17)

ProtoDeclare15.ProtoBody = ProtoBody16

Scene13.children.append(ProtoDeclare15)
ProtoDeclare18 = x3d.ProtoDeclare()
ProtoDeclare18.name = "ArtDeco01"
ProtoDeclare18.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare18.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody19 = x3d.ProtoBody()
Material20 = x3d.Material()
Material20.ambientIntensity = 0.254777
Material20.diffuseColor = [0.685208,0.134679,0.332385]
Material20.shininess = 0.071429
Material20.specularColor = [0.122449,0.050035,0.050035]

ProtoBody19.children.append(Material20)

ProtoDeclare18.ProtoBody = ProtoBody19

Scene13.children.append(ProtoDeclare18)
ProtoDeclare21 = x3d.ProtoDeclare()
ProtoDeclare21.name = "ArtDeco02"
ProtoDeclare21.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare21.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
"""computed conversion ambientIntensity=1.745282, normalized to 1.0"""
ProtoBody22 = x3d.ProtoBody()
Material23 = x3d.Material()
Material23.ambientIntensity = 1
Material23.diffuseColor = [0.536861,0.0529,0.245479]
Material23.shininess = 0.832432
Material23.specularColor = [0.805292,0.765198,0.747416]

ProtoBody22.children.append(Material23)

ProtoDeclare21.ProtoBody = ProtoBody22

Scene13.children.append(ProtoDeclare21)
ProtoDeclare24 = x3d.ProtoDeclare()
ProtoDeclare24.name = "ArtDeco03"
ProtoDeclare24.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare24.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody25 = x3d.ProtoBody()
Material26 = x3d.Material()
Material26.ambientIntensity = 0.248649
Material26.diffuseColor = [1,0.452381,0.40339]
Material26.shininess = 0.902703
Material26.specularColor = [0.686486,0.396903,0.419275]

ProtoBody25.children.append(Material26)

ProtoDeclare24.ProtoBody = ProtoBody25

Scene13.children.append(ProtoDeclare24)
ProtoDeclare27 = x3d.ProtoDeclare()
ProtoDeclare27.name = "ArtDeco04"
ProtoDeclare27.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare27.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody28 = x3d.ProtoBody()
Material29 = x3d.Material()
Material29.ambientIntensity = 0.25
Material29.diffuseColor = [0.748016,0.298362,0.342624]
Material29.shininess = 0.69697
Material29.specularColor = [0.345455,0.345455,0.345455]

ProtoBody28.children.append(Material29)

ProtoDeclare27.ProtoBody = ProtoBody28

Scene13.children.append(ProtoDeclare27)
ProtoDeclare30 = x3d.ProtoDeclare()
ProtoDeclare30.name = "ArtDeco05"
ProtoDeclare30.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare30.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody31 = x3d.ProtoBody()
Material32 = x3d.Material()
Material32.ambientIntensity = 0.24359
Material32.diffuseColor = [0.945455,0.318988,0.321717]
Material32.shininess = 0.018182
Material32.specularColor = [0.072727,0.021705,0.010732]

ProtoBody31.children.append(Material32)

ProtoDeclare30.ProtoBody = ProtoBody31

Scene13.children.append(ProtoDeclare30)
ProtoDeclare33 = x3d.ProtoDeclare()
ProtoDeclare33.name = "ArtDeco06"
ProtoDeclare33.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare33.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody34 = x3d.ProtoBody()
Material35 = x3d.Material()
Material35.ambientIntensity = 0.25946
Material35.diffuseColor = [0.228655,0.195513,0.425484]
Material35.shininess = 0.542553
Material35.specularColor = [0.324504,0.404255,0.404255]

ProtoBody34.children.append(Material35)

ProtoDeclare33.ProtoBody = ProtoBody34

Scene13.children.append(ProtoDeclare33)
ProtoDeclare36 = x3d.ProtoDeclare()
ProtoDeclare36.name = "ArtDeco07"
ProtoDeclare36.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare36.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody37 = x3d.ProtoBody()
Material38 = x3d.Material()
Material38.ambientIntensity = 0.333333
Material38.diffuseColor = [0.200348,0.100857,0.320833]
Material38.shininess = 0.133333
Material38.specularColor = [0.311358,0.387879,0.387879]

ProtoBody37.children.append(Material38)

ProtoDeclare36.ProtoBody = ProtoBody37

Scene13.children.append(ProtoDeclare36)
ProtoDeclare39 = x3d.ProtoDeclare()
ProtoDeclare39.name = "ArtDeco08"
ProtoDeclare39.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare39.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody40 = x3d.ProtoBody()
Material41 = x3d.Material()
Material41.ambientIntensity = 0.242424
Material41.diffuseColor = [0.330519,0.3389,0.6]
Material41.shininess = 0.787879
Material41.specularColor = [0.290909,0.290909,0.290909]

ProtoBody40.children.append(Material41)

ProtoDeclare39.ProtoBody = ProtoBody40

Scene13.children.append(ProtoDeclare39)
ProtoDeclare42 = x3d.ProtoDeclare()
ProtoDeclare42.name = "ArtDeco09"
ProtoDeclare42.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare42.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody43 = x3d.ProtoBody()
Material44 = x3d.Material()
Material44.ambientIntensity = 0.333333
Material44.diffuseColor = [0.237059,0.096273,0.215625]
Material44.shininess = 0.133333
Material44.specularColor = [0.311358,0.387879,0.387879]

ProtoBody43.children.append(Material44)

ProtoDeclare42.ProtoBody = ProtoBody43

Scene13.children.append(ProtoDeclare42)
ProtoDeclare45 = x3d.ProtoDeclare()
ProtoDeclare45.name = "ArtDeco10"
ProtoDeclare45.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare45.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody46 = x3d.ProtoBody()
Material47 = x3d.Material()
Material47.ambientIntensity = 0.242425
Material47.diffuseColor = [0.304,0.09025,0.207364]
Material47.shininess = 0.072727
Material47.specularColor = [0.6665,0.579046,0.830303]

ProtoBody46.children.append(Material47)

ProtoDeclare45.ProtoBody = ProtoBody46

Scene13.children.append(ProtoDeclare45)
ProtoDeclare48 = x3d.ProtoDeclare()
ProtoDeclare48.name = "ArtDeco11"
ProtoDeclare48.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare48.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody49 = x3d.ProtoBody()
Material50 = x3d.Material()
Material50.ambientIntensity = 0.258928
Material50.diffuseColor = [0.335631,0.207672,0.238304]
Material50.emissiveColor = [0.010638,0.010638,0.010638]
Material50.shininess = 0.021277
Material50.specularColor = [0.198631,0.075403,0.138803]

ProtoBody49.children.append(Material50)

ProtoDeclare48.ProtoBody = ProtoBody49

Scene13.children.append(ProtoDeclare48)
ProtoDeclare51 = x3d.ProtoDeclare()
ProtoDeclare51.name = "ArtDeco12"
ProtoDeclare51.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare51.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody52 = x3d.ProtoBody()
Material53 = x3d.Material()
Material53.ambientIntensity = 0.240838
Material53.diffuseColor = [0.876873,0.14715,0.00856]
Material53.shininess = 0.076531
Material53.specularColor = [0.193878,0.029416,0.029416]

ProtoBody52.children.append(Material53)

ProtoDeclare51.ProtoBody = ProtoBody52

Scene13.children.append(ProtoDeclare51)
ProtoDeclare54 = x3d.ProtoDeclare()
ProtoDeclare54.name = "ArtDeco13"
ProtoDeclare54.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare54.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody55 = x3d.ProtoBody()
Material56 = x3d.Material()
Material56.ambientIntensity = 0.25
Material56.diffuseColor = [0.794445,0.249425,0]
Material56.shininess = 0.551515
Material56.specularColor = [0.62904,0.194211,0.033663]

ProtoBody55.children.append(Material56)

ProtoDeclare54.ProtoBody = ProtoBody55

Scene13.children.append(ProtoDeclare54)
ProtoDeclare57 = x3d.ProtoDeclare()
ProtoDeclare57.name = "ArtDeco14"
ProtoDeclare57.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare57.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody58 = x3d.ProtoBody()
Material59 = x3d.Material()
Material59.ambientIntensity = 0.25
Material59.diffuseColor = [0.510609,0.17264,0.059872]
Material59.shininess = 0.933333
Material59.specularColor = [0.533333,0.533333,0.533333]

ProtoBody58.children.append(Material59)

ProtoDeclare57.ProtoBody = ProtoBody58

Scene13.children.append(ProtoDeclare57)
ProtoDeclare60 = x3d.ProtoDeclare()
ProtoDeclare60.name = "ArtDeco15"
ProtoDeclare60.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare60.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody61 = x3d.ProtoBody()
Material62 = x3d.Material()
Material62.ambientIntensity = 0.255814
Material62.diffuseColor = [0.914894,0.444404,0.348914]
Material62.shininess = 0.12766
Material62.specularColor = [0.345745,0.143066,0]

ProtoBody61.children.append(Material62)

ProtoDeclare60.ProtoBody = ProtoBody61

Scene13.children.append(ProtoDeclare60)
ProtoDeclare63 = x3d.ProtoDeclare()
ProtoDeclare63.name = "ArtDeco16"
ProtoDeclare63.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare63.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody64 = x3d.ProtoBody()
Material65 = x3d.Material()
Material65.ambientIntensity = 0.240838
Material65.diffuseColor = [0.876873,0.323147,0.199564]
Material65.shininess = 0.80102
Material65.specularColor = [0.816327,0.278677,0.278677]

ProtoBody64.children.append(Material65)

ProtoDeclare63.ProtoBody = ProtoBody64

Scene13.children.append(ProtoDeclare63)
ProtoDeclare66 = x3d.ProtoDeclare()
ProtoDeclare66.name = "ArtDeco17"
ProtoDeclare66.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare66.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody67 = x3d.ProtoBody()
Material68 = x3d.Material()
Material68.ambientIntensity = 0.242424
Material68.diffuseColor = [0.515625,0.315496,0.252441]
Material68.shininess = 0.933333
Material68.specularColor = [0.533333,0.533333,0.533333]

ProtoBody67.children.append(Material68)

ProtoDeclare66.ProtoBody = ProtoBody67

Scene13.children.append(ProtoDeclare66)
ProtoDeclare69 = x3d.ProtoDeclare()
ProtoDeclare69.name = "ArtDeco18"
ProtoDeclare69.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare69.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody70 = x3d.ProtoBody()
Material71 = x3d.Material()
Material71.ambientIntensity = 0.264706
Material71.diffuseColor = [0,0.346939,0.253624]
Material71.shininess = 0.316327
Material71.specularColor = [0,0.311074,0.357143]

ProtoBody70.children.append(Material71)

ProtoDeclare69.ProtoBody = ProtoBody70

Scene13.children.append(ProtoDeclare69)
ProtoDeclare72 = x3d.ProtoDeclare()
ProtoDeclare72.name = "ArtDeco19"
ProtoDeclare72.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare72.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody73 = x3d.ProtoBody()
Material74 = x3d.Material()
Material74.ambientIntensity = 0.259259
Material74.diffuseColor = [0,0.251004,0.239248]
Material74.shininess = 0.060606
Material74.specularColor = [0.177935,0.249369,0.229278]

ProtoBody73.children.append(Material74)

ProtoDeclare72.ProtoBody = ProtoBody73

Scene13.children.append(ProtoDeclare72)
ProtoDeclare75 = x3d.ProtoDeclare()
ProtoDeclare75.name = "ArtDeco20"
ProtoDeclare75.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare75.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody76 = x3d.ProtoBody()
Material77 = x3d.Material()
Material77.ambientIntensity = 0.24
Material77.diffuseColor = [0.228298,0.385771,0.186794]
Material77.shininess = 0.393939
Material77.specularColor = [0.200464,0.300145,0.293518]

ProtoBody76.children.append(Material77)

ProtoDeclare75.ProtoBody = ProtoBody76

Scene13.children.append(ProtoDeclare75)
ProtoDeclare78 = x3d.ProtoDeclare()
ProtoDeclare78.name = "ArtDeco21"
ProtoDeclare78.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare78.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody79 = x3d.ProtoBody()
Material80 = x3d.Material()
Material80.ambientIntensity = 0.25
Material80.diffuseColor = [0.315389,0.544,0.258052]
Material80.shininess = 0.509389
Material80.specularColor = [0.456,0.456,0.456]

ProtoBody79.children.append(Material80)

ProtoDeclare78.ProtoBody = ProtoBody79

Scene13.children.append(ProtoDeclare78)
ProtoDeclare81 = x3d.ProtoDeclare()
ProtoDeclare81.name = "ArtDeco22"
ProtoDeclare81.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare81.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody82 = x3d.ProtoBody()
Material83 = x3d.Material()
Material83.ambientIntensity = 0.246032
Material83.diffuseColor = [0.251104,0.312562,0.201724]
Material83.shininess = 0.086735
Material83.specularColor = [0.209184,0.113842,0.111328]

ProtoBody82.children.append(Material83)

ProtoDeclare81.ProtoBody = ProtoBody82

Scene13.children.append(ProtoDeclare81)
ProtoDeclare84 = x3d.ProtoDeclare()
ProtoDeclare84.name = "ArtDeco23"
ProtoDeclare84.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare84.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody85 = x3d.ProtoBody()
Material86 = x3d.Material()
Material86.ambientIntensity = 0.242424
Material86.diffuseColor = [0.392348,0.456,0.417708]
Material86.shininess = 0.933333
Material86.specularColor = [0.533333,0.533333,0.533333]

ProtoBody85.children.append(Material86)

ProtoDeclare84.ProtoBody = ProtoBody85

Scene13.children.append(ProtoDeclare84)
ProtoDeclare87 = x3d.ProtoDeclare()
ProtoDeclare87.name = "ArtDeco24"
ProtoDeclare87.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare87.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody88 = x3d.ProtoBody()
Material89 = x3d.Material()
Material89.ambientIntensity = 0.253968
Material89.diffuseColor = [1,0.854922,0]
Material89.shininess = 1
Material89.specularColor = [0.872449,0.247119,0.254214]

ProtoBody88.children.append(Material89)

ProtoDeclare87.ProtoBody = ProtoBody88

Scene13.children.append(ProtoDeclare87)
ProtoDeclare90 = x3d.ProtoDeclare()
ProtoDeclare90.name = "ArtDeco25"
ProtoDeclare90.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare90.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody91 = x3d.ProtoBody()
Material92 = x3d.Material()
Material92.ambientIntensity = 0.25641
Material92.diffuseColor = [0.795918,0.505869,0.093315]
Material92.shininess = 0.397959
Material92.specularColor = [0.923469,0.428866,0.006369]

ProtoBody91.children.append(Material92)

ProtoDeclare90.ProtoBody = ProtoBody91

Scene13.children.append(ProtoDeclare90)
ProtoDeclare93 = x3d.ProtoDeclare()
ProtoDeclare93.name = "ArtDeco26"
ProtoDeclare93.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare93.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
"""computed conversion ambientIntensity=2.226234, normalized to 1.0"""
ProtoBody94 = x3d.ProtoBody()
Material95 = x3d.Material()
Material95.ambientIntensity = 1
Material95.diffuseColor = [0.331633,0.296582,0.279057]
Material95.shininess = 0.096939
Material95.specularColor = [0.311224,0.25183,0.133042]

ProtoBody94.children.append(Material95)

ProtoDeclare93.ProtoBody = ProtoBody94

Scene13.children.append(ProtoDeclare93)
ProtoDeclare96 = x3d.ProtoDeclare()
ProtoDeclare96.name = "ArtDeco27"
ProtoDeclare96.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare96.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody97 = x3d.ProtoBody()
Material98 = x3d.Material()
Material98.ambientIntensity = 0.263158
Material98.diffuseColor = [0.345455,0.163262,0.122622]
Material98.shininess = 0.048649
Material98.specularColor = [0.212121,0.107475,0]

ProtoBody97.children.append(Material98)

ProtoDeclare96.ProtoBody = ProtoBody97

Scene13.children.append(ProtoDeclare96)
ProtoDeclare99 = x3d.ProtoDeclare()
ProtoDeclare99.name = "ArtDeco28"
ProtoDeclare99.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare99.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody100 = x3d.ProtoBody()
Material101 = x3d.Material()
Material101.ambientIntensity = 0.240506
Material101.diffuseColor = [0.277281,0.104336,0.0799]
Material101.shininess = 0.09697
Material101.specularColor = [0.305587,0.141916,0.270572]

ProtoBody100.children.append(Material101)

ProtoDeclare99.ProtoBody = ProtoBody100

Scene13.children.append(ProtoDeclare99)
ProtoDeclare102 = x3d.ProtoDeclare()
ProtoDeclare102.name = "ArtDeco29"
ProtoDeclare102.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare102.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody103 = x3d.ProtoBody()
Material104 = x3d.Material()
Material104.ambientIntensity = 0.215686
Material104.diffuseColor = [0.087034,0.025888,0]
Material104.shininess = 0.045918
Material104.specularColor = [0.224138,0.104091,0.104091]

ProtoBody103.children.append(Material104)

ProtoDeclare102.ProtoBody = ProtoBody103

Scene13.children.append(ProtoDeclare102)
ProtoDeclare105 = x3d.ProtoDeclare()
ProtoDeclare105.name = "ArtDeco30"
ProtoDeclare105.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare105.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody106 = x3d.ProtoBody()
Material107 = x3d.Material()
Material107.ambientIntensity = 0
Material107.diffuseColor = [0,0,0]
Material107.shininess = 0.081633
Material107.specularColor = [0.293243,0.297387,0.290421]

ProtoBody106.children.append(Material107)

ProtoDeclare105.ProtoBody = ProtoBody106

Scene13.children.append(ProtoDeclare105)
ProtoDeclare108 = x3d.ProtoDeclare()
ProtoDeclare108.name = "ArtDeco31"
ProtoDeclare108.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare108.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody109 = x3d.ProtoBody()
Material110 = x3d.Material()
Material110.ambientIntensity = 0.25641
Material110.diffuseColor = [0.236364,0.236364,0.236364]
Material110.shininess = 0.054546
Material110.specularColor = [0.29697,0.245839,0.295962]

ProtoBody109.children.append(Material110)

ProtoDeclare108.ProtoBody = ProtoBody109

Scene13.children.append(ProtoDeclare108)
ProtoDeclare111 = x3d.ProtoDeclare()
ProtoDeclare111.name = "ArtDeco32"
ProtoDeclare111.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare111.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody112 = x3d.ProtoBody()
Material113 = x3d.Material()
Material113.ambientIntensity = 0.242424
Material113.diffuseColor = [0.38087,0.382957,0.417708]
Material113.shininess = 0.933333
Material113.specularColor = [0.533333,0.533333,0.533333]

ProtoBody112.children.append(Material113)

ProtoDeclare111.ProtoBody = ProtoBody112

Scene13.children.append(ProtoDeclare111)
ProtoDeclare114 = x3d.ProtoDeclare()
ProtoDeclare114.name = "ArtDeco33"
ProtoDeclare114.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare114.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody115 = x3d.ProtoBody()
Material116 = x3d.Material()
Material116.ambientIntensity = 0.230089
Material116.diffuseColor = [0.610811,0.610811,0.610811]
Material116.shininess = 0.897297
Material116.specularColor = [0.767568,0.756757,0.764964]

ProtoBody115.children.append(Material116)

ProtoDeclare114.ProtoBody = ProtoBody115

Scene13.children.append(ProtoDeclare114)
ProtoDeclare117 = x3d.ProtoDeclare()
ProtoDeclare117.name = "ArtDeco34"
ProtoDeclare117.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare117.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoBody118 = x3d.ProtoBody()
Material119 = x3d.Material()
Material119.ambientIntensity = 0.25
Material119.shininess = 0
Material119.specularColor = [0.2,0.2,0.2]

ProtoBody118.children.append(Material119)

ProtoDeclare117.ProtoBody = ProtoBody118

Scene13.children.append(ProtoDeclare117)
Anchor120 = x3d.Anchor()
Anchor120.description = "ArtDecoPrototypeExample"
Anchor120.parameter = ["target=_blank"]
Anchor120.url = ["../data/ArtDecoExamples.json","../data/ArtDecoExamples.x3d","ArtDecoExamples.json","ArtDecoExamples.x3d"]
Shape121 = x3d.Shape()
Appearance122 = x3d.Appearance()
Material123 = x3d.Material()
Material123.diffuseColor = [0.8,0.4,0]

Appearance122.material = Material123

Shape121.appearance = Appearance122
Text124 = x3d.Text()
Text124.string = ["ArtDecoExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","ArtDecoExamples.x3d"]
FontStyle125 = x3d.FontStyle()
FontStyle125.justify = ["MIDDLE","MIDDLE"]
FontStyle125.size = 0.8

Text124.fontStyle = FontStyle125

Shape121.geometry = Text124

Anchor120.children.append(Shape121)

Scene13.children.append(Anchor120)

X3D0.Scene = Scene13
f = open("../data/ArtDecoPrototypes.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ArtDecoPrototypes.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ArtDecoPrototypes.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
