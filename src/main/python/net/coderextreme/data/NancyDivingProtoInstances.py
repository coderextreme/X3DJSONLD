#x3d.py package loaded, have fun with X3D Graphics!
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
ExternProtoDeclare(name="Joint", appinfo="The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.", documentation="http://HAnim.org/Specifications/HAnim2001/part1/Joint.html", url=["NancyPrototypes.x3d#Joint","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Joint","NancyPrototypes.wrl#Joint","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Joint"], field=[field(name="center", accessType="inputOutput", type="SFVec3f"),
field(name="children", accessType="inputOutput", type="MFNode"),
field(name="llimit", accessType="inputOutput", type="MFFloat"),
field(name="limitOrientation", accessType="inputOutput", type="SFRotation"),
field(name="name", accessType="inputOutput", type="SFString"),
field(name="rotation", accessType="inputOutput", type="SFRotation"),
field(name="scale", accessType="inputOutput", type="SFVec3f"),
field(name="scaleOrientation", accessType="inputOutput", type="SFRotation"),
field(name="stiffness", accessType="inputOutput", type="MFFloat"),
field(name="translation", accessType="inputOutput", type="SFVec3f"),
field(name="ulimit", accessType="inputOutput", type="MFFloat"),
field(name="removeChildren", accessType="inputOnly", type="MFNode"),
field(name="bboxSize", accessType="initializeOnly", type="SFVec3f"),
field(name="skinCoordIndex", accessType="inputOutput", type="MFInt32"),
field(name="bboxCenter", accessType="initializeOnly", type="SFVec3f"),
field(name="skinCoordWeight", accessType="inputOutput", type="MFFloat"),
field(name="addChildren", accessType="inputOnly", type="MFNode")
]),
ExternProtoDeclare(name="Segment", appinfo="The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node.", documentation="http://HAnim.org/Specifications/HAnim2001/part1/Segment.html", url=["NancyPrototypes.x3d#Segment","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Segment","NancyPrototypes.wrl#Segment","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Segment"], field=[field(name="bboxCenter", accessType="initializeOnly", type="SFVec3f"),
field(name="bboxSize", accessType="initializeOnly", type="SFVec3f"),
field(name="centerOfMass", accessType="inputOutput", type="SFVec3f"),
field(name="children", accessType="inputOutput", type="MFNode"),
field(name="coord", accessType="inputOutput", appinfo="contains Coordinate nodes", type="SFNode"),
field(name="displacers", accessType="inputOutput", appinfo="contains Displacer nodes", type="MFNode"),
field(name="mass", accessType="inputOutput", type="SFFloat"),
field(name="momentsOfInertia", accessType="inputOutput", type="MFFloat"),
field(name="name", accessType="inputOutput", type="SFString"),
field(name="addChildren", accessType="inputOnly", type="MFNode"),
field(name="removeChildren", accessType="inputOnly", type="MFNode")
]),
ExternProtoDeclare(name="Humanoid", appinfo="The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.", documentation="http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html", url=["NancyPrototypes.x3d#Humanoid","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Humanoid","NancyPrototypes.wrl#Humanoid","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Humanoid"], field=[field(name="bboxCenter", accessType="initializeOnly", type="SFVec3f"),
field(name="bboxSize", accessType="initializeOnly", type="SFVec3f"),
field(name="center", accessType="inputOutput", type="SFVec3f"),
field(name="humanoidBody", accessType="inputOutput", appinfo="HAnim 1.1 field container for body geometry Hint: replaced by 2.0 skeleton", documentation="http://HAnim.org/Specifications/HAnim1.1/#humanoid", type="MFNode"),
field(name="info", accessType="inputOutput", type="MFString"),
field(name="joints", accessType="inputOutput", appinfo="Container field for Joint nodes", type="MFNode"),
field(name="name", accessType="inputOutput", type="SFString"),
field(name="rotation", accessType="inputOutput", type="SFRotation"),
field(name="scale", accessType="inputOutput", type="SFVec3f"),
field(name="scaleOrientation", accessType="inputOutput", type="SFRotation"),
field(name="segments", accessType="inputOutput", appinfo="Container field for Segment nodes", type="MFNode"),
field(name="sites", accessType="inputOutput", appinfo="Container field for Site nodes", type="MFNode"),
field(name="translation", accessType="inputOutput", type="SFVec3f"),
field(name="version", accessType="inputOutput", appinfo="legal values: 1.1 or 2.0", type="SFString"),
field(name="viewpoints", accessType="inputOutput", appinfo="Container field for Viewpoint nodes", type="MFNode"),
field(name="skinNormal", accessType="inputOutput", appinfo="Hint: HAnim version 2.0", type="SFNode"),
field(name="humanoidVersion", accessType="inputOutput", appinfo="Version of the humanoid being modeled. Hint: HAnim version 2.0", type="SFString"),
field(name="skeleton", accessType="inputOutput", appinfo="HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody", documentation="http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html", type="MFNode"),
field(name="skinCoord", accessType="inputOutput", appinfo="Hint: HAnim version 2.0", type="SFNode")
]),
#====================

ExternProtoDeclare(name="ViewPositionOrientation", appinfo="ViewPositionOrientation provides provides console output of local position and orientation as user navigates", url=["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"], field=[field(name="enabled", accessType="inputOutput", appinfo="Whether or not ViewPositionOrientation sends output to console", type="SFBool"),
field(name="traceEnabled", accessType="initializeOnly", appinfo="Output internal trace messages for debugging this node, intended for developer use only", type="SFBool"),
field(name="set_traceEnabled", accessType="inputOnly", appinfo="Ability to turn output tracing on/off at runtime", type="SFBool"),
field(name="position_changed", accessType="outputOnly", appinfo="Output local position", type="SFVec3f"),
field(name="orientation_changed", accessType="outputOnly", appinfo="Output local orientation", type="SFRotation"),
field(name="outputViewpointString", accessType="outputOnly", appinfo="MFString value of new Viewpoint, suitable for use in string field of a Text node", type="MFString")
]),
ProtoInstance(name="ViewPositionOrientation", DEF="ExampleViewPositionOrientation", fieldValue=[fieldValue(name="enabled", value=True)
]),
#Example use: https://savage.nps.edu/Savage/Tools/Animation/ViewPositionOrientationExample.x3d

#====================

#Start scene graph.

