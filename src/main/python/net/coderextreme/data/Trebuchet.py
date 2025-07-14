print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
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
meta6.content = "20 October 2019"

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
meta15 = x3d.meta()
meta15.name = "generator"
meta15.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "license"
meta16.content = "../license.html"

head1.children.append(meta16)

X3D0.head = head1
Scene17 = x3d.Scene()
WorldInfo18 = x3d.WorldInfo()
WorldInfo18.title = "Trebuchet.x3d"

Scene17.children.append(WorldInfo18)
Background19 = x3d.Background()
Background19.backUrl = ["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg"]
Background19.bottomUrl = ["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg"]
Background19.frontUrl = ["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg"]
Background19.groundAngle = [1.309,1.570796]
Background19.leftUrl = ["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg"]
Background19.rightUrl = ["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg"]
Background19.skyAngle = [1.309,1.57079]
Background19.topUrl = ["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg"]

Scene17.children.append(Background19)
Sound20 = x3d.Sound()
Sound20.maxBack = 1000
Sound20.maxFront = 1000
AudioClip21 = x3d.AudioClip()
AudioClip21.DEF = "HolyGrail"
AudioClip21.description = "HolyGrail"
AudioClip21.loop = True
AudioClip21.url = ["holygral.mp3","http://www.nps.navy.mil/code32/vrml/holygral.mp3"]

Sound20.source = AudioClip21

Scene17.children.append(Sound20)
Shape22 = x3d.Shape()
Box23 = x3d.Box()
Box23.size = [10000,1,10000]

Shape22.geometry = Box23
Appearance24 = x3d.Appearance()
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.url = ["grass.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg"]

Appearance24.texture = ImageTexture25

Shape22.appearance = Appearance24

Scene17.children.append(Shape22)
Transform26 = x3d.Transform()
Transform26.rotation = [0,1,0,1.57]
Transform26.scale = [0.5,0.5,0.5]
Transform26.translation = [10.5,6.5,4.5]
Shape27 = x3d.Shape()
Appearance28 = x3d.Appearance()
Appearance28.DEF = "TextAppearance"
Material29 = x3d.Material()
Material29.diffuseColor = [1,0,0]
Material29.emissiveColor = [1,1,0]

Appearance28.material = Material29

Shape27.appearance = Appearance28
Text30 = x3d.Text()
Text30.string = ["Click Sling to Select Projectile"]
FontStyle31 = x3d.FontStyle()

Text30.fontStyle = FontStyle31

Shape27.geometry = Text30

Transform26.children.append(Shape27)

Scene17.children.append(Transform26)
Transform32 = x3d.Transform()
Transform32.rotation = [0,1,0,1.57]
Transform32.scale = [0.5,0.5,0.5]
Transform32.translation = [11,5.5,6]
Switch33 = x3d.Switch()
Switch33.DEF = "Weight"
Switch33.whichChoice = 0
Group34 = x3d.Group()
Shape35 = x3d.Shape()
Appearance36 = x3d.Appearance()
Appearance36.USE = "TextAppearance"

Shape35.appearance = Appearance36
Text37 = x3d.Text()
Text37.string = ["Click Here to Change Counter Weight (50 lbs)"]

Shape35.geometry = Text37

Group34.children.append(Shape35)

Switch33.children.append(Group34)
Group38 = x3d.Group()
Shape39 = x3d.Shape()
Appearance40 = x3d.Appearance()
Appearance40.USE = "TextAppearance"

Shape39.appearance = Appearance40
Text41 = x3d.Text()
Text41.string = ["Click Here to Change Counter Weight (500 lbs)"]

Shape39.geometry = Text41

Group38.children.append(Shape39)

Switch33.children.append(Group38)
Group42 = x3d.Group()
Shape43 = x3d.Shape()
Appearance44 = x3d.Appearance()
Appearance44.USE = "TextAppearance"

Shape43.appearance = Appearance44
Text45 = x3d.Text()
Text45.string = ["Click Here to Change Counter Weight (1000 lbs)"]

Shape43.geometry = Text45

Group42.children.append(Shape43)

Switch33.children.append(Group42)
Group46 = x3d.Group()
Shape47 = x3d.Shape()
Appearance48 = x3d.Appearance()
Appearance48.USE = "TextAppearance"

Shape47.appearance = Appearance48
Text49 = x3d.Text()
Text49.string = ["Click Here to Change Counter Weight (10000 lbs)"]

Shape47.geometry = Text49

Group46.children.append(Shape47)

Switch33.children.append(Group46)

Transform32.children.append(Switch33)
TouchSensor50 = x3d.TouchSensor()
TouchSensor50.DEF = "weightselector"
TouchSensor50.description = "weight selector"

Transform32.children.append(TouchSensor50)
Transform51 = x3d.Transform()
Transform51.translation = [8,0,0]
Shape52 = x3d.Shape()
Box53 = x3d.Box()
Box53.size = [20,1,1]

Shape52.geometry = Box53
Appearance54 = x3d.Appearance()
Material55 = x3d.Material()
Material55.transparency = 1

Appearance54.material = Material55

Shape52.appearance = Appearance54

Transform51.children.append(Shape52)

Transform32.children.append(Transform51)

Scene17.children.append(Transform32)
Transform56 = x3d.Transform()
Transform56.rotation = [0,1,0,1.57]
Transform56.translation = [10,0.5,4.5]
Transform57 = x3d.Transform()
Transform57.DEF = "launch"
Transform57.translation = [0,2,5]
Billboard58 = x3d.Billboard()
Shape59 = x3d.Shape()
Appearance60 = x3d.Appearance()
Material61 = x3d.Material()
Material61.diffuseColor = [1,0,0]

Appearance60.material = Material61

Shape59.appearance = Appearance60
Text62 = x3d.Text()
Text62.string = ["LAUNCH"]
FontStyle63 = x3d.FontStyle()

Text62.fontStyle = FontStyle63

Shape59.geometry = Text62

Billboard58.children.append(Shape59)
Transform64 = x3d.Transform()
Transform64.translation = [2,0.3,0]
Shape65 = x3d.Shape()
Box66 = x3d.Box()
Box66.size = [5,1,1]

Shape65.geometry = Box66
Appearance67 = x3d.Appearance()
Material68 = x3d.Material()
Material68.transparency = 1

Appearance67.material = Material68

Shape65.appearance = Appearance67

Transform64.children.append(Shape65)

