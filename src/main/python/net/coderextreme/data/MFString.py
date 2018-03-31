# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.0")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("F16.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("description")
meta3.setContent("F-16, The Fighting Falcon, Turkish Air Force (TUAF), Turkey")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("creator")
meta4.setContent("Murat ONDER, LTJG, Turkish Navy")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("creator")
meta5.setContent("The coordinates of the main body (Except landing gears, nose antenna, flag, weapons, missile holders, cockpit, cockpit seat and fuel tanks) are mostly similar to the model of Soji Yamakawa and used with permission.")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("created")
meta6.setContent("13 July 2003")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("modified")
meta7.setContent("27 November 2015")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("reference")
meta8.setContent("http://www.fas.org/man/dod-101/sys/ac/f-16.htm")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("permission")
meta9.setContent("Here is a copy of the permission for the usage of the main hull; -----Original Message----- From: Soji Yamakawa [mailto:soji@andrew.cmu.edu] Sent: Tuesday, September 16, 2003 8:00 PM To: Onder, Murat TUR Subject: Re: VRML model points usage permission Sure. No problem. Soji ----- Original Message ----- From: \"Murat Onder\" <monder@nps.navy.mil> To: <Soji_Yamakawa@cmu.edu>; <PEB01130@nifty.ne.jp> Sent: Monday, September 15, 2003 3:50 PM Subject: VRML model points usage permission Hi Sir, I&apos;m a MS student in Naval Postgraduate School. I'm making a model of Turkish F-16 for my project in a VRML course. For the main hull of the F-16, I want to use the coordinate points of your VRML model since I think that model represents well enough F-16. This is going to be only a student project and will not be used for any commercial purposes. Of course I'll make the citation and put the reference links to your page in the meta files of x3d file. I'd like to know if you can give permission to use those points in my model. V/R, Murat Onder LTJG, TU NAVY")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setName("reference")
meta10.setContent("The landing gears are taken from the Savage Archive, from F18 Blue Angel, then modified and re-animated.")

head1.addMeta(meta10)
meta11 = metaObject()
meta11.setName("drawing")
meta11.setContent("\"Drawing.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Drawing.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Drawing.jpg\"")

head1.addMeta(meta11)
meta12 = metaObject()
meta12.setName("Image")
meta12.setContent("\"FrontView.jpg\" \"FrontView2.jpg\" \"Missiles.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView2.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView2.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Missiles.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Missiles.jpg\"")

head1.addMeta(meta12)
meta13 = metaObject()
meta13.setName("identifier")
meta13.setContent("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/F16.x3d")

head1.addMeta(meta13)
meta14 = metaObject()
meta14.setName("subject")
meta14.setContent("F16, F-16, Fighting Falcon")

head1.addMeta(meta14)
meta15 = metaObject()
meta15.setName("generator")
meta15.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta15)
meta16 = metaObject()
meta16.setName("license")
meta16.setContent("../../license.html")

head1.addMeta(meta16)
X3D0.setHead(head1)
Scene17 = SceneObject()

Transform18 = TransformObject()
Transform18.setDEF("F16Transform")

Transform19 = TransformObject()
Transform19.setDEF("MainFrameTransform")
Transform19.setScale([3,3,3])

Shape20 = ShapeObject()
Shape20.setDEF("Nose")

Appearance21 = AppearanceObject()

Material22 = MaterialObject()
Material22.setDiffuseColor([0.25,0.25,0.25])

Appearance21.setMaterial(Material22)
Shape20.setAppearance(Appearance21)
IndexedFaceSet23 = IndexedFaceSetObject()
IndexedFaceSet23.setCoordIndex([24,0,3,-1,4,0,24,-1,25,26,27,-1,28,25,27,-1,27,29,28,-1,27,30,29,-1,27,31,30,-1,3,18,24,-1])
IndexedFaceSet23.setCreaseAngle(0.5)
IndexedFaceSet23.setNormalIndex([16,0,3,-1,4,0,16,-1,17,17,17,-1,18,18,18,-1,19,19,19,-1,20,20,20,-1,21,21,21,-1,3,14,16,-1])
IndexedFaceSet23.setSolid(False)

