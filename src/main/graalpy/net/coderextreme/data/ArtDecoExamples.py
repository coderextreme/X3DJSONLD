import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("ArtDecoExamples.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples.")

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
meta7.setContent("19 January 2025")

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
meta10.setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d")

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
WorldInfo14.setTitle("ArtDecoExamples.x3d")

Scene13.addChild(WorldInfo14)
ExternProtoDeclare15 = x3d.ExternProtoDeclare()
ExternProtoDeclare15.setName("ArtDeco00")
ExternProtoDeclare15.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare15.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare15.setUrl(["ArtDecoPrototypes.x3d#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00","ArtDecoPrototypes.wrl#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00"])

Scene13.addChild(ExternProtoDeclare15)
ExternProtoDeclare16 = x3d.ExternProtoDeclare()
ExternProtoDeclare16.setName("ArtDeco01")
ExternProtoDeclare16.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare16.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare16.setUrl(["ArtDecoPrototypes.x3d#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01","ArtDecoPrototypes.wrl#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01"])

Scene13.addChild(ExternProtoDeclare16)
ExternProtoDeclare17 = x3d.ExternProtoDeclare()
ExternProtoDeclare17.setName("ArtDeco02")
ExternProtoDeclare17.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare17.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare17.setUrl(["ArtDecoPrototypes.x3d#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02","ArtDecoPrototypes.wrl#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02"])

Scene13.addChild(ExternProtoDeclare17)
ExternProtoDeclare18 = x3d.ExternProtoDeclare()
ExternProtoDeclare18.setName("ArtDeco03")
ExternProtoDeclare18.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare18.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare18.setUrl(["ArtDecoPrototypes.x3d#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03","ArtDecoPrototypes.wrl#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03"])

Scene13.addChild(ExternProtoDeclare18)
ExternProtoDeclare19 = x3d.ExternProtoDeclare()
ExternProtoDeclare19.setName("ArtDeco04")
ExternProtoDeclare19.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare19.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare19.setUrl(["ArtDecoPrototypes.x3d#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04","ArtDecoPrototypes.wrl#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04"])

Scene13.addChild(ExternProtoDeclare19)
ExternProtoDeclare20 = x3d.ExternProtoDeclare()
ExternProtoDeclare20.setName("ArtDeco05")
ExternProtoDeclare20.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare20.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare20.setUrl(["ArtDecoPrototypes.x3d#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05","ArtDecoPrototypes.wrl#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05"])

Scene13.addChild(ExternProtoDeclare20)
ExternProtoDeclare21 = x3d.ExternProtoDeclare()
ExternProtoDeclare21.setName("ArtDeco06")
ExternProtoDeclare21.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare21.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare21.setUrl(["ArtDecoPrototypes.x3d#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06","ArtDecoPrototypes.wrl#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06"])

Scene13.addChild(ExternProtoDeclare21)
ExternProtoDeclare22 = x3d.ExternProtoDeclare()
ExternProtoDeclare22.setName("ArtDeco07")
ExternProtoDeclare22.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare22.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare22.setUrl(["ArtDecoPrototypes.x3d#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07","ArtDecoPrototypes.wrl#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07"])

Scene13.addChild(ExternProtoDeclare22)
ExternProtoDeclare23 = x3d.ExternProtoDeclare()
ExternProtoDeclare23.setName("ArtDeco08")
ExternProtoDeclare23.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare23.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare23.setUrl(["ArtDecoPrototypes.x3d#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08","ArtDecoPrototypes.wrl#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08"])

Scene13.addChild(ExternProtoDeclare23)
ExternProtoDeclare24 = x3d.ExternProtoDeclare()
ExternProtoDeclare24.setName("ArtDeco09")
ExternProtoDeclare24.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare24.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare24.setUrl(["ArtDecoPrototypes.x3d#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09","ArtDecoPrototypes.wrl#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09"])

Scene13.addChild(ExternProtoDeclare24)
ExternProtoDeclare25 = x3d.ExternProtoDeclare()
ExternProtoDeclare25.setName("ArtDeco10")
ExternProtoDeclare25.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare25.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare25.setUrl(["ArtDecoPrototypes.x3d#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10","ArtDecoPrototypes.wrl#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10"])

Scene13.addChild(ExternProtoDeclare25)
ExternProtoDeclare26 = x3d.ExternProtoDeclare()
ExternProtoDeclare26.setName("ArtDeco11")
ExternProtoDeclare26.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare26.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare26.setUrl(["ArtDecoPrototypes.x3d#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11","ArtDecoPrototypes.wrl#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11"])

Scene13.addChild(ExternProtoDeclare26)
ExternProtoDeclare27 = x3d.ExternProtoDeclare()
ExternProtoDeclare27.setName("ArtDeco12")
ExternProtoDeclare27.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare27.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare27.setUrl(["ArtDecoPrototypes.x3d#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12","ArtDecoPrototypes.wrl#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12"])

Scene13.addChild(ExternProtoDeclare27)
ExternProtoDeclare28 = x3d.ExternProtoDeclare()
ExternProtoDeclare28.setName("ArtDeco13")
ExternProtoDeclare28.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare28.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare28.setUrl(["ArtDecoPrototypes.x3d#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13","ArtDecoPrototypes.wrl#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13"])

Scene13.addChild(ExternProtoDeclare28)
ExternProtoDeclare29 = x3d.ExternProtoDeclare()
ExternProtoDeclare29.setName("ArtDeco14")
ExternProtoDeclare29.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare29.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare29.setUrl(["ArtDecoPrototypes.x3d#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14","ArtDecoPrototypes.wrl#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14"])

Scene13.addChild(ExternProtoDeclare29)
ExternProtoDeclare30 = x3d.ExternProtoDeclare()
ExternProtoDeclare30.setName("ArtDeco15")
ExternProtoDeclare30.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare30.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare30.setUrl(["ArtDecoPrototypes.x3d#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15","ArtDecoPrototypes.wrl#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15"])

Scene13.addChild(ExternProtoDeclare30)
ExternProtoDeclare31 = x3d.ExternProtoDeclare()
ExternProtoDeclare31.setName("ArtDeco16")
ExternProtoDeclare31.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare31.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare31.setUrl(["ArtDecoPrototypes.x3d#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16","ArtDecoPrototypes.wrl#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16"])

Scene13.addChild(ExternProtoDeclare31)
ExternProtoDeclare32 = x3d.ExternProtoDeclare()
ExternProtoDeclare32.setName("ArtDeco17")
ExternProtoDeclare32.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare32.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare32.setUrl(["ArtDecoPrototypes.x3d#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17","ArtDecoPrototypes.wrl#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17"])

Scene13.addChild(ExternProtoDeclare32)
ExternProtoDeclare33 = x3d.ExternProtoDeclare()
ExternProtoDeclare33.setName("ArtDeco18")
ExternProtoDeclare33.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare33.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare33.setUrl(["ArtDecoPrototypes.x3d#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18","ArtDecoPrototypes.wrl#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18"])

Scene13.addChild(ExternProtoDeclare33)
ExternProtoDeclare34 = x3d.ExternProtoDeclare()
ExternProtoDeclare34.setName("ArtDeco19")
ExternProtoDeclare34.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare34.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare34.setUrl(["ArtDecoPrototypes.x3d#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19","ArtDecoPrototypes.wrl#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19"])

Scene13.addChild(ExternProtoDeclare34)
ExternProtoDeclare35 = x3d.ExternProtoDeclare()
ExternProtoDeclare35.setName("ArtDeco20")
ExternProtoDeclare35.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare35.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare35.setUrl(["ArtDecoPrototypes.x3d#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20","ArtDecoPrototypes.wrl#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20"])

Scene13.addChild(ExternProtoDeclare35)
ExternProtoDeclare36 = x3d.ExternProtoDeclare()
ExternProtoDeclare36.setName("ArtDeco21")
ExternProtoDeclare36.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare36.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare36.setUrl(["ArtDecoPrototypes.x3d#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21","ArtDecoPrototypes.wrl#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21"])

Scene13.addChild(ExternProtoDeclare36)
ExternProtoDeclare37 = x3d.ExternProtoDeclare()
ExternProtoDeclare37.setName("ArtDeco22")
ExternProtoDeclare37.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare37.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare37.setUrl(["ArtDecoPrototypes.x3d#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22","ArtDecoPrototypes.wrl#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22"])

Scene13.addChild(ExternProtoDeclare37)
ExternProtoDeclare38 = x3d.ExternProtoDeclare()
ExternProtoDeclare38.setName("ArtDeco23")
ExternProtoDeclare38.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare38.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare38.setUrl(["ArtDecoPrototypes.x3d#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23","ArtDecoPrototypes.wrl#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23"])

Scene13.addChild(ExternProtoDeclare38)
ExternProtoDeclare39 = x3d.ExternProtoDeclare()
ExternProtoDeclare39.setName("ArtDeco24")
ExternProtoDeclare39.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare39.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare39.setUrl(["ArtDecoPrototypes.x3d#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24","ArtDecoPrototypes.wrl#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24"])

Scene13.addChild(ExternProtoDeclare39)
ExternProtoDeclare40 = x3d.ExternProtoDeclare()
ExternProtoDeclare40.setName("ArtDeco25")
ExternProtoDeclare40.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare40.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare40.setUrl(["ArtDecoPrototypes.x3d#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25","ArtDecoPrototypes.wrl#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25"])

Scene13.addChild(ExternProtoDeclare40)
ExternProtoDeclare41 = x3d.ExternProtoDeclare()
ExternProtoDeclare41.setName("ArtDeco26")
ExternProtoDeclare41.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare41.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare41.setUrl(["ArtDecoPrototypes.x3d#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26","ArtDecoPrototypes.wrl#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26"])

Scene13.addChild(ExternProtoDeclare41)
ExternProtoDeclare42 = x3d.ExternProtoDeclare()
ExternProtoDeclare42.setName("ArtDeco27")
ExternProtoDeclare42.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare42.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare42.setUrl(["ArtDecoPrototypes.x3d#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27","ArtDecoPrototypes.wrl#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27"])

Scene13.addChild(ExternProtoDeclare42)
ExternProtoDeclare43 = x3d.ExternProtoDeclare()
ExternProtoDeclare43.setName("ArtDeco28")
ExternProtoDeclare43.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare43.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare43.setUrl(["ArtDecoPrototypes.x3d#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28","ArtDecoPrototypes.wrl#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28"])

