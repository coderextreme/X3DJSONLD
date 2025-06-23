import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("HelloWorldCommented.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Numerous comments added to simple X3D scene example for testing JSON encoding alternatives.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("created")
meta4.setContent("19 December 2015")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("modified")
meta5.setContent("20 October 2019")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("creator")
meta6.setContent("Don Brutzman")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("info")
meta7.setContent("HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental.")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("HelloWorldCommented.json")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("HelloWorldCommentedOriginalEncoding.json")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("HelloWorldCommentedAlternativeEncoding.json")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("identifier")
meta11.setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("license")
meta12.setContent("https://www.web3d.org/x3d/content/examples/license.html")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("generator")
meta13.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta13)

X3D0.setHead(head1)
Scene14 = x3d.Scene()
#Example scene to illustrate comments interspersed among X3D nodes and fields (XML elements and attributes)
#WorldInfo begin
WorldInfo15 = x3d.WorldInfo()
WorldInfo15.setTitle("Hello world!")

Scene14.addChildren(WorldInfo15)
#WorldInfo complete, Group begin
Group16 = x3d.Group()
#Viewpoint begin
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.setDEF("ViewUpClose")
Viewpoint17.setCenterOfRotation(x3d.doubleToFloat([0,-1,0]))
Viewpoint17.setDescription("Hello world!")
Viewpoint17.setPosition(x3d.doubleToFloat([0,-1,7]))

Group16.addChildren(Viewpoint17)
#Viewpoint complete, Transform begin
Transform18 = x3d.Transform()
Transform18.setRotation(x3d.doubleToFloat([0,1,0,3]))
#Shape begin
Shape19 = x3d.Shape()
#Sphere begin
#Sphere complete, Appearance begin
#Appearance complete
Sphere20 = x3d.Sphere()

Shape19.setGeometry(Sphere20)
Appearance21 = x3d.Appearance()
#Material begin
#Material complete, ImageTexture begin
#ImageTexture complete
Material22 = x3d.Material()
Material22.setDEF("MaterialLightBlue")
Material22.setDiffuseColor(x3d.doubleToFloat([0.1,0.5,1]))

Appearance21.setMaterial(Material22)
ImageTexture23 = x3d.ImageTexture()
ImageTexture23.setDEF("ImageCloudlessEarth")
ImageTexture23.setUrl(["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"])

Appearance21.setTexture(ImageTexture23)

Shape19.setAppearance(Appearance21)

Transform18.addChild(Shape19)
#Shape complete

Group16.addChildren(Transform18)
#Transform complete, Transform begin
Transform24 = x3d.Transform()
Transform24.setTranslation(x3d.doubleToFloat([0,-2,0]))
#Shape begin
Shape25 = x3d.Shape()
#Text begin
#Text complete, Appearance begin
#Appearance complete
Text26 = x3d.Text()
Text26.setDEF("TextMessage")
Text26.setString(["Hello","world!"])
#FontStyle begin
#FontStyle complete
FontStyle27 = x3d.FontStyle()
FontStyle27.setJustify(["MIDDLE","MIDDLE"])

Text26.setFontStyle(FontStyle27)

Shape25.setGeometry(Text26)
Appearance28 = x3d.Appearance()
#Material begin
#Material complete
Material29 = x3d.Material()
Material29.setUSE("MaterialLightBlue")

Appearance28.setMaterial(Material29)

Shape25.setAppearance(Appearance28)

Transform24.addChild(Shape25)
#Shape complete

Group16.addChildren(Transform24)
#Transform complete

Scene14.addChildren(Group16)
#Group complete

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/HelloWorldCommented.new.python.x3d")
X3D0.toFileJSON("../data/HelloWorldCommented.new.python.json")
