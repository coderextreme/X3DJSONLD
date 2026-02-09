print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "Trebuchet.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Working model of a 14th century Trebuchet Catapult."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "LT Joe Roth"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "created"
meta5.content = "20 June 2001"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "modified"
meta6.content = "Mon, 09 Feb 2026 07:13:13 GMT"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "version"
meta7.content = "7.8"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "identifier"
meta8.content = "https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "http://trebuchet.com"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "http://members.home.net/dimona"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "subject"
meta11.content = "trebuchet catapult Monty Python"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "Permission granted for use of the VRML chicken I own a copy of Monty Python and the Holy Grail I have requested permission to use for non profit use. No response received. I will use the sound clips under \"Fair Use\" clause of the DMCA"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "reference"
meta13.content = "https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "reference"
meta14.content = "http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm"

head1.children.append(meta14)

X3D0.head = head1
Scene15 = x3d.Scene()
WorldInfo16 = x3d.WorldInfo()
WorldInfo16.title = "Trebuchet.x3d"

Scene15.children.append(WorldInfo16)
Background17 = x3d.Background()
Background17.frontUrl = ["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg"]
Background17.backUrl = ["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg"]
Background17.leftUrl = ["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg"]
Background17.rightUrl = ["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg"]
Background17.topUrl = ["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg"]
Background17.bottomUrl = ["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg"]
Background17.skyAngle = [1.309,1.57079]
Background17.skyColor = [(0, 0.2, 0.7),(0, 0.5, 1),(1, 1, 1)]
Background17.groundAngle = [1.309,1.570796]
Background17.groundColor = [(0.1, 0.1, 0),(0.4, 0.25, 0.2),(0.6, 0.6, 0.6)]

Scene15.children.append(Background17)
Sound18 = x3d.Sound()
Sound18.maxBack = 1000
Sound18.maxFront = 1000
AudioClip19 = x3d.AudioClip(DEF="HolyGrail")
AudioClip19.description = "HolyGrail"
AudioClip19.url = ["holygral.mp3","http://www.nps.navy.mil/code32/vrml/holygral.mp3"]
AudioClip19.loop = True

Sound18.source = AudioClip19

Scene15.children.append(Sound18)
Shape20 = x3d.Shape()
Appearance21 = x3d.Appearance()
ImageTexture22 = x3d.ImageTexture()
ImageTexture22.url = ["grass.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg"]

Appearance21.texture = ImageTexture22

Shape20.appearance = Appearance21
Box23 = x3d.Box()
Box23.size = [10000,1,10000]

Shape20.geometry = Box23

Scene15.children.append(Shape20)
Transform24 = x3d.Transform()
Transform24.translation = [10.5,6.5,4.5]
Transform24.rotation = [0,1,0,1.57]
Transform24.scale = [0.5,0.5,0.5]
Shape25 = x3d.Shape()
Appearance26 = x3d.Appearance(DEF="TextAppearance")
Material27 = x3d.Material()
Material27.diffuseColor = [1,0,0]
Material27.emissiveColor = [1,1,0]

Appearance26.material = Material27

Shape25.appearance = Appearance26
Text28 = x3d.Text()
Text28.string = ["Click Sling to Select Projectile"]
FontStyle29 = x3d.FontStyle()

Text28.fontStyle = FontStyle29

Shape25.geometry = Text28

Transform24.children.append(Shape25)

Scene15.children.append(Transform24)
Transform30 = x3d.Transform()
Transform30.translation = [11,5.5,6]
Transform30.rotation = [0,1,0,1.57]
Transform30.scale = [0.5,0.5,0.5]
Switch31 = x3d.Switch(DEF="Weight")
Switch31.whichChoice = 0
Group32 = x3d.Group()
Shape33 = x3d.Shape()
Appearance34 = x3d.Appearance(USE="TextAppearance")

Shape33.appearance = Appearance34
Text35 = x3d.Text()
Text35.string = ["Click Here to Change Counter Weight (50 lbs)"]

Shape33.geometry = Text35

Group32.children.append(Shape33)

Switch31.children.append(Group32)
Group36 = x3d.Group()
Shape37 = x3d.Shape()
Appearance38 = x3d.Appearance(USE="TextAppearance")

Shape37.appearance = Appearance38
Text39 = x3d.Text()
Text39.string = ["Click Here to Change Counter Weight (500 lbs)"]

Shape37.geometry = Text39

Group36.children.append(Shape37)

Switch31.children.append(Group36)
Group40 = x3d.Group()
Shape41 = x3d.Shape()
Appearance42 = x3d.Appearance(USE="TextAppearance")

Shape41.appearance = Appearance42
Text43 = x3d.Text()
Text43.string = ["Click Here to Change Counter Weight (1000 lbs)"]

Shape41.geometry = Text43

Group40.children.append(Shape41)

Switch31.children.append(Group40)
Group44 = x3d.Group()
Shape45 = x3d.Shape()
Appearance46 = x3d.Appearance(USE="TextAppearance")

Shape45.appearance = Appearance46
Text47 = x3d.Text()
Text47.string = ["Click Here to Change Counter Weight (10000 lbs)"]

Shape45.geometry = Text47

Group44.children.append(Shape45)

Switch31.children.append(Group44)

Transform30.children.append(Switch31)
TouchSensor48 = x3d.TouchSensor(DEF="weightselector")
TouchSensor48.description = "weight selector"

Transform30.children.append(TouchSensor48)
Transform49 = x3d.Transform()
Transform49.translation = [8,0,0]
Shape50 = x3d.Shape()
Appearance51 = x3d.Appearance()
Material52 = x3d.Material()
Material52.transparency = 1

Appearance51.material = Material52

Shape50.appearance = Appearance51
Box53 = x3d.Box()
Box53.size = [20,1,1]

Shape50.geometry = Box53

Transform49.children.append(Shape50)

Transform30.children.append(Transform49)

Scene15.children.append(Transform30)
Transform54 = x3d.Transform()
Transform54.translation = [10,0.5,4.5]
Transform54.rotation = [0,1,0,1.57]
Transform55 = x3d.Transform(DEF="launch")
Transform55.translation = [0,2,5]
Billboard56 = x3d.Billboard()
Shape57 = x3d.Shape()
Appearance58 = x3d.Appearance()
Material59 = x3d.Material()
Material59.diffuseColor = [1,0,0]

Appearance58.material = Material59

Shape57.appearance = Appearance58
Text60 = x3d.Text()
Text60.string = ["LAUNCH"]
FontStyle61 = x3d.FontStyle()

Text60.fontStyle = FontStyle61

Shape57.geometry = Text60

Billboard56.children.append(Shape57)
Transform62 = x3d.Transform()
Transform62.translation = [2,0.3,0]
Shape63 = x3d.Shape()
Appearance64 = x3d.Appearance()
Material65 = x3d.Material()
Material65.transparency = 1

Appearance64.material = Material65

Shape63.appearance = Appearance64
Box66 = x3d.Box()
Box66.size = [5,1,1]

Shape63.geometry = Box66