Scene13.addChild(ExternProtoDeclare43)
ExternProtoDeclare44 = x3d.ExternProtoDeclare()
ExternProtoDeclare44.setName("ArtDeco29")
ExternProtoDeclare44.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare44.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare44.setUrl(["ArtDecoPrototypes.x3d#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29","ArtDecoPrototypes.wrl#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29"])

Scene13.addChild(ExternProtoDeclare44)
ExternProtoDeclare45 = x3d.ExternProtoDeclare()
ExternProtoDeclare45.setName("ArtDeco30")
ExternProtoDeclare45.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare45.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare45.setUrl(["ArtDecoPrototypes.x3d#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30","ArtDecoPrototypes.wrl#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30"])

Scene13.addChild(ExternProtoDeclare45)
ExternProtoDeclare46 = x3d.ExternProtoDeclare()
ExternProtoDeclare46.setName("ArtDeco31")
ExternProtoDeclare46.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare46.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare46.setUrl(["ArtDecoPrototypes.x3d#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31","ArtDecoPrototypes.wrl#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31"])

Scene13.addChild(ExternProtoDeclare46)
ExternProtoDeclare47 = x3d.ExternProtoDeclare()
ExternProtoDeclare47.setName("ArtDeco32")
ExternProtoDeclare47.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare47.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare47.setUrl(["ArtDecoPrototypes.x3d#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32","ArtDecoPrototypes.wrl#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32"])

Scene13.addChild(ExternProtoDeclare47)
ExternProtoDeclare48 = x3d.ExternProtoDeclare()
ExternProtoDeclare48.setName("ArtDeco33")
ExternProtoDeclare48.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare48.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare48.setUrl(["ArtDecoPrototypes.x3d#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33","ArtDecoPrototypes.wrl#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33"])

Scene13.addChild(ExternProtoDeclare48)
ExternProtoDeclare49 = x3d.ExternProtoDeclare()
ExternProtoDeclare49.setName("ArtDeco34")
ExternProtoDeclare49.setAppinfo("UniversalMediaMaterials prototype")
ExternProtoDeclare49.setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
ExternProtoDeclare49.setUrl(["ArtDecoPrototypes.x3d#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34","ArtDecoPrototypes.wrl#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34"])

Scene13.addChild(ExternProtoDeclare49)
Group50 = x3d.Group()
NavigationInfo51 = x3d.NavigationInfo()
NavigationInfo51.setHeadlight(False)

Group50.addChild(NavigationInfo51)
Viewpoint52 = x3d.Viewpoint()
Viewpoint52.setDEF("Front")
Viewpoint52.setDescription("Front view")
Viewpoint52.setPosition(x3d.doubleToFloat([0,0,12]))

Group50.addChild(Viewpoint52)
Viewpoint53 = x3d.Viewpoint()
Viewpoint53.setDEF("PersRight")
Viewpoint53.setDescription("Low Right")
Viewpoint53.setOrientation(x3d.doubleToFloat([0.74291,0.30772,0.59447,1.2171]))
Viewpoint53.setPosition(x3d.doubleToFloat([6.9282,-6.9282,6.9282]))

Group50.addChild(Viewpoint53)
Viewpoint54 = x3d.Viewpoint()
Viewpoint54.setDEF("PersLeft")
Viewpoint54.setDescription("Low Left")
Viewpoint54.setOrientation(x3d.doubleToFloat([0.74291,-0.30772,-0.59447,1.2171]))
Viewpoint54.setPosition(x3d.doubleToFloat([-6.9282,-6.9282,6.9282]))

Group50.addChild(Viewpoint54)
Viewpoint55 = x3d.Viewpoint()
Viewpoint55.setDEF("Back")
Viewpoint55.setDescription("Back view")
Viewpoint55.setOrientation(x3d.doubleToFloat([0,1,0,3.1416]))
Viewpoint55.setPosition(x3d.doubleToFloat([0,0,-12]))

Group50.addChild(Viewpoint55)
Transform56 = x3d.Transform()
Transform56.setDEF("Close_travel")
PositionInterpolator57 = x3d.PositionInterpolator()
PositionInterpolator57.setDEF("Close_Mover")
PositionInterpolator57.setKey(x3d.doubleToFloat([0,0.25,0.5,0.75,1]))
PositionInterpolator57.setKeyValue(x3d.doubleToFloat([0,2.5,0,0,0,0,0,-2.5,0,0,0,0,0,2.5,0]))

Transform56.addChild(PositionInterpolator57)
TimeSensor58 = x3d.TimeSensor()
TimeSensor58.setDEF("Close_Time")
TimeSensor58.setCycleInterval(12)
TimeSensor58.setLoop(True)

Transform56.addChild(TimeSensor58)
Viewpoint59 = x3d.Viewpoint()
Viewpoint59.setDEF("Close")
Viewpoint59.setDescription("Close Front")
Viewpoint59.setPosition(x3d.doubleToFloat([0,0,6]))

Transform56.addChild(Viewpoint59)

Group50.addChild(Transform56)
DirectionalLight60 = x3d.DirectionalLight()
DirectionalLight60.setDirection(x3d.doubleToFloat([1,-1,-1]))

Group50.addChild(DirectionalLight60)
DirectionalLight61 = x3d.DirectionalLight()
DirectionalLight61.setDirection(x3d.doubleToFloat([0,1,-0.5]))
DirectionalLight61.setIntensity(0.5)

Group50.addChild(DirectionalLight61)
Anchor62 = x3d.Anchor()
Anchor62.setDescription("Return to front view")
Anchor62.setUrl(["#Front"])
Transform63 = x3d.Transform()
Transform63.setTranslation(x3d.doubleToFloat([0,0,-0.5]))
Inline64 = x3d.Inline()
Inline64.setUrl(["gridBack.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"])

Transform63.addChild(Inline64)

Anchor62.addChild(Transform63)

Group50.addChild(Anchor62)
Viewpoint65 = x3d.Viewpoint()
Viewpoint65.setDEF("View00")
Viewpoint65.setDescription("ArtDeco00")
Viewpoint65.setPosition(x3d.doubleToFloat([-3.75,3.75,3]))

Group50.addChild(Viewpoint65)
Transform66 = x3d.Transform()
Transform66.setTranslation(x3d.doubleToFloat([-3.75,3.75,0]))
Anchor67 = x3d.Anchor()
Anchor67.setDescription("ArtDeco00 view")
Anchor67.setUrl(["#View00"])
Shape68 = x3d.Shape()
Appearance69 = x3d.Appearance()
ProtoInstance70 = x3d.ProtoInstance()
ProtoInstance70.setName("ArtDeco00")

Appearance69.setMaterial(ProtoInstance70)

Shape68.setAppearance(Appearance69)
Sphere71 = x3d.Sphere()
Sphere71.setDEF("Ball")
Sphere71.setRadius(0.5)

Shape68.setGeometry(Sphere71)

Anchor67.addChild(Shape68)

Transform66.addChild(Anchor67)
Transform72 = x3d.Transform()
Transform72.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor73 = x3d.Anchor()
Anchor73.setDescription("ArtDeco00 view source documentation")
Anchor73.setParameter(["target=_source"])
Anchor73.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00"])
Shape74 = x3d.Shape()
Appearance75 = x3d.Appearance()
Material76 = x3d.Material()
Material76.setDEF("TextMat")
Material76.setDiffuseColor(x3d.doubleToFloat([1,1,1]))

Appearance75.setMaterial(Material76)

Shape74.setAppearance(Appearance75)
Text77 = x3d.Text()
Text77.setString(["ArtDeco00"])
FontStyle78 = x3d.FontStyle()
FontStyle78.setDEF("Style")
FontStyle78.setFamily(["SANS"])
FontStyle78.setJustify(["MIDDLE","MIDDLE"])
FontStyle78.setSize(0.3)
FontStyle78.setStyle("BOLD")

Text77.setFontStyle(FontStyle78)

Shape74.setGeometry(Text77)

Anchor73.addChild(Shape74)

Transform72.addChild(Anchor73)

Transform66.addChild(Transform72)

Group50.addChild(Transform66)
Viewpoint79 = x3d.Viewpoint()
Viewpoint79.setDEF("View01")
Viewpoint79.setDescription("ArtDeco01")
Viewpoint79.setPosition(x3d.doubleToFloat([-2.25,3.75,3]))

Group50.addChild(Viewpoint79)
Transform80 = x3d.Transform()
Transform80.setTranslation(x3d.doubleToFloat([-2.25,3.75,0]))
Anchor81 = x3d.Anchor()
Anchor81.setDescription("ArtDeco01 view")
Anchor81.setUrl(["#View01"])
Shape82 = x3d.Shape()
Appearance83 = x3d.Appearance()
ProtoInstance84 = x3d.ProtoInstance()
ProtoInstance84.setName("ArtDeco01")

Appearance83.setMaterial(ProtoInstance84)

Shape82.setAppearance(Appearance83)
Sphere85 = x3d.Sphere()
Sphere85.setUSE("Ball")

Shape82.setGeometry(Sphere85)

Anchor81.addChild(Shape82)

Transform80.addChild(Anchor81)
Transform86 = x3d.Transform()
Transform86.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor87 = x3d.Anchor()
Anchor87.setDescription("ArtDeco01 view source documentation")
Anchor87.setParameter(["target=_source"])
Anchor87.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01"])
Shape88 = x3d.Shape()
Appearance89 = x3d.Appearance()
Material90 = x3d.Material()
Material90.setUSE("TextMat")

Appearance89.setMaterial(Material90)

Shape88.setAppearance(Appearance89)
Text91 = x3d.Text()
Text91.setString(["ArtDeco01"])
FontStyle92 = x3d.FontStyle()
FontStyle92.setUSE("Style")

Text91.setFontStyle(FontStyle92)

Shape88.setGeometry(Text91)

Anchor87.addChild(Shape88)

Transform86.addChild(Anchor87)

Transform80.addChild(Transform86)

Group50.addChild(Transform80)
Viewpoint93 = x3d.Viewpoint()
Viewpoint93.setDEF("View02")
Viewpoint93.setDescription("ArtDeco02")
Viewpoint93.setPosition(x3d.doubleToFloat([-0.75,3.75,3]))

Group50.addChild(Viewpoint93)
Transform94 = x3d.Transform()
Transform94.setTranslation(x3d.doubleToFloat([-0.75,3.75,0]))
Anchor95 = x3d.Anchor()
Anchor95.setDescription("ArtDeco02 view")
Anchor95.setUrl(["#View02"])
Shape96 = x3d.Shape()
Appearance97 = x3d.Appearance()
ProtoInstance98 = x3d.ProtoInstance()
ProtoInstance98.setName("ArtDeco02")

