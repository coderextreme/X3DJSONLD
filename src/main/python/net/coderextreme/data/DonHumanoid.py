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
meta3.content = "DonHumanoid.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "identifier"
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/DonHumanoid.x3d"

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
Transform19.translation = [0,2.1,0]
Shape20 = x3d.Shape()
Shape20.DEF = "HAnimJointShape"
Sphere21 = x3d.Sphere()
Sphere21.radius = 0.02

Shape20.geometry = Sphere21
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.DEF = "HAnimJointMaterial"
Material23.diffuseColor = [0,0,0]

Appearance22.material = Material23

Shape20.appearance = Appearance22

Transform19.children.append(Shape20)

Transform18.children.append(Transform19)
Transform24 = x3d.Transform()
Transform24.translation = [0,2.05,0]
Shape25 = x3d.Shape()
Shape25.DEF = "HAnimSegmentLine"
LineSet26 = x3d.LineSet()
LineSet26.vertexCount = [2]
ColorRGBA27 = x3d.ColorRGBA()
ColorRGBA27.DEF = "HAnimSegmentLineColorRGBA"

LineSet26.color = ColorRGBA27
Coordinate28 = x3d.Coordinate()

LineSet26.coord = Coordinate28

Shape25.geometry = LineSet26

Transform24.children.append(Shape25)

Transform18.children.append(Transform24)
Transform29 = x3d.Transform()
Transform29.translation = [0,2.1,0]
Shape30 = x3d.Shape()
Shape30.DEF = "HAnimSiteShape"
IndexedFaceSet31 = x3d.IndexedFaceSet()
IndexedFaceSet31.DEF = "DiamondIFS"
IndexedFaceSet31.creaseAngle = 0.5
IndexedFaceSet31.solid = False
IndexedFaceSet31.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
ColorRGBA32 = x3d.ColorRGBA()
ColorRGBA32.DEF = "HAnimSiteColorRGBA"

IndexedFaceSet31.color = ColorRGBA32
Coordinate33 = x3d.Coordinate()

IndexedFaceSet31.coord = Coordinate33

Shape30.geometry = IndexedFaceSet31
Appearance34 = x3d.Appearance()
Material35 = x3d.Material()
Material35.diffuseColor = [1,1,1]
Material35.transparency = 1

Appearance34.material = Material35

Shape30.appearance = Appearance34

Transform29.children.append(Shape30)

Transform18.children.append(Transform29)

Group17.children.append(Transform18)

Scene11.children.append(Group17)
NavigationInfo36 = x3d.NavigationInfo()
NavigationInfo36.speed = 1.5

Scene11.children.append(NavigationInfo36)
Viewpoint37 = x3d.Viewpoint()
Viewpoint37.position = [0,1,3]
Viewpoint37.centerOfRotation = [0,1,0]
Viewpoint37.description = "default"

Scene11.children.append(Viewpoint37)
HAnimHumanoid38 = x3d.HAnimHumanoid()
HAnimHumanoid38.name = "HAnim"
HAnimHumanoid38.DEF = "hanim_HAnim"
HAnimHumanoid38.info = ["humanoidVersion=2.0"]
HAnimHumanoid38.version = "2.0"
"""<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)"""
"""</LOD>"""
Shape39 = x3d.Shape()
Shape39.DEF = "SkinShape"
IndexedFaceSet40 = x3d.IndexedFaceSet()
IndexedFaceSet40.coordIndex = [0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]
IndexedFaceSet40.creaseAngle = 3.1
Coordinate41 = x3d.Coordinate()
Coordinate41.DEF = "TheSkinCoord"

IndexedFaceSet40.coord = Coordinate41
Color42 = x3d.Color()

IndexedFaceSet40.color = Color42

Shape39.geometry = IndexedFaceSet40
Appearance43 = x3d.Appearance()
Appearance43.DEF = "SkinAppearance"
ImageTexture44 = x3d.ImageTexture()
ImageTexture44.DEF = "zBlueSpiralBkg2"
ImageTexture44.description = "Blue Spiral Pattern"
ImageTexture44.url = ["../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]

Appearance43.texture = ImageTexture44
Material45 = x3d.Material()
Material45.DEF = "SkinMaterial"
Material45.ambientIntensity = 0.6
Material45.diffuseColor = [1,1,1]
Material45.shininess = 0.6
Material45.transparency = 1

Appearance43.material = Material45

Shape39.appearance = Appearance43

HAnimHumanoid38.skin.append(Shape39)
Coordinate46 = x3d.Coordinate()
Coordinate46.USE = "TheSkinCoord"

HAnimHumanoid38.skinCoord = Coordinate46
HAnimJoint47 = x3d.HAnimJoint()
HAnimJoint47.name = "humanoid_root"
HAnimJoint47.DEF = "hanim_humanoid_root"
HAnimJoint47.center = [0,0.824,0.0277]
HAnimJoint47.ulimit = [0,0,0]
HAnimJoint47.llimit = [0,0,0]
HAnimSegment48 = x3d.HAnimSegment()
HAnimSegment48.name = "sacrum"
HAnimSegment48.DEF = "hanim_sacrum"
Transform49 = x3d.Transform()
Transform49.translation = [0,0.824,0.0277]
Transform50 = x3d.Transform()
"""Empty Transform"""
Shape51 = x3d.Shape()
Shape51.USE = "HAnimJointShape"

Transform50.children.append(Shape51)

Transform49.children.append(Transform50)

HAnimSegment48.children.append(Transform49)
Shape52 = x3d.Shape()
LineSet53 = x3d.LineSet()
LineSet53.vertexCount = [2]
Coordinate54 = x3d.Coordinate()

LineSet53.coord = Coordinate54
"""from humanoid_root to sacroiliac vertices 2"""
ColorRGBA55 = x3d.ColorRGBA()
ColorRGBA55.USE = "HAnimSegmentLineColorRGBA"

LineSet53.color = ColorRGBA55

Shape52.geometry = LineSet53

HAnimSegment48.children.append(Shape52)
Shape56 = x3d.Shape()
LineSet57 = x3d.LineSet()
LineSet57.vertexCount = [2]
Coordinate58 = x3d.Coordinate()

LineSet57.coord = Coordinate58
"""from humanoid_root to vl5 vertices 2"""
ColorRGBA59 = x3d.ColorRGBA()
ColorRGBA59.USE = "HAnimSegmentLineColorRGBA"

LineSet57.color = ColorRGBA59

Shape56.geometry = LineSet57

HAnimSegment48.children.append(Shape56)

HAnimJoint47.children.append(HAnimSegment48)
HAnimJoint60 = x3d.HAnimJoint()
HAnimJoint60.name = "sacroiliac"
HAnimJoint60.DEF = "hanim_sacroiliac"
HAnimJoint60.center = [0,0.9149,0.0016]
HAnimJoint60.ulimit = [0,0,0]
HAnimJoint60.llimit = [0,0,0]
HAnimSegment61 = x3d.HAnimSegment()
HAnimSegment61.name = "pelvis"
HAnimSegment61.DEF = "hanim_pelvis"
Transform62 = x3d.Transform()
Transform62.translation = [0,0.9149,0.0016]
Transform63 = x3d.Transform()
"""Empty Transform"""
Shape64 = x3d.Shape()
Shape64.USE = "HAnimJointShape"

Transform63.children.append(Shape64)

Transform62.children.append(Transform63)

HAnimSegment61.children.append(Transform62)
Shape65 = x3d.Shape()
LineSet66 = x3d.LineSet()
LineSet66.vertexCount = [2]
Coordinate67 = x3d.Coordinate()

LineSet66.coord = Coordinate67
"""from sacroiliac to l_hip vertices 2"""
ColorRGBA68 = x3d.ColorRGBA()
ColorRGBA68.USE = "HAnimSegmentLineColorRGBA"

LineSet66.color = ColorRGBA68

Shape65.geometry = LineSet66

HAnimSegment61.children.append(Shape65)
HAnimSite69 = x3d.HAnimSite()
HAnimSite69.name = "buttocks_standing_wall_contact_point"
HAnimSite69.DEF = "hanim_buttocks_standing_wall_contact_point"
TouchSensor70 = x3d.TouchSensor()
TouchSensor70.description = "HAnimSite 93 buttocks_standing_wall_contact_point"

HAnimSite69.children.append(TouchSensor70)
Shape71 = x3d.Shape()
Shape71.USE = "HAnimSiteShape"

HAnimSite69.children.append(Shape71)
Billboard72 = x3d.Billboard()
Shape73 = x3d.Shape()
Text74 = x3d.Text()
Text74.string = ["93"]
FontStyle75 = x3d.FontStyle()
FontStyle75.size = 0.035

Text74.fontStyle = FontStyle75

Shape73.geometry = Text74

Billboard72.children.append(Shape73)

HAnimSite69.children.append(Billboard72)

HAnimSegment61.children.append(HAnimSite69)
HAnimSite76 = x3d.HAnimSite()
HAnimSite76.name = "crotch"
HAnimSite76.DEF = "hanim_crotch"
HAnimSite76.translation = [0.0034,0.8266,0.0257]
TouchSensor77 = x3d.TouchSensor()
TouchSensor77.description = "HAnimSite 38 crotch"

HAnimSite76.children.append(TouchSensor77)
Shape78 = x3d.Shape()
Shape78.USE = "HAnimSiteShape"

HAnimSite76.children.append(Shape78)
Billboard79 = x3d.Billboard()
Shape80 = x3d.Shape()
Text81 = x3d.Text()
Text81.string = ["38"]
FontStyle82 = x3d.FontStyle()
FontStyle82.size = 0.035

Text81.fontStyle = FontStyle82

Shape80.geometry = Text81

Billboard79.children.append(Shape80)

HAnimSite76.children.append(Billboard79)

HAnimSegment61.children.append(HAnimSite76)
HAnimSite83 = x3d.HAnimSite()
HAnimSite83.name = "l_asis"
HAnimSite83.DEF = "hanim_l_asis"
HAnimSite83.translation = [0.0925,0.9983,0.1052]
TouchSensor84 = x3d.TouchSensor()
TouchSensor84.description = "HAnimSite 32 l_asis"

HAnimSite83.children.append(TouchSensor84)
Shape85 = x3d.Shape()
Shape85.USE = "HAnimSiteShape"

HAnimSite83.children.append(Shape85)
Billboard86 = x3d.Billboard()
Shape87 = x3d.Shape()
Text88 = x3d.Text()
Text88.string = ["32"]
FontStyle89 = x3d.FontStyle()
FontStyle89.size = 0.035

Text88.fontStyle = FontStyle89

Shape87.geometry = Text88

Billboard86.children.append(Shape87)

HAnimSite83.children.append(Billboard86)

HAnimSegment61.children.append(HAnimSite83)
HAnimSite90 = x3d.HAnimSite()
HAnimSite90.name = "l_iliocristale"
HAnimSite90.DEF = "hanim_l_iliocristale"
HAnimSite90.translation = [0.1612,1.0537,0.0008]
TouchSensor91 = x3d.TouchSensor()
TouchSensor91.description = "HAnimSite 33 l_iliocristale"

HAnimSite90.children.append(TouchSensor91)
Shape92 = x3d.Shape()
Shape92.USE = "HAnimSiteShape"

HAnimSite90.children.append(Shape92)
Billboard93 = x3d.Billboard()
Shape94 = x3d.Shape()
Text95 = x3d.Text()
Text95.string = ["33"]
FontStyle96 = x3d.FontStyle()
FontStyle96.size = 0.035

Text95.fontStyle = FontStyle96

Shape94.geometry = Text95

Billboard93.children.append(Shape94)

HAnimSite90.children.append(Billboard93)

HAnimSegment61.children.append(HAnimSite90)
HAnimSite97 = x3d.HAnimSite()
HAnimSite97.name = "l_psis"
HAnimSite97.DEF = "hanim_l_psis"
HAnimSite97.translation = [0.0774,1.019,-0.1151]
TouchSensor98 = x3d.TouchSensor()
TouchSensor98.description = "HAnimSite 34 l_psis"

HAnimSite97.children.append(TouchSensor98)
Shape99 = x3d.Shape()
Shape99.USE = "HAnimSiteShape"

HAnimSite97.children.append(Shape99)
Billboard100 = x3d.Billboard()
Shape101 = x3d.Shape()
Text102 = x3d.Text()
Text102.string = ["34"]
FontStyle103 = x3d.FontStyle()
FontStyle103.size = 0.035

Text102.fontStyle = FontStyle103

Shape101.geometry = Text102

Billboard100.children.append(Shape101)

HAnimSite97.children.append(Billboard100)

HAnimSegment61.children.append(HAnimSite97)
HAnimSite104 = x3d.HAnimSite()
HAnimSite104.name = "l_trochanterion"
HAnimSite104.DEF = "hanim_l_trochanterion"
HAnimSite104.translation = [0.1677,0.8336,0.0303]
TouchSensor105 = x3d.TouchSensor()
TouchSensor105.description = "HAnimSite 42 l_trochanterion"

HAnimSite104.children.append(TouchSensor105)
Shape106 = x3d.Shape()
Shape106.USE = "HAnimSiteShape"

HAnimSite104.children.append(Shape106)
Billboard107 = x3d.Billboard()
Shape108 = x3d.Shape()
Text109 = x3d.Text()
Text109.string = ["42"]
FontStyle110 = x3d.FontStyle()
FontStyle110.size = 0.035

Text109.fontStyle = FontStyle110

Shape108.geometry = Text109

Billboard107.children.append(Shape108)

HAnimSite104.children.append(Billboard107)

HAnimSegment61.children.append(HAnimSite104)
HAnimSite111 = x3d.HAnimSite()
HAnimSite111.name = "r_asis"
HAnimSite111.DEF = "hanim_r_asis"
HAnimSite111.translation = [-0.0887,1.0021,0.1112]
TouchSensor112 = x3d.TouchSensor()
TouchSensor112.description = "HAnimSite 35 r_asis"

HAnimSite111.children.append(TouchSensor112)
Shape113 = x3d.Shape()
Shape113.USE = "HAnimSiteShape"

HAnimSite111.children.append(Shape113)
Billboard114 = x3d.Billboard()
Shape115 = x3d.Shape()
Text116 = x3d.Text()
Text116.string = ["35"]
FontStyle117 = x3d.FontStyle()
FontStyle117.size = 0.035

Text116.fontStyle = FontStyle117

Shape115.geometry = Text116

Billboard114.children.append(Shape115)

HAnimSite111.children.append(Billboard114)

HAnimSegment61.children.append(HAnimSite111)
HAnimSite118 = x3d.HAnimSite()
HAnimSite118.name = "r_iliocristale"
HAnimSite118.DEF = "hanim_r_iliocristale"
HAnimSite118.translation = [-0.1525,1.0628,0.0035]
TouchSensor119 = x3d.TouchSensor()
TouchSensor119.description = "HAnimSite 36 r_iliocristale"

HAnimSite118.children.append(TouchSensor119)
Shape120 = x3d.Shape()
Shape120.USE = "HAnimSiteShape"

HAnimSite118.children.append(Shape120)
Billboard121 = x3d.Billboard()
Shape122 = x3d.Shape()
Text123 = x3d.Text()
Text123.string = ["36"]
FontStyle124 = x3d.FontStyle()
FontStyle124.size = 0.035

Text123.fontStyle = FontStyle124

Shape122.geometry = Text123

Billboard121.children.append(Shape122)

HAnimSite118.children.append(Billboard121)

HAnimSegment61.children.append(HAnimSite118)
HAnimSite125 = x3d.HAnimSite()
HAnimSite125.name = "r_psis"
HAnimSite125.DEF = "hanim_r_psis"
HAnimSite125.translation = [-0.0716,1.019,-0.1138]
TouchSensor126 = x3d.TouchSensor()
TouchSensor126.description = "HAnimSite 37 r_psis"

HAnimSite125.children.append(TouchSensor126)
Shape127 = x3d.Shape()
Shape127.USE = "HAnimSiteShape"

HAnimSite125.children.append(Shape127)
Billboard128 = x3d.Billboard()
Shape129 = x3d.Shape()
Text130 = x3d.Text()
Text130.string = ["37"]
FontStyle131 = x3d.FontStyle()
FontStyle131.size = 0.035

Text130.fontStyle = FontStyle131

Shape129.geometry = Text130

Billboard128.children.append(Shape129)

HAnimSite125.children.append(Billboard128)

HAnimSegment61.children.append(HAnimSite125)
HAnimSite132 = x3d.HAnimSite()
HAnimSite132.name = "r_trochanterion"
HAnimSite132.DEF = "hanim_r_trochanterion"
HAnimSite132.translation = [-0.1689,0.8419,0.0352]
TouchSensor133 = x3d.TouchSensor()
TouchSensor133.description = "HAnimSite 46 r_trochanterion"

HAnimSite132.children.append(TouchSensor133)
Shape134 = x3d.Shape()
Shape134.USE = "HAnimSiteShape"

HAnimSite132.children.append(Shape134)
Billboard135 = x3d.Billboard()
Shape136 = x3d.Shape()
Text137 = x3d.Text()
Text137.string = ["46"]
FontStyle138 = x3d.FontStyle()
FontStyle138.size = 0.035

Text137.fontStyle = FontStyle138

Shape136.geometry = Text137

Billboard135.children.append(Shape136)

HAnimSite132.children.append(Billboard135)

HAnimSegment61.children.append(HAnimSite132)
Shape139 = x3d.Shape()
LineSet140 = x3d.LineSet()
LineSet140.vertexCount = [2]
Coordinate141 = x3d.Coordinate()

LineSet140.coord = Coordinate141
"""from sacroiliac to r_hip vertices 2"""
ColorRGBA142 = x3d.ColorRGBA()
ColorRGBA142.USE = "HAnimSegmentLineColorRGBA"

LineSet140.color = ColorRGBA142

Shape139.geometry = LineSet140

HAnimSegment61.children.append(Shape139)

HAnimJoint60.children.append(HAnimSegment61)
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
Transform145.translation = [0.0961,0.9124,-0.0001]
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
HAnimSite152.name = "l_femoral_lateral_epicondyles"
HAnimSite152.DEF = "hanim_l_femoral_lateral_epicondyles"
HAnimSite152.translation = [0.1598,0.4967,0.0297]
TouchSensor153 = x3d.TouchSensor()
TouchSensor153.description = "HAnimSite 40 l_femoral_lateral_epicondyles"

HAnimSite152.children.append(TouchSensor153)
Shape154 = x3d.Shape()
Shape154.USE = "HAnimSiteShape"

HAnimSite152.children.append(Shape154)
Billboard155 = x3d.Billboard()
Shape156 = x3d.Shape()
Text157 = x3d.Text()
Text157.string = ["40"]
FontStyle158 = x3d.FontStyle()
FontStyle158.size = 0.035

Text157.fontStyle = FontStyle158

Shape156.geometry = Text157

Billboard155.children.append(Shape156)

HAnimSite152.children.append(Billboard155)

HAnimSegment144.children.append(HAnimSite152)
HAnimSite159 = x3d.HAnimSite()
HAnimSite159.name = "l_femoral_medial_epicondyles"
HAnimSite159.DEF = "hanim_l_femoral_medial_epicondyles"
HAnimSite159.translation = [0.0398,0.4946,0.0303]
TouchSensor160 = x3d.TouchSensor()
TouchSensor160.description = "HAnimSite 39 l_femoral_medial_epicondyles"

HAnimSite159.children.append(TouchSensor160)
Shape161 = x3d.Shape()
Shape161.USE = "HAnimSiteShape"

HAnimSite159.children.append(Shape161)
Billboard162 = x3d.Billboard()
Shape163 = x3d.Shape()
Text164 = x3d.Text()
Text164.string = ["39"]
FontStyle165 = x3d.FontStyle()
FontStyle165.size = 0.035

Text164.fontStyle = FontStyle165

Shape163.geometry = Text164

Billboard162.children.append(Shape163)

HAnimSite159.children.append(Billboard162)

HAnimSegment144.children.append(HAnimSite159)
HAnimSite166 = x3d.HAnimSite()
HAnimSite166.name = "l_knee_crease"
HAnimSite166.DEF = "hanim_l_knee_crease"
HAnimSite166.translation = [0.0993,0.4881,-0.0309]
TouchSensor167 = x3d.TouchSensor()
TouchSensor167.description = "HAnimSite 90 l_knee_crease"

HAnimSite166.children.append(TouchSensor167)
Shape168 = x3d.Shape()
Shape168.USE = "HAnimSiteShape"

HAnimSite166.children.append(Shape168)
Billboard169 = x3d.Billboard()
Shape170 = x3d.Shape()
Text171 = x3d.Text()
Text171.string = ["90"]
FontStyle172 = x3d.FontStyle()
FontStyle172.size = 0.035

Text171.fontStyle = FontStyle172

Shape170.geometry = Text171

Billboard169.children.append(Shape170)

HAnimSite166.children.append(Billboard169)

HAnimSegment144.children.append(HAnimSite166)
HAnimSite173 = x3d.HAnimSite()
HAnimSite173.name = "l_suprapatella"
HAnimSite173.DEF = "hanim_l_suprapatella"
TouchSensor174 = x3d.TouchSensor()
TouchSensor174.description = "HAnimSite 41 l_suprapatella"

HAnimSite173.children.append(TouchSensor174)
Shape175 = x3d.Shape()
Shape175.USE = "HAnimSiteShape"

HAnimSite173.children.append(Shape175)
Billboard176 = x3d.Billboard()
Shape177 = x3d.Shape()
Text178 = x3d.Text()
Text178.string = ["41"]
FontStyle179 = x3d.FontStyle()
FontStyle179.size = 0.035

Text178.fontStyle = FontStyle179

Shape177.geometry = Text178

Billboard176.children.append(Shape177)

HAnimSite173.children.append(Billboard176)

HAnimSegment144.children.append(HAnimSite173)

HAnimJoint143.children.append(HAnimSegment144)
HAnimJoint180 = x3d.HAnimJoint()
HAnimJoint180.name = "l_knee"
HAnimJoint180.DEF = "hanim_l_knee"
HAnimJoint180.center = [0.104,0.4867,0.0308]
HAnimJoint180.ulimit = [0,0,0]
HAnimJoint180.llimit = [0,0,0]
HAnimSegment181 = x3d.HAnimSegment()
HAnimSegment181.name = "l_calf"
HAnimSegment181.DEF = "hanim_l_calf"
Transform182 = x3d.Transform()
Transform182.translation = [0.104,0.4867,0.0308]
Transform183 = x3d.Transform()
"""Empty Transform"""
Shape184 = x3d.Shape()
Shape184.USE = "HAnimJointShape"

Transform183.children.append(Shape184)

Transform182.children.append(Transform183)

HAnimSegment181.children.append(Transform182)
Shape185 = x3d.Shape()
LineSet186 = x3d.LineSet()
LineSet186.vertexCount = [2]
Coordinate187 = x3d.Coordinate()

LineSet186.coord = Coordinate187
"""from l_knee to l_talocrural vertices 2"""
ColorRGBA188 = x3d.ColorRGBA()
ColorRGBA188.USE = "HAnimSegmentLineColorRGBA"

LineSet186.color = ColorRGBA188

Shape185.geometry = LineSet186

HAnimSegment181.children.append(Shape185)
HAnimSite189 = x3d.HAnimSite()
HAnimSite189.name = "l_lateral_malleolus"
HAnimSite189.DEF = "hanim_l_lateral_malleolus"
HAnimSite189.translation = [0.1308,0.0597,-0.1032]
TouchSensor190 = x3d.TouchSensor()
TouchSensor190.description = "HAnimSite 49 l_lateral_malleolus"

HAnimSite189.children.append(TouchSensor190)
Shape191 = x3d.Shape()
Shape191.USE = "HAnimSiteShape"

HAnimSite189.children.append(Shape191)
Billboard192 = x3d.Billboard()
Shape193 = x3d.Shape()
Text194 = x3d.Text()
Text194.string = ["49"]
FontStyle195 = x3d.FontStyle()
FontStyle195.size = 0.035

Text194.fontStyle = FontStyle195

Shape193.geometry = Text194

Billboard192.children.append(Shape193)

HAnimSite189.children.append(Billboard192)

HAnimSegment181.children.append(HAnimSite189)
HAnimSite196 = x3d.HAnimSite()
HAnimSite196.name = "l_medial_malleolus"
HAnimSite196.DEF = "hanim_l_medial_malleolus"
HAnimSite196.translation = [0.089,0.0716,-0.0881]
TouchSensor197 = x3d.TouchSensor()
TouchSensor197.description = "HAnimSite 48 l_medial_malleolus"

HAnimSite196.children.append(TouchSensor197)
Shape198 = x3d.Shape()
Shape198.USE = "HAnimSiteShape"

HAnimSite196.children.append(Shape198)
Billboard199 = x3d.Billboard()
Shape200 = x3d.Shape()
Text201 = x3d.Text()
Text201.string = ["48"]
FontStyle202 = x3d.FontStyle()
FontStyle202.size = 0.035

Text201.fontStyle = FontStyle202

Shape200.geometry = Text201

Billboard199.children.append(Shape200)

HAnimSite196.children.append(Billboard199)

HAnimSegment181.children.append(HAnimSite196)
HAnimSite203 = x3d.HAnimSite()
HAnimSite203.name = "l_tibiale"
HAnimSite203.DEF = "hanim_l_tibiale"
TouchSensor204 = x3d.TouchSensor()
TouchSensor204.description = "HAnimSite 47 l_tibiale"

HAnimSite203.children.append(TouchSensor204)
Shape205 = x3d.Shape()
Shape205.USE = "HAnimSiteShape"

HAnimSite203.children.append(Shape205)
Billboard206 = x3d.Billboard()
Shape207 = x3d.Shape()
Text208 = x3d.Text()
Text208.string = ["47"]
FontStyle209 = x3d.FontStyle()
FontStyle209.size = 0.035

Text208.fontStyle = FontStyle209

Shape207.geometry = Text208

Billboard206.children.append(Shape207)

HAnimSite203.children.append(Billboard206)

HAnimSegment181.children.append(HAnimSite203)

HAnimJoint180.children.append(HAnimSegment181)
HAnimJoint210 = x3d.HAnimJoint()
HAnimJoint210.name = "l_talocrural"
HAnimJoint210.DEF = "hanim_l_talocrural"
HAnimJoint210.center = [0.1101,0.0656,-0.0736]
HAnimJoint210.ulimit = [0,0,0]
HAnimJoint210.llimit = [0,0,0]
HAnimSegment211 = x3d.HAnimSegment()
HAnimSegment211.name = "l_talus"
HAnimSegment211.DEF = "hanim_l_talus"
Transform212 = x3d.Transform()
Transform212.scale = [0.15,0.15,0.15]
Transform212.translation = [0.08,0.06,-0.025]
Transform212.rotation = [1,0,0,-1.57]
"""Transform left foot"""
Transform213 = x3d.Transform()
"""Empty Transform left foot"""
Shape214 = x3d.Shape()
Shape214.USE = "HAnimJointShape"

Transform213.children.append(Shape214)

Transform212.children.append(Transform213)

HAnimSegment211.children.append(Transform212)
Shape215 = x3d.Shape()
LineSet216 = x3d.LineSet()
LineSet216.vertexCount = [2]
Coordinate217 = x3d.Coordinate()

LineSet216.coord = Coordinate217
"""from l_talocrural to l_talocalcaneonavicular vertices 2"""
ColorRGBA218 = x3d.ColorRGBA()
ColorRGBA218.USE = "HAnimSegmentLineColorRGBA"

LineSet216.color = ColorRGBA218

Shape215.geometry = LineSet216

HAnimSegment211.children.append(Shape215)
HAnimSite219 = x3d.HAnimSite()
HAnimSite219.name = "l_calcaneus_posterior"
HAnimSite219.DEF = "hanim_l_calcaneus_posterior"
HAnimSite219.translation = [0.0974,0.0259,-0.1171]
TouchSensor220 = x3d.TouchSensor()
TouchSensor220.description = "HAnimSite 58 l_calcaneus_posterior"

HAnimSite219.children.append(TouchSensor220)
Shape221 = x3d.Shape()
Shape221.USE = "HAnimSiteShape"

HAnimSite219.children.append(Shape221)
Billboard222 = x3d.Billboard()
Shape223 = x3d.Shape()
Text224 = x3d.Text()
Text224.string = ["58"]
FontStyle225 = x3d.FontStyle()
FontStyle225.size = 0.035

Text224.fontStyle = FontStyle225

Shape223.geometry = Text224

Billboard222.children.append(Shape223)

HAnimSite219.children.append(Billboard222)

HAnimSegment211.children.append(HAnimSite219)
HAnimSite226 = x3d.HAnimSite()
HAnimSite226.name = "l_sphyrion"
HAnimSite226.DEF = "hanim_l_sphyrion"
HAnimSite226.translation = [0.089,0.0575,-0.0943]
TouchSensor227 = x3d.TouchSensor()
TouchSensor227.description = "HAnimSite 50 l_sphyrion"

HAnimSite226.children.append(TouchSensor227)
Shape228 = x3d.Shape()
Shape228.USE = "HAnimSiteShape"

HAnimSite226.children.append(Shape228)
Billboard229 = x3d.Billboard()
Shape230 = x3d.Shape()
Text231 = x3d.Text()
Text231.string = ["50"]
FontStyle232 = x3d.FontStyle()
FontStyle232.size = 0.035

Text231.fontStyle = FontStyle232

Shape230.geometry = Text231

Billboard229.children.append(Shape230)

HAnimSite226.children.append(Billboard229)

HAnimSegment211.children.append(HAnimSite226)
Shape233 = x3d.Shape()
LineSet234 = x3d.LineSet()
LineSet234.vertexCount = [2]
Coordinate235 = x3d.Coordinate()

LineSet234.coord = Coordinate235
"""from l_talocrural to l_calcaneocuboid vertices 2"""
ColorRGBA236 = x3d.ColorRGBA()
ColorRGBA236.USE = "HAnimSegmentLineColorRGBA"

LineSet234.color = ColorRGBA236

Shape233.geometry = LineSet234

HAnimSegment211.children.append(Shape233)

HAnimJoint210.children.append(HAnimSegment211)
HAnimJoint237 = x3d.HAnimJoint()
HAnimJoint237.name = "l_talocalcaneonavicular"
HAnimJoint237.DEF = "hanim_l_talocalcaneonavicular"
HAnimJoint237.center = [0.0781,0.0283,-0.097]
HAnimJoint237.ulimit = [0,0,0]
HAnimJoint237.llimit = [0,0,0]
HAnimSegment238 = x3d.HAnimSegment()
HAnimSegment238.name = "l_navicular"
HAnimSegment238.DEF = "hanim_l_navicular"
Transform239 = x3d.Transform()
Transform239.translation = [0.0781,0.0283,-0.097]
Transform240 = x3d.Transform()
"""Empty Transform"""
Shape241 = x3d.Shape()
Shape241.USE = "HAnimJointShape"

Transform240.children.append(Shape241)

Transform239.children.append(Transform240)

HAnimSegment238.children.append(Transform239)
Shape242 = x3d.Shape()
LineSet243 = x3d.LineSet()
LineSet243.vertexCount = [2]
Coordinate244 = x3d.Coordinate()

LineSet243.coord = Coordinate244
"""from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2"""
ColorRGBA245 = x3d.ColorRGBA()
ColorRGBA245.USE = "HAnimSegmentLineColorRGBA"

LineSet243.color = ColorRGBA245

Shape242.geometry = LineSet243

HAnimSegment238.children.append(Shape242)
Shape246 = x3d.Shape()
LineSet247 = x3d.LineSet()
LineSet247.vertexCount = [2]
Coordinate248 = x3d.Coordinate()

LineSet247.coord = Coordinate248
"""from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2"""
ColorRGBA249 = x3d.ColorRGBA()
ColorRGBA249.USE = "HAnimSegmentLineColorRGBA"

LineSet247.color = ColorRGBA249

Shape246.geometry = LineSet247

HAnimSegment238.children.append(Shape246)
Shape250 = x3d.Shape()
LineSet251 = x3d.LineSet()
LineSet251.vertexCount = [2]
Coordinate252 = x3d.Coordinate()

LineSet251.coord = Coordinate252
"""from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2"""
ColorRGBA253 = x3d.ColorRGBA()
ColorRGBA253.USE = "HAnimSegmentLineColorRGBA"

LineSet251.color = ColorRGBA253

Shape250.geometry = LineSet251

HAnimSegment238.children.append(Shape250)

HAnimJoint237.children.append(HAnimSegment238)
HAnimJoint254 = x3d.HAnimJoint()
HAnimJoint254.name = "l_cuneonavicular_1"
HAnimJoint254.DEF = "hanim_l_cuneonavicular_1"
HAnimJoint254.center = [0.0672,0.0235,-0.0835]
HAnimJoint254.ulimit = [0,0,0]
HAnimJoint254.llimit = [0,0,0]
HAnimSegment255 = x3d.HAnimSegment()
HAnimSegment255.name = "l_cuneiform_1"
HAnimSegment255.DEF = "hanim_l_cuneiform_1"
Transform256 = x3d.Transform()
Transform256.translation = [0.0672,0.0235,-0.0835]
Transform257 = x3d.Transform()
"""Empty Transform"""
Shape258 = x3d.Shape()
Shape258.USE = "HAnimJointShape"

Transform257.children.append(Shape258)

Transform256.children.append(Transform257)

HAnimSegment255.children.append(Transform256)
Shape259 = x3d.Shape()
LineSet260 = x3d.LineSet()
LineSet260.vertexCount = [2]
Coordinate261 = x3d.Coordinate()

LineSet260.coord = Coordinate261
"""from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2"""
ColorRGBA262 = x3d.ColorRGBA()
ColorRGBA262.USE = "HAnimSegmentLineColorRGBA"

LineSet260.color = ColorRGBA262

Shape259.geometry = LineSet260

HAnimSegment255.children.append(Shape259)

HAnimJoint254.children.append(HAnimSegment255)
HAnimJoint263 = x3d.HAnimJoint()
HAnimJoint263.name = "l_tarsometatarsal_1"
HAnimJoint263.DEF = "hanim_l_tarsometatarsal_1"
HAnimJoint263.center = [0.0644,0.0147,-0.0577]
HAnimJoint263.ulimit = [0,0,0]
HAnimJoint263.llimit = [0,0,0]
HAnimSegment264 = x3d.HAnimSegment()
HAnimSegment264.name = "l_metatarsal_1"
HAnimSegment264.DEF = "hanim_l_metatarsal_1"
Transform265 = x3d.Transform()
Transform265.translation = [0.0644,0.0147,-0.0577]
Transform266 = x3d.Transform()
"""Empty Transform"""
Shape267 = x3d.Shape()
Shape267.USE = "HAnimJointShape"

Transform266.children.append(Shape267)

Transform265.children.append(Transform266)

HAnimSegment264.children.append(Transform265)
Shape268 = x3d.Shape()
LineSet269 = x3d.LineSet()
LineSet269.vertexCount = [2]
Coordinate270 = x3d.Coordinate()

LineSet269.coord = Coordinate270
"""from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2"""
ColorRGBA271 = x3d.ColorRGBA()
ColorRGBA271.USE = "HAnimSegmentLineColorRGBA"

LineSet269.color = ColorRGBA271

Shape268.geometry = LineSet269

HAnimSegment264.children.append(Shape268)

HAnimJoint263.children.append(HAnimSegment264)
HAnimJoint272 = x3d.HAnimJoint()
HAnimJoint272.name = "l_metatarsophalangeal_1"
HAnimJoint272.DEF = "hanim_l_metatarsophalangeal_1"
HAnimJoint272.center = [0.0619,0.0059,-0.0083]
HAnimJoint272.ulimit = [0,0,0]
HAnimJoint272.llimit = [0,0,0]
HAnimSegment273 = x3d.HAnimSegment()
HAnimSegment273.name = "l_tarsal_proximal_phalanx_1"
HAnimSegment273.DEF = "hanim_l_tarsal_proximal_phalanx_1"
Transform274 = x3d.Transform()
Transform274.translation = [0.0619,0.0059,-0.0083]
Transform275 = x3d.Transform()
"""Empty Transform"""
Shape276 = x3d.Shape()
Shape276.USE = "HAnimJointShape"

Transform275.children.append(Shape276)

Transform274.children.append(Transform275)

HAnimSegment273.children.append(Transform274)
Shape277 = x3d.Shape()
LineSet278 = x3d.LineSet()
LineSet278.vertexCount = [2]
Coordinate279 = x3d.Coordinate()

LineSet278.coord = Coordinate279
"""from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2"""
ColorRGBA280 = x3d.ColorRGBA()
ColorRGBA280.USE = "HAnimSegmentLineColorRGBA"

LineSet278.color = ColorRGBA280

Shape277.geometry = LineSet278

HAnimSegment273.children.append(Shape277)
HAnimSite281 = x3d.HAnimSite()
HAnimSite281.name = "l_metatarsal_phalanx_1"
HAnimSite281.DEF = "hanim_l_metatarsal_phalanx_1"
TouchSensor282 = x3d.TouchSensor()
TouchSensor282.description = "HAnimSite 55 l_metatarsal_phalanx_1"

HAnimSite281.children.append(TouchSensor282)
Shape283 = x3d.Shape()
Shape283.USE = "HAnimSiteShape"

HAnimSite281.children.append(Shape283)
Billboard284 = x3d.Billboard()
Shape285 = x3d.Shape()
Text286 = x3d.Text()
Text286.string = ["55"]
FontStyle287 = x3d.FontStyle()
FontStyle287.size = 0.035

Text286.fontStyle = FontStyle287

Shape285.geometry = Text286

Billboard284.children.append(Shape285)

HAnimSite281.children.append(Billboard284)

HAnimSegment273.children.append(HAnimSite281)

HAnimJoint272.children.append(HAnimSegment273)
HAnimJoint288 = x3d.HAnimJoint()
HAnimJoint288.name = "l_tarsal_interphalangeal_1"
HAnimJoint288.DEF = "hanim_l_tarsal_interphalangeal_1"
HAnimJoint288.ulimit = [0,0,0]
HAnimJoint288.llimit = [0,0,0]

HAnimJoint272.children.append(HAnimJoint288)

HAnimJoint263.children.append(HAnimJoint272)

HAnimJoint254.children.append(HAnimJoint263)

HAnimJoint237.children.append(HAnimJoint254)
HAnimJoint289 = x3d.HAnimJoint()
HAnimJoint289.name = "l_cuneonavicular_2"
HAnimJoint289.DEF = "hanim_l_cuneonavicular_2"
HAnimJoint289.center = [0.0812,0.025,-0.0805]
HAnimJoint289.ulimit = [0,0,0]
HAnimJoint289.llimit = [0,0,0]
HAnimSegment290 = x3d.HAnimSegment()
HAnimSegment290.name = "l_cuneiform_2"
HAnimSegment290.DEF = "hanim_l_cuneiform_2"
Transform291 = x3d.Transform()
Transform291.translation = [0.0812,0.025,-0.0805]
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
"""from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2"""
ColorRGBA297 = x3d.ColorRGBA()
ColorRGBA297.USE = "HAnimSegmentLineColorRGBA"

LineSet295.color = ColorRGBA297

Shape294.geometry = LineSet295

HAnimSegment290.children.append(Shape294)

HAnimJoint289.children.append(HAnimSegment290)
HAnimJoint298 = x3d.HAnimJoint()
HAnimJoint298.name = "l_tarsometatarsal_2"
HAnimJoint298.DEF = "hanim_l_tarsometatarsal_2"
HAnimJoint298.center = [0.08,0.0175,-0.0608]
HAnimJoint298.ulimit = [0,0,0]
HAnimJoint298.llimit = [0,0,0]
HAnimSegment299 = x3d.HAnimSegment()
HAnimSegment299.name = "l_metatarsal_2"
HAnimSegment299.DEF = "hanim_l_metatarsal_2"
Transform300 = x3d.Transform()
Transform300.translation = [0.08,0.0175,-0.0608]
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
"""from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2"""
ColorRGBA306 = x3d.ColorRGBA()
ColorRGBA306.USE = "HAnimSegmentLineColorRGBA"

LineSet304.color = ColorRGBA306

Shape303.geometry = LineSet304

HAnimSegment299.children.append(Shape303)

HAnimJoint298.children.append(HAnimSegment299)
HAnimJoint307 = x3d.HAnimJoint()
HAnimJoint307.name = "l_metatarsophalangeal_2"
HAnimJoint307.DEF = "hanim_l_metatarsophalangeal_2"
HAnimJoint307.center = [0.0824,0.0064,-0.004]
HAnimJoint307.ulimit = [0,0,0]
HAnimJoint307.llimit = [0,0,0]
HAnimSegment308 = x3d.HAnimSegment()
HAnimSegment308.name = "l_tarsal_proximal_phalanx_2"
HAnimSegment308.DEF = "hanim_l_tarsal_proximal_phalanx_2"
Transform309 = x3d.Transform()
Transform309.translation = [0.0824,0.0064,-0.004]
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
"""from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2"""
ColorRGBA315 = x3d.ColorRGBA()
ColorRGBA315.USE = "HAnimSegmentLineColorRGBA"

LineSet313.color = ColorRGBA315

Shape312.geometry = LineSet313

HAnimSegment308.children.append(Shape312)

HAnimJoint307.children.append(HAnimSegment308)
HAnimJoint316 = x3d.HAnimJoint()
HAnimJoint316.name = "l_tarsal_proximal_interphalangeal_2"
HAnimJoint316.DEF = "hanim_l_tarsal_proximal_interphalangeal_2"
HAnimJoint316.center = [0.0841,0.0041,0.0121]
HAnimJoint316.ulimit = [0,0,0]
HAnimJoint316.llimit = [0,0,0]
HAnimSegment317 = x3d.HAnimSegment()
HAnimSegment317.name = "l_tarsal_middle_phalanx_2"
HAnimSegment317.DEF = "hanim_l_tarsal_middle_phalanx_2"
Transform318 = x3d.Transform()
Transform318.translation = [0.0841,0.0041,0.0121]
Transform319 = x3d.Transform()
"""Empty Transform"""
Shape320 = x3d.Shape()
Shape320.USE = "HAnimJointShape"

Transform319.children.append(Shape320)

Transform318.children.append(Transform319)

HAnimSegment317.children.append(Transform318)
Shape321 = x3d.Shape()
LineSet322 = x3d.LineSet()
LineSet322.vertexCount = [2]
Coordinate323 = x3d.Coordinate()

LineSet322.coord = Coordinate323
"""from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2"""
ColorRGBA324 = x3d.ColorRGBA()
ColorRGBA324.USE = "HAnimSegmentLineColorRGBA"

LineSet322.color = ColorRGBA324

Shape321.geometry = LineSet322

HAnimSegment317.children.append(Shape321)

HAnimJoint316.children.append(HAnimSegment317)
HAnimJoint325 = x3d.HAnimJoint()
HAnimJoint325.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint325.DEF = "hanim_l_tarsal_distal_interphalangeal_2"
HAnimJoint325.center = [0.0841,0.0013,0.0216]
HAnimJoint325.ulimit = [0,0,0]
HAnimJoint325.llimit = [0,0,0]

HAnimJoint316.children.append(HAnimJoint325)

HAnimJoint307.children.append(HAnimJoint316)

HAnimJoint298.children.append(HAnimJoint307)

HAnimJoint289.children.append(HAnimJoint298)

HAnimJoint237.children.append(HAnimJoint289)
HAnimJoint326 = x3d.HAnimJoint()
HAnimJoint326.name = "l_cuneonavicular_3"
HAnimJoint326.DEF = "hanim_l_cuneonavicular_3"
HAnimJoint326.center = [0.0928,0.0248,-0.0821]
HAnimJoint326.ulimit = [0,0,0]
HAnimJoint326.llimit = [0,0,0]
HAnimSegment327 = x3d.HAnimSegment()
HAnimSegment327.name = "l_cuneiform_3"
HAnimSegment327.DEF = "hanim_l_cuneiform_3"
Transform328 = x3d.Transform()
Transform328.translation = [0.0928,0.0248,-0.0821]
Transform329 = x3d.Transform()
"""Empty Transform"""
Shape330 = x3d.Shape()
Shape330.USE = "HAnimJointShape"

Transform329.children.append(Shape330)

Transform328.children.append(Transform329)

HAnimSegment327.children.append(Transform328)
Shape331 = x3d.Shape()
LineSet332 = x3d.LineSet()
LineSet332.vertexCount = [2]
Coordinate333 = x3d.Coordinate()

LineSet332.coord = Coordinate333
"""from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2"""
ColorRGBA334 = x3d.ColorRGBA()
ColorRGBA334.USE = "HAnimSegmentLineColorRGBA"

LineSet332.color = ColorRGBA334

Shape331.geometry = LineSet332

HAnimSegment327.children.append(Shape331)

HAnimJoint326.children.append(HAnimSegment327)
HAnimJoint335 = x3d.HAnimJoint()
HAnimJoint335.name = "l_tarsometatarsal_3"
HAnimJoint335.DEF = "hanim_l_tarsometatarsal_3"
HAnimJoint335.center = [0.0944,0.0175,-0.0625]
HAnimJoint335.ulimit = [0,0,0]
HAnimJoint335.llimit = [0,0,0]
HAnimSegment336 = x3d.HAnimSegment()
HAnimSegment336.name = "l_metatarsal_3"
HAnimSegment336.DEF = "hanim_l_metatarsal_3"
Transform337 = x3d.Transform()
Transform337.translation = [0.0944,0.0175,-0.0625]
Transform338 = x3d.Transform()
"""Empty Transform"""
Shape339 = x3d.Shape()
Shape339.USE = "HAnimJointShape"

Transform338.children.append(Shape339)

Transform337.children.append(Transform338)

HAnimSegment336.children.append(Transform337)
Shape340 = x3d.Shape()
LineSet341 = x3d.LineSet()
LineSet341.vertexCount = [2]
Coordinate342 = x3d.Coordinate()

LineSet341.coord = Coordinate342
"""from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2"""
ColorRGBA343 = x3d.ColorRGBA()
ColorRGBA343.USE = "HAnimSegmentLineColorRGBA"

LineSet341.color = ColorRGBA343

Shape340.geometry = LineSet341

HAnimSegment336.children.append(Shape340)

HAnimJoint335.children.append(HAnimSegment336)
HAnimJoint344 = x3d.HAnimJoint()
HAnimJoint344.name = "l_metatarsophalangeal_3"
HAnimJoint344.DEF = "hanim_l_metatarsophalangeal_3"
HAnimJoint344.center = [0.0963,0.0065,-0.0065]
HAnimJoint344.ulimit = [0,0,0]
HAnimJoint344.llimit = [0,0,0]
HAnimSegment345 = x3d.HAnimSegment()
HAnimSegment345.name = "l_tarsal_proximal_phalanx_3"
HAnimSegment345.DEF = "hanim_l_tarsal_proximal_phalanx_3"
Transform346 = x3d.Transform()
Transform346.translation = [0.0963,0.0065,-0.0065]
Transform347 = x3d.Transform()
"""Empty Transform"""
Shape348 = x3d.Shape()
Shape348.USE = "HAnimJointShape"

Transform347.children.append(Shape348)

Transform346.children.append(Transform347)

HAnimSegment345.children.append(Transform346)
Shape349 = x3d.Shape()
LineSet350 = x3d.LineSet()
LineSet350.vertexCount = [2]
Coordinate351 = x3d.Coordinate()

LineSet350.coord = Coordinate351
"""from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2"""
ColorRGBA352 = x3d.ColorRGBA()
ColorRGBA352.USE = "HAnimSegmentLineColorRGBA"

LineSet350.color = ColorRGBA352

Shape349.geometry = LineSet350

HAnimSegment345.children.append(Shape349)

HAnimJoint344.children.append(HAnimSegment345)
HAnimJoint353 = x3d.HAnimJoint()
HAnimJoint353.name = "l_tarsal_proximal_interphalangeal_3"
HAnimJoint353.DEF = "hanim_l_tarsal_proximal_interphalangeal_3"
HAnimJoint353.center = [0.0987,0.0034,0.0086]
HAnimJoint353.ulimit = [0,0,0]
HAnimJoint353.llimit = [0,0,0]
HAnimSegment354 = x3d.HAnimSegment()
HAnimSegment354.name = "l_tarsal_middle_phalanx_3"
HAnimSegment354.DEF = "hanim_l_tarsal_middle_phalanx_3"
Transform355 = x3d.Transform()
Transform355.translation = [0.0987,0.0034,0.0086]
Transform356 = x3d.Transform()
"""Empty Transform"""
Shape357 = x3d.Shape()
Shape357.USE = "HAnimJointShape"

Transform356.children.append(Shape357)

Transform355.children.append(Transform356)

HAnimSegment354.children.append(Transform355)
Shape358 = x3d.Shape()
LineSet359 = x3d.LineSet()
LineSet359.vertexCount = [2]
Coordinate360 = x3d.Coordinate()

LineSet359.coord = Coordinate360
"""from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2"""
ColorRGBA361 = x3d.ColorRGBA()
ColorRGBA361.USE = "HAnimSegmentLineColorRGBA"

LineSet359.color = ColorRGBA361

Shape358.geometry = LineSet359

HAnimSegment354.children.append(Shape358)

HAnimJoint353.children.append(HAnimSegment354)
HAnimJoint362 = x3d.HAnimJoint()
HAnimJoint362.name = "l_tarsal_distal_interphalangeal_3"
HAnimJoint362.DEF = "hanim_l_tarsal_distal_interphalangeal_3"
HAnimJoint362.center = [0.1002,0.0013,0.0178]
HAnimJoint362.ulimit = [0,0,0]
HAnimJoint362.llimit = [0,0,0]

HAnimJoint353.children.append(HAnimJoint362)

HAnimJoint344.children.append(HAnimJoint353)

HAnimJoint335.children.append(HAnimJoint344)

HAnimJoint326.children.append(HAnimJoint335)

HAnimJoint237.children.append(HAnimJoint326)

HAnimJoint210.children.append(HAnimJoint237)
HAnimJoint363 = x3d.HAnimJoint()
HAnimJoint363.name = "l_calcaneocuboid"
HAnimJoint363.DEF = "hanim_l_calcaneocuboid"
HAnimJoint363.center = [0.0889,0.0494,-0.1278]
HAnimJoint363.ulimit = [0,0,0]
HAnimJoint363.llimit = [0,0,0]
HAnimSegment364 = x3d.HAnimSegment()
HAnimSegment364.name = "l_calcaneus"
HAnimSegment364.DEF = "hanim_l_calcaneus"
Transform365 = x3d.Transform()
Transform365.translation = [0.0889,0.0494,-0.1278]
Transform366 = x3d.Transform()
"""Empty Transform"""
Shape367 = x3d.Shape()
Shape367.USE = "HAnimJointShape"

Transform366.children.append(Shape367)

Transform365.children.append(Transform366)

HAnimSegment364.children.append(Transform365)
Shape368 = x3d.Shape()
LineSet369 = x3d.LineSet()
LineSet369.vertexCount = [2]
Coordinate370 = x3d.Coordinate()

LineSet369.coord = Coordinate370
"""from l_calcaneocuboid to l_transversetarsal vertices 2"""
ColorRGBA371 = x3d.ColorRGBA()
ColorRGBA371.USE = "HAnimSegmentLineColorRGBA"

LineSet369.color = ColorRGBA371

Shape368.geometry = LineSet369

HAnimSegment364.children.append(Shape368)

HAnimJoint363.children.append(HAnimSegment364)
HAnimJoint372 = x3d.HAnimJoint()
HAnimJoint372.name = "l_transversetarsal"
HAnimJoint372.DEF = "hanim_l_transversetarsal"
HAnimJoint372.center = [0.1105,0.0267,-0.0998]
HAnimJoint372.ulimit = [0,0,0]
HAnimJoint372.llimit = [0,0,0]
HAnimSegment373 = x3d.HAnimSegment()
HAnimSegment373.name = "l_cuboid"
HAnimSegment373.DEF = "hanim_l_cuboid"
Transform374 = x3d.Transform()
Transform374.translation = [0.1105,0.0267,-0.0998]
Transform375 = x3d.Transform()
"""Empty Transform"""
Shape376 = x3d.Shape()
Shape376.USE = "HAnimJointShape"

Transform375.children.append(Shape376)

Transform374.children.append(Transform375)

HAnimSegment373.children.append(Transform374)
Shape377 = x3d.Shape()
LineSet378 = x3d.LineSet()
LineSet378.vertexCount = [2]
Coordinate379 = x3d.Coordinate()

LineSet378.coord = Coordinate379
"""from l_transversetarsal to l_tarsometatarsal_4 vertices 2"""
ColorRGBA380 = x3d.ColorRGBA()
ColorRGBA380.USE = "HAnimSegmentLineColorRGBA"

LineSet378.color = ColorRGBA380

Shape377.geometry = LineSet378

HAnimSegment373.children.append(Shape377)
Shape381 = x3d.Shape()
LineSet382 = x3d.LineSet()
LineSet382.vertexCount = [2]
Coordinate383 = x3d.Coordinate()

LineSet382.coord = Coordinate383
"""from l_transversetarsal to l_tarsometatarsal_5 vertices 2"""
ColorRGBA384 = x3d.ColorRGBA()
ColorRGBA384.USE = "HAnimSegmentLineColorRGBA"

LineSet382.color = ColorRGBA384

Shape381.geometry = LineSet382

HAnimSegment373.children.append(Shape381)

HAnimJoint372.children.append(HAnimSegment373)
HAnimJoint385 = x3d.HAnimJoint()
HAnimJoint385.name = "l_tarsometatarsal_4"
HAnimJoint385.DEF = "hanim_l_tarsometatarsal_4"
HAnimJoint385.center = [0.1063,0.016,-0.0634]
HAnimJoint385.ulimit = [0,0,0]
HAnimJoint385.llimit = [0,0,0]
HAnimSegment386 = x3d.HAnimSegment()
HAnimSegment386.name = "l_metatarsal_4"
HAnimSegment386.DEF = "hanim_l_metatarsal_4"
Transform387 = x3d.Transform()
Transform387.translation = [0.1063,0.016,-0.0634]
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
"""from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2"""
ColorRGBA393 = x3d.ColorRGBA()
ColorRGBA393.USE = "HAnimSegmentLineColorRGBA"

LineSet391.color = ColorRGBA393

Shape390.geometry = LineSet391

HAnimSegment386.children.append(Shape390)

HAnimJoint385.children.append(HAnimSegment386)
HAnimJoint394 = x3d.HAnimJoint()
HAnimJoint394.name = "l_metatarsophalangeal_4"
HAnimJoint394.DEF = "hanim_l_metatarsophalangeal_4"
HAnimJoint394.center = [0.1097,0.0058,-0.0107]
HAnimJoint394.ulimit = [0,0,0]
HAnimJoint394.llimit = [0,0,0]
HAnimSegment395 = x3d.HAnimSegment()
HAnimSegment395.name = "l_tarsal_proximal_phalanx_4"
HAnimSegment395.DEF = "hanim_l_tarsal_proximal_phalanx_4"
Transform396 = x3d.Transform()
Transform396.translation = [0.1097,0.0058,-0.0107]
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
"""from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2"""
ColorRGBA402 = x3d.ColorRGBA()
ColorRGBA402.USE = "HAnimSegmentLineColorRGBA"

LineSet400.color = ColorRGBA402

Shape399.geometry = LineSet400

HAnimSegment395.children.append(Shape399)

HAnimJoint394.children.append(HAnimSegment395)
HAnimJoint403 = x3d.HAnimJoint()
HAnimJoint403.name = "l_tarsal_proximal_interphalangeal_4"
HAnimJoint403.DEF = "hanim_l_tarsal_proximal_interphalangeal_4"
HAnimJoint403.center = [0.114,0.0037,0.0044]
HAnimJoint403.ulimit = [0,0,0]
HAnimJoint403.llimit = [0,0,0]
HAnimSegment404 = x3d.HAnimSegment()
HAnimSegment404.name = "l_tarsal_middle_phalanx_4"
HAnimSegment404.DEF = "hanim_l_tarsal_middle_phalanx_4"
Transform405 = x3d.Transform()
Transform405.translation = [0.114,0.0037,0.0044]
Transform406 = x3d.Transform()
"""Empty Transform"""
Shape407 = x3d.Shape()
Shape407.USE = "HAnimJointShape"

Transform406.children.append(Shape407)

Transform405.children.append(Transform406)

HAnimSegment404.children.append(Transform405)
Shape408 = x3d.Shape()
LineSet409 = x3d.LineSet()
LineSet409.vertexCount = [2]
Coordinate410 = x3d.Coordinate()

LineSet409.coord = Coordinate410
"""from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2"""
ColorRGBA411 = x3d.ColorRGBA()
ColorRGBA411.USE = "HAnimSegmentLineColorRGBA"

LineSet409.color = ColorRGBA411

Shape408.geometry = LineSet409

HAnimSegment404.children.append(Shape408)

HAnimJoint403.children.append(HAnimSegment404)
HAnimJoint412 = x3d.HAnimJoint()
HAnimJoint412.name = "l_tarsal_distal_interphalangeal_4"
HAnimJoint412.DEF = "hanim_l_tarsal_distal_interphalangeal_4"
HAnimJoint412.center = [0.1155,0.0008,0.0118]
HAnimJoint412.ulimit = [0,0,0]
HAnimJoint412.llimit = [0,0,0]

HAnimJoint403.children.append(HAnimJoint412)

HAnimJoint394.children.append(HAnimJoint403)

HAnimJoint385.children.append(HAnimJoint394)

HAnimJoint372.children.append(HAnimJoint385)
HAnimJoint413 = x3d.HAnimJoint()
HAnimJoint413.name = "l_tarsometatarsal_5"
HAnimJoint413.DEF = "hanim_l_tarsometatarsal_5"
HAnimJoint413.center = [0.1206,0.0124,-0.0671]
HAnimJoint413.ulimit = [0,0,0]
HAnimJoint413.llimit = [0,0,0]
HAnimSegment414 = x3d.HAnimSegment()
HAnimSegment414.name = "l_metatarsal_5"
HAnimSegment414.DEF = "hanim_l_metatarsal_5"
Transform415 = x3d.Transform()
Transform415.translation = [0.1206,0.0124,-0.0671]
Transform416 = x3d.Transform()
"""Empty Transform"""
Shape417 = x3d.Shape()
Shape417.USE = "HAnimJointShape"

Transform416.children.append(Shape417)

Transform415.children.append(Transform416)

HAnimSegment414.children.append(Transform415)
Shape418 = x3d.Shape()
LineSet419 = x3d.LineSet()
LineSet419.vertexCount = [2]
Coordinate420 = x3d.Coordinate()

LineSet419.coord = Coordinate420
"""from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2"""
ColorRGBA421 = x3d.ColorRGBA()
ColorRGBA421.USE = "HAnimSegmentLineColorRGBA"

LineSet419.color = ColorRGBA421

Shape418.geometry = LineSet419

HAnimSegment414.children.append(Shape418)

HAnimJoint413.children.append(HAnimSegment414)
HAnimJoint422 = x3d.HAnimJoint()
HAnimJoint422.name = "l_metatarsophalangeal_5"
HAnimJoint422.DEF = "hanim_l_metatarsophalangeal_5"
HAnimJoint422.center = [0.1239,0.0051,-0.0153]
HAnimJoint422.ulimit = [0,0,0]
HAnimJoint422.llimit = [0,0,0]
HAnimSegment423 = x3d.HAnimSegment()
HAnimSegment423.name = "l_tarsal_proximal_phalanx_5"
HAnimSegment423.DEF = "hanim_l_tarsal_proximal_phalanx_5"
Transform424 = x3d.Transform()
Transform424.translation = [0.1239,0.0051,-0.0153]
Transform425 = x3d.Transform()
"""Empty Transform"""
Shape426 = x3d.Shape()
Shape426.USE = "HAnimJointShape"

Transform425.children.append(Shape426)

Transform424.children.append(Transform425)

HAnimSegment423.children.append(Transform424)
Shape427 = x3d.Shape()
LineSet428 = x3d.LineSet()
LineSet428.vertexCount = [2]
Coordinate429 = x3d.Coordinate()

LineSet428.coord = Coordinate429
"""from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2"""
ColorRGBA430 = x3d.ColorRGBA()
ColorRGBA430.USE = "HAnimSegmentLineColorRGBA"

LineSet428.color = ColorRGBA430

Shape427.geometry = LineSet428

HAnimSegment423.children.append(Shape427)
HAnimSite431 = x3d.HAnimSite()
HAnimSite431.name = "l_metatarsal_phalanx_5"
HAnimSite431.DEF = "hanim_l_metatarsal_phalanx_5"
TouchSensor432 = x3d.TouchSensor()
TouchSensor432.description = "HAnimSite 56 l_metatarsal_phalanx_5"

HAnimSite431.children.append(TouchSensor432)
Shape433 = x3d.Shape()
Shape433.USE = "HAnimSiteShape"

HAnimSite431.children.append(Shape433)
Billboard434 = x3d.Billboard()
Shape435 = x3d.Shape()
Text436 = x3d.Text()
Text436.string = ["56"]
FontStyle437 = x3d.FontStyle()
FontStyle437.size = 0.035

Text436.fontStyle = FontStyle437

Shape435.geometry = Text436

Billboard434.children.append(Shape435)

HAnimSite431.children.append(Billboard434)

HAnimSegment423.children.append(HAnimSite431)

HAnimJoint422.children.append(HAnimSegment423)
HAnimJoint438 = x3d.HAnimJoint()
HAnimJoint438.name = "l_tarsal_proximal_interphalangeal_5"
HAnimJoint438.DEF = "hanim_l_tarsal_proximal_interphalangeal_5"
HAnimJoint438.center = [0.1262,0.0023,-0.0077]
HAnimJoint438.ulimit = [0,0,0]
HAnimJoint438.llimit = [0,0,0]
HAnimSegment439 = x3d.HAnimSegment()
HAnimSegment439.name = "l_tarsal_middle_phalanx_5"
HAnimSegment439.DEF = "hanim_l_tarsal_middle_phalanx_5"
Transform440 = x3d.Transform()
Transform440.translation = [0.1262,0.0023,-0.0077]
Transform441 = x3d.Transform()
"""Empty Transform"""
Shape442 = x3d.Shape()
Shape442.USE = "HAnimJointShape"

Transform441.children.append(Shape442)

Transform440.children.append(Transform441)

HAnimSegment439.children.append(Transform440)
Shape443 = x3d.Shape()
LineSet444 = x3d.LineSet()
LineSet444.vertexCount = [2]
Coordinate445 = x3d.Coordinate()

LineSet444.coord = Coordinate445
"""from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2"""
ColorRGBA446 = x3d.ColorRGBA()
ColorRGBA446.USE = "HAnimSegmentLineColorRGBA"

LineSet444.color = ColorRGBA446

Shape443.geometry = LineSet444

HAnimSegment439.children.append(Shape443)

HAnimJoint438.children.append(HAnimSegment439)
HAnimJoint447 = x3d.HAnimJoint()
HAnimJoint447.name = "l_tarsal_distal_interphalangeal_5"
HAnimJoint447.DEF = "hanim_l_tarsal_distal_interphalangeal_5"
HAnimJoint447.center = [0.1271,0,0]
HAnimJoint447.ulimit = [0,0,0]
HAnimJoint447.llimit = [0,0,0]

HAnimJoint438.children.append(HAnimJoint447)

HAnimJoint422.children.append(HAnimJoint438)

HAnimJoint413.children.append(HAnimJoint422)

HAnimJoint372.children.append(HAnimJoint413)

HAnimJoint363.children.append(HAnimJoint372)

HAnimJoint210.children.append(HAnimJoint363)

HAnimJoint180.children.append(HAnimJoint210)

HAnimJoint143.children.append(HAnimJoint180)

HAnimJoint60.children.append(HAnimJoint143)
HAnimJoint448 = x3d.HAnimJoint()
HAnimJoint448.name = "r_hip"
HAnimJoint448.DEF = "hanim_r_hip"
HAnimJoint448.center = [-0.095,0.9171,0.0029]
HAnimJoint448.ulimit = [0,0,0]
HAnimJoint448.llimit = [0,0,0]
HAnimSegment449 = x3d.HAnimSegment()
HAnimSegment449.name = "r_thigh"
HAnimSegment449.DEF = "hanim_r_thigh"
Transform450 = x3d.Transform()
Transform450.translation = [-0.095,0.9171,0.0029]
Transform451 = x3d.Transform()
"""Empty Transform"""
Shape452 = x3d.Shape()
Shape452.USE = "HAnimJointShape"

Transform451.children.append(Shape452)

Transform450.children.append(Transform451)

HAnimSegment449.children.append(Transform450)
Shape453 = x3d.Shape()
LineSet454 = x3d.LineSet()
LineSet454.vertexCount = [2]
Coordinate455 = x3d.Coordinate()

LineSet454.coord = Coordinate455
"""from r_hip to r_knee vertices 2"""
ColorRGBA456 = x3d.ColorRGBA()
ColorRGBA456.USE = "HAnimSegmentLineColorRGBA"

LineSet454.color = ColorRGBA456

Shape453.geometry = LineSet454

HAnimSegment449.children.append(Shape453)
HAnimSite457 = x3d.HAnimSite()
HAnimSite457.name = "r_femoral_lateral_epicondyles"
HAnimSite457.DEF = "hanim_r_femoral_lateral_epicondyles"
HAnimSite457.translation = [-0.1421,0.4992,0.031]
TouchSensor458 = x3d.TouchSensor()
TouchSensor458.description = "HAnimSite 44 r_femoral_lateral_epicondyles"

HAnimSite457.children.append(TouchSensor458)
Shape459 = x3d.Shape()
Shape459.USE = "HAnimSiteShape"

HAnimSite457.children.append(Shape459)
Billboard460 = x3d.Billboard()
Shape461 = x3d.Shape()
Text462 = x3d.Text()
Text462.string = ["44"]
FontStyle463 = x3d.FontStyle()
FontStyle463.size = 0.035

Text462.fontStyle = FontStyle463

Shape461.geometry = Text462

Billboard460.children.append(Shape461)

HAnimSite457.children.append(Billboard460)

HAnimSegment449.children.append(HAnimSite457)
HAnimSite464 = x3d.HAnimSite()
HAnimSite464.name = "r_femoral_medial_epicondyles"
HAnimSite464.DEF = "hanim_r_femoral_medial_epicondyles"
HAnimSite464.translation = [-0.0221,0.5014,0.0289]
TouchSensor465 = x3d.TouchSensor()
TouchSensor465.description = "HAnimSite 43 r_femoral_medial_epicondyles"

HAnimSite464.children.append(TouchSensor465)
Shape466 = x3d.Shape()
Shape466.USE = "HAnimSiteShape"

HAnimSite464.children.append(Shape466)
Billboard467 = x3d.Billboard()
Shape468 = x3d.Shape()
Text469 = x3d.Text()
Text469.string = ["43"]
FontStyle470 = x3d.FontStyle()
FontStyle470.size = 0.035

Text469.fontStyle = FontStyle470

Shape468.geometry = Text469

Billboard467.children.append(Shape468)

HAnimSite464.children.append(Billboard467)

HAnimSegment449.children.append(HAnimSite464)
HAnimSite471 = x3d.HAnimSite()
HAnimSite471.name = "r_knee_crease"
HAnimSite471.DEF = "hanim_r_knee_crease"
HAnimSite471.translation = [-0.0825,0.4932,-0.0326]
TouchSensor472 = x3d.TouchSensor()
TouchSensor472.description = "HAnimSite 91 r_knee_crease"

HAnimSite471.children.append(TouchSensor472)
Shape473 = x3d.Shape()
Shape473.USE = "HAnimSiteShape"

HAnimSite471.children.append(Shape473)
Billboard474 = x3d.Billboard()
Shape475 = x3d.Shape()
Text476 = x3d.Text()
Text476.string = ["91"]
FontStyle477 = x3d.FontStyle()
FontStyle477.size = 0.035

Text476.fontStyle = FontStyle477

Shape475.geometry = Text476

Billboard474.children.append(Shape475)

HAnimSite471.children.append(Billboard474)

HAnimSegment449.children.append(HAnimSite471)
HAnimSite478 = x3d.HAnimSite()
HAnimSite478.name = "r_suprapatella"
HAnimSite478.DEF = "hanim_r_suprapatella"
TouchSensor479 = x3d.TouchSensor()
TouchSensor479.description = "HAnimSite 45 r_suprapatella"

HAnimSite478.children.append(TouchSensor479)
Shape480 = x3d.Shape()
Shape480.USE = "HAnimSiteShape"

HAnimSite478.children.append(Shape480)
Billboard481 = x3d.Billboard()
Shape482 = x3d.Shape()
Text483 = x3d.Text()
Text483.string = ["45"]
FontStyle484 = x3d.FontStyle()
FontStyle484.size = 0.035

Text483.fontStyle = FontStyle484

Shape482.geometry = Text483

Billboard481.children.append(Shape482)

HAnimSite478.children.append(Billboard481)

HAnimSegment449.children.append(HAnimSite478)

HAnimJoint448.children.append(HAnimSegment449)
HAnimJoint485 = x3d.HAnimJoint()
HAnimJoint485.name = "r_knee"
HAnimJoint485.DEF = "hanim_r_knee"
HAnimJoint485.center = [-0.0867,0.4913,0.0318]
HAnimJoint485.ulimit = [0,0,0]
HAnimJoint485.llimit = [0,0,0]
HAnimSegment486 = x3d.HAnimSegment()
HAnimSegment486.name = "r_calf"
HAnimSegment486.DEF = "hanim_r_calf"
Transform487 = x3d.Transform()
Transform487.translation = [-0.0867,0.4913,0.0318]
Transform488 = x3d.Transform()
"""Empty Transform"""
Shape489 = x3d.Shape()
Shape489.USE = "HAnimJointShape"

Transform488.children.append(Shape489)

Transform487.children.append(Transform488)

HAnimSegment486.children.append(Transform487)
Shape490 = x3d.Shape()
LineSet491 = x3d.LineSet()
LineSet491.vertexCount = [2]
Coordinate492 = x3d.Coordinate()

LineSet491.coord = Coordinate492
"""from r_knee to r_talocrural vertices 2"""
ColorRGBA493 = x3d.ColorRGBA()
ColorRGBA493.USE = "HAnimSegmentLineColorRGBA"

LineSet491.color = ColorRGBA493

Shape490.geometry = LineSet491

HAnimSegment486.children.append(Shape490)
HAnimSite494 = x3d.HAnimSite()
HAnimSite494.name = "r_lateral_malleolus"
HAnimSite494.DEF = "hanim_r_lateral_malleolus"
HAnimSite494.translation = [-0.1006,0.0658,-0.1075]
TouchSensor495 = x3d.TouchSensor()
TouchSensor495.description = "HAnimSite 53 r_lateral_malleolus"

HAnimSite494.children.append(TouchSensor495)
Shape496 = x3d.Shape()
Shape496.USE = "HAnimSiteShape"

HAnimSite494.children.append(Shape496)
Billboard497 = x3d.Billboard()
Shape498 = x3d.Shape()
Text499 = x3d.Text()
Text499.string = ["53"]
FontStyle500 = x3d.FontStyle()
FontStyle500.size = 0.035

Text499.fontStyle = FontStyle500

Shape498.geometry = Text499

Billboard497.children.append(Shape498)

HAnimSite494.children.append(Billboard497)

HAnimSegment486.children.append(HAnimSite494)
HAnimSite501 = x3d.HAnimSite()
HAnimSite501.name = "r_medial_malleolus"
HAnimSite501.DEF = "hanim_r_medial_malleolus"
HAnimSite501.translation = [-0.0591,0.076,-0.0928]
TouchSensor502 = x3d.TouchSensor()
TouchSensor502.description = "HAnimSite 52 r_medial_malleolus"

HAnimSite501.children.append(TouchSensor502)
Shape503 = x3d.Shape()
Shape503.USE = "HAnimSiteShape"

HAnimSite501.children.append(Shape503)
Billboard504 = x3d.Billboard()
Shape505 = x3d.Shape()
Text506 = x3d.Text()
Text506.string = ["52"]
FontStyle507 = x3d.FontStyle()
FontStyle507.size = 0.035

Text506.fontStyle = FontStyle507

Shape505.geometry = Text506

Billboard504.children.append(Shape505)

HAnimSite501.children.append(Billboard504)

HAnimSegment486.children.append(HAnimSite501)
HAnimSite508 = x3d.HAnimSite()
HAnimSite508.name = "r_tibiale"
HAnimSite508.DEF = "hanim_r_tibiale"
TouchSensor509 = x3d.TouchSensor()
TouchSensor509.description = "HAnimSite 51 r_tibiale"

HAnimSite508.children.append(TouchSensor509)
Shape510 = x3d.Shape()
Shape510.USE = "HAnimSiteShape"

HAnimSite508.children.append(Shape510)
Billboard511 = x3d.Billboard()
Shape512 = x3d.Shape()
Text513 = x3d.Text()
Text513.string = ["51"]
FontStyle514 = x3d.FontStyle()
FontStyle514.size = 0.035

Text513.fontStyle = FontStyle514

Shape512.geometry = Text513

Billboard511.children.append(Shape512)

HAnimSite508.children.append(Billboard511)

HAnimSegment486.children.append(HAnimSite508)

HAnimJoint485.children.append(HAnimSegment486)
HAnimJoint515 = x3d.HAnimJoint()
HAnimJoint515.name = "r_talocrural"
HAnimJoint515.DEF = "hanim_r_talocrural"
HAnimJoint515.center = [-0.0801,0.0712,-0.0766]
HAnimJoint515.ulimit = [0,0,0]
HAnimJoint515.llimit = [0,0,0]
HAnimSegment516 = x3d.HAnimSegment()
HAnimSegment516.name = "r_talus"
HAnimSegment516.DEF = "hanim_r_talus"
Transform517 = x3d.Transform()
Transform517.scale = [0.15,0.15,0.15]
Transform517.translation = [-0.05,0.06,-0.025]
Transform517.rotation = [1,0,0,-1.57]
"""Transform right foot"""
Transform518 = x3d.Transform()
"""Empty Transform right foot"""
Shape519 = x3d.Shape()
Shape519.USE = "HAnimJointShape"

Transform518.children.append(Shape519)

Transform517.children.append(Transform518)

HAnimSegment516.children.append(Transform517)
Shape520 = x3d.Shape()
LineSet521 = x3d.LineSet()
LineSet521.vertexCount = [2]
Coordinate522 = x3d.Coordinate()

LineSet521.coord = Coordinate522
"""from r_talocrural to r_talocalcaneonavicular vertices 2"""
ColorRGBA523 = x3d.ColorRGBA()
ColorRGBA523.USE = "HAnimSegmentLineColorRGBA"

LineSet521.color = ColorRGBA523

Shape520.geometry = LineSet521

HAnimSegment516.children.append(Shape520)
HAnimSite524 = x3d.HAnimSite()
HAnimSite524.name = "r_calcaneus_posterior"
HAnimSite524.DEF = "hanim_r_calcaneus_posterior"
HAnimSite524.translation = [-0.0692,0.0297,-0.1221]
TouchSensor525 = x3d.TouchSensor()
TouchSensor525.description = "HAnimSite 62 r_calcaneus_posterior"

HAnimSite524.children.append(TouchSensor525)
Shape526 = x3d.Shape()
Shape526.USE = "HAnimSiteShape"

HAnimSite524.children.append(Shape526)
Billboard527 = x3d.Billboard()
Shape528 = x3d.Shape()
Text529 = x3d.Text()
Text529.string = ["62"]
FontStyle530 = x3d.FontStyle()
FontStyle530.size = 0.035

Text529.fontStyle = FontStyle530

Shape528.geometry = Text529

Billboard527.children.append(Shape528)

HAnimSite524.children.append(Billboard527)

HAnimSegment516.children.append(HAnimSite524)
HAnimSite531 = x3d.HAnimSite()
HAnimSite531.name = "r_sphyrion"
HAnimSite531.DEF = "hanim_r_sphyrion"
HAnimSite531.translation = [-0.0603,0.061,-0.1002]
TouchSensor532 = x3d.TouchSensor()
TouchSensor532.description = "HAnimSite 54 r_sphyrion"

HAnimSite531.children.append(TouchSensor532)
Shape533 = x3d.Shape()
Shape533.USE = "HAnimSiteShape"

HAnimSite531.children.append(Shape533)
Billboard534 = x3d.Billboard()
Shape535 = x3d.Shape()
Text536 = x3d.Text()
Text536.string = ["54"]
FontStyle537 = x3d.FontStyle()
FontStyle537.size = 0.035

Text536.fontStyle = FontStyle537

Shape535.geometry = Text536

Billboard534.children.append(Shape535)

HAnimSite531.children.append(Billboard534)

HAnimSegment516.children.append(HAnimSite531)
Shape538 = x3d.Shape()
LineSet539 = x3d.LineSet()
LineSet539.vertexCount = [2]
Coordinate540 = x3d.Coordinate()

LineSet539.coord = Coordinate540
"""from r_talocrural to r_calcaneocuboid vertices 2"""
ColorRGBA541 = x3d.ColorRGBA()
ColorRGBA541.USE = "HAnimSegmentLineColorRGBA"

LineSet539.color = ColorRGBA541

Shape538.geometry = LineSet539

HAnimSegment516.children.append(Shape538)

HAnimJoint515.children.append(HAnimSegment516)
HAnimJoint542 = x3d.HAnimJoint()
HAnimJoint542.name = "r_talocalcaneonavicular"
HAnimJoint542.DEF = "hanim_r_talocalcaneonavicular"
HAnimJoint542.center = [-0.0781,0.0283,-0.097]
HAnimJoint542.ulimit = [0,0,0]
HAnimJoint542.llimit = [0,0,0]
HAnimSegment543 = x3d.HAnimSegment()
HAnimSegment543.name = "r_navicular"
HAnimSegment543.DEF = "hanim_r_navicular"
Transform544 = x3d.Transform()
Transform544.translation = [-0.0781,0.0283,-0.097]
Transform545 = x3d.Transform()
"""Empty Transform"""
Shape546 = x3d.Shape()
Shape546.USE = "HAnimJointShape"

Transform545.children.append(Shape546)

Transform544.children.append(Transform545)

HAnimSegment543.children.append(Transform544)
Shape547 = x3d.Shape()
LineSet548 = x3d.LineSet()
LineSet548.vertexCount = [2]
Coordinate549 = x3d.Coordinate()

LineSet548.coord = Coordinate549
"""from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2"""
ColorRGBA550 = x3d.ColorRGBA()
ColorRGBA550.USE = "HAnimSegmentLineColorRGBA"

LineSet548.color = ColorRGBA550

Shape547.geometry = LineSet548

HAnimSegment543.children.append(Shape547)
Shape551 = x3d.Shape()
LineSet552 = x3d.LineSet()
LineSet552.vertexCount = [2]
Coordinate553 = x3d.Coordinate()

LineSet552.coord = Coordinate553
"""from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2"""
ColorRGBA554 = x3d.ColorRGBA()
ColorRGBA554.USE = "HAnimSegmentLineColorRGBA"

LineSet552.color = ColorRGBA554

Shape551.geometry = LineSet552

HAnimSegment543.children.append(Shape551)
Shape555 = x3d.Shape()
LineSet556 = x3d.LineSet()
LineSet556.vertexCount = [2]
Coordinate557 = x3d.Coordinate()

LineSet556.coord = Coordinate557
"""from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2"""
ColorRGBA558 = x3d.ColorRGBA()
ColorRGBA558.USE = "HAnimSegmentLineColorRGBA"

LineSet556.color = ColorRGBA558

Shape555.geometry = LineSet556

HAnimSegment543.children.append(Shape555)

HAnimJoint542.children.append(HAnimSegment543)
HAnimJoint559 = x3d.HAnimJoint()
HAnimJoint559.name = "r_cuneonavicular_1"
HAnimJoint559.DEF = "hanim_r_cuneonavicular_1"
HAnimJoint559.center = [-0.0672,0.0235,-0.0835]
HAnimJoint559.ulimit = [0,0,0]
HAnimJoint559.llimit = [0,0,0]
HAnimSegment560 = x3d.HAnimSegment()
HAnimSegment560.name = "r_cuneiform_1"
HAnimSegment560.DEF = "hanim_r_cuneiform_1"
Transform561 = x3d.Transform()
Transform561.translation = [-0.0672,0.0235,-0.0835]
Transform562 = x3d.Transform()
"""Empty Transform"""
Shape563 = x3d.Shape()
Shape563.USE = "HAnimJointShape"

Transform562.children.append(Shape563)

Transform561.children.append(Transform562)

HAnimSegment560.children.append(Transform561)
Shape564 = x3d.Shape()
LineSet565 = x3d.LineSet()
LineSet565.vertexCount = [2]
Coordinate566 = x3d.Coordinate()

LineSet565.coord = Coordinate566
"""from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2"""
ColorRGBA567 = x3d.ColorRGBA()
ColorRGBA567.USE = "HAnimSegmentLineColorRGBA"

LineSet565.color = ColorRGBA567

Shape564.geometry = LineSet565

HAnimSegment560.children.append(Shape564)

HAnimJoint559.children.append(HAnimSegment560)
HAnimJoint568 = x3d.HAnimJoint()
HAnimJoint568.name = "r_tarsometatarsal_1"
HAnimJoint568.DEF = "hanim_r_tarsometatarsal_1"
HAnimJoint568.center = [-0.0644,0.0147,-0.0577]
HAnimJoint568.ulimit = [0,0,0]
HAnimJoint568.llimit = [0,0,0]
HAnimSegment569 = x3d.HAnimSegment()
HAnimSegment569.name = "r_metatarsal_1"
HAnimSegment569.DEF = "hanim_r_metatarsal_1"
Transform570 = x3d.Transform()
Transform570.translation = [-0.0644,0.0147,-0.0577]
Transform571 = x3d.Transform()
"""Empty Transform"""
Shape572 = x3d.Shape()
Shape572.USE = "HAnimJointShape"

Transform571.children.append(Shape572)

Transform570.children.append(Transform571)

HAnimSegment569.children.append(Transform570)
Shape573 = x3d.Shape()
LineSet574 = x3d.LineSet()
LineSet574.vertexCount = [2]
Coordinate575 = x3d.Coordinate()

LineSet574.coord = Coordinate575
"""from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2"""
ColorRGBA576 = x3d.ColorRGBA()
ColorRGBA576.USE = "HAnimSegmentLineColorRGBA"

LineSet574.color = ColorRGBA576

Shape573.geometry = LineSet574

HAnimSegment569.children.append(Shape573)

HAnimJoint568.children.append(HAnimSegment569)
HAnimJoint577 = x3d.HAnimJoint()
HAnimJoint577.name = "r_metatarsophalangeal_1"
HAnimJoint577.DEF = "hanim_r_metatarsophalangeal_1"
HAnimJoint577.center = [-0.0619,0.0059,-0.0083]
HAnimJoint577.ulimit = [0,0,0]
HAnimJoint577.llimit = [0,0,0]
HAnimSegment578 = x3d.HAnimSegment()
HAnimSegment578.name = "r_tarsal_proximal_phalanx_1"
HAnimSegment578.DEF = "hanim_r_tarsal_proximal_phalanx_1"
Transform579 = x3d.Transform()
Transform579.translation = [-0.0619,0.0059,-0.0083]
Transform580 = x3d.Transform()
"""Empty Transform"""
Shape581 = x3d.Shape()
Shape581.USE = "HAnimJointShape"

Transform580.children.append(Shape581)

Transform579.children.append(Transform580)

HAnimSegment578.children.append(Transform579)
Shape582 = x3d.Shape()
LineSet583 = x3d.LineSet()
LineSet583.vertexCount = [2]
Coordinate584 = x3d.Coordinate()

LineSet583.coord = Coordinate584
"""from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2"""
ColorRGBA585 = x3d.ColorRGBA()
ColorRGBA585.USE = "HAnimSegmentLineColorRGBA"

LineSet583.color = ColorRGBA585

Shape582.geometry = LineSet583

HAnimSegment578.children.append(Shape582)
HAnimSite586 = x3d.HAnimSite()
HAnimSite586.name = "r_metatarsal_phalanx_1"
HAnimSite586.DEF = "hanim_r_metatarsal_phalanx_1"
TouchSensor587 = x3d.TouchSensor()
TouchSensor587.description = "HAnimSite 59 r_metatarsal_phalanx_1"

HAnimSite586.children.append(TouchSensor587)
Shape588 = x3d.Shape()
Shape588.USE = "HAnimSiteShape"

HAnimSite586.children.append(Shape588)
Billboard589 = x3d.Billboard()
Shape590 = x3d.Shape()
Text591 = x3d.Text()
Text591.string = ["59"]
FontStyle592 = x3d.FontStyle()
FontStyle592.size = 0.035

Text591.fontStyle = FontStyle592

Shape590.geometry = Text591

Billboard589.children.append(Shape590)

HAnimSite586.children.append(Billboard589)

HAnimSegment578.children.append(HAnimSite586)

HAnimJoint577.children.append(HAnimSegment578)
HAnimJoint593 = x3d.HAnimJoint()
HAnimJoint593.name = "r_tarsal_interphalangeal_1"
HAnimJoint593.DEF = "hanim_r_tarsal_interphalangeal_1"
HAnimJoint593.ulimit = [0,0,0]
HAnimJoint593.llimit = [0,0,0]

HAnimJoint577.children.append(HAnimJoint593)

HAnimJoint568.children.append(HAnimJoint577)

HAnimJoint559.children.append(HAnimJoint568)

HAnimJoint542.children.append(HAnimJoint559)
HAnimJoint594 = x3d.HAnimJoint()
HAnimJoint594.name = "r_cuneonavicular_2"
HAnimJoint594.DEF = "hanim_r_cuneonavicular_2"
HAnimJoint594.center = [-0.0812,0.025,-0.0805]
HAnimJoint594.ulimit = [0,0,0]
HAnimJoint594.llimit = [0,0,0]
HAnimSegment595 = x3d.HAnimSegment()
HAnimSegment595.name = "r_cuneiform_2"
HAnimSegment595.DEF = "hanim_r_cuneiform_2"
Transform596 = x3d.Transform()
Transform596.translation = [-0.0812,0.025,-0.0805]
Transform597 = x3d.Transform()
"""Empty Transform"""
Shape598 = x3d.Shape()
Shape598.USE = "HAnimJointShape"

Transform597.children.append(Shape598)

Transform596.children.append(Transform597)

HAnimSegment595.children.append(Transform596)
Shape599 = x3d.Shape()
LineSet600 = x3d.LineSet()
LineSet600.vertexCount = [2]
Coordinate601 = x3d.Coordinate()

LineSet600.coord = Coordinate601
"""from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2"""
ColorRGBA602 = x3d.ColorRGBA()
ColorRGBA602.USE = "HAnimSegmentLineColorRGBA"

LineSet600.color = ColorRGBA602

Shape599.geometry = LineSet600

HAnimSegment595.children.append(Shape599)

HAnimJoint594.children.append(HAnimSegment595)
HAnimJoint603 = x3d.HAnimJoint()
HAnimJoint603.name = "r_tarsometatarsal_2"
HAnimJoint603.DEF = "hanim_r_tarsometatarsal_2"
HAnimJoint603.center = [-0.08,0.0175,-0.0608]
HAnimJoint603.ulimit = [0,0,0]
HAnimJoint603.llimit = [0,0,0]
HAnimSegment604 = x3d.HAnimSegment()
HAnimSegment604.name = "r_metatarsal_2"
HAnimSegment604.DEF = "hanim_r_metatarsal_2"
Transform605 = x3d.Transform()
Transform605.translation = [-0.08,0.0175,-0.0608]
Transform606 = x3d.Transform()
"""Empty Transform"""
Shape607 = x3d.Shape()
Shape607.USE = "HAnimJointShape"

Transform606.children.append(Shape607)

Transform605.children.append(Transform606)

HAnimSegment604.children.append(Transform605)
Shape608 = x3d.Shape()
LineSet609 = x3d.LineSet()
LineSet609.vertexCount = [2]
Coordinate610 = x3d.Coordinate()

LineSet609.coord = Coordinate610
"""from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2"""
ColorRGBA611 = x3d.ColorRGBA()
ColorRGBA611.USE = "HAnimSegmentLineColorRGBA"

LineSet609.color = ColorRGBA611

Shape608.geometry = LineSet609

HAnimSegment604.children.append(Shape608)

HAnimJoint603.children.append(HAnimSegment604)
HAnimJoint612 = x3d.HAnimJoint()
HAnimJoint612.name = "r_metatarsophalangeal_2"
HAnimJoint612.DEF = "hanim_r_metatarsophalangeal_2"
HAnimJoint612.center = [-0.0823,0.0064,-0.004]
HAnimJoint612.ulimit = [0,0,0]
HAnimJoint612.llimit = [0,0,0]
HAnimSegment613 = x3d.HAnimSegment()
HAnimSegment613.name = "r_tarsal_proximal_phalanx_2"
HAnimSegment613.DEF = "hanim_r_tarsal_proximal_phalanx_2"
Transform614 = x3d.Transform()
Transform614.translation = [-0.0823,0.0064,-0.004]
Transform615 = x3d.Transform()
"""Empty Transform"""
Shape616 = x3d.Shape()
Shape616.USE = "HAnimJointShape"

Transform615.children.append(Shape616)

Transform614.children.append(Transform615)

HAnimSegment613.children.append(Transform614)
Shape617 = x3d.Shape()
LineSet618 = x3d.LineSet()
LineSet618.vertexCount = [2]
Coordinate619 = x3d.Coordinate()

LineSet618.coord = Coordinate619
"""from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2"""
ColorRGBA620 = x3d.ColorRGBA()
ColorRGBA620.USE = "HAnimSegmentLineColorRGBA"

LineSet618.color = ColorRGBA620

Shape617.geometry = LineSet618

HAnimSegment613.children.append(Shape617)

HAnimJoint612.children.append(HAnimSegment613)
HAnimJoint621 = x3d.HAnimJoint()
HAnimJoint621.name = "r_tarsal_proximal_interphalangeal_2"
HAnimJoint621.DEF = "hanim_r_tarsal_proximal_interphalangeal_2"
HAnimJoint621.center = [-0.0841,0.0041,0.0121]
HAnimJoint621.ulimit = [0,0,0]
HAnimJoint621.llimit = [0,0,0]
HAnimSegment622 = x3d.HAnimSegment()
HAnimSegment622.name = "r_tarsal_middle_phalanx_2"
HAnimSegment622.DEF = "hanim_r_tarsal_middle_phalanx_2"
Transform623 = x3d.Transform()
Transform623.translation = [-0.0841,0.0041,0.0121]
Transform624 = x3d.Transform()
"""Empty Transform"""
Shape625 = x3d.Shape()
Shape625.USE = "HAnimJointShape"

Transform624.children.append(Shape625)

Transform623.children.append(Transform624)

HAnimSegment622.children.append(Transform623)
Shape626 = x3d.Shape()
LineSet627 = x3d.LineSet()
LineSet627.vertexCount = [2]
Coordinate628 = x3d.Coordinate()

LineSet627.coord = Coordinate628
"""from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2"""
ColorRGBA629 = x3d.ColorRGBA()
ColorRGBA629.USE = "HAnimSegmentLineColorRGBA"

LineSet627.color = ColorRGBA629

Shape626.geometry = LineSet627

HAnimSegment622.children.append(Shape626)

HAnimJoint621.children.append(HAnimSegment622)
HAnimJoint630 = x3d.HAnimJoint()
HAnimJoint630.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint630.DEF = "hanim_r_tarsal_distal_interphalangeal_2"
HAnimJoint630.center = [-0.0841,0.0013,0.0216]
HAnimJoint630.ulimit = [0,0,0]
HAnimJoint630.llimit = [0,0,0]

HAnimJoint621.children.append(HAnimJoint630)

HAnimJoint612.children.append(HAnimJoint621)

HAnimJoint603.children.append(HAnimJoint612)

HAnimJoint594.children.append(HAnimJoint603)

HAnimJoint542.children.append(HAnimJoint594)
HAnimJoint631 = x3d.HAnimJoint()
HAnimJoint631.name = "r_cuneonavicular_3"
HAnimJoint631.DEF = "hanim_r_cuneonavicular_3"
HAnimJoint631.center = [-0.0928,0.0248,-0.0821]
HAnimJoint631.ulimit = [0,0,0]
HAnimJoint631.llimit = [0,0,0]
HAnimSegment632 = x3d.HAnimSegment()
HAnimSegment632.name = "r_cuneiform_3"
HAnimSegment632.DEF = "hanim_r_cuneiform_3"
Transform633 = x3d.Transform()
Transform633.translation = [-0.0928,0.0248,-0.0821]
Transform634 = x3d.Transform()
"""Empty Transform"""
Shape635 = x3d.Shape()
Shape635.USE = "HAnimJointShape"

Transform634.children.append(Shape635)

Transform633.children.append(Transform634)

HAnimSegment632.children.append(Transform633)
Shape636 = x3d.Shape()
LineSet637 = x3d.LineSet()
LineSet637.vertexCount = [2]
Coordinate638 = x3d.Coordinate()

LineSet637.coord = Coordinate638
"""from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2"""
ColorRGBA639 = x3d.ColorRGBA()
ColorRGBA639.USE = "HAnimSegmentLineColorRGBA"

LineSet637.color = ColorRGBA639

Shape636.geometry = LineSet637

HAnimSegment632.children.append(Shape636)

HAnimJoint631.children.append(HAnimSegment632)
HAnimJoint640 = x3d.HAnimJoint()
HAnimJoint640.name = "r_tarsometatarsal_3"
HAnimJoint640.DEF = "hanim_r_tarsometatarsal_3"
HAnimJoint640.center = [-0.0944,0.0175,-0.0625]
HAnimJoint640.ulimit = [0,0,0]
HAnimJoint640.llimit = [0,0,0]
HAnimSegment641 = x3d.HAnimSegment()
HAnimSegment641.name = "r_metatarsal_3"
HAnimSegment641.DEF = "hanim_r_metatarsal_3"
Transform642 = x3d.Transform()
Transform642.translation = [-0.0944,0.0175,-0.0625]
Transform643 = x3d.Transform()
"""Empty Transform"""
Shape644 = x3d.Shape()
Shape644.USE = "HAnimJointShape"

Transform643.children.append(Shape644)

Transform642.children.append(Transform643)

HAnimSegment641.children.append(Transform642)
Shape645 = x3d.Shape()
LineSet646 = x3d.LineSet()
LineSet646.vertexCount = [2]
Coordinate647 = x3d.Coordinate()

LineSet646.coord = Coordinate647
"""from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2"""
ColorRGBA648 = x3d.ColorRGBA()
ColorRGBA648.USE = "HAnimSegmentLineColorRGBA"

LineSet646.color = ColorRGBA648

Shape645.geometry = LineSet646

HAnimSegment641.children.append(Shape645)

HAnimJoint640.children.append(HAnimSegment641)
HAnimJoint649 = x3d.HAnimJoint()
HAnimJoint649.name = "r_metatarsophalangeal_3"
HAnimJoint649.DEF = "hanim_r_metatarsophalangeal_3"
HAnimJoint649.center = [-0.0963,0.0065,-0.0065]
HAnimJoint649.ulimit = [0,0,0]
HAnimJoint649.llimit = [0,0,0]
HAnimSegment650 = x3d.HAnimSegment()
HAnimSegment650.name = "r_tarsal_proximal_phalanx_3"
HAnimSegment650.DEF = "hanim_r_tarsal_proximal_phalanx_3"
Transform651 = x3d.Transform()
Transform651.translation = [-0.0963,0.0065,-0.0065]
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
"""from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2"""
ColorRGBA657 = x3d.ColorRGBA()
ColorRGBA657.USE = "HAnimSegmentLineColorRGBA"

LineSet655.color = ColorRGBA657

Shape654.geometry = LineSet655

HAnimSegment650.children.append(Shape654)

HAnimJoint649.children.append(HAnimSegment650)
HAnimJoint658 = x3d.HAnimJoint()
HAnimJoint658.name = "r_tarsal_proximal_interphalangeal_3"
HAnimJoint658.DEF = "hanim_r_tarsal_proximal_interphalangeal_3"
HAnimJoint658.center = [-0.0987,0.0034,0.0086]
HAnimJoint658.ulimit = [0,0,0]
HAnimJoint658.llimit = [0,0,0]
HAnimSegment659 = x3d.HAnimSegment()
HAnimSegment659.name = "r_tarsal_middle_phalanx_3"
HAnimSegment659.DEF = "hanim_r_tarsal_middle_phalanx_3"
Transform660 = x3d.Transform()
Transform660.translation = [-0.0987,0.0034,0.0086]
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
"""from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2"""
ColorRGBA666 = x3d.ColorRGBA()
ColorRGBA666.USE = "HAnimSegmentLineColorRGBA"

LineSet664.color = ColorRGBA666

Shape663.geometry = LineSet664

HAnimSegment659.children.append(Shape663)

HAnimJoint658.children.append(HAnimSegment659)
HAnimJoint667 = x3d.HAnimJoint()
HAnimJoint667.name = "r_tarsal_distal_interphalangeal_3"
HAnimJoint667.DEF = "hanim_r_tarsal_distal_interphalangeal_3"
HAnimJoint667.center = [-0.1002,0.0013,0.0178]
HAnimJoint667.ulimit = [0,0,0]
HAnimJoint667.llimit = [0,0,0]

HAnimJoint658.children.append(HAnimJoint667)

HAnimJoint649.children.append(HAnimJoint658)

HAnimJoint640.children.append(HAnimJoint649)

HAnimJoint631.children.append(HAnimJoint640)

HAnimJoint542.children.append(HAnimJoint631)

HAnimJoint515.children.append(HAnimJoint542)
HAnimJoint668 = x3d.HAnimJoint()
HAnimJoint668.name = "r_calcaneocuboid"
HAnimJoint668.DEF = "hanim_r_calcaneocuboid"
HAnimJoint668.center = [-0.0889,0.0494,-0.1278]
HAnimJoint668.ulimit = [0,0,0]
HAnimJoint668.llimit = [0,0,0]
HAnimSegment669 = x3d.HAnimSegment()
HAnimSegment669.name = "r_calcaneus"
HAnimSegment669.DEF = "hanim_r_calcaneus"
Transform670 = x3d.Transform()
Transform670.translation = [-0.0889,0.0494,-0.1278]
Transform671 = x3d.Transform()
"""Empty Transform"""
Shape672 = x3d.Shape()
Shape672.USE = "HAnimJointShape"

Transform671.children.append(Shape672)

Transform670.children.append(Transform671)

HAnimSegment669.children.append(Transform670)
Shape673 = x3d.Shape()
LineSet674 = x3d.LineSet()
LineSet674.vertexCount = [2]
Coordinate675 = x3d.Coordinate()

LineSet674.coord = Coordinate675
"""from r_calcaneocuboid to r_transversetarsal vertices 2"""
ColorRGBA676 = x3d.ColorRGBA()
ColorRGBA676.USE = "HAnimSegmentLineColorRGBA"

LineSet674.color = ColorRGBA676

Shape673.geometry = LineSet674

HAnimSegment669.children.append(Shape673)

HAnimJoint668.children.append(HAnimSegment669)
HAnimJoint677 = x3d.HAnimJoint()
HAnimJoint677.name = "r_transversetarsal"
HAnimJoint677.DEF = "hanim_r_transversetarsal"
HAnimJoint677.center = [-0.1105,0.0267,-0.0998]
HAnimJoint677.ulimit = [0,0,0]
HAnimJoint677.llimit = [0,0,0]
HAnimSegment678 = x3d.HAnimSegment()
HAnimSegment678.name = "r_cuboid"
HAnimSegment678.DEF = "hanim_r_cuboid"
Transform679 = x3d.Transform()
Transform679.translation = [-0.1105,0.0267,-0.0998]
Transform680 = x3d.Transform()
"""Empty Transform"""
Shape681 = x3d.Shape()
Shape681.USE = "HAnimJointShape"

Transform680.children.append(Shape681)

Transform679.children.append(Transform680)

HAnimSegment678.children.append(Transform679)
Shape682 = x3d.Shape()
LineSet683 = x3d.LineSet()
LineSet683.vertexCount = [2]
Coordinate684 = x3d.Coordinate()

LineSet683.coord = Coordinate684
"""from r_transversetarsal to r_tarsometatarsal_4 vertices 2"""
ColorRGBA685 = x3d.ColorRGBA()
ColorRGBA685.USE = "HAnimSegmentLineColorRGBA"

LineSet683.color = ColorRGBA685

Shape682.geometry = LineSet683

HAnimSegment678.children.append(Shape682)
Shape686 = x3d.Shape()
LineSet687 = x3d.LineSet()
LineSet687.vertexCount = [2]
Coordinate688 = x3d.Coordinate()

LineSet687.coord = Coordinate688
"""from r_transversetarsal to r_tarsometatarsal_5 vertices 2"""
ColorRGBA689 = x3d.ColorRGBA()
ColorRGBA689.USE = "HAnimSegmentLineColorRGBA"

LineSet687.color = ColorRGBA689

Shape686.geometry = LineSet687

HAnimSegment678.children.append(Shape686)

HAnimJoint677.children.append(HAnimSegment678)
HAnimJoint690 = x3d.HAnimJoint()
HAnimJoint690.name = "r_tarsometatarsal_4"
HAnimJoint690.DEF = "hanim_r_tarsometatarsal_4"
HAnimJoint690.center = [-0.1063,0.016,-0.0634]
HAnimJoint690.ulimit = [0,0,0]
HAnimJoint690.llimit = [0,0,0]
HAnimSegment691 = x3d.HAnimSegment()
HAnimSegment691.name = "r_metatarsal_4"
HAnimSegment691.DEF = "hanim_r_metatarsal_4"
Transform692 = x3d.Transform()
Transform692.translation = [-0.1063,0.016,-0.0634]
Transform693 = x3d.Transform()
"""Empty Transform"""
Shape694 = x3d.Shape()
Shape694.USE = "HAnimJointShape"

Transform693.children.append(Shape694)

Transform692.children.append(Transform693)

HAnimSegment691.children.append(Transform692)
Shape695 = x3d.Shape()
LineSet696 = x3d.LineSet()
LineSet696.vertexCount = [2]
Coordinate697 = x3d.Coordinate()

LineSet696.coord = Coordinate697
"""from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2"""
ColorRGBA698 = x3d.ColorRGBA()
ColorRGBA698.USE = "HAnimSegmentLineColorRGBA"

LineSet696.color = ColorRGBA698

Shape695.geometry = LineSet696

HAnimSegment691.children.append(Shape695)

HAnimJoint690.children.append(HAnimSegment691)
HAnimJoint699 = x3d.HAnimJoint()
HAnimJoint699.name = "r_metatarsophalangeal_4"
HAnimJoint699.DEF = "hanim_r_metatarsophalangeal_4"
HAnimJoint699.center = [-0.1097,0.0058,-0.0107]
HAnimJoint699.ulimit = [0,0,0]
HAnimJoint699.llimit = [0,0,0]
HAnimSegment700 = x3d.HAnimSegment()
HAnimSegment700.name = "r_tarsal_proximal_phalanx_4"
HAnimSegment700.DEF = "hanim_r_tarsal_proximal_phalanx_4"
Transform701 = x3d.Transform()
Transform701.translation = [-0.1097,0.0058,-0.0107]
Transform702 = x3d.Transform()
"""Empty Transform"""
Shape703 = x3d.Shape()
Shape703.USE = "HAnimJointShape"

Transform702.children.append(Shape703)

Transform701.children.append(Transform702)

HAnimSegment700.children.append(Transform701)
Shape704 = x3d.Shape()
LineSet705 = x3d.LineSet()
LineSet705.vertexCount = [2]
Coordinate706 = x3d.Coordinate()

LineSet705.coord = Coordinate706
"""from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2"""
ColorRGBA707 = x3d.ColorRGBA()
ColorRGBA707.USE = "HAnimSegmentLineColorRGBA"

LineSet705.color = ColorRGBA707

Shape704.geometry = LineSet705

HAnimSegment700.children.append(Shape704)

HAnimJoint699.children.append(HAnimSegment700)
HAnimJoint708 = x3d.HAnimJoint()
HAnimJoint708.name = "r_tarsal_proximal_interphalangeal_4"
HAnimJoint708.DEF = "hanim_r_tarsal_proximal_interphalangeal_4"
HAnimJoint708.center = [-0.114,0.0037,0.0044]
HAnimJoint708.ulimit = [0,0,0]
HAnimJoint708.llimit = [0,0,0]
HAnimSegment709 = x3d.HAnimSegment()
HAnimSegment709.name = "r_tarsal_middle_phalanx_4"
HAnimSegment709.DEF = "hanim_r_tarsal_middle_phalanx_4"
Transform710 = x3d.Transform()
Transform710.translation = [-0.114,0.0037,0.0044]
Transform711 = x3d.Transform()
"""Empty Transform"""
Shape712 = x3d.Shape()
Shape712.USE = "HAnimJointShape"

Transform711.children.append(Shape712)

Transform710.children.append(Transform711)

HAnimSegment709.children.append(Transform710)
Shape713 = x3d.Shape()
LineSet714 = x3d.LineSet()
LineSet714.vertexCount = [2]
Coordinate715 = x3d.Coordinate()

LineSet714.coord = Coordinate715
"""from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2"""
ColorRGBA716 = x3d.ColorRGBA()
ColorRGBA716.USE = "HAnimSegmentLineColorRGBA"

LineSet714.color = ColorRGBA716

Shape713.geometry = LineSet714

HAnimSegment709.children.append(Shape713)

HAnimJoint708.children.append(HAnimSegment709)
HAnimJoint717 = x3d.HAnimJoint()
HAnimJoint717.name = "r_tarsal_distal_interphalangeal_4"
HAnimJoint717.DEF = "hanim_r_tarsal_distal_interphalangeal_4"
HAnimJoint717.center = [-0.1155,0.0008,0.0118]
HAnimJoint717.ulimit = [0,0,0]
HAnimJoint717.llimit = [0,0,0]

HAnimJoint708.children.append(HAnimJoint717)

HAnimJoint699.children.append(HAnimJoint708)

HAnimJoint690.children.append(HAnimJoint699)

HAnimJoint677.children.append(HAnimJoint690)
HAnimJoint718 = x3d.HAnimJoint()
HAnimJoint718.name = "r_tarsometatarsal_5"
HAnimJoint718.DEF = "hanim_r_tarsometatarsal_5"
HAnimJoint718.center = [-0.1206,0.0124,-0.0671]
HAnimJoint718.ulimit = [0,0,0]
HAnimJoint718.llimit = [0,0,0]
HAnimSegment719 = x3d.HAnimSegment()
HAnimSegment719.name = "r_metatarsal_5"
HAnimSegment719.DEF = "hanim_r_metatarsal_5"
Transform720 = x3d.Transform()
Transform720.translation = [-0.1206,0.0124,-0.0671]
Transform721 = x3d.Transform()
"""Empty Transform"""
Shape722 = x3d.Shape()
Shape722.USE = "HAnimJointShape"

Transform721.children.append(Shape722)

Transform720.children.append(Transform721)

HAnimSegment719.children.append(Transform720)
Shape723 = x3d.Shape()
LineSet724 = x3d.LineSet()
LineSet724.vertexCount = [2]
Coordinate725 = x3d.Coordinate()

LineSet724.coord = Coordinate725
"""from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2"""
ColorRGBA726 = x3d.ColorRGBA()
ColorRGBA726.USE = "HAnimSegmentLineColorRGBA"

LineSet724.color = ColorRGBA726

Shape723.geometry = LineSet724

HAnimSegment719.children.append(Shape723)

HAnimJoint718.children.append(HAnimSegment719)
HAnimJoint727 = x3d.HAnimJoint()
HAnimJoint727.name = "r_metatarsophalangeal_5"
HAnimJoint727.DEF = "hanim_r_metatarsophalangeal_5"
HAnimJoint727.center = [-0.1239,0.0051,-0.0153]
HAnimJoint727.ulimit = [0,0,0]
HAnimJoint727.llimit = [0,0,0]
HAnimSegment728 = x3d.HAnimSegment()
HAnimSegment728.name = "r_tarsal_proximal_phalanx_5"
HAnimSegment728.DEF = "hanim_r_tarsal_proximal_phalanx_5"
Transform729 = x3d.Transform()
Transform729.translation = [-0.1239,0.0051,-0.0153]
Transform730 = x3d.Transform()
"""Empty Transform"""
Shape731 = x3d.Shape()
Shape731.USE = "HAnimJointShape"

Transform730.children.append(Shape731)

Transform729.children.append(Transform730)

HAnimSegment728.children.append(Transform729)
Shape732 = x3d.Shape()
LineSet733 = x3d.LineSet()
LineSet733.vertexCount = [2]
Coordinate734 = x3d.Coordinate()

LineSet733.coord = Coordinate734
"""from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2"""
ColorRGBA735 = x3d.ColorRGBA()
ColorRGBA735.USE = "HAnimSegmentLineColorRGBA"

LineSet733.color = ColorRGBA735

Shape732.geometry = LineSet733

HAnimSegment728.children.append(Shape732)
HAnimSite736 = x3d.HAnimSite()
HAnimSite736.name = "r_metatarsal_phalanx_5"
HAnimSite736.DEF = "hanim_r_metatarsal_phalanx_5"
TouchSensor737 = x3d.TouchSensor()
TouchSensor737.description = "HAnimSite 60 r_metatarsal_phalanx_5"

HAnimSite736.children.append(TouchSensor737)
Shape738 = x3d.Shape()
Shape738.USE = "HAnimSiteShape"

HAnimSite736.children.append(Shape738)
Billboard739 = x3d.Billboard()
Shape740 = x3d.Shape()
Text741 = x3d.Text()
Text741.string = ["60"]
FontStyle742 = x3d.FontStyle()
FontStyle742.size = 0.035

Text741.fontStyle = FontStyle742

Shape740.geometry = Text741

Billboard739.children.append(Shape740)

HAnimSite736.children.append(Billboard739)

HAnimSegment728.children.append(HAnimSite736)

HAnimJoint727.children.append(HAnimSegment728)
HAnimJoint743 = x3d.HAnimJoint()
HAnimJoint743.name = "r_tarsal_proximal_interphalangeal_5"
HAnimJoint743.DEF = "hanim_r_tarsal_proximal_interphalangeal_5"
HAnimJoint743.center = [-0.1262,0.0023,-0.0077]
HAnimJoint743.ulimit = [0,0,0]
HAnimJoint743.llimit = [0,0,0]
HAnimSegment744 = x3d.HAnimSegment()
HAnimSegment744.name = "r_tarsal_middle_phalanx_5"
HAnimSegment744.DEF = "hanim_r_tarsal_middle_phalanx_5"
Transform745 = x3d.Transform()
Transform745.translation = [-0.1262,0.0023,-0.0077]
Transform746 = x3d.Transform()
"""Empty Transform"""
Shape747 = x3d.Shape()
Shape747.USE = "HAnimJointShape"

Transform746.children.append(Shape747)

Transform745.children.append(Transform746)

HAnimSegment744.children.append(Transform745)
Shape748 = x3d.Shape()
LineSet749 = x3d.LineSet()
LineSet749.vertexCount = [2]
Coordinate750 = x3d.Coordinate()

LineSet749.coord = Coordinate750
"""from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2"""
ColorRGBA751 = x3d.ColorRGBA()
ColorRGBA751.USE = "HAnimSegmentLineColorRGBA"

LineSet749.color = ColorRGBA751

Shape748.geometry = LineSet749

HAnimSegment744.children.append(Shape748)

HAnimJoint743.children.append(HAnimSegment744)
HAnimJoint752 = x3d.HAnimJoint()
HAnimJoint752.name = "r_tarsal_distal_interphalangeal_5"
HAnimJoint752.DEF = "hanim_r_tarsal_distal_interphalangeal_5"
HAnimJoint752.center = [-0.1271,0,0]
HAnimJoint752.ulimit = [0,0,0]
HAnimJoint752.llimit = [0,0,0]

HAnimJoint743.children.append(HAnimJoint752)

HAnimJoint727.children.append(HAnimJoint743)

HAnimJoint718.children.append(HAnimJoint727)

HAnimJoint677.children.append(HAnimJoint718)

HAnimJoint668.children.append(HAnimJoint677)

HAnimJoint515.children.append(HAnimJoint668)

HAnimJoint485.children.append(HAnimJoint515)

HAnimJoint448.children.append(HAnimJoint485)

HAnimJoint60.children.append(HAnimJoint448)

HAnimJoint47.children.append(HAnimJoint60)
HAnimJoint753 = x3d.HAnimJoint()
HAnimJoint753.name = "vl5"
HAnimJoint753.DEF = "hanim_vl5"
HAnimJoint753.center = [0.0028,1.0568,-0.0776]
HAnimJoint753.ulimit = [0,0,0]
HAnimJoint753.llimit = [0,0,0]
HAnimSegment754 = x3d.HAnimSegment()
HAnimSegment754.name = "l5"
HAnimSegment754.DEF = "hanim_l5"
Transform755 = x3d.Transform()
Transform755.translation = [0.0028,1.0568,-0.0776]
Transform756 = x3d.Transform()
"""Empty Transform"""
Shape757 = x3d.Shape()
Shape757.USE = "HAnimJointShape"

Transform756.children.append(Shape757)

Transform755.children.append(Transform756)

HAnimSegment754.children.append(Transform755)
Shape758 = x3d.Shape()
LineSet759 = x3d.LineSet()
LineSet759.vertexCount = [2]
Coordinate760 = x3d.Coordinate()

LineSet759.coord = Coordinate760
"""from vl5 to vl4 vertices 2"""
ColorRGBA761 = x3d.ColorRGBA()
ColorRGBA761.USE = "HAnimSegmentLineColorRGBA"

LineSet759.color = ColorRGBA761

Shape758.geometry = LineSet759

HAnimSegment754.children.append(Shape758)
HAnimSite762 = x3d.HAnimSite()
HAnimSite762.name = "navel"
HAnimSite762.DEF = "hanim_navel"
HAnimSite762.translation = [0.0069,1.0966,0.1017]
TouchSensor763 = x3d.TouchSensor()
TouchSensor763.description = "HAnimSite 84 navel"

HAnimSite762.children.append(TouchSensor763)
Shape764 = x3d.Shape()
Shape764.USE = "HAnimSiteShape"

HAnimSite762.children.append(Shape764)
Billboard765 = x3d.Billboard()
Shape766 = x3d.Shape()
Text767 = x3d.Text()
Text767.string = ["84"]
FontStyle768 = x3d.FontStyle()
FontStyle768.size = 0.035

Text767.fontStyle = FontStyle768

Shape766.geometry = Text767

Billboard765.children.append(Shape766)

HAnimSite762.children.append(Billboard765)

HAnimSegment754.children.append(HAnimSite762)
HAnimSite769 = x3d.HAnimSite()
HAnimSite769.name = "waist_preferred_anterior"
HAnimSite769.DEF = "hanim_waist_preferred_anterior"
TouchSensor770 = x3d.TouchSensor()
TouchSensor770.description = "HAnimSite 26 waist_preferred_anterior"

HAnimSite769.children.append(TouchSensor770)
Shape771 = x3d.Shape()
Shape771.USE = "HAnimSiteShape"

HAnimSite769.children.append(Shape771)
Billboard772 = x3d.Billboard()
Shape773 = x3d.Shape()
Text774 = x3d.Text()
Text774.string = ["26"]
FontStyle775 = x3d.FontStyle()
FontStyle775.size = 0.035

Text774.fontStyle = FontStyle775

Shape773.geometry = Text774

Billboard772.children.append(Shape773)

HAnimSite769.children.append(Billboard772)

HAnimSegment754.children.append(HAnimSite769)
HAnimSite776 = x3d.HAnimSite()
HAnimSite776.name = "waist_preferred_posterior"
HAnimSite776.DEF = "hanim_waist_preferred_posterior"
HAnimSite776.translation = [0.29,1.0915,-0.1091]
TouchSensor777 = x3d.TouchSensor()
TouchSensor777.description = "HAnimSite 27 waist_preferred_posterior"

HAnimSite776.children.append(TouchSensor777)
Shape778 = x3d.Shape()
Shape778.USE = "HAnimSiteShape"

HAnimSite776.children.append(Shape778)
Billboard779 = x3d.Billboard()
Shape780 = x3d.Shape()
Text781 = x3d.Text()
Text781.string = ["27"]
FontStyle782 = x3d.FontStyle()
FontStyle782.size = 0.035

Text781.fontStyle = FontStyle782

Shape780.geometry = Text781

Billboard779.children.append(Shape780)

HAnimSite776.children.append(Billboard779)

HAnimSegment754.children.append(HAnimSite776)

HAnimJoint753.children.append(HAnimSegment754)
HAnimJoint783 = x3d.HAnimJoint()
HAnimJoint783.name = "vl4"
HAnimJoint783.DEF = "hanim_vl4"
HAnimJoint783.center = [0.0035,1.0925,-0.0787]
HAnimJoint783.ulimit = [0,0,0]
HAnimJoint783.llimit = [0,0,0]
HAnimSegment784 = x3d.HAnimSegment()
HAnimSegment784.name = "l4"
HAnimSegment784.DEF = "hanim_l4"
Transform785 = x3d.Transform()
Transform785.translation = [0.0035,1.0925,-0.0787]
Transform786 = x3d.Transform()
"""Empty Transform"""
Shape787 = x3d.Shape()
Shape787.USE = "HAnimJointShape"

Transform786.children.append(Shape787)

Transform785.children.append(Transform786)

HAnimSegment784.children.append(Transform785)
Shape788 = x3d.Shape()
LineSet789 = x3d.LineSet()
LineSet789.vertexCount = [2]
Coordinate790 = x3d.Coordinate()

LineSet789.coord = Coordinate790
"""from vl4 to vl3 vertices 2"""
ColorRGBA791 = x3d.ColorRGBA()
ColorRGBA791.USE = "HAnimSegmentLineColorRGBA"

LineSet789.color = ColorRGBA791

Shape788.geometry = LineSet789

HAnimSegment784.children.append(Shape788)

HAnimJoint783.children.append(HAnimSegment784)
HAnimJoint792 = x3d.HAnimJoint()
HAnimJoint792.name = "vl3"
HAnimJoint792.DEF = "hanim_vl3"
HAnimJoint792.center = [0.0041,1.1276,-0.0796]
HAnimJoint792.ulimit = [0,0,0]
HAnimJoint792.llimit = [0,0,0]
HAnimSegment793 = x3d.HAnimSegment()
HAnimSegment793.name = "l3"
HAnimSegment793.DEF = "hanim_l3"
Transform794 = x3d.Transform()
Transform794.translation = [0.0041,1.1276,-0.0796]
Transform795 = x3d.Transform()
"""Empty Transform"""
Shape796 = x3d.Shape()
Shape796.USE = "HAnimJointShape"

Transform795.children.append(Shape796)

Transform794.children.append(Transform795)

HAnimSegment793.children.append(Transform794)
Shape797 = x3d.Shape()
LineSet798 = x3d.LineSet()
LineSet798.vertexCount = [2]
Coordinate799 = x3d.Coordinate()

LineSet798.coord = Coordinate799
"""from vl3 to vl2 vertices 2"""
ColorRGBA800 = x3d.ColorRGBA()
ColorRGBA800.USE = "HAnimSegmentLineColorRGBA"

LineSet798.color = ColorRGBA800

Shape797.geometry = LineSet798

HAnimSegment793.children.append(Shape797)

HAnimJoint792.children.append(HAnimSegment793)
HAnimJoint801 = x3d.HAnimJoint()
HAnimJoint801.name = "vl2"
HAnimJoint801.DEF = "hanim_vl2"
HAnimJoint801.center = [0.0045,1.1546,-0.08]
HAnimJoint801.ulimit = [0,0,0]
HAnimJoint801.llimit = [0,0,0]
HAnimSegment802 = x3d.HAnimSegment()
HAnimSegment802.name = "l2"
HAnimSegment802.DEF = "hanim_l2"
Transform803 = x3d.Transform()
Transform803.translation = [0.0045,1.1546,-0.08]
Transform804 = x3d.Transform()
"""Empty Transform"""
Shape805 = x3d.Shape()
Shape805.USE = "HAnimJointShape"

Transform804.children.append(Shape805)

Transform803.children.append(Transform804)

HAnimSegment802.children.append(Transform803)
Shape806 = x3d.Shape()
LineSet807 = x3d.LineSet()
LineSet807.vertexCount = [2]
Coordinate808 = x3d.Coordinate()

LineSet807.coord = Coordinate808
"""from vl2 to vl1 vertices 2"""
ColorRGBA809 = x3d.ColorRGBA()
ColorRGBA809.USE = "HAnimSegmentLineColorRGBA"

LineSet807.color = ColorRGBA809

Shape806.geometry = LineSet807

HAnimSegment802.children.append(Shape806)
HAnimSite810 = x3d.HAnimSite()
HAnimSite810.name = "l_rib10"
HAnimSite810.DEF = "hanim_l_rib10"
HAnimSite810.translation = [0.0871,1.1925,0.0992]
TouchSensor811 = x3d.TouchSensor()
TouchSensor811.description = "HAnimSite 28 l_rib10"

HAnimSite810.children.append(TouchSensor811)
Shape812 = x3d.Shape()
Shape812.USE = "HAnimSiteShape"

HAnimSite810.children.append(Shape812)
Billboard813 = x3d.Billboard()
Shape814 = x3d.Shape()
Text815 = x3d.Text()
Text815.string = ["28"]
FontStyle816 = x3d.FontStyle()
FontStyle816.size = 0.035

Text815.fontStyle = FontStyle816

Shape814.geometry = Text815

Billboard813.children.append(Shape814)

HAnimSite810.children.append(Billboard813)

HAnimSegment802.children.append(HAnimSite810)
HAnimSite817 = x3d.HAnimSite()
HAnimSite817.name = "r_rib10"
HAnimSite817.DEF = "hanim_r_rib10"
HAnimSite817.translation = [-0.0711,1.1941,0.1016]
TouchSensor818 = x3d.TouchSensor()
TouchSensor818.description = "HAnimSite 30 r_rib10"

HAnimSite817.children.append(TouchSensor818)
Shape819 = x3d.Shape()
Shape819.USE = "HAnimSiteShape"

HAnimSite817.children.append(Shape819)
Billboard820 = x3d.Billboard()
Shape821 = x3d.Shape()
Text822 = x3d.Text()
Text822.string = ["30"]
FontStyle823 = x3d.FontStyle()
FontStyle823.size = 0.035

Text822.fontStyle = FontStyle823

Shape821.geometry = Text822

Billboard820.children.append(Shape821)

HAnimSite817.children.append(Billboard820)

HAnimSegment802.children.append(HAnimSite817)
HAnimSite824 = x3d.HAnimSite()
HAnimSite824.name = "spine_2_middle_back"
HAnimSite824.DEF = "hanim_spine_2_middle_back"
TouchSensor825 = x3d.TouchSensor()
TouchSensor825.description = "HAnimSite spine_2_middle_back"

HAnimSite824.children.append(TouchSensor825)
Shape826 = x3d.Shape()
Shape826.USE = "HAnimSiteShape"

HAnimSite824.children.append(Shape826)
Billboard827 = x3d.Billboard()
Shape828 = x3d.Shape()
Text829 = x3d.Text()
Text829.string = [""]
FontStyle830 = x3d.FontStyle()
FontStyle830.size = 0.035

Text829.fontStyle = FontStyle830

Shape828.geometry = Text829

Billboard827.children.append(Shape828)

HAnimSite824.children.append(Billboard827)

HAnimSegment802.children.append(HAnimSite824)

HAnimJoint801.children.append(HAnimSegment802)
HAnimJoint831 = x3d.HAnimJoint()
HAnimJoint831.name = "vl1"
HAnimJoint831.DEF = "hanim_vl1"
HAnimJoint831.center = [0.0048,1.1912,-0.0805]
HAnimJoint831.ulimit = [0,0,0]
HAnimJoint831.llimit = [0,0,0]
HAnimSegment832 = x3d.HAnimSegment()
HAnimSegment832.name = "l1"
HAnimSegment832.DEF = "hanim_l1"
Transform833 = x3d.Transform()
Transform833.translation = [0.0048,1.1912,-0.0805]
Transform834 = x3d.Transform()
"""Empty Transform"""
Shape835 = x3d.Shape()
Shape835.USE = "HAnimJointShape"

Transform834.children.append(Shape835)

Transform833.children.append(Transform834)

HAnimSegment832.children.append(Transform833)
Shape836 = x3d.Shape()
LineSet837 = x3d.LineSet()
LineSet837.vertexCount = [2]
Coordinate838 = x3d.Coordinate()

LineSet837.coord = Coordinate838
"""from vl1 to vt12 vertices 2"""
ColorRGBA839 = x3d.ColorRGBA()
ColorRGBA839.USE = "HAnimSegmentLineColorRGBA"

LineSet837.color = ColorRGBA839

Shape836.geometry = LineSet837

HAnimSegment832.children.append(Shape836)

HAnimJoint831.children.append(HAnimSegment832)
HAnimJoint840 = x3d.HAnimJoint()
HAnimJoint840.name = "vt12"
HAnimJoint840.DEF = "hanim_vt12"
HAnimJoint840.center = [0.0051,1.2278,-0.0808]
HAnimJoint840.ulimit = [0,0,0]
HAnimJoint840.llimit = [0,0,0]
HAnimSegment841 = x3d.HAnimSegment()
HAnimSegment841.name = "t12"
HAnimSegment841.DEF = "hanim_t12"
Transform842 = x3d.Transform()
Transform842.translation = [0.0051,1.2278,-0.0808]
Transform843 = x3d.Transform()
"""Empty Transform"""
Shape844 = x3d.Shape()
Shape844.USE = "HAnimJointShape"

Transform843.children.append(Shape844)

Transform842.children.append(Transform843)

HAnimSegment841.children.append(Transform842)
Shape845 = x3d.Shape()
LineSet846 = x3d.LineSet()
LineSet846.vertexCount = [2]
Coordinate847 = x3d.Coordinate()

LineSet846.coord = Coordinate847
"""from vt12 to vt11 vertices 2"""
ColorRGBA848 = x3d.ColorRGBA()
ColorRGBA848.USE = "HAnimSegmentLineColorRGBA"

LineSet846.color = ColorRGBA848

Shape845.geometry = LineSet846

HAnimSegment841.children.append(Shape845)

HAnimJoint840.children.append(HAnimSegment841)
HAnimJoint849 = x3d.HAnimJoint()
HAnimJoint849.name = "vt11"
HAnimJoint849.DEF = "hanim_vt11"
HAnimJoint849.center = [0.0053,1.2679,-0.081]
HAnimJoint849.ulimit = [0,0,0]
HAnimJoint849.llimit = [0,0,0]
HAnimSegment850 = x3d.HAnimSegment()
HAnimSegment850.name = "t11"
HAnimSegment850.DEF = "hanim_t11"
Transform851 = x3d.Transform()
Transform851.translation = [0.0053,1.2679,-0.081]
Transform852 = x3d.Transform()
"""Empty Transform"""
Shape853 = x3d.Shape()
Shape853.USE = "HAnimJointShape"

Transform852.children.append(Shape853)

Transform851.children.append(Transform852)

HAnimSegment850.children.append(Transform851)
Shape854 = x3d.Shape()
LineSet855 = x3d.LineSet()
LineSet855.vertexCount = [2]
Coordinate856 = x3d.Coordinate()

LineSet855.coord = Coordinate856
"""from vt11 to vt10 vertices 2"""
ColorRGBA857 = x3d.ColorRGBA()
ColorRGBA857.USE = "HAnimSegmentLineColorRGBA"

LineSet855.color = ColorRGBA857

Shape854.geometry = LineSet855

HAnimSegment850.children.append(Shape854)

HAnimJoint849.children.append(HAnimSegment850)
HAnimJoint858 = x3d.HAnimJoint()
HAnimJoint858.name = "vt10"
HAnimJoint858.DEF = "hanim_vt10"
HAnimJoint858.center = [0.0056,1.2848,-0.0822]
HAnimJoint858.ulimit = [0,0,0]
HAnimJoint858.llimit = [0,0,0]
HAnimSegment859 = x3d.HAnimSegment()
HAnimSegment859.name = "t10"
HAnimSegment859.DEF = "hanim_t10"
Transform860 = x3d.Transform()
Transform860.translation = [0.0056,1.2848,-0.0822]
Transform861 = x3d.Transform()
"""Empty Transform"""
Shape862 = x3d.Shape()
Shape862.USE = "HAnimJointShape"

Transform861.children.append(Shape862)

Transform860.children.append(Transform861)

HAnimSegment859.children.append(Transform860)
Shape863 = x3d.Shape()
LineSet864 = x3d.LineSet()
LineSet864.vertexCount = [2]
Coordinate865 = x3d.Coordinate()

LineSet864.coord = Coordinate865
"""from vt10 to vt9 vertices 2"""
ColorRGBA866 = x3d.ColorRGBA()
ColorRGBA866.USE = "HAnimSegmentLineColorRGBA"

LineSet864.color = ColorRGBA866

Shape863.geometry = LineSet864

HAnimSegment859.children.append(Shape863)
HAnimSite867 = x3d.HAnimSite()
HAnimSite867.name = "substernale"
HAnimSite867.DEF = "hanim_substernale"
HAnimSite867.translation = [0.0085,1.2995,0.1147]
TouchSensor868 = x3d.TouchSensor()
TouchSensor868.description = "HAnimSite 13 substernale"

HAnimSite867.children.append(TouchSensor868)
Shape869 = x3d.Shape()
Shape869.USE = "HAnimSiteShape"

HAnimSite867.children.append(Shape869)
Billboard870 = x3d.Billboard()
Shape871 = x3d.Shape()
Text872 = x3d.Text()
Text872.string = ["13"]
FontStyle873 = x3d.FontStyle()
FontStyle873.size = 0.035

Text872.fontStyle = FontStyle873

Shape871.geometry = Text872

Billboard870.children.append(Shape871)

HAnimSite867.children.append(Billboard870)

HAnimSegment859.children.append(HAnimSite867)

HAnimJoint858.children.append(HAnimSegment859)
HAnimJoint874 = x3d.HAnimJoint()
HAnimJoint874.name = "vt9"
HAnimJoint874.DEF = "hanim_vt9"
HAnimJoint874.center = [0.0057,1.3126,-0.0838]
HAnimJoint874.ulimit = [0,0,0]
HAnimJoint874.llimit = [0,0,0]
HAnimSegment875 = x3d.HAnimSegment()
HAnimSegment875.name = "t9"
HAnimSegment875.DEF = "hanim_t9"
Transform876 = x3d.Transform()
Transform876.translation = [0.0057,1.3126,-0.0838]
Transform877 = x3d.Transform()
"""Empty Transform"""
Shape878 = x3d.Shape()
Shape878.USE = "HAnimJointShape"

Transform877.children.append(Shape878)

Transform876.children.append(Transform877)

HAnimSegment875.children.append(Transform876)
Shape879 = x3d.Shape()
LineSet880 = x3d.LineSet()
LineSet880.vertexCount = [2]
Coordinate881 = x3d.Coordinate()

LineSet880.coord = Coordinate881
"""from vt9 to vt8 vertices 2"""
ColorRGBA882 = x3d.ColorRGBA()
ColorRGBA882.USE = "HAnimSegmentLineColorRGBA"

LineSet880.color = ColorRGBA882

Shape879.geometry = LineSet880

HAnimSegment875.children.append(Shape879)
HAnimSite883 = x3d.HAnimSite()
HAnimSite883.name = "l_thelion"
HAnimSite883.DEF = "hanim_l_thelion"
HAnimSite883.translation = [0.0918,1.3382,0.1192]
TouchSensor884 = x3d.TouchSensor()
TouchSensor884.description = "HAnimSite 29 l_thelion"

HAnimSite883.children.append(TouchSensor884)
Shape885 = x3d.Shape()
Shape885.USE = "HAnimSiteShape"

HAnimSite883.children.append(Shape885)
Billboard886 = x3d.Billboard()
Shape887 = x3d.Shape()
Text888 = x3d.Text()
Text888.string = ["29"]
FontStyle889 = x3d.FontStyle()
FontStyle889.size = 0.035

Text888.fontStyle = FontStyle889

Shape887.geometry = Text888

Billboard886.children.append(Shape887)

HAnimSite883.children.append(Billboard886)

HAnimSegment875.children.append(HAnimSite883)
HAnimSite890 = x3d.HAnimSite()
HAnimSite890.name = "r_thelion"
HAnimSite890.DEF = "hanim_r_thelion"
HAnimSite890.translation = [-0.0736,1.3385,0.1217]
TouchSensor891 = x3d.TouchSensor()
TouchSensor891.description = "HAnimSite 31 r_thelion"

HAnimSite890.children.append(TouchSensor891)
Shape892 = x3d.Shape()
Shape892.USE = "HAnimSiteShape"

HAnimSite890.children.append(Shape892)
Billboard893 = x3d.Billboard()
Shape894 = x3d.Shape()
Text895 = x3d.Text()
Text895.string = ["31"]
FontStyle896 = x3d.FontStyle()
FontStyle896.size = 0.035

Text895.fontStyle = FontStyle896

Shape894.geometry = Text895

Billboard893.children.append(Shape894)

HAnimSite890.children.append(Billboard893)

HAnimSegment875.children.append(HAnimSite890)

HAnimJoint874.children.append(HAnimSegment875)
HAnimJoint897 = x3d.HAnimJoint()
HAnimJoint897.name = "vt8"
HAnimJoint897.DEF = "hanim_vt8"
HAnimJoint897.center = [0.0057,1.3382,-0.0845]
HAnimJoint897.ulimit = [0,0,0]
HAnimJoint897.llimit = [0,0,0]
HAnimSegment898 = x3d.HAnimSegment()
HAnimSegment898.name = "t8"
HAnimSegment898.DEF = "hanim_t8"
Transform899 = x3d.Transform()
Transform899.translation = [0.0057,1.3382,-0.0845]
Transform900 = x3d.Transform()
"""Empty Transform"""
Shape901 = x3d.Shape()
Shape901.USE = "HAnimJointShape"

Transform900.children.append(Shape901)

Transform899.children.append(Transform900)

HAnimSegment898.children.append(Transform899)
Shape902 = x3d.Shape()
LineSet903 = x3d.LineSet()
LineSet903.vertexCount = [2]
Coordinate904 = x3d.Coordinate()

LineSet903.coord = Coordinate904
"""from vt8 to vt7 vertices 2"""
ColorRGBA905 = x3d.ColorRGBA()
ColorRGBA905.USE = "HAnimSegmentLineColorRGBA"

LineSet903.color = ColorRGBA905

Shape902.geometry = LineSet903

HAnimSegment898.children.append(Shape902)

HAnimJoint897.children.append(HAnimSegment898)
HAnimJoint906 = x3d.HAnimJoint()
HAnimJoint906.name = "vt7"
HAnimJoint906.DEF = "hanim_vt7"
HAnimJoint906.center = [0.0058,1.3625,-0.0833]
HAnimJoint906.ulimit = [0,0,0]
HAnimJoint906.llimit = [0,0,0]
HAnimSegment907 = x3d.HAnimSegment()
HAnimSegment907.name = "t7"
HAnimSegment907.DEF = "hanim_t7"
Transform908 = x3d.Transform()
Transform908.translation = [0.0058,1.3625,-0.0833]
Transform909 = x3d.Transform()
"""Empty Transform"""
Shape910 = x3d.Shape()
Shape910.USE = "HAnimJointShape"

Transform909.children.append(Shape910)

Transform908.children.append(Transform909)

HAnimSegment907.children.append(Transform908)
Shape911 = x3d.Shape()
LineSet912 = x3d.LineSet()
LineSet912.vertexCount = [2]
Coordinate913 = x3d.Coordinate()

LineSet912.coord = Coordinate913
"""from vt7 to vt6 vertices 2"""
ColorRGBA914 = x3d.ColorRGBA()
ColorRGBA914.USE = "HAnimSegmentLineColorRGBA"

LineSet912.color = ColorRGBA914

Shape911.geometry = LineSet912

HAnimSegment907.children.append(Shape911)

HAnimJoint906.children.append(HAnimSegment907)
HAnimJoint915 = x3d.HAnimJoint()
HAnimJoint915.name = "vt6"
HAnimJoint915.DEF = "hanim_vt6"
HAnimJoint915.center = [0.0059,1.3866,-0.08]
HAnimJoint915.ulimit = [0,0,0]
HAnimJoint915.llimit = [0,0,0]
HAnimSegment916 = x3d.HAnimSegment()
HAnimSegment916.name = "t6"
HAnimSegment916.DEF = "hanim_t6"
Transform917 = x3d.Transform()
Transform917.translation = [0.0059,1.3866,-0.08]
Transform918 = x3d.Transform()
"""Empty Transform"""
Shape919 = x3d.Shape()
Shape919.USE = "HAnimJointShape"

Transform918.children.append(Shape919)

Transform917.children.append(Transform918)

HAnimSegment916.children.append(Transform917)
Shape920 = x3d.Shape()
LineSet921 = x3d.LineSet()
LineSet921.vertexCount = [2]
Coordinate922 = x3d.Coordinate()

LineSet921.coord = Coordinate922
"""from vt6 to vt5 vertices 2"""
ColorRGBA923 = x3d.ColorRGBA()
ColorRGBA923.USE = "HAnimSegmentLineColorRGBA"

LineSet921.color = ColorRGBA923

Shape920.geometry = LineSet921

HAnimSegment916.children.append(Shape920)
HAnimSite924 = x3d.HAnimSite()
HAnimSite924.name = "l_chest_midsagittal_plane"
HAnimSite924.DEF = "hanim_l_chest_midsagittal_plane"
TouchSensor925 = x3d.TouchSensor()
TouchSensor925.description = "HAnimSite 94 l_chest_midsagittal_plane"

HAnimSite924.children.append(TouchSensor925)
Shape926 = x3d.Shape()
Shape926.USE = "HAnimSiteShape"

HAnimSite924.children.append(Shape926)
Billboard927 = x3d.Billboard()
Shape928 = x3d.Shape()
Text929 = x3d.Text()
Text929.string = ["94"]
FontStyle930 = x3d.FontStyle()
FontStyle930.size = 0.035

Text929.fontStyle = FontStyle930

Shape928.geometry = Text929

Billboard927.children.append(Shape928)

HAnimSite924.children.append(Billboard927)

HAnimSegment916.children.append(HAnimSite924)
HAnimSite931 = x3d.HAnimSite()
HAnimSite931.name = "mesosternale"
HAnimSite931.DEF = "hanim_mesosternale"
TouchSensor932 = x3d.TouchSensor()
TouchSensor932.description = "HAnimSite 88 mesosternale"

HAnimSite931.children.append(TouchSensor932)
Shape933 = x3d.Shape()
Shape933.USE = "HAnimSiteShape"

HAnimSite931.children.append(Shape933)
Billboard934 = x3d.Billboard()
Shape935 = x3d.Shape()
Text936 = x3d.Text()
Text936.string = ["88"]
FontStyle937 = x3d.FontStyle()
FontStyle937.size = 0.035

Text936.fontStyle = FontStyle937

Shape935.geometry = Text936

Billboard934.children.append(Shape935)

HAnimSite931.children.append(Billboard934)

HAnimSegment916.children.append(HAnimSite931)
HAnimSite938 = x3d.HAnimSite()
HAnimSite938.name = "r_chest_midsagittal_plane"
HAnimSite938.DEF = "hanim_r_chest_midsagittal_plane"
TouchSensor939 = x3d.TouchSensor()
TouchSensor939.description = "HAnimSite 95 r_chest_midsagittal_plane"

HAnimSite938.children.append(TouchSensor939)
Shape940 = x3d.Shape()
Shape940.USE = "HAnimSiteShape"

HAnimSite938.children.append(Shape940)
Billboard941 = x3d.Billboard()
Shape942 = x3d.Shape()
Text943 = x3d.Text()
Text943.string = ["95"]
FontStyle944 = x3d.FontStyle()
FontStyle944.size = 0.035

Text943.fontStyle = FontStyle944

Shape942.geometry = Text943

Billboard941.children.append(Shape942)

HAnimSite938.children.append(Billboard941)

HAnimSegment916.children.append(HAnimSite938)
HAnimSite945 = x3d.HAnimSite()
HAnimSite945.name = "rear_center_midsagittal_plane"
HAnimSite945.DEF = "hanim_rear_center_midsagittal_plane"
TouchSensor946 = x3d.TouchSensor()
TouchSensor946.description = "HAnimSite 92 rear_center_midsagittal_plane"

HAnimSite945.children.append(TouchSensor946)
Shape947 = x3d.Shape()
Shape947.USE = "HAnimSiteShape"

HAnimSite945.children.append(Shape947)
Billboard948 = x3d.Billboard()
Shape949 = x3d.Shape()
Text950 = x3d.Text()
Text950.string = ["92"]
FontStyle951 = x3d.FontStyle()
FontStyle951.size = 0.035

Text950.fontStyle = FontStyle951

Shape949.geometry = Text950

Billboard948.children.append(Shape949)

HAnimSite945.children.append(Billboard948)

HAnimSegment916.children.append(HAnimSite945)

HAnimJoint915.children.append(HAnimSegment916)
HAnimJoint952 = x3d.HAnimJoint()
HAnimJoint952.name = "vt5"
HAnimJoint952.DEF = "hanim_vt5"
HAnimJoint952.center = [0.006,1.4102,-0.0745]
HAnimJoint952.ulimit = [0,0,0]
HAnimJoint952.llimit = [0,0,0]
HAnimSegment953 = x3d.HAnimSegment()
HAnimSegment953.name = "t5"
HAnimSegment953.DEF = "hanim_t5"
Transform954 = x3d.Transform()
Transform954.translation = [0.006,1.4102,-0.0745]
Transform955 = x3d.Transform()
"""Empty Transform"""
Shape956 = x3d.Shape()
Shape956.USE = "HAnimJointShape"

Transform955.children.append(Shape956)

Transform954.children.append(Transform955)

HAnimSegment953.children.append(Transform954)
Shape957 = x3d.Shape()
LineSet958 = x3d.LineSet()
LineSet958.vertexCount = [2]
Coordinate959 = x3d.Coordinate()

LineSet958.coord = Coordinate959
"""from vt5 to vt4 vertices 2"""
ColorRGBA960 = x3d.ColorRGBA()
ColorRGBA960.USE = "HAnimSegmentLineColorRGBA"

LineSet958.color = ColorRGBA960

Shape957.geometry = LineSet958

HAnimSegment953.children.append(Shape957)
HAnimSite961 = x3d.HAnimSite()
HAnimSite961.name = "spine_1_middle_back"
HAnimSite961.DEF = "hanim_spine_1_middle_back"
TouchSensor962 = x3d.TouchSensor()
TouchSensor962.description = "HAnimSite 24 spine_1_middle_back"

HAnimSite961.children.append(TouchSensor962)
Shape963 = x3d.Shape()
Shape963.USE = "HAnimSiteShape"

HAnimSite961.children.append(Shape963)
Billboard964 = x3d.Billboard()
Shape965 = x3d.Shape()
Text966 = x3d.Text()
Text966.string = ["24"]
FontStyle967 = x3d.FontStyle()
FontStyle967.size = 0.035

Text966.fontStyle = FontStyle967

Shape965.geometry = Text966

Billboard964.children.append(Shape965)

HAnimSite961.children.append(Billboard964)

HAnimSegment953.children.append(HAnimSite961)

HAnimJoint952.children.append(HAnimSegment953)
HAnimJoint968 = x3d.HAnimJoint()
HAnimJoint968.name = "vt4"
HAnimJoint968.DEF = "hanim_vt4"
HAnimJoint968.center = [0.0061,1.432,-0.0675]
HAnimJoint968.ulimit = [0,0,0]
HAnimJoint968.llimit = [0,0,0]
HAnimSegment969 = x3d.HAnimSegment()
HAnimSegment969.name = "t4"
HAnimSegment969.DEF = "hanim_t4"
Transform970 = x3d.Transform()
Transform970.translation = [0.0061,1.432,-0.0675]
Transform971 = x3d.Transform()
"""Empty Transform"""
Shape972 = x3d.Shape()
Shape972.USE = "HAnimJointShape"

Transform971.children.append(Shape972)

Transform970.children.append(Transform971)

HAnimSegment969.children.append(Transform970)
Shape973 = x3d.Shape()
LineSet974 = x3d.LineSet()
LineSet974.vertexCount = [2]
Coordinate975 = x3d.Coordinate()

LineSet974.coord = Coordinate975
"""from vt4 to vt3 vertices 2"""
ColorRGBA976 = x3d.ColorRGBA()
ColorRGBA976.USE = "HAnimSegmentLineColorRGBA"

LineSet974.color = ColorRGBA976

Shape973.geometry = LineSet974

HAnimSegment969.children.append(Shape973)

HAnimJoint968.children.append(HAnimSegment969)
HAnimJoint977 = x3d.HAnimJoint()
HAnimJoint977.name = "vt3"
HAnimJoint977.DEF = "hanim_vt3"
HAnimJoint977.center = [0.0062,1.4583,-0.057]
HAnimJoint977.ulimit = [0,0,0]
HAnimJoint977.llimit = [0,0,0]
HAnimSegment978 = x3d.HAnimSegment()
HAnimSegment978.name = "t3"
HAnimSegment978.DEF = "hanim_t3"
Transform979 = x3d.Transform()
Transform979.translation = [0.0062,1.4583,-0.057]
Transform980 = x3d.Transform()
"""Empty Transform"""
Shape981 = x3d.Shape()
Shape981.USE = "HAnimJointShape"

Transform980.children.append(Shape981)

Transform979.children.append(Transform980)

HAnimSegment978.children.append(Transform979)
Shape982 = x3d.Shape()
LineSet983 = x3d.LineSet()
LineSet983.vertexCount = [2]
Coordinate984 = x3d.Coordinate()

LineSet983.coord = Coordinate984
"""from vt3 to vt2 vertices 2"""
ColorRGBA985 = x3d.ColorRGBA()
ColorRGBA985.USE = "HAnimSegmentLineColorRGBA"

LineSet983.color = ColorRGBA985

Shape982.geometry = LineSet983

HAnimSegment978.children.append(Shape982)

HAnimJoint977.children.append(HAnimSegment978)
HAnimJoint986 = x3d.HAnimJoint()
HAnimJoint986.name = "vt2"
HAnimJoint986.DEF = "hanim_vt2"
HAnimJoint986.center = [0.0063,1.4761,-0.0484]
HAnimJoint986.ulimit = [0,0,0]
HAnimJoint986.llimit = [0,0,0]
HAnimSegment987 = x3d.HAnimSegment()
HAnimSegment987.name = "t2"
HAnimSegment987.DEF = "hanim_t2"
Transform988 = x3d.Transform()
Transform988.translation = [0.0063,1.4761,-0.0484]
Transform989 = x3d.Transform()
"""Empty Transform"""
Shape990 = x3d.Shape()
Shape990.USE = "HAnimJointShape"

Transform989.children.append(Shape990)

Transform988.children.append(Transform989)

HAnimSegment987.children.append(Transform988)
Shape991 = x3d.Shape()
LineSet992 = x3d.LineSet()
LineSet992.vertexCount = [2]
Coordinate993 = x3d.Coordinate()

LineSet992.coord = Coordinate993
"""from vt2 to vt1 vertices 2"""
ColorRGBA994 = x3d.ColorRGBA()
ColorRGBA994.USE = "HAnimSegmentLineColorRGBA"

LineSet992.color = ColorRGBA994

Shape991.geometry = LineSet992

HAnimSegment987.children.append(Shape991)

HAnimJoint986.children.append(HAnimSegment987)
HAnimJoint995 = x3d.HAnimJoint()
HAnimJoint995.name = "vt1"
HAnimJoint995.DEF = "hanim_vt1"
HAnimJoint995.center = [0.0065,1.4951,-0.0387]
HAnimJoint995.ulimit = [0,0,0]
HAnimJoint995.llimit = [0,0,0]
HAnimSegment996 = x3d.HAnimSegment()
HAnimSegment996.name = "t1"
HAnimSegment996.DEF = "hanim_t1"
Transform997 = x3d.Transform()
Transform997.translation = [0.0065,1.4951,-0.0387]
Transform998 = x3d.Transform()
"""Empty Transform"""
Shape999 = x3d.Shape()
Shape999.USE = "HAnimJointShape"

Transform998.children.append(Shape999)

Transform997.children.append(Transform998)

HAnimSegment996.children.append(Transform997)
Shape1000 = x3d.Shape()
LineSet1001 = x3d.LineSet()
LineSet1001.vertexCount = [2]
Coordinate1002 = x3d.Coordinate()

LineSet1001.coord = Coordinate1002
"""from vt1 to vc7 vertices 2"""
ColorRGBA1003 = x3d.ColorRGBA()
ColorRGBA1003.USE = "HAnimSegmentLineColorRGBA"

LineSet1001.color = ColorRGBA1003

Shape1000.geometry = LineSet1001

HAnimSegment996.children.append(Shape1000)
HAnimSite1004 = x3d.HAnimSite()
HAnimSite1004.name = "cervicale"
HAnimSite1004.DEF = "hanim_cervicale"
HAnimSite1004.translation = [0.0064,1.52,-0.0815]
TouchSensor1005 = x3d.TouchSensor()
TouchSensor1005.description = "HAnimSite 10 cervicale"

HAnimSite1004.children.append(TouchSensor1005)
Shape1006 = x3d.Shape()
Shape1006.USE = "HAnimSiteShape"

HAnimSite1004.children.append(Shape1006)
Billboard1007 = x3d.Billboard()
Shape1008 = x3d.Shape()
Text1009 = x3d.Text()
Text1009.string = ["10"]
FontStyle1010 = x3d.FontStyle()
FontStyle1010.size = 0.035

Text1009.fontStyle = FontStyle1010

Shape1008.geometry = Text1009

Billboard1007.children.append(Shape1008)

HAnimSite1004.children.append(Billboard1007)

HAnimSegment996.children.append(HAnimSite1004)
HAnimSite1011 = x3d.HAnimSite()
HAnimSite1011.name = "suprasternale"
HAnimSite1011.DEF = "hanim_suprasternale"
HAnimSite1011.translation = [0.0084,1.4714,0.0551]
TouchSensor1012 = x3d.TouchSensor()
TouchSensor1012.description = "HAnimSite 12 suprasternale"

HAnimSite1011.children.append(TouchSensor1012)
Shape1013 = x3d.Shape()
Shape1013.USE = "HAnimSiteShape"

HAnimSite1011.children.append(Shape1013)
Billboard1014 = x3d.Billboard()
Shape1015 = x3d.Shape()
Text1016 = x3d.Text()
Text1016.string = ["12"]
FontStyle1017 = x3d.FontStyle()
FontStyle1017.size = 0.035

Text1016.fontStyle = FontStyle1017

Shape1015.geometry = Text1016

Billboard1014.children.append(Shape1015)

HAnimSite1011.children.append(Billboard1014)

HAnimSegment996.children.append(HAnimSite1011)
Shape1018 = x3d.Shape()
LineSet1019 = x3d.LineSet()
LineSet1019.vertexCount = [2]
Coordinate1020 = x3d.Coordinate()

LineSet1019.coord = Coordinate1020
"""from vt1 to l_sternoclavicular vertices 2"""
ColorRGBA1021 = x3d.ColorRGBA()
ColorRGBA1021.USE = "HAnimSegmentLineColorRGBA"

LineSet1019.color = ColorRGBA1021

Shape1018.geometry = LineSet1019

HAnimSegment996.children.append(Shape1018)
Shape1022 = x3d.Shape()
LineSet1023 = x3d.LineSet()
LineSet1023.vertexCount = [2]
Coordinate1024 = x3d.Coordinate()

LineSet1023.coord = Coordinate1024
"""from vt1 to r_sternoclavicular vertices 2"""
ColorRGBA1025 = x3d.ColorRGBA()
ColorRGBA1025.USE = "HAnimSegmentLineColorRGBA"

LineSet1023.color = ColorRGBA1025

Shape1022.geometry = LineSet1023

HAnimSegment996.children.append(Shape1022)

HAnimJoint995.children.append(HAnimSegment996)
HAnimJoint1026 = x3d.HAnimJoint()
HAnimJoint1026.name = "vc7"
HAnimJoint1026.DEF = "hanim_vc7"
HAnimJoint1026.center = [0.0066,1.5132,-0.0301]
HAnimJoint1026.ulimit = [0,0,0]
HAnimJoint1026.llimit = [0,0,0]
HAnimSegment1027 = x3d.HAnimSegment()
HAnimSegment1027.name = "c7"
HAnimSegment1027.DEF = "hanim_c7"
Transform1028 = x3d.Transform()
Transform1028.translation = [0.0066,1.5132,-0.0301]
Transform1029 = x3d.Transform()
"""Empty Transform"""
Shape1030 = x3d.Shape()
Shape1030.USE = "HAnimJointShape"

Transform1029.children.append(Shape1030)

Transform1028.children.append(Transform1029)

HAnimSegment1027.children.append(Transform1028)
Shape1031 = x3d.Shape()
LineSet1032 = x3d.LineSet()
LineSet1032.vertexCount = [2]
Coordinate1033 = x3d.Coordinate()

LineSet1032.coord = Coordinate1033
"""from vc7 to vc6 vertices 2"""
ColorRGBA1034 = x3d.ColorRGBA()
ColorRGBA1034.USE = "HAnimSegmentLineColorRGBA"

LineSet1032.color = ColorRGBA1034

Shape1031.geometry = LineSet1032

HAnimSegment1027.children.append(Shape1031)
HAnimSite1035 = x3d.HAnimSite()
HAnimSite1035.name = "l_neck_base"
HAnimSite1035.DEF = "hanim_l_neck_base"
HAnimSite1035.translation = [0.0646,1.5141,-0.038]
TouchSensor1036 = x3d.TouchSensor()
TouchSensor1036.description = "HAnimSite 82 l_neck_base"

HAnimSite1035.children.append(TouchSensor1036)
Shape1037 = x3d.Shape()
Shape1037.USE = "HAnimSiteShape"

HAnimSite1035.children.append(Shape1037)
Billboard1038 = x3d.Billboard()
Shape1039 = x3d.Shape()
Text1040 = x3d.Text()
Text1040.string = ["82"]
FontStyle1041 = x3d.FontStyle()
FontStyle1041.size = 0.035

Text1040.fontStyle = FontStyle1041

Shape1039.geometry = Text1040

Billboard1038.children.append(Shape1039)

HAnimSite1035.children.append(Billboard1038)

HAnimSegment1027.children.append(HAnimSite1035)
HAnimSite1042 = x3d.HAnimSite()
HAnimSite1042.name = "r_neck_base"
HAnimSite1042.DEF = "hanim_r_neck_base"
HAnimSite1042.translation = [-0.0419,1.5149,-0.022]
TouchSensor1043 = x3d.TouchSensor()
TouchSensor1043.description = "HAnimSite 83 r_neck_base"

HAnimSite1042.children.append(TouchSensor1043)
Shape1044 = x3d.Shape()
Shape1044.USE = "HAnimSiteShape"

HAnimSite1042.children.append(Shape1044)
Billboard1045 = x3d.Billboard()
Shape1046 = x3d.Shape()
Text1047 = x3d.Text()
Text1047.string = ["83"]
FontStyle1048 = x3d.FontStyle()
FontStyle1048.size = 0.035

Text1047.fontStyle = FontStyle1048

Shape1046.geometry = Text1047

Billboard1045.children.append(Shape1046)

HAnimSite1042.children.append(Billboard1045)

HAnimSegment1027.children.append(HAnimSite1042)

HAnimJoint1026.children.append(HAnimSegment1027)
HAnimJoint1049 = x3d.HAnimJoint()
HAnimJoint1049.name = "vc6"
HAnimJoint1049.DEF = "hanim_vc6"
HAnimJoint1049.center = [0.0066,1.5357,-0.0143]
HAnimJoint1049.ulimit = [0,0,0]
HAnimJoint1049.llimit = [0,0,0]
HAnimSegment1050 = x3d.HAnimSegment()
HAnimSegment1050.name = "c6"
HAnimSegment1050.DEF = "hanim_c6"
Transform1051 = x3d.Transform()
Transform1051.translation = [0.0066,1.5357,-0.0143]
Transform1052 = x3d.Transform()
"""Empty Transform"""
Shape1053 = x3d.Shape()
Shape1053.USE = "HAnimJointShape"

Transform1052.children.append(Shape1053)

Transform1051.children.append(Transform1052)

HAnimSegment1050.children.append(Transform1051)
Shape1054 = x3d.Shape()
LineSet1055 = x3d.LineSet()
LineSet1055.vertexCount = [2]
Coordinate1056 = x3d.Coordinate()

LineSet1055.coord = Coordinate1056
"""from vc6 to vc5 vertices 2"""
ColorRGBA1057 = x3d.ColorRGBA()
ColorRGBA1057.USE = "HAnimSegmentLineColorRGBA"

LineSet1055.color = ColorRGBA1057

Shape1054.geometry = LineSet1055

HAnimSegment1050.children.append(Shape1054)

HAnimJoint1049.children.append(HAnimSegment1050)
HAnimJoint1058 = x3d.HAnimJoint()
HAnimJoint1058.name = "vc5"
HAnimJoint1058.DEF = "hanim_vc5"
HAnimJoint1058.center = [0.0066,1.552,-0.0082]
HAnimJoint1058.ulimit = [0,0,0]
HAnimJoint1058.llimit = [0,0,0]
HAnimSegment1059 = x3d.HAnimSegment()
HAnimSegment1059.name = "c5"
HAnimSegment1059.DEF = "hanim_c5"
Transform1060 = x3d.Transform()
Transform1060.translation = [0.0066,1.552,-0.0082]
Transform1061 = x3d.Transform()
"""Empty Transform"""
Shape1062 = x3d.Shape()
Shape1062.USE = "HAnimJointShape"

Transform1061.children.append(Shape1062)

Transform1060.children.append(Transform1061)

HAnimSegment1059.children.append(Transform1060)
Shape1063 = x3d.Shape()
LineSet1064 = x3d.LineSet()
LineSet1064.vertexCount = [2]
Coordinate1065 = x3d.Coordinate()

LineSet1064.coord = Coordinate1065
"""from vc5 to vc4 vertices 2"""
ColorRGBA1066 = x3d.ColorRGBA()
ColorRGBA1066.USE = "HAnimSegmentLineColorRGBA"

LineSet1064.color = ColorRGBA1066

Shape1063.geometry = LineSet1064

HAnimSegment1059.children.append(Shape1063)

HAnimJoint1058.children.append(HAnimSegment1059)
HAnimJoint1067 = x3d.HAnimJoint()
HAnimJoint1067.name = "vc4"
HAnimJoint1067.DEF = "hanim_vc4"
HAnimJoint1067.center = [0.0066,1.5662,-0.0084]
HAnimJoint1067.ulimit = [0,0,0]
HAnimJoint1067.llimit = [0,0,0]
HAnimSegment1068 = x3d.HAnimSegment()
HAnimSegment1068.name = "c4"
HAnimSegment1068.DEF = "hanim_c4"
Transform1069 = x3d.Transform()
Transform1069.translation = [0.0066,1.5662,-0.0084]
Transform1070 = x3d.Transform()
"""Empty Transform"""
Shape1071 = x3d.Shape()
Shape1071.USE = "HAnimJointShape"

Transform1070.children.append(Shape1071)

Transform1069.children.append(Transform1070)

HAnimSegment1068.children.append(Transform1069)
Shape1072 = x3d.Shape()
LineSet1073 = x3d.LineSet()
LineSet1073.vertexCount = [2]
Coordinate1074 = x3d.Coordinate()

LineSet1073.coord = Coordinate1074
"""from vc4 to vc3 vertices 2"""
ColorRGBA1075 = x3d.ColorRGBA()
ColorRGBA1075.USE = "HAnimSegmentLineColorRGBA"

LineSet1073.color = ColorRGBA1075

Shape1072.geometry = LineSet1073

HAnimSegment1068.children.append(Shape1072)

HAnimJoint1067.children.append(HAnimSegment1068)
HAnimJoint1076 = x3d.HAnimJoint()
HAnimJoint1076.name = "vc3"
HAnimJoint1076.DEF = "hanim_vc3"
HAnimJoint1076.center = [0.0066,1.58,-0.0103]
HAnimJoint1076.ulimit = [0,0,0]
HAnimJoint1076.llimit = [0,0,0]
HAnimSegment1077 = x3d.HAnimSegment()
HAnimSegment1077.name = "c3"
HAnimSegment1077.DEF = "hanim_c3"
Transform1078 = x3d.Transform()
Transform1078.translation = [0.0066,1.58,-0.0103]
Transform1079 = x3d.Transform()
"""Empty Transform"""
Shape1080 = x3d.Shape()
Shape1080.USE = "HAnimJointShape"

Transform1079.children.append(Shape1080)

Transform1078.children.append(Transform1079)

HAnimSegment1077.children.append(Transform1078)
Shape1081 = x3d.Shape()
LineSet1082 = x3d.LineSet()
LineSet1082.vertexCount = [2]
Coordinate1083 = x3d.Coordinate()

LineSet1082.coord = Coordinate1083
"""from vc3 to vc2 vertices 2"""
ColorRGBA1084 = x3d.ColorRGBA()
ColorRGBA1084.USE = "HAnimSegmentLineColorRGBA"

LineSet1082.color = ColorRGBA1084

Shape1081.geometry = LineSet1082

HAnimSegment1077.children.append(Shape1081)

HAnimJoint1076.children.append(HAnimSegment1077)
HAnimJoint1085 = x3d.HAnimJoint()
HAnimJoint1085.name = "vc2"
HAnimJoint1085.DEF = "hanim_vc2"
HAnimJoint1085.center = [0.0066,1.5928,-0.0103]
HAnimJoint1085.ulimit = [0,0,0]
HAnimJoint1085.llimit = [0,0,0]
HAnimSegment1086 = x3d.HAnimSegment()
HAnimSegment1086.name = "c2"
HAnimSegment1086.DEF = "hanim_c2"
Transform1087 = x3d.Transform()
Transform1087.translation = [0.0066,1.5928,-0.0103]
Transform1088 = x3d.Transform()
"""Empty Transform"""
Shape1089 = x3d.Shape()
Shape1089.USE = "HAnimJointShape"

Transform1088.children.append(Shape1089)

Transform1087.children.append(Transform1088)

HAnimSegment1086.children.append(Transform1087)
Shape1090 = x3d.Shape()
LineSet1091 = x3d.LineSet()
LineSet1091.vertexCount = [2]
Coordinate1092 = x3d.Coordinate()

LineSet1091.coord = Coordinate1092
"""from vc2 to vc1 vertices 2"""
ColorRGBA1093 = x3d.ColorRGBA()
ColorRGBA1093.USE = "HAnimSegmentLineColorRGBA"

LineSet1091.color = ColorRGBA1093

Shape1090.geometry = LineSet1091

HAnimSegment1086.children.append(Shape1090)
HAnimSite1094 = x3d.HAnimSite()
HAnimSite1094.name = "adams_apple"
HAnimSite1094.DEF = "hanim_adams_apple"
TouchSensor1095 = x3d.TouchSensor()
TouchSensor1095.description = "HAnimSite 11 adams_apple"

HAnimSite1094.children.append(TouchSensor1095)
Shape1096 = x3d.Shape()
Shape1096.USE = "HAnimSiteShape"

HAnimSite1094.children.append(Shape1096)
Billboard1097 = x3d.Billboard()
Shape1098 = x3d.Shape()
Text1099 = x3d.Text()
Text1099.string = ["11"]
FontStyle1100 = x3d.FontStyle()
FontStyle1100.size = 0.035

Text1099.fontStyle = FontStyle1100

Shape1098.geometry = Text1099

Billboard1097.children.append(Shape1098)

HAnimSite1094.children.append(Billboard1097)

HAnimSegment1086.children.append(HAnimSite1094)

HAnimJoint1085.children.append(HAnimSegment1086)
HAnimJoint1101 = x3d.HAnimJoint()
HAnimJoint1101.name = "vc1"
HAnimJoint1101.DEF = "hanim_vc1"
HAnimJoint1101.center = [0.0066,1.6144,-0.0034]
HAnimJoint1101.ulimit = [0,0,0]
HAnimJoint1101.llimit = [0,0,0]
HAnimSegment1102 = x3d.HAnimSegment()
HAnimSegment1102.name = "c1"
HAnimSegment1102.DEF = "hanim_c1"
Transform1103 = x3d.Transform()
Transform1103.translation = [0.0066,1.6144,-0.0034]
Transform1104 = x3d.Transform()
"""Empty Transform"""
Shape1105 = x3d.Shape()
Shape1105.USE = "HAnimJointShape"

Transform1104.children.append(Shape1105)

Transform1103.children.append(Transform1104)

HAnimSegment1102.children.append(Transform1103)
Shape1106 = x3d.Shape()
LineSet1107 = x3d.LineSet()
LineSet1107.vertexCount = [2]
Coordinate1108 = x3d.Coordinate()

LineSet1107.coord = Coordinate1108
"""from vc1 to skullbase vertices 2"""
ColorRGBA1109 = x3d.ColorRGBA()
ColorRGBA1109.USE = "HAnimSegmentLineColorRGBA"

LineSet1107.color = ColorRGBA1109

Shape1106.geometry = LineSet1107

HAnimSegment1102.children.append(Shape1106)

HAnimJoint1101.children.append(HAnimSegment1102)
HAnimJoint1110 = x3d.HAnimJoint()
HAnimJoint1110.name = "skullbase"
HAnimJoint1110.DEF = "hanim_skullbase"
HAnimJoint1110.center = [0.0044,1.6209,0.0236]
HAnimJoint1110.ulimit = [0,0,0]
HAnimJoint1110.llimit = [0,0,0]
HAnimSegment1111 = x3d.HAnimSegment()
HAnimSegment1111.name = "skull"
HAnimSegment1111.DEF = "hanim_skull"
Transform1112 = x3d.Transform()
Transform1112.translation = [0.0044,1.6209,0.0236]
Transform1113 = x3d.Transform()
"""Empty Transform"""
Shape1114 = x3d.Shape()
Shape1114.USE = "HAnimJointShape"

Transform1113.children.append(Shape1114)

Transform1112.children.append(Transform1113)

HAnimSegment1111.children.append(Transform1112)
Shape1115 = x3d.Shape()
LineSet1116 = x3d.LineSet()
LineSet1116.vertexCount = [2]
Coordinate1117 = x3d.Coordinate()

LineSet1116.coord = Coordinate1117
"""from skullbase to l_eyelid_joint vertices 2"""
ColorRGBA1118 = x3d.ColorRGBA()
ColorRGBA1118.USE = "HAnimSegmentLineColorRGBA"

LineSet1116.color = ColorRGBA1118

Shape1115.geometry = LineSet1116

HAnimSegment1111.children.append(Shape1115)
HAnimSite1119 = x3d.HAnimSite()
HAnimSite1119.name = "glabella"
HAnimSite1119.DEF = "hanim_glabella"
TouchSensor1120 = x3d.TouchSensor()
TouchSensor1120.description = "HAnimSite 1 glabella"

HAnimSite1119.children.append(TouchSensor1120)
Shape1121 = x3d.Shape()
Shape1121.USE = "HAnimSiteShape"

HAnimSite1119.children.append(Shape1121)
Billboard1122 = x3d.Billboard()
Shape1123 = x3d.Shape()
Text1124 = x3d.Text()
Text1124.string = ["1"]
FontStyle1125 = x3d.FontStyle()
FontStyle1125.size = 0.035

Text1124.fontStyle = FontStyle1125

Shape1123.geometry = Text1124

Billboard1122.children.append(Shape1123)

HAnimSite1119.children.append(Billboard1122)

HAnimSegment1111.children.append(HAnimSite1119)
HAnimSite1126 = x3d.HAnimSite()
HAnimSite1126.name = "l_ectocanthus"
HAnimSite1126.DEF = "hanim_l_ectocanthus"
TouchSensor1127 = x3d.TouchSensor()
TouchSensor1127.description = "HAnimSite 85 l_ectocanthus"

HAnimSite1126.children.append(TouchSensor1127)
Shape1128 = x3d.Shape()
Shape1128.USE = "HAnimSiteShape"

HAnimSite1126.children.append(Shape1128)
Billboard1129 = x3d.Billboard()
Shape1130 = x3d.Shape()
Text1131 = x3d.Text()
Text1131.string = ["85"]
FontStyle1132 = x3d.FontStyle()
FontStyle1132.size = 0.035

Text1131.fontStyle = FontStyle1132

Shape1130.geometry = Text1131

Billboard1129.children.append(Shape1130)

HAnimSite1126.children.append(Billboard1129)

HAnimSegment1111.children.append(HAnimSite1126)
HAnimSite1133 = x3d.HAnimSite()
HAnimSite1133.name = "l_infraorbitale"
HAnimSite1133.DEF = "hanim_l_infraorbitale"
HAnimSite1133.translation = [0.0341,1.6171,0.0752]
TouchSensor1134 = x3d.TouchSensor()
TouchSensor1134.description = "HAnimSite 3 l_infraorbitale"

HAnimSite1133.children.append(TouchSensor1134)
Shape1135 = x3d.Shape()
Shape1135.USE = "HAnimSiteShape"

HAnimSite1133.children.append(Shape1135)
Billboard1136 = x3d.Billboard()
Shape1137 = x3d.Shape()
Text1138 = x3d.Text()
Text1138.string = ["3"]
FontStyle1139 = x3d.FontStyle()
FontStyle1139.size = 0.035

Text1138.fontStyle = FontStyle1139

Shape1137.geometry = Text1138

Billboard1136.children.append(Shape1137)

HAnimSite1133.children.append(Billboard1136)

HAnimSegment1111.children.append(HAnimSite1133)
HAnimSite1140 = x3d.HAnimSite()
HAnimSite1140.name = "l_tragion"
HAnimSite1140.DEF = "hanim_l_tragion"
HAnimSite1140.translation = [0.0739,1.6348,0.0282]
TouchSensor1141 = x3d.TouchSensor()
TouchSensor1141.description = "HAnimSite 4 l_tragion"

HAnimSite1140.children.append(TouchSensor1141)
Shape1142 = x3d.Shape()
Shape1142.USE = "HAnimSiteShape"

HAnimSite1140.children.append(Shape1142)
Billboard1143 = x3d.Billboard()
Shape1144 = x3d.Shape()
Text1145 = x3d.Text()
Text1145.string = ["4"]
FontStyle1146 = x3d.FontStyle()
FontStyle1146.size = 0.035

Text1145.fontStyle = FontStyle1146

Shape1144.geometry = Text1145

Billboard1143.children.append(Shape1144)

HAnimSite1140.children.append(Billboard1143)

HAnimSegment1111.children.append(HAnimSite1140)
HAnimSite1147 = x3d.HAnimSite()
HAnimSite1147.name = "nuchale"
HAnimSite1147.DEF = "hanim_nuchale"
HAnimSite1147.translation = [0.0039,1.5972,-0.0796]
TouchSensor1148 = x3d.TouchSensor()
TouchSensor1148.description = "HAnimSite 81 nuchale"

HAnimSite1147.children.append(TouchSensor1148)
Shape1149 = x3d.Shape()
Shape1149.USE = "HAnimSiteShape"

HAnimSite1147.children.append(Shape1149)
Billboard1150 = x3d.Billboard()
Shape1151 = x3d.Shape()
Text1152 = x3d.Text()
Text1152.string = ["81"]
FontStyle1153 = x3d.FontStyle()
FontStyle1153.size = 0.035

Text1152.fontStyle = FontStyle1153

Shape1151.geometry = Text1152

Billboard1150.children.append(Shape1151)

HAnimSite1147.children.append(Billboard1150)

HAnimSegment1111.children.append(HAnimSite1147)
HAnimSite1154 = x3d.HAnimSite()
HAnimSite1154.name = "opisthocranion"
HAnimSite1154.DEF = "hanim_opisthocranion"
TouchSensor1155 = x3d.TouchSensor()
TouchSensor1155.description = "HAnimSite 89 opisthocranion"

HAnimSite1154.children.append(TouchSensor1155)
Shape1156 = x3d.Shape()
Shape1156.USE = "HAnimSiteShape"

HAnimSite1154.children.append(Shape1156)
Billboard1157 = x3d.Billboard()
Shape1158 = x3d.Shape()
Text1159 = x3d.Text()
Text1159.string = ["89"]
FontStyle1160 = x3d.FontStyle()
FontStyle1160.size = 0.035

Text1159.fontStyle = FontStyle1160

Shape1158.geometry = Text1159

Billboard1157.children.append(Shape1158)

HAnimSite1154.children.append(Billboard1157)

HAnimSegment1111.children.append(HAnimSite1154)
HAnimSite1161 = x3d.HAnimSite()
HAnimSite1161.name = "r_ectocanthus"
HAnimSite1161.DEF = "hanim_r_ectocanthus"
TouchSensor1162 = x3d.TouchSensor()
TouchSensor1162.description = "HAnimSite 86 r_ectocanthus"

HAnimSite1161.children.append(TouchSensor1162)
Shape1163 = x3d.Shape()
Shape1163.USE = "HAnimSiteShape"

HAnimSite1161.children.append(Shape1163)
Billboard1164 = x3d.Billboard()
Shape1165 = x3d.Shape()
Text1166 = x3d.Text()
Text1166.string = ["86"]
FontStyle1167 = x3d.FontStyle()
FontStyle1167.size = 0.035

Text1166.fontStyle = FontStyle1167

Shape1165.geometry = Text1166

Billboard1164.children.append(Shape1165)

HAnimSite1161.children.append(Billboard1164)

HAnimSegment1111.children.append(HAnimSite1161)
HAnimSite1168 = x3d.HAnimSite()
HAnimSite1168.name = "r_infraorbitale"
HAnimSite1168.DEF = "hanim_r_infraorbitale"
HAnimSite1168.translation = [-0.0237,1.6171,0.0752]
TouchSensor1169 = x3d.TouchSensor()
TouchSensor1169.description = "HAnimSite 6 r_infraorbitale"

HAnimSite1168.children.append(TouchSensor1169)
Shape1170 = x3d.Shape()
Shape1170.USE = "HAnimSiteShape"

HAnimSite1168.children.append(Shape1170)
Billboard1171 = x3d.Billboard()
Shape1172 = x3d.Shape()
Text1173 = x3d.Text()
Text1173.string = ["6"]
FontStyle1174 = x3d.FontStyle()
FontStyle1174.size = 0.035

Text1173.fontStyle = FontStyle1174

Shape1172.geometry = Text1173

Billboard1171.children.append(Shape1172)

HAnimSite1168.children.append(Billboard1171)

HAnimSegment1111.children.append(HAnimSite1168)
HAnimSite1175 = x3d.HAnimSite()
HAnimSite1175.name = "r_tragion"
HAnimSite1175.DEF = "hanim_r_tragion"
HAnimSite1175.translation = [-0.0646,1.6347,0.0302]
TouchSensor1176 = x3d.TouchSensor()
TouchSensor1176.description = "HAnimSite 7 r_tragion"

HAnimSite1175.children.append(TouchSensor1176)
Shape1177 = x3d.Shape()
Shape1177.USE = "HAnimSiteShape"

HAnimSite1175.children.append(Shape1177)
Billboard1178 = x3d.Billboard()
Shape1179 = x3d.Shape()
Text1180 = x3d.Text()
Text1180.string = ["7"]
FontStyle1181 = x3d.FontStyle()
FontStyle1181.size = 0.035

Text1180.fontStyle = FontStyle1181

Shape1179.geometry = Text1180

Billboard1178.children.append(Shape1179)

HAnimSite1175.children.append(Billboard1178)

HAnimSegment1111.children.append(HAnimSite1175)
HAnimSite1182 = x3d.HAnimSite()
HAnimSite1182.name = "sellion"
HAnimSite1182.DEF = "hanim_sellion"
HAnimSite1182.translation = [0.0058,1.6316,0.0852]
TouchSensor1183 = x3d.TouchSensor()
TouchSensor1183.description = "HAnimSite 2 sellion"

HAnimSite1182.children.append(TouchSensor1183)
Shape1184 = x3d.Shape()
Shape1184.USE = "HAnimSiteShape"

HAnimSite1182.children.append(Shape1184)
Billboard1185 = x3d.Billboard()
Shape1186 = x3d.Shape()
Text1187 = x3d.Text()
Text1187.string = ["2"]
FontStyle1188 = x3d.FontStyle()
FontStyle1188.size = 0.035

Text1187.fontStyle = FontStyle1188

Shape1186.geometry = Text1187

Billboard1185.children.append(Shape1186)

HAnimSite1182.children.append(Billboard1185)

HAnimSegment1111.children.append(HAnimSite1182)
HAnimSite1189 = x3d.HAnimSite()
HAnimSite1189.name = "skull_vertex"
HAnimSite1189.DEF = "hanim_skull_vertex"
HAnimSite1189.translation = [0.005,1.7504,0.0055]
TouchSensor1190 = x3d.TouchSensor()
TouchSensor1190.description = "HAnimSite 0 skull_vertex"

HAnimSite1189.children.append(TouchSensor1190)
Shape1191 = x3d.Shape()
Shape1191.USE = "HAnimSiteShape"

HAnimSite1189.children.append(Shape1191)
Billboard1192 = x3d.Billboard()
Shape1193 = x3d.Shape()
Text1194 = x3d.Text()
Text1194.string = ["0"]
FontStyle1195 = x3d.FontStyle()
FontStyle1195.size = 0.035

Text1194.fontStyle = FontStyle1195

Shape1193.geometry = Text1194

Billboard1192.children.append(Shape1193)

HAnimSite1189.children.append(Billboard1192)

HAnimSegment1111.children.append(HAnimSite1189)
Shape1196 = x3d.Shape()
LineSet1197 = x3d.LineSet()
LineSet1197.vertexCount = [2]
Coordinate1198 = x3d.Coordinate()

LineSet1197.coord = Coordinate1198
"""from skullbase to r_eyelid_joint vertices 2"""
ColorRGBA1199 = x3d.ColorRGBA()
ColorRGBA1199.USE = "HAnimSegmentLineColorRGBA"

LineSet1197.color = ColorRGBA1199

Shape1196.geometry = LineSet1197

HAnimSegment1111.children.append(Shape1196)
Shape1200 = x3d.Shape()
LineSet1201 = x3d.LineSet()
LineSet1201.vertexCount = [2]
Coordinate1202 = x3d.Coordinate()

LineSet1201.coord = Coordinate1202
"""from skullbase to l_eyeball_joint vertices 2"""
ColorRGBA1203 = x3d.ColorRGBA()
ColorRGBA1203.USE = "HAnimSegmentLineColorRGBA"

LineSet1201.color = ColorRGBA1203

Shape1200.geometry = LineSet1201

HAnimSegment1111.children.append(Shape1200)
Shape1204 = x3d.Shape()
LineSet1205 = x3d.LineSet()
LineSet1205.vertexCount = [2]
Coordinate1206 = x3d.Coordinate()

LineSet1205.coord = Coordinate1206
"""from skullbase to r_eyeball_joint vertices 2"""
ColorRGBA1207 = x3d.ColorRGBA()
ColorRGBA1207.USE = "HAnimSegmentLineColorRGBA"

LineSet1205.color = ColorRGBA1207

Shape1204.geometry = LineSet1205

HAnimSegment1111.children.append(Shape1204)
Shape1208 = x3d.Shape()
LineSet1209 = x3d.LineSet()
LineSet1209.vertexCount = [2]
Coordinate1210 = x3d.Coordinate()

LineSet1209.coord = Coordinate1210
"""from skullbase to l_eyebrow_joint vertices 2"""
ColorRGBA1211 = x3d.ColorRGBA()
ColorRGBA1211.USE = "HAnimSegmentLineColorRGBA"

LineSet1209.color = ColorRGBA1211

Shape1208.geometry = LineSet1209

HAnimSegment1111.children.append(Shape1208)
Shape1212 = x3d.Shape()
LineSet1213 = x3d.LineSet()
LineSet1213.vertexCount = [2]
Coordinate1214 = x3d.Coordinate()

LineSet1213.coord = Coordinate1214
"""from skullbase to r_eyebrow_joint vertices 2"""
ColorRGBA1215 = x3d.ColorRGBA()
ColorRGBA1215.USE = "HAnimSegmentLineColorRGBA"

LineSet1213.color = ColorRGBA1215

Shape1212.geometry = LineSet1213

HAnimSegment1111.children.append(Shape1212)
Shape1216 = x3d.Shape()
LineSet1217 = x3d.LineSet()
LineSet1217.vertexCount = [2]
Coordinate1218 = x3d.Coordinate()

LineSet1217.coord = Coordinate1218
"""from skullbase to temporomandibular vertices 2"""
ColorRGBA1219 = x3d.ColorRGBA()
ColorRGBA1219.USE = "HAnimSegmentLineColorRGBA"

LineSet1217.color = ColorRGBA1219

Shape1216.geometry = LineSet1217

HAnimSegment1111.children.append(Shape1216)

HAnimJoint1110.children.append(HAnimSegment1111)
HAnimJoint1220 = x3d.HAnimJoint()
HAnimJoint1220.name = "l_eyelid_joint"
HAnimJoint1220.DEF = "hanim_l_eyelid_joint"
HAnimJoint1220.center = [0.0503,1.4157,-0.0689]
HAnimJoint1220.ulimit = [0,0,0]
HAnimJoint1220.llimit = [0,0,0]

HAnimJoint1110.children.append(HAnimJoint1220)
HAnimJoint1221 = x3d.HAnimJoint()
HAnimJoint1221.name = "r_eyelid_joint"
HAnimJoint1221.DEF = "hanim_r_eyelid_joint"
HAnimJoint1221.center = [-0.0507,1.4157,-0.0689]
HAnimJoint1221.ulimit = [0,0,0]
HAnimJoint1221.llimit = [0,0,0]

HAnimJoint1110.children.append(HAnimJoint1221)
HAnimJoint1222 = x3d.HAnimJoint()
HAnimJoint1222.name = "l_eyeball_joint"
HAnimJoint1222.DEF = "hanim_l_eyeball_joint"
HAnimJoint1222.center = [0.0479,1.3963,-0.0188]
HAnimJoint1222.ulimit = [0,0,0]
HAnimJoint1222.llimit = [0,0,0]

HAnimJoint1110.children.append(HAnimJoint1222)
HAnimJoint1223 = x3d.HAnimJoint()
HAnimJoint1223.name = "r_eyeball_joint"
HAnimJoint1223.DEF = "hanim_r_eyeball_joint"
HAnimJoint1223.center = [-0.0483,1.3963,-0.0188]
HAnimJoint1223.ulimit = [0,0,0]
HAnimJoint1223.llimit = [0,0,0]

HAnimJoint1110.children.append(HAnimJoint1223)
HAnimJoint1224 = x3d.HAnimJoint()
HAnimJoint1224.name = "l_eyebrow_joint"
HAnimJoint1224.DEF = "hanim_l_eyebrow_joint"
HAnimJoint1224.center = [0.0216,1.4053,0.0051]
HAnimJoint1224.ulimit = [0,0,0]
HAnimJoint1224.llimit = [0,0,0]

HAnimJoint1110.children.append(HAnimJoint1224)
HAnimJoint1225 = x3d.HAnimJoint()
HAnimJoint1225.name = "r_eyebrow_joint"
HAnimJoint1225.DEF = "hanim_r_eyebrow_joint"
HAnimJoint1225.center = [-0.0219,1.4053,0.0051]
HAnimJoint1225.ulimit = [0,0,0]
HAnimJoint1225.llimit = [0,0,0]

HAnimJoint1110.children.append(HAnimJoint1225)
HAnimJoint1226 = x3d.HAnimJoint()
HAnimJoint1226.name = "temporomandibular"
HAnimJoint1226.DEF = "hanim_temporomandibular"
HAnimJoint1226.center = [-0.0002,1.3043,-0.0865]
HAnimJoint1226.ulimit = [0,0,0]
HAnimJoint1226.llimit = [0,0,0]

HAnimJoint1110.children.append(HAnimJoint1226)

HAnimJoint1101.children.append(HAnimJoint1110)

HAnimJoint1085.children.append(HAnimJoint1101)

HAnimJoint1076.children.append(HAnimJoint1085)

HAnimJoint1067.children.append(HAnimJoint1076)

HAnimJoint1058.children.append(HAnimJoint1067)

HAnimJoint1049.children.append(HAnimJoint1058)

HAnimJoint1026.children.append(HAnimJoint1049)

HAnimJoint995.children.append(HAnimJoint1026)
HAnimJoint1227 = x3d.HAnimJoint()
HAnimJoint1227.name = "l_sternoclavicular"
HAnimJoint1227.DEF = "hanim_l_sternoclavicular"
HAnimJoint1227.center = [0.082,1.4488,-0.0353]
HAnimJoint1227.ulimit = [0,0,0]
HAnimJoint1227.llimit = [0,0,0]
HAnimSegment1228 = x3d.HAnimSegment()
HAnimSegment1228.name = "l_clavicle"
HAnimSegment1228.DEF = "hanim_l_clavicle"
Transform1229 = x3d.Transform()
Transform1229.translation = [0.082,1.4488,-0.0353]
Transform1230 = x3d.Transform()
"""Empty Transform"""
Shape1231 = x3d.Shape()
Shape1231.USE = "HAnimJointShape"

Transform1230.children.append(Shape1231)

Transform1229.children.append(Transform1230)

HAnimSegment1228.children.append(Transform1229)
Shape1232 = x3d.Shape()
LineSet1233 = x3d.LineSet()
LineSet1233.vertexCount = [2]
Coordinate1234 = x3d.Coordinate()

LineSet1233.coord = Coordinate1234
"""from l_sternoclavicular to l_acromioclavicular vertices 2"""
ColorRGBA1235 = x3d.ColorRGBA()
ColorRGBA1235.USE = "HAnimSegmentLineColorRGBA"

LineSet1233.color = ColorRGBA1235

Shape1232.geometry = LineSet1233

HAnimSegment1228.children.append(Shape1232)
HAnimSite1236 = x3d.HAnimSite()
HAnimSite1236.name = "l_acromion"
HAnimSite1236.DEF = "hanim_l_acromion"
HAnimSite1236.translation = [0.2032,1.476,-0.049]
TouchSensor1237 = x3d.TouchSensor()
TouchSensor1237.description = "HAnimSite 15 l_acromion"

HAnimSite1236.children.append(TouchSensor1237)
Shape1238 = x3d.Shape()
Shape1238.USE = "HAnimSiteShape"

HAnimSite1236.children.append(Shape1238)
Billboard1239 = x3d.Billboard()
Shape1240 = x3d.Shape()
Text1241 = x3d.Text()
Text1241.string = ["15"]
FontStyle1242 = x3d.FontStyle()
FontStyle1242.size = 0.035

Text1241.fontStyle = FontStyle1242

Shape1240.geometry = Text1241

Billboard1239.children.append(Shape1240)

HAnimSite1236.children.append(Billboard1239)

HAnimSegment1228.children.append(HAnimSite1236)
HAnimSite1243 = x3d.HAnimSite()
HAnimSite1243.name = "l_axilla_distal"
HAnimSite1243.DEF = "hanim_l_axilla_distal"
HAnimSite1243.translation = [0.1706,1.4072,-0.0875]
TouchSensor1244 = x3d.TouchSensor()
TouchSensor1244.description = "HAnimSite 17 l_axilla_distal"

HAnimSite1243.children.append(TouchSensor1244)
Shape1245 = x3d.Shape()
Shape1245.USE = "HAnimSiteShape"

HAnimSite1243.children.append(Shape1245)
Billboard1246 = x3d.Billboard()
Shape1247 = x3d.Shape()
Text1248 = x3d.Text()
Text1248.string = ["17"]
FontStyle1249 = x3d.FontStyle()
FontStyle1249.size = 0.035

Text1248.fontStyle = FontStyle1249

Shape1247.geometry = Text1248

Billboard1246.children.append(Shape1247)

HAnimSite1243.children.append(Billboard1246)

HAnimSegment1228.children.append(HAnimSite1243)
HAnimSite1250 = x3d.HAnimSite()
HAnimSite1250.name = "l_axilla_posterior_folds"
HAnimSite1250.DEF = "hanim_l_axilla_posterior_folds"
TouchSensor1251 = x3d.TouchSensor()
TouchSensor1251.description = "HAnimSite 18 l_axilla_posterior_folds"

HAnimSite1250.children.append(TouchSensor1251)
Shape1252 = x3d.Shape()
Shape1252.USE = "HAnimSiteShape"

HAnimSite1250.children.append(Shape1252)
Billboard1253 = x3d.Billboard()
Shape1254 = x3d.Shape()
Text1255 = x3d.Text()
Text1255.string = ["18"]
FontStyle1256 = x3d.FontStyle()
FontStyle1256.size = 0.035

Text1255.fontStyle = FontStyle1256

Shape1254.geometry = Text1255

Billboard1253.children.append(Shape1254)

HAnimSite1250.children.append(Billboard1253)

HAnimSegment1228.children.append(HAnimSite1250)
HAnimSite1257 = x3d.HAnimSite()
HAnimSite1257.name = "l_axilla_proximal"
HAnimSite1257.DEF = "hanim_l_axilla_proximal"
HAnimSite1257.translation = [0.1777,1.4065,-0.0075]
TouchSensor1258 = x3d.TouchSensor()
TouchSensor1258.description = "HAnimSite 16 l_axilla_proximal"

HAnimSite1257.children.append(TouchSensor1258)
Shape1259 = x3d.Shape()
Shape1259.USE = "HAnimSiteShape"

HAnimSite1257.children.append(Shape1259)
Billboard1260 = x3d.Billboard()
Shape1261 = x3d.Shape()
Text1262 = x3d.Text()
Text1262.string = ["16"]
FontStyle1263 = x3d.FontStyle()
FontStyle1263.size = 0.035

Text1262.fontStyle = FontStyle1263

Shape1261.geometry = Text1262

Billboard1260.children.append(Shape1261)

HAnimSite1257.children.append(Billboard1260)

HAnimSegment1228.children.append(HAnimSite1257)
HAnimSite1264 = x3d.HAnimSite()
HAnimSite1264.name = "l_clavicale"
HAnimSite1264.DEF = "hanim_l_clavicale"
HAnimSite1264.translation = [0.0271,1.4943,0.0394]
TouchSensor1265 = x3d.TouchSensor()
TouchSensor1265.description = "HAnimSite 14 l_clavicale"

HAnimSite1264.children.append(TouchSensor1265)
Shape1266 = x3d.Shape()
Shape1266.USE = "HAnimSiteShape"

HAnimSite1264.children.append(Shape1266)
Billboard1267 = x3d.Billboard()
Shape1268 = x3d.Shape()
Text1269 = x3d.Text()
Text1269.string = ["14"]
FontStyle1270 = x3d.FontStyle()
FontStyle1270.size = 0.035

Text1269.fontStyle = FontStyle1270

Shape1268.geometry = Text1269

Billboard1267.children.append(Shape1268)

HAnimSite1264.children.append(Billboard1267)

HAnimSegment1228.children.append(HAnimSite1264)

HAnimJoint1227.children.append(HAnimSegment1228)
HAnimJoint1271 = x3d.HAnimJoint()
HAnimJoint1271.name = "l_acromioclavicular"
HAnimJoint1271.DEF = "hanim_l_acromioclavicular"
HAnimJoint1271.center = [0.0962,1.4269,-0.0424]
HAnimJoint1271.ulimit = [0,0,0]
HAnimJoint1271.llimit = [0,0,0]
HAnimSegment1272 = x3d.HAnimSegment()
HAnimSegment1272.name = "l_scapula"
HAnimSegment1272.DEF = "hanim_l_scapula"
Transform1273 = x3d.Transform()
Transform1273.translation = [0.0962,1.4269,-0.0424]
Transform1274 = x3d.Transform()
"""Empty Transform"""
Shape1275 = x3d.Shape()
Shape1275.USE = "HAnimJointShape"

Transform1274.children.append(Shape1275)

Transform1273.children.append(Transform1274)

HAnimSegment1272.children.append(Transform1273)
Shape1276 = x3d.Shape()
LineSet1277 = x3d.LineSet()
LineSet1277.vertexCount = [2]
Coordinate1278 = x3d.Coordinate()

LineSet1277.coord = Coordinate1278
"""from l_acromioclavicular to l_shoulder vertices 2"""
ColorRGBA1279 = x3d.ColorRGBA()
ColorRGBA1279.USE = "HAnimSegmentLineColorRGBA"

LineSet1277.color = ColorRGBA1279

Shape1276.geometry = LineSet1277

HAnimSegment1272.children.append(Shape1276)

HAnimJoint1271.children.append(HAnimSegment1272)
HAnimJoint1280 = x3d.HAnimJoint()
HAnimJoint1280.name = "l_shoulder"
HAnimJoint1280.DEF = "hanim_l_shoulder"
HAnimJoint1280.center = [0.2029,1.4376,-0.0387]
HAnimJoint1280.ulimit = [0,0,0]
HAnimJoint1280.llimit = [0,0,0]
HAnimSegment1281 = x3d.HAnimSegment()
HAnimSegment1281.name = "l_upperarm"
HAnimSegment1281.DEF = "hanim_l_upperarm"
Transform1282 = x3d.Transform()
Transform1282.translation = [0.2029,1.4376,-0.0387]
Transform1283 = x3d.Transform()
"""Empty Transform"""
Shape1284 = x3d.Shape()
Shape1284.USE = "HAnimJointShape"

Transform1283.children.append(Shape1284)

Transform1282.children.append(Transform1283)

HAnimSegment1281.children.append(Transform1282)
Shape1285 = x3d.Shape()
LineSet1286 = x3d.LineSet()
LineSet1286.vertexCount = [2]
Coordinate1287 = x3d.Coordinate()

LineSet1286.coord = Coordinate1287
"""from l_shoulder to l_elbow vertices 2"""
ColorRGBA1288 = x3d.ColorRGBA()
ColorRGBA1288.USE = "HAnimSegmentLineColorRGBA"

LineSet1286.color = ColorRGBA1288

Shape1285.geometry = LineSet1286

HAnimSegment1281.children.append(Shape1285)
HAnimSite1289 = x3d.HAnimSite()
HAnimSite1289.name = "l_bideltoid"
HAnimSite1289.DEF = "hanim_l_bideltoid"
TouchSensor1290 = x3d.TouchSensor()
TouchSensor1290.description = "HAnimSite 96 l_bideltoid"

HAnimSite1289.children.append(TouchSensor1290)
Shape1291 = x3d.Shape()
Shape1291.USE = "HAnimSiteShape"

HAnimSite1289.children.append(Shape1291)
Billboard1292 = x3d.Billboard()
Shape1293 = x3d.Shape()
Text1294 = x3d.Text()
Text1294.string = ["96"]
FontStyle1295 = x3d.FontStyle()
FontStyle1295.size = 0.035

Text1294.fontStyle = FontStyle1295

Shape1293.geometry = Text1294

Billboard1292.children.append(Shape1293)

HAnimSite1289.children.append(Billboard1292)

HAnimSegment1281.children.append(HAnimSite1289)
HAnimSite1296 = x3d.HAnimSite()
HAnimSite1296.name = "l_humeral_lateral_epicondyles"
HAnimSite1296.DEF = "hanim_l_humeral_lateral_epicondyles"
HAnimSite1296.translation = [0.228,1.1482,-0.11]
TouchSensor1297 = x3d.TouchSensor()
TouchSensor1297.description = "HAnimSite 63 l_humeral_lateral_epicondyles"

HAnimSite1296.children.append(TouchSensor1297)
Shape1298 = x3d.Shape()
Shape1298.USE = "HAnimSiteShape"

HAnimSite1296.children.append(Shape1298)
Billboard1299 = x3d.Billboard()
Shape1300 = x3d.Shape()
Text1301 = x3d.Text()
Text1301.string = ["63"]
FontStyle1302 = x3d.FontStyle()
FontStyle1302.size = 0.035

Text1301.fontStyle = FontStyle1302

Shape1300.geometry = Text1301

Billboard1299.children.append(Shape1300)

HAnimSite1296.children.append(Billboard1299)

HAnimSegment1281.children.append(HAnimSite1296)

HAnimJoint1280.children.append(HAnimSegment1281)
HAnimJoint1303 = x3d.HAnimJoint()
HAnimJoint1303.name = "l_elbow"
HAnimJoint1303.DEF = "hanim_l_elbow"
HAnimJoint1303.center = [0.2014,1.1357,-0.0682]
HAnimJoint1303.ulimit = [0,0,0]
HAnimJoint1303.llimit = [0,0,0]
HAnimSegment1304 = x3d.HAnimSegment()
HAnimSegment1304.name = "l_forearm"
HAnimSegment1304.DEF = "hanim_l_forearm"
Transform1305 = x3d.Transform()
Transform1305.translation = [0.2014,1.1357,-0.0682]
Transform1306 = x3d.Transform()
"""Empty Transform"""
Shape1307 = x3d.Shape()
Shape1307.USE = "HAnimJointShape"

Transform1306.children.append(Shape1307)

Transform1305.children.append(Transform1306)

HAnimSegment1304.children.append(Transform1305)
Shape1308 = x3d.Shape()
LineSet1309 = x3d.LineSet()
LineSet1309.vertexCount = [2]
Coordinate1310 = x3d.Coordinate()

LineSet1309.coord = Coordinate1310
"""from l_elbow to l_radiocarpal vertices 2"""
ColorRGBA1311 = x3d.ColorRGBA()
ColorRGBA1311.USE = "HAnimSegmentLineColorRGBA"

LineSet1309.color = ColorRGBA1311

Shape1308.geometry = LineSet1309

HAnimSegment1304.children.append(Shape1308)
HAnimSite1312 = x3d.HAnimSite()
HAnimSite1312.name = "l_humeral_medial_epicondyles"
HAnimSite1312.DEF = "hanim_l_humeral_medial_epicondyles"
HAnimSite1312.translation = [0.1735,1.1272,-0.1113]
TouchSensor1313 = x3d.TouchSensor()
TouchSensor1313.description = "HAnimSite 64 l_humeral_medial_epicondyles"

HAnimSite1312.children.append(TouchSensor1313)
Shape1314 = x3d.Shape()
Shape1314.USE = "HAnimSiteShape"

HAnimSite1312.children.append(Shape1314)
Billboard1315 = x3d.Billboard()
Shape1316 = x3d.Shape()
Text1317 = x3d.Text()
Text1317.string = ["64"]
FontStyle1318 = x3d.FontStyle()
FontStyle1318.size = 0.035

Text1317.fontStyle = FontStyle1318

Shape1316.geometry = Text1317

Billboard1315.children.append(Shape1316)

HAnimSite1312.children.append(Billboard1315)

HAnimSegment1304.children.append(HAnimSite1312)
HAnimSite1319 = x3d.HAnimSite()
HAnimSite1319.name = "l_olecranon"
HAnimSite1319.DEF = "hanim_l_olecranon"
HAnimSite1319.translation = [-0.1962,1.1375,-0.1123]
TouchSensor1320 = x3d.TouchSensor()
TouchSensor1320.description = "HAnimSite 65 l_olecranon"

HAnimSite1319.children.append(TouchSensor1320)
Shape1321 = x3d.Shape()
Shape1321.USE = "HAnimSiteShape"

HAnimSite1319.children.append(Shape1321)
Billboard1322 = x3d.Billboard()
Shape1323 = x3d.Shape()
Text1324 = x3d.Text()
Text1324.string = ["65"]
FontStyle1325 = x3d.FontStyle()
FontStyle1325.size = 0.035

Text1324.fontStyle = FontStyle1325

Shape1323.geometry = Text1324

Billboard1322.children.append(Shape1323)

HAnimSite1319.children.append(Billboard1322)

HAnimSegment1304.children.append(HAnimSite1319)
HAnimSite1326 = x3d.HAnimSite()
HAnimSite1326.name = "l_radial_styloid"
HAnimSite1326.DEF = "hanim_l_radial_styloid"
HAnimSite1326.translation = [0.1901,0.8645,-0.0415]
TouchSensor1327 = x3d.TouchSensor()
TouchSensor1327.description = "HAnimSite 71 l_radial_styloid"

HAnimSite1326.children.append(TouchSensor1327)
Shape1328 = x3d.Shape()
Shape1328.USE = "HAnimSiteShape"

HAnimSite1326.children.append(Shape1328)
Billboard1329 = x3d.Billboard()
Shape1330 = x3d.Shape()
Text1331 = x3d.Text()
Text1331.string = ["71"]
FontStyle1332 = x3d.FontStyle()
FontStyle1332.size = 0.035

Text1331.fontStyle = FontStyle1332

Shape1330.geometry = Text1331

Billboard1329.children.append(Shape1330)

HAnimSite1326.children.append(Billboard1329)

HAnimSegment1304.children.append(HAnimSite1326)
HAnimSite1333 = x3d.HAnimSite()
HAnimSite1333.name = "l_radiale"
HAnimSite1333.DEF = "hanim_l_radiale"
HAnimSite1333.translation = [0.2182,1.1212,-0.1167]
TouchSensor1334 = x3d.TouchSensor()
TouchSensor1334.description = "HAnimSite 69 l_radiale"

HAnimSite1333.children.append(TouchSensor1334)
Shape1335 = x3d.Shape()
Shape1335.USE = "HAnimSiteShape"

HAnimSite1333.children.append(Shape1335)
Billboard1336 = x3d.Billboard()
Shape1337 = x3d.Shape()
Text1338 = x3d.Text()
Text1338.string = ["69"]
FontStyle1339 = x3d.FontStyle()
FontStyle1339.size = 0.035

Text1338.fontStyle = FontStyle1339

Shape1337.geometry = Text1338

Billboard1336.children.append(Shape1337)

HAnimSite1333.children.append(Billboard1336)

HAnimSegment1304.children.append(HAnimSite1333)

HAnimJoint1303.children.append(HAnimSegment1304)
HAnimJoint1340 = x3d.HAnimJoint()
HAnimJoint1340.name = "l_radiocarpal"
HAnimJoint1340.DEF = "hanim_l_radiocarpal"
HAnimJoint1340.center = [0.1984,0.8663,-0.0583]
HAnimJoint1340.ulimit = [0,0,0]
HAnimJoint1340.llimit = [0,0,0]
HAnimSegment1341 = x3d.HAnimSegment()
HAnimSegment1341.name = "l_carpal"
HAnimSegment1341.DEF = "hanim_l_carpal"
Transform1342 = x3d.Transform()
Transform1342.scale = [0.2,0.2,0.2]
Transform1342.translation = [0.2,0.85,-0.05]
Transform1342.rotation = [0,0,1,-3.14]
"""Transform left hand"""
Transform1343 = x3d.Transform()
Transform1343.rotation = [0,1,0,-1.57]
"""Transform left hand"""
Shape1344 = x3d.Shape()
Shape1344.USE = "HAnimJointShape"

Transform1343.children.append(Shape1344)

Transform1342.children.append(Transform1343)

HAnimSegment1341.children.append(Transform1342)
Shape1345 = x3d.Shape()
LineSet1346 = x3d.LineSet()
LineSet1346.vertexCount = [2]
Coordinate1347 = x3d.Coordinate()

LineSet1346.coord = Coordinate1347
"""from l_radiocarpal to l_midcarpal_1 vertices 2"""
ColorRGBA1348 = x3d.ColorRGBA()
ColorRGBA1348.USE = "HAnimSegmentLineColorRGBA"

LineSet1346.color = ColorRGBA1348

Shape1345.geometry = LineSet1346

HAnimSegment1341.children.append(Shape1345)
HAnimSite1349 = x3d.HAnimSite()
HAnimSite1349.name = "l_ulnar_styloid"
HAnimSite1349.DEF = "hanim_l_ulnar_styloid"
HAnimSite1349.translation = [-0.2142,0.8529,-0.0648]
TouchSensor1350 = x3d.TouchSensor()
TouchSensor1350.description = "HAnimSite 70 l_ulnar_styloid"

HAnimSite1349.children.append(TouchSensor1350)
Shape1351 = x3d.Shape()
Shape1351.USE = "HAnimSiteShape"

HAnimSite1349.children.append(Shape1351)
Billboard1352 = x3d.Billboard()
Shape1353 = x3d.Shape()
Text1354 = x3d.Text()
Text1354.string = ["70"]
FontStyle1355 = x3d.FontStyle()
FontStyle1355.size = 0.035

Text1354.fontStyle = FontStyle1355

Shape1353.geometry = Text1354

Billboard1352.children.append(Shape1353)

HAnimSite1349.children.append(Billboard1352)

HAnimSegment1341.children.append(HAnimSite1349)
Shape1356 = x3d.Shape()
LineSet1357 = x3d.LineSet()
LineSet1357.vertexCount = [2]
Coordinate1358 = x3d.Coordinate()

LineSet1357.coord = Coordinate1358
"""from l_radiocarpal to l_midcarpal_2 vertices 2"""
ColorRGBA1359 = x3d.ColorRGBA()
ColorRGBA1359.USE = "HAnimSegmentLineColorRGBA"

LineSet1357.color = ColorRGBA1359

Shape1356.geometry = LineSet1357

HAnimSegment1341.children.append(Shape1356)
Shape1360 = x3d.Shape()
LineSet1361 = x3d.LineSet()
LineSet1361.vertexCount = [2]
Coordinate1362 = x3d.Coordinate()

LineSet1361.coord = Coordinate1362
"""from l_radiocarpal to l_midcarpal_3 vertices 2"""
ColorRGBA1363 = x3d.ColorRGBA()
ColorRGBA1363.USE = "HAnimSegmentLineColorRGBA"

LineSet1361.color = ColorRGBA1363

Shape1360.geometry = LineSet1361

HAnimSegment1341.children.append(Shape1360)
Shape1364 = x3d.Shape()
LineSet1365 = x3d.LineSet()
LineSet1365.vertexCount = [2]
Coordinate1366 = x3d.Coordinate()

LineSet1365.coord = Coordinate1366
"""from l_radiocarpal to l_midcarpal_4_5 vertices 2"""
ColorRGBA1367 = x3d.ColorRGBA()
ColorRGBA1367.USE = "HAnimSegmentLineColorRGBA"

LineSet1365.color = ColorRGBA1367

Shape1364.geometry = LineSet1365

HAnimSegment1341.children.append(Shape1364)

HAnimJoint1340.children.append(HAnimSegment1341)
HAnimJoint1368 = x3d.HAnimJoint()
HAnimJoint1368.name = "l_midcarpal_1"
HAnimJoint1368.DEF = "hanim_l_midcarpal_1"
HAnimJoint1368.center = [0.1811,0.6975,-0.0826]
HAnimJoint1368.ulimit = [0,0,0]
HAnimJoint1368.llimit = [0,0,0]
HAnimSegment1369 = x3d.HAnimSegment()
HAnimSegment1369.name = "l_trapezium"
HAnimSegment1369.DEF = "hanim_l_trapezium"
Transform1370 = x3d.Transform()
Transform1370.translation = [0.1811,0.6975,-0.0826]
Transform1371 = x3d.Transform()
"""Empty Transform"""
Shape1372 = x3d.Shape()
Shape1372.USE = "HAnimJointShape"

Transform1371.children.append(Shape1372)

Transform1370.children.append(Transform1371)

HAnimSegment1369.children.append(Transform1370)
Shape1373 = x3d.Shape()
LineSet1374 = x3d.LineSet()
LineSet1374.vertexCount = [2]
Coordinate1375 = x3d.Coordinate()

LineSet1374.coord = Coordinate1375
"""from l_midcarpal_1 to l_carpometacarpal_1 vertices 2"""
ColorRGBA1376 = x3d.ColorRGBA()
ColorRGBA1376.USE = "HAnimSegmentLineColorRGBA"

LineSet1374.color = ColorRGBA1376

Shape1373.geometry = LineSet1374

HAnimSegment1369.children.append(Shape1373)

HAnimJoint1368.children.append(HAnimSegment1369)
HAnimJoint1377 = x3d.HAnimJoint()
HAnimJoint1377.name = "l_carpometacarpal_1"
HAnimJoint1377.DEF = "hanim_l_carpometacarpal_1"
HAnimJoint1377.center = [0.1924,0.8472,-0.0534]
HAnimJoint1377.ulimit = [0,0,0]
HAnimJoint1377.llimit = [0,0,0]
HAnimSegment1378 = x3d.HAnimSegment()
HAnimSegment1378.name = "l_metacarpal_1"
HAnimSegment1378.DEF = "hanim_l_metacarpal_1"
Transform1379 = x3d.Transform()
Transform1379.translation = [0.1924,0.8472,-0.0534]
Transform1380 = x3d.Transform()
"""Empty Transform"""
Shape1381 = x3d.Shape()
Shape1381.USE = "HAnimJointShape"

Transform1380.children.append(Shape1381)

Transform1379.children.append(Transform1380)

HAnimSegment1378.children.append(Transform1379)
Shape1382 = x3d.Shape()
LineSet1383 = x3d.LineSet()
LineSet1383.vertexCount = [2]
Coordinate1384 = x3d.Coordinate()

LineSet1383.coord = Coordinate1384
"""from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2"""
ColorRGBA1385 = x3d.ColorRGBA()
ColorRGBA1385.USE = "HAnimSegmentLineColorRGBA"

LineSet1383.color = ColorRGBA1385

Shape1382.geometry = LineSet1383

HAnimSegment1378.children.append(Shape1382)

HAnimJoint1377.children.append(HAnimSegment1378)
HAnimJoint1386 = x3d.HAnimJoint()
HAnimJoint1386.name = "l_metacarpophalangeal_1"
HAnimJoint1386.DEF = "hanim_l_metacarpophalangeal_1"
HAnimJoint1386.center = [0.1951,0.8226,0.0246]
HAnimJoint1386.ulimit = [0,0,0]
HAnimJoint1386.llimit = [0,0,0]
HAnimSegment1387 = x3d.HAnimSegment()
HAnimSegment1387.name = "l_carpal_proximal_phalanx_1"
HAnimSegment1387.DEF = "hanim_l_carpal_proximal_phalanx_1"
Transform1388 = x3d.Transform()
Transform1388.translation = [0.1951,0.8226,0.0246]
Transform1389 = x3d.Transform()
"""Empty Transform"""
Shape1390 = x3d.Shape()
Shape1390.USE = "HAnimJointShape"

Transform1389.children.append(Shape1390)

Transform1388.children.append(Transform1389)

HAnimSegment1387.children.append(Transform1388)
Shape1391 = x3d.Shape()
LineSet1392 = x3d.LineSet()
LineSet1392.vertexCount = [2]
Coordinate1393 = x3d.Coordinate()

LineSet1392.coord = Coordinate1393
"""from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2"""
ColorRGBA1394 = x3d.ColorRGBA()
ColorRGBA1394.USE = "HAnimSegmentLineColorRGBA"

LineSet1392.color = ColorRGBA1394

Shape1391.geometry = LineSet1392

HAnimSegment1387.children.append(Shape1391)

HAnimJoint1386.children.append(HAnimSegment1387)
HAnimJoint1395 = x3d.HAnimJoint()
HAnimJoint1395.name = "l_carpal_interphalangeal_1"
HAnimJoint1395.DEF = "hanim_l_carpal_interphalangeal_1"
HAnimJoint1395.center = [0.1955,0.8159,0.0464]
HAnimJoint1395.ulimit = [0,0,0]
HAnimJoint1395.llimit = [0,0,0]

HAnimJoint1386.children.append(HAnimJoint1395)

HAnimJoint1377.children.append(HAnimJoint1386)

HAnimJoint1368.children.append(HAnimJoint1377)

HAnimJoint1340.children.append(HAnimJoint1368)
HAnimJoint1396 = x3d.HAnimJoint()
HAnimJoint1396.name = "l_midcarpal_2"
HAnimJoint1396.DEF = "hanim_l_midcarpal_2"
HAnimJoint1396.center = [0.1811,0.6984,-0.0935]
HAnimJoint1396.ulimit = [0,0,0]
HAnimJoint1396.llimit = [0,0,0]
HAnimSegment1397 = x3d.HAnimSegment()
HAnimSegment1397.name = "l_trapezoid"
HAnimSegment1397.DEF = "hanim_l_trapezoid"
Transform1398 = x3d.Transform()
Transform1398.translation = [0.1811,0.6984,-0.0935]
Transform1399 = x3d.Transform()
"""Empty Transform"""
Shape1400 = x3d.Shape()
Shape1400.USE = "HAnimJointShape"

Transform1399.children.append(Shape1400)

Transform1398.children.append(Transform1399)

HAnimSegment1397.children.append(Transform1398)
Shape1401 = x3d.Shape()
LineSet1402 = x3d.LineSet()
LineSet1402.vertexCount = [2]
Coordinate1403 = x3d.Coordinate()

LineSet1402.coord = Coordinate1403
"""from l_midcarpal_2 to l_carpometacarpal_2 vertices 2"""
ColorRGBA1404 = x3d.ColorRGBA()
ColorRGBA1404.USE = "HAnimSegmentLineColorRGBA"

LineSet1402.color = ColorRGBA1404

Shape1401.geometry = LineSet1402

HAnimSegment1397.children.append(Shape1401)

HAnimJoint1396.children.append(HAnimSegment1397)
HAnimJoint1405 = x3d.HAnimJoint()
HAnimJoint1405.name = "l_carpometacarpal_2"
HAnimJoint1405.DEF = "hanim_l_carpometacarpal_2"
HAnimJoint1405.center = [0.1983,0.8024,-0.028]
HAnimJoint1405.ulimit = [0,0,0]
HAnimJoint1405.llimit = [0,0,0]
HAnimSegment1406 = x3d.HAnimSegment()
HAnimSegment1406.name = "l_metacarpal_2"
HAnimSegment1406.DEF = "hanim_l_metacarpal_2"
Transform1407 = x3d.Transform()
Transform1407.translation = [0.1983,0.8024,-0.028]
Transform1408 = x3d.Transform()
"""Empty Transform"""
Shape1409 = x3d.Shape()
Shape1409.USE = "HAnimJointShape"

Transform1408.children.append(Shape1409)

Transform1407.children.append(Transform1408)

HAnimSegment1406.children.append(Transform1407)
Shape1410 = x3d.Shape()
LineSet1411 = x3d.LineSet()
LineSet1411.vertexCount = [2]
Coordinate1412 = x3d.Coordinate()

LineSet1411.coord = Coordinate1412
"""from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2"""
ColorRGBA1413 = x3d.ColorRGBA()
ColorRGBA1413.USE = "HAnimSegmentLineColorRGBA"

LineSet1411.color = ColorRGBA1413

Shape1410.geometry = LineSet1411

HAnimSegment1406.children.append(Shape1410)
HAnimSite1414 = x3d.HAnimSite()
HAnimSite1414.name = "l_metacarpal_phalanx_2"
HAnimSite1414.DEF = "hanim_l_metacarpal_phalanx_2"
HAnimSite1414.translation = [0.2009,0.8139,-0.0237]
TouchSensor1415 = x3d.TouchSensor()
TouchSensor1415.description = "HAnimSite 75 l_metacarpal_phalanx_2"

HAnimSite1414.children.append(TouchSensor1415)
Shape1416 = x3d.Shape()
Shape1416.USE = "HAnimSiteShape"

HAnimSite1414.children.append(Shape1416)
Billboard1417 = x3d.Billboard()
Shape1418 = x3d.Shape()
Text1419 = x3d.Text()
Text1419.string = ["75"]
FontStyle1420 = x3d.FontStyle()
FontStyle1420.size = 0.035

Text1419.fontStyle = FontStyle1420

Shape1418.geometry = Text1419

Billboard1417.children.append(Shape1418)

HAnimSite1414.children.append(Billboard1417)

HAnimSegment1406.children.append(HAnimSite1414)

HAnimJoint1405.children.append(HAnimSegment1406)
HAnimJoint1421 = x3d.HAnimJoint()
HAnimJoint1421.name = "l_metacarpophalangeal_2"
HAnimJoint1421.DEF = "hanim_l_metacarpophalangeal_2"
HAnimJoint1421.center = [0.1983,0.7815,-0.028]
HAnimJoint1421.ulimit = [0,0,0]
HAnimJoint1421.llimit = [0,0,0]
HAnimSegment1422 = x3d.HAnimSegment()
HAnimSegment1422.name = "l_carpal_proximal_phalanx_2"
HAnimSegment1422.DEF = "hanim_l_carpal_proximal_phalanx_2"
Transform1423 = x3d.Transform()
Transform1423.translation = [0.1983,0.7815,-0.028]
Transform1424 = x3d.Transform()
"""Empty Transform"""
Shape1425 = x3d.Shape()
Shape1425.USE = "HAnimJointShape"

Transform1424.children.append(Shape1425)

Transform1423.children.append(Transform1424)

HAnimSegment1422.children.append(Transform1423)
Shape1426 = x3d.Shape()
LineSet1427 = x3d.LineSet()
LineSet1427.vertexCount = [2]
Coordinate1428 = x3d.Coordinate()

LineSet1427.coord = Coordinate1428
"""from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2"""
ColorRGBA1429 = x3d.ColorRGBA()
ColorRGBA1429.USE = "HAnimSegmentLineColorRGBA"

LineSet1427.color = ColorRGBA1429

Shape1426.geometry = LineSet1427

HAnimSegment1422.children.append(Shape1426)

HAnimJoint1421.children.append(HAnimSegment1422)
HAnimJoint1430 = x3d.HAnimJoint()
HAnimJoint1430.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint1430.DEF = "hanim_l_carpal_proximal_interphalangeal_2"
HAnimJoint1430.center = [0.2017,0.7363,-0.0248]
HAnimJoint1430.ulimit = [0,0,0]
HAnimJoint1430.llimit = [0,0,0]
HAnimSegment1431 = x3d.HAnimSegment()
HAnimSegment1431.name = "l_carpal_middle_phalanx_2"
HAnimSegment1431.DEF = "hanim_l_carpal_middle_phalanx_2"
Transform1432 = x3d.Transform()
Transform1432.translation = [0.2017,0.7363,-0.0248]
Transform1433 = x3d.Transform()
"""Empty Transform"""
Shape1434 = x3d.Shape()
Shape1434.USE = "HAnimJointShape"

Transform1433.children.append(Shape1434)

Transform1432.children.append(Transform1433)

HAnimSegment1431.children.append(Transform1432)
Shape1435 = x3d.Shape()
LineSet1436 = x3d.LineSet()
LineSet1436.vertexCount = [2]
Coordinate1437 = x3d.Coordinate()

LineSet1436.coord = Coordinate1437
"""from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2"""
ColorRGBA1438 = x3d.ColorRGBA()
ColorRGBA1438.USE = "HAnimSegmentLineColorRGBA"

LineSet1436.color = ColorRGBA1438

Shape1435.geometry = LineSet1436

HAnimSegment1431.children.append(Shape1435)

HAnimJoint1430.children.append(HAnimSegment1431)
HAnimJoint1439 = x3d.HAnimJoint()
HAnimJoint1439.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint1439.DEF = "hanim_l_carpal_distal_interphalangeal_2"
HAnimJoint1439.center = [0.2028,0.7139,-0.0236]
HAnimJoint1439.ulimit = [0,0,0]
HAnimJoint1439.llimit = [0,0,0]

HAnimJoint1430.children.append(HAnimJoint1439)

HAnimJoint1421.children.append(HAnimJoint1430)

HAnimJoint1405.children.append(HAnimJoint1421)

HAnimJoint1396.children.append(HAnimJoint1405)

HAnimJoint1340.children.append(HAnimJoint1396)
HAnimJoint1440 = x3d.HAnimJoint()
HAnimJoint1440.name = "l_midcarpal_3"
HAnimJoint1440.DEF = "hanim_l_midcarpal_3"
HAnimJoint1440.center = [0.1809,0.7,-0.1067]
HAnimJoint1440.ulimit = [0,0,0]
HAnimJoint1440.llimit = [0,0,0]
HAnimSegment1441 = x3d.HAnimSegment()
HAnimSegment1441.name = "l_capitate"
HAnimSegment1441.DEF = "hanim_l_capitate"
Transform1442 = x3d.Transform()
Transform1442.translation = [0.1809,0.7,-0.1067]
Transform1443 = x3d.Transform()
"""Empty Transform"""
Shape1444 = x3d.Shape()
Shape1444.USE = "HAnimJointShape"

Transform1443.children.append(Shape1444)

Transform1442.children.append(Transform1443)

HAnimSegment1441.children.append(Transform1442)
Shape1445 = x3d.Shape()
LineSet1446 = x3d.LineSet()
LineSet1446.vertexCount = [2]
Coordinate1447 = x3d.Coordinate()

LineSet1446.coord = Coordinate1447
"""from l_midcarpal_3 to l_carpometacarpal_3 vertices 2"""
ColorRGBA1448 = x3d.ColorRGBA()
ColorRGBA1448.USE = "HAnimSegmentLineColorRGBA"

LineSet1446.color = ColorRGBA1448

Shape1445.geometry = LineSet1446

HAnimSegment1441.children.append(Shape1445)

HAnimJoint1440.children.append(HAnimSegment1441)
HAnimJoint1449 = x3d.HAnimJoint()
HAnimJoint1449.name = "l_carpometacarpal_3"
HAnimJoint1449.DEF = "hanim_l_carpometacarpal_3"
HAnimJoint1449.center = [0.1987,0.8029,-0.053]
HAnimJoint1449.ulimit = [0,0,0]
HAnimJoint1449.llimit = [0,0,0]
HAnimSegment1450 = x3d.HAnimSegment()
HAnimSegment1450.name = "l_metacarpal_3"
HAnimSegment1450.DEF = "hanim_l_metacarpal_3"
Transform1451 = x3d.Transform()
Transform1451.translation = [0.1987,0.8029,-0.053]
Transform1452 = x3d.Transform()
"""Empty Transform"""
Shape1453 = x3d.Shape()
Shape1453.USE = "HAnimJointShape"

Transform1452.children.append(Shape1453)

Transform1451.children.append(Transform1452)

HAnimSegment1450.children.append(Transform1451)
Shape1454 = x3d.Shape()
LineSet1455 = x3d.LineSet()
LineSet1455.vertexCount = [2]
Coordinate1456 = x3d.Coordinate()

LineSet1455.coord = Coordinate1456
"""from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2"""
ColorRGBA1457 = x3d.ColorRGBA()
ColorRGBA1457.USE = "HAnimSegmentLineColorRGBA"

LineSet1455.color = ColorRGBA1457

Shape1454.geometry = LineSet1455

HAnimSegment1450.children.append(Shape1454)
HAnimSite1458 = x3d.HAnimSite()
HAnimSite1458.name = "l_metacarpal_phalanx_3"
HAnimSite1458.DEF = "hanim_l_metacarpal_phalanx_3"
TouchSensor1459 = x3d.TouchSensor()
TouchSensor1459.description = "HAnimSite 76 l_metacarpal_phalanx_3"

HAnimSite1458.children.append(TouchSensor1459)
Shape1460 = x3d.Shape()
Shape1460.USE = "HAnimSiteShape"

HAnimSite1458.children.append(Shape1460)
Billboard1461 = x3d.Billboard()
Shape1462 = x3d.Shape()
Text1463 = x3d.Text()
Text1463.string = ["76"]
FontStyle1464 = x3d.FontStyle()
FontStyle1464.size = 0.035

Text1463.fontStyle = FontStyle1464

Shape1462.geometry = Text1463

Billboard1461.children.append(Shape1462)

HAnimSite1458.children.append(Billboard1461)

HAnimSegment1450.children.append(HAnimSite1458)

HAnimJoint1449.children.append(HAnimSegment1450)
HAnimJoint1465 = x3d.HAnimJoint()
HAnimJoint1465.name = "l_metacarpophalangeal_3"
HAnimJoint1465.DEF = "hanim_l_metacarpophalangeal_3"
HAnimJoint1465.center = [0.1987,0.7818,-0.053]
HAnimJoint1465.ulimit = [0,0,0]
HAnimJoint1465.llimit = [0,0,0]
HAnimSegment1466 = x3d.HAnimSegment()
HAnimSegment1466.name = "l_carpal_proximal_phalanx_3"
HAnimSegment1466.DEF = "hanim_l_carpal_proximal_phalanx_3"
Transform1467 = x3d.Transform()
Transform1467.translation = [0.1987,0.7818,-0.053]
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
"""from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2"""
ColorRGBA1473 = x3d.ColorRGBA()
ColorRGBA1473.USE = "HAnimSegmentLineColorRGBA"

LineSet1471.color = ColorRGBA1473

Shape1470.geometry = LineSet1471

HAnimSegment1466.children.append(Shape1470)

HAnimJoint1465.children.append(HAnimSegment1466)
HAnimJoint1474 = x3d.HAnimJoint()
HAnimJoint1474.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint1474.DEF = "hanim_l_carpal_proximal_interphalangeal_3"
HAnimJoint1474.center = [0.2013,0.7273,-0.0503]
HAnimJoint1474.ulimit = [0,0,0]
HAnimJoint1474.llimit = [0,0,0]
HAnimSegment1475 = x3d.HAnimSegment()
HAnimSegment1475.name = "l_carpal_middle_phalanx_3"
HAnimSegment1475.DEF = "hanim_l_carpal_middle_phalanx_3"
Transform1476 = x3d.Transform()
Transform1476.translation = [0.2013,0.7273,-0.0503]
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
"""from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2"""
ColorRGBA1482 = x3d.ColorRGBA()
ColorRGBA1482.USE = "HAnimSegmentLineColorRGBA"

LineSet1480.color = ColorRGBA1482

Shape1479.geometry = LineSet1480

HAnimSegment1475.children.append(Shape1479)

HAnimJoint1474.children.append(HAnimSegment1475)
HAnimJoint1483 = x3d.HAnimJoint()
HAnimJoint1483.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint1483.DEF = "hanim_l_carpal_distal_interphalangeal_3"
HAnimJoint1483.center = [0.2026,0.7011,-0.0494]
HAnimJoint1483.ulimit = [0,0,0]
HAnimJoint1483.llimit = [0,0,0]

HAnimJoint1474.children.append(HAnimJoint1483)

HAnimJoint1465.children.append(HAnimJoint1474)

HAnimJoint1449.children.append(HAnimJoint1465)

HAnimJoint1440.children.append(HAnimJoint1449)

HAnimJoint1340.children.append(HAnimJoint1440)
HAnimJoint1484 = x3d.HAnimJoint()
HAnimJoint1484.name = "l_midcarpal_4_5"
HAnimJoint1484.DEF = "hanim_l_midcarpal_4_5"
HAnimJoint1484.center = [0.1809,0.6973,-0.1276]
HAnimJoint1484.ulimit = [0,0,0]
HAnimJoint1484.llimit = [0,0,0]
HAnimSegment1485 = x3d.HAnimSegment()
HAnimSegment1485.name = "l_hamate"
HAnimSegment1485.DEF = "hanim_l_hamate"
Transform1486 = x3d.Transform()
Transform1486.translation = [0.1809,0.6973,-0.1276]
Transform1487 = x3d.Transform()
"""Empty Transform"""
Shape1488 = x3d.Shape()
Shape1488.USE = "HAnimJointShape"

Transform1487.children.append(Shape1488)

Transform1486.children.append(Transform1487)

HAnimSegment1485.children.append(Transform1486)
Shape1489 = x3d.Shape()
LineSet1490 = x3d.LineSet()
LineSet1490.vertexCount = [2]
Coordinate1491 = x3d.Coordinate()

LineSet1490.coord = Coordinate1491
"""from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2"""
ColorRGBA1492 = x3d.ColorRGBA()
ColorRGBA1492.USE = "HAnimSegmentLineColorRGBA"

LineSet1490.color = ColorRGBA1492

Shape1489.geometry = LineSet1490

HAnimSegment1485.children.append(Shape1489)
Shape1493 = x3d.Shape()
LineSet1494 = x3d.LineSet()
LineSet1494.vertexCount = [2]
Coordinate1495 = x3d.Coordinate()

LineSet1494.coord = Coordinate1495
"""from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2"""
ColorRGBA1496 = x3d.ColorRGBA()
ColorRGBA1496.USE = "HAnimSegmentLineColorRGBA"

LineSet1494.color = ColorRGBA1496

Shape1493.geometry = LineSet1494

HAnimSegment1485.children.append(Shape1493)

HAnimJoint1484.children.append(HAnimSegment1485)
HAnimJoint1497 = x3d.HAnimJoint()
HAnimJoint1497.name = "l_carpometacarpal_4"
HAnimJoint1497.DEF = "hanim_l_carpometacarpal_4"
HAnimJoint1497.center = [0.1956,0.8019,-0.0794]
HAnimJoint1497.ulimit = [0,0,0]
HAnimJoint1497.llimit = [0,0,0]
HAnimSegment1498 = x3d.HAnimSegment()
HAnimSegment1498.name = "l_metacarpal_4"
HAnimSegment1498.DEF = "hanim_l_metacarpal_4"
Transform1499 = x3d.Transform()
Transform1499.translation = [0.1956,0.8019,-0.0794]
Transform1500 = x3d.Transform()
"""Empty Transform"""
Shape1501 = x3d.Shape()
Shape1501.USE = "HAnimJointShape"

Transform1500.children.append(Shape1501)

Transform1499.children.append(Transform1500)

HAnimSegment1498.children.append(Transform1499)
Shape1502 = x3d.Shape()
LineSet1503 = x3d.LineSet()
LineSet1503.vertexCount = [2]
Coordinate1504 = x3d.Coordinate()

LineSet1503.coord = Coordinate1504
"""from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2"""
ColorRGBA1505 = x3d.ColorRGBA()
ColorRGBA1505.USE = "HAnimSegmentLineColorRGBA"

LineSet1503.color = ColorRGBA1505

Shape1502.geometry = LineSet1503

HAnimSegment1498.children.append(Shape1502)

HAnimJoint1497.children.append(HAnimSegment1498)
HAnimJoint1506 = x3d.HAnimJoint()
HAnimJoint1506.name = "l_metacarpophalangeal_4"
HAnimJoint1506.DEF = "hanim_l_metacarpophalangeal_4"
HAnimJoint1506.center = [0.1956,0.7815,-0.0794]
HAnimJoint1506.ulimit = [0,0,0]
HAnimJoint1506.llimit = [0,0,0]
HAnimSegment1507 = x3d.HAnimSegment()
HAnimSegment1507.name = "l_carpal_proximal_phalanx_4"
HAnimSegment1507.DEF = "hanim_l_carpal_proximal_phalanx_4"
Transform1508 = x3d.Transform()
Transform1508.translation = [0.1956,0.7815,-0.0794]
Transform1509 = x3d.Transform()
"""Empty Transform"""
Shape1510 = x3d.Shape()
Shape1510.USE = "HAnimJointShape"

Transform1509.children.append(Shape1510)

Transform1508.children.append(Transform1509)

HAnimSegment1507.children.append(Transform1508)
Shape1511 = x3d.Shape()
LineSet1512 = x3d.LineSet()
LineSet1512.vertexCount = [2]
Coordinate1513 = x3d.Coordinate()

LineSet1512.coord = Coordinate1513
"""from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2"""
ColorRGBA1514 = x3d.ColorRGBA()
ColorRGBA1514.USE = "HAnimSegmentLineColorRGBA"

LineSet1512.color = ColorRGBA1514

Shape1511.geometry = LineSet1512

HAnimSegment1507.children.append(Shape1511)

HAnimJoint1506.children.append(HAnimSegment1507)
HAnimJoint1515 = x3d.HAnimJoint()
HAnimJoint1515.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint1515.DEF = "hanim_l_carpal_proximal_interphalangeal_4"
HAnimJoint1515.center = [0.1973,0.7287,-0.0777]
HAnimJoint1515.ulimit = [0,0,0]
HAnimJoint1515.llimit = [0,0,0]
HAnimSegment1516 = x3d.HAnimSegment()
HAnimSegment1516.name = "l_carpal_middle_phalanx_4"
HAnimSegment1516.DEF = "hanim_l_carpal_middle_phalanx_4"
Transform1517 = x3d.Transform()
Transform1517.translation = [0.1973,0.7287,-0.0777]
Transform1518 = x3d.Transform()
"""Empty Transform"""
Shape1519 = x3d.Shape()
Shape1519.USE = "HAnimJointShape"

Transform1518.children.append(Shape1519)

Transform1517.children.append(Transform1518)

HAnimSegment1516.children.append(Transform1517)
Shape1520 = x3d.Shape()
LineSet1521 = x3d.LineSet()
LineSet1521.vertexCount = [2]
Coordinate1522 = x3d.Coordinate()

LineSet1521.coord = Coordinate1522
"""from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2"""
ColorRGBA1523 = x3d.ColorRGBA()
ColorRGBA1523.USE = "HAnimSegmentLineColorRGBA"

LineSet1521.color = ColorRGBA1523

Shape1520.geometry = LineSet1521

HAnimSegment1516.children.append(Shape1520)

HAnimJoint1515.children.append(HAnimSegment1516)
HAnimJoint1524 = x3d.HAnimJoint()
HAnimJoint1524.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint1524.DEF = "hanim_l_carpal_distal_interphalangeal_4"
HAnimJoint1524.center = [0.1983,0.7045,-0.0767]
HAnimJoint1524.ulimit = [0,0,0]
HAnimJoint1524.llimit = [0,0,0]

HAnimJoint1515.children.append(HAnimJoint1524)

HAnimJoint1506.children.append(HAnimJoint1515)

HAnimJoint1497.children.append(HAnimJoint1506)

HAnimJoint1484.children.append(HAnimJoint1497)
HAnimJoint1525 = x3d.HAnimJoint()
HAnimJoint1525.name = "l_carpometacarpal_5"
HAnimJoint1525.DEF = "hanim_l_carpometacarpal_5"
HAnimJoint1525.center = [0.1925,0.8066,-0.1036]
HAnimJoint1525.ulimit = [0,0,0]
HAnimJoint1525.llimit = [0,0,0]
HAnimSegment1526 = x3d.HAnimSegment()
HAnimSegment1526.name = "l_metacarpal_5"
HAnimSegment1526.DEF = "hanim_l_metacarpal_5"
Transform1527 = x3d.Transform()
Transform1527.translation = [0.1925,0.8066,-0.1036]
Transform1528 = x3d.Transform()
"""Empty Transform"""
Shape1529 = x3d.Shape()
Shape1529.USE = "HAnimJointShape"

Transform1528.children.append(Shape1529)

Transform1527.children.append(Transform1528)

HAnimSegment1526.children.append(Transform1527)
Shape1530 = x3d.Shape()
LineSet1531 = x3d.LineSet()
LineSet1531.vertexCount = [2]
Coordinate1532 = x3d.Coordinate()

LineSet1531.coord = Coordinate1532
"""from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2"""
ColorRGBA1533 = x3d.ColorRGBA()
ColorRGBA1533.USE = "HAnimSegmentLineColorRGBA"

LineSet1531.color = ColorRGBA1533

Shape1530.geometry = LineSet1531

HAnimSegment1526.children.append(Shape1530)
HAnimSite1534 = x3d.HAnimSite()
HAnimSite1534.name = "l_metacarpal_phalanx_5"
HAnimSite1534.DEF = "hanim_l_metacarpal_phalanx_5"
HAnimSite1534.translation = [0.1929,0.786,-0.1122]
TouchSensor1535 = x3d.TouchSensor()
TouchSensor1535.description = "HAnimSite 77 l_metacarpal_phalanx_5"

HAnimSite1534.children.append(TouchSensor1535)
Shape1536 = x3d.Shape()
Shape1536.USE = "HAnimSiteShape"

HAnimSite1534.children.append(Shape1536)
Billboard1537 = x3d.Billboard()
Shape1538 = x3d.Shape()
Text1539 = x3d.Text()
Text1539.string = ["77"]
FontStyle1540 = x3d.FontStyle()
FontStyle1540.size = 0.035

Text1539.fontStyle = FontStyle1540

Shape1538.geometry = Text1539

Billboard1537.children.append(Shape1538)

HAnimSite1534.children.append(Billboard1537)

HAnimSegment1526.children.append(HAnimSite1534)

HAnimJoint1525.children.append(HAnimSegment1526)
HAnimJoint1541 = x3d.HAnimJoint()
HAnimJoint1541.name = "l_metacarpophalangeal_5"
HAnimJoint1541.DEF = "hanim_l_metacarpophalangeal_5"
HAnimJoint1541.center = [0.1925,0.7866,-0.1036]
HAnimJoint1541.ulimit = [0,0,0]
HAnimJoint1541.llimit = [0,0,0]
HAnimSegment1542 = x3d.HAnimSegment()
HAnimSegment1542.name = "l_carpal_proximal_phalanx_5"
HAnimSegment1542.DEF = "hanim_l_carpal_proximal_phalanx_5"
Transform1543 = x3d.Transform()
Transform1543.translation = [0.1925,0.7866,-0.1036]
Transform1544 = x3d.Transform()
"""Empty Transform"""
Shape1545 = x3d.Shape()
Shape1545.USE = "HAnimJointShape"

Transform1544.children.append(Shape1545)

Transform1543.children.append(Transform1544)

HAnimSegment1542.children.append(Transform1543)
Shape1546 = x3d.Shape()
LineSet1547 = x3d.LineSet()
LineSet1547.vertexCount = [2]
Coordinate1548 = x3d.Coordinate()

LineSet1547.coord = Coordinate1548
"""from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2"""
ColorRGBA1549 = x3d.ColorRGBA()
ColorRGBA1549.USE = "HAnimSegmentLineColorRGBA"

LineSet1547.color = ColorRGBA1549

Shape1546.geometry = LineSet1547

HAnimSegment1542.children.append(Shape1546)

HAnimJoint1541.children.append(HAnimSegment1542)
HAnimJoint1550 = x3d.HAnimJoint()
HAnimJoint1550.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint1550.DEF = "hanim_l_carpal_proximal_interphalangeal_5"
HAnimJoint1550.center = [0.1938,0.7452,-0.1024]
HAnimJoint1550.ulimit = [0,0,0]
HAnimJoint1550.llimit = [0,0,0]
HAnimSegment1551 = x3d.HAnimSegment()
HAnimSegment1551.name = "l_carpal_middle_phalanx_5"
HAnimSegment1551.DEF = "hanim_l_carpal_middle_phalanx_5"
Transform1552 = x3d.Transform()
Transform1552.translation = [0.1938,0.7452,-0.1024]
Transform1553 = x3d.Transform()
"""Empty Transform"""
Shape1554 = x3d.Shape()
Shape1554.USE = "HAnimJointShape"

Transform1553.children.append(Shape1554)

Transform1552.children.append(Transform1553)

HAnimSegment1551.children.append(Transform1552)
Shape1555 = x3d.Shape()
LineSet1556 = x3d.LineSet()
LineSet1556.vertexCount = [2]
Coordinate1557 = x3d.Coordinate()

LineSet1556.coord = Coordinate1557
"""from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2"""
ColorRGBA1558 = x3d.ColorRGBA()
ColorRGBA1558.USE = "HAnimSegmentLineColorRGBA"

LineSet1556.color = ColorRGBA1558

Shape1555.geometry = LineSet1556

HAnimSegment1551.children.append(Shape1555)

HAnimJoint1550.children.append(HAnimSegment1551)
HAnimJoint1559 = x3d.HAnimJoint()
HAnimJoint1559.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint1559.DEF = "hanim_l_carpal_distal_interphalangeal_5"
HAnimJoint1559.center = [0.1948,0.7277,-0.1017]
HAnimJoint1559.ulimit = [0,0,0]
HAnimJoint1559.llimit = [0,0,0]

HAnimJoint1550.children.append(HAnimJoint1559)

HAnimJoint1541.children.append(HAnimJoint1550)

HAnimJoint1525.children.append(HAnimJoint1541)

HAnimJoint1484.children.append(HAnimJoint1525)

HAnimJoint1340.children.append(HAnimJoint1484)

HAnimJoint1303.children.append(HAnimJoint1340)

HAnimJoint1280.children.append(HAnimJoint1303)

HAnimJoint1271.children.append(HAnimJoint1280)

HAnimJoint1227.children.append(HAnimJoint1271)

HAnimJoint995.children.append(HAnimJoint1227)
HAnimJoint1560 = x3d.HAnimJoint()
HAnimJoint1560.name = "r_sternoclavicular"
HAnimJoint1560.DEF = "hanim_r_sternoclavicular"
HAnimJoint1560.center = [-0.0694,1.46,-0.033]
HAnimJoint1560.ulimit = [0,0,0]
HAnimJoint1560.llimit = [0,0,0]
HAnimSegment1561 = x3d.HAnimSegment()
HAnimSegment1561.name = "r_clavicle"
HAnimSegment1561.DEF = "hanim_r_clavicle"
Transform1562 = x3d.Transform()
Transform1562.translation = [-0.0694,1.46,-0.033]
Transform1563 = x3d.Transform()
"""Empty Transform"""
Shape1564 = x3d.Shape()
Shape1564.USE = "HAnimJointShape"

Transform1563.children.append(Shape1564)

Transform1562.children.append(Transform1563)

HAnimSegment1561.children.append(Transform1562)
Shape1565 = x3d.Shape()
LineSet1566 = x3d.LineSet()
LineSet1566.vertexCount = [2]
Coordinate1567 = x3d.Coordinate()

LineSet1566.coord = Coordinate1567
"""from r_sternoclavicular to r_acromioclavicular vertices 2"""
ColorRGBA1568 = x3d.ColorRGBA()
ColorRGBA1568.USE = "HAnimSegmentLineColorRGBA"

LineSet1566.color = ColorRGBA1568

Shape1565.geometry = LineSet1566

HAnimSegment1561.children.append(Shape1565)
HAnimSite1569 = x3d.HAnimSite()
HAnimSite1569.name = "r_acromion"
HAnimSite1569.DEF = "hanim_r_acromion"
HAnimSite1569.translation = [-0.1905,1.4791,-0.0431]
TouchSensor1570 = x3d.TouchSensor()
TouchSensor1570.description = "HAnimSite 20 r_acromion"

HAnimSite1569.children.append(TouchSensor1570)
Shape1571 = x3d.Shape()
Shape1571.USE = "HAnimSiteShape"

HAnimSite1569.children.append(Shape1571)
Billboard1572 = x3d.Billboard()
Shape1573 = x3d.Shape()
Text1574 = x3d.Text()
Text1574.string = ["20"]
FontStyle1575 = x3d.FontStyle()
FontStyle1575.size = 0.035

Text1574.fontStyle = FontStyle1575

Shape1573.geometry = Text1574

Billboard1572.children.append(Shape1573)

HAnimSite1569.children.append(Billboard1572)

HAnimSegment1561.children.append(HAnimSite1569)
HAnimSite1576 = x3d.HAnimSite()
HAnimSite1576.name = "r_axilla_distal"
HAnimSite1576.DEF = "hanim_r_axilla_distal"
HAnimSite1576.translation = [-0.1603,1.4098,-0.0826]
TouchSensor1577 = x3d.TouchSensor()
TouchSensor1577.description = "HAnimSite 22 r_axilla_distal"

HAnimSite1576.children.append(TouchSensor1577)
Shape1578 = x3d.Shape()
Shape1578.USE = "HAnimSiteShape"

HAnimSite1576.children.append(Shape1578)
Billboard1579 = x3d.Billboard()
Shape1580 = x3d.Shape()
Text1581 = x3d.Text()
Text1581.string = ["22"]
FontStyle1582 = x3d.FontStyle()
FontStyle1582.size = 0.035

Text1581.fontStyle = FontStyle1582

Shape1580.geometry = Text1581

Billboard1579.children.append(Shape1580)

HAnimSite1576.children.append(Billboard1579)

HAnimSegment1561.children.append(HAnimSite1576)
HAnimSite1583 = x3d.HAnimSite()
HAnimSite1583.name = "r_axilla_posterior_folds"
HAnimSite1583.DEF = "hanim_r_axilla_posterior_folds"
TouchSensor1584 = x3d.TouchSensor()
TouchSensor1584.description = "HAnimSite 23 r_axilla_posterior_folds"

HAnimSite1583.children.append(TouchSensor1584)
Shape1585 = x3d.Shape()
Shape1585.USE = "HAnimSiteShape"

HAnimSite1583.children.append(Shape1585)
Billboard1586 = x3d.Billboard()
Shape1587 = x3d.Shape()
Text1588 = x3d.Text()
Text1588.string = ["23"]
FontStyle1589 = x3d.FontStyle()
FontStyle1589.size = 0.035

Text1588.fontStyle = FontStyle1589

Shape1587.geometry = Text1588

Billboard1586.children.append(Shape1587)

HAnimSite1583.children.append(Billboard1586)

HAnimSegment1561.children.append(HAnimSite1583)
HAnimSite1590 = x3d.HAnimSite()
HAnimSite1590.name = "r_axilla_proximal"
HAnimSite1590.DEF = "hanim_r_axilla_proximal"
HAnimSite1590.translation = [-0.1626,1.4072,-0.0031]
TouchSensor1591 = x3d.TouchSensor()
TouchSensor1591.description = "HAnimSite 21 r_axilla_proximal"

HAnimSite1590.children.append(TouchSensor1591)
Shape1592 = x3d.Shape()
Shape1592.USE = "HAnimSiteShape"

HAnimSite1590.children.append(Shape1592)
Billboard1593 = x3d.Billboard()
Shape1594 = x3d.Shape()
Text1595 = x3d.Text()
Text1595.string = ["21"]
FontStyle1596 = x3d.FontStyle()
FontStyle1596.size = 0.035

Text1595.fontStyle = FontStyle1596

Shape1594.geometry = Text1595

Billboard1593.children.append(Shape1594)

HAnimSite1590.children.append(Billboard1593)

HAnimSegment1561.children.append(HAnimSite1590)
HAnimSite1597 = x3d.HAnimSite()
HAnimSite1597.name = "r_clavicale"
HAnimSite1597.DEF = "hanim_r_clavicale"
HAnimSite1597.translation = [-0.0115,1.4943,0.04]
TouchSensor1598 = x3d.TouchSensor()
TouchSensor1598.description = "HAnimSite 19 r_clavicale"

HAnimSite1597.children.append(TouchSensor1598)
Shape1599 = x3d.Shape()
Shape1599.USE = "HAnimSiteShape"

HAnimSite1597.children.append(Shape1599)
Billboard1600 = x3d.Billboard()
Shape1601 = x3d.Shape()
Text1602 = x3d.Text()
Text1602.string = ["19"]
FontStyle1603 = x3d.FontStyle()
FontStyle1603.size = 0.035

Text1602.fontStyle = FontStyle1603

Shape1601.geometry = Text1602

Billboard1600.children.append(Shape1601)

HAnimSite1597.children.append(Billboard1600)

HAnimSegment1561.children.append(HAnimSite1597)

HAnimJoint1560.children.append(HAnimSegment1561)
HAnimJoint1604 = x3d.HAnimJoint()
HAnimJoint1604.name = "r_acromioclavicular"
HAnimJoint1604.DEF = "hanim_r_acromioclavicular"
HAnimJoint1604.center = [-0.0836,1.4281,-0.0401]
HAnimJoint1604.ulimit = [0,0,0]
HAnimJoint1604.llimit = [0,0,0]
HAnimSegment1605 = x3d.HAnimSegment()
HAnimSegment1605.name = "r_scapula"
HAnimSegment1605.DEF = "hanim_r_scapula"
Transform1606 = x3d.Transform()
Transform1606.translation = [-0.0836,1.4281,-0.0401]
Transform1607 = x3d.Transform()
"""Empty Transform"""
Shape1608 = x3d.Shape()
Shape1608.USE = "HAnimJointShape"

Transform1607.children.append(Shape1608)

Transform1606.children.append(Transform1607)

HAnimSegment1605.children.append(Transform1606)
Shape1609 = x3d.Shape()
LineSet1610 = x3d.LineSet()
LineSet1610.vertexCount = [2]
Coordinate1611 = x3d.Coordinate()

LineSet1610.coord = Coordinate1611
"""from r_acromioclavicular to r_shoulder vertices 2"""
ColorRGBA1612 = x3d.ColorRGBA()
ColorRGBA1612.USE = "HAnimSegmentLineColorRGBA"

LineSet1610.color = ColorRGBA1612

Shape1609.geometry = LineSet1610

HAnimSegment1605.children.append(Shape1609)

HAnimJoint1604.children.append(HAnimSegment1605)
HAnimJoint1613 = x3d.HAnimJoint()
HAnimJoint1613.name = "r_shoulder"
HAnimJoint1613.DEF = "hanim_r_shoulder"
HAnimJoint1613.center = [-0.1907,1.4407,-0.0325]
HAnimJoint1613.ulimit = [0,0,0]
HAnimJoint1613.llimit = [0,0,0]
HAnimSegment1614 = x3d.HAnimSegment()
HAnimSegment1614.name = "r_upperarm"
HAnimSegment1614.DEF = "hanim_r_upperarm"
Transform1615 = x3d.Transform()
Transform1615.translation = [-0.1907,1.4407,-0.0325]
Transform1616 = x3d.Transform()
"""Empty Transform"""
Shape1617 = x3d.Shape()
Shape1617.USE = "HAnimJointShape"

Transform1616.children.append(Shape1617)

Transform1615.children.append(Transform1616)

HAnimSegment1614.children.append(Transform1615)
Shape1618 = x3d.Shape()
LineSet1619 = x3d.LineSet()
LineSet1619.vertexCount = [2]
Coordinate1620 = x3d.Coordinate()

LineSet1619.coord = Coordinate1620
"""from r_shoulder to r_elbow vertices 2"""
ColorRGBA1621 = x3d.ColorRGBA()
ColorRGBA1621.USE = "HAnimSegmentLineColorRGBA"

LineSet1619.color = ColorRGBA1621

Shape1618.geometry = LineSet1619

HAnimSegment1614.children.append(Shape1618)
HAnimSite1622 = x3d.HAnimSite()
HAnimSite1622.name = "r_bideltoid"
HAnimSite1622.DEF = "hanim_r_bideltoid"
TouchSensor1623 = x3d.TouchSensor()
TouchSensor1623.description = "HAnimSite 97 r_bideltoid"

HAnimSite1622.children.append(TouchSensor1623)
Shape1624 = x3d.Shape()
Shape1624.USE = "HAnimSiteShape"

HAnimSite1622.children.append(Shape1624)
Billboard1625 = x3d.Billboard()
Shape1626 = x3d.Shape()
Text1627 = x3d.Text()
Text1627.string = ["97"]
FontStyle1628 = x3d.FontStyle()
FontStyle1628.size = 0.035

Text1627.fontStyle = FontStyle1628

Shape1626.geometry = Text1627

Billboard1625.children.append(Shape1626)

HAnimSite1622.children.append(Billboard1625)

HAnimSegment1614.children.append(HAnimSite1622)
HAnimSite1629 = x3d.HAnimSite()
HAnimSite1629.name = "r_humeral_lateral_epicondyles"
HAnimSite1629.DEF = "hanim_r_humeral_lateral_epicondyles"
HAnimSite1629.translation = [-0.2224,1.1517,-0.1033]
TouchSensor1630 = x3d.TouchSensor()
TouchSensor1630.description = "HAnimSite 66 r_humeral_lateral_epicondyles"

HAnimSite1629.children.append(TouchSensor1630)
Shape1631 = x3d.Shape()
Shape1631.USE = "HAnimSiteShape"

HAnimSite1629.children.append(Shape1631)
Billboard1632 = x3d.Billboard()
Shape1633 = x3d.Shape()
Text1634 = x3d.Text()
Text1634.string = ["66"]
FontStyle1635 = x3d.FontStyle()
FontStyle1635.size = 0.035

Text1634.fontStyle = FontStyle1635

Shape1633.geometry = Text1634

Billboard1632.children.append(Shape1633)

HAnimSite1629.children.append(Billboard1632)

HAnimSegment1614.children.append(HAnimSite1629)

HAnimJoint1613.children.append(HAnimSegment1614)
HAnimJoint1636 = x3d.HAnimJoint()
HAnimJoint1636.name = "r_elbow"
HAnimJoint1636.DEF = "hanim_r_elbow"
HAnimJoint1636.center = [-0.1949,1.1388,-0.062]
HAnimJoint1636.ulimit = [0,0,0]
HAnimJoint1636.llimit = [0,0,0]
HAnimSegment1637 = x3d.HAnimSegment()
HAnimSegment1637.name = "r_forearm"
HAnimSegment1637.DEF = "hanim_r_forearm"
Transform1638 = x3d.Transform()
Transform1638.translation = [-0.1949,1.1388,-0.062]
Transform1639 = x3d.Transform()
"""Empty Transform"""
Shape1640 = x3d.Shape()
Shape1640.USE = "HAnimJointShape"

Transform1639.children.append(Shape1640)

Transform1638.children.append(Transform1639)

HAnimSegment1637.children.append(Transform1638)
Shape1641 = x3d.Shape()
LineSet1642 = x3d.LineSet()
LineSet1642.vertexCount = [2]
Coordinate1643 = x3d.Coordinate()

LineSet1642.coord = Coordinate1643
"""from r_elbow to r_radiocarpal vertices 2"""
ColorRGBA1644 = x3d.ColorRGBA()
ColorRGBA1644.USE = "HAnimSegmentLineColorRGBA"

LineSet1642.color = ColorRGBA1644

Shape1641.geometry = LineSet1642

HAnimSegment1637.children.append(Shape1641)
HAnimSite1645 = x3d.HAnimSite()
HAnimSite1645.name = "r_humeral_medial_epicondyles"
HAnimSite1645.DEF = "hanim_r_humeral_medial_epicondyles"
HAnimSite1645.translation = [-0.168,1.1298,-0.1062]
TouchSensor1646 = x3d.TouchSensor()
TouchSensor1646.description = "HAnimSite 67 r_humeral_medial_epicondyles"

HAnimSite1645.children.append(TouchSensor1646)
Shape1647 = x3d.Shape()
Shape1647.USE = "HAnimSiteShape"

HAnimSite1645.children.append(Shape1647)
Billboard1648 = x3d.Billboard()
Shape1649 = x3d.Shape()
Text1650 = x3d.Text()
Text1650.string = ["67"]
FontStyle1651 = x3d.FontStyle()
FontStyle1651.size = 0.035

Text1650.fontStyle = FontStyle1651

Shape1649.geometry = Text1650

Billboard1648.children.append(Shape1649)

HAnimSite1645.children.append(Billboard1648)

HAnimSegment1637.children.append(HAnimSite1645)
HAnimSite1652 = x3d.HAnimSite()
HAnimSite1652.name = "r_olecranon"
HAnimSite1652.DEF = "hanim_r_olecranon"
HAnimSite1652.translation = [-0.1907,1.1405,-0.1065]
TouchSensor1653 = x3d.TouchSensor()
TouchSensor1653.description = "HAnimSite 68 r_olecranon"

HAnimSite1652.children.append(TouchSensor1653)
Shape1654 = x3d.Shape()
Shape1654.USE = "HAnimSiteShape"

HAnimSite1652.children.append(Shape1654)
Billboard1655 = x3d.Billboard()
Shape1656 = x3d.Shape()
Text1657 = x3d.Text()
Text1657.string = ["68"]
FontStyle1658 = x3d.FontStyle()
FontStyle1658.size = 0.035

Text1657.fontStyle = FontStyle1658

Shape1656.geometry = Text1657

Billboard1655.children.append(Shape1656)

HAnimSite1652.children.append(Billboard1655)

HAnimSegment1637.children.append(HAnimSite1652)
HAnimSite1659 = x3d.HAnimSite()
HAnimSite1659.name = "r_radial_styloid"
HAnimSite1659.DEF = "hanim_r_radial_styloid"
HAnimSite1659.translation = [-0.1884,0.8676,-0.036]
TouchSensor1660 = x3d.TouchSensor()
TouchSensor1660.description = "HAnimSite 74 r_radial_styloid"

HAnimSite1659.children.append(TouchSensor1660)
Shape1661 = x3d.Shape()
Shape1661.USE = "HAnimSiteShape"

HAnimSite1659.children.append(Shape1661)
Billboard1662 = x3d.Billboard()
Shape1663 = x3d.Shape()
Text1664 = x3d.Text()
Text1664.string = ["74"]
FontStyle1665 = x3d.FontStyle()
FontStyle1665.size = 0.035

Text1664.fontStyle = FontStyle1665

Shape1663.geometry = Text1664

Billboard1662.children.append(Shape1663)

HAnimSite1659.children.append(Billboard1662)

HAnimSegment1637.children.append(HAnimSite1659)
HAnimSite1666 = x3d.HAnimSite()
HAnimSite1666.name = "r_radiale"
HAnimSite1666.DEF = "hanim_r_radiale"
HAnimSite1666.translation = [-0.213,1.1305,-0.1091]
TouchSensor1667 = x3d.TouchSensor()
TouchSensor1667.description = "HAnimSite 72 r_radiale"

HAnimSite1666.children.append(TouchSensor1667)
Shape1668 = x3d.Shape()
Shape1668.USE = "HAnimSiteShape"

HAnimSite1666.children.append(Shape1668)
Billboard1669 = x3d.Billboard()
Shape1670 = x3d.Shape()
Text1671 = x3d.Text()
Text1671.string = ["72"]
FontStyle1672 = x3d.FontStyle()
FontStyle1672.size = 0.035

Text1671.fontStyle = FontStyle1672

Shape1670.geometry = Text1671

Billboard1669.children.append(Shape1670)

HAnimSite1666.children.append(Billboard1669)

HAnimSegment1637.children.append(HAnimSite1666)

HAnimJoint1636.children.append(HAnimSegment1637)
HAnimJoint1673 = x3d.HAnimJoint()
HAnimJoint1673.name = "r_radiocarpal"
HAnimJoint1673.DEF = "hanim_r_radiocarpal"
HAnimJoint1673.center = [-0.1959,0.8694,-0.0521]
HAnimJoint1673.ulimit = [0,0,0]
HAnimJoint1673.llimit = [0,0,0]
HAnimSegment1674 = x3d.HAnimSegment()
HAnimSegment1674.name = "r_carpal"
HAnimSegment1674.DEF = "hanim_r_carpal"
Transform1675 = x3d.Transform()
Transform1675.scale = [0.2,0.2,0.2]
Transform1675.translation = [-0.2,0.85,-0.05]
Transform1675.rotation = [0,0,1,-3.14]
"""Transform right hand"""
Transform1676 = x3d.Transform()
Transform1676.rotation = [0,1,0,1.57]
"""Transform right hand"""
Shape1677 = x3d.Shape()
Shape1677.USE = "HAnimJointShape"

Transform1676.children.append(Shape1677)

Transform1675.children.append(Transform1676)

HAnimSegment1674.children.append(Transform1675)
Shape1678 = x3d.Shape()
LineSet1679 = x3d.LineSet()
LineSet1679.vertexCount = [2]
Coordinate1680 = x3d.Coordinate()

LineSet1679.coord = Coordinate1680
"""from r_radiocarpal to r_midcarpal_1 vertices 2"""
ColorRGBA1681 = x3d.ColorRGBA()
ColorRGBA1681.USE = "HAnimSegmentLineColorRGBA"

LineSet1679.color = ColorRGBA1681

Shape1678.geometry = LineSet1679

HAnimSegment1674.children.append(Shape1678)
HAnimSite1682 = x3d.HAnimSite()
HAnimSite1682.name = "r_ulnar_styloid"
HAnimSite1682.DEF = "hanim_r_ulnar_styloid"
HAnimSite1682.translation = [-0.2117,0.8562,-0.0584]
TouchSensor1683 = x3d.TouchSensor()
TouchSensor1683.description = "HAnimSite 73 r_ulnar_styloid"

HAnimSite1682.children.append(TouchSensor1683)
Shape1684 = x3d.Shape()
Shape1684.USE = "HAnimSiteShape"

HAnimSite1682.children.append(Shape1684)
Billboard1685 = x3d.Billboard()
Shape1686 = x3d.Shape()
Text1687 = x3d.Text()
Text1687.string = ["73"]
FontStyle1688 = x3d.FontStyle()
FontStyle1688.size = 0.035

Text1687.fontStyle = FontStyle1688

Shape1686.geometry = Text1687

Billboard1685.children.append(Shape1686)

HAnimSite1682.children.append(Billboard1685)

HAnimSegment1674.children.append(HAnimSite1682)
Shape1689 = x3d.Shape()
LineSet1690 = x3d.LineSet()
LineSet1690.vertexCount = [2]
Coordinate1691 = x3d.Coordinate()

LineSet1690.coord = Coordinate1691
"""from r_radiocarpal to r_midcarpal_2 vertices 2"""
ColorRGBA1692 = x3d.ColorRGBA()
ColorRGBA1692.USE = "HAnimSegmentLineColorRGBA"

LineSet1690.color = ColorRGBA1692

Shape1689.geometry = LineSet1690

HAnimSegment1674.children.append(Shape1689)
Shape1693 = x3d.Shape()
LineSet1694 = x3d.LineSet()
LineSet1694.vertexCount = [2]
Coordinate1695 = x3d.Coordinate()

LineSet1694.coord = Coordinate1695
"""from r_radiocarpal to r_midcarpal_3 vertices 2"""
ColorRGBA1696 = x3d.ColorRGBA()
ColorRGBA1696.USE = "HAnimSegmentLineColorRGBA"

LineSet1694.color = ColorRGBA1696

Shape1693.geometry = LineSet1694

HAnimSegment1674.children.append(Shape1693)
Shape1697 = x3d.Shape()
LineSet1698 = x3d.LineSet()
LineSet1698.vertexCount = [2]
Coordinate1699 = x3d.Coordinate()

LineSet1698.coord = Coordinate1699
"""from r_radiocarpal to r_midcarpal_4_5 vertices 2"""
ColorRGBA1700 = x3d.ColorRGBA()
ColorRGBA1700.USE = "HAnimSegmentLineColorRGBA"

LineSet1698.color = ColorRGBA1700

Shape1697.geometry = LineSet1698

HAnimSegment1674.children.append(Shape1697)

HAnimJoint1673.children.append(HAnimSegment1674)
HAnimJoint1701 = x3d.HAnimJoint()
HAnimJoint1701.name = "r_midcarpal_1"
HAnimJoint1701.DEF = "hanim_r_midcarpal_1"
HAnimJoint1701.center = [-0.1811,0.6975,-0.0826]
HAnimJoint1701.ulimit = [0,0,0]
HAnimJoint1701.llimit = [0,0,0]
HAnimSegment1702 = x3d.HAnimSegment()
HAnimSegment1702.name = "r_trapezium"
HAnimSegment1702.DEF = "hanim_r_trapezium"
Transform1703 = x3d.Transform()
Transform1703.translation = [-0.1811,0.6975,-0.0826]
Transform1704 = x3d.Transform()
"""Empty Transform"""
Shape1705 = x3d.Shape()
Shape1705.USE = "HAnimJointShape"

Transform1704.children.append(Shape1705)

Transform1703.children.append(Transform1704)

HAnimSegment1702.children.append(Transform1703)
Shape1706 = x3d.Shape()
LineSet1707 = x3d.LineSet()
LineSet1707.vertexCount = [2]
Coordinate1708 = x3d.Coordinate()

LineSet1707.coord = Coordinate1708
"""from r_midcarpal_1 to r_carpometacarpal_1 vertices 2"""
ColorRGBA1709 = x3d.ColorRGBA()
ColorRGBA1709.USE = "HAnimSegmentLineColorRGBA"

LineSet1707.color = ColorRGBA1709

Shape1706.geometry = LineSet1707

HAnimSegment1702.children.append(Shape1706)

HAnimJoint1701.children.append(HAnimSegment1702)
HAnimJoint1710 = x3d.HAnimJoint()
HAnimJoint1710.name = "r_carpometacarpal_1"
HAnimJoint1710.DEF = "hanim_r_carpometacarpal_1"
HAnimJoint1710.center = [-0.1899,0.8502,-0.0473]
HAnimJoint1710.ulimit = [0,0,0]
HAnimJoint1710.llimit = [0,0,0]
HAnimSegment1711 = x3d.HAnimSegment()
HAnimSegment1711.name = "r_metacarpal_1"
HAnimSegment1711.DEF = "hanim_r_metacarpal_1"
Transform1712 = x3d.Transform()
Transform1712.translation = [-0.1899,0.8502,-0.0473]
Transform1713 = x3d.Transform()
"""Empty Transform"""
Shape1714 = x3d.Shape()
Shape1714.USE = "HAnimJointShape"

Transform1713.children.append(Shape1714)

Transform1712.children.append(Transform1713)

HAnimSegment1711.children.append(Transform1712)
Shape1715 = x3d.Shape()
LineSet1716 = x3d.LineSet()
LineSet1716.vertexCount = [2]
Coordinate1717 = x3d.Coordinate()

LineSet1716.coord = Coordinate1717
"""from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2"""
ColorRGBA1718 = x3d.ColorRGBA()
ColorRGBA1718.USE = "HAnimSegmentLineColorRGBA"

LineSet1716.color = ColorRGBA1718

Shape1715.geometry = LineSet1716

HAnimSegment1711.children.append(Shape1715)

HAnimJoint1710.children.append(HAnimSegment1711)
HAnimJoint1719 = x3d.HAnimJoint()
HAnimJoint1719.name = "r_metacarpophalangeal_1"
HAnimJoint1719.DEF = "hanim_r_metacarpophalangeal_1"
HAnimJoint1719.center = [-0.1874,0.8256,0.0306]
HAnimJoint1719.ulimit = [0,0,0]
HAnimJoint1719.llimit = [0,0,0]
HAnimSegment1720 = x3d.HAnimSegment()
HAnimSegment1720.name = "r_carpal_proximal_phalanx_1"
HAnimSegment1720.DEF = "hanim_r_carpal_proximal_phalanx_1"
Transform1721 = x3d.Transform()
Transform1721.translation = [-0.1874,0.8256,0.0306]
Transform1722 = x3d.Transform()
"""Empty Transform"""
Shape1723 = x3d.Shape()
Shape1723.USE = "HAnimJointShape"

Transform1722.children.append(Shape1723)

Transform1721.children.append(Transform1722)

HAnimSegment1720.children.append(Transform1721)
Shape1724 = x3d.Shape()
LineSet1725 = x3d.LineSet()
LineSet1725.vertexCount = [2]
Coordinate1726 = x3d.Coordinate()

LineSet1725.coord = Coordinate1726
"""from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2"""
ColorRGBA1727 = x3d.ColorRGBA()
ColorRGBA1727.USE = "HAnimSegmentLineColorRGBA"

LineSet1725.color = ColorRGBA1727

Shape1724.geometry = LineSet1725

HAnimSegment1720.children.append(Shape1724)

HAnimJoint1719.children.append(HAnimSegment1720)
HAnimJoint1728 = x3d.HAnimJoint()
HAnimJoint1728.name = "r_carpal_interphalangeal_1"
HAnimJoint1728.DEF = "hanim_r_carpal_interphalangeal_1"
HAnimJoint1728.center = [-0.1864,0.819,0.0506]
HAnimJoint1728.ulimit = [0,0,0]
HAnimJoint1728.llimit = [0,0,0]

HAnimJoint1719.children.append(HAnimJoint1728)

HAnimJoint1710.children.append(HAnimJoint1719)

HAnimJoint1701.children.append(HAnimJoint1710)

HAnimJoint1673.children.append(HAnimJoint1701)
HAnimJoint1729 = x3d.HAnimJoint()
HAnimJoint1729.name = "r_midcarpal_2"
HAnimJoint1729.DEF = "hanim_r_midcarpal_2"
HAnimJoint1729.center = [-0.1811,0.6984,-0.0935]
HAnimJoint1729.ulimit = [0,0,0]
HAnimJoint1729.llimit = [0,0,0]
HAnimSegment1730 = x3d.HAnimSegment()
HAnimSegment1730.name = "r_trapezoid"
HAnimSegment1730.DEF = "hanim_r_trapezoid"
Transform1731 = x3d.Transform()
Transform1731.translation = [-0.1811,0.6984,-0.0935]
Transform1732 = x3d.Transform()
"""Empty Transform"""
Shape1733 = x3d.Shape()
Shape1733.USE = "HAnimJointShape"

Transform1732.children.append(Shape1733)

Transform1731.children.append(Transform1732)

HAnimSegment1730.children.append(Transform1731)
Shape1734 = x3d.Shape()
LineSet1735 = x3d.LineSet()
LineSet1735.vertexCount = [2]
Coordinate1736 = x3d.Coordinate()

LineSet1735.coord = Coordinate1736
"""from r_midcarpal_2 to r_carpometacarpal_2 vertices 2"""
ColorRGBA1737 = x3d.ColorRGBA()
ColorRGBA1737.USE = "HAnimSegmentLineColorRGBA"

LineSet1735.color = ColorRGBA1737

Shape1734.geometry = LineSet1735

HAnimSegment1730.children.append(Shape1734)

HAnimJoint1729.children.append(HAnimSegment1730)
HAnimJoint1738 = x3d.HAnimJoint()
HAnimJoint1738.name = "r_carpometacarpal_2"
HAnimJoint1738.DEF = "hanim_r_carpometacarpal_2"
HAnimJoint1738.center = [-0.1961,0.8055,-0.0218]
HAnimJoint1738.ulimit = [0,0,0]
HAnimJoint1738.llimit = [0,0,0]
HAnimSegment1739 = x3d.HAnimSegment()
HAnimSegment1739.name = "r_metacarpal_2"
HAnimSegment1739.DEF = "hanim_r_metacarpal_2"
Transform1740 = x3d.Transform()
Transform1740.translation = [-0.1961,0.8055,-0.0218]
Transform1741 = x3d.Transform()
"""Empty Transform"""
Shape1742 = x3d.Shape()
Shape1742.USE = "HAnimJointShape"

Transform1741.children.append(Shape1742)

Transform1740.children.append(Transform1741)

HAnimSegment1739.children.append(Transform1740)
Shape1743 = x3d.Shape()
LineSet1744 = x3d.LineSet()
LineSet1744.vertexCount = [2]
Coordinate1745 = x3d.Coordinate()

LineSet1744.coord = Coordinate1745
"""from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2"""
ColorRGBA1746 = x3d.ColorRGBA()
ColorRGBA1746.USE = "HAnimSegmentLineColorRGBA"

LineSet1744.color = ColorRGBA1746

Shape1743.geometry = LineSet1744

HAnimSegment1739.children.append(Shape1743)
HAnimSite1747 = x3d.HAnimSite()
HAnimSite1747.name = "r_metacarpal_phalanx_2"
HAnimSite1747.DEF = "hanim_r_metacarpal_phalanx_2"
HAnimSite1747.translation = [-0.1977,0.8169,-0.0177]
TouchSensor1748 = x3d.TouchSensor()
TouchSensor1748.description = "HAnimSite 78 r_metacarpal_phalanx_2"

HAnimSite1747.children.append(TouchSensor1748)
Shape1749 = x3d.Shape()
Shape1749.USE = "HAnimSiteShape"

HAnimSite1747.children.append(Shape1749)
Billboard1750 = x3d.Billboard()
Shape1751 = x3d.Shape()
Text1752 = x3d.Text()
Text1752.string = ["78"]
FontStyle1753 = x3d.FontStyle()
FontStyle1753.size = 0.035

Text1752.fontStyle = FontStyle1753

Shape1751.geometry = Text1752

Billboard1750.children.append(Shape1751)

HAnimSite1747.children.append(Billboard1750)

HAnimSegment1739.children.append(HAnimSite1747)

HAnimJoint1738.children.append(HAnimSegment1739)
HAnimJoint1754 = x3d.HAnimJoint()
HAnimJoint1754.name = "r_metacarpophalangeal_2"
HAnimJoint1754.DEF = "hanim_r_metacarpophalangeal_2"
HAnimJoint1754.center = [-0.1961,0.7846,-0.0218]
HAnimJoint1754.ulimit = [0,0,0]
HAnimJoint1754.llimit = [0,0,0]
HAnimSegment1755 = x3d.HAnimSegment()
HAnimSegment1755.name = "r_carpal_proximal_phalanx_2"
HAnimSegment1755.DEF = "hanim_r_carpal_proximal_phalanx_2"
Transform1756 = x3d.Transform()
Transform1756.translation = [-0.1961,0.7846,-0.0218]
Transform1757 = x3d.Transform()
"""Empty Transform"""
Shape1758 = x3d.Shape()
Shape1758.USE = "HAnimJointShape"

Transform1757.children.append(Shape1758)

Transform1756.children.append(Transform1757)

HAnimSegment1755.children.append(Transform1756)
Shape1759 = x3d.Shape()
LineSet1760 = x3d.LineSet()
LineSet1760.vertexCount = [2]
Coordinate1761 = x3d.Coordinate()

LineSet1760.coord = Coordinate1761
"""from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2"""
ColorRGBA1762 = x3d.ColorRGBA()
ColorRGBA1762.USE = "HAnimSegmentLineColorRGBA"

LineSet1760.color = ColorRGBA1762

Shape1759.geometry = LineSet1760

HAnimSegment1755.children.append(Shape1759)

HAnimJoint1754.children.append(HAnimSegment1755)
HAnimJoint1763 = x3d.HAnimJoint()
HAnimJoint1763.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint1763.DEF = "hanim_r_carpal_proximal_interphalangeal_2"
HAnimJoint1763.center = [-0.1954,0.7393,-0.0185]
HAnimJoint1763.ulimit = [0,0,0]
HAnimJoint1763.llimit = [0,0,0]
HAnimSegment1764 = x3d.HAnimSegment()
HAnimSegment1764.name = "r_carpal_middle_phalanx_2"
HAnimSegment1764.DEF = "hanim_r_carpal_middle_phalanx_2"
Transform1765 = x3d.Transform()
Transform1765.translation = [-0.1954,0.7393,-0.0185]
Transform1766 = x3d.Transform()
"""Empty Transform"""
Shape1767 = x3d.Shape()
Shape1767.USE = "HAnimJointShape"

Transform1766.children.append(Shape1767)

Transform1765.children.append(Transform1766)

HAnimSegment1764.children.append(Transform1765)
Shape1768 = x3d.Shape()
LineSet1769 = x3d.LineSet()
LineSet1769.vertexCount = [2]
Coordinate1770 = x3d.Coordinate()

LineSet1769.coord = Coordinate1770
"""from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2"""
ColorRGBA1771 = x3d.ColorRGBA()
ColorRGBA1771.USE = "HAnimSegmentLineColorRGBA"

LineSet1769.color = ColorRGBA1771

Shape1768.geometry = LineSet1769

HAnimSegment1764.children.append(Shape1768)

HAnimJoint1763.children.append(HAnimSegment1764)
HAnimJoint1772 = x3d.HAnimJoint()
HAnimJoint1772.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint1772.DEF = "hanim_r_carpal_distal_interphalangeal_2"
HAnimJoint1772.center = [-0.1945,0.7169,-0.0173]
HAnimJoint1772.ulimit = [0,0,0]
HAnimJoint1772.llimit = [0,0,0]

HAnimJoint1763.children.append(HAnimJoint1772)

HAnimJoint1754.children.append(HAnimJoint1763)

HAnimJoint1738.children.append(HAnimJoint1754)

HAnimJoint1729.children.append(HAnimJoint1738)

HAnimJoint1673.children.append(HAnimJoint1729)
HAnimJoint1773 = x3d.HAnimJoint()
HAnimJoint1773.name = "r_midcarpal_3"
HAnimJoint1773.DEF = "hanim_r_midcarpal_3"
HAnimJoint1773.center = [-0.1809,0.7,-0.1067]
HAnimJoint1773.ulimit = [0,0,0]
HAnimJoint1773.llimit = [0,0,0]
HAnimSegment1774 = x3d.HAnimSegment()
HAnimSegment1774.name = "r_capitate"
HAnimSegment1774.DEF = "hanim_r_capitate"
Transform1775 = x3d.Transform()
Transform1775.translation = [-0.1809,0.7,-0.1067]
Transform1776 = x3d.Transform()
"""Empty Transform"""
Shape1777 = x3d.Shape()
Shape1777.USE = "HAnimJointShape"

Transform1776.children.append(Shape1777)

Transform1775.children.append(Transform1776)

HAnimSegment1774.children.append(Transform1775)
Shape1778 = x3d.Shape()
LineSet1779 = x3d.LineSet()
LineSet1779.vertexCount = [2]
Coordinate1780 = x3d.Coordinate()

LineSet1779.coord = Coordinate1780
"""from r_midcarpal_3 to r_carpometacarpal_3 vertices 2"""
ColorRGBA1781 = x3d.ColorRGBA()
ColorRGBA1781.USE = "HAnimSegmentLineColorRGBA"

LineSet1779.color = ColorRGBA1781

Shape1778.geometry = LineSet1779

HAnimSegment1774.children.append(Shape1778)

HAnimJoint1773.children.append(HAnimSegment1774)
HAnimJoint1782 = x3d.HAnimJoint()
HAnimJoint1782.name = "r_carpometacarpal_3"
HAnimJoint1782.DEF = "hanim_r_carpometacarpal_3"
HAnimJoint1782.center = [-0.1972,0.806,-0.0468]
HAnimJoint1782.ulimit = [0,0,0]
HAnimJoint1782.llimit = [0,0,0]
HAnimSegment1783 = x3d.HAnimSegment()
HAnimSegment1783.name = "r_metacarpal_3"
HAnimSegment1783.DEF = "hanim_r_metacarpal_3"
Transform1784 = x3d.Transform()
Transform1784.translation = [-0.1972,0.806,-0.0468]
Transform1785 = x3d.Transform()
"""Empty Transform"""
Shape1786 = x3d.Shape()
Shape1786.USE = "HAnimJointShape"

Transform1785.children.append(Shape1786)

Transform1784.children.append(Transform1785)

HAnimSegment1783.children.append(Transform1784)
Shape1787 = x3d.Shape()
LineSet1788 = x3d.LineSet()
LineSet1788.vertexCount = [2]
Coordinate1789 = x3d.Coordinate()

LineSet1788.coord = Coordinate1789
"""from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2"""
ColorRGBA1790 = x3d.ColorRGBA()
ColorRGBA1790.USE = "HAnimSegmentLineColorRGBA"

LineSet1788.color = ColorRGBA1790

Shape1787.geometry = LineSet1788

HAnimSegment1783.children.append(Shape1787)
HAnimSite1791 = x3d.HAnimSite()
HAnimSite1791.name = "r_metacarpal_phalanx_3"
HAnimSite1791.DEF = "hanim_r_metacarpal_phalanx_3"
TouchSensor1792 = x3d.TouchSensor()
TouchSensor1792.description = "HAnimSite 79 r_metacarpal_phalanx_3"

HAnimSite1791.children.append(TouchSensor1792)
Shape1793 = x3d.Shape()
Shape1793.USE = "HAnimSiteShape"

HAnimSite1791.children.append(Shape1793)
Billboard1794 = x3d.Billboard()
Shape1795 = x3d.Shape()
Text1796 = x3d.Text()
Text1796.string = ["79"]
FontStyle1797 = x3d.FontStyle()
FontStyle1797.size = 0.035

Text1796.fontStyle = FontStyle1797

Shape1795.geometry = Text1796

Billboard1794.children.append(Shape1795)

HAnimSite1791.children.append(Billboard1794)

HAnimSegment1783.children.append(HAnimSite1791)

HAnimJoint1782.children.append(HAnimSegment1783)
HAnimJoint1798 = x3d.HAnimJoint()
HAnimJoint1798.name = "r_metacarpophalangeal_3"
HAnimJoint1798.DEF = "hanim_r_metacarpophalangeal_3"
HAnimJoint1798.center = [-0.1972,0.7849,-0.0468]
HAnimJoint1798.ulimit = [0,0,0]
HAnimJoint1798.llimit = [0,0,0]
HAnimSegment1799 = x3d.HAnimSegment()
HAnimSegment1799.name = "r_carpal_proximal_phalanx_3"
HAnimSegment1799.DEF = "hanim_r_carpal_proximal_phalanx_3"
Transform1800 = x3d.Transform()
Transform1800.translation = [-0.1972,0.7849,-0.0468]
Transform1801 = x3d.Transform()
"""Empty Transform"""
Shape1802 = x3d.Shape()
Shape1802.USE = "HAnimJointShape"

Transform1801.children.append(Shape1802)

Transform1800.children.append(Transform1801)

HAnimSegment1799.children.append(Transform1800)
Shape1803 = x3d.Shape()
LineSet1804 = x3d.LineSet()
LineSet1804.vertexCount = [2]
Coordinate1805 = x3d.Coordinate()

LineSet1804.coord = Coordinate1805
"""from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2"""
ColorRGBA1806 = x3d.ColorRGBA()
ColorRGBA1806.USE = "HAnimSegmentLineColorRGBA"

LineSet1804.color = ColorRGBA1806

Shape1803.geometry = LineSet1804

HAnimSegment1799.children.append(Shape1803)

HAnimJoint1798.children.append(HAnimSegment1799)
HAnimJoint1807 = x3d.HAnimJoint()
HAnimJoint1807.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint1807.DEF = "hanim_r_carpal_proximal_interphalangeal_3"
HAnimJoint1807.center = [-0.195,0.7304,-0.0441]
HAnimJoint1807.ulimit = [0,0,0]
HAnimJoint1807.llimit = [0,0,0]
HAnimSegment1808 = x3d.HAnimSegment()
HAnimSegment1808.name = "r_carpal_middle_phalanx_3"
HAnimSegment1808.DEF = "hanim_r_carpal_middle_phalanx_3"
Transform1809 = x3d.Transform()
Transform1809.translation = [-0.195,0.7304,-0.0441]
Transform1810 = x3d.Transform()
"""Empty Transform"""
Shape1811 = x3d.Shape()
Shape1811.USE = "HAnimJointShape"

Transform1810.children.append(Shape1811)

Transform1809.children.append(Transform1810)

HAnimSegment1808.children.append(Transform1809)
Shape1812 = x3d.Shape()
LineSet1813 = x3d.LineSet()
LineSet1813.vertexCount = [2]
Coordinate1814 = x3d.Coordinate()

LineSet1813.coord = Coordinate1814
"""from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2"""
ColorRGBA1815 = x3d.ColorRGBA()
ColorRGBA1815.USE = "HAnimSegmentLineColorRGBA"

LineSet1813.color = ColorRGBA1815

Shape1812.geometry = LineSet1813

HAnimSegment1808.children.append(Shape1812)

HAnimJoint1807.children.append(HAnimSegment1808)
HAnimJoint1816 = x3d.HAnimJoint()
HAnimJoint1816.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint1816.DEF = "hanim_r_carpal_distal_interphalangeal_3"
HAnimJoint1816.center = [-0.1939,0.7042,-0.0432]
HAnimJoint1816.ulimit = [0,0,0]
HAnimJoint1816.llimit = [0,0,0]

HAnimJoint1807.children.append(HAnimJoint1816)

HAnimJoint1798.children.append(HAnimJoint1807)

HAnimJoint1782.children.append(HAnimJoint1798)

HAnimJoint1773.children.append(HAnimJoint1782)

HAnimJoint1673.children.append(HAnimJoint1773)
HAnimJoint1817 = x3d.HAnimJoint()
HAnimJoint1817.name = "r_midcarpal_4_5"
HAnimJoint1817.DEF = "hanim_r_midcarpal_4_5"
HAnimJoint1817.center = [-0.1809,0.6973,-0.1276]
HAnimJoint1817.ulimit = [0,0,0]
HAnimJoint1817.llimit = [0,0,0]
HAnimSegment1818 = x3d.HAnimSegment()
HAnimSegment1818.name = "r_hamate"
HAnimSegment1818.DEF = "hanim_r_hamate"
Transform1819 = x3d.Transform()
Transform1819.translation = [-0.1809,0.6973,-0.1276]
Transform1820 = x3d.Transform()
"""Empty Transform"""
Shape1821 = x3d.Shape()
Shape1821.USE = "HAnimJointShape"

Transform1820.children.append(Shape1821)

Transform1819.children.append(Transform1820)

HAnimSegment1818.children.append(Transform1819)
Shape1822 = x3d.Shape()
LineSet1823 = x3d.LineSet()
LineSet1823.vertexCount = [2]
Coordinate1824 = x3d.Coordinate()

LineSet1823.coord = Coordinate1824
"""from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2"""
ColorRGBA1825 = x3d.ColorRGBA()
ColorRGBA1825.USE = "HAnimSegmentLineColorRGBA"

LineSet1823.color = ColorRGBA1825

Shape1822.geometry = LineSet1823

HAnimSegment1818.children.append(Shape1822)
Shape1826 = x3d.Shape()
LineSet1827 = x3d.LineSet()
LineSet1827.vertexCount = [2]
Coordinate1828 = x3d.Coordinate()

LineSet1827.coord = Coordinate1828
"""from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2"""
ColorRGBA1829 = x3d.ColorRGBA()
ColorRGBA1829.USE = "HAnimSegmentLineColorRGBA"

LineSet1827.color = ColorRGBA1829

Shape1826.geometry = LineSet1827

HAnimSegment1818.children.append(Shape1826)

HAnimJoint1817.children.append(HAnimSegment1818)
HAnimJoint1830 = x3d.HAnimJoint()
HAnimJoint1830.name = "r_carpometacarpal_4"
HAnimJoint1830.DEF = "hanim_r_carpometacarpal_4"
HAnimJoint1830.center = [-0.1951,0.8049,-0.0732]
HAnimJoint1830.ulimit = [0,0,0]
HAnimJoint1830.llimit = [0,0,0]
HAnimSegment1831 = x3d.HAnimSegment()
HAnimSegment1831.name = "r_metacarpal_4"
HAnimSegment1831.DEF = "hanim_r_metacarpal_4"
Transform1832 = x3d.Transform()
Transform1832.translation = [-0.1951,0.8049,-0.0732]
Transform1833 = x3d.Transform()
"""Empty Transform"""
Shape1834 = x3d.Shape()
Shape1834.USE = "HAnimJointShape"

Transform1833.children.append(Shape1834)

Transform1832.children.append(Transform1833)

HAnimSegment1831.children.append(Transform1832)
Shape1835 = x3d.Shape()
LineSet1836 = x3d.LineSet()
LineSet1836.vertexCount = [2]
Coordinate1837 = x3d.Coordinate()

LineSet1836.coord = Coordinate1837
"""from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2"""
ColorRGBA1838 = x3d.ColorRGBA()
ColorRGBA1838.USE = "HAnimSegmentLineColorRGBA"

LineSet1836.color = ColorRGBA1838

Shape1835.geometry = LineSet1836

HAnimSegment1831.children.append(Shape1835)

HAnimJoint1830.children.append(HAnimSegment1831)
HAnimJoint1839 = x3d.HAnimJoint()
HAnimJoint1839.name = "r_metacarpophalangeal_4"
HAnimJoint1839.DEF = "hanim_r_metacarpophalangeal_4"
HAnimJoint1839.center = [-0.1951,0.7845,-0.0732]
HAnimJoint1839.ulimit = [0,0,0]
HAnimJoint1839.llimit = [0,0,0]
HAnimSegment1840 = x3d.HAnimSegment()
HAnimSegment1840.name = "r_carpal_proximal_phalanx_4"
HAnimSegment1840.DEF = "hanim_r_carpal_proximal_phalanx_4"
Transform1841 = x3d.Transform()
Transform1841.translation = [-0.1951,0.7845,-0.0732]
Transform1842 = x3d.Transform()
"""Empty Transform"""
Shape1843 = x3d.Shape()
Shape1843.USE = "HAnimJointShape"

Transform1842.children.append(Shape1843)

Transform1841.children.append(Transform1842)

HAnimSegment1840.children.append(Transform1841)
Shape1844 = x3d.Shape()
LineSet1845 = x3d.LineSet()
LineSet1845.vertexCount = [2]
Coordinate1846 = x3d.Coordinate()

LineSet1845.coord = Coordinate1846
"""from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2"""
ColorRGBA1847 = x3d.ColorRGBA()
ColorRGBA1847.USE = "HAnimSegmentLineColorRGBA"

LineSet1845.color = ColorRGBA1847

Shape1844.geometry = LineSet1845

HAnimSegment1840.children.append(Shape1844)

HAnimJoint1839.children.append(HAnimSegment1840)
HAnimJoint1848 = x3d.HAnimJoint()
HAnimJoint1848.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint1848.DEF = "hanim_r_carpal_proximal_interphalangeal_4"
HAnimJoint1848.center = [-0.192,0.7318,-0.0716]
HAnimJoint1848.ulimit = [0,0,0]
HAnimJoint1848.llimit = [0,0,0]
HAnimSegment1849 = x3d.HAnimSegment()
HAnimSegment1849.name = "r_carpal_middle_phalanx_4"
HAnimSegment1849.DEF = "hanim_r_carpal_middle_phalanx_4"
Transform1850 = x3d.Transform()
Transform1850.translation = [-0.192,0.7318,-0.0716]
Transform1851 = x3d.Transform()
"""Empty Transform"""
Shape1852 = x3d.Shape()
Shape1852.USE = "HAnimJointShape"

Transform1851.children.append(Shape1852)

Transform1850.children.append(Transform1851)

HAnimSegment1849.children.append(Transform1850)
Shape1853 = x3d.Shape()
LineSet1854 = x3d.LineSet()
LineSet1854.vertexCount = [2]
Coordinate1855 = x3d.Coordinate()

LineSet1854.coord = Coordinate1855
"""from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2"""
ColorRGBA1856 = x3d.ColorRGBA()
ColorRGBA1856.USE = "HAnimSegmentLineColorRGBA"

LineSet1854.color = ColorRGBA1856

Shape1853.geometry = LineSet1854

HAnimSegment1849.children.append(Shape1853)

HAnimJoint1848.children.append(HAnimSegment1849)
HAnimJoint1857 = x3d.HAnimJoint()
HAnimJoint1857.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint1857.DEF = "hanim_r_carpal_distal_interphalangeal_4"
HAnimJoint1857.center = [-0.1908,0.7077,-0.0706]
HAnimJoint1857.ulimit = [0,0,0]
HAnimJoint1857.llimit = [0,0,0]

HAnimJoint1848.children.append(HAnimJoint1857)

HAnimJoint1839.children.append(HAnimJoint1848)

HAnimJoint1830.children.append(HAnimJoint1839)

HAnimJoint1817.children.append(HAnimJoint1830)
HAnimJoint1858 = x3d.HAnimJoint()
HAnimJoint1858.name = "r_carpometacarpal_5"
HAnimJoint1858.DEF = "hanim_r_carpometacarpal_5"
HAnimJoint1858.center = [-0.1926,0.8096,-0.0975]
HAnimJoint1858.ulimit = [0,0,0]
HAnimJoint1858.llimit = [0,0,0]
HAnimSegment1859 = x3d.HAnimSegment()
HAnimSegment1859.name = "r_metacarpal_5"
HAnimSegment1859.DEF = "hanim_r_metacarpal_5"
Transform1860 = x3d.Transform()
Transform1860.translation = [-0.1926,0.8096,-0.0975]
Transform1861 = x3d.Transform()
"""Empty Transform"""
Shape1862 = x3d.Shape()
Shape1862.USE = "HAnimJointShape"

Transform1861.children.append(Shape1862)

Transform1860.children.append(Transform1861)

HAnimSegment1859.children.append(Transform1860)
Shape1863 = x3d.Shape()
LineSet1864 = x3d.LineSet()
LineSet1864.vertexCount = [2]
Coordinate1865 = x3d.Coordinate()

LineSet1864.coord = Coordinate1865
"""from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2"""
ColorRGBA1866 = x3d.ColorRGBA()
ColorRGBA1866.USE = "HAnimSegmentLineColorRGBA"

LineSet1864.color = ColorRGBA1866

Shape1863.geometry = LineSet1864

HAnimSegment1859.children.append(Shape1863)
HAnimSite1867 = x3d.HAnimSite()
HAnimSite1867.name = "r_metacarpal_phalanx_5"
HAnimSite1867.DEF = "hanim_r_metacarpal_phalanx_5"
HAnimSite1867.translation = [-0.1929,0.789,-0.1064]
TouchSensor1868 = x3d.TouchSensor()
TouchSensor1868.description = "HAnimSite 80 r_metacarpal_phalanx_5"

HAnimSite1867.children.append(TouchSensor1868)
Shape1869 = x3d.Shape()
Shape1869.USE = "HAnimSiteShape"

HAnimSite1867.children.append(Shape1869)
Billboard1870 = x3d.Billboard()
Shape1871 = x3d.Shape()
Text1872 = x3d.Text()
Text1872.string = ["80"]
FontStyle1873 = x3d.FontStyle()
FontStyle1873.size = 0.035

Text1872.fontStyle = FontStyle1873

Shape1871.geometry = Text1872

Billboard1870.children.append(Shape1871)

HAnimSite1867.children.append(Billboard1870)

HAnimSegment1859.children.append(HAnimSite1867)

HAnimJoint1858.children.append(HAnimSegment1859)
HAnimJoint1874 = x3d.HAnimJoint()
HAnimJoint1874.name = "r_metacarpophalangeal_5"
HAnimJoint1874.DEF = "hanim_r_metacarpophalangeal_5"
HAnimJoint1874.center = [-0.1926,0.7896,-0.0975]
HAnimJoint1874.ulimit = [0,0,0]
HAnimJoint1874.llimit = [0,0,0]
HAnimSegment1875 = x3d.HAnimSegment()
HAnimSegment1875.name = "r_carpal_proximal_phalanx_5"
HAnimSegment1875.DEF = "hanim_r_carpal_proximal_phalanx_5"
Transform1876 = x3d.Transform()
Transform1876.translation = [-0.1926,0.7896,-0.0975]
Transform1877 = x3d.Transform()
"""Empty Transform"""
Shape1878 = x3d.Shape()
Shape1878.USE = "HAnimJointShape"

Transform1877.children.append(Shape1878)

Transform1876.children.append(Transform1877)

HAnimSegment1875.children.append(Transform1876)
Shape1879 = x3d.Shape()
LineSet1880 = x3d.LineSet()
LineSet1880.vertexCount = [2]
Coordinate1881 = x3d.Coordinate()

LineSet1880.coord = Coordinate1881
"""from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2"""
ColorRGBA1882 = x3d.ColorRGBA()
ColorRGBA1882.USE = "HAnimSegmentLineColorRGBA"

LineSet1880.color = ColorRGBA1882

Shape1879.geometry = LineSet1880

HAnimSegment1875.children.append(Shape1879)

HAnimJoint1874.children.append(HAnimSegment1875)
HAnimJoint1883 = x3d.HAnimJoint()
HAnimJoint1883.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint1883.DEF = "hanim_r_carpal_proximal_interphalangeal_5"
HAnimJoint1883.center = [-0.1902,0.7483,-0.0963]
HAnimJoint1883.ulimit = [0,0,0]
HAnimJoint1883.llimit = [0,0,0]
HAnimSegment1884 = x3d.HAnimSegment()
HAnimSegment1884.name = "r_carpal_middle_phalanx_5"
HAnimSegment1884.DEF = "hanim_r_carpal_middle_phalanx_5"
Transform1885 = x3d.Transform()
Transform1885.translation = [-0.1902,0.7483,-0.0963]
Transform1886 = x3d.Transform()
"""Empty Transform"""
Shape1887 = x3d.Shape()
Shape1887.USE = "HAnimJointShape"

Transform1886.children.append(Shape1887)

Transform1885.children.append(Transform1886)

HAnimSegment1884.children.append(Transform1885)
Shape1888 = x3d.Shape()
LineSet1889 = x3d.LineSet()
LineSet1889.vertexCount = [2]
Coordinate1890 = x3d.Coordinate()

LineSet1889.coord = Coordinate1890
"""from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2"""
ColorRGBA1891 = x3d.ColorRGBA()
ColorRGBA1891.USE = "HAnimSegmentLineColorRGBA"

LineSet1889.color = ColorRGBA1891

Shape1888.geometry = LineSet1889

HAnimSegment1884.children.append(Shape1888)

HAnimJoint1883.children.append(HAnimSegment1884)
HAnimJoint1892 = x3d.HAnimJoint()
HAnimJoint1892.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint1892.DEF = "hanim_r_carpal_distal_interphalangeal_5"
HAnimJoint1892.center = [-0.1908,0.754,-0.096]
HAnimJoint1892.ulimit = [0,0,0]
HAnimJoint1892.llimit = [0,0,0]

HAnimJoint1883.children.append(HAnimJoint1892)

HAnimJoint1874.children.append(HAnimJoint1883)

HAnimJoint1858.children.append(HAnimJoint1874)

HAnimJoint1817.children.append(HAnimJoint1858)

HAnimJoint1673.children.append(HAnimJoint1817)

HAnimJoint1636.children.append(HAnimJoint1673)

HAnimJoint1613.children.append(HAnimJoint1636)

HAnimJoint1604.children.append(HAnimJoint1613)

HAnimJoint1560.children.append(HAnimJoint1604)

HAnimJoint995.children.append(HAnimJoint1560)

HAnimJoint986.children.append(HAnimJoint995)

HAnimJoint977.children.append(HAnimJoint986)

HAnimJoint968.children.append(HAnimJoint977)

HAnimJoint952.children.append(HAnimJoint968)

HAnimJoint915.children.append(HAnimJoint952)

HAnimJoint906.children.append(HAnimJoint915)

HAnimJoint897.children.append(HAnimJoint906)

HAnimJoint874.children.append(HAnimJoint897)

HAnimJoint858.children.append(HAnimJoint874)

HAnimJoint849.children.append(HAnimJoint858)

HAnimJoint840.children.append(HAnimJoint849)

HAnimJoint831.children.append(HAnimJoint840)

HAnimJoint801.children.append(HAnimJoint831)

HAnimJoint792.children.append(HAnimJoint801)

HAnimJoint783.children.append(HAnimJoint792)

HAnimJoint753.children.append(HAnimJoint783)

HAnimJoint47.children.append(HAnimJoint753)

HAnimHumanoid38.skeleton.append(HAnimJoint47)
HAnimJoint1893 = x3d.HAnimJoint()
HAnimJoint1893.USE = "hanim_humanoid_root"

HAnimHumanoid38.joints.append(HAnimJoint1893)
HAnimJoint1894 = x3d.HAnimJoint()
HAnimJoint1894.USE = "hanim_sacroiliac"

HAnimHumanoid38.joints.append(HAnimJoint1894)
HAnimJoint1895 = x3d.HAnimJoint()
HAnimJoint1895.USE = "hanim_l_hip"

HAnimHumanoid38.joints.append(HAnimJoint1895)
HAnimJoint1896 = x3d.HAnimJoint()
HAnimJoint1896.USE = "hanim_l_knee"

HAnimHumanoid38.joints.append(HAnimJoint1896)
HAnimJoint1897 = x3d.HAnimJoint()
HAnimJoint1897.USE = "hanim_l_talocrural"

HAnimHumanoid38.joints.append(HAnimJoint1897)
HAnimJoint1898 = x3d.HAnimJoint()
HAnimJoint1898.USE = "hanim_l_talocalcaneonavicular"

HAnimHumanoid38.joints.append(HAnimJoint1898)
HAnimJoint1899 = x3d.HAnimJoint()
HAnimJoint1899.USE = "hanim_l_cuneonavicular_1"

HAnimHumanoid38.joints.append(HAnimJoint1899)
HAnimJoint1900 = x3d.HAnimJoint()
HAnimJoint1900.USE = "hanim_l_tarsometatarsal_1"

HAnimHumanoid38.joints.append(HAnimJoint1900)
HAnimJoint1901 = x3d.HAnimJoint()
HAnimJoint1901.USE = "hanim_l_metatarsophalangeal_1"

HAnimHumanoid38.joints.append(HAnimJoint1901)
HAnimJoint1902 = x3d.HAnimJoint()
HAnimJoint1902.USE = "hanim_l_tarsal_interphalangeal_1"

HAnimHumanoid38.joints.append(HAnimJoint1902)
HAnimJoint1903 = x3d.HAnimJoint()
HAnimJoint1903.USE = "hanim_l_cuneonavicular_2"

HAnimHumanoid38.joints.append(HAnimJoint1903)
HAnimJoint1904 = x3d.HAnimJoint()
HAnimJoint1904.USE = "hanim_l_tarsometatarsal_2"

HAnimHumanoid38.joints.append(HAnimJoint1904)
HAnimJoint1905 = x3d.HAnimJoint()
HAnimJoint1905.USE = "hanim_l_metatarsophalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1905)
HAnimJoint1906 = x3d.HAnimJoint()
HAnimJoint1906.USE = "hanim_l_tarsal_proximal_interphalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1906)
HAnimJoint1907 = x3d.HAnimJoint()
HAnimJoint1907.USE = "hanim_l_tarsal_distal_interphalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1907)
HAnimJoint1908 = x3d.HAnimJoint()
HAnimJoint1908.USE = "hanim_l_cuneonavicular_3"

HAnimHumanoid38.joints.append(HAnimJoint1908)
HAnimJoint1909 = x3d.HAnimJoint()
HAnimJoint1909.USE = "hanim_l_tarsometatarsal_3"

HAnimHumanoid38.joints.append(HAnimJoint1909)
HAnimJoint1910 = x3d.HAnimJoint()
HAnimJoint1910.USE = "hanim_l_metatarsophalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint1910)
HAnimJoint1911 = x3d.HAnimJoint()
HAnimJoint1911.USE = "hanim_l_tarsal_proximal_interphalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint1911)
HAnimJoint1912 = x3d.HAnimJoint()
HAnimJoint1912.USE = "hanim_l_tarsal_distal_interphalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint1912)
HAnimJoint1913 = x3d.HAnimJoint()
HAnimJoint1913.USE = "hanim_l_calcaneocuboid"

HAnimHumanoid38.joints.append(HAnimJoint1913)
HAnimJoint1914 = x3d.HAnimJoint()
HAnimJoint1914.USE = "hanim_l_transversetarsal"

HAnimHumanoid38.joints.append(HAnimJoint1914)
HAnimJoint1915 = x3d.HAnimJoint()
HAnimJoint1915.USE = "hanim_l_tarsometatarsal_4"

HAnimHumanoid38.joints.append(HAnimJoint1915)
HAnimJoint1916 = x3d.HAnimJoint()
HAnimJoint1916.USE = "hanim_l_metatarsophalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint1916)
HAnimJoint1917 = x3d.HAnimJoint()
HAnimJoint1917.USE = "hanim_l_tarsal_proximal_interphalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint1917)
HAnimJoint1918 = x3d.HAnimJoint()
HAnimJoint1918.USE = "hanim_l_tarsal_distal_interphalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint1918)
HAnimJoint1919 = x3d.HAnimJoint()
HAnimJoint1919.USE = "hanim_l_tarsometatarsal_5"

HAnimHumanoid38.joints.append(HAnimJoint1919)
HAnimJoint1920 = x3d.HAnimJoint()
HAnimJoint1920.USE = "hanim_l_metatarsophalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint1920)
HAnimJoint1921 = x3d.HAnimJoint()
HAnimJoint1921.USE = "hanim_l_tarsal_proximal_interphalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint1921)
HAnimJoint1922 = x3d.HAnimJoint()
HAnimJoint1922.USE = "hanim_l_tarsal_distal_interphalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint1922)
HAnimJoint1923 = x3d.HAnimJoint()
HAnimJoint1923.USE = "hanim_r_hip"

HAnimHumanoid38.joints.append(HAnimJoint1923)
HAnimJoint1924 = x3d.HAnimJoint()
HAnimJoint1924.USE = "hanim_r_knee"

HAnimHumanoid38.joints.append(HAnimJoint1924)
HAnimJoint1925 = x3d.HAnimJoint()
HAnimJoint1925.USE = "hanim_r_talocrural"

HAnimHumanoid38.joints.append(HAnimJoint1925)
HAnimJoint1926 = x3d.HAnimJoint()
HAnimJoint1926.USE = "hanim_r_talocalcaneonavicular"

HAnimHumanoid38.joints.append(HAnimJoint1926)
HAnimJoint1927 = x3d.HAnimJoint()
HAnimJoint1927.USE = "hanim_r_cuneonavicular_1"

HAnimHumanoid38.joints.append(HAnimJoint1927)
HAnimJoint1928 = x3d.HAnimJoint()
HAnimJoint1928.USE = "hanim_r_tarsometatarsal_1"

HAnimHumanoid38.joints.append(HAnimJoint1928)
HAnimJoint1929 = x3d.HAnimJoint()
HAnimJoint1929.USE = "hanim_r_metatarsophalangeal_1"

HAnimHumanoid38.joints.append(HAnimJoint1929)
HAnimJoint1930 = x3d.HAnimJoint()
HAnimJoint1930.USE = "hanim_r_tarsal_interphalangeal_1"

HAnimHumanoid38.joints.append(HAnimJoint1930)
HAnimJoint1931 = x3d.HAnimJoint()
HAnimJoint1931.USE = "hanim_r_cuneonavicular_2"

HAnimHumanoid38.joints.append(HAnimJoint1931)
HAnimJoint1932 = x3d.HAnimJoint()
HAnimJoint1932.USE = "hanim_r_tarsometatarsal_2"

HAnimHumanoid38.joints.append(HAnimJoint1932)
HAnimJoint1933 = x3d.HAnimJoint()
HAnimJoint1933.USE = "hanim_r_metatarsophalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1933)
HAnimJoint1934 = x3d.HAnimJoint()
HAnimJoint1934.USE = "hanim_r_tarsal_proximal_interphalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1934)
HAnimJoint1935 = x3d.HAnimJoint()
HAnimJoint1935.USE = "hanim_r_tarsal_distal_interphalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1935)
HAnimJoint1936 = x3d.HAnimJoint()
HAnimJoint1936.USE = "hanim_r_cuneonavicular_3"

HAnimHumanoid38.joints.append(HAnimJoint1936)
HAnimJoint1937 = x3d.HAnimJoint()
HAnimJoint1937.USE = "hanim_r_tarsometatarsal_3"

HAnimHumanoid38.joints.append(HAnimJoint1937)
HAnimJoint1938 = x3d.HAnimJoint()
HAnimJoint1938.USE = "hanim_r_metatarsophalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint1938)
HAnimJoint1939 = x3d.HAnimJoint()
HAnimJoint1939.USE = "hanim_r_tarsal_proximal_interphalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint1939)
HAnimJoint1940 = x3d.HAnimJoint()
HAnimJoint1940.USE = "hanim_r_tarsal_distal_interphalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint1940)
HAnimJoint1941 = x3d.HAnimJoint()
HAnimJoint1941.USE = "hanim_r_calcaneocuboid"

HAnimHumanoid38.joints.append(HAnimJoint1941)
HAnimJoint1942 = x3d.HAnimJoint()
HAnimJoint1942.USE = "hanim_r_transversetarsal"

HAnimHumanoid38.joints.append(HAnimJoint1942)
HAnimJoint1943 = x3d.HAnimJoint()
HAnimJoint1943.USE = "hanim_r_tarsometatarsal_4"

HAnimHumanoid38.joints.append(HAnimJoint1943)
HAnimJoint1944 = x3d.HAnimJoint()
HAnimJoint1944.USE = "hanim_r_metatarsophalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint1944)
HAnimJoint1945 = x3d.HAnimJoint()
HAnimJoint1945.USE = "hanim_r_tarsal_proximal_interphalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint1945)
HAnimJoint1946 = x3d.HAnimJoint()
HAnimJoint1946.USE = "hanim_r_tarsal_distal_interphalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint1946)
HAnimJoint1947 = x3d.HAnimJoint()
HAnimJoint1947.USE = "hanim_r_tarsometatarsal_5"

HAnimHumanoid38.joints.append(HAnimJoint1947)
HAnimJoint1948 = x3d.HAnimJoint()
HAnimJoint1948.USE = "hanim_r_metatarsophalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint1948)
HAnimJoint1949 = x3d.HAnimJoint()
HAnimJoint1949.USE = "hanim_r_tarsal_proximal_interphalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint1949)
HAnimJoint1950 = x3d.HAnimJoint()
HAnimJoint1950.USE = "hanim_r_tarsal_distal_interphalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint1950)
HAnimJoint1951 = x3d.HAnimJoint()
HAnimJoint1951.USE = "hanim_vl5"

HAnimHumanoid38.joints.append(HAnimJoint1951)
HAnimJoint1952 = x3d.HAnimJoint()
HAnimJoint1952.USE = "hanim_vl4"

HAnimHumanoid38.joints.append(HAnimJoint1952)
HAnimJoint1953 = x3d.HAnimJoint()
HAnimJoint1953.USE = "hanim_vl3"

HAnimHumanoid38.joints.append(HAnimJoint1953)
HAnimJoint1954 = x3d.HAnimJoint()
HAnimJoint1954.USE = "hanim_vl2"

HAnimHumanoid38.joints.append(HAnimJoint1954)
HAnimJoint1955 = x3d.HAnimJoint()
HAnimJoint1955.USE = "hanim_vl1"

HAnimHumanoid38.joints.append(HAnimJoint1955)
HAnimJoint1956 = x3d.HAnimJoint()
HAnimJoint1956.USE = "hanim_vt12"

HAnimHumanoid38.joints.append(HAnimJoint1956)
HAnimJoint1957 = x3d.HAnimJoint()
HAnimJoint1957.USE = "hanim_vt11"

HAnimHumanoid38.joints.append(HAnimJoint1957)
HAnimJoint1958 = x3d.HAnimJoint()
HAnimJoint1958.USE = "hanim_vt10"

HAnimHumanoid38.joints.append(HAnimJoint1958)
HAnimJoint1959 = x3d.HAnimJoint()
HAnimJoint1959.USE = "hanim_vt9"

HAnimHumanoid38.joints.append(HAnimJoint1959)
HAnimJoint1960 = x3d.HAnimJoint()
HAnimJoint1960.USE = "hanim_vt8"

HAnimHumanoid38.joints.append(HAnimJoint1960)
HAnimJoint1961 = x3d.HAnimJoint()
HAnimJoint1961.USE = "hanim_vt7"

HAnimHumanoid38.joints.append(HAnimJoint1961)
HAnimJoint1962 = x3d.HAnimJoint()
HAnimJoint1962.USE = "hanim_vt6"

HAnimHumanoid38.joints.append(HAnimJoint1962)
HAnimJoint1963 = x3d.HAnimJoint()
HAnimJoint1963.USE = "hanim_vt5"

HAnimHumanoid38.joints.append(HAnimJoint1963)
HAnimJoint1964 = x3d.HAnimJoint()
HAnimJoint1964.USE = "hanim_vt4"

HAnimHumanoid38.joints.append(HAnimJoint1964)
HAnimJoint1965 = x3d.HAnimJoint()
HAnimJoint1965.USE = "hanim_vt3"

HAnimHumanoid38.joints.append(HAnimJoint1965)
HAnimJoint1966 = x3d.HAnimJoint()
HAnimJoint1966.USE = "hanim_vt2"

HAnimHumanoid38.joints.append(HAnimJoint1966)
HAnimJoint1967 = x3d.HAnimJoint()
HAnimJoint1967.USE = "hanim_vt1"

HAnimHumanoid38.joints.append(HAnimJoint1967)
HAnimJoint1968 = x3d.HAnimJoint()
HAnimJoint1968.USE = "hanim_vc7"

HAnimHumanoid38.joints.append(HAnimJoint1968)
HAnimJoint1969 = x3d.HAnimJoint()
HAnimJoint1969.USE = "hanim_vc6"

HAnimHumanoid38.joints.append(HAnimJoint1969)
HAnimJoint1970 = x3d.HAnimJoint()
HAnimJoint1970.USE = "hanim_vc5"

HAnimHumanoid38.joints.append(HAnimJoint1970)
HAnimJoint1971 = x3d.HAnimJoint()
HAnimJoint1971.USE = "hanim_vc4"

HAnimHumanoid38.joints.append(HAnimJoint1971)
HAnimJoint1972 = x3d.HAnimJoint()
HAnimJoint1972.USE = "hanim_vc3"

HAnimHumanoid38.joints.append(HAnimJoint1972)
HAnimJoint1973 = x3d.HAnimJoint()
HAnimJoint1973.USE = "hanim_vc2"

HAnimHumanoid38.joints.append(HAnimJoint1973)
HAnimJoint1974 = x3d.HAnimJoint()
HAnimJoint1974.USE = "hanim_vc1"

HAnimHumanoid38.joints.append(HAnimJoint1974)
HAnimJoint1975 = x3d.HAnimJoint()
HAnimJoint1975.USE = "hanim_skullbase"

HAnimHumanoid38.joints.append(HAnimJoint1975)
HAnimJoint1976 = x3d.HAnimJoint()
HAnimJoint1976.USE = "hanim_l_eyelid_joint"

HAnimHumanoid38.joints.append(HAnimJoint1976)
HAnimJoint1977 = x3d.HAnimJoint()
HAnimJoint1977.USE = "hanim_r_eyelid_joint"

HAnimHumanoid38.joints.append(HAnimJoint1977)
HAnimJoint1978 = x3d.HAnimJoint()
HAnimJoint1978.USE = "hanim_l_eyeball_joint"

HAnimHumanoid38.joints.append(HAnimJoint1978)
HAnimJoint1979 = x3d.HAnimJoint()
HAnimJoint1979.USE = "hanim_r_eyeball_joint"

HAnimHumanoid38.joints.append(HAnimJoint1979)
HAnimJoint1980 = x3d.HAnimJoint()
HAnimJoint1980.USE = "hanim_l_eyebrow_joint"

HAnimHumanoid38.joints.append(HAnimJoint1980)
HAnimJoint1981 = x3d.HAnimJoint()
HAnimJoint1981.USE = "hanim_r_eyebrow_joint"

HAnimHumanoid38.joints.append(HAnimJoint1981)
HAnimJoint1982 = x3d.HAnimJoint()
HAnimJoint1982.USE = "hanim_temporomandibular"

HAnimHumanoid38.joints.append(HAnimJoint1982)
HAnimJoint1983 = x3d.HAnimJoint()
HAnimJoint1983.USE = "hanim_l_sternoclavicular"

HAnimHumanoid38.joints.append(HAnimJoint1983)
HAnimJoint1984 = x3d.HAnimJoint()
HAnimJoint1984.USE = "hanim_l_acromioclavicular"

HAnimHumanoid38.joints.append(HAnimJoint1984)
HAnimJoint1985 = x3d.HAnimJoint()
HAnimJoint1985.USE = "hanim_l_shoulder"

HAnimHumanoid38.joints.append(HAnimJoint1985)
HAnimJoint1986 = x3d.HAnimJoint()
HAnimJoint1986.USE = "hanim_l_elbow"

HAnimHumanoid38.joints.append(HAnimJoint1986)
HAnimJoint1987 = x3d.HAnimJoint()
HAnimJoint1987.USE = "hanim_l_radiocarpal"

HAnimHumanoid38.joints.append(HAnimJoint1987)
HAnimJoint1988 = x3d.HAnimJoint()
HAnimJoint1988.USE = "hanim_l_midcarpal_1"

HAnimHumanoid38.joints.append(HAnimJoint1988)
HAnimJoint1989 = x3d.HAnimJoint()
HAnimJoint1989.USE = "hanim_l_carpometacarpal_1"

HAnimHumanoid38.joints.append(HAnimJoint1989)
HAnimJoint1990 = x3d.HAnimJoint()
HAnimJoint1990.USE = "hanim_l_metacarpophalangeal_1"

HAnimHumanoid38.joints.append(HAnimJoint1990)
HAnimJoint1991 = x3d.HAnimJoint()
HAnimJoint1991.USE = "hanim_l_carpal_interphalangeal_1"

HAnimHumanoid38.joints.append(HAnimJoint1991)
HAnimJoint1992 = x3d.HAnimJoint()
HAnimJoint1992.USE = "hanim_l_midcarpal_2"

HAnimHumanoid38.joints.append(HAnimJoint1992)
HAnimJoint1993 = x3d.HAnimJoint()
HAnimJoint1993.USE = "hanim_l_carpometacarpal_2"

HAnimHumanoid38.joints.append(HAnimJoint1993)
HAnimJoint1994 = x3d.HAnimJoint()
HAnimJoint1994.USE = "hanim_l_metacarpophalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1994)
HAnimJoint1995 = x3d.HAnimJoint()
HAnimJoint1995.USE = "hanim_l_carpal_proximal_interphalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1995)
HAnimJoint1996 = x3d.HAnimJoint()
HAnimJoint1996.USE = "hanim_l_carpal_distal_interphalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1996)
HAnimJoint1997 = x3d.HAnimJoint()
HAnimJoint1997.USE = "hanim_l_midcarpal_3"

HAnimHumanoid38.joints.append(HAnimJoint1997)
HAnimJoint1998 = x3d.HAnimJoint()
HAnimJoint1998.USE = "hanim_l_carpometacarpal_3"

HAnimHumanoid38.joints.append(HAnimJoint1998)
HAnimJoint1999 = x3d.HAnimJoint()
HAnimJoint1999.USE = "hanim_l_metacarpophalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint1999)
HAnimJoint2000 = x3d.HAnimJoint()
HAnimJoint2000.USE = "hanim_l_carpal_proximal_interphalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint2000)
HAnimJoint2001 = x3d.HAnimJoint()
HAnimJoint2001.USE = "hanim_l_carpal_distal_interphalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint2001)
HAnimJoint2002 = x3d.HAnimJoint()
HAnimJoint2002.USE = "hanim_l_midcarpal_4_5"

HAnimHumanoid38.joints.append(HAnimJoint2002)
HAnimJoint2003 = x3d.HAnimJoint()
HAnimJoint2003.USE = "hanim_l_carpometacarpal_4"

HAnimHumanoid38.joints.append(HAnimJoint2003)
HAnimJoint2004 = x3d.HAnimJoint()
HAnimJoint2004.USE = "hanim_l_metacarpophalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint2004)
HAnimJoint2005 = x3d.HAnimJoint()
HAnimJoint2005.USE = "hanim_l_carpal_proximal_interphalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint2005)
HAnimJoint2006 = x3d.HAnimJoint()
HAnimJoint2006.USE = "hanim_l_carpal_distal_interphalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint2006)
HAnimJoint2007 = x3d.HAnimJoint()
HAnimJoint2007.USE = "hanim_l_carpometacarpal_5"

HAnimHumanoid38.joints.append(HAnimJoint2007)
HAnimJoint2008 = x3d.HAnimJoint()
HAnimJoint2008.USE = "hanim_l_metacarpophalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint2008)
HAnimJoint2009 = x3d.HAnimJoint()
HAnimJoint2009.USE = "hanim_l_carpal_proximal_interphalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint2009)
HAnimJoint2010 = x3d.HAnimJoint()
HAnimJoint2010.USE = "hanim_l_carpal_distal_interphalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint2010)
HAnimJoint2011 = x3d.HAnimJoint()
HAnimJoint2011.USE = "hanim_r_sternoclavicular"

HAnimHumanoid38.joints.append(HAnimJoint2011)
HAnimJoint2012 = x3d.HAnimJoint()
HAnimJoint2012.USE = "hanim_r_acromioclavicular"

HAnimHumanoid38.joints.append(HAnimJoint2012)
HAnimJoint2013 = x3d.HAnimJoint()
HAnimJoint2013.USE = "hanim_r_shoulder"

HAnimHumanoid38.joints.append(HAnimJoint2013)
HAnimJoint2014 = x3d.HAnimJoint()
HAnimJoint2014.USE = "hanim_r_elbow"

HAnimHumanoid38.joints.append(HAnimJoint2014)
HAnimJoint2015 = x3d.HAnimJoint()
HAnimJoint2015.USE = "hanim_r_radiocarpal"

HAnimHumanoid38.joints.append(HAnimJoint2015)
HAnimJoint2016 = x3d.HAnimJoint()
HAnimJoint2016.USE = "hanim_r_midcarpal_1"

HAnimHumanoid38.joints.append(HAnimJoint2016)
HAnimJoint2017 = x3d.HAnimJoint()
HAnimJoint2017.USE = "hanim_r_carpometacarpal_1"

HAnimHumanoid38.joints.append(HAnimJoint2017)
HAnimJoint2018 = x3d.HAnimJoint()
HAnimJoint2018.USE = "hanim_r_metacarpophalangeal_1"

HAnimHumanoid38.joints.append(HAnimJoint2018)
HAnimJoint2019 = x3d.HAnimJoint()
HAnimJoint2019.USE = "hanim_r_carpal_interphalangeal_1"

HAnimHumanoid38.joints.append(HAnimJoint2019)
HAnimJoint2020 = x3d.HAnimJoint()
HAnimJoint2020.USE = "hanim_r_midcarpal_2"

HAnimHumanoid38.joints.append(HAnimJoint2020)
HAnimJoint2021 = x3d.HAnimJoint()
HAnimJoint2021.USE = "hanim_r_carpometacarpal_2"

HAnimHumanoid38.joints.append(HAnimJoint2021)
HAnimJoint2022 = x3d.HAnimJoint()
HAnimJoint2022.USE = "hanim_r_metacarpophalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint2022)
HAnimJoint2023 = x3d.HAnimJoint()
HAnimJoint2023.USE = "hanim_r_carpal_proximal_interphalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint2023)
HAnimJoint2024 = x3d.HAnimJoint()
HAnimJoint2024.USE = "hanim_r_carpal_distal_interphalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint2024)
HAnimJoint2025 = x3d.HAnimJoint()
HAnimJoint2025.USE = "hanim_r_midcarpal_3"

HAnimHumanoid38.joints.append(HAnimJoint2025)
HAnimJoint2026 = x3d.HAnimJoint()
HAnimJoint2026.USE = "hanim_r_carpometacarpal_3"

HAnimHumanoid38.joints.append(HAnimJoint2026)
HAnimJoint2027 = x3d.HAnimJoint()
HAnimJoint2027.USE = "hanim_r_metacarpophalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint2027)
HAnimJoint2028 = x3d.HAnimJoint()
HAnimJoint2028.USE = "hanim_r_carpal_proximal_interphalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint2028)
HAnimJoint2029 = x3d.HAnimJoint()
HAnimJoint2029.USE = "hanim_r_carpal_distal_interphalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint2029)
HAnimJoint2030 = x3d.HAnimJoint()
HAnimJoint2030.USE = "hanim_r_midcarpal_4_5"

HAnimHumanoid38.joints.append(HAnimJoint2030)
HAnimJoint2031 = x3d.HAnimJoint()
HAnimJoint2031.USE = "hanim_r_carpometacarpal_4"

HAnimHumanoid38.joints.append(HAnimJoint2031)
HAnimJoint2032 = x3d.HAnimJoint()
HAnimJoint2032.USE = "hanim_r_metacarpophalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint2032)
HAnimJoint2033 = x3d.HAnimJoint()
HAnimJoint2033.USE = "hanim_r_carpal_proximal_interphalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint2033)
HAnimJoint2034 = x3d.HAnimJoint()
HAnimJoint2034.USE = "hanim_r_carpal_distal_interphalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint2034)
HAnimJoint2035 = x3d.HAnimJoint()
HAnimJoint2035.USE = "hanim_r_carpometacarpal_5"

HAnimHumanoid38.joints.append(HAnimJoint2035)
HAnimJoint2036 = x3d.HAnimJoint()
HAnimJoint2036.USE = "hanim_r_metacarpophalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint2036)
HAnimJoint2037 = x3d.HAnimJoint()
HAnimJoint2037.USE = "hanim_r_carpal_proximal_interphalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint2037)
HAnimJoint2038 = x3d.HAnimJoint()
HAnimJoint2038.USE = "hanim_r_carpal_distal_interphalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint2038)
HAnimSegment2039 = x3d.HAnimSegment()
HAnimSegment2039.USE = "hanim_sacrum"

HAnimHumanoid38.segments.append(HAnimSegment2039)
HAnimSegment2040 = x3d.HAnimSegment()
HAnimSegment2040.USE = "hanim_pelvis"

HAnimHumanoid38.segments.append(HAnimSegment2040)
HAnimSegment2041 = x3d.HAnimSegment()
HAnimSegment2041.USE = "hanim_l_thigh"

HAnimHumanoid38.segments.append(HAnimSegment2041)
HAnimSegment2042 = x3d.HAnimSegment()
HAnimSegment2042.USE = "hanim_l_calf"

HAnimHumanoid38.segments.append(HAnimSegment2042)
HAnimSegment2043 = x3d.HAnimSegment()
HAnimSegment2043.USE = "hanim_l_talus"

HAnimHumanoid38.segments.append(HAnimSegment2043)
HAnimSegment2044 = x3d.HAnimSegment()
HAnimSegment2044.USE = "hanim_l_navicular"

HAnimHumanoid38.segments.append(HAnimSegment2044)
HAnimSegment2045 = x3d.HAnimSegment()
HAnimSegment2045.USE = "hanim_l_cuneiform_1"

HAnimHumanoid38.segments.append(HAnimSegment2045)
HAnimSegment2046 = x3d.HAnimSegment()
HAnimSegment2046.USE = "hanim_l_metatarsal_1"

HAnimHumanoid38.segments.append(HAnimSegment2046)
HAnimSegment2047 = x3d.HAnimSegment()
HAnimSegment2047.USE = "hanim_l_tarsal_proximal_phalanx_1"

HAnimHumanoid38.segments.append(HAnimSegment2047)
HAnimSegment2048 = x3d.HAnimSegment()
HAnimSegment2048.USE = "hanim_l_cuneiform_2"

HAnimHumanoid38.segments.append(HAnimSegment2048)
HAnimSegment2049 = x3d.HAnimSegment()
HAnimSegment2049.USE = "hanim_l_metatarsal_2"

HAnimHumanoid38.segments.append(HAnimSegment2049)
HAnimSegment2050 = x3d.HAnimSegment()
HAnimSegment2050.USE = "hanim_l_tarsal_proximal_phalanx_2"

HAnimHumanoid38.segments.append(HAnimSegment2050)
HAnimSegment2051 = x3d.HAnimSegment()
HAnimSegment2051.USE = "hanim_l_tarsal_middle_phalanx_2"

HAnimHumanoid38.segments.append(HAnimSegment2051)
HAnimSegment2052 = x3d.HAnimSegment()
HAnimSegment2052.USE = "hanim_l_cuneiform_3"

HAnimHumanoid38.segments.append(HAnimSegment2052)
HAnimSegment2053 = x3d.HAnimSegment()
HAnimSegment2053.USE = "hanim_l_metatarsal_3"

HAnimHumanoid38.segments.append(HAnimSegment2053)
HAnimSegment2054 = x3d.HAnimSegment()
HAnimSegment2054.USE = "hanim_l_tarsal_proximal_phalanx_3"

HAnimHumanoid38.segments.append(HAnimSegment2054)
HAnimSegment2055 = x3d.HAnimSegment()
HAnimSegment2055.USE = "hanim_l_tarsal_middle_phalanx_3"

HAnimHumanoid38.segments.append(HAnimSegment2055)
HAnimSegment2056 = x3d.HAnimSegment()
HAnimSegment2056.USE = "hanim_l_calcaneus"

HAnimHumanoid38.segments.append(HAnimSegment2056)
HAnimSegment2057 = x3d.HAnimSegment()
HAnimSegment2057.USE = "hanim_l_cuboid"

HAnimHumanoid38.segments.append(HAnimSegment2057)
HAnimSegment2058 = x3d.HAnimSegment()
HAnimSegment2058.USE = "hanim_l_metatarsal_4"

HAnimHumanoid38.segments.append(HAnimSegment2058)
HAnimSegment2059 = x3d.HAnimSegment()
HAnimSegment2059.USE = "hanim_l_tarsal_proximal_phalanx_4"

HAnimHumanoid38.segments.append(HAnimSegment2059)
HAnimSegment2060 = x3d.HAnimSegment()
HAnimSegment2060.USE = "hanim_l_tarsal_middle_phalanx_4"

HAnimHumanoid38.segments.append(HAnimSegment2060)
HAnimSegment2061 = x3d.HAnimSegment()
HAnimSegment2061.USE = "hanim_l_metatarsal_5"

HAnimHumanoid38.segments.append(HAnimSegment2061)
HAnimSegment2062 = x3d.HAnimSegment()
HAnimSegment2062.USE = "hanim_l_tarsal_proximal_phalanx_5"

HAnimHumanoid38.segments.append(HAnimSegment2062)
HAnimSegment2063 = x3d.HAnimSegment()
HAnimSegment2063.USE = "hanim_l_tarsal_middle_phalanx_5"

HAnimHumanoid38.segments.append(HAnimSegment2063)
HAnimSegment2064 = x3d.HAnimSegment()
HAnimSegment2064.USE = "hanim_r_thigh"

HAnimHumanoid38.segments.append(HAnimSegment2064)
HAnimSegment2065 = x3d.HAnimSegment()
HAnimSegment2065.USE = "hanim_r_calf"

HAnimHumanoid38.segments.append(HAnimSegment2065)
HAnimSegment2066 = x3d.HAnimSegment()
HAnimSegment2066.USE = "hanim_r_talus"

HAnimHumanoid38.segments.append(HAnimSegment2066)
HAnimSegment2067 = x3d.HAnimSegment()
HAnimSegment2067.USE = "hanim_r_navicular"

HAnimHumanoid38.segments.append(HAnimSegment2067)
HAnimSegment2068 = x3d.HAnimSegment()
HAnimSegment2068.USE = "hanim_r_cuneiform_1"

HAnimHumanoid38.segments.append(HAnimSegment2068)
HAnimSegment2069 = x3d.HAnimSegment()
HAnimSegment2069.USE = "hanim_r_metatarsal_1"

HAnimHumanoid38.segments.append(HAnimSegment2069)
HAnimSegment2070 = x3d.HAnimSegment()
HAnimSegment2070.USE = "hanim_r_tarsal_proximal_phalanx_1"

HAnimHumanoid38.segments.append(HAnimSegment2070)
HAnimSegment2071 = x3d.HAnimSegment()
HAnimSegment2071.USE = "hanim_r_cuneiform_2"

HAnimHumanoid38.segments.append(HAnimSegment2071)
HAnimSegment2072 = x3d.HAnimSegment()
HAnimSegment2072.USE = "hanim_r_metatarsal_2"

HAnimHumanoid38.segments.append(HAnimSegment2072)
HAnimSegment2073 = x3d.HAnimSegment()
HAnimSegment2073.USE = "hanim_r_tarsal_proximal_phalanx_2"

HAnimHumanoid38.segments.append(HAnimSegment2073)
HAnimSegment2074 = x3d.HAnimSegment()
HAnimSegment2074.USE = "hanim_r_tarsal_middle_phalanx_2"

HAnimHumanoid38.segments.append(HAnimSegment2074)
HAnimSegment2075 = x3d.HAnimSegment()
HAnimSegment2075.USE = "hanim_r_cuneiform_3"

HAnimHumanoid38.segments.append(HAnimSegment2075)
HAnimSegment2076 = x3d.HAnimSegment()
HAnimSegment2076.USE = "hanim_r_metatarsal_3"

HAnimHumanoid38.segments.append(HAnimSegment2076)
HAnimSegment2077 = x3d.HAnimSegment()
HAnimSegment2077.USE = "hanim_r_tarsal_proximal_phalanx_3"

HAnimHumanoid38.segments.append(HAnimSegment2077)
HAnimSegment2078 = x3d.HAnimSegment()
HAnimSegment2078.USE = "hanim_r_tarsal_middle_phalanx_3"

HAnimHumanoid38.segments.append(HAnimSegment2078)
HAnimSegment2079 = x3d.HAnimSegment()
HAnimSegment2079.USE = "hanim_r_calcaneus"

HAnimHumanoid38.segments.append(HAnimSegment2079)
HAnimSegment2080 = x3d.HAnimSegment()
HAnimSegment2080.USE = "hanim_r_cuboid"

HAnimHumanoid38.segments.append(HAnimSegment2080)
HAnimSegment2081 = x3d.HAnimSegment()
HAnimSegment2081.USE = "hanim_r_metatarsal_4"

HAnimHumanoid38.segments.append(HAnimSegment2081)
HAnimSegment2082 = x3d.HAnimSegment()
HAnimSegment2082.USE = "hanim_r_tarsal_proximal_phalanx_4"

HAnimHumanoid38.segments.append(HAnimSegment2082)
HAnimSegment2083 = x3d.HAnimSegment()
HAnimSegment2083.USE = "hanim_r_tarsal_middle_phalanx_4"

HAnimHumanoid38.segments.append(HAnimSegment2083)
HAnimSegment2084 = x3d.HAnimSegment()
HAnimSegment2084.USE = "hanim_r_metatarsal_5"

HAnimHumanoid38.segments.append(HAnimSegment2084)
HAnimSegment2085 = x3d.HAnimSegment()
HAnimSegment2085.USE = "hanim_r_tarsal_proximal_phalanx_5"

HAnimHumanoid38.segments.append(HAnimSegment2085)
HAnimSegment2086 = x3d.HAnimSegment()
HAnimSegment2086.USE = "hanim_r_tarsal_middle_phalanx_5"

HAnimHumanoid38.segments.append(HAnimSegment2086)
HAnimSegment2087 = x3d.HAnimSegment()
HAnimSegment2087.USE = "hanim_l5"

HAnimHumanoid38.segments.append(HAnimSegment2087)
HAnimSegment2088 = x3d.HAnimSegment()
HAnimSegment2088.USE = "hanim_l4"

HAnimHumanoid38.segments.append(HAnimSegment2088)
HAnimSegment2089 = x3d.HAnimSegment()
HAnimSegment2089.USE = "hanim_l3"

HAnimHumanoid38.segments.append(HAnimSegment2089)
HAnimSegment2090 = x3d.HAnimSegment()
HAnimSegment2090.USE = "hanim_l2"

HAnimHumanoid38.segments.append(HAnimSegment2090)
HAnimSegment2091 = x3d.HAnimSegment()
HAnimSegment2091.USE = "hanim_l1"

HAnimHumanoid38.segments.append(HAnimSegment2091)
HAnimSegment2092 = x3d.HAnimSegment()
HAnimSegment2092.USE = "hanim_t12"

HAnimHumanoid38.segments.append(HAnimSegment2092)
HAnimSegment2093 = x3d.HAnimSegment()
HAnimSegment2093.USE = "hanim_t11"

HAnimHumanoid38.segments.append(HAnimSegment2093)
HAnimSegment2094 = x3d.HAnimSegment()
HAnimSegment2094.USE = "hanim_t10"

HAnimHumanoid38.segments.append(HAnimSegment2094)
HAnimSegment2095 = x3d.HAnimSegment()
HAnimSegment2095.USE = "hanim_t9"

HAnimHumanoid38.segments.append(HAnimSegment2095)
HAnimSegment2096 = x3d.HAnimSegment()
HAnimSegment2096.USE = "hanim_t8"

HAnimHumanoid38.segments.append(HAnimSegment2096)
HAnimSegment2097 = x3d.HAnimSegment()
HAnimSegment2097.USE = "hanim_t7"

HAnimHumanoid38.segments.append(HAnimSegment2097)
HAnimSegment2098 = x3d.HAnimSegment()
HAnimSegment2098.USE = "hanim_t6"

HAnimHumanoid38.segments.append(HAnimSegment2098)
HAnimSegment2099 = x3d.HAnimSegment()
HAnimSegment2099.USE = "hanim_t5"

HAnimHumanoid38.segments.append(HAnimSegment2099)
HAnimSegment2100 = x3d.HAnimSegment()
HAnimSegment2100.USE = "hanim_t4"

HAnimHumanoid38.segments.append(HAnimSegment2100)
HAnimSegment2101 = x3d.HAnimSegment()
HAnimSegment2101.USE = "hanim_t3"

HAnimHumanoid38.segments.append(HAnimSegment2101)
HAnimSegment2102 = x3d.HAnimSegment()
HAnimSegment2102.USE = "hanim_t2"

HAnimHumanoid38.segments.append(HAnimSegment2102)
HAnimSegment2103 = x3d.HAnimSegment()
HAnimSegment2103.USE = "hanim_t1"

HAnimHumanoid38.segments.append(HAnimSegment2103)
HAnimSegment2104 = x3d.HAnimSegment()
HAnimSegment2104.USE = "hanim_c7"

HAnimHumanoid38.segments.append(HAnimSegment2104)
HAnimSegment2105 = x3d.HAnimSegment()
HAnimSegment2105.USE = "hanim_c6"

HAnimHumanoid38.segments.append(HAnimSegment2105)
HAnimSegment2106 = x3d.HAnimSegment()
HAnimSegment2106.USE = "hanim_c5"

HAnimHumanoid38.segments.append(HAnimSegment2106)
HAnimSegment2107 = x3d.HAnimSegment()
HAnimSegment2107.USE = "hanim_c4"

HAnimHumanoid38.segments.append(HAnimSegment2107)
HAnimSegment2108 = x3d.HAnimSegment()
HAnimSegment2108.USE = "hanim_c3"

HAnimHumanoid38.segments.append(HAnimSegment2108)
HAnimSegment2109 = x3d.HAnimSegment()
HAnimSegment2109.USE = "hanim_c2"

HAnimHumanoid38.segments.append(HAnimSegment2109)
HAnimSegment2110 = x3d.HAnimSegment()
HAnimSegment2110.USE = "hanim_c1"

HAnimHumanoid38.segments.append(HAnimSegment2110)
HAnimSegment2111 = x3d.HAnimSegment()
HAnimSegment2111.USE = "hanim_skull"

HAnimHumanoid38.segments.append(HAnimSegment2111)
HAnimSegment2112 = x3d.HAnimSegment()
HAnimSegment2112.USE = "hanim_l_clavicle"

HAnimHumanoid38.segments.append(HAnimSegment2112)
HAnimSegment2113 = x3d.HAnimSegment()
HAnimSegment2113.USE = "hanim_l_scapula"

HAnimHumanoid38.segments.append(HAnimSegment2113)
HAnimSegment2114 = x3d.HAnimSegment()
HAnimSegment2114.USE = "hanim_l_upperarm"

HAnimHumanoid38.segments.append(HAnimSegment2114)
HAnimSegment2115 = x3d.HAnimSegment()
HAnimSegment2115.USE = "hanim_l_forearm"

HAnimHumanoid38.segments.append(HAnimSegment2115)
HAnimSegment2116 = x3d.HAnimSegment()
HAnimSegment2116.USE = "hanim_l_carpal"

HAnimHumanoid38.segments.append(HAnimSegment2116)
HAnimSegment2117 = x3d.HAnimSegment()
HAnimSegment2117.USE = "hanim_l_trapezium"

HAnimHumanoid38.segments.append(HAnimSegment2117)
HAnimSegment2118 = x3d.HAnimSegment()
HAnimSegment2118.USE = "hanim_l_metacarpal_1"

HAnimHumanoid38.segments.append(HAnimSegment2118)
HAnimSegment2119 = x3d.HAnimSegment()
HAnimSegment2119.USE = "hanim_l_carpal_proximal_phalanx_1"

HAnimHumanoid38.segments.append(HAnimSegment2119)
HAnimSegment2120 = x3d.HAnimSegment()
HAnimSegment2120.USE = "hanim_l_trapezoid"

HAnimHumanoid38.segments.append(HAnimSegment2120)
HAnimSegment2121 = x3d.HAnimSegment()
HAnimSegment2121.USE = "hanim_l_metacarpal_2"

HAnimHumanoid38.segments.append(HAnimSegment2121)
HAnimSegment2122 = x3d.HAnimSegment()
HAnimSegment2122.USE = "hanim_l_carpal_proximal_phalanx_2"

HAnimHumanoid38.segments.append(HAnimSegment2122)
HAnimSegment2123 = x3d.HAnimSegment()
HAnimSegment2123.USE = "hanim_l_carpal_middle_phalanx_2"

HAnimHumanoid38.segments.append(HAnimSegment2123)
HAnimSegment2124 = x3d.HAnimSegment()
HAnimSegment2124.USE = "hanim_l_capitate"

HAnimHumanoid38.segments.append(HAnimSegment2124)
HAnimSegment2125 = x3d.HAnimSegment()
HAnimSegment2125.USE = "hanim_l_metacarpal_3"

HAnimHumanoid38.segments.append(HAnimSegment2125)
HAnimSegment2126 = x3d.HAnimSegment()
HAnimSegment2126.USE = "hanim_l_carpal_proximal_phalanx_3"

HAnimHumanoid38.segments.append(HAnimSegment2126)
HAnimSegment2127 = x3d.HAnimSegment()
HAnimSegment2127.USE = "hanim_l_carpal_middle_phalanx_3"

HAnimHumanoid38.segments.append(HAnimSegment2127)
HAnimSegment2128 = x3d.HAnimSegment()
HAnimSegment2128.USE = "hanim_l_hamate"

HAnimHumanoid38.segments.append(HAnimSegment2128)
HAnimSegment2129 = x3d.HAnimSegment()
HAnimSegment2129.USE = "hanim_l_metacarpal_4"

HAnimHumanoid38.segments.append(HAnimSegment2129)
HAnimSegment2130 = x3d.HAnimSegment()
HAnimSegment2130.USE = "hanim_l_carpal_proximal_phalanx_4"

HAnimHumanoid38.segments.append(HAnimSegment2130)
HAnimSegment2131 = x3d.HAnimSegment()
HAnimSegment2131.USE = "hanim_l_carpal_middle_phalanx_4"

HAnimHumanoid38.segments.append(HAnimSegment2131)
HAnimSegment2132 = x3d.HAnimSegment()
HAnimSegment2132.USE = "hanim_l_metacarpal_5"

HAnimHumanoid38.segments.append(HAnimSegment2132)
HAnimSegment2133 = x3d.HAnimSegment()
HAnimSegment2133.USE = "hanim_l_carpal_proximal_phalanx_5"

HAnimHumanoid38.segments.append(HAnimSegment2133)
HAnimSegment2134 = x3d.HAnimSegment()
HAnimSegment2134.USE = "hanim_l_carpal_middle_phalanx_5"

HAnimHumanoid38.segments.append(HAnimSegment2134)
HAnimSegment2135 = x3d.HAnimSegment()
HAnimSegment2135.USE = "hanim_r_clavicle"

HAnimHumanoid38.segments.append(HAnimSegment2135)
HAnimSegment2136 = x3d.HAnimSegment()
HAnimSegment2136.USE = "hanim_r_scapula"

HAnimHumanoid38.segments.append(HAnimSegment2136)
HAnimSegment2137 = x3d.HAnimSegment()
HAnimSegment2137.USE = "hanim_r_upperarm"

HAnimHumanoid38.segments.append(HAnimSegment2137)
HAnimSegment2138 = x3d.HAnimSegment()
HAnimSegment2138.USE = "hanim_r_forearm"

HAnimHumanoid38.segments.append(HAnimSegment2138)
HAnimSegment2139 = x3d.HAnimSegment()
HAnimSegment2139.USE = "hanim_r_carpal"

HAnimHumanoid38.segments.append(HAnimSegment2139)
HAnimSegment2140 = x3d.HAnimSegment()
HAnimSegment2140.USE = "hanim_r_trapezium"

HAnimHumanoid38.segments.append(HAnimSegment2140)
HAnimSegment2141 = x3d.HAnimSegment()
HAnimSegment2141.USE = "hanim_r_metacarpal_1"

HAnimHumanoid38.segments.append(HAnimSegment2141)
HAnimSegment2142 = x3d.HAnimSegment()
HAnimSegment2142.USE = "hanim_r_carpal_proximal_phalanx_1"

HAnimHumanoid38.segments.append(HAnimSegment2142)
HAnimSegment2143 = x3d.HAnimSegment()
HAnimSegment2143.USE = "hanim_r_trapezoid"

HAnimHumanoid38.segments.append(HAnimSegment2143)
HAnimSegment2144 = x3d.HAnimSegment()
HAnimSegment2144.USE = "hanim_r_metacarpal_2"

HAnimHumanoid38.segments.append(HAnimSegment2144)
HAnimSegment2145 = x3d.HAnimSegment()
HAnimSegment2145.USE = "hanim_r_carpal_proximal_phalanx_2"

HAnimHumanoid38.segments.append(HAnimSegment2145)
HAnimSegment2146 = x3d.HAnimSegment()
HAnimSegment2146.USE = "hanim_r_carpal_middle_phalanx_2"

HAnimHumanoid38.segments.append(HAnimSegment2146)
HAnimSegment2147 = x3d.HAnimSegment()
HAnimSegment2147.USE = "hanim_r_capitate"

HAnimHumanoid38.segments.append(HAnimSegment2147)
HAnimSegment2148 = x3d.HAnimSegment()
HAnimSegment2148.USE = "hanim_r_metacarpal_3"

HAnimHumanoid38.segments.append(HAnimSegment2148)
HAnimSegment2149 = x3d.HAnimSegment()
HAnimSegment2149.USE = "hanim_r_carpal_proximal_phalanx_3"

HAnimHumanoid38.segments.append(HAnimSegment2149)
HAnimSegment2150 = x3d.HAnimSegment()
HAnimSegment2150.USE = "hanim_r_carpal_middle_phalanx_3"

HAnimHumanoid38.segments.append(HAnimSegment2150)
HAnimSegment2151 = x3d.HAnimSegment()
HAnimSegment2151.USE = "hanim_r_hamate"

HAnimHumanoid38.segments.append(HAnimSegment2151)
HAnimSegment2152 = x3d.HAnimSegment()
HAnimSegment2152.USE = "hanim_r_metacarpal_4"

HAnimHumanoid38.segments.append(HAnimSegment2152)
HAnimSegment2153 = x3d.HAnimSegment()
HAnimSegment2153.USE = "hanim_r_carpal_proximal_phalanx_4"

HAnimHumanoid38.segments.append(HAnimSegment2153)
HAnimSegment2154 = x3d.HAnimSegment()
HAnimSegment2154.USE = "hanim_r_carpal_middle_phalanx_4"

HAnimHumanoid38.segments.append(HAnimSegment2154)
HAnimSegment2155 = x3d.HAnimSegment()
HAnimSegment2155.USE = "hanim_r_metacarpal_5"

HAnimHumanoid38.segments.append(HAnimSegment2155)
HAnimSegment2156 = x3d.HAnimSegment()
HAnimSegment2156.USE = "hanim_r_carpal_proximal_phalanx_5"

HAnimHumanoid38.segments.append(HAnimSegment2156)
HAnimSegment2157 = x3d.HAnimSegment()
HAnimSegment2157.USE = "hanim_r_carpal_middle_phalanx_5"

HAnimHumanoid38.segments.append(HAnimSegment2157)
HAnimSite2158 = x3d.HAnimSite()
HAnimSite2158.USE = "hanim_buttocks_standing_wall_contact_point"

HAnimHumanoid38.sites.append(HAnimSite2158)
HAnimSite2159 = x3d.HAnimSite()
HAnimSite2159.USE = "hanim_crotch"

HAnimHumanoid38.sites.append(HAnimSite2159)
HAnimSite2160 = x3d.HAnimSite()
HAnimSite2160.USE = "hanim_l_asis"

HAnimHumanoid38.sites.append(HAnimSite2160)
HAnimSite2161 = x3d.HAnimSite()
HAnimSite2161.USE = "hanim_l_iliocristale"

HAnimHumanoid38.sites.append(HAnimSite2161)
HAnimSite2162 = x3d.HAnimSite()
HAnimSite2162.USE = "hanim_l_psis"

HAnimHumanoid38.sites.append(HAnimSite2162)
HAnimSite2163 = x3d.HAnimSite()
HAnimSite2163.USE = "hanim_l_trochanterion"

HAnimHumanoid38.sites.append(HAnimSite2163)
HAnimSite2164 = x3d.HAnimSite()
HAnimSite2164.USE = "hanim_r_asis"

HAnimHumanoid38.sites.append(HAnimSite2164)
HAnimSite2165 = x3d.HAnimSite()
HAnimSite2165.USE = "hanim_r_iliocristale"

HAnimHumanoid38.sites.append(HAnimSite2165)
HAnimSite2166 = x3d.HAnimSite()
HAnimSite2166.USE = "hanim_r_psis"

HAnimHumanoid38.sites.append(HAnimSite2166)
HAnimSite2167 = x3d.HAnimSite()
HAnimSite2167.USE = "hanim_r_trochanterion"

HAnimHumanoid38.sites.append(HAnimSite2167)
HAnimSite2168 = x3d.HAnimSite()
HAnimSite2168.USE = "hanim_l_femoral_lateral_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite2168)
HAnimSite2169 = x3d.HAnimSite()
HAnimSite2169.USE = "hanim_l_femoral_medial_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite2169)
HAnimSite2170 = x3d.HAnimSite()
HAnimSite2170.USE = "hanim_l_knee_crease"

HAnimHumanoid38.sites.append(HAnimSite2170)
HAnimSite2171 = x3d.HAnimSite()
HAnimSite2171.USE = "hanim_l_suprapatella"

HAnimHumanoid38.sites.append(HAnimSite2171)
HAnimSite2172 = x3d.HAnimSite()
HAnimSite2172.USE = "hanim_l_lateral_malleolus"

HAnimHumanoid38.sites.append(HAnimSite2172)
HAnimSite2173 = x3d.HAnimSite()
HAnimSite2173.USE = "hanim_l_medial_malleolus"

HAnimHumanoid38.sites.append(HAnimSite2173)
HAnimSite2174 = x3d.HAnimSite()
HAnimSite2174.USE = "hanim_l_tibiale"

HAnimHumanoid38.sites.append(HAnimSite2174)
HAnimSite2175 = x3d.HAnimSite()
HAnimSite2175.USE = "hanim_l_calcaneus_posterior"

HAnimHumanoid38.sites.append(HAnimSite2175)
HAnimSite2176 = x3d.HAnimSite()
HAnimSite2176.USE = "hanim_l_sphyrion"

HAnimHumanoid38.sites.append(HAnimSite2176)
HAnimSite2177 = x3d.HAnimSite()
HAnimSite2177.USE = "hanim_l_metatarsal_phalanx_1"

HAnimHumanoid38.sites.append(HAnimSite2177)
HAnimSite2178 = x3d.HAnimSite()
HAnimSite2178.USE = "hanim_l_metatarsal_phalanx_5"

HAnimHumanoid38.sites.append(HAnimSite2178)
HAnimSite2179 = x3d.HAnimSite()
HAnimSite2179.USE = "hanim_r_femoral_lateral_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite2179)
HAnimSite2180 = x3d.HAnimSite()
HAnimSite2180.USE = "hanim_r_femoral_medial_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite2180)
HAnimSite2181 = x3d.HAnimSite()
HAnimSite2181.USE = "hanim_r_knee_crease"

HAnimHumanoid38.sites.append(HAnimSite2181)
HAnimSite2182 = x3d.HAnimSite()
HAnimSite2182.USE = "hanim_r_suprapatella"

HAnimHumanoid38.sites.append(HAnimSite2182)
HAnimSite2183 = x3d.HAnimSite()
HAnimSite2183.USE = "hanim_r_lateral_malleolus"

HAnimHumanoid38.sites.append(HAnimSite2183)
HAnimSite2184 = x3d.HAnimSite()
HAnimSite2184.USE = "hanim_r_medial_malleolus"

HAnimHumanoid38.sites.append(HAnimSite2184)
HAnimSite2185 = x3d.HAnimSite()
HAnimSite2185.USE = "hanim_r_tibiale"

HAnimHumanoid38.sites.append(HAnimSite2185)
HAnimSite2186 = x3d.HAnimSite()
HAnimSite2186.USE = "hanim_r_calcaneus_posterior"

HAnimHumanoid38.sites.append(HAnimSite2186)
HAnimSite2187 = x3d.HAnimSite()
HAnimSite2187.USE = "hanim_r_sphyrion"

HAnimHumanoid38.sites.append(HAnimSite2187)
HAnimSite2188 = x3d.HAnimSite()
HAnimSite2188.USE = "hanim_r_metatarsal_phalanx_1"

HAnimHumanoid38.sites.append(HAnimSite2188)
HAnimSite2189 = x3d.HAnimSite()
HAnimSite2189.USE = "hanim_r_metatarsal_phalanx_5"

HAnimHumanoid38.sites.append(HAnimSite2189)
HAnimSite2190 = x3d.HAnimSite()
HAnimSite2190.USE = "hanim_navel"

HAnimHumanoid38.sites.append(HAnimSite2190)
HAnimSite2191 = x3d.HAnimSite()
HAnimSite2191.USE = "hanim_waist_preferred_anterior"

HAnimHumanoid38.sites.append(HAnimSite2191)
HAnimSite2192 = x3d.HAnimSite()
HAnimSite2192.USE = "hanim_waist_preferred_posterior"

HAnimHumanoid38.sites.append(HAnimSite2192)
HAnimSite2193 = x3d.HAnimSite()
HAnimSite2193.USE = "hanim_l_rib10"

HAnimHumanoid38.sites.append(HAnimSite2193)
HAnimSite2194 = x3d.HAnimSite()
HAnimSite2194.USE = "hanim_r_rib10"

HAnimHumanoid38.sites.append(HAnimSite2194)
HAnimSite2195 = x3d.HAnimSite()
HAnimSite2195.USE = "hanim_spine_2_middle_back"

HAnimHumanoid38.sites.append(HAnimSite2195)
HAnimSite2196 = x3d.HAnimSite()
HAnimSite2196.USE = "hanim_substernale"

HAnimHumanoid38.sites.append(HAnimSite2196)
HAnimSite2197 = x3d.HAnimSite()
HAnimSite2197.USE = "hanim_l_thelion"

HAnimHumanoid38.sites.append(HAnimSite2197)
HAnimSite2198 = x3d.HAnimSite()
HAnimSite2198.USE = "hanim_r_thelion"

HAnimHumanoid38.sites.append(HAnimSite2198)
HAnimSite2199 = x3d.HAnimSite()
HAnimSite2199.USE = "hanim_l_chest_midsagittal_plane"

HAnimHumanoid38.sites.append(HAnimSite2199)
HAnimSite2200 = x3d.HAnimSite()
HAnimSite2200.USE = "hanim_mesosternale"

HAnimHumanoid38.sites.append(HAnimSite2200)
HAnimSite2201 = x3d.HAnimSite()
HAnimSite2201.USE = "hanim_r_chest_midsagittal_plane"

HAnimHumanoid38.sites.append(HAnimSite2201)
HAnimSite2202 = x3d.HAnimSite()
HAnimSite2202.USE = "hanim_rear_center_midsagittal_plane"

HAnimHumanoid38.sites.append(HAnimSite2202)
HAnimSite2203 = x3d.HAnimSite()
HAnimSite2203.USE = "hanim_spine_1_middle_back"

HAnimHumanoid38.sites.append(HAnimSite2203)
HAnimSite2204 = x3d.HAnimSite()
HAnimSite2204.USE = "hanim_cervicale"

HAnimHumanoid38.sites.append(HAnimSite2204)
HAnimSite2205 = x3d.HAnimSite()
HAnimSite2205.USE = "hanim_suprasternale"

HAnimHumanoid38.sites.append(HAnimSite2205)
HAnimSite2206 = x3d.HAnimSite()
HAnimSite2206.USE = "hanim_l_neck_base"

HAnimHumanoid38.sites.append(HAnimSite2206)
HAnimSite2207 = x3d.HAnimSite()
HAnimSite2207.USE = "hanim_r_neck_base"

HAnimHumanoid38.sites.append(HAnimSite2207)
HAnimSite2208 = x3d.HAnimSite()
HAnimSite2208.USE = "hanim_adams_apple"

HAnimHumanoid38.sites.append(HAnimSite2208)
HAnimSite2209 = x3d.HAnimSite()
HAnimSite2209.USE = "hanim_glabella"

HAnimHumanoid38.sites.append(HAnimSite2209)
HAnimSite2210 = x3d.HAnimSite()
HAnimSite2210.USE = "hanim_l_ectocanthus"

HAnimHumanoid38.sites.append(HAnimSite2210)
HAnimSite2211 = x3d.HAnimSite()
HAnimSite2211.USE = "hanim_l_infraorbitale"

HAnimHumanoid38.sites.append(HAnimSite2211)
HAnimSite2212 = x3d.HAnimSite()
HAnimSite2212.USE = "hanim_l_tragion"

HAnimHumanoid38.sites.append(HAnimSite2212)
HAnimSite2213 = x3d.HAnimSite()
HAnimSite2213.USE = "hanim_nuchale"

HAnimHumanoid38.sites.append(HAnimSite2213)
HAnimSite2214 = x3d.HAnimSite()
HAnimSite2214.USE = "hanim_opisthocranion"

HAnimHumanoid38.sites.append(HAnimSite2214)
HAnimSite2215 = x3d.HAnimSite()
HAnimSite2215.USE = "hanim_r_ectocanthus"

HAnimHumanoid38.sites.append(HAnimSite2215)
HAnimSite2216 = x3d.HAnimSite()
HAnimSite2216.USE = "hanim_r_infraorbitale"

HAnimHumanoid38.sites.append(HAnimSite2216)
HAnimSite2217 = x3d.HAnimSite()
HAnimSite2217.USE = "hanim_r_tragion"

HAnimHumanoid38.sites.append(HAnimSite2217)
HAnimSite2218 = x3d.HAnimSite()
HAnimSite2218.USE = "hanim_sellion"

HAnimHumanoid38.sites.append(HAnimSite2218)
HAnimSite2219 = x3d.HAnimSite()
HAnimSite2219.USE = "hanim_skull_vertex"

HAnimHumanoid38.sites.append(HAnimSite2219)
HAnimSite2220 = x3d.HAnimSite()
HAnimSite2220.USE = "hanim_l_acromion"

HAnimHumanoid38.sites.append(HAnimSite2220)
HAnimSite2221 = x3d.HAnimSite()
HAnimSite2221.USE = "hanim_l_axilla_distal"

HAnimHumanoid38.sites.append(HAnimSite2221)
HAnimSite2222 = x3d.HAnimSite()
HAnimSite2222.USE = "hanim_l_axilla_posterior_folds"

HAnimHumanoid38.sites.append(HAnimSite2222)
HAnimSite2223 = x3d.HAnimSite()
HAnimSite2223.USE = "hanim_l_axilla_proximal"

HAnimHumanoid38.sites.append(HAnimSite2223)
HAnimSite2224 = x3d.HAnimSite()
HAnimSite2224.USE = "hanim_l_clavicale"

HAnimHumanoid38.sites.append(HAnimSite2224)
HAnimSite2225 = x3d.HAnimSite()
HAnimSite2225.USE = "hanim_l_bideltoid"

HAnimHumanoid38.sites.append(HAnimSite2225)
HAnimSite2226 = x3d.HAnimSite()
HAnimSite2226.USE = "hanim_l_humeral_lateral_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite2226)
HAnimSite2227 = x3d.HAnimSite()
HAnimSite2227.USE = "hanim_l_humeral_medial_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite2227)
HAnimSite2228 = x3d.HAnimSite()
HAnimSite2228.USE = "hanim_l_olecranon"

HAnimHumanoid38.sites.append(HAnimSite2228)
HAnimSite2229 = x3d.HAnimSite()
HAnimSite2229.USE = "hanim_l_radial_styloid"

HAnimHumanoid38.sites.append(HAnimSite2229)
HAnimSite2230 = x3d.HAnimSite()
HAnimSite2230.USE = "hanim_l_radiale"

HAnimHumanoid38.sites.append(HAnimSite2230)
HAnimSite2231 = x3d.HAnimSite()
HAnimSite2231.USE = "hanim_l_ulnar_styloid"

HAnimHumanoid38.sites.append(HAnimSite2231)
HAnimSite2232 = x3d.HAnimSite()
HAnimSite2232.USE = "hanim_l_metacarpal_phalanx_2"

HAnimHumanoid38.sites.append(HAnimSite2232)
HAnimSite2233 = x3d.HAnimSite()
HAnimSite2233.USE = "hanim_l_metacarpal_phalanx_3"

HAnimHumanoid38.sites.append(HAnimSite2233)
HAnimSite2234 = x3d.HAnimSite()
HAnimSite2234.USE = "hanim_l_metacarpal_phalanx_5"

HAnimHumanoid38.sites.append(HAnimSite2234)
HAnimSite2235 = x3d.HAnimSite()
HAnimSite2235.USE = "hanim_r_acromion"

HAnimHumanoid38.sites.append(HAnimSite2235)
HAnimSite2236 = x3d.HAnimSite()
HAnimSite2236.USE = "hanim_r_axilla_distal"

HAnimHumanoid38.sites.append(HAnimSite2236)
HAnimSite2237 = x3d.HAnimSite()
HAnimSite2237.USE = "hanim_r_axilla_posterior_folds"

HAnimHumanoid38.sites.append(HAnimSite2237)
HAnimSite2238 = x3d.HAnimSite()
HAnimSite2238.USE = "hanim_r_axilla_proximal"

HAnimHumanoid38.sites.append(HAnimSite2238)
HAnimSite2239 = x3d.HAnimSite()
HAnimSite2239.USE = "hanim_r_clavicale"

HAnimHumanoid38.sites.append(HAnimSite2239)
HAnimSite2240 = x3d.HAnimSite()
HAnimSite2240.USE = "hanim_r_bideltoid"

HAnimHumanoid38.sites.append(HAnimSite2240)
HAnimSite2241 = x3d.HAnimSite()
HAnimSite2241.USE = "hanim_r_humeral_lateral_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite2241)
HAnimSite2242 = x3d.HAnimSite()
HAnimSite2242.USE = "hanim_r_humeral_medial_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite2242)
HAnimSite2243 = x3d.HAnimSite()
HAnimSite2243.USE = "hanim_r_olecranon"

HAnimHumanoid38.sites.append(HAnimSite2243)
HAnimSite2244 = x3d.HAnimSite()
HAnimSite2244.USE = "hanim_r_radial_styloid"

HAnimHumanoid38.sites.append(HAnimSite2244)
HAnimSite2245 = x3d.HAnimSite()
HAnimSite2245.USE = "hanim_r_radiale"

HAnimHumanoid38.sites.append(HAnimSite2245)
HAnimSite2246 = x3d.HAnimSite()
HAnimSite2246.USE = "hanim_r_ulnar_styloid"

HAnimHumanoid38.sites.append(HAnimSite2246)
HAnimSite2247 = x3d.HAnimSite()
HAnimSite2247.USE = "hanim_r_metacarpal_phalanx_2"

HAnimHumanoid38.sites.append(HAnimSite2247)
HAnimSite2248 = x3d.HAnimSite()
HAnimSite2248.USE = "hanim_r_metacarpal_phalanx_3"

HAnimHumanoid38.sites.append(HAnimSite2248)
HAnimSite2249 = x3d.HAnimSite()
HAnimSite2249.USE = "hanim_r_metacarpal_phalanx_5"

HAnimHumanoid38.sites.append(HAnimSite2249)

Scene11.children.append(HAnimHumanoid38)

X3D0.Scene = Scene11
f = open("../data/DonHumanoid.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/DonHumanoid.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