Transform62.children.append(Shape63)

Billboard56.children.append(Transform62)
Switch67 = x3d.Switch(DEF="PigdogMonk")
Group68 = x3d.Group()
Sound69 = x3d.Sound()
Sound69.maxBack = 1000
Sound69.maxFront = 1000
AudioClip70 = x3d.AudioClip(DEF="PigDogSound")
AudioClip70.description = "PigDogSound"
AudioClip70.url = ["pigdog.wav","http://www.nps.navy.mil/code32/vrml/pigdog.wav"]

Sound69.source = AudioClip70

Group68.children.append(Sound69)

Switch67.children.append(Group68)
Group71 = x3d.Group()
Sound72 = x3d.Sound()
Sound72.maxBack = 1000
Sound72.maxFront = 1000
AudioClip73 = x3d.AudioClip(DEF="MonkSound")
AudioClip73.description = "MonkSound"
AudioClip73.url = ["monks.wav","http://www.nps.navy.mil/code32/vrml/monks.wav"]

Sound72.source = AudioClip73

Group71.children.append(Sound72)

Switch67.children.append(Group71)

Billboard56.children.append(Switch67)

Transform55.children.append(Billboard56)
TouchSensor74 = x3d.TouchSensor(DEF="Launch")
TouchSensor74.description = "launch!"

Transform55.children.append(TouchSensor74)

Transform54.children.append(Transform55)
Transform75 = x3d.Transform()
Switch76 = x3d.Switch(DEF="projectilename")
Switch76.whichChoice = 0
Group77 = x3d.Group()
Shape78 = x3d.Shape()
Appearance79 = x3d.Appearance(USE="TextAppearance")

Shape78.appearance = Appearance79
Text80 = x3d.Text()
Text80.string = ["Bowling Ball (10 lbs)"]
FontStyle81 = x3d.FontStyle()
FontStyle81.size = 0.5

Text80.fontStyle = FontStyle81

Shape78.geometry = Text80

Group77.children.append(Shape78)
Sound82 = x3d.Sound()
Sound82.maxBack = 1000
Sound82.maxFront = 1000
Sound82.priority = 1
AudioClip83 = x3d.AudioClip(DEF="HolyHandGrenadeSound")
AudioClip83.description = "HolyHandGrenadeSound"
AudioClip83.url = ["grenade.wav","http://www.nps.navy.mil/code32/vrml/grenade.wav"]

Sound82.source = AudioClip83

Group77.children.append(Sound82)

Switch76.children.append(Group77)
Group84 = x3d.Group()
Shape85 = x3d.Shape()
Appearance86 = x3d.Appearance(USE="TextAppearance")

Shape85.appearance = Appearance86
Text87 = x3d.Text()
Text87.string = ["Cow (1000 lbs)"]
FontStyle88 = x3d.FontStyle()
FontStyle88.size = 0.5

Text87.fontStyle = FontStyle88

Shape85.geometry = Text87

Group84.children.append(Shape85)
Sound89 = x3d.Sound()
Sound89.maxBack = 1000
Sound89.maxFront = 1000
AudioClip90 = x3d.AudioClip(DEF="CowSound")
AudioClip90.description = "CowSound"
AudioClip90.url = ["lavache.wav","http://www.nps.navy.mil/code32/vrml/lavache.wav"]

Sound89.source = AudioClip90

Group84.children.append(Sound89)

Switch76.children.append(Group84)
Group91 = x3d.Group()
Shape92 = x3d.Shape()
Appearance93 = x3d.Appearance(USE="TextAppearance")

Shape92.appearance = Appearance93
Text94 = x3d.Text()
Text94.string = ["Chicken (5 lbs)"]
FontStyle95 = x3d.FontStyle()
FontStyle95.size = 0.5

Text94.fontStyle = FontStyle95

Shape92.geometry = Text94

Group91.children.append(Shape92)
Sound96 = x3d.Sound()
Sound96.maxBack = 1000
Sound96.maxFront = 1000
Sound96.priority = 1
AudioClip97 = x3d.AudioClip(DEF="HamsterSound")
AudioClip97.description = "HamsterSound"
AudioClip97.url = ["hamster.wav","http://www.nps.navy.mil/code32/vrml/hamster.wav"]

Sound96.source = AudioClip97

Group91.children.append(Sound96)

Switch76.children.append(Group91)

Transform75.children.append(Switch76)

Transform54.children.append(Transform75)

Scene15.children.append(Transform54)
Transform98 = x3d.Transform()
Transform98.rotation = [0,1,0,-1.67]
Transform99 = x3d.Transform(DEF="aft")
Transform99.translation = [5,5,15]
Transform100 = x3d.Transform()
Transform100.translation = [-2.5,-4.5,-2]
Transform101 = x3d.Transform(USE="launch")

Transform100.children.append(Transform101)

Transform99.children.append(Transform100)

Transform98.children.append(Transform99)

Scene15.children.append(Transform98)
Transform102 = x3d.Transform()
Transform102.translation = [0,3,0]
Shape103 = x3d.Shape(DEF="plank")
Appearance104 = x3d.Appearance(DEF="wood")
ImageTexture105 = x3d.ImageTexture(DEF="woodTexture")
ImageTexture105.url = ["wood.gif","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif"]

Appearance104.texture = ImageTexture105

Shape103.appearance = Appearance104
Box106 = x3d.Box()
Box106.size = [25,1,1]

Shape103.geometry = Box106

Transform102.children.append(Shape103)
Transform107 = x3d.Transform(DEF="angledsupport")
Transform107.translation = [-5,10,0]
Transform107.rotation = [0,0,1,1]
Shape108 = x3d.Shape(USE="plank")

Transform107.children.append(Shape108)

Transform102.children.append(Transform107)
Transform109 = x3d.Transform(DEF="angledsupport2")
Transform109.translation = [5,10,0]
Transform109.rotation = [0,0,1,-1]
Shape110 = x3d.Shape(USE="plank")

Transform109.children.append(Shape110)

Transform102.children.append(Transform109)
Transform111 = x3d.Transform(DEF="verticalsupport")
Transform111.translation = [0,11,0]
Transform111.rotation = [0,0,1,1.57]
Transform111.scale = [0.9,1,1]
Shape112 = x3d.Shape(USE="plank")

Transform111.children.append(Shape112)

Transform102.children.append(Transform111)
Transform113 = x3d.Transform(DEF="horizontalsupport")
Transform113.translation = [0,10,0]
Transform113.scale = [0.4,1,1]
Shape114 = x3d.Shape(USE="plank")

Transform113.children.append(Shape114)

Transform102.children.append(Transform113)
Transform115 = x3d.Transform()
Transform115.translation = [0,5,10]
Transform115.rotation = [0,0,1,1.57]
Transform115.scale = [0.6,1,1]
Transform116 = x3d.Transform()
Transform116.rotation = [0,1,0,0.4]
Shape117 = x3d.Shape(USE="plank")

Transform116.children.append(Shape117)

Transform115.children.append(Transform116)

