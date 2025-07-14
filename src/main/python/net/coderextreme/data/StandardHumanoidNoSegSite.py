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
meta3.content = "StandardHumanoidNoSegSite.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "identifier"
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/StandardHumanoidNoSegSite.x3d"

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
meta7.content = "14 Jan 2023"

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
ImageTexture49.description = "Blue Spiral Pattern"
ImageTexture49.url = ["../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]

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
HAnimJoint52.skinCoordIndex = [0]
HAnimJoint52.skinCoordWeight = [0]
HAnimJoint52.ulimit = [0,0,0]
HAnimJoint52.llimit = [0,0,0]
HAnimJoint53 = x3d.HAnimJoint()
HAnimJoint53.name = "sacroiliac"
HAnimJoint53.DEF = "hanim_sacroiliac"
HAnimJoint53.center = [0,0.9149,0.0016]
HAnimJoint53.skinCoordIndex = [0]
HAnimJoint53.skinCoordWeight = [0]
HAnimJoint53.ulimit = [0,0,0]
HAnimJoint53.llimit = [0,0,0]
HAnimJoint54 = x3d.HAnimJoint()
HAnimJoint54.name = "l_hip"
HAnimJoint54.DEF = "hanim_l_hip"
HAnimJoint54.center = [0.0961,0.9124,-0.0001]
HAnimJoint54.skinCoordIndex = [0]
HAnimJoint54.skinCoordWeight = [0]
HAnimJoint54.ulimit = [0,0,0]
HAnimJoint54.llimit = [0,0,0]
HAnimJoint55 = x3d.HAnimJoint()
HAnimJoint55.name = "l_knee"
HAnimJoint55.DEF = "hanim_l_knee"
HAnimJoint55.center = [0.104,0.4867,0.0308]
HAnimJoint55.skinCoordIndex = [0]
HAnimJoint55.skinCoordWeight = [0]
HAnimJoint55.ulimit = [0,0,0]
HAnimJoint55.llimit = [0,0,0]
HAnimJoint56 = x3d.HAnimJoint()
HAnimJoint56.name = "l_talocrural"
HAnimJoint56.DEF = "hanim_l_talocrural"
HAnimJoint56.center = [0.1101,0.0656,-0.0736]
HAnimJoint56.skinCoordIndex = [0]
HAnimJoint56.skinCoordWeight = [0]
HAnimJoint56.ulimit = [0,0,0]
HAnimJoint56.llimit = [0,0,0]
HAnimJoint57 = x3d.HAnimJoint()
HAnimJoint57.name = "l_talocalcaneonavicular"
HAnimJoint57.DEF = "hanim_l_talocalcaneonavicular"
HAnimJoint57.center = [0.0781,0.0283,-0.097]
HAnimJoint57.skinCoordIndex = [0]
HAnimJoint57.skinCoordWeight = [0]
HAnimJoint57.ulimit = [0,0,0]
HAnimJoint57.llimit = [0,0,0]
HAnimJoint58 = x3d.HAnimJoint()
HAnimJoint58.name = "l_cuneonavicular_1"
HAnimJoint58.DEF = "hanim_l_cuneonavicular_1"
HAnimJoint58.center = [0.0672,0.0235,-0.0835]
HAnimJoint58.skinCoordIndex = [0]
HAnimJoint58.skinCoordWeight = [0]
HAnimJoint58.ulimit = [0,0,0]
HAnimJoint58.llimit = [0,0,0]
HAnimJoint59 = x3d.HAnimJoint()
HAnimJoint59.name = "l_tarsometatarsal_1"
HAnimJoint59.DEF = "hanim_l_tarsometatarsal_1"
HAnimJoint59.center = [0.0644,0.0147,-0.0577]
HAnimJoint59.skinCoordIndex = [0]
HAnimJoint59.skinCoordWeight = [0]
HAnimJoint59.ulimit = [0,0,0]
HAnimJoint59.llimit = [0,0,0]
HAnimJoint60 = x3d.HAnimJoint()
HAnimJoint60.name = "l_metatarsophalangeal_1"
HAnimJoint60.DEF = "hanim_l_metatarsophalangeal_1"
HAnimJoint60.center = [0.0619,0.0059,-0.0083]
HAnimJoint60.skinCoordIndex = [0]
HAnimJoint60.skinCoordWeight = [0]
HAnimJoint60.ulimit = [0,0,0]
HAnimJoint60.llimit = [0,0,0]
HAnimJoint61 = x3d.HAnimJoint()
HAnimJoint61.name = "l_tarsal_interphalangeal_1"
HAnimJoint61.DEF = "hanim_l_tarsal_interphalangeal_1"
HAnimJoint61.ulimit = [0,0,0]
HAnimJoint61.llimit = [0,0,0]

HAnimJoint60.children.append(HAnimJoint61)

HAnimJoint59.children.append(HAnimJoint60)

HAnimJoint58.children.append(HAnimJoint59)

HAnimJoint57.children.append(HAnimJoint58)
HAnimJoint62 = x3d.HAnimJoint()
HAnimJoint62.name = "l_cuneonavicular_2"
HAnimJoint62.DEF = "hanim_l_cuneonavicular_2"
HAnimJoint62.center = [0.0812,0.025,-0.0805]
HAnimJoint62.skinCoordIndex = [0]
HAnimJoint62.skinCoordWeight = [0]
HAnimJoint62.ulimit = [0,0,0]
HAnimJoint62.llimit = [0,0,0]
HAnimJoint63 = x3d.HAnimJoint()
HAnimJoint63.name = "l_tarsometatarsal_2"
HAnimJoint63.DEF = "hanim_l_tarsometatarsal_2"
HAnimJoint63.center = [0.08,0.0175,-0.0608]
HAnimJoint63.skinCoordIndex = [0]
HAnimJoint63.skinCoordWeight = [0]
HAnimJoint63.ulimit = [0,0,0]
HAnimJoint63.llimit = [0,0,0]
HAnimJoint64 = x3d.HAnimJoint()
HAnimJoint64.name = "l_metatarsophalangeal_2"
HAnimJoint64.DEF = "hanim_l_metatarsophalangeal_2"
HAnimJoint64.center = [0.0824,0.0064,-0.004]
HAnimJoint64.skinCoordIndex = [0]
HAnimJoint64.skinCoordWeight = [0]
HAnimJoint64.ulimit = [0,0,0]
HAnimJoint64.llimit = [0,0,0]
HAnimJoint65 = x3d.HAnimJoint()
HAnimJoint65.name = "l_tarsal_proximal_interphalangeal_2"
HAnimJoint65.DEF = "hanim_l_tarsal_proximal_interphalangeal_2"
HAnimJoint65.center = [0.0841,0.0041,0.0121]
HAnimJoint65.skinCoordIndex = [0]
HAnimJoint65.skinCoordWeight = [0]
HAnimJoint65.ulimit = [0,0,0]
HAnimJoint65.llimit = [0,0,0]
HAnimJoint66 = x3d.HAnimJoint()
HAnimJoint66.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint66.DEF = "hanim_l_tarsal_distal_interphalangeal_2"
HAnimJoint66.center = [0.0841,0.0013,0.0216]
HAnimJoint66.skinCoordIndex = [0]
HAnimJoint66.skinCoordWeight = [0]
HAnimJoint66.ulimit = [0,0,0]
HAnimJoint66.llimit = [0,0,0]

HAnimJoint65.children.append(HAnimJoint66)

HAnimJoint64.children.append(HAnimJoint65)

HAnimJoint63.children.append(HAnimJoint64)

HAnimJoint62.children.append(HAnimJoint63)

HAnimJoint57.children.append(HAnimJoint62)
HAnimJoint67 = x3d.HAnimJoint()
HAnimJoint67.name = "l_cuneonavicular_3"
HAnimJoint67.DEF = "hanim_l_cuneonavicular_3"
HAnimJoint67.center = [0.0928,0.0248,-0.0821]
HAnimJoint67.skinCoordIndex = [0]
HAnimJoint67.skinCoordWeight = [0]
HAnimJoint67.ulimit = [0,0,0]
HAnimJoint67.llimit = [0,0,0]
HAnimJoint68 = x3d.HAnimJoint()
HAnimJoint68.name = "l_tarsometatarsal_3"
HAnimJoint68.DEF = "hanim_l_tarsometatarsal_3"
HAnimJoint68.center = [0.0944,0.0175,-0.0625]
HAnimJoint68.skinCoordIndex = [0]
HAnimJoint68.skinCoordWeight = [0]
HAnimJoint68.ulimit = [0,0,0]
HAnimJoint68.llimit = [0,0,0]
HAnimJoint69 = x3d.HAnimJoint()
HAnimJoint69.name = "l_metatarsophalangeal_3"
HAnimJoint69.DEF = "hanim_l_metatarsophalangeal_3"
HAnimJoint69.center = [0.0963,0.0065,-0.0065]
HAnimJoint69.skinCoordIndex = [0]
HAnimJoint69.skinCoordWeight = [0]
HAnimJoint69.ulimit = [0,0,0]
HAnimJoint69.llimit = [0,0,0]
HAnimJoint70 = x3d.HAnimJoint()
HAnimJoint70.name = "l_tarsal_proximal_interphalangeal_3"
HAnimJoint70.DEF = "hanim_l_tarsal_proximal_interphalangeal_3"
HAnimJoint70.center = [0.0987,0.0034,0.0086]
HAnimJoint70.skinCoordIndex = [0]
HAnimJoint70.skinCoordWeight = [0]
HAnimJoint70.ulimit = [0,0,0]
HAnimJoint70.llimit = [0,0,0]
HAnimJoint71 = x3d.HAnimJoint()
HAnimJoint71.name = "l_tarsal_distal_interphalangeal_3"
HAnimJoint71.DEF = "hanim_l_tarsal_distal_interphalangeal_3"
HAnimJoint71.center = [0.1002,0.0013,0.0178]
HAnimJoint71.skinCoordIndex = [0]
HAnimJoint71.skinCoordWeight = [0]
HAnimJoint71.ulimit = [0,0,0]
HAnimJoint71.llimit = [0,0,0]

HAnimJoint70.children.append(HAnimJoint71)

HAnimJoint69.children.append(HAnimJoint70)

HAnimJoint68.children.append(HAnimJoint69)

HAnimJoint67.children.append(HAnimJoint68)

HAnimJoint57.children.append(HAnimJoint67)

HAnimJoint56.children.append(HAnimJoint57)
HAnimJoint72 = x3d.HAnimJoint()
HAnimJoint72.name = "l_calcaneocuboid"
HAnimJoint72.DEF = "hanim_l_calcaneocuboid"
HAnimJoint72.center = [0.0889,0.0494,-0.1278]
HAnimJoint72.skinCoordIndex = [0]
HAnimJoint72.skinCoordWeight = [0]
HAnimJoint72.ulimit = [0,0,0]
HAnimJoint72.llimit = [0,0,0]
HAnimJoint73 = x3d.HAnimJoint()
HAnimJoint73.name = "l_transversetarsal"
HAnimJoint73.DEF = "hanim_l_transversetarsal"
HAnimJoint73.center = [0.1105,0.0267,-0.0998]
HAnimJoint73.skinCoordIndex = [0]
HAnimJoint73.skinCoordWeight = [0]
HAnimJoint73.ulimit = [0,0,0]
HAnimJoint73.llimit = [0,0,0]
HAnimJoint74 = x3d.HAnimJoint()
HAnimJoint74.name = "l_tarsometatarsal_4"
HAnimJoint74.DEF = "hanim_l_tarsometatarsal_4"
HAnimJoint74.center = [0.1063,0.016,-0.0634]
HAnimJoint74.skinCoordIndex = [0]
HAnimJoint74.skinCoordWeight = [0]
HAnimJoint74.ulimit = [0,0,0]
HAnimJoint74.llimit = [0,0,0]
HAnimJoint75 = x3d.HAnimJoint()
HAnimJoint75.name = "l_metatarsophalangeal_4"
HAnimJoint75.DEF = "hanim_l_metatarsophalangeal_4"
HAnimJoint75.center = [0.1097,0.0058,-0.0107]
HAnimJoint75.skinCoordIndex = [0]
HAnimJoint75.skinCoordWeight = [0]
HAnimJoint75.ulimit = [0,0,0]
HAnimJoint75.llimit = [0,0,0]
HAnimJoint76 = x3d.HAnimJoint()
HAnimJoint76.name = "l_tarsal_proximal_interphalangeal_4"
HAnimJoint76.DEF = "hanim_l_tarsal_proximal_interphalangeal_4"
HAnimJoint76.center = [0.114,0.0037,0.0044]
HAnimJoint76.skinCoordIndex = [0]
HAnimJoint76.skinCoordWeight = [0]
HAnimJoint76.ulimit = [0,0,0]
HAnimJoint76.llimit = [0,0,0]
HAnimJoint77 = x3d.HAnimJoint()
HAnimJoint77.name = "l_tarsal_distal_interphalangeal_4"
HAnimJoint77.DEF = "hanim_l_tarsal_distal_interphalangeal_4"
HAnimJoint77.center = [0.1155,0.0008,0.0118]
HAnimJoint77.skinCoordIndex = [0]
HAnimJoint77.skinCoordWeight = [0]
HAnimJoint77.ulimit = [0,0,0]
HAnimJoint77.llimit = [0,0,0]

HAnimJoint76.children.append(HAnimJoint77)

HAnimJoint75.children.append(HAnimJoint76)

HAnimJoint74.children.append(HAnimJoint75)

HAnimJoint73.children.append(HAnimJoint74)
HAnimJoint78 = x3d.HAnimJoint()
HAnimJoint78.name = "l_tarsometatarsal_5"
HAnimJoint78.DEF = "hanim_l_tarsometatarsal_5"
HAnimJoint78.center = [0.1206,0.0124,-0.0671]
HAnimJoint78.skinCoordIndex = [0]
HAnimJoint78.skinCoordWeight = [0]
HAnimJoint78.ulimit = [0,0,0]
HAnimJoint78.llimit = [0,0,0]
HAnimJoint79 = x3d.HAnimJoint()
HAnimJoint79.name = "l_metatarsophalangeal_5"
HAnimJoint79.DEF = "hanim_l_metatarsophalangeal_5"
HAnimJoint79.center = [0.1239,0.0051,-0.0153]
HAnimJoint79.skinCoordIndex = [0]
HAnimJoint79.skinCoordWeight = [0]
HAnimJoint79.ulimit = [0,0,0]
HAnimJoint79.llimit = [0,0,0]
HAnimJoint80 = x3d.HAnimJoint()
HAnimJoint80.name = "l_tarsal_proximal_interphalangeal_5"
HAnimJoint80.DEF = "hanim_l_tarsal_proximal_interphalangeal_5"
HAnimJoint80.center = [0.1262,0.0023,-0.0077]
HAnimJoint80.skinCoordIndex = [0]
HAnimJoint80.skinCoordWeight = [0]
HAnimJoint80.ulimit = [0,0,0]
HAnimJoint80.llimit = [0,0,0]
HAnimJoint81 = x3d.HAnimJoint()
HAnimJoint81.name = "l_tarsal_distal_interphalangeal_5"
HAnimJoint81.DEF = "hanim_l_tarsal_distal_interphalangeal_5"
HAnimJoint81.center = [0.1271,0,0]
HAnimJoint81.skinCoordIndex = [0]
HAnimJoint81.skinCoordWeight = [0]
HAnimJoint81.ulimit = [0,0,0]
HAnimJoint81.llimit = [0,0,0]

HAnimJoint80.children.append(HAnimJoint81)

HAnimJoint79.children.append(HAnimJoint80)

HAnimJoint78.children.append(HAnimJoint79)

HAnimJoint73.children.append(HAnimJoint78)

HAnimJoint72.children.append(HAnimJoint73)

HAnimJoint56.children.append(HAnimJoint72)

HAnimJoint55.children.append(HAnimJoint56)

HAnimJoint54.children.append(HAnimJoint55)

HAnimJoint53.children.append(HAnimJoint54)
HAnimJoint82 = x3d.HAnimJoint()
HAnimJoint82.name = "r_hip"
HAnimJoint82.DEF = "hanim_r_hip"
HAnimJoint82.center = [-0.095,0.9171,0.0029]
HAnimJoint82.skinCoordIndex = [0]
HAnimJoint82.skinCoordWeight = [0]
HAnimJoint82.ulimit = [0,0,0]
HAnimJoint82.llimit = [0,0,0]
HAnimJoint83 = x3d.HAnimJoint()
HAnimJoint83.name = "r_knee"
HAnimJoint83.DEF = "hanim_r_knee"
HAnimJoint83.center = [-0.0867,0.4913,0.0318]
HAnimJoint83.skinCoordIndex = [0]
HAnimJoint83.skinCoordWeight = [0]
HAnimJoint83.ulimit = [0,0,0]
HAnimJoint83.llimit = [0,0,0]
HAnimJoint84 = x3d.HAnimJoint()
HAnimJoint84.name = "r_talocrural"
HAnimJoint84.DEF = "hanim_r_talocrural"
HAnimJoint84.center = [-0.0801,0.0712,-0.0766]
HAnimJoint84.skinCoordIndex = [0]
HAnimJoint84.skinCoordWeight = [0]
HAnimJoint84.ulimit = [0,0,0]
HAnimJoint84.llimit = [0,0,0]
HAnimJoint85 = x3d.HAnimJoint()
HAnimJoint85.name = "r_talocalcaneonavicular"
HAnimJoint85.DEF = "hanim_r_talocalcaneonavicular"
HAnimJoint85.center = [-0.0781,0.0283,-0.097]
HAnimJoint85.skinCoordIndex = [0]
HAnimJoint85.skinCoordWeight = [0]
HAnimJoint85.ulimit = [0,0,0]
HAnimJoint85.llimit = [0,0,0]
HAnimJoint86 = x3d.HAnimJoint()
HAnimJoint86.name = "r_cuneonavicular_1"
HAnimJoint86.DEF = "hanim_r_cuneonavicular_1"
HAnimJoint86.center = [-0.0672,0.0235,-0.0835]
HAnimJoint86.skinCoordIndex = [0]
HAnimJoint86.skinCoordWeight = [0]
HAnimJoint86.ulimit = [0,0,0]
HAnimJoint86.llimit = [0,0,0]
HAnimJoint87 = x3d.HAnimJoint()
HAnimJoint87.name = "r_tarsometatarsal_1"
HAnimJoint87.DEF = "hanim_r_tarsometatarsal_1"
HAnimJoint87.center = [-0.0644,0.0147,-0.0577]
HAnimJoint87.skinCoordIndex = [0]
HAnimJoint87.skinCoordWeight = [0]
HAnimJoint87.ulimit = [0,0,0]
HAnimJoint87.llimit = [0,0,0]
HAnimJoint88 = x3d.HAnimJoint()
HAnimJoint88.name = "r_metatarsophalangeal_1"
HAnimJoint88.DEF = "hanim_r_metatarsophalangeal_1"
HAnimJoint88.center = [-0.0619,0.0059,-0.0083]
HAnimJoint88.skinCoordIndex = [0]
HAnimJoint88.skinCoordWeight = [0]
HAnimJoint88.ulimit = [0,0,0]
HAnimJoint88.llimit = [0,0,0]
HAnimJoint89 = x3d.HAnimJoint()
HAnimJoint89.name = "r_tarsal_interphalangeal_1"
HAnimJoint89.DEF = "hanim_r_tarsal_interphalangeal_1"
HAnimJoint89.ulimit = [0,0,0]
HAnimJoint89.llimit = [0,0,0]

HAnimJoint88.children.append(HAnimJoint89)

HAnimJoint87.children.append(HAnimJoint88)

HAnimJoint86.children.append(HAnimJoint87)

HAnimJoint85.children.append(HAnimJoint86)
HAnimJoint90 = x3d.HAnimJoint()
HAnimJoint90.name = "r_cuneonavicular_2"
HAnimJoint90.DEF = "hanim_r_cuneonavicular_2"
HAnimJoint90.center = [-0.0812,0.025,-0.0805]
HAnimJoint90.skinCoordIndex = [0]
HAnimJoint90.skinCoordWeight = [0]
HAnimJoint90.ulimit = [0,0,0]
HAnimJoint90.llimit = [0,0,0]
HAnimJoint91 = x3d.HAnimJoint()
HAnimJoint91.name = "r_tarsometatarsal_2"
HAnimJoint91.DEF = "hanim_r_tarsometatarsal_2"
HAnimJoint91.center = [-0.08,0.0175,-0.0608]
HAnimJoint91.skinCoordIndex = [0]
HAnimJoint91.skinCoordWeight = [0]
HAnimJoint91.ulimit = [0,0,0]
HAnimJoint91.llimit = [0,0,0]
HAnimJoint92 = x3d.HAnimJoint()
HAnimJoint92.name = "r_metatarsophalangeal_2"
HAnimJoint92.DEF = "hanim_r_metatarsophalangeal_2"
HAnimJoint92.center = [-0.0823,0.0064,-0.004]
HAnimJoint92.skinCoordIndex = [0]
HAnimJoint92.skinCoordWeight = [0]
HAnimJoint92.ulimit = [0,0,0]
HAnimJoint92.llimit = [0,0,0]
HAnimJoint93 = x3d.HAnimJoint()
HAnimJoint93.name = "r_tarsal_proximal_interphalangeal_2"
HAnimJoint93.DEF = "hanim_r_tarsal_proximal_interphalangeal_2"
HAnimJoint93.center = [-0.0841,0.0041,0.0121]
HAnimJoint93.skinCoordIndex = [0]
HAnimJoint93.skinCoordWeight = [0]
HAnimJoint93.ulimit = [0,0,0]
HAnimJoint93.llimit = [0,0,0]
HAnimJoint94 = x3d.HAnimJoint()
HAnimJoint94.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint94.DEF = "hanim_r_tarsal_distal_interphalangeal_2"
HAnimJoint94.center = [-0.0841,0.0013,0.0216]
HAnimJoint94.skinCoordIndex = [0]
HAnimJoint94.skinCoordWeight = [0]
HAnimJoint94.ulimit = [0,0,0]
HAnimJoint94.llimit = [0,0,0]

HAnimJoint93.children.append(HAnimJoint94)

HAnimJoint92.children.append(HAnimJoint93)

HAnimJoint91.children.append(HAnimJoint92)

HAnimJoint90.children.append(HAnimJoint91)

HAnimJoint85.children.append(HAnimJoint90)
HAnimJoint95 = x3d.HAnimJoint()
HAnimJoint95.name = "r_cuneonavicular_3"
HAnimJoint95.DEF = "hanim_r_cuneonavicular_3"
HAnimJoint95.center = [-0.0928,0.0248,-0.0821]
HAnimJoint95.skinCoordIndex = [0]
HAnimJoint95.skinCoordWeight = [0]
HAnimJoint95.ulimit = [0,0,0]
HAnimJoint95.llimit = [0,0,0]
HAnimJoint96 = x3d.HAnimJoint()
HAnimJoint96.name = "r_tarsometatarsal_3"
HAnimJoint96.DEF = "hanim_r_tarsometatarsal_3"
HAnimJoint96.center = [-0.0944,0.0175,-0.0625]
HAnimJoint96.skinCoordIndex = [0]
HAnimJoint96.skinCoordWeight = [0]
HAnimJoint96.ulimit = [0,0,0]
HAnimJoint96.llimit = [0,0,0]
HAnimJoint97 = x3d.HAnimJoint()
HAnimJoint97.name = "r_metatarsophalangeal_3"
HAnimJoint97.DEF = "hanim_r_metatarsophalangeal_3"
HAnimJoint97.center = [-0.0963,0.0065,-0.0065]
HAnimJoint97.skinCoordIndex = [0]
HAnimJoint97.skinCoordWeight = [0]
HAnimJoint97.ulimit = [0,0,0]
HAnimJoint97.llimit = [0,0,0]
HAnimJoint98 = x3d.HAnimJoint()
HAnimJoint98.name = "r_tarsal_proximal_interphalangeal_3"
HAnimJoint98.DEF = "hanim_r_tarsal_proximal_interphalangeal_3"
HAnimJoint98.center = [-0.0987,0.0034,0.0086]
HAnimJoint98.skinCoordIndex = [0]
HAnimJoint98.skinCoordWeight = [0]
HAnimJoint98.ulimit = [0,0,0]
HAnimJoint98.llimit = [0,0,0]
HAnimJoint99 = x3d.HAnimJoint()
HAnimJoint99.name = "r_tarsal_distal_interphalangeal_3"
HAnimJoint99.DEF = "hanim_r_tarsal_distal_interphalangeal_3"
HAnimJoint99.center = [-0.1002,0.0013,0.0178]
HAnimJoint99.skinCoordIndex = [0]
HAnimJoint99.skinCoordWeight = [0]
HAnimJoint99.ulimit = [0,0,0]
HAnimJoint99.llimit = [0,0,0]

HAnimJoint98.children.append(HAnimJoint99)

HAnimJoint97.children.append(HAnimJoint98)

HAnimJoint96.children.append(HAnimJoint97)

HAnimJoint95.children.append(HAnimJoint96)

HAnimJoint85.children.append(HAnimJoint95)

HAnimJoint84.children.append(HAnimJoint85)
HAnimJoint100 = x3d.HAnimJoint()
HAnimJoint100.name = "r_calcaneocuboid"
HAnimJoint100.DEF = "hanim_r_calcaneocuboid"
HAnimJoint100.center = [-0.0889,0.0494,-0.1278]
HAnimJoint100.skinCoordIndex = [0]
HAnimJoint100.skinCoordWeight = [0]
HAnimJoint100.ulimit = [0,0,0]
HAnimJoint100.llimit = [0,0,0]
HAnimJoint101 = x3d.HAnimJoint()
HAnimJoint101.name = "r_transversetarsal"
HAnimJoint101.DEF = "hanim_r_transversetarsal"
HAnimJoint101.center = [-0.1105,0.0267,-0.0998]
HAnimJoint101.skinCoordIndex = [0]
HAnimJoint101.skinCoordWeight = [0]
HAnimJoint101.ulimit = [0,0,0]
HAnimJoint101.llimit = [0,0,0]
HAnimJoint102 = x3d.HAnimJoint()
HAnimJoint102.name = "r_tarsometatarsal_4"
HAnimJoint102.DEF = "hanim_r_tarsometatarsal_4"
HAnimJoint102.center = [-0.1063,0.016,-0.0634]
HAnimJoint102.skinCoordIndex = [0]
HAnimJoint102.skinCoordWeight = [0]
HAnimJoint102.ulimit = [0,0,0]
HAnimJoint102.llimit = [0,0,0]
HAnimJoint103 = x3d.HAnimJoint()
HAnimJoint103.name = "r_metatarsophalangeal_4"
HAnimJoint103.DEF = "hanim_r_metatarsophalangeal_4"
HAnimJoint103.center = [-0.1097,0.0058,-0.0107]
HAnimJoint103.skinCoordIndex = [0]
HAnimJoint103.skinCoordWeight = [0]
HAnimJoint103.ulimit = [0,0,0]
HAnimJoint103.llimit = [0,0,0]
HAnimJoint104 = x3d.HAnimJoint()
HAnimJoint104.name = "r_tarsal_proximal_interphalangeal_4"
HAnimJoint104.DEF = "hanim_r_tarsal_proximal_interphalangeal_4"
HAnimJoint104.center = [-0.114,0.0037,0.0044]
HAnimJoint104.skinCoordIndex = [0]
HAnimJoint104.skinCoordWeight = [0]
HAnimJoint104.ulimit = [0,0,0]
HAnimJoint104.llimit = [0,0,0]
HAnimJoint105 = x3d.HAnimJoint()
HAnimJoint105.name = "r_tarsal_distal_interphalangeal_4"
HAnimJoint105.DEF = "hanim_r_tarsal_distal_interphalangeal_4"
HAnimJoint105.center = [-0.1155,0.0008,0.0118]
HAnimJoint105.skinCoordIndex = [0]
HAnimJoint105.skinCoordWeight = [0]
HAnimJoint105.ulimit = [0,0,0]
HAnimJoint105.llimit = [0,0,0]

HAnimJoint104.children.append(HAnimJoint105)

HAnimJoint103.children.append(HAnimJoint104)

HAnimJoint102.children.append(HAnimJoint103)

HAnimJoint101.children.append(HAnimJoint102)
HAnimJoint106 = x3d.HAnimJoint()
HAnimJoint106.name = "r_tarsometatarsal_5"
HAnimJoint106.DEF = "hanim_r_tarsometatarsal_5"
HAnimJoint106.center = [-0.1206,0.0124,-0.0671]
HAnimJoint106.skinCoordIndex = [0]
HAnimJoint106.skinCoordWeight = [0]
HAnimJoint106.ulimit = [0,0,0]
HAnimJoint106.llimit = [0,0,0]
HAnimJoint107 = x3d.HAnimJoint()
HAnimJoint107.name = "r_metatarsophalangeal_5"
HAnimJoint107.DEF = "hanim_r_metatarsophalangeal_5"
HAnimJoint107.center = [-0.1239,0.0051,-0.0153]
HAnimJoint107.skinCoordIndex = [0]
HAnimJoint107.skinCoordWeight = [0]
HAnimJoint107.ulimit = [0,0,0]
HAnimJoint107.llimit = [0,0,0]
HAnimJoint108 = x3d.HAnimJoint()
HAnimJoint108.name = "r_tarsal_proximal_interphalangeal_5"
HAnimJoint108.DEF = "hanim_r_tarsal_proximal_interphalangeal_5"
HAnimJoint108.center = [-0.1262,0.0023,-0.0077]
HAnimJoint108.skinCoordIndex = [0]
HAnimJoint108.skinCoordWeight = [0]
HAnimJoint108.ulimit = [0,0,0]
HAnimJoint108.llimit = [0,0,0]
HAnimJoint109 = x3d.HAnimJoint()
HAnimJoint109.name = "r_tarsal_distal_interphalangeal_5"
HAnimJoint109.DEF = "hanim_r_tarsal_distal_interphalangeal_5"
HAnimJoint109.center = [-0.1271,0,0]
HAnimJoint109.skinCoordIndex = [0]
HAnimJoint109.skinCoordWeight = [0]
HAnimJoint109.ulimit = [0,0,0]
HAnimJoint109.llimit = [0,0,0]

HAnimJoint108.children.append(HAnimJoint109)

HAnimJoint107.children.append(HAnimJoint108)

HAnimJoint106.children.append(HAnimJoint107)

HAnimJoint101.children.append(HAnimJoint106)

HAnimJoint100.children.append(HAnimJoint101)

HAnimJoint84.children.append(HAnimJoint100)

HAnimJoint83.children.append(HAnimJoint84)

HAnimJoint82.children.append(HAnimJoint83)

HAnimJoint53.children.append(HAnimJoint82)

HAnimJoint52.children.append(HAnimJoint53)
HAnimJoint110 = x3d.HAnimJoint()
HAnimJoint110.name = "vl5"
HAnimJoint110.DEF = "hanim_vl5"
HAnimJoint110.center = [0.0028,1.0568,-0.0776]
HAnimJoint110.skinCoordIndex = [0]
HAnimJoint110.skinCoordWeight = [0]
HAnimJoint110.ulimit = [0,0,0]
HAnimJoint110.llimit = [0,0,0]
HAnimJoint111 = x3d.HAnimJoint()
HAnimJoint111.name = "vl4"
HAnimJoint111.DEF = "hanim_vl4"
HAnimJoint111.center = [0.0035,1.0925,-0.0787]
HAnimJoint111.skinCoordIndex = [0]
HAnimJoint111.skinCoordWeight = [0]
HAnimJoint111.ulimit = [0,0,0]
HAnimJoint111.llimit = [0,0,0]
HAnimJoint112 = x3d.HAnimJoint()
HAnimJoint112.name = "vl3"
HAnimJoint112.DEF = "hanim_vl3"
HAnimJoint112.center = [0.0041,1.1276,-0.0796]
HAnimJoint112.skinCoordIndex = [0]
HAnimJoint112.skinCoordWeight = [0]
HAnimJoint112.ulimit = [0,0,0]
HAnimJoint112.llimit = [0,0,0]
HAnimJoint113 = x3d.HAnimJoint()
HAnimJoint113.name = "vl2"
HAnimJoint113.DEF = "hanim_vl2"
HAnimJoint113.center = [0.0045,1.1546,-0.08]
HAnimJoint113.skinCoordIndex = [0]
HAnimJoint113.skinCoordWeight = [0]
HAnimJoint113.ulimit = [0,0,0]
HAnimJoint113.llimit = [0,0,0]
HAnimJoint114 = x3d.HAnimJoint()
HAnimJoint114.name = "vl1"
HAnimJoint114.DEF = "hanim_vl1"
HAnimJoint114.center = [0.0048,1.1912,-0.0805]
HAnimJoint114.skinCoordIndex = [0]
HAnimJoint114.skinCoordWeight = [0]
HAnimJoint114.ulimit = [0,0,0]
HAnimJoint114.llimit = [0,0,0]
HAnimJoint115 = x3d.HAnimJoint()
HAnimJoint115.name = "vt12"
HAnimJoint115.DEF = "hanim_vt12"
HAnimJoint115.center = [0.0051,1.2278,-0.0808]
HAnimJoint115.skinCoordIndex = [0]
HAnimJoint115.skinCoordWeight = [0]
HAnimJoint115.ulimit = [0,0,0]
HAnimJoint115.llimit = [0,0,0]
HAnimJoint116 = x3d.HAnimJoint()
HAnimJoint116.name = "vt11"
HAnimJoint116.DEF = "hanim_vt11"
HAnimJoint116.center = [0.0053,1.2679,-0.081]
HAnimJoint116.skinCoordIndex = [0]
HAnimJoint116.skinCoordWeight = [0]
HAnimJoint116.ulimit = [0,0,0]
HAnimJoint116.llimit = [0,0,0]
HAnimJoint117 = x3d.HAnimJoint()
HAnimJoint117.name = "vt10"
HAnimJoint117.DEF = "hanim_vt10"
HAnimJoint117.center = [0.0056,1.2848,-0.0822]
HAnimJoint117.skinCoordIndex = [0]
HAnimJoint117.skinCoordWeight = [0]
HAnimJoint117.ulimit = [0,0,0]
HAnimJoint117.llimit = [0,0,0]
HAnimJoint118 = x3d.HAnimJoint()
HAnimJoint118.name = "vt9"
HAnimJoint118.DEF = "hanim_vt9"
HAnimJoint118.center = [0.0057,1.3126,-0.0838]
HAnimJoint118.skinCoordIndex = [0]
HAnimJoint118.skinCoordWeight = [0]
HAnimJoint118.ulimit = [0,0,0]
HAnimJoint118.llimit = [0,0,0]
HAnimJoint119 = x3d.HAnimJoint()
HAnimJoint119.name = "vt8"
HAnimJoint119.DEF = "hanim_vt8"
HAnimJoint119.center = [0.0057,1.3382,-0.0845]
HAnimJoint119.skinCoordIndex = [0]
HAnimJoint119.skinCoordWeight = [0]
HAnimJoint119.ulimit = [0,0,0]
HAnimJoint119.llimit = [0,0,0]
HAnimJoint120 = x3d.HAnimJoint()
HAnimJoint120.name = "vt7"
HAnimJoint120.DEF = "hanim_vt7"
HAnimJoint120.center = [0.0058,1.3625,-0.0833]
HAnimJoint120.skinCoordIndex = [0]
HAnimJoint120.skinCoordWeight = [0]
HAnimJoint120.ulimit = [0,0,0]
HAnimJoint120.llimit = [0,0,0]
HAnimJoint121 = x3d.HAnimJoint()
HAnimJoint121.name = "vt6"
HAnimJoint121.DEF = "hanim_vt6"
HAnimJoint121.center = [0.0059,1.3866,-0.08]
HAnimJoint121.skinCoordIndex = [0]
HAnimJoint121.skinCoordWeight = [0]
HAnimJoint121.ulimit = [0,0,0]
HAnimJoint121.llimit = [0,0,0]
HAnimJoint122 = x3d.HAnimJoint()
HAnimJoint122.name = "vt5"
HAnimJoint122.DEF = "hanim_vt5"
HAnimJoint122.center = [0.006,1.4102,-0.0745]
HAnimJoint122.skinCoordIndex = [0]
HAnimJoint122.skinCoordWeight = [0]
HAnimJoint122.ulimit = [0,0,0]
HAnimJoint122.llimit = [0,0,0]
HAnimJoint123 = x3d.HAnimJoint()
HAnimJoint123.name = "vt4"
HAnimJoint123.DEF = "hanim_vt4"
HAnimJoint123.center = [0.0061,1.432,-0.0675]
HAnimJoint123.skinCoordIndex = [0]
HAnimJoint123.skinCoordWeight = [0]
HAnimJoint123.ulimit = [0,0,0]
HAnimJoint123.llimit = [0,0,0]
HAnimJoint124 = x3d.HAnimJoint()
HAnimJoint124.name = "vt3"
HAnimJoint124.DEF = "hanim_vt3"
HAnimJoint124.center = [0.0062,1.4583,-0.057]
HAnimJoint124.skinCoordIndex = [0]
HAnimJoint124.skinCoordWeight = [0]
HAnimJoint124.ulimit = [0,0,0]
HAnimJoint124.llimit = [0,0,0]
HAnimJoint125 = x3d.HAnimJoint()
HAnimJoint125.name = "vt2"
HAnimJoint125.DEF = "hanim_vt2"
HAnimJoint125.center = [0.0063,1.4761,-0.0484]
HAnimJoint125.skinCoordIndex = [0]
HAnimJoint125.skinCoordWeight = [0]
HAnimJoint125.ulimit = [0,0,0]
HAnimJoint125.llimit = [0,0,0]
HAnimJoint126 = x3d.HAnimJoint()
HAnimJoint126.name = "vt1"
HAnimJoint126.DEF = "hanim_vt1"
HAnimJoint126.center = [0.0065,1.4951,-0.0387]
HAnimJoint126.skinCoordIndex = [0]
HAnimJoint126.skinCoordWeight = [0]
HAnimJoint126.ulimit = [0,0,0]
HAnimJoint126.llimit = [0,0,0]
HAnimJoint127 = x3d.HAnimJoint()
HAnimJoint127.name = "vc7"
HAnimJoint127.DEF = "hanim_vc7"
HAnimJoint127.center = [0.0066,1.5132,-0.0301]
HAnimJoint127.skinCoordIndex = [0]
HAnimJoint127.skinCoordWeight = [0]
HAnimJoint127.ulimit = [0,0,0]
HAnimJoint127.llimit = [0,0,0]
HAnimJoint128 = x3d.HAnimJoint()
HAnimJoint128.name = "vc6"
HAnimJoint128.DEF = "hanim_vc6"
HAnimJoint128.center = [0.0066,1.5357,-0.0143]
HAnimJoint128.skinCoordIndex = [0]
HAnimJoint128.skinCoordWeight = [0]
HAnimJoint128.ulimit = [0,0,0]
HAnimJoint128.llimit = [0,0,0]
HAnimJoint129 = x3d.HAnimJoint()
HAnimJoint129.name = "vc5"
HAnimJoint129.DEF = "hanim_vc5"
HAnimJoint129.center = [0.0066,1.552,-0.0082]
HAnimJoint129.skinCoordIndex = [0]
HAnimJoint129.skinCoordWeight = [0]
HAnimJoint129.ulimit = [0,0,0]
HAnimJoint129.llimit = [0,0,0]
HAnimJoint130 = x3d.HAnimJoint()
HAnimJoint130.name = "vc4"
HAnimJoint130.DEF = "hanim_vc4"
HAnimJoint130.center = [0.0066,1.5662,-0.0084]
HAnimJoint130.skinCoordIndex = [0]
HAnimJoint130.skinCoordWeight = [0]
HAnimJoint130.ulimit = [0,0,0]
HAnimJoint130.llimit = [0,0,0]
HAnimJoint131 = x3d.HAnimJoint()
HAnimJoint131.name = "vc3"
HAnimJoint131.DEF = "hanim_vc3"
HAnimJoint131.center = [0.0066,1.58,-0.0103]
HAnimJoint131.skinCoordIndex = [0]
HAnimJoint131.skinCoordWeight = [0]
HAnimJoint131.ulimit = [0,0,0]
HAnimJoint131.llimit = [0,0,0]
HAnimJoint132 = x3d.HAnimJoint()
HAnimJoint132.name = "vc2"
HAnimJoint132.DEF = "hanim_vc2"
HAnimJoint132.center = [0.0066,1.5928,-0.0103]
HAnimJoint132.skinCoordIndex = [0]
HAnimJoint132.skinCoordWeight = [0]
HAnimJoint132.ulimit = [0,0,0]
HAnimJoint132.llimit = [0,0,0]
HAnimJoint133 = x3d.HAnimJoint()
HAnimJoint133.name = "vc1"
HAnimJoint133.DEF = "hanim_vc1"
HAnimJoint133.center = [0.0066,1.6144,-0.0034]
HAnimJoint133.skinCoordIndex = [0]
HAnimJoint133.skinCoordWeight = [0]
HAnimJoint133.ulimit = [0,0,0]
HAnimJoint133.llimit = [0,0,0]
HAnimJoint134 = x3d.HAnimJoint()
HAnimJoint134.name = "skullbase"
HAnimJoint134.DEF = "hanim_skullbase"
HAnimJoint134.center = [0.0044,1.6209,0.0236]
HAnimJoint134.skinCoordIndex = [0]
HAnimJoint134.skinCoordWeight = [0]
HAnimJoint134.ulimit = [0,0,0]
HAnimJoint134.llimit = [0,0,0]
HAnimJoint135 = x3d.HAnimJoint()
HAnimJoint135.name = "l_eyelid_joint"
HAnimJoint135.DEF = "hanim_l_eyelid_joint"
HAnimJoint135.center = [0.0503,1.4157,-0.0689]
HAnimJoint135.skinCoordIndex = [0]
HAnimJoint135.skinCoordWeight = [0]
HAnimJoint135.ulimit = [0,0,0]
HAnimJoint135.llimit = [0,0,0]

HAnimJoint134.children.append(HAnimJoint135)
HAnimJoint136 = x3d.HAnimJoint()
HAnimJoint136.name = "r_eyelid_joint"
HAnimJoint136.DEF = "hanim_r_eyelid_joint"
HAnimJoint136.center = [-0.0507,1.4157,-0.0689]
HAnimJoint136.skinCoordIndex = [0]
HAnimJoint136.skinCoordWeight = [0]
HAnimJoint136.ulimit = [0,0,0]
HAnimJoint136.llimit = [0,0,0]

HAnimJoint134.children.append(HAnimJoint136)
HAnimJoint137 = x3d.HAnimJoint()
HAnimJoint137.name = "l_eyeball_joint"
HAnimJoint137.DEF = "hanim_l_eyeball_joint"
HAnimJoint137.center = [0.0479,1.3963,-0.0188]
HAnimJoint137.skinCoordIndex = [0]
HAnimJoint137.skinCoordWeight = [0]
HAnimJoint137.ulimit = [0,0,0]
HAnimJoint137.llimit = [0,0,0]

HAnimJoint134.children.append(HAnimJoint137)
HAnimJoint138 = x3d.HAnimJoint()
HAnimJoint138.name = "r_eyeball_joint"
HAnimJoint138.DEF = "hanim_r_eyeball_joint"
HAnimJoint138.center = [-0.0483,1.3963,-0.0188]
HAnimJoint138.skinCoordIndex = [0]
HAnimJoint138.skinCoordWeight = [0]
HAnimJoint138.ulimit = [0,0,0]
HAnimJoint138.llimit = [0,0,0]

HAnimJoint134.children.append(HAnimJoint138)
HAnimJoint139 = x3d.HAnimJoint()
HAnimJoint139.name = "l_eyebrow_joint"
HAnimJoint139.DEF = "hanim_l_eyebrow_joint"
HAnimJoint139.center = [0.0216,1.4053,0.0051]
HAnimJoint139.skinCoordIndex = [0]
HAnimJoint139.skinCoordWeight = [0]
HAnimJoint139.ulimit = [0,0,0]
HAnimJoint139.llimit = [0,0,0]

HAnimJoint134.children.append(HAnimJoint139)
HAnimJoint140 = x3d.HAnimJoint()
HAnimJoint140.name = "r_eyebrow_joint"
HAnimJoint140.DEF = "hanim_r_eyebrow_joint"
HAnimJoint140.center = [-0.0219,1.4053,0.0051]
HAnimJoint140.skinCoordIndex = [0]
HAnimJoint140.skinCoordWeight = [0]
HAnimJoint140.ulimit = [0,0,0]
HAnimJoint140.llimit = [0,0,0]

HAnimJoint134.children.append(HAnimJoint140)
HAnimJoint141 = x3d.HAnimJoint()
HAnimJoint141.name = "temporomandibular"
HAnimJoint141.DEF = "hanim_temporomandibular"
HAnimJoint141.center = [-0.0002,1.3043,-0.0865]
HAnimJoint141.skinCoordIndex = [0]
HAnimJoint141.skinCoordWeight = [0]
HAnimJoint141.ulimit = [0,0,0]
HAnimJoint141.llimit = [0,0,0]

HAnimJoint134.children.append(HAnimJoint141)

HAnimJoint133.children.append(HAnimJoint134)

HAnimJoint132.children.append(HAnimJoint133)

HAnimJoint131.children.append(HAnimJoint132)

HAnimJoint130.children.append(HAnimJoint131)

HAnimJoint129.children.append(HAnimJoint130)

HAnimJoint128.children.append(HAnimJoint129)

HAnimJoint127.children.append(HAnimJoint128)

HAnimJoint126.children.append(HAnimJoint127)
HAnimJoint142 = x3d.HAnimJoint()
HAnimJoint142.name = "l_sternoclavicular"
HAnimJoint142.DEF = "hanim_l_sternoclavicular"
HAnimJoint142.center = [0.082,1.4488,-0.0353]
HAnimJoint142.skinCoordIndex = [0]
HAnimJoint142.skinCoordWeight = [0]
HAnimJoint142.ulimit = [0,0,0]
HAnimJoint142.llimit = [0,0,0]
HAnimJoint143 = x3d.HAnimJoint()
HAnimJoint143.name = "l_acromioclavicular"
HAnimJoint143.DEF = "hanim_l_acromioclavicular"
HAnimJoint143.center = [0.0962,1.4269,-0.0424]
HAnimJoint143.skinCoordIndex = [0]
HAnimJoint143.skinCoordWeight = [0]
HAnimJoint143.ulimit = [0,0,0]
HAnimJoint143.llimit = [0,0,0]
HAnimJoint144 = x3d.HAnimJoint()
HAnimJoint144.name = "l_shoulder"
HAnimJoint144.DEF = "hanim_l_shoulder"
HAnimJoint144.center = [0.2029,1.4376,-0.0387]
HAnimJoint144.skinCoordIndex = [0]
HAnimJoint144.skinCoordWeight = [0]
HAnimJoint144.ulimit = [0,0,0]
HAnimJoint144.llimit = [0,0,0]
HAnimJoint145 = x3d.HAnimJoint()
HAnimJoint145.name = "l_elbow"
HAnimJoint145.DEF = "hanim_l_elbow"
HAnimJoint145.center = [0.2014,1.1357,-0.0682]
HAnimJoint145.skinCoordIndex = [0]
HAnimJoint145.skinCoordWeight = [0]
HAnimJoint145.ulimit = [0,0,0]
HAnimJoint145.llimit = [0,0,0]
HAnimJoint146 = x3d.HAnimJoint()
HAnimJoint146.name = "l_radiocarpal"
HAnimJoint146.DEF = "hanim_l_radiocarpal"
HAnimJoint146.center = [0.1984,0.8663,-0.0583]
HAnimJoint146.skinCoordIndex = [0]
HAnimJoint146.skinCoordWeight = [0]
HAnimJoint146.ulimit = [0,0,0]
HAnimJoint146.llimit = [0,0,0]
HAnimJoint147 = x3d.HAnimJoint()
HAnimJoint147.name = "l_midcarpal_1"
HAnimJoint147.DEF = "hanim_l_midcarpal_1"
HAnimJoint147.center = [0.1811,0.6975,-0.0826]
HAnimJoint147.skinCoordIndex = [0]
HAnimJoint147.skinCoordWeight = [0]
HAnimJoint147.ulimit = [0,0,0]
HAnimJoint147.llimit = [0,0,0]
HAnimJoint148 = x3d.HAnimJoint()
HAnimJoint148.name = "l_carpometacarpal_1"
HAnimJoint148.DEF = "hanim_l_carpometacarpal_1"
HAnimJoint148.center = [0.1924,0.8472,-0.0534]
HAnimJoint148.skinCoordIndex = [0]
HAnimJoint148.skinCoordWeight = [0]
HAnimJoint148.ulimit = [0,0,0]
HAnimJoint148.llimit = [0,0,0]
HAnimJoint149 = x3d.HAnimJoint()
HAnimJoint149.name = "l_metacarpophalangeal_1"
HAnimJoint149.DEF = "hanim_l_metacarpophalangeal_1"
HAnimJoint149.center = [0.1951,0.8226,0.0246]
HAnimJoint149.skinCoordIndex = [0]
HAnimJoint149.skinCoordWeight = [0]
HAnimJoint149.ulimit = [0,0,0]
HAnimJoint149.llimit = [0,0,0]
HAnimJoint150 = x3d.HAnimJoint()
HAnimJoint150.name = "l_carpal_interphalangeal_1"
HAnimJoint150.DEF = "hanim_l_carpal_interphalangeal_1"
HAnimJoint150.center = [0.1955,0.8159,0.0464]
HAnimJoint150.skinCoordIndex = [0]
HAnimJoint150.skinCoordWeight = [0]
HAnimJoint150.ulimit = [0,0,0]
HAnimJoint150.llimit = [0,0,0]

HAnimJoint149.children.append(HAnimJoint150)

HAnimJoint148.children.append(HAnimJoint149)

HAnimJoint147.children.append(HAnimJoint148)

HAnimJoint146.children.append(HAnimJoint147)
HAnimJoint151 = x3d.HAnimJoint()
HAnimJoint151.name = "l_midcarpal_2"
HAnimJoint151.DEF = "hanim_l_midcarpal_2"
HAnimJoint151.center = [0.1811,0.6984,-0.0935]
HAnimJoint151.skinCoordIndex = [0]
HAnimJoint151.skinCoordWeight = [0]
HAnimJoint151.ulimit = [0,0,0]
HAnimJoint151.llimit = [0,0,0]
HAnimJoint152 = x3d.HAnimJoint()
HAnimJoint152.name = "l_carpometacarpal_2"
HAnimJoint152.DEF = "hanim_l_carpometacarpal_2"
HAnimJoint152.center = [0.1983,0.8024,-0.028]
HAnimJoint152.skinCoordIndex = [0]
HAnimJoint152.skinCoordWeight = [0]
HAnimJoint152.ulimit = [0,0,0]
HAnimJoint152.llimit = [0,0,0]
HAnimJoint153 = x3d.HAnimJoint()
HAnimJoint153.name = "l_metacarpophalangeal_2"
HAnimJoint153.DEF = "hanim_l_metacarpophalangeal_2"
HAnimJoint153.center = [0.1983,0.7815,-0.028]
HAnimJoint153.skinCoordIndex = [0]
HAnimJoint153.skinCoordWeight = [0]
HAnimJoint153.ulimit = [0,0,0]
HAnimJoint153.llimit = [0,0,0]
HAnimJoint154 = x3d.HAnimJoint()
HAnimJoint154.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint154.DEF = "hanim_l_carpal_proximal_interphalangeal_2"
HAnimJoint154.center = [0.2017,0.7363,-0.0248]
HAnimJoint154.skinCoordIndex = [0]
HAnimJoint154.skinCoordWeight = [0]
HAnimJoint154.ulimit = [0,0,0]
HAnimJoint154.llimit = [0,0,0]
HAnimJoint155 = x3d.HAnimJoint()
HAnimJoint155.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint155.DEF = "hanim_l_carpal_distal_interphalangeal_2"
HAnimJoint155.center = [0.2028,0.7139,-0.0236]
HAnimJoint155.skinCoordIndex = [0]
HAnimJoint155.skinCoordWeight = [0]
HAnimJoint155.ulimit = [0,0,0]
HAnimJoint155.llimit = [0,0,0]

HAnimJoint154.children.append(HAnimJoint155)

HAnimJoint153.children.append(HAnimJoint154)

HAnimJoint152.children.append(HAnimJoint153)

HAnimJoint151.children.append(HAnimJoint152)

HAnimJoint146.children.append(HAnimJoint151)
HAnimJoint156 = x3d.HAnimJoint()
HAnimJoint156.name = "l_midcarpal_3"
HAnimJoint156.DEF = "hanim_l_midcarpal_3"
HAnimJoint156.center = [0.1809,0.7,-0.1067]
HAnimJoint156.skinCoordIndex = [0]
HAnimJoint156.skinCoordWeight = [0]
HAnimJoint156.ulimit = [0,0,0]
HAnimJoint156.llimit = [0,0,0]
HAnimJoint157 = x3d.HAnimJoint()
HAnimJoint157.name = "l_carpometacarpal_3"
HAnimJoint157.DEF = "hanim_l_carpometacarpal_3"
HAnimJoint157.center = [0.1987,0.8029,-0.053]
HAnimJoint157.skinCoordIndex = [0]
HAnimJoint157.skinCoordWeight = [0]
HAnimJoint157.ulimit = [0,0,0]
HAnimJoint157.llimit = [0,0,0]
HAnimJoint158 = x3d.HAnimJoint()
HAnimJoint158.name = "l_metacarpophalangeal_3"
HAnimJoint158.DEF = "hanim_l_metacarpophalangeal_3"
HAnimJoint158.center = [0.1987,0.7818,-0.053]
HAnimJoint158.skinCoordIndex = [0]
HAnimJoint158.skinCoordWeight = [0]
HAnimJoint158.ulimit = [0,0,0]
HAnimJoint158.llimit = [0,0,0]
HAnimJoint159 = x3d.HAnimJoint()
HAnimJoint159.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint159.DEF = "hanim_l_carpal_proximal_interphalangeal_3"
HAnimJoint159.center = [0.2013,0.7273,-0.0503]
HAnimJoint159.skinCoordIndex = [0]
HAnimJoint159.skinCoordWeight = [0]
HAnimJoint159.ulimit = [0,0,0]
HAnimJoint159.llimit = [0,0,0]
HAnimJoint160 = x3d.HAnimJoint()
HAnimJoint160.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint160.DEF = "hanim_l_carpal_distal_interphalangeal_3"
HAnimJoint160.center = [0.2026,0.7011,-0.0494]
HAnimJoint160.skinCoordIndex = [0]
HAnimJoint160.skinCoordWeight = [0]
HAnimJoint160.ulimit = [0,0,0]
HAnimJoint160.llimit = [0,0,0]

HAnimJoint159.children.append(HAnimJoint160)

HAnimJoint158.children.append(HAnimJoint159)

HAnimJoint157.children.append(HAnimJoint158)

HAnimJoint156.children.append(HAnimJoint157)

HAnimJoint146.children.append(HAnimJoint156)
HAnimJoint161 = x3d.HAnimJoint()
HAnimJoint161.name = "l_midcarpal_4_5"
HAnimJoint161.DEF = "hanim_l_midcarpal_4_5"
HAnimJoint161.center = [0.1809,0.6973,-0.1276]
HAnimJoint161.skinCoordIndex = [0]
HAnimJoint161.skinCoordWeight = [0]
HAnimJoint161.ulimit = [0,0,0]
HAnimJoint161.llimit = [0,0,0]
HAnimJoint162 = x3d.HAnimJoint()
HAnimJoint162.name = "l_carpometacarpal_4"
HAnimJoint162.DEF = "hanim_l_carpometacarpal_4"
HAnimJoint162.center = [0.1956,0.8019,-0.0794]
HAnimJoint162.skinCoordIndex = [0]
HAnimJoint162.skinCoordWeight = [0]
HAnimJoint162.ulimit = [0,0,0]
HAnimJoint162.llimit = [0,0,0]
HAnimJoint163 = x3d.HAnimJoint()
HAnimJoint163.name = "l_metacarpophalangeal_4"
HAnimJoint163.DEF = "hanim_l_metacarpophalangeal_4"
HAnimJoint163.center = [0.1956,0.7815,-0.0794]
HAnimJoint163.skinCoordIndex = [0]
HAnimJoint163.skinCoordWeight = [0]
HAnimJoint163.ulimit = [0,0,0]
HAnimJoint163.llimit = [0,0,0]
HAnimJoint164 = x3d.HAnimJoint()
HAnimJoint164.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint164.DEF = "hanim_l_carpal_proximal_interphalangeal_4"
HAnimJoint164.center = [0.1973,0.7287,-0.0777]
HAnimJoint164.skinCoordIndex = [0]
HAnimJoint164.skinCoordWeight = [0]
HAnimJoint164.ulimit = [0,0,0]
HAnimJoint164.llimit = [0,0,0]
HAnimJoint165 = x3d.HAnimJoint()
HAnimJoint165.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint165.DEF = "hanim_l_carpal_distal_interphalangeal_4"
HAnimJoint165.center = [0.1983,0.7045,-0.0767]
HAnimJoint165.skinCoordIndex = [0]
HAnimJoint165.skinCoordWeight = [0]
HAnimJoint165.ulimit = [0,0,0]
HAnimJoint165.llimit = [0,0,0]

HAnimJoint164.children.append(HAnimJoint165)

HAnimJoint163.children.append(HAnimJoint164)

HAnimJoint162.children.append(HAnimJoint163)

HAnimJoint161.children.append(HAnimJoint162)
HAnimJoint166 = x3d.HAnimJoint()
HAnimJoint166.name = "l_carpometacarpal_5"
HAnimJoint166.DEF = "hanim_l_carpometacarpal_5"
HAnimJoint166.center = [0.1925,0.8066,-0.1036]
HAnimJoint166.skinCoordIndex = [0]
HAnimJoint166.skinCoordWeight = [0]
HAnimJoint166.ulimit = [0,0,0]
HAnimJoint166.llimit = [0,0,0]
HAnimJoint167 = x3d.HAnimJoint()
HAnimJoint167.name = "l_metacarpophalangeal_5"
HAnimJoint167.DEF = "hanim_l_metacarpophalangeal_5"
HAnimJoint167.center = [0.1925,0.7866,-0.1036]
HAnimJoint167.skinCoordIndex = [0]
HAnimJoint167.skinCoordWeight = [0]
HAnimJoint167.ulimit = [0,0,0]
HAnimJoint167.llimit = [0,0,0]
HAnimJoint168 = x3d.HAnimJoint()
HAnimJoint168.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint168.DEF = "hanim_l_carpal_proximal_interphalangeal_5"
HAnimJoint168.center = [0.1938,0.7452,-0.1024]
HAnimJoint168.skinCoordIndex = [0]
HAnimJoint168.skinCoordWeight = [0]
HAnimJoint168.ulimit = [0,0,0]
HAnimJoint168.llimit = [0,0,0]
HAnimJoint169 = x3d.HAnimJoint()
HAnimJoint169.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint169.DEF = "hanim_l_carpal_distal_interphalangeal_5"
HAnimJoint169.center = [0.1948,0.7277,-0.1017]
HAnimJoint169.skinCoordIndex = [0]
HAnimJoint169.skinCoordWeight = [0]
HAnimJoint169.ulimit = [0,0,0]
HAnimJoint169.llimit = [0,0,0]

HAnimJoint168.children.append(HAnimJoint169)

HAnimJoint167.children.append(HAnimJoint168)

HAnimJoint166.children.append(HAnimJoint167)

HAnimJoint161.children.append(HAnimJoint166)

HAnimJoint146.children.append(HAnimJoint161)

HAnimJoint145.children.append(HAnimJoint146)

HAnimJoint144.children.append(HAnimJoint145)

HAnimJoint143.children.append(HAnimJoint144)

HAnimJoint142.children.append(HAnimJoint143)

HAnimJoint126.children.append(HAnimJoint142)
HAnimJoint170 = x3d.HAnimJoint()
HAnimJoint170.name = "r_sternoclavicular"
HAnimJoint170.DEF = "hanim_r_sternoclavicular"
HAnimJoint170.center = [-0.0694,1.46,-0.033]
HAnimJoint170.skinCoordIndex = [0]
HAnimJoint170.skinCoordWeight = [0]
HAnimJoint170.ulimit = [0,0,0]
HAnimJoint170.llimit = [0,0,0]
HAnimJoint171 = x3d.HAnimJoint()
HAnimJoint171.name = "r_acromioclavicular"
HAnimJoint171.DEF = "hanim_r_acromioclavicular"
HAnimJoint171.center = [-0.0836,1.4281,-0.0401]
HAnimJoint171.skinCoordIndex = [0]
HAnimJoint171.skinCoordWeight = [0]
HAnimJoint171.ulimit = [0,0,0]
HAnimJoint171.llimit = [0,0,0]
HAnimJoint172 = x3d.HAnimJoint()
HAnimJoint172.name = "r_shoulder"
HAnimJoint172.DEF = "hanim_r_shoulder"
HAnimJoint172.center = [-0.1907,1.4407,-0.0325]
HAnimJoint172.skinCoordIndex = [0]
HAnimJoint172.skinCoordWeight = [0]
HAnimJoint172.ulimit = [0,0,0]
HAnimJoint172.llimit = [0,0,0]
HAnimJoint173 = x3d.HAnimJoint()
HAnimJoint173.name = "r_elbow"
HAnimJoint173.DEF = "hanim_r_elbow"
HAnimJoint173.center = [-0.1949,1.1388,-0.062]
HAnimJoint173.skinCoordIndex = [0]
HAnimJoint173.skinCoordWeight = [0]
HAnimJoint173.ulimit = [0,0,0]
HAnimJoint173.llimit = [0,0,0]
HAnimJoint174 = x3d.HAnimJoint()
HAnimJoint174.name = "r_radiocarpal"
HAnimJoint174.DEF = "hanim_r_radiocarpal"
HAnimJoint174.center = [-0.1959,0.8694,-0.0521]
HAnimJoint174.skinCoordIndex = [0]
HAnimJoint174.skinCoordWeight = [0]
HAnimJoint174.ulimit = [0,0,0]
HAnimJoint174.llimit = [0,0,0]
HAnimJoint175 = x3d.HAnimJoint()
HAnimJoint175.name = "r_midcarpal_1"
HAnimJoint175.DEF = "hanim_r_midcarpal_1"
HAnimJoint175.center = [-0.1811,0.6975,-0.0826]
HAnimJoint175.skinCoordIndex = [0]
HAnimJoint175.skinCoordWeight = [0]
HAnimJoint175.ulimit = [0,0,0]
HAnimJoint175.llimit = [0,0,0]
HAnimJoint176 = x3d.HAnimJoint()
HAnimJoint176.name = "r_carpometacarpal_1"
HAnimJoint176.DEF = "hanim_r_carpometacarpal_1"
HAnimJoint176.center = [-0.1899,0.8502,-0.0473]
HAnimJoint176.skinCoordIndex = [0]
HAnimJoint176.skinCoordWeight = [0]
HAnimJoint176.ulimit = [0,0,0]
HAnimJoint176.llimit = [0,0,0]
HAnimJoint177 = x3d.HAnimJoint()
HAnimJoint177.name = "r_metacarpophalangeal_1"
HAnimJoint177.DEF = "hanim_r_metacarpophalangeal_1"
HAnimJoint177.center = [-0.1874,0.8256,0.0306]
HAnimJoint177.skinCoordIndex = [0]
HAnimJoint177.skinCoordWeight = [0]
HAnimJoint177.ulimit = [0,0,0]
HAnimJoint177.llimit = [0,0,0]
HAnimJoint178 = x3d.HAnimJoint()
HAnimJoint178.name = "r_carpal_interphalangeal_1"
HAnimJoint178.DEF = "hanim_r_carpal_interphalangeal_1"
HAnimJoint178.center = [-0.1864,0.819,0.0506]
HAnimJoint178.skinCoordIndex = [0]
HAnimJoint178.skinCoordWeight = [0]
HAnimJoint178.ulimit = [0,0,0]
HAnimJoint178.llimit = [0,0,0]

HAnimJoint177.children.append(HAnimJoint178)

HAnimJoint176.children.append(HAnimJoint177)

HAnimJoint175.children.append(HAnimJoint176)

HAnimJoint174.children.append(HAnimJoint175)
HAnimJoint179 = x3d.HAnimJoint()
HAnimJoint179.name = "r_midcarpal_2"
HAnimJoint179.DEF = "hanim_r_midcarpal_2"
HAnimJoint179.center = [-0.1811,0.6984,-0.0935]
HAnimJoint179.skinCoordIndex = [0]
HAnimJoint179.skinCoordWeight = [0]
HAnimJoint179.ulimit = [0,0,0]
HAnimJoint179.llimit = [0,0,0]
HAnimJoint180 = x3d.HAnimJoint()
HAnimJoint180.name = "r_carpometacarpal_2"
HAnimJoint180.DEF = "hanim_r_carpometacarpal_2"
HAnimJoint180.center = [-0.1961,0.8055,-0.0218]
HAnimJoint180.skinCoordIndex = [0]
HAnimJoint180.skinCoordWeight = [0]
HAnimJoint180.ulimit = [0,0,0]
HAnimJoint180.llimit = [0,0,0]
HAnimJoint181 = x3d.HAnimJoint()
HAnimJoint181.name = "r_metacarpophalangeal_2"
HAnimJoint181.DEF = "hanim_r_metacarpophalangeal_2"
HAnimJoint181.center = [-0.1961,0.7846,-0.0218]
HAnimJoint181.skinCoordIndex = [0]
HAnimJoint181.skinCoordWeight = [0]
HAnimJoint181.ulimit = [0,0,0]
HAnimJoint181.llimit = [0,0,0]
HAnimJoint182 = x3d.HAnimJoint()
HAnimJoint182.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint182.DEF = "hanim_r_carpal_proximal_interphalangeal_2"
HAnimJoint182.center = [-0.1954,0.7393,-0.0185]
HAnimJoint182.skinCoordIndex = [0]
HAnimJoint182.skinCoordWeight = [0]
HAnimJoint182.ulimit = [0,0,0]
HAnimJoint182.llimit = [0,0,0]
HAnimJoint183 = x3d.HAnimJoint()
HAnimJoint183.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint183.DEF = "hanim_r_carpal_distal_interphalangeal_2"
HAnimJoint183.center = [-0.1945,0.7169,-0.0173]
HAnimJoint183.skinCoordIndex = [0]
HAnimJoint183.skinCoordWeight = [0]
HAnimJoint183.ulimit = [0,0,0]
HAnimJoint183.llimit = [0,0,0]

HAnimJoint182.children.append(HAnimJoint183)

HAnimJoint181.children.append(HAnimJoint182)

HAnimJoint180.children.append(HAnimJoint181)

HAnimJoint179.children.append(HAnimJoint180)

HAnimJoint174.children.append(HAnimJoint179)
HAnimJoint184 = x3d.HAnimJoint()
HAnimJoint184.name = "r_midcarpal_3"
HAnimJoint184.DEF = "hanim_r_midcarpal_3"
HAnimJoint184.center = [-0.1809,0.7,-0.1067]
HAnimJoint184.skinCoordIndex = [0]
HAnimJoint184.skinCoordWeight = [0]
HAnimJoint184.ulimit = [0,0,0]
HAnimJoint184.llimit = [0,0,0]
HAnimJoint185 = x3d.HAnimJoint()
HAnimJoint185.name = "r_carpometacarpal_3"
HAnimJoint185.DEF = "hanim_r_carpometacarpal_3"
HAnimJoint185.center = [-0.1972,0.806,-0.0468]
HAnimJoint185.skinCoordIndex = [0]
HAnimJoint185.skinCoordWeight = [0]
HAnimJoint185.ulimit = [0,0,0]
HAnimJoint185.llimit = [0,0,0]
HAnimJoint186 = x3d.HAnimJoint()
HAnimJoint186.name = "r_metacarpophalangeal_3"
HAnimJoint186.DEF = "hanim_r_metacarpophalangeal_3"
HAnimJoint186.center = [-0.1972,0.7849,-0.0468]
HAnimJoint186.skinCoordIndex = [0]
HAnimJoint186.skinCoordWeight = [0]
HAnimJoint186.ulimit = [0,0,0]
HAnimJoint186.llimit = [0,0,0]
HAnimJoint187 = x3d.HAnimJoint()
HAnimJoint187.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint187.DEF = "hanim_r_carpal_proximal_interphalangeal_3"
HAnimJoint187.center = [-0.195,0.7304,-0.0441]
HAnimJoint187.skinCoordIndex = [0]
HAnimJoint187.skinCoordWeight = [0]
HAnimJoint187.ulimit = [0,0,0]
HAnimJoint187.llimit = [0,0,0]
HAnimJoint188 = x3d.HAnimJoint()
HAnimJoint188.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint188.DEF = "hanim_r_carpal_distal_interphalangeal_3"
HAnimJoint188.center = [-0.1939,0.7042,-0.0432]
HAnimJoint188.skinCoordIndex = [0]
HAnimJoint188.skinCoordWeight = [0]
HAnimJoint188.ulimit = [0,0,0]
HAnimJoint188.llimit = [0,0,0]

HAnimJoint187.children.append(HAnimJoint188)

HAnimJoint186.children.append(HAnimJoint187)

HAnimJoint185.children.append(HAnimJoint186)

HAnimJoint184.children.append(HAnimJoint185)

HAnimJoint174.children.append(HAnimJoint184)
HAnimJoint189 = x3d.HAnimJoint()
HAnimJoint189.name = "r_midcarpal_4_5"
HAnimJoint189.DEF = "hanim_r_midcarpal_4_5"
HAnimJoint189.center = [-0.1809,0.6973,-0.1276]
HAnimJoint189.skinCoordIndex = [0]
HAnimJoint189.skinCoordWeight = [0]
HAnimJoint189.ulimit = [0,0,0]
HAnimJoint189.llimit = [0,0,0]
HAnimJoint190 = x3d.HAnimJoint()
HAnimJoint190.name = "r_carpometacarpal_4"
HAnimJoint190.DEF = "hanim_r_carpometacarpal_4"
HAnimJoint190.center = [-0.1951,0.8049,-0.0732]
HAnimJoint190.skinCoordIndex = [0]
HAnimJoint190.skinCoordWeight = [0]
HAnimJoint190.ulimit = [0,0,0]
HAnimJoint190.llimit = [0,0,0]
HAnimJoint191 = x3d.HAnimJoint()
HAnimJoint191.name = "r_metacarpophalangeal_4"
HAnimJoint191.DEF = "hanim_r_metacarpophalangeal_4"
HAnimJoint191.center = [-0.1951,0.7845,-0.0732]
HAnimJoint191.skinCoordIndex = [0]
HAnimJoint191.skinCoordWeight = [0]
HAnimJoint191.ulimit = [0,0,0]
HAnimJoint191.llimit = [0,0,0]
HAnimJoint192 = x3d.HAnimJoint()
HAnimJoint192.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint192.DEF = "hanim_r_carpal_proximal_interphalangeal_4"
HAnimJoint192.center = [-0.192,0.7318,-0.0716]
HAnimJoint192.skinCoordIndex = [0]
HAnimJoint192.skinCoordWeight = [0]
HAnimJoint192.ulimit = [0,0,0]
HAnimJoint192.llimit = [0,0,0]
HAnimJoint193 = x3d.HAnimJoint()
HAnimJoint193.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint193.DEF = "hanim_r_carpal_distal_interphalangeal_4"
HAnimJoint193.center = [-0.1908,0.7077,-0.0706]
HAnimJoint193.skinCoordIndex = [0]
HAnimJoint193.skinCoordWeight = [0]
HAnimJoint193.ulimit = [0,0,0]
HAnimJoint193.llimit = [0,0,0]

HAnimJoint192.children.append(HAnimJoint193)

HAnimJoint191.children.append(HAnimJoint192)

HAnimJoint190.children.append(HAnimJoint191)

HAnimJoint189.children.append(HAnimJoint190)
HAnimJoint194 = x3d.HAnimJoint()
HAnimJoint194.name = "r_carpometacarpal_5"
HAnimJoint194.DEF = "hanim_r_carpometacarpal_5"
HAnimJoint194.center = [-0.1926,0.8096,-0.0975]
HAnimJoint194.skinCoordIndex = [0]
HAnimJoint194.skinCoordWeight = [0]
HAnimJoint194.ulimit = [0,0,0]
HAnimJoint194.llimit = [0,0,0]
HAnimJoint195 = x3d.HAnimJoint()
HAnimJoint195.name = "r_metacarpophalangeal_5"
HAnimJoint195.DEF = "hanim_r_metacarpophalangeal_5"
HAnimJoint195.center = [-0.1926,0.7896,-0.0975]
HAnimJoint195.skinCoordIndex = [0]
HAnimJoint195.skinCoordWeight = [0]
HAnimJoint195.ulimit = [0,0,0]
HAnimJoint195.llimit = [0,0,0]
HAnimJoint196 = x3d.HAnimJoint()
HAnimJoint196.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint196.DEF = "hanim_r_carpal_proximal_interphalangeal_5"
HAnimJoint196.center = [-0.1902,0.7483,-0.0963]
HAnimJoint196.skinCoordIndex = [0]
HAnimJoint196.skinCoordWeight = [0]
HAnimJoint196.ulimit = [0,0,0]
HAnimJoint196.llimit = [0,0,0]
HAnimJoint197 = x3d.HAnimJoint()
HAnimJoint197.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint197.DEF = "hanim_r_carpal_distal_interphalangeal_5"
HAnimJoint197.center = [-0.1908,0.754,-0.096]
HAnimJoint197.skinCoordIndex = [0]
HAnimJoint197.skinCoordWeight = [0]
HAnimJoint197.ulimit = [0,0,0]
HAnimJoint197.llimit = [0,0,0]

HAnimJoint196.children.append(HAnimJoint197)

HAnimJoint195.children.append(HAnimJoint196)

HAnimJoint194.children.append(HAnimJoint195)

HAnimJoint189.children.append(HAnimJoint194)

HAnimJoint174.children.append(HAnimJoint189)

HAnimJoint173.children.append(HAnimJoint174)

HAnimJoint172.children.append(HAnimJoint173)

HAnimJoint171.children.append(HAnimJoint172)

HAnimJoint170.children.append(HAnimJoint171)

HAnimJoint126.children.append(HAnimJoint170)

HAnimJoint125.children.append(HAnimJoint126)

HAnimJoint124.children.append(HAnimJoint125)

HAnimJoint123.children.append(HAnimJoint124)

HAnimJoint122.children.append(HAnimJoint123)

HAnimJoint121.children.append(HAnimJoint122)

HAnimJoint120.children.append(HAnimJoint121)

HAnimJoint119.children.append(HAnimJoint120)

HAnimJoint118.children.append(HAnimJoint119)

HAnimJoint117.children.append(HAnimJoint118)

HAnimJoint116.children.append(HAnimJoint117)

HAnimJoint115.children.append(HAnimJoint116)

HAnimJoint114.children.append(HAnimJoint115)

HAnimJoint113.children.append(HAnimJoint114)

HAnimJoint112.children.append(HAnimJoint113)

HAnimJoint111.children.append(HAnimJoint112)

HAnimJoint110.children.append(HAnimJoint111)

HAnimJoint52.children.append(HAnimJoint110)

HAnimHumanoid43.skeleton.append(HAnimJoint52)
HAnimJoint198 = x3d.HAnimJoint()
HAnimJoint198.USE = "hanim_humanoid_root"

HAnimHumanoid43.joints.append(HAnimJoint198)
HAnimJoint199 = x3d.HAnimJoint()
HAnimJoint199.USE = "hanim_sacroiliac"

HAnimHumanoid43.joints.append(HAnimJoint199)
HAnimJoint200 = x3d.HAnimJoint()
HAnimJoint200.USE = "hanim_l_hip"

HAnimHumanoid43.joints.append(HAnimJoint200)
HAnimJoint201 = x3d.HAnimJoint()
HAnimJoint201.USE = "hanim_l_knee"

HAnimHumanoid43.joints.append(HAnimJoint201)
HAnimJoint202 = x3d.HAnimJoint()
HAnimJoint202.USE = "hanim_l_talocrural"

HAnimHumanoid43.joints.append(HAnimJoint202)
HAnimJoint203 = x3d.HAnimJoint()
HAnimJoint203.USE = "hanim_l_talocalcaneonavicular"

HAnimHumanoid43.joints.append(HAnimJoint203)
HAnimJoint204 = x3d.HAnimJoint()
HAnimJoint204.USE = "hanim_l_cuneonavicular_1"

HAnimHumanoid43.joints.append(HAnimJoint204)
HAnimJoint205 = x3d.HAnimJoint()
HAnimJoint205.USE = "hanim_l_tarsometatarsal_1"

HAnimHumanoid43.joints.append(HAnimJoint205)
HAnimJoint206 = x3d.HAnimJoint()
HAnimJoint206.USE = "hanim_l_metatarsophalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint206)
HAnimJoint207 = x3d.HAnimJoint()
HAnimJoint207.USE = "hanim_l_tarsal_interphalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint207)
HAnimJoint208 = x3d.HAnimJoint()
HAnimJoint208.USE = "hanim_l_cuneonavicular_2"

HAnimHumanoid43.joints.append(HAnimJoint208)
HAnimJoint209 = x3d.HAnimJoint()
HAnimJoint209.USE = "hanim_l_tarsometatarsal_2"

HAnimHumanoid43.joints.append(HAnimJoint209)
HAnimJoint210 = x3d.HAnimJoint()
HAnimJoint210.USE = "hanim_l_metatarsophalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint210)
HAnimJoint211 = x3d.HAnimJoint()
HAnimJoint211.USE = "hanim_l_tarsal_proximal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint211)
HAnimJoint212 = x3d.HAnimJoint()
HAnimJoint212.USE = "hanim_l_tarsal_distal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint212)
HAnimJoint213 = x3d.HAnimJoint()
HAnimJoint213.USE = "hanim_l_cuneonavicular_3"

HAnimHumanoid43.joints.append(HAnimJoint213)
HAnimJoint214 = x3d.HAnimJoint()
HAnimJoint214.USE = "hanim_l_tarsometatarsal_3"

HAnimHumanoid43.joints.append(HAnimJoint214)
HAnimJoint215 = x3d.HAnimJoint()
HAnimJoint215.USE = "hanim_l_metatarsophalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint215)
HAnimJoint216 = x3d.HAnimJoint()
HAnimJoint216.USE = "hanim_l_tarsal_proximal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint216)
HAnimJoint217 = x3d.HAnimJoint()
HAnimJoint217.USE = "hanim_l_tarsal_distal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint217)
HAnimJoint218 = x3d.HAnimJoint()
HAnimJoint218.USE = "hanim_l_calcaneocuboid"

HAnimHumanoid43.joints.append(HAnimJoint218)
HAnimJoint219 = x3d.HAnimJoint()
HAnimJoint219.USE = "hanim_l_transversetarsal"

HAnimHumanoid43.joints.append(HAnimJoint219)
HAnimJoint220 = x3d.HAnimJoint()
HAnimJoint220.USE = "hanim_l_tarsometatarsal_4"

HAnimHumanoid43.joints.append(HAnimJoint220)
HAnimJoint221 = x3d.HAnimJoint()
HAnimJoint221.USE = "hanim_l_metatarsophalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint221)
HAnimJoint222 = x3d.HAnimJoint()
HAnimJoint222.USE = "hanim_l_tarsal_proximal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint222)
HAnimJoint223 = x3d.HAnimJoint()
HAnimJoint223.USE = "hanim_l_tarsal_distal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint223)
HAnimJoint224 = x3d.HAnimJoint()
HAnimJoint224.USE = "hanim_l_tarsometatarsal_5"

HAnimHumanoid43.joints.append(HAnimJoint224)
HAnimJoint225 = x3d.HAnimJoint()
HAnimJoint225.USE = "hanim_l_metatarsophalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint225)
HAnimJoint226 = x3d.HAnimJoint()
HAnimJoint226.USE = "hanim_l_tarsal_proximal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint226)
HAnimJoint227 = x3d.HAnimJoint()
HAnimJoint227.USE = "hanim_l_tarsal_distal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint227)
HAnimJoint228 = x3d.HAnimJoint()
HAnimJoint228.USE = "hanim_r_hip"

HAnimHumanoid43.joints.append(HAnimJoint228)
HAnimJoint229 = x3d.HAnimJoint()
HAnimJoint229.USE = "hanim_r_knee"

HAnimHumanoid43.joints.append(HAnimJoint229)
HAnimJoint230 = x3d.HAnimJoint()
HAnimJoint230.USE = "hanim_r_talocrural"

HAnimHumanoid43.joints.append(HAnimJoint230)
HAnimJoint231 = x3d.HAnimJoint()
HAnimJoint231.USE = "hanim_r_talocalcaneonavicular"

HAnimHumanoid43.joints.append(HAnimJoint231)
HAnimJoint232 = x3d.HAnimJoint()
HAnimJoint232.USE = "hanim_r_cuneonavicular_1"

HAnimHumanoid43.joints.append(HAnimJoint232)
HAnimJoint233 = x3d.HAnimJoint()
HAnimJoint233.USE = "hanim_r_tarsometatarsal_1"

HAnimHumanoid43.joints.append(HAnimJoint233)
HAnimJoint234 = x3d.HAnimJoint()
HAnimJoint234.USE = "hanim_r_metatarsophalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint234)
HAnimJoint235 = x3d.HAnimJoint()
HAnimJoint235.USE = "hanim_r_tarsal_interphalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint235)
HAnimJoint236 = x3d.HAnimJoint()
HAnimJoint236.USE = "hanim_r_cuneonavicular_2"

HAnimHumanoid43.joints.append(HAnimJoint236)
HAnimJoint237 = x3d.HAnimJoint()
HAnimJoint237.USE = "hanim_r_tarsometatarsal_2"

HAnimHumanoid43.joints.append(HAnimJoint237)
HAnimJoint238 = x3d.HAnimJoint()
HAnimJoint238.USE = "hanim_r_metatarsophalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint238)
HAnimJoint239 = x3d.HAnimJoint()
HAnimJoint239.USE = "hanim_r_tarsal_proximal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint239)
HAnimJoint240 = x3d.HAnimJoint()
HAnimJoint240.USE = "hanim_r_tarsal_distal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint240)
HAnimJoint241 = x3d.HAnimJoint()
HAnimJoint241.USE = "hanim_r_cuneonavicular_3"

HAnimHumanoid43.joints.append(HAnimJoint241)
HAnimJoint242 = x3d.HAnimJoint()
HAnimJoint242.USE = "hanim_r_tarsometatarsal_3"

HAnimHumanoid43.joints.append(HAnimJoint242)
HAnimJoint243 = x3d.HAnimJoint()
HAnimJoint243.USE = "hanim_r_metatarsophalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint243)
HAnimJoint244 = x3d.HAnimJoint()
HAnimJoint244.USE = "hanim_r_tarsal_proximal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint244)
HAnimJoint245 = x3d.HAnimJoint()
HAnimJoint245.USE = "hanim_r_tarsal_distal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint245)
HAnimJoint246 = x3d.HAnimJoint()
HAnimJoint246.USE = "hanim_r_calcaneocuboid"

HAnimHumanoid43.joints.append(HAnimJoint246)
HAnimJoint247 = x3d.HAnimJoint()
HAnimJoint247.USE = "hanim_r_transversetarsal"

HAnimHumanoid43.joints.append(HAnimJoint247)
HAnimJoint248 = x3d.HAnimJoint()
HAnimJoint248.USE = "hanim_r_tarsometatarsal_4"

HAnimHumanoid43.joints.append(HAnimJoint248)
HAnimJoint249 = x3d.HAnimJoint()
HAnimJoint249.USE = "hanim_r_metatarsophalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint249)
HAnimJoint250 = x3d.HAnimJoint()
HAnimJoint250.USE = "hanim_r_tarsal_proximal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint250)
HAnimJoint251 = x3d.HAnimJoint()
HAnimJoint251.USE = "hanim_r_tarsal_distal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint251)
HAnimJoint252 = x3d.HAnimJoint()
HAnimJoint252.USE = "hanim_r_tarsometatarsal_5"

HAnimHumanoid43.joints.append(HAnimJoint252)
HAnimJoint253 = x3d.HAnimJoint()
HAnimJoint253.USE = "hanim_r_metatarsophalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint253)
HAnimJoint254 = x3d.HAnimJoint()
HAnimJoint254.USE = "hanim_r_tarsal_proximal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint254)
HAnimJoint255 = x3d.HAnimJoint()
HAnimJoint255.USE = "hanim_r_tarsal_distal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint255)
HAnimJoint256 = x3d.HAnimJoint()
HAnimJoint256.USE = "hanim_vl5"

HAnimHumanoid43.joints.append(HAnimJoint256)
HAnimJoint257 = x3d.HAnimJoint()
HAnimJoint257.USE = "hanim_vl4"

HAnimHumanoid43.joints.append(HAnimJoint257)
HAnimJoint258 = x3d.HAnimJoint()
HAnimJoint258.USE = "hanim_vl3"

HAnimHumanoid43.joints.append(HAnimJoint258)
HAnimJoint259 = x3d.HAnimJoint()
HAnimJoint259.USE = "hanim_vl2"

HAnimHumanoid43.joints.append(HAnimJoint259)
HAnimJoint260 = x3d.HAnimJoint()
HAnimJoint260.USE = "hanim_vl1"

HAnimHumanoid43.joints.append(HAnimJoint260)
HAnimJoint261 = x3d.HAnimJoint()
HAnimJoint261.USE = "hanim_vt12"

HAnimHumanoid43.joints.append(HAnimJoint261)
HAnimJoint262 = x3d.HAnimJoint()
HAnimJoint262.USE = "hanim_vt11"

HAnimHumanoid43.joints.append(HAnimJoint262)
HAnimJoint263 = x3d.HAnimJoint()
HAnimJoint263.USE = "hanim_vt10"

HAnimHumanoid43.joints.append(HAnimJoint263)
HAnimJoint264 = x3d.HAnimJoint()
HAnimJoint264.USE = "hanim_vt9"

HAnimHumanoid43.joints.append(HAnimJoint264)
HAnimJoint265 = x3d.HAnimJoint()
HAnimJoint265.USE = "hanim_vt8"

HAnimHumanoid43.joints.append(HAnimJoint265)
HAnimJoint266 = x3d.HAnimJoint()
HAnimJoint266.USE = "hanim_vt7"

HAnimHumanoid43.joints.append(HAnimJoint266)
HAnimJoint267 = x3d.HAnimJoint()
HAnimJoint267.USE = "hanim_vt6"

HAnimHumanoid43.joints.append(HAnimJoint267)
HAnimJoint268 = x3d.HAnimJoint()
HAnimJoint268.USE = "hanim_vt5"

HAnimHumanoid43.joints.append(HAnimJoint268)
HAnimJoint269 = x3d.HAnimJoint()
HAnimJoint269.USE = "hanim_vt4"

HAnimHumanoid43.joints.append(HAnimJoint269)
HAnimJoint270 = x3d.HAnimJoint()
HAnimJoint270.USE = "hanim_vt3"

HAnimHumanoid43.joints.append(HAnimJoint270)
HAnimJoint271 = x3d.HAnimJoint()
HAnimJoint271.USE = "hanim_vt2"

HAnimHumanoid43.joints.append(HAnimJoint271)
HAnimJoint272 = x3d.HAnimJoint()
HAnimJoint272.USE = "hanim_vt1"

HAnimHumanoid43.joints.append(HAnimJoint272)
HAnimJoint273 = x3d.HAnimJoint()
HAnimJoint273.USE = "hanim_vc7"

HAnimHumanoid43.joints.append(HAnimJoint273)
HAnimJoint274 = x3d.HAnimJoint()
HAnimJoint274.USE = "hanim_vc6"

HAnimHumanoid43.joints.append(HAnimJoint274)
HAnimJoint275 = x3d.HAnimJoint()
HAnimJoint275.USE = "hanim_vc5"

HAnimHumanoid43.joints.append(HAnimJoint275)
HAnimJoint276 = x3d.HAnimJoint()
HAnimJoint276.USE = "hanim_vc4"

HAnimHumanoid43.joints.append(HAnimJoint276)
HAnimJoint277 = x3d.HAnimJoint()
HAnimJoint277.USE = "hanim_vc3"

HAnimHumanoid43.joints.append(HAnimJoint277)
HAnimJoint278 = x3d.HAnimJoint()
HAnimJoint278.USE = "hanim_vc2"

HAnimHumanoid43.joints.append(HAnimJoint278)
HAnimJoint279 = x3d.HAnimJoint()
HAnimJoint279.USE = "hanim_vc1"

HAnimHumanoid43.joints.append(HAnimJoint279)
HAnimJoint280 = x3d.HAnimJoint()
HAnimJoint280.USE = "hanim_skullbase"

HAnimHumanoid43.joints.append(HAnimJoint280)
HAnimJoint281 = x3d.HAnimJoint()
HAnimJoint281.USE = "hanim_l_eyelid_joint"

HAnimHumanoid43.joints.append(HAnimJoint281)
HAnimJoint282 = x3d.HAnimJoint()
HAnimJoint282.USE = "hanim_r_eyelid_joint"

HAnimHumanoid43.joints.append(HAnimJoint282)
HAnimJoint283 = x3d.HAnimJoint()
HAnimJoint283.USE = "hanim_l_eyeball_joint"

HAnimHumanoid43.joints.append(HAnimJoint283)
HAnimJoint284 = x3d.HAnimJoint()
HAnimJoint284.USE = "hanim_r_eyeball_joint"

HAnimHumanoid43.joints.append(HAnimJoint284)
HAnimJoint285 = x3d.HAnimJoint()
HAnimJoint285.USE = "hanim_l_eyebrow_joint"

HAnimHumanoid43.joints.append(HAnimJoint285)
HAnimJoint286 = x3d.HAnimJoint()
HAnimJoint286.USE = "hanim_r_eyebrow_joint"

HAnimHumanoid43.joints.append(HAnimJoint286)
HAnimJoint287 = x3d.HAnimJoint()
HAnimJoint287.USE = "hanim_temporomandibular"

HAnimHumanoid43.joints.append(HAnimJoint287)
HAnimJoint288 = x3d.HAnimJoint()
HAnimJoint288.USE = "hanim_l_sternoclavicular"

HAnimHumanoid43.joints.append(HAnimJoint288)
HAnimJoint289 = x3d.HAnimJoint()
HAnimJoint289.USE = "hanim_l_acromioclavicular"

HAnimHumanoid43.joints.append(HAnimJoint289)
HAnimJoint290 = x3d.HAnimJoint()
HAnimJoint290.USE = "hanim_l_shoulder"

HAnimHumanoid43.joints.append(HAnimJoint290)
HAnimJoint291 = x3d.HAnimJoint()
HAnimJoint291.USE = "hanim_l_elbow"

HAnimHumanoid43.joints.append(HAnimJoint291)
HAnimJoint292 = x3d.HAnimJoint()
HAnimJoint292.USE = "hanim_l_radiocarpal"

HAnimHumanoid43.joints.append(HAnimJoint292)
HAnimJoint293 = x3d.HAnimJoint()
HAnimJoint293.USE = "hanim_l_midcarpal_1"

HAnimHumanoid43.joints.append(HAnimJoint293)
HAnimJoint294 = x3d.HAnimJoint()
HAnimJoint294.USE = "hanim_l_carpometacarpal_1"

HAnimHumanoid43.joints.append(HAnimJoint294)
HAnimJoint295 = x3d.HAnimJoint()
HAnimJoint295.USE = "hanim_l_metacarpophalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint295)
HAnimJoint296 = x3d.HAnimJoint()
HAnimJoint296.USE = "hanim_l_carpal_interphalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint296)
HAnimJoint297 = x3d.HAnimJoint()
HAnimJoint297.USE = "hanim_l_midcarpal_2"

HAnimHumanoid43.joints.append(HAnimJoint297)
HAnimJoint298 = x3d.HAnimJoint()
HAnimJoint298.USE = "hanim_l_carpometacarpal_2"

HAnimHumanoid43.joints.append(HAnimJoint298)
HAnimJoint299 = x3d.HAnimJoint()
HAnimJoint299.USE = "hanim_l_metacarpophalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint299)
HAnimJoint300 = x3d.HAnimJoint()
HAnimJoint300.USE = "hanim_l_carpal_proximal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint300)
HAnimJoint301 = x3d.HAnimJoint()
HAnimJoint301.USE = "hanim_l_carpal_distal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint301)
HAnimJoint302 = x3d.HAnimJoint()
HAnimJoint302.USE = "hanim_l_midcarpal_3"

HAnimHumanoid43.joints.append(HAnimJoint302)
HAnimJoint303 = x3d.HAnimJoint()
HAnimJoint303.USE = "hanim_l_carpometacarpal_3"

HAnimHumanoid43.joints.append(HAnimJoint303)
HAnimJoint304 = x3d.HAnimJoint()
HAnimJoint304.USE = "hanim_l_metacarpophalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint304)
HAnimJoint305 = x3d.HAnimJoint()
HAnimJoint305.USE = "hanim_l_carpal_proximal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint305)
HAnimJoint306 = x3d.HAnimJoint()
HAnimJoint306.USE = "hanim_l_carpal_distal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint306)
HAnimJoint307 = x3d.HAnimJoint()
HAnimJoint307.USE = "hanim_l_midcarpal_4_5"

HAnimHumanoid43.joints.append(HAnimJoint307)
HAnimJoint308 = x3d.HAnimJoint()
HAnimJoint308.USE = "hanim_l_carpometacarpal_4"

HAnimHumanoid43.joints.append(HAnimJoint308)
HAnimJoint309 = x3d.HAnimJoint()
HAnimJoint309.USE = "hanim_l_metacarpophalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint309)
HAnimJoint310 = x3d.HAnimJoint()
HAnimJoint310.USE = "hanim_l_carpal_proximal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint310)
HAnimJoint311 = x3d.HAnimJoint()
HAnimJoint311.USE = "hanim_l_carpal_distal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint311)
HAnimJoint312 = x3d.HAnimJoint()
HAnimJoint312.USE = "hanim_l_carpometacarpal_5"

HAnimHumanoid43.joints.append(HAnimJoint312)
HAnimJoint313 = x3d.HAnimJoint()
HAnimJoint313.USE = "hanim_l_metacarpophalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint313)
HAnimJoint314 = x3d.HAnimJoint()
HAnimJoint314.USE = "hanim_l_carpal_proximal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint314)
HAnimJoint315 = x3d.HAnimJoint()
HAnimJoint315.USE = "hanim_l_carpal_distal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint315)
HAnimJoint316 = x3d.HAnimJoint()
HAnimJoint316.USE = "hanim_r_sternoclavicular"

HAnimHumanoid43.joints.append(HAnimJoint316)
HAnimJoint317 = x3d.HAnimJoint()
HAnimJoint317.USE = "hanim_r_acromioclavicular"

HAnimHumanoid43.joints.append(HAnimJoint317)
HAnimJoint318 = x3d.HAnimJoint()
HAnimJoint318.USE = "hanim_r_shoulder"

HAnimHumanoid43.joints.append(HAnimJoint318)
HAnimJoint319 = x3d.HAnimJoint()
HAnimJoint319.USE = "hanim_r_elbow"

HAnimHumanoid43.joints.append(HAnimJoint319)
HAnimJoint320 = x3d.HAnimJoint()
HAnimJoint320.USE = "hanim_r_radiocarpal"

HAnimHumanoid43.joints.append(HAnimJoint320)
HAnimJoint321 = x3d.HAnimJoint()
HAnimJoint321.USE = "hanim_r_midcarpal_1"

HAnimHumanoid43.joints.append(HAnimJoint321)
HAnimJoint322 = x3d.HAnimJoint()
HAnimJoint322.USE = "hanim_r_carpometacarpal_1"

HAnimHumanoid43.joints.append(HAnimJoint322)
HAnimJoint323 = x3d.HAnimJoint()
HAnimJoint323.USE = "hanim_r_metacarpophalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint323)
HAnimJoint324 = x3d.HAnimJoint()
HAnimJoint324.USE = "hanim_r_carpal_interphalangeal_1"

HAnimHumanoid43.joints.append(HAnimJoint324)
HAnimJoint325 = x3d.HAnimJoint()
HAnimJoint325.USE = "hanim_r_midcarpal_2"

HAnimHumanoid43.joints.append(HAnimJoint325)
HAnimJoint326 = x3d.HAnimJoint()
HAnimJoint326.USE = "hanim_r_carpometacarpal_2"

HAnimHumanoid43.joints.append(HAnimJoint326)
HAnimJoint327 = x3d.HAnimJoint()
HAnimJoint327.USE = "hanim_r_metacarpophalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint327)
HAnimJoint328 = x3d.HAnimJoint()
HAnimJoint328.USE = "hanim_r_carpal_proximal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint328)
HAnimJoint329 = x3d.HAnimJoint()
HAnimJoint329.USE = "hanim_r_carpal_distal_interphalangeal_2"

HAnimHumanoid43.joints.append(HAnimJoint329)
HAnimJoint330 = x3d.HAnimJoint()
HAnimJoint330.USE = "hanim_r_midcarpal_3"

HAnimHumanoid43.joints.append(HAnimJoint330)
HAnimJoint331 = x3d.HAnimJoint()
HAnimJoint331.USE = "hanim_r_carpometacarpal_3"

HAnimHumanoid43.joints.append(HAnimJoint331)
HAnimJoint332 = x3d.HAnimJoint()
HAnimJoint332.USE = "hanim_r_metacarpophalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint332)
HAnimJoint333 = x3d.HAnimJoint()
HAnimJoint333.USE = "hanim_r_carpal_proximal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint333)
HAnimJoint334 = x3d.HAnimJoint()
HAnimJoint334.USE = "hanim_r_carpal_distal_interphalangeal_3"

HAnimHumanoid43.joints.append(HAnimJoint334)
HAnimJoint335 = x3d.HAnimJoint()
HAnimJoint335.USE = "hanim_r_midcarpal_4_5"

HAnimHumanoid43.joints.append(HAnimJoint335)
HAnimJoint336 = x3d.HAnimJoint()
HAnimJoint336.USE = "hanim_r_carpometacarpal_4"

HAnimHumanoid43.joints.append(HAnimJoint336)
HAnimJoint337 = x3d.HAnimJoint()
HAnimJoint337.USE = "hanim_r_metacarpophalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint337)
HAnimJoint338 = x3d.HAnimJoint()
HAnimJoint338.USE = "hanim_r_carpal_proximal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint338)
HAnimJoint339 = x3d.HAnimJoint()
HAnimJoint339.USE = "hanim_r_carpal_distal_interphalangeal_4"

HAnimHumanoid43.joints.append(HAnimJoint339)
HAnimJoint340 = x3d.HAnimJoint()
HAnimJoint340.USE = "hanim_r_carpometacarpal_5"

HAnimHumanoid43.joints.append(HAnimJoint340)
HAnimJoint341 = x3d.HAnimJoint()
HAnimJoint341.USE = "hanim_r_metacarpophalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint341)
HAnimJoint342 = x3d.HAnimJoint()
HAnimJoint342.USE = "hanim_r_carpal_proximal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint342)
HAnimJoint343 = x3d.HAnimJoint()
HAnimJoint343.USE = "hanim_r_carpal_distal_interphalangeal_5"

HAnimHumanoid43.joints.append(HAnimJoint343)

Scene11.children.append(HAnimHumanoid43)

X3D0.Scene = Scene11
f = open("../data/StandardHumanoidNoSegSite.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/StandardHumanoidNoSegSite.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