Coordinate24 = CoordinateObject()
Coordinate24.setDEF("coordinates")
Coordinate24.setPoint([-0.32,0.36,-4.91,-0.38,0.43,-4.21,0,0.6,-4.2,0,0.5,-4.9,-0.5,0,-4.9,-0.6,0,-4.2,1,0,5.8,1,0,5.3,2.8,-0.4,6.3,2.8,-0.4,6.61,0.31,-0.36,-4.9,0.4,-0.35,-4.2,0,-0.4,-4.2,0,-0.4,-4.9,-0.31,-0.36,-4.9,-0.4,-0.35,-4.2,0.5,0,-4.9,0.6,0,-4.2,0.32,0.36,-4.91,0.38,0.43,-4.21,-1,0,5.8,-1,0,5.3,-2.8,-0.4,6.3,-2.8,-0.4,6.61,0,-0.1,-7,-0.31,-0.36,-4.9,-0.5,0,-4.9,0,-0.1,-7,0,-0.4,-4.9,0.31,-0.36,-4.9,0.5,0,-4.9,0.32,0.36,-4.91,-0.27,0.93,-3.51,0,1.1,-3.6,-0.33,0.5,-3.41,-0.34,0.9,-1.73,0,0.9,-1,0,1.1,-1.8,-0.38,0.64,-1.68,0.34,0.9,-1.73,0,0.9,-1,0.38,0.64,-1.68,0.34,0.9,-1.73,0.27,0.93,-3.51,0.33,0.5,-3.41,0,1.3,-2.8,0.45,1.02,-2.68,0.38,0.64,-1.68,0.53,0.5,-2.56,-0.53,0.5,-2.56,-0.45,1.02,-2.68,-0.53,0.75,0,-0.56,0.66,2.8,0,0.7,2.8,0,0.8,0,-1.1,0.3,0,-1,0.3,2.8,-0.37,0.57,4.9,0,0.59,4.9,-0.7,0.3,4.9,-0.7,0.3,4.9,-0.7,0,7,-0.5,0.49,7,-0.5,0.49,7,0,0.7,7,-1.4,0,0,-1.4,0,3.9,-1.4,0,3.9,-1,0,3.9,-1,0.3,2.8,-1,0.3,4.9,-0.59,0.65,-0.77,-0.8,0.3,-0.6,-1.4,0,-0.7,-1,-0.1,2.8,-0.7,-0.7,-2.5,-0.5,-0.9,-2.5,-0.5,-0.9,-0.6,-0.7,-0.7,-0.6,0,-1,-2.5,0,-1,-0.6,-0.72,-0.12,-2.5,-0.8,-0.3,-2.5,-0.8,-0.3,-0.6,-0.8,-0.3,-2.5,-0.8,-0.3,-0.6,-1.4,0,0,-1.4,0,-0.7,-0.7,-0.1,4.9,-1,-0.1,4.9,-0.5,-0.9,4.9,-0.7,-0.7,4.9,0,-1,4.9,-0.7,-0.1,4.9,-0.5,-0.5,7,-0.7,0,7,0,-0.7,7,-1,0,7.4,-2.8,-0.4,7.1,-2.57,-0.32,7.42,-4.9,0.1,4,-5.1,0.1,4,-5.1,-0.1,4,-4.9,-0.1,4,-5.1,0.1,1.6,-5.1,-0.1,1.6,-4.9,0.1,2.8,-4.9,-0.1,2.8,-0.58,-0.83,3.6,-0.72,-1.4,3.9,-0.69,-1.32,4.9,-0.58,-0.83,4.9,0.58,-0.83,3.6,0.72,-1.4,3.9,0.69,-1.32,4.9,0.58,-0.83,4.9,4.9,-0.1,2.8,5.1,-0.1,1.6,5.1,-0.1,4,4.9,-0.1,4,-0.8,0,-2.5,4.9,0.1,4,5.1,0.1,4,5.1,0.1,1.6,4.9,0.1,2.8,0.59,0.65,-0.77,0.8,0.3,-0.6,0.8,0,-2.5,-0.8,0,-2.5,0.8,-0.3,-0.6,0.72,-0.12,-2.5,0.8,0,-2.5,1,0,7.4,2.8,-0.4,7.1,2.57,-0.32,7.42,-0.7,0,7.4,0.5,-0.9,4.9,0.7,-0.7,4.9,0.5,-0.5,7,-4.9,0,2.8,-4.9,0,3.9,0.7,-0.1,4.9,0.7,0,7,1.4,0,0,4.9,0,2.8,4.9,0,3.9,1.4,0,3.9,1.4,0,-0.7,1.4,0,-0.7,0.7,-0.7,-0.6,0.8,-0.3,-0.6,0.5,-0.9,-0.6,1,-0.1,4.9,1,0.3,4.9,0.7,0,7.4,0.7,0.3,4.9,0.7,-0.1,4.9,0.56,0.66,2.8,0.53,0.75,0,1,0.3,2.8,1.1,0.3,0,0.37,0.57,4.9,0.7,0.3,4.9,0.5,0.49,7,0.7,0,7,0.5,0.49,7,1.4,0,3.9,1.4,0,0,1,0.3,2.8,1,0,3.9,1,-0.1,2.8,0.5,-0.9,-2.5,0.7,-0.7,-2.5,0.8,-0.3,-2.5,0.8,-0.3,-2.5,1,0.3,3.9,0.59,0.65,-0.77,0,0.7,2.8,0,1.4,4.5,0,0.59,4.9,0,3.5,6.8,0,3.5,8.1,0,1.4,7.3,0,0.7,7,0,0.7,7.3,-1,0.3,3.9,0,0.35,7.7,-0.25,0.24,7.7,-0.35,0,7.7,-0.25,-0.25,7.7,0,-0.35,7.7,0.25,-0.25,7.7,0.35,0,7.7,0.25,0.24,7.7,0,-0.2,-2.5,0.7,-0.7,-2.5,0.5,-0.9,-2.5,0,-1,-2.5,-0.5,-0.9,-2.5,-0.7,-0.7,-2.5,0,-0.2,-2.5,-0.72,-0.12,-2.5,0.72,-0.12,-2.5,0.25,0.24,7.7,0.35,0,7.7,-0.35,0,7.7,-0.25,0.24,7.7])

IndexedFaceSet23.setCoord(Coordinate24)
Normal25 = NormalObject()
Normal25.setDEF("normalVector")
Normal25.setVector([-0.68,0.714,-0.166,-0.689,0.721,-0.072,0,0.965,-0.26,0,0.985,-0.175,-0.99,-0.016,-0.138,-0.999,-0.022,-0.037,0.567,-0.819,-0.093,0.561,-0.828,0,0,-1,0,0,-0.997,-0.071,-0.567,-0.819,-0.093,-0.561,-0.828,0,0.99,-0.016,-0.138,0.999,-0.022,-0.037,0.68,0.714,-0.166,0.689,0.721,-0.072,-0.351,0.889,-0.294,-0.868,-0.459,-0.19,-0.13,-0.982,-0.14,0.13,-0.982,-0.14,0.868,-0.459,-0.19,0.872,0.431,-0.231,-0.834,0.445,-0.327,0,0.929,-0.369,-0.88,0.401,-0.256,-0.799,0.577,0.169,-0.58,0.798,0.164,0,0.998,0.065,-0.862,0.486,0.146,0.886,0.219,0.408,0.799,0.577,0.169,0.834,0.445,-0.327,0.88,0.401,-0.256,0,0.995,-0.096,0.842,0.534,-0.08,0.862,0.486,0.146,0.833,0.549,-0.073,-0.833,0.549,-0.073,-0.842,0.534,-0.08,-0.485,0.87,-0.089,-0.37,0.929,0,0,1,0,0,1,-0.01,-0.592,0.796,-0.125,-0.573,0.818,0.05,-0.37,0.929,-0.01,0,1,-0.025,-0.487,0.873,0.036,-0.923,0.381,0.05,-0.683,0.704,0.195,0,0.99,0.14,-0.707,0.707,0,-0.385,0.912,0.141,0,0.966,0.259,-0.563,0.826,-0.037,-0.661,0.738,-0.138,-0.521,0.846,-0.115,0,-0.996,0.09,-0.773,-0.436,-0.461,-0.42,-0.781,-0.463,-0.474,-0.881,0,-0.871,-0.492,0,0,-0.891,-0.455,-0.917,0.399,0,-0.881,0.074,-0.467,-0.902,-0.429,-0.039,-0.09,-0.995,0.05,-0.451,-0.892,0,-0.28,-0.959,0.04,-0.468,-0.878,0.097,-0.877,-0.474,0.085,0,-0.997,0.072,-0.693,-0.72,0.045,-0.79,-0.562,0.244,-0.968,0.003,0.25,0,-0.966,0.257,0,0,1,-1,0,0,0.987,0,-0.16,1,0,0,-0.831,-0.551,-0.08,0.563,0.826,-0.037,0.661,0.738,-0.138,0.998,-0.037,-0.049,-0.987,0,-0.16,-0.998,-0.037,-0.049,0.831,-0.551,-0.08,0,-0.999,0.04,0,0.993,0.12,0.468,-0.878,0.097,0.877,-0.474,0.085,0.79,-0.562,0.244,-0.419,-0.897,-0.14,0.693,-0.72,0.045,0.968,0.003,0.25,0.521,0.846,-0.115,0.419,-0.897,-0.14,0.871,-0.492,0,0.902,-0.429,-0.039,0.474,-0.881,0,0.37,0.929,0,0.485,0.87,-0.089,0.573,0.818,0.05,0.592,0.796,-0.125,0.37,0.929,-0.01,0.487,0.873,0.036,0.923,0.381,0.05,0.683,0.704,0.195,0.385,0.912,0.141,0.707,0.707,0,0.42,-0.781,-0.463,0.773,-0.436,-0.461,0.917,0.399,0,0.881,0.074,-0.467,0.09,-0.995,0.05,0.451,-0.892,0,0.28,-0.959,0.04,0.42,0.901,-0.11,0,0.666,0.746,-0.481,0.468,0.741,-0.674,0,0.738,-0.475,-0.475,0.741,0,-0.674,0.738,0.475,-0.475,0.741,0.674,0,0.738,0.481,0.468,0.741,0,0,-1,0,-0.893,-0.45,-0.901,-0.224,-0.372,0.901,-0.224,-0.372,0.841,0.34,0.421,-0.841,0.34,0.421])

