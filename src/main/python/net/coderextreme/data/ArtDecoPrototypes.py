print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta7.content = "Mon, 09 Feb 2026 07:09:43 GMT"

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

X3D0.head = head1
Scene11 = x3d.Scene()
ProtoDeclare12 = x3d.ProtoDeclare()
ProtoDeclare12.name = "ArtDeco00"
ProtoDeclare12.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare12.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface13 = x3d.ProtoInterface()

ProtoDeclare12.ProtoInterface = ProtoInterface13
ProtoBody14 = x3d.ProtoBody()
Material15 = x3d.Material()
Material15.ambientIntensity = 0.25
Material15.diffuseColor = [0.282435,0.085159,0.134462]
Material15.specularColor = [0.276305,0.11431,0.139857]
Material15.shininess = 0.127273

ProtoBody14.children.append(Material15)

ProtoDeclare12.ProtoBody = ProtoBody14

Scene11.children.append(ProtoDeclare12)
ProtoDeclare16 = x3d.ProtoDeclare()
ProtoDeclare16.name = "ArtDeco01"
ProtoDeclare16.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare16.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface17 = x3d.ProtoInterface()

ProtoDeclare16.ProtoInterface = ProtoInterface17
ProtoBody18 = x3d.ProtoBody()
Material19 = x3d.Material()
Material19.ambientIntensity = 0.254777
Material19.diffuseColor = [0.685208,0.134679,0.332385]
Material19.specularColor = [0.122449,0.050035,0.050035]
Material19.shininess = 0.071429

ProtoBody18.children.append(Material19)

ProtoDeclare16.ProtoBody = ProtoBody18

Scene11.children.append(ProtoDeclare16)
ProtoDeclare20 = x3d.ProtoDeclare()
ProtoDeclare20.name = "ArtDeco02"
ProtoDeclare20.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare20.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface21 = x3d.ProtoInterface()

ProtoDeclare20.ProtoInterface = ProtoInterface21
ProtoBody22 = x3d.ProtoBody()
Material23 = x3d.Material()
Material23.ambientIntensity = 1
Material23.diffuseColor = [0.536861,0.0529,0.245479]
Material23.specularColor = [0.805292,0.765198,0.747416]
Material23.shininess = 0.832432

ProtoBody22.children.append(Material23)

ProtoDeclare20.ProtoBody = ProtoBody22

Scene11.children.append(ProtoDeclare20)
ProtoDeclare24 = x3d.ProtoDeclare()
ProtoDeclare24.name = "ArtDeco03"
ProtoDeclare24.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare24.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface25 = x3d.ProtoInterface()

ProtoDeclare24.ProtoInterface = ProtoInterface25
ProtoBody26 = x3d.ProtoBody()
Material27 = x3d.Material()
Material27.ambientIntensity = 0.248649
Material27.diffuseColor = [1,0.452381,0.40339]
Material27.specularColor = [0.686486,0.396903,0.419275]
Material27.shininess = 0.902703

ProtoBody26.children.append(Material27)

ProtoDeclare24.ProtoBody = ProtoBody26

Scene11.children.append(ProtoDeclare24)
ProtoDeclare28 = x3d.ProtoDeclare()
ProtoDeclare28.name = "ArtDeco04"
ProtoDeclare28.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare28.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface29 = x3d.ProtoInterface()

ProtoDeclare28.ProtoInterface = ProtoInterface29
ProtoBody30 = x3d.ProtoBody()
Material31 = x3d.Material()
Material31.ambientIntensity = 0.25
Material31.diffuseColor = [0.748016,0.298362,0.342624]
Material31.specularColor = [0.345455,0.345455,0.345455]
Material31.shininess = 0.69697

ProtoBody30.children.append(Material31)

ProtoDeclare28.ProtoBody = ProtoBody30

Scene11.children.append(ProtoDeclare28)
ProtoDeclare32 = x3d.ProtoDeclare()
ProtoDeclare32.name = "ArtDeco05"
ProtoDeclare32.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare32.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface33 = x3d.ProtoInterface()

ProtoDeclare32.ProtoInterface = ProtoInterface33
ProtoBody34 = x3d.ProtoBody()
Material35 = x3d.Material()
Material35.ambientIntensity = 0.24359
Material35.diffuseColor = [0.945455,0.318988,0.321717]
Material35.specularColor = [0.072727,0.021705,0.010732]
Material35.shininess = 0.018182

ProtoBody34.children.append(Material35)

