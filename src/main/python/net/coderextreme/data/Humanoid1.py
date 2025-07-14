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
meta3.content = "Humanoid1.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "identifier"
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid1.x3d"

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
"""from l_talocrural to l_metatarsophalangeal_2 vertices 2"""
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

HAnimJoint210.children.append(HAnimSegment211)
HAnimJoint233 = x3d.HAnimJoint()
HAnimJoint233.name = "l_metatarsophalangeal_2"
HAnimJoint233.DEF = "hanim_l_metatarsophalangeal_2"
HAnimJoint233.center = [0.0824,0.0064,-0.004]
HAnimJoint233.ulimit = [0,0,0]
HAnimJoint233.llimit = [0,0,0]

HAnimJoint210.children.append(HAnimJoint233)

HAnimJoint180.children.append(HAnimJoint210)

HAnimJoint143.children.append(HAnimJoint180)

HAnimJoint60.children.append(HAnimJoint143)
HAnimJoint234 = x3d.HAnimJoint()
HAnimJoint234.name = "r_hip"
HAnimJoint234.DEF = "hanim_r_hip"
HAnimJoint234.center = [-0.095,0.9171,0.0029]
HAnimJoint234.ulimit = [0,0,0]
HAnimJoint234.llimit = [0,0,0]
HAnimSegment235 = x3d.HAnimSegment()
HAnimSegment235.name = "r_thigh"
HAnimSegment235.DEF = "hanim_r_thigh"
Transform236 = x3d.Transform()
Transform236.translation = [-0.095,0.9171,0.0029]
Transform237 = x3d.Transform()
"""Empty Transform"""
Shape238 = x3d.Shape()
Shape238.USE = "HAnimJointShape"

Transform237.children.append(Shape238)

Transform236.children.append(Transform237)

HAnimSegment235.children.append(Transform236)
Shape239 = x3d.Shape()
LineSet240 = x3d.LineSet()
LineSet240.vertexCount = [2]
Coordinate241 = x3d.Coordinate()

LineSet240.coord = Coordinate241
"""from r_hip to r_knee vertices 2"""
ColorRGBA242 = x3d.ColorRGBA()
ColorRGBA242.USE = "HAnimSegmentLineColorRGBA"

LineSet240.color = ColorRGBA242

Shape239.geometry = LineSet240

HAnimSegment235.children.append(Shape239)
HAnimSite243 = x3d.HAnimSite()
HAnimSite243.name = "r_femoral_lateral_epicondyles"
HAnimSite243.DEF = "hanim_r_femoral_lateral_epicondyles"
HAnimSite243.translation = [-0.1421,0.4992,0.031]
TouchSensor244 = x3d.TouchSensor()
TouchSensor244.description = "HAnimSite 44 r_femoral_lateral_epicondyles"

HAnimSite243.children.append(TouchSensor244)
Shape245 = x3d.Shape()
Shape245.USE = "HAnimSiteShape"

HAnimSite243.children.append(Shape245)
Billboard246 = x3d.Billboard()
Shape247 = x3d.Shape()
Text248 = x3d.Text()
Text248.string = ["44"]
FontStyle249 = x3d.FontStyle()
FontStyle249.size = 0.035

Text248.fontStyle = FontStyle249

Shape247.geometry = Text248

Billboard246.children.append(Shape247)

HAnimSite243.children.append(Billboard246)

HAnimSegment235.children.append(HAnimSite243)
HAnimSite250 = x3d.HAnimSite()
HAnimSite250.name = "r_femoral_medial_epicondyles"
HAnimSite250.DEF = "hanim_r_femoral_medial_epicondyles"
HAnimSite250.translation = [-0.0221,0.5014,0.0289]
TouchSensor251 = x3d.TouchSensor()
TouchSensor251.description = "HAnimSite 43 r_femoral_medial_epicondyles"

HAnimSite250.children.append(TouchSensor251)
Shape252 = x3d.Shape()
Shape252.USE = "HAnimSiteShape"

HAnimSite250.children.append(Shape252)
Billboard253 = x3d.Billboard()
Shape254 = x3d.Shape()
Text255 = x3d.Text()
Text255.string = ["43"]
FontStyle256 = x3d.FontStyle()
FontStyle256.size = 0.035

Text255.fontStyle = FontStyle256

Shape254.geometry = Text255

Billboard253.children.append(Shape254)

HAnimSite250.children.append(Billboard253)

HAnimSegment235.children.append(HAnimSite250)
HAnimSite257 = x3d.HAnimSite()
HAnimSite257.name = "r_knee_crease"
HAnimSite257.DEF = "hanim_r_knee_crease"
HAnimSite257.translation = [-0.0825,0.4932,-0.0326]
TouchSensor258 = x3d.TouchSensor()
TouchSensor258.description = "HAnimSite 91 r_knee_crease"

HAnimSite257.children.append(TouchSensor258)
Shape259 = x3d.Shape()
Shape259.USE = "HAnimSiteShape"

HAnimSite257.children.append(Shape259)
Billboard260 = x3d.Billboard()
Shape261 = x3d.Shape()
Text262 = x3d.Text()
Text262.string = ["91"]
FontStyle263 = x3d.FontStyle()
FontStyle263.size = 0.035

Text262.fontStyle = FontStyle263

Shape261.geometry = Text262

Billboard260.children.append(Shape261)

HAnimSite257.children.append(Billboard260)

HAnimSegment235.children.append(HAnimSite257)
HAnimSite264 = x3d.HAnimSite()
HAnimSite264.name = "r_suprapatella"
HAnimSite264.DEF = "hanim_r_suprapatella"
TouchSensor265 = x3d.TouchSensor()
TouchSensor265.description = "HAnimSite 45 r_suprapatella"

HAnimSite264.children.append(TouchSensor265)
Shape266 = x3d.Shape()
Shape266.USE = "HAnimSiteShape"

HAnimSite264.children.append(Shape266)
Billboard267 = x3d.Billboard()
Shape268 = x3d.Shape()
Text269 = x3d.Text()
Text269.string = ["45"]
FontStyle270 = x3d.FontStyle()
FontStyle270.size = 0.035

Text269.fontStyle = FontStyle270

Shape268.geometry = Text269

Billboard267.children.append(Shape268)

HAnimSite264.children.append(Billboard267)

HAnimSegment235.children.append(HAnimSite264)

HAnimJoint234.children.append(HAnimSegment235)
HAnimJoint271 = x3d.HAnimJoint()
HAnimJoint271.name = "r_knee"
HAnimJoint271.DEF = "hanim_r_knee"
HAnimJoint271.center = [-0.0867,0.4913,0.0318]
HAnimJoint271.ulimit = [0,0,0]
HAnimJoint271.llimit = [0,0,0]
HAnimSegment272 = x3d.HAnimSegment()
HAnimSegment272.name = "r_calf"
HAnimSegment272.DEF = "hanim_r_calf"
Transform273 = x3d.Transform()
Transform273.translation = [-0.0867,0.4913,0.0318]
Transform274 = x3d.Transform()
"""Empty Transform"""
Shape275 = x3d.Shape()
Shape275.USE = "HAnimJointShape"

Transform274.children.append(Shape275)

Transform273.children.append(Transform274)

HAnimSegment272.children.append(Transform273)
Shape276 = x3d.Shape()
LineSet277 = x3d.LineSet()
LineSet277.vertexCount = [2]
Coordinate278 = x3d.Coordinate()

LineSet277.coord = Coordinate278
"""from r_knee to r_talocrural vertices 2"""
ColorRGBA279 = x3d.ColorRGBA()
ColorRGBA279.USE = "HAnimSegmentLineColorRGBA"

LineSet277.color = ColorRGBA279

Shape276.geometry = LineSet277

HAnimSegment272.children.append(Shape276)
HAnimSite280 = x3d.HAnimSite()
HAnimSite280.name = "r_lateral_malleolus"
HAnimSite280.DEF = "hanim_r_lateral_malleolus"
HAnimSite280.translation = [-0.1006,0.0658,-0.1075]
TouchSensor281 = x3d.TouchSensor()
TouchSensor281.description = "HAnimSite 53 r_lateral_malleolus"

HAnimSite280.children.append(TouchSensor281)
Shape282 = x3d.Shape()
Shape282.USE = "HAnimSiteShape"

HAnimSite280.children.append(Shape282)
Billboard283 = x3d.Billboard()
Shape284 = x3d.Shape()
Text285 = x3d.Text()
Text285.string = ["53"]
FontStyle286 = x3d.FontStyle()
FontStyle286.size = 0.035

Text285.fontStyle = FontStyle286

Shape284.geometry = Text285

Billboard283.children.append(Shape284)

HAnimSite280.children.append(Billboard283)

HAnimSegment272.children.append(HAnimSite280)
HAnimSite287 = x3d.HAnimSite()
HAnimSite287.name = "r_medial_malleolus"
HAnimSite287.DEF = "hanim_r_medial_malleolus"
HAnimSite287.translation = [-0.0591,0.076,-0.0928]
TouchSensor288 = x3d.TouchSensor()
TouchSensor288.description = "HAnimSite 52 r_medial_malleolus"

HAnimSite287.children.append(TouchSensor288)
Shape289 = x3d.Shape()
Shape289.USE = "HAnimSiteShape"

HAnimSite287.children.append(Shape289)
Billboard290 = x3d.Billboard()
Shape291 = x3d.Shape()
Text292 = x3d.Text()
Text292.string = ["52"]
FontStyle293 = x3d.FontStyle()
FontStyle293.size = 0.035

Text292.fontStyle = FontStyle293

Shape291.geometry = Text292

Billboard290.children.append(Shape291)

HAnimSite287.children.append(Billboard290)

HAnimSegment272.children.append(HAnimSite287)
HAnimSite294 = x3d.HAnimSite()
HAnimSite294.name = "r_tibiale"
HAnimSite294.DEF = "hanim_r_tibiale"
TouchSensor295 = x3d.TouchSensor()
TouchSensor295.description = "HAnimSite 51 r_tibiale"

HAnimSite294.children.append(TouchSensor295)
Shape296 = x3d.Shape()
Shape296.USE = "HAnimSiteShape"