IndexedFaceSet23.setNormal(Normal25)
Shape20.setGeometry(IndexedFaceSet23)
Transform19.addChild(Shape20)
Shape26 = ShapeObject()
Shape26.setDEF("Canopy")

Appearance27 = AppearanceObject()

Material28 = MaterialObject()
Material28.setDiffuseColor([0.25,0.25,0.25])
Material28.setTransparency(0.8)

Appearance27.setMaterial(Material28)
Shape26.setAppearance(Appearance27)
IndexedFaceSet29 = IndexedFaceSetObject()
IndexedFaceSet29.setCoordIndex([2,32,33,-1,34,32,2,-1,35,36,37,-1,38,36,35,-1,39,40,41,-1,37,36,42,-1,2,43,44,-1,33,43,2,-1,45,37,42,46,-1,46,42,47,48,-1,33,45,46,43,-1,43,46,48,44,-1,34,49,50,32,-1,32,50,45,33,-1,49,38,35,50,-1,50,35,37,45,-1])
IndexedFaceSet29.setCreaseAngle(0.5)
IndexedFaceSet29.setNormalIndex([2,22,23,-1,24,22,2,-1,25,26,27,-1,28,26,25,-1,29,29,29,-1,27,26,30,-1,2,31,32,-1,23,31,2,-1,33,27,30,34,-1,34,30,35,36,-1,23,33,34,31,-1,31,34,36,32,-1,24,37,38,22,-1,22,38,33,23,-1,37,28,25,38,-1,38,25,27,33,-1])
IndexedFaceSet29.setSolid(False)

Coordinate30 = CoordinateObject()
Coordinate30.setUSE("coordinates")

IndexedFaceSet29.setCoord(Coordinate30)
Normal31 = NormalObject()
Normal31.setUSE("normalVector")

IndexedFaceSet29.setNormal(Normal31)
Shape26.setGeometry(IndexedFaceSet29)
Transform19.addChild(Shape26)
Shape32 = ShapeObject()
Shape32.setDEF("MainBodyAndWingEdges")

Appearance33 = AppearanceObject()

Material34 = MaterialObject()
Material34.setDiffuseColor([0.1796,0.1914,0.2382])

Appearance33.setMaterial(Material34)
Shape32.setAppearance(Appearance33)
IndexedFaceSet35 = IndexedFaceSetObject()
IndexedFaceSet35.setCoordIndex([51,52,53,54,-1,55,56,52,51,-1,52,57,58,53,-1,56,59,57,52,-1,60,61,62,-1,57,59,63,-1,57,63,64,-1,58,57,64,-1,56,55,65,66,-1,67,68,69,-1,69,70,60,-1,71,54,36,-1,51,54,71,-1,72,51,71,-1,55,51,72,-1,72,73,55,-1,65,55,73,-1,68,67,74,-1,75,76,77,78,-1,76,79,80,77,-1,81,82,83,-1,84,75,78,85,-1,83,74,67,-1,67,86,87,83,-1,74,88,89,-1,88,74,83,-1,78,77,90,91,-1,77,80,92,90,-1,85,91,93,-1,85,78,91,-1,94,95,93,-1,94,93,91,-1,91,96,94,-1,96,91,90,-1,90,92,96,-1,100,101,102,103,-1,101,104,105,102,-1,104,106,107,105,-1,106,100,103,107,-1,106,104,101,100,-1,103,102,105,107,-1,116,117,118,119,-1,120,81,83,-1,121,122,123,124,-1,116,119,121,124,-1,48,125,126,127,-1,117,116,124,123,-1,128,72,71,49,-1,118,117,123,122,-1,119,118,122,121,-1,129,130,131,-1,89,88,135,97,-1,60,70,97,135,-1,70,89,97,-1,96,92,136,-1,136,137,96,-1,138,96,137,-1,120,83,87,-1,128,73,72,-1,137,141,138,-1,141,142,138,-1,126,147,127,-1,148,129,131,-1,137,149,150,-1,141,137,150,-1,136,92,80,151,-1,137,136,151,149,-1,132,152,153,-1,154,132,153,155,-1,132,154,156,152,-1,54,53,157,158,-1,158,157,159,160,-1,53,58,161,157,-1,157,161,162,159,-1,163,164,155,-1,165,162,161,-1,64,165,161,-1,64,161,58,-1,166,167,160,159,-1,168,169,146,-1,155,153,168,-1,36,54,125,-1,125,54,158,-1,125,158,126,-1,126,158,160,-1,160,147,126,-1,147,160,167,-1,170,146,169,-1,149,151,171,172,-1,151,80,79,171,-1,129,173,130,-1,150,149,172,174,-1,146,170,129,-1,129,148,143,146,-1,152,156,170,-1,129,170,156,-1,156,154,164,-1,154,155,164,-1,168,175,169,-1,175,153,152,169,-1,152,170,169,-1,48,47,125,-1,41,40,176,-1,71,38,49,-1,71,36,38,-1,61,135,88,-1,61,60,135,-1,68,185,69,-1,68,74,89,-1,68,89,70,185,-1])
IndexedFaceSet35.setCreaseAngle(0.5)
IndexedFaceSet35.setNormalIndex([39,40,41,42,-1,43,44,40,39,-1,40,45,46,41,-1,44,47,45,40,-1,48,48,48,-1,45,47,49,-1,45,49,50,-1,46,45,50,-1,44,43,51,52,-1,53,53,53,-1,41,41,41,-1,54,42,26,-1,39,42,54,-1,55,39,54,-1,43,39,55,-1,55,56,43,-1,51,43,56,-1,57,57,57,-1,58,59,60,61,-1,59,62,8,60,-1,63,63,63,-1,64,58,61,65,-1,66,66,66,-1,67,67,67,67,-1,8,8,8,-1,68,68,68,-1,61,60,69,70,-1,60,8,71,69,-1,65,70,72,-1,65,61,70,-1,73,74,72,-1,73,72,70,-1,70,75,73,-1,75,70,69,-1,69,71,75,-1,76,76,76,76,-1,77,77,77,77,-1,78,78,78,78,-1,79,79,79,79,-1,41,41,41,41,-1,8,8,8,8,-1,8,8,8,8,-1,80,80,80,-1,41,41,41,41,-1,77,77,77,77,-1,36,81,82,83,-1,84,84,84,84,-1,85,55,54,37,-1,79,79,79,79,-1,76,76,76,76,-1,86,86,86,-1,87,87,87,87,-1,88,88,88,88,-1,77,77,77,-1,75,71,89,-1,89,90,75,-1,91,75,90,-1,92,92,92,-1,85,56,55,-1,90,93,91,-1,93,94,91,-1,82,95,83,-1,96,96,96,-1,90,97,98,-1,93,90,98,-1,89,71,8,99,-1,90,89,99,97,-1,79,79,79,-1,88,88,88,88,-1,87,87,87,87,-1,42,41,100,101,-1,101,100,102,103,-1,41,46,104,100,-1,100,104,105,102,-1,106,106,106,-1,107,105,104,-1,50,107,104,-1,50,104,46,-1,108,109,103,102,-1,53,53,53,-1,41,41,41,-1,26,42,81,-1,81,42,101,-1,81,101,82,-1,82,101,103,-1,103,95,82,-1,95,103,109,-1,57,57,57,-1,97,99,110,111,-1,99,8,62,110,-1,112,112,112,-1,98,97,111,113,-1,114,114,114,-1,115,115,115,115,-1,8,8,8,-1,116,116,116,-1,77,77,77,-1,77,77,77,-1,79,79,79,-1,79,79,79,79,-1,79,79,79,-1,36,35,81,-1,117,117,117,-1,54,28,37,-1,54,26,28,-1,79,79,79,-1,79,79,79,-1,77,77,77,-1,77,77,77,-1,77,77,77,77,-1])
IndexedFaceSet35.setSolid(False)