Transform102.children.append(Transform115)
Transform118 = x3d.Transform(DEF="panel")
Transform118.translation = [0,18.2,-0.3]
Shape119 = x3d.Shape()
Appearance120 = x3d.Appearance(USE="wood")

Shape119.appearance = Appearance120
Box121 = x3d.Box()
Box121.size = [5,5,0.5]

Shape119.geometry = Box121

Transform118.children.append(Shape119)

Transform102.children.append(Transform118)
Transform122 = x3d.Transform()
Transform122.translation = [0,0.6,2.5]
Transform122.rotation = [1,0,0,-1.57]
Transform123 = x3d.Transform()
Transform123.rotation = [0,0,1,1.57]
Shape124 = x3d.Shape()
Appearance125 = x3d.Appearance(USE="wood")

Shape124.appearance = Appearance125
Extrusion126 = x3d.Extrusion()
Extrusion126.beginCap = False
Extrusion126.endCap = False
Extrusion126.solid = False
Extrusion126.crossSection = [(1, -0.38),(0.92, -0.38),(0.71, -0.71),(0.38, -0.92),(0, -1),(-0.38, -0.92),(-0.71, -0.71),(-0.92, -0.38),(-1, -0.38),(-1, -1.1),(1, -1.1),(1, -0.38)]
Extrusion126.spine = [(0, 6, 0),(0, -11, 0)]

Shape124.geometry = Extrusion126

Transform123.children.append(Shape124)

Transform122.children.append(Transform123)

Transform102.children.append(Transform122)
Transform127 = x3d.Transform(DEF="flinger")
Transform127.translation = [-7,18,2.5]
Transform127.rotation = [0,0,1,0.82]
Transform127.scale = [0.9,1,1]
Transform127.center = [7,0,0]
Transform128 = x3d.Transform()
Shape129 = x3d.Shape()
Appearance130 = x3d.Appearance(USE="wood")

Shape129.appearance = Appearance130
Box131 = x3d.Box()
Box131.size = [35,1,1]

Shape129.geometry = Box131

Transform128.children.append(Shape129)
Transform132 = x3d.Transform()
Transform132.translation = [7,0,0]
Shape133 = x3d.Shape()
Appearance134 = x3d.Appearance(USE="wood")

Shape133.appearance = Appearance134
Box135 = x3d.Box()
Box135.size = [8,2,2]

Shape133.geometry = Box135

Transform132.children.append(Shape133)

Transform128.children.append(Transform132)

Transform127.children.append(Transform128)
Transform136 = x3d.Transform()
Transform136.translation = [-15,-1,0]
Transform136.rotation = [1,0,0,1.57]
Transform136.scale = [0.2,0.2,0.2]
Shape137 = x3d.Shape(DEF="Torus")
Appearance138 = x3d.Appearance()
Material139 = x3d.Material()
Material139.specularColor = [1,1,1]

Appearance138.material = Material139

Shape137.appearance = Appearance138
Extrusion140 = x3d.Extrusion()
Extrusion140.beginCap = False
Extrusion140.endCap = False
Extrusion140.convex = False
Extrusion140.creaseAngle = 1.57
Extrusion140.crossSection = [(0.9, 0),(0.81, -0.34),(0.63, -0.63),(0.34, -0.83),(0, -0.9),(-0.34, -0.81),(-0.63, -0.63),(-0.81, -0.34),(-0.9, 0),(-0.81, 0.34),(-0.63, 0.63),(-0.34, 0.81),(0, 0.9),(0.38, 0.81),(0.63, 0.63),(0.81, 0.34),(0.9, 0)]
Extrusion140.spine = [(2, 0, 0),(1.85, 0, 0.77),(1.41, 0, 1.41),(0.77, 0, 1.85),(0, 0, 2),(-0.77, 0, 1.85),(-1.41, 0, 1.41),(-1.85, 0, 0.77),(-2, 0, 0),(-1.85, 0, -0.77),(-1.41, 0, -1.41),(-0.77, 0, -1.85),(0, 0, -2),(0.77, 0, -1.85),(1.41, 0, -1.41),(1.85, 0, -0.77),(2, 0, 0)]

Shape137.geometry = Extrusion140

Transform136.children.append(Shape137)
Transform141 = x3d.Transform()
Transform141.translation = [1,0,2]
Shape142 = x3d.Shape()
Appearance143 = x3d.Appearance(DEF="rope")
ImageTexture144 = x3d.ImageTexture(USE="woodTexture")

Appearance143.texture = ImageTexture144

Shape142.appearance = Appearance143
Sphere145 = x3d.Sphere()
Sphere145.radius = 1.5

Shape142.geometry = Sphere145

Transform141.children.append(Shape142)

Transform136.children.append(Transform141)

Transform127.children.append(Transform136)
Transform146 = x3d.Transform()
Transform146.translation = [-18.3,0.3,0]
Transform146.rotation = [0,0,1,1.2]
Transform146.scale = [0.2,0.2,0.2]
Shape147 = x3d.Shape()
Appearance148 = x3d.Appearance()
Material149 = x3d.Material()
Material149.specularColor = [1,1,1]

Appearance148.material = Material149

Shape147.appearance = Appearance148
Cylinder150 = x3d.Cylinder()
Cylinder150.height = 10

Shape147.geometry = Cylinder150

Transform146.children.append(Shape147)
Transform151 = x3d.Transform()
Transform151.translation = [0,-2.5,0]
Shape152 = x3d.Shape(USE="Torus")

Transform151.children.append(Shape152)
Transform153 = x3d.Transform()
Transform153.translation = [-2,0,0]
Shape154 = x3d.Shape()
Appearance155 = x3d.Appearance(USE="rope")

Shape154.appearance = Appearance155
Sphere156 = x3d.Sphere()
Sphere156.radius = 1.5

Shape154.geometry = Sphere156

Transform153.children.append(Shape154)

Transform151.children.append(Transform153)

Transform146.children.append(Transform151)
Transform157 = x3d.Transform()
Transform157.translation = [15,55,-11]
Transform157.rotation = [0,0,1,1.2]
Transform158 = x3d.Transform()
Transform158.scale = [5,5,5]
Shape159 = x3d.Shape()
Appearance160 = x3d.Appearance(USE="rope")

Shape159.appearance = Appearance160
Extrusion161 = x3d.Extrusion()
Extrusion161.beginCap = False
Extrusion161.endCap = False
Extrusion161.solid = False
Extrusion161.creaseAngle = 0.76
Extrusion161.crossSection = [(0.1, 0),(0.092, -0.038),(0.071, -0.071),(0.038, -0.092),(0, -0.1),(-0.038, -0.092),(-0.071, -0.071),(-0.092, -0.038),(-0.1, 0),(-0.092, 0.038),(-0.071, 0.071),(-0.038, 0.092),(0, 0.1),(0.038, 0.092),(0.071, 0.071),(0.092, 0.038),(0.1, 0)]
Extrusion161.spine = [(-15.2, 1.4, 2.2),(-12, -0.8, 2.2)]