ProtoDeclare32.ProtoBody = ProtoBody34

Scene11.children.append(ProtoDeclare32)
ProtoDeclare36 = x3d.ProtoDeclare()
ProtoDeclare36.name = "ArtDeco06"
ProtoDeclare36.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare36.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface37 = x3d.ProtoInterface()

ProtoDeclare36.ProtoInterface = ProtoInterface37
ProtoBody38 = x3d.ProtoBody()
Material39 = x3d.Material()
Material39.ambientIntensity = 0.25946
Material39.diffuseColor = [0.228655,0.195513,0.425484]
Material39.specularColor = [0.324504,0.404255,0.404255]
Material39.shininess = 0.542553

ProtoBody38.children.append(Material39)

ProtoDeclare36.ProtoBody = ProtoBody38

Scene11.children.append(ProtoDeclare36)
ProtoDeclare40 = x3d.ProtoDeclare()
ProtoDeclare40.name = "ArtDeco07"
ProtoDeclare40.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare40.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface41 = x3d.ProtoInterface()

ProtoDeclare40.ProtoInterface = ProtoInterface41
ProtoBody42 = x3d.ProtoBody()
Material43 = x3d.Material()
Material43.ambientIntensity = 0.333333
Material43.diffuseColor = [0.200348,0.100857,0.320833]
Material43.specularColor = [0.311358,0.387879,0.387879]
Material43.shininess = 0.133333

ProtoBody42.children.append(Material43)

ProtoDeclare40.ProtoBody = ProtoBody42

Scene11.children.append(ProtoDeclare40)
ProtoDeclare44 = x3d.ProtoDeclare()
ProtoDeclare44.name = "ArtDeco08"
ProtoDeclare44.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare44.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface45 = x3d.ProtoInterface()

ProtoDeclare44.ProtoInterface = ProtoInterface45
ProtoBody46 = x3d.ProtoBody()
Material47 = x3d.Material()
Material47.ambientIntensity = 0.242424
Material47.diffuseColor = [0.330519,0.3389,0.6]
Material47.specularColor = [0.290909,0.290909,0.290909]
Material47.shininess = 0.787879

ProtoBody46.children.append(Material47)

ProtoDeclare44.ProtoBody = ProtoBody46

Scene11.children.append(ProtoDeclare44)
ProtoDeclare48 = x3d.ProtoDeclare()
ProtoDeclare48.name = "ArtDeco09"
ProtoDeclare48.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare48.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface49 = x3d.ProtoInterface()

ProtoDeclare48.ProtoInterface = ProtoInterface49
ProtoBody50 = x3d.ProtoBody()
Material51 = x3d.Material()
Material51.ambientIntensity = 0.333333
Material51.diffuseColor = [0.237059,0.096273,0.215625]
Material51.specularColor = [0.311358,0.387879,0.387879]
Material51.shininess = 0.133333

ProtoBody50.children.append(Material51)

ProtoDeclare48.ProtoBody = ProtoBody50

Scene11.children.append(ProtoDeclare48)
ProtoDeclare52 = x3d.ProtoDeclare()
ProtoDeclare52.name = "ArtDeco10"
ProtoDeclare52.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare52.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface53 = x3d.ProtoInterface()

ProtoDeclare52.ProtoInterface = ProtoInterface53
ProtoBody54 = x3d.ProtoBody()
Material55 = x3d.Material()
Material55.ambientIntensity = 0.242425
Material55.diffuseColor = [0.304,0.09025,0.207364]
Material55.specularColor = [0.6665,0.579046,0.830303]
Material55.shininess = 0.072727

ProtoBody54.children.append(Material55)

ProtoDeclare52.ProtoBody = ProtoBody54

Scene11.children.append(ProtoDeclare52)
ProtoDeclare56 = x3d.ProtoDeclare()
ProtoDeclare56.name = "ArtDeco11"
ProtoDeclare56.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare56.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface57 = x3d.ProtoInterface()

ProtoDeclare56.ProtoInterface = ProtoInterface57
ProtoBody58 = x3d.ProtoBody()
Material59 = x3d.Material()
Material59.ambientIntensity = 0.258928
Material59.diffuseColor = [0.335631,0.207672,0.238304]
Material59.specularColor = [0.198631,0.075403,0.138803]
Material59.emissiveColor = [0.010638,0.010638,0.010638]
Material59.shininess = 0.021277

ProtoBody58.children.append(Material59)

ProtoDeclare56.ProtoBody = ProtoBody58