Coordinate36 = CoordinateObject()
Coordinate36.setUSE("coordinates")

IndexedFaceSet35.setCoord(Coordinate36)
Normal37 = NormalObject()
Normal37.setUSE("normalVector")

IndexedFaceSet35.setNormal(Normal37)
Shape32.setGeometry(IndexedFaceSet35)
Transform19.addChild(Shape32)
Shape38 = ShapeObject()
Shape38.setDEF("ExhaustExitFlatPanel")

Appearance39 = AppearanceObject()

Material40 = MaterialObject()
Material40.setDiffuseColor([0.5,0.5,0.5])

Appearance39.setMaterial(Material40)
Shape38.setAppearance(Appearance39)
IndexedFaceSet41 = IndexedFaceSetObject()
IndexedFaceSet41.setCoordIndex([186,187,188,189,190,-1,190,191,192,193,186,-1])
IndexedFaceSet41.setCreaseAngle(0.5)
IndexedFaceSet41.setNormalIndex([118,119,120,121,122,-1,122,123,124,125,118,-1])
IndexedFaceSet41.setSolid(False)

Coordinate42 = CoordinateObject()
Coordinate42.setUSE("coordinates")

IndexedFaceSet41.setCoord(Coordinate42)
Normal43 = NormalObject()
Normal43.setUSE("normalVector")

IndexedFaceSet41.setNormal(Normal43)
Shape38.setGeometry(IndexedFaceSet41)
Transform19.addChild(Shape38)
Shape44 = ShapeObject()
Shape44.setDEF("ExhaustEntranceFrontBottomPart")

Appearance45 = AppearanceObject()

Material46 = MaterialObject()
Material46.setDiffuseColor([0.2304,0.2304,0.2304])

Appearance45.setMaterial(Material46)
Shape44.setAppearance(Appearance45)
IndexedFaceSet47 = IndexedFaceSetObject()
IndexedFaceSet47.setCoordIndex([194,130,173,195,196,197,-1,197,198,199,82,81,194,-1])
IndexedFaceSet47.setCreaseAngle(0.5)
IndexedFaceSet47.setNormalIndex([126,126,126,126,126,126,-1,126,126,126,126,126,126,-1])
IndexedFaceSet47.setSolid(False)

Coordinate48 = CoordinateObject()
Coordinate48.setUSE("coordinates")

IndexedFaceSet47.setCoord(Coordinate48)
Normal49 = NormalObject()
Normal49.setUSE("normalVector")

IndexedFaceSet47.setNormal(Normal49)
Shape44.setGeometry(IndexedFaceSet47)
Transform19.addChild(Shape44)
Shape50 = ShapeObject()
Shape50.setDEF("ThirdPartFromNoseUnderCanopy")

Appearance51 = AppearanceObject()

Material52 = MaterialObject()
Material52.setDiffuseColor([0.6,0.6,0.6])

Appearance51.setMaterial(Material52)
Shape50.setAppearance(Appearance51)
IndexedFaceSet53 = IndexedFaceSetObject()
IndexedFaceSet53.setCoordIndex([12,200,201,15,-1,19,48,127,17,-1,15,201,128,5,-1,17,127,202,11,-1,11,202,200,12,-1,5,128,49,1,-1,48,19,44,-1,19,2,44,-1,34,1,49,-1,34,2,1,-1])
IndexedFaceSet53.setCreaseAngle(0.5)
IndexedFaceSet53.setNormalIndex([8,127,128,11,-1,15,36,83,13,-1,11,128,85,5,-1,13,83,129,7,-1,7,129,127,8,-1,5,85,37,1,-1,36,15,32,-1,15,2,32,-1,24,1,37,-1,24,2,1,-1])
IndexedFaceSet53.setSolid(False)

Coordinate54 = CoordinateObject()
Coordinate54.setUSE("coordinates")

IndexedFaceSet53.setCoord(Coordinate54)
Normal55 = NormalObject()
Normal55.setUSE("normalVector")

IndexedFaceSet53.setNormal(Normal55)
Shape50.setGeometry(IndexedFaceSet53)
Transform19.addChild(Shape50)
Shape56 = ShapeObject()
Shape56.setDEF("RearExhaustExitPartLastPartOfMainBody")

Appearance57 = AppearanceObject()

Material58 = MaterialObject()
Material58.setDiffuseColor([0.37,0.37,0.37])
Material58.setShininess(0.5)

Appearance57.setMaterial(Material58)
Shape56.setAppearance(Appearance57)
IndexedFaceSet59 = IndexedFaceSetObject()
IndexedFaceSet59.setCoordIndex([64,186,193,165,-1,203,204,164,163,-1,192,191,138,142,-1,191,190,96,138,-1,94,96,190,189,-1,95,94,189,188,-1,63,187,186,64,-1,62,61,205,206,-1])
IndexedFaceSet59.setCreaseAngle(0.5)
IndexedFaceSet59.setNormalIndex([50,118,125,107,-1,130,130,130,130,-1,124,123,91,94,-1,123,122,75,91,-1,73,75,122,121,-1,74,73,121,120,-1,49,119,118,50,-1,131,131,131,131,-1])
IndexedFaceSet59.setSolid(False)

Coordinate60 = CoordinateObject()
Coordinate60.setUSE("coordinates")

IndexedFaceSet59.setCoord(Coordinate60)
Normal61 = NormalObject()
Normal61.setUSE("normalVector")

IndexedFaceSet59.setNormal(Normal61)
Shape56.setGeometry(IndexedFaceSet59)
Transform19.addChild(Shape56)
Shape62 = ShapeObject()
Shape62.setDEF("WingsAndTail")

Appearance63 = AppearanceObject()

Material64 = MaterialObject()
Material64.setEmissiveColor([0.1796,0.1914,0.2382])