Appearance97.setMaterial(ProtoInstance98)

Shape96.setAppearance(Appearance97)
Sphere99 = x3d.Sphere()
Sphere99.setUSE("Ball")

Shape96.setGeometry(Sphere99)

Anchor95.addChild(Shape96)

Transform94.addChild(Anchor95)
Transform100 = x3d.Transform()
Transform100.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor101 = x3d.Anchor()
Anchor101.setDescription("ArtDeco02 view source documentation")
Anchor101.setParameter(["target=_source"])
Anchor101.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02"])
Shape102 = x3d.Shape()
Appearance103 = x3d.Appearance()
Material104 = x3d.Material()
Material104.setUSE("TextMat")

Appearance103.setMaterial(Material104)

Shape102.setAppearance(Appearance103)
Text105 = x3d.Text()
Text105.setString(["ArtDeco02"])
FontStyle106 = x3d.FontStyle()
FontStyle106.setUSE("Style")

Text105.setFontStyle(FontStyle106)

Shape102.setGeometry(Text105)

Anchor101.addChild(Shape102)

Transform100.addChild(Anchor101)

Transform94.addChild(Transform100)

Group50.addChild(Transform94)
Viewpoint107 = x3d.Viewpoint()
Viewpoint107.setDEF("View03")
Viewpoint107.setDescription("ArtDeco03")
Viewpoint107.setPosition(x3d.doubleToFloat([0.75,3.75,3]))

Group50.addChild(Viewpoint107)
Transform108 = x3d.Transform()
Transform108.setTranslation(x3d.doubleToFloat([0.75,3.75,0]))
Anchor109 = x3d.Anchor()
Anchor109.setDescription("ArtDeco03 view")
Anchor109.setUrl(["#View03"])
Shape110 = x3d.Shape()
Appearance111 = x3d.Appearance()
ProtoInstance112 = x3d.ProtoInstance()
ProtoInstance112.setName("ArtDeco03")

Appearance111.setMaterial(ProtoInstance112)

Shape110.setAppearance(Appearance111)
Sphere113 = x3d.Sphere()
Sphere113.setUSE("Ball")

Shape110.setGeometry(Sphere113)

Anchor109.addChild(Shape110)

Transform108.addChild(Anchor109)
Transform114 = x3d.Transform()
Transform114.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor115 = x3d.Anchor()
Anchor115.setDescription("ArtDeco03 view source documentation")
Anchor115.setParameter(["target=_source"])
Anchor115.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03"])
Shape116 = x3d.Shape()
Appearance117 = x3d.Appearance()
Material118 = x3d.Material()
Material118.setUSE("TextMat")

Appearance117.setMaterial(Material118)

Shape116.setAppearance(Appearance117)
Text119 = x3d.Text()
Text119.setString(["ArtDeco03"])
FontStyle120 = x3d.FontStyle()
FontStyle120.setUSE("Style")

Text119.setFontStyle(FontStyle120)

Shape116.setGeometry(Text119)

Anchor115.addChild(Shape116)

Transform114.addChild(Anchor115)

Transform108.addChild(Transform114)

Group50.addChild(Transform108)
Viewpoint121 = x3d.Viewpoint()
Viewpoint121.setDEF("View04")
Viewpoint121.setDescription("ArtDeco04")
Viewpoint121.setPosition(x3d.doubleToFloat([2.25,3.75,3]))

Group50.addChild(Viewpoint121)
Transform122 = x3d.Transform()
Transform122.setTranslation(x3d.doubleToFloat([2.25,3.75,0]))
Anchor123 = x3d.Anchor()
Anchor123.setDescription("ArtDeco04 view")
Anchor123.setUrl(["#View04"])
Shape124 = x3d.Shape()
Appearance125 = x3d.Appearance()
ProtoInstance126 = x3d.ProtoInstance()
ProtoInstance126.setName("ArtDeco04")

Appearance125.setMaterial(ProtoInstance126)

Shape124.setAppearance(Appearance125)
Sphere127 = x3d.Sphere()
Sphere127.setUSE("Ball")

Shape124.setGeometry(Sphere127)

Anchor123.addChild(Shape124)

Transform122.addChild(Anchor123)
Transform128 = x3d.Transform()
Transform128.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor129 = x3d.Anchor()
Anchor129.setDescription("ArtDeco04 view source documentation")
Anchor129.setParameter(["target=_source"])
Anchor129.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04"])
Shape130 = x3d.Shape()
Appearance131 = x3d.Appearance()
Material132 = x3d.Material()
Material132.setUSE("TextMat")

Appearance131.setMaterial(Material132)

Shape130.setAppearance(Appearance131)
Text133 = x3d.Text()
Text133.setString(["ArtDeco04"])
FontStyle134 = x3d.FontStyle()
FontStyle134.setUSE("Style")

Text133.setFontStyle(FontStyle134)

Shape130.setGeometry(Text133)

Anchor129.addChild(Shape130)

Transform128.addChild(Anchor129)

Transform122.addChild(Transform128)

Group50.addChild(Transform122)
Viewpoint135 = x3d.Viewpoint()
Viewpoint135.setDEF("View05")
Viewpoint135.setDescription("ArtDeco05")
Viewpoint135.setPosition(x3d.doubleToFloat([3.75,3.75,3]))

Group50.addChild(Viewpoint135)
Transform136 = x3d.Transform()
Transform136.setTranslation(x3d.doubleToFloat([3.75,3.75,0]))
Anchor137 = x3d.Anchor()
Anchor137.setDescription("ArtDeco05 view")
Anchor137.setUrl(["#View05"])
Shape138 = x3d.Shape()
Appearance139 = x3d.Appearance()
ProtoInstance140 = x3d.ProtoInstance()
ProtoInstance140.setName("ArtDeco05")

Appearance139.setMaterial(ProtoInstance140)

Shape138.setAppearance(Appearance139)
Sphere141 = x3d.Sphere()
Sphere141.setUSE("Ball")

Shape138.setGeometry(Sphere141)

Anchor137.addChild(Shape138)

Transform136.addChild(Anchor137)
Transform142 = x3d.Transform()
Transform142.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor143 = x3d.Anchor()
Anchor143.setDescription("ArtDeco05 view source documentation")
Anchor143.setParameter(["target=_source"])
Anchor143.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05"])
Shape144 = x3d.Shape()
Appearance145 = x3d.Appearance()
Material146 = x3d.Material()
Material146.setUSE("TextMat")

Appearance145.setMaterial(Material146)

Shape144.setAppearance(Appearance145)
Text147 = x3d.Text()
Text147.setString(["ArtDeco05"])
FontStyle148 = x3d.FontStyle()
FontStyle148.setUSE("Style")

Text147.setFontStyle(FontStyle148)

Shape144.setGeometry(Text147)

Anchor143.addChild(Shape144)

Transform142.addChild(Anchor143)

Transform136.addChild(Transform142)

Group50.addChild(Transform136)
Viewpoint149 = x3d.Viewpoint()
Viewpoint149.setDEF("View06")
Viewpoint149.setDescription("ArtDeco06")
Viewpoint149.setPosition(x3d.doubleToFloat([-3.75,2.25,3]))

Group50.addChild(Viewpoint149)
Transform150 = x3d.Transform()
Transform150.setTranslation(x3d.doubleToFloat([-3.75,2.25,0]))
Anchor151 = x3d.Anchor()
Anchor151.setDescription("ArtDeco06 view")
Anchor151.setUrl(["#View06"])
Shape152 = x3d.Shape()
Appearance153 = x3d.Appearance()
ProtoInstance154 = x3d.ProtoInstance()
ProtoInstance154.setName("ArtDeco06")

Appearance153.setMaterial(ProtoInstance154)

Shape152.setAppearance(Appearance153)
Sphere155 = x3d.Sphere()
Sphere155.setUSE("Ball")

Shape152.setGeometry(Sphere155)

Anchor151.addChild(Shape152)

Transform150.addChild(Anchor151)
Transform156 = x3d.Transform()
Transform156.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor157 = x3d.Anchor()
Anchor157.setDescription("ArtDeco06 view source documentation")
Anchor157.setParameter(["target=_source"])
Anchor157.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06"])
Shape158 = x3d.Shape()
Appearance159 = x3d.Appearance()
Material160 = x3d.Material()
Material160.setUSE("TextMat")

Appearance159.setMaterial(Material160)

Shape158.setAppearance(Appearance159)
Text161 = x3d.Text()
Text161.setString(["ArtDeco06"])
FontStyle162 = x3d.FontStyle()
FontStyle162.setUSE("Style")

Text161.setFontStyle(FontStyle162)

Shape158.setGeometry(Text161)

Anchor157.addChild(Shape158)

Transform156.addChild(Anchor157)

Transform150.addChild(Transform156)

Group50.addChild(Transform150)
Viewpoint163 = x3d.Viewpoint()
Viewpoint163.setDEF("View07")
Viewpoint163.setDescription("ArtDeco07")
Viewpoint163.setPosition(x3d.doubleToFloat([-2.25,2.25,3]))

Group50.addChild(Viewpoint163)
Transform164 = x3d.Transform()
Transform164.setTranslation(x3d.doubleToFloat([-2.25,2.25,0]))
Anchor165 = x3d.Anchor()
Anchor165.setDescription("ArtDeco07 view")
Anchor165.setUrl(["#View07"])
Shape166 = x3d.Shape()
Appearance167 = x3d.Appearance()
ProtoInstance168 = x3d.ProtoInstance()
ProtoInstance168.setName("ArtDeco07")

Appearance167.setMaterial(ProtoInstance168)

Shape166.setAppearance(Appearance167)
Sphere169 = x3d.Sphere()
Sphere169.setUSE("Ball")

Shape166.setGeometry(Sphere169)

Anchor165.addChild(Shape166)

Transform164.addChild(Anchor165)
Transform170 = x3d.Transform()
Transform170.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor171 = x3d.Anchor()
Anchor171.setDescription("ArtDeco07 view source documentation")
Anchor171.setParameter(["target=_source"])
Anchor171.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07"])
Shape172 = x3d.Shape()
Appearance173 = x3d.Appearance()
Material174 = x3d.Material()
Material174.setUSE("TextMat")

Appearance173.setMaterial(Material174)

Shape172.setAppearance(Appearance173)
Text175 = x3d.Text()
Text175.setString(["ArtDeco07"])
FontStyle176 = x3d.FontStyle()
FontStyle176.setUSE("Style")