Scene11.children.append(ProtoDeclare56)
ProtoDeclare60 = x3d.ProtoDeclare()
ProtoDeclare60.name = "ArtDeco12"
ProtoDeclare60.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare60.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface61 = x3d.ProtoInterface()

ProtoDeclare60.ProtoInterface = ProtoInterface61
ProtoBody62 = x3d.ProtoBody()
Material63 = x3d.Material()
Material63.ambientIntensity = 0.240838
Material63.diffuseColor = [0.876873,0.14715,0.00856]
Material63.specularColor = [0.193878,0.029416,0.029416]
Material63.shininess = 0.076531

ProtoBody62.children.append(Material63)

ProtoDeclare60.ProtoBody = ProtoBody62

Scene11.children.append(ProtoDeclare60)
ProtoDeclare64 = x3d.ProtoDeclare()
ProtoDeclare64.name = "ArtDeco13"
ProtoDeclare64.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare64.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface65 = x3d.ProtoInterface()

ProtoDeclare64.ProtoInterface = ProtoInterface65
ProtoBody66 = x3d.ProtoBody()
Material67 = x3d.Material()
Material67.ambientIntensity = 0.25
Material67.diffuseColor = [0.794445,0.249425,0]
Material67.specularColor = [0.62904,0.194211,0.033663]
Material67.shininess = 0.551515

ProtoBody66.children.append(Material67)

ProtoDeclare64.ProtoBody = ProtoBody66

Scene11.children.append(ProtoDeclare64)
ProtoDeclare68 = x3d.ProtoDeclare()
ProtoDeclare68.name = "ArtDeco14"
ProtoDeclare68.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare68.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface69 = x3d.ProtoInterface()

ProtoDeclare68.ProtoInterface = ProtoInterface69
ProtoBody70 = x3d.ProtoBody()
Material71 = x3d.Material()
Material71.ambientIntensity = 0.25
Material71.diffuseColor = [0.510609,0.17264,0.059872]
Material71.specularColor = [0.533333,0.533333,0.533333]
Material71.shininess = 0.933333

ProtoBody70.children.append(Material71)

ProtoDeclare68.ProtoBody = ProtoBody70

Scene11.children.append(ProtoDeclare68)
ProtoDeclare72 = x3d.ProtoDeclare()
ProtoDeclare72.name = "ArtDeco15"
ProtoDeclare72.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare72.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface73 = x3d.ProtoInterface()

ProtoDeclare72.ProtoInterface = ProtoInterface73
ProtoBody74 = x3d.ProtoBody()
Material75 = x3d.Material()
Material75.ambientIntensity = 0.255814
Material75.diffuseColor = [0.914894,0.444404,0.348914]
Material75.specularColor = [0.345745,0.143066,0]
Material75.shininess = 0.12766

ProtoBody74.children.append(Material75)

ProtoDeclare72.ProtoBody = ProtoBody74

Scene11.children.append(ProtoDeclare72)
ProtoDeclare76 = x3d.ProtoDeclare()
ProtoDeclare76.name = "ArtDeco16"
ProtoDeclare76.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare76.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface77 = x3d.ProtoInterface()

ProtoDeclare76.ProtoInterface = ProtoInterface77
ProtoBody78 = x3d.ProtoBody()
Material79 = x3d.Material()
Material79.ambientIntensity = 0.240838
Material79.diffuseColor = [0.876873,0.323147,0.199564]
Material79.specularColor = [0.816327,0.278677,0.278677]
Material79.shininess = 0.80102

ProtoBody78.children.append(Material79)

ProtoDeclare76.ProtoBody = ProtoBody78

Scene11.children.append(ProtoDeclare76)
ProtoDeclare80 = x3d.ProtoDeclare()
ProtoDeclare80.name = "ArtDeco17"
ProtoDeclare80.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare80.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface81 = x3d.ProtoInterface()

ProtoDeclare80.ProtoInterface = ProtoInterface81
ProtoBody82 = x3d.ProtoBody()
Material83 = x3d.Material()
Material83.ambientIntensity = 0.242424
Material83.diffuseColor = [0.515625,0.315496,0.252441]
Material83.specularColor = [0.533333,0.533333,0.533333]
Material83.shininess = 0.933333

ProtoBody82.children.append(Material83)

ProtoDeclare80.ProtoBody = ProtoBody82

Scene11.children.append(ProtoDeclare80)
ProtoDeclare84 = x3d.ProtoDeclare()
ProtoDeclare84.name = "ArtDeco18"
ProtoDeclare84.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare84.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface85 = x3d.ProtoInterface()

