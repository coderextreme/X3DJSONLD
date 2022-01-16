from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
component2 = component()
component2.setName("Networking")
component2.setLevel(2)

head1.addComponent(component2)
component3 = component()
component3.setName("Core")
component3.setLevel(2)

head1.addComponent(component3)
meta4 = meta()
meta4.setName("title")
meta4.setContent("t3.x3d")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("identifier")
meta5.setContent("http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("generator")
meta6.setContent("view3dscene, https://castle-engine.io/view3dscene.php")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("creator")
meta7.setContent("Andreas Plesch and John Carlson")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("source")
meta8.setContent("t1.wrl")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("description")
meta9.setContent("Test Case for Proto Expander")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("license")
meta10.setContent("https://www.web3d.org/x3d/content/examples/license.html")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("translated")
meta11.setContent("12 May 2020")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("generator")
meta12.setContent("DOM2JSONSerializer.js, https://github.com/coderextreme/X3DJSONLD/blob/master/src/main/node/DOM2JSONSerializer.js")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("reference")
meta13.setContent("X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")

head1.addMeta(meta13)

X3D0.setHead(head1)
Scene14 = Scene()
NavigationInfo15 = NavigationInfo()
NavigationInfo15.setType(["EXAMINE","FLY","WALK"])
NavigationInfo15.setSpeed(3)
NavigationInfo15.setAvatarSize([200,200,120])

Scene14.addChildren(NavigationInfo15)
WorldInfo16 = WorldInfo()
WorldInfo16.setTitle("Arts Mapper")

Scene14.addChildren(WorldInfo16)
Viewpoint17 = Viewpoint()
Viewpoint17.setDescription("looking North")
Viewpoint17.setPosition([0,60,110])
Viewpoint17.setOrientation([1,0,0,-0.699999988079071])
Viewpoint17.setFieldOfView(0.785398125648499)

Scene14.addChildren(Viewpoint17)
Transform18 = Transform()
Transform18.setTranslation([-468,0,315])
Anchor19 = Anchor()
Anchor19.setUrl(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor19.setDescription("High Peak Community Arts")
Transform20 = Transform()
Shape21 = Shape()
Appearance22 = Appearance()
Material23 = Material()
Material23.setDiffuseColor([1,1,1])
Material23.setEmissiveColor([0,0.300000011920929,1])

Appearance22.setMaterial(Material23)

Shape21.setAppearance(Appearance22)
Sphere24 = Sphere()
Sphere24.setRadius(5.10000002384186)

Shape21.setGeometry(Sphere24)

Transform20.addChildren(Shape21)

Anchor19.addChildren(Transform20)

Transform18.addChildren(Anchor19)
Anchor25 = Anchor()
Anchor25.setUrl(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor25.setDescription("People Express")
Transform26 = Transform()
Shape27 = Shape()
Appearance28 = Appearance()
Material29 = Material()
Material29.setDiffuseColor([1,1,1])
Material29.setEmissiveColor([0.600000023841858,0,0.600000023841858])

Appearance28.setMaterial(Material29)

Shape27.setAppearance(Appearance28)
Sphere30 = Sphere()
Sphere30.setRadius(5.10000002384186)

Shape27.setGeometry(Sphere30)

Transform26.addChildren(Shape27)

Anchor25.addChildren(Transform26)

Transform18.addChildren(Anchor25)
Anchor31 = Anchor()
Anchor31.setUrl(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor31.setDescription("QArts/Studios")
Transform32 = Transform()
Shape33 = Shape()
Appearance34 = Appearance()
Material35 = Material()
Material35.setDiffuseColor([1,1,1])
Material35.setEmissiveColor([0.600000023841858,0,0.600000023841858])

Appearance34.setMaterial(Material35)

Shape33.setAppearance(Appearance34)
Sphere36 = Sphere()
Sphere36.setRadius(5.10000002384186)

Shape33.setGeometry(Sphere36)

Transform32.addChildren(Shape33)

Anchor31.addChildren(Transform32)

Transform18.addChildren(Anchor31)
Anchor37 = Anchor()
Anchor37.setUrl(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor37.setDescription("First Movement")
Transform38 = Transform()
Shape39 = Shape()
Appearance40 = Appearance()
Material41 = Material()
Material41.setDiffuseColor([1,1,1])
Material41.setEmissiveColor([1,0,0.200000002980232])

Appearance40.setMaterial(Material41)

Shape39.setAppearance(Appearance40)
Sphere42 = Sphere()
Sphere42.setRadius(5.10000002384186)

Shape39.setGeometry(Sphere42)

Transform38.addChildren(Shape39)

Anchor37.addChildren(Transform38)

Transform18.addChildren(Anchor37)
Anchor43 = Anchor()
Anchor43.setUrl(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor43.setDescription("City Arts")
Transform44 = Transform()
Shape45 = Shape()
Appearance46 = Appearance()
Material47 = Material()
Material47.setDiffuseColor([1,1,1])
Material47.setEmissiveColor([0.600000023841858,0,0.600000023841858])

Appearance46.setMaterial(Material47)

Shape45.setAppearance(Appearance46)
Sphere48 = Sphere()
Sphere48.setRadius(5.10000002384186)

Shape45.setGeometry(Sphere48)

Transform44.addChildren(Shape45)

Anchor43.addChildren(Transform44)

Transform18.addChildren(Anchor43)
Anchor49 = Anchor()
Anchor49.setUrl(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor49.setDescription("Indigo Dance Group (Salamanda Tandem)")
Transform50 = Transform()
Shape51 = Shape()
Appearance52 = Appearance()
Material53 = Material()
Material53.setDiffuseColor([1,1,1])
Material53.setEmissiveColor([0,0.300000011920929,1])

Appearance52.setMaterial(Material53)

Shape51.setAppearance(Appearance52)
Sphere54 = Sphere()
Sphere54.setRadius(5.10000002384186)

Shape51.setGeometry(Sphere54)

Transform50.addChildren(Shape51)

Anchor49.addChildren(Transform50)

Transform18.addChildren(Anchor49)
Anchor55 = Anchor()
Anchor55.setUrl(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor55.setDescription("Watering Seeds")
Transform56 = Transform()
Shape57 = Shape()
Appearance58 = Appearance()
Material59 = Material()
Material59.setDiffuseColor([1,1,1])
Material59.setEmissiveColor([0,0.300000011920929,1])

Appearance58.setMaterial(Material59)

Shape57.setAppearance(Appearance58)
Sphere60 = Sphere()
Sphere60.setRadius(5.10000002384186)

Shape57.setGeometry(Sphere60)

Transform56.addChildren(Shape57)

Anchor55.addChildren(Transform56)

Transform18.addChildren(Anchor55)
Anchor61 = Anchor()
Anchor61.setUrl(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor61.setDescription("Fased In The Arts")
Transform62 = Transform()
Shape63 = Shape()
Appearance64 = Appearance()
Material65 = Material()
Material65.setDiffuseColor([1,1,1])
Material65.setEmissiveColor([0,0.300000011920929,1])

Appearance64.setMaterial(Material65)

Shape63.setAppearance(Appearance64)
Sphere66 = Sphere()
Sphere66.setRadius(5.10000002384186)

Shape63.setGeometry(Sphere66)

Transform62.addChildren(Shape63)

Anchor61.addChildren(Transform62)

Transform18.addChildren(Anchor61)
Anchor67 = Anchor()
Anchor67.setUrl(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor67.setDescription("27a Access Artspace")
Transform68 = Transform()
Shape69 = Shape()
Appearance70 = Appearance()
Material71 = Material()
Material71.setDiffuseColor([1,1,1])
Material71.setEmissiveColor([1,0,0.200000002980232])

Appearance70.setMaterial(Material71)

Shape69.setAppearance(Appearance70)
Sphere72 = Sphere()
Sphere72.setRadius(5.10000002384186)

Shape69.setGeometry(Sphere72)

Transform68.addChildren(Shape69)

Anchor67.addChildren(Transform68)

Transform18.addChildren(Anchor67)
Anchor73 = Anchor()
Anchor73.setUrl(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor73.setDescription("Bamboozle Theatre Company")
Transform74 = Transform()
Shape75 = Shape()
Appearance76 = Appearance()
Material77 = Material()
Material77.setDiffuseColor([1,1,1])
Material77.setEmissiveColor([0,0.300000011920929,1])

Appearance76.setMaterial(Material77)

Shape75.setAppearance(Appearance76)
Sphere78 = Sphere()
Sphere78.setRadius(5.10000002384186)

Shape75.setGeometry(Sphere78)

Transform74.addChildren(Shape75)

Anchor73.addChildren(Transform74)

Transform18.addChildren(Anchor73)
Anchor79 = Anchor()
Anchor79.setUrl(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor79.setDescription("Mantle Community Arts")
Transform80 = Transform()
Shape81 = Shape()
Appearance82 = Appearance()
Material83 = Material()
Material83.setDiffuseColor([1,1,1])
Material83.setEmissiveColor([0,0.300000011920929,1])

Appearance82.setMaterial(Material83)

Shape81.setAppearance(Appearance82)
Sphere84 = Sphere()
Sphere84.setRadius(5.10000002384186)

Shape81.setGeometry(Sphere84)

Transform80.addChildren(Shape81)

Anchor79.addChildren(Transform80)

Transform18.addChildren(Anchor79)
Anchor85 = Anchor()
Anchor85.setUrl(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor85.setDescription("Artlink East")
Transform86 = Transform()
Shape87 = Shape()
Appearance88 = Appearance()
Material89 = Material()
Material89.setDiffuseColor([1,1,1])
Material89.setEmissiveColor([0,0.300000011920929,1])

Appearance88.setMaterial(Material89)

Shape87.setAppearance(Appearance88)
Sphere90 = Sphere()
Sphere90.setRadius(5.10000002384186)

Shape87.setGeometry(Sphere90)

Transform86.addChildren(Shape87)

Anchor85.addChildren(Transform86)

Transform18.addChildren(Anchor85)
Anchor91 = Anchor()
Anchor91.setUrl(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor91.setDescription("Creations")
Transform92 = Transform()
Shape93 = Shape()
Appearance94 = Appearance()
Material95 = Material()
Material95.setDiffuseColor([1,1,1])
Material95.setEmissiveColor([0,0.300000011920929,1])

Appearance94.setMaterial(Material95)

Shape93.setAppearance(Appearance94)
Sphere96 = Sphere()
Sphere96.setRadius(5.10000002384186)

Shape93.setGeometry(Sphere96)

Transform92.addChildren(Shape93)

Anchor91.addChildren(Transform92)

Transform18.addChildren(Anchor91)
Anchor97 = Anchor()
Anchor97.setUrl(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor97.setDescription("New Perspectives")
Transform98 = Transform()
Shape99 = Shape()
Appearance100 = Appearance()
Material101 = Material()
Material101.setDiffuseColor([1,1,1])
Material101.setEmissiveColor([1,0,0.200000002980232])

Appearance100.setMaterial(Material101)

Shape99.setAppearance(Appearance100)
Sphere102 = Sphere()
Sphere102.setRadius(5.10000002384186)

Shape99.setGeometry(Sphere102)

Transform98.addChildren(Shape99)

Anchor97.addChildren(Transform98)

Transform18.addChildren(Anchor97)
Anchor103 = Anchor()
Anchor103.setUrl(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"])
Anchor103.setDescription("UKan2")
Transform104 = Transform()
Shape105 = Shape()
Appearance106 = Appearance()
Material107 = Material()
Material107.setDiffuseColor([1,1,1])
Material107.setEmissiveColor([0,0.300000011920929,1])

Appearance106.setMaterial(Material107)

Shape105.setAppearance(Appearance106)
Sphere108 = Sphere()
Sphere108.setRadius(5.10000002384186)

Shape105.setGeometry(Sphere108)

Transform104.addChildren(Shape105)

Anchor103.addChildren(Transform104)

Transform18.addChildren(Anchor103)

Scene14.addChildren(Transform18)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/t3_RoundTrip.x3d")