HAnimSite294.children.append(Shape296)
Billboard297 = x3d.Billboard()
Shape298 = x3d.Shape()
Text299 = x3d.Text()
Text299.string = ["51"]
FontStyle300 = x3d.FontStyle()
FontStyle300.size = 0.035

Text299.fontStyle = FontStyle300

Shape298.geometry = Text299

Billboard297.children.append(Shape298)

HAnimSite294.children.append(Billboard297)

HAnimSegment272.children.append(HAnimSite294)

HAnimJoint271.children.append(HAnimSegment272)
HAnimJoint301 = x3d.HAnimJoint()
HAnimJoint301.name = "r_talocrural"
HAnimJoint301.DEF = "hanim_r_talocrural"
HAnimJoint301.center = [-0.0801,0.0712,-0.0766]
HAnimJoint301.ulimit = [0,0,0]
HAnimJoint301.llimit = [0,0,0]
HAnimSegment302 = x3d.HAnimSegment()
HAnimSegment302.name = "r_talus"
HAnimSegment302.DEF = "hanim_r_talus"
Transform303 = x3d.Transform()
Transform303.scale = [0.15,0.15,0.15]
Transform303.translation = [-0.05,0.06,-0.025]
Transform303.rotation = [1,0,0,-1.57]
"""Transform right foot"""
Transform304 = x3d.Transform()
"""Empty Transform right foot"""
Shape305 = x3d.Shape()
Shape305.USE = "HAnimJointShape"

Transform304.children.append(Shape305)

Transform303.children.append(Transform304)

HAnimSegment302.children.append(Transform303)
Shape306 = x3d.Shape()
LineSet307 = x3d.LineSet()
LineSet307.vertexCount = [2]
Coordinate308 = x3d.Coordinate()

LineSet307.coord = Coordinate308
"""from r_talocrural to r_metatarsophalangeal_2 vertices 2"""
ColorRGBA309 = x3d.ColorRGBA()
ColorRGBA309.USE = "HAnimSegmentLineColorRGBA"

LineSet307.color = ColorRGBA309

Shape306.geometry = LineSet307

HAnimSegment302.children.append(Shape306)
HAnimSite310 = x3d.HAnimSite()
HAnimSite310.name = "r_calcaneus_posterior"
HAnimSite310.DEF = "hanim_r_calcaneus_posterior"
HAnimSite310.translation = [-0.0692,0.0297,-0.1221]
TouchSensor311 = x3d.TouchSensor()
TouchSensor311.description = "HAnimSite 62 r_calcaneus_posterior"

HAnimSite310.children.append(TouchSensor311)
Shape312 = x3d.Shape()
Shape312.USE = "HAnimSiteShape"

HAnimSite310.children.append(Shape312)
Billboard313 = x3d.Billboard()
Shape314 = x3d.Shape()
Text315 = x3d.Text()
Text315.string = ["62"]
FontStyle316 = x3d.FontStyle()
FontStyle316.size = 0.035

Text315.fontStyle = FontStyle316

Shape314.geometry = Text315

Billboard313.children.append(Shape314)

HAnimSite310.children.append(Billboard313)

HAnimSegment302.children.append(HAnimSite310)
HAnimSite317 = x3d.HAnimSite()
HAnimSite317.name = "r_sphyrion"
HAnimSite317.DEF = "hanim_r_sphyrion"
HAnimSite317.translation = [-0.0603,0.061,-0.1002]
TouchSensor318 = x3d.TouchSensor()
TouchSensor318.description = "HAnimSite 54 r_sphyrion"

HAnimSite317.children.append(TouchSensor318)
Shape319 = x3d.Shape()
Shape319.USE = "HAnimSiteShape"

HAnimSite317.children.append(Shape319)
Billboard320 = x3d.Billboard()
Shape321 = x3d.Shape()
Text322 = x3d.Text()
Text322.string = ["54"]
FontStyle323 = x3d.FontStyle()
FontStyle323.size = 0.035

Text322.fontStyle = FontStyle323

Shape321.geometry = Text322

Billboard320.children.append(Shape321)

HAnimSite317.children.append(Billboard320)

HAnimSegment302.children.append(HAnimSite317)

HAnimJoint301.children.append(HAnimSegment302)
HAnimJoint324 = x3d.HAnimJoint()
HAnimJoint324.name = "r_metatarsophalangeal_2"
HAnimJoint324.DEF = "hanim_r_metatarsophalangeal_2"
HAnimJoint324.center = [-0.0823,0.0064,-0.004]
HAnimJoint324.ulimit = [0,0,0]
HAnimJoint324.llimit = [0,0,0]

HAnimJoint301.children.append(HAnimJoint324)

HAnimJoint271.children.append(HAnimJoint301)

HAnimJoint234.children.append(HAnimJoint271)

HAnimJoint60.children.append(HAnimJoint234)

HAnimJoint47.children.append(HAnimJoint60)
HAnimJoint325 = x3d.HAnimJoint()
HAnimJoint325.name = "vl5"
HAnimJoint325.DEF = "hanim_vl5"
HAnimJoint325.center = [0.0028,1.0568,-0.0776]
HAnimJoint325.ulimit = [0,0,0]
HAnimJoint325.llimit = [0,0,0]
HAnimSegment326 = x3d.HAnimSegment()
HAnimSegment326.name = "l5"
HAnimSegment326.DEF = "hanim_l5"
Transform327 = x3d.Transform()
Transform327.translation = [0.0028,1.0568,-0.0776]
Transform328 = x3d.Transform()
"""Empty Transform"""
Shape329 = x3d.Shape()
Shape329.USE = "HAnimJointShape"

Transform328.children.append(Shape329)

Transform327.children.append(Transform328)

HAnimSegment326.children.append(Transform327)
Shape330 = x3d.Shape()
LineSet331 = x3d.LineSet()
LineSet331.vertexCount = [2]
Coordinate332 = x3d.Coordinate()

LineSet331.coord = Coordinate332
"""from vl5 to skullbase vertices 2"""
ColorRGBA333 = x3d.ColorRGBA()
ColorRGBA333.USE = "HAnimSegmentLineColorRGBA"

LineSet331.color = ColorRGBA333

Shape330.geometry = LineSet331

HAnimSegment326.children.append(Shape330)
HAnimSite334 = x3d.HAnimSite()
HAnimSite334.name = "adams_apple"
HAnimSite334.DEF = "hanim_adams_apple"
TouchSensor335 = x3d.TouchSensor()
TouchSensor335.description = "HAnimSite 11 adams_apple"

HAnimSite334.children.append(TouchSensor335)
Shape336 = x3d.Shape()
Shape336.USE = "HAnimSiteShape"

HAnimSite334.children.append(Shape336)
Billboard337 = x3d.Billboard()
Shape338 = x3d.Shape()
Text339 = x3d.Text()
Text339.string = ["11"]
FontStyle340 = x3d.FontStyle()
FontStyle340.size = 0.035

Text339.fontStyle = FontStyle340

Shape338.geometry = Text339

Billboard337.children.append(Shape338)

HAnimSite334.children.append(Billboard337)

HAnimSegment326.children.append(HAnimSite334)
HAnimSite341 = x3d.HAnimSite()
HAnimSite341.name = "cervicale"
HAnimSite341.DEF = "hanim_cervicale"
HAnimSite341.translation = [0.0064,1.52,-0.0815]
TouchSensor342 = x3d.TouchSensor()
TouchSensor342.description = "HAnimSite 10 cervicale"

HAnimSite341.children.append(TouchSensor342)
Shape343 = x3d.Shape()
Shape343.USE = "HAnimSiteShape"

HAnimSite341.children.append(Shape343)
Billboard344 = x3d.Billboard()
Shape345 = x3d.Shape()
Text346 = x3d.Text()
Text346.string = ["10"]
FontStyle347 = x3d.FontStyle()
FontStyle347.size = 0.035

Text346.fontStyle = FontStyle347

Shape345.geometry = Text346

Billboard344.children.append(Shape345)

HAnimSite341.children.append(Billboard344)

HAnimSegment326.children.append(HAnimSite341)
HAnimSite348 = x3d.HAnimSite()
HAnimSite348.name = "l_acromion"
HAnimSite348.DEF = "hanim_l_acromion"
HAnimSite348.translation = [0.2032,1.476,-0.049]
TouchSensor349 = x3d.TouchSensor()
TouchSensor349.description = "HAnimSite 15 l_acromion"

HAnimSite348.children.append(TouchSensor349)
Shape350 = x3d.Shape()
Shape350.USE = "HAnimSiteShape"

HAnimSite348.children.append(Shape350)
Billboard351 = x3d.Billboard()
Shape352 = x3d.Shape()
Text353 = x3d.Text()
Text353.string = ["15"]
FontStyle354 = x3d.FontStyle()
FontStyle354.size = 0.035

Text353.fontStyle = FontStyle354

Shape352.geometry = Text353

Billboard351.children.append(Shape352)

HAnimSite348.children.append(Billboard351)

HAnimSegment326.children.append(HAnimSite348)
HAnimSite355 = x3d.HAnimSite()
HAnimSite355.name = "l_axilla_distal"
HAnimSite355.DEF = "hanim_l_axilla_distal"
HAnimSite355.translation = [0.1706,1.4072,-0.0875]
TouchSensor356 = x3d.TouchSensor()
TouchSensor356.description = "HAnimSite 17 l_axilla_distal"

HAnimSite355.children.append(TouchSensor356)
Shape357 = x3d.Shape()
Shape357.USE = "HAnimSiteShape"

HAnimSite355.children.append(Shape357)
Billboard358 = x3d.Billboard()
Shape359 = x3d.Shape()
Text360 = x3d.Text()
Text360.string = ["17"]
FontStyle361 = x3d.FontStyle()
FontStyle361.size = 0.035

Text360.fontStyle = FontStyle361

Shape359.geometry = Text360

Billboard358.children.append(Shape359)

HAnimSite355.children.append(Billboard358)

HAnimSegment326.children.append(HAnimSite355)
HAnimSite362 = x3d.HAnimSite()
HAnimSite362.name = "l_axilla_posterior_folds"
HAnimSite362.DEF = "hanim_l_axilla_posterior_folds"
TouchSensor363 = x3d.TouchSensor()
TouchSensor363.description = "HAnimSite 18 l_axilla_posterior_folds"