Appearance63.setMaterial(Material64)
Shape62.setAppearance(Appearance63)
IndexedFaceSet65 = IndexedFaceSetObject()
IndexedFaceSet65.setColorPerVertex(False)
IndexedFaceSet65.setCoordIndex([6,7,8,9,-1,9,8,7,6,-1,20,21,22,23,-1,23,22,21,20,-1,97,20,23,98,99,-1,99,98,23,20,97,-1,108,109,110,111,-1,111,110,109,108,-1,112,113,114,115,-1,115,114,113,112,-1,132,6,9,133,134,-1,134,133,9,6,132,-1,86,139,140,67,-1,67,140,139,86,-1,143,144,145,146,-1,146,145,144,143,-1,177,178,179,-1,179,178,177,-1,178,180,181,182,183,179,-1,179,183,182,181,180,178,-1,182,184,183,-1,183,184,182,-1,177,178,179,-1,179,178,177,-1,178,180,181,182,183,179,-1,179,183,182,181,180,178,-1,182,184,183,-1,183,184,182,-1])
IndexedFaceSet65.setCreaseAngle(0.5)
IndexedFaceSet65.setNormalIndex([50,118,125,107,-1,130,130,130,130,-1,124,123,91,94,-1,123,122,75,91,-1,73,75,122,121,-1,74,73,121,120,-1,49,119,118,50,-1,131,131,131,131,-1])
IndexedFaceSet65.setSolid(False)

Coordinate66 = CoordinateObject()
Coordinate66.setUSE("coordinates")

IndexedFaceSet65.setCoord(Coordinate66)
Normal67 = NormalObject()
Normal67.setUSE("normalVector")

IndexedFaceSet65.setNormal(Normal67)
Shape62.setGeometry(IndexedFaceSet65)
Transform19.addChild(Shape62)
Shape68 = ShapeObject()
Shape68.setDEF("SecondPartAfterNose")

Appearance69 = AppearanceObject()

Material70 = MaterialObject()
Material70.setDiffuseColor([0.6,0.6,0.6])

Appearance69.setMaterial(Material70)
Shape68.setAppearance(Appearance69)
IndexedFaceSet71 = IndexedFaceSetObject()
IndexedFaceSet71.setCoordIndex([0,1,2,3,-1,4,5,1,0,-1,10,11,12,13,-1,14,15,5,4,-1,13,12,15,14,-1,16,17,11,10,-1,18,19,17,16,-1,3,2,19,18,-1])
IndexedFaceSet71.setCreaseAngle(0.5)
IndexedFaceSet71.setNormalIndex([0,1,2,3,-1,4,5,1,0,-1,6,7,8,9,-1,10,11,5,4,-1,9,8,11,10,-1,12,13,7,6,-1,14,15,13,12,-1,3,2,15,14,-1])
IndexedFaceSet71.setSolid(False)

Coordinate72 = CoordinateObject()
Coordinate72.setUSE("coordinates")

IndexedFaceSet71.setCoord(Coordinate72)
Normal73 = NormalObject()
Normal73.setUSE("normalVector")

IndexedFaceSet71.setNormal(Normal73)
Shape68.setGeometry(IndexedFaceSet71)
Transform19.addChild(Shape68)
Transform18.addChild(Transform19)
Transform74 = TransformObject()
Transform74.setDEF("CockpitTransform")
Transform74.setRotation([1,0,0,-0.1])
Transform74.setScale([0.045,0.045,0.045])
Transform74.setTranslation([0,1,-10])

Transform18.addChild(Transform74)
Transform75 = TransformObject()
Transform75.setDEF("SeatTransform")
Transform75.setRotation([-1,0,0,-0.1])
Transform75.setScale([0.9,0.9,0.9])
Transform75.setTranslation([0,0,-8.3])

Transform18.addChild(Transform75)
Transform76 = TransformObject()
Transform76.setDEF("FrontWheelTransform")
Transform76.setCenter([0,2.5,0])
Transform76.setRotation([-1,0,0,1.92])
Transform76.setTranslation([0.7,-5.2,-6.5])


Transform76.addComments(CommentsBlock("""Front wheel is taken from the Savage Library, modified and re-animated.(from F18 Blue Angel)"""))
Transform18.addChild(Transform76)
Transform77 = TransformObject()
Transform77.setDEF("RearLeftWheelTransform")
Transform77.setCenter([0,2.5,0])
Transform77.setRotation([1,0,1,1.92])
Transform77.setTranslation([-2.95,-5,7])


Transform77.addComments(CommentsBlock("""Rear wheels are taken from the Savage Library and re-animated (from F18 Blue Angel)"""))
Transform18.addChild(Transform77)
Transform78 = TransformObject()
Transform78.setDEF("RearRightWheelTransform")
Transform78.setCenter([0,2.5,0])
Transform78.setRotation([-1,0,-1,1.92])
Transform78.setTranslation([2.95,-5,7])


Transform78.addComments(CommentsBlock("""Rear wheels are taken from the Savage Library and re-animated (from F18 Blue Angel)"""))
Transform18.addChild(Transform78)
Transform79 = TransformObject()
Transform79.setDEF("CockpitButtonsTransform")

Transform80 = TransformObject()
Transform80.setDEF("UpButtonTransform")
Transform80.setRotation([1,0,0,1.57])
Transform80.setScale([0.008,0.008,0.008])
Transform80.setTranslation([-0.95,1.05,-10])

Shape81 = ShapeObject()

Cylinder82 = CylinderObject()
Cylinder82.setHeight(1)
Cylinder82.setRadius(4)

Shape81.setGeometry(Cylinder82)
Appearance83 = AppearanceObject()

Material84 = MaterialObject()
Material84.setDiffuseColor([1,0,0])
Material84.setShininess(0.8)

Appearance83.setMaterial(Material84)
Shape81.setAppearance(Appearance83)
Transform80.addChild(Shape81)
TouchSensor85 = TouchSensorObject()
TouchSensor85.setDEF("TouchSensorUp")
TouchSensor85.setDescription("click for gears up")

Transform80.addChild(TouchSensor85)
Transform79.addChild(Transform80)
Transform86 = TransformObject()
Transform86.setDEF("DownButtonTransform")
Transform86.setRotation([1,0,0,1.57])
Transform86.setScale([0.008,0.008,0.008])
Transform86.setTranslation([-0.83,1.05,-10])

Shape87 = ShapeObject()

Cylinder88 = CylinderObject()
Cylinder88.setHeight(1)
Cylinder88.setRadius(4)

Shape87.setGeometry(Cylinder88)
Appearance89 = AppearanceObject()

Material90 = MaterialObject()
Material90.setDiffuseColor([1,1,0])
Material90.setShininess(0.8)

Appearance89.setMaterial(Material90)
Shape87.setAppearance(Appearance89)
Transform86.addChild(Shape87)
TouchSensor91 = TouchSensorObject()
TouchSensor91.setDEF("TouchSensorDown")
TouchSensor91.setDescription("click for gears down")

Transform86.addChild(TouchSensor91)
Transform79.addChild(Transform86)
Transform92 = TransformObject()
Transform92.setDEF("GearUpTextTransform")
Transform92.setScale([0.06,0.06,0.06])
Transform92.setTranslation([-0.65,1.55,-10])

Shape93 = ShapeObject()

Text94 = TextObject()
Text94.setString(["RED Button","Gear Up"])

Shape93.setGeometry(Text94)
Appearance95 = AppearanceObject()

Material96 = MaterialObject()
Material96.setDiffuseColor([1,0,0])