Shape159.geometry = Extrusion161

Transform158.children.append(Shape159)

Transform157.children.append(Transform158)

Transform146.children.append(Transform157)

Transform127.children.append(Transform146)
Transform162 = x3d.Transform()
Transform162.translation = [-17,-4.5,0]
Transform162.rotation = [1,0,0,-1.7]
Transform163 = x3d.Transform()
Transform163.scale = [0.2,0.2,0.2]
Shape164 = x3d.Shape(USE="Torus")

Transform163.children.append(Shape164)
Transform165 = x3d.Transform()
Transform165.translation = [-1,0,1.7]
Shape166 = x3d.Shape()
Appearance167 = x3d.Appearance(USE="rope")

Shape166.appearance = Appearance167
Sphere168 = x3d.Sphere()
Sphere168.radius = 1.5

Shape166.geometry = Sphere168

Transform165.children.append(Shape166)

Transform163.children.append(Transform165)

Transform162.children.append(Transform163)

Transform127.children.append(Transform162)
Transform169 = x3d.Transform(DEF="RnS")
Transform170 = x3d.Transform(DEF="ropes")
Transform171 = x3d.Transform()
Transform171.translation = [7,-26,-2.5]
Transform171.rotation = [0,0,1,-0.82]
Shape172 = x3d.Shape()
Appearance173 = x3d.Appearance(USE="rope")

Shape172.appearance = Appearance173
Extrusion174 = x3d.Extrusion()
Extrusion174.beginCap = False
Extrusion174.endCap = False
Extrusion174.solid = False
Extrusion174.creaseAngle = 0.76
Extrusion174.crossSection = [(0.1, 0),(0.092, -0.038),(0.071, -0.071),(0.038, -0.092),(0, -0.1),(-0.038, -0.092),(-0.071, -0.071),(-0.092, -0.038),(-0.1, 0),(-0.092, 0.038),(-0.071, 0.071),(-0.038, 0.092),(0, 0.1),(0.038, 0.092),(0.071, 0.071),(0.092, 0.038),(0.1, 0)]
Extrusion174.spine = [(-33, 0.9, 2.5),(-18.5, 1.9, 2.55)]

Shape172.geometry = Extrusion174

Transform171.children.append(Shape172)
Shape175 = x3d.Shape()
Appearance176 = x3d.Appearance(USE="rope")

Shape175.appearance = Appearance176
Extrusion177 = x3d.Extrusion()
Extrusion177.beginCap = False
Extrusion177.endCap = False
Extrusion177.solid = False
Extrusion177.creaseAngle = 0.76
Extrusion177.crossSection = [(0.1, 0),(0.092, -0.038),(0.071, -0.071),(0.038, -0.092),(0, -0.1),(-0.038, -0.092),(-0.071, -0.071),(-0.092, -0.038),(-0.1, 0),(-0.092, 0.038),(-0.071, 0.071),(-0.038, 0.092),(0, 0.1),(0.038, 0.092),(0.071, 0.071),(0.092, 0.038),(0.1, 0)]
Extrusion177.spine = [(-35.7, -0.8, 2.5),(-18.8, -0.8, 2.55)]

Shape175.geometry = Extrusion177

Transform171.children.append(Shape175)

Transform170.children.append(Transform171)

Transform169.children.append(Transform170)
Transform178 = x3d.Transform(DEF="sling")
Transform178.translation = [-4,-15.3,0]
Transform178.rotation = [0,0,1,-0.82]
Transform179 = x3d.Transform()
Transform180 = x3d.Transform()
Transform180.translation = [0.5,0,-1]
Transform180.rotation = [0,1,0,-1.57]
Transform180.scale = [1,1.3,1]
Transform181 = x3d.Transform()
Transform181.rotation = [0,0,1,1.57]
Transform182 = x3d.Transform()
Transform182.scale = [0.3,0.3,0.3]
Shape183 = x3d.Shape(DEF="halfsling")
Appearance184 = x3d.Appearance(DEF="clear")
Material185 = x3d.Material()
Material185.transparency = 0.5

Appearance184.material = Material185

Shape183.appearance = Appearance184
Extrusion186 = x3d.Extrusion()
Extrusion186.crossSection = [(0, 0),(0, 5),(0.5, 7),(1, 8),(2, 9),(3, 11),(3.5, 11.2),(4, 11),(5, 9),(6, 8),(6.5, 7),(6.7, 5),(6.7, 0),(0, 0)]
Extrusion186.spine = [(0, 0, 0),(0.1, 0, 0)]

Shape183.geometry = Extrusion186

Transform182.children.append(Shape183)
Transform187 = x3d.Transform()
Transform187.translation = [0,-3.5,11.5]
Transform187.scale = [0.3,0.3,0.3]
Shape188 = x3d.Shape(USE="Torus")

Transform187.children.append(Shape188)
Transform189 = x3d.Transform()
Transform189.translation = [0,0,2]
Shape190 = x3d.Shape()
Appearance191 = x3d.Appearance(USE="rope")

Shape190.appearance = Appearance191
Sphere192 = x3d.Sphere()
Sphere192.radius = 1.5

Shape190.geometry = Sphere192

Transform189.children.append(Shape190)

Transform187.children.append(Transform189)

Transform182.children.append(Transform187)

Transform181.children.append(Transform182)
Transform193 = x3d.Transform()
Transform193.translation = [2,0,0]
Transform193.scale = [0.3,0.3,0.3]
Shape194 = x3d.Shape(USE="halfsling")

Transform193.children.append(Shape194)
Transform195 = x3d.Transform()
Transform195.translation = [0,-3.5,11.3]
Transform195.scale = [0.3,0.3,0.3]
Shape196 = x3d.Shape(USE="Torus")

Transform195.children.append(Shape196)
Transform197 = x3d.Transform()
Transform197.translation = [0,0,2]
Shape198 = x3d.Shape()
Appearance199 = x3d.Appearance(USE="rope")

Shape198.appearance = Appearance199
Sphere200 = x3d.Sphere()
Sphere200.radius = 1.5

Shape198.geometry = Sphere200

Transform197.children.append(Shape198)

Transform195.children.append(Transform197)

Transform193.children.append(Transform195)

Transform181.children.append(Transform193)
Transform201 = x3d.Transform()
Transform201.translation = [1,-1,0]
Shape202 = x3d.Shape()
Appearance203 = x3d.Appearance(USE="clear")

Shape202.appearance = Appearance203
Extrusion204 = x3d.Extrusion()
Extrusion204.beginCap = False
Extrusion204.endCap = False
Extrusion204.solid = False
Extrusion204.creaseAngle = 0.785
Extrusion204.crossSection = [(1, 0),(0.92, -0.38),(0.71, -0.71),(0.38, -0.92),(0, -1),(-0.38, -0.92),(-0.71, -0.71),(-0.92, -0.38),(-1, 0)]
Extrusion204.spine = [(0, -1, 0),(0, 1, 0)]

Shape202.geometry = Extrusion204

Transform201.children.append(Shape202)

Transform181.children.append(Transform201)