ProtoDeclare84.ProtoInterface = ProtoInterface85
ProtoBody86 = x3d.ProtoBody()
Material87 = x3d.Material()
Material87.ambientIntensity = 0.264706
Material87.diffuseColor = [0,0.346939,0.253624]
Material87.specularColor = [0,0.311074,0.357143]
Material87.shininess = 0.316327

ProtoBody86.children.append(Material87)

ProtoDeclare84.ProtoBody = ProtoBody86

Scene11.children.append(ProtoDeclare84)
ProtoDeclare88 = x3d.ProtoDeclare()
ProtoDeclare88.name = "ArtDeco19"
ProtoDeclare88.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare88.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface89 = x3d.ProtoInterface()

ProtoDeclare88.ProtoInterface = ProtoInterface89
ProtoBody90 = x3d.ProtoBody()
Material91 = x3d.Material()
Material91.ambientIntensity = 0.259259
Material91.diffuseColor = [0,0.251004,0.239248]
Material91.specularColor = [0.177935,0.249369,0.229278]
Material91.shininess = 0.060606

ProtoBody90.children.append(Material91)

ProtoDeclare88.ProtoBody = ProtoBody90

Scene11.children.append(ProtoDeclare88)
ProtoDeclare92 = x3d.ProtoDeclare()
ProtoDeclare92.name = "ArtDeco20"
ProtoDeclare92.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare92.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface93 = x3d.ProtoInterface()

ProtoDeclare92.ProtoInterface = ProtoInterface93
ProtoBody94 = x3d.ProtoBody()
Material95 = x3d.Material()
Material95.ambientIntensity = 0.24
Material95.diffuseColor = [0.228298,0.385771,0.186794]
Material95.specularColor = [0.200464,0.300145,0.293518]
Material95.shininess = 0.393939

ProtoBody94.children.append(Material95)

ProtoDeclare92.ProtoBody = ProtoBody94

Scene11.children.append(ProtoDeclare92)
ProtoDeclare96 = x3d.ProtoDeclare()
ProtoDeclare96.name = "ArtDeco21"
ProtoDeclare96.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare96.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface97 = x3d.ProtoInterface()

ProtoDeclare96.ProtoInterface = ProtoInterface97
ProtoBody98 = x3d.ProtoBody()
Material99 = x3d.Material()
Material99.ambientIntensity = 0.25
Material99.diffuseColor = [0.315389,0.544,0.258052]
Material99.specularColor = [0.456,0.456,0.456]
Material99.shininess = 0.509389

ProtoBody98.children.append(Material99)

ProtoDeclare96.ProtoBody = ProtoBody98

Scene11.children.append(ProtoDeclare96)
ProtoDeclare100 = x3d.ProtoDeclare()
ProtoDeclare100.name = "ArtDeco22"
ProtoDeclare100.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare100.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface101 = x3d.ProtoInterface()

ProtoDeclare100.ProtoInterface = ProtoInterface101
ProtoBody102 = x3d.ProtoBody()
Material103 = x3d.Material()
Material103.ambientIntensity = 0.246032
Material103.diffuseColor = [0.251104,0.312562,0.201724]
Material103.specularColor = [0.209184,0.113842,0.111328]
Material103.shininess = 0.086735

ProtoBody102.children.append(Material103)

ProtoDeclare100.ProtoBody = ProtoBody102

Scene11.children.append(ProtoDeclare100)
ProtoDeclare104 = x3d.ProtoDeclare()
ProtoDeclare104.name = "ArtDeco23"
ProtoDeclare104.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare104.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface105 = x3d.ProtoInterface()

ProtoDeclare104.ProtoInterface = ProtoInterface105
ProtoBody106 = x3d.ProtoBody()
Material107 = x3d.Material()
Material107.ambientIntensity = 0.242424
Material107.diffuseColor = [0.392348,0.456,0.417708]
Material107.specularColor = [0.533333,0.533333,0.533333]
Material107.shininess = 0.933333

ProtoBody106.children.append(Material107)

ProtoDeclare104.ProtoBody = ProtoBody106

Scene11.children.append(ProtoDeclare104)
ProtoDeclare108 = x3d.ProtoDeclare()
ProtoDeclare108.name = "ArtDeco24"
ProtoDeclare108.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare108.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface109 = x3d.ProtoInterface()