Appearance95.setMaterial(Material96)
Shape93.setAppearance(Appearance95)
Transform92.addChild(Shape93)
Transform79.addChild(Transform92)
Transform97 = TransformObject()
Transform97.setDEF("GearDownTextTransform")
Transform97.setScale([0.06,0.06,0.06])
Transform97.setTranslation([-0.65,1.35,-10])

Shape98 = ShapeObject()

Text99 = TextObject()
Text99.setLength([5.5])
Text99.setString(["YELLOW Button","Gear Down"])

Shape98.setGeometry(Text99)
Appearance100 = AppearanceObject()

Material101 = MaterialObject()
Material101.setDiffuseColor([1,1,0])

Appearance100.setMaterial(Material101)
Shape98.setAppearance(Appearance100)
Transform97.addChild(Shape98)
Transform79.addChild(Transform97)
Transform102 = TransformObject()
Transform102.setDEF("FireButtonTransform")
Transform102.setRotation([1,0,0,1.57])
Transform102.setScale([0.008,0.008,0.008])
Transform102.setTranslation([0.52,1.6,-10])

Shape103 = ShapeObject()

Cylinder104 = CylinderObject()
Cylinder104.setHeight(1)
Cylinder104.setRadius(4)

Shape103.setGeometry(Cylinder104)
Appearance105 = AppearanceObject()

Material106 = MaterialObject()
Material106.setDiffuseColor([0,0.75,0.18])
Material106.setShininess(0.8)

Appearance105.setMaterial(Material106)
Shape103.setAppearance(Appearance105)
Transform102.addChild(Shape103)
TouchSensor107 = TouchSensorObject()
TouchSensor107.setDEF("FireSensor")
TouchSensor107.setDescription("click to fire")

Transform102.addChild(TouchSensor107)
Transform79.addChild(Transform102)
Transform108 = TransformObject()
Transform108.setDEF("FireTextTransform")
Transform108.setScale([0.06,0.06,0.06])
Transform108.setTranslation([0.36,1.5,-10])

Shape109 = ShapeObject()

Text110 = TextObject()
Text110.setString(["Target Locked"," FIRE!..","(Green Button)"])

Shape109.setGeometry(Text110)
Appearance111 = AppearanceObject()

Material112 = MaterialObject()
Material112.setDiffuseColor([0,0.75,0.18])

Appearance111.setMaterial(Material112)
Shape109.setAppearance(Appearance111)
Transform108.addChild(Shape109)
Transform79.addChild(Transform108)
Transform18.addChild(Transform79)
Viewpoint113 = ViewpointObject()
Viewpoint113.setDescription("F16 Close Look-up")
Viewpoint113.setOrientation([-0.559,-0.827,-0.057,1.3534])
Viewpoint113.setPosition([-28.7,19.9,17.4])

Transform18.addChild(Viewpoint113)
Viewpoint114 = ViewpointObject()
Viewpoint114.setDescription("Cockpit")
Viewpoint114.setOrientation([-1,0,0,0.1249])
Viewpoint114.setPosition([0,1.5,-7.9])

Transform18.addChild(Viewpoint114)
Viewpoint115 = ViewpointObject()
Viewpoint115.setDEF("LandingGearAnimationView")
Viewpoint115.setDescription("Landing Gear Animation View")
Viewpoint115.setOrientation([-0.003,1,-0.012,2.5741])
Viewpoint115.setPosition([16.1,-5.8,-24.6])

Transform18.addChild(Viewpoint115)
Viewpoint116 = ViewpointObject()
Viewpoint116.setDescription("Cockpit Left View")
Viewpoint116.setOrientation([-0.276,-0.922,-0.271,1.2338])
Viewpoint116.setPosition([-6.7,6.1,-3.9])

Transform18.addChild(Viewpoint116)
Viewpoint117 = ViewpointObject()
Viewpoint117.setDescription("F-16 Front View")
Viewpoint117.setOrientation([-0.007,0.995,0.102,3.1152])
Viewpoint117.setPosition([-0.1,13.4,-65])

Transform18.addChild(Viewpoint117)
Viewpoint118 = ViewpointObject()
Viewpoint118.setDescription("Cockpit Target View")
Viewpoint118.setOrientation([-0.834,-0.523,-0.176,0.0875])
Viewpoint118.setPosition([0,2.4,-7.9])

Transform18.addChild(Viewpoint118)
Transform119 = TransformObject()
Transform119.setDEF("NoseAntennaTransform")
Transform119.setRotation([1,0,0,1.57])
Transform119.setTranslation([0,-0.275,-21])

Shape120 = ShapeObject()

Cylinder121 = CylinderObject()
Cylinder121.setRadius(0.05)

Shape120.setGeometry(Cylinder121)
Appearance122 = AppearanceObject()

Material123 = MaterialObject()
Material123.setDiffuseColor([0.5,0.5,0.5])
Material123.setShininess(0.5)

Appearance122.setMaterial(Material123)
Shape120.setAppearance(Appearance122)
Transform119.addChild(Shape120)
Transform18.addChild(Transform119)
Scene17.addChild(Transform18)
TimeSensor124 = TimeSensorObject()
TimeSensor124.setDEF("WheelUp")
TimeSensor124.setCycleInterval(8)

Scene17.addChild(TimeSensor124)
OrientationInterpolator125 = OrientationInterpolatorObject()
OrientationInterpolator125.setDEF("GearUpInterpolator")
OrientationInterpolator125.setKey([0,0.5,1])
OrientationInterpolator125.setKeyValue([1,0,0,0,1,0,0,-0.79,1,0,0,-1.92])

Scene17.addChild(OrientationInterpolator125)
ROUTE126 = ROUTEObject()
ROUTE126.setFromField("touchTime")
ROUTE126.setFromNode("TouchSensorUp")
ROUTE126.setToField("set_startTime")
ROUTE126.setToNode("WheelUp")

Scene17.addChild(ROUTE126)
ROUTE127 = ROUTEObject()
ROUTE127.setFromField("fraction_changed")
ROUTE127.setFromNode("WheelUp")
ROUTE127.setToField("set_fraction")
ROUTE127.setToNode("GearUpInterpolator")

Scene17.addChild(ROUTE127)
ROUTE128 = ROUTEObject()
ROUTE128.setFromField("value_changed")
ROUTE128.setFromNode("GearUpInterpolator")
ROUTE128.setToField("set_rotation")
ROUTE128.setToNode("FrontWheelTransform")

Scene17.addChild(ROUTE128)
TimeSensor129 = TimeSensorObject()
TimeSensor129.setDEF("WheelDown")
TimeSensor129.setCycleInterval(8)

Scene17.addChild(TimeSensor129)
OrientationInterpolator130 = OrientationInterpolatorObject()
OrientationInterpolator130.setDEF("GearDownInterpolator")
OrientationInterpolator130.setKey([0,0.5,1])
OrientationInterpolator130.setKeyValue([1,0,0,-1.92,1,0,0,-0.79,1,0,0,0])

Scene17.addChild(OrientationInterpolator130)
ROUTE131 = ROUTEObject()
ROUTE131.setFromField("touchTime")
ROUTE131.setFromNode("TouchSensorDown")
ROUTE131.setToField("set_startTime")
ROUTE131.setToNode("WheelDown")