Billboard58.children.append(Transform64)
Switch69 = x3d.Switch()
Switch69.DEF = "PigdogMonk"
Switch69.whichChoice = -1
Group70 = x3d.Group()
Sound71 = x3d.Sound()
Sound71.maxBack = 1000
Sound71.maxFront = 1000
AudioClip72 = x3d.AudioClip()
AudioClip72.DEF = "PigDogSound"
AudioClip72.description = "PigDogSound"
AudioClip72.url = ["pigdog.wav","http://www.nps.navy.mil/code32/vrml/pigdog.wav"]

Sound71.source = AudioClip72

Group70.children.append(Sound71)

Switch69.children.append(Group70)
Group73 = x3d.Group()
Sound74 = x3d.Sound()
Sound74.maxBack = 1000
Sound74.maxFront = 1000
AudioClip75 = x3d.AudioClip()
AudioClip75.DEF = "MonkSound"
AudioClip75.description = "MonkSound"
AudioClip75.url = ["monks.wav","http://www.nps.navy.mil/code32/vrml/monks.wav"]

Sound74.source = AudioClip75

Group73.children.append(Sound74)

Switch69.children.append(Group73)

Billboard58.children.append(Switch69)

Transform57.children.append(Billboard58)
TouchSensor76 = x3d.TouchSensor()
TouchSensor76.DEF = "Launch"
TouchSensor76.description = "launch!"

Transform57.children.append(TouchSensor76)

Transform56.children.append(Transform57)
Transform77 = x3d.Transform()
Switch78 = x3d.Switch()
Switch78.DEF = "projectilename"
Switch78.whichChoice = 0
Group79 = x3d.Group()
Shape80 = x3d.Shape()
Appearance81 = x3d.Appearance()
Appearance81.USE = "TextAppearance"

Shape80.appearance = Appearance81
Text82 = x3d.Text()
Text82.string = ["Bowling Ball (10 lbs)"]
FontStyle83 = x3d.FontStyle()
FontStyle83.size = 0.5

Text82.fontStyle = FontStyle83

Shape80.geometry = Text82

Group79.children.append(Shape80)
Sound84 = x3d.Sound()
Sound84.maxBack = 1000
Sound84.maxFront = 1000
Sound84.priority = 1
AudioClip85 = x3d.AudioClip()
AudioClip85.DEF = "HolyHandGrenadeSound"
AudioClip85.description = "HolyHandGrenadeSound"
AudioClip85.url = ["grenade.wav","http://www.nps.navy.mil/code32/vrml/grenade.wav"]

Sound84.source = AudioClip85

Group79.children.append(Sound84)

Switch78.children.append(Group79)
Group86 = x3d.Group()
Shape87 = x3d.Shape()
Appearance88 = x3d.Appearance()
Appearance88.USE = "TextAppearance"

Shape87.appearance = Appearance88
Text89 = x3d.Text()
Text89.string = ["Cow (1000 lbs)"]
FontStyle90 = x3d.FontStyle()
FontStyle90.size = 0.5

Text89.fontStyle = FontStyle90

Shape87.geometry = Text89

Group86.children.append(Shape87)
Sound91 = x3d.Sound()
Sound91.maxBack = 1000
Sound91.maxFront = 1000
AudioClip92 = x3d.AudioClip()
AudioClip92.DEF = "CowSound"
AudioClip92.description = "CowSound"
AudioClip92.url = ["lavache.wav","http://www.nps.navy.mil/code32/vrml/lavache.wav"]

Sound91.source = AudioClip92

Group86.children.append(Sound91)

Switch78.children.append(Group86)
Group93 = x3d.Group()
Shape94 = x3d.Shape()
Appearance95 = x3d.Appearance()
Appearance95.USE = "TextAppearance"

Shape94.appearance = Appearance95
Text96 = x3d.Text()
Text96.string = ["Chicken (5 lbs)"]
FontStyle97 = x3d.FontStyle()
FontStyle97.size = 0.5

Text96.fontStyle = FontStyle97

Shape94.geometry = Text96

Group93.children.append(Shape94)
Sound98 = x3d.Sound()
Sound98.maxBack = 1000
Sound98.maxFront = 1000
Sound98.priority = 1
AudioClip99 = x3d.AudioClip()
AudioClip99.DEF = "HamsterSound"
AudioClip99.description = "HamsterSound"
AudioClip99.url = ["hamster.wav","http://www.nps.navy.mil/code32/vrml/hamster.wav"]

Sound98.source = AudioClip99

Group93.children.append(Sound98)

Switch78.children.append(Group93)

Transform77.children.append(Switch78)

Transform56.children.append(Transform77)

Scene17.children.append(Transform56)
Transform100 = x3d.Transform()
Transform100.rotation = [0,1,0,-1.67]
Transform101 = x3d.Transform()
Transform101.DEF = "aft"
Transform101.translation = [5,5,15]
Transform102 = x3d.Transform()
Transform102.translation = [-2.5,-4.5,-2]
Transform103 = x3d.Transform()
Transform103.USE = "launch"

Transform102.children.append(Transform103)

Transform101.children.append(Transform102)

Transform100.children.append(Transform101)

Scene17.children.append(Transform100)
Transform104 = x3d.Transform()
Transform104.translation = [0,3,0]
Shape105 = x3d.Shape()
Shape105.DEF = "plank"
Box106 = x3d.Box()
Box106.size = [25,1,1]

Shape105.geometry = Box106
Appearance107 = x3d.Appearance()
Appearance107.DEF = "wood"
ImageTexture108 = x3d.ImageTexture()
ImageTexture108.DEF = "woodTexture"
ImageTexture108.url = ["wood.gif","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif"]

Appearance107.texture = ImageTexture108

Shape105.appearance = Appearance107

Transform104.children.append(Shape105)
Transform109 = x3d.Transform()
Transform109.DEF = "angledsupport"
Transform109.rotation = [0,0,1,1]
Transform109.translation = [-5,10,0]
Shape110 = x3d.Shape()
Shape110.USE = "plank"

Transform109.children.append(Shape110)

Transform104.children.append(Transform109)
Transform111 = x3d.Transform()
Transform111.DEF = "angledsupport2"
Transform111.rotation = [0,0,1,-1]
Transform111.translation = [5,10,0]
Shape112 = x3d.Shape()
Shape112.USE = "plank"

Transform111.children.append(Shape112)

Transform104.children.append(Transform111)
Transform113 = x3d.Transform()
Transform113.DEF = "verticalsupport"
Transform113.rotation = [0,0,1,1.57]
Transform113.scale = [0.9,1,1]
Transform113.translation = [0,11,0]
Shape114 = x3d.Shape()
Shape114.USE = "plank"

Transform113.children.append(Shape114)
"""Main Verticle Support"""