HAnimSite362.children.append(TouchSensor363)
Shape364 = x3d.Shape()
Shape364.USE = "HAnimSiteShape"

HAnimSite362.children.append(Shape364)
Billboard365 = x3d.Billboard()
Shape366 = x3d.Shape()
Text367 = x3d.Text()
Text367.string = ["18"]
FontStyle368 = x3d.FontStyle()
FontStyle368.size = 0.035

Text367.fontStyle = FontStyle368

Shape366.geometry = Text367

Billboard365.children.append(Shape366)

HAnimSite362.children.append(Billboard365)

HAnimSegment326.children.append(HAnimSite362)
HAnimSite369 = x3d.HAnimSite()
HAnimSite369.name = "l_axilla_proximal"
HAnimSite369.DEF = "hanim_l_axilla_proximal"
HAnimSite369.translation = [0.1777,1.4065,-0.0075]
TouchSensor370 = x3d.TouchSensor()
TouchSensor370.description = "HAnimSite 16 l_axilla_proximal"

HAnimSite369.children.append(TouchSensor370)
Shape371 = x3d.Shape()
Shape371.USE = "HAnimSiteShape"

HAnimSite369.children.append(Shape371)
Billboard372 = x3d.Billboard()
Shape373 = x3d.Shape()
Text374 = x3d.Text()
Text374.string = ["16"]
FontStyle375 = x3d.FontStyle()
FontStyle375.size = 0.035

Text374.fontStyle = FontStyle375

Shape373.geometry = Text374

Billboard372.children.append(Shape373)

HAnimSite369.children.append(Billboard372)

HAnimSegment326.children.append(HAnimSite369)
HAnimSite376 = x3d.HAnimSite()
HAnimSite376.name = "l_chest_midsagittal_plane"
HAnimSite376.DEF = "hanim_l_chest_midsagittal_plane"
TouchSensor377 = x3d.TouchSensor()
TouchSensor377.description = "HAnimSite 94 l_chest_midsagittal_plane"

HAnimSite376.children.append(TouchSensor377)
Shape378 = x3d.Shape()
Shape378.USE = "HAnimSiteShape"

HAnimSite376.children.append(Shape378)
Billboard379 = x3d.Billboard()
Shape380 = x3d.Shape()
Text381 = x3d.Text()
Text381.string = ["94"]
FontStyle382 = x3d.FontStyle()
FontStyle382.size = 0.035

Text381.fontStyle = FontStyle382

Shape380.geometry = Text381

Billboard379.children.append(Shape380)

HAnimSite376.children.append(Billboard379)

HAnimSegment326.children.append(HAnimSite376)
HAnimSite383 = x3d.HAnimSite()
HAnimSite383.name = "l_clavicale"
HAnimSite383.DEF = "hanim_l_clavicale"
HAnimSite383.translation = [0.0271,1.4943,0.0394]
TouchSensor384 = x3d.TouchSensor()
TouchSensor384.description = "HAnimSite 14 l_clavicale"

HAnimSite383.children.append(TouchSensor384)
Shape385 = x3d.Shape()
Shape385.USE = "HAnimSiteShape"

HAnimSite383.children.append(Shape385)
Billboard386 = x3d.Billboard()
Shape387 = x3d.Shape()
Text388 = x3d.Text()
Text388.string = ["14"]
FontStyle389 = x3d.FontStyle()
FontStyle389.size = 0.035

Text388.fontStyle = FontStyle389

Shape387.geometry = Text388

Billboard386.children.append(Shape387)

HAnimSite383.children.append(Billboard386)

HAnimSegment326.children.append(HAnimSite383)
HAnimSite390 = x3d.HAnimSite()
HAnimSite390.name = "l_neck_base"
HAnimSite390.DEF = "hanim_l_neck_base"
HAnimSite390.translation = [0.0646,1.5141,-0.038]
TouchSensor391 = x3d.TouchSensor()
TouchSensor391.description = "HAnimSite 82 l_neck_base"

HAnimSite390.children.append(TouchSensor391)
Shape392 = x3d.Shape()
Shape392.USE = "HAnimSiteShape"

HAnimSite390.children.append(Shape392)
Billboard393 = x3d.Billboard()
Shape394 = x3d.Shape()
Text395 = x3d.Text()
Text395.string = ["82"]
FontStyle396 = x3d.FontStyle()
FontStyle396.size = 0.035

Text395.fontStyle = FontStyle396

Shape394.geometry = Text395

Billboard393.children.append(Shape394)

HAnimSite390.children.append(Billboard393)

HAnimSegment326.children.append(HAnimSite390)
HAnimSite397 = x3d.HAnimSite()
HAnimSite397.name = "l_rib10"
HAnimSite397.DEF = "hanim_l_rib10"
HAnimSite397.translation = [0.0871,1.1925,0.0992]
TouchSensor398 = x3d.TouchSensor()
TouchSensor398.description = "HAnimSite 28 l_rib10"

HAnimSite397.children.append(TouchSensor398)
Shape399 = x3d.Shape()
Shape399.USE = "HAnimSiteShape"

HAnimSite397.children.append(Shape399)
Billboard400 = x3d.Billboard()
Shape401 = x3d.Shape()
Text402 = x3d.Text()
Text402.string = ["28"]
FontStyle403 = x3d.FontStyle()
FontStyle403.size = 0.035

Text402.fontStyle = FontStyle403

Shape401.geometry = Text402

Billboard400.children.append(Shape401)

HAnimSite397.children.append(Billboard400)

HAnimSegment326.children.append(HAnimSite397)
HAnimSite404 = x3d.HAnimSite()
HAnimSite404.name = "l_thelion"
HAnimSite404.DEF = "hanim_l_thelion"
HAnimSite404.translation = [0.0918,1.3382,0.1192]
TouchSensor405 = x3d.TouchSensor()
TouchSensor405.description = "HAnimSite 29 l_thelion"

HAnimSite404.children.append(TouchSensor405)
Shape406 = x3d.Shape()
Shape406.USE = "HAnimSiteShape"

HAnimSite404.children.append(Shape406)
Billboard407 = x3d.Billboard()
Shape408 = x3d.Shape()
Text409 = x3d.Text()
Text409.string = ["29"]
FontStyle410 = x3d.FontStyle()
FontStyle410.size = 0.035

Text409.fontStyle = FontStyle410

Shape408.geometry = Text409

Billboard407.children.append(Shape408)

HAnimSite404.children.append(Billboard407)

HAnimSegment326.children.append(HAnimSite404)
HAnimSite411 = x3d.HAnimSite()
HAnimSite411.name = "mesosternale"
HAnimSite411.DEF = "hanim_mesosternale"
TouchSensor412 = x3d.TouchSensor()
TouchSensor412.description = "HAnimSite 88 mesosternale"

HAnimSite411.children.append(TouchSensor412)
Shape413 = x3d.Shape()
Shape413.USE = "HAnimSiteShape"

HAnimSite411.children.append(Shape413)
Billboard414 = x3d.Billboard()
Shape415 = x3d.Shape()
Text416 = x3d.Text()
Text416.string = ["88"]
FontStyle417 = x3d.FontStyle()
FontStyle417.size = 0.035

Text416.fontStyle = FontStyle417

Shape415.geometry = Text416

Billboard414.children.append(Shape415)

HAnimSite411.children.append(Billboard414)

HAnimSegment326.children.append(HAnimSite411)
HAnimSite418 = x3d.HAnimSite()
HAnimSite418.name = "navel"
HAnimSite418.DEF = "hanim_navel"
HAnimSite418.translation = [0.0069,1.0966,0.1017]
TouchSensor419 = x3d.TouchSensor()
TouchSensor419.description = "HAnimSite 84 navel"

HAnimSite418.children.append(TouchSensor419)
Shape420 = x3d.Shape()
Shape420.USE = "HAnimSiteShape"

HAnimSite418.children.append(Shape420)
Billboard421 = x3d.Billboard()
Shape422 = x3d.Shape()
Text423 = x3d.Text()
Text423.string = ["84"]
FontStyle424 = x3d.FontStyle()
FontStyle424.size = 0.035

Text423.fontStyle = FontStyle424

Shape422.geometry = Text423

Billboard421.children.append(Shape422)

HAnimSite418.children.append(Billboard421)

HAnimSegment326.children.append(HAnimSite418)
HAnimSite425 = x3d.HAnimSite()
HAnimSite425.name = "r_acromion"
HAnimSite425.DEF = "hanim_r_acromion"
HAnimSite425.translation = [-0.1905,1.4791,-0.0431]
TouchSensor426 = x3d.TouchSensor()
TouchSensor426.description = "HAnimSite 20 r_acromion"

HAnimSite425.children.append(TouchSensor426)
Shape427 = x3d.Shape()
Shape427.USE = "HAnimSiteShape"

HAnimSite425.children.append(Shape427)
Billboard428 = x3d.Billboard()
Shape429 = x3d.Shape()
Text430 = x3d.Text()
Text430.string = ["20"]
FontStyle431 = x3d.FontStyle()
FontStyle431.size = 0.035

Text430.fontStyle = FontStyle431

Shape429.geometry = Text430

Billboard428.children.append(Shape429)

HAnimSite425.children.append(Billboard428)

HAnimSegment326.children.append(HAnimSite425)
HAnimSite432 = x3d.HAnimSite()
HAnimSite432.name = "r_axilla_distal"
HAnimSite432.DEF = "hanim_r_axilla_distal"
HAnimSite432.translation = [-0.1603,1.4098,-0.0826]
TouchSensor433 = x3d.TouchSensor()
TouchSensor433.description = "HAnimSite 22 r_axilla_distal"

HAnimSite432.children.append(TouchSensor433)
Shape434 = x3d.Shape()
Shape434.USE = "HAnimSiteShape"

HAnimSite432.children.append(Shape434)
Billboard435 = x3d.Billboard()
Shape436 = x3d.Shape()
Text437 = x3d.Text()
Text437.string = ["22"]
FontStyle438 = x3d.FontStyle()
FontStyle438.size = 0.035

Text437.fontStyle = FontStyle438

Shape436.geometry = Text437

Billboard435.children.append(Shape436)

HAnimSite432.children.append(Billboard435)