Scene17.addChild(ROUTE131)
ROUTE132 = ROUTEObject()
ROUTE132.setFromField("fraction_changed")
ROUTE132.setFromNode("WheelDown")
ROUTE132.setToField("set_fraction")
ROUTE132.setToNode("GearDownInterpolator")

Scene17.addChild(ROUTE132)
ROUTE133 = ROUTEObject()
ROUTE133.setFromField("value_changed")
ROUTE133.setFromNode("GearDownInterpolator")
ROUTE133.setToField("set_rotation")
ROUTE133.setToNode("FrontWheelTransform")

Scene17.addChild(ROUTE133)

Scene17.addComments(CommentsBlock("""Animation commands for Rear Right Wheel Starts"""))
TimeSensor134 = TimeSensorObject()
TimeSensor134.setDEF("RRearUp1")
TimeSensor134.setCycleInterval(8)

Scene17.addChild(TimeSensor134)
TimeSensor135 = TimeSensorObject()
TimeSensor135.setDEF("RRearDown1")
TimeSensor135.setCycleInterval(8)

Scene17.addChild(TimeSensor135)
OrientationInterpolator136 = OrientationInterpolatorObject()
OrientationInterpolator136.setDEF("RRearInterUp1")
OrientationInterpolator136.setKey([0,0.5,1])
OrientationInterpolator136.setKeyValue([-1,0,-1,0,-1,0,-1,0.44,-1,0,-1,1.92])

Scene17.addChild(OrientationInterpolator136)
OrientationInterpolator137 = OrientationInterpolatorObject()
OrientationInterpolator137.setDEF("RRearInterDown1")
OrientationInterpolator137.setKey([0,0.5,1])
OrientationInterpolator137.setKeyValue([-1,0,-1,1.92,-1,0,-1,0.44,-1,0,-1,0])

Scene17.addChild(OrientationInterpolator137)
ROUTE138 = ROUTEObject()
ROUTE138.setFromField("touchTime")
ROUTE138.setFromNode("TouchSensorDown")
ROUTE138.setToField("set_startTime")
ROUTE138.setToNode("RRearDown1")

Scene17.addChild(ROUTE138)
ROUTE139 = ROUTEObject()
ROUTE139.setFromField("touchTime")
ROUTE139.setFromNode("TouchSensorUp")
ROUTE139.setToField("set_startTime")
ROUTE139.setToNode("RRearUp1")

Scene17.addChild(ROUTE139)
ROUTE140 = ROUTEObject()
ROUTE140.setFromField("fraction_changed")
ROUTE140.setFromNode("RRearDown1")
ROUTE140.setToField("set_fraction")
ROUTE140.setToNode("RRearInterDown1")

Scene17.addChild(ROUTE140)
ROUTE141 = ROUTEObject()
ROUTE141.setFromField("fraction_changed")
ROUTE141.setFromNode("RRearUp1")
ROUTE141.setToField("set_fraction")
ROUTE141.setToNode("RRearInterUp1")

Scene17.addChild(ROUTE141)
ROUTE142 = ROUTEObject()
ROUTE142.setFromField("value_changed")
ROUTE142.setFromNode("RRearInterDown1")
ROUTE142.setToField("set_rotation")
ROUTE142.setToNode("RearRightWheelTransform")

Scene17.addChild(ROUTE142)
ROUTE143 = ROUTEObject()
ROUTE143.setFromField("value_changed")
ROUTE143.setFromNode("RRearInterUp1")
ROUTE143.setToField("set_rotation")
ROUTE143.setToNode("RearRightWheelTransform")

Scene17.addChild(ROUTE143)

Scene17.addComments(CommentsBlock("""Animation commands for Rear Left Wheel"""))
TimeSensor144 = TimeSensorObject()
TimeSensor144.setDEF("LRearUp1")
TimeSensor144.setCycleInterval(8)

Scene17.addChild(TimeSensor144)
TimeSensor145 = TimeSensorObject()
TimeSensor145.setDEF("LRearDown1")
TimeSensor145.setCycleInterval(8)

Scene17.addChild(TimeSensor145)
OrientationInterpolator146 = OrientationInterpolatorObject()
OrientationInterpolator146.setDEF("LRearInterUp1")
OrientationInterpolator146.setKey([0,0.5,1])
OrientationInterpolator146.setKeyValue([1,0,1,0,1,0,1,0.44,1,0,1,1.92])

Scene17.addChild(OrientationInterpolator146)
OrientationInterpolator147 = OrientationInterpolatorObject()
OrientationInterpolator147.setDEF("LRearInterDown1")
OrientationInterpolator147.setKey([0,0.5,1])
OrientationInterpolator147.setKeyValue([1,0,1,1.92,1,0,1,0.44,1,0,1,0])

Scene17.addChild(OrientationInterpolator147)
ROUTE148 = ROUTEObject()
ROUTE148.setFromField("touchTime")
ROUTE148.setFromNode("TouchSensorDown")
ROUTE148.setToField("set_startTime")
ROUTE148.setToNode("LRearDown1")

Scene17.addChild(ROUTE148)
ROUTE149 = ROUTEObject()
ROUTE149.setFromField("touchTime")
ROUTE149.setFromNode("TouchSensorUp")
ROUTE149.setToField("set_startTime")
ROUTE149.setToNode("LRearUp1")

Scene17.addChild(ROUTE149)
ROUTE150 = ROUTEObject()
ROUTE150.setFromField("fraction_changed")
ROUTE150.setFromNode("LRearDown1")
ROUTE150.setToField("set_fraction")
ROUTE150.setToNode("LRearInterDown1")

Scene17.addChild(ROUTE150)
ROUTE151 = ROUTEObject()
ROUTE151.setFromField("fraction_changed")
ROUTE151.setFromNode("LRearUp1")
ROUTE151.setToField("set_fraction")
ROUTE151.setToNode("LRearInterUp1")

Scene17.addChild(ROUTE151)
ROUTE152 = ROUTEObject()
ROUTE152.setFromField("value_changed")
ROUTE152.setFromNode("LRearInterDown1")
ROUTE152.setToField("set_rotation")
ROUTE152.setToNode("RearLeftWheelTransform")

Scene17.addChild(ROUTE152)
ROUTE153 = ROUTEObject()
ROUTE153.setFromField("value_changed")
ROUTE153.setFromNode("LRearInterUp1")
ROUTE153.setToField("set_rotation")
ROUTE153.setToNode("RearLeftWheelTransform")

Scene17.addChild(ROUTE153)
Background154 = BackgroundObject()
Background154.setGroundAngle([1.309,1.570796])
Background154.setGroundColor([0,0.3,0.7,0,0.35,0.75,0,0.4,0.8])
Background154.setSkyAngle([1.309,1.571])
Background154.setSkyColor([0,0.3,0.8,0,0.5,1,1,1,1])

Scene17.addChild(Background154)
Transform155 = TransformObject()
Transform155.setDEF("RightmostAmraamTransform")
Transform155.setRotation([-1,0,0,1.57])
Transform155.setScale([1.4,1.4,1.4])
Transform155.setTranslation([15.65,0,4.5])