Transform104.children.append(Transform113)
Transform115 = x3d.Transform()
Transform115.DEF = "horizontalsupport"
Transform115.scale = [0.4,1,1]
Transform115.translation = [0,10,0]
Shape116 = x3d.Shape()
Shape116.USE = "plank"

Transform115.children.append(Shape116)

Transform104.children.append(Transform115)
Transform117 = x3d.Transform()
Transform117.rotation = [0,0,1,1.57]
Transform117.scale = [0.6,1,1]
Transform117.translation = [0,5,10]
Transform118 = x3d.Transform()
Transform118.rotation = [0,1,0,0.4]
Shape119 = x3d.Shape()
Shape119.USE = "plank"

Transform118.children.append(Shape119)

Transform117.children.append(Transform118)

Transform104.children.append(Transform117)
Transform120 = x3d.Transform()
Transform120.DEF = "panel"
Transform120.translation = [0,18.2,-0.3]
Shape121 = x3d.Shape()
Box122 = x3d.Box()
Box122.size = [5,5,0.5]

Shape121.geometry = Box122
Appearance123 = x3d.Appearance()
Appearance123.USE = "wood"

Shape121.appearance = Appearance123

Transform120.children.append(Shape121)

Transform104.children.append(Transform120)
Transform124 = x3d.Transform()
Transform124.rotation = [1,0,0,-1.57]
Transform124.translation = [0,0.6,2.5]
Transform125 = x3d.Transform()
Transform125.rotation = [0,0,1,1.57]
Shape126 = x3d.Shape()
Extrusion127 = x3d.Extrusion()
Extrusion127.beginCap = False
Extrusion127.endCap = False
Extrusion127.solid = False

Shape126.geometry = Extrusion127
Appearance128 = x3d.Appearance()
Appearance128.USE = "wood"

Shape126.appearance = Appearance128

Transform125.children.append(Shape126)

Transform124.children.append(Transform125)

Transform104.children.append(Transform124)
Transform129 = x3d.Transform()
Transform129.DEF = "flinger"
Transform129.center = [7,0,0]
Transform129.rotation = [0,0,1,0.82]
Transform129.scale = [0.9,1,1]
Transform129.translation = [-7,18,2.5]
Transform130 = x3d.Transform()
Shape131 = x3d.Shape()
Box132 = x3d.Box()
Box132.size = [35,1,1]

Shape131.geometry = Box132
Appearance133 = x3d.Appearance()
Appearance133.USE = "wood"

Shape131.appearance = Appearance133

Transform130.children.append(Shape131)
Transform134 = x3d.Transform()
Transform134.translation = [7,0,0]
Shape135 = x3d.Shape()
Box136 = x3d.Box()
Box136.size = [8,2,2]

Shape135.geometry = Box136
Appearance137 = x3d.Appearance()
Appearance137.USE = "wood"

Shape135.appearance = Appearance137

Transform134.children.append(Shape135)

Transform130.children.append(Transform134)

Transform129.children.append(Transform130)
Transform138 = x3d.Transform()
Transform138.rotation = [1,0,0,1.57]
Transform138.scale = [0.2,0.2,0.2]
Transform138.translation = [-15,-1,0]
Shape139 = x3d.Shape()
Shape139.DEF = "Torus"
Appearance140 = x3d.Appearance()
Material141 = x3d.Material()
Material141.specularColor = [1,1,1]

Appearance140.material = Material141

Shape139.appearance = Appearance140
Extrusion142 = x3d.Extrusion()
Extrusion142.beginCap = False
Extrusion142.convex = False
Extrusion142.creaseAngle = 1.57
Extrusion142.endCap = False

Shape139.geometry = Extrusion142

Transform138.children.append(Shape139)
Transform143 = x3d.Transform()
Transform143.translation = [1,0,2]
Shape144 = x3d.Shape()
Appearance145 = x3d.Appearance()
Appearance145.DEF = "rope"
ImageTexture146 = x3d.ImageTexture()
ImageTexture146.USE = "woodTexture"

Appearance145.texture = ImageTexture146

Shape144.appearance = Appearance145
Sphere147 = x3d.Sphere()
Sphere147.radius = 1.5

Shape144.geometry = Sphere147

Transform143.children.append(Shape144)
"""knott"""

Transform138.children.append(Transform143)

Transform129.children.append(Transform138)
"""The Unicorn"""
Transform148 = x3d.Transform()
Transform148.rotation = [0,0,1,1.2]
Transform148.scale = [0.2,0.2,0.2]
Transform148.translation = [-18.3,0.3,0]
Shape149 = x3d.Shape()
Cylinder150 = x3d.Cylinder()
Cylinder150.height = 10

Shape149.geometry = Cylinder150
Appearance151 = x3d.Appearance()
Material152 = x3d.Material()
Material152.specularColor = [1,1,1]

Appearance151.material = Material152

Shape149.appearance = Appearance151

Transform148.children.append(Shape149)
Transform153 = x3d.Transform()
Transform153.translation = [0,-2.5,0]
"""The Unicorn"""
Shape154 = x3d.Shape()
Shape154.USE = "Torus"

Transform153.children.append(Shape154)
Transform155 = x3d.Transform()
Transform155.translation = [-2,0,0]
Shape156 = x3d.Shape()
Sphere157 = x3d.Sphere()
Sphere157.radius = 1.5

Shape156.geometry = Sphere157
Appearance158 = x3d.Appearance()
Appearance158.USE = "rope"

Shape156.appearance = Appearance158

Transform155.children.append(Shape156)
"""Knott"""

Transform153.children.append(Transform155)

Transform148.children.append(Transform153)
Transform159 = x3d.Transform()
Transform159.rotation = [0,0,1,1.2]
Transform159.translation = [15,55,-11]
Transform160 = x3d.Transform()
Transform160.scale = [5,5,5]
Shape161 = x3d.Shape()
Appearance162 = x3d.Appearance()
Appearance162.USE = "rope"

Shape161.appearance = Appearance162
Extrusion163 = x3d.Extrusion()
Extrusion163.beginCap = False
Extrusion163.creaseAngle = 0.76
Extrusion163.endCap = False
Extrusion163.solid = False

Shape161.geometry = Extrusion163

Transform160.children.append(Shape161)

Transform159.children.append(Transform160)

Transform148.children.append(Transform159)

Transform129.children.append(Transform148)
Transform164 = x3d.Transform()
Transform164.rotation = [1,0,0,-1.7]
Transform164.translation = [-17,-4.5,0]
Transform165 = x3d.Transform()
Transform165.scale = [0.2,0.2,0.2]
"""Knot"""
Shape166 = x3d.Shape()
Shape166.USE = "Torus"

