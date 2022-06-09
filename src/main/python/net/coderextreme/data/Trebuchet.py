'''
x3d.py package 4.0.63.7 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="3.0", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="Trebuchet.x3d"),
Background(backUrl=["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg"], bottomUrl=["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg"], frontUrl=["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg"], groundAngle=[float(1.309),float(1.570796)], groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)], leftUrl=["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg"], rightUrl=["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg"], skyAngle=[float(1.309),float(1.57079)], skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)], topUrl=["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg"]),
Sound(maxBack=1000, maxFront=1000, 
source=
AudioClip(DEF="HolyGrail", description="HolyGrail", loop=True, url=["holygral.mp3","http://www.nps.navy.mil/code32/vrml/holygral.mp3"])),
Shape(
geometry=
Box(size=((10000,1,10000))), 
appearance=
Appearance(
texture=
ImageTexture(url=["grass.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg"]))),
Transform(rotation=((0,1,0,1.57)), scale=((0.5,0.5,0.5)), translation=((10.5,6.5,4.5)), children=[
Shape(
appearance=
Appearance(DEF="TextAppearance", 
material=
Material(diffuseColor=((1,0,0)), emissiveColor=((1,1,0)))), 
geometry=
Text(string=["Click Sling to Select Projectile"], 
fontStyle=
FontStyle()))]),
Transform(rotation=((0,1,0,1.57)), scale=((0.5,0.5,0.5)), translation=((11,5.5,6)), children=[
Switch(DEF="Weight", whichChoice=0, children=[
Group(children=[
Shape(
appearance=
Appearance(USE="TextAppearance"), 
geometry=
Text(string=["Click Here to Change Counter Weight (50 lbs)"]))]),
Group(children=[
Shape(
appearance=
Appearance(USE="TextAppearance"), 
geometry=
Text(string=["Click Here to Change Counter Weight (500 lbs)"]))]),
Group(children=[
Shape(
appearance=
Appearance(USE="TextAppearance"), 
geometry=
Text(string=["Click Here to Change Counter Weight (1000 lbs)"]))]),
Group(children=[
Shape(
appearance=
Appearance(USE="TextAppearance"), 
geometry=
Text(string=["Click Here to Change Counter Weight (10000 lbs)"]))])]),
TouchSensor(DEF="weightselector", description="weight selector"),
Transform(translation=((8,0,0)), children=[
Shape(
geometry=
Box(size=((20,1,1))), 
appearance=
Appearance(
material=
Material(transparency=1)))])]),
Transform(rotation=((0,1,0,1.57)), translation=((10,0.5,4.5)), children=[
Transform(DEF="launch", translation=((0,2,5)), children=[
Billboard(children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0)))), 
geometry=
Text(string=["LAUNCH"], 
fontStyle=
FontStyle())),
Transform(translation=((2,0.3,0)), children=[
Shape(
geometry=
Box(size=((5,1,1))), 
appearance=
Appearance(
material=
Material(transparency=1)))]),
Switch(DEF="PigdogMonk", whichChoice=-1, children=[
Group(children=[
Sound(maxBack=1000, maxFront=1000, 
source=
AudioClip(DEF="PigDogSound", description="PigDogSound", url=["pigdog.wav","http://www.nps.navy.mil/code32/vrml/pigdog.wav"]))]),
Group(children=[
Sound(maxBack=1000, maxFront=1000, 
source=
AudioClip(DEF="MonkSound", description="MonkSound", url=["monks.wav","http://www.nps.navy.mil/code32/vrml/monks.wav"]))])])]),
TouchSensor(DEF="Launch", description="launch!")]),
Transform(children=[
Switch(DEF="projectilename", whichChoice=0, children=[
Group(children=[
Shape(
appearance=
Appearance(USE="TextAppearance"), 
geometry=
Text(string=["Bowling Ball (10 lbs)"], 
fontStyle=
FontStyle(size=0.5))),
Sound(maxBack=1000, maxFront=1000, priority=1, 
source=
AudioClip(DEF="HolyHandGrenadeSound", description="HolyHandGrenadeSound", url=["grenade.wav","http://www.nps.navy.mil/code32/vrml/grenade.wav"]))]),
Group(children=[
Shape(
appearance=
Appearance(USE="TextAppearance"), 
geometry=
Text(string=["Cow (1000 lbs)"], 
fontStyle=
FontStyle(size=0.5))),
Sound(maxBack=1000, maxFront=1000, 
source=
AudioClip(DEF="CowSound", description="CowSound", url=["lavache.wav","http://www.nps.navy.mil/code32/vrml/lavache.wav"]))]),
Group(children=[
Shape(
appearance=
Appearance(USE="TextAppearance"), 
geometry=
Text(string=["Chicken (5 lbs)"], 
fontStyle=
FontStyle(size=0.5))),
Sound(maxBack=1000, maxFront=1000, priority=1, 
source=
AudioClip(DEF="HamsterSound", description="HamsterSound", url=["hamster.wav","http://www.nps.navy.mil/code32/vrml/hamster.wav"]))])])])]),
Transform(rotation=((0,1,0,-1.67)), children=[
Transform(DEF="aft", translation=((5,5,15)), children=[
Transform(translation=((-2.5,-4.5,-2)), children=[
Transform(USE="launch")])])]),
Transform(translation=((0,3,0)), children=[
Shape(DEF="plank", 
geometry=
Box(size=((25,1,1))), 
appearance=
Appearance(DEF="wood", 
texture=
ImageTexture(DEF="woodTexture", url=["wood.gif","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif"]))),
Transform(DEF="angledsupport", rotation=((0,0,1,1)), translation=((-5,10,0)), children=[
Shape(USE="plank")]),
Transform(DEF="angledsupport2", rotation=((0,0,1,-1)), translation=((5,10,0)), children=[
Shape(USE="plank")]),
Transform(DEF="verticalsupport", rotation=((0,0,1,1.57)), scale=((0.9,1,1)), translation=((0,11,0)), children=[
Shape(USE="plank"),
#Main Verticle Support
]),
Transform(DEF="horizontalsupport", scale=((0.4,1,1)), translation=((0,10,0)), children=[
Shape(USE="plank")]),
Transform(rotation=((0,0,1,1.57)), scale=((0.6,1,1)), translation=((0,5,10)), children=[
Transform(rotation=((0,1,0,0.4)), children=[
Shape(USE="plank")])]),
Transform(DEF="panel", translation=((0,18.2,-0.3)), children=[
Shape(
geometry=
Box(size=((5,5,0.5))), 
appearance=
Appearance(USE="wood"))]),
Transform(rotation=((1,0,0,-1.57)), translation=((0,0.6,2.5)), children=[
Transform(rotation=((0,0,1,1.57)), children=[
Shape(
geometry=
Extrusion(beginCap=False, crossSection=[(1.0,-0.38),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.38),(-1,-1.1),(1,-1.1),(1.0,-0.38)], endCap=False, solid=False, spine=[(0,6,0),(0,-11,0)]), 
appearance=
Appearance(USE="wood"))])]),
Transform(DEF="flinger", center=((7,0,0)), rotation=((0,0,1,0.82)), scale=((0.9,1,1)), translation=((-7,18,2.5)), children=[
Transform(children=[
Shape(
geometry=
Box(size=((35,1,1))), 
appearance=
Appearance(USE="wood")),
Transform(translation=((7,0,0)), children=[
Shape(
geometry=
Box(size=((8,2,2))), 
appearance=
Appearance(USE="wood"))])]),
Transform(rotation=((1,0,0,1.57)), scale=((0.2,0.2,0.2)), translation=((-15,-1,0)), children=[
Shape(DEF="Torus", 
appearance=
Appearance(
material=
Material(specularColor=((1,1,1)))), 
geometry=
Extrusion(beginCap=False, convex=False, creaseAngle=1.57, crossSection=[(0.9,0.0),(0.81,-0.34),(0.63,-0.63),(0.34,-0.83),(0.0,-0.9),(-0.34,-0.81),(-0.63,-0.63),(-0.81,-0.34),(-0.9,-0.0),(-0.81,0.34),(-0.63,0.63),(-0.34,0.81),(0.0,0.9),(0.38,0.81),(0.63,0.63),(0.81,0.34),(0.9,0.0)], endCap=False, spine=[(2.0,0.0,0.0),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.0,0.0,2.0),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.0,0.0,0.0),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.0,0.0,-2.0),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.0,0.0,0.0)])),
Transform(translation=((1,0,2)), children=[
Shape(
appearance=
Appearance(DEF="rope", 
texture=
ImageTexture(USE="woodTexture")), 
geometry=
Sphere(radius=1.5)),
#knott
])]),
#The Unicorn

Transform(rotation=((0,0,1,1.2)), scale=((0.2,0.2,0.2)), translation=((-18.3,0.3,0)), children=[
Shape(
geometry=
Cylinder(height=10), 
appearance=
Appearance(
material=
Material(specularColor=((1,1,1))))),
Transform(translation=((0,-2.5,0)), children=[
Shape(USE="Torus"),
#The Unicorn

Transform(translation=((-2,0,0)), children=[
Shape(
geometry=
Sphere(radius=1.5), 
appearance=
Appearance(USE="rope")),
#Knott
]),]),
Transform(rotation=((0,0,1,1.2)), translation=((15,55,-11)), children=[
Transform(scale=((5,5,5)), children=[
Shape(
appearance=
Appearance(USE="rope"), 
geometry=
Extrusion(beginCap=False, creaseAngle=0.76, crossSection=[(0.1,0.0),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0.0,-0.1),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.1,-0.0),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0.0,0.1),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.1,0.0)], endCap=False, solid=False, spine=[(-15.2,1.4,2.2),(-12,-0.8,2.2)]))])])]),
Transform(rotation=((1,0,0,-1.7)), translation=((-17,-4.5,0)), children=[
Transform(scale=((0.2,0.2,0.2)), children=[
Shape(USE="Torus"),
Transform(translation=((-1,0,1.7)), children=[
Shape(
geometry=
Sphere(radius=1.5), 
appearance=
Appearance(USE="rope"))])])]),
Transform(DEF="RnS", children=[
Transform(DEF="ropes", children=[
Transform(rotation=((0,0,1,-0.82)), translation=((7,-26,-2.5)), children=[
Shape(
appearance=
Appearance(USE="rope"), 
geometry=
Extrusion(beginCap=False, creaseAngle=0.76, crossSection=[(0.1,0.0),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0.0,-0.1),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.1,-0.0),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0.0,0.1),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.1,0.0)], endCap=False, solid=False, spine=[(-33,0.9,2.5),(-18.5,1.9,2.55)])),
Shape(
appearance=
Appearance(USE="rope"), 
geometry=
Extrusion(beginCap=False, creaseAngle=0.76, crossSection=[(0.1,0.0),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0.0,-0.1),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.1,-0.0),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0.0,0.1),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.1,0.0)], endCap=False, solid=False, spine=[(-35.7,-0.8,2.5),(-18.8,-0.8,2.55)]))])]),
Transform(DEF="sling", rotation=((0,0,1,-0.82)), translation=((-4,-15.3,0)), children=[
Transform(children=[
Transform(rotation=((0,1,0,-1.57)), scale=((1,1.3,1)), translation=((0.5,0,-1)), children=[
Transform(rotation=((0,0,1,1.57)), children=[
Transform(scale=((0.3,0.3,0.3)), children=[
Shape(DEF="halfsling", 
appearance=
Appearance(DEF="clear", 
material=
Material(transparency=0.5)), 
geometry=
Extrusion(crossSection=[(0,0),(0,5),(0.5,7),(1,8),(2,9),(3,11),(3.5,11.2),(4,11),(5,9),(6,8),(6.5,7),(6.7,5),(6.7,0),(0,0)], spine=[(0,0,0),(0.1,0,0)])),
Transform(scale=((0.3,0.3,0.3)), translation=((0,-3.5,11.5)), children=[
Shape(USE="Torus"),
Transform(translation=((0,0,2)), children=[
Shape(
appearance=
Appearance(USE="rope"), 
geometry=
Sphere(radius=1.5))])])]),
Transform(scale=((0.3,0.3,0.3)), translation=((2,0,0)), children=[
Shape(USE="halfsling"),
Transform(scale=((0.3,0.3,0.3)), translation=((0,-3.5,11.3)), children=[
Shape(USE="Torus"),
Transform(translation=((0,0,2)), children=[
Shape(
appearance=
Appearance(USE="rope"), 
geometry=
Sphere(radius=1.5))])])]),
Transform(translation=((1,-1,0)), children=[
Shape(
geometry=
Extrusion(beginCap=False, creaseAngle=0.785, crossSection=[(1.0,0.0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.0)], endCap=False, solid=False, spine=[(0,-1,0),(0,1,0)]), 
appearance=
Appearance(USE="clear"))])]),
TouchSensor(DEF="LauncheeChoice", description="launcher choice")]),
Transform(DEF="projectiletransform", scale=((0.01,0.01,0.01)), children=[
Switch(DEF="projectile", whichChoice=0, children=[
Group(children=[
Transform(translation=((0,0.7,0)), children=[
Shape(
geometry=
Sphere(radius=0.7), 
appearance=
Appearance(DEF="black", 
material=
Material(diffuseColor=((0,0,0)), specularColor=((1,1,1)))))])]),
Group(children=[
Transform(children=[
Inline(url=["cow.wrl","http://www.uoguelph.ca/~dchiu/cow.wrl"])])]),
Group(children=[
Transform(rotation=((0,1,0,1.57)), scale=((0.4,0.4,0.4)), translation=((0,0.7,0)), children=[
Inline(url=["vrml_ginger.wrl","http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl"])])])])])])])]),]),
Transform(rotation=((1,0,0,1.57)), translation=((0,18,2.5)), children=[
Shape(
geometry=
Cylinder(height=8, radius=0.4), 
appearance=
Appearance(
material=
Material(diffuseColor=((0,0,0)), specularColor=((1,1,1))))),
#Top Pivot
]),
Transform(DEF="verticalweight", children=[
Transform(translation=((4,18,1.8)), children=[
Shape(
geometry=
Box(size=((1,10,0.5))), 
appearance=
Appearance(USE="wood"))]),
Transform(translation=((4,18,3.2)), children=[
Shape(
geometry=
Box(size=((1,10,0.5))), 
appearance=
Appearance(USE="wood"))]),
Transform(translation=((4,14,2.5)), children=[
#CounterWeight

Shape(
geometry=
Cylinder(height=4, radius=1.5), 
appearance=
Appearance(
material=
Material(diffuseColor=((0,0,0)), specularColor=((1,1,1))))),]),
Transform(rotation=((1,0,0,1.57)), translation=((4,22,2.5)), children=[
Shape(
geometry=
Cylinder(height=2.5, radius=0.3), 
appearance=
Appearance(
material=
Material(diffuseColor=((0,0,0)), specularColor=((1,1,1)))))])]),
Transform(rotation=((0,0,1,1.57)), scale=((0.2,0.2,0.2)), translation=((-11.5,-1,2)), children=[
Transform(DEF="screw", rotation=((1,0,0,1.57)), children=[
Shape(USE="Torus"),
Transform(rotation=((1,0,0,-1.57)), translation=((0,0,7)), children=[
Shape(
geometry=
Cylinder(height=10, radius=0.7), 
appearance=
Appearance(
material=
Material(specularColor=((1,1,1)))))])]),
Transform(translation=((0,0,7)), children=[
Transform(USE="screw")]),
#Release Pin

Transform(DEF="Pin", rotation=((1,0,0,-1.57)), translation=((0,0,-3)), children=[
Transform(USE="screw")]),]),
Transform(translation=((0,0,5)), children=[
Shape(USE="plank"),
Transform(USE="angledsupport"),
Transform(USE="angledsupport2"),
Transform(USE="verticalsupport"),
Transform(USE="horizontalsupport"),
Transform(rotation=((0,1,0,1.57)), scale=((0.6,1,1)), translation=((0,-11,-2.5)), children=[
Transform(USE="horizontalsupport")]),
Transform(rotation=((0,0,1,-1.57)), scale=((0.6,1,1)), translation=((0,5,-10)), children=[
Transform(rotation=((0,1,0,0.4)), children=[
Shape(USE="plank")])]),
Transform(translation=((0,0,0.6)), children=[
Transform(USE="panel")])]),
Transform(translation=((10,-1,2.5)), children=[
Shape(DEF="Axle", 
geometry=
Box(size=((1,1,8))), 
appearance=
Appearance(USE="wood")),
Transform(rotation=((1,0,0,1.57)), translation=((0,0,4.5)), children=[
Shape(DEF="wheel", 
geometry=
Cylinder(radius=2), 
appearance=
Appearance(USE="wood")),
Shape(DEF="tracks", 
geometry=
Sphere(radius=1.5), 
appearance=
Appearance(USE="black")),
Transform(translation=((0,0.55,0)), children=[
Shape(DEF="hub", 
geometry=
Sphere(radius=1.5), 
appearance=
Appearance(USE="black"))])]),
Transform(rotation=((1,0,0,1.57)), translation=((0,0,-4.5)), children=[
Shape(USE="wheel"),
Shape(USE="tracks"),
Transform(translation=((0,-0.55,0)), children=[
Shape(USE="hub")])])]),
Transform(translation=((-10,-1,2.5)), children=[
Shape(USE="Axle"),
Transform(rotation=((1,0,0,1.57)), translation=((0,0,4.5)), children=[
Shape(USE="wheel"),
Shape(USE="tracks"),
Transform(translation=((0,0.55,0)), children=[
Shape(USE="hub")])]),
Transform(rotation=((1,0,0,1.57)), translation=((0,0,-4.5)), children=[
Shape(USE="wheel"),
Shape(USE="tracks"),
Transform(translation=((0,-0.55,0)), children=[
Shape(USE="hub")])]),
Transform(rotation=((0,1,0,-0.6)), translation=((0,100,400)), children=[
Transform(translation=((1,3,0)), children=[
Viewpoint(description="Side")]),
Transform(USE="launch"),
Transform(children=[
TouchSensor(USE="LauncheeChoice"),
Switch(USE="projectilename"),
Transform(translation=((2.5,0,0)), children=[
Shape(
geometry=
Box(size=((5,0.5,0.5))), 
appearance=
Appearance(
material=
Material(transparency=1)))])]),
Transform(scale=((0.5,0.5,0.5)), translation=((0,-1,0)), children=[
TouchSensor(USE="weightselector"),
Switch(USE="Weight"),
Transform(translation=((8,0,0)), children=[
Shape(
geometry=
Box(size=((17,1,0.5))), 
appearance=
Appearance(
material=
Material(transparency=1)))])])]),
Transform(DEF="ProjectileTransform", translation=((14.25,1.25,0)), children=[
Switch(USE="projectile"),
Transform(rotation=((0,1,0,1.57)), translation=((0,1,0)), children=[
Viewpoint(description="Projectile Cam", position=((0,0,15)))])]),
Transform(translation=((20,2,0)), children=[
Transform(DEF="Front", rotation=((0,1,0,1.57)), children=[
Viewpoint(description="Fore")])]),
Transform(translation=((-8,4,0)), children=[
Transform(rotation=((0,1,0,-1.57)), children=[
Viewpoint(description="Aft")])]),
Script(DEF="WeightScript", field=[field(name="set_boolean", accessType="inputOnly", type="SFBool"),
field(name="whichchoice", accessType="outputOnly", type="SFInt32"),
field(name="CounterWeight", accessType="outputOnly", type="SFFloat")
], 
#['', '', 'ecmascript:', '', '', 'function initialize ()', '{', '\twhichchoice =0;', '\tCounterWeight=100;', '}', '', 'function set_boolean ( boolean_input, eventTime)', '{', '', '\tif ( boolean_input== false ) { return; } // ignore the unclick', '        whichchoice = whichchoice +1;', '\tif (whichchoice == 0)CounterWeight=50.00;', '\tif (whichchoice == 1)CounterWeight=500.00;', '\tif (whichchoice == 2)CounterWeight=1000.00;', '\tif (whichchoice == 3)CounterWeight=10000.00;', '        if ( whichchoice ==4 ) { whichchoice = 0; CounterWeight=50; }', '', '', "        Browser.print ('CounterWeight ='+CounterWeight);", '}', '', '']
),
Script(DEF="LauncheeScript", field=[field(name="set_boolean", accessType="inputOnly", type="SFBool"),
field(name="whichchoice", accessType="outputOnly", type="SFInt32"),
field(name="ProjectileWeight", accessType="outputOnly", type="SFFloat")
], 
#['', '', 'ecmascript:', '', 'function set_boolean (boolean_input, eventTime)', '{', '\tif ( boolean_input== false ) { return; } // ignore unclick', '        whichchoice = whichchoice +1;', '        if (whichchoice == 0)ProjectileWeight=10.00;', '        if (whichchoice == 1)ProjectileWeight=1000.00;', '\tif (whichchoice == 2)ProjectileWeight=5;', '', '\tif ( whichchoice ==3 ) { whichchoice = 0; ProjectileWeight=10.00; }', "\tBrowser.print ('Projectile Weight'+ProjectileWeight);", '}', '', '']
),
Script(DEF="PigdogMonkScript", field=[field(name="set_boolean", accessType="inputOnly", type="SFBool"),
field(name="whichchoice", accessType="outputOnly", type="SFInt32")
], 
#['', '', 'ecmascript:', '', 'function set_boolean (boolean_input, eventTime)', '{', '\tif ( boolean_input== false ) { return; } // ignore unclick', '', '        whichchoice = whichchoice +1;', '', '        if ( whichchoice ==2 )  whichchoice = 0;', '', '', '}', '', '']
),
Script(DEF="Mover", field=[field(name="set_fraction", accessType="inputOnly", type="SFFloat"),
field(name="set_MassCounterWeight", accessType="inputOnly", type="SFFloat"),
field(name="set_MassProjectileWeight", accessType="inputOnly", type="SFFloat"),
field(name="MassCounterWeight", accessType="initializeOnly", type="SFFloat", value=1),
field(name="MassProjectileWeight", accessType="initializeOnly", type="SFFloat", value=1),
field(name="transparent", accessType="outputOnly", type="SFVec3f"),
field(name="value_changed", accessType="outputOnly", type="SFVec3f")
], 
#['', '', 'ecmascript:', '', 'function initialize ()', '{', '\tMassCounterWeight=100;', '\tMassProjectileWeight=10;', "\tBrowser.print ('MassCounterWeight =' + MassCounterWeight);", "\tBrowser.print ('MassProjectileWeight =' + MassProjectileWeight);", '}', '', 'function set_MassProjectileWeight (value, timestamp)', '{', '\tMassProjectileWeight = value;', "\tBrowser.print ('new MassProjectileWeight =' + MassProjectileWeight);", '}', 'function set_MassCounterWeight (value2, timestamp)', '{', '\tMassCounterWeight = value2;', "\tBrowser.print ('new MassCounterWeight =' + MassCounterWeight);", '}', '', '', 'function set_fraction ( fraction, eventTime )', '{', '\tvar TrebuchetHeight=45;', '\tvar Height =25;', '      \tx = (2*(MassCounterWeight/MassProjectileWeight)*Height*fraction)-.5*TrebuchetHeight;', '\t// start at TrebuchetHeight and keep along z axis (z=zero)', '\ty =  (MassCounterWeight/MassProjectileWeight)*Height*Math.sin(fraction*3.14);', '        z = 0;', '        transparent = new SFVec3f (1,1,1);', '     if (y <1.5*TrebuchetHeight  )if (x<TrebuchetHeight)', '\t\t{', '\t\tx=x-10;', '\t\ty=y+1;', '\t\ttransparent = new SFVec3f(.01, .01, .01);', '\t\t\t}', '', '\tvalue_changed = new SFVec3f (x, y, z);', "\tBrowser.print ('x=' + value_changed[0] + ' y=' + value_changed[1] + ' z=' + value_changed[2]);", '}', '', '']
)])]),
TimeSensor(DEF="clock", cycleInterval=10),
PositionInterpolator(DEF="verticalweightpath", key=[float(0),float(0.1),float(0.2),float(0.2),float(0.3),float(0.9)], keyValue=[(1.4,1.6,0),(1.0,-8,0),(-3.5,-12,0),(-3.5,-12,0),(1.2,-8,0),(1.4,1.6,0)]),
OrientationInterpolator(DEF="flingerangles", key=[float(0),float(0.1),float(0.2),float(0.2),float(0.3),float(0.9)], keyValue=[(float(0),float(0),float(1),float(0.82)),(float(0),float(0),float(1),float(-0.77)),(float(0),float(0),float(1),float(-1.57)),(float(0),float(0),float(1),float(-1.57)),(float(0),float(0),float(1),float(-0.77)),(float(0),float(0),float(1),float(0.82))]),
PositionInterpolator(DEF="pinpath", key=[float(0),float(0.01),float(0.95),float(1)], keyValue=[(0,0,-3),(0,0,-10),(0,0,-10),(0,0,-3)]),
OrientationInterpolator(DEF="RnSAngels", key=[float(0),float(0.7),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(0),float(0),float(1),float(-3.14)),(float(0),float(0),float(1),float(0))]),
PositionInterpolator(DEF="invisiable", key=[float(0),float(0.2),float(0.98),float(0.99)], keyValue=[(1,1,1),(0.01,0.01,0.01),(0.01,0.01,0.01),(1,1,1)]),
ROUTE(fromField="fraction_changed", fromNode="clock", toField="set_fraction", toNode="invisiable"),
ROUTE(fromField="value_changed", fromNode="invisiable", toField="set_scale", toNode="projectiletransform"),
ROUTE(fromField="CounterWeight", fromNode="WeightScript", toField="set_MassCounterWeight", toNode="Mover"),
ROUTE(fromField="ProjectileWeight", fromNode="LauncheeScript", toField="set_MassProjectileWeight", toNode="Mover"),
ROUTE(fromField="fraction_changed", fromNode="clock", toField="set_fraction", toNode="Mover"),
ROUTE(fromField="value_changed", fromNode="Mover", toField="set_translation", toNode="ProjectileTransform"),
ROUTE(fromField="transparent", fromNode="Mover", toField="set_scale", toNode="ProjectileTransform"),
ROUTE(fromField="touchTime", fromNode="Launch", toField="set_startTime", toNode="clock"),
ROUTE(fromField="isActive", fromNode="Launch", toField="set_boolean", toNode="PigdogMonkScript"),
ROUTE(fromField="touchTime", fromNode="Launch", toField="set_startTime", toNode="PigDogSound"),
ROUTE(fromField="touchTime", fromNode="Launch", toField="set_startTime", toNode="MonkSound"),
ROUTE(fromField="whichchoice", fromNode="PigdogMonkScript", toField="whichChoice", toNode="PigdogMonk"),
ROUTE(fromField="touchTime", fromNode="LauncheeChoice", toField="set_startTime", toNode="HolyHandGrenadeSound"),
ROUTE(fromField="touchTime", fromNode="LauncheeChoice", toField="set_startTime", toNode="CowSound"),
ROUTE(fromField="touchTime", fromNode="LauncheeChoice", toField="set_startTime", toNode="HamsterSound"),
ROUTE(fromField="isActive", fromNode="LauncheeChoice", toField="set_boolean", toNode="LauncheeScript"),
ROUTE(fromField="whichchoice", fromNode="LauncheeScript", toField="whichChoice", toNode="projectile"),
ROUTE(fromField="whichchoice", fromNode="LauncheeScript", toField="whichChoice", toNode="projectilename"),
ROUTE(fromField="isActive", fromNode="weightselector", toField="set_boolean", toNode="WeightScript"),
ROUTE(fromField="whichchoice", fromNode="WeightScript", toField="whichChoice", toNode="Weight"),
ROUTE(fromField="fraction_changed", fromNode="clock", toField="set_fraction", toNode="flingerangles"),
ROUTE(fromField="value_changed", fromNode="flingerangles", toField="set_rotation", toNode="flinger"),
ROUTE(fromField="fraction_changed", fromNode="clock", toField="set_fraction", toNode="verticalweightpath"),
ROUTE(fromField="value_changed", fromNode="verticalweightpath", toField="set_translation", toNode="verticalweight"),
ROUTE(fromField="fraction_changed", fromNode="clock", toField="set_fraction", toNode="pinpath"),
ROUTE(fromField="value_changed", fromNode="pinpath", toField="set_translation", toNode="Pin")]))
.XML())