ProtoDeclare108.ProtoInterface = ProtoInterface109
ProtoBody110 = x3d.ProtoBody()
Material111 = x3d.Material()
Material111.ambientIntensity = 0.253968
Material111.diffuseColor = [1,0.854922,0]
Material111.specularColor = [0.872449,0.247119,0.254214]
Material111.shininess = 1

ProtoBody110.children.append(Material111)

ProtoDeclare108.ProtoBody = ProtoBody110

Scene11.children.append(ProtoDeclare108)
ProtoDeclare112 = x3d.ProtoDeclare()
ProtoDeclare112.name = "ArtDeco25"
ProtoDeclare112.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare112.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface113 = x3d.ProtoInterface()

ProtoDeclare112.ProtoInterface = ProtoInterface113
ProtoBody114 = x3d.ProtoBody()
Material115 = x3d.Material()
Material115.ambientIntensity = 0.25641
Material115.diffuseColor = [0.795918,0.505869,0.093315]
Material115.specularColor = [0.923469,0.428866,0.006369]
Material115.shininess = 0.397959

ProtoBody114.children.append(Material115)

ProtoDeclare112.ProtoBody = ProtoBody114

Scene11.children.append(ProtoDeclare112)
ProtoDeclare116 = x3d.ProtoDeclare()
ProtoDeclare116.name = "ArtDeco26"
ProtoDeclare116.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare116.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface117 = x3d.ProtoInterface()

ProtoDeclare116.ProtoInterface = ProtoInterface117
ProtoBody118 = x3d.ProtoBody()
Material119 = x3d.Material()
Material119.ambientIntensity = 1
Material119.diffuseColor = [0.331633,0.296582,0.279057]
Material119.specularColor = [0.311224,0.25183,0.133042]
Material119.shininess = 0.096939

ProtoBody118.children.append(Material119)

ProtoDeclare116.ProtoBody = ProtoBody118

Scene11.children.append(ProtoDeclare116)
ProtoDeclare120 = x3d.ProtoDeclare()
ProtoDeclare120.name = "ArtDeco27"
ProtoDeclare120.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare120.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface121 = x3d.ProtoInterface()

ProtoDeclare120.ProtoInterface = ProtoInterface121
ProtoBody122 = x3d.ProtoBody()
Material123 = x3d.Material()
Material123.ambientIntensity = 0.263158
Material123.diffuseColor = [0.345455,0.163262,0.122622]
Material123.specularColor = [0.212121,0.107475,0]
Material123.shininess = 0.048649

ProtoBody122.children.append(Material123)

ProtoDeclare120.ProtoBody = ProtoBody122

Scene11.children.append(ProtoDeclare120)
ProtoDeclare124 = x3d.ProtoDeclare()
ProtoDeclare124.name = "ArtDeco28"
ProtoDeclare124.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare124.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface125 = x3d.ProtoInterface()

ProtoDeclare124.ProtoInterface = ProtoInterface125
ProtoBody126 = x3d.ProtoBody()
Material127 = x3d.Material()
Material127.ambientIntensity = 0.240506
Material127.diffuseColor = [0.277281,0.104336,0.0799]
Material127.specularColor = [0.305587,0.141916,0.270572]
Material127.shininess = 0.09697

ProtoBody126.children.append(Material127)

ProtoDeclare124.ProtoBody = ProtoBody126

Scene11.children.append(ProtoDeclare124)
ProtoDeclare128 = x3d.ProtoDeclare()
ProtoDeclare128.name = "ArtDeco29"
ProtoDeclare128.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare128.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface129 = x3d.ProtoInterface()

ProtoDeclare128.ProtoInterface = ProtoInterface129
ProtoBody130 = x3d.ProtoBody()
Material131 = x3d.Material()
Material131.ambientIntensity = 0.215686
Material131.diffuseColor = [0.087034,0.025888,0]
Material131.specularColor = [0.224138,0.104091,0.104091]
Material131.shininess = 0.045918

ProtoBody130.children.append(Material131)

ProtoDeclare128.ProtoBody = ProtoBody130

Scene11.children.append(ProtoDeclare128)
ProtoDeclare132 = x3d.ProtoDeclare()
ProtoDeclare132.name = "ArtDeco30"
ProtoDeclare132.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare132.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface133 = x3d.ProtoInterface()

ProtoDeclare132.ProtoInterface = ProtoInterface133
ProtoBody134 = x3d.ProtoBody()
Material135 = x3d.Material()
Material135.ambientIntensity = 0
Material135.diffuseColor = [0,0,0]
Material135.specularColor = [0.293243,0.297387,0.290421]
Material135.shininess = 0.081633