ProtoInstance(name="ViewPositionOrientation", fieldValue=[fieldValue(name="enabled", value=True)
]),
Background(skyColor=[(0,0.4,1)]),
NavigationInfo(avatarSize=[float(0.15),float(1.53),float(0.75)], speed=0.5, type="\"EXAMINE\""),
Viewpoint(description="Nancy diving default viewpoint", position=((-0.8,0,3.1))),
LOD(children=[
Group(DEF="Viewpoint", children=[
#High Resolution

Viewpoint(description="Nancy front viewpoint", orientation=((-0.354,0.878,-0.321,4.5485)), position=((-2.2,-0.7,0))),
Viewpoint(description="Nancy above viewpoint", orientation=((-0.126,-0.978,-0.168,1.5385)), position=((-3,0.5,0))),
Viewpoint(description="Nancy back viewpoint", orientation=((0.037,0.999,-0.011,1.572)), position=((0.7,0.1,0))),
Viewpoint(description="Nancy side viewpoint", orientation=((0.121,0.987,-0.105,3.2682)), position=((-1.2,-0.2,-1.5))),
Viewpoint(description="Nancy viewpoint through her goggles", orientation=((-0.357,0.872,0.335,1.5225)), position=((-1.5,0.1,0))),
Group(DEF="HighResolution", children=[
Transform(rotation=((1,0,0,1.57)), children=[
Transform(rotation=((0,0,1,1.57)), children=[
WorldInfo(info=["Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc."], title="Nancy - an HAnim compliant avatar by 3Name3D"),
ProtoInstance(name="Humanoid", DEF="Humanoid", fieldValue=[fieldValue(name="humanoidBody", children=[
ProtoInstance(name="Joint", DEF="hanim_humanoid_root", fieldValue=[fieldValue(name="name", value="humanoid_root"),
fieldValue(name="center", value=[-0.00405,0.855,-0.000113]),
fieldValue(name="children", children=[
ProtoInstance(name="Joint", DEF="hanim_sacroiliac", fieldValue=[fieldValue(name="name", value="sacroiliac"),
fieldValue(name="center", value=[0,1.01,-0.0204]),
fieldValue(name="children", children=[
ProtoInstance(name="Segment", DEF="hanim_pelvis", fieldValue=[fieldValue(name="name", value="pelvis"),
fieldValue(name="children", children=[
Shape(
appearance=
Appearance(
material=
Material(DEF="Pants_Color", diffuseColor=((0,0,0.502)))), 
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(40),int(-1),int(1),int(2),int(40),int(-1),int(2),int(3),int(40),int(-1),int(3),int(4),int(40),int(-1),int(4),int(5),int(40),int(-1),int(5),int(4),int(9),int(-1),int(4),int(3),int(8),int(-1),int(3),int(2),int(8),int(-1),int(2),int(1),int(6),int(-1),int(0),int(7),int(1),int(-1),int(7),int(6),int(1),int(-1),int(6),int(8),int(2),int(-1),int(9),int(4),int(10),int(-1),int(4),int(8),int(10),int(-1),int(8),int(6),int(12),int(-1),int(7),int(0),int(47),int(-1),int(50),int(5),int(9),int(-1),int(7),int(47),int(55),int(-1),int(55),int(13),int(7),int(-1),int(50),int(9),int(56),int(-1),int(9),int(10),int(14),int(-1),int(10),int(11),int(15),int(-1),int(11),int(12),int(16),int(-1),int(12),int(13),int(19),int(-1),int(13),int(55),int(17),int(-1),int(60),int(17),int(55),int(-1),int(17),int(19),int(13),int(-1),int(19),int(16),int(12),int(-1),int(16),int(15),int(11),int(-1),int(15),int(18),int(10),int(-1),int(14),int(56),int(9),int(-1),int(56),int(14),int(64),int(-1),int(17),int(60),int(20),int(-1),int(20),int(19),int(17),int(-1),int(21),int(64),int(14),int(-1),int(14),int(22),int(21),int(-1),int(15),int(16),int(24),int(-1),int(16),int(19),int(24),int(-1),int(19),int(20),int(26),int(-1),int(24),int(23),int(15),int(-1),int(64),int(21),int(69),int(-1),int(21),int(22),int(29),int(-1),int(19),int(26),int(25),int(-1),int(20),int(63),int(27),int(-1),int(27),int(26),int(20),int(-1),int(25),int(24),int(19),int(-1),int(30),int(29),int(22),int(-1),int(29),int(28),int(21),int(-1),int(28),int(69),int(21),int(-1),int(27),int(34),int(26),int(-1),int(69),int(28),int(79),int(-1),int(29),int(30),int(32),int(-1),int(30),int(23),int(33),int(-1),int(23),int(24),int(37),int(-1),int(25),int(26),int(34),int(-1),int(83),int(27),int(77),int(-1),int(37),int(33),int(23),int(-1),int(33),int(32),int(30),int(-1),int(31),int(79),int(28),int(-1),int(79),int(31),int(84),int(-1),int(32),int(33),int(36),int(-1),int(24),int(25),int(37),int(-1),int(34),int(27),int(83),int(-1),int(83),int(38),int(34),int(-1),int(34),int(37),int(25),int(-1),int(37),int(36),int(33),int(-1),int(36),int(35),int(32),int(-1),int(84),int(31),int(89),int(-1),int(31),int(35),int(89),int(-1),int(35),int(36),int(39),int(-1),int(36),int(37),int(39),int(-1),int(38),int(83),int(89),int(-1),int(89),int(39),int(38),int(-1),int(39),int(89),int(35),int(-1),int(40),int(41),int(0),int(-1),int(40),int(42),int(41),int(-1),int(40),int(43),int(42),int(-1),int(40),int(44),int(43),int(-1),int(40),int(45),int(44),int(-1),int(49),int(44),int(45),int(-1),int(48),int(43),int(44),int(-1),int(48),int(42),int(43),int(-1),int(46),int(41),int(42),int(-1),int(41),int(47),int(0),int(-1),int(41),int(46),int(47),int(-1),int(42),int(48),int(46),int(-1),int(51),int(44),int(49),int(-1),int(51),int(48),int(44),int(-1),int(48),int(52),int(53),int(-1),int(49),int(45),int(50),int(-1),int(56),int(49),int(50),int(-1),int(57),int(51),int(49),int(-1),int(58),int(53),int(52),int(-1),int(59),int(54),int(53),int(-1),int(62),int(55),int(54),int(-1),int(55),int(62),int(60),int(-1),int(54),int(59),int(62),int(-1),int(53),int(58),int(59),int(-1),int(51),int(61),int(58),int(-1),int(49),int(56),int(57),int(-1),int(64),int(57),int(56),int(-1),int(67),int(59),int(58),int(-1),int(68),int(62),int(59),int(-1),int(60),int(63),int(20),int(-1),int(60),int(62),int(63),int(-1),int(59),int(67),int(68),int(-1),int(58),int(61),int(67),int(-1),int(57),int(64),int(65),int(-1),int(65),int(66),int(57),int(-1),int(71),int(63),int(62),int(-1),int(69),int(65),int(64),int(-1),int(74),int(66),int(65),int(-1),int(78),int(68),int(67),int(-1),int(70),int(71),int(62),int(-1),int(63),int(72),int(27),int(-1),int(63),int(71),int(72),int(-1),int(68),int(78),int(76),int(-1),int(67),int(75),int(78),int(-1),int(66),int(74),int(75),int(-1),int(65),int(73),int(74),int(-1),int(65),int(69),int(73),int(-1),int(77),int(27),int(72),int(-1),int(71),int(82),int(72),int(-1),int(79),int(73),int(69),int(-1),int(81),int(75),int(74),int(-1),int(82),int(71),int(70),int(-1),int(77),int(72),int(83),int(-1),int(73),int(79),int(80),int(-1),int(84),int(80),int(79),int(-1),int(86),int(75),int(81),int(-1),int(83),int(72),int(82),int(-1),int(82),int(88),int(83),int(-1),int(70),int(87),int(82),int(-1),int(81),int(85),int(86),int(-1),int(89),int(80),int(84),int(-1),int(89),int(85),int(80),int(-1),int(90),int(86),int(85),int(-1),int(90),int(87),int(86),int(-1),int(89),int(83),int(88),int(-1),int(88),int(90),int(89),int(-1),int(85),int(89),int(90),int(-1),int(50),int(45),int(5),int(-1),int(45),int(40),int(5),int(-1),int(10),int(8),int(11),int(-1),int(8),int(12),int(11),int(-1),int(18),int(22),int(10),int(-1),int(22),int(14),int(10),int(-1),int(57),int(66),int(51),int(-1),int(66),int(61),int(51),int(-1),int(51),int(58),int(48),int(-1),int(58),int(52),int(48),int(-1),int(48),int(53),int(46),int(-1),int(53),int(54),int(46),int(-1),int(76),int(70),int(68),int(-1),int(70),int(62),int(68),int(-1),int(29),int(32),int(28),int(-1),int(28),int(32),int(31),int(-1),int(32),int(35),int(31),int(-1),int(85),int(81),int(80),int(-1),int(81),int(73),int(80),int(-1),int(81),int(74),int(73),int(-1),int(39),int(37),int(38),int(-1),int(37),int(34),int(38),int(-1),int(82),int(87),int(88),int(-1),int(87),int(90),int(88),int(-1),int(87),int(78),int(86),int(-1),int(78),int(75),int(86),int(-1),int(61),int(66),int(67),int(-1),int(66),int(75),int(67),int(-1),int(22),int(18),int(15),int(-1),int(23),int(30),int(15),int(-1),int(30),int(22),int(15),int(-1),int(13),int(12),int(7),int(-1),int(12),int(6),int(7),int(-1),int(46),int(54),int(47),int(-1),int(54),int(55),int(47),int(-1),int(87),int(76),int(78),int(-1),int(87),int(70),int(76),int(-1)], creaseAngle=1.14, 
coord=
Coordinate(point=[(0,1.06,0.0218),(0.0561,1.07,0.00726),(0.0851,1.07,-0.0115),(0.104,1.07,-0.0497),(0.0851,1.07,-0.0851),(0.032,1.06,-0.0985),(0.0873,1.04,0.0078),(0.033,1.04,0.0395),(0.123,1.05,-0.0405),(0.0609,1.02,-0.106),(0.0894,0.996,-0.106),(0.143,1,-0.0309),(0.117,1,0.0164),(0.0314,0.999,0.0502),(0.0314,0.96,-0.13),(0.156,0.966,-0.0405),(0.156,0.968,-0.00724),(0.0341,0.954,0.0513),(0.115,0.96,-0.0916),(0.121,0.926,0.0352),(0.0357,0.92,0.0497),(0.0314,0.91,-0.146),(0.0991,0.91,-0.131),(0.169,0.883,-0.0448),(0.169,0.885,-0.00939),(0.123,0.873,0.0384),(0.0926,0.872,0.047),(0.0325,0.873,0.0287),(0.0293,0.866,-0.142),(0.102,0.869,-0.131),(0.129,0.868,-0.103),(0.0314,0.84,-0.125),(0.101,0.844,-0.122),(0.133,0.846,-0.0878),(0.0653,0.835,0.0132),(0.0615,0.824,-0.111),(0.0985,0.823,-0.101),(0.132,0.826,-0.0448),(0.0609,0.821,-0.0158),(0.0599,0.812,-0.0545),(0,1.08,-0.0266),(-0.0561,1.07,0.00726),(-0.0851,1.07,-0.0115),(-0.104,1.07,-0.0497),(-0.0851,1.07,-0.0851),(-0.032,1.06,-0.0985),(-0.0873,1.04,0.0078),(-0.033,1.04,0.0395),(-0.123,1.05,-0.0405),(-0.0609,1.02,-0.106),(0,1.02,-0.108),(-0.0894,0.996,-0.106),(-0.143,1,-0.0309),(-0.144,1,-0.011),(-0.117,1,0.0164),(-0.0314,0.999,0.0502),(0,0.961,-0.123),(-0.0314,0.96,-0.13),(-0.156,0.966,-0.0405),(-0.156,0.968,-0.00724),(-0.0341,0.954,0.0513),(-0.115,0.96,-0.0916),(-0.121,0.926,0.0352),(-0.0357,0.92,0.0497),(0,0.91,-0.127),(-0.0314,0.91,-0.146),(-0.0991,0.91,-0.131),(-0.167,0.911,-0.0448),(-0.167,0.912,-0.00671),(0,0.883,-0.129),(-0.123,0.873,0.0384),(-0.0926,0.872,0.047),(-0.0325,0.873,0.0287),(-0.0293,0.866,-0.142),(-0.102,0.869,-0.131),(-0.129,0.868,-0.103),(-0.166,0.863,-0.0148),(0,0.863,-0.00456),(-0.166,0.862,-0.0459),(0,0.858,-0.1),(-0.0314,0.84,-0.125),(-0.101,0.844,-0.122),(-0.0653,0.835,0.0132),(0,0.839,-0.0217),(0,0.835,-0.0867),(-0.0615,0.824,-0.111),(-0.0985,0.823,-0.101),(-0.132,0.826,-0.0448),(-0.0609,0.821,-0.0158),(0,0.831,-0.0626),(-0.0599,0.812,-0.0545)])))])
]),
ProtoInstance(name="Joint", DEF="hanim_l_hip", fieldValue=[fieldValue(name="name", value="l_hip"),
fieldValue(name="center", value=[0.122,0.888271,-0.0693267]),
fieldValue(name="children", children=[
ProtoInstance(name="Segment", DEF="hanim_l_thigh", fieldValue=[fieldValue(name="name", value="l_thigh"),
fieldValue(name="children", children=[
Shape(
appearance=
Appearance(
material=
Material(USE="Pants_Color")), 
geometry=
IndexedFaceSet(coordIndex=[int(0),int(4),int(5),int(-1),int(3),int(4),int(0),int(-1),int(0),int(7),int(1),int(-1),int(0),int(8),int(7),int(-1),int(0),int(6),int(8),int(-1),int(0),int(5),int(6),int(-1),int(0),int(2),int(3),int(-1),int(0),int(1),int(2),int(-1),int(9),int(2),int(1),int(-1),int(10),int(3),int(2),int(-1),int(11),int(4),int(3),int(-1),int(12),int(5),int(4),int(-1),int(13),int(6),int(5),int(-1),int(15),int(7),int(8),int(-1),int(9),int(1),int(7),int(-1),int(7),int(15),int(9),int(-1),int(8),int(14),int(15),int(-1),int(5),int(16),int(13),int(-1),int(5),int(12),int(16),int(-1),int(4),int(11),int(12),int(-1),int(3),int(10),int(11),int(-1),int(2),int(9),int(10),int(-1),int(20),int(13),int(16),int(-1),int(18),int(11),int(10),int(-1),int(19),int(12),int(11),int(-1),int(20),int(16),int(12),int(-1),int(23),int(15),int(14),int(-1),int(15),int(23),int(24),int(-1),int(12),int(19),int(20),int(-1),int(11),int(18),int(19),int(-1),int(10),int(17),int(18),int(-1),int(26),int(18),int(17),int(-1),int(27),int(19),int(18),int(-1),int(27),int(20),int(19),int(-1),int(28),int(21),int(20),int(-1),int(29),int(23),int(22),int(-1),int(23),int(29),int(30),int(-1),int(20),int(32),int(28),int(-1),int(20),int(27),int(32),int(-1),int(18),int(26),int(27),int(-1),int(17),int(25),int(26),int(-1),int(25),int(31),int(30),int(-1),int(30),int(29),int(26),int(-1),int(30),int(26),int(25),int(-1),int(29),int(28),int(27),int(-1),int(29),int(27),int(26),int(-1),int(28),int(32),int(27),int(-1),int(22),int(23),int(14),int(-1),int(20),int(21),int(13),int(-1),int(21),int(22),int(13),int(-1),int(22),int(14),int(13),int(-1),int(9),int(15),int(24),int(-1),int(10),int(9),int(17),int(-1),int(9),int(24),int(17),int(-1),int(6),int(13),int(8),int(-1),int(13),int(14),int(8),int(-1),int(28),int(29),int(21),int(-1),int(29),int(22),int(21),int(-1),int(24),int(31),int(17),int(-1),int(31),int(25),int(17),int(-1),int(30),int(31),int(23),int(-1),int(31),int(24),int(23),int(-1)], creaseAngle=1.32, 
coord=
Coordinate(point=[(0.0969,0.804,-0.0486),(0.101,0.876,0.0336),(0.17,0.894,-0.00778),(0.17,0.891,-0.076),(0.124,0.858,-0.129),(0.076,0.843,-0.143),(0.025,0.819,-0.0889),(0.0507,0.847,0.0196),(0.00349,0.826,-0.0287),(0.0991,0.808,0.0406),(0.161,0.814,-0.00187),(0.165,0.808,-0.0755),(0.122,0.788,-0.126),(0.00993,0.762,-0.0937),(0.00993,0.762,-0.0309),(0.0491,0.777,0.0185),(0.0755,0.766,-0.139),(0.13,0.597,-0.00618),(0.132,0.6,-0.0593),(0.108,0.603,-0.105),(0.0722,0.601,-0.118),(0.0314,0.59,-0.0953),(0.0239,0.566,-0.0427),(0.047,0.566,0.0051),(0.0878,0.581,0.0217),(0.114,0.499,-0.0132),(0.116,0.488,-0.061),(0.103,0.567,-0.0991),(0.0362,0.557,-0.0926),(0.025,0.486,-0.047),(0.0507,0.497,-0.00188),(0.0862,0.513,0.018),(0.0733,0.579,-0.108)])))])
]),
ProtoInstance(name="Joint", DEF="hanim_l_knee", fieldValue=[fieldValue(name="name", value="l_knee"),
fieldValue(name="center", value=[0.0738,0.517,-0.0284]),
fieldValue(name="children", children=[
ProtoInstance(name="Segment", DEF="hanim_l_calf", fieldValue=[fieldValue(name="name", value="l_calf"),
fieldValue(name="children", children=[
Shape(
appearance=
Appearance(
material=
Material(USE="Pants_Color")), 
geometry=
IndexedFaceSet(coordIndex=[int(2),int(1),int(0),int(-1),int(2),int(3),int(1),int(-1),int(2),int(4),int(3),int(-1),int(2),int(5),int(4),int(-1),int(2),int(6),int(5),int(-1),int(2),int(7),int(6),int(-1),int(2),int(8),int(7),int(-1),int(2),int(0),int(8),int(-1),int(9),int(8),int(0),int(-1),int(10),int(6),int(7),int(-1),int(11),int(5),int(6),int(-1),int(12),int(4),int(5),int(-1),int(12),int(3),int(4),int(-1),int(13),int(1),int(3),int(-1),int(1),int(13),int(14),int(-1),int(3),int(12),int(13),int(-1),int(5),int(11),int(12),int(-1),int(6),int(10),int(11),int(-1),int(8),int(9),int(15),int(-1),int(22),int(13),int(12),int(-1),int(13),int(22),int(14),int(-1),int(17),int(15),int(9),int(-1),int(20),int(12),int(11),int(-1),int(21),int(22),int(12),int(-1),int(23),int(9),int(14),int(-1),int(9),int(23),int(16),int(-1),int(14),int(22),int(23),int(-1),int(12),int(20),int(21),int(-1),int(15),int(17),int(18),int(-1),int(9),int(16),int(17),int(-1),int(24),int(17),int(16),int(-1),int(25),int(18),int(17),int(-1),int(26),int(19),int(18),int(-1),int(27),int(20),int(19),int(-1),int(28),int(21),int(20),int(-1),int(29),int(22),int(21),int(-1),int(30),int(23),int(22),int(-1),int(31),int(16),int(23),int(-1),int(23),int(30),int(31),int(-1),int(22),int(29),int(30),int(-1),int(21),int(28),int(29),int(-1),int(20),int(27),int(28),int(-1),int(19),int(26),int(27),int(-1),int(18),int(25),int(26),int(-1),int(17),int(24),int(25),int(-1),int(16),int(31),int(24),int(-1),int(33),int(26),int(25),int(-1),int(36),int(29),int(28),int(-1),int(37),int(31),int(30),int(-1),int(29),int(36),int(30),int(-1),int(25),int(24),int(33),int(-1),int(31),int(37),int(24),int(-1),int(32),int(33),int(24),int(-1),int(24),int(37),int(32),int(-1),int(38),int(37),int(30),int(-1),int(30),int(36),int(38),int(-1),int(41),int(33),int(32),int(-1),int(42),int(39),int(34),int(-1),int(44),int(36),int(35),int(-1),int(45),int(38),int(36),int(-1),int(46),int(37),int(38),int(-1),int(38),int(45),int(46),int(-1),int(36),int(44),int(45),int(-1),int(35),int(43),int(44),int(-1),int(39),int(42),int(47),int(-1),int(32),int(40),int(41),int(-1),int(40),int(46),int(45),int(-1),int(41),int(40),int(45),int(-1),int(41),int(45),int(44),int(-1),int(44),int(43),int(42),int(-1),int(44),int(42),int(41),int(-1),int(43),int(47),int(42),int(-1),int(39),int(35),int(28),int(-1),int(35),int(36),int(28),int(-1),int(34),int(39),int(27),int(-1),int(39),int(28),int(27),int(-1),int(33),int(34),int(26),int(-1),int(34),int(27),int(26),int(-1),int(33),int(41),int(34),int(-1),int(41),int(42),int(34),int(-1),int(40),int(32),int(46),int(-1),int(32),int(37),int(46),int(-1),int(10),int(19),int(11),int(-1),int(19),int(20),int(11),int(-1),int(14),int(9),int(1),int(-1),int(9),int(0),int(1),int(-1),int(8),int(15),int(7),int(-1),int(7),int(15),int(10),int(-1),int(15),int(19),int(10),int(-1),int(15),int(18),int(19),int(-1),int(43),int(35),int(47),int(-1),int(35),int(39),int(47),int(-1)], creaseAngle=1.57, 
coord=
Coordinate(point=[(0.0883,0.532,-0.00349),(0.0609,0.533,-0.00833),(0.0814,0.55,-0.0395),(0.0529,0.536,-0.0368),(0.0577,0.544,-0.0577),(0.0722,0.546,-0.0717),(0.0975,0.54,-0.0647),(0.105,0.539,-0.0438),(0.104,0.539,-0.0223),(0.0862,0.506,0.0158),(0.101,0.51,-0.0798),(0.0706,0.51,-0.101),(0.0406,0.513,-0.0744),(0.0368,0.51,-0.0357),(0.0556,0.506,-0.000272),(0.117,0.508,-0.0169),(0.0878,0.361,-0.0126),(0.123,0.363,-0.04),(0.123,0.363,-0.0663),(0.107,0.367,-0.107),(0.0588,0.365,-0.122),(0.0228,0.358,-0.0926),(0.0239,0.358,-0.0475),(0.0497,0.358,-0.0234),(0.118,0.311,-0.0411),(0.118,0.309,-0.0685),(0.105,0.31,-0.108),(0.0572,0.308,-0.123),(0.0201,0.309,-0.0937),(0.0191,0.311,-0.0508),(0.0475,0.307,-0.0282),(0.0883,0.309,-0.018),(0.0959,0.124,-0.04),(0.0905,0.12,-0.0647),(0.0738,0.117,-0.0814),(0.0373,0.121,-0.0636),(0.0416,0.124,-0.0416),(0.0744,0.13,-0.0212),(0.0561,0.13,-0.0245),(0.0529,0.121,-0.0873),(0.0948,0.0897,-0.0368),(0.0916,0.0779,-0.0604),(0.0717,0.0854,-0.0765),(0.0406,0.0918,-0.0626),(0.0384,0.0881,-0.0363),(0.054,0.0972,-0.0175),(0.0765,0.11,-0.0169),(0.0486,0.0999,-0.0835)])))])
]),
ProtoInstance(name="Joint", DEF="hanim_l_ankle", fieldValue=[fieldValue(name="name", value="l_ankle"),
fieldValue(name="center", value=[0.0645,0.0719,-0.048]),
fieldValue(name="children", children=[
ProtoInstance(name="Segment", DEF="hanim_l_hindfoot", fieldValue=[fieldValue(name="name", value="l_hindfoot"),
fieldValue(name="children", children=[
Shape(
appearance=
Appearance(
material=
Material(DEF="Shoe_Color", ambientIntensity=0.25, diffuseColor=((0.753,1,0.243)))), 
geometry=
IndexedFaceSet(coordIndex=[int(2),int(1),int(0),int(-1),int(4),int(3),int(1),int(-1),int(2),int(4),int(1),int(-1),int(3),int(6),int(5),int(-1),int(1),int(3),int(5),int(-1),int(6),int(8),int(7),int(-1),int(5),int(6),int(7),int(-1),int(8),int(10),int(9),int(-1),int(7),int(8),int(9),int(-1),int(10),int(12),int(11),int(-1),int(9),int(10),int(11),int(-1),int(12),int(14),int(13),int(-1),int(11),int(12),int(13),int(-1),int(14),int(16),int(15),int(-1),int(13),int(14),int(15),int(-1),int(16),int(18),int(17),int(-1),int(15),int(16),int(17),int(-1),int(18),int(20),int(19),int(-1),int(17),int(18),int(19),int(-1),int(20),int(22),int(21),int(-1),int(19),int(20),int(21),int(-1),int(22),int(24),int(23),int(-1),int(21),int(22),int(23),int(-1),int(24),int(25),int(0),int(-1),int(23),int(24),int(0),int(-1),int(25),int(4),int(2),int(-1),int(0),int(25),int(2),int(-1),int(18),int(26),int(20),int(-1),int(16),int(26),int(18),int(-1),int(27),int(26),int(16),int(-1),int(14),int(27),int(16),int(-1),int(12),int(27),int(14),int(-1),int(28),int(27),int(12),int(-1),int(29),int(28),int(12),int(-1),int(10),int(29),int(12),int(-1),int(8),int(29),int(10),int(-1),int(6),int(37),int(8),int(-1),int(24),int(30),int(25),int(-1),int(31),int(30),int(24),int(-1),int(22),int(31),int(24),int(-1),int(32),int(31),int(22),int(-1),int(20),int(32),int(22),int(-1),int(33),int(32),int(20),int(-1),int(26),int(33),int(20),int(-1),int(34),int(33),int(26),int(-1),int(27),int(34),int(26),int(-1),int(35),int(34),int(27),int(-1),int(28),int(35),int(27),int(-1),int(29),int(35),int(28),int(-1),int(36),int(35),int(29),int(-1),int(8),int(36),int(29),int(-1),int(37),int(36),int(8),int(-1),int(6),int(38),int(37),int(-1),int(3),int(38),int(6),int(-1),int(39),int(38),int(3),int(-1),int(30),int(39),int(25),int(-1),int(41),int(40),int(30),int(-1),int(31),int(41),int(30),int(-1),int(42),int(41),int(31),int(-1),int(32),int(42),int(31),int(-1),int(43),int(42),int(32),int(-1),int(33),int(43),int(32),int(-1),int(44),int(43),int(33),int(-1),int(34),int(44),int(33),int(-1),int(45),int(44),int(34),int(-1),int(35),int(45),int(34),int(-1),int(46),int(45),int(35),int(-1),int(36),int(46),int(35),int(-1),int(47),int(46),int(36),int(-1),int(37),int(47),int(36),int(-1),int(38),int(47),int(37),int(-1),int(48),int(47),int(38),int(-1),int(49),int(48),int(38),int(-1),int(39),int(49),int(38),int(-1),int(40),int(49),int(39),int(-1),int(30),int(40),int(39),int(-1),int(48),int(49),int(50),int(-1),int(47),int(48),int(50),int(-1),int(46),int(47),int(50),int(-1),int(45),int(46),int(50),int(-1),int(44),int(45),int(50),int(-1),int(43),int(44),int(50),int(-1),int(42),int(43),int(50),int(-1),int(41),int(42),int(50),int(-1),int(40),int(41),int(50),int(-1),int(49),int(40),int(50),int(-1),int(11),int(13),int(15),int(-1),int(11),int(15),int(17),int(-1),int(9),int(11),int(17),int(-1),int(9),int(17),int(19),int(-1),int(7),int(9),int(19),int(-1),int(7),int(19),int(21),int(-1),int(5),int(7),int(21),int(-1),int(5),int(21),int(23),int(-1),int(5),int(23),int(0),int(-1),int(1),int(5),int(0),int(-1),int(3),int(4),int(39),int(-1),int(4),int(25),int(39),int(-1)], creaseAngle=1.57, 
coord=
Coordinate(point=[(0.0529,0,-0.0923),(0.0863,0,-0.0862),(0.0727,0,-0.0994),(0.0863,0.0219,-0.0862),(0.0727,0.0219,-0.0994),(0.1,0,-0.0594),(0.1,0.0219,-0.0594),(0.113,0,0.0645),(0.113,0.0219,0.0645),(0.112,0,0.117),(0.112,0.0156,0.117),(0.0701,0,0.146),(0.0701,0.0156,0.146),(0.0468,0,0.153),(0.0468,0.0156,0.153),(0.0215,0,0.146),(0.0215,0.0156,0.146),(0.0165,0,0.125),(0.0165,0.0156,0.125),(0.0211,0,0.0377),(0.0211,0.0219,0.0377),(0.0393,0,-0.0129),(0.0393,0.0219,-0.0129),(0.0433,0,-0.0534),(0.0433,0.0219,-0.0534),(0.0529,0.0219,-0.0923),(0.0305,0.0253,0.0938),(0.0505,0.0253,0.099),(0.0854,0.0253,0.0834),(0.102,0.0253,0.0707),(0.0568,0.0573,-0.0918),(0.0492,0.0573,-0.0497),(0.0435,0.0573,-0.0225),(0.0442,0.0573,0.0235),(0.0623,0.0573,0.0366),(0.0911,0.0573,0.0159),(0.0962,0.0573,-0.0121),(0.0911,0.0573,-0.0482),(0.0758,0.0573,-0.0899),(0.0676,0.0573,-0.0962),(0.0578,0.0953,-0.0896),(0.0489,0.0953,-0.0757),(0.0447,0.0953,-0.0432),(0.0451,0.0953,-0.0128),(0.0624,0.0953,-0.00466),(0.0857,0.0953,-0.0134),(0.0953,0.0953,-0.038),(0.0843,0.0953,-0.0803),(0.0761,0.0953,-0.0889),(0.0682,0.0953,-0.0929),(0.0675,0.13,-0.0608)]))),
Transform(scale=((0.015,0.015,0.015)), children=[
Transform(rotation=((0,0,1,1.57)), translation=((6,-0.5,-7.5)), children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0.753,1,0.243)))), 
geometry=
Extrusion(DEF="Finl", ccw=False, creaseAngle=3.14, crossSection=[(-1,0),(-0.8,2),(-0.7,3),(0,5.2),(0.7,3),(0.8,2),(1,0),(0.8,-2),(0.7,-3),(0,-5.2),(-0.7,-3),(-0.8,-2),(-1,0)], scale=((0.25,0.25),(0.5,0.75),(0.5,1.2),(0.5,1.35),(0.5,1.35),(0.5,1.35),(0.5,1.35),(0.5,1.35),(0.5,1.35)), spine=[(0,0,1),(0,0,5),(0,0,8),(0,0,12),(0,0,15),(0.5,0,18),(1.5,0,25),(2.5,0,30),(4,0,34)]))])])])
])])
])])
])])
]),
ProtoInstance(name="Joint", DEF="hanim_r_hip", fieldValue=[fieldValue(name="name", value="r_hip"),
fieldValue(name="center", value=[-0.11,0.892362,-0.0732533]),
fieldValue(name="children", children=[
ProtoInstance(name="Segment", DEF="hanim_r_thigh", fieldValue=[fieldValue(name="name", value="r_thigh"),
fieldValue(name="children", children=[
Shape(
appearance=
Appearance(
material=
Material(USE="Pants_Color")), 
geometry=
IndexedFaceSet(coordIndex=[int(5),int(4),int(0),int(-1),int(0),int(4),int(3),int(-1),int(1),int(7),int(0),int(-1),int(7),int(8),int(0),int(-1),int(8),int(6),int(0),int(-1),int(6),int(5),int(0),int(-1),int(3),int(2),int(0),int(-1),int(2),int(1),int(0),int(-1),int(1),int(2),int(9),int(-1),int(2),int(3),int(10),int(-1),int(3),int(4),int(11),int(-1),int(4),int(5),int(12),int(-1),int(5),int(6),int(13),int(-1),int(8),int(7),int(15),int(-1),int(7),int(1),int(9),int(-1),int(9),int(15),int(7),int(-1),int(15),int(14),int(8),int(-1),int(13),int(16),int(5),int(-1),int(16),int(12),int(5),int(-1),int(12),int(11),int(4),int(-1),int(11),int(10),int(3),int(-1),int(10),int(9),int(2),int(-1),int(12),int(16),int(20),int(-1),int(13),int(14),int(22),int(-1),int(14),int(15),int(23),int(-1),int(24),int(23),int(15),int(-1),int(23),int(22),int(14),int(-1),int(20),int(19),int(12),int(-1),int(17),int(18),int(26),int(-1),int(18),int(19),int(27),int(-1),int(19),int(20),int(27),int(-1),int(20),int(21),int(28),int(-1),int(22),int(23),int(29),int(-1),int(30),int(29),int(23),int(-1),int(27),int(26),int(18),int(-1),int(26),int(25),int(17),int(-1),int(30),int(31),int(25),int(-1),int(25),int(26),int(29),int(-1),int(25),int(29),int(30),int(-1),int(26),int(27),int(28),int(-1),int(26),int(28),int(29),int(-1),int(27),int(20),int(28),int(-1),int(24),int(15),int(9),int(-1),int(22),int(21),int(13),int(-1),int(29),int(28),int(22),int(-1),int(28),int(21),int(22),int(-1),int(24),int(31),int(23),int(-1),int(31),int(30),int(23),int(-1),int(25),int(31),int(17),int(-1),int(31),int(24),int(17),int(-1),int(17),int(24),int(10),int(-1),int(24),int(9),int(10),int(-1),int(18),int(10),int(11),int(-1),int(18),int(17),int(10),int(-1),int(18),int(12),int(19),int(-1),int(18),int(11),int(12),int(-1),int(21),int(20),int(13),int(-1),int(20),int(16),int(13),int(-1),int(14),int(13),int(8),int(-1),int(13),int(6),int(8),int(-1)], creaseAngle=1.61, 
coord=
Coordinate(point=[(-0.0969,0.804,-0.0486),(-0.101,0.876,0.0336),(-0.17,0.894,-0.00778),(-0.17,0.891,-0.076),(-0.124,0.858,-0.129),(-0.076,0.843,-0.143),(-0.025,0.819,-0.0889),(-0.0507,0.847,0.0196),(-0.00349,0.826,-0.0287),(-0.0991,0.808,0.0406),(-0.161,0.814,-0.00187),(-0.165,0.808,-0.0755),(-0.122,0.788,-0.126),(-0.00993,0.762,-0.0937),(-0.00993,0.762,-0.0309),(-0.0491,0.777,0.0185),(-0.0755,0.766,-0.139),(-0.13,0.597,-0.00618),(-0.132,0.6,-0.0593),(-0.108,0.603,-0.105),(-0.0722,0.601,-0.118),(-0.0314,0.59,-0.0953),(-0.0239,0.566,-0.0427),(-0.047,0.566,0.0051),(-0.0878,0.581,0.0217),(-0.114,0.499,-0.0132),(-0.116,0.488,-0.061),(-0.103,0.567,-0.0991),(-0.0362,0.557,-0.0926),(-0.025,0.486,-0.047),(-0.0507,0.497,-0.00188),(-0.0862,0.513,0.018)])))])
]),
ProtoInstance(name="Joint", DEF="hanim_r_knee", fieldValue=[fieldValue(name="name", value="r_knee"),
fieldValue(name="center", value=[-0.0699,0.51,-0.0166]),
fieldValue(name="children", children=[
ProtoInstance(name="Segment", DEF="hanim_r_calf", fieldValue=[fieldValue(name="name", value="r_calf"),
fieldValue(name="children", children=[
Shape(
appearance=
Appearance(
material=
Material(USE="Pants_Color")), 
geometry=
IndexedFaceSet(coordIndex=[int(14),int(25),int(18),int(-1),int(25),int(32),int(18),int(-1),int(32),int(27),int(18),int(-1),int(27),int(22),int(18),int(-1),int(22),int(10),int(18),int(-1),int(10),int(6),int(18),int(-1),int(6),int(8),int(18),int(-1),int(8),int(14),int(18),int(-1),int(14),int(8),int(17),int(-1),int(6),int(10),int(9),int(-1),int(10),int(22),int(24),int(-1),int(22),int(27),int(39),int(-1),int(27),int(32),int(39),int(-1),int(32),int(25),int(42),int(-1),int(25),int(14),int(30),int(-1),int(17),int(30),int(14),int(-1),int(30),int(42),int(25),int(-1),int(42),int(39),int(32),int(-1),int(39),int(24),int(22),int(-1),int(24),int(9),int(10),int(-1),int(4),int(17),int(8),int(-1),int(39),int(42),int(43),int(-1),int(30),int(43),int(42),int(-1),int(17),int(4),int(1),int(-1),int(24),int(39),int(26),int(-1),int(39),int(43),int(44),int(-1),int(30),int(17),int(34),int(-1),int(16),int(34),int(17),int(-1),int(34),int(43),int(30),int(-1),int(44),int(26),int(39),int(-1),int(0),int(1),int(4),int(-1),int(1),int(16),int(17),int(-1),int(16),int(1),int(3),int(-1),int(1),int(0),int(2),int(-1),int(0),int(5),int(7),int(-1),int(5),int(26),int(28),int(-1),int(26),int(44),int(45),int(-1),int(44),int(43),int(46),int(-1),int(43),int(34),int(36),int(-1),int(34),int(16),int(15),int(-1),int(15),int(36),int(34),int(-1),int(36),int(46),int(43),int(-1),int(46),int(45),int(44),int(-1),int(45),int(28),int(26),int(-1),int(28),int(7),int(5),int(-1),int(7),int(2),int(0),int(-1),int(2),int(3),int(1),int(-1),int(3),int(15),int(16),int(-1),int(45),int(46),int(37),int(-1),int(36),int(15),int(20),int(-1),int(36),int(37),int(46),int(-1),int(13),int(2),int(7),int(-1),int(3),int(20),int(15),int(-1),int(3),int(2),int(13),int(-1),int(36),int(20),int(29),int(-1),int(29),int(37),int(36),int(-1),int(13),int(21),int(23),int(-1),int(21),int(33),int(23),int(-1),int(41),int(37),int(40),int(-1),int(37),int(29),int(31),int(-1),int(29),int(20),int(19),int(-1),int(19),int(31),int(29),int(-1),int(31),int(40),int(37),int(-1),int(40),int(38),int(41),int(-1),int(35),int(23),int(33),int(-1),int(23),int(12),int(13),int(-1),int(12),int(11),int(13),int(-1),int(31),int(19),int(11),int(-1),int(40),int(31),int(11),int(-1),int(40),int(11),int(12),int(-1),int(12),int(23),int(38),int(-1),int(12),int(38),int(40),int(-1),int(23),int(35),int(38),int(-1),int(28),int(21),int(7),int(-1),int(21),int(13),int(7),int(-1),int(45),int(33),int(28),int(-1),int(33),int(21),int(28),int(-1),int(33),int(45),int(41),int(-1),int(45),int(37),int(41),int(-1),int(33),int(41),int(35),int(-1),int(41),int(38),int(35),int(-1),int(20),int(3),int(47),int(-1),int(11),int(19),int(47),int(-1),int(19),int(20),int(47),int(-1),int(13),int(47),int(3),int(-1),int(13),int(11),int(47),int(-1),int(4),int(8),int(6),int(-1),int(26),int(5),int(24),int(-1),int(5),int(9),int(24),int(-1),int(6),int(9),int(4),int(-1),int(9),int(0),int(4),int(-1),int(9),int(5),int(0),int(-1)], creaseAngle=1.57, 
coord=
Coordinate(point=[(-0.123,0.363,-0.0663),(-0.123,0.363,-0.04),(-0.118,0.309,-0.0685),(-0.118,0.311,-0.0411),(-0.117,0.508,-0.0169),(-0.107,0.367,-0.107),(-0.105,0.539,-0.0438),(-0.105,0.31,-0.108),(-0.104,0.539,-0.0223),(-0.101,0.51,-0.0798),(-0.0975,0.54,-0.0647),(-0.0948,0.0897,-0.0368),(-0.0916,0.0779,-0.0604),(-0.0905,0.12,-0.0647),(-0.0883,0.532,-0.00349),(-0.0883,0.309,-0.018),(-0.0878,0.361,-0.0126),(-0.0862,0.506,0.0158),(-0.0814,0.55,-0.0395),(-0.0765,0.11,-0.0169),(-0.0744,0.13,-0.0212),(-0.0738,0.117,-0.0814),(-0.0722,0.546,-0.0717),(-0.0717,0.0854,-0.0765),(-0.0706,0.51,-0.101),(-0.0609,0.533,-0.00833),(-0.0588,0.365,-0.122),(-0.0577,0.544,-0.0577),(-0.0572,0.308,-0.123),(-0.0561,0.13,-0.0245),(-0.0556,0.506,-0.000272),(-0.054,0.0972,-0.0175),(-0.0529,0.536,-0.0368),(-0.0529,0.121,-0.0873),(-0.0497,0.358,-0.0234),(-0.0486,0.0999,-0.0835),(-0.0475,0.307,-0.0282),(-0.0416,0.124,-0.0416),(-0.0406,0.0918,-0.0626),(-0.0406,0.513,-0.0744),(-0.0384,0.0881,-0.0363),(-0.0373,0.121,-0.0636),(-0.0368,0.51,-0.0357),(-0.0239,0.358,-0.0475),(-0.0228,0.358,-0.0926),(-0.0201,0.309,-0.0937),(-0.0191,0.311,-0.0508),(-0.0985,0.125,-0.0375)])))])
]),
ProtoInstance(name="Joint", DEF="hanim_r_ankle", fieldValue=[fieldValue(name="name", value="r_ankle"),
fieldValue(name="center", value=[-0.064,0.0753,-0.0412]),
fieldValue(name="children", children=[
ProtoInstance(name="Segment", DEF="hanim_r_hindfoot", fieldValue=[fieldValue(name="name", value="r_hindfoot"),
fieldValue(name="children", children=[
Shape(
appearance=
Appearance(
material=
Material(USE="Shoe_Color")), 
geometry=
IndexedFaceSet(coordIndex=[int(6),int(50),int(0),int(-1),int(50),int(8),int(7),int(-1),int(50),int(7),int(0),int(-1),int(1),int(9),int(8),int(-1),int(1),int(8),int(50),int(-1),int(49),int(10),int(9),int(-1),int(49),int(9),int(1),int(-1),int(46),int(11),int(10),int(-1),int(46),int(10),int(49),int(-1),int(2),int(12),int(11),int(-1),int(2),int(11),int(46),int(-1),int(3),int(13),int(12),int(-1),int(3),int(12),int(2),int(-1),int(4),int(14),int(13),int(-1),int(4),int(13),int(3),int(-1),int(45),int(14),int(4),int(-1),int(47),int(15),int(45),int(-1),int(19),int(15),int(47),int(-1),int(48),int(18),int(19),int(-1),int(5),int(16),int(18),int(-1),int(5),int(18),int(48),int(-1),int(6),int(17),int(16),int(-1),int(6),int(16),int(5),int(-1),int(0),int(7),int(17),int(-1),int(0),int(17),int(6),int(-1),int(14),int(20),int(21),int(-1),int(14),int(21),int(13),int(-1),int(13),int(21),int(12),int(-1),int(12),int(21),int(22),int(-1),int(12),int(22),int(11),int(-1),int(11),int(22),int(10),int(-1),int(17),int(23),int(16),int(-1),int(16),int(23),int(24),int(-1),int(16),int(24),int(18),int(-1),int(18),int(24),int(25),int(-1),int(18),int(25),int(19),int(-1),int(19),int(25),int(26),int(-1),int(19),int(26),int(15),int(-1),int(15),int(26),int(20),int(-1),int(20),int(26),int(27),int(-1),int(20),int(27),int(21),int(-1),int(21),int(27),int(28),int(-1),int(21),int(28),int(22),int(-1),int(22),int(28),int(29),int(-1),int(10),int(30),int(9),int(-1),int(9),int(30),int(31),int(-1),int(9),int(31),int(8),int(-1),int(8),int(31),int(32),int(-1),int(17),int(32),int(23),int(-1),int(23),int(33),int(34),int(-1),int(23),int(34),int(35),int(-1),int(23),int(35),int(24),int(-1),int(24),int(35),int(36),int(-1),int(24),int(36),int(25),int(-1),int(25),int(36),int(37),int(-1),int(25),int(37),int(26),int(-1),int(26),int(37),int(38),int(-1),int(26),int(38),int(27),int(-1),int(27),int(38),int(39),int(-1),int(27),int(39),int(28),int(-1),int(28),int(39),int(40),int(-1),int(28),int(40),int(29),int(-1),int(29),int(40),int(41),int(-1),int(29),int(41),int(30),int(-1),int(30),int(41),int(42),int(-1),int(30),int(42),int(31),int(-1),int(31),int(42),int(43),int(-1),int(31),int(43),int(32),int(-1),int(32),int(43),int(33),int(-1),int(32),int(33),int(23),int(-1),int(44),int(43),int(42),int(-1),int(44),int(42),int(41),int(-1),int(44),int(41),int(40),int(-1),int(44),int(40),int(39),int(-1),int(44),int(39),int(38),int(-1),int(44),int(38),int(37),int(-1),int(44),int(37),int(36),int(-1),int(44),int(36),int(35),int(-1),int(44),int(35),int(34),int(-1),int(44),int(34),int(33),int(-1),int(44),int(33),int(43),int(-1),int(4),int(3),int(2),int(-1),int(45),int(4),int(2),int(-1),int(45),int(2),int(46),int(-1),int(47),int(45),int(46),int(-1),int(48),int(46),int(49),int(-1),int(5),int(48),int(49),int(-1),int(5),int(49),int(1),int(-1),int(6),int(5),int(1),int(-1),int(6),int(1),int(50),int(-1),int(30),int(10),int(29),int(-1),int(10),int(22),int(29),int(-1),int(17),int(7),int(32),int(-1),int(7),int(8),int(32),int(-1),int(19),int(47),int(48),int(-1),int(47),int(46),int(48),int(-1),int(20),int(14),int(15),int(-1),int(14),int(45),int(15),int(-1)], creaseAngle=1.57, 
coord=
Coordinate(point=[(-0.0727,0,-0.0994),(-0.1,0,-0.0594),(-0.0701,0,0.146),(-0.0468,0,0.153),(-0.0215,0,0.146),(-0.0433,0,-0.0534),(-0.0529,0,-0.0923),(-0.0727,0.0219,-0.0994),(-0.0863,0.0219,-0.0862),(-0.1,0.0219,-0.0594),(-0.108,0.0219,-0.00479),(-0.112,0.0156,0.117),(-0.0701,0.0156,0.146),(-0.0468,0.0156,0.153),(-0.0215,0.0156,0.146),(-0.0165,0.017,0.0777),(-0.0433,0.0219,-0.0534),(-0.0529,0.0219,-0.0923),(-0.0445,0.0273,-0.0189),(-0.0265,0.0253,0.0549),(-0.0305,0.0253,0.0938),(-0.069,0.0253,0.0938),(-0.102,0.0253,0.0707),(-0.0568,0.0573,-0.0918),(-0.0492,0.0573,-0.0497),(-0.0424,0.0573,-0.00142),(-0.0478,0.0573,0.0341),(-0.0623,0.0573,0.0366),(-0.0864,0.0573,0.0245),(-0.0962,0.0573,-0.0121),(-0.0845,0.0573,-0.0764),(-0.0758,0.0573,-0.0899),(-0.0676,0.0573,-0.0962),(-0.0578,0.0953,-0.0896),(-0.0489,0.0953,-0.0757),(-0.0459,0.0953,-0.0615),(-0.0435,0.0953,-0.0292),(-0.0485,0.0953,-0.00582),(-0.0624,0.0953,-0.00466),(-0.0857,0.0953,-0.0134),(-0.0953,0.0953,-0.038),(-0.0843,0.0953,-0.0803),(-0.0761,0.0953,-0.0889),(-0.0682,0.0953,-0.0929),(-0.0675,0.13,-0.0608),(-0.0165,0,0.125),(-0.112,0,0.117),(-0.0165,0,0.0777),(-0.0393,0,-0.0129),(-0.108,0,-0.00479),(-0.0863,0,-0.0862)]))),
Transform(scale=((0.015,0.015,0.015)), children=[
Transform(rotation=((0,0,1,1.57)), translation=((-5,-0.5,-7.5)), children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0.753,1,0.243)))), 
geometry=
Extrusion(DEF="Finr", ccw=False, creaseAngle=3.14, crossSection=[(-1,0),(-0.8,2),(-0.7,3),(0,5.2),(0.7,3),(0.8,2),(1,0),(0.8,-2),(0.7,-3),(0,-5.2),(-0.7,-3),(-0.8,-2),(-1,0)], scale=((0.25,0.25),(0.5,0.75),(0.5,1.2),(0.5,1.35),(0.5,1.35),(0.5,1.35),(0.5,1.35),(0.5,1.35),(0.5,1.35)), spine=[(0,0,1),(0,0,5),(0,0,8),(0,0,12),(0,0,15),(0.5,0,18),(1.5,0,25),(2.5,0,30),(4,0,34)]))])])])
])])
])])
])])
])])
]),
#Fins animation

ProximitySensor(DEF="FinTriggerProximitySensor", size=((5,5,5))),
TimeSensor(DEF="FinClock", cycleInterval=7.0, loop=True),
Group(children=[
Script(DEF="FinScript", field=[field(name="keyValueR", accessType="outputOnly", type="MFVec3f"),
field(name="keyValueL", accessType="outputOnly", type="MFVec3f"),
field(name="set_fraction", accessType="inputOnly", type="SFFloat"),
field(name="finL", accessType="inputOnly", type="SFBool"),
field(name="finR", accessType="inputOnly", type="SFBool"),
field(name="traceEnabled", accessType="initializeOnly", type="SFBool", value=True)
], 
#['', '', 'ecmascript:', '', 'var finWarpL;', 'var finWarpR;', '', 'function initialize ()', '{', '\tfinWarpL = 0;', '\tfinWarpR = 0;', '}', '', 'function finL(value, timeStamp)', '{', '\tif (value == 0)', '\t{', '\t\tfinWarpL = 0;', '\t}', '\telse', '\t{', '\t\tfinWarpL = 1;', '\t}', "\t//print ('finWarpL' + finWarpL);", '}\t\t\t ', '', 'function finR(value, timeStamp)', '{', '\tif (value == 0)', '\t{', '\t\tfinWarpR = 0;', '\t}', '\telse', '\t{', '\t\tfinWarpR = 1;', '\t}', "\t//print ('finWarpR' + finWarpR);", '}', 'function finMove(fraction, timeStamp)', ' {  \t', '\tif (finWarpL == 1)', '\t{', '\t\t// level 3 (warp outside) Left\t\t\t\t\t', '\t\tkVL7 = new SFVec3f(1.25, 0, 25);  ', '     \t\tkVL8 = new SFVec3f(2.5, 0, 30);', '      \t\tkVL9 = new SFVec3f(3.25, 0, 34);\t\t\t', '\t}\t', '\telse ', '\t{\t\t', '\t\t// level -2 (warp inside) Left\t\t\t\t\t', '\t\tkVL7 = new SFVec3f(-1.25, 0, 25);  ', '     \t\tkVL8 = new SFVec3f(-2.5, 0, 30);', '      \t\tkVL9 = new SFVec3f(-3.25, 0, 34);\t', '\t}', '', '\tif (finWarpR == 0)', '\t{\t\t', '\t\t// level  1 (warp outside ) Right    \t\t\t', '\t\tkVR7 = new SFVec3f(1.25, 0, 25);  ', '     \t\tkVR8 = new SFVec3f(2.5, 0, 30);', '      \t\tkVR9 = new SFVec3f(3.25, 0, 34);\t  \t', '\t', '\t}\t', '\telse ', '\t{\t\t', '\t\t// level  -2 ( warp inside) Right      \t\t\t\t', '\t\tkVR7 = new SFVec3f(-1.25, 0, 25);  ', '     \t\tkVR8 = new SFVec3f(-2.5, 0, 30);', '      \t\tkVR9 = new SFVec3f(-3.25, 0, 34);', '\t}', '', '\t// Left Fin (fixed spine)', '\tkVL1 = new SFVec3f(0, 0, 1);  ', '     \tkVL2 = new SFVec3f(0, 0, 5);', '      \tkVL3 = new SFVec3f(0, 0, 8);', '\tkVL4 = new SFVec3f(0, 0, 12); ', '\tkVL5 = new SFVec3f(0, 0, 15); \t', '\tkVL6 = new SFVec3f(0, 0, 18);\t\t\t', '      \tkeyValueL = new MFVec3f(kVL1, kVL2, kVL3, kVL4, kVL5, kVL6, kVL7, kVL8, kVL9);  ', '\t', '\t// Right Fin (fixed spine)', '\tkVR1 = new SFVec3f(0, 0, 1);  ', '     \tkVR2 = new SFVec3f(0, 0, 5);', '      \tkVR3 = new SFVec3f(0, 0, 8);', '\tkVR4 = new SFVec3f(0, 0, 12);  \t', '\tkVR5 = new SFVec3f(0, 0, 15);', '\tkVR6 = new SFVec3f(0, 0, 18);\t\t\t', '      \tkeyValueR = new MFVec3f(kVR1, kVR2, kVR3, kVR4, kVR5, kVR6, kVR7, kVR8, kVR9);  ', '      \t', "\t//tracePrint ('[keyValueL = ]' + keyValueL);     ", "\t//tracePrint ('[keyValueR = ]' + keyValueR);     ", '\t\t\t', '}', '', 'function set_fraction (value, timeStamp)', '{', '\tfinMove(value);', "\t//tracePrint('time fraction =' + value);", '\t', '}', '', 'function tracePrint (outputString)', '{', "\tif (traceEnabled) Browser.print ('[Fin Move]' + outputString);", '}', '', '']
),
ROUTE(fromField="isActive", fromNode="FinTriggerProximitySensor", toField="enabled", toNode="FinClock"),
ROUTE(fromField="fraction_changed", fromNode="FinClock", toField="set_fraction", toNode="FinScript"),
ROUTE(fromField="keyValueR", fromNode="FinScript", toField="set_spine", toNode="Finr"),
ROUTE(fromField="keyValueL", fromNode="FinScript", toField="set_spine", toNode="Finl")]),
ProtoInstance(name="Joint", DEF="hanim_vl1", fieldValue=[fieldValue(name="name", value="vl1"),
fieldValue(name="center", value=[-0.00405,1.07,-0.0275]),
fieldValue(name="children", children=[
ProtoInstance(name="Segment", DEF="hanim_c7", fieldValue=[fieldValue(name="name", value="l1"),
fieldValue(name="children", children=[
Transform(scale=((1.05,1.05,1.05)), translation=((0,-0.09,0)), children=[
Shape(
appearance=
Appearance(
material=
Material(DEF="WetShirtColor", ambientIntensity=0.25, diffuseColor=((0,0,0.502))), 
texture=
ImageTexture(DEF="small_logo_Tex", url=["small_logo.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/small_logo.gif"])), 
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(3),int(0),int(2),int(-1),int(4),int(5),int(6),int(-1),int(6),int(7),int(4),int(-1),int(8),int(7),int(6),int(-1),int(6),int(9),int(8),int(-1),int(9),int(10),int(8),int(-1),int(6),int(5),int(11),int(-1),int(9),int(6),int(12),int(-1),int(11),int(12),int(6),int(-1),int(12),int(10),int(9),int(-1),int(7),int(8),int(13),int(-1),int(13),int(4),int(7),int(-1),int(14),int(15),int(16),int(-1),int(15),int(17),int(13),int(-1),int(4),int(13),int(17),int(-1),int(17),int(15),int(18),int(-1),int(13),int(19),int(15),int(-1),int(19),int(13),int(8),int(-1),int(19),int(16),int(15),int(-1),int(16),int(19),int(8),int(-1),int(17),int(20),int(4),int(-1),int(5),int(4),int(20),int(-1),int(18),int(21),int(17),int(-1),int(20),int(17),int(21),int(-1),int(16),int(22),int(14),int(-1),int(22),int(16),int(23),int(-1),int(8),int(23),int(16),int(-1),int(23),int(8),int(10),int(-1),int(24),int(25),int(26),int(-1),int(26),int(27),int(24),int(-1),int(25),int(28),int(26),int(-1),int(28),int(29),int(30),int(-1),int(30),int(26),int(28),int(-1),int(31),int(32),int(33),int(-1),int(32),int(25),int(33),int(-1),int(25),int(24),int(34),int(-1),int(33),int(25),int(34),int(-1),int(24),int(35),int(34),int(-1),int(27),int(35),int(24),int(-1),int(33),int(36),int(31),int(-1),int(27),int(26),int(37),int(-1),int(37),int(26),int(30),int(-1),int(38),int(37),int(30),int(-1),int(33),int(34),int(39),int(-1),int(39),int(34),int(35),int(-1),int(39),int(35),int(40),int(-1),int(41),int(38),int(30),int(-1),int(35),int(27),int(42),int(-1),int(37),int(42),int(27),int(-1),int(40),int(35),int(42),int(-1),int(42),int(37),int(43),int(-1),int(37),int(38),int(44),int(-1),int(44),int(43),int(37),int(-1),int(36),int(45),int(46),int(-1),int(36),int(33),int(45),int(-1),int(40),int(42),int(47),int(-1),int(43),int(47),int(42),int(-1),int(47),int(48),int(40),int(-1),int(39),int(40),int(48),int(-1),int(47),int(43),int(49),int(-1),int(43),int(44),int(49),int(-1),int(50),int(49),int(44),int(-1),int(51),int(46),int(52),int(-1),int(46),int(45),int(52),int(-1),int(52),int(45),int(53),int(-1),int(33),int(53),int(45),int(-1),int(33),int(39),int(53),int(-1),int(49),int(54),int(47),int(-1),int(48),int(47),int(54),int(-1),int(55),int(56),int(52),int(-1),int(57),int(52),int(53),int(-1),int(57),int(55),int(52),int(-1),int(58),int(57),int(53),int(-1),int(59),int(58),int(53),int(-1),int(53),int(39),int(59),int(-1),int(39),int(48),int(59),int(-1),int(59),int(48),int(54),int(-1),int(58),int(59),int(60),int(-1),int(54),int(49),int(61),int(-1),int(59),int(54),int(61),int(-1),int(60),int(59),int(61),int(-1),int(49),int(50),int(62),int(-1),int(63),int(62),int(50),int(-1),int(62),int(61),int(49),int(-1),int(64),int(63),int(50),int(-1),int(63),int(64),int(65),int(-1),int(65),int(62),int(63),int(-1),int(66),int(60),int(61),int(-1),int(62),int(65),int(67),int(-1),int(68),int(67),int(65),int(-1),int(64),int(69),int(70),int(-1),int(64),int(70),int(65),int(-1),int(70),int(68),int(65),int(-1),int(69),int(71),int(72),int(-1),int(72),int(70),int(69),int(-1),int(73),int(74),int(75),int(-1),int(66),int(76),int(60),int(-1),int(67),int(77),int(62),int(-1),int(62),int(77),int(61),int(-1),int(77),int(66),int(61),int(-1),int(66),int(77),int(78),int(-1),int(77),int(67),int(79),int(-1),int(79),int(67),int(68),int(-1),int(79),int(78),int(77),int(-1),int(68),int(70),int(80),int(-1),int(70),int(72),int(80),int(-1),int(80),int(79),int(68),int(-1),int(74),int(73),int(81),int(-1),int(73),int(76),int(82),int(-1),int(82),int(81),int(73),int(-1),int(76),int(66),int(83),int(-1),int(78),int(83),int(66),int(-1),int(83),int(82),int(76),int(-1),int(78),int(79),int(84),int(-1),int(79),int(80),int(84),int(-1),int(84),int(85),int(78),int(-1),int(86),int(84),int(80),int(-1),int(81),int(82),int(87),int(-1),int(87),int(88),int(81),int(-1),int(82),int(83),int(89),int(-1),int(83),int(78),int(89),int(-1),int(89),int(87),int(82),int(-1),int(78),int(85),int(89),int(-1),int(90),int(91),int(92),int(-1),int(92),int(93),int(90),int(-1),int(90),int(94),int(91),int(-1),int(95),int(96),int(94),int(-1),int(94),int(90),int(95),int(-1),int(29),int(96),int(97),int(-1),int(96),int(95),int(97),int(-1),int(97),int(30),int(29),int(-1),int(30),int(97),int(41),int(-1),int(41),int(97),int(95),int(-1),int(98),int(99),int(100),int(-1),int(98),int(91),int(99),int(-1),int(101),int(92),int(91),int(-1),int(98),int(101),int(91),int(-1),int(101),int(102),int(92),int(-1),int(92),int(102),int(93),int(-1),int(36),int(103),int(31),int(-1),int(51),int(103),int(36),int(46),int(-1),int(103),int(100),int(31),int(-1),int(100),int(103),int(98),int(-1),int(104),int(90),int(93),int(-1),int(90),int(104),int(95),int(-1),int(95),int(105),int(41),int(-1),int(104),int(105),int(95),int(-1),int(106),int(101),int(98),int(-1),int(102),int(101),int(106),int(-1),int(107),int(93),int(102),int(-1),int(93),int(107),int(104),int(-1),int(108),int(104),int(107),int(-1),int(107),int(109),int(108),int(-1),int(110),int(105),int(104),int(-1),int(104),int(108),int(110),int(-1),int(109),int(107),int(111),int(-1),int(107),int(102),int(111),int(-1),int(111),int(102),int(106),int(-1),int(111),int(112),int(109),int(-1),int(106),int(112),int(111),int(-1),int(113),int(110),int(108),int(-1),int(110),int(113),int(114),int(-1),int(51),int(52),int(115),int(-1),int(116),int(115),int(117),int(-1),int(117),int(106),int(116),int(-1),int(118),int(109),int(112),int(-1),int(119),int(108),int(109),int(-1),int(108),int(119),int(113),int(-1),int(109),int(118),int(119),int(-1),int(120),int(113),int(119),int(-1),int(119),int(121),int(120),int(-1),int(52),int(56),int(122),int(-1),int(122),int(115),int(52),int(-1),int(115),int(122),int(123),int(-1),int(117),int(124),int(125),int(-1),int(106),int(117),int(125),int(-1),int(118),int(112),int(106),int(125),int(-1),int(119),int(118),int(125),int(-1),int(121),int(119),int(125),int(-1),int(126),int(124),int(123),int(-1),int(127),int(114),int(113),int(-1),int(114),int(127),int(128),int(-1),int(113),int(120),int(127),int(-1),int(114),int(128),int(129),int(-1),int(130),int(126),int(123),int(-1),int(122),int(130),int(123),int(-1),int(131),int(120),int(121),int(-1),int(131),int(127),int(120),int(-1),int(132),int(129),int(128),int(-1),int(128),int(127),int(132),int(-1),int(74),int(81),int(133),int(-1),int(81),int(134),int(133),int(-1),int(121),int(135),int(131),int(-1),int(136),int(132),int(127),int(-1),int(132),int(136),int(137),int(-1),int(138),int(71),int(129),int(-1),int(138),int(129),int(132),int(-1),int(137),int(138),int(132),int(-1),int(139),int(72),int(71),int(-1),int(72),int(139),int(80),int(-1),int(71),int(138),int(139),int(-1),int(140),int(135),int(121),int(-1),int(140),int(121),int(125),int(-1),int(141),int(127),int(131),int(-1),int(127),int(141),int(136),int(-1),int(131),int(135),int(141),int(-1),int(142),int(141),int(135),int(-1),int(143),int(136),int(141),int(-1),int(136),int(143),int(137),int(-1),int(141),int(142),int(143),int(-1),int(144),int(138),int(137),int(-1),int(144),int(139),int(138),int(-1),int(143),int(144),int(137),int(-1),int(145),int(146),int(134),int(-1),int(145),int(140),int(146),int(-1),int(134),int(81),int(145),int(-1),int(147),int(135),int(140),int(-1),int(135),int(147),int(142),int(-1),int(140),int(145),int(147),int(-1),int(148),int(80),int(139),int(-1),int(80),int(148),int(86),int(-1),int(139),int(144),int(148),int(-1),int(149),int(143),int(142),int(-1),int(149),int(144),int(143),int(-1),int(142),int(150),int(149),int(-1),int(151),int(148),int(144),int(-1),int(144),int(149),int(151),int(-1),int(152),int(145),int(81),int(-1),int(81),int(88),int(152),int(-1),int(153),int(147),int(145),int(-1),int(153),int(142),int(147),int(-1),int(145),int(152),int(153),int(-1),int(153),int(150),int(142),int(-1),int(154),int(86),int(148),int(-1),int(148),int(151),int(154),int(-1),int(155),int(28),int(25),int(-1),int(155),int(29),int(28),int(-1),int(155),int(25),int(32),int(-1),int(155),int(32),int(31),int(-1),int(155),int(31),int(100),int(-1),int(155),int(100),int(99),int(-1),int(155),int(99),int(91),int(-1),int(155),int(91),int(94),int(-1),int(155),int(94),int(96),int(-1),int(155),int(96),int(29),int(-1),int(156),int(151),int(149),int(-1),int(156),int(154),int(151),int(-1),int(156),int(149),int(150),int(-1),int(156),int(150),int(153),int(-1),int(156),int(153),int(152),int(-1),int(156),int(152),int(88),int(-1),int(156),int(88),int(87),int(-1),int(156),int(87),int(89),int(-1),int(156),int(89),int(85),int(-1),int(156),int(85),int(84),int(-1),int(156),int(84),int(86),int(-1),int(156),int(86),int(154),int(-1),int(76),int(157),int(60),int(-1),int(76),int(73),int(158),int(157),int(-1),int(159),int(158),int(73),int(75),int(160),int(-1),int(161),int(56),int(55),int(-1),int(60),int(162),int(58),int(-1),int(162),int(60),int(157),int(-1),int(161),int(55),int(163),int(-1),int(57),int(164),int(163),int(55),int(-1),int(160),int(163),int(164),int(-1),int(160),int(164),int(159),int(-1),int(164),int(57),int(165),int(-1),int(164),int(165),int(159),int(-1),int(57),int(58),int(166),int(165),int(-1),int(166),int(58),int(162),int(-1),int(165),int(166),int(159),int(-1),int(166),int(162),int(157),int(158),int(159),int(-1),int(140),int(125),int(167),int(-1),int(124),int(168),int(125),int(-1),int(168),int(167),int(125),int(-1),int(124),int(169),int(168),int(-1),int(146),int(140),int(167),int(170),int(-1),int(168),int(170),int(167),int(-1),int(168),int(169),int(170),int(-1),int(146),int(170),int(171),int(-1),int(169),int(171),int(170),int(-1),int(172),int(134),int(146),int(171),int(-1),int(134),int(172),int(130),int(-1),int(169),int(124),int(126),int(173),int(-1),int(173),int(126),int(130),int(-1),int(169),int(173),int(172),int(171),int(-1),int(173),int(130),int(172),int(-1),int(122),int(74),int(133),int(174),int(-1),int(133),int(134),int(174),int(-1),int(130),int(122),int(174),int(-1),int(134),int(130),int(174),int(-1),int(122),int(56),int(175),int(74),int(-1),int(74),int(175),int(176),int(-1),int(175),int(56),int(161),int(176),int(-1),int(74),int(176),int(75),int(-1),int(176),int(161),int(163),int(-1),int(176),int(160),int(75),int(-1),int(176),int(163),int(160),int(-1),int(115),int(116),int(177),int(51),int(-1),int(106),int(98),int(177),int(116),int(-1),int(51),int(177),int(103),int(-1),int(177),int(98),int(103),int(-1)], creaseAngle=1.59, 
coord=
Coordinate(point=[(0.043,1.25,0.0614),(0.101,1.25,0.0614),(0.103,1.31,0.0195),(0.021,1.32,0.0276),(0.0572,1.27,-0.153),(0.0524,1.15,-0.134),(0,1.19,-0.14),(0,1.26,-0.147),(-0.0572,1.27,-0.153),(-0.0228,1.18,-0.14),(-0.0524,1.15,-0.134),(0,1.13,-0.126),(-0.0228,1.13,-0.124),(0,1.31,-0.146),(-0.0545,1.35,-0.138),(0,1.35,-0.136),(-0.0593,1.3,-0.151),(0.0593,1.3,-0.151),(0.0545,1.35,-0.138),(-0.0255,1.3,-0.146),(0.0975,1.26,-0.15),(0.1,1.3,-0.148),(-0.1,1.3,-0.148),(-0.0975,1.26,-0.15),(-0.117,1.41,-0.0395),(-0.0674,1.45,-0.0314),(-0.0926,1.41,-0.0937),(-0.124,1.4,-0.0706),(-0.0583,1.44,-0.0615),(-0.0228,1.46,-0.0872),(-0.0534,1.42,-0.112),(-0.0228,1.42,0.00351),(-0.0593,1.43,-0.0185),(-0.0787,1.39,-0.00293),(-0.112,1.4,-0.0131),(-0.164,1.39,-0.0373),(-0.0153,1.39,0.0159),(-0.0953,1.35,-0.136),(-0.0545,1.35,-0.138),(-0.139,1.34,0.00297),(-0.137,1.34,-0.0368),(0,1.35,-0.136),(-0.156,1.35,-0.0915),(-0.132,1.29,-0.127),(-0.1,1.3,-0.148),(-0.0418,1.35,0.0168),(-0.013,1.37,0.0167),(-0.151,1.28,-0.0878),(-0.136,1.32,-0.0406),(-0.124,1.26,-0.125),(-0.0975,1.26,-0.15),(0.00228,1.37,0.0167),(-0.00959,1.32,0.0276),(-0.0918,1.31,0.0195),(-0.141,1.25,-0.0744),(-0.0316,1.25,0.0614),(-0.00261,1.25,0.0458),(-0.0611,1.25,0.0668),(-0.0896,1.25,0.0614),(-0.126,1.24,0.012),(-0.126,1.22,0.0141),(-0.129,1.17,-0.0523),(-0.115,1.16,-0.105),(-0.0851,1.18,-0.134),(-0.0524,1.15,-0.134),(-0.083,1.13,-0.122),(-0.117,1.15,-0.018),(-0.11,1.1,-0.0846),(-0.0808,1.1,-0.111),(-0.0228,1.13,-0.124),(-0.0524,1.1,-0.119),(0,1.13,-0.126),(-0.0228,1.1,-0.116),(-0.0563,1.15,0.0377),(-0.00476,1.18,0.0458),(-0.0343,1.18,0.0485),(-0.0966,1.15,-0.00413),(-0.12,1.1,-0.0373),(-0.121,1.07,-0.0356),(-0.106,1.07,-0.0711),(-0.0475,1.06,-0.105),(0,1.08,0.0556),(-0.0787,1.08,0.0347),(-0.103,1.08,0.00296),(-0.0975,1.01,-0.0873),(-0.134,0.998,-0.0314),(-0.0475,1.02,-0.109),(-0.0325,1.02,0.0529),(0,1.02,0.0422),(-0.0975,1.02,0.0132),(0.0926,1.41,-0.0937),(0.0674,1.45,-0.0314),(0.117,1.41,-0.0395),(0.124,1.4,-0.0706),(0.0583,1.44,-0.0615),(0.0534,1.42,-0.112),(0.0228,1.46,-0.0872),(0,1.4,-0.112),(0.0787,1.39,-0.00293),(0.0593,1.43,-0.0185),(0.0228,1.42,0.00351),(0.112,1.4,-0.0131),(0.164,1.39,-0.0373),(0.0153,1.39,0.0159),(0.0953,1.35,-0.136),(0.0545,1.35,-0.138),(0.139,1.34,0.00297),(0.156,1.35,-0.0915),(0.132,1.29,-0.127),(0.151,1.28,-0.0878),(0.1,1.3,-0.148),(0.137,1.34,-0.0368),(0.147,1.32,-0.0406),(0.124,1.26,-0.125),(0.0975,1.26,-0.15),(0.021,1.32,0.0276),(0.0532,1.35,0.0168),(0.103,1.31,0.0195),(0.135,1.29,-0.0406),(0.141,1.25,-0.0744),(0.132,1.18,-0.083),(0.134,1.19,-0.0572),(0.014,1.25,0.0458),(0.043,1.25,0.0614),(0.101,1.25,0.0614),(0.138,1.24,0.012),(0.065,1.23,0.0743),(0.115,1.16,-0.105),(0.0851,1.18,-0.134),(0.0524,1.15,-0.134),(0.043,1.2,0.0641),(0.127,1.14,-0.0427),(0.083,1.13,-0.122),(0.0162,1.18,0.0458),(0.0457,1.18,0.0485),(0.117,1.15,-0.018),(0.11,1.1,-0.0846),(0.0808,1.1,-0.111),(0.0524,1.1,-0.119),(0.0228,1.1,-0.116),(0.108,1.15,-0.00413),(0.12,1.1,-0.0373),(0.121,1.07,-0.0356),(0.106,1.07,-0.0711),(0.0475,1.06,-0.105),(0.0787,1.08,0.0347),(0.0844,1.15,0.0297),(0.103,1.08,0.00296),(0,1.07,-0.11),(0.0975,1.01,-0.0873),(0.134,0.998,-0.0475),(0.0475,1.02,-0.109),(0.0325,1.02,0.0529),(0.0975,1.02,0.0132),(0,1.02,-0.117),(0,1.44,-0.0389),(0,1.01,-0.0259),(-0.104,1.19,0.0423),(-0.0778,1.19,0.0642),(-0.078,1.19,0.0644),(-0.0493,1.2,0.0664),(-0.0281,1.22,0.0587),(-0.104,1.2,0.0568),(-0.0484,1.21,0.0692),(-0.0549,1.21,0.0708),(-0.0806,1.21,0.0713),(-0.0852,1.21,0.0703),(0.116,1.19,0.043),(0.114,1.21,0.0572),(0.0967,1.21,0.0701),(0.11,1.19,0.0502),(0.093,1.19,0.0622),(0.0832,1.19,0.0662),(0.0863,1.21,0.0728),(0.0154,1.21,0.0458),(-0.00393,1.21,0.0458),(-0.0145,1.2,0.0512),(0.0534,1.35,0.0168)]), 
texCoord=
TextureCoordinate(point=[(0.1611,-0.02056),(0.9468,-0.02056),(0.9739,0.9344),(-0.137,1.094),(0.1973,0.6424),(0.2231,0.04876),(0.5054,0.2466),(0.5054,0.5929),(0.8135,0.6424),(0.6282,0.1972),(0.7876,0.04876),(0.5054,-0.05018),(0.6282,-0.05018),(0.5054,0.8403),(0.7989,1.038),(0.5054,1.038),(0.8248,0.7908),(0.186,0.7908),(0.2118,1.038),(0.6427,0.7908),(-0.01977,0.5929),(-0.03324,0.7908),(1.044,0.7908),(1.031,0.5929),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0)])))]),
#<Transform DEF='Imaf3D'> <Shape> <Appearance> <Material/> <ImageTexture/> </Appearance> <IndexedFaceSet> <Coordinate/> <TextureCoordinate/> </IndexedFaceSet> </Shape> </Transform>

Transform(scale=((1.25,1.1,1.3)), translation=((0,1.18,0.015)), children=[
Group(children=[
Transform(translation=((0,-1.2,0)), children=[
Shape(
appearance=
Appearance(
material=
Material(DEF="BCLColor", ambientIntensity=0.25, diffuseColor=((0.0588,0.0588,0.0588)), shininess=0.5)), 
geometry=
IndexedFaceSet(coordIndex=[int(4),int(5),int(6),int(-1),int(6),int(7),int(4),int(-1),int(8),int(7),int(6),int(-1),int(6),int(9),int(8),int(-1),int(9),int(10),int(8),int(-1),int(6),int(5),int(11),int(-1),int(9),int(6),int(12),int(-1),int(11),int(12),int(6),int(-1),int(12),int(10),int(9),int(-1),int(7),int(8),int(13),int(-1),int(13),int(4),int(7),int(-1),int(14),int(15),int(16),int(-1),int(15),int(17),int(13),int(-1),int(4),int(13),int(17),int(-1),int(17),int(15),int(18),int(-1),int(13),int(19),int(15),int(-1),int(19),int(13),int(8),int(-1),int(19),int(16),int(15),int(-1),int(16),int(19),int(8),int(-1),int(17),int(20),int(4),int(-1),int(5),int(4),int(20),int(-1),int(18),int(21),int(17),int(-1),int(20),int(17),int(21),int(-1),int(16),int(22),int(14),int(-1),int(22),int(16),int(23),int(-1),int(8),int(23),int(16),int(-1),int(23),int(8),int(10),int(-1),int(24),int(25),int(26),int(-1),int(26),int(27),int(24),int(-1),int(25),int(28),int(26),int(-1),int(28),int(29),int(30),int(-1),int(30),int(26),int(28),int(-1),int(25),int(24),int(34),int(-1),int(33),int(25),int(34),int(-1),int(24),int(35),int(34),int(-1),int(27),int(35),int(24),int(-1),int(27),int(26),int(37),int(-1),int(37),int(26),int(30),int(-1),int(38),int(37),int(30),int(-1),int(33),int(34),int(39),int(-1),int(39),int(34),int(35),int(-1),int(41),int(38),int(30),int(-1),int(35),int(27),int(42),int(-1),int(37),int(42),int(27),int(-1),int(42),int(37),int(43),int(-1),int(37),int(38),int(44),int(-1),int(44),int(43),int(37),int(-1),int(43),int(47),int(42),int(-1),int(47),int(43),int(49),int(-1),int(43),int(44),int(49),int(-1),int(50),int(49),int(44),int(-1),int(33),int(39),int(53),int(-1),int(49),int(54),int(47),int(-1),int(59),int(58),int(53),int(-1),int(53),int(39),int(59),int(-1),int(58),int(59),int(60),int(-1),int(54),int(49),int(61),int(-1),int(49),int(50),int(62),int(-1),int(63),int(62),int(50),int(-1),int(62),int(61),int(49),int(-1),int(64),int(63),int(50),int(-1),int(63),int(64),int(65),int(-1),int(65),int(62),int(63),int(-1),int(66),int(60),int(61),int(-1),int(62),int(65),int(67),int(-1),int(68),int(67),int(65),int(-1),int(64),int(69),int(70),int(-1),int(64),int(70),int(65),int(-1),int(70),int(68),int(65),int(-1),int(69),int(71),int(72),int(-1),int(72),int(70),int(69),int(-1),int(66),int(76),int(60),int(-1),int(67),int(77),int(62),int(-1),int(62),int(77),int(61),int(-1),int(77),int(66),int(61),int(-1),int(66),int(77),int(78),int(-1),int(77),int(67),int(79),int(-1),int(79),int(67),int(68),int(-1),int(79),int(78),int(77),int(-1),int(68),int(70),int(80),int(-1),int(70),int(72),int(80),int(-1),int(80),int(79),int(68),int(-1),int(73),int(76),int(82),int(-1),int(76),int(66),int(83),int(-1),int(78),int(83),int(66),int(-1),int(83),int(82),int(76),int(-1),int(78),int(79),int(84),int(-1),int(79),int(80),int(84),int(-1),int(84),int(85),int(78),int(-1),int(86),int(84),int(80),int(-1),int(82),int(83),int(89),int(-1),int(83),int(78),int(89),int(-1),int(89),int(87),int(82),int(-1),int(78),int(85),int(89),int(-1),int(90),int(91),int(92),int(-1),int(92),int(93),int(90),int(-1),int(90),int(94),int(91),int(-1),int(95),int(96),int(94),int(-1),int(94),int(90),int(95),int(-1),int(29),int(96),int(97),int(-1),int(96),int(95),int(97),int(-1),int(97),int(30),int(29),int(-1),int(30),int(97),int(41),int(-1),int(41),int(97),int(95),int(-1),int(101),int(92),int(91),int(-1),int(98),int(101),int(91),int(-1),int(101),int(102),int(92),int(-1),int(92),int(102),int(93),int(-1),int(104),int(90),int(93),int(-1),int(90),int(104),int(95),int(-1),int(95),int(105),int(41),int(-1),int(104),int(105),int(95),int(-1),int(106),int(101),int(98),int(-1),int(102),int(101),int(106),int(-1),int(107),int(93),int(102),int(-1),int(93),int(107),int(104),int(-1),int(108),int(104),int(107),int(-1),int(107),int(109),int(108),int(-1),int(110),int(105),int(104),int(-1),int(104),int(108),int(110),int(-1),int(113),int(110),int(108),int(-1),int(110),int(113),int(114),int(-1),int(119),int(108),int(109),int(-1),int(108),int(119),int(113),int(-1),int(120),int(113),int(119),int(-1),int(119),int(121),int(120),int(-1),int(117),int(124),int(125),int(-1),int(106),int(117),int(125),int(-1),int(127),int(114),int(113),int(-1),int(114),int(127),int(128),int(-1),int(113),int(120),int(127),int(-1),int(114),int(128),int(129),int(-1),int(131),int(120),int(121),int(-1),int(131),int(127),int(120),int(-1),int(132),int(129),int(128),int(-1),int(128),int(127),int(132),int(-1),int(121),int(135),int(131),int(-1),int(136),int(132),int(127),int(-1),int(132),int(136),int(137),int(-1),int(138),int(71),int(129),int(-1),int(138),int(129),int(132),int(-1),int(137),int(138),int(132),int(-1),int(139),int(72),int(71),int(-1),int(72),int(139),int(80),int(-1),int(71),int(138),int(139),int(-1),int(140),int(135),int(121),int(-1),int(140),int(121),int(125),int(-1),int(141),int(127),int(131),int(-1),int(127),int(141),int(136),int(-1),int(131),int(135),int(141),int(-1),int(142),int(141),int(135),int(-1),int(143),int(136),int(141),int(-1),int(136),int(143),int(137),int(-1),int(141),int(142),int(143),int(-1),int(144),int(138),int(137),int(-1),int(144),int(139),int(138),int(-1),int(143),int(144),int(137),int(-1),int(145),int(140),int(146),int(-1),int(147),int(135),int(140),int(-1),int(135),int(147),int(142),int(-1),int(140),int(145),int(147),int(-1),int(148),int(80),int(139),int(-1),int(80),int(148),int(86),int(-1),int(139),int(144),int(148),int(-1),int(149),int(143),int(142),int(-1),int(149),int(144),int(143),int(-1),int(142),int(150),int(149),int(-1),int(151),int(148),int(144),int(-1),int(144),int(149),int(151),int(-1),int(153),int(147),int(145),int(-1),int(153),int(142),int(147),int(-1),int(145),int(152),int(153),int(-1),int(153),int(150),int(142),int(-1),int(154),int(86),int(148),int(-1),int(148),int(151),int(154),int(-1),int(76),int(157),int(60),int(-1),int(76),int(73),int(158),int(157),int(-1),int(60),int(162),int(58),int(-1),int(162),int(60),int(157),int(-1),int(166),int(58),int(162),int(-1),int(165),int(166),int(159),int(-1),int(166),int(162),int(157),int(158),int(159),int(-1),int(140),int(125),int(167),int(-1),int(124),int(168),int(125),int(-1),int(168),int(167),int(125),int(-1),int(124),int(169),int(168),int(-1),int(146),int(140),int(167),int(170),int(-1),int(168),int(170),int(167),int(-1),int(168),int(169),int(170),int(-1),int(146),int(170),int(171),int(-1),int(169),int(171),int(170),int(-1),int(98),int(117),int(106),int(-1)], creaseAngle=1.59, solid=False, 
coord=
Coordinate(point=[(0.043,1.25,0.0614),(0.101,1.25,0.0614),(0.103,1.31,0.0195),(0.021,1.32,0.0276),(0.0572,1.27,-0.153),(0.0524,1.15,-0.134),(0,1.19,-0.14),(0,1.26,-0.147),(-0.0572,1.27,-0.153),(-0.0228,1.18,-0.14),(-0.0524,1.15,-0.134),(0,1.13,-0.126),(-0.0228,1.13,-0.124),(0,1.31,-0.146),(-0.0545,1.35,-0.138),(0,1.35,-0.136),(-0.0593,1.3,-0.151),(0.0593,1.3,-0.151),(0.0545,1.35,-0.138),(-0.0255,1.3,-0.146),(0.0975,1.26,-0.15),(0.1,1.3,-0.148),(-0.1,1.3,-0.148),(-0.0975,1.26,-0.15),(-0.117,1.41,-0.0395),(-0.0674,1.45,-0.0314),(-0.0926,1.41,-0.0937),(-0.124,1.4,-0.0706),(-0.0583,1.44,-0.0615),(-0.0228,1.46,-0.0872),(-0.0534,1.42,-0.112),(-0.0228,1.42,0.00351),(-0.0593,1.43,-0.0185),(-0.0787,1.39,-0.00293),(-0.112,1.4,-0.0131),(-0.164,1.39,-0.0373),(-0.0153,1.39,0.0159),(-0.0953,1.35,-0.136),(-0.0545,1.35,-0.138),(-0.139,1.34,0.00297),(-0.137,1.34,-0.0368),(0,1.35,-0.136),(-0.156,1.35,-0.0915),(-0.132,1.29,-0.127),(-0.1,1.3,-0.148),(-0.0418,1.35,0.0168),(-0.013,1.37,0.0167),(-0.151,1.28,-0.0878),(-0.136,1.32,-0.0406),(-0.124,1.26,-0.125),(-0.0975,1.26,-0.15),(0.00228,1.37,0.0167),(-0.00959,1.32,0.0276),(-0.0918,1.31,0.0195),(-0.141,1.25,-0.0744),(-0.0316,1.25,0.0614),(-0.00261,1.25,0.0458),(-0.0611,1.25,0.0668),(-0.0896,1.25,0.0614),(-0.126,1.24,0.012),(-0.126,1.22,0.0141),(-0.129,1.17,-0.0523),(-0.115,1.16,-0.105),(-0.0851,1.18,-0.134),(-0.0524,1.15,-0.134),(-0.083,1.13,-0.122),(-0.117,1.15,-0.018),(-0.11,1.1,-0.0846),(-0.0808,1.1,-0.111),(-0.0228,1.13,-0.124),(-0.0524,1.1,-0.119),(0,1.13,-0.126),(-0.0228,1.1,-0.116),(-0.0563,1.15,0.0377),(-0.00476,1.18,0.0458),(-0.0343,1.18,0.0485),(-0.0966,1.15,-0.00413),(-0.12,1.1,-0.0373),(-0.121,1.07,-0.0356),(-0.106,1.07,-0.0711),(-0.0475,1.06,-0.105),(0,1.08,0.0556),(-0.0787,1.08,0.0347),(-0.103,1.08,0.00296),(-0.0975,1.01,-0.0873),(-0.134,0.998,-0.0314),(-0.0475,1.02,-0.109),(-0.0325,1.02,0.0529),(0,1.02,0.0422),(-0.0975,1.02,0.0132),(0.0926,1.41,-0.0937),(0.0674,1.45,-0.0314),(0.117,1.41,-0.0395),(0.124,1.4,-0.0706),(0.0583,1.44,-0.0615),(0.0534,1.42,-0.112),(0.0228,1.46,-0.0872),(0,1.4,-0.112),(0.0787,1.39,-0.00293),(0.0593,1.43,-0.0185),(0.0228,1.42,0.00351),(0.112,1.4,-0.0131),(0.164,1.39,-0.0373),(0.0153,1.39,0.0159),(0.0953,1.35,-0.136),(0.0545,1.35,-0.138),(0.139,1.34,0.00297),(0.156,1.35,-0.0915),(0.132,1.29,-0.127),(0.151,1.28,-0.0878),(0.1,1.3,-0.148),(0.137,1.34,-0.0368),(0.147,1.32,-0.0406),(0.124,1.26,-0.125),(0.0975,1.26,-0.15),(0.021,1.32,0.0276),(0.0532,1.35,0.0168),(0.103,1.31,0.0195),(0.135,1.29,-0.0406),(0.141,1.25,-0.0744),(0.132,1.18,-0.083),(0.134,1.19,-0.0572),(0.014,1.25,0.0458),(0.043,1.25,0.0614),(0.101,1.25,0.0614),(0.138,1.24,0.012),(0.065,1.23,0.0743),(0.115,1.16,-0.105),(0.0851,1.18,-0.134),(0.0524,1.15,-0.134),(0.043,1.2,0.0641),(0.127,1.14,-0.0427),(0.083,1.13,-0.122),(0.0162,1.18,0.0458),(0.0457,1.18,0.0485),(0.117,1.15,-0.018),(0.11,1.1,-0.0846),(0.0808,1.1,-0.111),(0.0524,1.1,-0.119),(0.0228,1.1,-0.116),(0.108,1.15,-0.00413),(0.12,1.1,-0.0373),(0.121,1.07,-0.0356),(0.106,1.07,-0.0711),(0.0475,1.06,-0.105),(0.0787,1.08,0.0347),(0.0844,1.15,0.0297),(0.103,1.08,0.00296),(0,1.07,-0.11),(0.0975,1.01,-0.0873),(0.134,0.998,-0.0475),(0.0475,1.02,-0.109),(0.0325,1.02,0.0529),(0.0975,1.02,0.0132),(0,1.02,-0.117),(0,1.44,-0.0389),(0,1.01,-0.0259),(-0.104,1.19,0.0423),(-0.0778,1.19,0.0642),(-0.078,1.19,0.0644),(-0.0493,1.2,0.0664),(-0.0281,1.22,0.0587),(-0.104,1.2,0.0568),(-0.0484,1.21,0.0692),(-0.0549,1.21,0.0708),(-0.0806,1.21,0.0713),(-0.0852,1.21,0.0703),(0.116,1.19,0.043),(0.114,1.21,0.0572),(0.0967,1.21,0.0701),(0.11,1.19,0.0502),(0.093,1.19,0.0622),(0.0832,1.19,0.0662),(0.0863,1.21,0.0728),(0.0154,1.21,0.0458),(-0.00393,1.21,0.0458),(-0.0145,1.2,0.0512),(0.0534,1.35,0.0168)]), 
texCoord=
TextureCoordinate(point=[(0.1611,-0.02056),(0.9468,-0.02056),(0.9739,0.9344),(-0.137,1.094),(0.1973,0.6424),(0.2231,0.04876),(0.5054,0.2466),(0.5054,0.5929),(0.8135,0.6424),(0.6282,0.1972),(0.7876,0.04876),(0.5054,-0.05018),(0.6282,-0.05018),(0.5054,0.8403),(0.7989,1.038),(0.5054,1.038),(0.8248,0.7908),(0.186,0.7908),(0.2118,1.038),(0.6427,0.7908),(-0.01977,0.5929),(-0.03324,0.7908),(1.044,0.7908),(1.031,0.5929),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0),(0,0)])))]),
Transform(rotation=((0,0,1,1.57)), scale=((2,1.5,1.5)), translation=((0.13,0.22,-0.1)), children=[
Transform(rotation=((1,0,0,1.4)), children=[
Shape(DEF="BCLSnorkelPad", 
appearance=
Appearance(
material=
Material(USE="BCLColor")), 
geometry=
Extrusion(crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.0),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.0,0.013)], spine=[(-0.03,0.01,0),(-0.005,0.04,0),(0,0.06,0),(-0.01,0.075,0)]))])]),
Transform(rotation=((-1,0,0,0.8)), translation=((0.07,0.08,0.125)), children=[
Shape(
appearance=
Appearance(
material=
Material(DEF="BCLSnorkel", diffuseColor=((0.25,0.25,0.25)), shininess=0.5, transparency=0.1)), 
geometry=
Extrusion(crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.0),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.0,0.013),(-0.00494,-0.01196),(-0.00923,-0.00923),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.0,0.013)], scale=((0.8,0.8),(1.0,1.0)), spine=[(0.03,0.03,-0.05),(0.05,0.2,0)]))]),
Group(DEF="buckle", children=[
Transform(rotation=((-1,0,0,0.68)), translation=((-0.08,0.1,0.029)), children=[
Shape(
appearance=
Appearance(DEF="buckleHolder", 
material=
Material(diffuseColor=((0.25,0.25,0.25)))), 
geometry=
Box(size=((0.03,0.03,0.005))))]),
Transform(rotation=((-1,0,0,0.68)), translation=((0.03,0.1,0.027)), children=[
Shape(
appearance=
Appearance(USE="buckleHolder"), 
geometry=
Box(size=((0.15,0.03,0.001))))]),
Transform(rotation=((-1,0,0,0.68)), translation=((-0.045,0.1,0.028)), children=[
Shape(
appearance=
Appearance(DEF="pin", 
material=
Material()), 
geometry=
Box(size=((0.02,0.028,0.005))))]),
Transform(rotation=((0,0,1,1.57)), translation=((-0.06,0.1,0.029)), children=[
Shape(
appearance=
Appearance(USE="pin"), 
geometry=
Cylinder(height=0.02, radius=0.0024))]),
Transform(rotation=((0,0,1,1.57)), translation=((-0.06,0.109,0.0217)), children=[
Shape(
appearance=
Appearance(USE="pin"), 
geometry=
Cylinder(height=0.02, radius=0.0024))]),
Transform(rotation=((0,0,1,1.57)), translation=((-0.06,0.091,0.036)), children=[
Shape(
appearance=
Appearance(USE="pin"), 
geometry=
Cylinder(height=0.02, radius=0.0024))])]),
Group(DEF="buckleBelt", children=[
Transform(rotation=((0,1,0,-0.68)), translation=((-0.07,-0.12,0.038)), children=[
Shape(
appearance=
Appearance(USE="buckleHolder"), 
geometry=
Box(size=((0.04,0.1,0.005))))]),
Transform(translation=((0.005,-0.12,0.053)), children=[
Shape(
appearance=
Appearance(USE="buckleHolder"), 
geometry=
Box(size=((0.12,0.11,0.001))))]),
Transform(rotation=((0,1,0,0.68)), translation=((0.075,-0.12,0.038)), children=[
Shape(
appearance=
Appearance(USE="buckleHolder"), 
geometry=
Box(size=((0.04,0.1,0.005))))])])])]),
Transform(DEF="ScubaTank", rotation=((0,1,0,3.14)), scale=((0.8,0.8,0.8)), translation=((0,1.1,-0.23)), children=[
Transform(children=[
Shape(
appearance=
Appearance(
material=
Material(DEF="tank", ambientIntensity=0.3, diffuseColor=((0.3,0.3,0.5)), shininess=0.1, specularColor=((0.7,0.7,0.8)))), 
geometry=
Cylinder(height=0.7, radius=0.1))]),
Transform(translation=((0,0.35,0)), children=[
Shape(
appearance=
Appearance(
material=
Material(USE="tank")), 
geometry=
Sphere(radius=0.098))]),
Transform(translation=((0,-0.35,0)), children=[
Shape(DEF="tankBottom", 
appearance=
Appearance(
material=
Material(ambientIntensity=0.3, diffuseColor=((0,0,0)))), 
geometry=
Cylinder(height=0.06, radius=0.101))]),
Group(DEF="tankNozzle", children=[
Transform(children=[
Transform(translation=((0,0.45,0)), children=[
Shape(DEF="pressure", 
appearance=
Appearance(
material=
Material(DEF="pressureColor", ambientIntensity=0.4, diffuseColor=((0.91,0.91,0.91)), shininess=0.16, specularColor=((0.91,0.9,0.91)))), 
geometry=
Cylinder(height=0.1, radius=0.015))]),
Transform(translation=((0,0.5,0)), children=[
Shape(DEF="pressureTop", 
appearance=
Appearance(
material=
Material(DEF="top", diffuseColor=((0,0,0)))), 
geometry=
Cylinder(height=0.02, radius=0.025))]),
Transform(rotation=((0,0,1,1.57)), translation=((-0.028,0.462,0)), children=[
Transform(children=[
Shape(DEF="connectorToRegulator", 
appearance=
Appearance(
material=
Material(USE="pressureColor")), 
geometry=
Cylinder(height=0.03, radius=0.01))]),
Transform(translation=((0,0.02,0)), children=[
Shape(DEF="connectorToRegulatorTop", 
appearance=
Appearance(
material=
Material(USE="top")), 
geometry=
Cylinder(height=0.02, radius=0.02))])])])]),
Transform(translation=((0,0.2,0)), children=[
Shape(DEF="tankHoldBelt", 
appearance=
Appearance(
material=
Material(ambientIntensity=0.3, diffuseColor=((0,0,0)))), 
geometry=
Cylinder(height=0.1, radius=0.115))])]),])
]),
ProtoInstance(name="Joint", DEF="hanim_l_shoulder", fieldValue=[fieldValue(name="name", value="l_shoulder"),
fieldValue(name="center", value=[0.167,1.36,-0.0518]),
fieldValue(name="children", children=[
ProtoInstance(name="Segment", DEF="hanim_l_upperarm", fieldValue=[fieldValue(name="name", value="l_upperarm"),
fieldValue(name="children", children=[
Transform(DEF="l_upperarm_adjust", center=((0.182,1.22,-0.047)), rotation=((1,0,0,0.119)), translation=((0,0.0004203,-0.01665)), children=[
Shape(
appearance=
Appearance(
material=
Material(USE="WetShirtColor")), 
geometry=
IndexedFaceSet(coordIndex=[int(2),int(1),int(0),int(-1),int(2),int(3),int(1),int(-1),int(2),int(4),int(3),int(-1),int(2),int(0),int(5),int(-1),int(6),int(5),int(0),int(-1),int(7),int(2),int(5),int(-1),int(8),int(4),int(2),int(-1),int(8),int(3),int(4),int(-1),int(9),int(1),int(3),int(-1),int(10),int(0),int(1),int(-1),int(0),int(10),int(6),int(-1),int(1),int(9),int(10),int(-1),int(3),int(8),int(9),int(-1),int(2),int(7),int(8),int(-1),int(5),int(6),int(7),int(-1),int(11),int(7),int(6),int(-1),int(14),int(9),int(8),int(-1),int(15),int(10),int(9),int(-1),int(11),int(6),int(10),int(-1),int(10),int(15),int(11),int(-1),int(9),int(14),int(15),int(-1),int(8),int(13),int(14),int(-1),int(8),int(16),int(13),int(-1),int(7),int(11),int(12),int(-1),int(21),int(15),int(14),int(-1),int(15),int(17),int(11),int(-1),int(15),int(21),int(17),int(-1),int(16),int(19),int(13),int(-1),int(13),int(19),int(20),int(-1),int(21),int(14),int(20),int(-1),int(14),int(13),int(20),int(-1),int(12),int(17),int(18),int(-1),int(12),int(11),int(17),int(-1),int(12),int(18),int(16),int(-1),int(18),int(19),int(16),int(-1),int(12),int(16),int(7),int(-1),int(16),int(8),int(7),int(-1),int(19),int(18),int(17),int(-1),int(20),int(19),int(21),int(-1),int(19),int(17),int(21),int(-1)], creaseAngle=1.65, 
coord=
Coordinate(point=[(0.174,1.37,-0.0625),(0.185,1.38,-0.0395),(0.156,1.39,-0.0464),(0.174,1.37,-0.0158),(0.154,1.37,-0.0185),(0.157,1.38,-0.0733),(0.182,1.33,-0.0728),(0.151,1.33,-0.0937),(0.15,1.34,-0.000787),(0.185,1.33,-0.00025),(0.201,1.33,-0.0411),(0.189,1.26,-0.0808),(0.155,1.26,-0.0867),(0.151,1.26,-0.000789),(0.19,1.26,-0.00401),(0.209,1.26,-0.0427),(0.141,1.26,-0.0421),(0.203,1.08,-0.0744),(0.162,1.05,-0.0561),(0.169,1.08,-0.00885),(0.208,1.07,-0.00133),(0.221,1.08,-0.0352)])))])])
]),
ProtoInstance(name="Joint", DEF="hanim_l_elbow", fieldValue=[fieldValue(name="name", value="l_elbow"),
fieldValue(name="center", value=[0.196,1.07,-0.0518]),
fieldValue(name="children", children=[
ProtoInstance(name="Segment", DEF="hanim_l_forearm", fieldValue=[fieldValue(name="name", value="l_forearm"),
fieldValue(name="children", children=[
Transform(DEF="l_forearm_adjust", center=((0.198,0.961,-0.0405)), rotation=((-1,0,0,0.1)), translation=((0,0.003724,-0.0236)), children=[
Shape(
appearance=
Appearance(
material=
Material(USE="WetShirtColor")), 
geometry=
IndexedFaceSet(coordIndex=[int(2),int(1),int(0),int(-1),int(2),int(3),int(1),int(-1),int(2),int(4),int(3),int(-1),int(2),int(5),int(4),int(-1),int(2),int(6),int(5),int(-1),int(2),int(0),int(6),int(-1),int(7),int(6),int(0),int(-1),int(8),int(5),int(6),int(-1),int(9),int(4),int(5),int(-1),int(9),int(3),int(4),int(-1),int(10),int(1),int(3),int(-1),int(11),int(0),int(1),int(-1),int(0),int(11),int(7),int(-1),int(1),int(10),int(11),int(-1),int(3),int(9),int(10),int(-1),int(5),int(12),int(9),int(-1),int(5),int(8),int(12),int(-1),int(6),int(7),int(8),int(-1),int(17),int(16),int(15),int(-1),int(14),int(17),int(15),int(-1),int(14),int(18),int(17),int(-1),int(13),int(18),int(14),int(-1),int(16),int(17),int(10),int(-1),int(16),int(10),int(9),int(-1),int(15),int(16),int(9),int(-1),int(15),int(9),int(12),int(-1),int(18),int(13),int(7),int(-1),int(18),int(7),int(11),int(-1),int(13),int(14),int(8),int(-1),int(13),int(8),int(7),int(-1),int(14),int(15),int(8),int(-1),int(15),int(12),int(8),int(-1),int(17),int(18),int(10),int(-1),int(18),int(11),int(10),int(-1)], creaseAngle=1.75, 
coord=
Coordinate(point=[(0.177,1.09,-0.0609),(0.202,1.1,-0.0566),(0.189,1.1,-0.0395),(0.213,1.1,-0.025),(0.203,1.1,-0.0158),(0.182,1.09,-0.00563),(0.167,1.09,-0.0325),(0.176,1.08,-0.0781),(0.16,1.06,-0.0373),(0.214,1.07,-0.00402),(0.228,1.07,-0.0319),(0.208,1.08,-0.0765),(0.179,1.07,-0.00294),(0.21,0.818,-0.0615),(0.201,0.82,-0.0405),(0.205,0.819,-0.00832),(0.224,0.818,-0.00778),(0.237,0.82,-0.0282),(0.231,0.819,-0.0609)])))])])
]),
ProtoInstance(name="Joint", DEF="hanim_l_wrist", fieldValue=[fieldValue(name="name", value="l_wrist"),
fieldValue(name="center", value=[0.213,0.811,-0.0338]),
fieldValue(name="children", children=[
ProtoInstance(name="Segment", DEF="hanim_l_hand", fieldValue=[fieldValue(name="name", value="l_hand"),
fieldValue(name="children", children=[
Transform(DEF="l_hand_adjust", center=((0.213,0.811,-0.0338)), rotation=((-0.06361,-0.9967,0.04988,1.333)), translation=((0,0.005142,-0.008662)), children=[
Shape(
appearance=
Appearance(
material=
Material(DEF="Skin_Color", ambientIntensity=0.25, diffuseColor=((0.749,0.601,0.462)))), 
geometry=
IndexedFaceSet(coordIndex=[int(2),int(1),int(0),int(-1),int(5),int(4),int(3),int(-1),int(3),int(7),int(6),int(-1),int(2),int(3),int(6),int(-1),int(7),int(9),int(8),int(-1),int(6),int(7),int(8),int(-1),int(9),int(11),int(10),int(-1),int(8),int(9),int(10),int(-1),int(11),int(13),int(12),int(-1),int(10),int(11),int(12),int(-1),int(13),int(15),int(14),int(-1),int(12),int(13),int(14),int(-1),int(15),int(17),int(16),int(-1),int(14),int(15),int(16),int(-1),int(17),int(19),int(18),int(-1),int(16),int(17),int(18),int(-1),int(19),int(21),int(20),int(-1),int(18),int(19),int(20),int(-1),int(31),int(4),int(1),int(-1),int(4),int(5),int(0),int(-1),int(1),int(4),int(0),int(-1),int(5),int(3),int(2),int(-1),int(0),int(5),int(2),int(-1),int(26),int(25),int(24),int(-1),int(26),int(24),int(23),int(-1),int(27),int(26),int(23),int(-1),int(28),int(27),int(23),int(-1),int(28),int(23),int(22),int(-1),int(29),int(28),int(22),int(-1),int(29),int(22),int(21),int(-1),int(30),int(29),int(21),int(-1),int(15),int(13),int(11),int(-1),int(17),int(15),int(11),int(-1),int(19),int(17),int(11),int(-1),int(19),int(11),int(9),int(-1),int(31),int(19),int(9),int(-1),int(31),int(9),int(7),int(-1),int(4),int(31),int(7),int(-1),int(4),int(7),int(3),int(-1),int(30),int(21),int(19),int(-1),int(31),int(30),int(19),int(-1),int(12),int(14),int(16),int(-1),int(10),int(12),int(16),int(-1),int(10),int(16),int(18),int(-1),int(8),int(10),int(18),int(-1),int(6),int(8),int(1),int(-1),int(2),int(6),int(1),int(-1),int(39),int(38),int(37),int(-1),int(37),int(38),int(40),int(-1),int(37),int(40),int(36),int(-1),int(36),int(40),int(41),int(-1),int(36),int(41),int(35),int(-1),int(35),int(41),int(42),int(-1),int(35),int(42),int(34),int(-1),int(34),int(42),int(43),int(-1),int(34),int(43),int(33),int(-1),int(33),int(43),int(44),int(-1),int(33),int(44),int(32),int(-1),int(20),int(32),int(44),int(-1),int(20),int(44),int(45),int(-1),int(20),int(45),int(46),int(-1),int(47),int(8),int(18),int(-1),int(47),int(18),int(20),int(-1),int(47),int(20),int(46),int(-1),int(8),int(47),int(1),int(-1),int(22),int(33),int(32),int(-1),int(23),int(35),int(34),int(-1),int(23),int(36),int(35),int(-1),int(37),int(24),int(25),int(-1),int(40),int(38),int(27),int(-1),int(29),int(43),int(42),int(-1),int(45),int(44),int(30),int(-1),int(47),int(31),int(1),int(-1),int(47),int(46),int(31),int(-1),int(29),int(30),int(43),int(-1),int(30),int(44),int(43),int(-1),int(45),int(31),int(46),int(-1),int(45),int(30),int(31),int(-1),int(28),int(29),int(41),int(-1),int(29),int(42),int(41),int(-1),int(28),int(40),int(27),int(-1),int(28),int(41),int(40),int(-1),int(26),int(27),int(39),int(-1),int(27),int(38),int(39),int(-1),int(25),int(39),int(37),int(-1),int(25),int(26),int(39),int(-1),int(24),int(36),int(23),int(-1),int(24),int(37),int(36),int(-1),int(23),int(34),int(22),int(-1),int(34),int(33),int(22),int(-1),int(22),int(32),int(21),int(-1),int(32),int(20),int(21),int(-1)], creaseAngle=1.48, 
coord=
Coordinate(point=[(0.211,0.828,-0.0434),(0.194,0.81,-0.0445),(0.237,0.82,-0.0425),(0.236,0.82,-0.0237),(0.194,0.81,-0.0254),(0.21,0.828,-0.0247),(0.252,0.801,-0.0424),(0.252,0.801,-0.0231),(0.269,0.765,-0.0426),(0.268,0.765,-0.0225),(0.273,0.732,-0.0395),(0.272,0.732,-0.0223),(0.27,0.704,-0.0342),(0.27,0.704,-0.0224),(0.262,0.703,-0.0345),(0.261,0.703,-0.0227),(0.256,0.717,-0.0389),(0.256,0.717,-0.023),(0.255,0.738,-0.0408),(0.255,0.738,-0.023),(0.251,0.734,-0.0406),(0.251,0.734,-0.0232),(0.251,0.692,-0.0232),(0.248,0.657,-0.0233),(0.24,0.645,-0.0236),(0.226,0.637,-0.0241),(0.213,0.639,-0.0246),(0.197,0.652,-0.0253),(0.188,0.669,-0.0256),(0.184,0.697,-0.0258),(0.183,0.73,-0.0258),(0.187,0.77,-0.0257),(0.244,0.696,-0.0375),(0.244,0.692,-0.0372),(0.242,0.661,-0.0345),(0.241,0.658,-0.0343),(0.241,0.656,-0.0341),(0.231,0.646,-0.0336),(0.206,0.65,-0.0349),(0.218,0.644,-0.034),(0.205,0.652,-0.0352),(0.198,0.667,-0.0367),(0.195,0.691,-0.039),(0.194,0.696,-0.0395),(0.193,0.725,-0.042),(0.193,0.731,-0.0425),(0.197,0.765,-0.0449),(0.197,0.77,-0.0453)])))])])
])])
])])
])])
]),
ProtoInstance(name="Joint", DEF="hanim_r_shoulder", fieldValue=[fieldValue(name="name", value="r_shoulder"),
fieldValue(name="center", value=[-0.167,1.36,-0.0458]),
fieldValue(name="children", children=[
ProtoInstance(name="Segment", DEF="hanim_r_upperarm", fieldValue=[fieldValue(name="name", value="r_upperarm"),
fieldValue(name="children", children=[
Transform(DEF="r_upperarm_adjust", center=((-0.182,1.22,-0.047)), rotation=((1,0,0,0.0836)), translation=((0,0.000589,-0.01169)), children=[
Shape(
appearance=
Appearance(
material=
Material(USE="WetShirtColor")), 
geometry=
IndexedFaceSet(coordIndex=[int(14),int(10),int(20),int(-1),int(10),int(13),int(20),int(-1),int(13),int(22),int(20),int(-1),int(19),int(14),int(20),int(-1),int(14),int(19),int(12),int(-1),int(19),int(20),int(24),int(-1),int(20),int(22),int(25),int(-1),int(22),int(13),int(25),int(-1),int(13),int(10),int(11),int(-1),int(10),int(14),int(5),int(-1),int(12),int(5),int(14),int(-1),int(5),int(11),int(10),int(-1),int(11),int(25),int(13),int(-1),int(25),int(24),int(20),int(-1),int(24),int(12),int(19),int(-1),int(12),int(24),int(9),int(-1),int(25),int(11),int(8),int(-1),int(11),int(5),int(2),int(-1),int(5),int(12),int(9),int(-1),int(9),int(2),int(5),int(-1),int(2),int(8),int(11),int(-1),int(8),int(23),int(25),int(-1),int(23),int(27),int(25),int(-1),int(21),int(9),int(24),int(-1),int(9),int(21),int(7),int(-1),int(27),int(23),int(18),int(-1),int(23),int(8),int(18),int(-1),int(8),int(2),int(6),int(-1),int(2),int(9),int(7),int(-1),int(7),int(1),int(2),int(-1),int(1),int(6),int(2),int(-1),int(6),int(18),int(8),int(-1),int(18),int(26),int(27),int(-1),int(16),int(7),int(21),int(-1),int(7),int(16),int(4),int(-1),int(16),int(26),int(17),int(-1),int(26),int(18),int(15),int(-1),int(18),int(6),int(3),int(-1),int(6),int(1),int(0),int(-1),int(1),int(7),int(0),int(-1),int(4),int(0),int(7),int(-1),int(0),int(3),int(6),int(-1),int(3),int(15),int(18),int(-1),int(15),int(17),int(26),int(-1),int(17),int(4),int(16),int(-1),int(3),int(0),int(15),int(-1),int(15),int(0),int(4),int(-1),int(15),int(4),int(17),int(-1),int(25),int(27),int(24),int(-1),int(27),int(21),int(24),int(-1),int(27),int(26),int(21),int(-1),int(26),int(16),int(21),int(-1)], creaseAngle=1.53, 
coord=
Coordinate(point=[(-0.221,1.08,-0.0352),(-0.214,1.14,-0.0405),(-0.209,1.26,-0.0427),(-0.208,1.07,-0.00133),(-0.203,1.08,-0.0744),(-0.201,1.33,-0.0411),(-0.198,1.14,-0.0024),(-0.198,1.13,-0.076),(-0.19,1.26,-0.00401),(-0.189,1.26,-0.0808),(-0.185,1.38,-0.0395),(-0.185,1.33,-0.00025),(-0.182,1.33,-0.0728),(-0.174,1.37,-0.0158),(-0.174,1.37,-0.0625),(-0.169,1.08,-0.00885),(-0.167,1.13,-0.0744),(-0.162,1.05,-0.0561),(-0.16,1.13,-0.000793),(-0.157,1.38,-0.0733),(-0.156,1.39,-0.0464),(-0.155,1.26,-0.0867),(-0.154,1.37,-0.0185),(-0.151,1.26,-0.000789),(-0.151,1.33,-0.0937),(-0.15,1.34,-0.000787),(-0.15,1.13,-0.0411),(-0.141,1.26,-0.0421)])))])])
]),
ProtoInstance(name="Joint", DEF="hanim_r_elbow", fieldValue=[fieldValue(name="name", value="r_elbow"),
fieldValue(name="center", value=[-0.192,1.07,-0.0498]),
fieldValue(name="children", children=[
ProtoInstance(name="Segment", DEF="hanim_r_forearm", fieldValue=[fieldValue(name="name", value="r_forearm"),
fieldValue(name="children", children=[
Transform(DEF="r_forearm_adjust", center=((-0.198,0.961,-0.0397)), rotation=((-1,0,0,0.1254)), translation=((0,0.003466,-0.01065)), children=[
Shape(
appearance=
Appearance(
material=
Material(USE="WetShirtColor")), 
geometry=
IndexedFaceSet(coordIndex=[int(20),int(13),int(15),int(-1),int(13),int(8),int(15),int(-1),int(8),int(12),int(15),int(-1),int(12),int(18),int(15),int(-1),int(18),int(22),int(15),int(-1),int(22),int(20),int(15),int(-1),int(20),int(22),int(21),int(-1),int(22),int(18),int(24),int(-1),int(18),int(12),int(7),int(-1),int(12),int(8),int(7),int(-1),int(8),int(13),int(3),int(-1),int(13),int(20),int(10),int(-1),int(21),int(10),int(20),int(-1),int(10),int(3),int(13),int(-1),int(3),int(7),int(8),int(-1),int(7),int(19),int(18),int(-1),int(19),int(24),int(18),int(-1),int(24),int(21),int(22),int(-1),int(21),int(24),int(23),int(-1),int(24),int(19),int(16),int(-1),int(19),int(7),int(6),int(-1),int(7),int(3),int(1),int(-1),int(3),int(10),int(5),int(-1),int(10),int(21),int(17),int(-1),int(17),int(5),int(10),int(-1),int(5),int(1),int(3),int(-1),int(1),int(6),int(7),int(-1),int(6),int(16),int(19),int(-1),int(16),int(23),int(24),int(-1),int(23),int(17),int(21),int(-1),int(1),int(5),int(2),int(-1),int(5),int(17),int(9),int(-1),int(9),int(2),int(5),int(-1),int(1),int(4),int(6),int(-1),int(4),int(16),int(6),int(-1),int(23),int(9),int(17),int(-1),int(9),int(23),int(14),int(-1),int(23),int(16),int(11),int(-1),int(4),int(11),int(16),int(-1),int(11),int(14),int(23),int(-1),int(11),int(4),int(0),int(-1),int(11),int(0),int(14),int(-1),int(0),int(2),int(14),int(-1),int(14),int(2),int(9),int(-1),int(2),int(0),int(1),int(-1),int(0),int(4),int(1),int(-1)], creaseAngle=1.73, 
coord=
Coordinate(point=[(-0.237,0.82,-0.0282),(-0.235,1.02,-0.033),(-0.231,0.819,-0.0609),(-0.228,1.07,-0.0319),(-0.224,0.818,-0.00778),(-0.221,1.01,-0.0744),(-0.218,1.01,-0.00133),(-0.214,1.07,-0.00402),(-0.213,1.1,-0.025),(-0.21,0.818,-0.0615),(-0.208,1.08,-0.0765),(-0.205,0.819,-0.00832),(-0.203,1.1,-0.0158),(-0.202,1.1,-0.0566),(-0.201,0.82,-0.0405),(-0.189,1.1,-0.0395),(-0.183,1.01,-0.00831),(-0.183,1.01,-0.0781),(-0.182,1.09,-0.00563),(-0.179,1.07,-0.00294),(-0.177,1.09,-0.0609),(-0.176,1.08,-0.0781),(-0.167,1.09,-0.0325),(-0.166,1,-0.0405),(-0.16,1.06,-0.0373)])))])])
]),
ProtoInstance(name="Joint", DEF="hanim_r_wrist", fieldValue=[fieldValue(name="name", value="r_wrist"),
fieldValue(name="center", value=[-0.217,0.811,-0.0338]),
fieldValue(name="children", children=[
ProtoInstance(name="Segment", DEF="hanim_r_hand", fieldValue=[fieldValue(name="name", value="r_hand"),
fieldValue(name="children", children=[
Transform(DEF="r_hand_adjust", center=((-0.217,0.811,-0.0338)), rotation=((-0.09024,0.994,-0.0624,1.216)), children=[
Shape(
appearance=
Appearance(
material=
Material(USE="Skin_Color")), 
geometry=
IndexedFaceSet(coordIndex=[int(10),int(9),int(0),int(-1),int(11),int(30),int(31),int(-1),int(1),int(12),int(11),int(-1),int(1),int(11),int(0),int(-1),int(2),int(13),int(12),int(-1),int(2),int(12),int(1),int(-1),int(3),int(14),int(13),int(-1),int(3),int(13),int(2),int(-1),int(4),int(15),int(14),int(-1),int(4),int(14),int(3),int(-1),int(5),int(16),int(15),int(-1),int(5),int(15),int(4),int(-1),int(6),int(17),int(16),int(-1),int(6),int(16),int(5),int(-1),int(7),int(18),int(17),int(-1),int(7),int(17),int(6),int(-1),int(8),int(19),int(18),int(-1),int(8),int(18),int(7),int(-1),int(10),int(31),int(30),int(-1),int(10),int(30),int(9),int(-1),int(0),int(11),int(31),int(-1),int(0),int(31),int(10),int(-1),int(22),int(23),int(24),int(-1),int(21),int(22),int(24),int(-1),int(21),int(24),int(25),int(-1),int(21),int(25),int(26),int(-1),int(20),int(21),int(26),int(-1),int(20),int(26),int(27),int(-1),int(19),int(20),int(27),int(-1),int(19),int(27),int(28),int(-1),int(14),int(15),int(16),int(-1),int(14),int(16),int(17),int(-1),int(14),int(17),int(18),int(-1),int(13),int(14),int(18),int(-1),int(13),int(18),int(29),int(-1),int(12),int(13),int(29),int(-1),int(12),int(29),int(30),int(-1),int(11),int(12),int(30),int(-1),int(18),int(19),int(28),int(-1),int(18),int(28),int(29),int(-1),int(6),int(5),int(4),int(-1),int(6),int(4),int(3),int(-1),int(7),int(6),int(3),int(-1),int(7),int(3),int(2),int(-1),int(9),int(2),int(1),int(-1),int(9),int(1),int(0),int(-1),int(32),int(38),int(33),int(-1),int(33),int(38),int(39),int(-1),int(33),int(39),int(34),int(-1),int(34),int(39),int(40),int(-1),int(34),int(40),int(35),int(-1),int(35),int(40),int(41),int(-1),int(35),int(41),int(36),int(-1),int(36),int(41),int(42),int(-1),int(36),int(42),int(37),int(-1),int(37),int(42),int(43),int(-1),int(37),int(43),int(44),int(-1),int(44),int(43),int(8),int(-1),int(44),int(8),int(45),int(-1),int(45),int(8),int(46),int(-1),int(46),int(8),int(7),int(-1),int(46),int(7),int(2),int(-1),int(46),int(2),int(47),int(-1),int(9),int(47),int(2),int(-1),int(25),int(34),int(35),int(-1),int(25),int(33),int(34),int(-1),int(25),int(24),int(33),int(-1),int(24),int(32),int(33),int(-1),int(32),int(24),int(23),int(-1),int(40),int(39),int(21),int(-1),int(41),int(40),int(21),int(-1),int(43),int(19),int(8),int(-1),int(43),int(20),int(19),int(-1),int(43),int(42),int(20),int(-1),int(21),int(20),int(41),int(-1),int(20),int(42),int(41),int(-1),int(38),int(22),int(39),int(-1),int(22),int(21),int(39),int(-1),int(32),int(23),int(38),int(-1),int(23),int(22),int(38),int(-1),int(26),int(25),int(35),int(-1),int(27),int(36),int(37),int(-1),int(27),int(37),int(28),int(-1),int(37),int(44),int(28),int(-1),int(26),int(35),int(27),int(-1),int(35),int(36),int(27),int(-1),int(28),int(44),int(45),int(-1),int(29),int(46),int(47),int(-1),int(29),int(9),int(30),int(-1),int(29),int(47),int(9),int(-1),int(28),int(45),int(29),int(-1),int(45),int(46),int(29),int(-1)], creaseAngle=1.57, 
coord=
Coordinate(point=[(-0.237,0.82,-0.0425),(-0.252,0.801,-0.0424),(-0.269,0.765,-0.0426),(-0.273,0.732,-0.0395),(-0.27,0.704,-0.0342),(-0.262,0.703,-0.0345),(-0.256,0.717,-0.0389),(-0.255,0.738,-0.0408),(-0.251,0.734,-0.0406),(-0.194,0.81,-0.0445),(-0.211,0.828,-0.0434),(-0.236,0.82,-0.0237),(-0.252,0.801,-0.0231),(-0.268,0.765,-0.0225),(-0.272,0.732,-0.0223),(-0.27,0.704,-0.0224),(-0.261,0.703,-0.0227),(-0.256,0.717,-0.023),(-0.255,0.738,-0.023),(-0.251,0.734,-0.0232),(-0.251,0.692,-0.0232),(-0.248,0.657,-0.0233),(-0.24,0.645,-0.0236),(-0.226,0.637,-0.0241),(-0.213,0.639,-0.0246),(-0.197,0.652,-0.0253),(-0.188,0.669,-0.0256),(-0.184,0.697,-0.0258),(-0.183,0.73,-0.0258),(-0.187,0.77,-0.0257),(-0.194,0.81,-0.0254),(-0.21,0.828,-0.0247),(-0.221,0.641,-0.0336),(-0.21,0.65,-0.0348),(-0.206,0.652,-0.0352),(-0.198,0.667,-0.0368),(-0.193,0.692,-0.0392),(-0.192,0.696,-0.0396),(-0.231,0.646,-0.0336),(-0.238,0.656,-0.0342),(-0.24,0.658,-0.0344),(-0.24,0.662,-0.0347),(-0.243,0.692,-0.0372),(-0.243,0.696,-0.0376),(-0.192,0.725,-0.0421),(-0.192,0.73,-0.0426),(-0.195,0.766,-0.0451),(-0.196,0.77,-0.0454)])))])])
])])
])])
])])
]),
ProtoInstance(name="Joint", DEF="hanim_vc4", fieldValue=[fieldValue(name="name", value="vc4"),
fieldValue(name="center", value=[0,1.43,-0.0458]),
fieldValue(name="children", children=[
ProtoInstance(name="Segment", DEF="hanim_c4", fieldValue=[fieldValue(name="name", value="c4"),
fieldValue(name="children", children=[
Shape(
appearance=
Appearance(
material=
Material(USE="WetShirtColor")), 
geometry=
IndexedFaceSet(DEF="neck", coordIndex=[int(6),int(5),int(2),int(-1),int(6),int(2),int(3),int(-1),int(5),int(4),int(1),int(-1),int(5),int(1),int(2),int(-1),int(4),int(7),int(0),int(-1),int(4),int(0),int(1),int(-1),int(11),int(10),int(9),int(-1),int(11),int(9),int(8),int(-1),int(10),int(13),int(12),int(-1),int(10),int(12),int(9),int(-1),int(13),int(15),int(14),int(-1),int(13),int(14),int(12),int(-1),int(6),int(3),int(11),int(-1),int(6),int(11),int(8),int(-1),int(7),int(14),int(15),int(-1),int(7),int(15),int(0),int(-1),int(2),int(10),int(11),int(-1),int(2),int(11),int(3),int(-1),int(2),int(1),int(13),int(-1),int(2),int(13),int(10),int(-1),int(1),int(0),int(15),int(-1),int(1),int(15),int(13),int(-1),int(9),int(5),int(6),int(-1),int(9),int(6),int(8),int(-1),int(9),int(12),int(4),int(-1),int(9),int(4),int(5),int(-1),int(12),int(14),int(7),int(-1),int(12),int(7),int(4),int(-1)], creaseAngle=1.91, 
coord=
Coordinate(point=[(0.0105,1.54,-0.1),(0.0357,1.54,-0.0685),(0.0382,1.55,-0.0474),(0.0105,1.55,-0.0204),(0.0373,1.4,-0.0593),(0.0577,1.4,-0.0266),(0.0158,1.4,0.00512),(0.0132,1.41,-0.0824),(-0.0158,1.4,0.00512),(-0.0577,1.4,-0.0266),(-0.0382,1.55,-0.0474),(-0.0105,1.55,-0.0204),(-0.0373,1.4,-0.0593),(-0.0357,1.54,-0.0685),(-0.0132,1.41,-0.0824),(-0.0105,1.54,-0.1)])))])
]),
ProtoInstance(name="Joint", DEF="hanim_skullbase", fieldValue=[fieldValue(name="name", value="skullbase"),
fieldValue(name="center", value=[0,1.54,-0.0409]),
fieldValue(name="children", children=[
ProtoInstance(name="Segment", DEF="hanim_skull", fieldValue=[fieldValue(name="name", value="skull"),
fieldValue(name="children", children=[
Shape(
appearance=
Appearance(
material=
Material(USE="Skin_Color")), 
geometry=
IndexedFaceSet(DEF="headIFS", colorIndex=[int(1),int(1),int(1),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(1),int(1),int(1),int(-1),int(1),int(1),int(1),int(-1),int(0),int(0),int(0),int(-1),int(1),int(1),int(1),int(-1),int(1),int(1),int(1),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(2),int(2),int(2),int(-1),int(2),int(2),int(2),int(-1),int(2),int(2),int(2),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(2),int(2),int(2),int(-1),int(2),int(2),int(2),int(-1),int(2),int(2),int(2),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(2),int(2),int(2),int(-1),int(2),int(2),int(2),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(1),int(1),int(1),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(1),int(1),int(1),int(-1),int(1),int(1),int(1),int(-1),int(1),int(1),int(1),int(-1),int(1),int(1),int(1),int(-1),int(1),int(1),int(1),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(2),int(2),int(2),int(-1),int(2),int(2),int(2),int(-1),int(2),int(2),int(2),int(-1),int(2),int(2),int(2),int(-1),int(2),int(2),int(2),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(2),int(2),int(2),int(-1),int(2),int(2),int(2),int(-1),int(2),int(2),int(2),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(2),int(2),int(2),int(-1),int(2),int(2),int(2),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(4),int(4),int(4),int(-1),int(0),int(0),int(0),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(4),int(4),int(4),int(-1),int(0),int(0),int(0),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(0),int(0),int(0),int(-1),int(0),int(0),int(0),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1),int(4),int(4),int(4),int(-1)], coordIndex=[int(48),int(87),int(58),int(-1),int(91),int(92),int(59),int(-1),int(59),int(92),int(88),int(-1),int(88),int(93),int(231),int(-1),int(232),int(86),int(233),int(-1),int(86),int(89),int(233),int(-1),int(89),int(57),int(56),int(-1),int(49),int(55),int(57),int(-1),int(102),int(86),int(96),int(-1),int(86),int(90),int(96),int(-1),int(97),int(95),int(96),int(-1),int(97),int(127),int(95),int(-1),int(41),int(96),int(154),int(-1),int(41),int(102),int(96),int(-1),int(99),int(102),int(41),int(-1),int(153),int(99),int(41),int(-1),int(102),int(40),int(86),int(-1),int(234),int(235),int(236),int(-1),int(87),int(237),int(58),int(-1),int(56),int(57),int(91),int(-1),int(87),int(234),int(237),int(-1),int(234),int(236),int(237),int(-1),int(89),int(49),int(57),int(-1),int(49),int(50),int(55),int(-1),int(40),int(89),int(86),int(-1),int(89),int(56),int(233),int(-1),int(232),int(90),int(86),int(-1),int(90),int(97),int(96),int(-1),int(92),int(93),int(88),int(-1),int(93),int(94),int(231),int(-1),int(232),int(231),int(94),int(-1),int(97),int(90),int(232),int(-1),int(96),int(42),int(154),int(-1),int(95),int(42),int(96),int(-1),int(53),int(46),int(45),int(-1),int(53),int(45),int(51),int(-1),int(53),int(51),int(92),int(-1),int(92),int(51),int(52),int(-1),int(92),int(52),int(93),int(-1),int(94),int(93),int(52),int(-1),int(94),int(52),int(4),int(-1),int(97),int(232),int(94),int(-1),int(54),int(47),int(46),int(-1),int(54),int(46),int(53),int(-1),int(55),int(47),int(54),int(-1),int(50),int(47),int(55),int(-1),int(34),int(33),int(50),int(-1),int(34),int(50),int(49),int(-1),int(35),int(34),int(49),int(-1),int(35),int(49),int(89),int(-1),int(35),int(89),int(40),int(-1),int(99),int(39),int(102),int(-1),int(39),int(35),int(40),int(-1),int(31),int(34),int(35),int(-1),int(31),int(35),int(32),int(-1),int(14),int(32),int(35),int(-1),int(14),int(35),int(39),int(-1),int(14),int(39),int(98),int(-1),int(137),int(38),int(153),int(-1),int(38),int(99),int(153),int(-1),int(38),int(98),int(99),int(-1),int(37),int(238),int(239),int(-1),int(11),int(238),int(37),int(-1),int(101),int(37),int(36),int(-1),int(241),int(141),int(242),int(-1),int(10),int(12),int(242),int(-1),int(12),int(13),int(14),int(-1),int(12),int(14),int(243),int(-1),int(13),int(15),int(32),int(-1),int(13),int(32),int(14),int(-1),int(15),int(16),int(31),int(-1),int(15),int(31),int(32),int(-1),int(2),int(70),int(10),int(-1),int(2),int(10),int(141),int(-1),int(70),int(69),int(12),int(-1),int(70),int(12),int(10),int(-1),int(69),int(68),int(13),int(-1),int(69),int(13),int(12),int(-1),int(68),int(67),int(15),int(-1),int(68),int(15),int(13),int(-1),int(67),int(66),int(16),int(-1),int(67),int(16),int(15),int(-1),int(98),int(39),int(99),int(-1),int(101),int(11),int(37),int(-1),int(100),int(101),int(36),int(-1),int(36),int(244),int(240),int(-1),int(141),int(10),int(242),int(-1),int(12),int(243),int(242),int(-1),int(36),int(37),int(239),int(-1),int(36),int(239),int(244),int(-1),int(57),int(55),int(91),int(-1),int(55),int(54),int(91),int(-1),int(39),int(40),int(102),int(-1),int(123),int(103),int(120),int(-1),int(114),int(122),int(104),int(-1),int(115),int(122),int(114),int(-1),int(208),int(105),int(115),int(-1),int(210),int(119),int(211),int(-1),int(210),int(106),int(119),int(-1),int(116),int(107),int(106),int(-1),int(107),int(108),int(117),int(-1),int(126),int(119),int(109),int(-1),int(126),int(110),int(119),int(-1),int(126),int(95),int(125),int(-1),int(95),int(127),int(125),int(-1),int(154),int(126),int(111),int(-1),int(126),int(109),int(111),int(-1),int(111),int(109),int(112),int(-1),int(111),int(112),int(153),int(-1),int(119),int(113),int(109),int(-1),int(207),int(213),int(214),int(-1),int(123),int(209),int(103),int(-1),int(213),int(212),int(214),int(-1),int(209),int(214),int(103),int(-1),int(209),int(207),int(214),int(-1),int(107),int(117),int(106),int(-1),int(108),int(118),int(117),int(-1),int(119),int(106),int(113),int(-1),int(210),int(116),int(106),int(-1),int(119),int(110),int(211),int(-1),int(126),int(125),int(110),int(-1),int(115),int(105),int(122),int(-1),int(208),int(124),int(105),int(-1),int(124),int(208),int(211),int(-1),int(211),int(110),int(125),int(-1),int(154),int(42),int(126),int(-1),int(126),int(42),int(95),int(-1),int(168),int(128),int(121),int(-1),int(170),int(168),int(121),int(-1),int(122),int(170),int(121),int(-1),int(172),int(170),int(122),int(-1),int(105),int(172),int(122),int(-1),int(172),int(105),int(124),int(-1),int(4),int(172),int(124),int(-1),int(124),int(211),int(125),int(-1),int(128),int(130),int(129),int(-1),int(121),int(128),int(129),int(-1),int(129),int(130),int(108),int(-1),int(108),int(130),int(118),int(-1),int(118),int(131),int(132),int(-1),int(117),int(118),int(132),int(-1),int(117),int(132),int(133),int(-1),int(106),int(117),int(133),int(-1),int(113),int(106),int(133),int(-1),int(109),int(152),int(112),int(-1),int(113),int(133),int(152),int(-1),int(133),int(132),int(134),int(-1),int(135),int(133),int(134),int(-1),int(133),int(135),int(136),int(-1),int(152),int(133),int(136),int(-1),int(148),int(152),int(136),int(-1),int(153),int(138),int(137),int(-1),int(153),int(112),int(138),int(-1),int(112),int(148),int(138),int(-1),int(219),int(217),int(139),int(-1),int(36),int(240),int(149),int(-1),int(139),int(217),int(140),int(-1),int(149),int(139),int(151),int(-1),int(36),int(149),int(100),int(-1),int(220),int(141),int(241),int(-1),int(220),int(150),int(142),int(-1),int(136),int(143),int(150),int(-1),int(221),int(136),int(150),int(-1),int(135),int(144),int(143),int(-1),int(136),int(135),int(143),int(-1),int(134),int(158),int(144),int(-1),int(135),int(134),int(144),int(-1),int(142),int(161),int(2),int(-1),int(141),int(142),int(2),int(-1),int(150),int(145),int(161),int(-1),int(142),int(150),int(161),int(-1),int(143),int(146),int(145),int(-1),int(150),int(143),int(145),int(-1),int(144),int(147),int(146),int(-1),int(143),int(144),int(146),int(-1),int(158),int(160),int(147),int(-1),int(144),int(158),int(147),int(-1),int(112),int(152),int(148),int(-1),int(139),int(140),int(151),int(-1),int(149),int(151),int(100),int(-1),int(240),int(218),int(149),int(-1),int(220),int(142),int(141),int(-1),int(220),int(221),int(150),int(-1),int(219),int(139),int(149),int(-1),int(218),int(219),int(149),int(-1),int(104),int(108),int(107),int(-1),int(104),int(129),int(108),int(-1),int(109),int(113),int(152),int(-1),int(153),int(41),int(111),int(-1),int(129),int(104),int(122),int(-1),int(129),int(122),int(121),int(-1),int(91),int(54),int(92),int(-1),int(54),int(53),int(92),int(-1),int(97),int(94),int(127),int(-1),int(127),int(94),int(4),int(-1),int(125),int(127),int(124),int(-1),int(127),int(4),int(124),int(-1),int(154),int(111),int(41),int(-1),int(31),int(30),int(33),int(-1),int(31),int(33),int(34),int(-1),int(16),int(17),int(30),int(-1),int(16),int(30),int(31),int(-1),int(66),int(65),int(17),int(-1),int(66),int(17),int(16),int(-1),int(2),int(73),int(156),int(-1),int(2),int(156),int(70),int(-1),int(156),int(72),int(66),int(-1),int(156),int(66),int(67),int(-1),int(156),int(67),int(68),int(-1),int(156),int(68),int(69),int(-1),int(156),int(69),int(70),int(-1),int(72),int(71),int(65),int(-1),int(72),int(65),int(66),int(-1),int(17),int(18),int(30),int(-1),int(45),int(44),int(51),int(-1),int(51),int(44),int(43),int(-1),int(51),int(43),int(52),int(-1),int(52),int(43),int(1),int(-1),int(52),int(1),int(4),int(-1),int(245),int(246),int(27),int(-1),int(245),int(27),int(3),int(-1),int(246),int(247),int(28),int(-1),int(246),int(28),int(27),int(-1),int(248),int(22),int(29),int(-1),int(248),int(29),int(28),int(-1),int(248),int(28),int(247),int(-1),int(27),int(26),int(0),int(-1),int(27),int(0),int(3),int(-1),int(27),int(28),int(25),int(-1),int(27),int(25),int(26),int(-1),int(29),int(24),int(25),int(-1),int(29),int(25),int(28),int(-1),int(22),int(23),int(24),int(-1),int(22),int(24),int(29),int(-1),int(249),int(250),int(22),int(-1),int(249),int(22),int(248),int(-1),int(250),int(60),int(23),int(-1),int(250),int(23),int(22),int(-1),int(17),int(254),int(18),int(-1),int(65),int(254),int(17),int(-1),int(71),int(64),int(65),int(-1),int(63),int(74),int(75),int(-1),int(63),int(75),int(61),int(-1),int(64),int(255),int(254),int(-1),int(75),int(62),int(61),int(-1),int(62),int(76),int(60),int(-1),int(76),int(77),int(23),int(-1),int(76),int(23),int(60),int(-1),int(77),int(24),int(23),int(-1),int(77),int(78),int(25),int(-1),int(77),int(25),int(24),int(-1),int(78),int(84),int(26),int(-1),int(78),int(26),int(25),int(-1),int(84),int(192),int(0),int(-1),int(84),int(0),int(26),int(-1),int(84),int(83),int(193),int(-1),int(84),int(193),int(192),int(-1),int(79),int(83),int(84),int(-1),int(79),int(84),int(78),int(-1),int(76),int(79),int(78),int(-1),int(76),int(78),int(77),int(-1),int(80),int(83),int(79),int(-1),int(80),int(204),int(83),int(-1),int(75),int(81),int(80),int(-1),int(81),int(85),int(204),int(-1),int(81),int(204),int(80),int(-1),int(74),int(81),int(75),int(-1),int(74),int(82),int(81),int(-1),int(82),int(5),int(85),int(-1),int(82),int(85),int(81),int(-1),int(155),int(8),int(71),int(-1),int(155),int(71),int(72),int(-1),int(8),int(6),int(64),int(-1),int(8),int(64),int(71),int(-1),int(6),int(7),int(255),int(-1),int(6),int(255),int(64),int(-1),int(7),int(9),int(256),int(-1),int(7),int(256),int(255),int(-1),int(9),int(257),int(256),int(-1),int(73),int(155),int(156),int(-1),int(155),int(72),int(156),int(-1),int(204),int(193),int(83),int(-1),int(64),int(254),int(65),int(-1),int(131),int(157),int(134),int(-1),int(132),int(131),int(134),int(-1),int(157),int(159),int(158),int(-1),int(134),int(157),int(158),int(-1),int(159),int(206),int(160),int(-1),int(158),int(159),int(160),int(-1),int(203),int(73),int(2),int(-1),int(161),int(203),int(2),int(-1),int(160),int(162),int(203),int(-1),int(147),int(160),int(203),int(-1),int(146),int(147),int(203),int(-1),int(145),int(146),int(203),int(-1),int(161),int(145),int(203),int(-1),int(206),int(163),int(162),int(-1),int(160),int(206),int(162),int(-1),int(157),int(164),int(159),int(-1),int(170),int(169),int(168),int(-1),int(171),int(169),int(170),int(-1),int(172),int(171),int(170),int(-1),int(1),int(171),int(172),int(-1),int(4),int(1),int(172),int(-1),int(173),int(227),int(245),int(-1),int(3),int(173),int(245),int(-1),int(174),int(226),int(227),int(-1),int(173),int(174),int(227),int(-1),int(176),int(175),int(215),int(-1),int(174),int(176),int(215),int(-1),int(226),int(174),int(215),int(-1),int(0),int(177),int(173),int(-1),int(3),int(0),int(173),int(-1),int(178),int(174),int(173),int(-1),int(177),int(178),int(173),int(-1),int(178),int(179),int(176),int(-1),int(174),int(178),int(176),int(-1),int(179),int(180),int(175),int(-1),int(176),int(179),int(175),int(-1),int(175),int(225),int(216),int(-1),int(215),int(175),int(216),int(-1),int(180),int(181),int(225),int(-1),int(175),int(180),int(225),int(-1),int(164),int(228),int(159),int(-1),int(159),int(228),int(206),int(-1),int(206),int(185),int(163),int(-1),int(187),int(186),int(184),int(-1),int(183),int(187),int(184),int(-1),int(228),int(229),int(185),int(-1),int(183),int(182),int(187),int(-1),int(181),int(188),int(182),int(-1),int(180),int(189),int(188),int(-1),int(181),int(180),int(188),int(-1),int(180),int(179),int(189),int(-1),int(178),int(190),int(189),int(-1),int(179),int(178),int(189),int(-1),int(177),int(191),int(190),int(-1),int(178),int(177),int(190),int(-1),int(0),int(192),int(191),int(-1),int(177),int(0),int(191),int(-1),int(193),int(205),int(191),int(-1),int(192),int(193),int(191),int(-1),int(191),int(205),int(194),int(-1),int(190),int(191),int(194),int(-1),int(190),int(194),int(188),int(-1),int(189),int(190),int(188),int(-1),int(194),int(205),int(195),int(-1),int(205),int(204),int(195),int(-1),int(195),int(196),int(187),int(-1),int(204),int(85),int(196),int(-1),int(195),int(204),int(196),int(-1),int(187),int(196),int(186),int(-1),int(196),int(197),int(186),int(-1),int(85),int(5),int(197),int(-1),int(196),int(85),int(197),int(-1),int(163),int(198),int(202),int(-1),int(162),int(163),int(202),int(-1),int(185),int(199),int(198),int(-1),int(163),int(185),int(198),int(-1),int(229),int(200),int(199),int(-1),int(185),int(229),int(199),int(-1),int(230),int(201),int(200),int(-1),int(229),int(230),int(200),int(-1),int(230),int(257),int(201),int(-1),int(203),int(202),int(73),int(-1),int(203),int(162),int(202),int(-1),int(205),int(193),int(204),int(-1),int(206),int(228),int(185),int(-1),int(198),int(8),int(155),int(-1),int(198),int(155),int(202),int(-1),int(155),int(73),int(202),int(-1),int(199),int(6),int(8),int(-1),int(199),int(8),int(198),int(-1),int(7),int(6),int(199),int(-1),int(7),int(199),int(200),int(-1),int(201),int(9),int(7),int(-1),int(201),int(7),int(200),int(-1),int(201),int(257),int(9),int(-1),int(188),int(194),int(195),int(-1),int(188),int(195),int(182),int(-1),int(195),int(187),int(182),int(-1),int(80),int(79),int(76),int(-1),int(80),int(62),int(75),int(-1),int(80),int(76),int(62),int(-1),int(47),int(50),int(33),int(-1),int(131),int(118),int(130),int(-1),int(20),int(21),int(47),int(-1),int(21),int(46),int(47),int(-1),int(20),int(33),int(19),int(-1),int(20),int(47),int(33),int(-1),int(33),int(30),int(19),int(-1),int(30),int(18),int(19),int(-1),int(62),int(60),int(251),int(-1),int(60),int(250),int(251),int(-1),int(252),int(61),int(251),int(-1),int(61),int(62),int(251),int(-1),int(252),int(63),int(61),int(-1),int(252),int(253),int(63),int(-1),int(166),int(130),int(167),int(-1),int(130),int(128),int(167),int(-1),int(166),int(131),int(130),int(-1),int(166),int(165),int(131),int(-1),int(165),int(157),int(131),int(-1),int(165),int(164),int(157),int(-1),int(224),int(181),int(182),int(-1),int(224),int(225),int(181),int(-1),int(224),int(183),int(223),int(-1),int(224),int(182),int(183),int(-1),int(183),int(184),int(223),int(-1),int(184),int(222),int(223),int(-1)], creaseAngle=0.7854, 
coord=
Coordinate(DEF="Face", point=[(0,1.708,-0.0435),(0,1.655,0.04322),(0,1.486,0.02335),(0,1.694,0.007789),(0,1.631,0.051),(0,1.524,-0.102),(0.04,1.51,-0.07278),(0.04029,1.514,-0.08254),(0.03528,1.502,-0.05013),(0.03479,1.517,-0.09269),(0.0116,1.494,0.03382),(0.01946,1.52,0.03421),(0.02204,1.494,0.0272),(0.02734,1.498,0.02215),(0.02788,1.528,0.03084),(0.0338,1.503,0.0124),(0.04008,1.509,0.002821),(0.05122,1.518,-0.02784),(0.05867,1.544,-0.03316),(0.06433,1.563,-0.03678),(0.06732,1.583,-0.03683),(0.06769,1.617,-0.03436),(0.06641,1.637,-0.03046),(0.06818,1.637,-0.04285),(0.06308,1.666,-0.04036),(0.05305,1.685,-0.03987),(0.03136,1.7,-0.0413),(0.02919,1.688,0.0091),(0.05272,1.674,-0.001657),(0.06061,1.66,-0.0101),(0.05254,1.541,-0.01363),(0.04099,1.527,0.008832),(0.03528,1.524,0.02097),(0.05792,1.557,-0.004307),(0.04413,1.539,0.0149),(0.03746,1.539,0.02656),(0.003407,1.524,0.04155),(0.01481,1.526,0.03912),(0.005112,1.532,0.04358),(0.02438,1.542,0.03578),(0.02636,1.55,0.03808),(0.006135,1.55,0.0545),(0,1.559,0.05502),(0.02958,1.651,0.03965),(0.04847,1.643,0.02895),(0.05856,1.63,0.01803),(0.06182,1.614,0.008199),(0.06194,1.6,0.002668),(0.01489,1.583,0.04109),(0.05282,1.569,0.02821),(0.05767,1.58,0.0184),(0.04643,1.625,0.03705),(0.0264,1.628,0.04807),(0.0556,1.609,0.02579),(0.05467,1.599,0.02153),(0.05316,1.589,0.0207),(0.03603,1.58,0.03536),(0.04597,1.586,0.02904),(0.02106,1.592,0.03748),(0.03428,1.595,0.03294),(0.06808,1.617,-0.06112),(0.06714,1.564,-0.07003),(0.06993,1.594,-0.08238),(0.05324,1.536,-0.05922),(0.04904,1.521,-0.05132),(0.04758,1.514,-0.03107),(0.03539,1.503,-0.00093),(0.02999,1.498,0.006194),(0.02308,1.492,0.01628),(0.01772,1.488,0.02135),(0.01378,1.488,0.02484),(0.04349,1.512,-0.03987),(0.02308,1.499,-0.02088),(0,1.487,-0.018),(0.04795,1.531,-0.08973),(0.05739,1.555,-0.0982),(0.06815,1.622,-0.107),(0.06872,1.655,-0.08466),(0.05233,1.678,-0.09642),(0.05334,1.631,-0.1239),(0.05011,1.581,-0.1193),(0.04359,1.551,-0.1067),(0.03839,1.528,-0.09652),(0.03399,1.636,-0.1304),(0.03224,1.685,-0.1024),(0,1.557,-0.1126),(0.01864,1.566,0.04105),(0.0249,1.58,0.0387),(0.02735,1.596,0.03552),(0.04317,1.564,0.03643),(0.01246,1.577,0.04276),(0.04354,1.59,0.02822),(0.04557,1.601,0.03652),(0.0291,1.603,0.04274),(0.01856,1.6,0.04349),(0,1.579,0.04893),(0.01064,1.558,0.04476),(0.005501,1.578,0.04574),(0.01405,1.531,0.04152),(0.01037,1.544,0.04266),(0,1.515,0.03836),(0.00797,1.515,0.03774),(0.01824,1.55,0.04063),(-0.0249,1.58,0.0387),(-0.04354,1.59,0.02822),(-0.0291,1.603,0.04274),(-0.04317,1.564,0.03643),(-0.04597,1.586,0.02904),(-0.05316,1.589,0.0207),(-0.01824,1.55,0.04063),(-0.01246,1.577,0.04276),(-0.006135,1.55,0.0545),(-0.01037,1.544,0.04266),(-0.02636,1.55,0.03808),(-0.03428,1.595,0.03294),(-0.02735,1.596,0.03552),(-0.03603,1.58,0.03536),(-0.05282,1.569,0.02821),(-0.05767,1.58,0.0184),(-0.01864,1.566,0.04105),(-0.01489,1.583,0.04109),(-0.0556,1.609,0.02579),(-0.04557,1.601,0.03652),(-0.02106,1.592,0.03748),(-0.01856,1.6,0.04349),(-0.005501,1.578,0.04574),(-0.01064,1.558,0.04476),(0,1.592,0.04694),(-0.06182,1.614,0.008199),(-0.05467,1.599,0.02153),(-0.06194,1.6,0.002668),(-0.05792,1.557,-0.004307),(-0.04413,1.539,0.0149),(-0.03746,1.539,0.02656),(-0.04099,1.527,0.008832),(-0.03528,1.524,0.02097),(-0.02788,1.528,0.03084),(0,1.53,0.04236),(-0.005112,1.532,0.04358),(-0.01481,1.526,0.03912),(-0.01946,1.52,0.03421),(0,1.495,0.0348),(-0.0116,1.494,0.03382),(-0.02734,1.498,0.02215),(-0.0338,1.503,0.0124),(-0.01772,1.488,0.02135),(-0.02308,1.492,0.01628),(-0.02999,1.498,0.006194),(-0.01405,1.531,0.04152),(-0.003407,1.524,0.04155),(-0.02204,1.494,0.0272),(-0.00797,1.515,0.03774),(-0.02438,1.542,0.03578),(0,1.543,0.04432),(0,1.555,0.05692),(0.02295,1.492,-0.02694),(0.007322,1.489,-0.01677),(-0.05254,1.541,-0.01363),(-0.04008,1.509,0.002821),(-0.05122,1.518,-0.02784),(-0.03539,1.503,-0.00093),(-0.01378,1.488,0.02484),(-0.02308,1.499,-0.02088),(-0.04349,1.512,-0.03987),(-0.05867,1.544,-0.03316),(-0.06433,1.563,-0.03678),(-0.06732,1.583,-0.03683),(-0.06769,1.617,-0.03436),(-0.05856,1.63,0.01803),(-0.04847,1.643,0.02895),(-0.04643,1.625,0.03705),(-0.02958,1.651,0.03965),(-0.0264,1.628,0.04807),(-0.02919,1.688,0.0091),(-0.05272,1.674,-0.001657),(-0.06641,1.637,-0.03046),(-0.06061,1.66,-0.0101),(-0.03136,1.7,-0.0413),(-0.05305,1.685,-0.03987),(-0.06308,1.666,-0.04036),(-0.06818,1.637,-0.04285),(-0.06808,1.617,-0.06112),(-0.06993,1.594,-0.08238),(-0.06714,1.564,-0.07003),(-0.05324,1.536,-0.05922),(-0.04904,1.521,-0.05132),(-0.04795,1.531,-0.08973),(-0.05739,1.555,-0.0982),(-0.06815,1.622,-0.107),(-0.06872,1.655,-0.08466),(-0.05233,1.678,-0.09642),(-0.03224,1.685,-0.1024),(0,1.69,-0.1047),(0,1.64,-0.1342),(-0.05334,1.631,-0.1239),(-0.05011,1.581,-0.1193),(-0.04359,1.551,-0.1067),(-0.03839,1.528,-0.09652),(-0.03528,1.502,-0.05013),(-0.04,1.51,-0.07278),(-0.04029,1.514,-0.08254),(-0.03479,1.517,-0.09269),(-0.02295,1.492,-0.02694),(-0.007322,1.489,-0.01677),(0,1.588,-0.1329),(-0.03399,1.636,-0.1304),(-0.04758,1.514,-0.03107),(-0.03428,1.595,0.03294),(-0.02106,1.592,0.03748),(-0.02735,1.596,0.03552),(-0.0249,1.58,0.0387),(-0.01489,1.583,0.04109),(-0.04597,1.586,0.02904),(-0.04354,1.59,0.02822),(-0.03603,1.58,0.03536),(-0.05856,1.63,0.01803),(-0.06182,1.614,0.008199),(-0.02788,1.528,0.03084),(-0.005112,1.532,0.04358),(-0.01405,1.531,0.04152),(-0.00797,1.515,0.03774),(-0.01946,1.52,0.03421),(-0.05867,1.544,-0.03316),(-0.06433,1.563,-0.03678),(-0.06732,1.583,-0.03683),(-0.06769,1.617,-0.03436),(-0.04847,1.643,0.02895),(-0.02958,1.651,0.03965),(-0.05324,1.536,-0.05922),(-0.04795,1.531,-0.08973),(-0.03839,1.528,-0.09652),(0.02106,1.592,0.03748),(0.01489,1.583,0.04109),(0.0249,1.58,0.0387),(0.03603,1.58,0.03536),(0.04354,1.59,0.02822),(0.03428,1.595,0.03294),(0.02735,1.596,0.03552),(0.02788,1.528,0.03084),(0.01405,1.531,0.04152),(0,1.53,0.04236),(0,1.515,0.03836),(0.00797,1.515,0.03774),(0.01946,1.52,0.03421),(0.005112,1.532,0.04358),(0,1.655,0.04322),(0.02958,1.651,0.03965),(0.04847,1.643,0.02895),(0.05856,1.63,0.01803),(0.06182,1.614,0.008199),(0.06769,1.617,-0.03436),(0.06732,1.583,-0.03683),(0.06433,1.563,-0.03678),(0.05867,1.544,-0.03316),(0.05324,1.536,-0.05922),(0.04795,1.531,-0.08973),(0.03839,1.528,-0.09652),(0,1.524,-0.102)]), 
color=
Color(color=[(0.749,0.601,0.462),(0.1735,0.2602,0.749),(0.6364,0.133,0.1526),(0.4545,0.2759,0.1902),(0,0,0.502)]))),
Transform(DEF="maskAndSnorkel", translation=((0,1.505,0.05)), children=[
Transform(children=[
Shape(DEF="maskFrame", 
appearance=
Appearance(
material=
Material(DEF="frameColor", diffuseColor=((0,0,0)))), 
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(13),int(12),int(0),int(-1),int(1),int(2),int(14),int(13),int(1),int(-1),int(2),int(3),int(15),int(14),int(2),int(-1),int(3),int(4),int(16),int(15),int(3),int(-1),int(4),int(5),int(17),int(16),int(4),int(-1),int(5),int(6),int(18),int(17),int(5),int(-1),int(18),int(6),int(25),int(19),int(0),int(12),int(18),int(-1),int(0),int(19),int(20),int(11),int(0),int(-1),int(10),int(11),int(20),int(21),int(10),int(-1),int(9),int(10),int(21),int(22),int(9),int(-1),int(8),int(9),int(22),int(23),int(8),int(-1),int(23),int(24),int(7),int(8),int(23),int(-1),int(6),int(7),int(24),int(25),int(6),int(-1)], creaseAngle=1.45, solid=False, 
coord=
Coordinate(point=[(0,0.08,0),(0.02,0.05,0),(0.05,0.05,0),(0.06,0.06,0),(0.06,0.09,0),(0.05,0.1,0),(0,0.1,0),(-0.05,0.1,0),(-0.06,0.09,0),(-0.06,0.06,0),(-0.05,0.05,0),(-0.02,0.05,0),(0.005,0.08,0),(0.02,0.055,0),(0.05,0.055,0),(0.055,0.06,0),(0.055,0.09,0),(0.045,0.095,0),(0.005,0.095,0),(-0.005,0.08,0),(-0.02,0.055,0),(-0.05,0.055,0),(-0.055,0.06,0),(-0.055,0.09,0),(-0.045,0.095,0),(-0.005,0.095,0)])))]),
Transform(DEF="snorkelHoldRing", translation=((0.075,0.075,-0.02)), children=[
Shape(
appearance=
Appearance(
material=
Material(USE="frameColor")), 
geometry=
Cylinder(height=0.003, radius=0.015))]),
Group(DEF="snorkel", children=[
Transform(translation=((0,-0.02,0)), children=[
Transform(scale=((0.9,0.9,0.9)), translation=((0.035,-0.07,-0.02)), children=[
Shape(
appearance=
Appearance(
material=
Material(DEF="snorkelTube", diffuseColor=((0.678,1,0.184)), transparency=0.4)), 
geometry=
Extrusion(crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.0),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.0,0.013),(-0.00494,-0.01196),(-0.00923,-0.00923),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.0,0.013)], spine=[(-0.01,-0.04,0),(0,0,0),(0.03,0.05,0),(0.05,0.2,0),(0.03,0.4,0.03)]))]),
Transform(rotation=((0,0,1,1.57)), scale=((0.9,0.9,0.9)), translation=((0.01,-0.04,-0.02)), children=[
Shape(
appearance=
Appearance(
material=
Material(DEF="Mouthpiece", diffuseColor=((0.678,1,0.8)), transparency=0.4)), 
geometry=
Extrusion(crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.0),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.0,0.013),(-0.00494,-0.01196),(-0.00923,-0.00923),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.0,0.013)], spine=[(-0.01,-0.03,0),(0,0,0),(0.02,0.01,0)]))]),
Transform(rotation=((0,0,1,-0.85)), scale=((0.9,0.9,0.9)), translation=((0.005,-0.01,-0.02)), children=[
Shape(
appearance=
Appearance(
material=
Material(USE="Mouthpiece")), 
geometry=
Extrusion(crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.0),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.0,0.013)], spine=[(-0.02,-0.03,0),(-0.01,-0.03,0),(0,-0.0175,0),(0,-0.0135,0),(-0.01,0,0),(-0.02,0,0)]))])])]),
Transform(children=[
Shape(DEF="maskLensR", 
appearance=
Appearance(
material=
Material(DEF="plastic", diffuseColor=((0.941,0.973,1)), transparency=0.8)), 
geometry=
IndexedFaceSet(coordIndex=[int(12),int(1314),int(15),int(16),int(17),int(18),int(12),int(-1)], creaseAngle=1.45, solid=False, 
coord=
Coordinate(point=[(0,0.08,0),(0.02,0.05,0),(0.05,0.05,0),(0.06,0.06,0),(0.06,0.09,0),(0.05,0.1,0),(0,0.1,0),(-0.05,0.1,0),(-0.06,0.09,0),(-0.06,0.06,0),(-0.05,0.05,0),(-0.02,0.05,0),(0.005,0.08,0),(0.02,0.055,0),(0.05,0.055,0),(0.055,0.06,0),(0.055,0.09,0),(0.045,0.095,0),(0.005,0.095,0),(-0.005,0.08,0),(-0.02,0.055,0),(-0.05,0.055,0),(-0.055,0.06,0),(-0.055,0.09,0),(-0.045,0.095,0),(-0.005,0.095,0)])))]),
Transform(children=[
Shape(DEF="maskLensL", 
appearance=
Appearance(
material=
Material(USE="plastic")), 
geometry=
IndexedFaceSet(coordIndex=[int(19),int(20),int(21),int(22),int(23),int(24),int(25),int(19),int(-1)], creaseAngle=1.45, solid=False, 
coord=
Coordinate(point=[(0,0.08,0),(0.02,0.05,0),(0.05,0.05,0),(0.06,0.06,0),(0.06,0.09,0),(0.05,0.1,0),(0,0.1,0),(-0.05,0.1,0),(-0.06,0.09,0),(-0.06,0.06,0),(-0.05,0.05,0),(-0.02,0.05,0),(0.005,0.08,0),(0.02,0.055,0),(0.05,0.055,0),(0.055,0.06,0),(0.055,0.09,0),(0.045,0.095,0),(0.005,0.095,0),(-0.005,0.08,0),(-0.02,0.055,0),(-0.05,0.055,0),(-0.055,0.06,0),(-0.055,0.09,0),(-0.045,0.095,0),(-0.005,0.095,0)])))]),
Transform(children=[
Shape(DEF="nose", 
appearance=
Appearance(
material=
Material(DEF="plasticFit", diffuseColor=((0.678,1,0.184)), transparency=0.7)), 
geometry=
IndexedFaceSet(coordIndex=[int(0),int(37),int(26),int(0),int(-1),int(0),int(36),int(26),int(0),int(-1),int(36),int(37),int(26),int(36),int(-1),int(0),int(1),int(37),int(0),int(-1),int(0),int(11),int(36),int(0),int(-1)], creaseAngle=1.45, solid=False, 
coord=
Coordinate(point=[(0,0.08,0),(0.02,0.05,0),(0.05,0.05,0),(0.06,0.06,0),(0.06,0.09,0),(0.05,0.1,0),(0,0.1,0),(-0.05,0.1,0),(-0.06,0.09,0),(-0.06,0.06,0),(-0.05,0.05,0),(-0.02,0.05,0),(0.005,0.08,0),(0.02,0.055,0),(0.05,0.055,0),(0.055,0.06,0),(0.055,0.09,0),(0.045,0.095,0),(0.005,0.095,0),(-0.005,0.08,0),(-0.02,0.055,0),(-0.05,0.055,0),(-0.055,0.06,0),(-0.055,0.09,0),(-0.045,0.095,0),(-0.005,0.095,0),(0,0.04,0.015),(0.05,0.04,-0.03),(0.06,0.05,-0.03),(0.07,0.095,-0.03),(0.055,0.11,-0.03),(0,0.11,-0.02),(-0.055,0.11,-0.03),(-0.07,0.095,-0.03),(-0.06,0.05,-0.03),(-0.05,0.04,-0.03),(-0.02,0.04,-0.02),(0.02,0.04,-0.02)])))]),
Transform(children=[
Shape(DEF="faceFit", 
appearance=
Appearance(
material=
Material(USE="plasticFit")), 
geometry=
IndexedFaceSet(coordIndex=[int(1),int(2),int(27),int(37),int(1),int(-1),int(2),int(3),int(28),int(27),int(2),int(-1),int(3),int(4),int(29),int(28),int(3),int(-1),int(4),int(5),int(30),int(29),int(4),int(-1),int(5),int(6),int(31),int(30),int(5),int(-1),int(6),int(7),int(32),int(31),int(6),int(-1),int(7),int(8),int(33),int(32),int(7),int(-1),int(8),int(9),int(34),int(33),int(8),int(-1),int(9),int(10),int(35),int(34),int(9),int(-1),int(10),int(11),int(36),int(35),int(10),int(-1)], creaseAngle=1.45, solid=False, 
coord=
Coordinate(point=[(0,0.08,0),(0.02,0.05,0),(0.05,0.05,0),(0.06,0.06,0),(0.06,0.09,0),(0.05,0.1,0),(0,0.1,0),(-0.05,0.1,0),(-0.06,0.09,0),(-0.06,0.06,0),(-0.05,0.05,0),(-0.02,0.05,0),(0.005,0.08,0),(0.02,0.055,0),(0.05,0.055,0),(0.055,0.06,0),(0.055,0.09,0),(0.045,0.095,0),(0.005,0.095,0),(-0.005,0.08,0),(-0.02,0.055,0),(-0.05,0.055,0),(-0.055,0.06,0),(-0.055,0.09,0),(-0.045,0.095,0),(-0.005,0.095,0),(0,0.05,0.015),(0.05,0.04,-0.03),(0.06,0.05,-0.03),(0.07,0.095,-0.03),(0.055,0.11,-0.03),(0,0.11,-0.02),(-0.055,0.11,-0.03),(-0.07,0.095,-0.03),(-0.06,0.05,-0.03),(-0.05,0.04,-0.03),(-0.02,0.04,-0.02),(0.02,0.04,-0.02)])))]),
Transform(children=[
Shape(DEF="belt", 
appearance=
Appearance(
material=
Material(USE="plastic")), 
geometry=
IndexedFaceSet(coordIndex=[int(3),int(4),int(39),int(38),int(3),int(-1),int(8),int(9),int(40),int(41),int(8),int(-1),int(38),int(39),int(42),int(43),int(38),int(-1),int(40),int(41),int(44),int(45),int(40),int(-1),int(42),int(43),int(47),int(46),int(42),int(-1),int(44),int(45),int(47),int(46),int(44),int(-1)], creaseAngle=1.45, solid=False, 
coord=
Coordinate(point=[(0,0.08,0),(0.02,0.05,0),(0.05,0.05,0),(0.06,0.06,0),(0.06,0.09,0),(0.05,0.1,0),(0,0.1,0),(-0.05,0.1,0),(-0.06,0.09,0),(-0.06,0.06,0),(-0.05,0.05,0),(-0.02,0.05,0),(0.005,0.08,0),(0.02,0.055,0),(0.05,0.055,0),(0.055,0.06,0),(0.055,0.09,0),(0.045,0.095,0),(0.005,0.095,0),(-0.005,0.08,0),(-0.02,0.055,0),(-0.05,0.055,0),(-0.055,0.06,0),(-0.055,0.09,0),(-0.045,0.095,0),(-0.005,0.095,0),(0,0.05,0.015),(0.05,0.04,-0.03),(0.06,0.05,-0.03),(0.07,0.095,-0.03),(0.055,0.11,-0.03),(0,0.11,-0.02),(-0.055,0.11,-0.03),(-0.07,0.095,-0.03),(-0.06,0.05,-0.03),(-0.05,0.04,-0.03),(-0.02,0.04,-0.02),(0.02,0.04,-0.02),(0.075,0.06,-0.135),(0.075,0.09,-0.135),(-0.075,0.06,-0.135),(-0.075,0.09,-0.135),(0.06,0.09,-0.165),(0.06,0.06,-0.165),(-0.06,0.09,-0.165),(-0.06,0.06,-0.165),(0,0.09,-0.2),(0,0.06,-0.175)])))])]),
Transform(DEF="mouthpiece", rotation=((0.86,-0.58,-0.58,2.09)), translation=((0,1.508,0.05)), children=[
Transform(translation=((0,0.0018,0)), children=[
Shape(
appearance=
Appearance(
material=
Material(DEF="gray", ambientIntensity=0.3, diffuseColor=((0.9,0.9,0.89)), shininess=0.1, specularColor=((0.5,0.5,0.5)))), 
geometry=
Cylinder(height=0.006, radius=0.015))]),
Transform(children=[
Shape(
appearance=
Appearance(
material=
Material(DEF="black", diffuseColor=((0,0,0)))), 
geometry=
Cone(bottomRadius=0.03, height=0.01))]),
Transform(translation=((0,-0.015,0)), children=[
Shape(
appearance=
Appearance(
material=
Material(USE="black")), 
geometry=
Cylinder(height=0.02, radius=0.03))]),
Transform(translation=((0,-0.025,0)), children=[
Shape(
appearance=
Appearance(
material=
Material(USE="black")), 
geometry=
Cylinder(height=0.02, radius=0.015))]),
Transform(rotation=((0,0,1,0.9)), translation=((0,-0.04,0)), children=[
Shape(DEF="mouthpiecePlastic", 
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)), emissiveColor=((1,1,1)))), 
geometry=
Box(size=((0.002,0.03,0.018))))]),
Transform(rotation=((0,0,1,-0.9)), translation=((0,-0.04,0)), children=[
Shape(USE="mouthpiecePlastic")]),
Transform(rotation=((1,0,0,1.57)), translation=((0,-0.015,0.03)), children=[
Shape(
appearance=
Appearance(
material=
Material(USE="gray")), 
geometry=
Cylinder(height=0.02, radius=0.0075))]),
#x = 0, y = 50, z = -270