Transform165.children.append(Shape166)
Transform167 = x3d.Transform()
Transform167.translation = [-1,0,1.7]
Shape168 = x3d.Shape()
Sphere169 = x3d.Sphere()
Sphere169.radius = 1.5

Shape168.geometry = Sphere169
Appearance170 = x3d.Appearance()
Appearance170.USE = "rope"

Shape168.appearance = Appearance170

Transform167.children.append(Shape168)

Transform165.children.append(Transform167)

Transform164.children.append(Transform165)

Transform129.children.append(Transform164)
Transform171 = x3d.Transform()
Transform171.DEF = "RnS"
Transform172 = x3d.Transform()
Transform172.DEF = "ropes"
Transform173 = x3d.Transform()
Transform173.rotation = [0,0,1,-0.82]
Transform173.translation = [7,-26,-2.5]
Shape174 = x3d.Shape()
Appearance175 = x3d.Appearance()
Appearance175.USE = "rope"

Shape174.appearance = Appearance175
Extrusion176 = x3d.Extrusion()
Extrusion176.beginCap = False
Extrusion176.creaseAngle = 0.76
Extrusion176.endCap = False
Extrusion176.solid = False

Shape174.geometry = Extrusion176

Transform173.children.append(Shape174)
Shape177 = x3d.Shape()
Appearance178 = x3d.Appearance()
Appearance178.USE = "rope"

Shape177.appearance = Appearance178
Extrusion179 = x3d.Extrusion()
Extrusion179.beginCap = False
Extrusion179.creaseAngle = 0.76
Extrusion179.endCap = False
Extrusion179.solid = False

Shape177.geometry = Extrusion179

Transform173.children.append(Shape177)

Transform172.children.append(Transform173)

Transform171.children.append(Transform172)
Transform180 = x3d.Transform()
Transform180.DEF = "sling"
Transform180.rotation = [0,0,1,-0.82]
Transform180.translation = [-4,-15.3,0]
Transform181 = x3d.Transform()
Transform182 = x3d.Transform()
Transform182.rotation = [0,1,0,-1.57]
Transform182.scale = [1,1.3,1]
Transform182.translation = [0.5,0,-1]
Transform183 = x3d.Transform()
Transform183.rotation = [0,0,1,1.57]
Transform184 = x3d.Transform()
Transform184.scale = [0.3,0.3,0.3]
Shape185 = x3d.Shape()
Shape185.DEF = "halfsling"
Appearance186 = x3d.Appearance()
Appearance186.DEF = "clear"
Material187 = x3d.Material()
Material187.transparency = 0.5

Appearance186.material = Material187

Shape185.appearance = Appearance186
Extrusion188 = x3d.Extrusion()

Shape185.geometry = Extrusion188

Transform184.children.append(Shape185)
Transform189 = x3d.Transform()
Transform189.scale = [0.3,0.3,0.3]
Transform189.translation = [0,-3.5,11.5]
Shape190 = x3d.Shape()
Shape190.USE = "Torus"

Transform189.children.append(Shape190)
Transform191 = x3d.Transform()
Transform191.translation = [0,0,2]
Shape192 = x3d.Shape()
Appearance193 = x3d.Appearance()
Appearance193.USE = "rope"

Shape192.appearance = Appearance193
Sphere194 = x3d.Sphere()
Sphere194.radius = 1.5

Shape192.geometry = Sphere194

Transform191.children.append(Shape192)

Transform189.children.append(Transform191)

Transform184.children.append(Transform189)

Transform183.children.append(Transform184)
Transform195 = x3d.Transform()
Transform195.scale = [0.3,0.3,0.3]
Transform195.translation = [2,0,0]
Shape196 = x3d.Shape()
Shape196.USE = "halfsling"

Transform195.children.append(Shape196)
Transform197 = x3d.Transform()
Transform197.scale = [0.3,0.3,0.3]
Transform197.translation = [0,-3.5,11.3]
Shape198 = x3d.Shape()
Shape198.USE = "Torus"

Transform197.children.append(Shape198)
Transform199 = x3d.Transform()
Transform199.translation = [0,0,2]
Shape200 = x3d.Shape()
Appearance201 = x3d.Appearance()
Appearance201.USE = "rope"

Shape200.appearance = Appearance201
Sphere202 = x3d.Sphere()
Sphere202.radius = 1.5

Shape200.geometry = Sphere202

Transform199.children.append(Shape200)

Transform197.children.append(Transform199)

Transform195.children.append(Transform197)

Transform183.children.append(Transform195)
Transform203 = x3d.Transform()
Transform203.translation = [1,-1,0]
Shape204 = x3d.Shape()
Extrusion205 = x3d.Extrusion()
Extrusion205.beginCap = False
Extrusion205.creaseAngle = 0.785
Extrusion205.endCap = False
Extrusion205.solid = False

Shape204.geometry = Extrusion205
Appearance206 = x3d.Appearance()
Appearance206.USE = "clear"

Shape204.appearance = Appearance206

Transform203.children.append(Shape204)

Transform183.children.append(Transform203)

Transform182.children.append(Transform183)
TouchSensor207 = x3d.TouchSensor()
TouchSensor207.DEF = "LauncheeChoice"
TouchSensor207.description = "launcher choice"

Transform182.children.append(TouchSensor207)

Transform181.children.append(Transform182)
Transform208 = x3d.Transform()
Transform208.DEF = "projectiletransform"
Transform208.scale = [0.01,0.01,0.01]
Switch209 = x3d.Switch()
Switch209.DEF = "projectile"
Switch209.whichChoice = 0
Group210 = x3d.Group()
Transform211 = x3d.Transform()
Transform211.translation = [0,0.7,0]
Shape212 = x3d.Shape()
Sphere213 = x3d.Sphere()
Sphere213.radius = 0.7

Shape212.geometry = Sphere213
Appearance214 = x3d.Appearance()
Appearance214.DEF = "black"
Material215 = x3d.Material()
Material215.diffuseColor = [0,0,0]
Material215.specularColor = [1,1,1]

Appearance214.material = Material215

Shape212.appearance = Appearance214

Transform211.children.append(Shape212)

Group210.children.append(Transform211)

Switch209.children.append(Group210)
Group216 = x3d.Group()
Transform217 = x3d.Transform()
Inline218 = x3d.Inline()
Inline218.url = ["cow.wrl","http://www.uoguelph.ca/~dchiu/cow.wrl"]

Transform217.children.append(Inline218)

Group216.children.append(Transform217)