Transform180.children.append(Transform181)
TouchSensor205 = x3d.TouchSensor(DEF="LauncheeChoice")
TouchSensor205.description = "launcher choice"

Transform180.children.append(TouchSensor205)

Transform179.children.append(Transform180)
Transform206 = x3d.Transform(DEF="projectiletransform")
Transform206.scale = [0.01,0.01,0.01]
Switch207 = x3d.Switch(DEF="projectile")
Switch207.whichChoice = 0
Group208 = x3d.Group()
Transform209 = x3d.Transform()
Transform209.translation = [0,0.7,0]
Shape210 = x3d.Shape()
Appearance211 = x3d.Appearance(DEF="black")
Material212 = x3d.Material()
Material212.diffuseColor = [0,0,0]
Material212.specularColor = [1,1,1]

Appearance211.material = Material212

Shape210.appearance = Appearance211
Sphere213 = x3d.Sphere()
Sphere213.radius = 0.7

Shape210.geometry = Sphere213

Transform209.children.append(Shape210)

Group208.children.append(Transform209)

Switch207.children.append(Group208)
Group214 = x3d.Group()
Transform215 = x3d.Transform()
Inline216 = x3d.Inline()
Inline216.url = ["cow.wrl","http://www.uoguelph.ca/~dchiu/cow.wrl"]

Transform215.children.append(Inline216)

Group214.children.append(Transform215)

Switch207.children.append(Group214)
Group217 = x3d.Group()
Transform218 = x3d.Transform()
Transform218.translation = [0,0.7,0]
Transform218.rotation = [0,1,0,1.57]
Transform218.scale = [0.4,0.4,0.4]
Inline219 = x3d.Inline()
Inline219.url = ["vrml_ginger.wrl","http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl"]

Transform218.children.append(Inline219)

Group217.children.append(Transform218)

Switch207.children.append(Group217)

Transform206.children.append(Switch207)

Transform179.children.append(Transform206)

Transform178.children.append(Transform179)

Transform169.children.append(Transform178)

Transform127.children.append(Transform169)

Transform102.children.append(Transform127)
Transform220 = x3d.Transform()
Transform220.translation = [0,18,2.5]
Transform220.rotation = [1,0,0,1.57]
Shape221 = x3d.Shape()
Appearance222 = x3d.Appearance()
Material223 = x3d.Material()
Material223.diffuseColor = [0,0,0]
Material223.specularColor = [1,1,1]

Appearance222.material = Material223

Shape221.appearance = Appearance222
Cylinder224 = x3d.Cylinder()
Cylinder224.height = 8
Cylinder224.radius = 0.4

Shape221.geometry = Cylinder224

Transform220.children.append(Shape221)

Transform102.children.append(Transform220)
Transform225 = x3d.Transform(DEF="verticalweight")
Transform226 = x3d.Transform()
Transform226.translation = [4,18,1.8]
Shape227 = x3d.Shape()
Appearance228 = x3d.Appearance(USE="wood")

Shape227.appearance = Appearance228
Box229 = x3d.Box()
Box229.size = [1,10,0.5]

Shape227.geometry = Box229

Transform226.children.append(Shape227)

Transform225.children.append(Transform226)
Transform230 = x3d.Transform()
Transform230.translation = [4,18,3.2]
Shape231 = x3d.Shape()
Appearance232 = x3d.Appearance(USE="wood")

Shape231.appearance = Appearance232
Box233 = x3d.Box()
Box233.size = [1,10,0.5]

Shape231.geometry = Box233

Transform230.children.append(Shape231)

Transform225.children.append(Transform230)
Transform234 = x3d.Transform()
Transform234.translation = [4,14,2.5]
Shape235 = x3d.Shape()
Appearance236 = x3d.Appearance()
Material237 = x3d.Material()
Material237.diffuseColor = [0,0,0]
Material237.specularColor = [1,1,1]

Appearance236.material = Material237

Shape235.appearance = Appearance236
Cylinder238 = x3d.Cylinder()
Cylinder238.height = 4
Cylinder238.radius = 1.5

Shape235.geometry = Cylinder238

Transform234.children.append(Shape235)

Transform225.children.append(Transform234)
Transform239 = x3d.Transform()
Transform239.translation = [4,22,2.5]
Transform239.rotation = [1,0,0,1.57]
Shape240 = x3d.Shape()
Appearance241 = x3d.Appearance()
Material242 = x3d.Material()
Material242.diffuseColor = [0,0,0]
Material242.specularColor = [1,1,1]

Appearance241.material = Material242

Shape240.appearance = Appearance241
Cylinder243 = x3d.Cylinder()
Cylinder243.height = 2.5
Cylinder243.radius = 0.3

Shape240.geometry = Cylinder243

Transform239.children.append(Shape240)

Transform225.children.append(Transform239)

Transform102.children.append(Transform225)
Transform244 = x3d.Transform()
Transform244.translation = [-11.5,-1,2]
Transform244.rotation = [0,0,1,1.57]
Transform244.scale = [0.2,0.2,0.2]
Transform245 = x3d.Transform(DEF="screw")
Transform245.rotation = [1,0,0,1.57]
Shape246 = x3d.Shape(USE="Torus")

Transform245.children.append(Shape246)
Transform247 = x3d.Transform()
Transform247.translation = [0,0,7]
Transform247.rotation = [1,0,0,-1.57]
Shape248 = x3d.Shape()
Appearance249 = x3d.Appearance()
Material250 = x3d.Material()
Material250.specularColor = [1,1,1]

Appearance249.material = Material250

Shape248.appearance = Appearance249
Cylinder251 = x3d.Cylinder()
Cylinder251.height = 10
Cylinder251.radius = 0.7

Shape248.geometry = Cylinder251

Transform247.children.append(Shape248)

Transform245.children.append(Transform247)

Transform244.children.append(Transform245)
Transform252 = x3d.Transform()
Transform252.translation = [0,0,7]
Transform253 = x3d.Transform(USE="screw")

Transform252.children.append(Transform253)

Transform244.children.append(Transform252)
Transform254 = x3d.Transform(DEF="Pin")
Transform254.translation = [0,0,-3]
Transform254.rotation = [1,0,0,-1.57]
Transform255 = x3d.Transform(USE="screw")

Transform254.children.append(Transform255)

Transform244.children.append(Transform254)

Transform102.children.append(Transform244)
Transform256 = x3d.Transform()
Transform256.translation = [0,0,5]
Shape257 = x3d.Shape(USE="plank")

Transform256.children.append(Shape257)
Transform258 = x3d.Transform(USE="angledsupport")

Transform256.children.append(Transform258)
Transform259 = x3d.Transform(USE="angledsupport2")

Transform256.children.append(Transform259)
Transform260 = x3d.Transform(USE="verticalsupport")

Transform256.children.append(Transform260)
Transform261 = x3d.Transform(USE="horizontalsupport")

Transform256.children.append(Transform261)
Transform262 = x3d.Transform()
Transform262.translation = [0,-11,-2.5]
Transform262.rotation = [0,1,0,1.57]
Transform262.scale = [0.6,1,1]
Transform263 = x3d.Transform(USE="horizontalsupport")