Transform(DEF="airTube", rotation=((0,1,0,1.57)), scale=((0.7,0.7,0.7)), translation=((0,-0.02,0.055)), children=[
Transform(rotation=((-0.21,0.21,-0.95,4.67)), children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0,0,0)))), 
geometry=
Extrusion(crossSection=[(0.0,0.013),(0.00494,0.01196),(0.00923,0.00923),(0.01196,0.00494),(0.013,0.0),(0.01196,-0.00494),(0.00923,-0.00923),(0.00494,-0.01196),(0.0,0.013),(-0.00494,-0.01196),(-0.00923,-0.00923),(-0.01196,-0.00494),(-0.013,-0.0),(-0.01196,0.00494),(-0.00923,0.00923),(-0.00494,0.01196),(0.0,0.013)], spine=[(0.005,-0.03,0),(-0.01,0.02,0),(-0.03,0.08,0),(-0.05,0.14,0),(-0.08,0.19,0),(-0.1,0.22,0),(-0.12,0.25,0),(-0.15,0.27,0),(-0.18,0.28,0),(-0.21,0.29,0),(-0.26,0.28,0),(-0.28,0.26,0),(-0.305,0.23,0),(-0.32,0.2,0),(-0.34,0.16,0),(-0.35,0.12,0),(-0.37,0.04,0),(-0.385,0,0),(-0.39,-0.07,0)]))])]),]),
Transform(DEF="Bubbles", scale=((0.35,0.35,0.35)), translation=((0,1.508,0.05)), children=[
Group(DEF="Bubble", children=[
TimeSensor(DEF="BubbleClock", cycleInterval=6.0, loop=True),
PositionInterpolator(DEF="BubblePath1", key=[float(0),float(0.5),float(0.8),float(0.9),float(1.0)], keyValue=[(0.0,0.0,0.0),(0.75,0.75,0.75),(0.86,0.86,0.86),(0.99,0.998,0.9876),(1.272,1.9044,0.9509)]),
PositionInterpolator(DEF="BubblePath2", key=[float(0),float(0.3),float(0.64),float(0.85),float(1.0)], keyValue=[(0.1,0.1,0.1),(0.2,0.4,0.25),(0.3,0.5,0.46),(0.75,0.5,0.575),(0.038483478,1.989,1.098373)]),
PositionInterpolator(DEF="BubblePath3", key=[float(0),float(0.1),float(0.45),float(0.7),float(1.0)], keyValue=[(0.01,0.01,0.01),(0.25,0.35,0.0045),(0.55,0.6,0.0055),(0.66,0.665,0.00655),(1.555,1.09043,0.005734)]),
PositionInterpolator(DEF="BubblePath4", key=[float(0),float(0.5),float(0.6),float(0.8),float(1.0)], keyValue=[(0.0,0.0,0.0),(0.5,0.5,0.005),(0.6,0.6,0.006),(0.75,0.75,0.0075),(1.948594,1.3983,0.009009349)]),
PositionInterpolator(DEF="BubblePath5", key=[float(0),float(0.25),float(0.35),float(0.65),float(1.0)], keyValue=[(0.0,0.0,0.0),(0.5,0.5,0.005),(0.6,0.6,0.006),(0.75,0.75,0.0075),(1.84444,1.22222,0.1)]),
PositionInterpolator(DEF="BubblePath6", key=[float(0),float(0.15),float(0.22235),float(0.55565),float(1.0)], keyValue=[(0.0,0.0,0.0),(0.235,0.3455,0.0055),(0.356,0.676,0.00456),(0.5675,0.75,0.0074565),(1.098,1.0343,0.14)]),
PositionInterpolator(DEF="BubblePath7", key=[float(0),float(0.2425),float(0.4535),float(0.6775),float(1.0)], keyValue=[(0.0,0.0,0.0),(0.12345,0.2225,0.00335),(0.786,0.456,0.00666),(0.74555,0.7335,0.00234575),(0.08787,1.022,0.12)]),
PositionInterpolator(DEF="BubblePath8", key=[float(0),float(0.1125),float(0.5535),float(0.97865),float(1.0)], keyValue=[(0.0,0.0,0.0),(0.1235,0.05,0.00125),(0.5666,0.4346,0.005556),(0.8975,0.34575,0.0098775),(1.8787,1.686,0.86)]),
PositionInterpolator(DEF="BubblePath9", key=[float(0),float(0.0025),float(0.035),float(0.65),float(1.0)], keyValue=[(0.0,0.0,0.0),(0.522,0.5445,0.0057),(0.6543,0.226,0.0055),(0.45575,0.4375,0.0067),(1.8787,2.0,0.1545)]),
PositionInterpolator(DEF="BubblePath10", key=[float(0),float(0.00025),float(0.035),float(0.6895),float(1.0)], keyValue=[(0.0,0.0,0.0),(0.8765,0.445,0.00335),(0.3336,0.4446,0.005556),(0.765,0.75,0.0075),(1.0,1.0,0.1)]),
Transform(children=[
Transform(DEF="bubble1", children=[
Shape(
appearance=
Appearance(DEF="BubbleAppearance", 
material=
Material(diffuseColor=((1,1,1)), transparency=0.8)), 
geometry=
Sphere(radius=0.025))]),
Transform(DEF="bubble2", children=[
Shape(
appearance=
Appearance(USE="BubbleAppearance"), 
geometry=
Sphere(radius=0.055))]),
Transform(DEF="bubble3", children=[
Shape(
appearance=
Appearance(USE="BubbleAppearance"), 
geometry=
Sphere(radius=0.065))]),
Transform(DEF="bubble4", children=[
Shape(
appearance=
Appearance(USE="BubbleAppearance"), 
geometry=
Sphere(radius=0.015))]),
Transform(DEF="bubble5", children=[
Shape(
appearance=
Appearance(USE="BubbleAppearance"), 
geometry=
Sphere(radius=0.075))]),
Transform(DEF="bubble6", children=[
Shape(
appearance=
Appearance(USE="BubbleAppearance"), 
geometry=
Sphere(radius=0.005))]),
Transform(DEF="bubble7", children=[
Shape(
appearance=
Appearance(USE="BubbleAppearance"), 
geometry=
Sphere(radius=0.035))]),
Transform(DEF="bubble8", children=[
Shape(
appearance=
Appearance(USE="BubbleAppearance"), 
geometry=
Sphere(radius=0.05))]),
Transform(DEF="bubble9", children=[
Shape(
appearance=
Appearance(USE="BubbleAppearance"), 
geometry=
Sphere(radius=0.045))]),
Transform(DEF="bubble10", children=[
Shape(
appearance=
Appearance(USE="BubbleAppearance"), 
geometry=
Sphere(radius=0.035))]),
ROUTE(fromField="fraction_changed", fromNode="BubbleClock", toField="set_fraction", toNode="BubblePath1"),
ROUTE(fromField="fraction_changed", fromNode="BubbleClock", toField="set_fraction", toNode="BubblePath2"),
ROUTE(fromField="fraction_changed", fromNode="BubbleClock", toField="set_fraction", toNode="BubblePath3"),
ROUTE(fromField="fraction_changed", fromNode="BubbleClock", toField="set_fraction", toNode="BubblePath4"),
ROUTE(fromField="fraction_changed", fromNode="BubbleClock", toField="set_fraction", toNode="BubblePath5"),
ROUTE(fromField="fraction_changed", fromNode="BubbleClock", toField="set_fraction", toNode="BubblePath6"),
ROUTE(fromField="fraction_changed", fromNode="BubbleClock", toField="set_fraction", toNode="BubblePath7"),
ROUTE(fromField="fraction_changed", fromNode="BubbleClock", toField="set_fraction", toNode="BubblePath8"),
ROUTE(fromField="fraction_changed", fromNode="BubbleClock", toField="set_fraction", toNode="BubblePath9"),
ROUTE(fromField="fraction_changed", fromNode="BubbleClock", toField="set_fraction", toNode="BubblePath10"),
ROUTE(fromField="value_changed", fromNode="BubblePath1", toField="set_translation", toNode="bubble1"),
ROUTE(fromField="value_changed", fromNode="BubblePath2", toField="set_translation", toNode="bubble2"),
ROUTE(fromField="value_changed", fromNode="BubblePath3", toField="set_translation", toNode="bubble3"),
ROUTE(fromField="value_changed", fromNode="BubblePath4", toField="set_translation", toNode="bubble4"),
ROUTE(fromField="value_changed", fromNode="BubblePath5", toField="set_translation", toNode="bubble5"),
ROUTE(fromField="value_changed", fromNode="BubblePath6", toField="set_translation", toNode="bubble6"),
ROUTE(fromField="value_changed", fromNode="BubblePath7", toField="set_translation", toNode="bubble7"),
ROUTE(fromField="value_changed", fromNode="BubblePath8", toField="set_translation", toNode="bubble8"),
ROUTE(fromField="value_changed", fromNode="BubblePath9", toField="set_translation", toNode="bubble9"),
ROUTE(fromField="value_changed", fromNode="BubblePath10", toField="set_translation", toNode="bubble10")])])])])
])])
])])
])])
]),])
])])
])])])]),])]),
Script(DEF="finWarpScript", field=[field(name="set_rotationL", accessType="inputOnly", type="SFRotation"),
field(name="set_rotationR", accessType="inputOnly", type="SFRotation"),
field(name="fin_warpL", accessType="outputOnly", type="SFBool"),
field(name="fin_warpR", accessType="outputOnly", type="SFBool")
], 
#['', '', 'ecmascript:', '', '', 'var positionX;', 'var positionY;', 'var positionZ;', 'var rotation;', '', 'function initialize()', '{', '    \tpositionX = 0.0;', '\tpositionY = 0.0;', '\tpositionZ = 0.0;', '\trotation = 0.0;', '}', '', 'function set_rotationL( value, timeStamp)', '{', '\trotationFinL = new SFRotation(positionX, positionY, positionZ, rotation);', '\trotationFinL = value;', "\t//print ('rotationFinL[0] ' + rotationFinL[0]);", '\tif (rotationFinL[0] <= 0)', '\t{', '\t\tfin_warpL = 0;', '\t}', '\telse', '\t{', '\t\tfin_warpL = 1;', '\t}', '\t', '}', '', 'function set_rotationR( value, timeStamp)', '{', '\trotationFinR = new SFRotation(positionX, positionY, positionZ, rotation);', '\trotationFinR = value;', "\t//print ('rotationFin[0] ' + rotationFinR[0]);", '\tif (rotationFinR[0] <= 0)', '\t{', '\t\tfin_warpR = 0;', '\t}', '\telse', '\t{', '\t\tfin_warpR = 1;', '\t}', '\t', '}', '', '']
),
Group(DEF="Animations", children=[
Group(DEF="Dive_Animation", children=[
OrientationInterpolator(DEF="r_ankle_RotationInterpolator_BasicDive", key=[float(0.0),float(0.125),float(0.2083),float(0.375),float(0.4583),float(0.5),float(0.6667),float(0.75),float(0.7917),float(0.9167),float(1.0)], keyValue=[(float(1.0),float(0.0),float(0.0),float(0.8001)),(float(1.0),float(0.0),float(0.0),float(0.8509)),(float(1.0),float(0.0),float(0.0),float(0.8001)),(float(1.0),float(0.0),float(0.0),float(0.8001)),(float(1.0),float(0.0),float(0.0),float(0.8509)),(float(1.0),float(0.0),float(0.0),float(0.8001)),(float(1.0),float(0.0),float(0.0),float(0.8001)),(float(1.0),float(0.0),float(0.0),float(0.8001)),(float(1.0),float(0.0),float(0.0),float(0.8001)),(float(1.0),float(0.0),float(0.0),float(0.8509)),(float(1.0),float(0.0),float(0.0),float(0.86001))]),
OrientationInterpolator(DEF="r_knee_RotationInterpolator_BasicDive", key=[float(0.0),float(0.125),float(0.2083),float(0.375),float(0.5),float(0.6667),float(0.9167),float(1.0)], keyValue=[(float(1.0),float(0.0),float(0.0),float(0.8573)),(float(1.0),float(0.0),float(0.0),float(0.5351)),(float(1.0),float(0.0),float(0.0),float(0.1756)),(float(1.0),float(0.0),float(0.0),float(0.1194)),(float(1.0),float(0.0),float(0.0),float(0.3153)),(float(1.0),float(0.0),float(0.0),float(0.09354)),(float(1.0),float(0.0),float(0.0),float(0.08558)),(float(1.0),float(0.0),float(0.0),float(0.8573))]),
OrientationInterpolator(DEF="r_hip_RotationInterpolator_BasicDive", key=[float(0.0),float(0.125),float(0.2083),float(0.2917),float(0.5),float(0.7917),float(0.9167),float(1.0)], keyValue=[(float(-0.5831),float(0.03511),float(0.8116),float(0.1481)),(float(-0.995),float(0.02296),float(0.09674),float(0.4683)),(float(-1.0),float(0.00192),float(0.007964),float(0.4732)),(float(-0.998),float(-0.0158),float(-0.06102),float(0.5079)),(float(-0.9131),float(-0.06243),float(-0.403),float(0.3361)),(float(1.0),float(0.0),float(0.0),float(0.2571)),(float(0.9891),float(-0.02805),float(0.1444),float(0.3879)),(float(-0.5831),float(0.03511),float(0.8116),float(0.1481))]),
OrientationInterpolator(DEF="l_ankle_RotationInterpolator_BasicDive", key=[float(0.0),float(0.125),float(0.2083),float(0.375),float(0.4583),float(0.5),float(0.6667),float(0.75),float(0.7917),float(0.9167),float(1.0)], keyValue=[(float(1.0),float(0.0),float(0.0),float(0.6001)),(float(1.0),float(0.0),float(0.0),float(0.6509)),(float(1.0),float(0.0),float(0.0),float(0.6001)),(float(1.0),float(0.0),float(0.0),float(0.6001)),(float(1.0),float(0.0),float(0.0),float(0.6509)),(float(1.0),float(0.0),float(0.0),float(0.6001)),(float(1.0),float(0.0),float(0.0),float(0.6001)),(float(1.0),float(0.0),float(0.0),float(0.6509)),(float(1.0),float(0.0),float(0.0),float(0.6001)),(float(1.0),float(0.0),float(0.0),float(0.6509)),(float(1.0),float(0.0),float(0.0),float(0.6001))]),
OrientationInterpolator(DEF="l_knee_RotationInterpolator_BasicDive", key=[float(0.0),float(0.2083),float(0.375),float(0.5),float(0.6667),float(0.7917),float(0.9167),float(1.0)], keyValue=[(float(1.0),float(0.0),float(0.0),float(0.3226)),(float(1.0),float(0.0),float(0.0),float(0.1556)),(float(1.0),float(0.0),float(0.0),float(0.08678)),(float(1.0),float(0.0),float(0.0),float(0.8751)),(float(1.0),float(0.0),float(0.0),float(1.131)),(float(1.0),float(0.0),float(0.0),float(0.09961)),(float(1.0),float(0.0),float(0.0),float(0.3942)),(float(1.0),float(0.0),float(0.0),float(0.3226))]),
OrientationInterpolator(DEF="l_hip_RotationInterpolator_BasicDive", key=[float(0.0),float(0.25),float(0.375),float(0.6667),float(0.7917),float(0.9167),float(1.0)], keyValue=[(float(-0.873),float(0.06094),float(0.484),float(0.2865)),(float(0.9963),float(-0.01057),float(0.08481),float(0.2488)),(float(0.9965),float(0.01591),float(-0.08222),float(0.3836)),(float(-1.0),float(0.0),float(0.0),float(0.5518)),(float(-0.9964),float(0.02231),float(0.0817),float(0.5351)),(float(-0.9809),float(0.04912),float(0.1881),float(0.5204)),(float(-0.873),float(0.06094),float(0.484),float(0.2865))]),
OrientationInterpolator(DEF="lower_body_RotationInterpolator_BasicDive", key=[float(0.0),float(0.5),float(1.0)], keyValue=[(float(0.0),float(0.0),float(-1.0),float(0.1056)),(float(0.0),float(0.0),float(1.0),float(0.09018)),(float(0.0),float(0.0),float(-1.0),float(0.1056))]),
#
,
OrientationInterpolator(DEF="r_wrist_RotationInterpolator_BasicDive", key=[float(0.0),float(0.28),float(0.32),float(0.64),float(0.76),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(-0.0585279),float(0.983903),float(-0.168849),float(1.85956)),(float(-0.0585279),float(0.983903),float(-0.168849),float(1.85956)),(float(-0.00222418),float(0.99801),float(-0.0630095),float(1.46072)),(float(0.0),float(1.0),float(0.0),float(0.497349)),(float(0.0),float(0.0),float(1.0),float(0.0))]),
OrientationInterpolator(DEF="r_elbow_RotationInterpolator_BasicDive", key=[float(0.0),float(0.28),float(0.32),float(0.64),float(0.76),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(-1.0),float(0.0),float(0.0),float(0.04151)),(float(-1.0),float(0.0),float(0.0),float(0.04151)),(float(-1.0),float(0.0),float(0.0),float(0.5855)),(float(-1.0),float(0.0),float(0.0),float(0.5852)),(float(0.0),float(0.0),float(1.0),float(0.0))]),
OrientationInterpolator(DEF="r_shoulder_RotationInterpolator_BasicDive", key=[float(0.0),float(0.45),float(0.64),float(0.76),float(0.88),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(0.9992),float(0.02042),float(0.03558),float(7.2)),(float(0.9989),float(-0.04623),float(0.005159),float(4.079)),(float(-0.8687),float(-0.2525),float(-0.4261),float(1.501)),(float(-0.941),float(-0.2893),float(-0.1754),float(0.4788)),(float(0.0),float(0.0),float(1.0),float(0.0))]),
OrientationInterpolator(DEF="l_wrist_RotationInterpolator_BasicDive", key=[float(0.0),float(0.32),float(0.64),float(0.88),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(0.067),float(0.98),float(-0.128),float(4.15)),(float(0.067),float(0.98),float(-0.128),float(4.15)),(float(0.067),float(0.98),float(-0.128),float(4.15)),(float(0.0),float(0.0),float(1.0),float(0.0))]),
OrientationInterpolator(DEF="l_elbow_RotationInterpolator_BasicDive", key=[float(0.0),float(0.28),float(0.32),float(0.64),float(0.76),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(-1.0),float(0.0),float(0.0),float(0.1229)),(float(-1.0),float(0.0),float(0.0),float(0.1229)),(float(-1.0),float(0.0),float(0.0),float(0.5976)),(float(-1.0),float(0.0),float(0.0),float(0.3917)),(float(0.0),float(0.0),float(1.0),float(0.0))]),
OrientationInterpolator(DEF="l_shoulder_RotationInterpolator_BasicDive", key=[float(0.0),float(0.25),float(0.375),float(0.6667),float(0.7917),float(0.9167),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.1)),(float(0.0),float(0.0),float(1.0),float(0.2)),(float(0.0),float(0.0),float(1.0),float(0.2)),(float(0.86),float(0.25),float(0.42),float(0.5)),(float(0.86),float(0.25),float(0.42),float(0.8)),(float(0.86),float(0.25),float(0.42),float(0.4)),(float(0.86),float(0.25),float(0.42),float(0.2))]),
#
,
OrientationInterpolator(DEF="head_RotationInterpolator_BasicDive", key=[float(0.0),float(0.28),float(0.3),float(0.32),float(0.4),float(0.45),float(0.6),float(0.65),float(0.7),float(0.75),float(0.85),float(0.9),float(0.95),float(1.0)], keyValue=[(float(-1.0),float(0.0),float(0.0),float(1.0)),(float(-1.0),float(0.0),float(0.0),float(1.0)),(float(-1.0),float(0.0),float(0.0),float(0.999)),(float(-1.0),float(0.0),float(0.0),float(0.99)),(float(-1.0),float(0.0),float(0.0),float(0.99)),(float(-1.0),float(0.0),float(0.0),float(0.9)),(float(-1.0),float(0.0),float(0.0),float(0.9)),(float(-1.0),float(0.0),float(0.0),float(0.9)),(float(-1.0),float(0.0),float(0.0),float(0.9)),(float(-1.0),float(0.0),float(0.0),float(0.9)),(float(-1.0),float(0.0),float(0.0),float(0.9)),(float(-1.0),float(0.0),float(0.0),float(0.9)),(float(-1.0),float(0.0),float(0.0),float(0.9)),(float(-1.0),float(0.0),float(0.0),float(1.0))]),
OrientationInterpolator(DEF="neck_RotationInterpolator_BasicDive", key=[float(0.0),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(0.0),float(0.0),float(1.0),float(0.0))]),
OrientationInterpolator(DEF="upper_body_RotationInterpolator_BasicDive", key=[float(0.0),float(0.2083),float(0.375),float(0.75),float(0.8333),float(1.0)], keyValue=[(float(0.0),float(1.0),float(0.0),float(0.0826)),(float(-0.01972),float(-0.5974),float(0.8017),float(0.08231)),(float(0.009296),float(-0.9648),float(0.2627),float(0.1734)),(float(-0.01238),float(0.9549),float(-0.2968),float(0.08732)),(float(-0.008125),float(0.9691),float(-0.2463),float(0.158)),(float(0.0),float(1.0),float(0.0),float(0.0826))]),
OrientationInterpolator(DEF="whole_body_RotationInterpolator_BasicDive", key=[float(0.0),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(0.0),float(0.0),float(1.0),float(0.0))]),
PositionInterpolator(DEF="whole_body_TranslationInterpolator_BasicDive", key=[float(0.0),float(0.04167),float(0.125),float(0.1667),float(0.2083),float(0.25),float(0.2917),float(0.375),float(0.4583),float(0.5),float(0.5417),float(0.5833),float(0.625),float(0.7083),float(0.75),float(0.7917),float(0.875),float(0.9167),float(1.0)], keyValue=[(0.0,-0.00928,0.0),(0.0,-0.003858,0.0),(0.0,-0.008847,0.0),(0.0,-0.01486,0.0),(0.0,-0.02641,0.0),(0.0,-0.03934,0.0),(0.0,-0.0502,0.0),(0.0,-0.07469,0.0),(0.0,-0.02732,0.0),(0.0,-0.01608,0.0),(0.0,-0.01129,0.0),(0.0,-0.005819,0.0),(0.0,-0.002004,0.0),(0.0,-0.002579,0.0),(0.0,-0.0143,0.0),(0.0,-0.03799,0.0),(0.0,-0.05648,0.0),(0.0,-0.045,0.0),(0.0,-0.00928,0.0)]),
TimeSensor(DEF="Dive_Time", cycleInterval=7.0, loop=True, startTime=-1.0),
ProximitySensor(DEF="TriggerProximitySensor", size=((50,50,50)))])]),
ROUTE(fromField="enterTime", fromNode="TriggerProximitySensor", toField="startTime", toNode="Dive_Time"),
ROUTE(fromField="fraction_changed", fromNode="Dive_Time", toField="set_fraction", toNode="r_ankle_RotationInterpolator_BasicDive"),
ROUTE(fromField="fraction_changed", fromNode="Dive_Time", toField="set_fraction", toNode="r_knee_RotationInterpolator_BasicDive"),
ROUTE(fromField="fraction_changed", fromNode="Dive_Time", toField="set_fraction", toNode="r_hip_RotationInterpolator_BasicDive"),
ROUTE(fromField="fraction_changed", fromNode="Dive_Time", toField="set_fraction", toNode="l_ankle_RotationInterpolator_BasicDive"),
ROUTE(fromField="fraction_changed", fromNode="Dive_Time", toField="set_fraction", toNode="l_knee_RotationInterpolator_BasicDive"),
ROUTE(fromField="fraction_changed", fromNode="Dive_Time", toField="set_fraction", toNode="l_hip_RotationInterpolator_BasicDive"),
ROUTE(fromField="fraction_changed", fromNode="Dive_Time", toField="set_fraction", toNode="lower_body_RotationInterpolator_BasicDive"),
ROUTE(fromField="fraction_changed", fromNode="Dive_Time", toField="set_fraction", toNode="head_RotationInterpolator_BasicDive"),
ROUTE(fromField="fraction_changed", fromNode="Dive_Time", toField="set_fraction", toNode="neck_RotationInterpolator_BasicDive"),
ROUTE(fromField="fraction_changed", fromNode="Dive_Time", toField="set_fraction", toNode="upper_body_RotationInterpolator_BasicDive"),
ROUTE(fromField="fraction_changed", fromNode="Dive_Time", toField="set_fraction", toNode="whole_body_RotationInterpolator_BasicDive"),
ROUTE(fromField="fraction_changed", fromNode="Dive_Time", toField="set_fraction", toNode="whole_body_TranslationInterpolator_BasicDive"),
ROUTE(fromField="value_changed", fromNode="r_ankle_RotationInterpolator_BasicDive", toField="set_rotation", toNode="hanim_r_ankle"),
ROUTE(fromField="value_changed", fromNode="r_knee_RotationInterpolator_BasicDive", toField="set_rotation", toNode="hanim_r_knee"),
ROUTE(fromField="value_changed", fromNode="r_hip_RotationInterpolator_BasicDive", toField="set_rotation", toNode="hanim_r_hip"),
ROUTE(fromField="value_changed", fromNode="l_ankle_RotationInterpolator_BasicDive", toField="set_rotation", toNode="hanim_l_ankle"),
ROUTE(fromField="value_changed", fromNode="l_knee_RotationInterpolator_BasicDive", toField="set_rotation", toNode="hanim_l_knee"),
ROUTE(fromField="value_changed", fromNode="l_hip_RotationInterpolator_BasicDive", toField="set_rotationL", toNode="finWarpScript"),
ROUTE(fromField="value_changed", fromNode="l_hip_RotationInterpolator_BasicDive", toField="set_rotationR", toNode="finWarpScript"),
ROUTE(fromField="fin_warpL", fromNode="finWarpScript", toField="finL", toNode="FinScript"),
ROUTE(fromField="fin_warpR", fromNode="finWarpScript", toField="finR", toNode="FinScript"),
ROUTE(fromField="value_changed", fromNode="l_hip_RotationInterpolator_BasicDive", toField="set_rotation", toNode="hanim_l_hip"),
ROUTE(fromField="value_changed", fromNode="lower_body_RotationInterpolator_BasicDive", toField="set_rotation", toNode="hanim_sacroiliac"),
ROUTE(fromField="value_changed", fromNode="head_RotationInterpolator_BasicDive", toField="set_rotation", toNode="hanim_skullbase"),
ROUTE(fromField="value_changed", fromNode="neck_RotationInterpolator_BasicDive", toField="set_rotation", toNode="hanim_vc4"),
ROUTE(fromField="value_changed", fromNode="upper_body_RotationInterpolator_BasicDive", toField="set_rotation", toNode="hanim_vl1"),
ROUTE(fromField="value_changed", fromNode="whole_body_RotationInterpolator_BasicDive", toField="set_rotation", toNode="hanim_humanoid_root"),
ROUTE(fromField="value_changed", fromNode="whole_body_TranslationInterpolator_BasicDive", toField="set_translation", toNode="hanim_humanoid_root"),
ROUTE(fromField="fraction_changed", fromNode="Dive_Time", toField="set_fraction", toNode="r_wrist_RotationInterpolator_BasicDive"),
ROUTE(fromField="fraction_changed", fromNode="Dive_Time", toField="set_fraction", toNode="r_elbow_RotationInterpolator_BasicDive"),
ROUTE(fromField="fraction_changed", fromNode="Dive_Time", toField="set_fraction", toNode="r_shoulder_RotationInterpolator_BasicDive"),
ROUTE(fromField="fraction_changed", fromNode="Dive_Time", toField="set_fraction", toNode="l_wrist_RotationInterpolator_BasicDive"),
ROUTE(fromField="fraction_changed", fromNode="Dive_Time", toField="set_fraction", toNode="l_elbow_RotationInterpolator_BasicDive"),
ROUTE(fromField="fraction_changed", fromNode="Dive_Time", toField="set_fraction", toNode="l_shoulder_RotationInterpolator_BasicDive"),
ROUTE(fromField="value_changed", fromNode="r_wrist_RotationInterpolator_BasicDive", toField="set_rotation", toNode="hanim_r_wrist"),
ROUTE(fromField="value_changed", fromNode="r_elbow_RotationInterpolator_BasicDive", toField="set_rotation", toNode="hanim_r_elbow"),
ROUTE(fromField="value_changed", fromNode="r_shoulder_RotationInterpolator_BasicDive", toField="set_rotation", toNode="hanim_r_shoulder"),
ROUTE(fromField="value_changed", fromNode="l_wrist_RotationInterpolator_BasicDive", toField="set_rotation", toNode="hanim_l_wrist"),
ROUTE(fromField="value_changed", fromNode="l_elbow_RotationInterpolator_BasicDive", toField="set_rotation", toNode="hanim_l_elbow"),
ROUTE(fromField="value_changed", fromNode="l_shoulder_RotationInterpolator_BasicDive", toField="set_rotation", toNode="hanim_l_shoulder"),]))
.XML())