HAnimSegment326.children.append(HAnimSite432)
HAnimSite439 = x3d.HAnimSite()
HAnimSite439.name = "r_axilla_posterior_folds"
HAnimSite439.DEF = "hanim_r_axilla_posterior_folds"
TouchSensor440 = x3d.TouchSensor()
TouchSensor440.description = "HAnimSite 23 r_axilla_posterior_folds"

HAnimSite439.children.append(TouchSensor440)
Shape441 = x3d.Shape()
Shape441.USE = "HAnimSiteShape"

HAnimSite439.children.append(Shape441)
Billboard442 = x3d.Billboard()
Shape443 = x3d.Shape()
Text444 = x3d.Text()
Text444.string = ["23"]
FontStyle445 = x3d.FontStyle()
FontStyle445.size = 0.035

Text444.fontStyle = FontStyle445

Shape443.geometry = Text444

Billboard442.children.append(Shape443)

HAnimSite439.children.append(Billboard442)

HAnimSegment326.children.append(HAnimSite439)
HAnimSite446 = x3d.HAnimSite()
HAnimSite446.name = "r_axilla_proximal"
HAnimSite446.DEF = "hanim_r_axilla_proximal"
HAnimSite446.translation = [-0.1626,1.4072,-0.0031]
TouchSensor447 = x3d.TouchSensor()
TouchSensor447.description = "HAnimSite 21 r_axilla_proximal"

HAnimSite446.children.append(TouchSensor447)
Shape448 = x3d.Shape()
Shape448.USE = "HAnimSiteShape"

HAnimSite446.children.append(Shape448)
Billboard449 = x3d.Billboard()
Shape450 = x3d.Shape()
Text451 = x3d.Text()
Text451.string = ["21"]
FontStyle452 = x3d.FontStyle()
FontStyle452.size = 0.035

Text451.fontStyle = FontStyle452

Shape450.geometry = Text451

Billboard449.children.append(Shape450)

HAnimSite446.children.append(Billboard449)

HAnimSegment326.children.append(HAnimSite446)
HAnimSite453 = x3d.HAnimSite()
HAnimSite453.name = "r_chest_midsagittal_plane"
HAnimSite453.DEF = "hanim_r_chest_midsagittal_plane"
TouchSensor454 = x3d.TouchSensor()
TouchSensor454.description = "HAnimSite 95 r_chest_midsagittal_plane"

HAnimSite453.children.append(TouchSensor454)
Shape455 = x3d.Shape()
Shape455.USE = "HAnimSiteShape"

HAnimSite453.children.append(Shape455)
Billboard456 = x3d.Billboard()
Shape457 = x3d.Shape()
Text458 = x3d.Text()
Text458.string = ["95"]
FontStyle459 = x3d.FontStyle()
FontStyle459.size = 0.035

Text458.fontStyle = FontStyle459

Shape457.geometry = Text458

Billboard456.children.append(Shape457)

HAnimSite453.children.append(Billboard456)

HAnimSegment326.children.append(HAnimSite453)
HAnimSite460 = x3d.HAnimSite()
HAnimSite460.name = "r_clavicale"
HAnimSite460.DEF = "hanim_r_clavicale"
HAnimSite460.translation = [-0.0115,1.4943,0.04]
TouchSensor461 = x3d.TouchSensor()
TouchSensor461.description = "HAnimSite 19 r_clavicale"

HAnimSite460.children.append(TouchSensor461)
Shape462 = x3d.Shape()
Shape462.USE = "HAnimSiteShape"

HAnimSite460.children.append(Shape462)
Billboard463 = x3d.Billboard()
Shape464 = x3d.Shape()
Text465 = x3d.Text()
Text465.string = ["19"]
FontStyle466 = x3d.FontStyle()
FontStyle466.size = 0.035

Text465.fontStyle = FontStyle466

Shape464.geometry = Text465

Billboard463.children.append(Shape464)

HAnimSite460.children.append(Billboard463)

HAnimSegment326.children.append(HAnimSite460)
HAnimSite467 = x3d.HAnimSite()
HAnimSite467.name = "r_neck_base"
HAnimSite467.DEF = "hanim_r_neck_base"
HAnimSite467.translation = [-0.0419,1.5149,-0.022]
TouchSensor468 = x3d.TouchSensor()
TouchSensor468.description = "HAnimSite 83 r_neck_base"

HAnimSite467.children.append(TouchSensor468)
Shape469 = x3d.Shape()
Shape469.USE = "HAnimSiteShape"

HAnimSite467.children.append(Shape469)
Billboard470 = x3d.Billboard()
Shape471 = x3d.Shape()
Text472 = x3d.Text()
Text472.string = ["83"]
FontStyle473 = x3d.FontStyle()
FontStyle473.size = 0.035

Text472.fontStyle = FontStyle473

Shape471.geometry = Text472

Billboard470.children.append(Shape471)

HAnimSite467.children.append(Billboard470)

HAnimSegment326.children.append(HAnimSite467)
HAnimSite474 = x3d.HAnimSite()
HAnimSite474.name = "r_rib10"
HAnimSite474.DEF = "hanim_r_rib10"
HAnimSite474.translation = [-0.0711,1.1941,0.1016]
TouchSensor475 = x3d.TouchSensor()
TouchSensor475.description = "HAnimSite 30 r_rib10"

HAnimSite474.children.append(TouchSensor475)
Shape476 = x3d.Shape()
Shape476.USE = "HAnimSiteShape"

HAnimSite474.children.append(Shape476)
Billboard477 = x3d.Billboard()
Shape478 = x3d.Shape()
Text479 = x3d.Text()
Text479.string = ["30"]
FontStyle480 = x3d.FontStyle()
FontStyle480.size = 0.035

Text479.fontStyle = FontStyle480

Shape478.geometry = Text479

Billboard477.children.append(Shape478)

HAnimSite474.children.append(Billboard477)

HAnimSegment326.children.append(HAnimSite474)
HAnimSite481 = x3d.HAnimSite()
HAnimSite481.name = "r_thelion"
HAnimSite481.DEF = "hanim_r_thelion"
HAnimSite481.translation = [-0.0736,1.3385,0.1217]
TouchSensor482 = x3d.TouchSensor()
TouchSensor482.description = "HAnimSite 31 r_thelion"

HAnimSite481.children.append(TouchSensor482)
Shape483 = x3d.Shape()
Shape483.USE = "HAnimSiteShape"

HAnimSite481.children.append(Shape483)
Billboard484 = x3d.Billboard()
Shape485 = x3d.Shape()
Text486 = x3d.Text()
Text486.string = ["31"]
FontStyle487 = x3d.FontStyle()
FontStyle487.size = 0.035

Text486.fontStyle = FontStyle487

Shape485.geometry = Text486

Billboard484.children.append(Shape485)

HAnimSite481.children.append(Billboard484)

HAnimSegment326.children.append(HAnimSite481)
HAnimSite488 = x3d.HAnimSite()
HAnimSite488.name = "rear_center_midsagittal_plane"
HAnimSite488.DEF = "hanim_rear_center_midsagittal_plane"
TouchSensor489 = x3d.TouchSensor()
TouchSensor489.description = "HAnimSite 92 rear_center_midsagittal_plane"

HAnimSite488.children.append(TouchSensor489)
Shape490 = x3d.Shape()
Shape490.USE = "HAnimSiteShape"

HAnimSite488.children.append(Shape490)
Billboard491 = x3d.Billboard()
Shape492 = x3d.Shape()
Text493 = x3d.Text()
Text493.string = ["92"]
FontStyle494 = x3d.FontStyle()
FontStyle494.size = 0.035

Text493.fontStyle = FontStyle494

Shape492.geometry = Text493

Billboard491.children.append(Shape492)

HAnimSite488.children.append(Billboard491)

HAnimSegment326.children.append(HAnimSite488)
HAnimSite495 = x3d.HAnimSite()
HAnimSite495.name = "spine_1_middle_back"
HAnimSite495.DEF = "hanim_spine_1_middle_back"
TouchSensor496 = x3d.TouchSensor()
TouchSensor496.description = "HAnimSite 24 spine_1_middle_back"

HAnimSite495.children.append(TouchSensor496)
Shape497 = x3d.Shape()
Shape497.USE = "HAnimSiteShape"

HAnimSite495.children.append(Shape497)
Billboard498 = x3d.Billboard()
Shape499 = x3d.Shape()
Text500 = x3d.Text()
Text500.string = ["24"]
FontStyle501 = x3d.FontStyle()
FontStyle501.size = 0.035

Text500.fontStyle = FontStyle501

Shape499.geometry = Text500

Billboard498.children.append(Shape499)

HAnimSite495.children.append(Billboard498)

HAnimSegment326.children.append(HAnimSite495)
HAnimSite502 = x3d.HAnimSite()
HAnimSite502.name = "spine_2_middle_back"
HAnimSite502.DEF = "hanim_spine_2_middle_back"
TouchSensor503 = x3d.TouchSensor()
TouchSensor503.description = "HAnimSite spine_2_middle_back"

HAnimSite502.children.append(TouchSensor503)
Shape504 = x3d.Shape()
Shape504.USE = "HAnimSiteShape"

HAnimSite502.children.append(Shape504)
Billboard505 = x3d.Billboard()
Shape506 = x3d.Shape()
Text507 = x3d.Text()
Text507.string = [""]
FontStyle508 = x3d.FontStyle()
FontStyle508.size = 0.035

Text507.fontStyle = FontStyle508

Shape506.geometry = Text507

Billboard505.children.append(Shape506)

HAnimSite502.children.append(Billboard505)

HAnimSegment326.children.append(HAnimSite502)
HAnimSite509 = x3d.HAnimSite()
HAnimSite509.name = "substernale"
HAnimSite509.DEF = "hanim_substernale"
HAnimSite509.translation = [0.0085,1.2995,0.1147]
TouchSensor510 = x3d.TouchSensor()
TouchSensor510.description = "HAnimSite 13 substernale"

HAnimSite509.children.append(TouchSensor510)
Shape511 = x3d.Shape()
Shape511.USE = "HAnimSiteShape"

HAnimSite509.children.append(Shape511)
Billboard512 = x3d.Billboard()
Shape513 = x3d.Shape()
Text514 = x3d.Text()
Text514.string = ["13"]
FontStyle515 = x3d.FontStyle()
FontStyle515.size = 0.035