Transform262.children.append(Transform263)

Transform256.children.append(Transform262)
Transform264 = x3d.Transform()
Transform264.translation = [0,5,-10]
Transform264.rotation = [0,0,1,-1.57]
Transform264.scale = [0.6,1,1]
Transform265 = x3d.Transform()
Transform265.rotation = [0,1,0,0.4]
Shape266 = x3d.Shape(USE="plank")

Transform265.children.append(Shape266)

Transform264.children.append(Transform265)

Transform256.children.append(Transform264)
Transform267 = x3d.Transform()
Transform267.translation = [0,0,0.6]
Transform268 = x3d.Transform(USE="panel")

Transform267.children.append(Transform268)

Transform256.children.append(Transform267)

Transform102.children.append(Transform256)
Transform269 = x3d.Transform()
Transform269.translation = [10,-1,2.5]
Shape270 = x3d.Shape(DEF="Axle")
Appearance271 = x3d.Appearance(USE="wood")

Shape270.appearance = Appearance271
Box272 = x3d.Box()
Box272.size = [1,1,8]

Shape270.geometry = Box272

Transform269.children.append(Shape270)
Transform273 = x3d.Transform()
Transform273.translation = [0,0,4.5]
Transform273.rotation = [1,0,0,1.57]
Shape274 = x3d.Shape(DEF="wheel")
Appearance275 = x3d.Appearance(USE="wood")

Shape274.appearance = Appearance275
Cylinder276 = x3d.Cylinder()
Cylinder276.radius = 2

Shape274.geometry = Cylinder276

Transform273.children.append(Shape274)
Shape277 = x3d.Shape(DEF="tracks")
Appearance278 = x3d.Appearance(USE="black")

Shape277.appearance = Appearance278
Sphere279 = x3d.Sphere()
Sphere279.radius = 1.5

Shape277.geometry = Sphere279

Transform273.children.append(Shape277)
Transform280 = x3d.Transform()
Transform280.translation = [0,0.55,0]
Shape281 = x3d.Shape(DEF="hub")
Appearance282 = x3d.Appearance(USE="black")

Shape281.appearance = Appearance282
Sphere283 = x3d.Sphere()
Sphere283.radius = 1.5

Shape281.geometry = Sphere283

Transform280.children.append(Shape281)

Transform273.children.append(Transform280)

Transform269.children.append(Transform273)
Transform284 = x3d.Transform()
Transform284.translation = [0,0,-4.5]
Transform284.rotation = [1,0,0,1.57]
Shape285 = x3d.Shape(USE="wheel")

Transform284.children.append(Shape285)
Shape286 = x3d.Shape(USE="tracks")

Transform284.children.append(Shape286)
Transform287 = x3d.Transform()
Transform287.translation = [0,-0.55,0]
Shape288 = x3d.Shape(USE="hub")

Transform287.children.append(Shape288)

Transform284.children.append(Transform287)

Transform269.children.append(Transform284)

Transform102.children.append(Transform269)
Transform289 = x3d.Transform()
Transform289.translation = [-10,-1,2.5]
Shape290 = x3d.Shape(USE="Axle")

Transform289.children.append(Shape290)
Transform291 = x3d.Transform()
Transform291.translation = [0,0,4.5]
Transform291.rotation = [1,0,0,1.57]
Shape292 = x3d.Shape(USE="wheel")

Transform291.children.append(Shape292)
Shape293 = x3d.Shape(USE="tracks")

Transform291.children.append(Shape293)
Transform294 = x3d.Transform()
Transform294.translation = [0,0.55,0]
Shape295 = x3d.Shape(USE="hub")

Transform294.children.append(Shape295)

Transform291.children.append(Transform294)

Transform289.children.append(Transform291)
Transform296 = x3d.Transform()
Transform296.translation = [0,0,-4.5]
Transform296.rotation = [1,0,0,1.57]
Shape297 = x3d.Shape(USE="wheel")

Transform296.children.append(Shape297)
Shape298 = x3d.Shape(USE="tracks")

Transform296.children.append(Shape298)
Transform299 = x3d.Transform()
Transform299.translation = [0,-0.55,0]
Shape300 = x3d.Shape(USE="hub")

Transform299.children.append(Shape300)

Transform296.children.append(Transform299)

Transform289.children.append(Transform296)
Transform301 = x3d.Transform()
Transform301.translation = [0,100,400]
Transform301.rotation = [0,1,0,-0.6]
Transform302 = x3d.Transform()
Transform302.translation = [1,3,0]
Viewpoint303 = x3d.Viewpoint()
Viewpoint303.description = "Side"

Transform302.children.append(Viewpoint303)

Transform301.children.append(Transform302)
Transform304 = x3d.Transform(USE="launch")

Transform301.children.append(Transform304)
Transform305 = x3d.Transform()
TouchSensor306 = x3d.TouchSensor(USE="LauncheeChoice")

Transform305.children.append(TouchSensor306)
Switch307 = x3d.Switch(USE="projectilename")

Transform305.children.append(Switch307)
Transform308 = x3d.Transform()
Transform308.translation = [2.5,0,0]
Shape309 = x3d.Shape()
Appearance310 = x3d.Appearance()
Material311 = x3d.Material()
Material311.transparency = 1

Appearance310.material = Material311

Shape309.appearance = Appearance310
Box312 = x3d.Box()
Box312.size = [5,0.5,0.5]

Shape309.geometry = Box312

Transform308.children.append(Shape309)

Transform305.children.append(Transform308)

Transform301.children.append(Transform305)
Transform313 = x3d.Transform()
Transform313.translation = [0,-1,0]
Transform313.scale = [0.5,0.5,0.5]
TouchSensor314 = x3d.TouchSensor(USE="weightselector")

Transform313.children.append(TouchSensor314)
Switch315 = x3d.Switch(USE="Weight")

Transform313.children.append(Switch315)
Transform316 = x3d.Transform()
Transform316.translation = [8,0,0]
Shape317 = x3d.Shape()
Appearance318 = x3d.Appearance()
Material319 = x3d.Material()
Material319.transparency = 1

Appearance318.material = Material319

Shape317.appearance = Appearance318
Box320 = x3d.Box()
Box320.size = [17,1,0.5]

Shape317.geometry = Box320

Transform316.children.append(Shape317)

Transform313.children.append(Transform316)

Transform301.children.append(Transform313)

Transform289.children.append(Transform301)
Transform321 = x3d.Transform(DEF="ProjectileTransform")
Transform321.translation = [14.25,1.25,0]
Switch322 = x3d.Switch(USE="projectile")

Transform321.children.append(Switch322)
Transform323 = x3d.Transform()
Transform323.translation = [0,1,0]
Transform323.rotation = [0,1,0,1.57]
Viewpoint324 = x3d.Viewpoint()
Viewpoint324.description = "Projectile Cam"
Viewpoint324.position = [0,0,15]