Switch209.children.append(Group216)
Group219 = x3d.Group()
Transform220 = x3d.Transform()
Transform220.rotation = [0,1,0,1.57]
Transform220.scale = [0.4,0.4,0.4]
Transform220.translation = [0,0.7,0]
Inline221 = x3d.Inline()
Inline221.url = ["vrml_ginger.wrl","http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl"]

Transform220.children.append(Inline221)

Group219.children.append(Transform220)

Switch209.children.append(Group219)

Transform208.children.append(Switch209)

Transform181.children.append(Transform208)

Transform180.children.append(Transform181)

Transform171.children.append(Transform180)

Transform129.children.append(Transform171)

Transform104.children.append(Transform129)
Transform222 = x3d.Transform()
Transform222.rotation = [1,0,0,1.57]
Transform222.translation = [0,18,2.5]
Shape223 = x3d.Shape()
Cylinder224 = x3d.Cylinder()
Cylinder224.height = 8
Cylinder224.radius = 0.4

Shape223.geometry = Cylinder224
Appearance225 = x3d.Appearance()
Material226 = x3d.Material()
Material226.diffuseColor = [0,0,0]
Material226.specularColor = [1,1,1]

Appearance225.material = Material226

Shape223.appearance = Appearance225

Transform222.children.append(Shape223)
"""Top Pivot"""

Transform104.children.append(Transform222)
Transform227 = x3d.Transform()
Transform227.DEF = "verticalweight"
Transform228 = x3d.Transform()
Transform228.translation = [4,18,1.8]
Shape229 = x3d.Shape()
Box230 = x3d.Box()
Box230.size = [1,10,0.5]

Shape229.geometry = Box230
Appearance231 = x3d.Appearance()
Appearance231.USE = "wood"

Shape229.appearance = Appearance231

Transform228.children.append(Shape229)

Transform227.children.append(Transform228)
Transform232 = x3d.Transform()
Transform232.translation = [4,18,3.2]
Shape233 = x3d.Shape()
Box234 = x3d.Box()
Box234.size = [1,10,0.5]

Shape233.geometry = Box234
Appearance235 = x3d.Appearance()
Appearance235.USE = "wood"

Shape233.appearance = Appearance235

Transform232.children.append(Shape233)

Transform227.children.append(Transform232)
Transform236 = x3d.Transform()
Transform236.translation = [4,14,2.5]
"""CounterWeight"""
Shape237 = x3d.Shape()
Cylinder238 = x3d.Cylinder()
Cylinder238.height = 4
Cylinder238.radius = 1.5

Shape237.geometry = Cylinder238
Appearance239 = x3d.Appearance()
Material240 = x3d.Material()
Material240.diffuseColor = [0,0,0]
Material240.specularColor = [1,1,1]

Appearance239.material = Material240

Shape237.appearance = Appearance239

Transform236.children.append(Shape237)

Transform227.children.append(Transform236)
Transform241 = x3d.Transform()
Transform241.rotation = [1,0,0,1.57]
Transform241.translation = [4,22,2.5]
Shape242 = x3d.Shape()
Cylinder243 = x3d.Cylinder()
Cylinder243.height = 2.5
Cylinder243.radius = 0.3

Shape242.geometry = Cylinder243
Appearance244 = x3d.Appearance()
Material245 = x3d.Material()
Material245.diffuseColor = [0,0,0]
Material245.specularColor = [1,1,1]

Appearance244.material = Material245

Shape242.appearance = Appearance244

Transform241.children.append(Shape242)

Transform227.children.append(Transform241)

Transform104.children.append(Transform227)
Transform246 = x3d.Transform()
Transform246.rotation = [0,0,1,1.57]
Transform246.scale = [0.2,0.2,0.2]
Transform246.translation = [-11.5,-1,2]
Transform247 = x3d.Transform()
Transform247.DEF = "screw"
Transform247.rotation = [1,0,0,1.57]
Shape248 = x3d.Shape()
Shape248.USE = "Torus"

Transform247.children.append(Shape248)
Transform249 = x3d.Transform()
Transform249.rotation = [1,0,0,-1.57]
Transform249.translation = [0,0,7]
Shape250 = x3d.Shape()
Cylinder251 = x3d.Cylinder()
Cylinder251.height = 10
Cylinder251.radius = 0.7

Shape250.geometry = Cylinder251
Appearance252 = x3d.Appearance()
Material253 = x3d.Material()
Material253.specularColor = [1,1,1]

Appearance252.material = Material253

Shape250.appearance = Appearance252

Transform249.children.append(Shape250)

Transform247.children.append(Transform249)

Transform246.children.append(Transform247)
Transform254 = x3d.Transform()
Transform254.translation = [0,0,7]
Transform255 = x3d.Transform()
Transform255.USE = "screw"

Transform254.children.append(Transform255)

Transform246.children.append(Transform254)
"""Release Pin"""
Transform256 = x3d.Transform()
Transform256.DEF = "Pin"
Transform256.rotation = [1,0,0,-1.57]
Transform256.translation = [0,0,-3]
Transform257 = x3d.Transform()
Transform257.USE = "screw"

Transform256.children.append(Transform257)

Transform246.children.append(Transform256)

Transform104.children.append(Transform246)
Transform258 = x3d.Transform()
Transform258.translation = [0,0,5]
Shape259 = x3d.Shape()
Shape259.USE = "plank"

Transform258.children.append(Shape259)
Transform260 = x3d.Transform()
Transform260.USE = "angledsupport"

Transform258.children.append(Transform260)
Transform261 = x3d.Transform()
Transform261.USE = "angledsupport2"

Transform258.children.append(Transform261)
Transform262 = x3d.Transform()
Transform262.USE = "verticalsupport"

Transform258.children.append(Transform262)
Transform263 = x3d.Transform()
Transform263.USE = "horizontalsupport"

Transform258.children.append(Transform263)
Transform264 = x3d.Transform()
Transform264.rotation = [0,1,0,1.57]
Transform264.scale = [0.6,1,1]
Transform264.translation = [0,-11,-2.5]
Transform265 = x3d.Transform()
Transform265.USE = "horizontalsupport"

Transform264.children.append(Transform265)

Transform258.children.append(Transform264)
Transform266 = x3d.Transform()
Transform266.rotation = [0,0,1,-1.57]
Transform266.scale = [0.6,1,1]
Transform266.translation = [0,5,-10]
Transform267 = x3d.Transform()
Transform267.rotation = [0,1,0,0.4]
Shape268 = x3d.Shape()
Shape268.USE = "plank"

Transform267.children.append(Shape268)

Transform266.children.append(Transform267)

