print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "HAnim"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "JohnJoint20.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "identifier"
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint20.x3d"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "description"
meta5.content = "An attempt at a standard LOA-4 skeleton"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "generator"
meta6.content = "h2.pl"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "20 Jan 2023"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "creator"
meta8.content = "John Carlson"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "created"
meta9.content = "9 November 2020"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "license"
meta10.content = "../license.html"

head1.children.append(meta10)

X3D0.head = head1
Scene11 = x3d.Scene()
Transform12 = x3d.Transform()
"""DEF for markerfor XYZ axes"""
Shape13 = x3d.Shape()
Shape13.DEF = "AxisLinesShape"
"""RGB lines showing XYZ axes"""
IndexedLineSet14 = x3d.IndexedLineSet()
IndexedLineSet14.colorIndex = [0,1,2]
IndexedLineSet14.colorPerVertex = False
IndexedLineSet14.coordIndex = [0,1,-1,0,2,-1,0,3,-1]
Coordinate15 = x3d.Coordinate()

IndexedLineSet14.coord = Coordinate15
Color16 = x3d.Color()

IndexedLineSet14.color = Color16

Shape13.geometry = IndexedLineSet14

Transform12.children.append(Shape13)

Scene11.children.append(Transform12)
Group17 = x3d.Group()
"""DEFS for markers of skeleton joints, segments, and sites"""
Transform18 = x3d.Transform()
Transform19 = x3d.Transform()
Transform19.translation = [0,2,0]
Shape20 = x3d.Shape()
Shape20.DEF = "HAnimRootShape"
Sphere21 = x3d.Sphere()
Sphere21.radius = 0.02

Shape20.geometry = Sphere21
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.DEF = "HAnimRootMaterial"
Material23.diffuseColor = [0.8,0,0]
Material23.transparency = 0.3

Appearance22.material = Material23

Shape20.appearance = Appearance22

Transform19.children.append(Shape20)

Transform18.children.append(Transform19)
Transform24 = x3d.Transform()
Transform24.translation = [0,2.1,0]
Shape25 = x3d.Shape()
Shape25.DEF = "HAnimJointShape"
Sphere26 = x3d.Sphere()
Sphere26.radius = 0.02

Shape25.geometry = Sphere26
Appearance27 = x3d.Appearance()
Material28 = x3d.Material()
Material28.DEF = "HAnimJointMaterial"
Material28.diffuseColor = [0,0,0.8]
Material28.transparency = 0.3

Appearance27.material = Material28

Shape25.appearance = Appearance27

Transform24.children.append(Shape25)

Transform18.children.append(Transform24)
Transform29 = x3d.Transform()
Transform29.translation = [0,2.05,0]
Shape30 = x3d.Shape()
Shape30.DEF = "HAnimSegmentLine"
LineSet31 = x3d.LineSet()
LineSet31.vertexCount = [2]
ColorRGBA32 = x3d.ColorRGBA()
ColorRGBA32.DEF = "HAnimSegmentLineColorRGBA"

LineSet31.color = ColorRGBA32
Coordinate33 = x3d.Coordinate()

LineSet31.coord = Coordinate33

Shape30.geometry = LineSet31

Transform29.children.append(Shape30)

Transform18.children.append(Transform29)
Transform34 = x3d.Transform()
Transform34.translation = [0,2.1,0]
Shape35 = x3d.Shape()
Shape35.DEF = "HAnimSiteShape"
IndexedFaceSet36 = x3d.IndexedFaceSet()
IndexedFaceSet36.DEF = "DiamondIFS"
IndexedFaceSet36.creaseAngle = 0.5
IndexedFaceSet36.solid = False
IndexedFaceSet36.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA37 = x3d.ColorRGBA()
ColorRGBA37.DEF = "HAnimSiteColorRGBA"

IndexedFaceSet36.color = ColorRGBA37
Coordinate38 = x3d.Coordinate()

IndexedFaceSet36.coord = Coordinate38

Shape35.geometry = IndexedFaceSet36
Appearance39 = x3d.Appearance()
Material40 = x3d.Material()
Material40.diffuseColor = [1,1,0]
Material40.transparency = 0.3

Appearance39.material = Material40

Shape35.appearance = Appearance39

Transform34.children.append(Shape35)

Transform18.children.append(Transform34)

Group17.children.append(Transform18)

Scene11.children.append(Group17)
NavigationInfo41 = x3d.NavigationInfo()
NavigationInfo41.speed = 1.5

Scene11.children.append(NavigationInfo41)
Viewpoint42 = x3d.Viewpoint()
Viewpoint42.description = "default"

Scene11.children.append(Viewpoint42)
HAnimHumanoid43 = x3d.HAnimHumanoid()
HAnimHumanoid43.name = "HAnim"
HAnimHumanoid43.DEF = "hanim_HAnim"
HAnimHumanoid43.info = ["humanoidVersion=2.0"]
HAnimHumanoid43.version = "2.0"
"""<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)"""
"""</LOD>"""
Shape44 = x3d.Shape()
Shape44.DEF = "SkinShape"
IndexedFaceSet45 = x3d.IndexedFaceSet()
IndexedFaceSet45.coordIndex = [0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]
IndexedFaceSet45.creaseAngle = 3.1
Coordinate46 = x3d.Coordinate()
Coordinate46.DEF = "TheSkinCoord"

IndexedFaceSet45.coord = Coordinate46
Color47 = x3d.Color()

IndexedFaceSet45.color = Color47

Shape44.geometry = IndexedFaceSet45
Appearance48 = x3d.Appearance()
Appearance48.DEF = "SkinAppearance"
ImageTexture49 = x3d.ImageTexture()
ImageTexture49.DEF = "zBlueSpiralBkg2"
ImageTexture49.url = ["../resources/images/zBlueSpiralBkg2.gif","../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]

Appearance48.texture = ImageTexture49
Material50 = x3d.Material()
Material50.DEF = "SkinMaterial"
Material50.ambientIntensity = 0.6
Material50.diffuseColor = [1,1,1]
Material50.shininess = 0.6
Material50.transparency = 0.2

Appearance48.material = Material50

Shape44.appearance = Appearance48

HAnimHumanoid43.skin.append(Shape44)
Coordinate51 = x3d.Coordinate()
Coordinate51.USE = "TheSkinCoord"

HAnimHumanoid43.skinCoord = Coordinate51
HAnimJoint52 = x3d.HAnimJoint()
HAnimJoint52.name = "humanoid_root"
HAnimJoint52.DEF = "hanim_humanoid_root"
HAnimJoint52.center = [0,0.824,0.0277]
HAnimJoint52.ulimit = [0,0,0]
HAnimJoint52.llimit = [0,0,0]
HAnimSegment53 = x3d.HAnimSegment()
HAnimSegment53.name = "sacrum"
HAnimSegment53.DEF = "hanim_sacrum"
HAnimDisplacer54 = x3d.HAnimDisplacer()
HAnimDisplacer54.name = "sacrum_feature"
HAnimDisplacer54.coordIndex = [0]

HAnimSegment53.displacers.append(HAnimDisplacer54)
HAnimDisplacer55 = x3d.HAnimDisplacer()
HAnimDisplacer55.name = "sacrum_config"
HAnimDisplacer55.coordIndex = [0]

HAnimSegment53.displacers.append(HAnimDisplacer55)
Transform56 = x3d.Transform()
"""Empty Transform"""
Transform57 = x3d.Transform()
"""Empty Transform"""
Shape58 = x3d.Shape()
Shape58.USE = "HAnimJointShape"

Transform57.children.append(Shape58)

Transform56.children.append(Transform57)

HAnimSegment53.children.append(Transform56)
Shape59 = x3d.Shape()
LineSet60 = x3d.LineSet()
LineSet60.vertexCount = [2]
Coordinate61 = x3d.Coordinate()

LineSet60.coord = Coordinate61
"""from humanoid_root to sacroiliac vertices 2"""
ColorRGBA62 = x3d.ColorRGBA()
ColorRGBA62.USE = "HAnimSegmentLineColorRGBA"

LineSet60.color = ColorRGBA62

Shape59.geometry = LineSet60

HAnimSegment53.children.append(Shape59)
HAnimSite63 = x3d.HAnimSite()
HAnimSite63.name = "buttocks_standing_wall_contact_point_pt"
HAnimSite63.DEF = "hanim_buttocks_standing_wall_contact_point_pt"
HAnimSite63.translation = [0,1,0]
TouchSensor64 = x3d.TouchSensor()
TouchSensor64.description = "HAnimSite buttocks_standing_wall_contact_point_pt"

HAnimSite63.children.append(TouchSensor64)
Shape65 = x3d.Shape()
Shape65.USE = "HAnimSiteShape"

HAnimSite63.children.append(Shape65)

HAnimSegment53.children.append(HAnimSite63)
HAnimSite66 = x3d.HAnimSite()
HAnimSite66.name = "crotch_pt"
HAnimSite66.DEF = "hanim_crotch_pt"
HAnimSite66.translation = [0.0034,0.8266,0.0257]
TouchSensor67 = x3d.TouchSensor()
TouchSensor67.description = "HAnimSite crotch_pt"

HAnimSite66.children.append(TouchSensor67)
Shape68 = x3d.Shape()
Shape68.USE = "HAnimSiteShape"

HAnimSite66.children.append(Shape68)

HAnimSegment53.children.append(HAnimSite66)
HAnimSite69 = x3d.HAnimSite()
HAnimSite69.name = "l_asis_pt"
HAnimSite69.DEF = "hanim_l_asis_pt"
HAnimSite69.translation = [0.0925,0.9983,0.1052]
TouchSensor70 = x3d.TouchSensor()
TouchSensor70.description = "HAnimSite l_asis_pt"

HAnimSite69.children.append(TouchSensor70)
Shape71 = x3d.Shape()
Shape71.USE = "HAnimSiteShape"

HAnimSite69.children.append(Shape71)

HAnimSegment53.children.append(HAnimSite69)
HAnimSite72 = x3d.HAnimSite()
HAnimSite72.name = "l_iliocristale_pt"
HAnimSite72.DEF = "hanim_l_iliocristale_pt"
HAnimSite72.translation = [0.1612,1.0537,0.0008]
TouchSensor73 = x3d.TouchSensor()
TouchSensor73.description = "HAnimSite l_iliocristale_pt"

HAnimSite72.children.append(TouchSensor73)
Shape74 = x3d.Shape()
Shape74.USE = "HAnimSiteShape"

HAnimSite72.children.append(Shape74)

HAnimSegment53.children.append(HAnimSite72)
HAnimSite75 = x3d.HAnimSite()
HAnimSite75.name = "l_psis_pt"
HAnimSite75.DEF = "hanim_l_psis_pt"
HAnimSite75.translation = [0.0774,1.019,-0.1151]
TouchSensor76 = x3d.TouchSensor()
TouchSensor76.description = "HAnimSite l_psis_pt"

HAnimSite75.children.append(TouchSensor76)
Shape77 = x3d.Shape()
Shape77.USE = "HAnimSiteShape"

HAnimSite75.children.append(Shape77)

HAnimSegment53.children.append(HAnimSite75)
HAnimSite78 = x3d.HAnimSite()
HAnimSite78.name = "l_trochanterion_pt"
HAnimSite78.DEF = "hanim_l_trochanterion_pt"
HAnimSite78.translation = [0.1677,0.8336,0.0303]
TouchSensor79 = x3d.TouchSensor()
TouchSensor79.description = "HAnimSite l_trochanterion_pt"

HAnimSite78.children.append(TouchSensor79)
Shape80 = x3d.Shape()
Shape80.USE = "HAnimSiteShape"

HAnimSite78.children.append(Shape80)

HAnimSegment53.children.append(HAnimSite78)
HAnimSite81 = x3d.HAnimSite()
HAnimSite81.name = "r_asis_pt"
HAnimSite81.DEF = "hanim_r_asis_pt"
HAnimSite81.translation = [-0.0887,1.0021,0.1112]
TouchSensor82 = x3d.TouchSensor()
TouchSensor82.description = "HAnimSite r_asis_pt"

HAnimSite81.children.append(TouchSensor82)
Shape83 = x3d.Shape()
Shape83.USE = "HAnimSiteShape"

HAnimSite81.children.append(Shape83)

HAnimSegment53.children.append(HAnimSite81)
HAnimSite84 = x3d.HAnimSite()
HAnimSite84.name = "r_iliocristale_pt"
HAnimSite84.DEF = "hanim_r_iliocristale_pt"
HAnimSite84.translation = [-0.1525,1.0628,0.0035]
TouchSensor85 = x3d.TouchSensor()
TouchSensor85.description = "HAnimSite r_iliocristale_pt"

HAnimSite84.children.append(TouchSensor85)
Shape86 = x3d.Shape()
Shape86.USE = "HAnimSiteShape"

HAnimSite84.children.append(Shape86)

HAnimSegment53.children.append(HAnimSite84)
HAnimSite87 = x3d.HAnimSite()
HAnimSite87.name = "r_psis_pt"
HAnimSite87.DEF = "hanim_r_psis_pt"
HAnimSite87.translation = [-0.0716,1.019,-0.1138]
TouchSensor88 = x3d.TouchSensor()
TouchSensor88.description = "HAnimSite r_psis_pt"

HAnimSite87.children.append(TouchSensor88)
Shape89 = x3d.Shape()
Shape89.USE = "HAnimSiteShape"

HAnimSite87.children.append(Shape89)

HAnimSegment53.children.append(HAnimSite87)
HAnimSite90 = x3d.HAnimSite()
HAnimSite90.name = "r_trochanterion_pt"
HAnimSite90.DEF = "hanim_r_trochanterion_pt"
HAnimSite90.translation = [-0.1689,0.8419,0.0352]
TouchSensor91 = x3d.TouchSensor()
TouchSensor91.description = "HAnimSite r_trochanterion_pt"

HAnimSite90.children.append(TouchSensor91)
Shape92 = x3d.Shape()
Shape92.USE = "HAnimSiteShape"

HAnimSite90.children.append(Shape92)

HAnimSegment53.children.append(HAnimSite90)
Shape93 = x3d.Shape()
LineSet94 = x3d.LineSet()
LineSet94.vertexCount = [2]
Coordinate95 = x3d.Coordinate()

LineSet94.coord = Coordinate95
"""from humanoid_root to vl5 vertices 2"""
ColorRGBA96 = x3d.ColorRGBA()
ColorRGBA96.USE = "HAnimSegmentLineColorRGBA"

LineSet94.color = ColorRGBA96

Shape93.geometry = LineSet94

HAnimSegment53.children.append(Shape93)
HAnimSite97 = x3d.HAnimSite()
HAnimSite97.name = "navel_pt"
HAnimSite97.DEF = "hanim_navel_pt"
HAnimSite97.translation = [0.0069,1.0966,0.1017]
TouchSensor98 = x3d.TouchSensor()
TouchSensor98.description = "HAnimSite navel_pt"

HAnimSite97.children.append(TouchSensor98)
Shape99 = x3d.Shape()
Shape99.USE = "HAnimSiteShape"

HAnimSite97.children.append(Shape99)

HAnimSegment53.children.append(HAnimSite97)
HAnimSite100 = x3d.HAnimSite()
HAnimSite100.name = "waist_preferred_anterior_pt"
HAnimSite100.DEF = "hanim_waist_preferred_anterior_pt"
HAnimSite100.translation = [0,1,0]
TouchSensor101 = x3d.TouchSensor()
TouchSensor101.description = "HAnimSite waist_preferred_anterior_pt"

HAnimSite100.children.append(TouchSensor101)
Shape102 = x3d.Shape()
Shape102.USE = "HAnimSiteShape"

HAnimSite100.children.append(Shape102)

HAnimSegment53.children.append(HAnimSite100)
HAnimSite103 = x3d.HAnimSite()
HAnimSite103.name = "waist_preferred_posterior_pt"
HAnimSite103.DEF = "hanim_waist_preferred_posterior_pt"
HAnimSite103.translation = [0.29,1.0915,-0.1091]
TouchSensor104 = x3d.TouchSensor()
TouchSensor104.description = "HAnimSite waist_preferred_posterior_pt"

HAnimSite103.children.append(TouchSensor104)
Shape105 = x3d.Shape()
Shape105.USE = "HAnimSiteShape"

HAnimSite103.children.append(Shape105)

HAnimSegment53.children.append(HAnimSite103)

HAnimJoint52.children.append(HAnimSegment53)
HAnimJoint106 = x3d.HAnimJoint()
HAnimJoint106.name = "sacroiliac"
HAnimJoint106.DEF = "hanim_sacroiliac"
HAnimJoint106.center = [0,0.9149,0.0016]
HAnimJoint106.ulimit = [0,0,0]
HAnimJoint106.llimit = [0,0,0]
HAnimSegment107 = x3d.HAnimSegment()
HAnimSegment107.name = "pelvis"
HAnimSegment107.DEF = "hanim_pelvis"
Transform108 = x3d.Transform()
"""Empty Transform"""
Transform109 = x3d.Transform()
"""Empty Transform"""
Shape110 = x3d.Shape()
Shape110.USE = "HAnimJointShape"

Transform109.children.append(Shape110)

Transform108.children.append(Transform109)

HAnimSegment107.children.append(Transform108)
Shape111 = x3d.Shape()
LineSet112 = x3d.LineSet()
LineSet112.vertexCount = [2]
Coordinate113 = x3d.Coordinate()

LineSet112.coord = Coordinate113
"""from sacroiliac to l_hip vertices 2"""
ColorRGBA114 = x3d.ColorRGBA()
ColorRGBA114.USE = "HAnimSegmentLineColorRGBA"

LineSet112.color = ColorRGBA114

Shape111.geometry = LineSet112

HAnimSegment107.children.append(Shape111)
HAnimSite115 = x3d.HAnimSite()
HAnimSite115.name = "l_femoral_lateral_epicondyles_pt"
HAnimSite115.DEF = "hanim_l_femoral_lateral_epicondyles_pt"
HAnimSite115.translation = [0.1598,0.4967,0.0297]
TouchSensor116 = x3d.TouchSensor()
TouchSensor116.description = "HAnimSite l_femoral_lateral_epicondyles_pt"

HAnimSite115.children.append(TouchSensor116)
Shape117 = x3d.Shape()
Shape117.USE = "HAnimSiteShape"

HAnimSite115.children.append(Shape117)

HAnimSegment107.children.append(HAnimSite115)
HAnimSite118 = x3d.HAnimSite()
HAnimSite118.name = "l_femoral_medial_epicondyles_pt"
HAnimSite118.DEF = "hanim_l_femoral_medial_epicondyles_pt"
HAnimSite118.translation = [0.0398,0.4946,0.0303]
TouchSensor119 = x3d.TouchSensor()
TouchSensor119.description = "HAnimSite l_femoral_medial_epicondyles_pt"

HAnimSite118.children.append(TouchSensor119)
Shape120 = x3d.Shape()
Shape120.USE = "HAnimSiteShape"

HAnimSite118.children.append(Shape120)

HAnimSegment107.children.append(HAnimSite118)
HAnimSite121 = x3d.HAnimSite()
HAnimSite121.name = "l_knee_crease_pt"
HAnimSite121.DEF = "hanim_l_knee_crease_pt"
HAnimSite121.translation = [0.0993,0.4881,-0.0309]
TouchSensor122 = x3d.TouchSensor()
TouchSensor122.description = "HAnimSite l_knee_crease_pt"

HAnimSite121.children.append(TouchSensor122)
Shape123 = x3d.Shape()
Shape123.USE = "HAnimSiteShape"

HAnimSite121.children.append(Shape123)

HAnimSegment107.children.append(HAnimSite121)
HAnimSite124 = x3d.HAnimSite()
HAnimSite124.name = "l_suprapatella_pt"
HAnimSite124.DEF = "hanim_l_suprapatella_pt"
HAnimSite124.translation = [0,1,0]
TouchSensor125 = x3d.TouchSensor()
TouchSensor125.description = "HAnimSite l_suprapatella_pt"

HAnimSite124.children.append(TouchSensor125)
Shape126 = x3d.Shape()
Shape126.USE = "HAnimSiteShape"

HAnimSite124.children.append(Shape126)

HAnimSegment107.children.append(HAnimSite124)
Shape127 = x3d.Shape()
LineSet128 = x3d.LineSet()
LineSet128.vertexCount = [2]
Coordinate129 = x3d.Coordinate()

LineSet128.coord = Coordinate129
"""from sacroiliac to r_hip vertices 2"""
ColorRGBA130 = x3d.ColorRGBA()
ColorRGBA130.USE = "HAnimSegmentLineColorRGBA"

LineSet128.color = ColorRGBA130

Shape127.geometry = LineSet128

HAnimSegment107.children.append(Shape127)
HAnimSite131 = x3d.HAnimSite()
HAnimSite131.name = "r_femoral_lateral_epicondyles_pt"
HAnimSite131.DEF = "hanim_r_femoral_lateral_epicondyles_pt"
HAnimSite131.translation = [-0.1421,0.4992,0.031]
TouchSensor132 = x3d.TouchSensor()
TouchSensor132.description = "HAnimSite r_femoral_lateral_epicondyles_pt"

HAnimSite131.children.append(TouchSensor132)
Shape133 = x3d.Shape()
Shape133.USE = "HAnimSiteShape"

HAnimSite131.children.append(Shape133)

HAnimSegment107.children.append(HAnimSite131)
HAnimSite134 = x3d.HAnimSite()
HAnimSite134.name = "r_femoral_medial_epicondyles_pt"
HAnimSite134.DEF = "hanim_r_femoral_medial_epicondyles_pt"
HAnimSite134.translation = [-0.0221,0.5014,0.0289]
TouchSensor135 = x3d.TouchSensor()
TouchSensor135.description = "HAnimSite r_femoral_medial_epicondyles_pt"

HAnimSite134.children.append(TouchSensor135)
Shape136 = x3d.Shape()
Shape136.USE = "HAnimSiteShape"

HAnimSite134.children.append(Shape136)

HAnimSegment107.children.append(HAnimSite134)
HAnimSite137 = x3d.HAnimSite()
HAnimSite137.name = "r_knee_crease_pt"
HAnimSite137.DEF = "hanim_r_knee_crease_pt"
HAnimSite137.translation = [-0.0825,0.4932,-0.0326]
TouchSensor138 = x3d.TouchSensor()
TouchSensor138.description = "HAnimSite r_knee_crease_pt"

HAnimSite137.children.append(TouchSensor138)
Shape139 = x3d.Shape()
Shape139.USE = "HAnimSiteShape"

HAnimSite137.children.append(Shape139)

HAnimSegment107.children.append(HAnimSite137)
HAnimSite140 = x3d.HAnimSite()
HAnimSite140.name = "r_suprapatella_pt"
HAnimSite140.DEF = "hanim_r_suprapatella_pt"
HAnimSite140.translation = [0,1,0]
TouchSensor141 = x3d.TouchSensor()
TouchSensor141.description = "HAnimSite r_suprapatella_pt"

HAnimSite140.children.append(TouchSensor141)
Shape142 = x3d.Shape()
Shape142.USE = "HAnimSiteShape"

HAnimSite140.children.append(Shape142)

HAnimSegment107.children.append(HAnimSite140)

HAnimJoint106.children.append(HAnimSegment107)
HAnimJoint143 = x3d.HAnimJoint()
HAnimJoint143.name = "l_hip"
HAnimJoint143.DEF = "hanim_l_hip"
HAnimJoint143.center = [0.0961,0.9124,-0.0001]
HAnimJoint143.ulimit = [0,0,0]
HAnimJoint143.llimit = [0,0,0]
HAnimSegment144 = x3d.HAnimSegment()
HAnimSegment144.name = "l_thigh"
HAnimSegment144.DEF = "hanim_l_thigh"
Transform145 = x3d.Transform()
"""Empty Transform"""
Transform146 = x3d.Transform()
"""Empty Transform"""
Shape147 = x3d.Shape()
Shape147.USE = "HAnimJointShape"

Transform146.children.append(Shape147)

Transform145.children.append(Transform146)

HAnimSegment144.children.append(Transform145)
Shape148 = x3d.Shape()
LineSet149 = x3d.LineSet()
LineSet149.vertexCount = [2]
Coordinate150 = x3d.Coordinate()

LineSet149.coord = Coordinate150
"""from l_hip to l_knee vertices 2"""
ColorRGBA151 = x3d.ColorRGBA()
ColorRGBA151.USE = "HAnimSegmentLineColorRGBA"

LineSet149.color = ColorRGBA151

Shape148.geometry = LineSet149

HAnimSegment144.children.append(Shape148)
HAnimSite152 = x3d.HAnimSite()
HAnimSite152.name = "l_lateral_malleolus_pt"
HAnimSite152.DEF = "hanim_l_lateral_malleolus_pt"
HAnimSite152.translation = [0.1308,0.0597,-0.1032]
TouchSensor153 = x3d.TouchSensor()
TouchSensor153.description = "HAnimSite l_lateral_malleolus_pt"

HAnimSite152.children.append(TouchSensor153)
Shape154 = x3d.Shape()
Shape154.USE = "HAnimSiteShape"

HAnimSite152.children.append(Shape154)

HAnimSegment144.children.append(HAnimSite152)
HAnimSite155 = x3d.HAnimSite()
HAnimSite155.name = "l_medial_malleolus_pt"
HAnimSite155.DEF = "hanim_l_medial_malleolus_pt"
HAnimSite155.translation = [0.089,0.0716,-0.0881]
TouchSensor156 = x3d.TouchSensor()
TouchSensor156.description = "HAnimSite l_medial_malleolus_pt"

HAnimSite155.children.append(TouchSensor156)
Shape157 = x3d.Shape()
Shape157.USE = "HAnimSiteShape"

HAnimSite155.children.append(Shape157)

HAnimSegment144.children.append(HAnimSite155)
HAnimSite158 = x3d.HAnimSite()
HAnimSite158.name = "l_tibiale_pt"
HAnimSite158.DEF = "hanim_l_tibiale_pt"
HAnimSite158.translation = [0,1,0]
TouchSensor159 = x3d.TouchSensor()
TouchSensor159.description = "HAnimSite l_tibiale_pt"

HAnimSite158.children.append(TouchSensor159)
Shape160 = x3d.Shape()
Shape160.USE = "HAnimSiteShape"

HAnimSite158.children.append(Shape160)

HAnimSegment144.children.append(HAnimSite158)

HAnimJoint143.children.append(HAnimSegment144)
HAnimJoint161 = x3d.HAnimJoint()
HAnimJoint161.name = "l_knee"
HAnimJoint161.DEF = "hanim_l_knee"
HAnimJoint161.center = [0.104,0.4867,0.0308]
HAnimJoint161.ulimit = [0,0,0]
HAnimJoint161.llimit = [0,0,0]
HAnimSegment162 = x3d.HAnimSegment()
HAnimSegment162.name = "l_calf"
HAnimSegment162.DEF = "hanim_l_calf"
Transform163 = x3d.Transform()
"""Empty Transform"""
Transform164 = x3d.Transform()
"""Empty Transform"""
Shape165 = x3d.Shape()
Shape165.USE = "HAnimJointShape"

Transform164.children.append(Shape165)

Transform163.children.append(Transform164)

HAnimSegment162.children.append(Transform163)
Shape166 = x3d.Shape()
LineSet167 = x3d.LineSet()
LineSet167.vertexCount = [2]
Coordinate168 = x3d.Coordinate()

LineSet167.coord = Coordinate168
"""from l_knee to l_talocrural vertices 2"""
ColorRGBA169 = x3d.ColorRGBA()
ColorRGBA169.USE = "HAnimSegmentLineColorRGBA"

LineSet167.color = ColorRGBA169

Shape166.geometry = LineSet167

HAnimSegment162.children.append(Shape166)
HAnimSite170 = x3d.HAnimSite()
HAnimSite170.name = "l_calcaneus_posterior_pt"
HAnimSite170.DEF = "hanim_l_calcaneus_posterior_pt"
HAnimSite170.translation = [0.0974,0.0259,-0.1171]
TouchSensor171 = x3d.TouchSensor()
TouchSensor171.description = "HAnimSite l_calcaneus_posterior_pt"

HAnimSite170.children.append(TouchSensor171)
Shape172 = x3d.Shape()
Shape172.USE = "HAnimSiteShape"

HAnimSite170.children.append(Shape172)

HAnimSegment162.children.append(HAnimSite170)
HAnimSite173 = x3d.HAnimSite()
HAnimSite173.name = "l_sphyrion_pt"
HAnimSite173.DEF = "hanim_l_sphyrion_pt"
HAnimSite173.translation = [0.089,0.0575,-0.0943]
TouchSensor174 = x3d.TouchSensor()
TouchSensor174.description = "HAnimSite l_sphyrion_pt"

HAnimSite173.children.append(TouchSensor174)
Shape175 = x3d.Shape()
Shape175.USE = "HAnimSiteShape"

HAnimSite173.children.append(Shape175)

HAnimSegment162.children.append(HAnimSite173)

HAnimJoint161.children.append(HAnimSegment162)
HAnimJoint176 = x3d.HAnimJoint()
HAnimJoint176.name = "l_talocrural"
HAnimJoint176.DEF = "hanim_l_talocrural"
HAnimJoint176.center = [0.1101,0.0656,-0.0736]
HAnimJoint176.ulimit = [0,0,0]
HAnimJoint176.llimit = [0,0,0]
HAnimSegment177 = x3d.HAnimSegment()
HAnimSegment177.name = "l_talus"
HAnimSegment177.DEF = "hanim_l_talus"
Transform178 = x3d.Transform()
Transform178.scale = [0.15,0.15,0.15]
Transform178.translation = [0.08,0.06,-0.025]
Transform178.rotation = [1,0,0,-1.57]
"""Transform left foot"""
Transform179 = x3d.Transform()
"""Empty Transform left foot"""
Shape180 = x3d.Shape()
Shape180.USE = "HAnimJointShape"

Transform179.children.append(Shape180)

Transform178.children.append(Transform179)

HAnimSegment177.children.append(Transform178)
Shape181 = x3d.Shape()
LineSet182 = x3d.LineSet()
LineSet182.vertexCount = [2]
Coordinate183 = x3d.Coordinate()

LineSet182.coord = Coordinate183
"""from l_talocrural to l_talocalcaneonavicular vertices 2"""
ColorRGBA184 = x3d.ColorRGBA()
ColorRGBA184.USE = "HAnimSegmentLineColorRGBA"

LineSet182.color = ColorRGBA184

Shape181.geometry = LineSet182

HAnimSegment177.children.append(Shape181)
Shape185 = x3d.Shape()
LineSet186 = x3d.LineSet()
LineSet186.vertexCount = [2]
Coordinate187 = x3d.Coordinate()

LineSet186.coord = Coordinate187
"""from l_talocrural to l_calcaneocuboid vertices 2"""
ColorRGBA188 = x3d.ColorRGBA()
ColorRGBA188.USE = "HAnimSegmentLineColorRGBA"

LineSet186.color = ColorRGBA188

Shape185.geometry = LineSet186

HAnimSegment177.children.append(Shape185)

HAnimJoint176.children.append(HAnimSegment177)
HAnimJoint189 = x3d.HAnimJoint()
HAnimJoint189.name = "l_talocalcaneonavicular"
HAnimJoint189.DEF = "hanim_l_talocalcaneonavicular"
HAnimJoint189.center = [0,1,0]
HAnimJoint189.ulimit = [0,0,0]
HAnimJoint189.llimit = [0,0,0]
HAnimSegment190 = x3d.HAnimSegment()
HAnimSegment190.name = "l_navicular"
HAnimSegment190.DEF = "hanim_l_navicular"
Transform191 = x3d.Transform()
"""Empty Transform"""
Transform192 = x3d.Transform()
"""Empty Transform"""
Shape193 = x3d.Shape()
Shape193.USE = "HAnimJointShape"

Transform192.children.append(Shape193)

Transform191.children.append(Transform192)

HAnimSegment190.children.append(Transform191)
Shape194 = x3d.Shape()
LineSet195 = x3d.LineSet()
LineSet195.vertexCount = [2]
Coordinate196 = x3d.Coordinate()

LineSet195.coord = Coordinate196
"""from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2"""
ColorRGBA197 = x3d.ColorRGBA()
ColorRGBA197.USE = "HAnimSegmentLineColorRGBA"

LineSet195.color = ColorRGBA197

Shape194.geometry = LineSet195

HAnimSegment190.children.append(Shape194)
Shape198 = x3d.Shape()
LineSet199 = x3d.LineSet()
LineSet199.vertexCount = [2]
Coordinate200 = x3d.Coordinate()

LineSet199.coord = Coordinate200
"""from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2"""
ColorRGBA201 = x3d.ColorRGBA()
ColorRGBA201.USE = "HAnimSegmentLineColorRGBA"

LineSet199.color = ColorRGBA201

Shape198.geometry = LineSet199

HAnimSegment190.children.append(Shape198)
Shape202 = x3d.Shape()
LineSet203 = x3d.LineSet()
LineSet203.vertexCount = [2]
Coordinate204 = x3d.Coordinate()

LineSet203.coord = Coordinate204
"""from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2"""
ColorRGBA205 = x3d.ColorRGBA()
ColorRGBA205.USE = "HAnimSegmentLineColorRGBA"

LineSet203.color = ColorRGBA205

Shape202.geometry = LineSet203

HAnimSegment190.children.append(Shape202)

HAnimJoint189.children.append(HAnimSegment190)
HAnimJoint206 = x3d.HAnimJoint()
HAnimJoint206.name = "l_cuneonavicular_1"
HAnimJoint206.DEF = "hanim_l_cuneonavicular_1"
HAnimJoint206.center = [0,1,0]
HAnimJoint206.ulimit = [0,0,0]
HAnimJoint206.llimit = [0,0,0]
HAnimSegment207 = x3d.HAnimSegment()
HAnimSegment207.name = "l_cuneiform_1"
HAnimSegment207.DEF = "hanim_l_cuneiform_1"
Transform208 = x3d.Transform()
"""Empty Transform"""
Transform209 = x3d.Transform()
"""Empty Transform"""
Shape210 = x3d.Shape()
Shape210.USE = "HAnimJointShape"

Transform209.children.append(Shape210)

Transform208.children.append(Transform209)

HAnimSegment207.children.append(Transform208)
Shape211 = x3d.Shape()
LineSet212 = x3d.LineSet()
LineSet212.vertexCount = [2]
Coordinate213 = x3d.Coordinate()

LineSet212.coord = Coordinate213
"""from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2"""
ColorRGBA214 = x3d.ColorRGBA()
ColorRGBA214.USE = "HAnimSegmentLineColorRGBA"

LineSet212.color = ColorRGBA214

Shape211.geometry = LineSet212

HAnimSegment207.children.append(Shape211)

HAnimJoint206.children.append(HAnimSegment207)
HAnimJoint215 = x3d.HAnimJoint()
HAnimJoint215.name = "l_tarsometatarsal_1"
HAnimJoint215.DEF = "hanim_l_tarsometatarsal_1"
HAnimJoint215.center = [0,1,0]
HAnimJoint215.ulimit = [0,0,0]
HAnimJoint215.llimit = [0,0,0]
HAnimSegment216 = x3d.HAnimSegment()
HAnimSegment216.name = "l_metatarsal_1"
HAnimSegment216.DEF = "hanim_l_metatarsal_1"
Transform217 = x3d.Transform()
"""Empty Transform"""
Transform218 = x3d.Transform()
"""Empty Transform"""
Shape219 = x3d.Shape()
Shape219.USE = "HAnimJointShape"

Transform218.children.append(Shape219)

Transform217.children.append(Transform218)

HAnimSegment216.children.append(Transform217)
Shape220 = x3d.Shape()
LineSet221 = x3d.LineSet()
LineSet221.vertexCount = [2]
Coordinate222 = x3d.Coordinate()

LineSet221.coord = Coordinate222
"""from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2"""
ColorRGBA223 = x3d.ColorRGBA()
ColorRGBA223.USE = "HAnimSegmentLineColorRGBA"

LineSet221.color = ColorRGBA223

Shape220.geometry = LineSet221

HAnimSegment216.children.append(Shape220)
HAnimSite224 = x3d.HAnimSite()
HAnimSite224.name = "l_metatarsal_phalanx_1_pt"
HAnimSite224.DEF = "hanim_l_metatarsal_phalanx_1_pt"
HAnimSite224.translation = [0,1,0]
TouchSensor225 = x3d.TouchSensor()
TouchSensor225.description = "HAnimSite l_metatarsal_phalanx_1_pt"

HAnimSite224.children.append(TouchSensor225)
Shape226 = x3d.Shape()
Shape226.USE = "HAnimSiteShape"

HAnimSite224.children.append(Shape226)

HAnimSegment216.children.append(HAnimSite224)

HAnimJoint215.children.append(HAnimSegment216)
HAnimJoint227 = x3d.HAnimJoint()
HAnimJoint227.name = "l_metatarsophalangeal_1"
HAnimJoint227.DEF = "hanim_l_metatarsophalangeal_1"
HAnimJoint227.center = [0,1,0]
HAnimJoint227.ulimit = [0,0,0]
HAnimJoint227.llimit = [0,0,0]
HAnimSegment228 = x3d.HAnimSegment()
HAnimSegment228.name = "l_tarsal_proximal_phalanx_1"
HAnimSegment228.DEF = "hanim_l_tarsal_proximal_phalanx_1"
Transform229 = x3d.Transform()
"""Empty Transform"""
Transform230 = x3d.Transform()
"""Empty Transform"""
Shape231 = x3d.Shape()
Shape231.USE = "HAnimJointShape"

Transform230.children.append(Shape231)

Transform229.children.append(Transform230)

HAnimSegment228.children.append(Transform229)
Shape232 = x3d.Shape()
LineSet233 = x3d.LineSet()
LineSet233.vertexCount = [2]
Coordinate234 = x3d.Coordinate()

LineSet233.coord = Coordinate234
"""from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2"""
ColorRGBA235 = x3d.ColorRGBA()
ColorRGBA235.USE = "HAnimSegmentLineColorRGBA"

LineSet233.color = ColorRGBA235

Shape232.geometry = LineSet233

HAnimSegment228.children.append(Shape232)
HAnimSite236 = x3d.HAnimSite()
HAnimSite236.name = "l_tarsal_distal_phalanx_1_tip"
HAnimSite236.DEF = "hanim_l_tarsal_distal_phalanx_1_tip"
HAnimSite236.translation = [0,1,0]
TouchSensor237 = x3d.TouchSensor()
TouchSensor237.description = "HAnimSite l_tarsal_distal_phalanx_1_tip"

HAnimSite236.children.append(TouchSensor237)
Shape238 = x3d.Shape()
Shape238.USE = "HAnimSiteShape"

HAnimSite236.children.append(Shape238)

HAnimSegment228.children.append(HAnimSite236)

HAnimJoint227.children.append(HAnimSegment228)
HAnimJoint239 = x3d.HAnimJoint()
HAnimJoint239.name = "l_tarsal_interphalangeal_1"
HAnimJoint239.DEF = "hanim_l_tarsal_interphalangeal_1"
HAnimJoint239.center = [0,1,0]
HAnimJoint239.ulimit = [0,0,0]
HAnimJoint239.llimit = [0,0,0]

HAnimJoint227.children.append(HAnimJoint239)

HAnimJoint215.children.append(HAnimJoint227)

HAnimJoint206.children.append(HAnimJoint215)

HAnimJoint189.children.append(HAnimJoint206)
HAnimJoint240 = x3d.HAnimJoint()
HAnimJoint240.name = "l_cuneonavicular_2"
HAnimJoint240.DEF = "hanim_l_cuneonavicular_2"
HAnimJoint240.center = [0,1,0]
HAnimJoint240.ulimit = [0,0,0]
HAnimJoint240.llimit = [0,0,0]
HAnimSegment241 = x3d.HAnimSegment()
HAnimSegment241.name = "l_cuneiform_2"
HAnimSegment241.DEF = "hanim_l_cuneiform_2"
Transform242 = x3d.Transform()
"""Empty Transform"""
Transform243 = x3d.Transform()
"""Empty Transform"""
Shape244 = x3d.Shape()
Shape244.USE = "HAnimJointShape"

Transform243.children.append(Shape244)

Transform242.children.append(Transform243)

HAnimSegment241.children.append(Transform242)
Shape245 = x3d.Shape()
LineSet246 = x3d.LineSet()
LineSet246.vertexCount = [2]
Coordinate247 = x3d.Coordinate()

LineSet246.coord = Coordinate247
"""from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2"""
ColorRGBA248 = x3d.ColorRGBA()
ColorRGBA248.USE = "HAnimSegmentLineColorRGBA"

LineSet246.color = ColorRGBA248

Shape245.geometry = LineSet246

HAnimSegment241.children.append(Shape245)

HAnimJoint240.children.append(HAnimSegment241)
HAnimJoint249 = x3d.HAnimJoint()
HAnimJoint249.name = "l_tarsometatarsal_2"
HAnimJoint249.DEF = "hanim_l_tarsometatarsal_2"
HAnimJoint249.center = [0,1,0]
HAnimJoint249.ulimit = [0,0,0]
HAnimJoint249.llimit = [0,0,0]
HAnimSegment250 = x3d.HAnimSegment()
HAnimSegment250.name = "l_metatarsal_2"
HAnimSegment250.DEF = "hanim_l_metatarsal_2"
Transform251 = x3d.Transform()
"""Empty Transform"""
Transform252 = x3d.Transform()
"""Empty Transform"""
Shape253 = x3d.Shape()
Shape253.USE = "HAnimJointShape"

Transform252.children.append(Shape253)

Transform251.children.append(Transform252)

HAnimSegment250.children.append(Transform251)
Shape254 = x3d.Shape()
LineSet255 = x3d.LineSet()
LineSet255.vertexCount = [2]
Coordinate256 = x3d.Coordinate()

LineSet255.coord = Coordinate256
"""from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2"""
ColorRGBA257 = x3d.ColorRGBA()
ColorRGBA257.USE = "HAnimSegmentLineColorRGBA"

LineSet255.color = ColorRGBA257

Shape254.geometry = LineSet255

HAnimSegment250.children.append(Shape254)

HAnimJoint249.children.append(HAnimSegment250)
HAnimJoint258 = x3d.HAnimJoint()
HAnimJoint258.name = "l_metatarsophalangeal_2"
HAnimJoint258.DEF = "hanim_l_metatarsophalangeal_2"
HAnimJoint258.center = [0,1,0]
HAnimJoint258.ulimit = [0,0,0]
HAnimJoint258.llimit = [0,0,0]
HAnimSegment259 = x3d.HAnimSegment()
HAnimSegment259.name = "l_tarsal_proximal_phalanx_2"
HAnimSegment259.DEF = "hanim_l_tarsal_proximal_phalanx_2"
Transform260 = x3d.Transform()
"""Empty Transform"""
Transform261 = x3d.Transform()
"""Empty Transform"""
Shape262 = x3d.Shape()
Shape262.USE = "HAnimJointShape"

Transform261.children.append(Shape262)

Transform260.children.append(Transform261)

HAnimSegment259.children.append(Transform260)
Shape263 = x3d.Shape()
LineSet264 = x3d.LineSet()
LineSet264.vertexCount = [2]
Coordinate265 = x3d.Coordinate()

LineSet264.coord = Coordinate265
"""from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2"""
ColorRGBA266 = x3d.ColorRGBA()
ColorRGBA266.USE = "HAnimSegmentLineColorRGBA"

LineSet264.color = ColorRGBA266

Shape263.geometry = LineSet264

HAnimSegment259.children.append(Shape263)

HAnimJoint258.children.append(HAnimSegment259)
HAnimJoint267 = x3d.HAnimJoint()
HAnimJoint267.name = "l_tarsal_proximal_interphalangeal_2"
HAnimJoint267.DEF = "hanim_l_tarsal_proximal_interphalangeal_2"
HAnimJoint267.center = [0,1,0]
HAnimJoint267.ulimit = [0,0,0]
HAnimJoint267.llimit = [0,0,0]
HAnimSegment268 = x3d.HAnimSegment()
HAnimSegment268.name = "l_tarsal_middle_phalanx_2"
HAnimSegment268.DEF = "hanim_l_tarsal_middle_phalanx_2"
Transform269 = x3d.Transform()
"""Empty Transform"""
Transform270 = x3d.Transform()
"""Empty Transform"""
Shape271 = x3d.Shape()
Shape271.USE = "HAnimJointShape"

Transform270.children.append(Shape271)

Transform269.children.append(Transform270)

HAnimSegment268.children.append(Transform269)
Shape272 = x3d.Shape()
LineSet273 = x3d.LineSet()
LineSet273.vertexCount = [2]
Coordinate274 = x3d.Coordinate()

LineSet273.coord = Coordinate274
"""from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2"""
ColorRGBA275 = x3d.ColorRGBA()
ColorRGBA275.USE = "HAnimSegmentLineColorRGBA"

LineSet273.color = ColorRGBA275

Shape272.geometry = LineSet273

HAnimSegment268.children.append(Shape272)
HAnimSite276 = x3d.HAnimSite()
HAnimSite276.name = "l_tarsal_distal_phalanx_2_tip"
HAnimSite276.DEF = "hanim_l_tarsal_distal_phalanx_2_tip"
HAnimSite276.translation = [0.1195,0.0079,0.1433]
TouchSensor277 = x3d.TouchSensor()
TouchSensor277.description = "HAnimSite l_tarsal_distal_phalanx_2_tip"

HAnimSite276.children.append(TouchSensor277)
Shape278 = x3d.Shape()
Shape278.USE = "HAnimSiteShape"

HAnimSite276.children.append(Shape278)

HAnimSegment268.children.append(HAnimSite276)

HAnimJoint267.children.append(HAnimSegment268)
HAnimJoint279 = x3d.HAnimJoint()
HAnimJoint279.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint279.DEF = "hanim_l_tarsal_distal_interphalangeal_2"
HAnimJoint279.center = [0,1,0]
HAnimJoint279.ulimit = [0,0,0]
HAnimJoint279.llimit = [0,0,0]

HAnimJoint267.children.append(HAnimJoint279)

HAnimJoint258.children.append(HAnimJoint267)

HAnimJoint249.children.append(HAnimJoint258)

HAnimJoint240.children.append(HAnimJoint249)

HAnimJoint189.children.append(HAnimJoint240)
HAnimJoint280 = x3d.HAnimJoint()
HAnimJoint280.name = "l_cuneonavicular_3"
HAnimJoint280.DEF = "hanim_l_cuneonavicular_3"
HAnimJoint280.center = [0,1,0]
HAnimJoint280.ulimit = [0,0,0]
HAnimJoint280.llimit = [0,0,0]
HAnimSegment281 = x3d.HAnimSegment()
HAnimSegment281.name = "l_cuneiform_3"
HAnimSegment281.DEF = "hanim_l_cuneiform_3"
Transform282 = x3d.Transform()
"""Empty Transform"""
Transform283 = x3d.Transform()
"""Empty Transform"""
Shape284 = x3d.Shape()
Shape284.USE = "HAnimJointShape"

Transform283.children.append(Shape284)

Transform282.children.append(Transform283)

HAnimSegment281.children.append(Transform282)
Shape285 = x3d.Shape()
LineSet286 = x3d.LineSet()
LineSet286.vertexCount = [2]
Coordinate287 = x3d.Coordinate()

LineSet286.coord = Coordinate287
"""from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2"""
ColorRGBA288 = x3d.ColorRGBA()
ColorRGBA288.USE = "HAnimSegmentLineColorRGBA"

LineSet286.color = ColorRGBA288

Shape285.geometry = LineSet286

HAnimSegment281.children.append(Shape285)

HAnimJoint280.children.append(HAnimSegment281)
HAnimJoint289 = x3d.HAnimJoint()
HAnimJoint289.name = "l_tarsometatarsal_3"
HAnimJoint289.DEF = "hanim_l_tarsometatarsal_3"
HAnimJoint289.center = [0,1,0]
HAnimJoint289.ulimit = [0,0,0]
HAnimJoint289.llimit = [0,0,0]
HAnimSegment290 = x3d.HAnimSegment()
HAnimSegment290.name = "l_metatarsal_3"
HAnimSegment290.DEF = "hanim_l_metatarsal_3"
Transform291 = x3d.Transform()
"""Empty Transform"""
Transform292 = x3d.Transform()
"""Empty Transform"""
Shape293 = x3d.Shape()
Shape293.USE = "HAnimJointShape"

Transform292.children.append(Shape293)

Transform291.children.append(Transform292)

HAnimSegment290.children.append(Transform291)
Shape294 = x3d.Shape()
LineSet295 = x3d.LineSet()
LineSet295.vertexCount = [2]
Coordinate296 = x3d.Coordinate()

LineSet295.coord = Coordinate296
"""from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2"""
ColorRGBA297 = x3d.ColorRGBA()
ColorRGBA297.USE = "HAnimSegmentLineColorRGBA"

LineSet295.color = ColorRGBA297

Shape294.geometry = LineSet295

HAnimSegment290.children.append(Shape294)

HAnimJoint289.children.append(HAnimSegment290)
HAnimJoint298 = x3d.HAnimJoint()
HAnimJoint298.name = "l_metatarsophalangeal_3"
HAnimJoint298.DEF = "hanim_l_metatarsophalangeal_3"
HAnimJoint298.center = [0,1,0]
HAnimJoint298.ulimit = [0,0,0]
HAnimJoint298.llimit = [0,0,0]
HAnimSegment299 = x3d.HAnimSegment()
HAnimSegment299.name = "l_tarsal_proximal_phalanx_3"
HAnimSegment299.DEF = "hanim_l_tarsal_proximal_phalanx_3"
Transform300 = x3d.Transform()
"""Empty Transform"""
Transform301 = x3d.Transform()
"""Empty Transform"""
Shape302 = x3d.Shape()
Shape302.USE = "HAnimJointShape"

Transform301.children.append(Shape302)

Transform300.children.append(Transform301)

HAnimSegment299.children.append(Transform300)
Shape303 = x3d.Shape()
LineSet304 = x3d.LineSet()
LineSet304.vertexCount = [2]
Coordinate305 = x3d.Coordinate()

LineSet304.coord = Coordinate305
"""from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2"""
ColorRGBA306 = x3d.ColorRGBA()
ColorRGBA306.USE = "HAnimSegmentLineColorRGBA"

LineSet304.color = ColorRGBA306

Shape303.geometry = LineSet304

HAnimSegment299.children.append(Shape303)

HAnimJoint298.children.append(HAnimSegment299)
HAnimJoint307 = x3d.HAnimJoint()
HAnimJoint307.name = "l_tarsal_proximal_interphalangeal_3"
HAnimJoint307.DEF = "hanim_l_tarsal_proximal_interphalangeal_3"
HAnimJoint307.center = [0,1,0]
HAnimJoint307.ulimit = [0,0,0]
HAnimJoint307.llimit = [0,0,0]
HAnimSegment308 = x3d.HAnimSegment()
HAnimSegment308.name = "l_tarsal_middle_phalanx_3"
HAnimSegment308.DEF = "hanim_l_tarsal_middle_phalanx_3"
Transform309 = x3d.Transform()
"""Empty Transform"""
Transform310 = x3d.Transform()
"""Empty Transform"""
Shape311 = x3d.Shape()
Shape311.USE = "HAnimJointShape"

Transform310.children.append(Shape311)

Transform309.children.append(Transform310)

HAnimSegment308.children.append(Transform309)
Shape312 = x3d.Shape()
LineSet313 = x3d.LineSet()
LineSet313.vertexCount = [2]
Coordinate314 = x3d.Coordinate()

LineSet313.coord = Coordinate314
"""from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2"""
ColorRGBA315 = x3d.ColorRGBA()
ColorRGBA315.USE = "HAnimSegmentLineColorRGBA"

LineSet313.color = ColorRGBA315

Shape312.geometry = LineSet313

HAnimSegment308.children.append(Shape312)
HAnimSite316 = x3d.HAnimSite()
HAnimSite316.name = "l_tarsal_distal_phalanx_3_tip"
HAnimSite316.DEF = "hanim_l_tarsal_distal_phalanx_3_tip"
HAnimSite316.translation = [0,1,0]
TouchSensor317 = x3d.TouchSensor()
TouchSensor317.description = "HAnimSite l_tarsal_distal_phalanx_3_tip"

HAnimSite316.children.append(TouchSensor317)
Shape318 = x3d.Shape()
Shape318.USE = "HAnimSiteShape"

HAnimSite316.children.append(Shape318)

HAnimSegment308.children.append(HAnimSite316)

HAnimJoint307.children.append(HAnimSegment308)
HAnimJoint319 = x3d.HAnimJoint()
HAnimJoint319.name = "l_tarsal_distal_interphalangeal_3"
HAnimJoint319.DEF = "hanim_l_tarsal_distal_interphalangeal_3"
HAnimJoint319.center = [0,1,0]
HAnimJoint319.ulimit = [0,0,0]
HAnimJoint319.llimit = [0,0,0]

HAnimJoint307.children.append(HAnimJoint319)

HAnimJoint298.children.append(HAnimJoint307)

HAnimJoint289.children.append(HAnimJoint298)

HAnimJoint280.children.append(HAnimJoint289)

HAnimJoint189.children.append(HAnimJoint280)

HAnimJoint176.children.append(HAnimJoint189)
HAnimJoint320 = x3d.HAnimJoint()
HAnimJoint320.name = "l_calcaneocuboid"
HAnimJoint320.DEF = "hanim_l_calcaneocuboid"
HAnimJoint320.center = [0,1,0]
HAnimJoint320.ulimit = [0,0,0]
HAnimJoint320.llimit = [0,0,0]
HAnimSegment321 = x3d.HAnimSegment()
HAnimSegment321.name = "l_calcaneus"
HAnimSegment321.DEF = "hanim_l_calcaneus"
Transform322 = x3d.Transform()
"""Empty Transform"""
Transform323 = x3d.Transform()
"""Empty Transform"""
Shape324 = x3d.Shape()
Shape324.USE = "HAnimJointShape"

Transform323.children.append(Shape324)

Transform322.children.append(Transform323)

HAnimSegment321.children.append(Transform322)
Shape325 = x3d.Shape()
LineSet326 = x3d.LineSet()
LineSet326.vertexCount = [2]
Coordinate327 = x3d.Coordinate()

LineSet326.coord = Coordinate327
"""from l_calcaneocuboid to l_transversetarsal vertices 2"""
ColorRGBA328 = x3d.ColorRGBA()
ColorRGBA328.USE = "HAnimSegmentLineColorRGBA"

LineSet326.color = ColorRGBA328

Shape325.geometry = LineSet326

HAnimSegment321.children.append(Shape325)

HAnimJoint320.children.append(HAnimSegment321)
HAnimJoint329 = x3d.HAnimJoint()
HAnimJoint329.name = "l_transversetarsal"
HAnimJoint329.DEF = "hanim_l_transversetarsal"
HAnimJoint329.center = [0,1,0]
HAnimJoint329.ulimit = [0,0,0]
HAnimJoint329.llimit = [0,0,0]
HAnimSegment330 = x3d.HAnimSegment()
HAnimSegment330.name = "l_cuboid"
HAnimSegment330.DEF = "hanim_l_cuboid"
Transform331 = x3d.Transform()
"""Empty Transform"""
Transform332 = x3d.Transform()
"""Empty Transform"""
Shape333 = x3d.Shape()
Shape333.USE = "HAnimJointShape"

Transform332.children.append(Shape333)

Transform331.children.append(Transform332)

HAnimSegment330.children.append(Transform331)
Shape334 = x3d.Shape()
LineSet335 = x3d.LineSet()
LineSet335.vertexCount = [2]
Coordinate336 = x3d.Coordinate()

LineSet335.coord = Coordinate336
"""from l_transversetarsal to l_tarsometatarsal_4 vertices 2"""
ColorRGBA337 = x3d.ColorRGBA()
ColorRGBA337.USE = "HAnimSegmentLineColorRGBA"

LineSet335.color = ColorRGBA337

Shape334.geometry = LineSet335

HAnimSegment330.children.append(Shape334)
Shape338 = x3d.Shape()
LineSet339 = x3d.LineSet()
LineSet339.vertexCount = [2]
Coordinate340 = x3d.Coordinate()

LineSet339.coord = Coordinate340
"""from l_transversetarsal to l_tarsometatarsal_5 vertices 2"""
ColorRGBA341 = x3d.ColorRGBA()
ColorRGBA341.USE = "HAnimSegmentLineColorRGBA"

LineSet339.color = ColorRGBA341

Shape338.geometry = LineSet339

HAnimSegment330.children.append(Shape338)

HAnimJoint329.children.append(HAnimSegment330)
HAnimJoint342 = x3d.HAnimJoint()
HAnimJoint342.name = "l_tarsometatarsal_4"
HAnimJoint342.DEF = "hanim_l_tarsometatarsal_4"
HAnimJoint342.center = [0,1,0]
HAnimJoint342.ulimit = [0,0,0]
HAnimJoint342.llimit = [0,0,0]
HAnimSegment343 = x3d.HAnimSegment()
HAnimSegment343.name = "l_metatarsal_4"
HAnimSegment343.DEF = "hanim_l_metatarsal_4"
Transform344 = x3d.Transform()
"""Empty Transform"""
Transform345 = x3d.Transform()
"""Empty Transform"""
Shape346 = x3d.Shape()
Shape346.USE = "HAnimJointShape"

Transform345.children.append(Shape346)

Transform344.children.append(Transform345)

HAnimSegment343.children.append(Transform344)
Shape347 = x3d.Shape()
LineSet348 = x3d.LineSet()
LineSet348.vertexCount = [2]
Coordinate349 = x3d.Coordinate()

LineSet348.coord = Coordinate349
"""from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2"""
ColorRGBA350 = x3d.ColorRGBA()
ColorRGBA350.USE = "HAnimSegmentLineColorRGBA"

LineSet348.color = ColorRGBA350

Shape347.geometry = LineSet348

HAnimSegment343.children.append(Shape347)

HAnimJoint342.children.append(HAnimSegment343)
HAnimJoint351 = x3d.HAnimJoint()
HAnimJoint351.name = "l_metatarsophalangeal_4"
HAnimJoint351.DEF = "hanim_l_metatarsophalangeal_4"
HAnimJoint351.center = [0,1,0]
HAnimJoint351.ulimit = [0,0,0]
HAnimJoint351.llimit = [0,0,0]
HAnimSegment352 = x3d.HAnimSegment()
HAnimSegment352.name = "l_tarsal_proximal_phalanx_4"
HAnimSegment352.DEF = "hanim_l_tarsal_proximal_phalanx_4"
Transform353 = x3d.Transform()
"""Empty Transform"""
Transform354 = x3d.Transform()
"""Empty Transform"""
Shape355 = x3d.Shape()
Shape355.USE = "HAnimJointShape"

Transform354.children.append(Shape355)

Transform353.children.append(Transform354)

HAnimSegment352.children.append(Transform353)
Shape356 = x3d.Shape()
LineSet357 = x3d.LineSet()
LineSet357.vertexCount = [2]
Coordinate358 = x3d.Coordinate()

LineSet357.coord = Coordinate358
"""from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2"""
ColorRGBA359 = x3d.ColorRGBA()
ColorRGBA359.USE = "HAnimSegmentLineColorRGBA"

LineSet357.color = ColorRGBA359

Shape356.geometry = LineSet357

HAnimSegment352.children.append(Shape356)

HAnimJoint351.children.append(HAnimSegment352)
HAnimJoint360 = x3d.HAnimJoint()
HAnimJoint360.name = "l_tarsal_proximal_interphalangeal_4"
HAnimJoint360.DEF = "hanim_l_tarsal_proximal_interphalangeal_4"
HAnimJoint360.center = [0,1,0]
HAnimJoint360.ulimit = [0,0,0]
HAnimJoint360.llimit = [0,0,0]
HAnimSegment361 = x3d.HAnimSegment()
HAnimSegment361.name = "l_tarsal_middle_phalanx_4"
HAnimSegment361.DEF = "hanim_l_tarsal_middle_phalanx_4"
Transform362 = x3d.Transform()
"""Empty Transform"""
Transform363 = x3d.Transform()
"""Empty Transform"""
Shape364 = x3d.Shape()
Shape364.USE = "HAnimJointShape"

Transform363.children.append(Shape364)

Transform362.children.append(Transform363)

HAnimSegment361.children.append(Transform362)
Shape365 = x3d.Shape()
LineSet366 = x3d.LineSet()
LineSet366.vertexCount = [2]
Coordinate367 = x3d.Coordinate()

LineSet366.coord = Coordinate367
"""from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2"""
ColorRGBA368 = x3d.ColorRGBA()
ColorRGBA368.USE = "HAnimSegmentLineColorRGBA"

LineSet366.color = ColorRGBA368

Shape365.geometry = LineSet366

HAnimSegment361.children.append(Shape365)
HAnimSite369 = x3d.HAnimSite()
HAnimSite369.name = "l_tarsal_distal_phalanx_4_tip"
HAnimSite369.DEF = "hanim_l_tarsal_distal_phalanx_4_tip"
HAnimSite369.translation = [0,1,0]
TouchSensor370 = x3d.TouchSensor()
TouchSensor370.description = "HAnimSite l_tarsal_distal_phalanx_4_tip"

HAnimSite369.children.append(TouchSensor370)
Shape371 = x3d.Shape()
Shape371.USE = "HAnimSiteShape"

HAnimSite369.children.append(Shape371)

HAnimSegment361.children.append(HAnimSite369)

HAnimJoint360.children.append(HAnimSegment361)
HAnimJoint372 = x3d.HAnimJoint()
HAnimJoint372.name = "l_tarsal_distal_interphalangeal_4"
HAnimJoint372.DEF = "hanim_l_tarsal_distal_interphalangeal_4"
HAnimJoint372.center = [0,1,0]
HAnimJoint372.ulimit = [0,0,0]
HAnimJoint372.llimit = [0,0,0]

HAnimJoint360.children.append(HAnimJoint372)

HAnimJoint351.children.append(HAnimJoint360)

HAnimJoint342.children.append(HAnimJoint351)

HAnimJoint329.children.append(HAnimJoint342)
HAnimJoint373 = x3d.HAnimJoint()
HAnimJoint373.name = "l_tarsometatarsal_5"
HAnimJoint373.DEF = "hanim_l_tarsometatarsal_5"
HAnimJoint373.center = [0,1,0]
HAnimJoint373.ulimit = [0,0,0]
HAnimJoint373.llimit = [0,0,0]
HAnimSegment374 = x3d.HAnimSegment()
HAnimSegment374.name = "l_metatarsal_5"
HAnimSegment374.DEF = "hanim_l_metatarsal_5"
Transform375 = x3d.Transform()
"""Empty Transform"""
Transform376 = x3d.Transform()
"""Empty Transform"""
Shape377 = x3d.Shape()
Shape377.USE = "HAnimJointShape"

Transform376.children.append(Shape377)

Transform375.children.append(Transform376)

HAnimSegment374.children.append(Transform375)
Shape378 = x3d.Shape()
LineSet379 = x3d.LineSet()
LineSet379.vertexCount = [2]
Coordinate380 = x3d.Coordinate()

LineSet379.coord = Coordinate380
"""from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2"""
ColorRGBA381 = x3d.ColorRGBA()
ColorRGBA381.USE = "HAnimSegmentLineColorRGBA"

LineSet379.color = ColorRGBA381

Shape378.geometry = LineSet379

HAnimSegment374.children.append(Shape378)
HAnimSite382 = x3d.HAnimSite()
HAnimSite382.name = "l_metatarsal_phalanx_5_pt"
HAnimSite382.DEF = "hanim_l_metatarsal_phalanx_5_pt"
HAnimSite382.translation = [0,1,0]
TouchSensor383 = x3d.TouchSensor()
TouchSensor383.description = "HAnimSite l_metatarsal_phalanx_5_pt"

HAnimSite382.children.append(TouchSensor383)
Shape384 = x3d.Shape()
Shape384.USE = "HAnimSiteShape"

HAnimSite382.children.append(Shape384)

HAnimSegment374.children.append(HAnimSite382)

HAnimJoint373.children.append(HAnimSegment374)
HAnimJoint385 = x3d.HAnimJoint()
HAnimJoint385.name = "l_metatarsophalangeal_5"
HAnimJoint385.DEF = "hanim_l_metatarsophalangeal_5"
HAnimJoint385.center = [0,1,0]
HAnimJoint385.ulimit = [0,0,0]
HAnimJoint385.llimit = [0,0,0]
HAnimSegment386 = x3d.HAnimSegment()
HAnimSegment386.name = "l_tarsal_proximal_phalanx_5"
HAnimSegment386.DEF = "hanim_l_tarsal_proximal_phalanx_5"
Transform387 = x3d.Transform()
"""Empty Transform"""
Transform388 = x3d.Transform()
"""Empty Transform"""
Shape389 = x3d.Shape()
Shape389.USE = "HAnimJointShape"

Transform388.children.append(Shape389)

Transform387.children.append(Transform388)

HAnimSegment386.children.append(Transform387)
Shape390 = x3d.Shape()
LineSet391 = x3d.LineSet()
LineSet391.vertexCount = [2]
Coordinate392 = x3d.Coordinate()

LineSet391.coord = Coordinate392
"""from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2"""
ColorRGBA393 = x3d.ColorRGBA()
ColorRGBA393.USE = "HAnimSegmentLineColorRGBA"

LineSet391.color = ColorRGBA393

Shape390.geometry = LineSet391

HAnimSegment386.children.append(Shape390)

HAnimJoint385.children.append(HAnimSegment386)
HAnimJoint394 = x3d.HAnimJoint()
HAnimJoint394.name = "l_tarsal_proximal_interphalangeal_5"
HAnimJoint394.DEF = "hanim_l_tarsal_proximal_interphalangeal_5"
HAnimJoint394.center = [0,1,0]
HAnimJoint394.ulimit = [0,0,0]
HAnimJoint394.llimit = [0,0,0]
HAnimSegment395 = x3d.HAnimSegment()
HAnimSegment395.name = "l_tarsal_middle_phalanx_5"
HAnimSegment395.DEF = "hanim_l_tarsal_middle_phalanx_5"
Transform396 = x3d.Transform()
"""Empty Transform"""
Transform397 = x3d.Transform()
"""Empty Transform"""
Shape398 = x3d.Shape()
Shape398.USE = "HAnimJointShape"

Transform397.children.append(Shape398)

Transform396.children.append(Transform397)

HAnimSegment395.children.append(Transform396)
Shape399 = x3d.Shape()
LineSet400 = x3d.LineSet()
LineSet400.vertexCount = [2]
Coordinate401 = x3d.Coordinate()

LineSet400.coord = Coordinate401
"""from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2"""
ColorRGBA402 = x3d.ColorRGBA()
ColorRGBA402.USE = "HAnimSegmentLineColorRGBA"

LineSet400.color = ColorRGBA402

Shape399.geometry = LineSet400

HAnimSegment395.children.append(Shape399)
HAnimSite403 = x3d.HAnimSite()
HAnimSite403.name = "l_tarsal_distal_phalanx_5_tip"
HAnimSite403.DEF = "hanim_l_tarsal_distal_phalanx_5_tip"
HAnimSite403.translation = [0,1,0]
TouchSensor404 = x3d.TouchSensor()
TouchSensor404.description = "HAnimSite l_tarsal_distal_phalanx_5_tip"

HAnimSite403.children.append(TouchSensor404)
Shape405 = x3d.Shape()
Shape405.USE = "HAnimSiteShape"

HAnimSite403.children.append(Shape405)

HAnimSegment395.children.append(HAnimSite403)

HAnimJoint394.children.append(HAnimSegment395)
HAnimJoint406 = x3d.HAnimJoint()
HAnimJoint406.name = "l_tarsal_distal_interphalangeal_5"
HAnimJoint406.DEF = "hanim_l_tarsal_distal_interphalangeal_5"
HAnimJoint406.center = [0,1,0]
HAnimJoint406.ulimit = [0,0,0]
HAnimJoint406.llimit = [0,0,0]

HAnimJoint394.children.append(HAnimJoint406)

HAnimJoint385.children.append(HAnimJoint394)

HAnimJoint373.children.append(HAnimJoint385)

HAnimJoint329.children.append(HAnimJoint373)

HAnimJoint320.children.append(HAnimJoint329)

HAnimJoint176.children.append(HAnimJoint320)

HAnimJoint161.children.append(HAnimJoint176)

HAnimJoint143.children.append(HAnimJoint161)

HAnimJoint106.children.append(HAnimJoint143)
HAnimJoint407 = x3d.HAnimJoint()
HAnimJoint407.name = "r_hip"
HAnimJoint407.DEF = "hanim_r_hip"
HAnimJoint407.center = [-0.095,0.9171,0.0029]
HAnimJoint407.ulimit = [0,0,0]
HAnimJoint407.llimit = [0,0,0]
HAnimSegment408 = x3d.HAnimSegment()
HAnimSegment408.name = "r_thigh"
HAnimSegment408.DEF = "hanim_r_thigh"
Transform409 = x3d.Transform()
"""Empty Transform"""
Transform410 = x3d.Transform()
"""Empty Transform"""
Shape411 = x3d.Shape()
Shape411.USE = "HAnimJointShape"

Transform410.children.append(Shape411)

Transform409.children.append(Transform410)

HAnimSegment408.children.append(Transform409)
Shape412 = x3d.Shape()
LineSet413 = x3d.LineSet()
LineSet413.vertexCount = [2]
Coordinate414 = x3d.Coordinate()

LineSet413.coord = Coordinate414
"""from r_hip to r_knee vertices 2"""
ColorRGBA415 = x3d.ColorRGBA()
ColorRGBA415.USE = "HAnimSegmentLineColorRGBA"

LineSet413.color = ColorRGBA415

Shape412.geometry = LineSet413

HAnimSegment408.children.append(Shape412)
HAnimSite416 = x3d.HAnimSite()
HAnimSite416.name = "r_lateral_malleolus_pt"
HAnimSite416.DEF = "hanim_r_lateral_malleolus_pt"
HAnimSite416.translation = [-0.1006,0.0658,-0.1075]
TouchSensor417 = x3d.TouchSensor()
TouchSensor417.description = "HAnimSite r_lateral_malleolus_pt"

HAnimSite416.children.append(TouchSensor417)
Shape418 = x3d.Shape()
Shape418.USE = "HAnimSiteShape"

HAnimSite416.children.append(Shape418)

HAnimSegment408.children.append(HAnimSite416)
HAnimSite419 = x3d.HAnimSite()
HAnimSite419.name = "r_medial_malleolus_pt"
HAnimSite419.DEF = "hanim_r_medial_malleolus_pt"
HAnimSite419.translation = [-0.0591,0.076,-0.0928]
TouchSensor420 = x3d.TouchSensor()
TouchSensor420.description = "HAnimSite r_medial_malleolus_pt"

HAnimSite419.children.append(TouchSensor420)
Shape421 = x3d.Shape()
Shape421.USE = "HAnimSiteShape"

HAnimSite419.children.append(Shape421)

HAnimSegment408.children.append(HAnimSite419)
HAnimSite422 = x3d.HAnimSite()
HAnimSite422.name = "r_tibiale_pt"
HAnimSite422.DEF = "hanim_r_tibiale_pt"
HAnimSite422.translation = [0,1,0]
TouchSensor423 = x3d.TouchSensor()
TouchSensor423.description = "HAnimSite r_tibiale_pt"

HAnimSite422.children.append(TouchSensor423)
Shape424 = x3d.Shape()
Shape424.USE = "HAnimSiteShape"

HAnimSite422.children.append(Shape424)

HAnimSegment408.children.append(HAnimSite422)

HAnimJoint407.children.append(HAnimSegment408)
HAnimJoint425 = x3d.HAnimJoint()
HAnimJoint425.name = "r_knee"
HAnimJoint425.DEF = "hanim_r_knee"
HAnimJoint425.center = [-0.0867,0.4913,0.0318]
HAnimJoint425.ulimit = [0,0,0]
HAnimJoint425.llimit = [0,0,0]
HAnimSegment426 = x3d.HAnimSegment()
HAnimSegment426.name = "r_calf"
HAnimSegment426.DEF = "hanim_r_calf"
Transform427 = x3d.Transform()
"""Empty Transform"""
Transform428 = x3d.Transform()
"""Empty Transform"""
Shape429 = x3d.Shape()
Shape429.USE = "HAnimJointShape"

Transform428.children.append(Shape429)

Transform427.children.append(Transform428)

HAnimSegment426.children.append(Transform427)
Shape430 = x3d.Shape()
LineSet431 = x3d.LineSet()
LineSet431.vertexCount = [2]
Coordinate432 = x3d.Coordinate()

LineSet431.coord = Coordinate432
"""from r_knee to r_talocrural vertices 2"""
ColorRGBA433 = x3d.ColorRGBA()
ColorRGBA433.USE = "HAnimSegmentLineColorRGBA"

LineSet431.color = ColorRGBA433

Shape430.geometry = LineSet431

HAnimSegment426.children.append(Shape430)
HAnimSite434 = x3d.HAnimSite()
HAnimSite434.name = "r_calcaneus_posterior_pt"
HAnimSite434.DEF = "hanim_r_calcaneus_posterior_pt"
HAnimSite434.translation = [-0.0692,0.0297,-0.1221]
TouchSensor435 = x3d.TouchSensor()
TouchSensor435.description = "HAnimSite r_calcaneus_posterior_pt"

HAnimSite434.children.append(TouchSensor435)
Shape436 = x3d.Shape()
Shape436.USE = "HAnimSiteShape"

HAnimSite434.children.append(Shape436)

HAnimSegment426.children.append(HAnimSite434)
HAnimSite437 = x3d.HAnimSite()
HAnimSite437.name = "r_sphyrion_pt"
HAnimSite437.DEF = "hanim_r_sphyrion_pt"
HAnimSite437.translation = [-0.0603,0.061,-0.1002]
TouchSensor438 = x3d.TouchSensor()
TouchSensor438.description = "HAnimSite r_sphyrion_pt"

HAnimSite437.children.append(TouchSensor438)
Shape439 = x3d.Shape()
Shape439.USE = "HAnimSiteShape"

HAnimSite437.children.append(Shape439)

HAnimSegment426.children.append(HAnimSite437)

HAnimJoint425.children.append(HAnimSegment426)
HAnimJoint440 = x3d.HAnimJoint()
HAnimJoint440.name = "r_talocrural"
HAnimJoint440.DEF = "hanim_r_talocrural"
HAnimJoint440.center = [-0.0801,0.0712,-0.0766]
HAnimJoint440.ulimit = [0,0,0]
HAnimJoint440.llimit = [0,0,0]
HAnimSegment441 = x3d.HAnimSegment()
HAnimSegment441.name = "r_talus"
HAnimSegment441.DEF = "hanim_r_talus"
Transform442 = x3d.Transform()
Transform442.scale = [0.15,0.15,0.15]
Transform442.translation = [-0.05,0.06,-0.025]
Transform442.rotation = [1,0,0,-1.57]
"""Transform right foot"""
Transform443 = x3d.Transform()
"""Empty Transform right foot"""
Shape444 = x3d.Shape()
Shape444.USE = "HAnimJointShape"

Transform443.children.append(Shape444)

Transform442.children.append(Transform443)

HAnimSegment441.children.append(Transform442)
Shape445 = x3d.Shape()
LineSet446 = x3d.LineSet()
LineSet446.vertexCount = [2]
Coordinate447 = x3d.Coordinate()

LineSet446.coord = Coordinate447
"""from r_talocrural to r_talocalcaneonavicular vertices 2"""
ColorRGBA448 = x3d.ColorRGBA()
ColorRGBA448.USE = "HAnimSegmentLineColorRGBA"

LineSet446.color = ColorRGBA448

Shape445.geometry = LineSet446

HAnimSegment441.children.append(Shape445)
Shape449 = x3d.Shape()
LineSet450 = x3d.LineSet()
LineSet450.vertexCount = [2]
Coordinate451 = x3d.Coordinate()

LineSet450.coord = Coordinate451
"""from r_talocrural to r_calcaneocuboid vertices 2"""
ColorRGBA452 = x3d.ColorRGBA()
ColorRGBA452.USE = "HAnimSegmentLineColorRGBA"

LineSet450.color = ColorRGBA452

Shape449.geometry = LineSet450

HAnimSegment441.children.append(Shape449)

HAnimJoint440.children.append(HAnimSegment441)
HAnimJoint453 = x3d.HAnimJoint()
HAnimJoint453.name = "r_talocalcaneonavicular"
HAnimJoint453.DEF = "hanim_r_talocalcaneonavicular"
HAnimJoint453.center = [0,1,0]
HAnimJoint453.ulimit = [0,0,0]
HAnimJoint453.llimit = [0,0,0]
HAnimSegment454 = x3d.HAnimSegment()
HAnimSegment454.name = "r_navicular"
HAnimSegment454.DEF = "hanim_r_navicular"
Transform455 = x3d.Transform()
"""Empty Transform"""
Transform456 = x3d.Transform()
"""Empty Transform"""
Shape457 = x3d.Shape()
Shape457.USE = "HAnimJointShape"

Transform456.children.append(Shape457)

Transform455.children.append(Transform456)

HAnimSegment454.children.append(Transform455)
Shape458 = x3d.Shape()
LineSet459 = x3d.LineSet()
LineSet459.vertexCount = [2]
Coordinate460 = x3d.Coordinate()

LineSet459.coord = Coordinate460
"""from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2"""
ColorRGBA461 = x3d.ColorRGBA()
ColorRGBA461.USE = "HAnimSegmentLineColorRGBA"

LineSet459.color = ColorRGBA461

Shape458.geometry = LineSet459

HAnimSegment454.children.append(Shape458)
Shape462 = x3d.Shape()
LineSet463 = x3d.LineSet()
LineSet463.vertexCount = [2]
Coordinate464 = x3d.Coordinate()

LineSet463.coord = Coordinate464
"""from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2"""
ColorRGBA465 = x3d.ColorRGBA()
ColorRGBA465.USE = "HAnimSegmentLineColorRGBA"

LineSet463.color = ColorRGBA465

Shape462.geometry = LineSet463

HAnimSegment454.children.append(Shape462)
Shape466 = x3d.Shape()
LineSet467 = x3d.LineSet()
LineSet467.vertexCount = [2]
Coordinate468 = x3d.Coordinate()

LineSet467.coord = Coordinate468
"""from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2"""
ColorRGBA469 = x3d.ColorRGBA()
ColorRGBA469.USE = "HAnimSegmentLineColorRGBA"

LineSet467.color = ColorRGBA469

Shape466.geometry = LineSet467

HAnimSegment454.children.append(Shape466)

HAnimJoint453.children.append(HAnimSegment454)
HAnimJoint470 = x3d.HAnimJoint()
HAnimJoint470.name = "r_cuneonavicular_1"
HAnimJoint470.DEF = "hanim_r_cuneonavicular_1"
HAnimJoint470.center = [0,1,0]
HAnimJoint470.ulimit = [0,0,0]
HAnimJoint470.llimit = [0,0,0]
HAnimSegment471 = x3d.HAnimSegment()
HAnimSegment471.name = "r_cuneiform_1"
HAnimSegment471.DEF = "hanim_r_cuneiform_1"
Transform472 = x3d.Transform()
"""Empty Transform"""
Transform473 = x3d.Transform()
"""Empty Transform"""
Shape474 = x3d.Shape()
Shape474.USE = "HAnimJointShape"

Transform473.children.append(Shape474)

Transform472.children.append(Transform473)

HAnimSegment471.children.append(Transform472)
Shape475 = x3d.Shape()
LineSet476 = x3d.LineSet()
LineSet476.vertexCount = [2]
Coordinate477 = x3d.Coordinate()

LineSet476.coord = Coordinate477
"""from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2"""
ColorRGBA478 = x3d.ColorRGBA()
ColorRGBA478.USE = "HAnimSegmentLineColorRGBA"

LineSet476.color = ColorRGBA478

Shape475.geometry = LineSet476

HAnimSegment471.children.append(Shape475)

HAnimJoint470.children.append(HAnimSegment471)
HAnimJoint479 = x3d.HAnimJoint()
HAnimJoint479.name = "r_tarsometatarsal_1"
HAnimJoint479.DEF = "hanim_r_tarsometatarsal_1"
HAnimJoint479.center = [0,1,0]
HAnimJoint479.ulimit = [0,0,0]
HAnimJoint479.llimit = [0,0,0]
HAnimSegment480 = x3d.HAnimSegment()
HAnimSegment480.name = "r_metatarsal_1"
HAnimSegment480.DEF = "hanim_r_metatarsal_1"
Transform481 = x3d.Transform()
"""Empty Transform"""
Transform482 = x3d.Transform()
"""Empty Transform"""
Shape483 = x3d.Shape()
Shape483.USE = "HAnimJointShape"

Transform482.children.append(Shape483)

Transform481.children.append(Transform482)

HAnimSegment480.children.append(Transform481)
Shape484 = x3d.Shape()
LineSet485 = x3d.LineSet()
LineSet485.vertexCount = [2]
Coordinate486 = x3d.Coordinate()

LineSet485.coord = Coordinate486
"""from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2"""
ColorRGBA487 = x3d.ColorRGBA()
ColorRGBA487.USE = "HAnimSegmentLineColorRGBA"

LineSet485.color = ColorRGBA487

Shape484.geometry = LineSet485

HAnimSegment480.children.append(Shape484)
HAnimSite488 = x3d.HAnimSite()
HAnimSite488.name = "r_metatarsal_phalanx_1_pt"
HAnimSite488.DEF = "hanim_r_metatarsal_phalanx_1_pt"
HAnimSite488.translation = [0,1,0]
TouchSensor489 = x3d.TouchSensor()
TouchSensor489.description = "HAnimSite r_metatarsal_phalanx_1_pt"

HAnimSite488.children.append(TouchSensor489)
Shape490 = x3d.Shape()
Shape490.USE = "HAnimSiteShape"

HAnimSite488.children.append(Shape490)

HAnimSegment480.children.append(HAnimSite488)

HAnimJoint479.children.append(HAnimSegment480)
HAnimJoint491 = x3d.HAnimJoint()
HAnimJoint491.name = "r_metatarsophalangeal_1"
HAnimJoint491.DEF = "hanim_r_metatarsophalangeal_1"
HAnimJoint491.center = [0,1,0]
HAnimJoint491.ulimit = [0,0,0]
HAnimJoint491.llimit = [0,0,0]
HAnimSegment492 = x3d.HAnimSegment()
HAnimSegment492.name = "r_tarsal_proximal_phalanx_1"
HAnimSegment492.DEF = "hanim_r_tarsal_proximal_phalanx_1"
Transform493 = x3d.Transform()
"""Empty Transform"""
Transform494 = x3d.Transform()
"""Empty Transform"""
Shape495 = x3d.Shape()
Shape495.USE = "HAnimJointShape"

Transform494.children.append(Shape495)

Transform493.children.append(Transform494)

HAnimSegment492.children.append(Transform493)
Shape496 = x3d.Shape()
LineSet497 = x3d.LineSet()
LineSet497.vertexCount = [2]
Coordinate498 = x3d.Coordinate()

LineSet497.coord = Coordinate498
"""from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2"""
ColorRGBA499 = x3d.ColorRGBA()
ColorRGBA499.USE = "HAnimSegmentLineColorRGBA"

LineSet497.color = ColorRGBA499

Shape496.geometry = LineSet497

HAnimSegment492.children.append(Shape496)
HAnimSite500 = x3d.HAnimSite()
HAnimSite500.name = "r_tarsal_distal_phalanx_1_tip"
HAnimSite500.DEF = "hanim_r_tarsal_distal_phalanx_1_tip"
HAnimSite500.translation = [0.1,-1.05,0]
TouchSensor501 = x3d.TouchSensor()
TouchSensor501.description = "HAnimSite r_tarsal_distal_phalanx_1_tip"

HAnimSite500.children.append(TouchSensor501)
Shape502 = x3d.Shape()
Shape502.USE = "HAnimSiteShape"

HAnimSite500.children.append(Shape502)

HAnimSegment492.children.append(HAnimSite500)

HAnimJoint491.children.append(HAnimSegment492)
HAnimJoint503 = x3d.HAnimJoint()
HAnimJoint503.name = "r_tarsal_interphalangeal_1"
HAnimJoint503.DEF = "hanim_r_tarsal_interphalangeal_1"
HAnimJoint503.center = [0,1,0]
HAnimJoint503.ulimit = [0,0,0]
HAnimJoint503.llimit = [0,0,0]

HAnimJoint491.children.append(HAnimJoint503)

HAnimJoint479.children.append(HAnimJoint491)

HAnimJoint470.children.append(HAnimJoint479)

HAnimJoint453.children.append(HAnimJoint470)
HAnimJoint504 = x3d.HAnimJoint()
HAnimJoint504.name = "r_cuneonavicular_2"
HAnimJoint504.DEF = "hanim_r_cuneonavicular_2"
HAnimJoint504.center = [0,1,0]
HAnimJoint504.ulimit = [0,0,0]
HAnimJoint504.llimit = [0,0,0]
HAnimSegment505 = x3d.HAnimSegment()
HAnimSegment505.name = "r_cuneiform_2"
HAnimSegment505.DEF = "hanim_r_cuneiform_2"
Transform506 = x3d.Transform()
"""Empty Transform"""
Transform507 = x3d.Transform()
"""Empty Transform"""
Shape508 = x3d.Shape()
Shape508.USE = "HAnimJointShape"

Transform507.children.append(Shape508)

Transform506.children.append(Transform507)

HAnimSegment505.children.append(Transform506)
Shape509 = x3d.Shape()
LineSet510 = x3d.LineSet()
LineSet510.vertexCount = [2]
Coordinate511 = x3d.Coordinate()

LineSet510.coord = Coordinate511
"""from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2"""
ColorRGBA512 = x3d.ColorRGBA()
ColorRGBA512.USE = "HAnimSegmentLineColorRGBA"

LineSet510.color = ColorRGBA512

Shape509.geometry = LineSet510

HAnimSegment505.children.append(Shape509)

HAnimJoint504.children.append(HAnimSegment505)
HAnimJoint513 = x3d.HAnimJoint()
HAnimJoint513.name = "r_tarsometatarsal_2"
HAnimJoint513.DEF = "hanim_r_tarsometatarsal_2"
HAnimJoint513.center = [0,1,0]
HAnimJoint513.ulimit = [0,0,0]
HAnimJoint513.llimit = [0,0,0]
HAnimSegment514 = x3d.HAnimSegment()
HAnimSegment514.name = "r_metatarsal_2"
HAnimSegment514.DEF = "hanim_r_metatarsal_2"
Transform515 = x3d.Transform()
"""Empty Transform"""
Transform516 = x3d.Transform()
"""Empty Transform"""
Shape517 = x3d.Shape()
Shape517.USE = "HAnimJointShape"

Transform516.children.append(Shape517)

Transform515.children.append(Transform516)

HAnimSegment514.children.append(Transform515)
Shape518 = x3d.Shape()
LineSet519 = x3d.LineSet()
LineSet519.vertexCount = [2]
Coordinate520 = x3d.Coordinate()

LineSet519.coord = Coordinate520
"""from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2"""
ColorRGBA521 = x3d.ColorRGBA()
ColorRGBA521.USE = "HAnimSegmentLineColorRGBA"

LineSet519.color = ColorRGBA521

Shape518.geometry = LineSet519

HAnimSegment514.children.append(Shape518)

HAnimJoint513.children.append(HAnimSegment514)
HAnimJoint522 = x3d.HAnimJoint()
HAnimJoint522.name = "r_metatarsophalangeal_2"
HAnimJoint522.DEF = "hanim_r_metatarsophalangeal_2"
HAnimJoint522.center = [0,1,0]
HAnimJoint522.ulimit = [0,0,0]
HAnimJoint522.llimit = [0,0,0]
HAnimSegment523 = x3d.HAnimSegment()
HAnimSegment523.name = "r_tarsal_proximal_phalanx_2"
HAnimSegment523.DEF = "hanim_r_tarsal_proximal_phalanx_2"
Transform524 = x3d.Transform()
"""Empty Transform"""
Transform525 = x3d.Transform()
"""Empty Transform"""
Shape526 = x3d.Shape()
Shape526.USE = "HAnimJointShape"

Transform525.children.append(Shape526)

Transform524.children.append(Transform525)

HAnimSegment523.children.append(Transform524)
Shape527 = x3d.Shape()
LineSet528 = x3d.LineSet()
LineSet528.vertexCount = [2]
Coordinate529 = x3d.Coordinate()

LineSet528.coord = Coordinate529
"""from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2"""
ColorRGBA530 = x3d.ColorRGBA()
ColorRGBA530.USE = "HAnimSegmentLineColorRGBA"

LineSet528.color = ColorRGBA530

Shape527.geometry = LineSet528

HAnimSegment523.children.append(Shape527)

HAnimJoint522.children.append(HAnimSegment523)
HAnimJoint531 = x3d.HAnimJoint()
HAnimJoint531.name = "r_tarsal_proximal_interphalangeal_2"
HAnimJoint531.DEF = "hanim_r_tarsal_proximal_interphalangeal_2"
HAnimJoint531.center = [0,1,0]
HAnimJoint531.ulimit = [0,0,0]
HAnimJoint531.llimit = [0,0,0]
HAnimSegment532 = x3d.HAnimSegment()
HAnimSegment532.name = "r_tarsal_middle_phalanx_2"
HAnimSegment532.DEF = "hanim_r_tarsal_middle_phalanx_2"
Transform533 = x3d.Transform()
"""Empty Transform"""
Transform534 = x3d.Transform()
"""Empty Transform"""
Shape535 = x3d.Shape()
Shape535.USE = "HAnimJointShape"

Transform534.children.append(Shape535)

Transform533.children.append(Transform534)

HAnimSegment532.children.append(Transform533)
Shape536 = x3d.Shape()
LineSet537 = x3d.LineSet()
LineSet537.vertexCount = [2]
Coordinate538 = x3d.Coordinate()

LineSet537.coord = Coordinate538
"""from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2"""
ColorRGBA539 = x3d.ColorRGBA()
ColorRGBA539.USE = "HAnimSegmentLineColorRGBA"

LineSet537.color = ColorRGBA539

Shape536.geometry = LineSet537

HAnimSegment532.children.append(Shape536)
HAnimSite540 = x3d.HAnimSite()
HAnimSite540.name = "r_tarsal_distal_phalanx_2_tip"
HAnimSite540.DEF = "hanim_r_tarsal_distal_phalanx_2_tip"
HAnimSite540.translation = [-0.05,-1.12,0]
TouchSensor541 = x3d.TouchSensor()
TouchSensor541.description = "HAnimSite r_tarsal_distal_phalanx_2_tip"

HAnimSite540.children.append(TouchSensor541)
Shape542 = x3d.Shape()
Shape542.USE = "HAnimSiteShape"

HAnimSite540.children.append(Shape542)

HAnimSegment532.children.append(HAnimSite540)

HAnimJoint531.children.append(HAnimSegment532)
HAnimJoint543 = x3d.HAnimJoint()
HAnimJoint543.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint543.DEF = "hanim_r_tarsal_distal_interphalangeal_2"
HAnimJoint543.center = [0,1,0]
HAnimJoint543.ulimit = [0,0,0]
HAnimJoint543.llimit = [0,0,0]

HAnimJoint531.children.append(HAnimJoint543)

HAnimJoint522.children.append(HAnimJoint531)

HAnimJoint513.children.append(HAnimJoint522)

HAnimJoint504.children.append(HAnimJoint513)

HAnimJoint453.children.append(HAnimJoint504)
HAnimJoint544 = x3d.HAnimJoint()
HAnimJoint544.name = "r_cuneonavicular_3"
HAnimJoint544.DEF = "hanim_r_cuneonavicular_3"
HAnimJoint544.center = [0,1,0]
HAnimJoint544.ulimit = [0,0,0]
HAnimJoint544.llimit = [0,0,0]
HAnimSegment545 = x3d.HAnimSegment()
HAnimSegment545.name = "r_cuneiform_3"
HAnimSegment545.DEF = "hanim_r_cuneiform_3"
Transform546 = x3d.Transform()
"""Empty Transform"""
Transform547 = x3d.Transform()
"""Empty Transform"""
Shape548 = x3d.Shape()
Shape548.USE = "HAnimJointShape"

Transform547.children.append(Shape548)

Transform546.children.append(Transform547)

HAnimSegment545.children.append(Transform546)
Shape549 = x3d.Shape()
LineSet550 = x3d.LineSet()
LineSet550.vertexCount = [2]
Coordinate551 = x3d.Coordinate()

LineSet550.coord = Coordinate551
"""from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2"""
ColorRGBA552 = x3d.ColorRGBA()
ColorRGBA552.USE = "HAnimSegmentLineColorRGBA"

LineSet550.color = ColorRGBA552

Shape549.geometry = LineSet550

HAnimSegment545.children.append(Shape549)

HAnimJoint544.children.append(HAnimSegment545)
HAnimJoint553 = x3d.HAnimJoint()
HAnimJoint553.name = "r_tarsometatarsal_3"
HAnimJoint553.DEF = "hanim_r_tarsometatarsal_3"
HAnimJoint553.center = [0,1,0]
HAnimJoint553.ulimit = [0,0,0]
HAnimJoint553.llimit = [0,0,0]
HAnimSegment554 = x3d.HAnimSegment()
HAnimSegment554.name = "r_metatarsal_3"
HAnimSegment554.DEF = "hanim_r_metatarsal_3"
Transform555 = x3d.Transform()
"""Empty Transform"""
Transform556 = x3d.Transform()
"""Empty Transform"""
Shape557 = x3d.Shape()
Shape557.USE = "HAnimJointShape"

Transform556.children.append(Shape557)

Transform555.children.append(Transform556)

HAnimSegment554.children.append(Transform555)
Shape558 = x3d.Shape()
LineSet559 = x3d.LineSet()
LineSet559.vertexCount = [2]
Coordinate560 = x3d.Coordinate()

LineSet559.coord = Coordinate560
"""from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2"""
ColorRGBA561 = x3d.ColorRGBA()
ColorRGBA561.USE = "HAnimSegmentLineColorRGBA"

LineSet559.color = ColorRGBA561

Shape558.geometry = LineSet559

HAnimSegment554.children.append(Shape558)

HAnimJoint553.children.append(HAnimSegment554)
HAnimJoint562 = x3d.HAnimJoint()
HAnimJoint562.name = "r_metatarsophalangeal_3"
HAnimJoint562.DEF = "hanim_r_metatarsophalangeal_3"
HAnimJoint562.center = [0,1,0]
HAnimJoint562.ulimit = [0,0,0]
HAnimJoint562.llimit = [0,0,0]
HAnimSegment563 = x3d.HAnimSegment()
HAnimSegment563.name = "r_tarsal_proximal_phalanx_3"
HAnimSegment563.DEF = "hanim_r_tarsal_proximal_phalanx_3"
Transform564 = x3d.Transform()
"""Empty Transform"""
Transform565 = x3d.Transform()
"""Empty Transform"""
Shape566 = x3d.Shape()
Shape566.USE = "HAnimJointShape"

Transform565.children.append(Shape566)

Transform564.children.append(Transform565)

HAnimSegment563.children.append(Transform564)
Shape567 = x3d.Shape()
LineSet568 = x3d.LineSet()
LineSet568.vertexCount = [2]
Coordinate569 = x3d.Coordinate()

LineSet568.coord = Coordinate569
"""from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2"""
ColorRGBA570 = x3d.ColorRGBA()
ColorRGBA570.USE = "HAnimSegmentLineColorRGBA"

LineSet568.color = ColorRGBA570

Shape567.geometry = LineSet568

HAnimSegment563.children.append(Shape567)

HAnimJoint562.children.append(HAnimSegment563)
HAnimJoint571 = x3d.HAnimJoint()
HAnimJoint571.name = "r_tarsal_proximal_interphalangeal_3"
HAnimJoint571.DEF = "hanim_r_tarsal_proximal_interphalangeal_3"
HAnimJoint571.center = [0,1,0]
HAnimJoint571.ulimit = [0,0,0]
HAnimJoint571.llimit = [0,0,0]
HAnimSegment572 = x3d.HAnimSegment()
HAnimSegment572.name = "r_tarsal_middle_phalanx_3"
HAnimSegment572.DEF = "hanim_r_tarsal_middle_phalanx_3"
Transform573 = x3d.Transform()
"""Empty Transform"""
Transform574 = x3d.Transform()
"""Empty Transform"""
Shape575 = x3d.Shape()
Shape575.USE = "HAnimJointShape"

Transform574.children.append(Shape575)

Transform573.children.append(Transform574)

HAnimSegment572.children.append(Transform573)
Shape576 = x3d.Shape()
LineSet577 = x3d.LineSet()
LineSet577.vertexCount = [2]
Coordinate578 = x3d.Coordinate()

LineSet577.coord = Coordinate578
"""from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2"""
ColorRGBA579 = x3d.ColorRGBA()
ColorRGBA579.USE = "HAnimSegmentLineColorRGBA"

LineSet577.color = ColorRGBA579

Shape576.geometry = LineSet577

HAnimSegment572.children.append(Shape576)
HAnimSite580 = x3d.HAnimSite()
HAnimSite580.name = "r_tarsal_distal_phalanx_3_tip"
HAnimSite580.DEF = "hanim_r_tarsal_distal_phalanx_3_tip"
HAnimSite580.translation = [-0.15,-1.13,0]
TouchSensor581 = x3d.TouchSensor()
TouchSensor581.description = "HAnimSite r_tarsal_distal_phalanx_3_tip"

HAnimSite580.children.append(TouchSensor581)
Shape582 = x3d.Shape()
Shape582.USE = "HAnimSiteShape"

HAnimSite580.children.append(Shape582)

HAnimSegment572.children.append(HAnimSite580)

HAnimJoint571.children.append(HAnimSegment572)
HAnimJoint583 = x3d.HAnimJoint()
HAnimJoint583.name = "r_tarsal_distal_interphalangeal_3"
HAnimJoint583.DEF = "hanim_r_tarsal_distal_interphalangeal_3"
HAnimJoint583.center = [0,1,0]
HAnimJoint583.ulimit = [0,0,0]
HAnimJoint583.llimit = [0,0,0]

HAnimJoint571.children.append(HAnimJoint583)

HAnimJoint562.children.append(HAnimJoint571)

HAnimJoint553.children.append(HAnimJoint562)

HAnimJoint544.children.append(HAnimJoint553)

HAnimJoint453.children.append(HAnimJoint544)

HAnimJoint440.children.append(HAnimJoint453)
HAnimJoint584 = x3d.HAnimJoint()
HAnimJoint584.name = "r_calcaneocuboid"
HAnimJoint584.DEF = "hanim_r_calcaneocuboid"
HAnimJoint584.center = [0,1,0]
HAnimJoint584.ulimit = [0,0,0]
HAnimJoint584.llimit = [0,0,0]
HAnimSegment585 = x3d.HAnimSegment()
HAnimSegment585.name = "r_calcaneus"
HAnimSegment585.DEF = "hanim_r_calcaneus"
Transform586 = x3d.Transform()
"""Empty Transform"""
Transform587 = x3d.Transform()
"""Empty Transform"""
Shape588 = x3d.Shape()
Shape588.USE = "HAnimJointShape"

Transform587.children.append(Shape588)

Transform586.children.append(Transform587)

HAnimSegment585.children.append(Transform586)
Shape589 = x3d.Shape()
LineSet590 = x3d.LineSet()
LineSet590.vertexCount = [2]
Coordinate591 = x3d.Coordinate()

LineSet590.coord = Coordinate591
"""from r_calcaneocuboid to r_transversetarsal vertices 2"""
ColorRGBA592 = x3d.ColorRGBA()
ColorRGBA592.USE = "HAnimSegmentLineColorRGBA"

LineSet590.color = ColorRGBA592

Shape589.geometry = LineSet590

HAnimSegment585.children.append(Shape589)

HAnimJoint584.children.append(HAnimSegment585)
HAnimJoint593 = x3d.HAnimJoint()
HAnimJoint593.name = "r_transversetarsal"
HAnimJoint593.DEF = "hanim_r_transversetarsal"
HAnimJoint593.center = [0,1,0]
HAnimJoint593.ulimit = [0,0,0]
HAnimJoint593.llimit = [0,0,0]
HAnimSegment594 = x3d.HAnimSegment()
HAnimSegment594.name = "r_cuboid"
HAnimSegment594.DEF = "hanim_r_cuboid"
Transform595 = x3d.Transform()
"""Empty Transform"""
Transform596 = x3d.Transform()
"""Empty Transform"""
Shape597 = x3d.Shape()
Shape597.USE = "HAnimJointShape"

Transform596.children.append(Shape597)

Transform595.children.append(Transform596)

HAnimSegment594.children.append(Transform595)
Shape598 = x3d.Shape()
LineSet599 = x3d.LineSet()
LineSet599.vertexCount = [2]
Coordinate600 = x3d.Coordinate()

LineSet599.coord = Coordinate600
"""from r_transversetarsal to r_tarsometatarsal_4 vertices 2"""
ColorRGBA601 = x3d.ColorRGBA()
ColorRGBA601.USE = "HAnimSegmentLineColorRGBA"

LineSet599.color = ColorRGBA601

Shape598.geometry = LineSet599

HAnimSegment594.children.append(Shape598)
Shape602 = x3d.Shape()
LineSet603 = x3d.LineSet()
LineSet603.vertexCount = [2]
Coordinate604 = x3d.Coordinate()

LineSet603.coord = Coordinate604
"""from r_transversetarsal to r_tarsometatarsal_5 vertices 2"""
ColorRGBA605 = x3d.ColorRGBA()
ColorRGBA605.USE = "HAnimSegmentLineColorRGBA"

LineSet603.color = ColorRGBA605

Shape602.geometry = LineSet603

HAnimSegment594.children.append(Shape602)

HAnimJoint593.children.append(HAnimSegment594)
HAnimJoint606 = x3d.HAnimJoint()
HAnimJoint606.name = "r_tarsometatarsal_4"
HAnimJoint606.DEF = "hanim_r_tarsometatarsal_4"
HAnimJoint606.center = [0,1,0]
HAnimJoint606.ulimit = [0,0,0]
HAnimJoint606.llimit = [0,0,0]
HAnimSegment607 = x3d.HAnimSegment()
HAnimSegment607.name = "r_metatarsal_4"
HAnimSegment607.DEF = "hanim_r_metatarsal_4"
Transform608 = x3d.Transform()
"""Empty Transform"""
Transform609 = x3d.Transform()
"""Empty Transform"""
Shape610 = x3d.Shape()
Shape610.USE = "HAnimJointShape"

Transform609.children.append(Shape610)

Transform608.children.append(Transform609)

HAnimSegment607.children.append(Transform608)
Shape611 = x3d.Shape()
LineSet612 = x3d.LineSet()
LineSet612.vertexCount = [2]
Coordinate613 = x3d.Coordinate()

LineSet612.coord = Coordinate613
"""from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2"""
ColorRGBA614 = x3d.ColorRGBA()
ColorRGBA614.USE = "HAnimSegmentLineColorRGBA"

LineSet612.color = ColorRGBA614

Shape611.geometry = LineSet612

HAnimSegment607.children.append(Shape611)

HAnimJoint606.children.append(HAnimSegment607)
HAnimJoint615 = x3d.HAnimJoint()
HAnimJoint615.name = "r_metatarsophalangeal_4"
HAnimJoint615.DEF = "hanim_r_metatarsophalangeal_4"
HAnimJoint615.center = [0,1,0]
HAnimJoint615.ulimit = [0,0,0]
HAnimJoint615.llimit = [0,0,0]
HAnimSegment616 = x3d.HAnimSegment()
HAnimSegment616.name = "r_tarsal_proximal_phalanx_4"
HAnimSegment616.DEF = "hanim_r_tarsal_proximal_phalanx_4"
Transform617 = x3d.Transform()
"""Empty Transform"""
Transform618 = x3d.Transform()
"""Empty Transform"""
Shape619 = x3d.Shape()
Shape619.USE = "HAnimJointShape"

Transform618.children.append(Shape619)

Transform617.children.append(Transform618)

HAnimSegment616.children.append(Transform617)
Shape620 = x3d.Shape()
LineSet621 = x3d.LineSet()
LineSet621.vertexCount = [2]
Coordinate622 = x3d.Coordinate()

LineSet621.coord = Coordinate622
"""from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2"""
ColorRGBA623 = x3d.ColorRGBA()
ColorRGBA623.USE = "HAnimSegmentLineColorRGBA"

LineSet621.color = ColorRGBA623

Shape620.geometry = LineSet621

HAnimSegment616.children.append(Shape620)

HAnimJoint615.children.append(HAnimSegment616)
HAnimJoint624 = x3d.HAnimJoint()
HAnimJoint624.name = "r_tarsal_proximal_interphalangeal_4"
HAnimJoint624.DEF = "hanim_r_tarsal_proximal_interphalangeal_4"
HAnimJoint624.center = [0,1,0]
HAnimJoint624.ulimit = [0,0,0]
HAnimJoint624.llimit = [0,0,0]
HAnimSegment625 = x3d.HAnimSegment()
HAnimSegment625.name = "r_tarsal_middle_phalanx_4"
HAnimSegment625.DEF = "hanim_r_tarsal_middle_phalanx_4"
Transform626 = x3d.Transform()
"""Empty Transform"""
Transform627 = x3d.Transform()
"""Empty Transform"""
Shape628 = x3d.Shape()
Shape628.USE = "HAnimJointShape"

Transform627.children.append(Shape628)

Transform626.children.append(Transform627)

HAnimSegment625.children.append(Transform626)
Shape629 = x3d.Shape()
LineSet630 = x3d.LineSet()
LineSet630.vertexCount = [2]
Coordinate631 = x3d.Coordinate()

LineSet630.coord = Coordinate631
"""from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2"""
ColorRGBA632 = x3d.ColorRGBA()
ColorRGBA632.USE = "HAnimSegmentLineColorRGBA"

LineSet630.color = ColorRGBA632

Shape629.geometry = LineSet630

HAnimSegment625.children.append(Shape629)
HAnimSite633 = x3d.HAnimSite()
HAnimSite633.name = "r_tarsal_distal_phalanx_4_tip"
HAnimSite633.DEF = "hanim_r_tarsal_distal_phalanx_4_tip"
HAnimSite633.translation = [-0.25,-1.1,0]
TouchSensor634 = x3d.TouchSensor()
TouchSensor634.description = "HAnimSite r_tarsal_distal_phalanx_4_tip"

HAnimSite633.children.append(TouchSensor634)
Shape635 = x3d.Shape()
Shape635.USE = "HAnimSiteShape"

HAnimSite633.children.append(Shape635)

HAnimSegment625.children.append(HAnimSite633)

HAnimJoint624.children.append(HAnimSegment625)
HAnimJoint636 = x3d.HAnimJoint()
HAnimJoint636.name = "r_tarsal_distal_interphalangeal_4"
HAnimJoint636.DEF = "hanim_r_tarsal_distal_interphalangeal_4"
HAnimJoint636.center = [0,1,0]
HAnimJoint636.ulimit = [0,0,0]
HAnimJoint636.llimit = [0,0,0]

HAnimJoint624.children.append(HAnimJoint636)

HAnimJoint615.children.append(HAnimJoint624)

HAnimJoint606.children.append(HAnimJoint615)

HAnimJoint593.children.append(HAnimJoint606)
HAnimJoint637 = x3d.HAnimJoint()
HAnimJoint637.name = "r_tarsometatarsal_5"
HAnimJoint637.DEF = "hanim_r_tarsometatarsal_5"
HAnimJoint637.center = [0,1,0]
HAnimJoint637.ulimit = [0,0,0]
HAnimJoint637.llimit = [0,0,0]
HAnimSegment638 = x3d.HAnimSegment()
HAnimSegment638.name = "r_metatarsal_5"
HAnimSegment638.DEF = "hanim_r_metatarsal_5"
Transform639 = x3d.Transform()
"""Empty Transform"""
Transform640 = x3d.Transform()
"""Empty Transform"""
Shape641 = x3d.Shape()
Shape641.USE = "HAnimJointShape"

Transform640.children.append(Shape641)

Transform639.children.append(Transform640)

HAnimSegment638.children.append(Transform639)
Shape642 = x3d.Shape()
LineSet643 = x3d.LineSet()
LineSet643.vertexCount = [2]
Coordinate644 = x3d.Coordinate()

LineSet643.coord = Coordinate644
"""from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2"""
ColorRGBA645 = x3d.ColorRGBA()
ColorRGBA645.USE = "HAnimSegmentLineColorRGBA"

LineSet643.color = ColorRGBA645

Shape642.geometry = LineSet643

HAnimSegment638.children.append(Shape642)
HAnimSite646 = x3d.HAnimSite()
HAnimSite646.name = "r_metatarsal_phalanx_5_pt"
HAnimSite646.DEF = "hanim_r_metatarsal_phalanx_5_pt"
HAnimSite646.translation = [0,1,0]
TouchSensor647 = x3d.TouchSensor()
TouchSensor647.description = "HAnimSite r_metatarsal_phalanx_5_pt"

HAnimSite646.children.append(TouchSensor647)
Shape648 = x3d.Shape()
Shape648.USE = "HAnimSiteShape"

HAnimSite646.children.append(Shape648)

HAnimSegment638.children.append(HAnimSite646)

HAnimJoint637.children.append(HAnimSegment638)
HAnimJoint649 = x3d.HAnimJoint()
HAnimJoint649.name = "r_metatarsophalangeal_5"
HAnimJoint649.DEF = "hanim_r_metatarsophalangeal_5"
HAnimJoint649.center = [0,1,0]
HAnimJoint649.ulimit = [0,0,0]
HAnimJoint649.llimit = [0,0,0]
HAnimSegment650 = x3d.HAnimSegment()
HAnimSegment650.name = "r_tarsal_proximal_phalanx_5"
HAnimSegment650.DEF = "hanim_r_tarsal_proximal_phalanx_5"
Transform651 = x3d.Transform()
"""Empty Transform"""
Transform652 = x3d.Transform()
"""Empty Transform"""
Shape653 = x3d.Shape()
Shape653.USE = "HAnimJointShape"

Transform652.children.append(Shape653)

Transform651.children.append(Transform652)

HAnimSegment650.children.append(Transform651)
Shape654 = x3d.Shape()
LineSet655 = x3d.LineSet()
LineSet655.vertexCount = [2]
Coordinate656 = x3d.Coordinate()

LineSet655.coord = Coordinate656
"""from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2"""
ColorRGBA657 = x3d.ColorRGBA()
ColorRGBA657.USE = "HAnimSegmentLineColorRGBA"

LineSet655.color = ColorRGBA657

Shape654.geometry = LineSet655

HAnimSegment650.children.append(Shape654)

HAnimJoint649.children.append(HAnimSegment650)
HAnimJoint658 = x3d.HAnimJoint()
HAnimJoint658.name = "r_tarsal_proximal_interphalangeal_5"
HAnimJoint658.DEF = "hanim_r_tarsal_proximal_interphalangeal_5"
HAnimJoint658.center = [0,1,0]
HAnimJoint658.ulimit = [0,0,0]
HAnimJoint658.llimit = [0,0,0]
HAnimSegment659 = x3d.HAnimSegment()
HAnimSegment659.name = "r_tarsal_middle_phalanx_5"
HAnimSegment659.DEF = "hanim_r_tarsal_middle_phalanx_5"
Transform660 = x3d.Transform()
"""Empty Transform"""
Transform661 = x3d.Transform()
"""Empty Transform"""
Shape662 = x3d.Shape()
Shape662.USE = "HAnimJointShape"

Transform661.children.append(Shape662)

Transform660.children.append(Transform661)

HAnimSegment659.children.append(Transform660)
Shape663 = x3d.Shape()
LineSet664 = x3d.LineSet()
LineSet664.vertexCount = [2]
Coordinate665 = x3d.Coordinate()

LineSet664.coord = Coordinate665
"""from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2"""
ColorRGBA666 = x3d.ColorRGBA()
ColorRGBA666.USE = "HAnimSegmentLineColorRGBA"

LineSet664.color = ColorRGBA666

Shape663.geometry = LineSet664

HAnimSegment659.children.append(Shape663)
HAnimSite667 = x3d.HAnimSite()
HAnimSite667.name = "r_tarsal_distal_phalanx_5_tip"
HAnimSite667.DEF = "hanim_r_tarsal_distal_phalanx_5_tip"
HAnimSite667.translation = [-0.34,-1.05,0]
TouchSensor668 = x3d.TouchSensor()
TouchSensor668.description = "HAnimSite r_tarsal_distal_phalanx_5_tip"

HAnimSite667.children.append(TouchSensor668)
Shape669 = x3d.Shape()
Shape669.USE = "HAnimSiteShape"

HAnimSite667.children.append(Shape669)

HAnimSegment659.children.append(HAnimSite667)

HAnimJoint658.children.append(HAnimSegment659)
HAnimJoint670 = x3d.HAnimJoint()
HAnimJoint670.name = "r_tarsal_distal_interphalangeal_5"
HAnimJoint670.DEF = "hanim_r_tarsal_distal_interphalangeal_5"
HAnimJoint670.center = [0,1,0]
HAnimJoint670.ulimit = [0,0,0]
HAnimJoint670.llimit = [0,0,0]

HAnimJoint658.children.append(HAnimJoint670)

HAnimJoint649.children.append(HAnimJoint658)

HAnimJoint637.children.append(HAnimJoint649)

HAnimJoint593.children.append(HAnimJoint637)

HAnimJoint584.children.append(HAnimJoint593)

HAnimJoint440.children.append(HAnimJoint584)

HAnimJoint425.children.append(HAnimJoint440)

HAnimJoint407.children.append(HAnimJoint425)

HAnimJoint106.children.append(HAnimJoint407)

HAnimJoint52.children.append(HAnimJoint106)
HAnimJoint671 = x3d.HAnimJoint()
HAnimJoint671.name = "vl5"
HAnimJoint671.DEF = "hanim_vl5"
HAnimJoint671.center = [0.0028,1.0568,-0.0776]
HAnimJoint671.ulimit = [0,0,0]
HAnimJoint671.llimit = [0,0,0]
HAnimSegment672 = x3d.HAnimSegment()
HAnimSegment672.name = "l5"
HAnimSegment672.DEF = "hanim_l5"
Transform673 = x3d.Transform()
"""Empty Transform"""
Transform674 = x3d.Transform()
"""Empty Transform"""
Shape675 = x3d.Shape()
Shape675.USE = "HAnimJointShape"

Transform674.children.append(Shape675)

Transform673.children.append(Transform674)

HAnimSegment672.children.append(Transform673)
Shape676 = x3d.Shape()
LineSet677 = x3d.LineSet()
LineSet677.vertexCount = [2]
Coordinate678 = x3d.Coordinate()

LineSet677.coord = Coordinate678
"""from vl5 to vl4 vertices 2"""
ColorRGBA679 = x3d.ColorRGBA()
ColorRGBA679.USE = "HAnimSegmentLineColorRGBA"

LineSet677.color = ColorRGBA679

Shape676.geometry = LineSet677

HAnimSegment672.children.append(Shape676)

HAnimJoint671.children.append(HAnimSegment672)
HAnimJoint680 = x3d.HAnimJoint()
HAnimJoint680.name = "vl4"
HAnimJoint680.DEF = "hanim_vl4"
HAnimJoint680.center = [0.0035,1.0925,-0.0787]
HAnimJoint680.ulimit = [0,0,0]
HAnimJoint680.llimit = [0,0,0]
HAnimSegment681 = x3d.HAnimSegment()
HAnimSegment681.name = "l4"
HAnimSegment681.DEF = "hanim_l4"
Transform682 = x3d.Transform()
"""Empty Transform"""
Transform683 = x3d.Transform()
"""Empty Transform"""
Shape684 = x3d.Shape()
Shape684.USE = "HAnimJointShape"

Transform683.children.append(Shape684)

Transform682.children.append(Transform683)

HAnimSegment681.children.append(Transform682)
Shape685 = x3d.Shape()
LineSet686 = x3d.LineSet()
LineSet686.vertexCount = [2]
Coordinate687 = x3d.Coordinate()

LineSet686.coord = Coordinate687
"""from vl4 to vl3 vertices 2"""
ColorRGBA688 = x3d.ColorRGBA()
ColorRGBA688.USE = "HAnimSegmentLineColorRGBA"

LineSet686.color = ColorRGBA688

Shape685.geometry = LineSet686

HAnimSegment681.children.append(Shape685)

HAnimJoint680.children.append(HAnimSegment681)
HAnimJoint689 = x3d.HAnimJoint()
HAnimJoint689.name = "vl3"
HAnimJoint689.DEF = "hanim_vl3"
HAnimJoint689.center = [0.0041,1.1276,-0.0796]
HAnimJoint689.ulimit = [0,0,0]
HAnimJoint689.llimit = [0,0,0]
HAnimSegment690 = x3d.HAnimSegment()
HAnimSegment690.name = "l3"
HAnimSegment690.DEF = "hanim_l3"
Transform691 = x3d.Transform()
"""Empty Transform"""
Transform692 = x3d.Transform()
"""Empty Transform"""
Shape693 = x3d.Shape()
Shape693.USE = "HAnimJointShape"

Transform692.children.append(Shape693)

Transform691.children.append(Transform692)

HAnimSegment690.children.append(Transform691)
Shape694 = x3d.Shape()
LineSet695 = x3d.LineSet()
LineSet695.vertexCount = [2]
Coordinate696 = x3d.Coordinate()

LineSet695.coord = Coordinate696
"""from vl3 to vl2 vertices 2"""
ColorRGBA697 = x3d.ColorRGBA()
ColorRGBA697.USE = "HAnimSegmentLineColorRGBA"

LineSet695.color = ColorRGBA697

Shape694.geometry = LineSet695

HAnimSegment690.children.append(Shape694)
HAnimSite698 = x3d.HAnimSite()
HAnimSite698.name = "l_rib10_pt"
HAnimSite698.DEF = "hanim_l_rib10_pt"
HAnimSite698.translation = [0.0871,1.1925,0.0992]
TouchSensor699 = x3d.TouchSensor()
TouchSensor699.description = "HAnimSite l_rib10_pt"

HAnimSite698.children.append(TouchSensor699)
Shape700 = x3d.Shape()
Shape700.USE = "HAnimSiteShape"

HAnimSite698.children.append(Shape700)

HAnimSegment690.children.append(HAnimSite698)
HAnimSite701 = x3d.HAnimSite()
HAnimSite701.name = "r_rib10_pt"
HAnimSite701.DEF = "hanim_r_rib10_pt"
HAnimSite701.translation = [-0.0711,1.1941,0.1016]
TouchSensor702 = x3d.TouchSensor()
TouchSensor702.description = "HAnimSite r_rib10_pt"

HAnimSite701.children.append(TouchSensor702)
Shape703 = x3d.Shape()
Shape703.USE = "HAnimSiteShape"

HAnimSite701.children.append(Shape703)

HAnimSegment690.children.append(HAnimSite701)
HAnimSite704 = x3d.HAnimSite()
HAnimSite704.name = "spine_2_middle_back_pt"
HAnimSite704.DEF = "hanim_spine_2_middle_back_pt"
HAnimSite704.translation = [0,1,0]
TouchSensor705 = x3d.TouchSensor()
TouchSensor705.description = "HAnimSite spine_2_middle_back_pt"

HAnimSite704.children.append(TouchSensor705)
Shape706 = x3d.Shape()
Shape706.USE = "HAnimSiteShape"

HAnimSite704.children.append(Shape706)

HAnimSegment690.children.append(HAnimSite704)

HAnimJoint689.children.append(HAnimSegment690)
HAnimJoint707 = x3d.HAnimJoint()
HAnimJoint707.name = "vl2"
HAnimJoint707.DEF = "hanim_vl2"
HAnimJoint707.center = [0.0045,1.1546,-0.08]
HAnimJoint707.ulimit = [0,0,0]
HAnimJoint707.llimit = [0,0,0]
HAnimSegment708 = x3d.HAnimSegment()
HAnimSegment708.name = "l2"
HAnimSegment708.DEF = "hanim_l2"
Transform709 = x3d.Transform()
"""Empty Transform"""
Transform710 = x3d.Transform()
"""Empty Transform"""
Shape711 = x3d.Shape()
Shape711.USE = "HAnimJointShape"

Transform710.children.append(Shape711)

Transform709.children.append(Transform710)

HAnimSegment708.children.append(Transform709)
Shape712 = x3d.Shape()
LineSet713 = x3d.LineSet()
LineSet713.vertexCount = [2]
Coordinate714 = x3d.Coordinate()

LineSet713.coord = Coordinate714
"""from vl2 to vl1 vertices 2"""
ColorRGBA715 = x3d.ColorRGBA()
ColorRGBA715.USE = "HAnimSegmentLineColorRGBA"

LineSet713.color = ColorRGBA715

Shape712.geometry = LineSet713

HAnimSegment708.children.append(Shape712)

HAnimJoint707.children.append(HAnimSegment708)
HAnimJoint716 = x3d.HAnimJoint()
HAnimJoint716.name = "vl1"
HAnimJoint716.DEF = "hanim_vl1"
HAnimJoint716.center = [0.0048,1.1912,-0.0805]
HAnimJoint716.ulimit = [0,0,0]
HAnimJoint716.llimit = [0,0,0]
HAnimSegment717 = x3d.HAnimSegment()
HAnimSegment717.name = "l1"
HAnimSegment717.DEF = "hanim_l1"
Transform718 = x3d.Transform()
"""Empty Transform"""
Transform719 = x3d.Transform()
"""Empty Transform"""
Shape720 = x3d.Shape()
Shape720.USE = "HAnimJointShape"

Transform719.children.append(Shape720)

Transform718.children.append(Transform719)

HAnimSegment717.children.append(Transform718)
Shape721 = x3d.Shape()
LineSet722 = x3d.LineSet()
LineSet722.vertexCount = [2]
Coordinate723 = x3d.Coordinate()

LineSet722.coord = Coordinate723
"""from vl1 to vt12 vertices 2"""
ColorRGBA724 = x3d.ColorRGBA()
ColorRGBA724.USE = "HAnimSegmentLineColorRGBA"

LineSet722.color = ColorRGBA724

Shape721.geometry = LineSet722

HAnimSegment717.children.append(Shape721)

HAnimJoint716.children.append(HAnimSegment717)
HAnimJoint725 = x3d.HAnimJoint()
HAnimJoint725.name = "vt12"
HAnimJoint725.DEF = "hanim_vt12"
HAnimJoint725.center = [0.0051,1.2278,-0.0808]
HAnimJoint725.ulimit = [0,0,0]
HAnimJoint725.llimit = [0,0,0]
HAnimSegment726 = x3d.HAnimSegment()
HAnimSegment726.name = "t12"
HAnimSegment726.DEF = "hanim_t12"
Transform727 = x3d.Transform()
"""Empty Transform"""
Transform728 = x3d.Transform()
"""Empty Transform"""
Shape729 = x3d.Shape()
Shape729.USE = "HAnimJointShape"

Transform728.children.append(Shape729)

Transform727.children.append(Transform728)

HAnimSegment726.children.append(Transform727)
Shape730 = x3d.Shape()
LineSet731 = x3d.LineSet()
LineSet731.vertexCount = [2]
Coordinate732 = x3d.Coordinate()

LineSet731.coord = Coordinate732
"""from vt12 to vt11 vertices 2"""
ColorRGBA733 = x3d.ColorRGBA()
ColorRGBA733.USE = "HAnimSegmentLineColorRGBA"

LineSet731.color = ColorRGBA733

Shape730.geometry = LineSet731

HAnimSegment726.children.append(Shape730)

HAnimJoint725.children.append(HAnimSegment726)
HAnimJoint734 = x3d.HAnimJoint()
HAnimJoint734.name = "vt11"
HAnimJoint734.DEF = "hanim_vt11"
HAnimJoint734.center = [0.0053,1.2679,-0.081]
HAnimJoint734.ulimit = [0,0,0]
HAnimJoint734.llimit = [0,0,0]
HAnimSegment735 = x3d.HAnimSegment()
HAnimSegment735.name = "t11"
HAnimSegment735.DEF = "hanim_t11"
Transform736 = x3d.Transform()
"""Empty Transform"""
Transform737 = x3d.Transform()
"""Empty Transform"""
Shape738 = x3d.Shape()
Shape738.USE = "HAnimJointShape"

Transform737.children.append(Shape738)

Transform736.children.append(Transform737)

HAnimSegment735.children.append(Transform736)
Shape739 = x3d.Shape()
LineSet740 = x3d.LineSet()
LineSet740.vertexCount = [2]
Coordinate741 = x3d.Coordinate()

LineSet740.coord = Coordinate741
"""from vt11 to vt10 vertices 2"""
ColorRGBA742 = x3d.ColorRGBA()
ColorRGBA742.USE = "HAnimSegmentLineColorRGBA"

LineSet740.color = ColorRGBA742

Shape739.geometry = LineSet740

HAnimSegment735.children.append(Shape739)
HAnimSite743 = x3d.HAnimSite()
HAnimSite743.name = "substernale_pt"
HAnimSite743.DEF = "hanim_substernale_pt"
HAnimSite743.translation = [0.0085,1.2995,0.1147]
TouchSensor744 = x3d.TouchSensor()
TouchSensor744.description = "HAnimSite substernale_pt"

HAnimSite743.children.append(TouchSensor744)
Shape745 = x3d.Shape()
Shape745.USE = "HAnimSiteShape"

HAnimSite743.children.append(Shape745)

HAnimSegment735.children.append(HAnimSite743)

HAnimJoint734.children.append(HAnimSegment735)
HAnimJoint746 = x3d.HAnimJoint()
HAnimJoint746.name = "vt10"
HAnimJoint746.DEF = "hanim_vt10"
HAnimJoint746.center = [0.0056,1.2848,-0.0822]
HAnimJoint746.ulimit = [0,0,0]
HAnimJoint746.llimit = [0,0,0]
HAnimSegment747 = x3d.HAnimSegment()
HAnimSegment747.name = "t10"
HAnimSegment747.DEF = "hanim_t10"
Transform748 = x3d.Transform()
"""Empty Transform"""
Transform749 = x3d.Transform()
"""Empty Transform"""
Shape750 = x3d.Shape()
Shape750.USE = "HAnimJointShape"

Transform749.children.append(Shape750)

Transform748.children.append(Transform749)

HAnimSegment747.children.append(Transform748)
Shape751 = x3d.Shape()
LineSet752 = x3d.LineSet()
LineSet752.vertexCount = [2]
Coordinate753 = x3d.Coordinate()

LineSet752.coord = Coordinate753
"""from vt10 to vt9 vertices 2"""
ColorRGBA754 = x3d.ColorRGBA()
ColorRGBA754.USE = "HAnimSegmentLineColorRGBA"

LineSet752.color = ColorRGBA754

Shape751.geometry = LineSet752

HAnimSegment747.children.append(Shape751)
HAnimSite755 = x3d.HAnimSite()
HAnimSite755.name = "l_thelion_pt"
HAnimSite755.DEF = "hanim_l_thelion_pt"
HAnimSite755.translation = [0.0918,1.3382,0.1192]
TouchSensor756 = x3d.TouchSensor()
TouchSensor756.description = "HAnimSite l_thelion_pt"

HAnimSite755.children.append(TouchSensor756)
Shape757 = x3d.Shape()
Shape757.USE = "HAnimSiteShape"

HAnimSite755.children.append(Shape757)

HAnimSegment747.children.append(HAnimSite755)
HAnimSite758 = x3d.HAnimSite()
HAnimSite758.name = "r_thelion_pt"
HAnimSite758.DEF = "hanim_r_thelion_pt"
HAnimSite758.translation = [-0.0736,1.3385,0.1217]
TouchSensor759 = x3d.TouchSensor()
TouchSensor759.description = "HAnimSite r_thelion_pt"

HAnimSite758.children.append(TouchSensor759)
Shape760 = x3d.Shape()
Shape760.USE = "HAnimSiteShape"

HAnimSite758.children.append(Shape760)

HAnimSegment747.children.append(HAnimSite758)

HAnimJoint746.children.append(HAnimSegment747)
HAnimJoint761 = x3d.HAnimJoint()
HAnimJoint761.name = "vt9"
HAnimJoint761.DEF = "hanim_vt9"
HAnimJoint761.center = [0.0057,1.3126,-0.0838]
HAnimJoint761.ulimit = [0,0,0]
HAnimJoint761.llimit = [0,0,0]
HAnimSegment762 = x3d.HAnimSegment()
HAnimSegment762.name = "t9"
HAnimSegment762.DEF = "hanim_t9"
Transform763 = x3d.Transform()
"""Empty Transform"""
Transform764 = x3d.Transform()
"""Empty Transform"""
Shape765 = x3d.Shape()
Shape765.USE = "HAnimJointShape"

Transform764.children.append(Shape765)

Transform763.children.append(Transform764)

HAnimSegment762.children.append(Transform763)
Shape766 = x3d.Shape()
LineSet767 = x3d.LineSet()
LineSet767.vertexCount = [2]
Coordinate768 = x3d.Coordinate()

LineSet767.coord = Coordinate768
"""from vt9 to vt8 vertices 2"""
ColorRGBA769 = x3d.ColorRGBA()
ColorRGBA769.USE = "HAnimSegmentLineColorRGBA"

LineSet767.color = ColorRGBA769

Shape766.geometry = LineSet767

HAnimSegment762.children.append(Shape766)

HAnimJoint761.children.append(HAnimSegment762)
HAnimJoint770 = x3d.HAnimJoint()
HAnimJoint770.name = "vt8"
HAnimJoint770.DEF = "hanim_vt8"
HAnimJoint770.center = [0.0057,1.3382,-0.0845]
HAnimJoint770.ulimit = [0,0,0]
HAnimJoint770.llimit = [0,0,0]
HAnimSegment771 = x3d.HAnimSegment()
HAnimSegment771.name = "t8"
HAnimSegment771.DEF = "hanim_t8"
Transform772 = x3d.Transform()
"""Empty Transform"""
Transform773 = x3d.Transform()
"""Empty Transform"""
Shape774 = x3d.Shape()
Shape774.USE = "HAnimJointShape"

Transform773.children.append(Shape774)

Transform772.children.append(Transform773)

HAnimSegment771.children.append(Transform772)
Shape775 = x3d.Shape()
LineSet776 = x3d.LineSet()
LineSet776.vertexCount = [2]
Coordinate777 = x3d.Coordinate()

LineSet776.coord = Coordinate777
"""from vt8 to vt7 vertices 2"""
ColorRGBA778 = x3d.ColorRGBA()
ColorRGBA778.USE = "HAnimSegmentLineColorRGBA"

LineSet776.color = ColorRGBA778

Shape775.geometry = LineSet776

HAnimSegment771.children.append(Shape775)

HAnimJoint770.children.append(HAnimSegment771)
HAnimJoint779 = x3d.HAnimJoint()
HAnimJoint779.name = "vt7"
HAnimJoint779.DEF = "hanim_vt7"
HAnimJoint779.center = [0.0058,1.3625,-0.0833]
HAnimJoint779.ulimit = [0,0,0]
HAnimJoint779.llimit = [0,0,0]
HAnimSegment780 = x3d.HAnimSegment()
HAnimSegment780.name = "t7"
HAnimSegment780.DEF = "hanim_t7"
Transform781 = x3d.Transform()
"""Empty Transform"""
Transform782 = x3d.Transform()
"""Empty Transform"""
Shape783 = x3d.Shape()
Shape783.USE = "HAnimJointShape"

Transform782.children.append(Shape783)

Transform781.children.append(Transform782)

HAnimSegment780.children.append(Transform781)
Shape784 = x3d.Shape()
LineSet785 = x3d.LineSet()
LineSet785.vertexCount = [2]
Coordinate786 = x3d.Coordinate()

LineSet785.coord = Coordinate786
"""from vt7 to vt6 vertices 2"""
ColorRGBA787 = x3d.ColorRGBA()
ColorRGBA787.USE = "HAnimSegmentLineColorRGBA"

LineSet785.color = ColorRGBA787

Shape784.geometry = LineSet785

HAnimSegment780.children.append(Shape784)
HAnimSite788 = x3d.HAnimSite()
HAnimSite788.name = "l_chest_midsagittal_plane_pt"
HAnimSite788.DEF = "hanim_l_chest_midsagittal_plane_pt"
HAnimSite788.translation = [0,1,0]
TouchSensor789 = x3d.TouchSensor()
TouchSensor789.description = "HAnimSite l_chest_midsagittal_plane_pt"

HAnimSite788.children.append(TouchSensor789)
Shape790 = x3d.Shape()
Shape790.USE = "HAnimSiteShape"

HAnimSite788.children.append(Shape790)

HAnimSegment780.children.append(HAnimSite788)
HAnimSite791 = x3d.HAnimSite()
HAnimSite791.name = "mesosternale_pt"
HAnimSite791.DEF = "hanim_mesosternale_pt"
HAnimSite791.translation = [0,1,0]
TouchSensor792 = x3d.TouchSensor()
TouchSensor792.description = "HAnimSite mesosternale_pt"

HAnimSite791.children.append(TouchSensor792)
Shape793 = x3d.Shape()
Shape793.USE = "HAnimSiteShape"

HAnimSite791.children.append(Shape793)

HAnimSegment780.children.append(HAnimSite791)
HAnimSite794 = x3d.HAnimSite()
HAnimSite794.name = "r_chest_midsagittal_plane_pt"
HAnimSite794.DEF = "hanim_r_chest_midsagittal_plane_pt"
HAnimSite794.translation = [0,1,0]
TouchSensor795 = x3d.TouchSensor()
TouchSensor795.description = "HAnimSite r_chest_midsagittal_plane_pt"

HAnimSite794.children.append(TouchSensor795)
Shape796 = x3d.Shape()
Shape796.USE = "HAnimSiteShape"

HAnimSite794.children.append(Shape796)

HAnimSegment780.children.append(HAnimSite794)
HAnimSite797 = x3d.HAnimSite()
HAnimSite797.name = "rear_center_midsagittal_plane_pt"
HAnimSite797.DEF = "hanim_rear_center_midsagittal_plane_pt"
HAnimSite797.translation = [0,1,0]
TouchSensor798 = x3d.TouchSensor()
TouchSensor798.description = "HAnimSite rear_center_midsagittal_plane_pt"

HAnimSite797.children.append(TouchSensor798)
Shape799 = x3d.Shape()
Shape799.USE = "HAnimSiteShape"

HAnimSite797.children.append(Shape799)

HAnimSegment780.children.append(HAnimSite797)

HAnimJoint779.children.append(HAnimSegment780)
HAnimJoint800 = x3d.HAnimJoint()
HAnimJoint800.name = "vt6"
HAnimJoint800.DEF = "hanim_vt6"
HAnimJoint800.center = [0.0059,1.3866,-0.08]
HAnimJoint800.ulimit = [0,0,0]
HAnimJoint800.llimit = [0,0,0]
HAnimSegment801 = x3d.HAnimSegment()
HAnimSegment801.name = "t6"
HAnimSegment801.DEF = "hanim_t6"
Transform802 = x3d.Transform()
"""Empty Transform"""
Transform803 = x3d.Transform()
"""Empty Transform"""
Shape804 = x3d.Shape()
Shape804.USE = "HAnimJointShape"

Transform803.children.append(Shape804)

Transform802.children.append(Transform803)

HAnimSegment801.children.append(Transform802)
Shape805 = x3d.Shape()
LineSet806 = x3d.LineSet()
LineSet806.vertexCount = [2]
Coordinate807 = x3d.Coordinate()

LineSet806.coord = Coordinate807
"""from vt6 to vt5 vertices 2"""
ColorRGBA808 = x3d.ColorRGBA()
ColorRGBA808.USE = "HAnimSegmentLineColorRGBA"

LineSet806.color = ColorRGBA808

Shape805.geometry = LineSet806

HAnimSegment801.children.append(Shape805)
HAnimSite809 = x3d.HAnimSite()
HAnimSite809.name = "spine_1_middle_back_pt"
HAnimSite809.DEF = "hanim_spine_1_middle_back_pt"
HAnimSite809.translation = [0,1,0]
TouchSensor810 = x3d.TouchSensor()
TouchSensor810.description = "HAnimSite spine_1_middle_back_pt"

HAnimSite809.children.append(TouchSensor810)
Shape811 = x3d.Shape()
Shape811.USE = "HAnimSiteShape"

HAnimSite809.children.append(Shape811)

HAnimSegment801.children.append(HAnimSite809)

HAnimJoint800.children.append(HAnimSegment801)
HAnimJoint812 = x3d.HAnimJoint()
HAnimJoint812.name = "vt5"
HAnimJoint812.DEF = "hanim_vt5"
HAnimJoint812.center = [0.006,1.4102,-0.0745]
HAnimJoint812.ulimit = [0,0,0]
HAnimJoint812.llimit = [0,0,0]
HAnimSegment813 = x3d.HAnimSegment()
HAnimSegment813.name = "t5"
HAnimSegment813.DEF = "hanim_t5"
Transform814 = x3d.Transform()
"""Empty Transform"""
Transform815 = x3d.Transform()
"""Empty Transform"""
Shape816 = x3d.Shape()
Shape816.USE = "HAnimJointShape"

Transform815.children.append(Shape816)

Transform814.children.append(Transform815)

HAnimSegment813.children.append(Transform814)
Shape817 = x3d.Shape()
LineSet818 = x3d.LineSet()
LineSet818.vertexCount = [2]
Coordinate819 = x3d.Coordinate()

LineSet818.coord = Coordinate819
"""from vt5 to vt4 vertices 2"""
ColorRGBA820 = x3d.ColorRGBA()
ColorRGBA820.USE = "HAnimSegmentLineColorRGBA"

LineSet818.color = ColorRGBA820

Shape817.geometry = LineSet818

HAnimSegment813.children.append(Shape817)

HAnimJoint812.children.append(HAnimSegment813)
HAnimJoint821 = x3d.HAnimJoint()
HAnimJoint821.name = "vt4"
HAnimJoint821.DEF = "hanim_vt4"
HAnimJoint821.center = [0.0061,1.432,-0.0675]
HAnimJoint821.ulimit = [0,0,0]
HAnimJoint821.llimit = [0,0,0]
HAnimSegment822 = x3d.HAnimSegment()
HAnimSegment822.name = "t4"
HAnimSegment822.DEF = "hanim_t4"
Transform823 = x3d.Transform()
"""Empty Transform"""
Transform824 = x3d.Transform()
"""Empty Transform"""
Shape825 = x3d.Shape()
Shape825.USE = "HAnimJointShape"

Transform824.children.append(Shape825)

Transform823.children.append(Transform824)

HAnimSegment822.children.append(Transform823)
Shape826 = x3d.Shape()
LineSet827 = x3d.LineSet()
LineSet827.vertexCount = [2]
Coordinate828 = x3d.Coordinate()

LineSet827.coord = Coordinate828
"""from vt4 to vt3 vertices 2"""
ColorRGBA829 = x3d.ColorRGBA()
ColorRGBA829.USE = "HAnimSegmentLineColorRGBA"

LineSet827.color = ColorRGBA829

Shape826.geometry = LineSet827

HAnimSegment822.children.append(Shape826)

HAnimJoint821.children.append(HAnimSegment822)
HAnimJoint830 = x3d.HAnimJoint()
HAnimJoint830.name = "vt3"
HAnimJoint830.DEF = "hanim_vt3"
HAnimJoint830.center = [0.0062,1.4583,-0.057]
HAnimJoint830.ulimit = [0,0,0]
HAnimJoint830.llimit = [0,0,0]
HAnimSegment831 = x3d.HAnimSegment()
HAnimSegment831.name = "t3"
HAnimSegment831.DEF = "hanim_t3"
Transform832 = x3d.Transform()
"""Empty Transform"""
Transform833 = x3d.Transform()
"""Empty Transform"""
Shape834 = x3d.Shape()
Shape834.USE = "HAnimJointShape"

Transform833.children.append(Shape834)

Transform832.children.append(Transform833)

HAnimSegment831.children.append(Transform832)
Shape835 = x3d.Shape()
LineSet836 = x3d.LineSet()
LineSet836.vertexCount = [2]
Coordinate837 = x3d.Coordinate()

LineSet836.coord = Coordinate837
"""from vt3 to vt2 vertices 2"""
ColorRGBA838 = x3d.ColorRGBA()
ColorRGBA838.USE = "HAnimSegmentLineColorRGBA"

LineSet836.color = ColorRGBA838

Shape835.geometry = LineSet836

HAnimSegment831.children.append(Shape835)

HAnimJoint830.children.append(HAnimSegment831)
HAnimJoint839 = x3d.HAnimJoint()
HAnimJoint839.name = "vt2"
HAnimJoint839.DEF = "hanim_vt2"
HAnimJoint839.center = [0.0063,1.4761,-0.0484]
HAnimJoint839.ulimit = [0,0,0]
HAnimJoint839.llimit = [0,0,0]
HAnimSegment840 = x3d.HAnimSegment()
HAnimSegment840.name = "t2"
HAnimSegment840.DEF = "hanim_t2"
Transform841 = x3d.Transform()
"""Empty Transform"""
Transform842 = x3d.Transform()
"""Empty Transform"""
Shape843 = x3d.Shape()
Shape843.USE = "HAnimJointShape"

Transform842.children.append(Shape843)

Transform841.children.append(Transform842)

HAnimSegment840.children.append(Transform841)
Shape844 = x3d.Shape()
LineSet845 = x3d.LineSet()
LineSet845.vertexCount = [2]
Coordinate846 = x3d.Coordinate()

LineSet845.coord = Coordinate846
"""from vt2 to vt1 vertices 2"""
ColorRGBA847 = x3d.ColorRGBA()
ColorRGBA847.USE = "HAnimSegmentLineColorRGBA"

LineSet845.color = ColorRGBA847

Shape844.geometry = LineSet845

HAnimSegment840.children.append(Shape844)
HAnimSite848 = x3d.HAnimSite()
HAnimSite848.name = "cervicale_pt"
HAnimSite848.DEF = "hanim_cervicale_pt"
HAnimSite848.translation = [0.0064,1.52,-0.0815]
TouchSensor849 = x3d.TouchSensor()
TouchSensor849.description = "HAnimSite cervicale_pt"

HAnimSite848.children.append(TouchSensor849)
Shape850 = x3d.Shape()
Shape850.USE = "HAnimSiteShape"

HAnimSite848.children.append(Shape850)

HAnimSegment840.children.append(HAnimSite848)
HAnimSite851 = x3d.HAnimSite()
HAnimSite851.name = "suprasternale_pt"
HAnimSite851.DEF = "hanim_suprasternale_pt"
HAnimSite851.translation = [0.0084,1.4714,0.0551]
TouchSensor852 = x3d.TouchSensor()
TouchSensor852.description = "HAnimSite suprasternale_pt"

HAnimSite851.children.append(TouchSensor852)
Shape853 = x3d.Shape()
Shape853.USE = "HAnimSiteShape"

HAnimSite851.children.append(Shape853)

HAnimSegment840.children.append(HAnimSite851)

HAnimJoint839.children.append(HAnimSegment840)
HAnimJoint854 = x3d.HAnimJoint()
HAnimJoint854.name = "vt1"
HAnimJoint854.DEF = "hanim_vt1"
HAnimJoint854.center = [0.0065,1.4951,-0.0387]
HAnimJoint854.ulimit = [0,0,0]
HAnimJoint854.llimit = [0,0,0]
HAnimSegment855 = x3d.HAnimSegment()
HAnimSegment855.name = "t1"
HAnimSegment855.DEF = "hanim_t1"
Transform856 = x3d.Transform()
"""Empty Transform"""
Transform857 = x3d.Transform()
"""Empty Transform"""
Shape858 = x3d.Shape()
Shape858.USE = "HAnimJointShape"

Transform857.children.append(Shape858)

Transform856.children.append(Transform857)

HAnimSegment855.children.append(Transform856)
Shape859 = x3d.Shape()
LineSet860 = x3d.LineSet()
LineSet860.vertexCount = [2]
Coordinate861 = x3d.Coordinate()

LineSet860.coord = Coordinate861
"""from vt1 to vc7 vertices 2"""
ColorRGBA862 = x3d.ColorRGBA()
ColorRGBA862.USE = "HAnimSegmentLineColorRGBA"

LineSet860.color = ColorRGBA862

Shape859.geometry = LineSet860

HAnimSegment855.children.append(Shape859)
HAnimSite863 = x3d.HAnimSite()
HAnimSite863.name = "l_neck_base_pt"
HAnimSite863.DEF = "hanim_l_neck_base_pt"
HAnimSite863.translation = [0.0646,1.5141,-0.038]
TouchSensor864 = x3d.TouchSensor()
TouchSensor864.description = "HAnimSite l_neck_base_pt"

HAnimSite863.children.append(TouchSensor864)
Shape865 = x3d.Shape()
Shape865.USE = "HAnimSiteShape"

HAnimSite863.children.append(Shape865)

HAnimSegment855.children.append(HAnimSite863)
HAnimSite866 = x3d.HAnimSite()
HAnimSite866.name = "r_neck_base_pt"
HAnimSite866.DEF = "hanim_r_neck_base_pt"
HAnimSite866.translation = [-0.0419,1.5149,-0.022]
TouchSensor867 = x3d.TouchSensor()
TouchSensor867.description = "HAnimSite r_neck_base_pt"

HAnimSite866.children.append(TouchSensor867)
Shape868 = x3d.Shape()
Shape868.USE = "HAnimSiteShape"

HAnimSite866.children.append(Shape868)

HAnimSegment855.children.append(HAnimSite866)
Shape869 = x3d.Shape()
LineSet870 = x3d.LineSet()
LineSet870.vertexCount = [2]
Coordinate871 = x3d.Coordinate()

LineSet870.coord = Coordinate871
"""from vt1 to l_sternoclavicular vertices 2"""
ColorRGBA872 = x3d.ColorRGBA()
ColorRGBA872.USE = "HAnimSegmentLineColorRGBA"

LineSet870.color = ColorRGBA872

Shape869.geometry = LineSet870

HAnimSegment855.children.append(Shape869)
HAnimSite873 = x3d.HAnimSite()
HAnimSite873.name = "l_acromion_pt"
HAnimSite873.DEF = "hanim_l_acromion_pt"
HAnimSite873.translation = [0.2032,1.476,-0.049]
TouchSensor874 = x3d.TouchSensor()
TouchSensor874.description = "HAnimSite l_acromion_pt"

HAnimSite873.children.append(TouchSensor874)
Shape875 = x3d.Shape()
Shape875.USE = "HAnimSiteShape"

HAnimSite873.children.append(Shape875)

HAnimSegment855.children.append(HAnimSite873)
HAnimSite876 = x3d.HAnimSite()
HAnimSite876.name = "l_axilla_distal_pt"
HAnimSite876.DEF = "hanim_l_axilla_distal_pt"
HAnimSite876.translation = [0.1706,1.4072,-0.0875]
TouchSensor877 = x3d.TouchSensor()
TouchSensor877.description = "HAnimSite l_axilla_distal_pt"

HAnimSite876.children.append(TouchSensor877)
Shape878 = x3d.Shape()
Shape878.USE = "HAnimSiteShape"

HAnimSite876.children.append(Shape878)

HAnimSegment855.children.append(HAnimSite876)
HAnimSite879 = x3d.HAnimSite()
HAnimSite879.name = "l_axilla_posterior_folds_pt"
HAnimSite879.DEF = "hanim_l_axilla_posterior_folds_pt"
HAnimSite879.translation = [0,1,0]
TouchSensor880 = x3d.TouchSensor()
TouchSensor880.description = "HAnimSite l_axilla_posterior_folds_pt"

HAnimSite879.children.append(TouchSensor880)
Shape881 = x3d.Shape()
Shape881.USE = "HAnimSiteShape"

HAnimSite879.children.append(Shape881)

HAnimSegment855.children.append(HAnimSite879)
HAnimSite882 = x3d.HAnimSite()
HAnimSite882.name = "l_axilla_proximal_pt"
HAnimSite882.DEF = "hanim_l_axilla_proximal_pt"
HAnimSite882.translation = [0.1777,1.4065,-0.0075]
TouchSensor883 = x3d.TouchSensor()
TouchSensor883.description = "HAnimSite l_axilla_proximal_pt"

HAnimSite882.children.append(TouchSensor883)
Shape884 = x3d.Shape()
Shape884.USE = "HAnimSiteShape"

HAnimSite882.children.append(Shape884)

HAnimSegment855.children.append(HAnimSite882)
HAnimSite885 = x3d.HAnimSite()
HAnimSite885.name = "l_clavicale_pt"
HAnimSite885.DEF = "hanim_l_clavicale_pt"
HAnimSite885.translation = [0.0271,1.4943,0.0394]
TouchSensor886 = x3d.TouchSensor()
TouchSensor886.description = "HAnimSite l_clavicale_pt"

HAnimSite885.children.append(TouchSensor886)
Shape887 = x3d.Shape()
Shape887.USE = "HAnimSiteShape"

HAnimSite885.children.append(Shape887)

HAnimSegment855.children.append(HAnimSite885)
Shape888 = x3d.Shape()
LineSet889 = x3d.LineSet()
LineSet889.vertexCount = [2]
Coordinate890 = x3d.Coordinate()

LineSet889.coord = Coordinate890
"""from vt1 to r_sternoclavicular vertices 2"""
ColorRGBA891 = x3d.ColorRGBA()
ColorRGBA891.USE = "HAnimSegmentLineColorRGBA"

LineSet889.color = ColorRGBA891

Shape888.geometry = LineSet889

HAnimSegment855.children.append(Shape888)
HAnimSite892 = x3d.HAnimSite()
HAnimSite892.name = "r_acromion_pt"
HAnimSite892.DEF = "hanim_r_acromion_pt"
HAnimSite892.translation = [-0.1905,1.4791,-0.0431]
TouchSensor893 = x3d.TouchSensor()
TouchSensor893.description = "HAnimSite r_acromion_pt"

HAnimSite892.children.append(TouchSensor893)
Shape894 = x3d.Shape()
Shape894.USE = "HAnimSiteShape"

HAnimSite892.children.append(Shape894)

HAnimSegment855.children.append(HAnimSite892)
HAnimSite895 = x3d.HAnimSite()
HAnimSite895.name = "r_axilla_distal_pt"
HAnimSite895.DEF = "hanim_r_axilla_distal_pt"
HAnimSite895.translation = [-0.1603,1.4098,-0.0826]
TouchSensor896 = x3d.TouchSensor()
TouchSensor896.description = "HAnimSite r_axilla_distal_pt"

HAnimSite895.children.append(TouchSensor896)
Shape897 = x3d.Shape()
Shape897.USE = "HAnimSiteShape"

HAnimSite895.children.append(Shape897)

HAnimSegment855.children.append(HAnimSite895)
HAnimSite898 = x3d.HAnimSite()
HAnimSite898.name = "r_axilla_posterior_folds_pt"
HAnimSite898.DEF = "hanim_r_axilla_posterior_folds_pt"
HAnimSite898.translation = [0,1,0]
TouchSensor899 = x3d.TouchSensor()
TouchSensor899.description = "HAnimSite r_axilla_posterior_folds_pt"

HAnimSite898.children.append(TouchSensor899)
Shape900 = x3d.Shape()
Shape900.USE = "HAnimSiteShape"

HAnimSite898.children.append(Shape900)

HAnimSegment855.children.append(HAnimSite898)
HAnimSite901 = x3d.HAnimSite()
HAnimSite901.name = "r_axilla_proximal_pt"
HAnimSite901.DEF = "hanim_r_axilla_proximal_pt"
HAnimSite901.translation = [-0.1626,1.4072,-0.0031]
TouchSensor902 = x3d.TouchSensor()
TouchSensor902.description = "HAnimSite r_axilla_proximal_pt"

HAnimSite901.children.append(TouchSensor902)
Shape903 = x3d.Shape()
Shape903.USE = "HAnimSiteShape"

HAnimSite901.children.append(Shape903)

HAnimSegment855.children.append(HAnimSite901)
HAnimSite904 = x3d.HAnimSite()
HAnimSite904.name = "r_clavicale_pt"
HAnimSite904.DEF = "hanim_r_clavicale_pt"
HAnimSite904.translation = [-0.0115,1.4943,0.04]
TouchSensor905 = x3d.TouchSensor()
TouchSensor905.description = "HAnimSite r_clavicale_pt"

HAnimSite904.children.append(TouchSensor905)
Shape906 = x3d.Shape()
Shape906.USE = "HAnimSiteShape"

HAnimSite904.children.append(Shape906)

HAnimSegment855.children.append(HAnimSite904)

HAnimJoint854.children.append(HAnimSegment855)
HAnimJoint907 = x3d.HAnimJoint()
HAnimJoint907.name = "vc7"
HAnimJoint907.DEF = "hanim_vc7"
HAnimJoint907.center = [0.0066,1.5132,-0.0301]
HAnimJoint907.ulimit = [0,0,0]
HAnimJoint907.llimit = [0,0,0]
HAnimSegment908 = x3d.HAnimSegment()
HAnimSegment908.name = "c7"
HAnimSegment908.DEF = "hanim_c7"
Transform909 = x3d.Transform()
"""Empty Transform"""
Transform910 = x3d.Transform()
"""Empty Transform"""
Shape911 = x3d.Shape()
Shape911.USE = "HAnimJointShape"

Transform910.children.append(Shape911)

Transform909.children.append(Transform910)

HAnimSegment908.children.append(Transform909)
Shape912 = x3d.Shape()
LineSet913 = x3d.LineSet()
LineSet913.vertexCount = [2]
Coordinate914 = x3d.Coordinate()

LineSet913.coord = Coordinate914
"""from vc7 to vc6 vertices 2"""
ColorRGBA915 = x3d.ColorRGBA()
ColorRGBA915.USE = "HAnimSegmentLineColorRGBA"

LineSet913.color = ColorRGBA915

Shape912.geometry = LineSet913

HAnimSegment908.children.append(Shape912)

HAnimJoint907.children.append(HAnimSegment908)
HAnimJoint916 = x3d.HAnimJoint()
HAnimJoint916.name = "vc6"
HAnimJoint916.DEF = "hanim_vc6"
HAnimJoint916.center = [0.0066,1.5357,-0.0143]
HAnimJoint916.ulimit = [0,0,0]
HAnimJoint916.llimit = [0,0,0]
HAnimSegment917 = x3d.HAnimSegment()
HAnimSegment917.name = "c6"
HAnimSegment917.DEF = "hanim_c6"
Transform918 = x3d.Transform()
"""Empty Transform"""
Transform919 = x3d.Transform()
"""Empty Transform"""
Shape920 = x3d.Shape()
Shape920.USE = "HAnimJointShape"

Transform919.children.append(Shape920)

Transform918.children.append(Transform919)

HAnimSegment917.children.append(Transform918)
Shape921 = x3d.Shape()
LineSet922 = x3d.LineSet()
LineSet922.vertexCount = [2]
Coordinate923 = x3d.Coordinate()

LineSet922.coord = Coordinate923
"""from vc6 to vc5 vertices 2"""
ColorRGBA924 = x3d.ColorRGBA()
ColorRGBA924.USE = "HAnimSegmentLineColorRGBA"

LineSet922.color = ColorRGBA924

Shape921.geometry = LineSet922

HAnimSegment917.children.append(Shape921)

HAnimJoint916.children.append(HAnimSegment917)
HAnimJoint925 = x3d.HAnimJoint()
HAnimJoint925.name = "vc5"
HAnimJoint925.DEF = "hanim_vc5"
HAnimJoint925.center = [0.0066,1.552,-0.0082]
HAnimJoint925.ulimit = [0,0,0]
HAnimJoint925.llimit = [0,0,0]
HAnimSegment926 = x3d.HAnimSegment()
HAnimSegment926.name = "c5"
HAnimSegment926.DEF = "hanim_c5"
Transform927 = x3d.Transform()
"""Empty Transform"""
Transform928 = x3d.Transform()
"""Empty Transform"""
Shape929 = x3d.Shape()
Shape929.USE = "HAnimJointShape"

Transform928.children.append(Shape929)

Transform927.children.append(Transform928)

HAnimSegment926.children.append(Transform927)
Shape930 = x3d.Shape()
LineSet931 = x3d.LineSet()
LineSet931.vertexCount = [2]
Coordinate932 = x3d.Coordinate()

LineSet931.coord = Coordinate932
"""from vc5 to vc4 vertices 2"""
ColorRGBA933 = x3d.ColorRGBA()
ColorRGBA933.USE = "HAnimSegmentLineColorRGBA"

LineSet931.color = ColorRGBA933

Shape930.geometry = LineSet931

HAnimSegment926.children.append(Shape930)

HAnimJoint925.children.append(HAnimSegment926)
HAnimJoint934 = x3d.HAnimJoint()
HAnimJoint934.name = "vc4"
HAnimJoint934.DEF = "hanim_vc4"
HAnimJoint934.center = [0.0066,1.5662,-0.0084]
HAnimJoint934.ulimit = [0,0,0]
HAnimJoint934.llimit = [0,0,0]
HAnimSegment935 = x3d.HAnimSegment()
HAnimSegment935.name = "c4"
HAnimSegment935.DEF = "hanim_c4"
Transform936 = x3d.Transform()
"""Empty Transform"""
Transform937 = x3d.Transform()
"""Empty Transform"""
Shape938 = x3d.Shape()
Shape938.USE = "HAnimJointShape"

Transform937.children.append(Shape938)

Transform936.children.append(Transform937)

HAnimSegment935.children.append(Transform936)
Shape939 = x3d.Shape()
LineSet940 = x3d.LineSet()
LineSet940.vertexCount = [2]
Coordinate941 = x3d.Coordinate()

LineSet940.coord = Coordinate941
"""from vc4 to vc3 vertices 2"""
ColorRGBA942 = x3d.ColorRGBA()
ColorRGBA942.USE = "HAnimSegmentLineColorRGBA"

LineSet940.color = ColorRGBA942

Shape939.geometry = LineSet940

HAnimSegment935.children.append(Shape939)

HAnimJoint934.children.append(HAnimSegment935)
HAnimJoint943 = x3d.HAnimJoint()
HAnimJoint943.name = "vc3"
HAnimJoint943.DEF = "hanim_vc3"
HAnimJoint943.center = [0.0066,1.58,-0.0103]
HAnimJoint943.ulimit = [0,0,0]
HAnimJoint943.llimit = [0,0,0]
HAnimSegment944 = x3d.HAnimSegment()
HAnimSegment944.name = "c3"
HAnimSegment944.DEF = "hanim_c3"
Transform945 = x3d.Transform()
"""Empty Transform"""
Transform946 = x3d.Transform()
"""Empty Transform"""
Shape947 = x3d.Shape()
Shape947.USE = "HAnimJointShape"

Transform946.children.append(Shape947)

Transform945.children.append(Transform946)

HAnimSegment944.children.append(Transform945)
Shape948 = x3d.Shape()
LineSet949 = x3d.LineSet()
LineSet949.vertexCount = [2]
Coordinate950 = x3d.Coordinate()

LineSet949.coord = Coordinate950
"""from vc3 to vc2 vertices 2"""
ColorRGBA951 = x3d.ColorRGBA()
ColorRGBA951.USE = "HAnimSegmentLineColorRGBA"

LineSet949.color = ColorRGBA951

Shape948.geometry = LineSet949

HAnimSegment944.children.append(Shape948)
HAnimSite952 = x3d.HAnimSite()
HAnimSite952.name = "adams_apple_pt"
HAnimSite952.DEF = "hanim_adams_apple_pt"
HAnimSite952.translation = [0,1,0]
TouchSensor953 = x3d.TouchSensor()
TouchSensor953.description = "HAnimSite adams_apple_pt"

HAnimSite952.children.append(TouchSensor953)
Shape954 = x3d.Shape()
Shape954.USE = "HAnimSiteShape"

HAnimSite952.children.append(Shape954)

HAnimSegment944.children.append(HAnimSite952)

HAnimJoint943.children.append(HAnimSegment944)
HAnimJoint955 = x3d.HAnimJoint()
HAnimJoint955.name = "vc2"
HAnimJoint955.DEF = "hanim_vc2"
HAnimJoint955.center = [0.0066,1.5928,-0.0103]
HAnimJoint955.ulimit = [0,0,0]
HAnimJoint955.llimit = [0,0,0]
HAnimSegment956 = x3d.HAnimSegment()
HAnimSegment956.name = "c2"
HAnimSegment956.DEF = "hanim_c2"
Transform957 = x3d.Transform()
"""Empty Transform"""
Transform958 = x3d.Transform()
"""Empty Transform"""
Shape959 = x3d.Shape()
Shape959.USE = "HAnimJointShape"

Transform958.children.append(Shape959)

Transform957.children.append(Transform958)

HAnimSegment956.children.append(Transform957)
Shape960 = x3d.Shape()
LineSet961 = x3d.LineSet()
LineSet961.vertexCount = [2]
Coordinate962 = x3d.Coordinate()

LineSet961.coord = Coordinate962
"""from vc2 to vc1 vertices 2"""
ColorRGBA963 = x3d.ColorRGBA()
ColorRGBA963.USE = "HAnimSegmentLineColorRGBA"

LineSet961.color = ColorRGBA963

Shape960.geometry = LineSet961

HAnimSegment956.children.append(Shape960)

HAnimJoint955.children.append(HAnimSegment956)
HAnimJoint964 = x3d.HAnimJoint()
HAnimJoint964.name = "vc1"
HAnimJoint964.DEF = "hanim_vc1"
HAnimJoint964.center = [0.0066,1.6144,-0.0034]
HAnimJoint964.ulimit = [0,0,0]
HAnimJoint964.llimit = [0,0,0]
HAnimSegment965 = x3d.HAnimSegment()
HAnimSegment965.name = "c1"
HAnimSegment965.DEF = "hanim_c1"
Transform966 = x3d.Transform()
"""Empty Transform"""
Transform967 = x3d.Transform()
"""Empty Transform"""
Shape968 = x3d.Shape()
Shape968.USE = "HAnimJointShape"

Transform967.children.append(Shape968)

Transform966.children.append(Transform967)

HAnimSegment965.children.append(Transform966)
Shape969 = x3d.Shape()
LineSet970 = x3d.LineSet()
LineSet970.vertexCount = [2]
Coordinate971 = x3d.Coordinate()

LineSet970.coord = Coordinate971
"""from vc1 to skullbase vertices 2"""
ColorRGBA972 = x3d.ColorRGBA()
ColorRGBA972.USE = "HAnimSegmentLineColorRGBA"

LineSet970.color = ColorRGBA972

Shape969.geometry = LineSet970

HAnimSegment965.children.append(Shape969)
HAnimSite973 = x3d.HAnimSite()
HAnimSite973.name = "glabella_pt"
HAnimSite973.DEF = "hanim_glabella_pt"
HAnimSite973.translation = [0,1,0]
TouchSensor974 = x3d.TouchSensor()
TouchSensor974.description = "HAnimSite glabella_pt"

HAnimSite973.children.append(TouchSensor974)
Shape975 = x3d.Shape()
Shape975.USE = "HAnimSiteShape"

HAnimSite973.children.append(Shape975)

HAnimSegment965.children.append(HAnimSite973)
HAnimSite976 = x3d.HAnimSite()
HAnimSite976.name = "l_ectocanthus_pt"
HAnimSite976.DEF = "hanim_l_ectocanthus_pt"
HAnimSite976.translation = [0,1,0]
TouchSensor977 = x3d.TouchSensor()
TouchSensor977.description = "HAnimSite l_ectocanthus_pt"

HAnimSite976.children.append(TouchSensor977)
Shape978 = x3d.Shape()
Shape978.USE = "HAnimSiteShape"

HAnimSite976.children.append(Shape978)

HAnimSegment965.children.append(HAnimSite976)
HAnimSite979 = x3d.HAnimSite()
HAnimSite979.name = "l_infraorbitale_pt"
HAnimSite979.DEF = "hanim_l_infraorbitale_pt"
HAnimSite979.translation = [0.0341,1.6171,0.0752]
TouchSensor980 = x3d.TouchSensor()
TouchSensor980.description = "HAnimSite l_infraorbitale_pt"

HAnimSite979.children.append(TouchSensor980)
Shape981 = x3d.Shape()
Shape981.USE = "HAnimSiteShape"

HAnimSite979.children.append(Shape981)

HAnimSegment965.children.append(HAnimSite979)
HAnimSite982 = x3d.HAnimSite()
HAnimSite982.name = "l_tragion_pt"
HAnimSite982.DEF = "hanim_l_tragion_pt"
HAnimSite982.translation = [0.0739,1.6348,0.0282]
TouchSensor983 = x3d.TouchSensor()
TouchSensor983.description = "HAnimSite l_tragion_pt"

HAnimSite982.children.append(TouchSensor983)
Shape984 = x3d.Shape()
Shape984.USE = "HAnimSiteShape"

HAnimSite982.children.append(Shape984)

HAnimSegment965.children.append(HAnimSite982)
HAnimSite985 = x3d.HAnimSite()
HAnimSite985.name = "nuchale_pt"
HAnimSite985.DEF = "hanim_nuchale_pt"
HAnimSite985.translation = [0.0039,1.5972,-0.0796]
TouchSensor986 = x3d.TouchSensor()
TouchSensor986.description = "HAnimSite nuchale_pt"

HAnimSite985.children.append(TouchSensor986)
Shape987 = x3d.Shape()
Shape987.USE = "HAnimSiteShape"

HAnimSite985.children.append(Shape987)

HAnimSegment965.children.append(HAnimSite985)
HAnimSite988 = x3d.HAnimSite()
HAnimSite988.name = "opisthocranion_pt"
HAnimSite988.DEF = "hanim_opisthocranion_pt"
HAnimSite988.translation = [0,1,0]
TouchSensor989 = x3d.TouchSensor()
TouchSensor989.description = "HAnimSite opisthocranion_pt"

HAnimSite988.children.append(TouchSensor989)
Shape990 = x3d.Shape()
Shape990.USE = "HAnimSiteShape"

HAnimSite988.children.append(Shape990)

HAnimSegment965.children.append(HAnimSite988)
HAnimSite991 = x3d.HAnimSite()
HAnimSite991.name = "r_ectocanthus_pt"
HAnimSite991.DEF = "hanim_r_ectocanthus_pt"
HAnimSite991.translation = [0,1,0]
TouchSensor992 = x3d.TouchSensor()
TouchSensor992.description = "HAnimSite r_ectocanthus_pt"

HAnimSite991.children.append(TouchSensor992)
Shape993 = x3d.Shape()
Shape993.USE = "HAnimSiteShape"

HAnimSite991.children.append(Shape993)

HAnimSegment965.children.append(HAnimSite991)
HAnimSite994 = x3d.HAnimSite()
HAnimSite994.name = "r_infraorbitale_pt"
HAnimSite994.DEF = "hanim_r_infraorbitale_pt"
HAnimSite994.translation = [-0.0237,1.6171,0.0752]
TouchSensor995 = x3d.TouchSensor()
TouchSensor995.description = "HAnimSite r_infraorbitale_pt"

HAnimSite994.children.append(TouchSensor995)
Shape996 = x3d.Shape()
Shape996.USE = "HAnimSiteShape"

HAnimSite994.children.append(Shape996)

HAnimSegment965.children.append(HAnimSite994)
HAnimSite997 = x3d.HAnimSite()
HAnimSite997.name = "r_tragion_pt"
HAnimSite997.DEF = "hanim_r_tragion_pt"
HAnimSite997.translation = [-0.0646,1.6347,0.0302]
TouchSensor998 = x3d.TouchSensor()
TouchSensor998.description = "HAnimSite r_tragion_pt"

HAnimSite997.children.append(TouchSensor998)
Shape999 = x3d.Shape()
Shape999.USE = "HAnimSiteShape"

HAnimSite997.children.append(Shape999)

HAnimSegment965.children.append(HAnimSite997)
HAnimSite1000 = x3d.HAnimSite()
HAnimSite1000.name = "sellion_pt"
HAnimSite1000.DEF = "hanim_sellion_pt"
HAnimSite1000.translation = [0.0058,1.6316,0.0852]
TouchSensor1001 = x3d.TouchSensor()
TouchSensor1001.description = "HAnimSite sellion_pt"

HAnimSite1000.children.append(TouchSensor1001)
Shape1002 = x3d.Shape()
Shape1002.USE = "HAnimSiteShape"

HAnimSite1000.children.append(Shape1002)

HAnimSegment965.children.append(HAnimSite1000)
HAnimSite1003 = x3d.HAnimSite()
HAnimSite1003.name = "skull_vertex_pt"
HAnimSite1003.DEF = "hanim_skull_vertex_pt"
HAnimSite1003.translation = [0.005,1.7504,0.0055]
TouchSensor1004 = x3d.TouchSensor()
TouchSensor1004.description = "HAnimSite skull_vertex_pt"

HAnimSite1003.children.append(TouchSensor1004)
Shape1005 = x3d.Shape()
Shape1005.USE = "HAnimSiteShape"

HAnimSite1003.children.append(Shape1005)

HAnimSegment965.children.append(HAnimSite1003)

HAnimJoint964.children.append(HAnimSegment965)
HAnimJoint1006 = x3d.HAnimJoint()
HAnimJoint1006.name = "skullbase"
HAnimJoint1006.DEF = "hanim_skullbase"
HAnimJoint1006.center = [0.0044,1.6209,0.0236]
HAnimJoint1006.ulimit = [0,0,0]
HAnimJoint1006.llimit = [0,0,0]
HAnimSegment1007 = x3d.HAnimSegment()
HAnimSegment1007.name = "skull"
HAnimSegment1007.DEF = "hanim_skull"
Transform1008 = x3d.Transform()
"""Empty Transform"""
Transform1009 = x3d.Transform()
"""Empty Transform"""
Shape1010 = x3d.Shape()
Shape1010.USE = "HAnimJointShape"

Transform1009.children.append(Shape1010)

Transform1008.children.append(Transform1009)

HAnimSegment1007.children.append(Transform1008)
Shape1011 = x3d.Shape()
LineSet1012 = x3d.LineSet()
LineSet1012.vertexCount = [2]
Coordinate1013 = x3d.Coordinate()

LineSet1012.coord = Coordinate1013
"""from skullbase to l_eyelid_joint vertices 2"""
ColorRGBA1014 = x3d.ColorRGBA()
ColorRGBA1014.USE = "HAnimSegmentLineColorRGBA"

LineSet1012.color = ColorRGBA1014

Shape1011.geometry = LineSet1012

HAnimSegment1007.children.append(Shape1011)
Shape1015 = x3d.Shape()
LineSet1016 = x3d.LineSet()
LineSet1016.vertexCount = [2]
Coordinate1017 = x3d.Coordinate()

LineSet1016.coord = Coordinate1017
"""from skullbase to r_eyelid_joint vertices 2"""
ColorRGBA1018 = x3d.ColorRGBA()
ColorRGBA1018.USE = "HAnimSegmentLineColorRGBA"

LineSet1016.color = ColorRGBA1018

Shape1015.geometry = LineSet1016

HAnimSegment1007.children.append(Shape1015)
Shape1019 = x3d.Shape()
LineSet1020 = x3d.LineSet()
LineSet1020.vertexCount = [2]
Coordinate1021 = x3d.Coordinate()

LineSet1020.coord = Coordinate1021
"""from skullbase to l_eyeball_joint vertices 2"""
ColorRGBA1022 = x3d.ColorRGBA()
ColorRGBA1022.USE = "HAnimSegmentLineColorRGBA"

LineSet1020.color = ColorRGBA1022

Shape1019.geometry = LineSet1020

HAnimSegment1007.children.append(Shape1019)
Shape1023 = x3d.Shape()
LineSet1024 = x3d.LineSet()
LineSet1024.vertexCount = [2]
Coordinate1025 = x3d.Coordinate()

LineSet1024.coord = Coordinate1025
"""from skullbase to r_eyeball_joint vertices 2"""
ColorRGBA1026 = x3d.ColorRGBA()
ColorRGBA1026.USE = "HAnimSegmentLineColorRGBA"

LineSet1024.color = ColorRGBA1026

Shape1023.geometry = LineSet1024

HAnimSegment1007.children.append(Shape1023)
Shape1027 = x3d.Shape()
LineSet1028 = x3d.LineSet()
LineSet1028.vertexCount = [2]
Coordinate1029 = x3d.Coordinate()

LineSet1028.coord = Coordinate1029
"""from skullbase to l_eyebrow_joint vertices 2"""
ColorRGBA1030 = x3d.ColorRGBA()
ColorRGBA1030.USE = "HAnimSegmentLineColorRGBA"

LineSet1028.color = ColorRGBA1030

Shape1027.geometry = LineSet1028

HAnimSegment1007.children.append(Shape1027)
Shape1031 = x3d.Shape()
LineSet1032 = x3d.LineSet()
LineSet1032.vertexCount = [2]
Coordinate1033 = x3d.Coordinate()

LineSet1032.coord = Coordinate1033
"""from skullbase to r_eyebrow_joint vertices 2"""
ColorRGBA1034 = x3d.ColorRGBA()
ColorRGBA1034.USE = "HAnimSegmentLineColorRGBA"

LineSet1032.color = ColorRGBA1034

Shape1031.geometry = LineSet1032

HAnimSegment1007.children.append(Shape1031)
Shape1035 = x3d.Shape()
LineSet1036 = x3d.LineSet()
LineSet1036.vertexCount = [2]
Coordinate1037 = x3d.Coordinate()

LineSet1036.coord = Coordinate1037
"""from skullbase to temporomandibular vertices 2"""
ColorRGBA1038 = x3d.ColorRGBA()
ColorRGBA1038.USE = "HAnimSegmentLineColorRGBA"

LineSet1036.color = ColorRGBA1038

Shape1035.geometry = LineSet1036

HAnimSegment1007.children.append(Shape1035)
HAnimSite1039 = x3d.HAnimSite()
HAnimSite1039.name = "l_gonion_pt"
HAnimSite1039.DEF = "hanim_l_gonion_pt"
HAnimSite1039.translation = [0.0631,1.553,0.033]
TouchSensor1040 = x3d.TouchSensor()
TouchSensor1040.description = "HAnimSite l_gonion_pt"

HAnimSite1039.children.append(TouchSensor1040)
Shape1041 = x3d.Shape()
Shape1041.USE = "HAnimSiteShape"

HAnimSite1039.children.append(Shape1041)

HAnimSegment1007.children.append(HAnimSite1039)
HAnimSite1042 = x3d.HAnimSite()
HAnimSite1042.name = "menton_pt"
HAnimSite1042.DEF = "hanim_menton_pt"
HAnimSite1042.translation = [0,1,0]
TouchSensor1043 = x3d.TouchSensor()
TouchSensor1043.description = "HAnimSite menton_pt"

HAnimSite1042.children.append(TouchSensor1043)
Shape1044 = x3d.Shape()
Shape1044.USE = "HAnimSiteShape"

HAnimSite1042.children.append(Shape1044)

HAnimSegment1007.children.append(HAnimSite1042)
HAnimSite1045 = x3d.HAnimSite()
HAnimSite1045.name = "r_gonion_pt"
HAnimSite1045.DEF = "hanim_r_gonion_pt"
HAnimSite1045.translation = [-0.052,1.5529,0.0347]
TouchSensor1046 = x3d.TouchSensor()
TouchSensor1046.description = "HAnimSite r_gonion_pt"

HAnimSite1045.children.append(TouchSensor1046)
Shape1047 = x3d.Shape()
Shape1047.USE = "HAnimSiteShape"

HAnimSite1045.children.append(Shape1047)

HAnimSegment1007.children.append(HAnimSite1045)
HAnimSite1048 = x3d.HAnimSite()
HAnimSite1048.name = "supramenton_pt"
HAnimSite1048.DEF = "hanim_supramenton_pt"
HAnimSite1048.translation = [0.0061,1.541,0.0805]
TouchSensor1049 = x3d.TouchSensor()
TouchSensor1049.description = "HAnimSite supramenton_pt"

HAnimSite1048.children.append(TouchSensor1049)
Shape1050 = x3d.Shape()
Shape1050.USE = "HAnimSiteShape"

HAnimSite1048.children.append(Shape1050)

HAnimSegment1007.children.append(HAnimSite1048)

HAnimJoint1006.children.append(HAnimSegment1007)
HAnimJoint1051 = x3d.HAnimJoint()
HAnimJoint1051.name = "l_eyelid_joint"
HAnimJoint1051.DEF = "hanim_l_eyelid_joint"
HAnimJoint1051.center = [0,1,0]
HAnimJoint1051.ulimit = [0,0,0]
HAnimJoint1051.llimit = [0,0,0]

HAnimJoint1006.children.append(HAnimJoint1051)
HAnimJoint1052 = x3d.HAnimJoint()
HAnimJoint1052.name = "r_eyelid_joint"
HAnimJoint1052.DEF = "hanim_r_eyelid_joint"
HAnimJoint1052.center = [0,1,0]
HAnimJoint1052.ulimit = [0,0,0]
HAnimJoint1052.llimit = [0,0,0]

HAnimJoint1006.children.append(HAnimJoint1052)
HAnimJoint1053 = x3d.HAnimJoint()
HAnimJoint1053.name = "l_eyeball_joint"
HAnimJoint1053.DEF = "hanim_l_eyeball_joint"
HAnimJoint1053.center = [0,1,0]
HAnimJoint1053.ulimit = [0,0,0]
HAnimJoint1053.llimit = [0,0,0]

HAnimJoint1006.children.append(HAnimJoint1053)
HAnimJoint1054 = x3d.HAnimJoint()
HAnimJoint1054.name = "r_eyeball_joint"
HAnimJoint1054.DEF = "hanim_r_eyeball_joint"
HAnimJoint1054.center = [0,1,0]
HAnimJoint1054.ulimit = [0,0,0]
HAnimJoint1054.llimit = [0,0,0]

HAnimJoint1006.children.append(HAnimJoint1054)
HAnimJoint1055 = x3d.HAnimJoint()
HAnimJoint1055.name = "l_eyebrow_joint"
HAnimJoint1055.DEF = "hanim_l_eyebrow_joint"
HAnimJoint1055.center = [0,1,0]
HAnimJoint1055.ulimit = [0,0,0]
HAnimJoint1055.llimit = [0,0,0]

HAnimJoint1006.children.append(HAnimJoint1055)
HAnimJoint1056 = x3d.HAnimJoint()
HAnimJoint1056.name = "r_eyebrow_joint"
HAnimJoint1056.DEF = "hanim_r_eyebrow_joint"
HAnimJoint1056.center = [0,1,0]
HAnimJoint1056.ulimit = [0,0,0]
HAnimJoint1056.llimit = [0,0,0]

HAnimJoint1006.children.append(HAnimJoint1056)
HAnimJoint1057 = x3d.HAnimJoint()
HAnimJoint1057.name = "temporomandibular"
HAnimJoint1057.DEF = "hanim_temporomandibular"
HAnimJoint1057.center = [0,1,0]
HAnimJoint1057.ulimit = [0,0,0]
HAnimJoint1057.llimit = [0,0,0]

HAnimJoint1006.children.append(HAnimJoint1057)
HAnimDisplacer1058 = x3d.HAnimDisplacer()
HAnimDisplacer1058.name = "skull_tip_raiser_action"
HAnimDisplacer1058.DEF = "Joe_skull_tip_raiser_action"
HAnimDisplacer1058.coordIndex = [0,1,2,3,4,5,6,7,8,9]

HAnimJoint1006.displacers.append(HAnimDisplacer1058)

HAnimJoint964.children.append(HAnimJoint1006)

HAnimJoint955.children.append(HAnimJoint964)

HAnimJoint943.children.append(HAnimJoint955)

HAnimJoint934.children.append(HAnimJoint943)

HAnimJoint925.children.append(HAnimJoint934)

HAnimJoint916.children.append(HAnimJoint925)

HAnimJoint907.children.append(HAnimJoint916)

HAnimJoint854.children.append(HAnimJoint907)
HAnimJoint1059 = x3d.HAnimJoint()
HAnimJoint1059.name = "l_sternoclavicular"
HAnimJoint1059.DEF = "hanim_l_sternoclavicular"
HAnimJoint1059.center = [0.082,1.4488,-0.0353]
HAnimJoint1059.ulimit = [0,0,0]
HAnimJoint1059.llimit = [0,0,0]
HAnimSegment1060 = x3d.HAnimSegment()
HAnimSegment1060.name = "l_clavicle"
HAnimSegment1060.DEF = "hanim_l_clavicle"
Transform1061 = x3d.Transform()
"""Empty Transform"""
Transform1062 = x3d.Transform()
"""Empty Transform"""
Shape1063 = x3d.Shape()
Shape1063.USE = "HAnimJointShape"

Transform1062.children.append(Shape1063)

Transform1061.children.append(Transform1062)

HAnimSegment1060.children.append(Transform1061)
Shape1064 = x3d.Shape()
LineSet1065 = x3d.LineSet()
LineSet1065.vertexCount = [2]
Coordinate1066 = x3d.Coordinate()

LineSet1065.coord = Coordinate1066
"""from l_sternoclavicular to l_acromioclavicular vertices 2"""
ColorRGBA1067 = x3d.ColorRGBA()
ColorRGBA1067.USE = "HAnimSegmentLineColorRGBA"

LineSet1065.color = ColorRGBA1067

Shape1064.geometry = LineSet1065

HAnimSegment1060.children.append(Shape1064)

HAnimJoint1059.children.append(HAnimSegment1060)
HAnimJoint1068 = x3d.HAnimJoint()
HAnimJoint1068.name = "l_acromioclavicular"
HAnimJoint1068.DEF = "hanim_l_acromioclavicular"
HAnimJoint1068.center = [0.0962,1.4269,-0.0424]
HAnimJoint1068.ulimit = [0,0,0]
HAnimJoint1068.llimit = [0,0,0]
HAnimSegment1069 = x3d.HAnimSegment()
HAnimSegment1069.name = "l_scapula"
HAnimSegment1069.DEF = "hanim_l_scapula"
Transform1070 = x3d.Transform()
"""Empty Transform"""
Transform1071 = x3d.Transform()
"""Empty Transform"""
Shape1072 = x3d.Shape()
Shape1072.USE = "HAnimJointShape"

Transform1071.children.append(Shape1072)

Transform1070.children.append(Transform1071)

HAnimSegment1069.children.append(Transform1070)
Shape1073 = x3d.Shape()
LineSet1074 = x3d.LineSet()
LineSet1074.vertexCount = [2]
Coordinate1075 = x3d.Coordinate()

LineSet1074.coord = Coordinate1075
"""from l_acromioclavicular to l_shoulder vertices 2"""
ColorRGBA1076 = x3d.ColorRGBA()
ColorRGBA1076.USE = "HAnimSegmentLineColorRGBA"

LineSet1074.color = ColorRGBA1076

Shape1073.geometry = LineSet1074

HAnimSegment1069.children.append(Shape1073)
HAnimSite1077 = x3d.HAnimSite()
HAnimSite1077.name = "l_bideltoid_pt"
HAnimSite1077.DEF = "hanim_l_bideltoid_pt"
HAnimSite1077.translation = [0,1,0]
TouchSensor1078 = x3d.TouchSensor()
TouchSensor1078.description = "HAnimSite l_bideltoid_pt"

HAnimSite1077.children.append(TouchSensor1078)
Shape1079 = x3d.Shape()
Shape1079.USE = "HAnimSiteShape"

HAnimSite1077.children.append(Shape1079)

HAnimSegment1069.children.append(HAnimSite1077)
HAnimSite1080 = x3d.HAnimSite()
HAnimSite1080.name = "l_humeral_lateral_epicondyles_pt"
HAnimSite1080.DEF = "hanim_l_humeral_lateral_epicondyles_pt"
HAnimSite1080.translation = [0.228,1.1482,-0.11]
TouchSensor1081 = x3d.TouchSensor()
TouchSensor1081.description = "HAnimSite l_humeral_lateral_epicondyles_pt"

HAnimSite1080.children.append(TouchSensor1081)
Shape1082 = x3d.Shape()
Shape1082.USE = "HAnimSiteShape"

HAnimSite1080.children.append(Shape1082)

HAnimSegment1069.children.append(HAnimSite1080)

HAnimJoint1068.children.append(HAnimSegment1069)
HAnimJoint1083 = x3d.HAnimJoint()
HAnimJoint1083.name = "l_shoulder"
HAnimJoint1083.DEF = "hanim_l_shoulder"
HAnimJoint1083.center = [0.2029,1.4376,-0.0387]
HAnimJoint1083.ulimit = [0,0,0]
HAnimJoint1083.llimit = [0,0,0]
HAnimSegment1084 = x3d.HAnimSegment()
HAnimSegment1084.name = "l_upperarm"
HAnimSegment1084.DEF = "hanim_l_upperarm"
Transform1085 = x3d.Transform()
"""Empty Transform"""
Transform1086 = x3d.Transform()
"""Empty Transform"""
Shape1087 = x3d.Shape()
Shape1087.USE = "HAnimJointShape"

Transform1086.children.append(Shape1087)

Transform1085.children.append(Transform1086)

HAnimSegment1084.children.append(Transform1085)
Shape1088 = x3d.Shape()
LineSet1089 = x3d.LineSet()
LineSet1089.vertexCount = [2]
Coordinate1090 = x3d.Coordinate()

LineSet1089.coord = Coordinate1090
"""from l_shoulder to l_elbow vertices 2"""
ColorRGBA1091 = x3d.ColorRGBA()
ColorRGBA1091.USE = "HAnimSegmentLineColorRGBA"

LineSet1089.color = ColorRGBA1091

Shape1088.geometry = LineSet1089

HAnimSegment1084.children.append(Shape1088)
HAnimSite1092 = x3d.HAnimSite()
HAnimSite1092.name = "l_humeral_medial_epicondyles_pt"
HAnimSite1092.DEF = "hanim_l_humeral_medial_epicondyles_pt"
HAnimSite1092.translation = [0.1735,1.1272,-0.1113]
TouchSensor1093 = x3d.TouchSensor()
TouchSensor1093.description = "HAnimSite l_humeral_medial_epicondyles_pt"

HAnimSite1092.children.append(TouchSensor1093)
Shape1094 = x3d.Shape()
Shape1094.USE = "HAnimSiteShape"

HAnimSite1092.children.append(Shape1094)

HAnimSegment1084.children.append(HAnimSite1092)
HAnimSite1095 = x3d.HAnimSite()
HAnimSite1095.name = "l_olecranon_pt"
HAnimSite1095.DEF = "hanim_l_olecranon_pt"
HAnimSite1095.translation = [-0.1962,1.1375,-0.1123]
TouchSensor1096 = x3d.TouchSensor()
TouchSensor1096.description = "HAnimSite l_olecranon_pt"

HAnimSite1095.children.append(TouchSensor1096)
Shape1097 = x3d.Shape()
Shape1097.USE = "HAnimSiteShape"

HAnimSite1095.children.append(Shape1097)

HAnimSegment1084.children.append(HAnimSite1095)
HAnimSite1098 = x3d.HAnimSite()
HAnimSite1098.name = "l_radial_styloid_pt"
HAnimSite1098.DEF = "hanim_l_radial_styloid_pt"
HAnimSite1098.translation = [0.1901,0.8645,-0.0415]
TouchSensor1099 = x3d.TouchSensor()
TouchSensor1099.description = "HAnimSite l_radial_styloid_pt"

HAnimSite1098.children.append(TouchSensor1099)
Shape1100 = x3d.Shape()
Shape1100.USE = "HAnimSiteShape"

HAnimSite1098.children.append(Shape1100)

HAnimSegment1084.children.append(HAnimSite1098)
HAnimSite1101 = x3d.HAnimSite()
HAnimSite1101.name = "l_radiale_pt"
HAnimSite1101.DEF = "hanim_l_radiale_pt"
HAnimSite1101.translation = [0.2182,1.1212,-0.1167]
TouchSensor1102 = x3d.TouchSensor()
TouchSensor1102.description = "HAnimSite l_radiale_pt"

HAnimSite1101.children.append(TouchSensor1102)
Shape1103 = x3d.Shape()
Shape1103.USE = "HAnimSiteShape"

HAnimSite1101.children.append(Shape1103)

HAnimSegment1084.children.append(HAnimSite1101)

HAnimJoint1083.children.append(HAnimSegment1084)
HAnimJoint1104 = x3d.HAnimJoint()
HAnimJoint1104.name = "l_elbow"
HAnimJoint1104.DEF = "hanim_l_elbow"
HAnimJoint1104.center = [0.2014,1.1357,-0.0682]
HAnimJoint1104.ulimit = [0,0,0]
HAnimJoint1104.llimit = [0,0,0]
HAnimSegment1105 = x3d.HAnimSegment()
HAnimSegment1105.name = "l_forearm"
HAnimSegment1105.DEF = "hanim_l_forearm"
Transform1106 = x3d.Transform()
"""Empty Transform"""
Transform1107 = x3d.Transform()
"""Empty Transform"""
Shape1108 = x3d.Shape()
Shape1108.USE = "HAnimJointShape"

Transform1107.children.append(Shape1108)

Transform1106.children.append(Transform1107)

HAnimSegment1105.children.append(Transform1106)
Shape1109 = x3d.Shape()
LineSet1110 = x3d.LineSet()
LineSet1110.vertexCount = [2]
Coordinate1111 = x3d.Coordinate()

LineSet1110.coord = Coordinate1111
"""from l_elbow to l_radiocarpal vertices 2"""
ColorRGBA1112 = x3d.ColorRGBA()
ColorRGBA1112.USE = "HAnimSegmentLineColorRGBA"

LineSet1110.color = ColorRGBA1112

Shape1109.geometry = LineSet1110

HAnimSegment1105.children.append(Shape1109)
HAnimSite1113 = x3d.HAnimSite()
HAnimSite1113.name = "l_ulnar_styloid_pt"
HAnimSite1113.DEF = "hanim_l_ulnar_styloid_pt"
HAnimSite1113.translation = [-0.2142,0.8529,-0.0648]
TouchSensor1114 = x3d.TouchSensor()
TouchSensor1114.description = "HAnimSite l_ulnar_styloid_pt"

HAnimSite1113.children.append(TouchSensor1114)
Shape1115 = x3d.Shape()
Shape1115.USE = "HAnimSiteShape"

HAnimSite1113.children.append(Shape1115)

HAnimSegment1105.children.append(HAnimSite1113)

HAnimJoint1104.children.append(HAnimSegment1105)
HAnimJoint1116 = x3d.HAnimJoint()
HAnimJoint1116.name = "l_radiocarpal"
HAnimJoint1116.DEF = "hanim_l_radiocarpal"
HAnimJoint1116.center = [0.1984,0.8663,-0.0583]
HAnimJoint1116.ulimit = [0,0,0]
HAnimJoint1116.llimit = [0,0,0]
HAnimSegment1117 = x3d.HAnimSegment()
HAnimSegment1117.name = "l_carpal"
HAnimSegment1117.DEF = "hanim_l_carpal"
Transform1118 = x3d.Transform()
Transform1118.scale = [0.2,0.2,0.2]
Transform1118.translation = [0.2,0.85,-0.05]
Transform1118.rotation = [0,0,1,-3.14]
"""Transform left hand"""
Transform1119 = x3d.Transform()
Transform1119.rotation = [0,1,0,-1.57]
"""Transform left hand"""
Shape1120 = x3d.Shape()
Shape1120.USE = "HAnimJointShape"

Transform1119.children.append(Shape1120)

Transform1118.children.append(Transform1119)

HAnimSegment1117.children.append(Transform1118)
Shape1121 = x3d.Shape()
LineSet1122 = x3d.LineSet()
LineSet1122.vertexCount = [2]
Coordinate1123 = x3d.Coordinate()

LineSet1122.coord = Coordinate1123
"""from l_radiocarpal to l_midcarpal_1 vertices 2"""
ColorRGBA1124 = x3d.ColorRGBA()
ColorRGBA1124.USE = "HAnimSegmentLineColorRGBA"

LineSet1122.color = ColorRGBA1124

Shape1121.geometry = LineSet1122

HAnimSegment1117.children.append(Shape1121)
Shape1125 = x3d.Shape()
LineSet1126 = x3d.LineSet()
LineSet1126.vertexCount = [2]
Coordinate1127 = x3d.Coordinate()

LineSet1126.coord = Coordinate1127
"""from l_radiocarpal to l_midcarpal_2 vertices 2"""
ColorRGBA1128 = x3d.ColorRGBA()
ColorRGBA1128.USE = "HAnimSegmentLineColorRGBA"

LineSet1126.color = ColorRGBA1128

Shape1125.geometry = LineSet1126

HAnimSegment1117.children.append(Shape1125)
Shape1129 = x3d.Shape()
LineSet1130 = x3d.LineSet()
LineSet1130.vertexCount = [2]
Coordinate1131 = x3d.Coordinate()

LineSet1130.coord = Coordinate1131
"""from l_radiocarpal to l_midcarpal_3 vertices 2"""
ColorRGBA1132 = x3d.ColorRGBA()
ColorRGBA1132.USE = "HAnimSegmentLineColorRGBA"

LineSet1130.color = ColorRGBA1132

Shape1129.geometry = LineSet1130

HAnimSegment1117.children.append(Shape1129)
Shape1133 = x3d.Shape()
LineSet1134 = x3d.LineSet()
LineSet1134.vertexCount = [2]
Coordinate1135 = x3d.Coordinate()

LineSet1134.coord = Coordinate1135
"""from l_radiocarpal to l_midcarpal_4_5 vertices 2"""
ColorRGBA1136 = x3d.ColorRGBA()
ColorRGBA1136.USE = "HAnimSegmentLineColorRGBA"

LineSet1134.color = ColorRGBA1136

Shape1133.geometry = LineSet1134

HAnimSegment1117.children.append(Shape1133)

HAnimJoint1116.children.append(HAnimSegment1117)
HAnimJoint1137 = x3d.HAnimJoint()
HAnimJoint1137.name = "l_midcarpal_1"
HAnimJoint1137.DEF = "hanim_l_midcarpal_1"
HAnimJoint1137.center = [0,1,0]
HAnimJoint1137.ulimit = [0,0,0]
HAnimJoint1137.llimit = [0,0,0]
HAnimSegment1138 = x3d.HAnimSegment()
HAnimSegment1138.name = "l_trapezium"
HAnimSegment1138.DEF = "hanim_l_trapezium"
Transform1139 = x3d.Transform()
"""Empty Transform"""
Transform1140 = x3d.Transform()
"""Empty Transform"""
Shape1141 = x3d.Shape()
Shape1141.USE = "HAnimJointShape"

Transform1140.children.append(Shape1141)

Transform1139.children.append(Transform1140)

HAnimSegment1138.children.append(Transform1139)
Shape1142 = x3d.Shape()
LineSet1143 = x3d.LineSet()
LineSet1143.vertexCount = [2]
Coordinate1144 = x3d.Coordinate()

LineSet1143.coord = Coordinate1144
"""from l_midcarpal_1 to l_carpometacarpal_1 vertices 2"""
ColorRGBA1145 = x3d.ColorRGBA()
ColorRGBA1145.USE = "HAnimSegmentLineColorRGBA"

LineSet1143.color = ColorRGBA1145

Shape1142.geometry = LineSet1143

HAnimSegment1138.children.append(Shape1142)

HAnimJoint1137.children.append(HAnimSegment1138)
HAnimJoint1146 = x3d.HAnimJoint()
HAnimJoint1146.name = "l_carpometacarpal_1"
HAnimJoint1146.DEF = "hanim_l_carpometacarpal_1"
HAnimJoint1146.center = [0.1924,0.8472,-0.0534]
HAnimJoint1146.ulimit = [0,0,0]
HAnimJoint1146.llimit = [0,0,0]
HAnimSegment1147 = x3d.HAnimSegment()
HAnimSegment1147.name = "l_metacarpal_1"
HAnimSegment1147.DEF = "hanim_l_metacarpal_1"
Transform1148 = x3d.Transform()
"""Empty Transform"""
Transform1149 = x3d.Transform()
"""Empty Transform"""
Shape1150 = x3d.Shape()
Shape1150.USE = "HAnimJointShape"

Transform1149.children.append(Shape1150)

Transform1148.children.append(Transform1149)

HAnimSegment1147.children.append(Transform1148)
Shape1151 = x3d.Shape()
LineSet1152 = x3d.LineSet()
LineSet1152.vertexCount = [2]
Coordinate1153 = x3d.Coordinate()

LineSet1152.coord = Coordinate1153
"""from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2"""
ColorRGBA1154 = x3d.ColorRGBA()
ColorRGBA1154.USE = "HAnimSegmentLineColorRGBA"

LineSet1152.color = ColorRGBA1154

Shape1151.geometry = LineSet1152

HAnimSegment1147.children.append(Shape1151)

HAnimJoint1146.children.append(HAnimSegment1147)
HAnimJoint1155 = x3d.HAnimJoint()
HAnimJoint1155.name = "l_metacarpophalangeal_1"
HAnimJoint1155.DEF = "hanim_l_metacarpophalangeal_1"
HAnimJoint1155.center = [0.1951,0.8226,0.0246]
HAnimJoint1155.ulimit = [0,0,0]
HAnimJoint1155.llimit = [0,0,0]
HAnimSegment1156 = x3d.HAnimSegment()
HAnimSegment1156.name = "l_carpal_proximal_phalanx_1"
HAnimSegment1156.DEF = "hanim_l_carpal_proximal_phalanx_1"
Transform1157 = x3d.Transform()
"""Empty Transform"""
Transform1158 = x3d.Transform()
"""Empty Transform"""
Shape1159 = x3d.Shape()
Shape1159.USE = "HAnimJointShape"

Transform1158.children.append(Shape1159)

Transform1157.children.append(Transform1158)

HAnimSegment1156.children.append(Transform1157)
Shape1160 = x3d.Shape()
LineSet1161 = x3d.LineSet()
LineSet1161.vertexCount = [2]
Coordinate1162 = x3d.Coordinate()

LineSet1161.coord = Coordinate1162
"""from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2"""
ColorRGBA1163 = x3d.ColorRGBA()
ColorRGBA1163.USE = "HAnimSegmentLineColorRGBA"

LineSet1161.color = ColorRGBA1163

Shape1160.geometry = LineSet1161

HAnimSegment1156.children.append(Shape1160)
HAnimSite1164 = x3d.HAnimSite()
HAnimSite1164.name = "l_carpal_distal_phalanx_1_tip"
HAnimSite1164.DEF = "hanim_l_carpal_distal_phalanx_1_tip"
HAnimSite1164.translation = [0,1,0]
TouchSensor1165 = x3d.TouchSensor()
TouchSensor1165.description = "HAnimSite l_carpal_distal_phalanx_1_tip"

HAnimSite1164.children.append(TouchSensor1165)
Shape1166 = x3d.Shape()
Shape1166.USE = "HAnimSiteShape"

HAnimSite1164.children.append(Shape1166)

HAnimSegment1156.children.append(HAnimSite1164)

HAnimJoint1155.children.append(HAnimSegment1156)
HAnimJoint1167 = x3d.HAnimJoint()
HAnimJoint1167.name = "l_carpal_interphalangeal_1"
HAnimJoint1167.DEF = "hanim_l_carpal_interphalangeal_1"
HAnimJoint1167.center = [0.1955,0.8159,0.0464]
HAnimJoint1167.ulimit = [0,0,0]
HAnimJoint1167.llimit = [0,0,0]

HAnimJoint1155.children.append(HAnimJoint1167)

HAnimJoint1146.children.append(HAnimJoint1155)

HAnimJoint1137.children.append(HAnimJoint1146)

HAnimJoint1116.children.append(HAnimJoint1137)
HAnimJoint1168 = x3d.HAnimJoint()
HAnimJoint1168.name = "l_midcarpal_2"
HAnimJoint1168.DEF = "hanim_l_midcarpal_2"
HAnimJoint1168.center = [0,1,0]
HAnimJoint1168.ulimit = [0,0,0]
HAnimJoint1168.llimit = [0,0,0]
HAnimSegment1169 = x3d.HAnimSegment()
HAnimSegment1169.name = "l_trapezoid"
HAnimSegment1169.DEF = "hanim_l_trapezoid"
Transform1170 = x3d.Transform()
"""Empty Transform"""
Transform1171 = x3d.Transform()
"""Empty Transform"""
Shape1172 = x3d.Shape()
Shape1172.USE = "HAnimJointShape"

Transform1171.children.append(Shape1172)

Transform1170.children.append(Transform1171)

HAnimSegment1169.children.append(Transform1170)
Shape1173 = x3d.Shape()
LineSet1174 = x3d.LineSet()
LineSet1174.vertexCount = [2]
Coordinate1175 = x3d.Coordinate()

LineSet1174.coord = Coordinate1175
"""from l_midcarpal_2 to l_carpometacarpal_2 vertices 2"""
ColorRGBA1176 = x3d.ColorRGBA()
ColorRGBA1176.USE = "HAnimSegmentLineColorRGBA"

LineSet1174.color = ColorRGBA1176

Shape1173.geometry = LineSet1174

HAnimSegment1169.children.append(Shape1173)
HAnimSite1177 = x3d.HAnimSite()
HAnimSite1177.name = "l_metacarpal_phalanx_2_pt"
HAnimSite1177.DEF = "hanim_l_metacarpal_phalanx_2_pt"
HAnimSite1177.translation = [0.2009,0.8139,-0.0237]
TouchSensor1178 = x3d.TouchSensor()
TouchSensor1178.description = "HAnimSite l_metacarpal_phalanx_2_pt"

HAnimSite1177.children.append(TouchSensor1178)
Shape1179 = x3d.Shape()
Shape1179.USE = "HAnimSiteShape"

HAnimSite1177.children.append(Shape1179)

HAnimSegment1169.children.append(HAnimSite1177)

HAnimJoint1168.children.append(HAnimSegment1169)
HAnimJoint1180 = x3d.HAnimJoint()
HAnimJoint1180.name = "l_carpometacarpal_2"
HAnimJoint1180.DEF = "hanim_l_carpometacarpal_2"
HAnimJoint1180.center = [0.1983,0.8024,-0.028]
HAnimJoint1180.ulimit = [0,0,0]
HAnimJoint1180.llimit = [0,0,0]
HAnimSegment1181 = x3d.HAnimSegment()
HAnimSegment1181.name = "l_metacarpal_2"
HAnimSegment1181.DEF = "hanim_l_metacarpal_2"
Transform1182 = x3d.Transform()
"""Empty Transform"""
Transform1183 = x3d.Transform()
"""Empty Transform"""
Shape1184 = x3d.Shape()
Shape1184.USE = "HAnimJointShape"

Transform1183.children.append(Shape1184)

Transform1182.children.append(Transform1183)

HAnimSegment1181.children.append(Transform1182)
Shape1185 = x3d.Shape()
LineSet1186 = x3d.LineSet()
LineSet1186.vertexCount = [2]
Coordinate1187 = x3d.Coordinate()

LineSet1186.coord = Coordinate1187
"""from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2"""
ColorRGBA1188 = x3d.ColorRGBA()
ColorRGBA1188.USE = "HAnimSegmentLineColorRGBA"

LineSet1186.color = ColorRGBA1188

Shape1185.geometry = LineSet1186

HAnimSegment1181.children.append(Shape1185)

HAnimJoint1180.children.append(HAnimSegment1181)
HAnimJoint1189 = x3d.HAnimJoint()
HAnimJoint1189.name = "l_metacarpophalangeal_2"
HAnimJoint1189.DEF = "hanim_l_metacarpophalangeal_2"
HAnimJoint1189.center = [0.1983,0.7815,-0.028]
HAnimJoint1189.ulimit = [0,0,0]
HAnimJoint1189.llimit = [0,0,0]
HAnimSegment1190 = x3d.HAnimSegment()
HAnimSegment1190.name = "l_carpal_proximal_phalanx_2"
HAnimSegment1190.DEF = "hanim_l_carpal_proximal_phalanx_2"
Transform1191 = x3d.Transform()
"""Empty Transform"""
Transform1192 = x3d.Transform()
"""Empty Transform"""
Shape1193 = x3d.Shape()
Shape1193.USE = "HAnimJointShape"

Transform1192.children.append(Shape1193)

Transform1191.children.append(Transform1192)

HAnimSegment1190.children.append(Transform1191)
Shape1194 = x3d.Shape()
LineSet1195 = x3d.LineSet()
LineSet1195.vertexCount = [2]
Coordinate1196 = x3d.Coordinate()

LineSet1195.coord = Coordinate1196
"""from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2"""
ColorRGBA1197 = x3d.ColorRGBA()
ColorRGBA1197.USE = "HAnimSegmentLineColorRGBA"

LineSet1195.color = ColorRGBA1197

Shape1194.geometry = LineSet1195

HAnimSegment1190.children.append(Shape1194)

HAnimJoint1189.children.append(HAnimSegment1190)
HAnimJoint1198 = x3d.HAnimJoint()
HAnimJoint1198.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint1198.DEF = "hanim_l_carpal_proximal_interphalangeal_2"
HAnimJoint1198.center = [0.2017,0.7363,-0.0248]
HAnimJoint1198.ulimit = [0,0,0]
HAnimJoint1198.llimit = [0,0,0]
HAnimSegment1199 = x3d.HAnimSegment()
HAnimSegment1199.name = "l_carpal_middle_phalanx_2"
HAnimSegment1199.DEF = "hanim_l_carpal_middle_phalanx_2"
Transform1200 = x3d.Transform()
"""Empty Transform"""
Transform1201 = x3d.Transform()
"""Empty Transform"""
Shape1202 = x3d.Shape()
Shape1202.USE = "HAnimJointShape"

Transform1201.children.append(Shape1202)

Transform1200.children.append(Transform1201)

HAnimSegment1199.children.append(Transform1200)
Shape1203 = x3d.Shape()
LineSet1204 = x3d.LineSet()
LineSet1204.vertexCount = [2]
Coordinate1205 = x3d.Coordinate()

LineSet1204.coord = Coordinate1205
"""from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2"""
ColorRGBA1206 = x3d.ColorRGBA()
ColorRGBA1206.USE = "HAnimSegmentLineColorRGBA"

LineSet1204.color = ColorRGBA1206

Shape1203.geometry = LineSet1204

HAnimSegment1199.children.append(Shape1203)
HAnimSite1207 = x3d.HAnimSite()
HAnimSite1207.name = "l_carpal_distal_phalanx_2_tip"
HAnimSite1207.DEF = "hanim_l_carpal_distal_phalanx_2_tip"
HAnimSite1207.translation = [0,1,0]
TouchSensor1208 = x3d.TouchSensor()
TouchSensor1208.description = "HAnimSite l_carpal_distal_phalanx_2_tip"

HAnimSite1207.children.append(TouchSensor1208)
Shape1209 = x3d.Shape()
Shape1209.USE = "HAnimSiteShape"

HAnimSite1207.children.append(Shape1209)

HAnimSegment1199.children.append(HAnimSite1207)
HAnimSite1210 = x3d.HAnimSite()
HAnimSite1210.name = "l_dactylion_pt"
HAnimSite1210.DEF = "hanim_l_dactylion_pt"
HAnimSite1210.translation = [0.2056,0.6743,-0.0482]
TouchSensor1211 = x3d.TouchSensor()
TouchSensor1211.description = "HAnimSite l_dactylion_pt"

HAnimSite1210.children.append(TouchSensor1211)
Shape1212 = x3d.Shape()
Shape1212.USE = "HAnimSiteShape"

HAnimSite1210.children.append(Shape1212)

HAnimSegment1199.children.append(HAnimSite1210)

HAnimJoint1198.children.append(HAnimSegment1199)
HAnimJoint1213 = x3d.HAnimJoint()
HAnimJoint1213.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint1213.DEF = "hanim_l_carpal_distal_interphalangeal_2"
HAnimJoint1213.center = [0.2028,0.7139,-0.0236]
HAnimJoint1213.ulimit = [0,0,0]
HAnimJoint1213.llimit = [0,0,0]

HAnimJoint1198.children.append(HAnimJoint1213)

HAnimJoint1189.children.append(HAnimJoint1198)

HAnimJoint1180.children.append(HAnimJoint1189)

HAnimJoint1168.children.append(HAnimJoint1180)

HAnimJoint1116.children.append(HAnimJoint1168)
HAnimJoint1214 = x3d.HAnimJoint()
HAnimJoint1214.name = "l_midcarpal_3"
HAnimJoint1214.DEF = "hanim_l_midcarpal_3"
HAnimJoint1214.center = [0,1,0]
HAnimJoint1214.ulimit = [0,0,0]
HAnimJoint1214.llimit = [0,0,0]
HAnimSegment1215 = x3d.HAnimSegment()
HAnimSegment1215.name = "l_capitate"
HAnimSegment1215.DEF = "hanim_l_capitate"
Transform1216 = x3d.Transform()
"""Empty Transform"""
Transform1217 = x3d.Transform()
"""Empty Transform"""
Shape1218 = x3d.Shape()
Shape1218.USE = "HAnimJointShape"

Transform1217.children.append(Shape1218)

Transform1216.children.append(Transform1217)

HAnimSegment1215.children.append(Transform1216)
Shape1219 = x3d.Shape()
LineSet1220 = x3d.LineSet()
LineSet1220.vertexCount = [2]
Coordinate1221 = x3d.Coordinate()

LineSet1220.coord = Coordinate1221
"""from l_midcarpal_3 to l_carpometacarpal_3 vertices 2"""
ColorRGBA1222 = x3d.ColorRGBA()
ColorRGBA1222.USE = "HAnimSegmentLineColorRGBA"

LineSet1220.color = ColorRGBA1222

Shape1219.geometry = LineSet1220

HAnimSegment1215.children.append(Shape1219)
HAnimSite1223 = x3d.HAnimSite()
HAnimSite1223.name = "l_metacarpal_phalanx_3_pt"
HAnimSite1223.DEF = "hanim_l_metacarpal_phalanx_3_pt"
HAnimSite1223.translation = [0,1,0]
TouchSensor1224 = x3d.TouchSensor()
TouchSensor1224.description = "HAnimSite l_metacarpal_phalanx_3_pt"

HAnimSite1223.children.append(TouchSensor1224)
Shape1225 = x3d.Shape()
Shape1225.USE = "HAnimSiteShape"

HAnimSite1223.children.append(Shape1225)

HAnimSegment1215.children.append(HAnimSite1223)

HAnimJoint1214.children.append(HAnimSegment1215)
HAnimJoint1226 = x3d.HAnimJoint()
HAnimJoint1226.name = "l_carpometacarpal_3"
HAnimJoint1226.DEF = "hanim_l_carpometacarpal_3"
HAnimJoint1226.center = [0.1987,0.8029,-0.053]
HAnimJoint1226.ulimit = [0,0,0]
HAnimJoint1226.llimit = [0,0,0]
HAnimSegment1227 = x3d.HAnimSegment()
HAnimSegment1227.name = "l_metacarpal_3"
HAnimSegment1227.DEF = "hanim_l_metacarpal_3"
Transform1228 = x3d.Transform()
"""Empty Transform"""
Transform1229 = x3d.Transform()
"""Empty Transform"""
Shape1230 = x3d.Shape()
Shape1230.USE = "HAnimJointShape"

Transform1229.children.append(Shape1230)

Transform1228.children.append(Transform1229)

HAnimSegment1227.children.append(Transform1228)
Shape1231 = x3d.Shape()
LineSet1232 = x3d.LineSet()
LineSet1232.vertexCount = [2]
Coordinate1233 = x3d.Coordinate()

LineSet1232.coord = Coordinate1233
"""from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2"""
ColorRGBA1234 = x3d.ColorRGBA()
ColorRGBA1234.USE = "HAnimSegmentLineColorRGBA"

LineSet1232.color = ColorRGBA1234

Shape1231.geometry = LineSet1232

HAnimSegment1227.children.append(Shape1231)

HAnimJoint1226.children.append(HAnimSegment1227)
HAnimJoint1235 = x3d.HAnimJoint()
HAnimJoint1235.name = "l_metacarpophalangeal_3"
HAnimJoint1235.DEF = "hanim_l_metacarpophalangeal_3"
HAnimJoint1235.center = [0.1987,0.7818,-0.053]
HAnimJoint1235.ulimit = [0,0,0]
HAnimJoint1235.llimit = [0,0,0]
HAnimSegment1236 = x3d.HAnimSegment()
HAnimSegment1236.name = "l_carpal_proximal_phalanx_3"
HAnimSegment1236.DEF = "hanim_l_carpal_proximal_phalanx_3"
Transform1237 = x3d.Transform()
"""Empty Transform"""
Transform1238 = x3d.Transform()
"""Empty Transform"""
Shape1239 = x3d.Shape()
Shape1239.USE = "HAnimJointShape"

Transform1238.children.append(Shape1239)

Transform1237.children.append(Transform1238)

HAnimSegment1236.children.append(Transform1237)
Shape1240 = x3d.Shape()
LineSet1241 = x3d.LineSet()
LineSet1241.vertexCount = [2]
Coordinate1242 = x3d.Coordinate()

LineSet1241.coord = Coordinate1242
"""from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2"""
ColorRGBA1243 = x3d.ColorRGBA()
ColorRGBA1243.USE = "HAnimSegmentLineColorRGBA"

LineSet1241.color = ColorRGBA1243

Shape1240.geometry = LineSet1241

HAnimSegment1236.children.append(Shape1240)

HAnimJoint1235.children.append(HAnimSegment1236)
HAnimJoint1244 = x3d.HAnimJoint()
HAnimJoint1244.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint1244.DEF = "hanim_l_carpal_proximal_interphalangeal_3"
HAnimJoint1244.center = [0.2013,0.7273,-0.0503]
HAnimJoint1244.ulimit = [0,0,0]
HAnimJoint1244.llimit = [0,0,0]
HAnimSegment1245 = x3d.HAnimSegment()
HAnimSegment1245.name = "l_carpal_middle_phalanx_3"
HAnimSegment1245.DEF = "hanim_l_carpal_middle_phalanx_3"
Transform1246 = x3d.Transform()
"""Empty Transform"""
Transform1247 = x3d.Transform()
"""Empty Transform"""
Shape1248 = x3d.Shape()
Shape1248.USE = "HAnimJointShape"

Transform1247.children.append(Shape1248)

Transform1246.children.append(Transform1247)

HAnimSegment1245.children.append(Transform1246)
Shape1249 = x3d.Shape()
LineSet1250 = x3d.LineSet()
LineSet1250.vertexCount = [2]
Coordinate1251 = x3d.Coordinate()

LineSet1250.coord = Coordinate1251
"""from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2"""
ColorRGBA1252 = x3d.ColorRGBA()
ColorRGBA1252.USE = "HAnimSegmentLineColorRGBA"

LineSet1250.color = ColorRGBA1252

Shape1249.geometry = LineSet1250

HAnimSegment1245.children.append(Shape1249)
HAnimSite1253 = x3d.HAnimSite()
HAnimSite1253.name = "l_carpal_distal_phalanx_3_tip"
HAnimSite1253.DEF = "hanim_l_carpal_distal_phalanx_3_tip"
HAnimSite1253.translation = [0,1,0]
TouchSensor1254 = x3d.TouchSensor()
TouchSensor1254.description = "HAnimSite l_carpal_distal_phalanx_3_tip"

HAnimSite1253.children.append(TouchSensor1254)
Shape1255 = x3d.Shape()
Shape1255.USE = "HAnimSiteShape"

HAnimSite1253.children.append(Shape1255)

HAnimSegment1245.children.append(HAnimSite1253)

HAnimJoint1244.children.append(HAnimSegment1245)
HAnimJoint1256 = x3d.HAnimJoint()
HAnimJoint1256.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint1256.DEF = "hanim_l_carpal_distal_interphalangeal_3"
HAnimJoint1256.center = [0.2026,0.7011,-0.0494]
HAnimJoint1256.ulimit = [0,0,0]
HAnimJoint1256.llimit = [0,0,0]

HAnimJoint1244.children.append(HAnimJoint1256)

HAnimJoint1235.children.append(HAnimJoint1244)

HAnimJoint1226.children.append(HAnimJoint1235)

HAnimJoint1214.children.append(HAnimJoint1226)

HAnimJoint1116.children.append(HAnimJoint1214)
HAnimJoint1257 = x3d.HAnimJoint()
HAnimJoint1257.name = "l_midcarpal_4_5"
HAnimJoint1257.DEF = "hanim_l_midcarpal_4_5"
HAnimJoint1257.center = [0,1,0]
HAnimJoint1257.ulimit = [0,0,0]
HAnimJoint1257.llimit = [0,0,0]
HAnimSegment1258 = x3d.HAnimSegment()
HAnimSegment1258.name = "l_hamate"
HAnimSegment1258.DEF = "hanim_l_hamate"
Transform1259 = x3d.Transform()
"""Empty Transform"""
Transform1260 = x3d.Transform()
"""Empty Transform"""
Shape1261 = x3d.Shape()
Shape1261.USE = "HAnimJointShape"

Transform1260.children.append(Shape1261)

Transform1259.children.append(Transform1260)

HAnimSegment1258.children.append(Transform1259)
Shape1262 = x3d.Shape()
LineSet1263 = x3d.LineSet()
LineSet1263.vertexCount = [2]
Coordinate1264 = x3d.Coordinate()

LineSet1263.coord = Coordinate1264
"""from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2"""
ColorRGBA1265 = x3d.ColorRGBA()
ColorRGBA1265.USE = "HAnimSegmentLineColorRGBA"

LineSet1263.color = ColorRGBA1265

Shape1262.geometry = LineSet1263

HAnimSegment1258.children.append(Shape1262)
Shape1266 = x3d.Shape()
LineSet1267 = x3d.LineSet()
LineSet1267.vertexCount = [2]
Coordinate1268 = x3d.Coordinate()

LineSet1267.coord = Coordinate1268
"""from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2"""
ColorRGBA1269 = x3d.ColorRGBA()
ColorRGBA1269.USE = "HAnimSegmentLineColorRGBA"

LineSet1267.color = ColorRGBA1269

Shape1266.geometry = LineSet1267

HAnimSegment1258.children.append(Shape1266)
HAnimSite1270 = x3d.HAnimSite()
HAnimSite1270.name = "l_metacarpal_phalanx_5_pt"
HAnimSite1270.DEF = "hanim_l_metacarpal_phalanx_5_pt"
HAnimSite1270.translation = [0.1929,0.786,-0.1122]
TouchSensor1271 = x3d.TouchSensor()
TouchSensor1271.description = "HAnimSite l_metacarpal_phalanx_5_pt"

HAnimSite1270.children.append(TouchSensor1271)
Shape1272 = x3d.Shape()
Shape1272.USE = "HAnimSiteShape"

HAnimSite1270.children.append(Shape1272)

HAnimSegment1258.children.append(HAnimSite1270)

HAnimJoint1257.children.append(HAnimSegment1258)
HAnimJoint1273 = x3d.HAnimJoint()
HAnimJoint1273.name = "l_carpometacarpal_4"
HAnimJoint1273.DEF = "hanim_l_carpometacarpal_4"
HAnimJoint1273.center = [0.1956,0.8019,-0.0794]
HAnimJoint1273.ulimit = [0,0,0]
HAnimJoint1273.llimit = [0,0,0]
HAnimSegment1274 = x3d.HAnimSegment()
HAnimSegment1274.name = "l_metacarpal_4"
HAnimSegment1274.DEF = "hanim_l_metacarpal_4"
Transform1275 = x3d.Transform()
"""Empty Transform"""
Transform1276 = x3d.Transform()
"""Empty Transform"""
Shape1277 = x3d.Shape()
Shape1277.USE = "HAnimJointShape"

Transform1276.children.append(Shape1277)

Transform1275.children.append(Transform1276)

HAnimSegment1274.children.append(Transform1275)
Shape1278 = x3d.Shape()
LineSet1279 = x3d.LineSet()
LineSet1279.vertexCount = [2]
Coordinate1280 = x3d.Coordinate()

LineSet1279.coord = Coordinate1280
"""from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2"""
ColorRGBA1281 = x3d.ColorRGBA()
ColorRGBA1281.USE = "HAnimSegmentLineColorRGBA"

LineSet1279.color = ColorRGBA1281

Shape1278.geometry = LineSet1279

HAnimSegment1274.children.append(Shape1278)

HAnimJoint1273.children.append(HAnimSegment1274)
HAnimJoint1282 = x3d.HAnimJoint()
HAnimJoint1282.name = "l_metacarpophalangeal_4"
HAnimJoint1282.DEF = "hanim_l_metacarpophalangeal_4"
HAnimJoint1282.center = [0.1956,0.7815,-0.0794]
HAnimJoint1282.ulimit = [0,0,0]
HAnimJoint1282.llimit = [0,0,0]
HAnimSegment1283 = x3d.HAnimSegment()
HAnimSegment1283.name = "l_carpal_proximal_phalanx_4"
HAnimSegment1283.DEF = "hanim_l_carpal_proximal_phalanx_4"
Transform1284 = x3d.Transform()
"""Empty Transform"""
Transform1285 = x3d.Transform()
"""Empty Transform"""
Shape1286 = x3d.Shape()
Shape1286.USE = "HAnimJointShape"

Transform1285.children.append(Shape1286)

Transform1284.children.append(Transform1285)

HAnimSegment1283.children.append(Transform1284)
Shape1287 = x3d.Shape()
LineSet1288 = x3d.LineSet()
LineSet1288.vertexCount = [2]
Coordinate1289 = x3d.Coordinate()

LineSet1288.coord = Coordinate1289
"""from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2"""
ColorRGBA1290 = x3d.ColorRGBA()
ColorRGBA1290.USE = "HAnimSegmentLineColorRGBA"

LineSet1288.color = ColorRGBA1290

Shape1287.geometry = LineSet1288

HAnimSegment1283.children.append(Shape1287)

HAnimJoint1282.children.append(HAnimSegment1283)
HAnimJoint1291 = x3d.HAnimJoint()
HAnimJoint1291.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint1291.DEF = "hanim_l_carpal_proximal_interphalangeal_4"
HAnimJoint1291.center = [0.1973,0.7287,-0.0777]
HAnimJoint1291.ulimit = [0,0,0]
HAnimJoint1291.llimit = [0,0,0]
HAnimSegment1292 = x3d.HAnimSegment()
HAnimSegment1292.name = "l_carpal_middle_phalanx_4"
HAnimSegment1292.DEF = "hanim_l_carpal_middle_phalanx_4"
Transform1293 = x3d.Transform()
"""Empty Transform"""
Transform1294 = x3d.Transform()
"""Empty Transform"""
Shape1295 = x3d.Shape()
Shape1295.USE = "HAnimJointShape"

Transform1294.children.append(Shape1295)

Transform1293.children.append(Transform1294)

HAnimSegment1292.children.append(Transform1293)
Shape1296 = x3d.Shape()
LineSet1297 = x3d.LineSet()
LineSet1297.vertexCount = [2]
Coordinate1298 = x3d.Coordinate()

LineSet1297.coord = Coordinate1298
"""from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2"""
ColorRGBA1299 = x3d.ColorRGBA()
ColorRGBA1299.USE = "HAnimSegmentLineColorRGBA"

LineSet1297.color = ColorRGBA1299

Shape1296.geometry = LineSet1297

HAnimSegment1292.children.append(Shape1296)
HAnimSite1300 = x3d.HAnimSite()
HAnimSite1300.name = "l_carpal_distal_phalanx_4_tip"
HAnimSite1300.DEF = "hanim_l_carpal_distal_phalanx_4_tip"
HAnimSite1300.translation = [0,1,0]
TouchSensor1301 = x3d.TouchSensor()
TouchSensor1301.description = "HAnimSite l_carpal_distal_phalanx_4_tip"

HAnimSite1300.children.append(TouchSensor1301)
Shape1302 = x3d.Shape()
Shape1302.USE = "HAnimSiteShape"

HAnimSite1300.children.append(Shape1302)

HAnimSegment1292.children.append(HAnimSite1300)

HAnimJoint1291.children.append(HAnimSegment1292)
HAnimJoint1303 = x3d.HAnimJoint()
HAnimJoint1303.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint1303.DEF = "hanim_l_carpal_distal_interphalangeal_4"
HAnimJoint1303.center = [0.1983,0.7045,-0.0767]
HAnimJoint1303.ulimit = [0,0,0]
HAnimJoint1303.llimit = [0,0,0]

HAnimJoint1291.children.append(HAnimJoint1303)

HAnimJoint1282.children.append(HAnimJoint1291)

HAnimJoint1273.children.append(HAnimJoint1282)

HAnimJoint1257.children.append(HAnimJoint1273)
HAnimJoint1304 = x3d.HAnimJoint()
HAnimJoint1304.name = "l_carpometacarpal_5"
HAnimJoint1304.DEF = "hanim_l_carpometacarpal_5"
HAnimJoint1304.center = [0.1925,0.8066,-0.1036]
HAnimJoint1304.ulimit = [0,0,0]
HAnimJoint1304.llimit = [0,0,0]
HAnimSegment1305 = x3d.HAnimSegment()
HAnimSegment1305.name = "l_metacarpal_5"
HAnimSegment1305.DEF = "hanim_l_metacarpal_5"
Transform1306 = x3d.Transform()
"""Empty Transform"""
Transform1307 = x3d.Transform()
"""Empty Transform"""
Shape1308 = x3d.Shape()
Shape1308.USE = "HAnimJointShape"

Transform1307.children.append(Shape1308)

Transform1306.children.append(Transform1307)

HAnimSegment1305.children.append(Transform1306)
Shape1309 = x3d.Shape()
LineSet1310 = x3d.LineSet()
LineSet1310.vertexCount = [2]
Coordinate1311 = x3d.Coordinate()

LineSet1310.coord = Coordinate1311
"""from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2"""
ColorRGBA1312 = x3d.ColorRGBA()
ColorRGBA1312.USE = "HAnimSegmentLineColorRGBA"

LineSet1310.color = ColorRGBA1312

Shape1309.geometry = LineSet1310

HAnimSegment1305.children.append(Shape1309)

HAnimJoint1304.children.append(HAnimSegment1305)
HAnimJoint1313 = x3d.HAnimJoint()
HAnimJoint1313.name = "l_metacarpophalangeal_5"
HAnimJoint1313.DEF = "hanim_l_metacarpophalangeal_5"
HAnimJoint1313.center = [0.1925,0.7866,-0.1036]
HAnimJoint1313.ulimit = [0,0,0]
HAnimJoint1313.llimit = [0,0,0]
HAnimSegment1314 = x3d.HAnimSegment()
HAnimSegment1314.name = "l_carpal_proximal_phalanx_5"
HAnimSegment1314.DEF = "hanim_l_carpal_proximal_phalanx_5"
Transform1315 = x3d.Transform()
"""Empty Transform"""
Transform1316 = x3d.Transform()
"""Empty Transform"""
Shape1317 = x3d.Shape()
Shape1317.USE = "HAnimJointShape"

Transform1316.children.append(Shape1317)

Transform1315.children.append(Transform1316)

HAnimSegment1314.children.append(Transform1315)
Shape1318 = x3d.Shape()
LineSet1319 = x3d.LineSet()
LineSet1319.vertexCount = [2]
Coordinate1320 = x3d.Coordinate()

LineSet1319.coord = Coordinate1320
"""from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2"""
ColorRGBA1321 = x3d.ColorRGBA()
ColorRGBA1321.USE = "HAnimSegmentLineColorRGBA"

LineSet1319.color = ColorRGBA1321

Shape1318.geometry = LineSet1319

HAnimSegment1314.children.append(Shape1318)

HAnimJoint1313.children.append(HAnimSegment1314)
HAnimJoint1322 = x3d.HAnimJoint()
HAnimJoint1322.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint1322.DEF = "hanim_l_carpal_proximal_interphalangeal_5"
HAnimJoint1322.center = [0.1938,0.7452,-0.1024]
HAnimJoint1322.ulimit = [0,0,0]
HAnimJoint1322.llimit = [0,0,0]
HAnimSegment1323 = x3d.HAnimSegment()
HAnimSegment1323.name = "l_carpal_middle_phalanx_5"
HAnimSegment1323.DEF = "hanim_l_carpal_middle_phalanx_5"
Transform1324 = x3d.Transform()
"""Empty Transform"""
Transform1325 = x3d.Transform()
"""Empty Transform"""
Shape1326 = x3d.Shape()
Shape1326.USE = "HAnimJointShape"

Transform1325.children.append(Shape1326)

Transform1324.children.append(Transform1325)

HAnimSegment1323.children.append(Transform1324)
Shape1327 = x3d.Shape()
LineSet1328 = x3d.LineSet()
LineSet1328.vertexCount = [2]
Coordinate1329 = x3d.Coordinate()

LineSet1328.coord = Coordinate1329
"""from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2"""
ColorRGBA1330 = x3d.ColorRGBA()
ColorRGBA1330.USE = "HAnimSegmentLineColorRGBA"

LineSet1328.color = ColorRGBA1330

Shape1327.geometry = LineSet1328

HAnimSegment1323.children.append(Shape1327)
HAnimSite1331 = x3d.HAnimSite()
HAnimSite1331.name = "l_carpal_distal_phalanx_5_tip"
HAnimSite1331.DEF = "hanim_l_carpal_distal_phalanx_5_tip"
HAnimSite1331.translation = [0,1,0]
TouchSensor1332 = x3d.TouchSensor()
TouchSensor1332.description = "HAnimSite l_carpal_distal_phalanx_5_tip"

HAnimSite1331.children.append(TouchSensor1332)
Shape1333 = x3d.Shape()
Shape1333.USE = "HAnimSiteShape"

HAnimSite1331.children.append(Shape1333)

HAnimSegment1323.children.append(HAnimSite1331)

HAnimJoint1322.children.append(HAnimSegment1323)
HAnimJoint1334 = x3d.HAnimJoint()
HAnimJoint1334.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint1334.DEF = "hanim_l_carpal_distal_interphalangeal_5"
HAnimJoint1334.center = [0.1948,0.7277,-0.1017]
HAnimJoint1334.ulimit = [0,0,0]
HAnimJoint1334.llimit = [0,0,0]

HAnimJoint1322.children.append(HAnimJoint1334)

HAnimJoint1313.children.append(HAnimJoint1322)

HAnimJoint1304.children.append(HAnimJoint1313)

HAnimJoint1257.children.append(HAnimJoint1304)

HAnimJoint1116.children.append(HAnimJoint1257)

HAnimJoint1104.children.append(HAnimJoint1116)

HAnimJoint1083.children.append(HAnimJoint1104)

HAnimJoint1068.children.append(HAnimJoint1083)

HAnimJoint1059.children.append(HAnimJoint1068)

HAnimJoint854.children.append(HAnimJoint1059)
HAnimJoint1335 = x3d.HAnimJoint()
HAnimJoint1335.name = "r_sternoclavicular"
HAnimJoint1335.DEF = "hanim_r_sternoclavicular"
HAnimJoint1335.center = [-0.0694,1.46,-0.033]
HAnimJoint1335.ulimit = [0,0,0]
HAnimJoint1335.llimit = [0,0,0]
HAnimSegment1336 = x3d.HAnimSegment()
HAnimSegment1336.name = "r_clavicle"
HAnimSegment1336.DEF = "hanim_r_clavicle"
Transform1337 = x3d.Transform()
"""Empty Transform"""
Transform1338 = x3d.Transform()
"""Empty Transform"""
Shape1339 = x3d.Shape()
Shape1339.USE = "HAnimJointShape"

Transform1338.children.append(Shape1339)

Transform1337.children.append(Transform1338)

HAnimSegment1336.children.append(Transform1337)
Shape1340 = x3d.Shape()
LineSet1341 = x3d.LineSet()
LineSet1341.vertexCount = [2]
Coordinate1342 = x3d.Coordinate()

LineSet1341.coord = Coordinate1342
"""from r_sternoclavicular to r_acromioclavicular vertices 2"""
ColorRGBA1343 = x3d.ColorRGBA()
ColorRGBA1343.USE = "HAnimSegmentLineColorRGBA"

LineSet1341.color = ColorRGBA1343

Shape1340.geometry = LineSet1341

HAnimSegment1336.children.append(Shape1340)

HAnimJoint1335.children.append(HAnimSegment1336)
HAnimJoint1344 = x3d.HAnimJoint()
HAnimJoint1344.name = "r_acromioclavicular"
HAnimJoint1344.DEF = "hanim_r_acromioclavicular"
HAnimJoint1344.center = [-0.0836,1.4281,-0.0401]
HAnimJoint1344.ulimit = [0,0,0]
HAnimJoint1344.llimit = [0,0,0]
HAnimSegment1345 = x3d.HAnimSegment()
HAnimSegment1345.name = "r_scapula"
HAnimSegment1345.DEF = "hanim_r_scapula"
Transform1346 = x3d.Transform()
"""Empty Transform"""
Transform1347 = x3d.Transform()
"""Empty Transform"""
Shape1348 = x3d.Shape()
Shape1348.USE = "HAnimJointShape"

Transform1347.children.append(Shape1348)

Transform1346.children.append(Transform1347)

HAnimSegment1345.children.append(Transform1346)
Shape1349 = x3d.Shape()
LineSet1350 = x3d.LineSet()
LineSet1350.vertexCount = [2]
Coordinate1351 = x3d.Coordinate()

LineSet1350.coord = Coordinate1351
"""from r_acromioclavicular to r_shoulder vertices 2"""
ColorRGBA1352 = x3d.ColorRGBA()
ColorRGBA1352.USE = "HAnimSegmentLineColorRGBA"

LineSet1350.color = ColorRGBA1352

Shape1349.geometry = LineSet1350

HAnimSegment1345.children.append(Shape1349)
HAnimSite1353 = x3d.HAnimSite()
HAnimSite1353.name = "r_bideltoid_pt"
HAnimSite1353.DEF = "hanim_r_bideltoid_pt"
HAnimSite1353.translation = [0,1,0]
TouchSensor1354 = x3d.TouchSensor()
TouchSensor1354.description = "HAnimSite r_bideltoid_pt"

HAnimSite1353.children.append(TouchSensor1354)
Shape1355 = x3d.Shape()
Shape1355.USE = "HAnimSiteShape"

HAnimSite1353.children.append(Shape1355)

HAnimSegment1345.children.append(HAnimSite1353)
HAnimSite1356 = x3d.HAnimSite()
HAnimSite1356.name = "r_humeral_lateral_epicondyles_pt"
HAnimSite1356.DEF = "hanim_r_humeral_lateral_epicondyles_pt"
HAnimSite1356.translation = [-0.2224,1.1517,-0.1033]
TouchSensor1357 = x3d.TouchSensor()
TouchSensor1357.description = "HAnimSite r_humeral_lateral_epicondyles_pt"

HAnimSite1356.children.append(TouchSensor1357)
Shape1358 = x3d.Shape()
Shape1358.USE = "HAnimSiteShape"

HAnimSite1356.children.append(Shape1358)

HAnimSegment1345.children.append(HAnimSite1356)

HAnimJoint1344.children.append(HAnimSegment1345)
HAnimJoint1359 = x3d.HAnimJoint()
HAnimJoint1359.name = "r_shoulder"
HAnimJoint1359.DEF = "hanim_r_shoulder"
HAnimJoint1359.center = [-0.1907,1.4407,-0.0325]
HAnimJoint1359.ulimit = [0,0,0]
HAnimJoint1359.llimit = [0,0,0]
HAnimSegment1360 = x3d.HAnimSegment()
HAnimSegment1360.name = "r_upperarm"
HAnimSegment1360.DEF = "hanim_r_upperarm"
Transform1361 = x3d.Transform()
"""Empty Transform"""
Transform1362 = x3d.Transform()
"""Empty Transform"""
Shape1363 = x3d.Shape()
Shape1363.USE = "HAnimJointShape"

Transform1362.children.append(Shape1363)

Transform1361.children.append(Transform1362)

HAnimSegment1360.children.append(Transform1361)
Shape1364 = x3d.Shape()
LineSet1365 = x3d.LineSet()
LineSet1365.vertexCount = [2]
Coordinate1366 = x3d.Coordinate()

LineSet1365.coord = Coordinate1366
"""from r_shoulder to r_elbow vertices 2"""
ColorRGBA1367 = x3d.ColorRGBA()
ColorRGBA1367.USE = "HAnimSegmentLineColorRGBA"

LineSet1365.color = ColorRGBA1367

Shape1364.geometry = LineSet1365

HAnimSegment1360.children.append(Shape1364)
HAnimSite1368 = x3d.HAnimSite()
HAnimSite1368.name = "r_humeral_medial_epicondyles_pt"
HAnimSite1368.DEF = "hanim_r_humeral_medial_epicondyles_pt"
HAnimSite1368.translation = [-0.168,1.1298,-0.1062]
TouchSensor1369 = x3d.TouchSensor()
TouchSensor1369.description = "HAnimSite r_humeral_medial_epicondyles_pt"

HAnimSite1368.children.append(TouchSensor1369)
Shape1370 = x3d.Shape()
Shape1370.USE = "HAnimSiteShape"

HAnimSite1368.children.append(Shape1370)

HAnimSegment1360.children.append(HAnimSite1368)
HAnimSite1371 = x3d.HAnimSite()
HAnimSite1371.name = "r_olecranon_pt"
HAnimSite1371.DEF = "hanim_r_olecranon_pt"
HAnimSite1371.translation = [-0.1907,1.1405,-0.1065]
TouchSensor1372 = x3d.TouchSensor()
TouchSensor1372.description = "HAnimSite r_olecranon_pt"

HAnimSite1371.children.append(TouchSensor1372)
Shape1373 = x3d.Shape()
Shape1373.USE = "HAnimSiteShape"

HAnimSite1371.children.append(Shape1373)

HAnimSegment1360.children.append(HAnimSite1371)
HAnimSite1374 = x3d.HAnimSite()
HAnimSite1374.name = "r_radial_styloid_pt"
HAnimSite1374.DEF = "hanim_r_radial_styloid_pt"
HAnimSite1374.translation = [-0.1884,0.8676,-0.036]
TouchSensor1375 = x3d.TouchSensor()
TouchSensor1375.description = "HAnimSite r_radial_styloid_pt"

HAnimSite1374.children.append(TouchSensor1375)
Shape1376 = x3d.Shape()
Shape1376.USE = "HAnimSiteShape"

HAnimSite1374.children.append(Shape1376)

HAnimSegment1360.children.append(HAnimSite1374)
HAnimSite1377 = x3d.HAnimSite()
HAnimSite1377.name = "r_radiale_pt"
HAnimSite1377.DEF = "hanim_r_radiale_pt"
HAnimSite1377.translation = [-0.213,1.1305,-0.1091]
TouchSensor1378 = x3d.TouchSensor()
TouchSensor1378.description = "HAnimSite r_radiale_pt"

HAnimSite1377.children.append(TouchSensor1378)
Shape1379 = x3d.Shape()
Shape1379.USE = "HAnimSiteShape"

HAnimSite1377.children.append(Shape1379)

HAnimSegment1360.children.append(HAnimSite1377)

HAnimJoint1359.children.append(HAnimSegment1360)
HAnimJoint1380 = x3d.HAnimJoint()
HAnimJoint1380.name = "r_elbow"
HAnimJoint1380.DEF = "hanim_r_elbow"
HAnimJoint1380.center = [-0.1949,1.1388,-0.062]
HAnimJoint1380.ulimit = [0,0,0]
HAnimJoint1380.llimit = [0,0,0]
HAnimSegment1381 = x3d.HAnimSegment()
HAnimSegment1381.name = "r_forearm"
HAnimSegment1381.DEF = "hanim_r_forearm"
Transform1382 = x3d.Transform()
"""Empty Transform"""
Transform1383 = x3d.Transform()
"""Empty Transform"""
Shape1384 = x3d.Shape()
Shape1384.USE = "HAnimJointShape"

Transform1383.children.append(Shape1384)

Transform1382.children.append(Transform1383)

HAnimSegment1381.children.append(Transform1382)
Shape1385 = x3d.Shape()
LineSet1386 = x3d.LineSet()
LineSet1386.vertexCount = [2]
Coordinate1387 = x3d.Coordinate()

LineSet1386.coord = Coordinate1387
"""from r_elbow to r_radiocarpal vertices 2"""
ColorRGBA1388 = x3d.ColorRGBA()
ColorRGBA1388.USE = "HAnimSegmentLineColorRGBA"

LineSet1386.color = ColorRGBA1388

Shape1385.geometry = LineSet1386

HAnimSegment1381.children.append(Shape1385)
HAnimSite1389 = x3d.HAnimSite()
HAnimSite1389.name = "r_ulnar_styloid_pt"
HAnimSite1389.DEF = "hanim_r_ulnar_styloid_pt"
HAnimSite1389.translation = [-0.2117,0.8562,-0.0584]
TouchSensor1390 = x3d.TouchSensor()
TouchSensor1390.description = "HAnimSite r_ulnar_styloid_pt"

HAnimSite1389.children.append(TouchSensor1390)
Shape1391 = x3d.Shape()
Shape1391.USE = "HAnimSiteShape"

HAnimSite1389.children.append(Shape1391)

HAnimSegment1381.children.append(HAnimSite1389)

HAnimJoint1380.children.append(HAnimSegment1381)
HAnimJoint1392 = x3d.HAnimJoint()
HAnimJoint1392.name = "r_radiocarpal"
HAnimJoint1392.DEF = "hanim_r_radiocarpal"
HAnimJoint1392.center = [-0.1959,0.8694,-0.0521]
HAnimJoint1392.ulimit = [0,0,0]
HAnimJoint1392.llimit = [0,0,0]
HAnimSegment1393 = x3d.HAnimSegment()
HAnimSegment1393.name = "r_carpal"
HAnimSegment1393.DEF = "hanim_r_carpal"
Transform1394 = x3d.Transform()
Transform1394.scale = [0.2,0.2,0.2]
Transform1394.translation = [-0.2,0.85,-0.05]
Transform1394.rotation = [0,0,1,-3.14]
"""Transform right hand"""
Transform1395 = x3d.Transform()
Transform1395.rotation = [0,1,0,1.57]
"""Transform right hand"""
Shape1396 = x3d.Shape()
Shape1396.USE = "HAnimJointShape"

Transform1395.children.append(Shape1396)

Transform1394.children.append(Transform1395)

HAnimSegment1393.children.append(Transform1394)
Shape1397 = x3d.Shape()
LineSet1398 = x3d.LineSet()
LineSet1398.vertexCount = [2]
Coordinate1399 = x3d.Coordinate()

LineSet1398.coord = Coordinate1399
"""from r_radiocarpal to r_midcarpal_1 vertices 2"""
ColorRGBA1400 = x3d.ColorRGBA()
ColorRGBA1400.USE = "HAnimSegmentLineColorRGBA"

LineSet1398.color = ColorRGBA1400

Shape1397.geometry = LineSet1398

HAnimSegment1393.children.append(Shape1397)
Shape1401 = x3d.Shape()
LineSet1402 = x3d.LineSet()
LineSet1402.vertexCount = [2]
Coordinate1403 = x3d.Coordinate()

LineSet1402.coord = Coordinate1403
"""from r_radiocarpal to r_midcarpal_2 vertices 2"""
ColorRGBA1404 = x3d.ColorRGBA()
ColorRGBA1404.USE = "HAnimSegmentLineColorRGBA"

LineSet1402.color = ColorRGBA1404

Shape1401.geometry = LineSet1402

HAnimSegment1393.children.append(Shape1401)
Shape1405 = x3d.Shape()
LineSet1406 = x3d.LineSet()
LineSet1406.vertexCount = [2]
Coordinate1407 = x3d.Coordinate()

LineSet1406.coord = Coordinate1407
"""from r_radiocarpal to r_midcarpal_3 vertices 2"""
ColorRGBA1408 = x3d.ColorRGBA()
ColorRGBA1408.USE = "HAnimSegmentLineColorRGBA"

LineSet1406.color = ColorRGBA1408

Shape1405.geometry = LineSet1406

HAnimSegment1393.children.append(Shape1405)
Shape1409 = x3d.Shape()
LineSet1410 = x3d.LineSet()
LineSet1410.vertexCount = [2]
Coordinate1411 = x3d.Coordinate()

LineSet1410.coord = Coordinate1411
"""from r_radiocarpal to r_midcarpal_4_5 vertices 2"""
ColorRGBA1412 = x3d.ColorRGBA()
ColorRGBA1412.USE = "HAnimSegmentLineColorRGBA"

LineSet1410.color = ColorRGBA1412

Shape1409.geometry = LineSet1410

HAnimSegment1393.children.append(Shape1409)

HAnimJoint1392.children.append(HAnimSegment1393)
HAnimJoint1413 = x3d.HAnimJoint()
HAnimJoint1413.name = "r_midcarpal_1"
HAnimJoint1413.DEF = "hanim_r_midcarpal_1"
HAnimJoint1413.center = [0,1,0]
HAnimJoint1413.ulimit = [0,0,0]
HAnimJoint1413.llimit = [0,0,0]
HAnimSegment1414 = x3d.HAnimSegment()
HAnimSegment1414.name = "r_trapezium"
HAnimSegment1414.DEF = "hanim_r_trapezium"
Transform1415 = x3d.Transform()
"""Empty Transform"""
Transform1416 = x3d.Transform()
"""Empty Transform"""
Shape1417 = x3d.Shape()
Shape1417.USE = "HAnimJointShape"

Transform1416.children.append(Shape1417)

Transform1415.children.append(Transform1416)

HAnimSegment1414.children.append(Transform1415)
Shape1418 = x3d.Shape()
LineSet1419 = x3d.LineSet()
LineSet1419.vertexCount = [2]
Coordinate1420 = x3d.Coordinate()

LineSet1419.coord = Coordinate1420
"""from r_midcarpal_1 to r_carpometacarpal_1 vertices 2"""
ColorRGBA1421 = x3d.ColorRGBA()
ColorRGBA1421.USE = "HAnimSegmentLineColorRGBA"

LineSet1419.color = ColorRGBA1421

Shape1418.geometry = LineSet1419

HAnimSegment1414.children.append(Shape1418)

HAnimJoint1413.children.append(HAnimSegment1414)
HAnimJoint1422 = x3d.HAnimJoint()
HAnimJoint1422.name = "r_carpometacarpal_1"
HAnimJoint1422.DEF = "hanim_r_carpometacarpal_1"
HAnimJoint1422.center = [-0.1899,0.8502,-0.0473]
HAnimJoint1422.ulimit = [0,0,0]
HAnimJoint1422.llimit = [0,0,0]
HAnimSegment1423 = x3d.HAnimSegment()
HAnimSegment1423.name = "r_metacarpal_1"
HAnimSegment1423.DEF = "hanim_r_metacarpal_1"
Transform1424 = x3d.Transform()
"""Empty Transform"""
Transform1425 = x3d.Transform()
"""Empty Transform"""
Shape1426 = x3d.Shape()
Shape1426.USE = "HAnimJointShape"

Transform1425.children.append(Shape1426)

Transform1424.children.append(Transform1425)

HAnimSegment1423.children.append(Transform1424)
Shape1427 = x3d.Shape()
LineSet1428 = x3d.LineSet()
LineSet1428.vertexCount = [2]
Coordinate1429 = x3d.Coordinate()

LineSet1428.coord = Coordinate1429
"""from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2"""
ColorRGBA1430 = x3d.ColorRGBA()
ColorRGBA1430.USE = "HAnimSegmentLineColorRGBA"

LineSet1428.color = ColorRGBA1430

Shape1427.geometry = LineSet1428

HAnimSegment1423.children.append(Shape1427)

HAnimJoint1422.children.append(HAnimSegment1423)
HAnimJoint1431 = x3d.HAnimJoint()
HAnimJoint1431.name = "r_metacarpophalangeal_1"
HAnimJoint1431.DEF = "hanim_r_metacarpophalangeal_1"
HAnimJoint1431.center = [-0.1874,0.8256,0.0306]
HAnimJoint1431.ulimit = [0,0,0]
HAnimJoint1431.llimit = [0,0,0]
HAnimSegment1432 = x3d.HAnimSegment()
HAnimSegment1432.name = "r_carpal_proximal_phalanx_1"
HAnimSegment1432.DEF = "hanim_r_carpal_proximal_phalanx_1"
Transform1433 = x3d.Transform()
"""Empty Transform"""
Transform1434 = x3d.Transform()
"""Empty Transform"""
Shape1435 = x3d.Shape()
Shape1435.USE = "HAnimJointShape"

Transform1434.children.append(Shape1435)

Transform1433.children.append(Transform1434)

HAnimSegment1432.children.append(Transform1433)
Shape1436 = x3d.Shape()
LineSet1437 = x3d.LineSet()
LineSet1437.vertexCount = [2]
Coordinate1438 = x3d.Coordinate()

LineSet1437.coord = Coordinate1438
"""from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2"""
ColorRGBA1439 = x3d.ColorRGBA()
ColorRGBA1439.USE = "HAnimSegmentLineColorRGBA"

LineSet1437.color = ColorRGBA1439

Shape1436.geometry = LineSet1437

HAnimSegment1432.children.append(Shape1436)
HAnimSite1440 = x3d.HAnimSite()
HAnimSite1440.name = "r_carpal_distal_phalanx_1_tip"
HAnimSite1440.DEF = "hanim_r_carpal_distal_phalanx_1_tip"
HAnimSite1440.translation = [-0.35,0.4,0]
TouchSensor1441 = x3d.TouchSensor()
TouchSensor1441.description = "HAnimSite r_carpal_distal_phalanx_1_tip"

HAnimSite1440.children.append(TouchSensor1441)
Shape1442 = x3d.Shape()
Shape1442.USE = "HAnimSiteShape"

HAnimSite1440.children.append(Shape1442)

HAnimSegment1432.children.append(HAnimSite1440)

HAnimJoint1431.children.append(HAnimSegment1432)
HAnimJoint1443 = x3d.HAnimJoint()
HAnimJoint1443.name = "r_carpal_interphalangeal_1"
HAnimJoint1443.DEF = "hanim_r_carpal_interphalangeal_1"
HAnimJoint1443.center = [-0.1864,0.819,0.0506]
HAnimJoint1443.ulimit = [0,0,0]
HAnimJoint1443.llimit = [0,0,0]

HAnimJoint1431.children.append(HAnimJoint1443)

HAnimJoint1422.children.append(HAnimJoint1431)

HAnimJoint1413.children.append(HAnimJoint1422)

HAnimJoint1392.children.append(HAnimJoint1413)
HAnimJoint1444 = x3d.HAnimJoint()
HAnimJoint1444.name = "r_midcarpal_2"
HAnimJoint1444.DEF = "hanim_r_midcarpal_2"
HAnimJoint1444.center = [0,1,0]
HAnimJoint1444.ulimit = [0,0,0]
HAnimJoint1444.llimit = [0,0,0]
HAnimSegment1445 = x3d.HAnimSegment()
HAnimSegment1445.name = "r_trapezoid"
HAnimSegment1445.DEF = "hanim_r_trapezoid"
Transform1446 = x3d.Transform()
"""Empty Transform"""
Transform1447 = x3d.Transform()
"""Empty Transform"""
Shape1448 = x3d.Shape()
Shape1448.USE = "HAnimJointShape"

Transform1447.children.append(Shape1448)

Transform1446.children.append(Transform1447)

HAnimSegment1445.children.append(Transform1446)
Shape1449 = x3d.Shape()
LineSet1450 = x3d.LineSet()
LineSet1450.vertexCount = [2]
Coordinate1451 = x3d.Coordinate()

LineSet1450.coord = Coordinate1451
"""from r_midcarpal_2 to r_carpometacarpal_2 vertices 2"""
ColorRGBA1452 = x3d.ColorRGBA()
ColorRGBA1452.USE = "HAnimSegmentLineColorRGBA"

LineSet1450.color = ColorRGBA1452

Shape1449.geometry = LineSet1450

HAnimSegment1445.children.append(Shape1449)
HAnimSite1453 = x3d.HAnimSite()
HAnimSite1453.name = "r_metacarpal_phalanx_2_pt"
HAnimSite1453.DEF = "hanim_r_metacarpal_phalanx_2_pt"
HAnimSite1453.translation = [-0.1977,0.8169,-0.0177]
TouchSensor1454 = x3d.TouchSensor()
TouchSensor1454.description = "HAnimSite r_metacarpal_phalanx_2_pt"

HAnimSite1453.children.append(TouchSensor1454)
Shape1455 = x3d.Shape()
Shape1455.USE = "HAnimSiteShape"

HAnimSite1453.children.append(Shape1455)

HAnimSegment1445.children.append(HAnimSite1453)

HAnimJoint1444.children.append(HAnimSegment1445)
HAnimJoint1456 = x3d.HAnimJoint()
HAnimJoint1456.name = "r_carpometacarpal_2"
HAnimJoint1456.DEF = "hanim_r_carpometacarpal_2"
HAnimJoint1456.center = [-0.1961,0.8055,-0.0218]
HAnimJoint1456.ulimit = [0,0,0]
HAnimJoint1456.llimit = [0,0,0]
HAnimSegment1457 = x3d.HAnimSegment()
HAnimSegment1457.name = "r_metacarpal_2"
HAnimSegment1457.DEF = "hanim_r_metacarpal_2"
Transform1458 = x3d.Transform()
"""Empty Transform"""
Transform1459 = x3d.Transform()
"""Empty Transform"""
Shape1460 = x3d.Shape()
Shape1460.USE = "HAnimJointShape"

Transform1459.children.append(Shape1460)

Transform1458.children.append(Transform1459)

HAnimSegment1457.children.append(Transform1458)
Shape1461 = x3d.Shape()
LineSet1462 = x3d.LineSet()
LineSet1462.vertexCount = [2]
Coordinate1463 = x3d.Coordinate()

LineSet1462.coord = Coordinate1463
"""from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2"""
ColorRGBA1464 = x3d.ColorRGBA()
ColorRGBA1464.USE = "HAnimSegmentLineColorRGBA"

LineSet1462.color = ColorRGBA1464

Shape1461.geometry = LineSet1462

HAnimSegment1457.children.append(Shape1461)

HAnimJoint1456.children.append(HAnimSegment1457)
HAnimJoint1465 = x3d.HAnimJoint()
HAnimJoint1465.name = "r_metacarpophalangeal_2"
HAnimJoint1465.DEF = "hanim_r_metacarpophalangeal_2"
HAnimJoint1465.center = [-0.1961,0.7846,-0.0218]
HAnimJoint1465.ulimit = [0,0,0]
HAnimJoint1465.llimit = [0,0,0]
HAnimSegment1466 = x3d.HAnimSegment()
HAnimSegment1466.name = "r_carpal_proximal_phalanx_2"
HAnimSegment1466.DEF = "hanim_r_carpal_proximal_phalanx_2"
Transform1467 = x3d.Transform()
"""Empty Transform"""
Transform1468 = x3d.Transform()
"""Empty Transform"""
Shape1469 = x3d.Shape()
Shape1469.USE = "HAnimJointShape"

Transform1468.children.append(Shape1469)

Transform1467.children.append(Transform1468)

HAnimSegment1466.children.append(Transform1467)
Shape1470 = x3d.Shape()
LineSet1471 = x3d.LineSet()
LineSet1471.vertexCount = [2]
Coordinate1472 = x3d.Coordinate()

LineSet1471.coord = Coordinate1472
"""from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2"""
ColorRGBA1473 = x3d.ColorRGBA()
ColorRGBA1473.USE = "HAnimSegmentLineColorRGBA"

LineSet1471.color = ColorRGBA1473

Shape1470.geometry = LineSet1471

HAnimSegment1466.children.append(Shape1470)

HAnimJoint1465.children.append(HAnimSegment1466)
HAnimJoint1474 = x3d.HAnimJoint()
HAnimJoint1474.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint1474.DEF = "hanim_r_carpal_proximal_interphalangeal_2"
HAnimJoint1474.center = [-0.1954,0.7393,-0.0185]
HAnimJoint1474.ulimit = [0,0,0]
HAnimJoint1474.llimit = [0,0,0]
HAnimSegment1475 = x3d.HAnimSegment()
HAnimSegment1475.name = "r_carpal_middle_phalanx_2"
HAnimSegment1475.DEF = "hanim_r_carpal_middle_phalanx_2"
Transform1476 = x3d.Transform()
"""Empty Transform"""
Transform1477 = x3d.Transform()
"""Empty Transform"""
Shape1478 = x3d.Shape()
Shape1478.USE = "HAnimJointShape"

Transform1477.children.append(Shape1478)

Transform1476.children.append(Transform1477)

HAnimSegment1475.children.append(Transform1476)
Shape1479 = x3d.Shape()
LineSet1480 = x3d.LineSet()
LineSet1480.vertexCount = [2]
Coordinate1481 = x3d.Coordinate()

LineSet1480.coord = Coordinate1481
"""from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2"""
ColorRGBA1482 = x3d.ColorRGBA()
ColorRGBA1482.USE = "HAnimSegmentLineColorRGBA"

LineSet1480.color = ColorRGBA1482

Shape1479.geometry = LineSet1480

HAnimSegment1475.children.append(Shape1479)
HAnimSite1483 = x3d.HAnimSite()
HAnimSite1483.name = "r_carpal_distal_phalanx_2_tip"
HAnimSite1483.DEF = "hanim_r_carpal_distal_phalanx_2_tip"
HAnimSite1483.translation = [-0.24,0.87,0]
TouchSensor1484 = x3d.TouchSensor()
TouchSensor1484.description = "HAnimSite r_carpal_distal_phalanx_2_tip"

HAnimSite1483.children.append(TouchSensor1484)
Shape1485 = x3d.Shape()
Shape1485.USE = "HAnimSiteShape"

HAnimSite1483.children.append(Shape1485)

HAnimSegment1475.children.append(HAnimSite1483)
HAnimSite1486 = x3d.HAnimSite()
HAnimSite1486.name = "r_dactylion_pt"
HAnimSite1486.DEF = "hanim_r_dactylion_pt"
HAnimSite1486.translation = [-0.1941,0.6772,-0.0423]
TouchSensor1487 = x3d.TouchSensor()
TouchSensor1487.description = "HAnimSite r_dactylion_pt"

HAnimSite1486.children.append(TouchSensor1487)
Shape1488 = x3d.Shape()
Shape1488.USE = "HAnimSiteShape"

HAnimSite1486.children.append(Shape1488)

HAnimSegment1475.children.append(HAnimSite1486)

HAnimJoint1474.children.append(HAnimSegment1475)
HAnimJoint1489 = x3d.HAnimJoint()
HAnimJoint1489.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint1489.DEF = "hanim_r_carpal_distal_interphalangeal_2"
HAnimJoint1489.center = [-0.1945,0.7169,-0.0173]
HAnimJoint1489.ulimit = [0,0,0]
HAnimJoint1489.llimit = [0,0,0]

HAnimJoint1474.children.append(HAnimJoint1489)

HAnimJoint1465.children.append(HAnimJoint1474)

HAnimJoint1456.children.append(HAnimJoint1465)

HAnimJoint1444.children.append(HAnimJoint1456)

HAnimJoint1392.children.append(HAnimJoint1444)
HAnimJoint1490 = x3d.HAnimJoint()
HAnimJoint1490.name = "r_midcarpal_3"
HAnimJoint1490.DEF = "hanim_r_midcarpal_3"
HAnimJoint1490.center = [0,1,0]
HAnimJoint1490.ulimit = [0,0,0]
HAnimJoint1490.llimit = [0,0,0]
HAnimSegment1491 = x3d.HAnimSegment()
HAnimSegment1491.name = "r_capitate"
HAnimSegment1491.DEF = "hanim_r_capitate"
Transform1492 = x3d.Transform()
"""Empty Transform"""
Transform1493 = x3d.Transform()
"""Empty Transform"""
Shape1494 = x3d.Shape()
Shape1494.USE = "HAnimJointShape"

Transform1493.children.append(Shape1494)

Transform1492.children.append(Transform1493)

HAnimSegment1491.children.append(Transform1492)
Shape1495 = x3d.Shape()
LineSet1496 = x3d.LineSet()
LineSet1496.vertexCount = [2]
Coordinate1497 = x3d.Coordinate()

LineSet1496.coord = Coordinate1497
"""from r_midcarpal_3 to r_carpometacarpal_3 vertices 2"""
ColorRGBA1498 = x3d.ColorRGBA()
ColorRGBA1498.USE = "HAnimSegmentLineColorRGBA"

LineSet1496.color = ColorRGBA1498

Shape1495.geometry = LineSet1496

HAnimSegment1491.children.append(Shape1495)
HAnimSite1499 = x3d.HAnimSite()
HAnimSite1499.name = "r_metacarpal_phalanx_3_pt"
HAnimSite1499.DEF = "hanim_r_metacarpal_phalanx_3_pt"
HAnimSite1499.translation = [0,1,0]
TouchSensor1500 = x3d.TouchSensor()
TouchSensor1500.description = "HAnimSite r_metacarpal_phalanx_3_pt"

HAnimSite1499.children.append(TouchSensor1500)
Shape1501 = x3d.Shape()
Shape1501.USE = "HAnimSiteShape"

HAnimSite1499.children.append(Shape1501)

HAnimSegment1491.children.append(HAnimSite1499)

HAnimJoint1490.children.append(HAnimSegment1491)
HAnimJoint1502 = x3d.HAnimJoint()
HAnimJoint1502.name = "r_carpometacarpal_3"
HAnimJoint1502.DEF = "hanim_r_carpometacarpal_3"
HAnimJoint1502.center = [-0.1972,0.806,-0.0468]
HAnimJoint1502.ulimit = [0,0,0]
HAnimJoint1502.llimit = [0,0,0]
HAnimSegment1503 = x3d.HAnimSegment()
HAnimSegment1503.name = "r_metacarpal_3"
HAnimSegment1503.DEF = "hanim_r_metacarpal_3"
Transform1504 = x3d.Transform()
"""Empty Transform"""
Transform1505 = x3d.Transform()
"""Empty Transform"""
Shape1506 = x3d.Shape()
Shape1506.USE = "HAnimJointShape"

Transform1505.children.append(Shape1506)

Transform1504.children.append(Transform1505)

HAnimSegment1503.children.append(Transform1504)
Shape1507 = x3d.Shape()
LineSet1508 = x3d.LineSet()
LineSet1508.vertexCount = [2]
Coordinate1509 = x3d.Coordinate()

LineSet1508.coord = Coordinate1509
"""from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2"""
ColorRGBA1510 = x3d.ColorRGBA()
ColorRGBA1510.USE = "HAnimSegmentLineColorRGBA"

LineSet1508.color = ColorRGBA1510

Shape1507.geometry = LineSet1508

HAnimSegment1503.children.append(Shape1507)

HAnimJoint1502.children.append(HAnimSegment1503)
HAnimJoint1511 = x3d.HAnimJoint()
HAnimJoint1511.name = "r_metacarpophalangeal_3"
HAnimJoint1511.DEF = "hanim_r_metacarpophalangeal_3"
HAnimJoint1511.center = [-0.1972,0.7849,-0.0468]
HAnimJoint1511.ulimit = [0,0,0]
HAnimJoint1511.llimit = [0,0,0]
HAnimSegment1512 = x3d.HAnimSegment()
HAnimSegment1512.name = "r_carpal_proximal_phalanx_3"
HAnimSegment1512.DEF = "hanim_r_carpal_proximal_phalanx_3"
Transform1513 = x3d.Transform()
"""Empty Transform"""
Transform1514 = x3d.Transform()
"""Empty Transform"""
Shape1515 = x3d.Shape()
Shape1515.USE = "HAnimJointShape"

Transform1514.children.append(Shape1515)

Transform1513.children.append(Transform1514)

HAnimSegment1512.children.append(Transform1513)
Shape1516 = x3d.Shape()
LineSet1517 = x3d.LineSet()
LineSet1517.vertexCount = [2]
Coordinate1518 = x3d.Coordinate()

LineSet1517.coord = Coordinate1518
"""from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2"""
ColorRGBA1519 = x3d.ColorRGBA()
ColorRGBA1519.USE = "HAnimSegmentLineColorRGBA"

LineSet1517.color = ColorRGBA1519

Shape1516.geometry = LineSet1517

HAnimSegment1512.children.append(Shape1516)

HAnimJoint1511.children.append(HAnimSegment1512)
HAnimJoint1520 = x3d.HAnimJoint()
HAnimJoint1520.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint1520.DEF = "hanim_r_carpal_proximal_interphalangeal_3"
HAnimJoint1520.center = [-0.195,0.7304,-0.0441]
HAnimJoint1520.ulimit = [0,0,0]
HAnimJoint1520.llimit = [0,0,0]
HAnimSegment1521 = x3d.HAnimSegment()
HAnimSegment1521.name = "r_carpal_middle_phalanx_3"
HAnimSegment1521.DEF = "hanim_r_carpal_middle_phalanx_3"
Transform1522 = x3d.Transform()
"""Empty Transform"""
Transform1523 = x3d.Transform()
"""Empty Transform"""
Shape1524 = x3d.Shape()
Shape1524.USE = "HAnimJointShape"

Transform1523.children.append(Shape1524)

Transform1522.children.append(Transform1523)

HAnimSegment1521.children.append(Transform1522)
Shape1525 = x3d.Shape()
LineSet1526 = x3d.LineSet()
LineSet1526.vertexCount = [2]
Coordinate1527 = x3d.Coordinate()

LineSet1526.coord = Coordinate1527
"""from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2"""
ColorRGBA1528 = x3d.ColorRGBA()
ColorRGBA1528.USE = "HAnimSegmentLineColorRGBA"

LineSet1526.color = ColorRGBA1528

Shape1525.geometry = LineSet1526

HAnimSegment1521.children.append(Shape1525)
HAnimSite1529 = x3d.HAnimSite()
HAnimSite1529.name = "r_carpal_distal_phalanx_3_tip"
HAnimSite1529.DEF = "hanim_r_carpal_distal_phalanx_3_tip"
HAnimSite1529.translation = [-0.08,0.96,0]
TouchSensor1530 = x3d.TouchSensor()
TouchSensor1530.description = "HAnimSite r_carpal_distal_phalanx_3_tip"

HAnimSite1529.children.append(TouchSensor1530)
Shape1531 = x3d.Shape()
Shape1531.USE = "HAnimSiteShape"

HAnimSite1529.children.append(Shape1531)

HAnimSegment1521.children.append(HAnimSite1529)

HAnimJoint1520.children.append(HAnimSegment1521)
HAnimJoint1532 = x3d.HAnimJoint()
HAnimJoint1532.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint1532.DEF = "hanim_r_carpal_distal_interphalangeal_3"
HAnimJoint1532.center = [-0.1939,0.7042,-0.0432]
HAnimJoint1532.ulimit = [0,0,0]
HAnimJoint1532.llimit = [0,0,0]

HAnimJoint1520.children.append(HAnimJoint1532)

HAnimJoint1511.children.append(HAnimJoint1520)

HAnimJoint1502.children.append(HAnimJoint1511)

HAnimJoint1490.children.append(HAnimJoint1502)

HAnimJoint1392.children.append(HAnimJoint1490)
HAnimJoint1533 = x3d.HAnimJoint()
HAnimJoint1533.name = "r_midcarpal_4_5"
HAnimJoint1533.DEF = "hanim_r_midcarpal_4_5"
HAnimJoint1533.center = [0,1,0]
HAnimJoint1533.ulimit = [0,0,0]
HAnimJoint1533.llimit = [0,0,0]
HAnimSegment1534 = x3d.HAnimSegment()
HAnimSegment1534.name = "r_hamate"
HAnimSegment1534.DEF = "hanim_r_hamate"
Transform1535 = x3d.Transform()
"""Empty Transform"""
Transform1536 = x3d.Transform()
"""Empty Transform"""
Shape1537 = x3d.Shape()
Shape1537.USE = "HAnimJointShape"

Transform1536.children.append(Shape1537)

Transform1535.children.append(Transform1536)

HAnimSegment1534.children.append(Transform1535)
Shape1538 = x3d.Shape()
LineSet1539 = x3d.LineSet()
LineSet1539.vertexCount = [2]
Coordinate1540 = x3d.Coordinate()

LineSet1539.coord = Coordinate1540
"""from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2"""
ColorRGBA1541 = x3d.ColorRGBA()
ColorRGBA1541.USE = "HAnimSegmentLineColorRGBA"

LineSet1539.color = ColorRGBA1541

Shape1538.geometry = LineSet1539

HAnimSegment1534.children.append(Shape1538)
Shape1542 = x3d.Shape()
LineSet1543 = x3d.LineSet()
LineSet1543.vertexCount = [2]
Coordinate1544 = x3d.Coordinate()

LineSet1543.coord = Coordinate1544
"""from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2"""
ColorRGBA1545 = x3d.ColorRGBA()
ColorRGBA1545.USE = "HAnimSegmentLineColorRGBA"

LineSet1543.color = ColorRGBA1545

Shape1542.geometry = LineSet1543

HAnimSegment1534.children.append(Shape1542)
HAnimSite1546 = x3d.HAnimSite()
HAnimSite1546.name = "r_metacarpal_phalanx_5_pt"
HAnimSite1546.DEF = "hanim_r_metacarpal_phalanx_5_pt"
HAnimSite1546.translation = [-0.1929,0.789,-0.1064]
TouchSensor1547 = x3d.TouchSensor()
TouchSensor1547.description = "HAnimSite r_metacarpal_phalanx_5_pt"

HAnimSite1546.children.append(TouchSensor1547)
Shape1548 = x3d.Shape()
Shape1548.USE = "HAnimSiteShape"

HAnimSite1546.children.append(Shape1548)

HAnimSegment1534.children.append(HAnimSite1546)

HAnimJoint1533.children.append(HAnimSegment1534)
HAnimJoint1549 = x3d.HAnimJoint()
HAnimJoint1549.name = "r_carpometacarpal_4"
HAnimJoint1549.DEF = "hanim_r_carpometacarpal_4"
HAnimJoint1549.center = [-0.1951,0.8049,-0.0732]
HAnimJoint1549.ulimit = [0,0,0]
HAnimJoint1549.llimit = [0,0,0]
HAnimSegment1550 = x3d.HAnimSegment()
HAnimSegment1550.name = "r_metacarpal_4"
HAnimSegment1550.DEF = "hanim_r_metacarpal_4"
Transform1551 = x3d.Transform()
"""Empty Transform"""
Transform1552 = x3d.Transform()
"""Empty Transform"""
Shape1553 = x3d.Shape()
Shape1553.USE = "HAnimJointShape"

Transform1552.children.append(Shape1553)

Transform1551.children.append(Transform1552)

HAnimSegment1550.children.append(Transform1551)
Shape1554 = x3d.Shape()
LineSet1555 = x3d.LineSet()
LineSet1555.vertexCount = [2]
Coordinate1556 = x3d.Coordinate()

LineSet1555.coord = Coordinate1556
"""from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2"""
ColorRGBA1557 = x3d.ColorRGBA()
ColorRGBA1557.USE = "HAnimSegmentLineColorRGBA"

LineSet1555.color = ColorRGBA1557

Shape1554.geometry = LineSet1555

HAnimSegment1550.children.append(Shape1554)

HAnimJoint1549.children.append(HAnimSegment1550)
HAnimJoint1558 = x3d.HAnimJoint()
HAnimJoint1558.name = "r_metacarpophalangeal_4"
HAnimJoint1558.DEF = "hanim_r_metacarpophalangeal_4"
HAnimJoint1558.center = [-0.1951,0.7845,-0.0732]
HAnimJoint1558.ulimit = [0,0,0]
HAnimJoint1558.llimit = [0,0,0]
HAnimSegment1559 = x3d.HAnimSegment()
HAnimSegment1559.name = "r_carpal_proximal_phalanx_4"
HAnimSegment1559.DEF = "hanim_r_carpal_proximal_phalanx_4"
Transform1560 = x3d.Transform()
"""Empty Transform"""
Transform1561 = x3d.Transform()
"""Empty Transform"""
Shape1562 = x3d.Shape()
Shape1562.USE = "HAnimJointShape"

Transform1561.children.append(Shape1562)

Transform1560.children.append(Transform1561)

HAnimSegment1559.children.append(Transform1560)
Shape1563 = x3d.Shape()
LineSet1564 = x3d.LineSet()
LineSet1564.vertexCount = [2]
Coordinate1565 = x3d.Coordinate()

LineSet1564.coord = Coordinate1565
"""from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2"""
ColorRGBA1566 = x3d.ColorRGBA()
ColorRGBA1566.USE = "HAnimSegmentLineColorRGBA"

LineSet1564.color = ColorRGBA1566

Shape1563.geometry = LineSet1564

HAnimSegment1559.children.append(Shape1563)

HAnimJoint1558.children.append(HAnimSegment1559)
HAnimJoint1567 = x3d.HAnimJoint()
HAnimJoint1567.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint1567.DEF = "hanim_r_carpal_proximal_interphalangeal_4"
HAnimJoint1567.center = [-0.192,0.7318,-0.0716]
HAnimJoint1567.ulimit = [0,0,0]
HAnimJoint1567.llimit = [0,0,0]
HAnimSegment1568 = x3d.HAnimSegment()
HAnimSegment1568.name = "r_carpal_middle_phalanx_4"
HAnimSegment1568.DEF = "hanim_r_carpal_middle_phalanx_4"
Transform1569 = x3d.Transform()
"""Empty Transform"""
Transform1570 = x3d.Transform()
"""Empty Transform"""
Shape1571 = x3d.Shape()
Shape1571.USE = "HAnimJointShape"

Transform1570.children.append(Shape1571)

Transform1569.children.append(Transform1570)

HAnimSegment1568.children.append(Transform1569)
Shape1572 = x3d.Shape()
LineSet1573 = x3d.LineSet()
LineSet1573.vertexCount = [2]
Coordinate1574 = x3d.Coordinate()

LineSet1573.coord = Coordinate1574
"""from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2"""
ColorRGBA1575 = x3d.ColorRGBA()
ColorRGBA1575.USE = "HAnimSegmentLineColorRGBA"

LineSet1573.color = ColorRGBA1575

Shape1572.geometry = LineSet1573

HAnimSegment1568.children.append(Shape1572)
HAnimSite1576 = x3d.HAnimSite()
HAnimSite1576.name = "r_carpal_distal_phalanx_4_tip"
HAnimSite1576.DEF = "hanim_r_carpal_distal_phalanx_4_tip"
HAnimSite1576.translation = [0.1,0.93,0]
TouchSensor1577 = x3d.TouchSensor()
TouchSensor1577.description = "HAnimSite r_carpal_distal_phalanx_4_tip"

HAnimSite1576.children.append(TouchSensor1577)
Shape1578 = x3d.Shape()
Shape1578.USE = "HAnimSiteShape"

HAnimSite1576.children.append(Shape1578)

HAnimSegment1568.children.append(HAnimSite1576)

HAnimJoint1567.children.append(HAnimSegment1568)
HAnimJoint1579 = x3d.HAnimJoint()
HAnimJoint1579.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint1579.DEF = "hanim_r_carpal_distal_interphalangeal_4"
HAnimJoint1579.center = [-0.1908,0.7077,-0.0706]
HAnimJoint1579.ulimit = [0,0,0]
HAnimJoint1579.llimit = [0,0,0]

HAnimJoint1567.children.append(HAnimJoint1579)

HAnimJoint1558.children.append(HAnimJoint1567)

HAnimJoint1549.children.append(HAnimJoint1558)

HAnimJoint1533.children.append(HAnimJoint1549)
HAnimJoint1580 = x3d.HAnimJoint()
HAnimJoint1580.name = "r_carpometacarpal_5"
HAnimJoint1580.DEF = "hanim_r_carpometacarpal_5"
HAnimJoint1580.center = [-0.1926,0.8096,-0.0975]
HAnimJoint1580.ulimit = [0,0,0]
HAnimJoint1580.llimit = [0,0,0]
HAnimSegment1581 = x3d.HAnimSegment()
HAnimSegment1581.name = "r_metacarpal_5"
HAnimSegment1581.DEF = "hanim_r_metacarpal_5"
Transform1582 = x3d.Transform()
"""Empty Transform"""
Transform1583 = x3d.Transform()
"""Empty Transform"""
Shape1584 = x3d.Shape()
Shape1584.USE = "HAnimJointShape"

Transform1583.children.append(Shape1584)

Transform1582.children.append(Transform1583)

HAnimSegment1581.children.append(Transform1582)
Shape1585 = x3d.Shape()
LineSet1586 = x3d.LineSet()
LineSet1586.vertexCount = [2]
Coordinate1587 = x3d.Coordinate()

LineSet1586.coord = Coordinate1587
"""from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2"""
ColorRGBA1588 = x3d.ColorRGBA()
ColorRGBA1588.USE = "HAnimSegmentLineColorRGBA"

LineSet1586.color = ColorRGBA1588

Shape1585.geometry = LineSet1586

HAnimSegment1581.children.append(Shape1585)

HAnimJoint1580.children.append(HAnimSegment1581)
HAnimJoint1589 = x3d.HAnimJoint()
HAnimJoint1589.name = "r_metacarpophalangeal_5"
HAnimJoint1589.DEF = "hanim_r_metacarpophalangeal_5"
HAnimJoint1589.center = [-0.1926,0.7896,-0.0975]
HAnimJoint1589.ulimit = [0,0,0]
HAnimJoint1589.llimit = [0,0,0]
HAnimSegment1590 = x3d.HAnimSegment()
HAnimSegment1590.name = "r_carpal_proximal_phalanx_5"
HAnimSegment1590.DEF = "hanim_r_carpal_proximal_phalanx_5"
Transform1591 = x3d.Transform()
"""Empty Transform"""
Transform1592 = x3d.Transform()
"""Empty Transform"""
Shape1593 = x3d.Shape()
Shape1593.USE = "HAnimJointShape"

Transform1592.children.append(Shape1593)

Transform1591.children.append(Transform1592)

HAnimSegment1590.children.append(Transform1591)
Shape1594 = x3d.Shape()
LineSet1595 = x3d.LineSet()
LineSet1595.vertexCount = [2]
Coordinate1596 = x3d.Coordinate()

LineSet1595.coord = Coordinate1596
"""from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2"""
ColorRGBA1597 = x3d.ColorRGBA()
ColorRGBA1597.USE = "HAnimSegmentLineColorRGBA"

LineSet1595.color = ColorRGBA1597

Shape1594.geometry = LineSet1595

HAnimSegment1590.children.append(Shape1594)

HAnimJoint1589.children.append(HAnimSegment1590)
HAnimJoint1598 = x3d.HAnimJoint()
HAnimJoint1598.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint1598.DEF = "hanim_r_carpal_proximal_interphalangeal_5"
HAnimJoint1598.center = [-0.1902,0.7483,-0.0963]
HAnimJoint1598.ulimit = [0,0,0]
HAnimJoint1598.llimit = [0,0,0]
HAnimSegment1599 = x3d.HAnimSegment()
HAnimSegment1599.name = "r_carpal_middle_phalanx_5"
HAnimSegment1599.DEF = "hanim_r_carpal_middle_phalanx_5"
Transform1600 = x3d.Transform()
"""Empty Transform"""
Transform1601 = x3d.Transform()
"""Empty Transform"""
Shape1602 = x3d.Shape()
Shape1602.USE = "HAnimJointShape"

Transform1601.children.append(Shape1602)

Transform1600.children.append(Transform1601)

HAnimSegment1599.children.append(Transform1600)
Shape1603 = x3d.Shape()
LineSet1604 = x3d.LineSet()
LineSet1604.vertexCount = [2]
Coordinate1605 = x3d.Coordinate()

LineSet1604.coord = Coordinate1605
"""from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2"""
ColorRGBA1606 = x3d.ColorRGBA()
ColorRGBA1606.USE = "HAnimSegmentLineColorRGBA"

LineSet1604.color = ColorRGBA1606

Shape1603.geometry = LineSet1604

HAnimSegment1599.children.append(Shape1603)
HAnimSite1607 = x3d.HAnimSite()
HAnimSite1607.name = "r_carpal_distal_phalanx_5_tip"
HAnimSite1607.DEF = "hanim_r_carpal_distal_phalanx_5_tip"
HAnimSite1607.translation = [0.25,0.79,0]
TouchSensor1608 = x3d.TouchSensor()
TouchSensor1608.description = "HAnimSite r_carpal_distal_phalanx_5_tip"

HAnimSite1607.children.append(TouchSensor1608)
Shape1609 = x3d.Shape()
Shape1609.USE = "HAnimSiteShape"

HAnimSite1607.children.append(Shape1609)

HAnimSegment1599.children.append(HAnimSite1607)

HAnimJoint1598.children.append(HAnimSegment1599)
HAnimJoint1610 = x3d.HAnimJoint()
HAnimJoint1610.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint1610.DEF = "hanim_r_carpal_distal_interphalangeal_5"
HAnimJoint1610.center = [-0.1908,0.754,-0.096]
HAnimJoint1610.ulimit = [0,0,0]
HAnimJoint1610.llimit = [0,0,0]

HAnimJoint1598.children.append(HAnimJoint1610)

HAnimJoint1589.children.append(HAnimJoint1598)

HAnimJoint1580.children.append(HAnimJoint1589)

HAnimJoint1533.children.append(HAnimJoint1580)

HAnimJoint1392.children.append(HAnimJoint1533)

HAnimJoint1380.children.append(HAnimJoint1392)

HAnimJoint1359.children.append(HAnimJoint1380)

HAnimJoint1344.children.append(HAnimJoint1359)

HAnimJoint1335.children.append(HAnimJoint1344)

HAnimJoint854.children.append(HAnimJoint1335)

HAnimJoint839.children.append(HAnimJoint854)

HAnimJoint830.children.append(HAnimJoint839)

HAnimJoint821.children.append(HAnimJoint830)

HAnimJoint812.children.append(HAnimJoint821)

HAnimJoint800.children.append(HAnimJoint812)

HAnimJoint779.children.append(HAnimJoint800)

HAnimJoint770.children.append(HAnimJoint779)

HAnimJoint761.children.append(HAnimJoint770)

HAnimJoint746.children.append(HAnimJoint761)

HAnimJoint734.children.append(HAnimJoint746)

HAnimJoint725.children.append(HAnimJoint734)

HAnimJoint716.children.append(HAnimJoint725)

HAnimJoint707.children.append(HAnimJoint716)

HAnimJoint689.children.append(HAnimJoint707)

HAnimJoint680.children.append(HAnimJoint689)

HAnimJoint671.children.append(HAnimJoint680)

HAnimJoint52.children.append(HAnimJoint671)

HAnimHumanoid43.skeleton.append(HAnimJoint52)
HAnimJoint1611 = x3d.HAnimJoint()
HAnimJoint1611.USE = "hanim_humanoid_root"

HAnimHumanoid43.joints.append(HAnimJoint1611)
HAnimJoint1612 = x3d.HAnimJoint()
HAnimJoint1612.USE = "hanim_sacroiliac"

HAnimHumanoid43.joints.append(HAnimJoint1612)
HAnimJoint1613 = x3d.HAnimJoint()
HAnimJoint1613.USE = "hanim_l_hip"

HAnimHumanoid43.joints.append(HAnimJoint1613)
HAnimJoint1614 = x3d.HAnimJoint()
HAnimJoint1614.USE = "hanim_l_knee"

HAnimHumanoid43.joints.append(HAnimJoint1614)
HAnimJoint1615 = x3d.HAnimJoint()
HAnimJoint1615.USE = "hanim_l_talocrural"

HAnimHumanoid43.joints.append(HAnimJoint1615)
HAnimJoint1616 = x3d.HAnimJoint()
HAnimJoint1616.USE = "hanim_l_talocalcaneonavicular"

HAnimHumanoid43.joints.append(HAnimJoint1616)
HAnimJoint1617 = x3d.HAnimJoint()
HAnimJoint1617.USE = "hanim_l_cuneonavicular_1"

HAnimHumanoid43.joints.append(HAnimJoint1617)
HAnimJoint1618 = x3d.HAnimJoint()
HAnimJoint1618.USE = "hanim_l_tarsometatarsal_1"

HAnimHumanoid43.joints.append(HAnimJoint1618)
HAnimJoint1619 = x3d.HAnimJoint()
HAnimJoint1619.USE = "hanim_l_metatarsophalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint1619)
HAnimJoint1620 = x3d.HAnimJoint()
HAnimJoint1620.USE = "hanim_l_tarsal_interphalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint1620)
HAnimJoint1621 = x3d.HAnimJoint()
HAnimJoint1621.USE = "hanim_l_cuneonavicular_2"

HAnimHumanoid43.joints.append(HAnimJoint1621)
HAnimJoint1622 = x3d.HAnimJoint()
HAnimJoint1622.USE = "hanim_l_tarsometatarsal_2"

HAnimHumanoid43.joints.append(HAnimJoint1622)
HAnimJoint1623 = x3d.HAnimJoint()
HAnimJoint1623.USE = "hanim_l_metatarsophalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1623)
HAnimJoint1624 = x3d.HAnimJoint()
HAnimJoint1624.USE = "hanim_l_tarsal_proximal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1624)
HAnimJoint1625 = x3d.HAnimJoint()
HAnimJoint1625.USE = "hanim_l_tarsal_distal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1625)
HAnimJoint1626 = x3d.HAnimJoint()
HAnimJoint1626.USE = "hanim_l_cuneonavicular_3"

HAnimHumanoid43.joints.append(HAnimJoint1626)
HAnimJoint1627 = x3d.HAnimJoint()
HAnimJoint1627.USE = "hanim_l_tarsometatarsal_3"

HAnimHumanoid43.joints.append(HAnimJoint1627)
HAnimJoint1628 = x3d.HAnimJoint()
HAnimJoint1628.USE = "hanim_l_metatarsophalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1628)
HAnimJoint1629 = x3d.HAnimJoint()
HAnimJoint1629.USE = "hanim_l_tarsal_proximal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1629)
HAnimJoint1630 = x3d.HAnimJoint()
HAnimJoint1630.USE = "hanim_l_tarsal_distal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1630)
HAnimJoint1631 = x3d.HAnimJoint()
HAnimJoint1631.USE = "hanim_l_calcaneocuboid"

HAnimHumanoid43.joints.append(HAnimJoint1631)
HAnimJoint1632 = x3d.HAnimJoint()
HAnimJoint1632.USE = "hanim_l_transversetarsal"

HAnimHumanoid43.joints.append(HAnimJoint1632)
HAnimJoint1633 = x3d.HAnimJoint()
HAnimJoint1633.USE = "hanim_l_tarsometatarsal_4"

HAnimHumanoid43.joints.append(HAnimJoint1633)
HAnimJoint1634 = x3d.HAnimJoint()
HAnimJoint1634.USE = "hanim_l_metatarsophalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1634)
HAnimJoint1635 = x3d.HAnimJoint()
HAnimJoint1635.USE = "hanim_l_tarsal_proximal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1635)
HAnimJoint1636 = x3d.HAnimJoint()
HAnimJoint1636.USE = "hanim_l_tarsal_distal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1636)
HAnimJoint1637 = x3d.HAnimJoint()
HAnimJoint1637.USE = "hanim_l_tarsometatarsal_5"

HAnimHumanoid43.joints.append(HAnimJoint1637)
HAnimJoint1638 = x3d.HAnimJoint()
HAnimJoint1638.USE = "hanim_l_metatarsophalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1638)
HAnimJoint1639 = x3d.HAnimJoint()
HAnimJoint1639.USE = "hanim_l_tarsal_proximal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1639)
HAnimJoint1640 = x3d.HAnimJoint()
HAnimJoint1640.USE = "hanim_l_tarsal_distal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1640)
HAnimJoint1641 = x3d.HAnimJoint()
HAnimJoint1641.USE = "hanim_r_hip"

HAnimHumanoid43.joints.append(HAnimJoint1641)
HAnimJoint1642 = x3d.HAnimJoint()
HAnimJoint1642.USE = "hanim_r_knee"

HAnimHumanoid43.joints.append(HAnimJoint1642)
HAnimJoint1643 = x3d.HAnimJoint()
HAnimJoint1643.USE = "hanim_r_talocrural"

HAnimHumanoid43.joints.append(HAnimJoint1643)
HAnimJoint1644 = x3d.HAnimJoint()
HAnimJoint1644.USE = "hanim_r_talocalcaneonavicular"

HAnimHumanoid43.joints.append(HAnimJoint1644)
HAnimJoint1645 = x3d.HAnimJoint()
HAnimJoint1645.USE = "hanim_r_cuneonavicular_1"

HAnimHumanoid43.joints.append(HAnimJoint1645)
HAnimJoint1646 = x3d.HAnimJoint()
HAnimJoint1646.USE = "hanim_r_tarsometatarsal_1"

HAnimHumanoid43.joints.append(HAnimJoint1646)
HAnimJoint1647 = x3d.HAnimJoint()
HAnimJoint1647.USE = "hanim_r_metatarsophalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint1647)
HAnimJoint1648 = x3d.HAnimJoint()
HAnimJoint1648.USE = "hanim_r_tarsal_interphalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint1648)
HAnimJoint1649 = x3d.HAnimJoint()
HAnimJoint1649.USE = "hanim_r_cuneonavicular_2"

HAnimHumanoid43.joints.append(HAnimJoint1649)
HAnimJoint1650 = x3d.HAnimJoint()
HAnimJoint1650.USE = "hanim_r_tarsometatarsal_2"

HAnimHumanoid43.joints.append(HAnimJoint1650)
HAnimJoint1651 = x3d.HAnimJoint()
HAnimJoint1651.USE = "hanim_r_metatarsophalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1651)
HAnimJoint1652 = x3d.HAnimJoint()
HAnimJoint1652.USE = "hanim_r_tarsal_proximal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1652)
HAnimJoint1653 = x3d.HAnimJoint()
HAnimJoint1653.USE = "hanim_r_tarsal_distal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1653)
HAnimJoint1654 = x3d.HAnimJoint()
HAnimJoint1654.USE = "hanim_r_cuneonavicular_3"

HAnimHumanoid43.joints.append(HAnimJoint1654)
HAnimJoint1655 = x3d.HAnimJoint()
HAnimJoint1655.USE = "hanim_r_tarsometatarsal_3"

HAnimHumanoid43.joints.append(HAnimJoint1655)
HAnimJoint1656 = x3d.HAnimJoint()
HAnimJoint1656.USE = "hanim_r_metatarsophalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1656)
HAnimJoint1657 = x3d.HAnimJoint()
HAnimJoint1657.USE = "hanim_r_tarsal_proximal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1657)
HAnimJoint1658 = x3d.HAnimJoint()
HAnimJoint1658.USE = "hanim_r_tarsal_distal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1658)
HAnimJoint1659 = x3d.HAnimJoint()
HAnimJoint1659.USE = "hanim_r_calcaneocuboid"

HAnimHumanoid43.joints.append(HAnimJoint1659)
HAnimJoint1660 = x3d.HAnimJoint()
HAnimJoint1660.USE = "hanim_r_transversetarsal"

HAnimHumanoid43.joints.append(HAnimJoint1660)
HAnimJoint1661 = x3d.HAnimJoint()
HAnimJoint1661.USE = "hanim_r_tarsometatarsal_4"

HAnimHumanoid43.joints.append(HAnimJoint1661)
HAnimJoint1662 = x3d.HAnimJoint()
HAnimJoint1662.USE = "hanim_r_metatarsophalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1662)
HAnimJoint1663 = x3d.HAnimJoint()
HAnimJoint1663.USE = "hanim_r_tarsal_proximal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1663)
HAnimJoint1664 = x3d.HAnimJoint()
HAnimJoint1664.USE = "hanim_r_tarsal_distal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1664)
HAnimJoint1665 = x3d.HAnimJoint()
HAnimJoint1665.USE = "hanim_r_tarsometatarsal_5"

HAnimHumanoid43.joints.append(HAnimJoint1665)
HAnimJoint1666 = x3d.HAnimJoint()
HAnimJoint1666.USE = "hanim_r_metatarsophalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1666)
HAnimJoint1667 = x3d.HAnimJoint()
HAnimJoint1667.USE = "hanim_r_tarsal_proximal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1667)
HAnimJoint1668 = x3d.HAnimJoint()
HAnimJoint1668.USE = "hanim_r_tarsal_distal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1668)
HAnimJoint1669 = x3d.HAnimJoint()
HAnimJoint1669.USE = "hanim_vl5"

HAnimHumanoid43.joints.append(HAnimJoint1669)
HAnimJoint1670 = x3d.HAnimJoint()
HAnimJoint1670.USE = "hanim_vl4"

HAnimHumanoid43.joints.append(HAnimJoint1670)
HAnimJoint1671 = x3d.HAnimJoint()
HAnimJoint1671.USE = "hanim_vl3"

HAnimHumanoid43.joints.append(HAnimJoint1671)
HAnimJoint1672 = x3d.HAnimJoint()
HAnimJoint1672.USE = "hanim_vl2"

HAnimHumanoid43.joints.append(HAnimJoint1672)
HAnimJoint1673 = x3d.HAnimJoint()
HAnimJoint1673.USE = "hanim_vl1"

HAnimHumanoid43.joints.append(HAnimJoint1673)
HAnimJoint1674 = x3d.HAnimJoint()
HAnimJoint1674.USE = "hanim_vt12"

HAnimHumanoid43.joints.append(HAnimJoint1674)
HAnimJoint1675 = x3d.HAnimJoint()
HAnimJoint1675.USE = "hanim_vt11"

HAnimHumanoid43.joints.append(HAnimJoint1675)
HAnimJoint1676 = x3d.HAnimJoint()
HAnimJoint1676.USE = "hanim_vt10"

HAnimHumanoid43.joints.append(HAnimJoint1676)
HAnimJoint1677 = x3d.HAnimJoint()
HAnimJoint1677.USE = "hanim_vt9"

HAnimHumanoid43.joints.append(HAnimJoint1677)
HAnimJoint1678 = x3d.HAnimJoint()
HAnimJoint1678.USE = "hanim_vt8"

HAnimHumanoid43.joints.append(HAnimJoint1678)
HAnimJoint1679 = x3d.HAnimJoint()
HAnimJoint1679.USE = "hanim_vt7"

HAnimHumanoid43.joints.append(HAnimJoint1679)
HAnimJoint1680 = x3d.HAnimJoint()
HAnimJoint1680.USE = "hanim_vt6"

HAnimHumanoid43.joints.append(HAnimJoint1680)
HAnimJoint1681 = x3d.HAnimJoint()
HAnimJoint1681.USE = "hanim_vt5"

HAnimHumanoid43.joints.append(HAnimJoint1681)
HAnimJoint1682 = x3d.HAnimJoint()
HAnimJoint1682.USE = "hanim_vt4"

HAnimHumanoid43.joints.append(HAnimJoint1682)
HAnimJoint1683 = x3d.HAnimJoint()
HAnimJoint1683.USE = "hanim_vt3"

HAnimHumanoid43.joints.append(HAnimJoint1683)
HAnimJoint1684 = x3d.HAnimJoint()
HAnimJoint1684.USE = "hanim_vt2"

HAnimHumanoid43.joints.append(HAnimJoint1684)
HAnimJoint1685 = x3d.HAnimJoint()
HAnimJoint1685.USE = "hanim_vt1"

HAnimHumanoid43.joints.append(HAnimJoint1685)
HAnimJoint1686 = x3d.HAnimJoint()
HAnimJoint1686.USE = "hanim_vc7"

HAnimHumanoid43.joints.append(HAnimJoint1686)
HAnimJoint1687 = x3d.HAnimJoint()
HAnimJoint1687.USE = "hanim_vc6"

HAnimHumanoid43.joints.append(HAnimJoint1687)
HAnimJoint1688 = x3d.HAnimJoint()
HAnimJoint1688.USE = "hanim_vc5"

HAnimHumanoid43.joints.append(HAnimJoint1688)
HAnimJoint1689 = x3d.HAnimJoint()
HAnimJoint1689.USE = "hanim_vc4"

HAnimHumanoid43.joints.append(HAnimJoint1689)
HAnimJoint1690 = x3d.HAnimJoint()
HAnimJoint1690.USE = "hanim_vc3"

HAnimHumanoid43.joints.append(HAnimJoint1690)
HAnimJoint1691 = x3d.HAnimJoint()
HAnimJoint1691.USE = "hanim_vc2"

HAnimHumanoid43.joints.append(HAnimJoint1691)
HAnimJoint1692 = x3d.HAnimJoint()
HAnimJoint1692.USE = "hanim_vc1"

HAnimHumanoid43.joints.append(HAnimJoint1692)
HAnimJoint1693 = x3d.HAnimJoint()
HAnimJoint1693.USE = "hanim_skullbase"

HAnimHumanoid43.joints.append(HAnimJoint1693)
HAnimJoint1694 = x3d.HAnimJoint()
HAnimJoint1694.USE = "hanim_l_eyelid_joint"

HAnimHumanoid43.joints.append(HAnimJoint1694)
HAnimJoint1695 = x3d.HAnimJoint()
HAnimJoint1695.USE = "hanim_r_eyelid_joint"

HAnimHumanoid43.joints.append(HAnimJoint1695)
HAnimJoint1696 = x3d.HAnimJoint()
HAnimJoint1696.USE = "hanim_l_eyeball_joint"

HAnimHumanoid43.joints.append(HAnimJoint1696)
HAnimJoint1697 = x3d.HAnimJoint()
HAnimJoint1697.USE = "hanim_r_eyeball_joint"

HAnimHumanoid43.joints.append(HAnimJoint1697)
HAnimJoint1698 = x3d.HAnimJoint()
HAnimJoint1698.USE = "hanim_l_eyebrow_joint"

HAnimHumanoid43.joints.append(HAnimJoint1698)
HAnimJoint1699 = x3d.HAnimJoint()
HAnimJoint1699.USE = "hanim_r_eyebrow_joint"

HAnimHumanoid43.joints.append(HAnimJoint1699)
HAnimJoint1700 = x3d.HAnimJoint()
HAnimJoint1700.USE = "hanim_temporomandibular"

HAnimHumanoid43.joints.append(HAnimJoint1700)
HAnimJoint1701 = x3d.HAnimJoint()
HAnimJoint1701.USE = "hanim_l_sternoclavicular"

HAnimHumanoid43.joints.append(HAnimJoint1701)
HAnimJoint1702 = x3d.HAnimJoint()
HAnimJoint1702.USE = "hanim_l_acromioclavicular"

HAnimHumanoid43.joints.append(HAnimJoint1702)
HAnimJoint1703 = x3d.HAnimJoint()
HAnimJoint1703.USE = "hanim_l_shoulder"

HAnimHumanoid43.joints.append(HAnimJoint1703)
HAnimJoint1704 = x3d.HAnimJoint()
HAnimJoint1704.USE = "hanim_l_elbow"

HAnimHumanoid43.joints.append(HAnimJoint1704)
HAnimJoint1705 = x3d.HAnimJoint()
HAnimJoint1705.USE = "hanim_l_radiocarpal"

HAnimHumanoid43.joints.append(HAnimJoint1705)
HAnimJoint1706 = x3d.HAnimJoint()
HAnimJoint1706.USE = "hanim_l_midcarpal_1"

HAnimHumanoid43.joints.append(HAnimJoint1706)
HAnimJoint1707 = x3d.HAnimJoint()
HAnimJoint1707.USE = "hanim_l_carpometacarpal_1"

HAnimHumanoid43.joints.append(HAnimJoint1707)
HAnimJoint1708 = x3d.HAnimJoint()
HAnimJoint1708.USE = "hanim_l_metacarpophalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint1708)
HAnimJoint1709 = x3d.HAnimJoint()
HAnimJoint1709.USE = "hanim_l_carpal_interphalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint1709)
HAnimJoint1710 = x3d.HAnimJoint()
HAnimJoint1710.USE = "hanim_l_midcarpal_2"

HAnimHumanoid43.joints.append(HAnimJoint1710)
HAnimJoint1711 = x3d.HAnimJoint()
HAnimJoint1711.USE = "hanim_l_carpometacarpal_2"

HAnimHumanoid43.joints.append(HAnimJoint1711)
HAnimJoint1712 = x3d.HAnimJoint()
HAnimJoint1712.USE = "hanim_l_metacarpophalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1712)
HAnimJoint1713 = x3d.HAnimJoint()
HAnimJoint1713.USE = "hanim_l_carpal_proximal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1713)
HAnimJoint1714 = x3d.HAnimJoint()
HAnimJoint1714.USE = "hanim_l_carpal_distal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1714)
HAnimJoint1715 = x3d.HAnimJoint()
HAnimJoint1715.USE = "hanim_l_midcarpal_3"

HAnimHumanoid43.joints.append(HAnimJoint1715)
HAnimJoint1716 = x3d.HAnimJoint()
HAnimJoint1716.USE = "hanim_l_carpometacarpal_3"

HAnimHumanoid43.joints.append(HAnimJoint1716)
HAnimJoint1717 = x3d.HAnimJoint()
HAnimJoint1717.USE = "hanim_l_metacarpophalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1717)
HAnimJoint1718 = x3d.HAnimJoint()
HAnimJoint1718.USE = "hanim_l_carpal_proximal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1718)
HAnimJoint1719 = x3d.HAnimJoint()
HAnimJoint1719.USE = "hanim_l_carpal_distal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1719)
HAnimJoint1720 = x3d.HAnimJoint()
HAnimJoint1720.USE = "hanim_l_midcarpal_4_5"

HAnimHumanoid43.joints.append(HAnimJoint1720)
HAnimJoint1721 = x3d.HAnimJoint()
HAnimJoint1721.USE = "hanim_l_carpometacarpal_4"

HAnimHumanoid43.joints.append(HAnimJoint1721)
HAnimJoint1722 = x3d.HAnimJoint()
HAnimJoint1722.USE = "hanim_l_metacarpophalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1722)
HAnimJoint1723 = x3d.HAnimJoint()
HAnimJoint1723.USE = "hanim_l_carpal_proximal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1723)
HAnimJoint1724 = x3d.HAnimJoint()
HAnimJoint1724.USE = "hanim_l_carpal_distal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1724)
HAnimJoint1725 = x3d.HAnimJoint()
HAnimJoint1725.USE = "hanim_l_carpometacarpal_5"

HAnimHumanoid43.joints.append(HAnimJoint1725)
HAnimJoint1726 = x3d.HAnimJoint()
HAnimJoint1726.USE = "hanim_l_metacarpophalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1726)
HAnimJoint1727 = x3d.HAnimJoint()
HAnimJoint1727.USE = "hanim_l_carpal_proximal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1727)
HAnimJoint1728 = x3d.HAnimJoint()
HAnimJoint1728.USE = "hanim_l_carpal_distal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1728)
HAnimJoint1729 = x3d.HAnimJoint()
HAnimJoint1729.USE = "hanim_r_sternoclavicular"

HAnimHumanoid43.joints.append(HAnimJoint1729)
HAnimJoint1730 = x3d.HAnimJoint()
HAnimJoint1730.USE = "hanim_r_acromioclavicular"

HAnimHumanoid43.joints.append(HAnimJoint1730)
HAnimJoint1731 = x3d.HAnimJoint()
HAnimJoint1731.USE = "hanim_r_shoulder"

HAnimHumanoid43.joints.append(HAnimJoint1731)
HAnimJoint1732 = x3d.HAnimJoint()
HAnimJoint1732.USE = "hanim_r_elbow"

HAnimHumanoid43.joints.append(HAnimJoint1732)
HAnimJoint1733 = x3d.HAnimJoint()
HAnimJoint1733.USE = "hanim_r_radiocarpal"

HAnimHumanoid43.joints.append(HAnimJoint1733)
HAnimJoint1734 = x3d.HAnimJoint()
HAnimJoint1734.USE = "hanim_r_midcarpal_1"

HAnimHumanoid43.joints.append(HAnimJoint1734)
HAnimJoint1735 = x3d.HAnimJoint()
HAnimJoint1735.USE = "hanim_r_carpometacarpal_1"

HAnimHumanoid43.joints.append(HAnimJoint1735)
HAnimJoint1736 = x3d.HAnimJoint()
HAnimJoint1736.USE = "hanim_r_metacarpophalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint1736)
HAnimJoint1737 = x3d.HAnimJoint()
HAnimJoint1737.USE = "hanim_r_carpal_interphalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint1737)
HAnimJoint1738 = x3d.HAnimJoint()
HAnimJoint1738.USE = "hanim_r_midcarpal_2"

HAnimHumanoid43.joints.append(HAnimJoint1738)
HAnimJoint1739 = x3d.HAnimJoint()
HAnimJoint1739.USE = "hanim_r_carpometacarpal_2"

HAnimHumanoid43.joints.append(HAnimJoint1739)
HAnimJoint1740 = x3d.HAnimJoint()
HAnimJoint1740.USE = "hanim_r_metacarpophalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1740)
HAnimJoint1741 = x3d.HAnimJoint()
HAnimJoint1741.USE = "hanim_r_carpal_proximal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1741)
HAnimJoint1742 = x3d.HAnimJoint()
HAnimJoint1742.USE = "hanim_r_carpal_distal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint1742)
HAnimJoint1743 = x3d.HAnimJoint()
HAnimJoint1743.USE = "hanim_r_midcarpal_3"

HAnimHumanoid43.joints.append(HAnimJoint1743)
HAnimJoint1744 = x3d.HAnimJoint()
HAnimJoint1744.USE = "hanim_r_carpometacarpal_3"

HAnimHumanoid43.joints.append(HAnimJoint1744)
HAnimJoint1745 = x3d.HAnimJoint()
HAnimJoint1745.USE = "hanim_r_metacarpophalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1745)
HAnimJoint1746 = x3d.HAnimJoint()
HAnimJoint1746.USE = "hanim_r_carpal_proximal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1746)
HAnimJoint1747 = x3d.HAnimJoint()
HAnimJoint1747.USE = "hanim_r_carpal_distal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint1747)
HAnimJoint1748 = x3d.HAnimJoint()
HAnimJoint1748.USE = "hanim_r_midcarpal_4_5"

HAnimHumanoid43.joints.append(HAnimJoint1748)
HAnimJoint1749 = x3d.HAnimJoint()
HAnimJoint1749.USE = "hanim_r_carpometacarpal_4"

HAnimHumanoid43.joints.append(HAnimJoint1749)
HAnimJoint1750 = x3d.HAnimJoint()
HAnimJoint1750.USE = "hanim_r_metacarpophalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1750)
HAnimJoint1751 = x3d.HAnimJoint()
HAnimJoint1751.USE = "hanim_r_carpal_proximal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1751)
HAnimJoint1752 = x3d.HAnimJoint()
HAnimJoint1752.USE = "hanim_r_carpal_distal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint1752)
HAnimJoint1753 = x3d.HAnimJoint()
HAnimJoint1753.USE = "hanim_r_carpometacarpal_5"

HAnimHumanoid43.joints.append(HAnimJoint1753)
HAnimJoint1754 = x3d.HAnimJoint()
HAnimJoint1754.USE = "hanim_r_metacarpophalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1754)
HAnimJoint1755 = x3d.HAnimJoint()
HAnimJoint1755.USE = "hanim_r_carpal_proximal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1755)
HAnimJoint1756 = x3d.HAnimJoint()
HAnimJoint1756.USE = "hanim_r_carpal_distal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint1756)
HAnimSegment1757 = x3d.HAnimSegment()
HAnimSegment1757.USE = "hanim_sacrum"

HAnimHumanoid43.segments.append(HAnimSegment1757)
HAnimSegment1758 = x3d.HAnimSegment()
HAnimSegment1758.USE = "hanim_pelvis"

HAnimHumanoid43.segments.append(HAnimSegment1758)
HAnimSegment1759 = x3d.HAnimSegment()
HAnimSegment1759.USE = "hanim_l_thigh"

HAnimHumanoid43.segments.append(HAnimSegment1759)
HAnimSegment1760 = x3d.HAnimSegment()
HAnimSegment1760.USE = "hanim_l_calf"

HAnimHumanoid43.segments.append(HAnimSegment1760)
HAnimSegment1761 = x3d.HAnimSegment()
HAnimSegment1761.USE = "hanim_l_talus"

HAnimHumanoid43.segments.append(HAnimSegment1761)
HAnimSegment1762 = x3d.HAnimSegment()
HAnimSegment1762.USE = "hanim_l_navicular"

HAnimHumanoid43.segments.append(HAnimSegment1762)
HAnimSegment1763 = x3d.HAnimSegment()
HAnimSegment1763.USE = "hanim_l_cuneiform_1"

HAnimHumanoid43.segments.append(HAnimSegment1763)
HAnimSegment1764 = x3d.HAnimSegment()
HAnimSegment1764.USE = "hanim_l_metatarsal_1"

HAnimHumanoid43.segments.append(HAnimSegment1764)
HAnimSegment1765 = x3d.HAnimSegment()
HAnimSegment1765.USE = "hanim_l_tarsal_proximal_phalanx_1"

HAnimHumanoid43.segments.append(HAnimSegment1765)
HAnimSegment1766 = x3d.HAnimSegment()
HAnimSegment1766.USE = "hanim_l_cuneiform_2"

HAnimHumanoid43.segments.append(HAnimSegment1766)
HAnimSegment1767 = x3d.HAnimSegment()
HAnimSegment1767.USE = "hanim_l_metatarsal_2"

HAnimHumanoid43.segments.append(HAnimSegment1767)
HAnimSegment1768 = x3d.HAnimSegment()
HAnimSegment1768.USE = "hanim_l_tarsal_proximal_phalanx_2"

HAnimHumanoid43.segments.append(HAnimSegment1768)
HAnimSegment1769 = x3d.HAnimSegment()
HAnimSegment1769.USE = "hanim_l_tarsal_middle_phalanx_2"

HAnimHumanoid43.segments.append(HAnimSegment1769)
HAnimSegment1770 = x3d.HAnimSegment()
HAnimSegment1770.USE = "hanim_l_cuneiform_3"

HAnimHumanoid43.segments.append(HAnimSegment1770)
HAnimSegment1771 = x3d.HAnimSegment()
HAnimSegment1771.USE = "hanim_l_metatarsal_3"

HAnimHumanoid43.segments.append(HAnimSegment1771)
HAnimSegment1772 = x3d.HAnimSegment()
HAnimSegment1772.USE = "hanim_l_tarsal_proximal_phalanx_3"

HAnimHumanoid43.segments.append(HAnimSegment1772)
HAnimSegment1773 = x3d.HAnimSegment()
HAnimSegment1773.USE = "hanim_l_tarsal_middle_phalanx_3"

HAnimHumanoid43.segments.append(HAnimSegment1773)
HAnimSegment1774 = x3d.HAnimSegment()
HAnimSegment1774.USE = "hanim_l_calcaneus"

HAnimHumanoid43.segments.append(HAnimSegment1774)
HAnimSegment1775 = x3d.HAnimSegment()
HAnimSegment1775.USE = "hanim_l_cuboid"

HAnimHumanoid43.segments.append(HAnimSegment1775)
HAnimSegment1776 = x3d.HAnimSegment()
HAnimSegment1776.USE = "hanim_l_metatarsal_4"

HAnimHumanoid43.segments.append(HAnimSegment1776)
HAnimSegment1777 = x3d.HAnimSegment()
HAnimSegment1777.USE = "hanim_l_tarsal_proximal_phalanx_4"

HAnimHumanoid43.segments.append(HAnimSegment1777)
HAnimSegment1778 = x3d.HAnimSegment()
HAnimSegment1778.USE = "hanim_l_tarsal_middle_phalanx_4"

HAnimHumanoid43.segments.append(HAnimSegment1778)
HAnimSegment1779 = x3d.HAnimSegment()
HAnimSegment1779.USE = "hanim_l_metatarsal_5"

HAnimHumanoid43.segments.append(HAnimSegment1779)
HAnimSegment1780 = x3d.HAnimSegment()
HAnimSegment1780.USE = "hanim_l_tarsal_proximal_phalanx_5"

HAnimHumanoid43.segments.append(HAnimSegment1780)
HAnimSegment1781 = x3d.HAnimSegment()
HAnimSegment1781.USE = "hanim_l_tarsal_middle_phalanx_5"

HAnimHumanoid43.segments.append(HAnimSegment1781)
HAnimSegment1782 = x3d.HAnimSegment()
HAnimSegment1782.USE = "hanim_r_thigh"

HAnimHumanoid43.segments.append(HAnimSegment1782)
HAnimSegment1783 = x3d.HAnimSegment()
HAnimSegment1783.USE = "hanim_r_calf"

HAnimHumanoid43.segments.append(HAnimSegment1783)
HAnimSegment1784 = x3d.HAnimSegment()
HAnimSegment1784.USE = "hanim_r_talus"

HAnimHumanoid43.segments.append(HAnimSegment1784)
HAnimSegment1785 = x3d.HAnimSegment()
HAnimSegment1785.USE = "hanim_r_navicular"

HAnimHumanoid43.segments.append(HAnimSegment1785)
HAnimSegment1786 = x3d.HAnimSegment()
HAnimSegment1786.USE = "hanim_r_cuneiform_1"

HAnimHumanoid43.segments.append(HAnimSegment1786)
HAnimSegment1787 = x3d.HAnimSegment()
HAnimSegment1787.USE = "hanim_r_metatarsal_1"

HAnimHumanoid43.segments.append(HAnimSegment1787)
HAnimSegment1788 = x3d.HAnimSegment()
HAnimSegment1788.USE = "hanim_r_tarsal_proximal_phalanx_1"

HAnimHumanoid43.segments.append(HAnimSegment1788)
HAnimSegment1789 = x3d.HAnimSegment()
HAnimSegment1789.USE = "hanim_r_cuneiform_2"

HAnimHumanoid43.segments.append(HAnimSegment1789)
HAnimSegment1790 = x3d.HAnimSegment()
HAnimSegment1790.USE = "hanim_r_metatarsal_2"

HAnimHumanoid43.segments.append(HAnimSegment1790)
HAnimSegment1791 = x3d.HAnimSegment()
HAnimSegment1791.USE = "hanim_r_tarsal_proximal_phalanx_2"

HAnimHumanoid43.segments.append(HAnimSegment1791)
HAnimSegment1792 = x3d.HAnimSegment()
HAnimSegment1792.USE = "hanim_r_tarsal_middle_phalanx_2"

HAnimHumanoid43.segments.append(HAnimSegment1792)
HAnimSegment1793 = x3d.HAnimSegment()
HAnimSegment1793.USE = "hanim_r_cuneiform_3"

HAnimHumanoid43.segments.append(HAnimSegment1793)
HAnimSegment1794 = x3d.HAnimSegment()
HAnimSegment1794.USE = "hanim_r_metatarsal_3"

HAnimHumanoid43.segments.append(HAnimSegment1794)
HAnimSegment1795 = x3d.HAnimSegment()
HAnimSegment1795.USE = "hanim_r_tarsal_proximal_phalanx_3"

HAnimHumanoid43.segments.append(HAnimSegment1795)
HAnimSegment1796 = x3d.HAnimSegment()
HAnimSegment1796.USE = "hanim_r_tarsal_middle_phalanx_3"

HAnimHumanoid43.segments.append(HAnimSegment1796)
HAnimSegment1797 = x3d.HAnimSegment()
HAnimSegment1797.USE = "hanim_r_calcaneus"

HAnimHumanoid43.segments.append(HAnimSegment1797)
HAnimSegment1798 = x3d.HAnimSegment()
HAnimSegment1798.USE = "hanim_r_cuboid"

HAnimHumanoid43.segments.append(HAnimSegment1798)
HAnimSegment1799 = x3d.HAnimSegment()
HAnimSegment1799.USE = "hanim_r_metatarsal_4"

HAnimHumanoid43.segments.append(HAnimSegment1799)
HAnimSegment1800 = x3d.HAnimSegment()
HAnimSegment1800.USE = "hanim_r_tarsal_proximal_phalanx_4"

HAnimHumanoid43.segments.append(HAnimSegment1800)
HAnimSegment1801 = x3d.HAnimSegment()
HAnimSegment1801.USE = "hanim_r_tarsal_middle_phalanx_4"

HAnimHumanoid43.segments.append(HAnimSegment1801)
HAnimSegment1802 = x3d.HAnimSegment()
HAnimSegment1802.USE = "hanim_r_metatarsal_5"

HAnimHumanoid43.segments.append(HAnimSegment1802)
HAnimSegment1803 = x3d.HAnimSegment()
HAnimSegment1803.USE = "hanim_r_tarsal_proximal_phalanx_5"

HAnimHumanoid43.segments.append(HAnimSegment1803)
HAnimSegment1804 = x3d.HAnimSegment()
HAnimSegment1804.USE = "hanim_r_tarsal_middle_phalanx_5"

HAnimHumanoid43.segments.append(HAnimSegment1804)
HAnimSegment1805 = x3d.HAnimSegment()
HAnimSegment1805.USE = "hanim_l5"

HAnimHumanoid43.segments.append(HAnimSegment1805)
HAnimSegment1806 = x3d.HAnimSegment()
HAnimSegment1806.USE = "hanim_l4"

HAnimHumanoid43.segments.append(HAnimSegment1806)
HAnimSegment1807 = x3d.HAnimSegment()
HAnimSegment1807.USE = "hanim_l3"

HAnimHumanoid43.segments.append(HAnimSegment1807)
HAnimSegment1808 = x3d.HAnimSegment()
HAnimSegment1808.USE = "hanim_l2"

HAnimHumanoid43.segments.append(HAnimSegment1808)
HAnimSegment1809 = x3d.HAnimSegment()
HAnimSegment1809.USE = "hanim_l1"

HAnimHumanoid43.segments.append(HAnimSegment1809)
HAnimSegment1810 = x3d.HAnimSegment()
HAnimSegment1810.USE = "hanim_t12"

HAnimHumanoid43.segments.append(HAnimSegment1810)
HAnimSegment1811 = x3d.HAnimSegment()
HAnimSegment1811.USE = "hanim_t11"

HAnimHumanoid43.segments.append(HAnimSegment1811)
HAnimSegment1812 = x3d.HAnimSegment()
HAnimSegment1812.USE = "hanim_t10"

HAnimHumanoid43.segments.append(HAnimSegment1812)
HAnimSegment1813 = x3d.HAnimSegment()
HAnimSegment1813.USE = "hanim_t9"

HAnimHumanoid43.segments.append(HAnimSegment1813)
HAnimSegment1814 = x3d.HAnimSegment()
HAnimSegment1814.USE = "hanim_t8"

HAnimHumanoid43.segments.append(HAnimSegment1814)
HAnimSegment1815 = x3d.HAnimSegment()
HAnimSegment1815.USE = "hanim_t7"

HAnimHumanoid43.segments.append(HAnimSegment1815)
HAnimSegment1816 = x3d.HAnimSegment()
HAnimSegment1816.USE = "hanim_t6"

HAnimHumanoid43.segments.append(HAnimSegment1816)
HAnimSegment1817 = x3d.HAnimSegment()
HAnimSegment1817.USE = "hanim_t5"

HAnimHumanoid43.segments.append(HAnimSegment1817)
HAnimSegment1818 = x3d.HAnimSegment()
HAnimSegment1818.USE = "hanim_t4"

HAnimHumanoid43.segments.append(HAnimSegment1818)
HAnimSegment1819 = x3d.HAnimSegment()
HAnimSegment1819.USE = "hanim_t3"

HAnimHumanoid43.segments.append(HAnimSegment1819)
HAnimSegment1820 = x3d.HAnimSegment()
HAnimSegment1820.USE = "hanim_t2"

HAnimHumanoid43.segments.append(HAnimSegment1820)
HAnimSegment1821 = x3d.HAnimSegment()
HAnimSegment1821.USE = "hanim_t1"

HAnimHumanoid43.segments.append(HAnimSegment1821)
HAnimSegment1822 = x3d.HAnimSegment()
HAnimSegment1822.USE = "hanim_c7"

HAnimHumanoid43.segments.append(HAnimSegment1822)
HAnimSegment1823 = x3d.HAnimSegment()
HAnimSegment1823.USE = "hanim_c6"

HAnimHumanoid43.segments.append(HAnimSegment1823)
HAnimSegment1824 = x3d.HAnimSegment()
HAnimSegment1824.USE = "hanim_c5"

HAnimHumanoid43.segments.append(HAnimSegment1824)
HAnimSegment1825 = x3d.HAnimSegment()
HAnimSegment1825.USE = "hanim_c4"

HAnimHumanoid43.segments.append(HAnimSegment1825)
HAnimSegment1826 = x3d.HAnimSegment()
HAnimSegment1826.USE = "hanim_c3"

HAnimHumanoid43.segments.append(HAnimSegment1826)
HAnimSegment1827 = x3d.HAnimSegment()
HAnimSegment1827.USE = "hanim_c2"

HAnimHumanoid43.segments.append(HAnimSegment1827)
HAnimSegment1828 = x3d.HAnimSegment()
HAnimSegment1828.USE = "hanim_c1"

HAnimHumanoid43.segments.append(HAnimSegment1828)
HAnimSegment1829 = x3d.HAnimSegment()
HAnimSegment1829.USE = "hanim_skull"

HAnimHumanoid43.segments.append(HAnimSegment1829)
HAnimSegment1830 = x3d.HAnimSegment()
HAnimSegment1830.USE = "hanim_l_clavicle"

HAnimHumanoid43.segments.append(HAnimSegment1830)
HAnimSegment1831 = x3d.HAnimSegment()
HAnimSegment1831.USE = "hanim_l_scapula"

HAnimHumanoid43.segments.append(HAnimSegment1831)
HAnimSegment1832 = x3d.HAnimSegment()
HAnimSegment1832.USE = "hanim_l_upperarm"

HAnimHumanoid43.segments.append(HAnimSegment1832)
HAnimSegment1833 = x3d.HAnimSegment()
HAnimSegment1833.USE = "hanim_l_forearm"

HAnimHumanoid43.segments.append(HAnimSegment1833)
HAnimSegment1834 = x3d.HAnimSegment()
HAnimSegment1834.USE = "hanim_l_carpal"

HAnimHumanoid43.segments.append(HAnimSegment1834)
HAnimSegment1835 = x3d.HAnimSegment()
HAnimSegment1835.USE = "hanim_l_trapezium"

HAnimHumanoid43.segments.append(HAnimSegment1835)
HAnimSegment1836 = x3d.HAnimSegment()
HAnimSegment1836.USE = "hanim_l_metacarpal_1"

HAnimHumanoid43.segments.append(HAnimSegment1836)
HAnimSegment1837 = x3d.HAnimSegment()
HAnimSegment1837.USE = "hanim_l_carpal_proximal_phalanx_1"

HAnimHumanoid43.segments.append(HAnimSegment1837)
HAnimSegment1838 = x3d.HAnimSegment()
HAnimSegment1838.USE = "hanim_l_trapezoid"

HAnimHumanoid43.segments.append(HAnimSegment1838)
HAnimSegment1839 = x3d.HAnimSegment()
HAnimSegment1839.USE = "hanim_l_metacarpal_2"

HAnimHumanoid43.segments.append(HAnimSegment1839)
HAnimSegment1840 = x3d.HAnimSegment()
HAnimSegment1840.USE = "hanim_l_carpal_proximal_phalanx_2"

HAnimHumanoid43.segments.append(HAnimSegment1840)
HAnimSegment1841 = x3d.HAnimSegment()
HAnimSegment1841.USE = "hanim_l_carpal_middle_phalanx_2"

HAnimHumanoid43.segments.append(HAnimSegment1841)
HAnimSegment1842 = x3d.HAnimSegment()
HAnimSegment1842.USE = "hanim_l_capitate"

HAnimHumanoid43.segments.append(HAnimSegment1842)
HAnimSegment1843 = x3d.HAnimSegment()
HAnimSegment1843.USE = "hanim_l_metacarpal_3"

HAnimHumanoid43.segments.append(HAnimSegment1843)
HAnimSegment1844 = x3d.HAnimSegment()
HAnimSegment1844.USE = "hanim_l_carpal_proximal_phalanx_3"

HAnimHumanoid43.segments.append(HAnimSegment1844)
HAnimSegment1845 = x3d.HAnimSegment()
HAnimSegment1845.USE = "hanim_l_carpal_middle_phalanx_3"

HAnimHumanoid43.segments.append(HAnimSegment1845)
HAnimSegment1846 = x3d.HAnimSegment()
HAnimSegment1846.USE = "hanim_l_hamate"

HAnimHumanoid43.segments.append(HAnimSegment1846)
HAnimSegment1847 = x3d.HAnimSegment()
HAnimSegment1847.USE = "hanim_l_metacarpal_4"

HAnimHumanoid43.segments.append(HAnimSegment1847)
HAnimSegment1848 = x3d.HAnimSegment()
HAnimSegment1848.USE = "hanim_l_carpal_proximal_phalanx_4"

HAnimHumanoid43.segments.append(HAnimSegment1848)
HAnimSegment1849 = x3d.HAnimSegment()
HAnimSegment1849.USE = "hanim_l_carpal_middle_phalanx_4"

HAnimHumanoid43.segments.append(HAnimSegment1849)
HAnimSegment1850 = x3d.HAnimSegment()
HAnimSegment1850.USE = "hanim_l_metacarpal_5"

HAnimHumanoid43.segments.append(HAnimSegment1850)
HAnimSegment1851 = x3d.HAnimSegment()
HAnimSegment1851.USE = "hanim_l_carpal_proximal_phalanx_5"

HAnimHumanoid43.segments.append(HAnimSegment1851)
HAnimSegment1852 = x3d.HAnimSegment()
HAnimSegment1852.USE = "hanim_l_carpal_middle_phalanx_5"

HAnimHumanoid43.segments.append(HAnimSegment1852)
HAnimSegment1853 = x3d.HAnimSegment()
HAnimSegment1853.USE = "hanim_r_clavicle"

HAnimHumanoid43.segments.append(HAnimSegment1853)
HAnimSegment1854 = x3d.HAnimSegment()
HAnimSegment1854.USE = "hanim_r_scapula"

HAnimHumanoid43.segments.append(HAnimSegment1854)
HAnimSegment1855 = x3d.HAnimSegment()
HAnimSegment1855.USE = "hanim_r_upperarm"

HAnimHumanoid43.segments.append(HAnimSegment1855)
HAnimSegment1856 = x3d.HAnimSegment()
HAnimSegment1856.USE = "hanim_r_forearm"

HAnimHumanoid43.segments.append(HAnimSegment1856)
HAnimSegment1857 = x3d.HAnimSegment()
HAnimSegment1857.USE = "hanim_r_carpal"

HAnimHumanoid43.segments.append(HAnimSegment1857)
HAnimSegment1858 = x3d.HAnimSegment()
HAnimSegment1858.USE = "hanim_r_trapezium"

HAnimHumanoid43.segments.append(HAnimSegment1858)
HAnimSegment1859 = x3d.HAnimSegment()
HAnimSegment1859.USE = "hanim_r_metacarpal_1"

HAnimHumanoid43.segments.append(HAnimSegment1859)
HAnimSegment1860 = x3d.HAnimSegment()
HAnimSegment1860.USE = "hanim_r_carpal_proximal_phalanx_1"

HAnimHumanoid43.segments.append(HAnimSegment1860)
HAnimSegment1861 = x3d.HAnimSegment()
HAnimSegment1861.USE = "hanim_r_trapezoid"

HAnimHumanoid43.segments.append(HAnimSegment1861)
HAnimSegment1862 = x3d.HAnimSegment()
HAnimSegment1862.USE = "hanim_r_metacarpal_2"

HAnimHumanoid43.segments.append(HAnimSegment1862)
HAnimSegment1863 = x3d.HAnimSegment()
HAnimSegment1863.USE = "hanim_r_carpal_proximal_phalanx_2"

HAnimHumanoid43.segments.append(HAnimSegment1863)
HAnimSegment1864 = x3d.HAnimSegment()
HAnimSegment1864.USE = "hanim_r_carpal_middle_phalanx_2"

HAnimHumanoid43.segments.append(HAnimSegment1864)
HAnimSegment1865 = x3d.HAnimSegment()
HAnimSegment1865.USE = "hanim_r_capitate"

HAnimHumanoid43.segments.append(HAnimSegment1865)
HAnimSegment1866 = x3d.HAnimSegment()
HAnimSegment1866.USE = "hanim_r_metacarpal_3"

HAnimHumanoid43.segments.append(HAnimSegment1866)
HAnimSegment1867 = x3d.HAnimSegment()
HAnimSegment1867.USE = "hanim_r_carpal_proximal_phalanx_3"

HAnimHumanoid43.segments.append(HAnimSegment1867)
HAnimSegment1868 = x3d.HAnimSegment()
HAnimSegment1868.USE = "hanim_r_carpal_middle_phalanx_3"

HAnimHumanoid43.segments.append(HAnimSegment1868)
HAnimSegment1869 = x3d.HAnimSegment()
HAnimSegment1869.USE = "hanim_r_hamate"

HAnimHumanoid43.segments.append(HAnimSegment1869)
HAnimSegment1870 = x3d.HAnimSegment()
HAnimSegment1870.USE = "hanim_r_metacarpal_4"

HAnimHumanoid43.segments.append(HAnimSegment1870)
HAnimSegment1871 = x3d.HAnimSegment()
HAnimSegment1871.USE = "hanim_r_carpal_proximal_phalanx_4"

HAnimHumanoid43.segments.append(HAnimSegment1871)
HAnimSegment1872 = x3d.HAnimSegment()
HAnimSegment1872.USE = "hanim_r_carpal_middle_phalanx_4"

HAnimHumanoid43.segments.append(HAnimSegment1872)
HAnimSegment1873 = x3d.HAnimSegment()
HAnimSegment1873.USE = "hanim_r_metacarpal_5"

HAnimHumanoid43.segments.append(HAnimSegment1873)
HAnimSegment1874 = x3d.HAnimSegment()
HAnimSegment1874.USE = "hanim_r_carpal_proximal_phalanx_5"

HAnimHumanoid43.segments.append(HAnimSegment1874)
HAnimSegment1875 = x3d.HAnimSegment()
HAnimSegment1875.USE = "hanim_r_carpal_middle_phalanx_5"

HAnimHumanoid43.segments.append(HAnimSegment1875)
HAnimSite1876 = x3d.HAnimSite()
HAnimSite1876.USE = "hanim_buttocks_standing_wall_contact_point_pt"

HAnimHumanoid43.sites.append(HAnimSite1876)
HAnimSite1877 = x3d.HAnimSite()
HAnimSite1877.USE = "hanim_crotch_pt"

HAnimHumanoid43.sites.append(HAnimSite1877)
HAnimSite1878 = x3d.HAnimSite()
HAnimSite1878.USE = "hanim_l_asis_pt"

HAnimHumanoid43.sites.append(HAnimSite1878)
HAnimSite1879 = x3d.HAnimSite()
HAnimSite1879.USE = "hanim_l_iliocristale_pt"

HAnimHumanoid43.sites.append(HAnimSite1879)
HAnimSite1880 = x3d.HAnimSite()
HAnimSite1880.USE = "hanim_l_psis_pt"

HAnimHumanoid43.sites.append(HAnimSite1880)
HAnimSite1881 = x3d.HAnimSite()
HAnimSite1881.USE = "hanim_l_trochanterion_pt"

HAnimHumanoid43.sites.append(HAnimSite1881)
HAnimSite1882 = x3d.HAnimSite()
HAnimSite1882.USE = "hanim_r_asis_pt"

HAnimHumanoid43.sites.append(HAnimSite1882)
HAnimSite1883 = x3d.HAnimSite()
HAnimSite1883.USE = "hanim_r_iliocristale_pt"

HAnimHumanoid43.sites.append(HAnimSite1883)
HAnimSite1884 = x3d.HAnimSite()
HAnimSite1884.USE = "hanim_r_psis_pt"

HAnimHumanoid43.sites.append(HAnimSite1884)
HAnimSite1885 = x3d.HAnimSite()
HAnimSite1885.USE = "hanim_r_trochanterion_pt"

HAnimHumanoid43.sites.append(HAnimSite1885)
HAnimSite1886 = x3d.HAnimSite()
HAnimSite1886.USE = "hanim_navel_pt"

HAnimHumanoid43.sites.append(HAnimSite1886)
HAnimSite1887 = x3d.HAnimSite()
HAnimSite1887.USE = "hanim_waist_preferred_anterior_pt"

HAnimHumanoid43.sites.append(HAnimSite1887)
HAnimSite1888 = x3d.HAnimSite()
HAnimSite1888.USE = "hanim_waist_preferred_posterior_pt"

HAnimHumanoid43.sites.append(HAnimSite1888)
HAnimSite1889 = x3d.HAnimSite()
HAnimSite1889.USE = "hanim_l_femoral_lateral_epicondyles_pt"

HAnimHumanoid43.sites.append(HAnimSite1889)
HAnimSite1890 = x3d.HAnimSite()
HAnimSite1890.USE = "hanim_l_femoral_medial_epicondyles_pt"

HAnimHumanoid43.sites.append(HAnimSite1890)
HAnimSite1891 = x3d.HAnimSite()
HAnimSite1891.USE = "hanim_l_knee_crease_pt"

HAnimHumanoid43.sites.append(HAnimSite1891)
HAnimSite1892 = x3d.HAnimSite()
HAnimSite1892.USE = "hanim_l_suprapatella_pt"

HAnimHumanoid43.sites.append(HAnimSite1892)
HAnimSite1893 = x3d.HAnimSite()
HAnimSite1893.USE = "hanim_r_femoral_lateral_epicondyles_pt"

HAnimHumanoid43.sites.append(HAnimSite1893)
HAnimSite1894 = x3d.HAnimSite()
HAnimSite1894.USE = "hanim_r_femoral_medial_epicondyles_pt"

HAnimHumanoid43.sites.append(HAnimSite1894)
HAnimSite1895 = x3d.HAnimSite()
HAnimSite1895.USE = "hanim_r_knee_crease_pt"

HAnimHumanoid43.sites.append(HAnimSite1895)
HAnimSite1896 = x3d.HAnimSite()
HAnimSite1896.USE = "hanim_r_suprapatella_pt"

HAnimHumanoid43.sites.append(HAnimSite1896)
HAnimSite1897 = x3d.HAnimSite()
HAnimSite1897.USE = "hanim_l_lateral_malleolus_pt"

HAnimHumanoid43.sites.append(HAnimSite1897)
HAnimSite1898 = x3d.HAnimSite()
HAnimSite1898.USE = "hanim_l_medial_malleolus_pt"

HAnimHumanoid43.sites.append(HAnimSite1898)
HAnimSite1899 = x3d.HAnimSite()
HAnimSite1899.USE = "hanim_l_tibiale_pt"

HAnimHumanoid43.sites.append(HAnimSite1899)
HAnimSite1900 = x3d.HAnimSite()
HAnimSite1900.USE = "hanim_l_calcaneus_posterior_pt"

HAnimHumanoid43.sites.append(HAnimSite1900)
HAnimSite1901 = x3d.HAnimSite()
HAnimSite1901.USE = "hanim_l_sphyrion_pt"

HAnimHumanoid43.sites.append(HAnimSite1901)
HAnimSite1902 = x3d.HAnimSite()
HAnimSite1902.USE = "hanim_l_metatarsal_phalanx_1_pt"

HAnimHumanoid43.sites.append(HAnimSite1902)
HAnimSite1903 = x3d.HAnimSite()
HAnimSite1903.USE = "hanim_l_tarsal_distal_phalanx_1_tip"

HAnimHumanoid43.sites.append(HAnimSite1903)
HAnimSite1904 = x3d.HAnimSite()
HAnimSite1904.USE = "hanim_l_tarsal_distal_phalanx_2_tip"

HAnimHumanoid43.sites.append(HAnimSite1904)
HAnimSite1905 = x3d.HAnimSite()
HAnimSite1905.USE = "hanim_l_tarsal_distal_phalanx_3_tip"

HAnimHumanoid43.sites.append(HAnimSite1905)
HAnimSite1906 = x3d.HAnimSite()
HAnimSite1906.USE = "hanim_l_tarsal_distal_phalanx_4_tip"

HAnimHumanoid43.sites.append(HAnimSite1906)
HAnimSite1907 = x3d.HAnimSite()
HAnimSite1907.USE = "hanim_l_metatarsal_phalanx_5_pt"

HAnimHumanoid43.sites.append(HAnimSite1907)
HAnimSite1908 = x3d.HAnimSite()
HAnimSite1908.USE = "hanim_l_tarsal_distal_phalanx_5_tip"

HAnimHumanoid43.sites.append(HAnimSite1908)
HAnimSite1909 = x3d.HAnimSite()
HAnimSite1909.USE = "hanim_r_lateral_malleolus_pt"

HAnimHumanoid43.sites.append(HAnimSite1909)
HAnimSite1910 = x3d.HAnimSite()
HAnimSite1910.USE = "hanim_r_medial_malleolus_pt"

HAnimHumanoid43.sites.append(HAnimSite1910)
HAnimSite1911 = x3d.HAnimSite()
HAnimSite1911.USE = "hanim_r_tibiale_pt"

HAnimHumanoid43.sites.append(HAnimSite1911)
HAnimSite1912 = x3d.HAnimSite()
HAnimSite1912.USE = "hanim_r_calcaneus_posterior_pt"

HAnimHumanoid43.sites.append(HAnimSite1912)
HAnimSite1913 = x3d.HAnimSite()
HAnimSite1913.USE = "hanim_r_sphyrion_pt"

HAnimHumanoid43.sites.append(HAnimSite1913)
HAnimSite1914 = x3d.HAnimSite()
HAnimSite1914.USE = "hanim_r_metatarsal_phalanx_1_pt"

HAnimHumanoid43.sites.append(HAnimSite1914)
HAnimSite1915 = x3d.HAnimSite()
HAnimSite1915.USE = "hanim_r_tarsal_distal_phalanx_1_tip"

HAnimHumanoid43.sites.append(HAnimSite1915)
HAnimSite1916 = x3d.HAnimSite()
HAnimSite1916.USE = "hanim_r_tarsal_distal_phalanx_2_tip"

HAnimHumanoid43.sites.append(HAnimSite1916)
HAnimSite1917 = x3d.HAnimSite()
HAnimSite1917.USE = "hanim_r_tarsal_distal_phalanx_3_tip"

HAnimHumanoid43.sites.append(HAnimSite1917)
HAnimSite1918 = x3d.HAnimSite()
HAnimSite1918.USE = "hanim_r_tarsal_distal_phalanx_4_tip"

HAnimHumanoid43.sites.append(HAnimSite1918)
HAnimSite1919 = x3d.HAnimSite()
HAnimSite1919.USE = "hanim_r_metatarsal_phalanx_5_pt"

HAnimHumanoid43.sites.append(HAnimSite1919)
HAnimSite1920 = x3d.HAnimSite()
HAnimSite1920.USE = "hanim_r_tarsal_distal_phalanx_5_tip"

HAnimHumanoid43.sites.append(HAnimSite1920)
HAnimSite1921 = x3d.HAnimSite()
HAnimSite1921.USE = "hanim_l_rib10_pt"

HAnimHumanoid43.sites.append(HAnimSite1921)
HAnimSite1922 = x3d.HAnimSite()
HAnimSite1922.USE = "hanim_r_rib10_pt"

HAnimHumanoid43.sites.append(HAnimSite1922)
HAnimSite1923 = x3d.HAnimSite()
HAnimSite1923.USE = "hanim_spine_2_middle_back_pt"

HAnimHumanoid43.sites.append(HAnimSite1923)
HAnimSite1924 = x3d.HAnimSite()
HAnimSite1924.USE = "hanim_substernale_pt"

HAnimHumanoid43.sites.append(HAnimSite1924)
HAnimSite1925 = x3d.HAnimSite()
HAnimSite1925.USE = "hanim_l_thelion_pt"

HAnimHumanoid43.sites.append(HAnimSite1925)
HAnimSite1926 = x3d.HAnimSite()
HAnimSite1926.USE = "hanim_r_thelion_pt"

HAnimHumanoid43.sites.append(HAnimSite1926)
HAnimSite1927 = x3d.HAnimSite()
HAnimSite1927.USE = "hanim_l_chest_midsagittal_plane_pt"

HAnimHumanoid43.sites.append(HAnimSite1927)
HAnimSite1928 = x3d.HAnimSite()
HAnimSite1928.USE = "hanim_mesosternale_pt"

HAnimHumanoid43.sites.append(HAnimSite1928)
HAnimSite1929 = x3d.HAnimSite()
HAnimSite1929.USE = "hanim_r_chest_midsagittal_plane_pt"

HAnimHumanoid43.sites.append(HAnimSite1929)
HAnimSite1930 = x3d.HAnimSite()
HAnimSite1930.USE = "hanim_rear_center_midsagittal_plane_pt"

HAnimHumanoid43.sites.append(HAnimSite1930)
HAnimSite1931 = x3d.HAnimSite()
HAnimSite1931.USE = "hanim_spine_1_middle_back_pt"

HAnimHumanoid43.sites.append(HAnimSite1931)
HAnimSite1932 = x3d.HAnimSite()
HAnimSite1932.USE = "hanim_cervicale_pt"

HAnimHumanoid43.sites.append(HAnimSite1932)
HAnimSite1933 = x3d.HAnimSite()
HAnimSite1933.USE = "hanim_suprasternale_pt"

HAnimHumanoid43.sites.append(HAnimSite1933)
HAnimSite1934 = x3d.HAnimSite()
HAnimSite1934.USE = "hanim_l_neck_base_pt"

HAnimHumanoid43.sites.append(HAnimSite1934)
HAnimSite1935 = x3d.HAnimSite()
HAnimSite1935.USE = "hanim_r_neck_base_pt"

HAnimHumanoid43.sites.append(HAnimSite1935)
HAnimSite1936 = x3d.HAnimSite()
HAnimSite1936.USE = "hanim_l_acromion_pt"

HAnimHumanoid43.sites.append(HAnimSite1936)
HAnimSite1937 = x3d.HAnimSite()
HAnimSite1937.USE = "hanim_l_axilla_distal_pt"

HAnimHumanoid43.sites.append(HAnimSite1937)
HAnimSite1938 = x3d.HAnimSite()
HAnimSite1938.USE = "hanim_l_axilla_posterior_folds_pt"

HAnimHumanoid43.sites.append(HAnimSite1938)
HAnimSite1939 = x3d.HAnimSite()
HAnimSite1939.USE = "hanim_l_axilla_proximal_pt"

HAnimHumanoid43.sites.append(HAnimSite1939)
HAnimSite1940 = x3d.HAnimSite()
HAnimSite1940.USE = "hanim_l_clavicale_pt"

HAnimHumanoid43.sites.append(HAnimSite1940)
HAnimSite1941 = x3d.HAnimSite()
HAnimSite1941.USE = "hanim_r_acromion_pt"

HAnimHumanoid43.sites.append(HAnimSite1941)
HAnimSite1942 = x3d.HAnimSite()
HAnimSite1942.USE = "hanim_r_axilla_distal_pt"

HAnimHumanoid43.sites.append(HAnimSite1942)
HAnimSite1943 = x3d.HAnimSite()
HAnimSite1943.USE = "hanim_r_axilla_posterior_folds_pt"

HAnimHumanoid43.sites.append(HAnimSite1943)
HAnimSite1944 = x3d.HAnimSite()
HAnimSite1944.USE = "hanim_r_axilla_proximal_pt"

HAnimHumanoid43.sites.append(HAnimSite1944)
HAnimSite1945 = x3d.HAnimSite()
HAnimSite1945.USE = "hanim_r_clavicale_pt"

HAnimHumanoid43.sites.append(HAnimSite1945)
HAnimSite1946 = x3d.HAnimSite()
HAnimSite1946.USE = "hanim_adams_apple_pt"

HAnimHumanoid43.sites.append(HAnimSite1946)
HAnimSite1947 = x3d.HAnimSite()
HAnimSite1947.USE = "hanim_glabella_pt"

HAnimHumanoid43.sites.append(HAnimSite1947)
HAnimSite1948 = x3d.HAnimSite()
HAnimSite1948.USE = "hanim_l_ectocanthus_pt"

HAnimHumanoid43.sites.append(HAnimSite1948)
HAnimSite1949 = x3d.HAnimSite()
HAnimSite1949.USE = "hanim_l_infraorbitale_pt"

HAnimHumanoid43.sites.append(HAnimSite1949)
HAnimSite1950 = x3d.HAnimSite()
HAnimSite1950.USE = "hanim_l_tragion_pt"

HAnimHumanoid43.sites.append(HAnimSite1950)
HAnimSite1951 = x3d.HAnimSite()
HAnimSite1951.USE = "hanim_nuchale_pt"

HAnimHumanoid43.sites.append(HAnimSite1951)
HAnimSite1952 = x3d.HAnimSite()
HAnimSite1952.USE = "hanim_opisthocranion_pt"

HAnimHumanoid43.sites.append(HAnimSite1952)
HAnimSite1953 = x3d.HAnimSite()
HAnimSite1953.USE = "hanim_r_ectocanthus_pt"

HAnimHumanoid43.sites.append(HAnimSite1953)
HAnimSite1954 = x3d.HAnimSite()
HAnimSite1954.USE = "hanim_r_infraorbitale_pt"

HAnimHumanoid43.sites.append(HAnimSite1954)
HAnimSite1955 = x3d.HAnimSite()
HAnimSite1955.USE = "hanim_r_tragion_pt"

HAnimHumanoid43.sites.append(HAnimSite1955)
HAnimSite1956 = x3d.HAnimSite()
HAnimSite1956.USE = "hanim_sellion_pt"

HAnimHumanoid43.sites.append(HAnimSite1956)
HAnimSite1957 = x3d.HAnimSite()
HAnimSite1957.USE = "hanim_skull_vertex_pt"

HAnimHumanoid43.sites.append(HAnimSite1957)
HAnimSite1958 = x3d.HAnimSite()
HAnimSite1958.USE = "hanim_l_gonion_pt"

HAnimHumanoid43.sites.append(HAnimSite1958)
HAnimSite1959 = x3d.HAnimSite()
HAnimSite1959.USE = "hanim_menton_pt"

HAnimHumanoid43.sites.append(HAnimSite1959)
HAnimSite1960 = x3d.HAnimSite()
HAnimSite1960.USE = "hanim_r_gonion_pt"

HAnimHumanoid43.sites.append(HAnimSite1960)
HAnimSite1961 = x3d.HAnimSite()
HAnimSite1961.USE = "hanim_supramenton_pt"

HAnimHumanoid43.sites.append(HAnimSite1961)
HAnimSite1962 = x3d.HAnimSite()
HAnimSite1962.USE = "hanim_l_bideltoid_pt"

HAnimHumanoid43.sites.append(HAnimSite1962)
HAnimSite1963 = x3d.HAnimSite()
HAnimSite1963.USE = "hanim_l_humeral_lateral_epicondyles_pt"

HAnimHumanoid43.sites.append(HAnimSite1963)
HAnimSite1964 = x3d.HAnimSite()
HAnimSite1964.USE = "hanim_l_humeral_medial_epicondyles_pt"

HAnimHumanoid43.sites.append(HAnimSite1964)
HAnimSite1965 = x3d.HAnimSite()
HAnimSite1965.USE = "hanim_l_olecranon_pt"

HAnimHumanoid43.sites.append(HAnimSite1965)
HAnimSite1966 = x3d.HAnimSite()
HAnimSite1966.USE = "hanim_l_radial_styloid_pt"

HAnimHumanoid43.sites.append(HAnimSite1966)
HAnimSite1967 = x3d.HAnimSite()
HAnimSite1967.USE = "hanim_l_radiale_pt"

HAnimHumanoid43.sites.append(HAnimSite1967)
HAnimSite1968 = x3d.HAnimSite()
HAnimSite1968.USE = "hanim_l_ulnar_styloid_pt"

HAnimHumanoid43.sites.append(HAnimSite1968)
HAnimSite1969 = x3d.HAnimSite()
HAnimSite1969.USE = "hanim_l_carpal_distal_phalanx_1_tip"

HAnimHumanoid43.sites.append(HAnimSite1969)
HAnimSite1970 = x3d.HAnimSite()
HAnimSite1970.USE = "hanim_l_metacarpal_phalanx_2_pt"

HAnimHumanoid43.sites.append(HAnimSite1970)
HAnimSite1971 = x3d.HAnimSite()
HAnimSite1971.USE = "hanim_l_carpal_distal_phalanx_2_tip"

HAnimHumanoid43.sites.append(HAnimSite1971)
HAnimSite1972 = x3d.HAnimSite()
HAnimSite1972.USE = "hanim_l_dactylion_pt"

HAnimHumanoid43.sites.append(HAnimSite1972)
HAnimSite1973 = x3d.HAnimSite()
HAnimSite1973.USE = "hanim_l_metacarpal_phalanx_3_pt"

HAnimHumanoid43.sites.append(HAnimSite1973)
HAnimSite1974 = x3d.HAnimSite()
HAnimSite1974.USE = "hanim_l_carpal_distal_phalanx_3_tip"

HAnimHumanoid43.sites.append(HAnimSite1974)
HAnimSite1975 = x3d.HAnimSite()
HAnimSite1975.USE = "hanim_l_metacarpal_phalanx_5_pt"

HAnimHumanoid43.sites.append(HAnimSite1975)
HAnimSite1976 = x3d.HAnimSite()
HAnimSite1976.USE = "hanim_l_carpal_distal_phalanx_4_tip"

HAnimHumanoid43.sites.append(HAnimSite1976)
HAnimSite1977 = x3d.HAnimSite()
HAnimSite1977.USE = "hanim_l_carpal_distal_phalanx_5_tip"

HAnimHumanoid43.sites.append(HAnimSite1977)
HAnimSite1978 = x3d.HAnimSite()
HAnimSite1978.USE = "hanim_r_bideltoid_pt"

HAnimHumanoid43.sites.append(HAnimSite1978)
HAnimSite1979 = x3d.HAnimSite()
HAnimSite1979.USE = "hanim_r_humeral_lateral_epicondyles_pt"

HAnimHumanoid43.sites.append(HAnimSite1979)
HAnimSite1980 = x3d.HAnimSite()
HAnimSite1980.USE = "hanim_r_humeral_medial_epicondyles_pt"

HAnimHumanoid43.sites.append(HAnimSite1980)
HAnimSite1981 = x3d.HAnimSite()
HAnimSite1981.USE = "hanim_r_olecranon_pt"

HAnimHumanoid43.sites.append(HAnimSite1981)
HAnimSite1982 = x3d.HAnimSite()
HAnimSite1982.USE = "hanim_r_radial_styloid_pt"

HAnimHumanoid43.sites.append(HAnimSite1982)
HAnimSite1983 = x3d.HAnimSite()
HAnimSite1983.USE = "hanim_r_radiale_pt"

HAnimHumanoid43.sites.append(HAnimSite1983)
HAnimSite1984 = x3d.HAnimSite()
HAnimSite1984.USE = "hanim_r_ulnar_styloid_pt"

HAnimHumanoid43.sites.append(HAnimSite1984)
HAnimSite1985 = x3d.HAnimSite()
HAnimSite1985.USE = "hanim_r_carpal_distal_phalanx_1_tip"

HAnimHumanoid43.sites.append(HAnimSite1985)
HAnimSite1986 = x3d.HAnimSite()
HAnimSite1986.USE = "hanim_r_metacarpal_phalanx_2_pt"

HAnimHumanoid43.sites.append(HAnimSite1986)
HAnimSite1987 = x3d.HAnimSite()
HAnimSite1987.USE = "hanim_r_carpal_distal_phalanx_2_tip"

HAnimHumanoid43.sites.append(HAnimSite1987)
HAnimSite1988 = x3d.HAnimSite()
HAnimSite1988.USE = "hanim_r_dactylion_pt"

HAnimHumanoid43.sites.append(HAnimSite1988)
HAnimSite1989 = x3d.HAnimSite()
HAnimSite1989.USE = "hanim_r_metacarpal_phalanx_3_pt"

HAnimHumanoid43.sites.append(HAnimSite1989)
HAnimSite1990 = x3d.HAnimSite()
HAnimSite1990.USE = "hanim_r_carpal_distal_phalanx_3_tip"

HAnimHumanoid43.sites.append(HAnimSite1990)
HAnimSite1991 = x3d.HAnimSite()
HAnimSite1991.USE = "hanim_r_metacarpal_phalanx_5_pt"

HAnimHumanoid43.sites.append(HAnimSite1991)
HAnimSite1992 = x3d.HAnimSite()
HAnimSite1992.USE = "hanim_r_carpal_distal_phalanx_4_tip"

HAnimHumanoid43.sites.append(HAnimSite1992)
HAnimSite1993 = x3d.HAnimSite()
HAnimSite1993.USE = "hanim_r_carpal_distal_phalanx_5_tip"

HAnimHumanoid43.sites.append(HAnimSite1993)

Scene11.children.append(HAnimHumanoid43)

X3D0.Scene = Scene11
f = open("../data/JohnJoint20.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/JohnJoint20.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