Transform323.children.append(Viewpoint324)

Transform321.children.append(Transform323)

Transform289.children.append(Transform321)
Transform325 = x3d.Transform()
Transform325.translation = [20,2,0]
Transform326 = x3d.Transform(DEF="Front")
Transform326.rotation = [0,1,0,1.57]
Viewpoint327 = x3d.Viewpoint()
Viewpoint327.description = "Fore"

Transform326.children.append(Viewpoint327)

Transform325.children.append(Transform326)

Transform289.children.append(Transform325)
Transform328 = x3d.Transform()
Transform328.translation = [-8,4,0]
Transform329 = x3d.Transform()
Transform329.rotation = [0,1,0,-1.57]
Viewpoint330 = x3d.Viewpoint()
Viewpoint330.description = "Aft"

Transform329.children.append(Viewpoint330)

Transform328.children.append(Transform329)

Transform289.children.append(Transform328)
Script331 = x3d.Script(DEF="WeightScript")
field332 = x3d.field()
field332.accessType = "inputOnly"
field332.type = "SFBool"
field332.name = "set_boolean"

Script331.field.append(field332)
field333 = x3d.field()
field333.accessType = "outputOnly"
field333.type = "SFInt32"
field333.name = "whichchoice"

Script331.field.append(field333)
field334 = x3d.field()
field334.accessType = "outputOnly"
field334.type = "SFFloat"
field334.name = "CounterWeight"

Script331.field.append(field334)

Script331.sourceCode = '''ecmascript:\n"+
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
"}'''

Transform289.children.append(Script331)
Script335 = x3d.Script(DEF="LauncheeScript")
field336 = x3d.field()
field336.accessType = "inputOnly"
field336.type = "SFBool"
field336.name = "set_boolean"

Script335.field.append(field336)
field337 = x3d.field()
field337.accessType = "outputOnly"
field337.type = "SFInt32"
field337.name = "whichchoice"

Script335.field.append(field337)
field338 = x3d.field()
field338.accessType = "outputOnly"
field338.type = "SFFloat"
field338.name = "ProjectileWeight"

Script335.field.append(field338)

Script335.sourceCode = '''ecmascript:\n"+
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
"}'''

Transform289.children.append(Script335)
Script339 = x3d.Script(DEF="PigdogMonkScript")
field340 = x3d.field()
field340.accessType = "inputOnly"
field340.type = "SFBool"
field340.name = "set_boolean"

Script339.field.append(field340)
field341 = x3d.field()
field341.accessType = "outputOnly"
field341.type = "SFInt32"
field341.name = "whichchoice"

Script339.field.append(field341)

Script339.sourceCode = '''ecmascript:\n"+
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
"}'''

Transform289.children.append(Script339)
Script342 = x3d.Script(DEF="Mover")
field343 = x3d.field()
field343.accessType = "inputOnly"
field343.type = "SFFloat"
field343.name = "set_fraction"

Script342.field.append(field343)
field344 = x3d.field()
field344.accessType = "inputOnly"
field344.type = "SFFloat"
field344.name = "set_MassCounterWeight"

Script342.field.append(field344)
field345 = x3d.field()
field345.accessType = "inputOnly"
field345.type = "SFFloat"
field345.name = "set_MassProjectileWeight"

Script342.field.append(field345)
field346 = x3d.field()
field346.accessType = "initializeOnly"
field346.type = "SFFloat"
field346.name = "MassCounterWeight"
field346.value = 1

Script342.field.append(field346)
field347 = x3d.field()
field347.accessType = "initializeOnly"
field347.type = "SFFloat"
field347.name = "MassProjectileWeight"
field347.value = 1

Script342.field.append(field347)
field348 = x3d.field()
field348.accessType = "outputOnly"
field348.type = "SFVec3f"
field348.name = "transparent"

Script342.field.append(field348)
field349 = x3d.field()
field349.accessType = "outputOnly"
field349.type = "SFVec3f"
field349.name = "value_changed"

Script342.field.append(field349)

Script342.sourceCode = '''ecmascript:\n"+
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
"      	var x = (2*(MassCounterWeight/MassProjectileWeight)*Height*fraction)-.5*TrebuchetHeight;\n"+
"	// start at TrebuchetHeight and keep along z axis (z=zero)\n"+
"	var y =  (MassCounterWeight/MassProjectileWeight)*Height*Math.sin(fraction*3.14);\n"+
"        var z = 0;\n"+
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
"}'''

Transform289.children.append(Script342)

Transform102.children.append(Transform289)

Scene15.children.append(Transform102)
TimeSensor350 = x3d.TimeSensor(DEF="clock")
TimeSensor350.cycleInterval = 10

Scene15.children.append(TimeSensor350)
PositionInterpolator351 = x3d.PositionInterpolator(DEF="verticalweightpath")
PositionInterpolator351.key = [0,0.1,0.2,0.2,0.3,0.9]
PositionInterpolator351.keyValue = [(1.4, 1.6, 0),(1, -8, 0),(-3.5, -12, 0),(-3.5, -12, 0),(1.2, -8, 0),(1.4, 1.6, 0)]

Scene15.children.append(PositionInterpolator351)
OrientationInterpolator352 = x3d.OrientationInterpolator(DEF="flingerangles")
OrientationInterpolator352.key = [0,0.1,0.2,0.2,0.3,0.9]
OrientationInterpolator352.keyValue = [(0, 0, 1, 0.82),(0, 0, 1, -0.77),(0, 0, 1, -1.57),(0, 0, 1, -1.57),(0, 0, 1, -0.77),(0, 0, 1, 0.82)]

Scene15.children.append(OrientationInterpolator352)
PositionInterpolator353 = x3d.PositionInterpolator(DEF="pinpath")
PositionInterpolator353.key = [0,0.01,0.95,1]
PositionInterpolator353.keyValue = [(0, 0, -3),(0, 0, -10),(0, 0, -10),(0, 0, -3)]

Scene15.children.append(PositionInterpolator353)
OrientationInterpolator354 = x3d.OrientationInterpolator(DEF="RnSAngels")
OrientationInterpolator354.key = [0,0.7,1]
OrientationInterpolator354.keyValue = [(0, 0, 1, 0),(0, 0, 1, -3.14),(0, 0, 1, 0)]

Scene15.children.append(OrientationInterpolator354)
PositionInterpolator355 = x3d.PositionInterpolator(DEF="invisiable")
PositionInterpolator355.key = [0,0.2,0.98,0.99]
PositionInterpolator355.keyValue = [(1, 1, 1),(0.01, 0.01, 0.01),(0.01, 0.01, 0.01),(1, 1, 1)]

Scene15.children.append(PositionInterpolator355)
ROUTE356 = x3d.ROUTE()
ROUTE356.fromNode = "clock"
ROUTE356.fromField = "fraction_changed"
ROUTE356.toNode = "invisiable"
ROUTE356.toField = "set_fraction"