Text514.fontStyle = FontStyle515

Shape513.geometry = Text514

Billboard512.children.append(Shape513)

HAnimSite509.children.append(Billboard512)

HAnimSegment326.children.append(HAnimSite509)
HAnimSite516 = x3d.HAnimSite()
HAnimSite516.name = "suprasternale"
HAnimSite516.DEF = "hanim_suprasternale"
HAnimSite516.translation = [0.0084,1.4714,0.0551]
TouchSensor517 = x3d.TouchSensor()
TouchSensor517.description = "HAnimSite 12 suprasternale"

HAnimSite516.children.append(TouchSensor517)
Shape518 = x3d.Shape()
Shape518.USE = "HAnimSiteShape"

HAnimSite516.children.append(Shape518)
Billboard519 = x3d.Billboard()
Shape520 = x3d.Shape()
Text521 = x3d.Text()
Text521.string = ["12"]
FontStyle522 = x3d.FontStyle()
FontStyle522.size = 0.035

Text521.fontStyle = FontStyle522

Shape520.geometry = Text521

Billboard519.children.append(Shape520)

HAnimSite516.children.append(Billboard519)

HAnimSegment326.children.append(HAnimSite516)
HAnimSite523 = x3d.HAnimSite()
HAnimSite523.name = "waist_preferred_anterior"
HAnimSite523.DEF = "hanim_waist_preferred_anterior"
TouchSensor524 = x3d.TouchSensor()
TouchSensor524.description = "HAnimSite 26 waist_preferred_anterior"

HAnimSite523.children.append(TouchSensor524)
Shape525 = x3d.Shape()
Shape525.USE = "HAnimSiteShape"

HAnimSite523.children.append(Shape525)
Billboard526 = x3d.Billboard()
Shape527 = x3d.Shape()
Text528 = x3d.Text()
Text528.string = ["26"]
FontStyle529 = x3d.FontStyle()
FontStyle529.size = 0.035

Text528.fontStyle = FontStyle529

Shape527.geometry = Text528

Billboard526.children.append(Shape527)

HAnimSite523.children.append(Billboard526)

HAnimSegment326.children.append(HAnimSite523)
HAnimSite530 = x3d.HAnimSite()
HAnimSite530.name = "waist_preferred_posterior"
HAnimSite530.DEF = "hanim_waist_preferred_posterior"
HAnimSite530.translation = [0.29,1.0915,-0.1091]
TouchSensor531 = x3d.TouchSensor()
TouchSensor531.description = "HAnimSite 27 waist_preferred_posterior"

HAnimSite530.children.append(TouchSensor531)
Shape532 = x3d.Shape()
Shape532.USE = "HAnimSiteShape"

HAnimSite530.children.append(Shape532)
Billboard533 = x3d.Billboard()
Shape534 = x3d.Shape()
Text535 = x3d.Text()
Text535.string = ["27"]
FontStyle536 = x3d.FontStyle()
FontStyle536.size = 0.035

Text535.fontStyle = FontStyle536

Shape534.geometry = Text535

Billboard533.children.append(Shape534)

HAnimSite530.children.append(Billboard533)

HAnimSegment326.children.append(HAnimSite530)
Shape537 = x3d.Shape()
LineSet538 = x3d.LineSet()
LineSet538.vertexCount = [2]
Coordinate539 = x3d.Coordinate()

LineSet538.coord = Coordinate539
"""from vl5 to l_shoulder vertices 2"""
ColorRGBA540 = x3d.ColorRGBA()
ColorRGBA540.USE = "HAnimSegmentLineColorRGBA"

LineSet538.color = ColorRGBA540

Shape537.geometry = LineSet538

HAnimSegment326.children.append(Shape537)
Shape541 = x3d.Shape()
LineSet542 = x3d.LineSet()
LineSet542.vertexCount = [2]
Coordinate543 = x3d.Coordinate()

LineSet542.coord = Coordinate543
"""from vl5 to r_shoulder vertices 2"""
ColorRGBA544 = x3d.ColorRGBA()
ColorRGBA544.USE = "HAnimSegmentLineColorRGBA"

LineSet542.color = ColorRGBA544

Shape541.geometry = LineSet542

HAnimSegment326.children.append(Shape541)

HAnimJoint325.children.append(HAnimSegment326)
HAnimJoint545 = x3d.HAnimJoint()
HAnimJoint545.name = "skullbase"
HAnimJoint545.DEF = "hanim_skullbase"
HAnimJoint545.center = [0.0044,1.6209,0.0236]
HAnimJoint545.ulimit = [0,0,0]
HAnimJoint545.llimit = [0,0,0]

HAnimJoint325.children.append(HAnimJoint545)
HAnimJoint546 = x3d.HAnimJoint()
HAnimJoint546.name = "l_shoulder"
HAnimJoint546.DEF = "hanim_l_shoulder"
HAnimJoint546.center = [0.2029,1.4376,-0.0387]
HAnimJoint546.ulimit = [0,0,0]
HAnimJoint546.llimit = [0,0,0]
HAnimSegment547 = x3d.HAnimSegment()
HAnimSegment547.name = "l_upperarm"
HAnimSegment547.DEF = "hanim_l_upperarm"
Transform548 = x3d.Transform()
Transform548.translation = [0.2029,1.4376,-0.0387]
Transform549 = x3d.Transform()
"""Empty Transform"""
Shape550 = x3d.Shape()
Shape550.USE = "HAnimJointShape"

Transform549.children.append(Shape550)

Transform548.children.append(Transform549)

HAnimSegment547.children.append(Transform548)
Shape551 = x3d.Shape()
LineSet552 = x3d.LineSet()
LineSet552.vertexCount = [2]
Coordinate553 = x3d.Coordinate()

LineSet552.coord = Coordinate553
"""from l_shoulder to l_elbow vertices 2"""
ColorRGBA554 = x3d.ColorRGBA()
ColorRGBA554.USE = "HAnimSegmentLineColorRGBA"

LineSet552.color = ColorRGBA554

Shape551.geometry = LineSet552

HAnimSegment547.children.append(Shape551)
HAnimSite555 = x3d.HAnimSite()
HAnimSite555.name = "l_bideltoid"
HAnimSite555.DEF = "hanim_l_bideltoid"
TouchSensor556 = x3d.TouchSensor()
TouchSensor556.description = "HAnimSite 96 l_bideltoid"

HAnimSite555.children.append(TouchSensor556)
Shape557 = x3d.Shape()
Shape557.USE = "HAnimSiteShape"

HAnimSite555.children.append(Shape557)
Billboard558 = x3d.Billboard()
Shape559 = x3d.Shape()
Text560 = x3d.Text()
Text560.string = ["96"]
FontStyle561 = x3d.FontStyle()
FontStyle561.size = 0.035

Text560.fontStyle = FontStyle561

Shape559.geometry = Text560

Billboard558.children.append(Shape559)

HAnimSite555.children.append(Billboard558)

HAnimSegment547.children.append(HAnimSite555)
HAnimSite562 = x3d.HAnimSite()
HAnimSite562.name = "l_humeral_lateral_epicondyles"
HAnimSite562.DEF = "hanim_l_humeral_lateral_epicondyles"
HAnimSite562.translation = [0.228,1.1482,-0.11]
TouchSensor563 = x3d.TouchSensor()
TouchSensor563.description = "HAnimSite 63 l_humeral_lateral_epicondyles"

HAnimSite562.children.append(TouchSensor563)
Shape564 = x3d.Shape()
Shape564.USE = "HAnimSiteShape"

HAnimSite562.children.append(Shape564)
Billboard565 = x3d.Billboard()
Shape566 = x3d.Shape()
Text567 = x3d.Text()
Text567.string = ["63"]
FontStyle568 = x3d.FontStyle()
FontStyle568.size = 0.035

Text567.fontStyle = FontStyle568

Shape566.geometry = Text567

Billboard565.children.append(Shape566)

HAnimSite562.children.append(Billboard565)

HAnimSegment547.children.append(HAnimSite562)

HAnimJoint546.children.append(HAnimSegment547)
HAnimJoint569 = x3d.HAnimJoint()
HAnimJoint569.name = "l_elbow"
HAnimJoint569.DEF = "hanim_l_elbow"
HAnimJoint569.center = [0.2014,1.1357,-0.0682]
HAnimJoint569.ulimit = [0,0,0]
HAnimJoint569.llimit = [0,0,0]
HAnimSegment570 = x3d.HAnimSegment()
HAnimSegment570.name = "l_forearm"
HAnimSegment570.DEF = "hanim_l_forearm"
Transform571 = x3d.Transform()
Transform571.translation = [0.2014,1.1357,-0.0682]
Transform572 = x3d.Transform()
"""Empty Transform"""
Shape573 = x3d.Shape()
Shape573.USE = "HAnimJointShape"

Transform572.children.append(Shape573)

Transform571.children.append(Transform572)

HAnimSegment570.children.append(Transform571)
Shape574 = x3d.Shape()
LineSet575 = x3d.LineSet()
LineSet575.vertexCount = [2]
Coordinate576 = x3d.Coordinate()

LineSet575.coord = Coordinate576
"""from l_elbow to l_radiocarpal vertices 2"""
ColorRGBA577 = x3d.ColorRGBA()
ColorRGBA577.USE = "HAnimSegmentLineColorRGBA"

LineSet575.color = ColorRGBA577

Shape574.geometry = LineSet575

HAnimSegment570.children.append(Shape574)
HAnimSite578 = x3d.HAnimSite()
HAnimSite578.name = "l_humeral_medial_epicondyles"
HAnimSite578.DEF = "hanim_l_humeral_medial_epicondyles"
HAnimSite578.translation = [0.1735,1.1272,-0.1113]
TouchSensor579 = x3d.TouchSensor()
TouchSensor579.description = "HAnimSite 64 l_humeral_medial_epicondyles"

HAnimSite578.children.append(TouchSensor579)
Shape580 = x3d.Shape()
Shape580.USE = "HAnimSiteShape"

HAnimSite578.children.append(Shape580)
Billboard581 = x3d.Billboard()
Shape582 = x3d.Shape()
Text583 = x3d.Text()
Text583.string = ["64"]
FontStyle584 = x3d.FontStyle()
FontStyle584.size = 0.035