Text175.setFontStyle(FontStyle176)

Shape172.setGeometry(Text175)

Anchor171.addChild(Shape172)

Transform170.addChild(Anchor171)

Transform164.addChild(Transform170)

Group50.addChild(Transform164)
Viewpoint177 = x3d.Viewpoint()
Viewpoint177.setDEF("View08")
Viewpoint177.setDescription("ArtDeco08")
Viewpoint177.setPosition(x3d.doubleToFloat([-0.75,2.25,3]))

Group50.addChild(Viewpoint177)
Transform178 = x3d.Transform()
Transform178.setTranslation(x3d.doubleToFloat([-0.75,2.25,0]))
Anchor179 = x3d.Anchor()
Anchor179.setDescription("ArtDeco08 view")
Anchor179.setUrl(["#View08"])
Shape180 = x3d.Shape()
Appearance181 = x3d.Appearance()
ProtoInstance182 = x3d.ProtoInstance()
ProtoInstance182.setName("ArtDeco08")

Appearance181.setMaterial(ProtoInstance182)

Shape180.setAppearance(Appearance181)
Sphere183 = x3d.Sphere()
Sphere183.setUSE("Ball")

Shape180.setGeometry(Sphere183)

Anchor179.addChild(Shape180)

Transform178.addChild(Anchor179)
Transform184 = x3d.Transform()
Transform184.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor185 = x3d.Anchor()
Anchor185.setDescription("ArtDeco08 view source documentation")
Anchor185.setParameter(["target=_source"])
Anchor185.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08"])
Shape186 = x3d.Shape()
Appearance187 = x3d.Appearance()
Material188 = x3d.Material()
Material188.setUSE("TextMat")

Appearance187.setMaterial(Material188)

Shape186.setAppearance(Appearance187)
Text189 = x3d.Text()
Text189.setString(["ArtDeco08"])
FontStyle190 = x3d.FontStyle()
FontStyle190.setUSE("Style")

Text189.setFontStyle(FontStyle190)

Shape186.setGeometry(Text189)

Anchor185.addChild(Shape186)

Transform184.addChild(Anchor185)

Transform178.addChild(Transform184)

Group50.addChild(Transform178)
Viewpoint191 = x3d.Viewpoint()
Viewpoint191.setDEF("View09")
Viewpoint191.setDescription("ArtDeco09")
Viewpoint191.setPosition(x3d.doubleToFloat([0.75,2.25,3]))

Group50.addChild(Viewpoint191)
Transform192 = x3d.Transform()
Transform192.setTranslation(x3d.doubleToFloat([0.75,2.25,0]))
Anchor193 = x3d.Anchor()
Anchor193.setDescription("ArtDeco09 view")
Anchor193.setUrl(["#View09"])
Shape194 = x3d.Shape()
Appearance195 = x3d.Appearance()
ProtoInstance196 = x3d.ProtoInstance()
ProtoInstance196.setName("ArtDeco09")

Appearance195.setMaterial(ProtoInstance196)

Shape194.setAppearance(Appearance195)
Sphere197 = x3d.Sphere()
Sphere197.setUSE("Ball")

Shape194.setGeometry(Sphere197)

Anchor193.addChild(Shape194)

Transform192.addChild(Anchor193)
Transform198 = x3d.Transform()
Transform198.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor199 = x3d.Anchor()
Anchor199.setDescription("ArtDeco09 view source documentation")
Anchor199.setParameter(["target=_source"])
Anchor199.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09"])
Shape200 = x3d.Shape()
Appearance201 = x3d.Appearance()
Material202 = x3d.Material()
Material202.setUSE("TextMat")

Appearance201.setMaterial(Material202)

Shape200.setAppearance(Appearance201)
Text203 = x3d.Text()
Text203.setString(["ArtDeco09"])
FontStyle204 = x3d.FontStyle()
FontStyle204.setUSE("Style")

Text203.setFontStyle(FontStyle204)

Shape200.setGeometry(Text203)

Anchor199.addChild(Shape200)

Transform198.addChild(Anchor199)

Transform192.addChild(Transform198)

Group50.addChild(Transform192)
Viewpoint205 = x3d.Viewpoint()
Viewpoint205.setDEF("View10")
Viewpoint205.setDescription("ArtDeco10")
Viewpoint205.setPosition(x3d.doubleToFloat([2.25,2.25,3]))

Group50.addChild(Viewpoint205)
Transform206 = x3d.Transform()
Transform206.setTranslation(x3d.doubleToFloat([2.25,2.25,0]))
Anchor207 = x3d.Anchor()
Anchor207.setDescription("ArtDeco10 view")
Anchor207.setUrl(["#View10"])
Shape208 = x3d.Shape()
Appearance209 = x3d.Appearance()
ProtoInstance210 = x3d.ProtoInstance()
ProtoInstance210.setName("ArtDeco10")

Appearance209.setMaterial(ProtoInstance210)

Shape208.setAppearance(Appearance209)
Sphere211 = x3d.Sphere()
Sphere211.setUSE("Ball")

Shape208.setGeometry(Sphere211)

Anchor207.addChild(Shape208)

Transform206.addChild(Anchor207)
Transform212 = x3d.Transform()
Transform212.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor213 = x3d.Anchor()
Anchor213.setDescription("ArtDeco10 view source documentation")
Anchor213.setParameter(["target=_source"])
Anchor213.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10"])
Shape214 = x3d.Shape()
Appearance215 = x3d.Appearance()
Material216 = x3d.Material()
Material216.setUSE("TextMat")

Appearance215.setMaterial(Material216)

Shape214.setAppearance(Appearance215)
Text217 = x3d.Text()
Text217.setString(["ArtDeco10"])
FontStyle218 = x3d.FontStyle()
FontStyle218.setUSE("Style")

Text217.setFontStyle(FontStyle218)

Shape214.setGeometry(Text217)

Anchor213.addChild(Shape214)

Transform212.addChild(Anchor213)

Transform206.addChild(Transform212)

Group50.addChild(Transform206)
Viewpoint219 = x3d.Viewpoint()
Viewpoint219.setDEF("View11")
Viewpoint219.setDescription("ArtDeco11")
Viewpoint219.setPosition(x3d.doubleToFloat([3.75,2.25,3]))

Group50.addChild(Viewpoint219)
Transform220 = x3d.Transform()
Transform220.setTranslation(x3d.doubleToFloat([3.75,2.25,0]))
Anchor221 = x3d.Anchor()
Anchor221.setDescription("ArtDeco11 view")
Anchor221.setUrl(["#View11"])
Shape222 = x3d.Shape()
Appearance223 = x3d.Appearance()
ProtoInstance224 = x3d.ProtoInstance()
ProtoInstance224.setName("ArtDeco11")

Appearance223.setMaterial(ProtoInstance224)

Shape222.setAppearance(Appearance223)
Sphere225 = x3d.Sphere()
Sphere225.setUSE("Ball")

Shape222.setGeometry(Sphere225)

Anchor221.addChild(Shape222)

Transform220.addChild(Anchor221)
Transform226 = x3d.Transform()
Transform226.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor227 = x3d.Anchor()
Anchor227.setDescription("ArtDeco11 view source documentation")
Anchor227.setParameter(["target=_source"])
Anchor227.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11"])
Shape228 = x3d.Shape()
Appearance229 = x3d.Appearance()
Material230 = x3d.Material()
Material230.setUSE("TextMat")

Appearance229.setMaterial(Material230)

Shape228.setAppearance(Appearance229)
Text231 = x3d.Text()
Text231.setString(["ArtDeco11"])
FontStyle232 = x3d.FontStyle()
FontStyle232.setUSE("Style")

Text231.setFontStyle(FontStyle232)

Shape228.setGeometry(Text231)

Anchor227.addChild(Shape228)

Transform226.addChild(Anchor227)

Transform220.addChild(Transform226)

Group50.addChild(Transform220)
Viewpoint233 = x3d.Viewpoint()
Viewpoint233.setDEF("View12")
Viewpoint233.setDescription("ArtDeco12")
Viewpoint233.setPosition(x3d.doubleToFloat([-3.75,0.75,3]))

Group50.addChild(Viewpoint233)
Transform234 = x3d.Transform()
Transform234.setTranslation(x3d.doubleToFloat([-3.75,0.75,0]))
Anchor235 = x3d.Anchor()
Anchor235.setDescription("ArtDeco12 view")
Anchor235.setUrl(["#View12"])
Shape236 = x3d.Shape()
Appearance237 = x3d.Appearance()
ProtoInstance238 = x3d.ProtoInstance()
ProtoInstance238.setName("ArtDeco12")

Appearance237.setMaterial(ProtoInstance238)

Shape236.setAppearance(Appearance237)
Sphere239 = x3d.Sphere()
Sphere239.setUSE("Ball")

Shape236.setGeometry(Sphere239)

Anchor235.addChild(Shape236)

Transform234.addChild(Anchor235)
Transform240 = x3d.Transform()
Transform240.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor241 = x3d.Anchor()
Anchor241.setDescription("ArtDeco12 view source documentation")
Anchor241.setParameter(["target=_source"])
Anchor241.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12"])
Shape242 = x3d.Shape()
Appearance243 = x3d.Appearance()
Material244 = x3d.Material()
Material244.setUSE("TextMat")

Appearance243.setMaterial(Material244)

Shape242.setAppearance(Appearance243)
Text245 = x3d.Text()
Text245.setString(["ArtDeco12"])
FontStyle246 = x3d.FontStyle()
FontStyle246.setUSE("Style")

Text245.setFontStyle(FontStyle246)

Shape242.setGeometry(Text245)

Anchor241.addChild(Shape242)

Transform240.addChild(Anchor241)

Transform234.addChild(Transform240)

Group50.addChild(Transform234)
Viewpoint247 = x3d.Viewpoint()
Viewpoint247.setDEF("View13")
Viewpoint247.setDescription("ArtDeco13")
Viewpoint247.setPosition(x3d.doubleToFloat([-2.25,0.75,3]))

Group50.addChild(Viewpoint247)
Transform248 = x3d.Transform()
Transform248.setTranslation(x3d.doubleToFloat([-2.25,0.75,0]))
Anchor249 = x3d.Anchor()
Anchor249.setDescription("ArtDeco13 view")
Anchor249.setUrl(["#View13"])
Shape250 = x3d.Shape()
Appearance251 = x3d.Appearance()
ProtoInstance252 = x3d.ProtoInstance()
ProtoInstance252.setName("ArtDeco13")