Transform258.children.append(Transform266)
Transform269 = x3d.Transform()
Transform269.translation = [0,0,0.6]
Transform270 = x3d.Transform()
Transform270.USE = "panel"

Transform269.children.append(Transform270)

Transform258.children.append(Transform269)

Transform104.children.append(Transform258)
Transform271 = x3d.Transform()
Transform271.translation = [10,-1,2.5]
Shape272 = x3d.Shape()
Shape272.DEF = "Axle"
Box273 = x3d.Box()
Box273.size = [1,1,8]

Shape272.geometry = Box273
Appearance274 = x3d.Appearance()
Appearance274.USE = "wood"

Shape272.appearance = Appearance274

Transform271.children.append(Shape272)
Transform275 = x3d.Transform()
Transform275.rotation = [1,0,0,1.57]
Transform275.translation = [0,0,4.5]
Shape276 = x3d.Shape()
Shape276.DEF = "wheel"
Cylinder277 = x3d.Cylinder()
Cylinder277.radius = 2

Shape276.geometry = Cylinder277
Appearance278 = x3d.Appearance()
Appearance278.USE = "wood"

Shape276.appearance = Appearance278

Transform275.children.append(Shape276)
Shape279 = x3d.Shape()
Shape279.DEF = "tracks"
Sphere280 = x3d.Sphere()
Sphere280.radius = 1.5

Shape279.geometry = Sphere280
Appearance281 = x3d.Appearance()
Appearance281.USE = "black"

Shape279.appearance = Appearance281

Transform275.children.append(Shape279)
Transform282 = x3d.Transform()
Transform282.translation = [0,0.55,0]
Shape283 = x3d.Shape()
Shape283.DEF = "hub"
Sphere284 = x3d.Sphere()
Sphere284.radius = 1.5

Shape283.geometry = Sphere284
Appearance285 = x3d.Appearance()
Appearance285.USE = "black"

Shape283.appearance = Appearance285

Transform282.children.append(Shape283)

Transform275.children.append(Transform282)

Transform271.children.append(Transform275)
Transform286 = x3d.Transform()
Transform286.rotation = [1,0,0,1.57]
Transform286.translation = [0,0,-4.5]
Shape287 = x3d.Shape()
Shape287.USE = "wheel"

Transform286.children.append(Shape287)
Shape288 = x3d.Shape()
Shape288.USE = "tracks"

Transform286.children.append(Shape288)
Transform289 = x3d.Transform()
Transform289.translation = [0,-0.55,0]
Shape290 = x3d.Shape()
Shape290.USE = "hub"

Transform289.children.append(Shape290)

Transform286.children.append(Transform289)

Transform271.children.append(Transform286)

Transform104.children.append(Transform271)
Transform291 = x3d.Transform()
Transform291.translation = [-10,-1,2.5]
Shape292 = x3d.Shape()
Shape292.USE = "Axle"

Transform291.children.append(Shape292)
Transform293 = x3d.Transform()
Transform293.rotation = [1,0,0,1.57]
Transform293.translation = [0,0,4.5]
Shape294 = x3d.Shape()
Shape294.USE = "wheel"

Transform293.children.append(Shape294)
Shape295 = x3d.Shape()
Shape295.USE = "tracks"

Transform293.children.append(Shape295)
Transform296 = x3d.Transform()
Transform296.translation = [0,0.55,0]
Shape297 = x3d.Shape()
Shape297.USE = "hub"

Transform296.children.append(Shape297)

Transform293.children.append(Transform296)

Transform291.children.append(Transform293)
Transform298 = x3d.Transform()
Transform298.rotation = [1,0,0,1.57]
Transform298.translation = [0,0,-4.5]
Shape299 = x3d.Shape()
Shape299.USE = "wheel"

Transform298.children.append(Shape299)
Shape300 = x3d.Shape()
Shape300.USE = "tracks"

Transform298.children.append(Shape300)
Transform301 = x3d.Transform()
Transform301.translation = [0,-0.55,0]
Shape302 = x3d.Shape()
Shape302.USE = "hub"

Transform301.children.append(Shape302)

Transform298.children.append(Transform301)

Transform291.children.append(Transform298)
Transform303 = x3d.Transform()
Transform303.rotation = [0,1,0,-0.6]
Transform303.translation = [0,100,400]
Transform304 = x3d.Transform()
Transform304.translation = [1,3,0]
Viewpoint305 = x3d.Viewpoint()
Viewpoint305.description = "Side"

Transform304.children.append(Viewpoint305)

Transform303.children.append(Transform304)
Transform306 = x3d.Transform()
Transform306.USE = "launch"

Transform303.children.append(Transform306)
Transform307 = x3d.Transform()
TouchSensor308 = x3d.TouchSensor()
TouchSensor308.USE = "LauncheeChoice"

Transform307.children.append(TouchSensor308)
Switch309 = x3d.Switch()
Switch309.USE = "projectilename"

Transform307.children.append(Switch309)
Transform310 = x3d.Transform()
Transform310.translation = [2.5,0,0]
Shape311 = x3d.Shape()
Box312 = x3d.Box()
Box312.size = [5,0.5,0.5]

Shape311.geometry = Box312
Appearance313 = x3d.Appearance()
Material314 = x3d.Material()
Material314.transparency = 1

Appearance313.material = Material314

Shape311.appearance = Appearance313

Transform310.children.append(Shape311)

Transform307.children.append(Transform310)

Transform303.children.append(Transform307)
Transform315 = x3d.Transform()
Transform315.scale = [0.5,0.5,0.5]
Transform315.translation = [0,-1,0]
TouchSensor316 = x3d.TouchSensor()
TouchSensor316.USE = "weightselector"

Transform315.children.append(TouchSensor316)
Switch317 = x3d.Switch()
Switch317.USE = "Weight"

Transform315.children.append(Switch317)
Transform318 = x3d.Transform()
Transform318.translation = [8,0,0]
Shape319 = x3d.Shape()
Box320 = x3d.Box()
Box320.size = [17,1,0.5]

Shape319.geometry = Box320
Appearance321 = x3d.Appearance()
Material322 = x3d.Material()
Material322.transparency = 1

Appearance321.material = Material322

Shape319.appearance = Appearance321

Transform318.children.append(Shape319)

Transform315.children.append(Transform318)

Transform303.children.append(Transform315)

Transform291.children.append(Transform303)
Transform323 = x3d.Transform()
Transform323.DEF = "ProjectileTransform"
Transform323.translation = [14.25,1.25,0]
Switch324 = x3d.Switch()
Switch324.USE = "projectile"