Text583.fontStyle = FontStyle584

Shape582.geometry = Text583

Billboard581.children.append(Shape582)

HAnimSite578.children.append(Billboard581)

HAnimSegment570.children.append(HAnimSite578)
HAnimSite585 = x3d.HAnimSite()
HAnimSite585.name = "l_olecranon"
HAnimSite585.DEF = "hanim_l_olecranon"
HAnimSite585.translation = [-0.1962,1.1375,-0.1123]
TouchSensor586 = x3d.TouchSensor()
TouchSensor586.description = "HAnimSite 65 l_olecranon"

HAnimSite585.children.append(TouchSensor586)
Shape587 = x3d.Shape()
Shape587.USE = "HAnimSiteShape"

HAnimSite585.children.append(Shape587)
Billboard588 = x3d.Billboard()
Shape589 = x3d.Shape()
Text590 = x3d.Text()
Text590.string = ["65"]
FontStyle591 = x3d.FontStyle()
FontStyle591.size = 0.035

Text590.fontStyle = FontStyle591

Shape589.geometry = Text590

Billboard588.children.append(Shape589)

HAnimSite585.children.append(Billboard588)

HAnimSegment570.children.append(HAnimSite585)
HAnimSite592 = x3d.HAnimSite()
HAnimSite592.name = "l_radial_styloid"
HAnimSite592.DEF = "hanim_l_radial_styloid"
HAnimSite592.translation = [0.1901,0.8645,-0.0415]
TouchSensor593 = x3d.TouchSensor()
TouchSensor593.description = "HAnimSite 71 l_radial_styloid"

HAnimSite592.children.append(TouchSensor593)
Shape594 = x3d.Shape()
Shape594.USE = "HAnimSiteShape"

HAnimSite592.children.append(Shape594)
Billboard595 = x3d.Billboard()
Shape596 = x3d.Shape()
Text597 = x3d.Text()
Text597.string = ["71"]
FontStyle598 = x3d.FontStyle()
FontStyle598.size = 0.035

Text597.fontStyle = FontStyle598

Shape596.geometry = Text597

Billboard595.children.append(Shape596)

HAnimSite592.children.append(Billboard595)

HAnimSegment570.children.append(HAnimSite592)
HAnimSite599 = x3d.HAnimSite()
HAnimSite599.name = "l_radiale"
HAnimSite599.DEF = "hanim_l_radiale"
HAnimSite599.translation = [0.2182,1.1212,-0.1167]
TouchSensor600 = x3d.TouchSensor()
TouchSensor600.description = "HAnimSite 69 l_radiale"

HAnimSite599.children.append(TouchSensor600)
Shape601 = x3d.Shape()
Shape601.USE = "HAnimSiteShape"

HAnimSite599.children.append(Shape601)
Billboard602 = x3d.Billboard()
Shape603 = x3d.Shape()
Text604 = x3d.Text()
Text604.string = ["69"]
FontStyle605 = x3d.FontStyle()
FontStyle605.size = 0.035

Text604.fontStyle = FontStyle605

Shape603.geometry = Text604

Billboard602.children.append(Shape603)

HAnimSite599.children.append(Billboard602)

HAnimSegment570.children.append(HAnimSite599)

HAnimJoint569.children.append(HAnimSegment570)
HAnimJoint606 = x3d.HAnimJoint()
HAnimJoint606.name = "l_radiocarpal"
HAnimJoint606.DEF = "hanim_l_radiocarpal"
HAnimJoint606.center = [0.1984,0.8663,-0.0583]
HAnimJoint606.ulimit = [0,0,0]
HAnimJoint606.llimit = [0,0,0]

HAnimJoint569.children.append(HAnimJoint606)

HAnimJoint546.children.append(HAnimJoint569)

HAnimJoint325.children.append(HAnimJoint546)
HAnimJoint607 = x3d.HAnimJoint()
HAnimJoint607.name = "r_shoulder"
HAnimJoint607.DEF = "hanim_r_shoulder"
HAnimJoint607.center = [-0.1907,1.4407,-0.0325]
HAnimJoint607.ulimit = [0,0,0]
HAnimJoint607.llimit = [0,0,0]
HAnimSegment608 = x3d.HAnimSegment()
HAnimSegment608.name = "r_upperarm"
HAnimSegment608.DEF = "hanim_r_upperarm"
Transform609 = x3d.Transform()
Transform609.translation = [-0.1907,1.4407,-0.0325]
Transform610 = x3d.Transform()
"""Empty Transform"""
Shape611 = x3d.Shape()
Shape611.USE = "HAnimJointShape"

Transform610.children.append(Shape611)

Transform609.children.append(Transform610)

HAnimSegment608.children.append(Transform609)
Shape612 = x3d.Shape()
LineSet613 = x3d.LineSet()
LineSet613.vertexCount = [2]
Coordinate614 = x3d.Coordinate()

LineSet613.coord = Coordinate614
"""from r_shoulder to r_elbow vertices 2"""
ColorRGBA615 = x3d.ColorRGBA()
ColorRGBA615.USE = "HAnimSegmentLineColorRGBA"

LineSet613.color = ColorRGBA615

Shape612.geometry = LineSet613

HAnimSegment608.children.append(Shape612)
HAnimSite616 = x3d.HAnimSite()
HAnimSite616.name = "r_bideltoid"
HAnimSite616.DEF = "hanim_r_bideltoid"
TouchSensor617 = x3d.TouchSensor()
TouchSensor617.description = "HAnimSite 97 r_bideltoid"

HAnimSite616.children.append(TouchSensor617)
Shape618 = x3d.Shape()
Shape618.USE = "HAnimSiteShape"

HAnimSite616.children.append(Shape618)
Billboard619 = x3d.Billboard()
Shape620 = x3d.Shape()
Text621 = x3d.Text()
Text621.string = ["97"]
FontStyle622 = x3d.FontStyle()
FontStyle622.size = 0.035

Text621.fontStyle = FontStyle622

Shape620.geometry = Text621

Billboard619.children.append(Shape620)

HAnimSite616.children.append(Billboard619)

HAnimSegment608.children.append(HAnimSite616)
HAnimSite623 = x3d.HAnimSite()
HAnimSite623.name = "r_humeral_lateral_epicondyles"
HAnimSite623.DEF = "hanim_r_humeral_lateral_epicondyles"
HAnimSite623.translation = [-0.2224,1.1517,-0.1033]
TouchSensor624 = x3d.TouchSensor()
TouchSensor624.description = "HAnimSite 66 r_humeral_lateral_epicondyles"

HAnimSite623.children.append(TouchSensor624)
Shape625 = x3d.Shape()
Shape625.USE = "HAnimSiteShape"

HAnimSite623.children.append(Shape625)
Billboard626 = x3d.Billboard()
Shape627 = x3d.Shape()
Text628 = x3d.Text()
Text628.string = ["66"]
FontStyle629 = x3d.FontStyle()
FontStyle629.size = 0.035

Text628.fontStyle = FontStyle629

Shape627.geometry = Text628

Billboard626.children.append(Shape627)

HAnimSite623.children.append(Billboard626)

HAnimSegment608.children.append(HAnimSite623)

HAnimJoint607.children.append(HAnimSegment608)
HAnimJoint630 = x3d.HAnimJoint()
HAnimJoint630.name = "r_elbow"
HAnimJoint630.DEF = "hanim_r_elbow"
HAnimJoint630.center = [-0.1949,1.1388,-0.062]
HAnimJoint630.ulimit = [0,0,0]
HAnimJoint630.llimit = [0,0,0]
HAnimSegment631 = x3d.HAnimSegment()
HAnimSegment631.name = "r_forearm"
HAnimSegment631.DEF = "hanim_r_forearm"
Transform632 = x3d.Transform()
Transform632.translation = [-0.1949,1.1388,-0.062]
Transform633 = x3d.Transform()
"""Empty Transform"""
Shape634 = x3d.Shape()
Shape634.USE = "HAnimJointShape"

Transform633.children.append(Shape634)

Transform632.children.append(Transform633)

HAnimSegment631.children.append(Transform632)
Shape635 = x3d.Shape()
LineSet636 = x3d.LineSet()
LineSet636.vertexCount = [2]
Coordinate637 = x3d.Coordinate()

LineSet636.coord = Coordinate637
"""from r_elbow to r_radiocarpal vertices 2"""
ColorRGBA638 = x3d.ColorRGBA()
ColorRGBA638.USE = "HAnimSegmentLineColorRGBA"

LineSet636.color = ColorRGBA638

Shape635.geometry = LineSet636

HAnimSegment631.children.append(Shape635)
HAnimSite639 = x3d.HAnimSite()
HAnimSite639.name = "r_humeral_medial_epicondyles"
HAnimSite639.DEF = "hanim_r_humeral_medial_epicondyles"
HAnimSite639.translation = [-0.168,1.1298,-0.1062]
TouchSensor640 = x3d.TouchSensor()
TouchSensor640.description = "HAnimSite 67 r_humeral_medial_epicondyles"

HAnimSite639.children.append(TouchSensor640)
Shape641 = x3d.Shape()
Shape641.USE = "HAnimSiteShape"

HAnimSite639.children.append(Shape641)
Billboard642 = x3d.Billboard()
Shape643 = x3d.Shape()
Text644 = x3d.Text()
Text644.string = ["67"]
FontStyle645 = x3d.FontStyle()
FontStyle645.size = 0.035

Text644.fontStyle = FontStyle645

Shape643.geometry = Text644

Billboard642.children.append(Shape643)

HAnimSite639.children.append(Billboard642)

HAnimSegment631.children.append(HAnimSite639)
HAnimSite646 = x3d.HAnimSite()
HAnimSite646.name = "r_olecranon"
HAnimSite646.DEF = "hanim_r_olecranon"
HAnimSite646.translation = [-0.1907,1.1405,-0.1065]
TouchSensor647 = x3d.TouchSensor()
TouchSensor647.description = "HAnimSite 68 r_olecranon"

HAnimSite646.children.append(TouchSensor647)
Shape648 = x3d.Shape()
Shape648.USE = "HAnimSiteShape"