Appearance251.setMaterial(ProtoInstance252)

Shape250.setAppearance(Appearance251)
Sphere253 = x3d.Sphere()
Sphere253.setUSE("Ball")

Shape250.setGeometry(Sphere253)

Anchor249.addChild(Shape250)

Transform248.addChild(Anchor249)
Transform254 = x3d.Transform()
Transform254.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor255 = x3d.Anchor()
Anchor255.setDescription("ArtDeco13 view source documentation")
Anchor255.setParameter(["target=_source"])
Anchor255.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13"])
Shape256 = x3d.Shape()
Appearance257 = x3d.Appearance()
Material258 = x3d.Material()
Material258.setUSE("TextMat")

Appearance257.setMaterial(Material258)

Shape256.setAppearance(Appearance257)
Text259 = x3d.Text()
Text259.setString(["ArtDeco13"])
FontStyle260 = x3d.FontStyle()
FontStyle260.setUSE("Style")

Text259.setFontStyle(FontStyle260)

Shape256.setGeometry(Text259)

Anchor255.addChild(Shape256)

Transform254.addChild(Anchor255)

Transform248.addChild(Transform254)

Group50.addChild(Transform248)
Viewpoint261 = x3d.Viewpoint()
Viewpoint261.setDEF("View14")
Viewpoint261.setDescription("ArtDeco14")
Viewpoint261.setPosition(x3d.doubleToFloat([-0.75,0.75,3]))

Group50.addChild(Viewpoint261)
Transform262 = x3d.Transform()
Transform262.setTranslation(x3d.doubleToFloat([-0.75,0.75,0]))
Anchor263 = x3d.Anchor()
Anchor263.setDescription("ArtDeco14 view")
Anchor263.setUrl(["#View14"])
Shape264 = x3d.Shape()
Appearance265 = x3d.Appearance()
ProtoInstance266 = x3d.ProtoInstance()
ProtoInstance266.setName("ArtDeco14")

Appearance265.setMaterial(ProtoInstance266)

Shape264.setAppearance(Appearance265)
Sphere267 = x3d.Sphere()
Sphere267.setUSE("Ball")

Shape264.setGeometry(Sphere267)

Anchor263.addChild(Shape264)

Transform262.addChild(Anchor263)
Transform268 = x3d.Transform()
Transform268.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor269 = x3d.Anchor()
Anchor269.setDescription("ArtDeco14 view source documentation")
Anchor269.setParameter(["target=_source"])
Anchor269.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14"])
Shape270 = x3d.Shape()
Appearance271 = x3d.Appearance()
Material272 = x3d.Material()
Material272.setUSE("TextMat")

Appearance271.setMaterial(Material272)

Shape270.setAppearance(Appearance271)
Text273 = x3d.Text()
Text273.setString(["ArtDeco14"])
FontStyle274 = x3d.FontStyle()
FontStyle274.setUSE("Style")

Text273.setFontStyle(FontStyle274)

Shape270.setGeometry(Text273)

Anchor269.addChild(Shape270)

Transform268.addChild(Anchor269)

Transform262.addChild(Transform268)

Group50.addChild(Transform262)
Viewpoint275 = x3d.Viewpoint()
Viewpoint275.setDEF("View15")
Viewpoint275.setDescription("ArtDeco15")
Viewpoint275.setPosition(x3d.doubleToFloat([0.75,0.75,3]))

Group50.addChild(Viewpoint275)
Transform276 = x3d.Transform()
Transform276.setTranslation(x3d.doubleToFloat([0.75,0.75,0]))
Anchor277 = x3d.Anchor()
Anchor277.setDescription("ArtDeco15 view")
Anchor277.setUrl(["#View15"])
Shape278 = x3d.Shape()
Appearance279 = x3d.Appearance()
ProtoInstance280 = x3d.ProtoInstance()
ProtoInstance280.setName("ArtDeco15")

Appearance279.setMaterial(ProtoInstance280)

Shape278.setAppearance(Appearance279)
Sphere281 = x3d.Sphere()
Sphere281.setUSE("Ball")

Shape278.setGeometry(Sphere281)

Anchor277.addChild(Shape278)

Transform276.addChild(Anchor277)
Transform282 = x3d.Transform()
Transform282.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor283 = x3d.Anchor()
Anchor283.setDescription("ArtDeco15 view source documentation")
Anchor283.setParameter(["target=_source"])
Anchor283.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15"])
Shape284 = x3d.Shape()
Appearance285 = x3d.Appearance()
Material286 = x3d.Material()
Material286.setUSE("TextMat")

Appearance285.setMaterial(Material286)

Shape284.setAppearance(Appearance285)
Text287 = x3d.Text()
Text287.setString(["ArtDeco15"])
FontStyle288 = x3d.FontStyle()
FontStyle288.setUSE("Style")

Text287.setFontStyle(FontStyle288)

Shape284.setGeometry(Text287)

Anchor283.addChild(Shape284)

Transform282.addChild(Anchor283)

Transform276.addChild(Transform282)

Group50.addChild(Transform276)
Viewpoint289 = x3d.Viewpoint()
Viewpoint289.setDEF("View16")
Viewpoint289.setDescription("ArtDeco16")
Viewpoint289.setPosition(x3d.doubleToFloat([2.25,0.75,3]))

Group50.addChild(Viewpoint289)
Transform290 = x3d.Transform()
Transform290.setTranslation(x3d.doubleToFloat([2.25,0.75,0]))
Anchor291 = x3d.Anchor()
Anchor291.setDescription("ArtDeco16 view")
Anchor291.setUrl(["#View16"])
Shape292 = x3d.Shape()
Appearance293 = x3d.Appearance()
ProtoInstance294 = x3d.ProtoInstance()
ProtoInstance294.setName("ArtDeco16")

Appearance293.setMaterial(ProtoInstance294)

Shape292.setAppearance(Appearance293)
Sphere295 = x3d.Sphere()
Sphere295.setUSE("Ball")

Shape292.setGeometry(Sphere295)

Anchor291.addChild(Shape292)

Transform290.addChild(Anchor291)
Transform296 = x3d.Transform()
Transform296.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor297 = x3d.Anchor()
Anchor297.setDescription("ArtDeco16 view source documentation")
Anchor297.setParameter(["target=_source"])
Anchor297.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16"])
Shape298 = x3d.Shape()
Appearance299 = x3d.Appearance()
Material300 = x3d.Material()
Material300.setUSE("TextMat")

Appearance299.setMaterial(Material300)

Shape298.setAppearance(Appearance299)
Text301 = x3d.Text()
Text301.setString(["ArtDeco16"])
FontStyle302 = x3d.FontStyle()
FontStyle302.setUSE("Style")

Text301.setFontStyle(FontStyle302)

Shape298.setGeometry(Text301)

Anchor297.addChild(Shape298)

Transform296.addChild(Anchor297)

Transform290.addChild(Transform296)

Group50.addChild(Transform290)
Viewpoint303 = x3d.Viewpoint()
Viewpoint303.setDEF("View17")
Viewpoint303.setDescription("ArtDeco17")
Viewpoint303.setPosition(x3d.doubleToFloat([3.75,0.75,3]))

Group50.addChild(Viewpoint303)
Transform304 = x3d.Transform()
Transform304.setTranslation(x3d.doubleToFloat([3.75,0.75,0]))
Anchor305 = x3d.Anchor()
Anchor305.setDescription("ArtDeco17 view")
Anchor305.setUrl(["#View17"])
Shape306 = x3d.Shape()
Appearance307 = x3d.Appearance()
ProtoInstance308 = x3d.ProtoInstance()
ProtoInstance308.setName("ArtDeco17")

Appearance307.setMaterial(ProtoInstance308)

Shape306.setAppearance(Appearance307)
Sphere309 = x3d.Sphere()
Sphere309.setUSE("Ball")

Shape306.setGeometry(Sphere309)

Anchor305.addChild(Shape306)

Transform304.addChild(Anchor305)
Transform310 = x3d.Transform()
Transform310.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor311 = x3d.Anchor()
Anchor311.setDescription("ArtDeco17 view source documentation")
Anchor311.setParameter(["target=_source"])
Anchor311.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17"])
Shape312 = x3d.Shape()
Appearance313 = x3d.Appearance()
Material314 = x3d.Material()
Material314.setUSE("TextMat")

Appearance313.setMaterial(Material314)

Shape312.setAppearance(Appearance313)
Text315 = x3d.Text()
Text315.setString(["ArtDeco17"])
FontStyle316 = x3d.FontStyle()
FontStyle316.setUSE("Style")

Text315.setFontStyle(FontStyle316)

Shape312.setGeometry(Text315)

Anchor311.addChild(Shape312)

Transform310.addChild(Anchor311)

Transform304.addChild(Transform310)

Group50.addChild(Transform304)
Viewpoint317 = x3d.Viewpoint()
Viewpoint317.setDEF("View18")
Viewpoint317.setDescription("ArtDeco18")
Viewpoint317.setPosition(x3d.doubleToFloat([-3.75,-0.75,3]))

Group50.addChild(Viewpoint317)
Transform318 = x3d.Transform()
Transform318.setTranslation(x3d.doubleToFloat([-3.75,-0.75,0]))
Anchor319 = x3d.Anchor()
Anchor319.setDescription("ArtDeco18 view")
Anchor319.setUrl(["#View18"])
Shape320 = x3d.Shape()
Appearance321 = x3d.Appearance()
ProtoInstance322 = x3d.ProtoInstance()
ProtoInstance322.setName("ArtDeco18")

Appearance321.setMaterial(ProtoInstance322)

Shape320.setAppearance(Appearance321)
Sphere323 = x3d.Sphere()
Sphere323.setUSE("Ball")

Shape320.setGeometry(Sphere323)

Anchor319.addChild(Shape320)

Transform318.addChild(Anchor319)
Transform324 = x3d.Transform()
Transform324.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor325 = x3d.Anchor()
Anchor325.setDescription("ArtDeco18 view source documentation")
Anchor325.setParameter(["target=_source"])
Anchor325.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18"])
Shape326 = x3d.Shape()
Appearance327 = x3d.Appearance()
Material328 = x3d.Material()
Material328.setUSE("TextMat")

Appearance327.setMaterial(Material328)

Shape326.setAppearance(Appearance327)
Text329 = x3d.Text()
Text329.setString(["ArtDeco18"])
FontStyle330 = x3d.FontStyle()
FontStyle330.setUSE("Style")

Text329.setFontStyle(FontStyle330)

Shape326.setGeometry(Text329)