ProtoBody134.children.append(Material135)

ProtoDeclare132.ProtoBody = ProtoBody134

Scene11.children.append(ProtoDeclare132)
ProtoDeclare136 = x3d.ProtoDeclare()
ProtoDeclare136.name = "ArtDeco31"
ProtoDeclare136.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare136.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface137 = x3d.ProtoInterface()

ProtoDeclare136.ProtoInterface = ProtoInterface137
ProtoBody138 = x3d.ProtoBody()
Material139 = x3d.Material()
Material139.ambientIntensity = 0.25641
Material139.diffuseColor = [0.236364,0.236364,0.236364]
Material139.specularColor = [0.29697,0.245839,0.295962]
Material139.shininess = 0.054546

ProtoBody138.children.append(Material139)

ProtoDeclare136.ProtoBody = ProtoBody138

Scene11.children.append(ProtoDeclare136)
ProtoDeclare140 = x3d.ProtoDeclare()
ProtoDeclare140.name = "ArtDeco32"
ProtoDeclare140.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare140.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface141 = x3d.ProtoInterface()

ProtoDeclare140.ProtoInterface = ProtoInterface141
ProtoBody142 = x3d.ProtoBody()
Material143 = x3d.Material()
Material143.ambientIntensity = 0.242424
Material143.diffuseColor = [0.38087,0.382957,0.417708]
Material143.specularColor = [0.533333,0.533333,0.533333]
Material143.shininess = 0.933333

ProtoBody142.children.append(Material143)

ProtoDeclare140.ProtoBody = ProtoBody142

Scene11.children.append(ProtoDeclare140)
ProtoDeclare144 = x3d.ProtoDeclare()
ProtoDeclare144.name = "ArtDeco33"
ProtoDeclare144.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare144.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface145 = x3d.ProtoInterface()

ProtoDeclare144.ProtoInterface = ProtoInterface145
ProtoBody146 = x3d.ProtoBody()
Material147 = x3d.Material()
Material147.ambientIntensity = 0.230089
Material147.diffuseColor = [0.610811,0.610811,0.610811]
Material147.specularColor = [0.767568,0.756757,0.764964]
Material147.shininess = 0.897297

ProtoBody146.children.append(Material147)

ProtoDeclare144.ProtoBody = ProtoBody146

Scene11.children.append(ProtoDeclare144)
ProtoDeclare148 = x3d.ProtoDeclare()
ProtoDeclare148.name = "ArtDeco34"
ProtoDeclare148.appinfo = "UniversalMediaMaterials prototype"
ProtoDeclare148.documentation = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"
ProtoInterface149 = x3d.ProtoInterface()

ProtoDeclare148.ProtoInterface = ProtoInterface149
ProtoBody150 = x3d.ProtoBody()
Material151 = x3d.Material()
Material151.ambientIntensity = 0.25
Material151.specularColor = [0.2,0.2,0.2]
Material151.shininess = 0

ProtoBody150.children.append(Material151)

ProtoDeclare148.ProtoBody = ProtoBody150

Scene11.children.append(ProtoDeclare148)
WorldInfo152 = x3d.WorldInfo()
WorldInfo152.title = "ArtDecoPrototypes.x3d"

Scene11.children.append(WorldInfo152)
Anchor153 = x3d.Anchor()
Anchor153.description = "ArtDecoPrototypeExample"
Anchor153.url = ["../data/ArtDecoExamples.json","../data/ArtDecoExamples.x3d","ArtDecoExamples.json","ArtDecoExamples.x3d"]
Anchor153.parameter = ["target=_blank"]
Shape154 = x3d.Shape()
Appearance155 = x3d.Appearance()
Material156 = x3d.Material()
Material156.diffuseColor = [0.8,0.4,0]

Appearance155.material = Material156

Shape154.appearance = Appearance155
Text157 = x3d.Text()
Text157.string = ["ArtDecoExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","ArtDecoExamples.x3d"]
FontStyle158 = x3d.FontStyle()
FontStyle158.size = 0.8
FontStyle158.justify = ["MIDDLE","MIDDLE"]

Text157.fontStyle = FontStyle158

Shape154.geometry = Text157

Anchor153.children.append(Shape154)

Scene11.children.append(Anchor153)

X3D0.Scene = Scene11
f = open("../data/ArtDecoPrototypes.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ArtDecoPrototypes.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ArtDecoPrototypes.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