HAnimSite646.children.append(Shape648)
Billboard649 = x3d.Billboard()
Shape650 = x3d.Shape()
Text651 = x3d.Text()
Text651.string = ["68"]
FontStyle652 = x3d.FontStyle()
FontStyle652.size = 0.035

Text651.fontStyle = FontStyle652

Shape650.geometry = Text651

Billboard649.children.append(Shape650)

HAnimSite646.children.append(Billboard649)

HAnimSegment631.children.append(HAnimSite646)
HAnimSite653 = x3d.HAnimSite()
HAnimSite653.name = "r_radial_styloid"
HAnimSite653.DEF = "hanim_r_radial_styloid"
HAnimSite653.translation = [-0.1884,0.8676,-0.036]
TouchSensor654 = x3d.TouchSensor()
TouchSensor654.description = "HAnimSite 74 r_radial_styloid"

HAnimSite653.children.append(TouchSensor654)
Shape655 = x3d.Shape()
Shape655.USE = "HAnimSiteShape"

HAnimSite653.children.append(Shape655)
Billboard656 = x3d.Billboard()
Shape657 = x3d.Shape()
Text658 = x3d.Text()
Text658.string = ["74"]
FontStyle659 = x3d.FontStyle()
FontStyle659.size = 0.035

Text658.fontStyle = FontStyle659

Shape657.geometry = Text658

Billboard656.children.append(Shape657)

HAnimSite653.children.append(Billboard656)

HAnimSegment631.children.append(HAnimSite653)
HAnimSite660 = x3d.HAnimSite()
HAnimSite660.name = "r_radiale"
HAnimSite660.DEF = "hanim_r_radiale"
HAnimSite660.translation = [-0.213,1.1305,-0.1091]
TouchSensor661 = x3d.TouchSensor()
TouchSensor661.description = "HAnimSite 72 r_radiale"

HAnimSite660.children.append(TouchSensor661)
Shape662 = x3d.Shape()
Shape662.USE = "HAnimSiteShape"

HAnimSite660.children.append(Shape662)
Billboard663 = x3d.Billboard()
Shape664 = x3d.Shape()
Text665 = x3d.Text()
Text665.string = ["72"]
FontStyle666 = x3d.FontStyle()
FontStyle666.size = 0.035

Text665.fontStyle = FontStyle666

Shape664.geometry = Text665

Billboard663.children.append(Shape664)

HAnimSite660.children.append(Billboard663)

HAnimSegment631.children.append(HAnimSite660)

HAnimJoint630.children.append(HAnimSegment631)
HAnimJoint667 = x3d.HAnimJoint()
HAnimJoint667.name = "r_radiocarpal"
HAnimJoint667.DEF = "hanim_r_radiocarpal"
HAnimJoint667.center = [-0.1959,0.8694,-0.0521]
HAnimJoint667.ulimit = [0,0,0]
HAnimJoint667.llimit = [0,0,0]

HAnimJoint630.children.append(HAnimJoint667)

HAnimJoint607.children.append(HAnimJoint630)

HAnimJoint325.children.append(HAnimJoint607)

HAnimJoint47.children.append(HAnimJoint325)

HAnimHumanoid38.skeleton.append(HAnimJoint47)
HAnimJoint668 = x3d.HAnimJoint()
HAnimJoint668.USE = "hanim_humanoid_root"

HAnimHumanoid38.joints.append(HAnimJoint668)
HAnimJoint669 = x3d.HAnimJoint()
HAnimJoint669.USE = "hanim_sacroiliac"

HAnimHumanoid38.joints.append(HAnimJoint669)
HAnimJoint670 = x3d.HAnimJoint()
HAnimJoint670.USE = "hanim_l_hip"

HAnimHumanoid38.joints.append(HAnimJoint670)
HAnimJoint671 = x3d.HAnimJoint()
HAnimJoint671.USE = "hanim_l_knee"

HAnimHumanoid38.joints.append(HAnimJoint671)
HAnimJoint672 = x3d.HAnimJoint()
HAnimJoint672.USE = "hanim_l_talocrural"

HAnimHumanoid38.joints.append(HAnimJoint672)
HAnimJoint673 = x3d.HAnimJoint()
HAnimJoint673.USE = "hanim_l_metatarsophalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint673)
HAnimJoint674 = x3d.HAnimJoint()
HAnimJoint674.USE = "hanim_r_hip"

HAnimHumanoid38.joints.append(HAnimJoint674)
HAnimJoint675 = x3d.HAnimJoint()
HAnimJoint675.USE = "hanim_r_knee"

HAnimHumanoid38.joints.append(HAnimJoint675)
HAnimJoint676 = x3d.HAnimJoint()
HAnimJoint676.USE = "hanim_r_talocrural"

HAnimHumanoid38.joints.append(HAnimJoint676)
HAnimJoint677 = x3d.HAnimJoint()
HAnimJoint677.USE = "hanim_r_metatarsophalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint677)
HAnimJoint678 = x3d.HAnimJoint()
HAnimJoint678.USE = "hanim_vl5"

HAnimHumanoid38.joints.append(HAnimJoint678)
HAnimJoint679 = x3d.HAnimJoint()
HAnimJoint679.USE = "hanim_skullbase"

HAnimHumanoid38.joints.append(HAnimJoint679)
HAnimJoint680 = x3d.HAnimJoint()
HAnimJoint680.USE = "hanim_l_shoulder"

HAnimHumanoid38.joints.append(HAnimJoint680)
HAnimJoint681 = x3d.HAnimJoint()
HAnimJoint681.USE = "hanim_l_elbow"

HAnimHumanoid38.joints.append(HAnimJoint681)
HAnimJoint682 = x3d.HAnimJoint()
HAnimJoint682.USE = "hanim_l_radiocarpal"

HAnimHumanoid38.joints.append(HAnimJoint682)
HAnimJoint683 = x3d.HAnimJoint()
HAnimJoint683.USE = "hanim_r_shoulder"

HAnimHumanoid38.joints.append(HAnimJoint683)
HAnimJoint684 = x3d.HAnimJoint()
HAnimJoint684.USE = "hanim_r_elbow"

HAnimHumanoid38.joints.append(HAnimJoint684)
HAnimJoint685 = x3d.HAnimJoint()
HAnimJoint685.USE = "hanim_r_radiocarpal"

HAnimHumanoid38.joints.append(HAnimJoint685)
HAnimSegment686 = x3d.HAnimSegment()
HAnimSegment686.USE = "hanim_sacrum"

HAnimHumanoid38.segments.append(HAnimSegment686)
HAnimSegment687 = x3d.HAnimSegment()
HAnimSegment687.USE = "hanim_pelvis"

HAnimHumanoid38.segments.append(HAnimSegment687)
HAnimSegment688 = x3d.HAnimSegment()
HAnimSegment688.USE = "hanim_l_thigh"

HAnimHumanoid38.segments.append(HAnimSegment688)
HAnimSegment689 = x3d.HAnimSegment()
HAnimSegment689.USE = "hanim_l_calf"

HAnimHumanoid38.segments.append(HAnimSegment689)
HAnimSegment690 = x3d.HAnimSegment()
HAnimSegment690.USE = "hanim_l_talus"

HAnimHumanoid38.segments.append(HAnimSegment690)
HAnimSegment691 = x3d.HAnimSegment()
HAnimSegment691.USE = "hanim_r_thigh"

HAnimHumanoid38.segments.append(HAnimSegment691)
HAnimSegment692 = x3d.HAnimSegment()
HAnimSegment692.USE = "hanim_r_calf"

HAnimHumanoid38.segments.append(HAnimSegment692)
HAnimSegment693 = x3d.HAnimSegment()
HAnimSegment693.USE = "hanim_r_talus"

HAnimHumanoid38.segments.append(HAnimSegment693)
HAnimSegment694 = x3d.HAnimSegment()
HAnimSegment694.USE = "hanim_l5"

HAnimHumanoid38.segments.append(HAnimSegment694)
HAnimSegment695 = x3d.HAnimSegment()
HAnimSegment695.USE = "hanim_l_upperarm"

HAnimHumanoid38.segments.append(HAnimSegment695)
HAnimSegment696 = x3d.HAnimSegment()
HAnimSegment696.USE = "hanim_l_forearm"

HAnimHumanoid38.segments.append(HAnimSegment696)
HAnimSegment697 = x3d.HAnimSegment()
HAnimSegment697.USE = "hanim_r_upperarm"

HAnimHumanoid38.segments.append(HAnimSegment697)
HAnimSegment698 = x3d.HAnimSegment()
HAnimSegment698.USE = "hanim_r_forearm"

HAnimHumanoid38.segments.append(HAnimSegment698)
HAnimSite699 = x3d.HAnimSite()
HAnimSite699.USE = "hanim_buttocks_standing_wall_contact_point"

HAnimHumanoid38.sites.append(HAnimSite699)
HAnimSite700 = x3d.HAnimSite()
HAnimSite700.USE = "hanim_crotch"

HAnimHumanoid38.sites.append(HAnimSite700)
HAnimSite701 = x3d.HAnimSite()
HAnimSite701.USE = "hanim_l_asis"

HAnimHumanoid38.sites.append(HAnimSite701)
HAnimSite702 = x3d.HAnimSite()
HAnimSite702.USE = "hanim_l_iliocristale"

HAnimHumanoid38.sites.append(HAnimSite702)
HAnimSite703 = x3d.HAnimSite()
HAnimSite703.USE = "hanim_l_psis"

HAnimHumanoid38.sites.append(HAnimSite703)
HAnimSite704 = x3d.HAnimSite()
HAnimSite704.USE = "hanim_l_trochanterion"

HAnimHumanoid38.sites.append(HAnimSite704)
HAnimSite705 = x3d.HAnimSite()
HAnimSite705.USE = "hanim_r_asis"

HAnimHumanoid38.sites.append(HAnimSite705)
HAnimSite706 = x3d.HAnimSite()
HAnimSite706.USE = "hanim_r_iliocristale"

HAnimHumanoid38.sites.append(HAnimSite706)
HAnimSite707 = x3d.HAnimSite()
HAnimSite707.USE = "hanim_r_psis"

HAnimHumanoid38.sites.append(HAnimSite707)
HAnimSite708 = x3d.HAnimSite()
HAnimSite708.USE = "hanim_r_trochanterion"