Anchor325.addChild(Shape326)

Transform324.addChild(Anchor325)

Transform318.addChild(Transform324)

Group50.addChild(Transform318)
Viewpoint331 = x3d.Viewpoint()
Viewpoint331.setDEF("View19")
Viewpoint331.setDescription("ArtDeco19")
Viewpoint331.setPosition(x3d.doubleToFloat([-2.25,-0.75,3]))

Group50.addChild(Viewpoint331)
Transform332 = x3d.Transform()
Transform332.setTranslation(x3d.doubleToFloat([-2.25,-0.75,0]))
Anchor333 = x3d.Anchor()
Anchor333.setDescription("ArtDeco19 view")
Anchor333.setUrl(["#View19"])
Shape334 = x3d.Shape()
Appearance335 = x3d.Appearance()
ProtoInstance336 = x3d.ProtoInstance()
ProtoInstance336.setName("ArtDeco19")

Appearance335.setMaterial(ProtoInstance336)

Shape334.setAppearance(Appearance335)
Sphere337 = x3d.Sphere()
Sphere337.setUSE("Ball")

Shape334.setGeometry(Sphere337)

Anchor333.addChild(Shape334)

Transform332.addChild(Anchor333)
Transform338 = x3d.Transform()
Transform338.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor339 = x3d.Anchor()
Anchor339.setDescription("ArtDeco19 view source documentation")
Anchor339.setParameter(["target=_source"])
Anchor339.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19"])
Shape340 = x3d.Shape()
Appearance341 = x3d.Appearance()
Material342 = x3d.Material()
Material342.setUSE("TextMat")

Appearance341.setMaterial(Material342)

Shape340.setAppearance(Appearance341)
Text343 = x3d.Text()
Text343.setString(["ArtDeco19"])
FontStyle344 = x3d.FontStyle()
FontStyle344.setUSE("Style")

Text343.setFontStyle(FontStyle344)

Shape340.setGeometry(Text343)

Anchor339.addChild(Shape340)

Transform338.addChild(Anchor339)

Transform332.addChild(Transform338)

Group50.addChild(Transform332)
Viewpoint345 = x3d.Viewpoint()
Viewpoint345.setDEF("View20")
Viewpoint345.setDescription("ArtDeco20")
Viewpoint345.setPosition(x3d.doubleToFloat([-0.75,-0.75,3]))

Group50.addChild(Viewpoint345)
Transform346 = x3d.Transform()
Transform346.setTranslation(x3d.doubleToFloat([-0.75,-0.75,0]))
Anchor347 = x3d.Anchor()
Anchor347.setDescription("ArtDeco20 view")
Anchor347.setUrl(["#View20"])
Shape348 = x3d.Shape()
Appearance349 = x3d.Appearance()
ProtoInstance350 = x3d.ProtoInstance()
ProtoInstance350.setName("ArtDeco20")

Appearance349.setMaterial(ProtoInstance350)

Shape348.setAppearance(Appearance349)
Sphere351 = x3d.Sphere()
Sphere351.setUSE("Ball")

Shape348.setGeometry(Sphere351)

Anchor347.addChild(Shape348)

Transform346.addChild(Anchor347)
Transform352 = x3d.Transform()
Transform352.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor353 = x3d.Anchor()
Anchor353.setDescription("ArtDeco20 view source documentation")
Anchor353.setParameter(["target=_source"])
Anchor353.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20"])
Shape354 = x3d.Shape()
Appearance355 = x3d.Appearance()
Material356 = x3d.Material()
Material356.setUSE("TextMat")

Appearance355.setMaterial(Material356)

Shape354.setAppearance(Appearance355)
Text357 = x3d.Text()
Text357.setString(["ArtDeco20"])
FontStyle358 = x3d.FontStyle()
FontStyle358.setUSE("Style")

Text357.setFontStyle(FontStyle358)

Shape354.setGeometry(Text357)

Anchor353.addChild(Shape354)

Transform352.addChild(Anchor353)

Transform346.addChild(Transform352)

Group50.addChild(Transform346)
Viewpoint359 = x3d.Viewpoint()
Viewpoint359.setDEF("View21")
Viewpoint359.setDescription("ArtDeco21")
Viewpoint359.setPosition(x3d.doubleToFloat([0.75,-0.75,3]))

Group50.addChild(Viewpoint359)
Transform360 = x3d.Transform()
Transform360.setTranslation(x3d.doubleToFloat([0.75,-0.75,0]))
Anchor361 = x3d.Anchor()
Anchor361.setDescription("ArtDeco21 view")
Anchor361.setUrl(["#View21"])
Shape362 = x3d.Shape()
Appearance363 = x3d.Appearance()
ProtoInstance364 = x3d.ProtoInstance()
ProtoInstance364.setName("ArtDeco21")

Appearance363.setMaterial(ProtoInstance364)

Shape362.setAppearance(Appearance363)
Sphere365 = x3d.Sphere()
Sphere365.setUSE("Ball")

Shape362.setGeometry(Sphere365)

Anchor361.addChild(Shape362)

Transform360.addChild(Anchor361)
Transform366 = x3d.Transform()
Transform366.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor367 = x3d.Anchor()
Anchor367.setDescription("ArtDeco21 view source documentation")
Anchor367.setParameter(["target=_source"])
Anchor367.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21"])
Shape368 = x3d.Shape()
Appearance369 = x3d.Appearance()
Material370 = x3d.Material()
Material370.setUSE("TextMat")

Appearance369.setMaterial(Material370)

Shape368.setAppearance(Appearance369)
Text371 = x3d.Text()
Text371.setString(["ArtDeco21"])
FontStyle372 = x3d.FontStyle()
FontStyle372.setUSE("Style")

Text371.setFontStyle(FontStyle372)

Shape368.setGeometry(Text371)

Anchor367.addChild(Shape368)

Transform366.addChild(Anchor367)

Transform360.addChild(Transform366)

Group50.addChild(Transform360)
Viewpoint373 = x3d.Viewpoint()
Viewpoint373.setDEF("View22")
Viewpoint373.setDescription("ArtDeco22")
Viewpoint373.setPosition(x3d.doubleToFloat([2.25,-0.75,3]))

Group50.addChild(Viewpoint373)
Transform374 = x3d.Transform()
Transform374.setTranslation(x3d.doubleToFloat([2.25,-0.75,0]))
Anchor375 = x3d.Anchor()
Anchor375.setDescription("ArtDeco22 view")
Anchor375.setUrl(["#View22"])
Shape376 = x3d.Shape()
Appearance377 = x3d.Appearance()
ProtoInstance378 = x3d.ProtoInstance()
ProtoInstance378.setName("ArtDeco22")

Appearance377.setMaterial(ProtoInstance378)

Shape376.setAppearance(Appearance377)
Sphere379 = x3d.Sphere()
Sphere379.setUSE("Ball")

Shape376.setGeometry(Sphere379)

Anchor375.addChild(Shape376)

Transform374.addChild(Anchor375)
Transform380 = x3d.Transform()
Transform380.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor381 = x3d.Anchor()
Anchor381.setDescription("ArtDeco22 view source documentation")
Anchor381.setParameter(["target=_source"])
Anchor381.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22"])
Shape382 = x3d.Shape()
Appearance383 = x3d.Appearance()
Material384 = x3d.Material()
Material384.setUSE("TextMat")

Appearance383.setMaterial(Material384)

Shape382.setAppearance(Appearance383)
Text385 = x3d.Text()
Text385.setString(["ArtDeco22"])
FontStyle386 = x3d.FontStyle()
FontStyle386.setUSE("Style")

Text385.setFontStyle(FontStyle386)

Shape382.setGeometry(Text385)

Anchor381.addChild(Shape382)

Transform380.addChild(Anchor381)

Transform374.addChild(Transform380)

Group50.addChild(Transform374)
Viewpoint387 = x3d.Viewpoint()
Viewpoint387.setDEF("View23")
Viewpoint387.setDescription("ArtDeco23")
Viewpoint387.setPosition(x3d.doubleToFloat([3.75,-0.75,3]))

Group50.addChild(Viewpoint387)
Transform388 = x3d.Transform()
Transform388.setTranslation(x3d.doubleToFloat([3.75,-0.75,0]))
Anchor389 = x3d.Anchor()
Anchor389.setDescription("ArtDeco23 view")
Anchor389.setUrl(["#View23"])
Shape390 = x3d.Shape()
Appearance391 = x3d.Appearance()
ProtoInstance392 = x3d.ProtoInstance()
ProtoInstance392.setName("ArtDeco23")

Appearance391.setMaterial(ProtoInstance392)

Shape390.setAppearance(Appearance391)
Sphere393 = x3d.Sphere()
Sphere393.setUSE("Ball")

Shape390.setGeometry(Sphere393)

Anchor389.addChild(Shape390)

Transform388.addChild(Anchor389)
Transform394 = x3d.Transform()
Transform394.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor395 = x3d.Anchor()
Anchor395.setDescription("ArtDeco23 view source documentation")
Anchor395.setParameter(["target=_source"])
Anchor395.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23"])
Shape396 = x3d.Shape()
Appearance397 = x3d.Appearance()
Material398 = x3d.Material()
Material398.setUSE("TextMat")

Appearance397.setMaterial(Material398)

Shape396.setAppearance(Appearance397)
Text399 = x3d.Text()
Text399.setString(["ArtDeco23"])
FontStyle400 = x3d.FontStyle()
FontStyle400.setUSE("Style")

Text399.setFontStyle(FontStyle400)

Shape396.setGeometry(Text399)

Anchor395.addChild(Shape396)

Transform394.addChild(Anchor395)

Transform388.addChild(Transform394)

Group50.addChild(Transform388)
Viewpoint401 = x3d.Viewpoint()
Viewpoint401.setDEF("View24")
Viewpoint401.setDescription("ArtDeco24")
Viewpoint401.setPosition(x3d.doubleToFloat([-3.75,-2.25,3]))

Group50.addChild(Viewpoint401)
Transform402 = x3d.Transform()
Transform402.setTranslation(x3d.doubleToFloat([-3.75,-2.25,0]))
Anchor403 = x3d.Anchor()
Anchor403.setDescription("ArtDeco24 view")
Anchor403.setUrl(["#View24"])
Shape404 = x3d.Shape()
Appearance405 = x3d.Appearance()
ProtoInstance406 = x3d.ProtoInstance()
ProtoInstance406.setName("ArtDeco24")

Appearance405.setMaterial(ProtoInstance406)

