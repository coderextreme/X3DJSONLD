import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("Trebuchet.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Working model of a 14th century Trebuchet Catapult.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("LT Joe Roth")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("created")
meta5.setContent("20 June 2001")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("modified")
meta6.setContent("20 October 2019")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("version")
meta7.setContent("7.8")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("identifier")
meta8.setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("http://trebuchet.com")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("http://members.home.net/dimona")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("subject")
meta11.setContent("trebuchet catapult Monty Python")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("reference")
meta12.setContent("Permission granted for use of the VRML chicken I own a copy of Monty Python and the Holy Grail I have requested permission to use for non profit use. No response received. I will use the sound clips under \"Fair Use\" clause of the DMCA")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("reference")
meta13.setContent("https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("reference")
meta14.setContent("http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("generator")
meta15.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("license")
meta16.setContent("../license.html")

head1.addMeta(meta16)

X3D0.setHead(head1)
Scene17 = x3d.Scene()
WorldInfo18 = x3d.WorldInfo()
WorldInfo18.setTitle("Trebuchet.x3d")

Scene17.addChildren(WorldInfo18)
Background19 = x3d.Background()
Background19.setBackUrl(["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg"])
Background19.setBottomUrl(["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg"])
Background19.setFrontUrl(["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg"])
Background19.setGroundAngle([1.309,1.570796])
Background19.setGroundColor([0.1,0.1,0,0.4,0.25,0.2,0.6,0.6,0.6])
Background19.setLeftUrl(["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg"])
Background19.setRightUrl(["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg"])
Background19.setSkyAngle([1.309,1.57079])
Background19.setSkyColor([0,0.2,0.7,0,0.5,1,1,1,1])
Background19.setTopUrl(["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg"])

Scene17.addChildren(Background19)
Sound20 = x3d.Sound()
Sound20.setMaxBack(1000)
Sound20.setMaxFront(1000)
AudioClip21 = x3d.AudioClip()
AudioClip21.setDEF("HolyGrail")
AudioClip21.setDescription("HolyGrail")
AudioClip21.setLoop(True)
AudioClip21.setUrl(["holygral.mp3","http://www.nps.navy.mil/code32/vrml/holygral.mp3"])

Sound20.setSource(AudioClip21)

Scene17.addChildren(Sound20)
Shape22 = x3d.Shape()
Box23 = x3d.Box()
Box23.setSize([10000,1,10000])

Shape22.setGeometry(Box23)
Appearance24 = x3d.Appearance()
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.setUrl(["grass.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg"])

Appearance24.setTexture(ImageTexture25)

Shape22.setAppearance(Appearance24)

Scene17.addChildren(Shape22)
Transform26 = x3d.Transform()
Transform26.setRotation([0,1,0,1.57])
Transform26.setScale([0.5,0.5,0.5])
Transform26.setTranslation([10.5,6.5,4.5])
Shape27 = x3d.Shape()
Appearance28 = x3d.Appearance()
Appearance28.setDEF("TextAppearance")
Material29 = x3d.Material()
Material29.setDiffuseColor([1,0,0])
Material29.setEmissiveColor([1,1,0])

Appearance28.setMaterial(Material29)

Shape27.setAppearance(Appearance28)
Text30 = x3d.Text()
Text30.setString(["Click Sling to Select Projectile"])
FontStyle31 = x3d.FontStyle()

Text30.setFontStyle(FontStyle31)

Shape27.setGeometry(Text30)

Transform26.addChild(Shape27)

Scene17.addChildren(Transform26)
Transform32 = x3d.Transform()
Transform32.setRotation([0,1,0,1.57])
Transform32.setScale([0.5,0.5,0.5])
Transform32.setTranslation([11,5.5,6])
Switch33 = x3d.Switch()
Switch33.setDEF("Weight")
Switch33.setWhichChoice(0)
Group34 = x3d.Group()
Shape35 = x3d.Shape()
Appearance36 = x3d.Appearance()
Appearance36.setUSE("TextAppearance")

Shape35.setAppearance(Appearance36)
Text37 = x3d.Text()
Text37.setString(["Click Here to Change Counter Weight (50 lbs)"])

Shape35.setGeometry(Text37)

Group34.addChildren(Shape35)

Switch33.addChildren(Group34)
Group38 = x3d.Group()
Shape39 = x3d.Shape()
Appearance40 = x3d.Appearance()
Appearance40.setUSE("TextAppearance")

Shape39.setAppearance(Appearance40)
Text41 = x3d.Text()
Text41.setString(["Click Here to Change Counter Weight (500 lbs)"])

Shape39.setGeometry(Text41)

Group38.addChildren(Shape39)

Switch33.addChildren(Group38)
Group42 = x3d.Group()
Shape43 = x3d.Shape()
Appearance44 = x3d.Appearance()
Appearance44.setUSE("TextAppearance")

Shape43.setAppearance(Appearance44)
Text45 = x3d.Text()
Text45.setString(["Click Here to Change Counter Weight (1000 lbs)"])

Shape43.setGeometry(Text45)

Group42.addChildren(Shape43)

Switch33.addChildren(Group42)
Group46 = x3d.Group()
Shape47 = x3d.Shape()
Appearance48 = x3d.Appearance()
Appearance48.setUSE("TextAppearance")

Shape47.setAppearance(Appearance48)
Text49 = x3d.Text()
Text49.setString(["Click Here to Change Counter Weight (10000 lbs)"])

Shape47.setGeometry(Text49)

Group46.addChildren(Shape47)

Switch33.addChildren(Group46)

Transform32.addChildren(Switch33)
TouchSensor50 = x3d.TouchSensor()
TouchSensor50.setDEF("weightselector")
TouchSensor50.setDescription("weight selector")

Transform32.addChildren(TouchSensor50)
Transform51 = x3d.Transform()
Transform51.setTranslation([8,0,0])
Shape52 = x3d.Shape()
Box53 = x3d.Box()
Box53.setSize([20,1,1])

Shape52.setGeometry(Box53)
Appearance54 = x3d.Appearance()
Material55 = x3d.Material()
Material55.setTransparency(1)

Appearance54.setMaterial(Material55)

Shape52.setAppearance(Appearance54)

Transform51.addChild(Shape52)

Transform32.addChildren(Transform51)

Scene17.addChildren(Transform32)
Transform56 = x3d.Transform()
Transform56.setRotation([0,1,0,1.57])
Transform56.setTranslation([10,0.5,4.5])
Transform57 = x3d.Transform()
Transform57.setDEF("launch")
Transform57.setTranslation([0,2,5])
Billboard58 = x3d.Billboard()
Shape59 = x3d.Shape()
Appearance60 = x3d.Appearance()
Material61 = x3d.Material()
Material61.setDiffuseColor([1,0,0])

Appearance60.setMaterial(Material61)

Shape59.setAppearance(Appearance60)
Text62 = x3d.Text()
Text62.setString(["LAUNCH"])
FontStyle63 = x3d.FontStyle()

Text62.setFontStyle(FontStyle63)

Shape59.setGeometry(Text62)

Billboard58.addChildren(Shape59)
Transform64 = x3d.Transform()
Transform64.setTranslation([2,0.3,0])
Shape65 = x3d.Shape()
Box66 = x3d.Box()
Box66.setSize([5,1,1])

Shape65.setGeometry(Box66)
Appearance67 = x3d.Appearance()
Material68 = x3d.Material()
Material68.setTransparency(1)

Appearance67.setMaterial(Material68)

Shape65.setAppearance(Appearance67)

Transform64.addChild(Shape65)

Billboard58.addChildren(Transform64)
Switch69 = x3d.Switch()
Switch69.setDEF("PigdogMonk")
Switch69.setWhichChoice(-1)
Group70 = x3d.Group()
Sound71 = x3d.Sound()
Sound71.setMaxBack(1000)
Sound71.setMaxFront(1000)
AudioClip72 = x3d.AudioClip()
AudioClip72.setDEF("PigDogSound")
AudioClip72.setDescription("PigDogSound")
AudioClip72.setUrl(["pigdog.wav","http://www.nps.navy.mil/code32/vrml/pigdog.wav"])

Sound71.setSource(AudioClip72)

Group70.addChildren(Sound71)

Switch69.addChildren(Group70)
Group73 = x3d.Group()
Sound74 = x3d.Sound()
Sound74.setMaxBack(1000)
Sound74.setMaxFront(1000)
AudioClip75 = x3d.AudioClip()
AudioClip75.setDEF("MonkSound")
AudioClip75.setDescription("MonkSound")
AudioClip75.setUrl(["monks.wav","http://www.nps.navy.mil/code32/vrml/monks.wav"])

Sound74.setSource(AudioClip75)

Group73.addChildren(Sound74)

Switch69.addChildren(Group73)

Billboard58.addChildren(Switch69)

Transform57.addChildren(Billboard58)
TouchSensor76 = x3d.TouchSensor()
TouchSensor76.setDEF("Launch")
TouchSensor76.setDescription("launch!")

Transform57.addChildren(TouchSensor76)

Transform56.addChildren(Transform57)
Transform77 = x3d.Transform()
Switch78 = x3d.Switch()
Switch78.setDEF("projectilename")
Switch78.setWhichChoice(0)
Group79 = x3d.Group()
Shape80 = x3d.Shape()
Appearance81 = x3d.Appearance()
Appearance81.setUSE("TextAppearance")

Shape80.setAppearance(Appearance81)
Text82 = x3d.Text()
Text82.setString(["Bowling Ball (10 lbs)"])
FontStyle83 = x3d.FontStyle()
FontStyle83.setSize(0.5)

Text82.setFontStyle(FontStyle83)

Shape80.setGeometry(Text82)

Group79.addChildren(Shape80)
Sound84 = x3d.Sound()
Sound84.setMaxBack(1000)
Sound84.setMaxFront(1000)
Sound84.setPriority(1)
AudioClip85 = x3d.AudioClip()
AudioClip85.setDEF("HolyHandGrenadeSound")
AudioClip85.setDescription("HolyHandGrenadeSound")
AudioClip85.setUrl(["grenade.wav","http://www.nps.navy.mil/code32/vrml/grenade.wav"])

Sound84.setSource(AudioClip85)

Group79.addChildren(Sound84)

Switch78.addChildren(Group79)
Group86 = x3d.Group()
Shape87 = x3d.Shape()
Appearance88 = x3d.Appearance()
Appearance88.setUSE("TextAppearance")

Shape87.setAppearance(Appearance88)
Text89 = x3d.Text()
Text89.setString(["Cow (1000 lbs)"])
FontStyle90 = x3d.FontStyle()
FontStyle90.setSize(0.5)

Text89.setFontStyle(FontStyle90)

Shape87.setGeometry(Text89)

Group86.addChildren(Shape87)
Sound91 = x3d.Sound()
Sound91.setMaxBack(1000)
Sound91.setMaxFront(1000)
AudioClip92 = x3d.AudioClip()
AudioClip92.setDEF("CowSound")
AudioClip92.setDescription("CowSound")
AudioClip92.setUrl(["lavache.wav","http://www.nps.navy.mil/code32/vrml/lavache.wav"])

Sound91.setSource(AudioClip92)

Group86.addChildren(Sound91)

Switch78.addChildren(Group86)
Group93 = x3d.Group()
Shape94 = x3d.Shape()
Appearance95 = x3d.Appearance()
Appearance95.setUSE("TextAppearance")

Shape94.setAppearance(Appearance95)
Text96 = x3d.Text()
Text96.setString(["Chicken (5 lbs)"])
FontStyle97 = x3d.FontStyle()
FontStyle97.setSize(0.5)

Text96.setFontStyle(FontStyle97)

Shape94.setGeometry(Text96)

Group93.addChildren(Shape94)
Sound98 = x3d.Sound()
Sound98.setMaxBack(1000)
Sound98.setMaxFront(1000)
Sound98.setPriority(1)
AudioClip99 = x3d.AudioClip()
AudioClip99.setDEF("HamsterSound")
AudioClip99.setDescription("HamsterSound")
AudioClip99.setUrl(["hamster.wav","http://www.nps.navy.mil/code32/vrml/hamster.wav"])

Sound98.setSource(AudioClip99)

Group93.addChildren(Sound98)

Switch78.addChildren(Group93)

Transform77.addChildren(Switch78)

Transform56.addChildren(Transform77)

Scene17.addChildren(Transform56)
Transform100 = x3d.Transform()
Transform100.setRotation([0,1,0,-1.67])
Transform101 = x3d.Transform()
Transform101.setDEF("aft")
Transform101.setTranslation([5,5,15])
Transform102 = x3d.Transform()
Transform102.setTranslation([-2.5,-4.5,-2])
Transform103 = x3d.Transform()
Transform103.setUSE("launch")

Transform102.addChildren(Transform103)

Transform101.addChildren(Transform102)

Transform100.addChildren(Transform101)

Scene17.addChildren(Transform100)
Transform104 = x3d.Transform()
Transform104.setTranslation([0,3,0])
Shape105 = x3d.Shape()
Shape105.setDEF("plank")
Box106 = x3d.Box()
Box106.setSize([25,1,1])

Shape105.setGeometry(Box106)
Appearance107 = x3d.Appearance()
Appearance107.setDEF("wood")
ImageTexture108 = x3d.ImageTexture()
ImageTexture108.setDEF("woodTexture")
ImageTexture108.setUrl(["wood.gif","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif"])

Appearance107.setTexture(ImageTexture108)

Shape105.setAppearance(Appearance107)

Transform104.addChild(Shape105)
Transform109 = x3d.Transform()
Transform109.setDEF("angledsupport")
Transform109.setRotation([0,0,1,1])
Transform109.setTranslation([-5,10,0])
Shape110 = x3d.Shape()
Shape110.setUSE("plank")

Transform109.addChild(Shape110)

Transform104.addChildren(Transform109)
Transform111 = x3d.Transform()
Transform111.setDEF("angledsupport2")
Transform111.setRotation([0,0,1,-1])
Transform111.setTranslation([5,10,0])
Shape112 = x3d.Shape()
Shape112.setUSE("plank")

Transform111.addChild(Shape112)

Transform104.addChildren(Transform111)
Transform113 = x3d.Transform()
Transform113.setDEF("verticalsupport")
Transform113.setRotation([0,0,1,1.57])
Transform113.setScale([0.9,1,1])
Transform113.setTranslation([0,11,0])
Shape114 = x3d.Shape()
Shape114.setUSE("plank")

Transform113.addChild(Shape114)
#Main Verticle Support

Transform104.addChildren(Transform113)
Transform115 = x3d.Transform()
Transform115.setDEF("horizontalsupport")
Transform115.setScale([0.4,1,1])
Transform115.setTranslation([0,10,0])
Shape116 = x3d.Shape()
Shape116.setUSE("plank")

Transform115.addChild(Shape116)

Transform104.addChildren(Transform115)
Transform117 = x3d.Transform()
Transform117.setRotation([0,0,1,1.57])
Transform117.setScale([0.6,1,1])
Transform117.setTranslation([0,5,10])
Transform118 = x3d.Transform()
Transform118.setRotation([0,1,0,0.4])
Shape119 = x3d.Shape()
Shape119.setUSE("plank")

Transform118.addChild(Shape119)

Transform117.addChildren(Transform118)

Transform104.addChildren(Transform117)
Transform120 = x3d.Transform()
Transform120.setDEF("panel")
Transform120.setTranslation([0,18.2,-0.3])
Shape121 = x3d.Shape()
Box122 = x3d.Box()
Box122.setSize([5,5,0.5])

Shape121.setGeometry(Box122)
Appearance123 = x3d.Appearance()
Appearance123.setUSE("wood")

Shape121.setAppearance(Appearance123)

Transform120.addChild(Shape121)

Transform104.addChildren(Transform120)
Transform124 = x3d.Transform()
Transform124.setRotation([1,0,0,-1.57])
Transform124.setTranslation([0,0.6,2.5])
Transform125 = x3d.Transform()
Transform125.setRotation([0,0,1,1.57])
Shape126 = x3d.Shape()
Extrusion127 = x3d.Extrusion()
Extrusion127.setBeginCap(False)
Extrusion127.setCrossSection([1,-0.38,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,-0.38,-1,-1.1,1,-1.1,1,-0.38])
Extrusion127.setEndCap(False)
Extrusion127.setSolid(False)
Extrusion127.setSpine([0,6,0,0,-11,0])

Shape126.setGeometry(Extrusion127)
Appearance128 = x3d.Appearance()
Appearance128.setUSE("wood")

Shape126.setAppearance(Appearance128)

Transform125.addChild(Shape126)

Transform124.addChildren(Transform125)

Transform104.addChildren(Transform124)
Transform129 = x3d.Transform()
Transform129.setDEF("flinger")
Transform129.setCenter([7,0,0])
Transform129.setRotation([0,0,1,0.82])
Transform129.setScale([0.9,1,1])
Transform129.setTranslation([-7,18,2.5])
Transform130 = x3d.Transform()
Shape131 = x3d.Shape()
Box132 = x3d.Box()
Box132.setSize([35,1,1])

Shape131.setGeometry(Box132)
Appearance133 = x3d.Appearance()
Appearance133.setUSE("wood")

Shape131.setAppearance(Appearance133)

Transform130.addChild(Shape131)
Transform134 = x3d.Transform()
Transform134.setTranslation([7,0,0])
Shape135 = x3d.Shape()
Box136 = x3d.Box()
Box136.setSize([8,2,2])

Shape135.setGeometry(Box136)
Appearance137 = x3d.Appearance()
Appearance137.setUSE("wood")

Shape135.setAppearance(Appearance137)

Transform134.addChild(Shape135)

Transform130.addChildren(Transform134)

Transform129.addChildren(Transform130)
Transform138 = x3d.Transform()
Transform138.setRotation([1,0,0,1.57])
Transform138.setScale([0.2,0.2,0.2])
Transform138.setTranslation([-15,-1,0])
Shape139 = x3d.Shape()
Shape139.setDEF("Torus")
Appearance140 = x3d.Appearance()
Material141 = x3d.Material()
Material141.setSpecularColor([1,1,1])

Appearance140.setMaterial(Material141)

Shape139.setAppearance(Appearance140)
Extrusion142 = x3d.Extrusion()
Extrusion142.setBeginCap(False)
Extrusion142.setConvex(False)
Extrusion142.setCreaseAngle(1.57)
Extrusion142.setCrossSection([0.9,0,0.81,-0.34,0.63,-0.63,0.34,-0.83,0,-0.9,-0.34,-0.81,-0.63,-0.63,-0.81,-0.34,-0.9,0,-0.81,0.34,-0.63,0.63,-0.34,0.81,0,0.9,0.38,0.81,0.63,0.63,0.81,0.34,0.9,0])
Extrusion142.setEndCap(False)
Extrusion142.setSpine([2,0,0,1.85,0,0.77,1.41,0,1.41,0.77,0,1.85,0,0,2,-0.77,0,1.85,-1.41,0,1.41,-1.85,0,0.77,-2,0,0,-1.85,0,-0.77,-1.41,0,-1.41,-0.77,0,-1.85,0,0,-2,0.77,0,-1.85,1.41,0,-1.41,1.85,0,-0.77,2,0,0])

Shape139.setGeometry(Extrusion142)

Transform138.addChild(Shape139)
Transform143 = x3d.Transform()
Transform143.setTranslation([1,0,2])
Shape144 = x3d.Shape()
Appearance145 = x3d.Appearance()
Appearance145.setDEF("rope")
ImageTexture146 = x3d.ImageTexture()
ImageTexture146.setUSE("woodTexture")

Appearance145.setTexture(ImageTexture146)

Shape144.setAppearance(Appearance145)
Sphere147 = x3d.Sphere()
Sphere147.setRadius(1.5)

Shape144.setGeometry(Sphere147)

Transform143.addChild(Shape144)
#knott

Transform138.addChildren(Transform143)

Transform129.addChildren(Transform138)
#The Unicorn
Transform148 = x3d.Transform()
Transform148.setRotation([0,0,1,1.2])
Transform148.setScale([0.2,0.2,0.2])
Transform148.setTranslation([-18.3,0.3,0])
Shape149 = x3d.Shape()
Cylinder150 = x3d.Cylinder()
Cylinder150.setHeight(10)

Shape149.setGeometry(Cylinder150)
Appearance151 = x3d.Appearance()
Material152 = x3d.Material()
Material152.setSpecularColor([1,1,1])

Appearance151.setMaterial(Material152)

Shape149.setAppearance(Appearance151)

Transform148.addChild(Shape149)
Transform153 = x3d.Transform()
Transform153.setTranslation([0,-2.5,0])
#The Unicorn
Shape154 = x3d.Shape()
Shape154.setUSE("Torus")

Transform153.addChild(Shape154)
Transform155 = x3d.Transform()
Transform155.setTranslation([-2,0,0])
Shape156 = x3d.Shape()
Sphere157 = x3d.Sphere()
Sphere157.setRadius(1.5)

Shape156.setGeometry(Sphere157)
Appearance158 = x3d.Appearance()
Appearance158.setUSE("rope")

Shape156.setAppearance(Appearance158)

Transform155.addChild(Shape156)
#Knott

Transform153.addChildren(Transform155)

Transform148.addChildren(Transform153)
Transform159 = x3d.Transform()
Transform159.setRotation([0,0,1,1.2])
Transform159.setTranslation([15,55,-11])
Transform160 = x3d.Transform()
Transform160.setScale([5,5,5])
Shape161 = x3d.Shape()
Appearance162 = x3d.Appearance()
Appearance162.setUSE("rope")

Shape161.setAppearance(Appearance162)
Extrusion163 = x3d.Extrusion()
Extrusion163.setBeginCap(False)
Extrusion163.setCreaseAngle(0.76)
Extrusion163.setCrossSection([0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0])
Extrusion163.setEndCap(False)
Extrusion163.setSolid(False)
Extrusion163.setSpine([-15.2,1.4,2.2,-12,-0.8,2.2])

Shape161.setGeometry(Extrusion163)

Transform160.addChild(Shape161)

Transform159.addChildren(Transform160)

Transform148.addChildren(Transform159)

Transform129.addChildren(Transform148)
Transform164 = x3d.Transform()
Transform164.setRotation([1,0,0,-1.7])
Transform164.setTranslation([-17,-4.5,0])
Transform165 = x3d.Transform()
Transform165.setScale([0.2,0.2,0.2])
#Knot
Shape166 = x3d.Shape()
Shape166.setUSE("Torus")

Transform165.addChild(Shape166)
Transform167 = x3d.Transform()
Transform167.setTranslation([-1,0,1.7])
Shape168 = x3d.Shape()
Sphere169 = x3d.Sphere()
Sphere169.setRadius(1.5)

Shape168.setGeometry(Sphere169)
Appearance170 = x3d.Appearance()
Appearance170.setUSE("rope")

Shape168.setAppearance(Appearance170)

Transform167.addChild(Shape168)

Transform165.addChildren(Transform167)

Transform164.addChildren(Transform165)

Transform129.addChildren(Transform164)
Transform171 = x3d.Transform()
Transform171.setDEF("RnS")
Transform172 = x3d.Transform()
Transform172.setDEF("ropes")
Transform173 = x3d.Transform()
Transform173.setRotation([0,0,1,-0.82])
Transform173.setTranslation([7,-26,-2.5])
Shape174 = x3d.Shape()
Appearance175 = x3d.Appearance()
Appearance175.setUSE("rope")

Shape174.setAppearance(Appearance175)
Extrusion176 = x3d.Extrusion()
Extrusion176.setBeginCap(False)
Extrusion176.setCreaseAngle(0.76)
Extrusion176.setCrossSection([0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0])
Extrusion176.setEndCap(False)
Extrusion176.setSolid(False)
Extrusion176.setSpine([-33,0.9,2.5,-18.5,1.9,2.55])

Shape174.setGeometry(Extrusion176)

Transform173.addChild(Shape174)
Shape177 = x3d.Shape()
Appearance178 = x3d.Appearance()
Appearance178.setUSE("rope")

Shape177.setAppearance(Appearance178)
Extrusion179 = x3d.Extrusion()
Extrusion179.setBeginCap(False)
Extrusion179.setCreaseAngle(0.76)
Extrusion179.setCrossSection([0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0])
Extrusion179.setEndCap(False)
Extrusion179.setSolid(False)
Extrusion179.setSpine([-35.7,-0.8,2.5,-18.8,-0.8,2.55])

Shape177.setGeometry(Extrusion179)

Transform173.addChild(Shape177)

Transform172.addChildren(Transform173)

Transform171.addChildren(Transform172)
Transform180 = x3d.Transform()
Transform180.setDEF("sling")
Transform180.setRotation([0,0,1,-0.82])
Transform180.setTranslation([-4,-15.3,0])
Transform181 = x3d.Transform()
Transform182 = x3d.Transform()
Transform182.setRotation([0,1,0,-1.57])
Transform182.setScale([1,1.3,1])
Transform182.setTranslation([0.5,0,-1])
Transform183 = x3d.Transform()
Transform183.setRotation([0,0,1,1.57])
Transform184 = x3d.Transform()
Transform184.setScale([0.3,0.3,0.3])
Shape185 = x3d.Shape()
Shape185.setDEF("halfsling")
Appearance186 = x3d.Appearance()
Appearance186.setDEF("clear")
Material187 = x3d.Material()
Material187.setTransparency(0.5)

Appearance186.setMaterial(Material187)

Shape185.setAppearance(Appearance186)
Extrusion188 = x3d.Extrusion()
Extrusion188.setCrossSection([0,0,0,5,0.5,7,1,8,2,9,3,11,3.5,11.2,4,11,5,9,6,8,6.5,7,6.7,5,6.7,0,0,0])
Extrusion188.setSpine([0,0,0,0.1,0,0])

Shape185.setGeometry(Extrusion188)

Transform184.addChild(Shape185)
Transform189 = x3d.Transform()
Transform189.setScale([0.3,0.3,0.3])
Transform189.setTranslation([0,-3.5,11.5])
Shape190 = x3d.Shape()
Shape190.setUSE("Torus")

Transform189.addChild(Shape190)
Transform191 = x3d.Transform()
Transform191.setTranslation([0,0,2])
Shape192 = x3d.Shape()
Appearance193 = x3d.Appearance()
Appearance193.setUSE("rope")

Shape192.setAppearance(Appearance193)
Sphere194 = x3d.Sphere()
Sphere194.setRadius(1.5)

Shape192.setGeometry(Sphere194)

Transform191.addChild(Shape192)

Transform189.addChildren(Transform191)

Transform184.addChildren(Transform189)

Transform183.addChildren(Transform184)
Transform195 = x3d.Transform()
Transform195.setScale([0.3,0.3,0.3])
Transform195.setTranslation([2,0,0])
Shape196 = x3d.Shape()
Shape196.setUSE("halfsling")

Transform195.addChild(Shape196)
Transform197 = x3d.Transform()
Transform197.setScale([0.3,0.3,0.3])
Transform197.setTranslation([0,-3.5,11.3])
Shape198 = x3d.Shape()
Shape198.setUSE("Torus")

Transform197.addChild(Shape198)
Transform199 = x3d.Transform()
Transform199.setTranslation([0,0,2])
Shape200 = x3d.Shape()
Appearance201 = x3d.Appearance()
Appearance201.setUSE("rope")

Shape200.setAppearance(Appearance201)
Sphere202 = x3d.Sphere()
Sphere202.setRadius(1.5)

Shape200.setGeometry(Sphere202)

Transform199.addChild(Shape200)

Transform197.addChildren(Transform199)

Transform195.addChildren(Transform197)

Transform183.addChildren(Transform195)
Transform203 = x3d.Transform()
Transform203.setTranslation([1,-1,0])
Shape204 = x3d.Shape()
Extrusion205 = x3d.Extrusion()
Extrusion205.setBeginCap(False)
Extrusion205.setCreaseAngle(0.785)
Extrusion205.setCrossSection([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0])
Extrusion205.setEndCap(False)
Extrusion205.setSolid(False)
Extrusion205.setSpine([0,-1,0,0,1,0])

Shape204.setGeometry(Extrusion205)
Appearance206 = x3d.Appearance()
Appearance206.setUSE("clear")

Shape204.setAppearance(Appearance206)

Transform203.addChild(Shape204)

Transform183.addChildren(Transform203)

Transform182.addChildren(Transform183)
TouchSensor207 = x3d.TouchSensor()
TouchSensor207.setDEF("LauncheeChoice")
TouchSensor207.setDescription("launcher choice")

Transform182.addChildren(TouchSensor207)

Transform181.addChildren(Transform182)
Transform208 = x3d.Transform()
Transform208.setDEF("projectiletransform")
Transform208.setScale([0.01,0.01,0.01])
Switch209 = x3d.Switch()
Switch209.setDEF("projectile")
Switch209.setWhichChoice(0)
Group210 = x3d.Group()
Transform211 = x3d.Transform()
Transform211.setTranslation([0,0.7,0])
Shape212 = x3d.Shape()
Sphere213 = x3d.Sphere()
Sphere213.setRadius(0.7)

Shape212.setGeometry(Sphere213)
Appearance214 = x3d.Appearance()
Appearance214.setDEF("black")
Material215 = x3d.Material()
Material215.setDiffuseColor([0,0,0])
Material215.setSpecularColor([1,1,1])

Appearance214.setMaterial(Material215)

Shape212.setAppearance(Appearance214)

Transform211.addChild(Shape212)

Group210.addChildren(Transform211)

Switch209.addChildren(Group210)
Group216 = x3d.Group()
Transform217 = x3d.Transform()
Inline218 = x3d.Inline()
Inline218.setUrl(["cow.wrl","http://www.uoguelph.ca/~dchiu/cow.wrl"])

Transform217.addChildren(Inline218)

Group216.addChildren(Transform217)

Switch209.addChildren(Group216)
Group219 = x3d.Group()
Transform220 = x3d.Transform()
Transform220.setRotation([0,1,0,1.57])
Transform220.setScale([0.4,0.4,0.4])
Transform220.setTranslation([0,0.7,0])
Inline221 = x3d.Inline()
Inline221.setUrl(["vrml_ginger.wrl","http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl"])

Transform220.addChildren(Inline221)

Group219.addChildren(Transform220)

Switch209.addChildren(Group219)

Transform208.addChildren(Switch209)

Transform181.addChildren(Transform208)

Transform180.addChildren(Transform181)

Transform171.addChildren(Transform180)

Transform129.addChildren(Transform171)

Transform104.addChildren(Transform129)
Transform222 = x3d.Transform()
Transform222.setRotation([1,0,0,1.57])
Transform222.setTranslation([0,18,2.5])
Shape223 = x3d.Shape()
Cylinder224 = x3d.Cylinder()
Cylinder224.setHeight(8)
Cylinder224.setRadius(0.4)

Shape223.setGeometry(Cylinder224)
Appearance225 = x3d.Appearance()
Material226 = x3d.Material()
Material226.setDiffuseColor([0,0,0])
Material226.setSpecularColor([1,1,1])

Appearance225.setMaterial(Material226)

Shape223.setAppearance(Appearance225)

Transform222.addChild(Shape223)
#Top Pivot

Transform104.addChildren(Transform222)
Transform227 = x3d.Transform()
Transform227.setDEF("verticalweight")
Transform228 = x3d.Transform()
Transform228.setTranslation([4,18,1.8])
Shape229 = x3d.Shape()
Box230 = x3d.Box()
Box230.setSize([1,10,0.5])

Shape229.setGeometry(Box230)
Appearance231 = x3d.Appearance()
Appearance231.setUSE("wood")

Shape229.setAppearance(Appearance231)

Transform228.addChild(Shape229)

Transform227.addChildren(Transform228)
Transform232 = x3d.Transform()
Transform232.setTranslation([4,18,3.2])
Shape233 = x3d.Shape()
Box234 = x3d.Box()
Box234.setSize([1,10,0.5])

Shape233.setGeometry(Box234)
Appearance235 = x3d.Appearance()
Appearance235.setUSE("wood")

Shape233.setAppearance(Appearance235)

Transform232.addChild(Shape233)

Transform227.addChildren(Transform232)
Transform236 = x3d.Transform()
Transform236.setTranslation([4,14,2.5])
#CounterWeight
Shape237 = x3d.Shape()
Cylinder238 = x3d.Cylinder()
Cylinder238.setHeight(4)
Cylinder238.setRadius(1.5)

Shape237.setGeometry(Cylinder238)
Appearance239 = x3d.Appearance()
Material240 = x3d.Material()
Material240.setDiffuseColor([0,0,0])
Material240.setSpecularColor([1,1,1])

Appearance239.setMaterial(Material240)

Shape237.setAppearance(Appearance239)

Transform236.addChild(Shape237)

Transform227.addChildren(Transform236)
Transform241 = x3d.Transform()
Transform241.setRotation([1,0,0,1.57])
Transform241.setTranslation([4,22,2.5])
Shape242 = x3d.Shape()
Cylinder243 = x3d.Cylinder()
Cylinder243.setHeight(2.5)
Cylinder243.setRadius(0.3)

Shape242.setGeometry(Cylinder243)
Appearance244 = x3d.Appearance()
Material245 = x3d.Material()
Material245.setDiffuseColor([0,0,0])
Material245.setSpecularColor([1,1,1])

Appearance244.setMaterial(Material245)

Shape242.setAppearance(Appearance244)

Transform241.addChild(Shape242)

Transform227.addChildren(Transform241)

Transform104.addChildren(Transform227)
Transform246 = x3d.Transform()
Transform246.setRotation([0,0,1,1.57])
Transform246.setScale([0.2,0.2,0.2])
Transform246.setTranslation([-11.5,-1,2])
Transform247 = x3d.Transform()
Transform247.setDEF("screw")
Transform247.setRotation([1,0,0,1.57])
Shape248 = x3d.Shape()
Shape248.setUSE("Torus")

Transform247.addChild(Shape248)
Transform249 = x3d.Transform()
Transform249.setRotation([1,0,0,-1.57])
Transform249.setTranslation([0,0,7])
Shape250 = x3d.Shape()
Cylinder251 = x3d.Cylinder()
Cylinder251.setHeight(10)
Cylinder251.setRadius(0.7)

Shape250.setGeometry(Cylinder251)
Appearance252 = x3d.Appearance()
Material253 = x3d.Material()
Material253.setSpecularColor([1,1,1])

Appearance252.setMaterial(Material253)

Shape250.setAppearance(Appearance252)

Transform249.addChild(Shape250)

Transform247.addChildren(Transform249)

Transform246.addChildren(Transform247)
Transform254 = x3d.Transform()
Transform254.setTranslation([0,0,7])
Transform255 = x3d.Transform()
Transform255.setUSE("screw")

Transform254.addChildren(Transform255)

Transform246.addChildren(Transform254)
#Release Pin
Transform256 = x3d.Transform()
Transform256.setDEF("Pin")
Transform256.setRotation([1,0,0,-1.57])
Transform256.setTranslation([0,0,-3])
Transform257 = x3d.Transform()
Transform257.setUSE("screw")

Transform256.addChildren(Transform257)

Transform246.addChildren(Transform256)

Transform104.addChildren(Transform246)
Transform258 = x3d.Transform()
Transform258.setTranslation([0,0,5])
Shape259 = x3d.Shape()
Shape259.setUSE("plank")

Transform258.addChild(Shape259)
Transform260 = x3d.Transform()
Transform260.setUSE("angledsupport")

Transform258.addChildren(Transform260)
Transform261 = x3d.Transform()
Transform261.setUSE("angledsupport2")

Transform258.addChildren(Transform261)
Transform262 = x3d.Transform()
Transform262.setUSE("verticalsupport")

Transform258.addChildren(Transform262)
Transform263 = x3d.Transform()
Transform263.setUSE("horizontalsupport")

Transform258.addChildren(Transform263)
Transform264 = x3d.Transform()
Transform264.setRotation([0,1,0,1.57])
Transform264.setScale([0.6,1,1])
Transform264.setTranslation([0,-11,-2.5])
Transform265 = x3d.Transform()
Transform265.setUSE("horizontalsupport")

Transform264.addChildren(Transform265)

Transform258.addChildren(Transform264)
Transform266 = x3d.Transform()
Transform266.setRotation([0,0,1,-1.57])
Transform266.setScale([0.6,1,1])
Transform266.setTranslation([0,5,-10])
Transform267 = x3d.Transform()
Transform267.setRotation([0,1,0,0.4])
Shape268 = x3d.Shape()
Shape268.setUSE("plank")

Transform267.addChild(Shape268)

Transform266.addChildren(Transform267)

Transform258.addChildren(Transform266)
Transform269 = x3d.Transform()
Transform269.setTranslation([0,0,0.6])
Transform270 = x3d.Transform()
Transform270.setUSE("panel")

Transform269.addChildren(Transform270)

Transform258.addChildren(Transform269)

Transform104.addChildren(Transform258)
Transform271 = x3d.Transform()
Transform271.setTranslation([10,-1,2.5])
Shape272 = x3d.Shape()
Shape272.setDEF("Axle")
Box273 = x3d.Box()
Box273.setSize([1,1,8])

Shape272.setGeometry(Box273)
Appearance274 = x3d.Appearance()
Appearance274.setUSE("wood")

Shape272.setAppearance(Appearance274)

Transform271.addChild(Shape272)
Transform275 = x3d.Transform()
Transform275.setRotation([1,0,0,1.57])
Transform275.setTranslation([0,0,4.5])
Shape276 = x3d.Shape()
Shape276.setDEF("wheel")
Cylinder277 = x3d.Cylinder()
Cylinder277.setRadius(2)

Shape276.setGeometry(Cylinder277)
Appearance278 = x3d.Appearance()
Appearance278.setUSE("wood")

Shape276.setAppearance(Appearance278)

Transform275.addChild(Shape276)
Shape279 = x3d.Shape()
Shape279.setDEF("tracks")
Sphere280 = x3d.Sphere()
Sphere280.setRadius(1.5)

Shape279.setGeometry(Sphere280)
Appearance281 = x3d.Appearance()
Appearance281.setUSE("black")

Shape279.setAppearance(Appearance281)

Transform275.addChild(Shape279)
Transform282 = x3d.Transform()
Transform282.setTranslation([0,0.55,0])
Shape283 = x3d.Shape()
Shape283.setDEF("hub")
Sphere284 = x3d.Sphere()
Sphere284.setRadius(1.5)

Shape283.setGeometry(Sphere284)
Appearance285 = x3d.Appearance()
Appearance285.setUSE("black")

Shape283.setAppearance(Appearance285)

Transform282.addChild(Shape283)

Transform275.addChildren(Transform282)

Transform271.addChildren(Transform275)
Transform286 = x3d.Transform()
Transform286.setRotation([1,0,0,1.57])
Transform286.setTranslation([0,0,-4.5])
Shape287 = x3d.Shape()
Shape287.setUSE("wheel")

Transform286.addChild(Shape287)
Shape288 = x3d.Shape()
Shape288.setUSE("tracks")

Transform286.addChild(Shape288)
Transform289 = x3d.Transform()
Transform289.setTranslation([0,-0.55,0])
Shape290 = x3d.Shape()
Shape290.setUSE("hub")

Transform289.addChild(Shape290)

Transform286.addChildren(Transform289)

Transform271.addChildren(Transform286)

Transform104.addChildren(Transform271)
Transform291 = x3d.Transform()
Transform291.setTranslation([-10,-1,2.5])
Shape292 = x3d.Shape()
Shape292.setUSE("Axle")

Transform291.addChild(Shape292)
Transform293 = x3d.Transform()
Transform293.setRotation([1,0,0,1.57])
Transform293.setTranslation([0,0,4.5])
Shape294 = x3d.Shape()
Shape294.setUSE("wheel")

Transform293.addChild(Shape294)
Shape295 = x3d.Shape()
Shape295.setUSE("tracks")

Transform293.addChild(Shape295)
Transform296 = x3d.Transform()
Transform296.setTranslation([0,0.55,0])
Shape297 = x3d.Shape()
Shape297.setUSE("hub")

Transform296.addChild(Shape297)

Transform293.addChildren(Transform296)

Transform291.addChildren(Transform293)
Transform298 = x3d.Transform()
Transform298.setRotation([1,0,0,1.57])
Transform298.setTranslation([0,0,-4.5])
Shape299 = x3d.Shape()
Shape299.setUSE("wheel")

Transform298.addChild(Shape299)
Shape300 = x3d.Shape()
Shape300.setUSE("tracks")

Transform298.addChild(Shape300)
Transform301 = x3d.Transform()
Transform301.setTranslation([0,-0.55,0])
Shape302 = x3d.Shape()
Shape302.setUSE("hub")

Transform301.addChild(Shape302)

Transform298.addChildren(Transform301)

Transform291.addChildren(Transform298)
Transform303 = x3d.Transform()
Transform303.setRotation([0,1,0,-0.6])
Transform303.setTranslation([0,100,400])
Transform304 = x3d.Transform()
Transform304.setTranslation([1,3,0])
Viewpoint305 = x3d.Viewpoint()
Viewpoint305.setDescription("Side")

Transform304.addChildren(Viewpoint305)

Transform303.addChildren(Transform304)
Transform306 = x3d.Transform()
Transform306.setUSE("launch")

Transform303.addChildren(Transform306)
Transform307 = x3d.Transform()
TouchSensor308 = x3d.TouchSensor()
TouchSensor308.setUSE("LauncheeChoice")

Transform307.addChildren(TouchSensor308)
Switch309 = x3d.Switch()
Switch309.setUSE("projectilename")

Transform307.addChildren(Switch309)
Transform310 = x3d.Transform()
Transform310.setTranslation([2.5,0,0])
Shape311 = x3d.Shape()
Box312 = x3d.Box()
Box312.setSize([5,0.5,0.5])

Shape311.setGeometry(Box312)
Appearance313 = x3d.Appearance()
Material314 = x3d.Material()
Material314.setTransparency(1)

Appearance313.setMaterial(Material314)

Shape311.setAppearance(Appearance313)

Transform310.addChild(Shape311)

Transform307.addChildren(Transform310)

Transform303.addChildren(Transform307)
Transform315 = x3d.Transform()
Transform315.setScale([0.5,0.5,0.5])
Transform315.setTranslation([0,-1,0])
TouchSensor316 = x3d.TouchSensor()
TouchSensor316.setUSE("weightselector")

Transform315.addChildren(TouchSensor316)
Switch317 = x3d.Switch()
Switch317.setUSE("Weight")

Transform315.addChildren(Switch317)
Transform318 = x3d.Transform()
Transform318.setTranslation([8,0,0])
Shape319 = x3d.Shape()
Box320 = x3d.Box()
Box320.setSize([17,1,0.5])

Shape319.setGeometry(Box320)
Appearance321 = x3d.Appearance()
Material322 = x3d.Material()
Material322.setTransparency(1)

Appearance321.setMaterial(Material322)

Shape319.setAppearance(Appearance321)

Transform318.addChild(Shape319)

Transform315.addChildren(Transform318)

Transform303.addChildren(Transform315)

Transform291.addChildren(Transform303)
Transform323 = x3d.Transform()
Transform323.setDEF("ProjectileTransform")
Transform323.setTranslation([14.25,1.25,0])
Switch324 = x3d.Switch()
Switch324.setUSE("projectile")

Transform323.addChildren(Switch324)
Transform325 = x3d.Transform()
Transform325.setRotation([0,1,0,1.57])
Transform325.setTranslation([0,1,0])
Viewpoint326 = x3d.Viewpoint()
Viewpoint326.setDescription("Projectile Cam")
Viewpoint326.setPosition([0,0,15])

Transform325.addChildren(Viewpoint326)

Transform323.addChildren(Transform325)

Transform291.addChildren(Transform323)
Transform327 = x3d.Transform()
Transform327.setTranslation([20,2,0])
Transform328 = x3d.Transform()
Transform328.setDEF("Front")
Transform328.setRotation([0,1,0,1.57])
Viewpoint329 = x3d.Viewpoint()
Viewpoint329.setDescription("Fore")

Transform328.addChildren(Viewpoint329)

Transform327.addChildren(Transform328)

Transform291.addChildren(Transform327)
Transform330 = x3d.Transform()
Transform330.setTranslation([-8,4,0])
Transform331 = x3d.Transform()
Transform331.setRotation([0,1,0,-1.57])
Viewpoint332 = x3d.Viewpoint()
Viewpoint332.setDescription("Aft")

Transform331.addChildren(Viewpoint332)

Transform330.addChildren(Transform331)

Transform291.addChildren(Transform330)
Script333 = x3d.Script()
Script333.setDEF("WeightScript")
field334 = x3d.field()
field334.setName("set_boolean")
field334.setAccessType("inputOnly")
field334.setType("SFBool")

Script333.addField(field334)
field335 = x3d.field()
field335.setName("whichchoice")
field335.setAccessType("outputOnly")
field335.setType("SFInt32")

Script333.addField(field335)
field336 = x3d.field()
field336.setName("CounterWeight")
field336.setAccessType("outputOnly")
field336.setType("SFFloat")

Script333.addField(field336)

Script333.setSourceCode('''ecmascript:\n"+
"\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	whichchoice =0;\n"+
"	CounterWeight=100;\n"+
"}\n"+
"\n"+
"function set_boolean ( boolean_input, eventTime)\n"+
"{\n"+
"\n"+
"	if ( boolean_input== false ) { return; } // ignore the unclick\n"+
"        whichchoice = whichchoice +1;\n"+
"	if (whichchoice == 0)CounterWeight=50.00;\n"+
"	if (whichchoice == 1)CounterWeight=500.00;\n"+
"	if (whichchoice == 2)CounterWeight=1000.00;\n"+
"	if (whichchoice == 3)CounterWeight=10000.00;\n"+
"        if ( whichchoice ==4 ) { whichchoice = 0; CounterWeight=50; }\n"+
"\n"+
"\n"+
"        Browser.println ('CounterWeight ='+CounterWeight);\n"+
"}''')

Transform291.addChildren(Script333)
Script337 = x3d.Script()
Script337.setDEF("LauncheeScript")
field338 = x3d.field()
field338.setName("set_boolean")
field338.setAccessType("inputOnly")
field338.setType("SFBool")

Script337.addField(field338)
field339 = x3d.field()
field339.setName("whichchoice")
field339.setAccessType("outputOnly")
field339.setType("SFInt32")

Script337.addField(field339)
field340 = x3d.field()
field340.setName("ProjectileWeight")
field340.setAccessType("outputOnly")
field340.setType("SFFloat")

Script337.addField(field340)

Script337.setSourceCode('''ecmascript:\n"+
"\n"+
"function set_boolean (boolean_input, eventTime)\n"+
"{\n"+
"	if ( boolean_input== false ) { return; } // ignore unclick\n"+
"        whichchoice = whichchoice +1;\n"+
"        if (whichchoice == 0)ProjectileWeight=10.00;\n"+
"        if (whichchoice == 1)ProjectileWeight=1000.00;\n"+
"	if (whichchoice == 2)ProjectileWeight=5;\n"+
"\n"+
"	if ( whichchoice ==3 ) { whichchoice = 0; ProjectileWeight=10.00; }\n"+
"	Browser.println ('Projectile Weight'+ProjectileWeight);\n"+
"}''')

Transform291.addChildren(Script337)
Script341 = x3d.Script()
Script341.setDEF("PigdogMonkScript")
field342 = x3d.field()
field342.setName("set_boolean")
field342.setAccessType("inputOnly")
field342.setType("SFBool")

Script341.addField(field342)
field343 = x3d.field()
field343.setName("whichchoice")
field343.setAccessType("outputOnly")
field343.setType("SFInt32")

Script341.addField(field343)

Script341.setSourceCode('''ecmascript:\n"+
"\n"+
"function set_boolean (boolean_input, eventTime)\n"+
"{\n"+
"	if ( boolean_input== false ) { return; } // ignore unclick\n"+
"\n"+
"        whichchoice = whichchoice +1;\n"+
"\n"+
"        if ( whichchoice ==2 )  whichchoice = 0;\n"+
"\n"+
"\n"+
"}''')

Transform291.addChildren(Script341)
Script344 = x3d.Script()
Script344.setDEF("Mover")
field345 = x3d.field()
field345.setName("set_fraction")
field345.setAccessType("inputOnly")
field345.setType("SFFloat")

Script344.addField(field345)
field346 = x3d.field()
field346.setName("set_MassCounterWeight")
field346.setAccessType("inputOnly")
field346.setType("SFFloat")

Script344.addField(field346)
field347 = x3d.field()
field347.setName("set_MassProjectileWeight")
field347.setAccessType("inputOnly")
field347.setType("SFFloat")

Script344.addField(field347)
field348 = x3d.field()
field348.setName("MassCounterWeight")
field348.setAccessType("initializeOnly")
field348.setType("SFFloat")
field348.setValue("1")

Script344.addField(field348)
field349 = x3d.field()
field349.setName("MassProjectileWeight")
field349.setAccessType("initializeOnly")
field349.setType("SFFloat")
field349.setValue("1")

Script344.addField(field349)
field350 = x3d.field()
field350.setName("transparent")
field350.setAccessType("outputOnly")
field350.setType("SFVec3f")

Script344.addField(field350)
field351 = x3d.field()
field351.setName("value_changed")
field351.setAccessType("outputOnly")
field351.setType("SFVec3f")

Script344.addField(field351)

Script344.setSourceCode('''ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	MassCounterWeight=100;\n"+
"	MassProjectileWeight=10;\n"+
"	Browser.println ('MassCounterWeight =' + MassCounterWeight);\n"+
"	Browser.println ('MassProjectileWeight =' + MassProjectileWeight);\n"+
"}\n"+
"\n"+
"function set_MassProjectileWeight (value, timestamp)\n"+
"{\n"+
"	MassProjectileWeight = value;\n"+
"	Browser.println ('new MassProjectileWeight =' + MassProjectileWeight);\n"+
"}\n"+
"function set_MassCounterWeight (value2, timestamp)\n"+
"{\n"+
"	MassCounterWeight = value2;\n"+
"	Browser.println ('new MassCounterWeight =' + MassCounterWeight);\n"+
"}\n"+
"\n"+
"\n"+
"function set_fraction ( fraction, eventTime )\n"+
"{\n"+
"	var TrebuchetHeight=45;\n"+
"	var Height =25;\n"+
"      	x = (2*(MassCounterWeight/MassProjectileWeight)*Height*fraction)-.5*TrebuchetHeight;\n"+
"	// start at TrebuchetHeight and keep along z axis (z=zero)\n"+
"	y =  (MassCounterWeight/MassProjectileWeight)*Height*Math.sin(fraction*3.14);\n"+
"        z = 0;\n"+
"        transparent = new SFVec3f (1,1,1);\n"+
"     if (y <1.5*TrebuchetHeight  )if (x<TrebuchetHeight)\n"+
"		{\n"+
"		x=x-10;\n"+
"		y=y+1;\n"+
"		transparent = new SFVec3f(.01, .01, .01);\n"+
"			}\n"+
"\n"+
"	value_changed = new SFVec3f (x, y, z);\n"+
"	Browser.println ('x=' + value_changed[0] + ' y=' + value_changed[1] + ' z=' + value_changed[2]);\n"+
"}''')

Transform291.addChildren(Script344)

Transform104.addChildren(Transform291)

Scene17.addChildren(Transform104)
TimeSensor352 = x3d.TimeSensor()
TimeSensor352.setDEF("clock")
TimeSensor352.setCycleInterval(10)

Scene17.addChildren(TimeSensor352)
PositionInterpolator353 = x3d.PositionInterpolator()
PositionInterpolator353.setDEF("verticalweightpath")
PositionInterpolator353.setKey([0,0.1,0.2,0.2,0.3,0.9])
PositionInterpolator353.setKeyValue([1.4,1.6,0,1,-8,0,-3.5,-12,0,-3.5,-12,0,1.2,-8,0,1.4,1.6,0])

Scene17.addChildren(PositionInterpolator353)
OrientationInterpolator354 = x3d.OrientationInterpolator()
OrientationInterpolator354.setDEF("flingerangles")
OrientationInterpolator354.setKey([0,0.1,0.2,0.2,0.3,0.9])
OrientationInterpolator354.setKeyValue([0,0,1,0.82,0,0,1,-0.77,0,0,1,-1.57,0,0,1,-1.57,0,0,1,-0.77,0,0,1,0.82])

Scene17.addChildren(OrientationInterpolator354)
PositionInterpolator355 = x3d.PositionInterpolator()
PositionInterpolator355.setDEF("pinpath")
PositionInterpolator355.setKey([0,0.01,0.95,1])
PositionInterpolator355.setKeyValue([0,0,-3,0,0,-10,0,0,-10,0,0,-3])

Scene17.addChildren(PositionInterpolator355)
OrientationInterpolator356 = x3d.OrientationInterpolator()
OrientationInterpolator356.setDEF("RnSAngels")
OrientationInterpolator356.setKey([0,0.7,1])
OrientationInterpolator356.setKeyValue([0,0,1,0,0,0,1,-3.14,0,0,1,0])

Scene17.addChildren(OrientationInterpolator356)
PositionInterpolator357 = x3d.PositionInterpolator()
PositionInterpolator357.setDEF("invisiable")
PositionInterpolator357.setKey([0,0.2,0.98,0.99])
PositionInterpolator357.setKeyValue([1,1,1,0.01,0.01,0.01,0.01,0.01,0.01,1,1,1])

Scene17.addChildren(PositionInterpolator357)
ROUTE358 = x3d.ROUTE()
ROUTE358.setFromField("fraction_changed")
ROUTE358.setFromNode("clock")
ROUTE358.setToField("set_fraction")
ROUTE358.setToNode("invisiable")

Scene17.addChildren(ROUTE358)
ROUTE359 = x3d.ROUTE()
ROUTE359.setFromField("value_changed")
ROUTE359.setFromNode("invisiable")
ROUTE359.setToField("set_scale")
ROUTE359.setToNode("projectiletransform")

Scene17.addChildren(ROUTE359)
ROUTE360 = x3d.ROUTE()
ROUTE360.setFromField("CounterWeight")
ROUTE360.setFromNode("WeightScript")
ROUTE360.setToField("set_MassCounterWeight")
ROUTE360.setToNode("Mover")

Scene17.addChildren(ROUTE360)
ROUTE361 = x3d.ROUTE()
ROUTE361.setFromField("ProjectileWeight")
ROUTE361.setFromNode("LauncheeScript")
ROUTE361.setToField("set_MassProjectileWeight")
ROUTE361.setToNode("Mover")

Scene17.addChildren(ROUTE361)
ROUTE362 = x3d.ROUTE()
ROUTE362.setFromField("fraction_changed")
ROUTE362.setFromNode("clock")
ROUTE362.setToField("set_fraction")
ROUTE362.setToNode("Mover")

Scene17.addChildren(ROUTE362)
ROUTE363 = x3d.ROUTE()
ROUTE363.setFromField("value_changed")
ROUTE363.setFromNode("Mover")
ROUTE363.setToField("set_translation")
ROUTE363.setToNode("ProjectileTransform")

Scene17.addChildren(ROUTE363)
ROUTE364 = x3d.ROUTE()
ROUTE364.setFromField("transparent")
ROUTE364.setFromNode("Mover")
ROUTE364.setToField("set_scale")
ROUTE364.setToNode("ProjectileTransform")

Scene17.addChildren(ROUTE364)
ROUTE365 = x3d.ROUTE()
ROUTE365.setFromField("touchTime")
ROUTE365.setFromNode("Launch")
ROUTE365.setToField("set_startTime")
ROUTE365.setToNode("clock")

Scene17.addChildren(ROUTE365)
ROUTE366 = x3d.ROUTE()
ROUTE366.setFromField("isActive")
ROUTE366.setFromNode("Launch")
ROUTE366.setToField("set_boolean")
ROUTE366.setToNode("PigdogMonkScript")

Scene17.addChildren(ROUTE366)
ROUTE367 = x3d.ROUTE()
ROUTE367.setFromField("touchTime")
ROUTE367.setFromNode("Launch")
ROUTE367.setToField("set_startTime")
ROUTE367.setToNode("PigDogSound")

Scene17.addChildren(ROUTE367)
ROUTE368 = x3d.ROUTE()
ROUTE368.setFromField("touchTime")
ROUTE368.setFromNode("Launch")
ROUTE368.setToField("set_startTime")
ROUTE368.setToNode("MonkSound")

Scene17.addChildren(ROUTE368)
ROUTE369 = x3d.ROUTE()
ROUTE369.setFromField("whichchoice")
ROUTE369.setFromNode("PigdogMonkScript")
ROUTE369.setToField("whichChoice")
ROUTE369.setToNode("PigdogMonk")

Scene17.addChildren(ROUTE369)
ROUTE370 = x3d.ROUTE()
ROUTE370.setFromField("touchTime")
ROUTE370.setFromNode("LauncheeChoice")
ROUTE370.setToField("set_startTime")
ROUTE370.setToNode("HolyHandGrenadeSound")

Scene17.addChildren(ROUTE370)
ROUTE371 = x3d.ROUTE()
ROUTE371.setFromField("touchTime")
ROUTE371.setFromNode("LauncheeChoice")
ROUTE371.setToField("set_startTime")
ROUTE371.setToNode("CowSound")

Scene17.addChildren(ROUTE371)
ROUTE372 = x3d.ROUTE()
ROUTE372.setFromField("touchTime")
ROUTE372.setFromNode("LauncheeChoice")
ROUTE372.setToField("set_startTime")
ROUTE372.setToNode("HamsterSound")

Scene17.addChildren(ROUTE372)
ROUTE373 = x3d.ROUTE()
ROUTE373.setFromField("isActive")
ROUTE373.setFromNode("LauncheeChoice")
ROUTE373.setToField("set_boolean")
ROUTE373.setToNode("LauncheeScript")

Scene17.addChildren(ROUTE373)
ROUTE374 = x3d.ROUTE()
ROUTE374.setFromField("whichchoice")
ROUTE374.setFromNode("LauncheeScript")
ROUTE374.setToField("whichChoice")
ROUTE374.setToNode("projectile")

Scene17.addChildren(ROUTE374)
ROUTE375 = x3d.ROUTE()
ROUTE375.setFromField("whichchoice")
ROUTE375.setFromNode("LauncheeScript")
ROUTE375.setToField("whichChoice")
ROUTE375.setToNode("projectilename")

Scene17.addChildren(ROUTE375)
ROUTE376 = x3d.ROUTE()
ROUTE376.setFromField("isActive")
ROUTE376.setFromNode("weightselector")
ROUTE376.setToField("set_boolean")
ROUTE376.setToNode("WeightScript")

Scene17.addChildren(ROUTE376)
ROUTE377 = x3d.ROUTE()
ROUTE377.setFromField("whichchoice")
ROUTE377.setFromNode("WeightScript")
ROUTE377.setToField("whichChoice")
ROUTE377.setToNode("Weight")

Scene17.addChildren(ROUTE377)
ROUTE378 = x3d.ROUTE()
ROUTE378.setFromField("fraction_changed")
ROUTE378.setFromNode("clock")
ROUTE378.setToField("set_fraction")
ROUTE378.setToNode("flingerangles")

Scene17.addChildren(ROUTE378)
ROUTE379 = x3d.ROUTE()
ROUTE379.setFromField("value_changed")
ROUTE379.setFromNode("flingerangles")
ROUTE379.setToField("set_rotation")
ROUTE379.setToNode("flinger")

Scene17.addChildren(ROUTE379)
ROUTE380 = x3d.ROUTE()
ROUTE380.setFromField("fraction_changed")
ROUTE380.setFromNode("clock")
ROUTE380.setToField("set_fraction")
ROUTE380.setToNode("verticalweightpath")

Scene17.addChildren(ROUTE380)
ROUTE381 = x3d.ROUTE()
ROUTE381.setFromField("value_changed")
ROUTE381.setFromNode("verticalweightpath")
ROUTE381.setToField("set_translation")
ROUTE381.setToNode("verticalweight")

Scene17.addChildren(ROUTE381)
ROUTE382 = x3d.ROUTE()
ROUTE382.setFromField("fraction_changed")
ROUTE382.setFromNode("clock")
ROUTE382.setToField("set_fraction")
ROUTE382.setToNode("pinpath")

Scene17.addChildren(ROUTE382)
ROUTE383 = x3d.ROUTE()
ROUTE383.setFromField("value_changed")
ROUTE383.setFromNode("pinpath")
ROUTE383.setToField("set_translation")
ROUTE383.setToNode("Pin")

Scene17.addChildren(ROUTE383)

X3D0.setScene(Scene17)
X3D0.toFileX3D("../data/Trebuchet.new.python.x3d")
X3D0.toFileJSON("../data/Trebuchet.new.python.json")