HAnimHumanoid38.sites.append(HAnimSite708)
HAnimSite709 = x3d.HAnimSite()
HAnimSite709.USE = "hanim_l_femoral_lateral_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite709)
HAnimSite710 = x3d.HAnimSite()
HAnimSite710.USE = "hanim_l_femoral_medial_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite710)
HAnimSite711 = x3d.HAnimSite()
HAnimSite711.USE = "hanim_l_knee_crease"

HAnimHumanoid38.sites.append(HAnimSite711)
HAnimSite712 = x3d.HAnimSite()
HAnimSite712.USE = "hanim_l_suprapatella"

HAnimHumanoid38.sites.append(HAnimSite712)
HAnimSite713 = x3d.HAnimSite()
HAnimSite713.USE = "hanim_l_lateral_malleolus"

HAnimHumanoid38.sites.append(HAnimSite713)
HAnimSite714 = x3d.HAnimSite()
HAnimSite714.USE = "hanim_l_medial_malleolus"

HAnimHumanoid38.sites.append(HAnimSite714)
HAnimSite715 = x3d.HAnimSite()
HAnimSite715.USE = "hanim_l_tibiale"

HAnimHumanoid38.sites.append(HAnimSite715)
HAnimSite716 = x3d.HAnimSite()
HAnimSite716.USE = "hanim_l_calcaneus_posterior"

HAnimHumanoid38.sites.append(HAnimSite716)
HAnimSite717 = x3d.HAnimSite()
HAnimSite717.USE = "hanim_l_sphyrion"

HAnimHumanoid38.sites.append(HAnimSite717)
HAnimSite718 = x3d.HAnimSite()
HAnimSite718.USE = "hanim_r_femoral_lateral_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite718)
HAnimSite719 = x3d.HAnimSite()
HAnimSite719.USE = "hanim_r_femoral_medial_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite719)
HAnimSite720 = x3d.HAnimSite()
HAnimSite720.USE = "hanim_r_knee_crease"

HAnimHumanoid38.sites.append(HAnimSite720)
HAnimSite721 = x3d.HAnimSite()
HAnimSite721.USE = "hanim_r_suprapatella"

HAnimHumanoid38.sites.append(HAnimSite721)
HAnimSite722 = x3d.HAnimSite()
HAnimSite722.USE = "hanim_r_lateral_malleolus"

HAnimHumanoid38.sites.append(HAnimSite722)
HAnimSite723 = x3d.HAnimSite()
HAnimSite723.USE = "hanim_r_medial_malleolus"

HAnimHumanoid38.sites.append(HAnimSite723)
HAnimSite724 = x3d.HAnimSite()
HAnimSite724.USE = "hanim_r_tibiale"

HAnimHumanoid38.sites.append(HAnimSite724)
HAnimSite725 = x3d.HAnimSite()
HAnimSite725.USE = "hanim_r_calcaneus_posterior"

HAnimHumanoid38.sites.append(HAnimSite725)
HAnimSite726 = x3d.HAnimSite()
HAnimSite726.USE = "hanim_r_sphyrion"

HAnimHumanoid38.sites.append(HAnimSite726)
HAnimSite727 = x3d.HAnimSite()
HAnimSite727.USE = "hanim_adams_apple"

HAnimHumanoid38.sites.append(HAnimSite727)
HAnimSite728 = x3d.HAnimSite()
HAnimSite728.USE = "hanim_cervicale"

HAnimHumanoid38.sites.append(HAnimSite728)
HAnimSite729 = x3d.HAnimSite()
HAnimSite729.USE = "hanim_l_acromion"

HAnimHumanoid38.sites.append(HAnimSite729)
HAnimSite730 = x3d.HAnimSite()
HAnimSite730.USE = "hanim_l_axilla_distal"

HAnimHumanoid38.sites.append(HAnimSite730)
HAnimSite731 = x3d.HAnimSite()
HAnimSite731.USE = "hanim_l_axilla_posterior_folds"

HAnimHumanoid38.sites.append(HAnimSite731)
HAnimSite732 = x3d.HAnimSite()
HAnimSite732.USE = "hanim_l_axilla_proximal"

HAnimHumanoid38.sites.append(HAnimSite732)
HAnimSite733 = x3d.HAnimSite()
HAnimSite733.USE = "hanim_l_chest_midsagittal_plane"

HAnimHumanoid38.sites.append(HAnimSite733)
HAnimSite734 = x3d.HAnimSite()
HAnimSite734.USE = "hanim_l_clavicale"

HAnimHumanoid38.sites.append(HAnimSite734)
HAnimSite735 = x3d.HAnimSite()
HAnimSite735.USE = "hanim_l_neck_base"

HAnimHumanoid38.sites.append(HAnimSite735)
HAnimSite736 = x3d.HAnimSite()
HAnimSite736.USE = "hanim_l_rib10"

HAnimHumanoid38.sites.append(HAnimSite736)
HAnimSite737 = x3d.HAnimSite()
HAnimSite737.USE = "hanim_l_thelion"

HAnimHumanoid38.sites.append(HAnimSite737)
HAnimSite738 = x3d.HAnimSite()
HAnimSite738.USE = "hanim_mesosternale"

HAnimHumanoid38.sites.append(HAnimSite738)
HAnimSite739 = x3d.HAnimSite()
HAnimSite739.USE = "hanim_navel"

HAnimHumanoid38.sites.append(HAnimSite739)
HAnimSite740 = x3d.HAnimSite()
HAnimSite740.USE = "hanim_r_acromion"

HAnimHumanoid38.sites.append(HAnimSite740)
HAnimSite741 = x3d.HAnimSite()
HAnimSite741.USE = "hanim_r_axilla_distal"

HAnimHumanoid38.sites.append(HAnimSite741)
HAnimSite742 = x3d.HAnimSite()
HAnimSite742.USE = "hanim_r_axilla_posterior_folds"

HAnimHumanoid38.sites.append(HAnimSite742)
HAnimSite743 = x3d.HAnimSite()
HAnimSite743.USE = "hanim_r_axilla_proximal"

HAnimHumanoid38.sites.append(HAnimSite743)
HAnimSite744 = x3d.HAnimSite()
HAnimSite744.USE = "hanim_r_chest_midsagittal_plane"

HAnimHumanoid38.sites.append(HAnimSite744)
HAnimSite745 = x3d.HAnimSite()
HAnimSite745.USE = "hanim_r_clavicale"

HAnimHumanoid38.sites.append(HAnimSite745)
HAnimSite746 = x3d.HAnimSite()
HAnimSite746.USE = "hanim_r_neck_base"

HAnimHumanoid38.sites.append(HAnimSite746)
HAnimSite747 = x3d.HAnimSite()
HAnimSite747.USE = "hanim_r_rib10"

HAnimHumanoid38.sites.append(HAnimSite747)
HAnimSite748 = x3d.HAnimSite()
HAnimSite748.USE = "hanim_r_thelion"

HAnimHumanoid38.sites.append(HAnimSite748)
HAnimSite749 = x3d.HAnimSite()
HAnimSite749.USE = "hanim_rear_center_midsagittal_plane"

HAnimHumanoid38.sites.append(HAnimSite749)
HAnimSite750 = x3d.HAnimSite()
HAnimSite750.USE = "hanim_spine_1_middle_back"

HAnimHumanoid38.sites.append(HAnimSite750)
HAnimSite751 = x3d.HAnimSite()
HAnimSite751.USE = "hanim_spine_2_middle_back"

HAnimHumanoid38.sites.append(HAnimSite751)
HAnimSite752 = x3d.HAnimSite()
HAnimSite752.USE = "hanim_substernale"

HAnimHumanoid38.sites.append(HAnimSite752)
HAnimSite753 = x3d.HAnimSite()
HAnimSite753.USE = "hanim_suprasternale"

HAnimHumanoid38.sites.append(HAnimSite753)
HAnimSite754 = x3d.HAnimSite()
HAnimSite754.USE = "hanim_waist_preferred_anterior"

HAnimHumanoid38.sites.append(HAnimSite754)
HAnimSite755 = x3d.HAnimSite()
HAnimSite755.USE = "hanim_waist_preferred_posterior"

HAnimHumanoid38.sites.append(HAnimSite755)
HAnimSite756 = x3d.HAnimSite()
HAnimSite756.USE = "hanim_l_bideltoid"

HAnimHumanoid38.sites.append(HAnimSite756)
HAnimSite757 = x3d.HAnimSite()
HAnimSite757.USE = "hanim_l_humeral_lateral_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite757)
HAnimSite758 = x3d.HAnimSite()
HAnimSite758.USE = "hanim_l_humeral_medial_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite758)
HAnimSite759 = x3d.HAnimSite()
HAnimSite759.USE = "hanim_l_olecranon"

HAnimHumanoid38.sites.append(HAnimSite759)
HAnimSite760 = x3d.HAnimSite()
HAnimSite760.USE = "hanim_l_radial_styloid"

HAnimHumanoid38.sites.append(HAnimSite760)
HAnimSite761 = x3d.HAnimSite()
HAnimSite761.USE = "hanim_l_radiale"

HAnimHumanoid38.sites.append(HAnimSite761)
HAnimSite762 = x3d.HAnimSite()
HAnimSite762.USE = "hanim_r_bideltoid"

HAnimHumanoid38.sites.append(HAnimSite762)
HAnimSite763 = x3d.HAnimSite()
HAnimSite763.USE = "hanim_r_humeral_lateral_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite763)
HAnimSite764 = x3d.HAnimSite()
HAnimSite764.USE = "hanim_r_humeral_medial_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite764)
HAnimSite765 = x3d.HAnimSite()
HAnimSite765.USE = "hanim_r_olecranon"

HAnimHumanoid38.sites.append(HAnimSite765)
HAnimSite766 = x3d.HAnimSite()
HAnimSite766.USE = "hanim_r_radial_styloid"

HAnimHumanoid38.sites.append(HAnimSite766)
HAnimSite767 = x3d.HAnimSite()
HAnimSite767.USE = "hanim_r_radiale"

HAnimHumanoid38.sites.append(HAnimSite767)

Scene11.children.append(HAnimHumanoid38)

X3D0.Scene = Scene11
f = open("../data/Humanoid1.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Humanoid1.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