Shape404.setAppearance(Appearance405)
Sphere407 = x3d.Sphere()
Sphere407.setUSE("Ball")

Shape404.setGeometry(Sphere407)

Anchor403.addChild(Shape404)

Transform402.addChild(Anchor403)
Transform408 = x3d.Transform()
Transform408.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor409 = x3d.Anchor()
Anchor409.setDescription("ArtDeco24 view source documentation")
Anchor409.setParameter(["target=_source"])
Anchor409.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24"])
Shape410 = x3d.Shape()
Appearance411 = x3d.Appearance()
Material412 = x3d.Material()
Material412.setUSE("TextMat")

Appearance411.setMaterial(Material412)

Shape410.setAppearance(Appearance411)
Text413 = x3d.Text()
Text413.setString(["ArtDeco24"])
FontStyle414 = x3d.FontStyle()
FontStyle414.setUSE("Style")

Text413.setFontStyle(FontStyle414)

Shape410.setGeometry(Text413)

Anchor409.addChild(Shape410)

Transform408.addChild(Anchor409)

Transform402.addChild(Transform408)

Group50.addChild(Transform402)
Viewpoint415 = x3d.Viewpoint()
Viewpoint415.setDEF("View25")
Viewpoint415.setDescription("ArtDeco25")
Viewpoint415.setPosition(x3d.doubleToFloat([-2.25,-2.25,3]))

Group50.addChild(Viewpoint415)
Transform416 = x3d.Transform()
Transform416.setTranslation(x3d.doubleToFloat([-2.25,-2.25,0]))
Anchor417 = x3d.Anchor()
Anchor417.setDescription("ArtDeco25 view")
Anchor417.setUrl(["#View25"])
Shape418 = x3d.Shape()
Appearance419 = x3d.Appearance()
ProtoInstance420 = x3d.ProtoInstance()
ProtoInstance420.setName("ArtDeco25")

Appearance419.setMaterial(ProtoInstance420)

Shape418.setAppearance(Appearance419)
Sphere421 = x3d.Sphere()
Sphere421.setUSE("Ball")

Shape418.setGeometry(Sphere421)

Anchor417.addChild(Shape418)

Transform416.addChild(Anchor417)
Transform422 = x3d.Transform()
Transform422.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor423 = x3d.Anchor()
Anchor423.setDescription("ArtDeco25 view source documentation")
Anchor423.setParameter(["target=_source"])
Anchor423.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25"])
Shape424 = x3d.Shape()
Appearance425 = x3d.Appearance()
Material426 = x3d.Material()
Material426.setUSE("TextMat")

Appearance425.setMaterial(Material426)

Shape424.setAppearance(Appearance425)
Text427 = x3d.Text()
Text427.setString(["ArtDeco25"])
FontStyle428 = x3d.FontStyle()
FontStyle428.setUSE("Style")

Text427.setFontStyle(FontStyle428)

Shape424.setGeometry(Text427)

Anchor423.addChild(Shape424)

Transform422.addChild(Anchor423)

Transform416.addChild(Transform422)

Group50.addChild(Transform416)
Viewpoint429 = x3d.Viewpoint()
Viewpoint429.setDEF("View26")
Viewpoint429.setDescription("ArtDeco26")
Viewpoint429.setPosition(x3d.doubleToFloat([-0.75,-2.25,3]))

Group50.addChild(Viewpoint429)
Transform430 = x3d.Transform()
Transform430.setTranslation(x3d.doubleToFloat([-0.75,-2.25,0]))
Anchor431 = x3d.Anchor()
Anchor431.setDescription("ArtDeco26 view")
Anchor431.setUrl(["#View26"])
Shape432 = x3d.Shape()
Appearance433 = x3d.Appearance()
ProtoInstance434 = x3d.ProtoInstance()
ProtoInstance434.setName("ArtDeco26")

Appearance433.setMaterial(ProtoInstance434)

Shape432.setAppearance(Appearance433)
Sphere435 = x3d.Sphere()
Sphere435.setUSE("Ball")

Shape432.setGeometry(Sphere435)

Anchor431.addChild(Shape432)

Transform430.addChild(Anchor431)
Transform436 = x3d.Transform()
Transform436.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor437 = x3d.Anchor()
Anchor437.setDescription("ArtDeco26 view source documentation")
Anchor437.setParameter(["target=_source"])
Anchor437.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26"])
Shape438 = x3d.Shape()
Appearance439 = x3d.Appearance()
Material440 = x3d.Material()
Material440.setUSE("TextMat")

Appearance439.setMaterial(Material440)

Shape438.setAppearance(Appearance439)
Text441 = x3d.Text()
Text441.setString(["ArtDeco26"])
FontStyle442 = x3d.FontStyle()
FontStyle442.setUSE("Style")

Text441.setFontStyle(FontStyle442)

Shape438.setGeometry(Text441)

Anchor437.addChild(Shape438)

Transform436.addChild(Anchor437)

Transform430.addChild(Transform436)

Group50.addChild(Transform430)
Viewpoint443 = x3d.Viewpoint()
Viewpoint443.setDEF("View27")
Viewpoint443.setDescription("ArtDeco27")
Viewpoint443.setPosition(x3d.doubleToFloat([0.75,-2.25,3]))

Group50.addChild(Viewpoint443)
Transform444 = x3d.Transform()
Transform444.setTranslation(x3d.doubleToFloat([0.75,-2.25,0]))
Anchor445 = x3d.Anchor()
Anchor445.setDescription("ArtDeco27 view")
Anchor445.setUrl(["#View27"])
Shape446 = x3d.Shape()
Appearance447 = x3d.Appearance()
ProtoInstance448 = x3d.ProtoInstance()
ProtoInstance448.setName("ArtDeco27")

Appearance447.setMaterial(ProtoInstance448)

Shape446.setAppearance(Appearance447)
Sphere449 = x3d.Sphere()
Sphere449.setUSE("Ball")

Shape446.setGeometry(Sphere449)

Anchor445.addChild(Shape446)

Transform444.addChild(Anchor445)
Transform450 = x3d.Transform()
Transform450.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor451 = x3d.Anchor()
Anchor451.setDescription("ArtDeco27 view source documentation")
Anchor451.setParameter(["target=_source"])
Anchor451.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27"])
Shape452 = x3d.Shape()
Appearance453 = x3d.Appearance()
Material454 = x3d.Material()
Material454.setUSE("TextMat")

Appearance453.setMaterial(Material454)

Shape452.setAppearance(Appearance453)
Text455 = x3d.Text()
Text455.setString(["ArtDeco27"])
FontStyle456 = x3d.FontStyle()
FontStyle456.setUSE("Style")

Text455.setFontStyle(FontStyle456)

Shape452.setGeometry(Text455)

Anchor451.addChild(Shape452)

Transform450.addChild(Anchor451)

Transform444.addChild(Transform450)

Group50.addChild(Transform444)
Viewpoint457 = x3d.Viewpoint()
Viewpoint457.setDEF("View28")
Viewpoint457.setDescription("ArtDeco28")
Viewpoint457.setPosition(x3d.doubleToFloat([2.25,-2.25,3]))

Group50.addChild(Viewpoint457)
Transform458 = x3d.Transform()
Transform458.setTranslation(x3d.doubleToFloat([2.25,-2.25,0]))
Anchor459 = x3d.Anchor()
Anchor459.setDescription("ArtDeco28 view")
Anchor459.setUrl(["#View28"])
Shape460 = x3d.Shape()
Appearance461 = x3d.Appearance()
ProtoInstance462 = x3d.ProtoInstance()
ProtoInstance462.setName("ArtDeco28")

Appearance461.setMaterial(ProtoInstance462)

Shape460.setAppearance(Appearance461)
Sphere463 = x3d.Sphere()
Sphere463.setUSE("Ball")

Shape460.setGeometry(Sphere463)

Anchor459.addChild(Shape460)

Transform458.addChild(Anchor459)
Transform464 = x3d.Transform()
Transform464.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor465 = x3d.Anchor()
Anchor465.setDescription("ArtDeco28 view source documentation")
Anchor465.setParameter(["target=_source"])
Anchor465.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28"])
Shape466 = x3d.Shape()
Appearance467 = x3d.Appearance()
Material468 = x3d.Material()
Material468.setUSE("TextMat")

Appearance467.setMaterial(Material468)

Shape466.setAppearance(Appearance467)
Text469 = x3d.Text()
Text469.setString(["ArtDeco28"])
FontStyle470 = x3d.FontStyle()
FontStyle470.setUSE("Style")

Text469.setFontStyle(FontStyle470)

Shape466.setGeometry(Text469)

Anchor465.addChild(Shape466)

Transform464.addChild(Anchor465)

Transform458.addChild(Transform464)

Group50.addChild(Transform458)
Viewpoint471 = x3d.Viewpoint()
Viewpoint471.setDEF("View29")
Viewpoint471.setDescription("ArtDeco29")
Viewpoint471.setPosition(x3d.doubleToFloat([3.75,-2.25,3]))

Group50.addChild(Viewpoint471)
Transform472 = x3d.Transform()
Transform472.setTranslation(x3d.doubleToFloat([3.75,-2.25,0]))
Anchor473 = x3d.Anchor()
Anchor473.setDescription("ArtDeco29 view")
Anchor473.setUrl(["#View29"])
Shape474 = x3d.Shape()
Appearance475 = x3d.Appearance()
ProtoInstance476 = x3d.ProtoInstance()
ProtoInstance476.setName("ArtDeco29")

Appearance475.setMaterial(ProtoInstance476)

Shape474.setAppearance(Appearance475)
Sphere477 = x3d.Sphere()
Sphere477.setUSE("Ball")

Shape474.setGeometry(Sphere477)

Anchor473.addChild(Shape474)

Transform472.addChild(Anchor473)
Transform478 = x3d.Transform()
Transform478.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor479 = x3d.Anchor()
Anchor479.setDescription("ArtDeco29 view source documentation")
Anchor479.setParameter(["target=_source"])
Anchor479.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29"])
Shape480 = x3d.Shape()
Appearance481 = x3d.Appearance()
Material482 = x3d.Material()
Material482.setUSE("TextMat")

Appearance481.setMaterial(Material482)

Shape480.setAppearance(Appearance481)
Text483 = x3d.Text()
Text483.setString(["ArtDeco29"])
FontStyle484 = x3d.FontStyle()
FontStyle484.setUSE("Style")

Text483.setFontStyle(FontStyle484)

Shape480.setGeometry(Text483)

Anchor479.addChild(Shape480)

Transform478.addChild(Anchor479)