Scene17.addChild(Transform155)
Transform156 = TransformObject()
Transform156.setDEF("LeftmostAmraamTransform")
Transform156.setRotation([-1,0,0,1.57])
Transform156.setScale([1.4,1.4,1.4])
Transform156.setTranslation([-15.65,0,4.5])

Scene17.addChild(Transform156)
Transform157 = TransformObject()
Transform157.setDEF("SidewinderHolderTransformRight")
Transform157.setRotation([0,1,0,1.57])
Transform157.setScale([6,3,3])
Transform157.setTranslation([9,-1.125,8])

Scene17.addChild(Transform157)
Transform158 = TransformObject()
Transform158.setDEF("SidewinderHolderTransformLeft")
Transform158.setRotation([0,1,0,1.57])
Transform158.setScale([6,3,3])
Transform158.setTranslation([-8.45,-1.125,8])

Scene17.addChild(Transform158)
Transform159 = TransformObject()
Transform159.setDEF("TurkishFlagTransformLeft")
Transform159.setRotation([0,-1,0,1.57])
Transform159.setScale([0.3,0.25,0.3])
Transform159.setTranslation([-0.01,8,19.5])

Scene17.addChild(Transform159)
Transform160 = TransformObject()
Transform160.setDEF("TurkishFlagTransformRight")
Transform160.setRotation([0,1,0,1.57])
Transform160.setScale([0.3,0.25,0.3])
Transform160.setTranslation([0.01,8,20.5])

Scene17.addChild(Transform160)
Transform161 = TransformObject()
Transform161.setDEF("AmraamHolderTransformLeft")
Transform161.setTranslation([-12,-0.176,10.7])

Scene17.addChild(Transform161)
Transform162 = TransformObject()
Transform162.setDEF("AmraamHolderTransformRight")
Transform162.setTranslation([12,-0.176,10.7])

Scene17.addChild(Transform162)
Transform163 = TransformObject()
Transform163.setDEF("AmraamInnerTransformRight")
Transform163.setRotation([-1,0,0,1.57])
Transform163.setScale([1.4,1.4,1.4])
Transform163.setTranslation([12,-1.6,4.5])

Scene17.addChild(Transform163)
Transform164 = TransformObject()
Transform164.setDEF("AmraamInnerTransformLeft")
Transform164.setRotation([-1,0,0,1.57])
Transform164.setScale([1.4,1.4,1.4])
Transform164.setTranslation([-12,-1.6,4.5])

Scene17.addChild(Transform164)
Transform165 = TransformObject()
Transform165.setDEF("SidewinderTransformLeft")
Transform165.setRotation([-1,0,0,1.57])
Transform165.setScale([1.6,1.6,1.6])
Transform165.setTranslation([-8.7,-2,3.5])

Scene17.addChild(Transform165)
Transform166 = TransformObject()
Transform166.setDEF("SidewinderTransformRight")
Transform166.setRotation([-1,0,0,1.57])
Transform166.setScale([1.6,1.6,1.6])
Transform166.setTranslation([8.7,-2,3.5])

Scene17.addChild(Transform166)
Transform167 = TransformObject()
Transform167.setDEF("FuelTankHolderTransformLeft")
Transform167.setRotation([0,1,0,1.57])
Transform167.setScale([1.5,1.5,1.5])
Transform167.setTranslation([-4.8,-1.125,6])

Scene17.addChild(Transform167)
Transform168 = TransformObject()
Transform168.setDEF("FuelTankHolderTransformRight")
Transform168.setRotation([0,1,0,1.57])
Transform168.setScale([1.5,1.5,1.5])
Transform168.setTranslation([5.3,-1.125,6])

Scene17.addChild(Transform168)
Transform169 = TransformObject()
Transform169.setDEF("FuelTankTransformRight")
Transform169.setRotation([-1,0,0,1.57])
Transform169.setScale([1.5,1.5,1.5])
Transform169.setTranslation([5,-2.85,5.5])

Scene17.addChild(Transform169)
Transform170 = TransformObject()
Transform170.setDEF("FuelTankTransformLeft")
Transform170.setRotation([-1,0,0,1.57])
Transform170.setScale([1.5,1.5,1.5])
Transform170.setTranslation([-5,-2.85,5.5])

Scene17.addChild(Transform170)
Transform171 = TransformObject()
Transform171.setDEF("InlineCoverOfPlaneTansform")

Shape172 = ShapeObject()

Box173 = BoxObject()
Box173.setSize([4.15,0.1,20])

Shape172.setGeometry(Box173)
Appearance174 = AppearanceObject()

Material175 = MaterialObject()
Material175.setDiffuseColor([0.25,0.25,0.25])

Appearance174.setMaterial(Material175)
Shape172.setAppearance(Appearance174)
Transform171.addChild(Shape172)
Scene17.addChild(Transform171)
Transform176 = TransformObject()
Transform176.setDEF("TargetHelicopterTransform")
Transform176.setTranslation([16,-50,-500])

Scene17.addChild(Transform176)
TimeSensor177 = TimeSensorObject()
TimeSensor177.setDEF("FireClock")
TimeSensor177.setCycleInterval(8)

Scene17.addChild(TimeSensor177)
PositionInterpolator178 = PositionInterpolatorObject()
PositionInterpolator178.setDEF("MissilePath")
PositionInterpolator178.setKey([0,0.1,1])
PositionInterpolator178.setKeyValue([-15.65,0,4.5,-15.65,-2,4.5,16,-50,-500])

Scene17.addChild(PositionInterpolator178)
ROUTE179 = ROUTEObject()
ROUTE179.setFromField("touchTime")
ROUTE179.setFromNode("FireSensor")
ROUTE179.setToField("set_startTime")
ROUTE179.setToNode("FireClock")

Scene17.addChild(ROUTE179)
ROUTE180 = ROUTEObject()
ROUTE180.setFromField("fraction_changed")
ROUTE180.setFromNode("FireClock")
ROUTE180.setToField("set_fraction")
ROUTE180.setToNode("MissilePath")

Scene17.addChild(ROUTE180)
ROUTE181 = ROUTEObject()
ROUTE181.setFromField("value_changed")
ROUTE181.setFromNode("MissilePath")
ROUTE181.setToField("set_translation")
ROUTE181.setToNode("LeftmostAmraamTransform")

Scene17.addChild(ROUTE181)
Viewpoint182 = ViewpointObject()
Viewpoint182.setDEF("MissileLaunchView")
Viewpoint182.setDescription("Missile Fire View")
Viewpoint182.setOrientation([0.094,-0.994,0.057,1.1716])
Viewpoint182.setPosition([-344.3,-142.8,-27.7])

Scene17.addChild(Viewpoint182)
ROUTE183 = ROUTEObject()
ROUTE183.setFromField("isActive")
ROUTE183.setFromNode("FireSensor")
ROUTE183.setToField("set_bind")
ROUTE183.setToNode("MissileLaunchView")

Scene17.addChild(ROUTE183)

Scene17.addComments(CommentsBlock("""TODO fix type, add filter"""))
X3D0.setScene(Scene17)

X3D0.toFileX3D("../data/MFString.new.x3d")
