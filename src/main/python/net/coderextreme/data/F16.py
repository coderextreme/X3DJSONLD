'''
x3d.py package 4.0.63.7 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="3.0", 
head=head(), 
Scene=Scene(children=[
Transform(DEF="F16Transform", children=[
Transform(DEF="MainFrameTransform", scale=((3,3,3)), children=[
Shape(DEF="Nose", 
appearance=
Appearance(
material=
Material(diffuseColor=((0.25,0.25,0.25)))), 
geometry=
IndexedFaceSet(coordIndex=[int(24),int(0),int(3),int(-1),int(4),int(0),int(24),int(-1),int(25),int(26),int(27),int(-1),int(28),int(25),int(27),int(-1),int(27),int(29),int(28),int(-1),int(27),int(30),int(29),int(-1),int(27),int(31),int(30),int(-1),int(3),int(18),int(24),int(-1)], creaseAngle=0.5, normalIndex=[int(16),int(0),int(3),int(-1),int(4),int(0),int(16),int(-1),int(17),int(17),int(17),int(-1),int(18),int(18),int(18),int(-1),int(19),int(19),int(19),int(-1),int(20),int(20),int(20),int(-1),int(21),int(21),int(21),int(-1),int(3),int(14),int(16),int(-1)], solid=False, 
coord=
Coordinate(DEF="coordinates", point=[(-0.32,0.36,-4.91),(-0.38,0.43,-4.21),(0,0.6,-4.2),(0,0.5,-4.9),(-0.5,0,-4.9),(-0.6,0,-4.2),(1,0,5.8),(1,0,5.3),(2.8,-0.4,6.3),(2.8,-0.4,6.61),(0.31,-0.36,-4.9),(0.4,-0.35,-4.2),(0,-0.4,-4.2),(0,-0.4,-4.9),(-0.31,-0.36,-4.9),(-0.4,-0.35,-4.2),(0.5,0,-4.9),(0.6,0,-4.2),(0.32,0.36,-4.91),(0.38,0.43,-4.21),(-1,0,5.8),(-1,0,5.3),(-2.8,-0.4,6.3),(-2.8,-0.4,6.61),(0,-0.1,-7),(-0.31,-0.36,-4.9),(-0.5,0,-4.9),(0,-0.1,-7),(0,-0.4,-4.9),(0.31,-0.36,-4.9),(0.5,0,-4.9),(0.32,0.36,-4.91),(-0.27,0.93,-3.51),(0,1.1,-3.6),(-0.33,0.5,-3.41),(-0.34,0.9,-1.73),(0,0.9,-1),(0,1.1,-1.8),(-0.38,0.64,-1.68),(0.34,0.9,-1.73),(0,0.9,-1),(0.38,0.64,-1.68),(0.34,0.9,-1.73),(0.27,0.93,-3.51),(0.33,0.5,-3.41),(0,1.3,-2.8),(0.45,1.02,-2.68),(0.38,0.64,-1.68),(0.53,0.5,-2.56),(-0.53,0.5,-2.56),(-0.45,1.02,-2.68),(-0.53,0.75,0),(-0.56,0.66,2.8),(0,0.7,2.8),(0,0.8,0),(-1.1,0.3,0),(-1,0.3,2.8),(-0.37,0.57,4.9),(0,0.59,4.9),(-0.7,0.3,4.9),(-0.7,0.3,4.9),(-0.7,0,7),(-0.5,0.49,7),(-0.5,0.49,7),(0,0.7,7),(-1.4,0,0),(-1.4,0,3.9),(-1.4,0,3.9),(-1,0,3.9),(-1,0.3,2.8),(-1,0.3,4.9),(-0.59,0.65,-0.77),(-0.8,0.3,-0.6),(-1.4,0,-0.7),(-1,-0.1,2.8),(-0.7,-0.7,-2.5),(-0.5,-0.9,-2.5),(-0.5,-0.9,-0.6),(-0.7,-0.7,-0.6),(0,-1,-2.5),(0,-1,-0.6),(-0.72,-0.12,-2.5),(-0.8,-0.3,-2.5),(-0.8,-0.3,-0.6),(-0.8,-0.3,-2.5),(-0.8,-0.3,-0.6),(-1.4,0,0),(-1.4,0,-0.7),(-0.7,-0.1,4.9),(-1,-0.1,4.9),(-0.5,-0.9,4.9),(-0.7,-0.7,4.9),(0,-1,4.9),(-0.7,-0.1,4.9),(-0.5,-0.5,7),(-0.7,0,7),(0,-0.7,7),(-1,0,7.4),(-2.8,-0.4,7.1),(-2.57,-0.32,7.42),(-4.9,0.1,4),(-5.1,0.1,4),(-5.1,-0.1,4),(-4.9,-0.1,4),(-5.1,0.1,1.6),(-5.1,-0.1,1.6),(-4.9,0.1,2.8),(-4.9,-0.1,2.8),(-0.58,-0.83,3.6),(-0.72,-1.4,3.9),(-0.69,-1.32,4.9),(-0.58,-0.83,4.9),(0.58,-0.83,3.6),(0.72,-1.4,3.9),(0.69,-1.32,4.9),(0.58,-0.83,4.9),(4.9,-0.1,2.8),(5.1,-0.1,1.6),(5.1,-0.1,4),(4.9,-0.1,4),(-0.8,0,-2.5),(4.9,0.1,4),(5.1,0.1,4),(5.1,0.1,1.6),(4.9,0.1,2.8),(0.59,0.65,-0.77),(0.8,0.3,-0.6),(0.8,0,-2.5),(-0.8,0,-2.5),(0.8,-0.3,-0.6),(0.72,-0.12,-2.5),(0.8,0,-2.5),(1,0,7.4),(2.8,-0.4,7.1),(2.57,-0.32,7.42),(-0.7,0,7.4),(0.5,-0.9,4.9),(0.7,-0.7,4.9),(0.5,-0.5,7),(-4.9,0,2.8),(-4.9,0,3.9),(0.7,-0.1,4.9),(0.7,0,7),(1.4,0,0),(4.9,0,2.8),(4.9,0,3.9),(1.4,0,3.9),(1.4,0,-0.7),(1.4,0,-0.7),(0.7,-0.7,-0.6),(0.8,-0.3,-0.6),(0.5,-0.9,-0.6),(1,-0.1,4.9),(1,0.3,4.9),(0.7,0,7.4),(0.7,0.3,4.9),(0.7,-0.1,4.9),(0.56,0.66,2.8),(0.53,0.75,0),(1,0.3,2.8),(1.1,0.3,0),(0.37,0.57,4.9),(0.7,0.3,4.9),(0.5,0.49,7),(0.7,0,7),(0.5,0.49,7),(1.4,0,3.9),(1.4,0,0),(1,0.3,2.8),(1,0,3.9),(1,-0.1,2.8),(0.5,-0.9,-2.5),(0.7,-0.7,-2.5),(0.8,-0.3,-2.5),(0.8,-0.3,-2.5),(1,0.3,3.9),(0.59,0.65,-0.77),(0,0.7,2.8),(0,1.4,4.5),(0,0.59,4.9),(0,3.5,6.8),(0,3.5,8.1),(0,1.4,7.3),(0,0.7,7),(0,0.7,7.3),(-1,0.3,3.9),(0,0.35,7.7),(-0.25,0.24,7.7),(-0.35,0,7.7),(-0.25,-0.25,7.7),(0,-0.35,7.7),(0.25,-0.25,7.7),(0.35,0,7.7),(0.25,0.24,7.7),(0,-0.2,-2.5),(0.7,-0.7,-2.5),(0.5,-0.9,-2.5),(0,-1,-2.5),(-0.5,-0.9,-2.5),(-0.7,-0.7,-2.5),(0,-0.2,-2.5),(-0.72,-0.12,-2.5),(0.72,-0.12,-2.5),(0.25,0.24,7.7),(0.35,0,7.7),(-0.35,0,7.7),(-0.25,0.24,7.7)]), 
normal=
Normal(DEF="normalVector", vector=[(-0.68,0.714,-0.166),(-0.689,0.721,-0.072),(0,0.965,-0.26),(0,0.985,-0.175),(-0.99,-0.016,-0.138),(-0.999,-0.022,-0.037),(0.567,-0.819,-0.093),(0.561,-0.828,0),(0,-1,0),(0,-0.997,-0.071),(-0.567,-0.819,-0.093),(-0.561,-0.828,0),(0.99,-0.016,-0.138),(0.999,-0.022,-0.037),(0.68,0.714,-0.166),(0.689,0.721,-0.072),(-0.351,0.889,-0.294),(-0.868,-0.459,-0.19),(-0.13,-0.982,-0.14),(0.13,-0.982,-0.14),(0.868,-0.459,-0.19),(0.872,0.431,-0.231),(-0.834,0.445,-0.327),(0,0.929,-0.369),(-0.88,0.401,-0.256),(-0.799,0.577,0.169),(-0.58,0.798,0.164),(0,0.998,0.065),(-0.862,0.486,0.146),(0.886,0.219,0.408),(0.799,0.577,0.169),(0.834,0.445,-0.327),(0.88,0.401,-0.256),(0,0.995,-0.096),(0.842,0.534,-0.08),(0.862,0.486,0.146),(0.833,0.549,-0.073),(-0.833,0.549,-0.073),(-0.842,0.534,-0.08),(-0.485,0.87,-0.089),(-0.37,0.929,0),(0,1,0),(0,1,-0.01),(-0.592,0.796,-0.125),(-0.573,0.818,0.05),(-0.37,0.929,-0.01),(0,1,-0.025),(-0.487,0.873,0.036),(-0.923,0.381,0.05),(-0.683,0.704,0.195),(0,0.99,0.14),(-0.707,0.707,0),(-0.385,0.912,0.141),(0,0.966,0.259),(-0.563,0.826,-0.037),(-0.661,0.738,-0.138),(-0.521,0.846,-0.115),(0,-0.996,0.09),(-0.773,-0.436,-0.461),(-0.42,-0.781,-0.463),(-0.474,-0.881,0),(-0.871,-0.492,0),(0,-0.891,-0.455),(-0.917,0.399,0),(-0.881,0.074,-0.467),(-0.902,-0.429,-0.039),(-0.09,-0.995,0.05),(-0.451,-0.892,0),(-0.28,-0.959,0.04),(-0.468,-0.878,0.097),(-0.877,-0.474,0.085),(0,-0.997,0.072),(-0.693,-0.72,0.045),(-0.79,-0.562,0.244),(-0.968,0.003,0.25),(0,-0.966,0.257),(0,0,1),(-1,0,0),(0.987,0,-0.16),(1,0,0),(-0.831,-0.551,-0.08),(0.563,0.826,-0.037),(0.661,0.738,-0.138),(0.998,-0.037,-0.049),(-0.987,0,-0.16),(-0.998,-0.037,-0.049),(0.831,-0.551,-0.08),(0,-0.999,0.04),(0,0.993,0.12),(0.468,-0.878,0.097),(0.877,-0.474,0.085),(0.79,-0.562,0.244),(-0.419,-0.897,-0.14),(0.693,-0.72,0.045),(0.968,0.003,0.25),(0.521,0.846,-0.115),(0.419,-0.897,-0.14),(0.871,-0.492,0),(0.902,-0.429,-0.039),(0.474,-0.881,0),(0.37,0.929,0),(0.485,0.87,-0.089),(0.573,0.818,0.05),(0.592,0.796,-0.125),(0.37,0.929,-0.01),(0.487,0.873,0.036),(0.923,0.381,0.05),(0.683,0.704,0.195),(0.385,0.912,0.141),(0.707,0.707,0),(0.42,-0.781,-0.463),(0.773,-0.436,-0.461),(0.917,0.399,0),(0.881,0.074,-0.467),(0.09,-0.995,0.05),(0.451,-0.892,0),(0.28,-0.959,0.04),(0.42,0.901,-0.11),(0,0.666,0.746),(-0.481,0.468,0.741),(-0.674,0,0.738),(-0.475,-0.475,0.741),(0,-0.674,0.738),(0.475,-0.475,0.741),(0.674,0,0.738),(0.481,0.468,0.741),(0,0,-1),(0,-0.893,-0.45),(-0.901,-0.224,-0.372),(0.901,-0.224,-0.372),(0.841,0.34,0.421),(-0.841,0.34,0.421)]))),
Shape(DEF="Canopy", 
appearance=
Appearance(
material=
Material(diffuseColor=((0.25,0.25,0.25)), transparency=0.8)), 
geometry=
IndexedFaceSet(coordIndex=[int(2),int(32),int(33),int(-1),int(34),int(32),int(2),int(-1),int(35),int(36),int(37),int(-1),int(38),int(36),int(35),int(-1),int(39),int(40),int(41),int(-1),int(37),int(36),int(42),int(-1),int(2),int(43),int(44),int(-1),int(33),int(43),int(2),int(-1),int(45),int(37),int(42),int(46),int(-1),int(46),int(42),int(47),int(48),int(-1),int(33),int(45),int(46),int(43),int(-1),int(43),int(46),int(48),int(44),int(-1),int(34),int(49),int(50),int(32),int(-1),int(32),int(50),int(45),int(33),int(-1),int(49),int(38),int(35),int(50),int(-1),int(50),int(35),int(37),int(45),int(-1)], creaseAngle=0.5, normalIndex=[int(2),int(22),int(23),int(-1),int(24),int(22),int(2),int(-1),int(25),int(26),int(27),int(-1),int(28),int(26),int(25),int(-1),int(29),int(29),int(29),int(-1),int(27),int(26),int(30),int(-1),int(2),int(31),int(32),int(-1),int(23),int(31),int(2),int(-1),int(33),int(27),int(30),int(34),int(-1),int(34),int(30),int(35),int(36),int(-1),int(23),int(33),int(34),int(31),int(-1),int(31),int(34),int(36),int(32),int(-1),int(24),int(37),int(38),int(22),int(-1),int(22),int(38),int(33),int(23),int(-1),int(37),int(28),int(25),int(38),int(-1),int(38),int(25),int(27),int(33),int(-1)], solid=False, 
coord=
Coordinate(USE="coordinates"), 
normal=
Normal(USE="normalVector"))),
Shape(DEF="MainBodyAndWingEdges", 
appearance=
Appearance(
material=
Material(diffuseColor=((0.1796,0.1914,0.2382)))), 
geometry=
IndexedFaceSet(coordIndex=[int(51),int(52),int(53),int(54),int(-1),int(55),int(56),int(52),int(51),int(-1),int(52),int(57),int(58),int(53),int(-1),int(56),int(59),int(57),int(52),int(-1),int(60),int(61),int(62),int(-1),int(57),int(59),int(63),int(-1),int(57),int(63),int(64),int(-1),int(58),int(57),int(64),int(-1),int(56),int(55),int(65),int(66),int(-1),int(67),int(68),int(69),int(-1),int(69),int(70),int(60),int(-1),int(71),int(54),int(36),int(-1),int(51),int(54),int(71),int(-1),int(72),int(51),int(71),int(-1),int(55),int(51),int(72),int(-1),int(72),int(73),int(55),int(-1),int(65),int(55),int(73),int(-1),int(68),int(67),int(74),int(-1),int(75),int(76),int(77),int(78),int(-1),int(76),int(79),int(80),int(77),int(-1),int(81),int(82),int(83),int(-1),int(84),int(75),int(78),int(85),int(-1),int(83),int(74),int(67),int(-1),int(67),int(86),int(87),int(83),int(-1),int(74),int(88),int(89),int(-1),int(88),int(74),int(83),int(-1),int(78),int(77),int(90),int(91),int(-1),int(77),int(80),int(92),int(90),int(-1),int(85),int(91),int(93),int(-1),int(85),int(78),int(91),int(-1),int(94),int(95),int(93),int(-1),int(94),int(93),int(91),int(-1),int(91),int(96),int(94),int(-1),int(96),int(91),int(90),int(-1),int(90),int(92),int(96),int(-1),int(100),int(101),int(102),int(103),int(-1),int(101),int(104),int(105),int(102),int(-1),int(104),int(106),int(107),int(105),int(-1),int(106),int(100),int(103),int(107),int(-1),int(106),int(104),int(101),int(100),int(-1),int(103),int(102),int(105),int(107),int(-1),int(116),int(117),int(118),int(119),int(-1),int(120),int(81),int(83),int(-1),int(121),int(122),int(123),int(124),int(-1),int(116),int(119),int(121),int(124),int(-1),int(48),int(125),int(126),int(127),int(-1),int(117),int(116),int(124),int(123),int(-1),int(128),int(72),int(71),int(49),int(-1),int(118),int(117),int(123),int(122),int(-1),int(119),int(118),int(122),int(121),int(-1),int(129),int(130),int(131),int(-1),int(89),int(88),int(135),int(97),int(-1),int(60),int(70),int(97),int(135),int(-1),int(70),int(89),int(97),int(-1),int(96),int(92),int(136),int(-1),int(136),int(137),int(96),int(-1),int(138),int(96),int(137),int(-1),int(120),int(83),int(87),int(-1),int(128),int(73),int(72),int(-1),int(137),int(141),int(138),int(-1),int(141),int(142),int(138),int(-1),int(126),int(147),int(127),int(-1),int(148),int(129),int(131),int(-1),int(137),int(149),int(150),int(-1),int(141),int(137),int(150),int(-1),int(136),int(92),int(80),int(151),int(-1),int(137),int(136),int(151),int(149),int(-1),int(132),int(152),int(153),int(-1),int(154),int(132),int(153),int(155),int(-1),int(132),int(154),int(156),int(152),int(-1),int(54),int(53),int(157),int(158),int(-1),int(158),int(157),int(159),int(160),int(-1),int(53),int(58),int(161),int(157),int(-1),int(157),int(161),int(162),int(159),int(-1),int(163),int(164),int(155),int(-1),int(165),int(162),int(161),int(-1),int(64),int(165),int(161),int(-1),int(64),int(161),int(58),int(-1),int(166),int(167),int(160),int(159),int(-1),int(168),int(169),int(146),int(-1),int(155),int(153),int(168),int(-1),int(36),int(54),int(125),int(-1),int(125),int(54),int(158),int(-1),int(125),int(158),int(126),int(-1),int(126),int(158),int(160),int(-1),int(160),int(147),int(126),int(-1),int(147),int(160),int(167),int(-1),int(170),int(146),int(169),int(-1),int(149),int(151),int(171),int(172),int(-1),int(151),int(80),int(79),int(171),int(-1),int(129),int(173),int(130),int(-1),int(150),int(149),int(172),int(174),int(-1),int(146),int(170),int(129),int(-1),int(129),int(148),int(143),int(146),int(-1),int(152),int(156),int(170),int(-1),int(129),int(170),int(156),int(-1),int(156),int(154),int(164),int(-1),int(154),int(155),int(164),int(-1),int(168),int(175),int(169),int(-1),int(175),int(153),int(152),int(169),int(-1),int(152),int(170),int(169),int(-1),int(48),int(47),int(125),int(-1),int(41),int(40),int(176),int(-1),int(71),int(38),int(49),int(-1),int(71),int(36),int(38),int(-1),int(61),int(135),int(88),int(-1),int(61),int(60),int(135),int(-1),int(68),int(185),int(69),int(-1),int(68),int(74),int(89),int(-1),int(68),int(89),int(70),int(185),int(-1)], creaseAngle=0.5, normalIndex=[int(39),int(40),int(41),int(42),int(-1),int(43),int(44),int(40),int(39),int(-1),int(40),int(45),int(46),int(41),int(-1),int(44),int(47),int(45),int(40),int(-1),int(48),int(48),int(48),int(-1),int(45),int(47),int(49),int(-1),int(45),int(49),int(50),int(-1),int(46),int(45),int(50),int(-1),int(44),int(43),int(51),int(52),int(-1),int(53),int(53),int(53),int(-1),int(41),int(41),int(41),int(-1),int(54),int(42),int(26),int(-1),int(39),int(42),int(54),int(-1),int(55),int(39),int(54),int(-1),int(43),int(39),int(55),int(-1),int(55),int(56),int(43),int(-1),int(51),int(43),int(56),int(-1),int(57),int(57),int(57),int(-1),int(58),int(59),int(60),int(61),int(-1),int(59),int(62),int(8),int(60),int(-1),int(63),int(63),int(63),int(-1),int(64),int(58),int(61),int(65),int(-1),int(66),int(66),int(66),int(-1),int(67),int(67),int(67),int(67),int(-1),int(8),int(8),int(8),int(-1),int(68),int(68),int(68),int(-1),int(61),int(60),int(69),int(70),int(-1),int(60),int(8),int(71),int(69),int(-1),int(65),int(70),int(72),int(-1),int(65),int(61),int(70),int(-1),int(73),int(74),int(72),int(-1),int(73),int(72),int(70),int(-1),int(70),int(75),int(73),int(-1),int(75),int(70),int(69),int(-1),int(69),int(71),int(75),int(-1),int(76),int(76),int(76),int(76),int(-1),int(77),int(77),int(77),int(77),int(-1),int(78),int(78),int(78),int(78),int(-1),int(79),int(79),int(79),int(79),int(-1),int(41),int(41),int(41),int(41),int(-1),int(8),int(8),int(8),int(8),int(-1),int(8),int(8),int(8),int(8),int(-1),int(80),int(80),int(80),int(-1),int(41),int(41),int(41),int(41),int(-1),int(77),int(77),int(77),int(77),int(-1),int(36),int(81),int(82),int(83),int(-1),int(84),int(84),int(84),int(84),int(-1),int(85),int(55),int(54),int(37),int(-1),int(79),int(79),int(79),int(79),int(-1),int(76),int(76),int(76),int(76),int(-1),int(86),int(86),int(86),int(-1),int(87),int(87),int(87),int(87),int(-1),int(88),int(88),int(88),int(88),int(-1),int(77),int(77),int(77),int(-1),int(75),int(71),int(89),int(-1),int(89),int(90),int(75),int(-1),int(91),int(75),int(90),int(-1),int(92),int(92),int(92),int(-1),int(85),int(56),int(55),int(-1),int(90),int(93),int(91),int(-1),int(93),int(94),int(91),int(-1),int(82),int(95),int(83),int(-1),int(96),int(96),int(96),int(-1),int(90),int(97),int(98),int(-1),int(93),int(90),int(98),int(-1),int(89),int(71),int(8),int(99),int(-1),int(90),int(89),int(99),int(97),int(-1),int(79),int(79),int(79),int(-1),int(88),int(88),int(88),int(88),int(-1),int(87),int(87),int(87),int(87),int(-1),int(42),int(41),int(100),int(101),int(-1),int(101),int(100),int(102),int(103),int(-1),int(41),int(46),int(104),int(100),int(-1),int(100),int(104),int(105),int(102),int(-1),int(106),int(106),int(106),int(-1),int(107),int(105),int(104),int(-1),int(50),int(107),int(104),int(-1),int(50),int(104),int(46),int(-1),int(108),int(109),int(103),int(102),int(-1),int(53),int(53),int(53),int(-1),int(41),int(41),int(41),int(-1),int(26),int(42),int(81),int(-1),int(81),int(42),int(101),int(-1),int(81),int(101),int(82),int(-1),int(82),int(101),int(103),int(-1),int(103),int(95),int(82),int(-1),int(95),int(103),int(109),int(-1),int(57),int(57),int(57),int(-1),int(97),int(99),int(110),int(111),int(-1),int(99),int(8),int(62),int(110),int(-1),int(112),int(112),int(112),int(-1),int(98),int(97),int(111),int(113),int(-1),int(114),int(114),int(114),int(-1),int(115),int(115),int(115),int(115),int(-1),int(8),int(8),int(8),int(-1),int(116),int(116),int(116),int(-1),int(77),int(77),int(77),int(-1),int(77),int(77),int(77),int(-1),int(79),int(79),int(79),int(-1),int(79),int(79),int(79),int(79),int(-1),int(79),int(79),int(79),int(-1),int(36),int(35),int(81),int(-1),int(117),int(117),int(117),int(-1),int(54),int(28),int(37),int(-1),int(54),int(26),int(28),int(-1),int(79),int(79),int(79),int(-1),int(79),int(79),int(79),int(-1),int(77),int(77),int(77),int(-1),int(77),int(77),int(77),int(-1),int(77),int(77),int(77),int(77),int(-1)], solid=False, 
coord=
Coordinate(USE="coordinates"), 
normal=
Normal(USE="normalVector"))),
Shape(DEF="ExhaustExitFlatPanel", 
appearance=
Appearance(
material=
Material(diffuseColor=((0.5,0.5,0.5)))), 
geometry=
IndexedFaceSet(coordIndex=[int(186),int(187),int(188),int(189),int(190),int(-1),int(190),int(191),int(192),int(193),int(186),int(-1)], creaseAngle=0.5, normalIndex=[int(118),int(119),int(120),int(121),int(122),int(-1),int(122),int(123),int(124),int(125),int(118),int(-1)], solid=False, 
coord=
Coordinate(USE="coordinates"), 
normal=
Normal(USE="normalVector"))),
Shape(DEF="ExhaustEntranceFrontBottomPart", 
appearance=
Appearance(
material=
Material(diffuseColor=((0.2304,0.2304,0.2304)))), 
geometry=
IndexedFaceSet(coordIndex=[int(194),int(130),int(173),int(195),int(196),int(197),int(-1),int(197),int(198),int(199),int(82),int(81),int(194),int(-1)], creaseAngle=0.5, normalIndex=[int(126),int(126),int(126),int(126),int(126),int(126),int(-1),int(126),int(126),int(126),int(126),int(126),int(126),int(-1)], solid=False, 
coord=
Coordinate(USE="coordinates"), 
normal=
Normal(USE="normalVector"))),
Shape(DEF="ThirdPartFromNoseUnderCanopy", 
appearance=
Appearance(
material=
Material(diffuseColor=((0.6,0.6,0.6)))), 
geometry=
IndexedFaceSet(coordIndex=[int(12),int(200),int(201),int(15),int(-1),int(19),int(48),int(127),int(17),int(-1),int(15),int(201),int(128),int(5),int(-1),int(17),int(127),int(202),int(11),int(-1),int(11),int(202),int(200),int(12),int(-1),int(5),int(128),int(49),int(1),int(-1),int(48),int(19),int(44),int(-1),int(19),int(2),int(44),int(-1),int(34),int(1),int(49),int(-1),int(34),int(2),int(1),int(-1)], creaseAngle=0.5, normalIndex=[int(8),int(127),int(128),int(11),int(-1),int(15),int(36),int(83),int(13),int(-1),int(11),int(128),int(85),int(5),int(-1),int(13),int(83),int(129),int(7),int(-1),int(7),int(129),int(127),int(8),int(-1),int(5),int(85),int(37),int(1),int(-1),int(36),int(15),int(32),int(-1),int(15),int(2),int(32),int(-1),int(24),int(1),int(37),int(-1),int(24),int(2),int(1),int(-1)], solid=False, 
coord=
Coordinate(USE="coordinates"), 
normal=
Normal(USE="normalVector"))),
Shape(DEF="RearExhaustExitPartLastPartOfMainBody", 
appearance=
Appearance(
material=
Material(diffuseColor=((0.37,0.37,0.37)), shininess=0.5)), 
geometry=
IndexedFaceSet(coordIndex=[int(64),int(186),int(193),int(165),int(-1),int(203),int(204),int(164),int(163),int(-1),int(192),int(191),int(138),int(142),int(-1),int(191),int(190),int(96),int(138),int(-1),int(94),int(96),int(190),int(189),int(-1),int(95),int(94),int(189),int(188),int(-1),int(63),int(187),int(186),int(64),int(-1),int(62),int(61),int(205),int(206),int(-1)], creaseAngle=0.5, normalIndex=[int(50),int(118),int(125),int(107),int(-1),int(130),int(130),int(130),int(130),int(-1),int(124),int(123),int(91),int(94),int(-1),int(123),int(122),int(75),int(91),int(-1),int(73),int(75),int(122),int(121),int(-1),int(74),int(73),int(121),int(120),int(-1),int(49),int(119),int(118),int(50),int(-1),int(131),int(131),int(131),int(131),int(-1)], solid=False, 
coord=
Coordinate(USE="coordinates"), 
normal=
Normal(USE="normalVector"))),
Shape(DEF="WingsAndTail", 
appearance=
Appearance(
material=
Material(emissiveColor=((0.1796,0.1914,0.2382)))), 
geometry=
IndexedFaceSet(colorPerVertex=False, coordIndex=[int(6),int(7),int(8),int(9),int(-1),int(9),int(8),int(7),int(6),int(-1),int(20),int(21),int(22),int(23),int(-1),int(23),int(22),int(21),int(20),int(-1),int(97),int(20),int(23),int(98),int(99),int(-1),int(99),int(98),int(23),int(20),int(97),int(-1),int(108),int(109),int(110),int(111),int(-1),int(111),int(110),int(109),int(108),int(-1),int(112),int(113),int(114),int(115),int(-1),int(115),int(114),int(113),int(112),int(-1),int(132),int(6),int(9),int(133),int(134),int(-1),int(134),int(133),int(9),int(6),int(132),int(-1),int(86),int(139),int(140),int(67),int(-1),int(67),int(140),int(139),int(86),int(-1),int(143),int(144),int(145),int(146),int(-1),int(146),int(145),int(144),int(143),int(-1),int(177),int(178),int(179),int(-1),int(179),int(178),int(177),int(-1),int(178),int(180),int(181),int(182),int(183),int(179),int(-1),int(179),int(183),int(182),int(181),int(180),int(178),int(-1),int(182),int(184),int(183),int(-1),int(183),int(184),int(182),int(-1),int(177),int(178),int(179),int(-1),int(179),int(178),int(177),int(-1),int(178),int(180),int(181),int(182),int(183),int(179),int(-1),int(179),int(183),int(182),int(181),int(180),int(178),int(-1),int(182),int(184),int(183),int(-1),int(183),int(184),int(182),int(-1)], creaseAngle=0.5, normalIndex=[int(50),int(118),int(125),int(107),int(-1),int(130),int(130),int(130),int(130),int(-1),int(124),int(123),int(91),int(94),int(-1),int(123),int(122),int(75),int(91),int(-1),int(73),int(75),int(122),int(121),int(-1),int(74),int(73),int(121),int(120),int(-1),int(49),int(119),int(118),int(50),int(-1),int(131),int(131),int(131),int(131),int(-1)], solid=False, 
coord=
Coordinate(USE="coordinates"), 
normal=
Normal(USE="normalVector"))),
Shape(DEF="SecondPartAfterNose", 
appearance=
Appearance(
material=
Material(diffuseColor=((0.6,0.6,0.6)))), 
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(3),int(-1),int(4),int(5),int(1),int(0),int(-1),int(10),int(11),int(12),int(13),int(-1),int(14),int(15),int(5),int(4),int(-1),int(13),int(12),int(15),int(14),int(-1),int(16),int(17),int(11),int(10),int(-1),int(18),int(19),int(17),int(16),int(-1),int(3),int(2),int(19),int(18),int(-1)], creaseAngle=0.5, normalIndex=[int(0),int(1),int(2),int(3),int(-1),int(4),int(5),int(1),int(0),int(-1),int(6),int(7),int(8),int(9),int(-1),int(10),int(11),int(5),int(4),int(-1),int(9),int(8),int(11),int(10),int(-1),int(12),int(13),int(7),int(6),int(-1),int(14),int(15),int(13),int(12),int(-1),int(3),int(2),int(15),int(14),int(-1)], solid=False, 
coord=
Coordinate(USE="coordinates"), 
normal=
Normal(USE="normalVector")))]),
Transform(DEF="CockpitTransform", rotation=((1,0,0,-0.1)), scale=((0.045,0.045,0.045)), translation=((0,1,-10)), children=[
Inline(url=["Cockpit.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Cockpit.x3d","Cockpit.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Cockpit.wrl"])]),
Transform(DEF="SeatTransform", rotation=((-1,0,0,-0.1)), scale=((0.9,0.9,0.9)), translation=((0,0,-8.3)), children=[
Inline(url=["Seat.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Seat.x3d","Seat.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Seat.wrl"])]),
Transform(DEF="FrontWheelTransform", center=((0,2.5,0)), rotation=((-1,0,0,1.92)), translation=((0.7,-5.2,-6.5)), children=[
#Front wheel is taken from the Savage Library, modified and re-animated.(from F18 Blue Angel)

Inline(url=["FrontWheel.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontWheel.x3d","FrontWheel.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontWheel.wrl"]),]),
Transform(DEF="RearLeftWheelTransform", center=((0,2.5,0)), rotation=((1,0,1,1.92)), translation=((-2.95,-5,7)), children=[
#Rear wheels are taken from the Savage Library and re-animated (from F18 Blue Angel)

Inline(url=["RearLeftWheel.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearLeftWheel.x3d","RearLeftWheel.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearLeftWheel.wrl"]),]),
Transform(DEF="RearRightWheelTransform", center=((0,2.5,0)), rotation=((-1,0,-1,1.92)), translation=((2.95,-5,7)), children=[
#Rear wheels are taken from the Savage Library and re-animated (from F18 Blue Angel)

Inline(url=["RearRightWheel.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearRightWheel.x3d","RearRightWheel.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearRightWheel.wrl"]),]),
Transform(DEF="CockpitButtonsTransform", children=[
Transform(DEF="UpButtonTransform", rotation=((1,0,0,1.57)), scale=((0.008,0.008,0.008)), translation=((-0.95,1.05,-10)), children=[
Shape(
geometry=
Cylinder(height=1, radius=4), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0)), shininess=0.8))),
TouchSensor(DEF="TouchSensorUp", description="click for gears up")]),
Transform(DEF="DownButtonTransform", rotation=((1,0,0,1.57)), scale=((0.008,0.008,0.008)), translation=((-0.83,1.05,-10)), children=[
Shape(
geometry=
Cylinder(height=1, radius=4), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,0)), shininess=0.8))),
TouchSensor(DEF="TouchSensorDown", description="click for gears down")]),
Transform(DEF="GearUpTextTransform", scale=((0.06,0.06,0.06)), translation=((-0.65,1.55,-10)), children=[
Shape(
geometry=
Text(string=["RED Button","Gear Up"]), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0)))))]),
Transform(DEF="GearDownTextTransform", scale=((0.06,0.06,0.06)), translation=((-0.65,1.35,-10)), children=[
Shape(
geometry=
Text(length=(float(5.5)), string=["YELLOW Button","Gear Down"]), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,0)))))]),
Transform(DEF="FireButtonTransform", rotation=((1,0,0,1.57)), scale=((0.008,0.008,0.008)), translation=((0.52,1.6,-10)), children=[
Shape(
geometry=
Cylinder(height=1, radius=4), 
appearance=
Appearance(
material=
Material(diffuseColor=((0,0.75,0.18)), shininess=0.8))),
TouchSensor(DEF="FireSensor", description="click to fire")]),
Transform(DEF="FireTextTransform", scale=((0.06,0.06,0.06)), translation=((0.36,1.5,-10)), children=[
Shape(
geometry=
Text(string=["Target Locked"," FIRE!..","(Green Button)"]), 
appearance=
Appearance(
material=
Material(diffuseColor=((0,0.75,0.18)))))])]),
Viewpoint(description="F16 Close Look-up", orientation=((-0.559,-0.827,-0.057,1.3534)), position=((-28.7,19.9,17.4))),
Viewpoint(description="Cockpit", orientation=((-1,0,0,0.1249)), position=((0,1.5,-7.9))),
Viewpoint(DEF="LandingGearAnimationView", description="Landing Gear Animation View", orientation=((-0.003,1,-0.012,2.5741)), position=((16.1,-5.8,-24.6))),
Viewpoint(description="Cockpit Left View", orientation=((-0.276,-0.922,-0.271,1.2338)), position=((-6.7,6.1,-3.9))),
Viewpoint(description="F-16 Front View", orientation=((-0.007,0.995,0.102,3.1152)), position=((-0.1,13.4,-65))),
Viewpoint(description="Cockpit Target View", orientation=((-0.834,-0.523,-0.176,0.0875)), position=((0,2.4,-7.9))),
Transform(DEF="NoseAntennaTransform", rotation=((1,0,0,1.57)), translation=((0,-0.275,-21)), children=[
Shape(
geometry=
Cylinder(radius=0.05), 
appearance=
Appearance(
material=
Material(diffuseColor=((0.5,0.5,0.5)), shininess=0.5)))])]),
TimeSensor(DEF="WheelUp", cycleInterval=8),
OrientationInterpolator(DEF="GearUpInterpolator", key=[float(0),float(0.5),float(1.0)], keyValue=[(float(1),float(0),float(0),float(0.0)),(float(1),float(0),float(0),float(-0.79)),(float(1),float(0),float(0),float(-1.92))]),
ROUTE(fromField="touchTime", fromNode="TouchSensorUp", toField="set_startTime", toNode="WheelUp"),
ROUTE(fromField="fraction_changed", fromNode="WheelUp", toField="set_fraction", toNode="GearUpInterpolator"),
ROUTE(fromField="value_changed", fromNode="GearUpInterpolator", toField="set_rotation", toNode="FrontWheelTransform"),
TimeSensor(DEF="WheelDown", cycleInterval=8),
OrientationInterpolator(DEF="GearDownInterpolator", key=[float(0),float(0.5),float(1.0)], keyValue=[(float(1),float(0),float(0),float(-1.92)),(float(1),float(0),float(0),float(-0.79)),(float(1),float(0),float(0),float(0.0))]),
ROUTE(fromField="touchTime", fromNode="TouchSensorDown", toField="set_startTime", toNode="WheelDown"),
ROUTE(fromField="fraction_changed", fromNode="WheelDown", toField="set_fraction", toNode="GearDownInterpolator"),
ROUTE(fromField="value_changed", fromNode="GearDownInterpolator", toField="set_rotation", toNode="FrontWheelTransform"),
#Animation commands for Rear Right Wheel Starts

TimeSensor(DEF="RRearUp1", cycleInterval=8),
TimeSensor(DEF="RRearDown1", cycleInterval=8),
OrientationInterpolator(DEF="RRearInterUp1", key=[float(0),float(0.5),float(1.0)], keyValue=[(float(-1),float(0),float(-1),float(0.0)),(float(-1),float(0),float(-1),float(0.44)),(float(-1),float(0),float(-1),float(1.92))]),
OrientationInterpolator(DEF="RRearInterDown1", key=[float(0),float(0.5),float(1.0)], keyValue=[(float(-1),float(0),float(-1),float(1.92)),(float(-1),float(0),float(-1),float(0.44)),(float(-1),float(0),float(-1),float(0.0))]),
ROUTE(fromField="touchTime", fromNode="TouchSensorDown", toField="set_startTime", toNode="RRearDown1"),
ROUTE(fromField="touchTime", fromNode="TouchSensorUp", toField="set_startTime", toNode="RRearUp1"),
ROUTE(fromField="fraction_changed", fromNode="RRearDown1", toField="set_fraction", toNode="RRearInterDown1"),
ROUTE(fromField="fraction_changed", fromNode="RRearUp1", toField="set_fraction", toNode="RRearInterUp1"),
ROUTE(fromField="value_changed", fromNode="RRearInterDown1", toField="set_rotation", toNode="RearRightWheelTransform"),
ROUTE(fromField="value_changed", fromNode="RRearInterUp1", toField="set_rotation", toNode="RearRightWheelTransform"),
#Animation commands for Rear Left Wheel

TimeSensor(DEF="LRearUp1", cycleInterval=8),
TimeSensor(DEF="LRearDown1", cycleInterval=8),
OrientationInterpolator(DEF="LRearInterUp1", key=[float(0),float(0.5),float(1.0)], keyValue=[(float(1),float(0),float(1),float(0.0)),(float(1),float(0),float(1),float(0.44)),(float(1),float(0),float(1),float(1.92))]),
OrientationInterpolator(DEF="LRearInterDown1", key=[float(0),float(0.5),float(1.0)], keyValue=[(float(1),float(0),float(1),float(1.92)),(float(1),float(0),float(1),float(0.44)),(float(1),float(0),float(1),float(0.0))]),
ROUTE(fromField="touchTime", fromNode="TouchSensorDown", toField="set_startTime", toNode="LRearDown1"),
ROUTE(fromField="touchTime", fromNode="TouchSensorUp", toField="set_startTime", toNode="LRearUp1"),
ROUTE(fromField="fraction_changed", fromNode="LRearDown1", toField="set_fraction", toNode="LRearInterDown1"),
ROUTE(fromField="fraction_changed", fromNode="LRearUp1", toField="set_fraction", toNode="LRearInterUp1"),
ROUTE(fromField="value_changed", fromNode="LRearInterDown1", toField="set_rotation", toNode="RearLeftWheelTransform"),
ROUTE(fromField="value_changed", fromNode="LRearInterUp1", toField="set_rotation", toNode="RearLeftWheelTransform"),
Background(groundAngle=[float(1.309),float(1.570796)], groundColor=[(0,0.3,0.7),(0,0.35,0.75),(0,0.4,0.8)], skyAngle=[float(1.309),float(1.571)], skyColor=[(0,0.3,0.8),(0,0.5,1),(1,1,1)]),
Transform(DEF="RightmostAmraamTransform", rotation=((-1,0,0,1.57)), scale=((1.4,1.4,1.4)), translation=((15.65,0,4.5)), children=[
Inline(DEF="Amraam", url=["../../Weapons/Missiles/Amraam.x3d","https://savage.nps.edu/Savage/Weapons/Missiles/Amraam.x3d","../../Weapons/Missiles/Amraam.wrl","https://savage.nps.edu/Savage/Weapons/Missiles/Amraam.wrl"])]),
Transform(DEF="LeftmostAmraamTransform", rotation=((-1,0,0,1.57)), scale=((1.4,1.4,1.4)), translation=((-15.65,0,4.5)), children=[
Inline(USE="Amraam")]),
Transform(DEF="SidewinderHolderTransformRight", rotation=((0,1,0,1.57)), scale=((6,3,3)), translation=((9,-1.125,8)), children=[
Inline(DEF="SidewinderHolder", url=["SidewinderHolder.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/SidewinderHolder.x3d","SidewinderHolder.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/SidewinderHolder.wrl"])]),
Transform(DEF="SidewinderHolderTransformLeft", rotation=((0,1,0,1.57)), scale=((6,3,3)), translation=((-8.45,-1.125,8)), children=[
Inline(USE="SidewinderHolder")]),
Transform(DEF="TurkishFlagTransformLeft", rotation=((0,-1,0,1.57)), scale=((0.3,0.25,0.3)), translation=((-0.01,8,19.5)), children=[
Inline(url=["TurkishFlagLeft.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagLeft.x3d","TurkishFlagLeft.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagLeft.wrl"])]),
Transform(DEF="TurkishFlagTransformRight", rotation=((0,1,0,1.57)), scale=((0.3,0.25,0.3)), translation=((0.01,8,20.5)), children=[
Inline(url=["TurkishFlagRight.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagRight.x3d","TurkishFlagRight.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagRight.wrl"])]),
Transform(DEF="AmraamHolderTransformLeft", translation=((-12,-0.176,10.7)), children=[
Inline(DEF="AmraamHolder", url=["AmraamHolder.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/AmraamHolder.x3d","AmraamHolder.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/AmraamHolder.wrl"])]),
Transform(DEF="AmraamHolderTransformRight", translation=((12,-0.176,10.7)), children=[
Inline(USE="AmraamHolder")]),
Transform(DEF="AmraamInnerTransformRight", rotation=((-1,0,0,1.57)), scale=((1.4,1.4,1.4)), translation=((12,-1.6,4.5)), children=[
Inline(USE="Amraam")]),
Transform(DEF="AmraamInnerTransformLeft", rotation=((-1,0,0,1.57)), scale=((1.4,1.4,1.4)), translation=((-12,-1.6,4.5)), children=[
Inline(USE="Amraam")]),
Transform(DEF="SidewinderTransformLeft", rotation=((-1,0,0,1.57)), scale=((1.6,1.6,1.6)), translation=((-8.7,-2,3.5)), children=[
Inline(DEF="Sidewinder", url=["../../Weapons/Missiles/Sidewinder.x3d","https://savage.nps.edu/Savage/Weapons/Missiles/Sidewinder.x3d","../../Weapons/Missiles/Sidewinder.wrl","https://savage.nps.edu/Savage/Weapons/Missiles/Sidewinder.wrl"])]),
Transform(DEF="SidewinderTransformRight", rotation=((-1,0,0,1.57)), scale=((1.6,1.6,1.6)), translation=((8.7,-2,3.5)), children=[
Inline(USE="Sidewinder")]),
Transform(DEF="FuelTankHolderTransformLeft", rotation=((0,1,0,1.57)), scale=((1.5,1.5,1.5)), translation=((-4.8,-1.125,6)), children=[
Inline(DEF="FuelTankHolder", url=["FuelTankHolder.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTankHolder.x3d","FuelTankHolder.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTankHolder.wrl"])]),
Transform(DEF="FuelTankHolderTransformRight", rotation=((0,1,0,1.57)), scale=((1.5,1.5,1.5)), translation=((5.3,-1.125,6)), children=[
Inline(USE="FuelTankHolder")]),
Transform(DEF="FuelTankTransformRight", rotation=((-1,0,0,1.57)), scale=((1.5,1.5,1.5)), translation=((5,-2.85,5.5)), children=[
Inline(DEF="FuelTank", url=["FuelTank.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTank.x3d","FuelTank.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTank.wrl"])]),
Transform(DEF="FuelTankTransformLeft", rotation=((-1,0,0,1.57)), scale=((1.5,1.5,1.5)), translation=((-5,-2.85,5.5)), children=[
Inline(USE="FuelTank")]),
Transform(DEF="InlineCoverOfPlaneTansform", children=[
Shape(
geometry=
Box(size=((4.15,0.1,20))), 
appearance=
Appearance(
material=
Material(diffuseColor=((0.25,0.25,0.25)))))]),
Transform(DEF="TargetHelicopterTransform", translation=((16,-50,-500)), children=[
Inline(url=["Target.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Target.x3d","Target.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Target.wrl"])]),
TimeSensor(DEF="FireClock", cycleInterval=8),
PositionInterpolator(DEF="MissilePath", key=[float(0.0),float(0.1),float(1.0)], keyValue=[(-15.65,0,4.5),(-15.65,-2,4.5),(16,-50,-500)]),
ROUTE(fromField="touchTime", fromNode="FireSensor", toField="set_startTime", toNode="FireClock"),
ROUTE(fromField="fraction_changed", fromNode="FireClock", toField="set_fraction", toNode="MissilePath"),
ROUTE(fromField="value_changed", fromNode="MissilePath", toField="set_translation", toNode="LeftmostAmraamTransform"),
Viewpoint(DEF="MissileLaunchView", description="Missile Fire View", orientation=((0.094,-0.994,0.057,1.1716)), position=((-344.3,-142.8,-27.7))),
ROUTE(fromField="isActive", fromNode="FireSensor", toField="set_bind", toNode="MissileLaunchView"),
#TODO fix type, add filter
]))
.XML())