Transform323.children.append(Switch324)
Transform325 = x3d.Transform()
Transform325.rotation = [0,1,0,1.57]
Transform325.translation = [0,1,0]
Viewpoint326 = x3d.Viewpoint()
Viewpoint326.description = "Projectile Cam"
Viewpoint326.position = [0,0,15]

Transform325.children.append(Viewpoint326)

Transform323.children.append(Transform325)

Transform291.children.append(Transform323)
Transform327 = x3d.Transform()
Transform327.translation = [20,2,0]
Transform328 = x3d.Transform()
Transform328.DEF = "Front"
Transform328.rotation = [0,1,0,1.57]
Viewpoint329 = x3d.Viewpoint()
Viewpoint329.description = "Fore"

Transform328.children.append(Viewpoint329)

Transform327.children.append(Transform328)

Transform291.children.append(Transform327)
Transform330 = x3d.Transform()
Transform330.translation = [-8,4,0]
Transform331 = x3d.Transform()
Transform331.rotation = [0,1,0,-1.57]
Viewpoint332 = x3d.Viewpoint()
Viewpoint332.description = "Aft"

Transform331.children.append(Viewpoint332)

Transform330.children.append(Transform331)

Transform291.children.append(Transform330)
Script333 = x3d.Script()
Script333.DEF = "WeightScript"
field334 = x3d.field()
field334.name = "set_boolean"
field334.accessType = "inputOnly"
field334.type = "SFBool"

Script333.field.append(field334)
field335 = x3d.field()
field335.name = "whichchoice"
field335.accessType = "outputOnly"
field335.type = "SFInt32"

Script333.field.append(field335)
field336 = x3d.field()
field336.name = "CounterWeight"
field336.accessType = "outputOnly"
field336.type = "SFFloat"

Script333.field.append(field336)

Script333.sourceCode = '''ecmascript:\n"+
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

Transform291.children.append(Script333)
Script337 = x3d.Script()
Script337.DEF = "LauncheeScript"
field338 = x3d.field()
field338.name = "set_boolean"
field338.accessType = "inputOnly"
field338.type = "SFBool"

Script337.field.append(field338)
field339 = x3d.field()
field339.name = "whichchoice"
field339.accessType = "outputOnly"
field339.type = "SFInt32"

Script337.field.append(field339)
field340 = x3d.field()
field340.name = "ProjectileWeight"
field340.accessType = "outputOnly"
field340.type = "SFFloat"

Script337.field.append(field340)

Script337.sourceCode = '''ecmascript:\n"+
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

Transform291.children.append(Script337)
Script341 = x3d.Script()
Script341.DEF = "PigdogMonkScript"
field342 = x3d.field()
field342.name = "set_boolean"
field342.accessType = "inputOnly"
field342.type = "SFBool"

Script341.field.append(field342)
field343 = x3d.field()
field343.name = "whichchoice"
field343.accessType = "outputOnly"
field343.type = "SFInt32"

Script341.field.append(field343)

Script341.sourceCode = '''ecmascript:\n"+
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

Transform291.children.append(Script341)
Script344 = x3d.Script()
Script344.DEF = "Mover"
field345 = x3d.field()
field345.name = "set_fraction"
field345.accessType = "inputOnly"
field345.type = "SFFloat"

Script344.field.append(field345)
field346 = x3d.field()
field346.name = "set_MassCounterWeight"
field346.accessType = "inputOnly"
field346.type = "SFFloat"

Script344.field.append(field346)
field347 = x3d.field()
field347.name = "set_MassProjectileWeight"
field347.accessType = "inputOnly"
field347.type = "SFFloat"

Script344.field.append(field347)
field348 = x3d.field()
field348.name = "MassCounterWeight"
field348.accessType = "initializeOnly"
field348.type = "SFFloat"
field348.value = 1

Script344.field.append(field348)
field349 = x3d.field()
field349.name = "MassProjectileWeight"
field349.accessType = "initializeOnly"
field349.type = "SFFloat"
field349.value = 1

Script344.field.append(field349)
field350 = x3d.field()
field350.name = "transparent"
field350.accessType = "outputOnly"
field350.type = "SFVec3f"

Script344.field.append(field350)
field351 = x3d.field()
field351.name = "value_changed"
field351.accessType = "outputOnly"
field351.type = "SFVec3f"

Script344.field.append(field351)

Script344.sourceCode = '''ecmascript:\n"+
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

Transform291.children.append(Script344)

Transform104.children.append(Transform291)

Scene17.children.append(Transform104)
TimeSensor352 = x3d.TimeSensor()
TimeSensor352.DEF = "clock"
TimeSensor352.cycleInterval = 10

Scene17.children.append(TimeSensor352)
PositionInterpolator353 = x3d.PositionInterpolator()
PositionInterpolator353.DEF = "verticalweightpath"
PositionInterpolator353.key = [0,0.1,0.2,0.2,0.3,0.9]

Scene17.children.append(PositionInterpolator353)
OrientationInterpolator354 = x3d.OrientationInterpolator()
OrientationInterpolator354.DEF = "flingerangles"
OrientationInterpolator354.key = [0,0.1,0.2,0.2,0.3,0.9]

Scene17.children.append(OrientationInterpolator354)
PositionInterpolator355 = x3d.PositionInterpolator()
PositionInterpolator355.DEF = "pinpath"
PositionInterpolator355.key = [0,0.01,0.95,1]

Scene17.children.append(PositionInterpolator355)
OrientationInterpolator356 = x3d.OrientationInterpolator()
OrientationInterpolator356.DEF = "RnSAngels"
OrientationInterpolator356.key = [0,0.7,1]

Scene17.children.append(OrientationInterpolator356)
PositionInterpolator357 = x3d.PositionInterpolator()
PositionInterpolator357.DEF = "invisiable"
PositionInterpolator357.key = [0,0.2,0.98,0.99]

Scene17.children.append(PositionInterpolator357)
ROUTE358 = x3d.ROUTE()
ROUTE358.fromField = "fraction_changed"
ROUTE358.fromNode = "clock"
ROUTE358.toField = "set_fraction"
ROUTE358.toNode = "invisiable"

Scene17.children.append(ROUTE358)
ROUTE359 = x3d.ROUTE()
ROUTE359.fromField = "value_changed"
ROUTE359.fromNode = "invisiable"
ROUTE359.toField = "set_scale"
ROUTE359.toNode = "projectiletransform"

Scene17.children.append(ROUTE359)
ROUTE360 = x3d.ROUTE()
ROUTE360.fromField = "CounterWeight"
ROUTE360.fromNode = "WeightScript"
ROUTE360.toField = "set_MassCounterWeight"
ROUTE360.toNode = "Mover"