Scene15.children.append(ROUTE356)
ROUTE357 = x3d.ROUTE()
ROUTE357.fromNode = "invisiable"
ROUTE357.fromField = "value_changed"
ROUTE357.toNode = "projectiletransform"
ROUTE357.toField = "set_scale"

Scene15.children.append(ROUTE357)
ROUTE358 = x3d.ROUTE()
ROUTE358.fromNode = "WeightScript"
ROUTE358.fromField = "CounterWeight"
ROUTE358.toNode = "Mover"
ROUTE358.toField = "set_MassCounterWeight"

Scene15.children.append(ROUTE358)
ROUTE359 = x3d.ROUTE()
ROUTE359.fromNode = "LauncheeScript"
ROUTE359.fromField = "ProjectileWeight"
ROUTE359.toNode = "Mover"
ROUTE359.toField = "set_MassProjectileWeight"

Scene15.children.append(ROUTE359)
ROUTE360 = x3d.ROUTE()
ROUTE360.fromNode = "clock"
ROUTE360.fromField = "fraction_changed"
ROUTE360.toNode = "Mover"
ROUTE360.toField = "set_fraction"

Scene15.children.append(ROUTE360)
ROUTE361 = x3d.ROUTE()
ROUTE361.fromNode = "Mover"
ROUTE361.fromField = "value_changed"
ROUTE361.toNode = "ProjectileTransform"
ROUTE361.toField = "set_translation"

Scene15.children.append(ROUTE361)
ROUTE362 = x3d.ROUTE()
ROUTE362.fromNode = "Mover"
ROUTE362.fromField = "transparent"
ROUTE362.toNode = "ProjectileTransform"
ROUTE362.toField = "set_scale"

Scene15.children.append(ROUTE362)
ROUTE363 = x3d.ROUTE()
ROUTE363.fromNode = "Launch"
ROUTE363.fromField = "touchTime"
ROUTE363.toNode = "clock"
ROUTE363.toField = "set_startTime"

Scene15.children.append(ROUTE363)
ROUTE364 = x3d.ROUTE()
ROUTE364.fromNode = "Launch"
ROUTE364.fromField = "isActive"
ROUTE364.toNode = "PigdogMonkScript"
ROUTE364.toField = "set_boolean"

Scene15.children.append(ROUTE364)
ROUTE365 = x3d.ROUTE()
ROUTE365.fromNode = "Launch"
ROUTE365.fromField = "touchTime"
ROUTE365.toNode = "PigDogSound"
ROUTE365.toField = "set_startTime"

Scene15.children.append(ROUTE365)
ROUTE366 = x3d.ROUTE()
ROUTE366.fromNode = "Launch"
ROUTE366.fromField = "touchTime"
ROUTE366.toNode = "MonkSound"
ROUTE366.toField = "set_startTime"

Scene15.children.append(ROUTE366)
ROUTE367 = x3d.ROUTE()
ROUTE367.fromNode = "PigdogMonkScript"
ROUTE367.fromField = "whichchoice"
ROUTE367.toNode = "PigdogMonk"
ROUTE367.toField = "set_whichChoice"

Scene15.children.append(ROUTE367)
ROUTE368 = x3d.ROUTE()
ROUTE368.fromNode = "LauncheeChoice"
ROUTE368.fromField = "touchTime"
ROUTE368.toNode = "HolyHandGrenadeSound"
ROUTE368.toField = "set_startTime"

Scene15.children.append(ROUTE368)
ROUTE369 = x3d.ROUTE()
ROUTE369.fromNode = "LauncheeChoice"
ROUTE369.fromField = "touchTime"
ROUTE369.toNode = "CowSound"
ROUTE369.toField = "set_startTime"

Scene15.children.append(ROUTE369)
ROUTE370 = x3d.ROUTE()
ROUTE370.fromNode = "LauncheeChoice"
ROUTE370.fromField = "touchTime"
ROUTE370.toNode = "HamsterSound"
ROUTE370.toField = "set_startTime"

Scene15.children.append(ROUTE370)
ROUTE371 = x3d.ROUTE()
ROUTE371.fromNode = "LauncheeChoice"
ROUTE371.fromField = "isActive"
ROUTE371.toNode = "LauncheeScript"
ROUTE371.toField = "set_boolean"

Scene15.children.append(ROUTE371)
ROUTE372 = x3d.ROUTE()
ROUTE372.fromNode = "LauncheeScript"
ROUTE372.fromField = "whichchoice"
ROUTE372.toNode = "projectile"
ROUTE372.toField = "set_whichChoice"

Scene15.children.append(ROUTE372)
ROUTE373 = x3d.ROUTE()
ROUTE373.fromNode = "LauncheeScript"
ROUTE373.fromField = "whichchoice"
ROUTE373.toNode = "projectilename"
ROUTE373.toField = "set_whichChoice"

Scene15.children.append(ROUTE373)
ROUTE374 = x3d.ROUTE()
ROUTE374.fromNode = "weightselector"
ROUTE374.fromField = "isActive"
ROUTE374.toNode = "WeightScript"
ROUTE374.toField = "set_boolean"

Scene15.children.append(ROUTE374)
ROUTE375 = x3d.ROUTE()
ROUTE375.fromNode = "WeightScript"
ROUTE375.fromField = "whichchoice"
ROUTE375.toNode = "Weight"
ROUTE375.toField = "set_whichChoice"

Scene15.children.append(ROUTE375)
ROUTE376 = x3d.ROUTE()
ROUTE376.fromNode = "clock"
ROUTE376.fromField = "fraction_changed"
ROUTE376.toNode = "flingerangles"
ROUTE376.toField = "set_fraction"

Scene15.children.append(ROUTE376)
ROUTE377 = x3d.ROUTE()
ROUTE377.fromNode = "flingerangles"
ROUTE377.fromField = "value_changed"
ROUTE377.toNode = "flinger"
ROUTE377.toField = "set_rotation"

Scene15.children.append(ROUTE377)
ROUTE378 = x3d.ROUTE()
ROUTE378.fromNode = "clock"
ROUTE378.fromField = "fraction_changed"
ROUTE378.toNode = "verticalweightpath"
ROUTE378.toField = "set_fraction"

Scene15.children.append(ROUTE378)
ROUTE379 = x3d.ROUTE()
ROUTE379.fromNode = "verticalweightpath"
ROUTE379.fromField = "value_changed"
ROUTE379.toNode = "verticalweight"
ROUTE379.toField = "set_translation"

Scene15.children.append(ROUTE379)
ROUTE380 = x3d.ROUTE()
ROUTE380.fromNode = "clock"
ROUTE380.fromField = "fraction_changed"
ROUTE380.toNode = "pinpath"
ROUTE380.toField = "set_fraction"

Scene15.children.append(ROUTE380)
ROUTE381 = x3d.ROUTE()
ROUTE381.fromNode = "pinpath"
ROUTE381.fromField = "value_changed"
ROUTE381.toNode = "Pin"
ROUTE381.toField = "set_translation"

Scene15.children.append(ROUTE381)

X3D0.Scene = Scene15
f = open("../data/Trebuchet.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Trebuchet.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/Trebuchet.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