Transform472.addChild(Transform478)

Group50.addChild(Transform472)
Viewpoint485 = x3d.Viewpoint()
Viewpoint485.setDEF("View30")
Viewpoint485.setDescription("ArtDeco30")
Viewpoint485.setPosition(x3d.doubleToFloat([-3.75,-3.75,3]))

Group50.addChild(Viewpoint485)
Transform486 = x3d.Transform()
Transform486.setTranslation(x3d.doubleToFloat([-3.75,-3.75,0]))
Anchor487 = x3d.Anchor()
Anchor487.setDescription("ArtDeco30 view")
Anchor487.setUrl(["#View30"])
Shape488 = x3d.Shape()
Appearance489 = x3d.Appearance()
ProtoInstance490 = x3d.ProtoInstance()
ProtoInstance490.setName("ArtDeco30")

Appearance489.setMaterial(ProtoInstance490)

Shape488.setAppearance(Appearance489)
Sphere491 = x3d.Sphere()
Sphere491.setUSE("Ball")

Shape488.setGeometry(Sphere491)

Anchor487.addChild(Shape488)

Transform486.addChild(Anchor487)
Transform492 = x3d.Transform()
Transform492.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor493 = x3d.Anchor()
Anchor493.setDescription("ArtDeco30 view source documentation")
Anchor493.setParameter(["target=_source"])
Anchor493.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30"])
Shape494 = x3d.Shape()
Appearance495 = x3d.Appearance()
Material496 = x3d.Material()
Material496.setUSE("TextMat")

Appearance495.setMaterial(Material496)

Shape494.setAppearance(Appearance495)
Text497 = x3d.Text()
Text497.setString(["ArtDeco30"])
FontStyle498 = x3d.FontStyle()
FontStyle498.setUSE("Style")

Text497.setFontStyle(FontStyle498)

Shape494.setGeometry(Text497)

Anchor493.addChild(Shape494)

Transform492.addChild(Anchor493)

Transform486.addChild(Transform492)

Group50.addChild(Transform486)
Viewpoint499 = x3d.Viewpoint()
Viewpoint499.setDEF("View31")
Viewpoint499.setDescription("ArtDeco31")
Viewpoint499.setPosition(x3d.doubleToFloat([-2.25,-3.75,3]))

Group50.addChild(Viewpoint499)
Transform500 = x3d.Transform()
Transform500.setTranslation(x3d.doubleToFloat([-2.25,-3.75,0]))
Anchor501 = x3d.Anchor()
Anchor501.setDescription("ArtDeco31 view")
Anchor501.setUrl(["#View31"])
Shape502 = x3d.Shape()
Appearance503 = x3d.Appearance()
ProtoInstance504 = x3d.ProtoInstance()
ProtoInstance504.setName("ArtDeco31")

Appearance503.setMaterial(ProtoInstance504)

Shape502.setAppearance(Appearance503)
Sphere505 = x3d.Sphere()
Sphere505.setUSE("Ball")

Shape502.setGeometry(Sphere505)

Anchor501.addChild(Shape502)

Transform500.addChild(Anchor501)
Transform506 = x3d.Transform()
Transform506.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor507 = x3d.Anchor()
Anchor507.setDescription("ArtDeco31 view source documentation")
Anchor507.setParameter(["target=_source"])
Anchor507.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31"])
Shape508 = x3d.Shape()
Appearance509 = x3d.Appearance()
Material510 = x3d.Material()
Material510.setUSE("TextMat")

Appearance509.setMaterial(Material510)

Shape508.setAppearance(Appearance509)
Text511 = x3d.Text()
Text511.setString(["ArtDeco31"])
FontStyle512 = x3d.FontStyle()
FontStyle512.setUSE("Style")

Text511.setFontStyle(FontStyle512)

Shape508.setGeometry(Text511)

Anchor507.addChild(Shape508)

Transform506.addChild(Anchor507)

Transform500.addChild(Transform506)

Group50.addChild(Transform500)
Viewpoint513 = x3d.Viewpoint()
Viewpoint513.setDEF("View32")
Viewpoint513.setDescription("ArtDeco32")
Viewpoint513.setPosition(x3d.doubleToFloat([-0.75,-3.75,3]))

Group50.addChild(Viewpoint513)
Transform514 = x3d.Transform()
Transform514.setTranslation(x3d.doubleToFloat([-0.75,-3.75,0]))
Anchor515 = x3d.Anchor()
Anchor515.setDescription("ArtDeco32 view")
Anchor515.setUrl(["#View32"])
Shape516 = x3d.Shape()
Appearance517 = x3d.Appearance()
ProtoInstance518 = x3d.ProtoInstance()
ProtoInstance518.setName("ArtDeco32")

Appearance517.setMaterial(ProtoInstance518)

Shape516.setAppearance(Appearance517)
Sphere519 = x3d.Sphere()
Sphere519.setUSE("Ball")

Shape516.setGeometry(Sphere519)

Anchor515.addChild(Shape516)

Transform514.addChild(Anchor515)
Transform520 = x3d.Transform()
Transform520.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor521 = x3d.Anchor()
Anchor521.setDescription("ArtDeco32 view source documentation")
Anchor521.setParameter(["target=_source"])
Anchor521.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32"])
Shape522 = x3d.Shape()
Appearance523 = x3d.Appearance()
Material524 = x3d.Material()
Material524.setUSE("TextMat")

Appearance523.setMaterial(Material524)

Shape522.setAppearance(Appearance523)
Text525 = x3d.Text()
Text525.setString(["ArtDeco32"])
FontStyle526 = x3d.FontStyle()
FontStyle526.setUSE("Style")

Text525.setFontStyle(FontStyle526)

Shape522.setGeometry(Text525)

Anchor521.addChild(Shape522)

Transform520.addChild(Anchor521)

Transform514.addChild(Transform520)

Group50.addChild(Transform514)
Viewpoint527 = x3d.Viewpoint()
Viewpoint527.setDEF("View33")
Viewpoint527.setDescription("ArtDeco33")
Viewpoint527.setPosition(x3d.doubleToFloat([0.75,-3.75,3]))

Group50.addChild(Viewpoint527)
Transform528 = x3d.Transform()
Transform528.setTranslation(x3d.doubleToFloat([0.75,-3.75,0]))
Anchor529 = x3d.Anchor()
Anchor529.setDescription("ArtDeco33 view")
Anchor529.setUrl(["#View33"])
Shape530 = x3d.Shape()
Appearance531 = x3d.Appearance()
ProtoInstance532 = x3d.ProtoInstance()
ProtoInstance532.setName("ArtDeco33")

Appearance531.setMaterial(ProtoInstance532)

Shape530.setAppearance(Appearance531)
Sphere533 = x3d.Sphere()
Sphere533.setUSE("Ball")

Shape530.setGeometry(Sphere533)

Anchor529.addChild(Shape530)

Transform528.addChild(Anchor529)
Transform534 = x3d.Transform()
Transform534.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor535 = x3d.Anchor()
Anchor535.setDescription("ArtDeco33 view source documentation")
Anchor535.setParameter(["target=_source"])
Anchor535.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33"])
Shape536 = x3d.Shape()
Appearance537 = x3d.Appearance()
Material538 = x3d.Material()
Material538.setUSE("TextMat")

Appearance537.setMaterial(Material538)

Shape536.setAppearance(Appearance537)
Text539 = x3d.Text()
Text539.setString(["ArtDeco33"])
FontStyle540 = x3d.FontStyle()
FontStyle540.setUSE("Style")

Text539.setFontStyle(FontStyle540)

Shape536.setGeometry(Text539)

Anchor535.addChild(Shape536)

Transform534.addChild(Anchor535)

Transform528.addChild(Transform534)

Group50.addChild(Transform528)
Viewpoint541 = x3d.Viewpoint()
Viewpoint541.setDEF("View34")
Viewpoint541.setDescription("ArtDeco34")
Viewpoint541.setPosition(x3d.doubleToFloat([2.25,-3.75,3]))

Group50.addChild(Viewpoint541)
Transform542 = x3d.Transform()
Transform542.setTranslation(x3d.doubleToFloat([2.25,-3.75,0]))
Anchor543 = x3d.Anchor()
Anchor543.setDescription("ArtDeco34 view")
Anchor543.setUrl(["#View34"])
Shape544 = x3d.Shape()
Appearance545 = x3d.Appearance()
ProtoInstance546 = x3d.ProtoInstance()
ProtoInstance546.setName("ArtDeco34")

Appearance545.setMaterial(ProtoInstance546)

Shape544.setAppearance(Appearance545)
Sphere547 = x3d.Sphere()
Sphere547.setUSE("Ball")

Shape544.setGeometry(Sphere547)

Anchor543.addChild(Shape544)

Transform542.addChild(Anchor543)
Transform548 = x3d.Transform()
Transform548.setTranslation(x3d.doubleToFloat([0,0.3,0.5]))
Anchor549 = x3d.Anchor()
Anchor549.setDescription("ArtDeco34 view source documentation")
Anchor549.setParameter(["target=_source"])
Anchor549.setUrl(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34"])
Shape550 = x3d.Shape()
Appearance551 = x3d.Appearance()
Material552 = x3d.Material()
Material552.setUSE("TextMat")

Appearance551.setMaterial(Material552)

Shape550.setAppearance(Appearance551)
Text553 = x3d.Text()
Text553.setString(["ArtDeco34"])
FontStyle554 = x3d.FontStyle()
FontStyle554.setUSE("Style")

Text553.setFontStyle(FontStyle554)

Shape550.setGeometry(Text553)

Anchor549.addChild(Shape550)

Transform548.addChild(Anchor549)

Transform542.addChild(Transform548)

Group50.addChild(Transform542)

Scene13.addChild(Group50)
ROUTE555 = x3d.ROUTE()
ROUTE555.setFromField("fraction_changed")
ROUTE555.setFromNode("Close_Time")
ROUTE555.setToField("set_fraction")
ROUTE555.setToNode("Close_Mover")

Scene13.addChild(ROUTE555)
ROUTE556 = x3d.ROUTE()
ROUTE556.setFromField("value_changed")
ROUTE556.setFromNode("Close_Mover")
ROUTE556.setToField("set_translation")
ROUTE556.setToNode("Close_travel")

Scene13.addChild(ROUTE556)

X3D0.setScene(Scene13)
X3D0.toFileX3D("../data/ArtDecoExamples.new.graalpy.x3d")
X3D0.toFileJSON("../data/ArtDecoExamples.new.graalpy.json")