Scene17.children.append(ROUTE360)
ROUTE361 = x3d.ROUTE()
ROUTE361.fromField = "ProjectileWeight"
ROUTE361.fromNode = "LauncheeScript"
ROUTE361.toField = "set_MassProjectileWeight"
ROUTE361.toNode = "Mover"

Scene17.children.append(ROUTE361)
ROUTE362 = x3d.ROUTE()
ROUTE362.fromField = "fraction_changed"
ROUTE362.fromNode = "clock"
ROUTE362.toField = "set_fraction"
ROUTE362.toNode = "Mover"

Scene17.children.append(ROUTE362)
ROUTE363 = x3d.ROUTE()
ROUTE363.fromField = "value_changed"
ROUTE363.fromNode = "Mover"
ROUTE363.toField = "set_translation"
ROUTE363.toNode = "ProjectileTransform"

Scene17.children.append(ROUTE363)
ROUTE364 = x3d.ROUTE()
ROUTE364.fromField = "transparent"
ROUTE364.fromNode = "Mover"
ROUTE364.toField = "set_scale"
ROUTE364.toNode = "ProjectileTransform"

Scene17.children.append(ROUTE364)
ROUTE365 = x3d.ROUTE()
ROUTE365.fromField = "touchTime"
ROUTE365.fromNode = "Launch"
ROUTE365.toField = "set_startTime"
ROUTE365.toNode = "clock"

Scene17.children.append(ROUTE365)
ROUTE366 = x3d.ROUTE()
ROUTE366.fromField = "isActive"
ROUTE366.fromNode = "Launch"
ROUTE366.toField = "set_boolean"
ROUTE366.toNode = "PigdogMonkScript"

Scene17.children.append(ROUTE366)
ROUTE367 = x3d.ROUTE()
ROUTE367.fromField = "touchTime"
ROUTE367.fromNode = "Launch"
ROUTE367.toField = "set_startTime"
ROUTE367.toNode = "PigDogSound"

Scene17.children.append(ROUTE367)
ROUTE368 = x3d.ROUTE()
ROUTE368.fromField = "touchTime"
ROUTE368.fromNode = "Launch"
ROUTE368.toField = "set_startTime"
ROUTE368.toNode = "MonkSound"

Scene17.children.append(ROUTE368)
ROUTE369 = x3d.ROUTE()
ROUTE369.fromField = "whichchoice"
ROUTE369.fromNode = "PigdogMonkScript"
ROUTE369.toField = "whichChoice"
ROUTE369.toNode = "PigdogMonk"

Scene17.children.append(ROUTE369)
ROUTE370 = x3d.ROUTE()
ROUTE370.fromField = "touchTime"
ROUTE370.fromNode = "LauncheeChoice"
ROUTE370.toField = "set_startTime"
ROUTE370.toNode = "HolyHandGrenadeSound"

Scene17.children.append(ROUTE370)
ROUTE371 = x3d.ROUTE()
ROUTE371.fromField = "touchTime"
ROUTE371.fromNode = "LauncheeChoice"
ROUTE371.toField = "set_startTime"
ROUTE371.toNode = "CowSound"

Scene17.children.append(ROUTE371)
ROUTE372 = x3d.ROUTE()
ROUTE372.fromField = "touchTime"
ROUTE372.fromNode = "LauncheeChoice"
ROUTE372.toField = "set_startTime"
ROUTE372.toNode = "HamsterSound"

Scene17.children.append(ROUTE372)
ROUTE373 = x3d.ROUTE()
ROUTE373.fromField = "isActive"
ROUTE373.fromNode = "LauncheeChoice"
ROUTE373.toField = "set_boolean"
ROUTE373.toNode = "LauncheeScript"

Scene17.children.append(ROUTE373)
ROUTE374 = x3d.ROUTE()
ROUTE374.fromField = "whichchoice"
ROUTE374.fromNode = "LauncheeScript"
ROUTE374.toField = "whichChoice"
ROUTE374.toNode = "projectile"

Scene17.children.append(ROUTE374)
ROUTE375 = x3d.ROUTE()
ROUTE375.fromField = "whichchoice"
ROUTE375.fromNode = "LauncheeScript"
ROUTE375.toField = "whichChoice"
ROUTE375.toNode = "projectilename"

Scene17.children.append(ROUTE375)
ROUTE376 = x3d.ROUTE()
ROUTE376.fromField = "isActive"
ROUTE376.fromNode = "weightselector"
ROUTE376.toField = "set_boolean"
ROUTE376.toNode = "WeightScript"

Scene17.children.append(ROUTE376)
ROUTE377 = x3d.ROUTE()
ROUTE377.fromField = "whichchoice"
ROUTE377.fromNode = "WeightScript"
ROUTE377.toField = "whichChoice"
ROUTE377.toNode = "Weight"

Scene17.children.append(ROUTE377)
ROUTE378 = x3d.ROUTE()
ROUTE378.fromField = "fraction_changed"
ROUTE378.fromNode = "clock"
ROUTE378.toField = "set_fraction"
ROUTE378.toNode = "flingerangles"

Scene17.children.append(ROUTE378)
ROUTE379 = x3d.ROUTE()
ROUTE379.fromField = "value_changed"
ROUTE379.fromNode = "flingerangles"
ROUTE379.toField = "set_rotation"
ROUTE379.toNode = "flinger"

Scene17.children.append(ROUTE379)
ROUTE380 = x3d.ROUTE()
ROUTE380.fromField = "fraction_changed"
ROUTE380.fromNode = "clock"
ROUTE380.toField = "set_fraction"
ROUTE380.toNode = "verticalweightpath"

Scene17.children.append(ROUTE380)
ROUTE381 = x3d.ROUTE()
ROUTE381.fromField = "value_changed"
ROUTE381.fromNode = "verticalweightpath"
ROUTE381.toField = "set_translation"
ROUTE381.toNode = "verticalweight"

Scene17.children.append(ROUTE381)
ROUTE382 = x3d.ROUTE()
ROUTE382.fromField = "fraction_changed"
ROUTE382.fromNode = "clock"
ROUTE382.toField = "set_fraction"
ROUTE382.toNode = "pinpath"

Scene17.children.append(ROUTE382)
ROUTE383 = x3d.ROUTE()
ROUTE383.fromField = "value_changed"
ROUTE383.fromNode = "pinpath"
ROUTE383.toField = "set_translation"
ROUTE383.toNode = "Pin"

Scene17.children.append(ROUTE383)

X3D0.Scene = Scene17
f = open("../data/Trebuchet.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Trebuchet.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
