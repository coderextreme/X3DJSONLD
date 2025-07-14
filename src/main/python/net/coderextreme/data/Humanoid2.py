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
meta3.content = "Humanoid2.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "identifier"
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid2.x3d"

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
"""from l_talocrural to l_tarsometatarsal_2 vertices 2"""
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
HAnimJoint233.name = "l_tarsometatarsal_2"
HAnimJoint233.DEF = "hanim_l_tarsometatarsal_2"
HAnimJoint233.center = [0.08,0.0175,-0.0608]
HAnimJoint233.ulimit = [0,0,0]
HAnimJoint233.llimit = [0,0,0]
HAnimSegment234 = x3d.HAnimSegment()
HAnimSegment234.name = "l_metatarsal_2"
HAnimSegment234.DEF = "hanim_l_metatarsal_2"
Transform235 = x3d.Transform()
Transform235.translation = [0.08,0.0175,-0.0608]
Transform236 = x3d.Transform()
"""Empty Transform"""
Shape237 = x3d.Shape()
Shape237.USE = "HAnimJointShape"

Transform236.children.append(Shape237)

Transform235.children.append(Transform236)

HAnimSegment234.children.append(Transform235)
Shape238 = x3d.Shape()
LineSet239 = x3d.LineSet()
LineSet239.vertexCount = [2]
Coordinate240 = x3d.Coordinate()

LineSet239.coord = Coordinate240
"""from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2"""
ColorRGBA241 = x3d.ColorRGBA()
ColorRGBA241.USE = "HAnimSegmentLineColorRGBA"

LineSet239.color = ColorRGBA241

Shape238.geometry = LineSet239

HAnimSegment234.children.append(Shape238)

HAnimJoint233.children.append(HAnimSegment234)
HAnimJoint242 = x3d.HAnimJoint()
HAnimJoint242.name = "l_metatarsophalangeal_2"
HAnimJoint242.DEF = "hanim_l_metatarsophalangeal_2"
HAnimJoint242.center = [0.0824,0.0064,-0.004]
HAnimJoint242.ulimit = [0,0,0]
HAnimJoint242.llimit = [0,0,0]
HAnimSegment243 = x3d.HAnimSegment()
HAnimSegment243.name = "l_tarsal_proximal_phalanx_2"
HAnimSegment243.DEF = "hanim_l_tarsal_proximal_phalanx_2"
Transform244 = x3d.Transform()
Transform244.translation = [0.0824,0.0064,-0.004]
Transform245 = x3d.Transform()
"""Empty Transform"""
Shape246 = x3d.Shape()
Shape246.USE = "HAnimJointShape"

Transform245.children.append(Shape246)

Transform244.children.append(Transform245)

HAnimSegment243.children.append(Transform244)
Shape247 = x3d.Shape()
LineSet248 = x3d.LineSet()
LineSet248.vertexCount = [2]
Coordinate249 = x3d.Coordinate()

LineSet248.coord = Coordinate249
"""from l_metatarsophalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2"""
ColorRGBA250 = x3d.ColorRGBA()
ColorRGBA250.USE = "HAnimSegmentLineColorRGBA"

LineSet248.color = ColorRGBA250

Shape247.geometry = LineSet248

HAnimSegment243.children.append(Shape247)
HAnimSite251 = x3d.HAnimSite()
HAnimSite251.name = "l_metatarsal_phalanx_1"
HAnimSite251.DEF = "hanim_l_metatarsal_phalanx_1"
TouchSensor252 = x3d.TouchSensor()
TouchSensor252.description = "HAnimSite 55 l_metatarsal_phalanx_1"

HAnimSite251.children.append(TouchSensor252)
Shape253 = x3d.Shape()
Shape253.USE = "HAnimSiteShape"

HAnimSite251.children.append(Shape253)
Billboard254 = x3d.Billboard()
Shape255 = x3d.Shape()
Text256 = x3d.Text()
Text256.string = ["55"]
FontStyle257 = x3d.FontStyle()
FontStyle257.size = 0.035

Text256.fontStyle = FontStyle257

Shape255.geometry = Text256

Billboard254.children.append(Shape255)

HAnimSite251.children.append(Billboard254)

HAnimSegment243.children.append(HAnimSite251)
HAnimSite258 = x3d.HAnimSite()
HAnimSite258.name = "l_metatarsal_phalanx_5"
HAnimSite258.DEF = "hanim_l_metatarsal_phalanx_5"
TouchSensor259 = x3d.TouchSensor()
TouchSensor259.description = "HAnimSite 56 l_metatarsal_phalanx_5"

HAnimSite258.children.append(TouchSensor259)
Shape260 = x3d.Shape()
Shape260.USE = "HAnimSiteShape"

HAnimSite258.children.append(Shape260)
Billboard261 = x3d.Billboard()
Shape262 = x3d.Shape()
Text263 = x3d.Text()
Text263.string = ["56"]
FontStyle264 = x3d.FontStyle()
FontStyle264.size = 0.035

Text263.fontStyle = FontStyle264

Shape262.geometry = Text263

Billboard261.children.append(Shape262)

HAnimSite258.children.append(Billboard261)

HAnimSegment243.children.append(HAnimSite258)
HAnimSite265 = x3d.HAnimSite()
HAnimSite265.name = "l_tarsal_distal_phalanx_1_tip"
HAnimSite265.DEF = "hanim_l_tarsal_distal_phalanx_1_tip"
TouchSensor266 = x3d.TouchSensor()
TouchSensor266.description = "HAnimSite l_tarsal_distal_phalanx_1_tip"

HAnimSite265.children.append(TouchSensor266)
Shape267 = x3d.Shape()
Shape267.USE = "HAnimSiteShape"

HAnimSite265.children.append(Shape267)
Billboard268 = x3d.Billboard()
Shape269 = x3d.Shape()
Text270 = x3d.Text()
Text270.string = [""]
FontStyle271 = x3d.FontStyle()
FontStyle271.size = 0.035

Text270.fontStyle = FontStyle271

Shape269.geometry = Text270

Billboard268.children.append(Shape269)

HAnimSite265.children.append(Billboard268)

HAnimSegment243.children.append(HAnimSite265)
HAnimSite272 = x3d.HAnimSite()
HAnimSite272.name = "l_tarsal_distal_phalanx_2_tip"
HAnimSite272.DEF = "hanim_l_tarsal_distal_phalanx_2_tip"
HAnimSite272.translation = [0.1195,0.0079,0.1433]
TouchSensor273 = x3d.TouchSensor()
TouchSensor273.description = "HAnimSite l_tarsal_distal_phalanx_2_tip"

HAnimSite272.children.append(TouchSensor273)
Shape274 = x3d.Shape()
Shape274.USE = "HAnimSiteShape"

HAnimSite272.children.append(Shape274)
Billboard275 = x3d.Billboard()
Shape276 = x3d.Shape()
Text277 = x3d.Text()
Text277.string = [""]
FontStyle278 = x3d.FontStyle()
FontStyle278.size = 0.035

Text277.fontStyle = FontStyle278

Shape276.geometry = Text277

Billboard275.children.append(Shape276)

HAnimSite272.children.append(Billboard275)

HAnimSegment243.children.append(HAnimSite272)
HAnimSite279 = x3d.HAnimSite()
HAnimSite279.name = "l_tarsal_distal_phalanx_3_tip"
HAnimSite279.DEF = "hanim_l_tarsal_distal_phalanx_3_tip"
TouchSensor280 = x3d.TouchSensor()
TouchSensor280.description = "HAnimSite l_tarsal_distal_phalanx_3_tip"

HAnimSite279.children.append(TouchSensor280)
Shape281 = x3d.Shape()
Shape281.USE = "HAnimSiteShape"

HAnimSite279.children.append(Shape281)
Billboard282 = x3d.Billboard()
Shape283 = x3d.Shape()
Text284 = x3d.Text()
Text284.string = [""]
FontStyle285 = x3d.FontStyle()
FontStyle285.size = 0.035

Text284.fontStyle = FontStyle285

Shape283.geometry = Text284

Billboard282.children.append(Shape283)

HAnimSite279.children.append(Billboard282)

HAnimSegment243.children.append(HAnimSite279)
HAnimSite286 = x3d.HAnimSite()
HAnimSite286.name = "l_tarsal_distal_phalanx_4_tip"
HAnimSite286.DEF = "hanim_l_tarsal_distal_phalanx_4_tip"
TouchSensor287 = x3d.TouchSensor()
TouchSensor287.description = "HAnimSite l_tarsal_distal_phalanx_4_tip"

HAnimSite286.children.append(TouchSensor287)
Shape288 = x3d.Shape()
Shape288.USE = "HAnimSiteShape"

HAnimSite286.children.append(Shape288)
Billboard289 = x3d.Billboard()
Shape290 = x3d.Shape()
Text291 = x3d.Text()
Text291.string = [""]
FontStyle292 = x3d.FontStyle()
FontStyle292.size = 0.035

Text291.fontStyle = FontStyle292

Shape290.geometry = Text291

Billboard289.children.append(Shape290)

HAnimSite286.children.append(Billboard289)

HAnimSegment243.children.append(HAnimSite286)
HAnimSite293 = x3d.HAnimSite()
HAnimSite293.name = "l_tarsal_distal_phalanx_5_tip"
HAnimSite293.DEF = "hanim_l_tarsal_distal_phalanx_5_tip"
TouchSensor294 = x3d.TouchSensor()
TouchSensor294.description = "HAnimSite l_tarsal_distal_phalanx_5_tip"

HAnimSite293.children.append(TouchSensor294)
Shape295 = x3d.Shape()
Shape295.USE = "HAnimSiteShape"

HAnimSite293.children.append(Shape295)
Billboard296 = x3d.Billboard()
Shape297 = x3d.Shape()
Text298 = x3d.Text()
Text298.string = [""]
FontStyle299 = x3d.FontStyle()
FontStyle299.size = 0.035

Text298.fontStyle = FontStyle299

Shape297.geometry = Text298

Billboard296.children.append(Shape297)

HAnimSite293.children.append(Billboard296)

HAnimSegment243.children.append(HAnimSite293)

HAnimJoint242.children.append(HAnimSegment243)
HAnimJoint300 = x3d.HAnimJoint()
HAnimJoint300.name = "l_tarsal_distal_interphalangeal_2"
HAnimJoint300.DEF = "hanim_l_tarsal_distal_interphalangeal_2"
HAnimJoint300.center = [0.0841,0.0013,0.0216]
HAnimJoint300.ulimit = [0,0,0]
HAnimJoint300.llimit = [0,0,0]

HAnimJoint242.children.append(HAnimJoint300)

HAnimJoint233.children.append(HAnimJoint242)

HAnimJoint210.children.append(HAnimJoint233)

HAnimJoint180.children.append(HAnimJoint210)

HAnimJoint143.children.append(HAnimJoint180)

HAnimJoint60.children.append(HAnimJoint143)
HAnimJoint301 = x3d.HAnimJoint()
HAnimJoint301.name = "r_hip"
HAnimJoint301.DEF = "hanim_r_hip"
HAnimJoint301.center = [-0.095,0.9171,0.0029]
HAnimJoint301.ulimit = [0,0,0]
HAnimJoint301.llimit = [0,0,0]
HAnimSegment302 = x3d.HAnimSegment()
HAnimSegment302.name = "r_thigh"
HAnimSegment302.DEF = "hanim_r_thigh"
Transform303 = x3d.Transform()
Transform303.translation = [-0.095,0.9171,0.0029]
Transform304 = x3d.Transform()
"""Empty Transform"""
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
"""from r_hip to r_knee vertices 2"""
ColorRGBA309 = x3d.ColorRGBA()
ColorRGBA309.USE = "HAnimSegmentLineColorRGBA"

LineSet307.color = ColorRGBA309

Shape306.geometry = LineSet307

HAnimSegment302.children.append(Shape306)
HAnimSite310 = x3d.HAnimSite()
HAnimSite310.name = "r_femoral_lateral_epicondyles"
HAnimSite310.DEF = "hanim_r_femoral_lateral_epicondyles"
HAnimSite310.translation = [-0.1421,0.4992,0.031]
TouchSensor311 = x3d.TouchSensor()
TouchSensor311.description = "HAnimSite 44 r_femoral_lateral_epicondyles"

HAnimSite310.children.append(TouchSensor311)
Shape312 = x3d.Shape()
Shape312.USE = "HAnimSiteShape"

HAnimSite310.children.append(Shape312)
Billboard313 = x3d.Billboard()
Shape314 = x3d.Shape()
Text315 = x3d.Text()
Text315.string = ["44"]
FontStyle316 = x3d.FontStyle()
FontStyle316.size = 0.035

Text315.fontStyle = FontStyle316

Shape314.geometry = Text315

Billboard313.children.append(Shape314)

HAnimSite310.children.append(Billboard313)

HAnimSegment302.children.append(HAnimSite310)
HAnimSite317 = x3d.HAnimSite()
HAnimSite317.name = "r_femoral_medial_epicondyles"
HAnimSite317.DEF = "hanim_r_femoral_medial_epicondyles"
HAnimSite317.translation = [-0.0221,0.5014,0.0289]
TouchSensor318 = x3d.TouchSensor()
TouchSensor318.description = "HAnimSite 43 r_femoral_medial_epicondyles"

HAnimSite317.children.append(TouchSensor318)
Shape319 = x3d.Shape()
Shape319.USE = "HAnimSiteShape"

HAnimSite317.children.append(Shape319)
Billboard320 = x3d.Billboard()
Shape321 = x3d.Shape()
Text322 = x3d.Text()
Text322.string = ["43"]
FontStyle323 = x3d.FontStyle()
FontStyle323.size = 0.035

Text322.fontStyle = FontStyle323

Shape321.geometry = Text322

Billboard320.children.append(Shape321)

HAnimSite317.children.append(Billboard320)

HAnimSegment302.children.append(HAnimSite317)
HAnimSite324 = x3d.HAnimSite()
HAnimSite324.name = "r_knee_crease"
HAnimSite324.DEF = "hanim_r_knee_crease"
HAnimSite324.translation = [-0.0825,0.4932,-0.0326]
TouchSensor325 = x3d.TouchSensor()
TouchSensor325.description = "HAnimSite 91 r_knee_crease"

HAnimSite324.children.append(TouchSensor325)
Shape326 = x3d.Shape()
Shape326.USE = "HAnimSiteShape"

HAnimSite324.children.append(Shape326)
Billboard327 = x3d.Billboard()
Shape328 = x3d.Shape()
Text329 = x3d.Text()
Text329.string = ["91"]
FontStyle330 = x3d.FontStyle()
FontStyle330.size = 0.035

Text329.fontStyle = FontStyle330

Shape328.geometry = Text329

Billboard327.children.append(Shape328)

HAnimSite324.children.append(Billboard327)

HAnimSegment302.children.append(HAnimSite324)
HAnimSite331 = x3d.HAnimSite()
HAnimSite331.name = "r_suprapatella"
HAnimSite331.DEF = "hanim_r_suprapatella"
TouchSensor332 = x3d.TouchSensor()
TouchSensor332.description = "HAnimSite 45 r_suprapatella"

HAnimSite331.children.append(TouchSensor332)
Shape333 = x3d.Shape()
Shape333.USE = "HAnimSiteShape"

HAnimSite331.children.append(Shape333)
Billboard334 = x3d.Billboard()
Shape335 = x3d.Shape()
Text336 = x3d.Text()
Text336.string = ["45"]
FontStyle337 = x3d.FontStyle()
FontStyle337.size = 0.035

Text336.fontStyle = FontStyle337

Shape335.geometry = Text336

Billboard334.children.append(Shape335)

HAnimSite331.children.append(Billboard334)

HAnimSegment302.children.append(HAnimSite331)

HAnimJoint301.children.append(HAnimSegment302)
HAnimJoint338 = x3d.HAnimJoint()
HAnimJoint338.name = "r_knee"
HAnimJoint338.DEF = "hanim_r_knee"
HAnimJoint338.center = [-0.0867,0.4913,0.0318]
HAnimJoint338.ulimit = [0,0,0]
HAnimJoint338.llimit = [0,0,0]
HAnimSegment339 = x3d.HAnimSegment()
HAnimSegment339.name = "r_calf"
HAnimSegment339.DEF = "hanim_r_calf"
Transform340 = x3d.Transform()
Transform340.translation = [-0.0867,0.4913,0.0318]
Transform341 = x3d.Transform()
"""Empty Transform"""
Shape342 = x3d.Shape()
Shape342.USE = "HAnimJointShape"

Transform341.children.append(Shape342)

Transform340.children.append(Transform341)

HAnimSegment339.children.append(Transform340)
Shape343 = x3d.Shape()
LineSet344 = x3d.LineSet()
LineSet344.vertexCount = [2]
Coordinate345 = x3d.Coordinate()

LineSet344.coord = Coordinate345
"""from r_knee to r_talocrural vertices 2"""
ColorRGBA346 = x3d.ColorRGBA()
ColorRGBA346.USE = "HAnimSegmentLineColorRGBA"

LineSet344.color = ColorRGBA346

Shape343.geometry = LineSet344

HAnimSegment339.children.append(Shape343)
HAnimSite347 = x3d.HAnimSite()
HAnimSite347.name = "r_lateral_malleolus"
HAnimSite347.DEF = "hanim_r_lateral_malleolus"
HAnimSite347.translation = [-0.1006,0.0658,-0.1075]
TouchSensor348 = x3d.TouchSensor()
TouchSensor348.description = "HAnimSite 53 r_lateral_malleolus"

HAnimSite347.children.append(TouchSensor348)
Shape349 = x3d.Shape()
Shape349.USE = "HAnimSiteShape"

HAnimSite347.children.append(Shape349)
Billboard350 = x3d.Billboard()
Shape351 = x3d.Shape()
Text352 = x3d.Text()
Text352.string = ["53"]
FontStyle353 = x3d.FontStyle()
FontStyle353.size = 0.035

Text352.fontStyle = FontStyle353

Shape351.geometry = Text352

Billboard350.children.append(Shape351)

HAnimSite347.children.append(Billboard350)

HAnimSegment339.children.append(HAnimSite347)
HAnimSite354 = x3d.HAnimSite()
HAnimSite354.name = "r_medial_malleolus"
HAnimSite354.DEF = "hanim_r_medial_malleolus"
HAnimSite354.translation = [-0.0591,0.076,-0.0928]
TouchSensor355 = x3d.TouchSensor()
TouchSensor355.description = "HAnimSite 52 r_medial_malleolus"

HAnimSite354.children.append(TouchSensor355)
Shape356 = x3d.Shape()
Shape356.USE = "HAnimSiteShape"

HAnimSite354.children.append(Shape356)
Billboard357 = x3d.Billboard()
Shape358 = x3d.Shape()
Text359 = x3d.Text()
Text359.string = ["52"]
FontStyle360 = x3d.FontStyle()
FontStyle360.size = 0.035

Text359.fontStyle = FontStyle360

Shape358.geometry = Text359

Billboard357.children.append(Shape358)

HAnimSite354.children.append(Billboard357)

HAnimSegment339.children.append(HAnimSite354)
HAnimSite361 = x3d.HAnimSite()
HAnimSite361.name = "r_tibiale"
HAnimSite361.DEF = "hanim_r_tibiale"
TouchSensor362 = x3d.TouchSensor()
TouchSensor362.description = "HAnimSite 51 r_tibiale"

HAnimSite361.children.append(TouchSensor362)
Shape363 = x3d.Shape()
Shape363.USE = "HAnimSiteShape"

HAnimSite361.children.append(Shape363)
Billboard364 = x3d.Billboard()
Shape365 = x3d.Shape()
Text366 = x3d.Text()
Text366.string = ["51"]
FontStyle367 = x3d.FontStyle()
FontStyle367.size = 0.035

Text366.fontStyle = FontStyle367

Shape365.geometry = Text366

Billboard364.children.append(Shape365)

HAnimSite361.children.append(Billboard364)

HAnimSegment339.children.append(HAnimSite361)

HAnimJoint338.children.append(HAnimSegment339)
HAnimJoint368 = x3d.HAnimJoint()
HAnimJoint368.name = "r_talocrural"
HAnimJoint368.DEF = "hanim_r_talocrural"
HAnimJoint368.center = [-0.0801,0.0712,-0.0766]
HAnimJoint368.ulimit = [0,0,0]
HAnimJoint368.llimit = [0,0,0]
HAnimSegment369 = x3d.HAnimSegment()
HAnimSegment369.name = "r_talus"
HAnimSegment369.DEF = "hanim_r_talus"
Transform370 = x3d.Transform()
Transform370.scale = [0.15,0.15,0.15]
Transform370.translation = [-0.05,0.06,-0.025]
Transform370.rotation = [1,0,0,-1.57]
"""Transform right foot"""
Transform371 = x3d.Transform()
"""Empty Transform right foot"""
Shape372 = x3d.Shape()
Shape372.USE = "HAnimJointShape"

Transform371.children.append(Shape372)

Transform370.children.append(Transform371)

HAnimSegment369.children.append(Transform370)
Shape373 = x3d.Shape()
LineSet374 = x3d.LineSet()
LineSet374.vertexCount = [2]
Coordinate375 = x3d.Coordinate()

LineSet374.coord = Coordinate375
"""from r_talocrural to r_tarsometatarsal_2 vertices 2"""
ColorRGBA376 = x3d.ColorRGBA()
ColorRGBA376.USE = "HAnimSegmentLineColorRGBA"

LineSet374.color = ColorRGBA376

Shape373.geometry = LineSet374

HAnimSegment369.children.append(Shape373)
HAnimSite377 = x3d.HAnimSite()
HAnimSite377.name = "r_calcaneus_posterior"
HAnimSite377.DEF = "hanim_r_calcaneus_posterior"
HAnimSite377.translation = [-0.0692,0.0297,-0.1221]
TouchSensor378 = x3d.TouchSensor()
TouchSensor378.description = "HAnimSite 62 r_calcaneus_posterior"

HAnimSite377.children.append(TouchSensor378)
Shape379 = x3d.Shape()
Shape379.USE = "HAnimSiteShape"

HAnimSite377.children.append(Shape379)
Billboard380 = x3d.Billboard()
Shape381 = x3d.Shape()
Text382 = x3d.Text()
Text382.string = ["62"]
FontStyle383 = x3d.FontStyle()
FontStyle383.size = 0.035

Text382.fontStyle = FontStyle383

Shape381.geometry = Text382

Billboard380.children.append(Shape381)

HAnimSite377.children.append(Billboard380)

HAnimSegment369.children.append(HAnimSite377)
HAnimSite384 = x3d.HAnimSite()
HAnimSite384.name = "r_sphyrion"
HAnimSite384.DEF = "hanim_r_sphyrion"
HAnimSite384.translation = [-0.0603,0.061,-0.1002]
TouchSensor385 = x3d.TouchSensor()
TouchSensor385.description = "HAnimSite 54 r_sphyrion"

HAnimSite384.children.append(TouchSensor385)
Shape386 = x3d.Shape()
Shape386.USE = "HAnimSiteShape"

HAnimSite384.children.append(Shape386)
Billboard387 = x3d.Billboard()
Shape388 = x3d.Shape()
Text389 = x3d.Text()
Text389.string = ["54"]
FontStyle390 = x3d.FontStyle()
FontStyle390.size = 0.035

Text389.fontStyle = FontStyle390

Shape388.geometry = Text389

Billboard387.children.append(Shape388)

HAnimSite384.children.append(Billboard387)

HAnimSegment369.children.append(HAnimSite384)

HAnimJoint368.children.append(HAnimSegment369)
HAnimJoint391 = x3d.HAnimJoint()
HAnimJoint391.name = "r_tarsometatarsal_2"
HAnimJoint391.DEF = "hanim_r_tarsometatarsal_2"
HAnimJoint391.center = [-0.08,0.0175,-0.0608]
HAnimJoint391.ulimit = [0,0,0]
HAnimJoint391.llimit = [0,0,0]
HAnimSegment392 = x3d.HAnimSegment()
HAnimSegment392.name = "r_metatarsal_2"
HAnimSegment392.DEF = "hanim_r_metatarsal_2"
Transform393 = x3d.Transform()
Transform393.translation = [-0.08,0.0175,-0.0608]
Transform394 = x3d.Transform()
"""Empty Transform"""
Shape395 = x3d.Shape()
Shape395.USE = "HAnimJointShape"

Transform394.children.append(Shape395)

Transform393.children.append(Transform394)

HAnimSegment392.children.append(Transform393)
Shape396 = x3d.Shape()
LineSet397 = x3d.LineSet()
LineSet397.vertexCount = [2]
Coordinate398 = x3d.Coordinate()

LineSet397.coord = Coordinate398
"""from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2"""
ColorRGBA399 = x3d.ColorRGBA()
ColorRGBA399.USE = "HAnimSegmentLineColorRGBA"

LineSet397.color = ColorRGBA399

Shape396.geometry = LineSet397

HAnimSegment392.children.append(Shape396)

HAnimJoint391.children.append(HAnimSegment392)
HAnimJoint400 = x3d.HAnimJoint()
HAnimJoint400.name = "r_metatarsophalangeal_2"
HAnimJoint400.DEF = "hanim_r_metatarsophalangeal_2"
HAnimJoint400.center = [-0.0823,0.0064,-0.004]
HAnimJoint400.ulimit = [0,0,0]
HAnimJoint400.llimit = [0,0,0]
HAnimSegment401 = x3d.HAnimSegment()
HAnimSegment401.name = "r_tarsal_proximal_phalanx_2"
HAnimSegment401.DEF = "hanim_r_tarsal_proximal_phalanx_2"
Transform402 = x3d.Transform()
Transform402.translation = [-0.0823,0.0064,-0.004]
Transform403 = x3d.Transform()
"""Empty Transform"""
Shape404 = x3d.Shape()
Shape404.USE = "HAnimJointShape"

Transform403.children.append(Shape404)

Transform402.children.append(Transform403)

HAnimSegment401.children.append(Transform402)
Shape405 = x3d.Shape()
LineSet406 = x3d.LineSet()
LineSet406.vertexCount = [2]
Coordinate407 = x3d.Coordinate()

LineSet406.coord = Coordinate407
"""from r_metatarsophalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2"""
ColorRGBA408 = x3d.ColorRGBA()
ColorRGBA408.USE = "HAnimSegmentLineColorRGBA"

LineSet406.color = ColorRGBA408

Shape405.geometry = LineSet406

HAnimSegment401.children.append(Shape405)
HAnimSite409 = x3d.HAnimSite()
HAnimSite409.name = "r_metatarsal_phalanx_1"
HAnimSite409.DEF = "hanim_r_metatarsal_phalanx_1"
TouchSensor410 = x3d.TouchSensor()
TouchSensor410.description = "HAnimSite 59 r_metatarsal_phalanx_1"

HAnimSite409.children.append(TouchSensor410)
Shape411 = x3d.Shape()
Shape411.USE = "HAnimSiteShape"

HAnimSite409.children.append(Shape411)
Billboard412 = x3d.Billboard()
Shape413 = x3d.Shape()
Text414 = x3d.Text()
Text414.string = ["59"]
FontStyle415 = x3d.FontStyle()
FontStyle415.size = 0.035

Text414.fontStyle = FontStyle415

Shape413.geometry = Text414

Billboard412.children.append(Shape413)

HAnimSite409.children.append(Billboard412)

HAnimSegment401.children.append(HAnimSite409)
HAnimSite416 = x3d.HAnimSite()
HAnimSite416.name = "r_metatarsal_phalanx_5"
HAnimSite416.DEF = "hanim_r_metatarsal_phalanx_5"
TouchSensor417 = x3d.TouchSensor()
TouchSensor417.description = "HAnimSite 60 r_metatarsal_phalanx_5"

HAnimSite416.children.append(TouchSensor417)
Shape418 = x3d.Shape()
Shape418.USE = "HAnimSiteShape"

HAnimSite416.children.append(Shape418)
Billboard419 = x3d.Billboard()
Shape420 = x3d.Shape()
Text421 = x3d.Text()
Text421.string = ["60"]
FontStyle422 = x3d.FontStyle()
FontStyle422.size = 0.035

Text421.fontStyle = FontStyle422

Shape420.geometry = Text421

Billboard419.children.append(Shape420)

HAnimSite416.children.append(Billboard419)

HAnimSegment401.children.append(HAnimSite416)
HAnimSite423 = x3d.HAnimSite()
HAnimSite423.name = "r_tarsal_distal_phalanx_1_tip"
HAnimSite423.DEF = "hanim_r_tarsal_distal_phalanx_1_tip"
TouchSensor424 = x3d.TouchSensor()
TouchSensor424.description = "HAnimSite r_tarsal_distal_phalanx_1_tip"

HAnimSite423.children.append(TouchSensor424)
Shape425 = x3d.Shape()
Shape425.USE = "HAnimSiteShape"

HAnimSite423.children.append(Shape425)
Billboard426 = x3d.Billboard()
Shape427 = x3d.Shape()
Text428 = x3d.Text()
Text428.string = [""]
FontStyle429 = x3d.FontStyle()
FontStyle429.size = 0.035

Text428.fontStyle = FontStyle429

Shape427.geometry = Text428

Billboard426.children.append(Shape427)

HAnimSite423.children.append(Billboard426)

HAnimSegment401.children.append(HAnimSite423)
HAnimSite430 = x3d.HAnimSite()
HAnimSite430.name = "r_tarsal_distal_phalanx_2_tip"
HAnimSite430.DEF = "hanim_r_tarsal_distal_phalanx_2_tip"
HAnimSite430.translation = [-0.0883,0.0134,0.1383]
TouchSensor431 = x3d.TouchSensor()
TouchSensor431.description = "HAnimSite r_tarsal_distal_phalanx_2_tip"

HAnimSite430.children.append(TouchSensor431)
Shape432 = x3d.Shape()
Shape432.USE = "HAnimSiteShape"

HAnimSite430.children.append(Shape432)
Billboard433 = x3d.Billboard()
Shape434 = x3d.Shape()
Text435 = x3d.Text()
Text435.string = [""]
FontStyle436 = x3d.FontStyle()
FontStyle436.size = 0.035

Text435.fontStyle = FontStyle436

Shape434.geometry = Text435

Billboard433.children.append(Shape434)

HAnimSite430.children.append(Billboard433)

HAnimSegment401.children.append(HAnimSite430)
HAnimSite437 = x3d.HAnimSite()
HAnimSite437.name = "r_tarsal_distal_phalanx_3_tip"
HAnimSite437.DEF = "hanim_r_tarsal_distal_phalanx_3_tip"
TouchSensor438 = x3d.TouchSensor()
TouchSensor438.description = "HAnimSite r_tarsal_distal_phalanx_3_tip"

HAnimSite437.children.append(TouchSensor438)
Shape439 = x3d.Shape()
Shape439.USE = "HAnimSiteShape"

HAnimSite437.children.append(Shape439)
Billboard440 = x3d.Billboard()
Shape441 = x3d.Shape()
Text442 = x3d.Text()
Text442.string = [""]
FontStyle443 = x3d.FontStyle()
FontStyle443.size = 0.035

Text442.fontStyle = FontStyle443

Shape441.geometry = Text442

Billboard440.children.append(Shape441)

HAnimSite437.children.append(Billboard440)

HAnimSegment401.children.append(HAnimSite437)
HAnimSite444 = x3d.HAnimSite()
HAnimSite444.name = "r_tarsal_distal_phalanx_4_tip"
HAnimSite444.DEF = "hanim_r_tarsal_distal_phalanx_4_tip"
TouchSensor445 = x3d.TouchSensor()
TouchSensor445.description = "HAnimSite r_tarsal_distal_phalanx_4_tip"

HAnimSite444.children.append(TouchSensor445)
Shape446 = x3d.Shape()
Shape446.USE = "HAnimSiteShape"

HAnimSite444.children.append(Shape446)
Billboard447 = x3d.Billboard()
Shape448 = x3d.Shape()
Text449 = x3d.Text()
Text449.string = [""]
FontStyle450 = x3d.FontStyle()
FontStyle450.size = 0.035

Text449.fontStyle = FontStyle450

Shape448.geometry = Text449

Billboard447.children.append(Shape448)

HAnimSite444.children.append(Billboard447)

HAnimSegment401.children.append(HAnimSite444)
HAnimSite451 = x3d.HAnimSite()
HAnimSite451.name = "r_tarsal_distal_phalanx_5_tip"
HAnimSite451.DEF = "hanim_r_tarsal_distal_phalanx_5_tip"
TouchSensor452 = x3d.TouchSensor()
TouchSensor452.description = "HAnimSite r_tarsal_distal_phalanx_5_tip"

HAnimSite451.children.append(TouchSensor452)
Shape453 = x3d.Shape()
Shape453.USE = "HAnimSiteShape"

HAnimSite451.children.append(Shape453)
Billboard454 = x3d.Billboard()
Shape455 = x3d.Shape()
Text456 = x3d.Text()
Text456.string = [""]
FontStyle457 = x3d.FontStyle()
FontStyle457.size = 0.035

Text456.fontStyle = FontStyle457

Shape455.geometry = Text456

Billboard454.children.append(Shape455)

HAnimSite451.children.append(Billboard454)

HAnimSegment401.children.append(HAnimSite451)

HAnimJoint400.children.append(HAnimSegment401)
HAnimJoint458 = x3d.HAnimJoint()
HAnimJoint458.name = "r_tarsal_distal_interphalangeal_2"
HAnimJoint458.DEF = "hanim_r_tarsal_distal_interphalangeal_2"
HAnimJoint458.center = [-0.0841,0.0013,0.0216]
HAnimJoint458.ulimit = [0,0,0]
HAnimJoint458.llimit = [0,0,0]

HAnimJoint400.children.append(HAnimJoint458)

HAnimJoint391.children.append(HAnimJoint400)

HAnimJoint368.children.append(HAnimJoint391)

HAnimJoint338.children.append(HAnimJoint368)

HAnimJoint301.children.append(HAnimJoint338)

HAnimJoint60.children.append(HAnimJoint301)

HAnimJoint47.children.append(HAnimJoint60)
HAnimJoint459 = x3d.HAnimJoint()
HAnimJoint459.name = "vl5"
HAnimJoint459.DEF = "hanim_vl5"
HAnimJoint459.center = [0.0028,1.0568,-0.0776]
HAnimJoint459.ulimit = [0,0,0]
HAnimJoint459.llimit = [0,0,0]
HAnimSegment460 = x3d.HAnimSegment()
HAnimSegment460.name = "l5"
HAnimSegment460.DEF = "hanim_l5"
Transform461 = x3d.Transform()
Transform461.translation = [0.0028,1.0568,-0.0776]
Transform462 = x3d.Transform()
"""Empty Transform"""
Shape463 = x3d.Shape()
Shape463.USE = "HAnimJointShape"

Transform462.children.append(Shape463)

Transform461.children.append(Transform462)

HAnimSegment460.children.append(Transform461)
Shape464 = x3d.Shape()
LineSet465 = x3d.LineSet()
LineSet465.vertexCount = [2]
Coordinate466 = x3d.Coordinate()

LineSet465.coord = Coordinate466
"""from vl5 to vl3 vertices 2"""
ColorRGBA467 = x3d.ColorRGBA()
ColorRGBA467.USE = "HAnimSegmentLineColorRGBA"

LineSet465.color = ColorRGBA467

Shape464.geometry = LineSet465

HAnimSegment460.children.append(Shape464)
HAnimSite468 = x3d.HAnimSite()
HAnimSite468.name = "navel"
HAnimSite468.DEF = "hanim_navel"
HAnimSite468.translation = [0.0069,1.0966,0.1017]
TouchSensor469 = x3d.TouchSensor()
TouchSensor469.description = "HAnimSite 84 navel"

HAnimSite468.children.append(TouchSensor469)
Shape470 = x3d.Shape()
Shape470.USE = "HAnimSiteShape"

HAnimSite468.children.append(Shape470)
Billboard471 = x3d.Billboard()
Shape472 = x3d.Shape()
Text473 = x3d.Text()
Text473.string = ["84"]
FontStyle474 = x3d.FontStyle()
FontStyle474.size = 0.035

Text473.fontStyle = FontStyle474

Shape472.geometry = Text473

Billboard471.children.append(Shape472)

HAnimSite468.children.append(Billboard471)

HAnimSegment460.children.append(HAnimSite468)
HAnimSite475 = x3d.HAnimSite()
HAnimSite475.name = "waist_preferred_anterior"
HAnimSite475.DEF = "hanim_waist_preferred_anterior"
TouchSensor476 = x3d.TouchSensor()
TouchSensor476.description = "HAnimSite 26 waist_preferred_anterior"

HAnimSite475.children.append(TouchSensor476)
Shape477 = x3d.Shape()
Shape477.USE = "HAnimSiteShape"

HAnimSite475.children.append(Shape477)
Billboard478 = x3d.Billboard()
Shape479 = x3d.Shape()
Text480 = x3d.Text()
Text480.string = ["26"]
FontStyle481 = x3d.FontStyle()
FontStyle481.size = 0.035

Text480.fontStyle = FontStyle481

Shape479.geometry = Text480

Billboard478.children.append(Shape479)

HAnimSite475.children.append(Billboard478)

HAnimSegment460.children.append(HAnimSite475)
HAnimSite482 = x3d.HAnimSite()
HAnimSite482.name = "waist_preferred_posterior"
HAnimSite482.DEF = "hanim_waist_preferred_posterior"
HAnimSite482.translation = [0.29,1.0915,-0.1091]
TouchSensor483 = x3d.TouchSensor()
TouchSensor483.description = "HAnimSite 27 waist_preferred_posterior"

HAnimSite482.children.append(TouchSensor483)
Shape484 = x3d.Shape()
Shape484.USE = "HAnimSiteShape"

HAnimSite482.children.append(Shape484)
Billboard485 = x3d.Billboard()
Shape486 = x3d.Shape()
Text487 = x3d.Text()
Text487.string = ["27"]
FontStyle488 = x3d.FontStyle()
FontStyle488.size = 0.035

Text487.fontStyle = FontStyle488

Shape486.geometry = Text487

Billboard485.children.append(Shape486)

HAnimSite482.children.append(Billboard485)

HAnimSegment460.children.append(HAnimSite482)

HAnimJoint459.children.append(HAnimSegment460)
HAnimJoint489 = x3d.HAnimJoint()
HAnimJoint489.name = "vl3"
HAnimJoint489.DEF = "hanim_vl3"
HAnimJoint489.center = [0.0041,1.1276,-0.0796]
HAnimJoint489.ulimit = [0,0,0]
HAnimJoint489.llimit = [0,0,0]
HAnimSegment490 = x3d.HAnimSegment()
HAnimSegment490.name = "l3"
HAnimSegment490.DEF = "hanim_l3"
Transform491 = x3d.Transform()
Transform491.translation = [0.0041,1.1276,-0.0796]
Transform492 = x3d.Transform()
"""Empty Transform"""
Shape493 = x3d.Shape()
Shape493.USE = "HAnimJointShape"

Transform492.children.append(Shape493)

Transform491.children.append(Transform492)

HAnimSegment490.children.append(Transform491)
Shape494 = x3d.Shape()
LineSet495 = x3d.LineSet()
LineSet495.vertexCount = [2]
Coordinate496 = x3d.Coordinate()

LineSet495.coord = Coordinate496
"""from vl3 to vl1 vertices 2"""
ColorRGBA497 = x3d.ColorRGBA()
ColorRGBA497.USE = "HAnimSegmentLineColorRGBA"

LineSet495.color = ColorRGBA497

Shape494.geometry = LineSet495

HAnimSegment490.children.append(Shape494)
HAnimSite498 = x3d.HAnimSite()
HAnimSite498.name = "l_rib10"
HAnimSite498.DEF = "hanim_l_rib10"
HAnimSite498.translation = [0.0871,1.1925,0.0992]
TouchSensor499 = x3d.TouchSensor()
TouchSensor499.description = "HAnimSite 28 l_rib10"

HAnimSite498.children.append(TouchSensor499)
Shape500 = x3d.Shape()
Shape500.USE = "HAnimSiteShape"

HAnimSite498.children.append(Shape500)
Billboard501 = x3d.Billboard()
Shape502 = x3d.Shape()
Text503 = x3d.Text()
Text503.string = ["28"]
FontStyle504 = x3d.FontStyle()
FontStyle504.size = 0.035

Text503.fontStyle = FontStyle504

Shape502.geometry = Text503

Billboard501.children.append(Shape502)

HAnimSite498.children.append(Billboard501)

HAnimSegment490.children.append(HAnimSite498)
HAnimSite505 = x3d.HAnimSite()
HAnimSite505.name = "r_rib10"
HAnimSite505.DEF = "hanim_r_rib10"
HAnimSite505.translation = [-0.0711,1.1941,0.1016]
TouchSensor506 = x3d.TouchSensor()
TouchSensor506.description = "HAnimSite 30 r_rib10"

HAnimSite505.children.append(TouchSensor506)
Shape507 = x3d.Shape()
Shape507.USE = "HAnimSiteShape"

HAnimSite505.children.append(Shape507)
Billboard508 = x3d.Billboard()
Shape509 = x3d.Shape()
Text510 = x3d.Text()
Text510.string = ["30"]
FontStyle511 = x3d.FontStyle()
FontStyle511.size = 0.035

Text510.fontStyle = FontStyle511

Shape509.geometry = Text510

Billboard508.children.append(Shape509)

HAnimSite505.children.append(Billboard508)

HAnimSegment490.children.append(HAnimSite505)
HAnimSite512 = x3d.HAnimSite()
HAnimSite512.name = "spine_1_middle_back"
HAnimSite512.DEF = "hanim_spine_1_middle_back"
TouchSensor513 = x3d.TouchSensor()
TouchSensor513.description = "HAnimSite 24 spine_1_middle_back"

HAnimSite512.children.append(TouchSensor513)
Shape514 = x3d.Shape()
Shape514.USE = "HAnimSiteShape"

HAnimSite512.children.append(Shape514)
Billboard515 = x3d.Billboard()
Shape516 = x3d.Shape()
Text517 = x3d.Text()
Text517.string = ["24"]
FontStyle518 = x3d.FontStyle()
FontStyle518.size = 0.035

Text517.fontStyle = FontStyle518

Shape516.geometry = Text517

Billboard515.children.append(Shape516)

HAnimSite512.children.append(Billboard515)

HAnimSegment490.children.append(HAnimSite512)
HAnimSite519 = x3d.HAnimSite()
HAnimSite519.name = "spine_2_middle_back"
HAnimSite519.DEF = "hanim_spine_2_middle_back"
TouchSensor520 = x3d.TouchSensor()
TouchSensor520.description = "HAnimSite spine_2_middle_back"

HAnimSite519.children.append(TouchSensor520)
Shape521 = x3d.Shape()
Shape521.USE = "HAnimSiteShape"

HAnimSite519.children.append(Shape521)
Billboard522 = x3d.Billboard()
Shape523 = x3d.Shape()
Text524 = x3d.Text()
Text524.string = [""]
FontStyle525 = x3d.FontStyle()
FontStyle525.size = 0.035

Text524.fontStyle = FontStyle525

Shape523.geometry = Text524

Billboard522.children.append(Shape523)

HAnimSite519.children.append(Billboard522)

HAnimSegment490.children.append(HAnimSite519)

HAnimJoint489.children.append(HAnimSegment490)
HAnimJoint526 = x3d.HAnimJoint()
HAnimJoint526.name = "vl1"
HAnimJoint526.DEF = "hanim_vl1"
HAnimJoint526.center = [0.0048,1.1912,-0.0805]
HAnimJoint526.ulimit = [0,0,0]
HAnimJoint526.llimit = [0,0,0]
HAnimSegment527 = x3d.HAnimSegment()
HAnimSegment527.name = "l1"
HAnimSegment527.DEF = "hanim_l1"
Transform528 = x3d.Transform()
Transform528.translation = [0.0048,1.1912,-0.0805]
Transform529 = x3d.Transform()
"""Empty Transform"""
Shape530 = x3d.Shape()
Shape530.USE = "HAnimJointShape"

Transform529.children.append(Shape530)

Transform528.children.append(Transform529)

HAnimSegment527.children.append(Transform528)
Shape531 = x3d.Shape()
LineSet532 = x3d.LineSet()
LineSet532.vertexCount = [2]
Coordinate533 = x3d.Coordinate()

LineSet532.coord = Coordinate533
"""from vl1 to vt10 vertices 2"""
ColorRGBA534 = x3d.ColorRGBA()
ColorRGBA534.USE = "HAnimSegmentLineColorRGBA"

LineSet532.color = ColorRGBA534

Shape531.geometry = LineSet532

HAnimSegment527.children.append(Shape531)

HAnimJoint526.children.append(HAnimSegment527)
HAnimJoint535 = x3d.HAnimJoint()
HAnimJoint535.name = "vt10"
HAnimJoint535.DEF = "hanim_vt10"
HAnimJoint535.center = [0.0056,1.2848,-0.0822]
HAnimJoint535.ulimit = [0,0,0]
HAnimJoint535.llimit = [0,0,0]
HAnimSegment536 = x3d.HAnimSegment()
HAnimSegment536.name = "t10"
HAnimSegment536.DEF = "hanim_t10"
Transform537 = x3d.Transform()
Transform537.translation = [0.0056,1.2848,-0.0822]
Transform538 = x3d.Transform()
"""Empty Transform"""
Shape539 = x3d.Shape()
Shape539.USE = "HAnimJointShape"

Transform538.children.append(Shape539)

Transform537.children.append(Transform538)

HAnimSegment536.children.append(Transform537)
Shape540 = x3d.Shape()
LineSet541 = x3d.LineSet()
LineSet541.vertexCount = [2]
Coordinate542 = x3d.Coordinate()

LineSet541.coord = Coordinate542
"""from vt10 to vt6 vertices 2"""
ColorRGBA543 = x3d.ColorRGBA()
ColorRGBA543.USE = "HAnimSegmentLineColorRGBA"

LineSet541.color = ColorRGBA543

Shape540.geometry = LineSet541

HAnimSegment536.children.append(Shape540)
HAnimSite544 = x3d.HAnimSite()
HAnimSite544.name = "l_thelion"
HAnimSite544.DEF = "hanim_l_thelion"
HAnimSite544.translation = [0.0918,1.3382,0.1192]
TouchSensor545 = x3d.TouchSensor()
TouchSensor545.description = "HAnimSite 29 l_thelion"

HAnimSite544.children.append(TouchSensor545)
Shape546 = x3d.Shape()
Shape546.USE = "HAnimSiteShape"

HAnimSite544.children.append(Shape546)
Billboard547 = x3d.Billboard()
Shape548 = x3d.Shape()
Text549 = x3d.Text()
Text549.string = ["29"]
FontStyle550 = x3d.FontStyle()
FontStyle550.size = 0.035

Text549.fontStyle = FontStyle550

Shape548.geometry = Text549

Billboard547.children.append(Shape548)

HAnimSite544.children.append(Billboard547)

HAnimSegment536.children.append(HAnimSite544)
HAnimSite551 = x3d.HAnimSite()
HAnimSite551.name = "r_thelion"
HAnimSite551.DEF = "hanim_r_thelion"
HAnimSite551.translation = [-0.0736,1.3385,0.1217]
TouchSensor552 = x3d.TouchSensor()
TouchSensor552.description = "HAnimSite 31 r_thelion"

HAnimSite551.children.append(TouchSensor552)
Shape553 = x3d.Shape()
Shape553.USE = "HAnimSiteShape"

HAnimSite551.children.append(Shape553)
Billboard554 = x3d.Billboard()
Shape555 = x3d.Shape()
Text556 = x3d.Text()
Text556.string = ["31"]
FontStyle557 = x3d.FontStyle()
FontStyle557.size = 0.035

Text556.fontStyle = FontStyle557

Shape555.geometry = Text556

Billboard554.children.append(Shape555)

HAnimSite551.children.append(Billboard554)

HAnimSegment536.children.append(HAnimSite551)
HAnimSite558 = x3d.HAnimSite()
HAnimSite558.name = "substernale"
HAnimSite558.DEF = "hanim_substernale"
HAnimSite558.translation = [0.0085,1.2995,0.1147]
TouchSensor559 = x3d.TouchSensor()
TouchSensor559.description = "HAnimSite 13 substernale"

HAnimSite558.children.append(TouchSensor559)
Shape560 = x3d.Shape()
Shape560.USE = "HAnimSiteShape"

HAnimSite558.children.append(Shape560)
Billboard561 = x3d.Billboard()
Shape562 = x3d.Shape()
Text563 = x3d.Text()
Text563.string = ["13"]
FontStyle564 = x3d.FontStyle()
FontStyle564.size = 0.035

Text563.fontStyle = FontStyle564

Shape562.geometry = Text563

Billboard561.children.append(Shape562)

HAnimSite558.children.append(Billboard561)

HAnimSegment536.children.append(HAnimSite558)

HAnimJoint535.children.append(HAnimSegment536)
HAnimJoint565 = x3d.HAnimJoint()
HAnimJoint565.name = "vt6"
HAnimJoint565.DEF = "hanim_vt6"
HAnimJoint565.center = [0.0059,1.3866,-0.08]
HAnimJoint565.ulimit = [0,0,0]
HAnimJoint565.llimit = [0,0,0]
HAnimSegment566 = x3d.HAnimSegment()
HAnimSegment566.name = "t6"
HAnimSegment566.DEF = "hanim_t6"
Transform567 = x3d.Transform()
Transform567.translation = [0.0059,1.3866,-0.08]
Transform568 = x3d.Transform()
"""Empty Transform"""
Shape569 = x3d.Shape()
Shape569.USE = "HAnimJointShape"

Transform568.children.append(Shape569)

Transform567.children.append(Transform568)

HAnimSegment566.children.append(Transform567)
Shape570 = x3d.Shape()
LineSet571 = x3d.LineSet()
LineSet571.vertexCount = [2]
Coordinate572 = x3d.Coordinate()

LineSet571.coord = Coordinate572
"""from vt6 to vt1 vertices 2"""
ColorRGBA573 = x3d.ColorRGBA()
ColorRGBA573.USE = "HAnimSegmentLineColorRGBA"

LineSet571.color = ColorRGBA573

Shape570.geometry = LineSet571

HAnimSegment566.children.append(Shape570)
HAnimSite574 = x3d.HAnimSite()
HAnimSite574.name = "l_chest_midsagittal_plane"
HAnimSite574.DEF = "hanim_l_chest_midsagittal_plane"
TouchSensor575 = x3d.TouchSensor()
TouchSensor575.description = "HAnimSite 94 l_chest_midsagittal_plane"

HAnimSite574.children.append(TouchSensor575)
Shape576 = x3d.Shape()
Shape576.USE = "HAnimSiteShape"

HAnimSite574.children.append(Shape576)
Billboard577 = x3d.Billboard()
Shape578 = x3d.Shape()
Text579 = x3d.Text()
Text579.string = ["94"]
FontStyle580 = x3d.FontStyle()
FontStyle580.size = 0.035

Text579.fontStyle = FontStyle580

Shape578.geometry = Text579

Billboard577.children.append(Shape578)

HAnimSite574.children.append(Billboard577)

HAnimSegment566.children.append(HAnimSite574)
HAnimSite581 = x3d.HAnimSite()
HAnimSite581.name = "mesosternale"
HAnimSite581.DEF = "hanim_mesosternale"
TouchSensor582 = x3d.TouchSensor()
TouchSensor582.description = "HAnimSite 88 mesosternale"

HAnimSite581.children.append(TouchSensor582)
Shape583 = x3d.Shape()
Shape583.USE = "HAnimSiteShape"

HAnimSite581.children.append(Shape583)
Billboard584 = x3d.Billboard()
Shape585 = x3d.Shape()
Text586 = x3d.Text()
Text586.string = ["88"]
FontStyle587 = x3d.FontStyle()
FontStyle587.size = 0.035

Text586.fontStyle = FontStyle587

Shape585.geometry = Text586

Billboard584.children.append(Shape585)

HAnimSite581.children.append(Billboard584)

HAnimSegment566.children.append(HAnimSite581)
HAnimSite588 = x3d.HAnimSite()
HAnimSite588.name = "r_chest_midsagittal_plane"
HAnimSite588.DEF = "hanim_r_chest_midsagittal_plane"
TouchSensor589 = x3d.TouchSensor()
TouchSensor589.description = "HAnimSite 95 r_chest_midsagittal_plane"

HAnimSite588.children.append(TouchSensor589)
Shape590 = x3d.Shape()
Shape590.USE = "HAnimSiteShape"

HAnimSite588.children.append(Shape590)
Billboard591 = x3d.Billboard()
Shape592 = x3d.Shape()
Text593 = x3d.Text()
Text593.string = ["95"]
FontStyle594 = x3d.FontStyle()
FontStyle594.size = 0.035

Text593.fontStyle = FontStyle594

Shape592.geometry = Text593

Billboard591.children.append(Shape592)

HAnimSite588.children.append(Billboard591)

HAnimSegment566.children.append(HAnimSite588)
HAnimSite595 = x3d.HAnimSite()
HAnimSite595.name = "rear_center_midsagittal_plane"
HAnimSite595.DEF = "hanim_rear_center_midsagittal_plane"
TouchSensor596 = x3d.TouchSensor()
TouchSensor596.description = "HAnimSite 92 rear_center_midsagittal_plane"

HAnimSite595.children.append(TouchSensor596)
Shape597 = x3d.Shape()
Shape597.USE = "HAnimSiteShape"

HAnimSite595.children.append(Shape597)
Billboard598 = x3d.Billboard()
Shape599 = x3d.Shape()
Text600 = x3d.Text()
Text600.string = ["92"]
FontStyle601 = x3d.FontStyle()
FontStyle601.size = 0.035

Text600.fontStyle = FontStyle601

Shape599.geometry = Text600

Billboard598.children.append(Shape599)

HAnimSite595.children.append(Billboard598)

HAnimSegment566.children.append(HAnimSite595)

HAnimJoint565.children.append(HAnimSegment566)
HAnimJoint602 = x3d.HAnimJoint()
HAnimJoint602.name = "vt1"
HAnimJoint602.DEF = "hanim_vt1"
HAnimJoint602.center = [0.0065,1.4951,-0.0387]
HAnimJoint602.ulimit = [0,0,0]
HAnimJoint602.llimit = [0,0,0]
HAnimSegment603 = x3d.HAnimSegment()
HAnimSegment603.name = "t1"
HAnimSegment603.DEF = "hanim_t1"
Transform604 = x3d.Transform()
Transform604.translation = [0.0065,1.4951,-0.0387]
Transform605 = x3d.Transform()
"""Empty Transform"""
Shape606 = x3d.Shape()
Shape606.USE = "HAnimJointShape"

Transform605.children.append(Shape606)

Transform604.children.append(Transform605)

HAnimSegment603.children.append(Transform604)
Shape607 = x3d.Shape()
LineSet608 = x3d.LineSet()
LineSet608.vertexCount = [2]
Coordinate609 = x3d.Coordinate()

LineSet608.coord = Coordinate609
"""from vt1 to vc4 vertices 2"""
ColorRGBA610 = x3d.ColorRGBA()
ColorRGBA610.USE = "HAnimSegmentLineColorRGBA"

LineSet608.color = ColorRGBA610

Shape607.geometry = LineSet608

HAnimSegment603.children.append(Shape607)
HAnimSite611 = x3d.HAnimSite()
HAnimSite611.name = "cervicale"
HAnimSite611.DEF = "hanim_cervicale"
HAnimSite611.translation = [0.0064,1.52,-0.0815]
TouchSensor612 = x3d.TouchSensor()
TouchSensor612.description = "HAnimSite 10 cervicale"

HAnimSite611.children.append(TouchSensor612)
Shape613 = x3d.Shape()
Shape613.USE = "HAnimSiteShape"

HAnimSite611.children.append(Shape613)
Billboard614 = x3d.Billboard()
Shape615 = x3d.Shape()
Text616 = x3d.Text()
Text616.string = ["10"]
FontStyle617 = x3d.FontStyle()
FontStyle617.size = 0.035

Text616.fontStyle = FontStyle617

Shape615.geometry = Text616

Billboard614.children.append(Shape615)

HAnimSite611.children.append(Billboard614)

HAnimSegment603.children.append(HAnimSite611)
HAnimSite618 = x3d.HAnimSite()
HAnimSite618.name = "l_neck_base"
HAnimSite618.DEF = "hanim_l_neck_base"
HAnimSite618.translation = [0.0646,1.5141,-0.038]
TouchSensor619 = x3d.TouchSensor()
TouchSensor619.description = "HAnimSite 82 l_neck_base"

HAnimSite618.children.append(TouchSensor619)
Shape620 = x3d.Shape()
Shape620.USE = "HAnimSiteShape"

HAnimSite618.children.append(Shape620)
Billboard621 = x3d.Billboard()
Shape622 = x3d.Shape()
Text623 = x3d.Text()
Text623.string = ["82"]
FontStyle624 = x3d.FontStyle()
FontStyle624.size = 0.035

Text623.fontStyle = FontStyle624

Shape622.geometry = Text623

Billboard621.children.append(Shape622)

HAnimSite618.children.append(Billboard621)

HAnimSegment603.children.append(HAnimSite618)
HAnimSite625 = x3d.HAnimSite()
HAnimSite625.name = "r_neck_base"
HAnimSite625.DEF = "hanim_r_neck_base"
HAnimSite625.translation = [-0.0419,1.5149,-0.022]
TouchSensor626 = x3d.TouchSensor()
TouchSensor626.description = "HAnimSite 83 r_neck_base"

HAnimSite625.children.append(TouchSensor626)
Shape627 = x3d.Shape()
Shape627.USE = "HAnimSiteShape"

HAnimSite625.children.append(Shape627)
Billboard628 = x3d.Billboard()
Shape629 = x3d.Shape()
Text630 = x3d.Text()
Text630.string = ["83"]
FontStyle631 = x3d.FontStyle()
FontStyle631.size = 0.035

Text630.fontStyle = FontStyle631

Shape629.geometry = Text630

Billboard628.children.append(Shape629)

HAnimSite625.children.append(Billboard628)

HAnimSegment603.children.append(HAnimSite625)
HAnimSite632 = x3d.HAnimSite()
HAnimSite632.name = "suprasternale"
HAnimSite632.DEF = "hanim_suprasternale"
HAnimSite632.translation = [0.0084,1.4714,0.0551]
TouchSensor633 = x3d.TouchSensor()
TouchSensor633.description = "HAnimSite 12 suprasternale"

HAnimSite632.children.append(TouchSensor633)
Shape634 = x3d.Shape()
Shape634.USE = "HAnimSiteShape"

HAnimSite632.children.append(Shape634)
Billboard635 = x3d.Billboard()
Shape636 = x3d.Shape()
Text637 = x3d.Text()
Text637.string = ["12"]
FontStyle638 = x3d.FontStyle()
FontStyle638.size = 0.035

Text637.fontStyle = FontStyle638

Shape636.geometry = Text637

Billboard635.children.append(Shape636)

HAnimSite632.children.append(Billboard635)

HAnimSegment603.children.append(HAnimSite632)
Shape639 = x3d.Shape()
LineSet640 = x3d.LineSet()
LineSet640.vertexCount = [2]
Coordinate641 = x3d.Coordinate()

LineSet640.coord = Coordinate641
"""from vt1 to l_sternoclavicular vertices 2"""
ColorRGBA642 = x3d.ColorRGBA()
ColorRGBA642.USE = "HAnimSegmentLineColorRGBA"

LineSet640.color = ColorRGBA642

Shape639.geometry = LineSet640

HAnimSegment603.children.append(Shape639)
Shape643 = x3d.Shape()
LineSet644 = x3d.LineSet()
LineSet644.vertexCount = [2]
Coordinate645 = x3d.Coordinate()

LineSet644.coord = Coordinate645
"""from vt1 to r_sternoclavicular vertices 2"""
ColorRGBA646 = x3d.ColorRGBA()
ColorRGBA646.USE = "HAnimSegmentLineColorRGBA"

LineSet644.color = ColorRGBA646

Shape643.geometry = LineSet644

HAnimSegment603.children.append(Shape643)

HAnimJoint602.children.append(HAnimSegment603)
HAnimJoint647 = x3d.HAnimJoint()
HAnimJoint647.name = "vc4"
HAnimJoint647.DEF = "hanim_vc4"
HAnimJoint647.center = [0.0066,1.5662,-0.0084]
HAnimJoint647.ulimit = [0,0,0]
HAnimJoint647.llimit = [0,0,0]
HAnimSegment648 = x3d.HAnimSegment()
HAnimSegment648.name = "c4"
HAnimSegment648.DEF = "hanim_c4"
Transform649 = x3d.Transform()
Transform649.translation = [0.0066,1.5662,-0.0084]
Transform650 = x3d.Transform()
"""Empty Transform"""
Shape651 = x3d.Shape()
Shape651.USE = "HAnimJointShape"

Transform650.children.append(Shape651)

Transform649.children.append(Transform650)

HAnimSegment648.children.append(Transform649)
Shape652 = x3d.Shape()
LineSet653 = x3d.LineSet()
LineSet653.vertexCount = [2]
Coordinate654 = x3d.Coordinate()

LineSet653.coord = Coordinate654
"""from vc4 to vc2 vertices 2"""
ColorRGBA655 = x3d.ColorRGBA()
ColorRGBA655.USE = "HAnimSegmentLineColorRGBA"

LineSet653.color = ColorRGBA655

Shape652.geometry = LineSet653

HAnimSegment648.children.append(Shape652)

HAnimJoint647.children.append(HAnimSegment648)
HAnimJoint656 = x3d.HAnimJoint()
HAnimJoint656.name = "vc2"
HAnimJoint656.DEF = "hanim_vc2"
HAnimJoint656.center = [0.0066,1.5928,-0.0103]
HAnimJoint656.ulimit = [0,0,0]
HAnimJoint656.llimit = [0,0,0]
HAnimSegment657 = x3d.HAnimSegment()
HAnimSegment657.name = "c2"
HAnimSegment657.DEF = "hanim_c2"
Transform658 = x3d.Transform()
Transform658.translation = [0.0066,1.5928,-0.0103]
Transform659 = x3d.Transform()
"""Empty Transform"""
Shape660 = x3d.Shape()
Shape660.USE = "HAnimJointShape"

Transform659.children.append(Shape660)

Transform658.children.append(Transform659)

HAnimSegment657.children.append(Transform658)
Shape661 = x3d.Shape()
LineSet662 = x3d.LineSet()
LineSet662.vertexCount = [2]
Coordinate663 = x3d.Coordinate()

LineSet662.coord = Coordinate663
"""from vc2 to skullbase vertices 2"""
ColorRGBA664 = x3d.ColorRGBA()
ColorRGBA664.USE = "HAnimSegmentLineColorRGBA"

LineSet662.color = ColorRGBA664

Shape661.geometry = LineSet662

HAnimSegment657.children.append(Shape661)
HAnimSite665 = x3d.HAnimSite()
HAnimSite665.name = "adams_apple"
HAnimSite665.DEF = "hanim_adams_apple"
TouchSensor666 = x3d.TouchSensor()
TouchSensor666.description = "HAnimSite 11 adams_apple"

HAnimSite665.children.append(TouchSensor666)
Shape667 = x3d.Shape()
Shape667.USE = "HAnimSiteShape"

HAnimSite665.children.append(Shape667)
Billboard668 = x3d.Billboard()
Shape669 = x3d.Shape()
Text670 = x3d.Text()
Text670.string = ["11"]
FontStyle671 = x3d.FontStyle()
FontStyle671.size = 0.035

Text670.fontStyle = FontStyle671

Shape669.geometry = Text670

Billboard668.children.append(Shape669)

HAnimSite665.children.append(Billboard668)

HAnimSegment657.children.append(HAnimSite665)

HAnimJoint656.children.append(HAnimSegment657)
HAnimJoint672 = x3d.HAnimJoint()
HAnimJoint672.name = "skullbase"
HAnimJoint672.DEF = "hanim_skullbase"
HAnimJoint672.center = [0.0044,1.6209,0.0236]
HAnimJoint672.ulimit = [0,0,0]
HAnimJoint672.llimit = [0,0,0]

HAnimJoint656.children.append(HAnimJoint672)

HAnimJoint647.children.append(HAnimJoint656)

HAnimJoint602.children.append(HAnimJoint647)
HAnimJoint673 = x3d.HAnimJoint()
HAnimJoint673.name = "l_sternoclavicular"
HAnimJoint673.DEF = "hanim_l_sternoclavicular"
HAnimJoint673.center = [0.082,1.4488,-0.0353]
HAnimJoint673.ulimit = [0,0,0]
HAnimJoint673.llimit = [0,0,0]
HAnimSegment674 = x3d.HAnimSegment()
HAnimSegment674.name = "l_clavicle"
HAnimSegment674.DEF = "hanim_l_clavicle"
Transform675 = x3d.Transform()
Transform675.translation = [0.082,1.4488,-0.0353]
Transform676 = x3d.Transform()
"""Empty Transform"""
Shape677 = x3d.Shape()
Shape677.USE = "HAnimJointShape"

Transform676.children.append(Shape677)

Transform675.children.append(Transform676)

HAnimSegment674.children.append(Transform675)
Shape678 = x3d.Shape()
LineSet679 = x3d.LineSet()
LineSet679.vertexCount = [2]
Coordinate680 = x3d.Coordinate()

LineSet679.coord = Coordinate680
"""from l_sternoclavicular to l_acromioclavicular vertices 2"""
ColorRGBA681 = x3d.ColorRGBA()
ColorRGBA681.USE = "HAnimSegmentLineColorRGBA"

LineSet679.color = ColorRGBA681

Shape678.geometry = LineSet679

HAnimSegment674.children.append(Shape678)
HAnimSite682 = x3d.HAnimSite()
HAnimSite682.name = "l_acromion"
HAnimSite682.DEF = "hanim_l_acromion"
HAnimSite682.translation = [0.2032,1.476,-0.049]
TouchSensor683 = x3d.TouchSensor()
TouchSensor683.description = "HAnimSite 15 l_acromion"

HAnimSite682.children.append(TouchSensor683)
Shape684 = x3d.Shape()
Shape684.USE = "HAnimSiteShape"

HAnimSite682.children.append(Shape684)
Billboard685 = x3d.Billboard()
Shape686 = x3d.Shape()
Text687 = x3d.Text()
Text687.string = ["15"]
FontStyle688 = x3d.FontStyle()
FontStyle688.size = 0.035

Text687.fontStyle = FontStyle688

Shape686.geometry = Text687

Billboard685.children.append(Shape686)

HAnimSite682.children.append(Billboard685)

HAnimSegment674.children.append(HAnimSite682)
HAnimSite689 = x3d.HAnimSite()
HAnimSite689.name = "l_axilla_distal"
HAnimSite689.DEF = "hanim_l_axilla_distal"
HAnimSite689.translation = [0.1706,1.4072,-0.0875]
TouchSensor690 = x3d.TouchSensor()
TouchSensor690.description = "HAnimSite 17 l_axilla_distal"

HAnimSite689.children.append(TouchSensor690)
Shape691 = x3d.Shape()
Shape691.USE = "HAnimSiteShape"

HAnimSite689.children.append(Shape691)
Billboard692 = x3d.Billboard()
Shape693 = x3d.Shape()
Text694 = x3d.Text()
Text694.string = ["17"]
FontStyle695 = x3d.FontStyle()
FontStyle695.size = 0.035

Text694.fontStyle = FontStyle695

Shape693.geometry = Text694

Billboard692.children.append(Shape693)

HAnimSite689.children.append(Billboard692)

HAnimSegment674.children.append(HAnimSite689)
HAnimSite696 = x3d.HAnimSite()
HAnimSite696.name = "l_axilla_posterior_folds"
HAnimSite696.DEF = "hanim_l_axilla_posterior_folds"
TouchSensor697 = x3d.TouchSensor()
TouchSensor697.description = "HAnimSite 18 l_axilla_posterior_folds"

HAnimSite696.children.append(TouchSensor697)
Shape698 = x3d.Shape()
Shape698.USE = "HAnimSiteShape"

HAnimSite696.children.append(Shape698)
Billboard699 = x3d.Billboard()
Shape700 = x3d.Shape()
Text701 = x3d.Text()
Text701.string = ["18"]
FontStyle702 = x3d.FontStyle()
FontStyle702.size = 0.035

Text701.fontStyle = FontStyle702

Shape700.geometry = Text701

Billboard699.children.append(Shape700)

HAnimSite696.children.append(Billboard699)

HAnimSegment674.children.append(HAnimSite696)
HAnimSite703 = x3d.HAnimSite()
HAnimSite703.name = "l_axilla_proximal"
HAnimSite703.DEF = "hanim_l_axilla_proximal"
HAnimSite703.translation = [0.1777,1.4065,-0.0075]
TouchSensor704 = x3d.TouchSensor()
TouchSensor704.description = "HAnimSite 16 l_axilla_proximal"

HAnimSite703.children.append(TouchSensor704)
Shape705 = x3d.Shape()
Shape705.USE = "HAnimSiteShape"

HAnimSite703.children.append(Shape705)
Billboard706 = x3d.Billboard()
Shape707 = x3d.Shape()
Text708 = x3d.Text()
Text708.string = ["16"]
FontStyle709 = x3d.FontStyle()
FontStyle709.size = 0.035

Text708.fontStyle = FontStyle709

Shape707.geometry = Text708

Billboard706.children.append(Shape707)

HAnimSite703.children.append(Billboard706)

HAnimSegment674.children.append(HAnimSite703)
HAnimSite710 = x3d.HAnimSite()
HAnimSite710.name = "l_clavicale"
HAnimSite710.DEF = "hanim_l_clavicale"
HAnimSite710.translation = [0.0271,1.4943,0.0394]
TouchSensor711 = x3d.TouchSensor()
TouchSensor711.description = "HAnimSite 14 l_clavicale"

HAnimSite710.children.append(TouchSensor711)
Shape712 = x3d.Shape()
Shape712.USE = "HAnimSiteShape"

HAnimSite710.children.append(Shape712)
Billboard713 = x3d.Billboard()
Shape714 = x3d.Shape()
Text715 = x3d.Text()
Text715.string = ["14"]
FontStyle716 = x3d.FontStyle()
FontStyle716.size = 0.035

Text715.fontStyle = FontStyle716

Shape714.geometry = Text715

Billboard713.children.append(Shape714)

HAnimSite710.children.append(Billboard713)

HAnimSegment674.children.append(HAnimSite710)

HAnimJoint673.children.append(HAnimSegment674)
HAnimJoint717 = x3d.HAnimJoint()
HAnimJoint717.name = "l_acromioclavicular"
HAnimJoint717.DEF = "hanim_l_acromioclavicular"
HAnimJoint717.center = [0.0962,1.4269,-0.0424]
HAnimJoint717.ulimit = [0,0,0]
HAnimJoint717.llimit = [0,0,0]
HAnimSegment718 = x3d.HAnimSegment()
HAnimSegment718.name = "l_scapula"
HAnimSegment718.DEF = "hanim_l_scapula"
Transform719 = x3d.Transform()
Transform719.translation = [0.0962,1.4269,-0.0424]
Transform720 = x3d.Transform()
"""Empty Transform"""
Shape721 = x3d.Shape()
Shape721.USE = "HAnimJointShape"

Transform720.children.append(Shape721)

Transform719.children.append(Transform720)

HAnimSegment718.children.append(Transform719)
Shape722 = x3d.Shape()
LineSet723 = x3d.LineSet()
LineSet723.vertexCount = [2]
Coordinate724 = x3d.Coordinate()

LineSet723.coord = Coordinate724
"""from l_acromioclavicular to l_shoulder vertices 2"""
ColorRGBA725 = x3d.ColorRGBA()
ColorRGBA725.USE = "HAnimSegmentLineColorRGBA"

LineSet723.color = ColorRGBA725

Shape722.geometry = LineSet723

HAnimSegment718.children.append(Shape722)

HAnimJoint717.children.append(HAnimSegment718)
HAnimJoint726 = x3d.HAnimJoint()
HAnimJoint726.name = "l_shoulder"
HAnimJoint726.DEF = "hanim_l_shoulder"
HAnimJoint726.center = [0.2029,1.4376,-0.0387]
HAnimJoint726.ulimit = [0,0,0]
HAnimJoint726.llimit = [0,0,0]
HAnimSegment727 = x3d.HAnimSegment()
HAnimSegment727.name = "l_upperarm"
HAnimSegment727.DEF = "hanim_l_upperarm"
Transform728 = x3d.Transform()
Transform728.translation = [0.2029,1.4376,-0.0387]
Transform729 = x3d.Transform()
"""Empty Transform"""
Shape730 = x3d.Shape()
Shape730.USE = "HAnimJointShape"

Transform729.children.append(Shape730)

Transform728.children.append(Transform729)

HAnimSegment727.children.append(Transform728)
Shape731 = x3d.Shape()
LineSet732 = x3d.LineSet()
LineSet732.vertexCount = [2]
Coordinate733 = x3d.Coordinate()

LineSet732.coord = Coordinate733
"""from l_shoulder to l_elbow vertices 2"""
ColorRGBA734 = x3d.ColorRGBA()
ColorRGBA734.USE = "HAnimSegmentLineColorRGBA"

LineSet732.color = ColorRGBA734

Shape731.geometry = LineSet732

HAnimSegment727.children.append(Shape731)
HAnimSite735 = x3d.HAnimSite()
HAnimSite735.name = "l_bideltoid"
HAnimSite735.DEF = "hanim_l_bideltoid"
TouchSensor736 = x3d.TouchSensor()
TouchSensor736.description = "HAnimSite 96 l_bideltoid"

HAnimSite735.children.append(TouchSensor736)
Shape737 = x3d.Shape()
Shape737.USE = "HAnimSiteShape"

HAnimSite735.children.append(Shape737)
Billboard738 = x3d.Billboard()
Shape739 = x3d.Shape()
Text740 = x3d.Text()
Text740.string = ["96"]
FontStyle741 = x3d.FontStyle()
FontStyle741.size = 0.035

Text740.fontStyle = FontStyle741

Shape739.geometry = Text740

Billboard738.children.append(Shape739)

HAnimSite735.children.append(Billboard738)

HAnimSegment727.children.append(HAnimSite735)
HAnimSite742 = x3d.HAnimSite()
HAnimSite742.name = "l_humeral_lateral_epicondyles"
HAnimSite742.DEF = "hanim_l_humeral_lateral_epicondyles"
HAnimSite742.translation = [0.228,1.1482,-0.11]
TouchSensor743 = x3d.TouchSensor()
TouchSensor743.description = "HAnimSite 63 l_humeral_lateral_epicondyles"

HAnimSite742.children.append(TouchSensor743)
Shape744 = x3d.Shape()
Shape744.USE = "HAnimSiteShape"

HAnimSite742.children.append(Shape744)
Billboard745 = x3d.Billboard()
Shape746 = x3d.Shape()
Text747 = x3d.Text()
Text747.string = ["63"]
FontStyle748 = x3d.FontStyle()
FontStyle748.size = 0.035

Text747.fontStyle = FontStyle748

Shape746.geometry = Text747

Billboard745.children.append(Shape746)

HAnimSite742.children.append(Billboard745)

HAnimSegment727.children.append(HAnimSite742)

HAnimJoint726.children.append(HAnimSegment727)
HAnimJoint749 = x3d.HAnimJoint()
HAnimJoint749.name = "l_elbow"
HAnimJoint749.DEF = "hanim_l_elbow"
HAnimJoint749.center = [0.2014,1.1357,-0.0682]
HAnimJoint749.ulimit = [0,0,0]
HAnimJoint749.llimit = [0,0,0]
HAnimSegment750 = x3d.HAnimSegment()
HAnimSegment750.name = "l_forearm"
HAnimSegment750.DEF = "hanim_l_forearm"
Transform751 = x3d.Transform()
Transform751.translation = [0.2014,1.1357,-0.0682]
Transform752 = x3d.Transform()
"""Empty Transform"""
Shape753 = x3d.Shape()
Shape753.USE = "HAnimJointShape"

Transform752.children.append(Shape753)

Transform751.children.append(Transform752)

HAnimSegment750.children.append(Transform751)
Shape754 = x3d.Shape()
LineSet755 = x3d.LineSet()
LineSet755.vertexCount = [2]
Coordinate756 = x3d.Coordinate()

LineSet755.coord = Coordinate756
"""from l_elbow to l_radiocarpal vertices 2"""
ColorRGBA757 = x3d.ColorRGBA()
ColorRGBA757.USE = "HAnimSegmentLineColorRGBA"

LineSet755.color = ColorRGBA757

Shape754.geometry = LineSet755

HAnimSegment750.children.append(Shape754)
HAnimSite758 = x3d.HAnimSite()
HAnimSite758.name = "l_humeral_medial_epicondyles"
HAnimSite758.DEF = "hanim_l_humeral_medial_epicondyles"
HAnimSite758.translation = [0.1735,1.1272,-0.1113]
TouchSensor759 = x3d.TouchSensor()
TouchSensor759.description = "HAnimSite 64 l_humeral_medial_epicondyles"

HAnimSite758.children.append(TouchSensor759)
Shape760 = x3d.Shape()
Shape760.USE = "HAnimSiteShape"

HAnimSite758.children.append(Shape760)
Billboard761 = x3d.Billboard()
Shape762 = x3d.Shape()
Text763 = x3d.Text()
Text763.string = ["64"]
FontStyle764 = x3d.FontStyle()
FontStyle764.size = 0.035

Text763.fontStyle = FontStyle764

Shape762.geometry = Text763

Billboard761.children.append(Shape762)

HAnimSite758.children.append(Billboard761)

HAnimSegment750.children.append(HAnimSite758)
HAnimSite765 = x3d.HAnimSite()
HAnimSite765.name = "l_olecranon"
HAnimSite765.DEF = "hanim_l_olecranon"
HAnimSite765.translation = [-0.1962,1.1375,-0.1123]
TouchSensor766 = x3d.TouchSensor()
TouchSensor766.description = "HAnimSite 65 l_olecranon"

HAnimSite765.children.append(TouchSensor766)
Shape767 = x3d.Shape()
Shape767.USE = "HAnimSiteShape"

HAnimSite765.children.append(Shape767)
Billboard768 = x3d.Billboard()
Shape769 = x3d.Shape()
Text770 = x3d.Text()
Text770.string = ["65"]
FontStyle771 = x3d.FontStyle()
FontStyle771.size = 0.035

Text770.fontStyle = FontStyle771

Shape769.geometry = Text770

Billboard768.children.append(Shape769)

HAnimSite765.children.append(Billboard768)

HAnimSegment750.children.append(HAnimSite765)
HAnimSite772 = x3d.HAnimSite()
HAnimSite772.name = "l_radial_styloid"
HAnimSite772.DEF = "hanim_l_radial_styloid"
HAnimSite772.translation = [0.1901,0.8645,-0.0415]
TouchSensor773 = x3d.TouchSensor()
TouchSensor773.description = "HAnimSite 71 l_radial_styloid"

HAnimSite772.children.append(TouchSensor773)
Shape774 = x3d.Shape()
Shape774.USE = "HAnimSiteShape"

HAnimSite772.children.append(Shape774)
Billboard775 = x3d.Billboard()
Shape776 = x3d.Shape()
Text777 = x3d.Text()
Text777.string = ["71"]
FontStyle778 = x3d.FontStyle()
FontStyle778.size = 0.035

Text777.fontStyle = FontStyle778

Shape776.geometry = Text777

Billboard775.children.append(Shape776)

HAnimSite772.children.append(Billboard775)

HAnimSegment750.children.append(HAnimSite772)
HAnimSite779 = x3d.HAnimSite()
HAnimSite779.name = "l_radiale"
HAnimSite779.DEF = "hanim_l_radiale"
HAnimSite779.translation = [0.2182,1.1212,-0.1167]
TouchSensor780 = x3d.TouchSensor()
TouchSensor780.description = "HAnimSite 69 l_radiale"

HAnimSite779.children.append(TouchSensor780)
Shape781 = x3d.Shape()
Shape781.USE = "HAnimSiteShape"

HAnimSite779.children.append(Shape781)
Billboard782 = x3d.Billboard()
Shape783 = x3d.Shape()
Text784 = x3d.Text()
Text784.string = ["69"]
FontStyle785 = x3d.FontStyle()
FontStyle785.size = 0.035

Text784.fontStyle = FontStyle785

Shape783.geometry = Text784

Billboard782.children.append(Shape783)

HAnimSite779.children.append(Billboard782)

HAnimSegment750.children.append(HAnimSite779)

HAnimJoint749.children.append(HAnimSegment750)
HAnimJoint786 = x3d.HAnimJoint()
HAnimJoint786.name = "l_radiocarpal"
HAnimJoint786.DEF = "hanim_l_radiocarpal"
HAnimJoint786.center = [0.1984,0.8663,-0.0583]
HAnimJoint786.ulimit = [0,0,0]
HAnimJoint786.llimit = [0,0,0]
HAnimSegment787 = x3d.HAnimSegment()
HAnimSegment787.name = "l_carpal"
HAnimSegment787.DEF = "hanim_l_carpal"
Transform788 = x3d.Transform()
Transform788.scale = [0.2,0.2,0.2]
Transform788.translation = [0.2,0.85,-0.05]
Transform788.rotation = [0,0,1,-3.14]
"""Transform left hand"""
Transform789 = x3d.Transform()
Transform789.rotation = [0,1,0,-1.57]
"""Transform left hand"""
Shape790 = x3d.Shape()
Shape790.USE = "HAnimJointShape"

Transform789.children.append(Shape790)

Transform788.children.append(Transform789)

HAnimSegment787.children.append(Transform788)
Shape791 = x3d.Shape()
LineSet792 = x3d.LineSet()
LineSet792.vertexCount = [2]
Coordinate793 = x3d.Coordinate()

LineSet792.coord = Coordinate793
"""from l_radiocarpal to l_carpometacarpal_1 vertices 2"""
ColorRGBA794 = x3d.ColorRGBA()
ColorRGBA794.USE = "HAnimSegmentLineColorRGBA"

LineSet792.color = ColorRGBA794

Shape791.geometry = LineSet792

HAnimSegment787.children.append(Shape791)
HAnimSite795 = x3d.HAnimSite()
HAnimSite795.name = "l_ulnar_styloid"
HAnimSite795.DEF = "hanim_l_ulnar_styloid"
HAnimSite795.translation = [-0.2142,0.8529,-0.0648]
TouchSensor796 = x3d.TouchSensor()
TouchSensor796.description = "HAnimSite 70 l_ulnar_styloid"

HAnimSite795.children.append(TouchSensor796)
Shape797 = x3d.Shape()
Shape797.USE = "HAnimSiteShape"

HAnimSite795.children.append(Shape797)
Billboard798 = x3d.Billboard()
Shape799 = x3d.Shape()
Text800 = x3d.Text()
Text800.string = ["70"]
FontStyle801 = x3d.FontStyle()
FontStyle801.size = 0.035

Text800.fontStyle = FontStyle801

Shape799.geometry = Text800

Billboard798.children.append(Shape799)

HAnimSite795.children.append(Billboard798)

HAnimSegment787.children.append(HAnimSite795)
Shape802 = x3d.Shape()
LineSet803 = x3d.LineSet()
LineSet803.vertexCount = [2]
Coordinate804 = x3d.Coordinate()

LineSet803.coord = Coordinate804
"""from l_radiocarpal to l_carpometacarpal_2 vertices 2"""
ColorRGBA805 = x3d.ColorRGBA()
ColorRGBA805.USE = "HAnimSegmentLineColorRGBA"

LineSet803.color = ColorRGBA805

Shape802.geometry = LineSet803

HAnimSegment787.children.append(Shape802)
Shape806 = x3d.Shape()
LineSet807 = x3d.LineSet()
LineSet807.vertexCount = [2]
Coordinate808 = x3d.Coordinate()

LineSet807.coord = Coordinate808
"""from l_radiocarpal to l_carpometacarpal_3 vertices 2"""
ColorRGBA809 = x3d.ColorRGBA()
ColorRGBA809.USE = "HAnimSegmentLineColorRGBA"

LineSet807.color = ColorRGBA809

Shape806.geometry = LineSet807

HAnimSegment787.children.append(Shape806)
Shape810 = x3d.Shape()
LineSet811 = x3d.LineSet()
LineSet811.vertexCount = [2]
Coordinate812 = x3d.Coordinate()

LineSet811.coord = Coordinate812
"""from l_radiocarpal to l_carpometacarpal_4 vertices 2"""
ColorRGBA813 = x3d.ColorRGBA()
ColorRGBA813.USE = "HAnimSegmentLineColorRGBA"

LineSet811.color = ColorRGBA813

Shape810.geometry = LineSet811

HAnimSegment787.children.append(Shape810)
Shape814 = x3d.Shape()
LineSet815 = x3d.LineSet()
LineSet815.vertexCount = [2]
Coordinate816 = x3d.Coordinate()

LineSet815.coord = Coordinate816
"""from l_radiocarpal to l_carpometacarpal_5 vertices 2"""
ColorRGBA817 = x3d.ColorRGBA()
ColorRGBA817.USE = "HAnimSegmentLineColorRGBA"

LineSet815.color = ColorRGBA817

Shape814.geometry = LineSet815

HAnimSegment787.children.append(Shape814)

HAnimJoint786.children.append(HAnimSegment787)
HAnimJoint818 = x3d.HAnimJoint()
HAnimJoint818.name = "l_carpometacarpal_1"
HAnimJoint818.DEF = "hanim_l_carpometacarpal_1"
HAnimJoint818.center = [0.1924,0.8472,-0.0534]
HAnimJoint818.ulimit = [0,0,0]
HAnimJoint818.llimit = [0,0,0]
HAnimSegment819 = x3d.HAnimSegment()
HAnimSegment819.name = "l_metacarpal_1"
HAnimSegment819.DEF = "hanim_l_metacarpal_1"
Transform820 = x3d.Transform()
Transform820.translation = [0.1924,0.8472,-0.0534]
Transform821 = x3d.Transform()
"""Empty Transform"""
Shape822 = x3d.Shape()
Shape822.USE = "HAnimJointShape"

Transform821.children.append(Shape822)

Transform820.children.append(Transform821)

HAnimSegment819.children.append(Transform820)
Shape823 = x3d.Shape()
LineSet824 = x3d.LineSet()
LineSet824.vertexCount = [2]
Coordinate825 = x3d.Coordinate()

LineSet824.coord = Coordinate825
"""from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2"""
ColorRGBA826 = x3d.ColorRGBA()
ColorRGBA826.USE = "HAnimSegmentLineColorRGBA"

LineSet824.color = ColorRGBA826

Shape823.geometry = LineSet824

HAnimSegment819.children.append(Shape823)

HAnimJoint818.children.append(HAnimSegment819)
HAnimJoint827 = x3d.HAnimJoint()
HAnimJoint827.name = "l_metacarpophalangeal_1"
HAnimJoint827.DEF = "hanim_l_metacarpophalangeal_1"
HAnimJoint827.center = [0.1951,0.8226,0.0246]
HAnimJoint827.ulimit = [0,0,0]
HAnimJoint827.llimit = [0,0,0]
HAnimSegment828 = x3d.HAnimSegment()
HAnimSegment828.name = "l_carpal_proximal_phalanx_1"
HAnimSegment828.DEF = "hanim_l_carpal_proximal_phalanx_1"
Transform829 = x3d.Transform()
Transform829.translation = [0.1951,0.8226,0.0246]
Transform830 = x3d.Transform()
"""Empty Transform"""
Shape831 = x3d.Shape()
Shape831.USE = "HAnimJointShape"

Transform830.children.append(Shape831)

Transform829.children.append(Transform830)

HAnimSegment828.children.append(Transform829)
Shape832 = x3d.Shape()
LineSet833 = x3d.LineSet()
LineSet833.vertexCount = [2]
Coordinate834 = x3d.Coordinate()

LineSet833.coord = Coordinate834
"""from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2"""
ColorRGBA835 = x3d.ColorRGBA()
ColorRGBA835.USE = "HAnimSegmentLineColorRGBA"

LineSet833.color = ColorRGBA835

Shape832.geometry = LineSet833

HAnimSegment828.children.append(Shape832)

HAnimJoint827.children.append(HAnimSegment828)
HAnimJoint836 = x3d.HAnimJoint()
HAnimJoint836.name = "l_carpal_interphalangeal_1"
HAnimJoint836.DEF = "hanim_l_carpal_interphalangeal_1"
HAnimJoint836.center = [0.1955,0.8159,0.0464]
HAnimJoint836.ulimit = [0,0,0]
HAnimJoint836.llimit = [0,0,0]

HAnimJoint827.children.append(HAnimJoint836)

HAnimJoint818.children.append(HAnimJoint827)

HAnimJoint786.children.append(HAnimJoint818)
HAnimJoint837 = x3d.HAnimJoint()
HAnimJoint837.name = "l_carpometacarpal_2"
HAnimJoint837.DEF = "hanim_l_carpometacarpal_2"
HAnimJoint837.center = [0.1983,0.8024,-0.028]
HAnimJoint837.ulimit = [0,0,0]
HAnimJoint837.llimit = [0,0,0]
HAnimSegment838 = x3d.HAnimSegment()
HAnimSegment838.name = "l_metacarpal_2"
HAnimSegment838.DEF = "hanim_l_metacarpal_2"
Transform839 = x3d.Transform()
Transform839.translation = [0.1983,0.8024,-0.028]
Transform840 = x3d.Transform()
"""Empty Transform"""
Shape841 = x3d.Shape()
Shape841.USE = "HAnimJointShape"

Transform840.children.append(Shape841)

Transform839.children.append(Transform840)

HAnimSegment838.children.append(Transform839)
Shape842 = x3d.Shape()
LineSet843 = x3d.LineSet()
LineSet843.vertexCount = [2]
Coordinate844 = x3d.Coordinate()

LineSet843.coord = Coordinate844
"""from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2"""
ColorRGBA845 = x3d.ColorRGBA()
ColorRGBA845.USE = "HAnimSegmentLineColorRGBA"

LineSet843.color = ColorRGBA845

Shape842.geometry = LineSet843

HAnimSegment838.children.append(Shape842)
HAnimSite846 = x3d.HAnimSite()
HAnimSite846.name = "l_metacarpal_phalanx_2"
HAnimSite846.DEF = "hanim_l_metacarpal_phalanx_2"
HAnimSite846.translation = [0.2009,0.8139,-0.0237]
TouchSensor847 = x3d.TouchSensor()
TouchSensor847.description = "HAnimSite 75 l_metacarpal_phalanx_2"

HAnimSite846.children.append(TouchSensor847)
Shape848 = x3d.Shape()
Shape848.USE = "HAnimSiteShape"

HAnimSite846.children.append(Shape848)
Billboard849 = x3d.Billboard()
Shape850 = x3d.Shape()
Text851 = x3d.Text()
Text851.string = ["75"]
FontStyle852 = x3d.FontStyle()
FontStyle852.size = 0.035

Text851.fontStyle = FontStyle852

Shape850.geometry = Text851

Billboard849.children.append(Shape850)

HAnimSite846.children.append(Billboard849)

HAnimSegment838.children.append(HAnimSite846)

HAnimJoint837.children.append(HAnimSegment838)
HAnimJoint853 = x3d.HAnimJoint()
HAnimJoint853.name = "l_metacarpophalangeal_2"
HAnimJoint853.DEF = "hanim_l_metacarpophalangeal_2"
HAnimJoint853.center = [0.1983,0.7815,-0.028]
HAnimJoint853.ulimit = [0,0,0]
HAnimJoint853.llimit = [0,0,0]
HAnimSegment854 = x3d.HAnimSegment()
HAnimSegment854.name = "l_carpal_proximal_phalanx_2"
HAnimSegment854.DEF = "hanim_l_carpal_proximal_phalanx_2"
Transform855 = x3d.Transform()
Transform855.translation = [0.1983,0.7815,-0.028]
Transform856 = x3d.Transform()
"""Empty Transform"""
Shape857 = x3d.Shape()
Shape857.USE = "HAnimJointShape"

Transform856.children.append(Shape857)

Transform855.children.append(Transform856)

HAnimSegment854.children.append(Transform855)
Shape858 = x3d.Shape()
LineSet859 = x3d.LineSet()
LineSet859.vertexCount = [2]
Coordinate860 = x3d.Coordinate()

LineSet859.coord = Coordinate860
"""from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2"""
ColorRGBA861 = x3d.ColorRGBA()
ColorRGBA861.USE = "HAnimSegmentLineColorRGBA"

LineSet859.color = ColorRGBA861

Shape858.geometry = LineSet859

HAnimSegment854.children.append(Shape858)

HAnimJoint853.children.append(HAnimSegment854)
HAnimJoint862 = x3d.HAnimJoint()
HAnimJoint862.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint862.DEF = "hanim_l_carpal_proximal_interphalangeal_2"
HAnimJoint862.center = [0.2017,0.7363,-0.0248]
HAnimJoint862.ulimit = [0,0,0]
HAnimJoint862.llimit = [0,0,0]
HAnimSegment863 = x3d.HAnimSegment()
HAnimSegment863.name = "l_carpal_middle_phalanx_2"
HAnimSegment863.DEF = "hanim_l_carpal_middle_phalanx_2"
Transform864 = x3d.Transform()
Transform864.translation = [0.2017,0.7363,-0.0248]
Transform865 = x3d.Transform()
"""Empty Transform"""
Shape866 = x3d.Shape()
Shape866.USE = "HAnimJointShape"

Transform865.children.append(Shape866)

Transform864.children.append(Transform865)

HAnimSegment863.children.append(Transform864)
Shape867 = x3d.Shape()
LineSet868 = x3d.LineSet()
LineSet868.vertexCount = [2]
Coordinate869 = x3d.Coordinate()

LineSet868.coord = Coordinate869
"""from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2"""
ColorRGBA870 = x3d.ColorRGBA()
ColorRGBA870.USE = "HAnimSegmentLineColorRGBA"

LineSet868.color = ColorRGBA870

Shape867.geometry = LineSet868

HAnimSegment863.children.append(Shape867)

HAnimJoint862.children.append(HAnimSegment863)
HAnimJoint871 = x3d.HAnimJoint()
HAnimJoint871.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint871.DEF = "hanim_l_carpal_distal_interphalangeal_2"
HAnimJoint871.center = [0.2028,0.7139,-0.0236]
HAnimJoint871.ulimit = [0,0,0]
HAnimJoint871.llimit = [0,0,0]

HAnimJoint862.children.append(HAnimJoint871)

HAnimJoint853.children.append(HAnimJoint862)

HAnimJoint837.children.append(HAnimJoint853)

HAnimJoint786.children.append(HAnimJoint837)
HAnimJoint872 = x3d.HAnimJoint()
HAnimJoint872.name = "l_carpometacarpal_3"
HAnimJoint872.DEF = "hanim_l_carpometacarpal_3"
HAnimJoint872.center = [0.1987,0.8029,-0.053]
HAnimJoint872.ulimit = [0,0,0]
HAnimJoint872.llimit = [0,0,0]
HAnimSegment873 = x3d.HAnimSegment()
HAnimSegment873.name = "l_metacarpal_3"
HAnimSegment873.DEF = "hanim_l_metacarpal_3"
Transform874 = x3d.Transform()
Transform874.translation = [0.1987,0.8029,-0.053]
Transform875 = x3d.Transform()
"""Empty Transform"""
Shape876 = x3d.Shape()
Shape876.USE = "HAnimJointShape"

Transform875.children.append(Shape876)

Transform874.children.append(Transform875)

HAnimSegment873.children.append(Transform874)
Shape877 = x3d.Shape()
LineSet878 = x3d.LineSet()
LineSet878.vertexCount = [2]
Coordinate879 = x3d.Coordinate()

LineSet878.coord = Coordinate879
"""from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2"""
ColorRGBA880 = x3d.ColorRGBA()
ColorRGBA880.USE = "HAnimSegmentLineColorRGBA"

LineSet878.color = ColorRGBA880

Shape877.geometry = LineSet878

HAnimSegment873.children.append(Shape877)
HAnimSite881 = x3d.HAnimSite()
HAnimSite881.name = "l_metacarpal_phalanx_3"
HAnimSite881.DEF = "hanim_l_metacarpal_phalanx_3"
TouchSensor882 = x3d.TouchSensor()
TouchSensor882.description = "HAnimSite 76 l_metacarpal_phalanx_3"

HAnimSite881.children.append(TouchSensor882)
Shape883 = x3d.Shape()
Shape883.USE = "HAnimSiteShape"

HAnimSite881.children.append(Shape883)
Billboard884 = x3d.Billboard()
Shape885 = x3d.Shape()
Text886 = x3d.Text()
Text886.string = ["76"]
FontStyle887 = x3d.FontStyle()
FontStyle887.size = 0.035

Text886.fontStyle = FontStyle887

Shape885.geometry = Text886

Billboard884.children.append(Shape885)

HAnimSite881.children.append(Billboard884)

HAnimSegment873.children.append(HAnimSite881)

HAnimJoint872.children.append(HAnimSegment873)
HAnimJoint888 = x3d.HAnimJoint()
HAnimJoint888.name = "l_metacarpophalangeal_3"
HAnimJoint888.DEF = "hanim_l_metacarpophalangeal_3"
HAnimJoint888.center = [0.1987,0.7818,-0.053]
HAnimJoint888.ulimit = [0,0,0]
HAnimJoint888.llimit = [0,0,0]
HAnimSegment889 = x3d.HAnimSegment()
HAnimSegment889.name = "l_carpal_proximal_phalanx_3"
HAnimSegment889.DEF = "hanim_l_carpal_proximal_phalanx_3"
Transform890 = x3d.Transform()
Transform890.translation = [0.1987,0.7818,-0.053]
Transform891 = x3d.Transform()
"""Empty Transform"""
Shape892 = x3d.Shape()
Shape892.USE = "HAnimJointShape"

Transform891.children.append(Shape892)

Transform890.children.append(Transform891)

HAnimSegment889.children.append(Transform890)
Shape893 = x3d.Shape()
LineSet894 = x3d.LineSet()
LineSet894.vertexCount = [2]
Coordinate895 = x3d.Coordinate()

LineSet894.coord = Coordinate895
"""from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2"""
ColorRGBA896 = x3d.ColorRGBA()
ColorRGBA896.USE = "HAnimSegmentLineColorRGBA"

LineSet894.color = ColorRGBA896

Shape893.geometry = LineSet894

HAnimSegment889.children.append(Shape893)

HAnimJoint888.children.append(HAnimSegment889)
HAnimJoint897 = x3d.HAnimJoint()
HAnimJoint897.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint897.DEF = "hanim_l_carpal_proximal_interphalangeal_3"
HAnimJoint897.center = [0.2013,0.7273,-0.0503]
HAnimJoint897.ulimit = [0,0,0]
HAnimJoint897.llimit = [0,0,0]
HAnimSegment898 = x3d.HAnimSegment()
HAnimSegment898.name = "l_carpal_middle_phalanx_3"
HAnimSegment898.DEF = "hanim_l_carpal_middle_phalanx_3"
Transform899 = x3d.Transform()
Transform899.translation = [0.2013,0.7273,-0.0503]
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
"""from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2"""
ColorRGBA905 = x3d.ColorRGBA()
ColorRGBA905.USE = "HAnimSegmentLineColorRGBA"

LineSet903.color = ColorRGBA905

Shape902.geometry = LineSet903

HAnimSegment898.children.append(Shape902)

HAnimJoint897.children.append(HAnimSegment898)
HAnimJoint906 = x3d.HAnimJoint()
HAnimJoint906.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint906.DEF = "hanim_l_carpal_distal_interphalangeal_3"
HAnimJoint906.center = [0.2026,0.7011,-0.0494]
HAnimJoint906.ulimit = [0,0,0]
HAnimJoint906.llimit = [0,0,0]

HAnimJoint897.children.append(HAnimJoint906)

HAnimJoint888.children.append(HAnimJoint897)

HAnimJoint872.children.append(HAnimJoint888)

HAnimJoint786.children.append(HAnimJoint872)
HAnimJoint907 = x3d.HAnimJoint()
HAnimJoint907.name = "l_carpometacarpal_4"
HAnimJoint907.DEF = "hanim_l_carpometacarpal_4"
HAnimJoint907.center = [0.1956,0.8019,-0.0794]
HAnimJoint907.ulimit = [0,0,0]
HAnimJoint907.llimit = [0,0,0]
HAnimSegment908 = x3d.HAnimSegment()
HAnimSegment908.name = "l_metacarpal_4"
HAnimSegment908.DEF = "hanim_l_metacarpal_4"
Transform909 = x3d.Transform()
Transform909.translation = [0.1956,0.8019,-0.0794]
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
"""from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2"""
ColorRGBA915 = x3d.ColorRGBA()
ColorRGBA915.USE = "HAnimSegmentLineColorRGBA"

LineSet913.color = ColorRGBA915

Shape912.geometry = LineSet913

HAnimSegment908.children.append(Shape912)

HAnimJoint907.children.append(HAnimSegment908)
HAnimJoint916 = x3d.HAnimJoint()
HAnimJoint916.name = "l_metacarpophalangeal_4"
HAnimJoint916.DEF = "hanim_l_metacarpophalangeal_4"
HAnimJoint916.center = [0.1956,0.7815,-0.0794]
HAnimJoint916.ulimit = [0,0,0]
HAnimJoint916.llimit = [0,0,0]
HAnimSegment917 = x3d.HAnimSegment()
HAnimSegment917.name = "l_carpal_proximal_phalanx_4"
HAnimSegment917.DEF = "hanim_l_carpal_proximal_phalanx_4"
Transform918 = x3d.Transform()
Transform918.translation = [0.1956,0.7815,-0.0794]
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
"""from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2"""
ColorRGBA924 = x3d.ColorRGBA()
ColorRGBA924.USE = "HAnimSegmentLineColorRGBA"

LineSet922.color = ColorRGBA924

Shape921.geometry = LineSet922

HAnimSegment917.children.append(Shape921)

HAnimJoint916.children.append(HAnimSegment917)
HAnimJoint925 = x3d.HAnimJoint()
HAnimJoint925.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint925.DEF = "hanim_l_carpal_proximal_interphalangeal_4"
HAnimJoint925.center = [0.1973,0.7287,-0.0777]
HAnimJoint925.ulimit = [0,0,0]
HAnimJoint925.llimit = [0,0,0]
HAnimSegment926 = x3d.HAnimSegment()
HAnimSegment926.name = "l_carpal_middle_phalanx_4"
HAnimSegment926.DEF = "hanim_l_carpal_middle_phalanx_4"
Transform927 = x3d.Transform()
Transform927.translation = [0.1973,0.7287,-0.0777]
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
"""from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2"""
ColorRGBA933 = x3d.ColorRGBA()
ColorRGBA933.USE = "HAnimSegmentLineColorRGBA"

LineSet931.color = ColorRGBA933

Shape930.geometry = LineSet931

HAnimSegment926.children.append(Shape930)

HAnimJoint925.children.append(HAnimSegment926)
HAnimJoint934 = x3d.HAnimJoint()
HAnimJoint934.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint934.DEF = "hanim_l_carpal_distal_interphalangeal_4"
HAnimJoint934.center = [0.1983,0.7045,-0.0767]
HAnimJoint934.ulimit = [0,0,0]
HAnimJoint934.llimit = [0,0,0]

HAnimJoint925.children.append(HAnimJoint934)

HAnimJoint916.children.append(HAnimJoint925)

HAnimJoint907.children.append(HAnimJoint916)

HAnimJoint786.children.append(HAnimJoint907)
HAnimJoint935 = x3d.HAnimJoint()
HAnimJoint935.name = "l_carpometacarpal_5"
HAnimJoint935.DEF = "hanim_l_carpometacarpal_5"
HAnimJoint935.center = [0.1925,0.8066,-0.1036]
HAnimJoint935.ulimit = [0,0,0]
HAnimJoint935.llimit = [0,0,0]
HAnimSegment936 = x3d.HAnimSegment()
HAnimSegment936.name = "l_metacarpal_5"
HAnimSegment936.DEF = "hanim_l_metacarpal_5"
Transform937 = x3d.Transform()
Transform937.translation = [0.1925,0.8066,-0.1036]
Transform938 = x3d.Transform()
"""Empty Transform"""
Shape939 = x3d.Shape()
Shape939.USE = "HAnimJointShape"

Transform938.children.append(Shape939)

Transform937.children.append(Transform938)

HAnimSegment936.children.append(Transform937)
Shape940 = x3d.Shape()
LineSet941 = x3d.LineSet()
LineSet941.vertexCount = [2]
Coordinate942 = x3d.Coordinate()

LineSet941.coord = Coordinate942
"""from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2"""
ColorRGBA943 = x3d.ColorRGBA()
ColorRGBA943.USE = "HAnimSegmentLineColorRGBA"

LineSet941.color = ColorRGBA943

Shape940.geometry = LineSet941

HAnimSegment936.children.append(Shape940)
HAnimSite944 = x3d.HAnimSite()
HAnimSite944.name = "l_metacarpal_phalanx_5"
HAnimSite944.DEF = "hanim_l_metacarpal_phalanx_5"
HAnimSite944.translation = [0.1929,0.786,-0.1122]
TouchSensor945 = x3d.TouchSensor()
TouchSensor945.description = "HAnimSite 77 l_metacarpal_phalanx_5"

HAnimSite944.children.append(TouchSensor945)
Shape946 = x3d.Shape()
Shape946.USE = "HAnimSiteShape"

HAnimSite944.children.append(Shape946)
Billboard947 = x3d.Billboard()
Shape948 = x3d.Shape()
Text949 = x3d.Text()
Text949.string = ["77"]
FontStyle950 = x3d.FontStyle()
FontStyle950.size = 0.035

Text949.fontStyle = FontStyle950

Shape948.geometry = Text949

Billboard947.children.append(Shape948)

HAnimSite944.children.append(Billboard947)

HAnimSegment936.children.append(HAnimSite944)

HAnimJoint935.children.append(HAnimSegment936)
HAnimJoint951 = x3d.HAnimJoint()
HAnimJoint951.name = "l_metacarpophalangeal_5"
HAnimJoint951.DEF = "hanim_l_metacarpophalangeal_5"
HAnimJoint951.center = [0.1925,0.7866,-0.1036]
HAnimJoint951.ulimit = [0,0,0]
HAnimJoint951.llimit = [0,0,0]
HAnimSegment952 = x3d.HAnimSegment()
HAnimSegment952.name = "l_carpal_proximal_phalanx_5"
HAnimSegment952.DEF = "hanim_l_carpal_proximal_phalanx_5"
Transform953 = x3d.Transform()
Transform953.translation = [0.1925,0.7866,-0.1036]
Transform954 = x3d.Transform()
"""Empty Transform"""
Shape955 = x3d.Shape()
Shape955.USE = "HAnimJointShape"

Transform954.children.append(Shape955)

Transform953.children.append(Transform954)

HAnimSegment952.children.append(Transform953)
Shape956 = x3d.Shape()
LineSet957 = x3d.LineSet()
LineSet957.vertexCount = [2]
Coordinate958 = x3d.Coordinate()

LineSet957.coord = Coordinate958
"""from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2"""
ColorRGBA959 = x3d.ColorRGBA()
ColorRGBA959.USE = "HAnimSegmentLineColorRGBA"

LineSet957.color = ColorRGBA959

Shape956.geometry = LineSet957

HAnimSegment952.children.append(Shape956)

HAnimJoint951.children.append(HAnimSegment952)
HAnimJoint960 = x3d.HAnimJoint()
HAnimJoint960.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint960.DEF = "hanim_l_carpal_proximal_interphalangeal_5"
HAnimJoint960.center = [0.1938,0.7452,-0.1024]
HAnimJoint960.ulimit = [0,0,0]
HAnimJoint960.llimit = [0,0,0]
HAnimSegment961 = x3d.HAnimSegment()
HAnimSegment961.name = "l_carpal_middle_phalanx_5"
HAnimSegment961.DEF = "hanim_l_carpal_middle_phalanx_5"
Transform962 = x3d.Transform()
Transform962.translation = [0.1938,0.7452,-0.1024]
Transform963 = x3d.Transform()
"""Empty Transform"""
Shape964 = x3d.Shape()
Shape964.USE = "HAnimJointShape"

Transform963.children.append(Shape964)

Transform962.children.append(Transform963)

HAnimSegment961.children.append(Transform962)
Shape965 = x3d.Shape()
LineSet966 = x3d.LineSet()
LineSet966.vertexCount = [2]
Coordinate967 = x3d.Coordinate()

LineSet966.coord = Coordinate967
"""from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2"""
ColorRGBA968 = x3d.ColorRGBA()
ColorRGBA968.USE = "HAnimSegmentLineColorRGBA"

LineSet966.color = ColorRGBA968

Shape965.geometry = LineSet966

HAnimSegment961.children.append(Shape965)

HAnimJoint960.children.append(HAnimSegment961)
HAnimJoint969 = x3d.HAnimJoint()
HAnimJoint969.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint969.DEF = "hanim_l_carpal_distal_interphalangeal_5"
HAnimJoint969.center = [0.1948,0.7277,-0.1017]
HAnimJoint969.ulimit = [0,0,0]
HAnimJoint969.llimit = [0,0,0]

HAnimJoint960.children.append(HAnimJoint969)

HAnimJoint951.children.append(HAnimJoint960)

HAnimJoint935.children.append(HAnimJoint951)

HAnimJoint786.children.append(HAnimJoint935)

HAnimJoint749.children.append(HAnimJoint786)

HAnimJoint726.children.append(HAnimJoint749)

HAnimJoint717.children.append(HAnimJoint726)

HAnimJoint673.children.append(HAnimJoint717)

HAnimJoint602.children.append(HAnimJoint673)
HAnimJoint970 = x3d.HAnimJoint()
HAnimJoint970.name = "r_sternoclavicular"
HAnimJoint970.DEF = "hanim_r_sternoclavicular"
HAnimJoint970.center = [-0.0694,1.46,-0.033]
HAnimJoint970.ulimit = [0,0,0]
HAnimJoint970.llimit = [0,0,0]
HAnimSegment971 = x3d.HAnimSegment()
HAnimSegment971.name = "r_clavicle"
HAnimSegment971.DEF = "hanim_r_clavicle"
Transform972 = x3d.Transform()
Transform972.translation = [-0.0694,1.46,-0.033]
Transform973 = x3d.Transform()
"""Empty Transform"""
Shape974 = x3d.Shape()
Shape974.USE = "HAnimJointShape"

Transform973.children.append(Shape974)

Transform972.children.append(Transform973)

HAnimSegment971.children.append(Transform972)
Shape975 = x3d.Shape()
LineSet976 = x3d.LineSet()
LineSet976.vertexCount = [2]
Coordinate977 = x3d.Coordinate()

LineSet976.coord = Coordinate977
"""from r_sternoclavicular to r_acromioclavicular vertices 2"""
ColorRGBA978 = x3d.ColorRGBA()
ColorRGBA978.USE = "HAnimSegmentLineColorRGBA"

LineSet976.color = ColorRGBA978

Shape975.geometry = LineSet976

HAnimSegment971.children.append(Shape975)
HAnimSite979 = x3d.HAnimSite()
HAnimSite979.name = "r_acromion"
HAnimSite979.DEF = "hanim_r_acromion"
HAnimSite979.translation = [-0.1905,1.4791,-0.0431]
TouchSensor980 = x3d.TouchSensor()
TouchSensor980.description = "HAnimSite 20 r_acromion"

HAnimSite979.children.append(TouchSensor980)
Shape981 = x3d.Shape()
Shape981.USE = "HAnimSiteShape"

HAnimSite979.children.append(Shape981)
Billboard982 = x3d.Billboard()
Shape983 = x3d.Shape()
Text984 = x3d.Text()
Text984.string = ["20"]
FontStyle985 = x3d.FontStyle()
FontStyle985.size = 0.035

Text984.fontStyle = FontStyle985

Shape983.geometry = Text984

Billboard982.children.append(Shape983)

HAnimSite979.children.append(Billboard982)

HAnimSegment971.children.append(HAnimSite979)
HAnimSite986 = x3d.HAnimSite()
HAnimSite986.name = "r_axilla_distal"
HAnimSite986.DEF = "hanim_r_axilla_distal"
HAnimSite986.translation = [-0.1603,1.4098,-0.0826]
TouchSensor987 = x3d.TouchSensor()
TouchSensor987.description = "HAnimSite 22 r_axilla_distal"

HAnimSite986.children.append(TouchSensor987)
Shape988 = x3d.Shape()
Shape988.USE = "HAnimSiteShape"

HAnimSite986.children.append(Shape988)
Billboard989 = x3d.Billboard()
Shape990 = x3d.Shape()
Text991 = x3d.Text()
Text991.string = ["22"]
FontStyle992 = x3d.FontStyle()
FontStyle992.size = 0.035

Text991.fontStyle = FontStyle992

Shape990.geometry = Text991

Billboard989.children.append(Shape990)

HAnimSite986.children.append(Billboard989)

HAnimSegment971.children.append(HAnimSite986)
HAnimSite993 = x3d.HAnimSite()
HAnimSite993.name = "r_axilla_posterior_folds"
HAnimSite993.DEF = "hanim_r_axilla_posterior_folds"
TouchSensor994 = x3d.TouchSensor()
TouchSensor994.description = "HAnimSite 23 r_axilla_posterior_folds"

HAnimSite993.children.append(TouchSensor994)
Shape995 = x3d.Shape()
Shape995.USE = "HAnimSiteShape"

HAnimSite993.children.append(Shape995)
Billboard996 = x3d.Billboard()
Shape997 = x3d.Shape()
Text998 = x3d.Text()
Text998.string = ["23"]
FontStyle999 = x3d.FontStyle()
FontStyle999.size = 0.035

Text998.fontStyle = FontStyle999

Shape997.geometry = Text998

Billboard996.children.append(Shape997)

HAnimSite993.children.append(Billboard996)

HAnimSegment971.children.append(HAnimSite993)
HAnimSite1000 = x3d.HAnimSite()
HAnimSite1000.name = "r_axilla_proximal"
HAnimSite1000.DEF = "hanim_r_axilla_proximal"
HAnimSite1000.translation = [-0.1626,1.4072,-0.0031]
TouchSensor1001 = x3d.TouchSensor()
TouchSensor1001.description = "HAnimSite 21 r_axilla_proximal"

HAnimSite1000.children.append(TouchSensor1001)
Shape1002 = x3d.Shape()
Shape1002.USE = "HAnimSiteShape"

HAnimSite1000.children.append(Shape1002)
Billboard1003 = x3d.Billboard()
Shape1004 = x3d.Shape()
Text1005 = x3d.Text()
Text1005.string = ["21"]
FontStyle1006 = x3d.FontStyle()
FontStyle1006.size = 0.035

Text1005.fontStyle = FontStyle1006

Shape1004.geometry = Text1005

Billboard1003.children.append(Shape1004)

HAnimSite1000.children.append(Billboard1003)

HAnimSegment971.children.append(HAnimSite1000)
HAnimSite1007 = x3d.HAnimSite()
HAnimSite1007.name = "r_clavicale"
HAnimSite1007.DEF = "hanim_r_clavicale"
HAnimSite1007.translation = [-0.0115,1.4943,0.04]
TouchSensor1008 = x3d.TouchSensor()
TouchSensor1008.description = "HAnimSite 19 r_clavicale"

HAnimSite1007.children.append(TouchSensor1008)
Shape1009 = x3d.Shape()
Shape1009.USE = "HAnimSiteShape"

HAnimSite1007.children.append(Shape1009)
Billboard1010 = x3d.Billboard()
Shape1011 = x3d.Shape()
Text1012 = x3d.Text()
Text1012.string = ["19"]
FontStyle1013 = x3d.FontStyle()
FontStyle1013.size = 0.035

Text1012.fontStyle = FontStyle1013

Shape1011.geometry = Text1012

Billboard1010.children.append(Shape1011)

HAnimSite1007.children.append(Billboard1010)

HAnimSegment971.children.append(HAnimSite1007)

HAnimJoint970.children.append(HAnimSegment971)
HAnimJoint1014 = x3d.HAnimJoint()
HAnimJoint1014.name = "r_acromioclavicular"
HAnimJoint1014.DEF = "hanim_r_acromioclavicular"
HAnimJoint1014.center = [-0.0836,1.4281,-0.0401]
HAnimJoint1014.ulimit = [0,0,0]
HAnimJoint1014.llimit = [0,0,0]
HAnimSegment1015 = x3d.HAnimSegment()
HAnimSegment1015.name = "r_scapula"
HAnimSegment1015.DEF = "hanim_r_scapula"
Transform1016 = x3d.Transform()
Transform1016.translation = [-0.0836,1.4281,-0.0401]
Transform1017 = x3d.Transform()
"""Empty Transform"""
Shape1018 = x3d.Shape()
Shape1018.USE = "HAnimJointShape"

Transform1017.children.append(Shape1018)

Transform1016.children.append(Transform1017)

HAnimSegment1015.children.append(Transform1016)
Shape1019 = x3d.Shape()
LineSet1020 = x3d.LineSet()
LineSet1020.vertexCount = [2]
Coordinate1021 = x3d.Coordinate()

LineSet1020.coord = Coordinate1021
"""from r_acromioclavicular to r_shoulder vertices 2"""
ColorRGBA1022 = x3d.ColorRGBA()
ColorRGBA1022.USE = "HAnimSegmentLineColorRGBA"

LineSet1020.color = ColorRGBA1022

Shape1019.geometry = LineSet1020

HAnimSegment1015.children.append(Shape1019)

HAnimJoint1014.children.append(HAnimSegment1015)
HAnimJoint1023 = x3d.HAnimJoint()
HAnimJoint1023.name = "r_shoulder"
HAnimJoint1023.DEF = "hanim_r_shoulder"
HAnimJoint1023.center = [-0.1907,1.4407,-0.0325]
HAnimJoint1023.ulimit = [0,0,0]
HAnimJoint1023.llimit = [0,0,0]
HAnimSegment1024 = x3d.HAnimSegment()
HAnimSegment1024.name = "r_upperarm"
HAnimSegment1024.DEF = "hanim_r_upperarm"
Transform1025 = x3d.Transform()
Transform1025.translation = [-0.1907,1.4407,-0.0325]
Transform1026 = x3d.Transform()
"""Empty Transform"""
Shape1027 = x3d.Shape()
Shape1027.USE = "HAnimJointShape"

Transform1026.children.append(Shape1027)

Transform1025.children.append(Transform1026)

HAnimSegment1024.children.append(Transform1025)
Shape1028 = x3d.Shape()
LineSet1029 = x3d.LineSet()
LineSet1029.vertexCount = [2]
Coordinate1030 = x3d.Coordinate()

LineSet1029.coord = Coordinate1030
"""from r_shoulder to r_elbow vertices 2"""
ColorRGBA1031 = x3d.ColorRGBA()
ColorRGBA1031.USE = "HAnimSegmentLineColorRGBA"

LineSet1029.color = ColorRGBA1031

Shape1028.geometry = LineSet1029

HAnimSegment1024.children.append(Shape1028)
HAnimSite1032 = x3d.HAnimSite()
HAnimSite1032.name = "r_bideltoid"
HAnimSite1032.DEF = "hanim_r_bideltoid"
TouchSensor1033 = x3d.TouchSensor()
TouchSensor1033.description = "HAnimSite 97 r_bideltoid"

HAnimSite1032.children.append(TouchSensor1033)
Shape1034 = x3d.Shape()
Shape1034.USE = "HAnimSiteShape"

HAnimSite1032.children.append(Shape1034)
Billboard1035 = x3d.Billboard()
Shape1036 = x3d.Shape()
Text1037 = x3d.Text()
Text1037.string = ["97"]
FontStyle1038 = x3d.FontStyle()
FontStyle1038.size = 0.035

Text1037.fontStyle = FontStyle1038

Shape1036.geometry = Text1037

Billboard1035.children.append(Shape1036)

HAnimSite1032.children.append(Billboard1035)

HAnimSegment1024.children.append(HAnimSite1032)
HAnimSite1039 = x3d.HAnimSite()
HAnimSite1039.name = "r_humeral_lateral_epicondyles"
HAnimSite1039.DEF = "hanim_r_humeral_lateral_epicondyles"
HAnimSite1039.translation = [-0.2224,1.1517,-0.1033]
TouchSensor1040 = x3d.TouchSensor()
TouchSensor1040.description = "HAnimSite 66 r_humeral_lateral_epicondyles"

HAnimSite1039.children.append(TouchSensor1040)
Shape1041 = x3d.Shape()
Shape1041.USE = "HAnimSiteShape"

HAnimSite1039.children.append(Shape1041)
Billboard1042 = x3d.Billboard()
Shape1043 = x3d.Shape()
Text1044 = x3d.Text()
Text1044.string = ["66"]
FontStyle1045 = x3d.FontStyle()
FontStyle1045.size = 0.035

Text1044.fontStyle = FontStyle1045

Shape1043.geometry = Text1044

Billboard1042.children.append(Shape1043)

HAnimSite1039.children.append(Billboard1042)

HAnimSegment1024.children.append(HAnimSite1039)

HAnimJoint1023.children.append(HAnimSegment1024)
HAnimJoint1046 = x3d.HAnimJoint()
HAnimJoint1046.name = "r_elbow"
HAnimJoint1046.DEF = "hanim_r_elbow"
HAnimJoint1046.center = [-0.1949,1.1388,-0.062]
HAnimJoint1046.ulimit = [0,0,0]
HAnimJoint1046.llimit = [0,0,0]
HAnimSegment1047 = x3d.HAnimSegment()
HAnimSegment1047.name = "r_forearm"
HAnimSegment1047.DEF = "hanim_r_forearm"
Transform1048 = x3d.Transform()
Transform1048.translation = [-0.1949,1.1388,-0.062]
Transform1049 = x3d.Transform()
"""Empty Transform"""
Shape1050 = x3d.Shape()
Shape1050.USE = "HAnimJointShape"

Transform1049.children.append(Shape1050)

Transform1048.children.append(Transform1049)

HAnimSegment1047.children.append(Transform1048)
Shape1051 = x3d.Shape()
LineSet1052 = x3d.LineSet()
LineSet1052.vertexCount = [2]
Coordinate1053 = x3d.Coordinate()

LineSet1052.coord = Coordinate1053
"""from r_elbow to r_radiocarpal vertices 2"""
ColorRGBA1054 = x3d.ColorRGBA()
ColorRGBA1054.USE = "HAnimSegmentLineColorRGBA"

LineSet1052.color = ColorRGBA1054

Shape1051.geometry = LineSet1052

HAnimSegment1047.children.append(Shape1051)
HAnimSite1055 = x3d.HAnimSite()
HAnimSite1055.name = "r_humeral_medial_epicondyles"
HAnimSite1055.DEF = "hanim_r_humeral_medial_epicondyles"
HAnimSite1055.translation = [-0.168,1.1298,-0.1062]
TouchSensor1056 = x3d.TouchSensor()
TouchSensor1056.description = "HAnimSite 67 r_humeral_medial_epicondyles"

HAnimSite1055.children.append(TouchSensor1056)
Shape1057 = x3d.Shape()
Shape1057.USE = "HAnimSiteShape"

HAnimSite1055.children.append(Shape1057)
Billboard1058 = x3d.Billboard()
Shape1059 = x3d.Shape()
Text1060 = x3d.Text()
Text1060.string = ["67"]
FontStyle1061 = x3d.FontStyle()
FontStyle1061.size = 0.035

Text1060.fontStyle = FontStyle1061

Shape1059.geometry = Text1060

Billboard1058.children.append(Shape1059)

HAnimSite1055.children.append(Billboard1058)

HAnimSegment1047.children.append(HAnimSite1055)
HAnimSite1062 = x3d.HAnimSite()
HAnimSite1062.name = "r_olecranon"
HAnimSite1062.DEF = "hanim_r_olecranon"
HAnimSite1062.translation = [-0.1907,1.1405,-0.1065]
TouchSensor1063 = x3d.TouchSensor()
TouchSensor1063.description = "HAnimSite 68 r_olecranon"

HAnimSite1062.children.append(TouchSensor1063)
Shape1064 = x3d.Shape()
Shape1064.USE = "HAnimSiteShape"

HAnimSite1062.children.append(Shape1064)
Billboard1065 = x3d.Billboard()
Shape1066 = x3d.Shape()
Text1067 = x3d.Text()
Text1067.string = ["68"]
FontStyle1068 = x3d.FontStyle()
FontStyle1068.size = 0.035

Text1067.fontStyle = FontStyle1068

Shape1066.geometry = Text1067

Billboard1065.children.append(Shape1066)

HAnimSite1062.children.append(Billboard1065)

HAnimSegment1047.children.append(HAnimSite1062)
HAnimSite1069 = x3d.HAnimSite()
HAnimSite1069.name = "r_radial_styloid"
HAnimSite1069.DEF = "hanim_r_radial_styloid"
HAnimSite1069.translation = [-0.1884,0.8676,-0.036]
TouchSensor1070 = x3d.TouchSensor()
TouchSensor1070.description = "HAnimSite 74 r_radial_styloid"

HAnimSite1069.children.append(TouchSensor1070)
Shape1071 = x3d.Shape()
Shape1071.USE = "HAnimSiteShape"

HAnimSite1069.children.append(Shape1071)
Billboard1072 = x3d.Billboard()
Shape1073 = x3d.Shape()
Text1074 = x3d.Text()
Text1074.string = ["74"]
FontStyle1075 = x3d.FontStyle()
FontStyle1075.size = 0.035

Text1074.fontStyle = FontStyle1075

Shape1073.geometry = Text1074

Billboard1072.children.append(Shape1073)

HAnimSite1069.children.append(Billboard1072)

HAnimSegment1047.children.append(HAnimSite1069)
HAnimSite1076 = x3d.HAnimSite()
HAnimSite1076.name = "r_radiale"
HAnimSite1076.DEF = "hanim_r_radiale"
HAnimSite1076.translation = [-0.213,1.1305,-0.1091]
TouchSensor1077 = x3d.TouchSensor()
TouchSensor1077.description = "HAnimSite 72 r_radiale"

HAnimSite1076.children.append(TouchSensor1077)
Shape1078 = x3d.Shape()
Shape1078.USE = "HAnimSiteShape"

HAnimSite1076.children.append(Shape1078)
Billboard1079 = x3d.Billboard()
Shape1080 = x3d.Shape()
Text1081 = x3d.Text()
Text1081.string = ["72"]
FontStyle1082 = x3d.FontStyle()
FontStyle1082.size = 0.035

Text1081.fontStyle = FontStyle1082

Shape1080.geometry = Text1081

Billboard1079.children.append(Shape1080)

HAnimSite1076.children.append(Billboard1079)

HAnimSegment1047.children.append(HAnimSite1076)

HAnimJoint1046.children.append(HAnimSegment1047)
HAnimJoint1083 = x3d.HAnimJoint()
HAnimJoint1083.name = "r_radiocarpal"
HAnimJoint1083.DEF = "hanim_r_radiocarpal"
HAnimJoint1083.center = [-0.1959,0.8694,-0.0521]
HAnimJoint1083.ulimit = [0,0,0]
HAnimJoint1083.llimit = [0,0,0]
HAnimSegment1084 = x3d.HAnimSegment()
HAnimSegment1084.name = "r_carpal"
HAnimSegment1084.DEF = "hanim_r_carpal"
Transform1085 = x3d.Transform()
Transform1085.scale = [0.2,0.2,0.2]
Transform1085.translation = [-0.2,0.85,-0.05]
Transform1085.rotation = [0,0,1,-3.14]
"""Transform right hand"""
Transform1086 = x3d.Transform()
Transform1086.rotation = [0,1,0,1.57]
"""Transform right hand"""
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
"""from r_radiocarpal to r_carpometacarpal_1 vertices 2"""
ColorRGBA1091 = x3d.ColorRGBA()
ColorRGBA1091.USE = "HAnimSegmentLineColorRGBA"

LineSet1089.color = ColorRGBA1091

Shape1088.geometry = LineSet1089

HAnimSegment1084.children.append(Shape1088)
HAnimSite1092 = x3d.HAnimSite()
HAnimSite1092.name = "r_ulnar_styloid"
HAnimSite1092.DEF = "hanim_r_ulnar_styloid"
HAnimSite1092.translation = [-0.2117,0.8562,-0.0584]
TouchSensor1093 = x3d.TouchSensor()
TouchSensor1093.description = "HAnimSite 73 r_ulnar_styloid"

HAnimSite1092.children.append(TouchSensor1093)
Shape1094 = x3d.Shape()
Shape1094.USE = "HAnimSiteShape"

HAnimSite1092.children.append(Shape1094)
Billboard1095 = x3d.Billboard()
Shape1096 = x3d.Shape()
Text1097 = x3d.Text()
Text1097.string = ["73"]
FontStyle1098 = x3d.FontStyle()
FontStyle1098.size = 0.035

Text1097.fontStyle = FontStyle1098

Shape1096.geometry = Text1097

Billboard1095.children.append(Shape1096)

HAnimSite1092.children.append(Billboard1095)

HAnimSegment1084.children.append(HAnimSite1092)
Shape1099 = x3d.Shape()
LineSet1100 = x3d.LineSet()
LineSet1100.vertexCount = [2]
Coordinate1101 = x3d.Coordinate()

LineSet1100.coord = Coordinate1101
"""from r_radiocarpal to r_carpometacarpal_2 vertices 2"""
ColorRGBA1102 = x3d.ColorRGBA()
ColorRGBA1102.USE = "HAnimSegmentLineColorRGBA"

LineSet1100.color = ColorRGBA1102

Shape1099.geometry = LineSet1100

HAnimSegment1084.children.append(Shape1099)
Shape1103 = x3d.Shape()
LineSet1104 = x3d.LineSet()
LineSet1104.vertexCount = [2]
Coordinate1105 = x3d.Coordinate()

LineSet1104.coord = Coordinate1105
"""from r_radiocarpal to r_carpometacarpal_3 vertices 2"""
ColorRGBA1106 = x3d.ColorRGBA()
ColorRGBA1106.USE = "HAnimSegmentLineColorRGBA"

LineSet1104.color = ColorRGBA1106

Shape1103.geometry = LineSet1104

HAnimSegment1084.children.append(Shape1103)
Shape1107 = x3d.Shape()
LineSet1108 = x3d.LineSet()
LineSet1108.vertexCount = [2]
Coordinate1109 = x3d.Coordinate()

LineSet1108.coord = Coordinate1109
"""from r_radiocarpal to r_carpometacarpal_4 vertices 2"""
ColorRGBA1110 = x3d.ColorRGBA()
ColorRGBA1110.USE = "HAnimSegmentLineColorRGBA"

LineSet1108.color = ColorRGBA1110

Shape1107.geometry = LineSet1108

HAnimSegment1084.children.append(Shape1107)
Shape1111 = x3d.Shape()
LineSet1112 = x3d.LineSet()
LineSet1112.vertexCount = [2]
Coordinate1113 = x3d.Coordinate()

LineSet1112.coord = Coordinate1113
"""from r_radiocarpal to r_carpometacarpal_5 vertices 2"""
ColorRGBA1114 = x3d.ColorRGBA()
ColorRGBA1114.USE = "HAnimSegmentLineColorRGBA"

LineSet1112.color = ColorRGBA1114

Shape1111.geometry = LineSet1112

HAnimSegment1084.children.append(Shape1111)

HAnimJoint1083.children.append(HAnimSegment1084)
HAnimJoint1115 = x3d.HAnimJoint()
HAnimJoint1115.name = "r_carpometacarpal_1"
HAnimJoint1115.DEF = "hanim_r_carpometacarpal_1"
HAnimJoint1115.center = [-0.1899,0.8502,-0.0473]
HAnimJoint1115.ulimit = [0,0,0]
HAnimJoint1115.llimit = [0,0,0]
HAnimSegment1116 = x3d.HAnimSegment()
HAnimSegment1116.name = "r_metacarpal_1"
HAnimSegment1116.DEF = "hanim_r_metacarpal_1"
Transform1117 = x3d.Transform()
Transform1117.translation = [-0.1899,0.8502,-0.0473]
Transform1118 = x3d.Transform()
"""Empty Transform"""
Shape1119 = x3d.Shape()
Shape1119.USE = "HAnimJointShape"

Transform1118.children.append(Shape1119)

Transform1117.children.append(Transform1118)

HAnimSegment1116.children.append(Transform1117)
Shape1120 = x3d.Shape()
LineSet1121 = x3d.LineSet()
LineSet1121.vertexCount = [2]
Coordinate1122 = x3d.Coordinate()

LineSet1121.coord = Coordinate1122
"""from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2"""
ColorRGBA1123 = x3d.ColorRGBA()
ColorRGBA1123.USE = "HAnimSegmentLineColorRGBA"

LineSet1121.color = ColorRGBA1123

Shape1120.geometry = LineSet1121

HAnimSegment1116.children.append(Shape1120)

HAnimJoint1115.children.append(HAnimSegment1116)
HAnimJoint1124 = x3d.HAnimJoint()
HAnimJoint1124.name = "r_metacarpophalangeal_1"
HAnimJoint1124.DEF = "hanim_r_metacarpophalangeal_1"
HAnimJoint1124.center = [-0.1874,0.8256,0.0306]
HAnimJoint1124.ulimit = [0,0,0]
HAnimJoint1124.llimit = [0,0,0]
HAnimSegment1125 = x3d.HAnimSegment()
HAnimSegment1125.name = "r_carpal_proximal_phalanx_1"
HAnimSegment1125.DEF = "hanim_r_carpal_proximal_phalanx_1"
Transform1126 = x3d.Transform()
Transform1126.translation = [-0.1874,0.8256,0.0306]
Transform1127 = x3d.Transform()
"""Empty Transform"""
Shape1128 = x3d.Shape()
Shape1128.USE = "HAnimJointShape"

Transform1127.children.append(Shape1128)

Transform1126.children.append(Transform1127)

HAnimSegment1125.children.append(Transform1126)
Shape1129 = x3d.Shape()
LineSet1130 = x3d.LineSet()
LineSet1130.vertexCount = [2]
Coordinate1131 = x3d.Coordinate()

LineSet1130.coord = Coordinate1131
"""from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2"""
ColorRGBA1132 = x3d.ColorRGBA()
ColorRGBA1132.USE = "HAnimSegmentLineColorRGBA"

LineSet1130.color = ColorRGBA1132

Shape1129.geometry = LineSet1130

HAnimSegment1125.children.append(Shape1129)

HAnimJoint1124.children.append(HAnimSegment1125)
HAnimJoint1133 = x3d.HAnimJoint()
HAnimJoint1133.name = "r_carpal_interphalangeal_1"
HAnimJoint1133.DEF = "hanim_r_carpal_interphalangeal_1"
HAnimJoint1133.center = [-0.1864,0.819,0.0506]
HAnimJoint1133.ulimit = [0,0,0]
HAnimJoint1133.llimit = [0,0,0]

HAnimJoint1124.children.append(HAnimJoint1133)

HAnimJoint1115.children.append(HAnimJoint1124)

HAnimJoint1083.children.append(HAnimJoint1115)
HAnimJoint1134 = x3d.HAnimJoint()
HAnimJoint1134.name = "r_carpometacarpal_2"
HAnimJoint1134.DEF = "hanim_r_carpometacarpal_2"
HAnimJoint1134.center = [-0.1961,0.8055,-0.0218]
HAnimJoint1134.ulimit = [0,0,0]
HAnimJoint1134.llimit = [0,0,0]
HAnimSegment1135 = x3d.HAnimSegment()
HAnimSegment1135.name = "r_metacarpal_2"
HAnimSegment1135.DEF = "hanim_r_metacarpal_2"
Transform1136 = x3d.Transform()
Transform1136.translation = [-0.1961,0.8055,-0.0218]
Transform1137 = x3d.Transform()
"""Empty Transform"""
Shape1138 = x3d.Shape()
Shape1138.USE = "HAnimJointShape"

Transform1137.children.append(Shape1138)

Transform1136.children.append(Transform1137)

HAnimSegment1135.children.append(Transform1136)
Shape1139 = x3d.Shape()
LineSet1140 = x3d.LineSet()
LineSet1140.vertexCount = [2]
Coordinate1141 = x3d.Coordinate()

LineSet1140.coord = Coordinate1141
"""from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2"""
ColorRGBA1142 = x3d.ColorRGBA()
ColorRGBA1142.USE = "HAnimSegmentLineColorRGBA"

LineSet1140.color = ColorRGBA1142

Shape1139.geometry = LineSet1140

HAnimSegment1135.children.append(Shape1139)
HAnimSite1143 = x3d.HAnimSite()
HAnimSite1143.name = "r_metacarpal_phalanx_2"
HAnimSite1143.DEF = "hanim_r_metacarpal_phalanx_2"
HAnimSite1143.translation = [-0.1977,0.8169,-0.0177]
TouchSensor1144 = x3d.TouchSensor()
TouchSensor1144.description = "HAnimSite 78 r_metacarpal_phalanx_2"

HAnimSite1143.children.append(TouchSensor1144)
Shape1145 = x3d.Shape()
Shape1145.USE = "HAnimSiteShape"

HAnimSite1143.children.append(Shape1145)
Billboard1146 = x3d.Billboard()
Shape1147 = x3d.Shape()
Text1148 = x3d.Text()
Text1148.string = ["78"]
FontStyle1149 = x3d.FontStyle()
FontStyle1149.size = 0.035

Text1148.fontStyle = FontStyle1149

Shape1147.geometry = Text1148

Billboard1146.children.append(Shape1147)

HAnimSite1143.children.append(Billboard1146)

HAnimSegment1135.children.append(HAnimSite1143)

HAnimJoint1134.children.append(HAnimSegment1135)
HAnimJoint1150 = x3d.HAnimJoint()
HAnimJoint1150.name = "r_metacarpophalangeal_2"
HAnimJoint1150.DEF = "hanim_r_metacarpophalangeal_2"
HAnimJoint1150.center = [-0.1961,0.7846,-0.0218]
HAnimJoint1150.ulimit = [0,0,0]
HAnimJoint1150.llimit = [0,0,0]
HAnimSegment1151 = x3d.HAnimSegment()
HAnimSegment1151.name = "r_carpal_proximal_phalanx_2"
HAnimSegment1151.DEF = "hanim_r_carpal_proximal_phalanx_2"
Transform1152 = x3d.Transform()
Transform1152.translation = [-0.1961,0.7846,-0.0218]
Transform1153 = x3d.Transform()
"""Empty Transform"""
Shape1154 = x3d.Shape()
Shape1154.USE = "HAnimJointShape"

Transform1153.children.append(Shape1154)

Transform1152.children.append(Transform1153)

HAnimSegment1151.children.append(Transform1152)
Shape1155 = x3d.Shape()
LineSet1156 = x3d.LineSet()
LineSet1156.vertexCount = [2]
Coordinate1157 = x3d.Coordinate()

LineSet1156.coord = Coordinate1157
"""from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2"""
ColorRGBA1158 = x3d.ColorRGBA()
ColorRGBA1158.USE = "HAnimSegmentLineColorRGBA"

LineSet1156.color = ColorRGBA1158

Shape1155.geometry = LineSet1156

HAnimSegment1151.children.append(Shape1155)

HAnimJoint1150.children.append(HAnimSegment1151)
HAnimJoint1159 = x3d.HAnimJoint()
HAnimJoint1159.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint1159.DEF = "hanim_r_carpal_proximal_interphalangeal_2"
HAnimJoint1159.center = [-0.1954,0.7393,-0.0185]
HAnimJoint1159.ulimit = [0,0,0]
HAnimJoint1159.llimit = [0,0,0]
HAnimSegment1160 = x3d.HAnimSegment()
HAnimSegment1160.name = "r_carpal_middle_phalanx_2"
HAnimSegment1160.DEF = "hanim_r_carpal_middle_phalanx_2"
Transform1161 = x3d.Transform()
Transform1161.translation = [-0.1954,0.7393,-0.0185]
Transform1162 = x3d.Transform()
"""Empty Transform"""
Shape1163 = x3d.Shape()
Shape1163.USE = "HAnimJointShape"

Transform1162.children.append(Shape1163)

Transform1161.children.append(Transform1162)

HAnimSegment1160.children.append(Transform1161)
Shape1164 = x3d.Shape()
LineSet1165 = x3d.LineSet()
LineSet1165.vertexCount = [2]
Coordinate1166 = x3d.Coordinate()

LineSet1165.coord = Coordinate1166
"""from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2"""
ColorRGBA1167 = x3d.ColorRGBA()
ColorRGBA1167.USE = "HAnimSegmentLineColorRGBA"

LineSet1165.color = ColorRGBA1167

Shape1164.geometry = LineSet1165

HAnimSegment1160.children.append(Shape1164)

HAnimJoint1159.children.append(HAnimSegment1160)
HAnimJoint1168 = x3d.HAnimJoint()
HAnimJoint1168.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint1168.DEF = "hanim_r_carpal_distal_interphalangeal_2"
HAnimJoint1168.center = [-0.1945,0.7169,-0.0173]
HAnimJoint1168.ulimit = [0,0,0]
HAnimJoint1168.llimit = [0,0,0]

HAnimJoint1159.children.append(HAnimJoint1168)

HAnimJoint1150.children.append(HAnimJoint1159)

HAnimJoint1134.children.append(HAnimJoint1150)

HAnimJoint1083.children.append(HAnimJoint1134)
HAnimJoint1169 = x3d.HAnimJoint()
HAnimJoint1169.name = "r_carpometacarpal_3"
HAnimJoint1169.DEF = "hanim_r_carpometacarpal_3"
HAnimJoint1169.center = [-0.1972,0.806,-0.0468]
HAnimJoint1169.ulimit = [0,0,0]
HAnimJoint1169.llimit = [0,0,0]
HAnimSegment1170 = x3d.HAnimSegment()
HAnimSegment1170.name = "r_metacarpal_3"
HAnimSegment1170.DEF = "hanim_r_metacarpal_3"
Transform1171 = x3d.Transform()
Transform1171.translation = [-0.1972,0.806,-0.0468]
Transform1172 = x3d.Transform()
"""Empty Transform"""
Shape1173 = x3d.Shape()
Shape1173.USE = "HAnimJointShape"

Transform1172.children.append(Shape1173)

Transform1171.children.append(Transform1172)

HAnimSegment1170.children.append(Transform1171)
Shape1174 = x3d.Shape()
LineSet1175 = x3d.LineSet()
LineSet1175.vertexCount = [2]
Coordinate1176 = x3d.Coordinate()

LineSet1175.coord = Coordinate1176
"""from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2"""
ColorRGBA1177 = x3d.ColorRGBA()
ColorRGBA1177.USE = "HAnimSegmentLineColorRGBA"

LineSet1175.color = ColorRGBA1177

Shape1174.geometry = LineSet1175

HAnimSegment1170.children.append(Shape1174)
HAnimSite1178 = x3d.HAnimSite()
HAnimSite1178.name = "r_metacarpal_phalanx_3"
HAnimSite1178.DEF = "hanim_r_metacarpal_phalanx_3"
TouchSensor1179 = x3d.TouchSensor()
TouchSensor1179.description = "HAnimSite 79 r_metacarpal_phalanx_3"

HAnimSite1178.children.append(TouchSensor1179)
Shape1180 = x3d.Shape()
Shape1180.USE = "HAnimSiteShape"

HAnimSite1178.children.append(Shape1180)
Billboard1181 = x3d.Billboard()
Shape1182 = x3d.Shape()
Text1183 = x3d.Text()
Text1183.string = ["79"]
FontStyle1184 = x3d.FontStyle()
FontStyle1184.size = 0.035

Text1183.fontStyle = FontStyle1184

Shape1182.geometry = Text1183

Billboard1181.children.append(Shape1182)

HAnimSite1178.children.append(Billboard1181)

HAnimSegment1170.children.append(HAnimSite1178)

HAnimJoint1169.children.append(HAnimSegment1170)
HAnimJoint1185 = x3d.HAnimJoint()
HAnimJoint1185.name = "r_metacarpophalangeal_3"
HAnimJoint1185.DEF = "hanim_r_metacarpophalangeal_3"
HAnimJoint1185.center = [-0.1972,0.7849,-0.0468]
HAnimJoint1185.ulimit = [0,0,0]
HAnimJoint1185.llimit = [0,0,0]
HAnimSegment1186 = x3d.HAnimSegment()
HAnimSegment1186.name = "r_carpal_proximal_phalanx_3"
HAnimSegment1186.DEF = "hanim_r_carpal_proximal_phalanx_3"
Transform1187 = x3d.Transform()
Transform1187.translation = [-0.1972,0.7849,-0.0468]
Transform1188 = x3d.Transform()
"""Empty Transform"""
Shape1189 = x3d.Shape()
Shape1189.USE = "HAnimJointShape"

Transform1188.children.append(Shape1189)

Transform1187.children.append(Transform1188)

HAnimSegment1186.children.append(Transform1187)
Shape1190 = x3d.Shape()
LineSet1191 = x3d.LineSet()
LineSet1191.vertexCount = [2]
Coordinate1192 = x3d.Coordinate()

LineSet1191.coord = Coordinate1192
"""from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2"""
ColorRGBA1193 = x3d.ColorRGBA()
ColorRGBA1193.USE = "HAnimSegmentLineColorRGBA"

LineSet1191.color = ColorRGBA1193

Shape1190.geometry = LineSet1191

HAnimSegment1186.children.append(Shape1190)

HAnimJoint1185.children.append(HAnimSegment1186)
HAnimJoint1194 = x3d.HAnimJoint()
HAnimJoint1194.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint1194.DEF = "hanim_r_carpal_proximal_interphalangeal_3"
HAnimJoint1194.center = [-0.195,0.7304,-0.0441]
HAnimJoint1194.ulimit = [0,0,0]
HAnimJoint1194.llimit = [0,0,0]
HAnimSegment1195 = x3d.HAnimSegment()
HAnimSegment1195.name = "r_carpal_middle_phalanx_3"
HAnimSegment1195.DEF = "hanim_r_carpal_middle_phalanx_3"
Transform1196 = x3d.Transform()
Transform1196.translation = [-0.195,0.7304,-0.0441]
Transform1197 = x3d.Transform()
"""Empty Transform"""
Shape1198 = x3d.Shape()
Shape1198.USE = "HAnimJointShape"

Transform1197.children.append(Shape1198)

Transform1196.children.append(Transform1197)

HAnimSegment1195.children.append(Transform1196)
Shape1199 = x3d.Shape()
LineSet1200 = x3d.LineSet()
LineSet1200.vertexCount = [2]
Coordinate1201 = x3d.Coordinate()

LineSet1200.coord = Coordinate1201
"""from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2"""
ColorRGBA1202 = x3d.ColorRGBA()
ColorRGBA1202.USE = "HAnimSegmentLineColorRGBA"

LineSet1200.color = ColorRGBA1202

Shape1199.geometry = LineSet1200

HAnimSegment1195.children.append(Shape1199)

HAnimJoint1194.children.append(HAnimSegment1195)
HAnimJoint1203 = x3d.HAnimJoint()
HAnimJoint1203.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint1203.DEF = "hanim_r_carpal_distal_interphalangeal_3"
HAnimJoint1203.center = [-0.1939,0.7042,-0.0432]
HAnimJoint1203.ulimit = [0,0,0]
HAnimJoint1203.llimit = [0,0,0]

HAnimJoint1194.children.append(HAnimJoint1203)

HAnimJoint1185.children.append(HAnimJoint1194)

HAnimJoint1169.children.append(HAnimJoint1185)

HAnimJoint1083.children.append(HAnimJoint1169)
HAnimJoint1204 = x3d.HAnimJoint()
HAnimJoint1204.name = "r_carpometacarpal_4"
HAnimJoint1204.DEF = "hanim_r_carpometacarpal_4"
HAnimJoint1204.center = [-0.1951,0.8049,-0.0732]
HAnimJoint1204.ulimit = [0,0,0]
HAnimJoint1204.llimit = [0,0,0]
HAnimSegment1205 = x3d.HAnimSegment()
HAnimSegment1205.name = "r_metacarpal_4"
HAnimSegment1205.DEF = "hanim_r_metacarpal_4"
Transform1206 = x3d.Transform()
Transform1206.translation = [-0.1951,0.8049,-0.0732]
Transform1207 = x3d.Transform()
"""Empty Transform"""
Shape1208 = x3d.Shape()
Shape1208.USE = "HAnimJointShape"

Transform1207.children.append(Shape1208)

Transform1206.children.append(Transform1207)

HAnimSegment1205.children.append(Transform1206)
Shape1209 = x3d.Shape()
LineSet1210 = x3d.LineSet()
LineSet1210.vertexCount = [2]
Coordinate1211 = x3d.Coordinate()

LineSet1210.coord = Coordinate1211
"""from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2"""
ColorRGBA1212 = x3d.ColorRGBA()
ColorRGBA1212.USE = "HAnimSegmentLineColorRGBA"

LineSet1210.color = ColorRGBA1212

Shape1209.geometry = LineSet1210

HAnimSegment1205.children.append(Shape1209)

HAnimJoint1204.children.append(HAnimSegment1205)
HAnimJoint1213 = x3d.HAnimJoint()
HAnimJoint1213.name = "r_metacarpophalangeal_4"
HAnimJoint1213.DEF = "hanim_r_metacarpophalangeal_4"
HAnimJoint1213.center = [-0.1951,0.7845,-0.0732]
HAnimJoint1213.ulimit = [0,0,0]
HAnimJoint1213.llimit = [0,0,0]
HAnimSegment1214 = x3d.HAnimSegment()
HAnimSegment1214.name = "r_carpal_proximal_phalanx_4"
HAnimSegment1214.DEF = "hanim_r_carpal_proximal_phalanx_4"
Transform1215 = x3d.Transform()
Transform1215.translation = [-0.1951,0.7845,-0.0732]
Transform1216 = x3d.Transform()
"""Empty Transform"""
Shape1217 = x3d.Shape()
Shape1217.USE = "HAnimJointShape"

Transform1216.children.append(Shape1217)

Transform1215.children.append(Transform1216)

HAnimSegment1214.children.append(Transform1215)
Shape1218 = x3d.Shape()
LineSet1219 = x3d.LineSet()
LineSet1219.vertexCount = [2]
Coordinate1220 = x3d.Coordinate()

LineSet1219.coord = Coordinate1220
"""from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2"""
ColorRGBA1221 = x3d.ColorRGBA()
ColorRGBA1221.USE = "HAnimSegmentLineColorRGBA"

LineSet1219.color = ColorRGBA1221

Shape1218.geometry = LineSet1219

HAnimSegment1214.children.append(Shape1218)

HAnimJoint1213.children.append(HAnimSegment1214)
HAnimJoint1222 = x3d.HAnimJoint()
HAnimJoint1222.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint1222.DEF = "hanim_r_carpal_proximal_interphalangeal_4"
HAnimJoint1222.center = [-0.192,0.7318,-0.0716]
HAnimJoint1222.ulimit = [0,0,0]
HAnimJoint1222.llimit = [0,0,0]
HAnimSegment1223 = x3d.HAnimSegment()
HAnimSegment1223.name = "r_carpal_middle_phalanx_4"
HAnimSegment1223.DEF = "hanim_r_carpal_middle_phalanx_4"
Transform1224 = x3d.Transform()
Transform1224.translation = [-0.192,0.7318,-0.0716]
Transform1225 = x3d.Transform()
"""Empty Transform"""
Shape1226 = x3d.Shape()
Shape1226.USE = "HAnimJointShape"

Transform1225.children.append(Shape1226)

Transform1224.children.append(Transform1225)

HAnimSegment1223.children.append(Transform1224)
Shape1227 = x3d.Shape()
LineSet1228 = x3d.LineSet()
LineSet1228.vertexCount = [2]
Coordinate1229 = x3d.Coordinate()

LineSet1228.coord = Coordinate1229
"""from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2"""
ColorRGBA1230 = x3d.ColorRGBA()
ColorRGBA1230.USE = "HAnimSegmentLineColorRGBA"

LineSet1228.color = ColorRGBA1230

Shape1227.geometry = LineSet1228

HAnimSegment1223.children.append(Shape1227)

HAnimJoint1222.children.append(HAnimSegment1223)
HAnimJoint1231 = x3d.HAnimJoint()
HAnimJoint1231.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint1231.DEF = "hanim_r_carpal_distal_interphalangeal_4"
HAnimJoint1231.center = [-0.1908,0.7077,-0.0706]
HAnimJoint1231.ulimit = [0,0,0]
HAnimJoint1231.llimit = [0,0,0]

HAnimJoint1222.children.append(HAnimJoint1231)

HAnimJoint1213.children.append(HAnimJoint1222)

HAnimJoint1204.children.append(HAnimJoint1213)

HAnimJoint1083.children.append(HAnimJoint1204)
HAnimJoint1232 = x3d.HAnimJoint()
HAnimJoint1232.name = "r_carpometacarpal_5"
HAnimJoint1232.DEF = "hanim_r_carpometacarpal_5"
HAnimJoint1232.center = [-0.1926,0.8096,-0.0975]
HAnimJoint1232.ulimit = [0,0,0]
HAnimJoint1232.llimit = [0,0,0]
HAnimSegment1233 = x3d.HAnimSegment()
HAnimSegment1233.name = "r_metacarpal_5"
HAnimSegment1233.DEF = "hanim_r_metacarpal_5"
Transform1234 = x3d.Transform()
Transform1234.translation = [-0.1926,0.8096,-0.0975]
Transform1235 = x3d.Transform()
"""Empty Transform"""
Shape1236 = x3d.Shape()
Shape1236.USE = "HAnimJointShape"

Transform1235.children.append(Shape1236)

Transform1234.children.append(Transform1235)

HAnimSegment1233.children.append(Transform1234)
Shape1237 = x3d.Shape()
LineSet1238 = x3d.LineSet()
LineSet1238.vertexCount = [2]
Coordinate1239 = x3d.Coordinate()

LineSet1238.coord = Coordinate1239
"""from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2"""
ColorRGBA1240 = x3d.ColorRGBA()
ColorRGBA1240.USE = "HAnimSegmentLineColorRGBA"

LineSet1238.color = ColorRGBA1240

Shape1237.geometry = LineSet1238

HAnimSegment1233.children.append(Shape1237)
HAnimSite1241 = x3d.HAnimSite()
HAnimSite1241.name = "r_metacarpal_phalanx_5"
HAnimSite1241.DEF = "hanim_r_metacarpal_phalanx_5"
HAnimSite1241.translation = [-0.1929,0.789,-0.1064]
TouchSensor1242 = x3d.TouchSensor()
TouchSensor1242.description = "HAnimSite 80 r_metacarpal_phalanx_5"

HAnimSite1241.children.append(TouchSensor1242)
Shape1243 = x3d.Shape()
Shape1243.USE = "HAnimSiteShape"

HAnimSite1241.children.append(Shape1243)
Billboard1244 = x3d.Billboard()
Shape1245 = x3d.Shape()
Text1246 = x3d.Text()
Text1246.string = ["80"]
FontStyle1247 = x3d.FontStyle()
FontStyle1247.size = 0.035

Text1246.fontStyle = FontStyle1247

Shape1245.geometry = Text1246

Billboard1244.children.append(Shape1245)

HAnimSite1241.children.append(Billboard1244)

HAnimSegment1233.children.append(HAnimSite1241)

HAnimJoint1232.children.append(HAnimSegment1233)
HAnimJoint1248 = x3d.HAnimJoint()
HAnimJoint1248.name = "r_metacarpophalangeal_5"
HAnimJoint1248.DEF = "hanim_r_metacarpophalangeal_5"
HAnimJoint1248.center = [-0.1926,0.7896,-0.0975]
HAnimJoint1248.ulimit = [0,0,0]
HAnimJoint1248.llimit = [0,0,0]
HAnimSegment1249 = x3d.HAnimSegment()
HAnimSegment1249.name = "r_carpal_proximal_phalanx_5"
HAnimSegment1249.DEF = "hanim_r_carpal_proximal_phalanx_5"
Transform1250 = x3d.Transform()
Transform1250.translation = [-0.1926,0.7896,-0.0975]
Transform1251 = x3d.Transform()
"""Empty Transform"""
Shape1252 = x3d.Shape()
Shape1252.USE = "HAnimJointShape"

Transform1251.children.append(Shape1252)

Transform1250.children.append(Transform1251)

HAnimSegment1249.children.append(Transform1250)
Shape1253 = x3d.Shape()
LineSet1254 = x3d.LineSet()
LineSet1254.vertexCount = [2]
Coordinate1255 = x3d.Coordinate()

LineSet1254.coord = Coordinate1255
"""from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2"""
ColorRGBA1256 = x3d.ColorRGBA()
ColorRGBA1256.USE = "HAnimSegmentLineColorRGBA"

LineSet1254.color = ColorRGBA1256

Shape1253.geometry = LineSet1254

HAnimSegment1249.children.append(Shape1253)

HAnimJoint1248.children.append(HAnimSegment1249)
HAnimJoint1257 = x3d.HAnimJoint()
HAnimJoint1257.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint1257.DEF = "hanim_r_carpal_proximal_interphalangeal_5"
HAnimJoint1257.center = [-0.1902,0.7483,-0.0963]
HAnimJoint1257.ulimit = [0,0,0]
HAnimJoint1257.llimit = [0,0,0]
HAnimSegment1258 = x3d.HAnimSegment()
HAnimSegment1258.name = "r_carpal_middle_phalanx_5"
HAnimSegment1258.DEF = "hanim_r_carpal_middle_phalanx_5"
Transform1259 = x3d.Transform()
Transform1259.translation = [-0.1902,0.7483,-0.0963]
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
"""from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2"""
ColorRGBA1265 = x3d.ColorRGBA()
ColorRGBA1265.USE = "HAnimSegmentLineColorRGBA"

LineSet1263.color = ColorRGBA1265

Shape1262.geometry = LineSet1263

HAnimSegment1258.children.append(Shape1262)

HAnimJoint1257.children.append(HAnimSegment1258)
HAnimJoint1266 = x3d.HAnimJoint()
HAnimJoint1266.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint1266.DEF = "hanim_r_carpal_distal_interphalangeal_5"
HAnimJoint1266.center = [-0.1908,0.754,-0.096]
HAnimJoint1266.ulimit = [0,0,0]
HAnimJoint1266.llimit = [0,0,0]

HAnimJoint1257.children.append(HAnimJoint1266)

HAnimJoint1248.children.append(HAnimJoint1257)

HAnimJoint1232.children.append(HAnimJoint1248)

HAnimJoint1083.children.append(HAnimJoint1232)

HAnimJoint1046.children.append(HAnimJoint1083)

HAnimJoint1023.children.append(HAnimJoint1046)

HAnimJoint1014.children.append(HAnimJoint1023)

HAnimJoint970.children.append(HAnimJoint1014)

HAnimJoint602.children.append(HAnimJoint970)

HAnimJoint565.children.append(HAnimJoint602)

HAnimJoint535.children.append(HAnimJoint565)

HAnimJoint526.children.append(HAnimJoint535)

HAnimJoint489.children.append(HAnimJoint526)

HAnimJoint459.children.append(HAnimJoint489)

HAnimJoint47.children.append(HAnimJoint459)

HAnimHumanoid38.skeleton.append(HAnimJoint47)
HAnimJoint1267 = x3d.HAnimJoint()
HAnimJoint1267.USE = "hanim_humanoid_root"

HAnimHumanoid38.joints.append(HAnimJoint1267)
HAnimJoint1268 = x3d.HAnimJoint()
HAnimJoint1268.USE = "hanim_sacroiliac"

HAnimHumanoid38.joints.append(HAnimJoint1268)
HAnimJoint1269 = x3d.HAnimJoint()
HAnimJoint1269.USE = "hanim_l_hip"

HAnimHumanoid38.joints.append(HAnimJoint1269)
HAnimJoint1270 = x3d.HAnimJoint()
HAnimJoint1270.USE = "hanim_l_knee"

HAnimHumanoid38.joints.append(HAnimJoint1270)
HAnimJoint1271 = x3d.HAnimJoint()
HAnimJoint1271.USE = "hanim_l_talocrural"

HAnimHumanoid38.joints.append(HAnimJoint1271)
HAnimJoint1272 = x3d.HAnimJoint()
HAnimJoint1272.USE = "hanim_l_tarsometatarsal_2"

HAnimHumanoid38.joints.append(HAnimJoint1272)
HAnimJoint1273 = x3d.HAnimJoint()
HAnimJoint1273.USE = "hanim_l_metatarsophalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1273)
HAnimJoint1274 = x3d.HAnimJoint()
HAnimJoint1274.USE = "hanim_l_tarsal_distal_interphalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1274)
HAnimJoint1275 = x3d.HAnimJoint()
HAnimJoint1275.USE = "hanim_r_hip"

HAnimHumanoid38.joints.append(HAnimJoint1275)
HAnimJoint1276 = x3d.HAnimJoint()
HAnimJoint1276.USE = "hanim_r_knee"

HAnimHumanoid38.joints.append(HAnimJoint1276)
HAnimJoint1277 = x3d.HAnimJoint()
HAnimJoint1277.USE = "hanim_r_talocrural"

HAnimHumanoid38.joints.append(HAnimJoint1277)
HAnimJoint1278 = x3d.HAnimJoint()
HAnimJoint1278.USE = "hanim_r_tarsometatarsal_2"

HAnimHumanoid38.joints.append(HAnimJoint1278)
HAnimJoint1279 = x3d.HAnimJoint()
HAnimJoint1279.USE = "hanim_r_metatarsophalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1279)
HAnimJoint1280 = x3d.HAnimJoint()
HAnimJoint1280.USE = "hanim_r_tarsal_distal_interphalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1280)
HAnimJoint1281 = x3d.HAnimJoint()
HAnimJoint1281.USE = "hanim_vl5"

HAnimHumanoid38.joints.append(HAnimJoint1281)
HAnimJoint1282 = x3d.HAnimJoint()
HAnimJoint1282.USE = "hanim_vl3"

HAnimHumanoid38.joints.append(HAnimJoint1282)
HAnimJoint1283 = x3d.HAnimJoint()
HAnimJoint1283.USE = "hanim_vl1"

HAnimHumanoid38.joints.append(HAnimJoint1283)
HAnimJoint1284 = x3d.HAnimJoint()
HAnimJoint1284.USE = "hanim_vt10"

HAnimHumanoid38.joints.append(HAnimJoint1284)
HAnimJoint1285 = x3d.HAnimJoint()
HAnimJoint1285.USE = "hanim_vt6"

HAnimHumanoid38.joints.append(HAnimJoint1285)
HAnimJoint1286 = x3d.HAnimJoint()
HAnimJoint1286.USE = "hanim_vt1"

HAnimHumanoid38.joints.append(HAnimJoint1286)
HAnimJoint1287 = x3d.HAnimJoint()
HAnimJoint1287.USE = "hanim_vc4"

HAnimHumanoid38.joints.append(HAnimJoint1287)
HAnimJoint1288 = x3d.HAnimJoint()
HAnimJoint1288.USE = "hanim_vc2"

HAnimHumanoid38.joints.append(HAnimJoint1288)
HAnimJoint1289 = x3d.HAnimJoint()
HAnimJoint1289.USE = "hanim_skullbase"

HAnimHumanoid38.joints.append(HAnimJoint1289)
HAnimJoint1290 = x3d.HAnimJoint()
HAnimJoint1290.USE = "hanim_l_sternoclavicular"

HAnimHumanoid38.joints.append(HAnimJoint1290)
HAnimJoint1291 = x3d.HAnimJoint()
HAnimJoint1291.USE = "hanim_l_acromioclavicular"

HAnimHumanoid38.joints.append(HAnimJoint1291)
HAnimJoint1292 = x3d.HAnimJoint()
HAnimJoint1292.USE = "hanim_l_shoulder"

HAnimHumanoid38.joints.append(HAnimJoint1292)
HAnimJoint1293 = x3d.HAnimJoint()
HAnimJoint1293.USE = "hanim_l_elbow"

HAnimHumanoid38.joints.append(HAnimJoint1293)
HAnimJoint1294 = x3d.HAnimJoint()
HAnimJoint1294.USE = "hanim_l_radiocarpal"

HAnimHumanoid38.joints.append(HAnimJoint1294)
HAnimJoint1295 = x3d.HAnimJoint()
HAnimJoint1295.USE = "hanim_l_carpometacarpal_1"

HAnimHumanoid38.joints.append(HAnimJoint1295)
HAnimJoint1296 = x3d.HAnimJoint()
HAnimJoint1296.USE = "hanim_l_metacarpophalangeal_1"

HAnimHumanoid38.joints.append(HAnimJoint1296)
HAnimJoint1297 = x3d.HAnimJoint()
HAnimJoint1297.USE = "hanim_l_carpal_interphalangeal_1"

HAnimHumanoid38.joints.append(HAnimJoint1297)
HAnimJoint1298 = x3d.HAnimJoint()
HAnimJoint1298.USE = "hanim_l_carpometacarpal_2"

HAnimHumanoid38.joints.append(HAnimJoint1298)
HAnimJoint1299 = x3d.HAnimJoint()
HAnimJoint1299.USE = "hanim_l_metacarpophalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1299)
HAnimJoint1300 = x3d.HAnimJoint()
HAnimJoint1300.USE = "hanim_l_carpal_proximal_interphalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1300)
HAnimJoint1301 = x3d.HAnimJoint()
HAnimJoint1301.USE = "hanim_l_carpal_distal_interphalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1301)
HAnimJoint1302 = x3d.HAnimJoint()
HAnimJoint1302.USE = "hanim_l_carpometacarpal_3"

HAnimHumanoid38.joints.append(HAnimJoint1302)
HAnimJoint1303 = x3d.HAnimJoint()
HAnimJoint1303.USE = "hanim_l_metacarpophalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint1303)
HAnimJoint1304 = x3d.HAnimJoint()
HAnimJoint1304.USE = "hanim_l_carpal_proximal_interphalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint1304)
HAnimJoint1305 = x3d.HAnimJoint()
HAnimJoint1305.USE = "hanim_l_carpal_distal_interphalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint1305)
HAnimJoint1306 = x3d.HAnimJoint()
HAnimJoint1306.USE = "hanim_l_carpometacarpal_4"

HAnimHumanoid38.joints.append(HAnimJoint1306)
HAnimJoint1307 = x3d.HAnimJoint()
HAnimJoint1307.USE = "hanim_l_metacarpophalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint1307)
HAnimJoint1308 = x3d.HAnimJoint()
HAnimJoint1308.USE = "hanim_l_carpal_proximal_interphalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint1308)
HAnimJoint1309 = x3d.HAnimJoint()
HAnimJoint1309.USE = "hanim_l_carpal_distal_interphalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint1309)
HAnimJoint1310 = x3d.HAnimJoint()
HAnimJoint1310.USE = "hanim_l_carpometacarpal_5"

HAnimHumanoid38.joints.append(HAnimJoint1310)
HAnimJoint1311 = x3d.HAnimJoint()
HAnimJoint1311.USE = "hanim_l_metacarpophalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint1311)
HAnimJoint1312 = x3d.HAnimJoint()
HAnimJoint1312.USE = "hanim_l_carpal_proximal_interphalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint1312)
HAnimJoint1313 = x3d.HAnimJoint()
HAnimJoint1313.USE = "hanim_l_carpal_distal_interphalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint1313)
HAnimJoint1314 = x3d.HAnimJoint()
HAnimJoint1314.USE = "hanim_r_sternoclavicular"

HAnimHumanoid38.joints.append(HAnimJoint1314)
HAnimJoint1315 = x3d.HAnimJoint()
HAnimJoint1315.USE = "hanim_r_acromioclavicular"

HAnimHumanoid38.joints.append(HAnimJoint1315)
HAnimJoint1316 = x3d.HAnimJoint()
HAnimJoint1316.USE = "hanim_r_shoulder"

HAnimHumanoid38.joints.append(HAnimJoint1316)
HAnimJoint1317 = x3d.HAnimJoint()
HAnimJoint1317.USE = "hanim_r_elbow"

HAnimHumanoid38.joints.append(HAnimJoint1317)
HAnimJoint1318 = x3d.HAnimJoint()
HAnimJoint1318.USE = "hanim_r_radiocarpal"

HAnimHumanoid38.joints.append(HAnimJoint1318)
HAnimJoint1319 = x3d.HAnimJoint()
HAnimJoint1319.USE = "hanim_r_carpometacarpal_1"

HAnimHumanoid38.joints.append(HAnimJoint1319)
HAnimJoint1320 = x3d.HAnimJoint()
HAnimJoint1320.USE = "hanim_r_metacarpophalangeal_1"

HAnimHumanoid38.joints.append(HAnimJoint1320)
HAnimJoint1321 = x3d.HAnimJoint()
HAnimJoint1321.USE = "hanim_r_carpal_interphalangeal_1"

HAnimHumanoid38.joints.append(HAnimJoint1321)
HAnimJoint1322 = x3d.HAnimJoint()
HAnimJoint1322.USE = "hanim_r_carpometacarpal_2"

HAnimHumanoid38.joints.append(HAnimJoint1322)
HAnimJoint1323 = x3d.HAnimJoint()
HAnimJoint1323.USE = "hanim_r_metacarpophalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1323)
HAnimJoint1324 = x3d.HAnimJoint()
HAnimJoint1324.USE = "hanim_r_carpal_proximal_interphalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1324)
HAnimJoint1325 = x3d.HAnimJoint()
HAnimJoint1325.USE = "hanim_r_carpal_distal_interphalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1325)
HAnimJoint1326 = x3d.HAnimJoint()
HAnimJoint1326.USE = "hanim_r_carpometacarpal_3"

HAnimHumanoid38.joints.append(HAnimJoint1326)
HAnimJoint1327 = x3d.HAnimJoint()
HAnimJoint1327.USE = "hanim_r_metacarpophalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint1327)
HAnimJoint1328 = x3d.HAnimJoint()
HAnimJoint1328.USE = "hanim_r_carpal_proximal_interphalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint1328)
HAnimJoint1329 = x3d.HAnimJoint()
HAnimJoint1329.USE = "hanim_r_carpal_distal_interphalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint1329)
HAnimJoint1330 = x3d.HAnimJoint()
HAnimJoint1330.USE = "hanim_r_carpometacarpal_4"

HAnimHumanoid38.joints.append(HAnimJoint1330)
HAnimJoint1331 = x3d.HAnimJoint()
HAnimJoint1331.USE = "hanim_r_metacarpophalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint1331)
HAnimJoint1332 = x3d.HAnimJoint()
HAnimJoint1332.USE = "hanim_r_carpal_proximal_interphalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint1332)
HAnimJoint1333 = x3d.HAnimJoint()
HAnimJoint1333.USE = "hanim_r_carpal_distal_interphalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint1333)
HAnimJoint1334 = x3d.HAnimJoint()
HAnimJoint1334.USE = "hanim_r_carpometacarpal_5"

HAnimHumanoid38.joints.append(HAnimJoint1334)
HAnimJoint1335 = x3d.HAnimJoint()
HAnimJoint1335.USE = "hanim_r_metacarpophalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint1335)
HAnimJoint1336 = x3d.HAnimJoint()
HAnimJoint1336.USE = "hanim_r_carpal_proximal_interphalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint1336)
HAnimJoint1337 = x3d.HAnimJoint()
HAnimJoint1337.USE = "hanim_r_carpal_distal_interphalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint1337)
HAnimSegment1338 = x3d.HAnimSegment()
HAnimSegment1338.USE = "hanim_sacrum"

HAnimHumanoid38.segments.append(HAnimSegment1338)
HAnimSegment1339 = x3d.HAnimSegment()
HAnimSegment1339.USE = "hanim_pelvis"

HAnimHumanoid38.segments.append(HAnimSegment1339)
HAnimSegment1340 = x3d.HAnimSegment()
HAnimSegment1340.USE = "hanim_l_thigh"

HAnimHumanoid38.segments.append(HAnimSegment1340)
HAnimSegment1341 = x3d.HAnimSegment()
HAnimSegment1341.USE = "hanim_l_calf"

HAnimHumanoid38.segments.append(HAnimSegment1341)
HAnimSegment1342 = x3d.HAnimSegment()
HAnimSegment1342.USE = "hanim_l_talus"

HAnimHumanoid38.segments.append(HAnimSegment1342)
HAnimSegment1343 = x3d.HAnimSegment()
HAnimSegment1343.USE = "hanim_l_metatarsal_2"

HAnimHumanoid38.segments.append(HAnimSegment1343)
HAnimSegment1344 = x3d.HAnimSegment()
HAnimSegment1344.USE = "hanim_l_tarsal_proximal_phalanx_2"

HAnimHumanoid38.segments.append(HAnimSegment1344)
HAnimSegment1345 = x3d.HAnimSegment()
HAnimSegment1345.USE = "hanim_r_thigh"

HAnimHumanoid38.segments.append(HAnimSegment1345)
HAnimSegment1346 = x3d.HAnimSegment()
HAnimSegment1346.USE = "hanim_r_calf"

HAnimHumanoid38.segments.append(HAnimSegment1346)
HAnimSegment1347 = x3d.HAnimSegment()
HAnimSegment1347.USE = "hanim_r_talus"

HAnimHumanoid38.segments.append(HAnimSegment1347)
HAnimSegment1348 = x3d.HAnimSegment()
HAnimSegment1348.USE = "hanim_r_metatarsal_2"

HAnimHumanoid38.segments.append(HAnimSegment1348)
HAnimSegment1349 = x3d.HAnimSegment()
HAnimSegment1349.USE = "hanim_r_tarsal_proximal_phalanx_2"

HAnimHumanoid38.segments.append(HAnimSegment1349)
HAnimSegment1350 = x3d.HAnimSegment()
HAnimSegment1350.USE = "hanim_l5"

HAnimHumanoid38.segments.append(HAnimSegment1350)
HAnimSegment1351 = x3d.HAnimSegment()
HAnimSegment1351.USE = "hanim_l3"

HAnimHumanoid38.segments.append(HAnimSegment1351)
HAnimSegment1352 = x3d.HAnimSegment()
HAnimSegment1352.USE = "hanim_l1"

HAnimHumanoid38.segments.append(HAnimSegment1352)
HAnimSegment1353 = x3d.HAnimSegment()
HAnimSegment1353.USE = "hanim_t10"

HAnimHumanoid38.segments.append(HAnimSegment1353)
HAnimSegment1354 = x3d.HAnimSegment()
HAnimSegment1354.USE = "hanim_t6"

HAnimHumanoid38.segments.append(HAnimSegment1354)
HAnimSegment1355 = x3d.HAnimSegment()
HAnimSegment1355.USE = "hanim_t1"

HAnimHumanoid38.segments.append(HAnimSegment1355)
HAnimSegment1356 = x3d.HAnimSegment()
HAnimSegment1356.USE = "hanim_c4"

HAnimHumanoid38.segments.append(HAnimSegment1356)
HAnimSegment1357 = x3d.HAnimSegment()
HAnimSegment1357.USE = "hanim_c2"

HAnimHumanoid38.segments.append(HAnimSegment1357)
HAnimSegment1358 = x3d.HAnimSegment()
HAnimSegment1358.USE = "hanim_l_clavicle"

HAnimHumanoid38.segments.append(HAnimSegment1358)
HAnimSegment1359 = x3d.HAnimSegment()
HAnimSegment1359.USE = "hanim_l_scapula"

HAnimHumanoid38.segments.append(HAnimSegment1359)
HAnimSegment1360 = x3d.HAnimSegment()
HAnimSegment1360.USE = "hanim_l_upperarm"

HAnimHumanoid38.segments.append(HAnimSegment1360)
HAnimSegment1361 = x3d.HAnimSegment()
HAnimSegment1361.USE = "hanim_l_forearm"

HAnimHumanoid38.segments.append(HAnimSegment1361)
HAnimSegment1362 = x3d.HAnimSegment()
HAnimSegment1362.USE = "hanim_l_carpal"

HAnimHumanoid38.segments.append(HAnimSegment1362)
HAnimSegment1363 = x3d.HAnimSegment()
HAnimSegment1363.USE = "hanim_l_metacarpal_1"

HAnimHumanoid38.segments.append(HAnimSegment1363)
HAnimSegment1364 = x3d.HAnimSegment()
HAnimSegment1364.USE = "hanim_l_carpal_proximal_phalanx_1"

HAnimHumanoid38.segments.append(HAnimSegment1364)
HAnimSegment1365 = x3d.HAnimSegment()
HAnimSegment1365.USE = "hanim_l_metacarpal_2"

HAnimHumanoid38.segments.append(HAnimSegment1365)
HAnimSegment1366 = x3d.HAnimSegment()
HAnimSegment1366.USE = "hanim_l_carpal_proximal_phalanx_2"

HAnimHumanoid38.segments.append(HAnimSegment1366)
HAnimSegment1367 = x3d.HAnimSegment()
HAnimSegment1367.USE = "hanim_l_carpal_middle_phalanx_2"

HAnimHumanoid38.segments.append(HAnimSegment1367)
HAnimSegment1368 = x3d.HAnimSegment()
HAnimSegment1368.USE = "hanim_l_metacarpal_3"

HAnimHumanoid38.segments.append(HAnimSegment1368)
HAnimSegment1369 = x3d.HAnimSegment()
HAnimSegment1369.USE = "hanim_l_carpal_proximal_phalanx_3"

HAnimHumanoid38.segments.append(HAnimSegment1369)
HAnimSegment1370 = x3d.HAnimSegment()
HAnimSegment1370.USE = "hanim_l_carpal_middle_phalanx_3"

HAnimHumanoid38.segments.append(HAnimSegment1370)
HAnimSegment1371 = x3d.HAnimSegment()
HAnimSegment1371.USE = "hanim_l_metacarpal_4"

HAnimHumanoid38.segments.append(HAnimSegment1371)
HAnimSegment1372 = x3d.HAnimSegment()
HAnimSegment1372.USE = "hanim_l_carpal_proximal_phalanx_4"

HAnimHumanoid38.segments.append(HAnimSegment1372)
HAnimSegment1373 = x3d.HAnimSegment()
HAnimSegment1373.USE = "hanim_l_carpal_middle_phalanx_4"

HAnimHumanoid38.segments.append(HAnimSegment1373)
HAnimSegment1374 = x3d.HAnimSegment()
HAnimSegment1374.USE = "hanim_l_metacarpal_5"

HAnimHumanoid38.segments.append(HAnimSegment1374)
HAnimSegment1375 = x3d.HAnimSegment()
HAnimSegment1375.USE = "hanim_l_carpal_proximal_phalanx_5"

HAnimHumanoid38.segments.append(HAnimSegment1375)
HAnimSegment1376 = x3d.HAnimSegment()
HAnimSegment1376.USE = "hanim_l_carpal_middle_phalanx_5"

HAnimHumanoid38.segments.append(HAnimSegment1376)
HAnimSegment1377 = x3d.HAnimSegment()
HAnimSegment1377.USE = "hanim_r_clavicle"

HAnimHumanoid38.segments.append(HAnimSegment1377)
HAnimSegment1378 = x3d.HAnimSegment()
HAnimSegment1378.USE = "hanim_r_scapula"

HAnimHumanoid38.segments.append(HAnimSegment1378)
HAnimSegment1379 = x3d.HAnimSegment()
HAnimSegment1379.USE = "hanim_r_upperarm"

HAnimHumanoid38.segments.append(HAnimSegment1379)
HAnimSegment1380 = x3d.HAnimSegment()
HAnimSegment1380.USE = "hanim_r_forearm"

HAnimHumanoid38.segments.append(HAnimSegment1380)
HAnimSegment1381 = x3d.HAnimSegment()
HAnimSegment1381.USE = "hanim_r_carpal"

HAnimHumanoid38.segments.append(HAnimSegment1381)
HAnimSegment1382 = x3d.HAnimSegment()
HAnimSegment1382.USE = "hanim_r_metacarpal_1"

HAnimHumanoid38.segments.append(HAnimSegment1382)
HAnimSegment1383 = x3d.HAnimSegment()
HAnimSegment1383.USE = "hanim_r_carpal_proximal_phalanx_1"

HAnimHumanoid38.segments.append(HAnimSegment1383)
HAnimSegment1384 = x3d.HAnimSegment()
HAnimSegment1384.USE = "hanim_r_metacarpal_2"

HAnimHumanoid38.segments.append(HAnimSegment1384)
HAnimSegment1385 = x3d.HAnimSegment()
HAnimSegment1385.USE = "hanim_r_carpal_proximal_phalanx_2"

HAnimHumanoid38.segments.append(HAnimSegment1385)
HAnimSegment1386 = x3d.HAnimSegment()
HAnimSegment1386.USE = "hanim_r_carpal_middle_phalanx_2"

HAnimHumanoid38.segments.append(HAnimSegment1386)
HAnimSegment1387 = x3d.HAnimSegment()
HAnimSegment1387.USE = "hanim_r_metacarpal_3"

HAnimHumanoid38.segments.append(HAnimSegment1387)
HAnimSegment1388 = x3d.HAnimSegment()
HAnimSegment1388.USE = "hanim_r_carpal_proximal_phalanx_3"

HAnimHumanoid38.segments.append(HAnimSegment1388)
HAnimSegment1389 = x3d.HAnimSegment()
HAnimSegment1389.USE = "hanim_r_carpal_middle_phalanx_3"

HAnimHumanoid38.segments.append(HAnimSegment1389)
HAnimSegment1390 = x3d.HAnimSegment()
HAnimSegment1390.USE = "hanim_r_metacarpal_4"

HAnimHumanoid38.segments.append(HAnimSegment1390)
HAnimSegment1391 = x3d.HAnimSegment()
HAnimSegment1391.USE = "hanim_r_carpal_proximal_phalanx_4"

HAnimHumanoid38.segments.append(HAnimSegment1391)
HAnimSegment1392 = x3d.HAnimSegment()
HAnimSegment1392.USE = "hanim_r_carpal_middle_phalanx_4"

HAnimHumanoid38.segments.append(HAnimSegment1392)
HAnimSegment1393 = x3d.HAnimSegment()
HAnimSegment1393.USE = "hanim_r_metacarpal_5"

HAnimHumanoid38.segments.append(HAnimSegment1393)
HAnimSegment1394 = x3d.HAnimSegment()
HAnimSegment1394.USE = "hanim_r_carpal_proximal_phalanx_5"

HAnimHumanoid38.segments.append(HAnimSegment1394)
HAnimSegment1395 = x3d.HAnimSegment()
HAnimSegment1395.USE = "hanim_r_carpal_middle_phalanx_5"

HAnimHumanoid38.segments.append(HAnimSegment1395)
HAnimSite1396 = x3d.HAnimSite()
HAnimSite1396.USE = "hanim_buttocks_standing_wall_contact_point"

HAnimHumanoid38.sites.append(HAnimSite1396)
HAnimSite1397 = x3d.HAnimSite()
HAnimSite1397.USE = "hanim_crotch"

HAnimHumanoid38.sites.append(HAnimSite1397)
HAnimSite1398 = x3d.HAnimSite()
HAnimSite1398.USE = "hanim_l_asis"

HAnimHumanoid38.sites.append(HAnimSite1398)
HAnimSite1399 = x3d.HAnimSite()
HAnimSite1399.USE = "hanim_l_iliocristale"

HAnimHumanoid38.sites.append(HAnimSite1399)
HAnimSite1400 = x3d.HAnimSite()
HAnimSite1400.USE = "hanim_l_psis"

HAnimHumanoid38.sites.append(HAnimSite1400)
HAnimSite1401 = x3d.HAnimSite()
HAnimSite1401.USE = "hanim_l_trochanterion"

HAnimHumanoid38.sites.append(HAnimSite1401)
HAnimSite1402 = x3d.HAnimSite()
HAnimSite1402.USE = "hanim_r_asis"

HAnimHumanoid38.sites.append(HAnimSite1402)
HAnimSite1403 = x3d.HAnimSite()
HAnimSite1403.USE = "hanim_r_iliocristale"

HAnimHumanoid38.sites.append(HAnimSite1403)
HAnimSite1404 = x3d.HAnimSite()
HAnimSite1404.USE = "hanim_r_psis"

HAnimHumanoid38.sites.append(HAnimSite1404)
HAnimSite1405 = x3d.HAnimSite()
HAnimSite1405.USE = "hanim_r_trochanterion"

HAnimHumanoid38.sites.append(HAnimSite1405)
HAnimSite1406 = x3d.HAnimSite()
HAnimSite1406.USE = "hanim_l_femoral_lateral_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite1406)
HAnimSite1407 = x3d.HAnimSite()
HAnimSite1407.USE = "hanim_l_femoral_medial_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite1407)
HAnimSite1408 = x3d.HAnimSite()
HAnimSite1408.USE = "hanim_l_knee_crease"

HAnimHumanoid38.sites.append(HAnimSite1408)
HAnimSite1409 = x3d.HAnimSite()
HAnimSite1409.USE = "hanim_l_suprapatella"

HAnimHumanoid38.sites.append(HAnimSite1409)
HAnimSite1410 = x3d.HAnimSite()
HAnimSite1410.USE = "hanim_l_lateral_malleolus"

HAnimHumanoid38.sites.append(HAnimSite1410)
HAnimSite1411 = x3d.HAnimSite()
HAnimSite1411.USE = "hanim_l_medial_malleolus"

HAnimHumanoid38.sites.append(HAnimSite1411)
HAnimSite1412 = x3d.HAnimSite()
HAnimSite1412.USE = "hanim_l_tibiale"

HAnimHumanoid38.sites.append(HAnimSite1412)
HAnimSite1413 = x3d.HAnimSite()
HAnimSite1413.USE = "hanim_l_calcaneus_posterior"

HAnimHumanoid38.sites.append(HAnimSite1413)
HAnimSite1414 = x3d.HAnimSite()
HAnimSite1414.USE = "hanim_l_sphyrion"

HAnimHumanoid38.sites.append(HAnimSite1414)
HAnimSite1415 = x3d.HAnimSite()
HAnimSite1415.USE = "hanim_l_metatarsal_phalanx_1"

HAnimHumanoid38.sites.append(HAnimSite1415)
HAnimSite1416 = x3d.HAnimSite()
HAnimSite1416.USE = "hanim_l_metatarsal_phalanx_5"

HAnimHumanoid38.sites.append(HAnimSite1416)
HAnimSite1417 = x3d.HAnimSite()
HAnimSite1417.USE = "hanim_l_tarsal_distal_phalanx_1_tip"

HAnimHumanoid38.sites.append(HAnimSite1417)
HAnimSite1418 = x3d.HAnimSite()
HAnimSite1418.USE = "hanim_l_tarsal_distal_phalanx_2_tip"

HAnimHumanoid38.sites.append(HAnimSite1418)
HAnimSite1419 = x3d.HAnimSite()
HAnimSite1419.USE = "hanim_l_tarsal_distal_phalanx_3_tip"

HAnimHumanoid38.sites.append(HAnimSite1419)
HAnimSite1420 = x3d.HAnimSite()
HAnimSite1420.USE = "hanim_l_tarsal_distal_phalanx_4_tip"

HAnimHumanoid38.sites.append(HAnimSite1420)
HAnimSite1421 = x3d.HAnimSite()
HAnimSite1421.USE = "hanim_l_tarsal_distal_phalanx_5_tip"

HAnimHumanoid38.sites.append(HAnimSite1421)
HAnimSite1422 = x3d.HAnimSite()
HAnimSite1422.USE = "hanim_r_femoral_lateral_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite1422)
HAnimSite1423 = x3d.HAnimSite()
HAnimSite1423.USE = "hanim_r_femoral_medial_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite1423)
HAnimSite1424 = x3d.HAnimSite()
HAnimSite1424.USE = "hanim_r_knee_crease"

HAnimHumanoid38.sites.append(HAnimSite1424)
HAnimSite1425 = x3d.HAnimSite()
HAnimSite1425.USE = "hanim_r_suprapatella"

HAnimHumanoid38.sites.append(HAnimSite1425)
HAnimSite1426 = x3d.HAnimSite()
HAnimSite1426.USE = "hanim_r_lateral_malleolus"

HAnimHumanoid38.sites.append(HAnimSite1426)
HAnimSite1427 = x3d.HAnimSite()
HAnimSite1427.USE = "hanim_r_medial_malleolus"

HAnimHumanoid38.sites.append(HAnimSite1427)
HAnimSite1428 = x3d.HAnimSite()
HAnimSite1428.USE = "hanim_r_tibiale"

HAnimHumanoid38.sites.append(HAnimSite1428)
HAnimSite1429 = x3d.HAnimSite()
HAnimSite1429.USE = "hanim_r_calcaneus_posterior"

HAnimHumanoid38.sites.append(HAnimSite1429)
HAnimSite1430 = x3d.HAnimSite()
HAnimSite1430.USE = "hanim_r_sphyrion"

HAnimHumanoid38.sites.append(HAnimSite1430)
HAnimSite1431 = x3d.HAnimSite()
HAnimSite1431.USE = "hanim_r_metatarsal_phalanx_1"

HAnimHumanoid38.sites.append(HAnimSite1431)
HAnimSite1432 = x3d.HAnimSite()
HAnimSite1432.USE = "hanim_r_metatarsal_phalanx_5"

HAnimHumanoid38.sites.append(HAnimSite1432)
HAnimSite1433 = x3d.HAnimSite()
HAnimSite1433.USE = "hanim_r_tarsal_distal_phalanx_1_tip"

HAnimHumanoid38.sites.append(HAnimSite1433)
HAnimSite1434 = x3d.HAnimSite()
HAnimSite1434.USE = "hanim_r_tarsal_distal_phalanx_2_tip"

HAnimHumanoid38.sites.append(HAnimSite1434)
HAnimSite1435 = x3d.HAnimSite()
HAnimSite1435.USE = "hanim_r_tarsal_distal_phalanx_3_tip"

HAnimHumanoid38.sites.append(HAnimSite1435)
HAnimSite1436 = x3d.HAnimSite()
HAnimSite1436.USE = "hanim_r_tarsal_distal_phalanx_4_tip"

HAnimHumanoid38.sites.append(HAnimSite1436)
HAnimSite1437 = x3d.HAnimSite()
HAnimSite1437.USE = "hanim_r_tarsal_distal_phalanx_5_tip"

HAnimHumanoid38.sites.append(HAnimSite1437)
HAnimSite1438 = x3d.HAnimSite()
HAnimSite1438.USE = "hanim_navel"

HAnimHumanoid38.sites.append(HAnimSite1438)
HAnimSite1439 = x3d.HAnimSite()
HAnimSite1439.USE = "hanim_waist_preferred_anterior"

HAnimHumanoid38.sites.append(HAnimSite1439)
HAnimSite1440 = x3d.HAnimSite()
HAnimSite1440.USE = "hanim_waist_preferred_posterior"

HAnimHumanoid38.sites.append(HAnimSite1440)
HAnimSite1441 = x3d.HAnimSite()
HAnimSite1441.USE = "hanim_l_rib10"

HAnimHumanoid38.sites.append(HAnimSite1441)
HAnimSite1442 = x3d.HAnimSite()
HAnimSite1442.USE = "hanim_r_rib10"

HAnimHumanoid38.sites.append(HAnimSite1442)
HAnimSite1443 = x3d.HAnimSite()
HAnimSite1443.USE = "hanim_spine_1_middle_back"

HAnimHumanoid38.sites.append(HAnimSite1443)
HAnimSite1444 = x3d.HAnimSite()
HAnimSite1444.USE = "hanim_spine_2_middle_back"

HAnimHumanoid38.sites.append(HAnimSite1444)
HAnimSite1445 = x3d.HAnimSite()
HAnimSite1445.USE = "hanim_l_thelion"

HAnimHumanoid38.sites.append(HAnimSite1445)
HAnimSite1446 = x3d.HAnimSite()
HAnimSite1446.USE = "hanim_r_thelion"

HAnimHumanoid38.sites.append(HAnimSite1446)
HAnimSite1447 = x3d.HAnimSite()
HAnimSite1447.USE = "hanim_substernale"

HAnimHumanoid38.sites.append(HAnimSite1447)
HAnimSite1448 = x3d.HAnimSite()
HAnimSite1448.USE = "hanim_l_chest_midsagittal_plane"

HAnimHumanoid38.sites.append(HAnimSite1448)
HAnimSite1449 = x3d.HAnimSite()
HAnimSite1449.USE = "hanim_mesosternale"

HAnimHumanoid38.sites.append(HAnimSite1449)
HAnimSite1450 = x3d.HAnimSite()
HAnimSite1450.USE = "hanim_r_chest_midsagittal_plane"

HAnimHumanoid38.sites.append(HAnimSite1450)
HAnimSite1451 = x3d.HAnimSite()
HAnimSite1451.USE = "hanim_rear_center_midsagittal_plane"

HAnimHumanoid38.sites.append(HAnimSite1451)
HAnimSite1452 = x3d.HAnimSite()
HAnimSite1452.USE = "hanim_cervicale"

HAnimHumanoid38.sites.append(HAnimSite1452)
HAnimSite1453 = x3d.HAnimSite()
HAnimSite1453.USE = "hanim_l_neck_base"

HAnimHumanoid38.sites.append(HAnimSite1453)
HAnimSite1454 = x3d.HAnimSite()
HAnimSite1454.USE = "hanim_r_neck_base"

HAnimHumanoid38.sites.append(HAnimSite1454)
HAnimSite1455 = x3d.HAnimSite()
HAnimSite1455.USE = "hanim_suprasternale"

HAnimHumanoid38.sites.append(HAnimSite1455)
HAnimSite1456 = x3d.HAnimSite()
HAnimSite1456.USE = "hanim_adams_apple"

HAnimHumanoid38.sites.append(HAnimSite1456)
HAnimSite1457 = x3d.HAnimSite()
HAnimSite1457.USE = "hanim_l_acromion"

HAnimHumanoid38.sites.append(HAnimSite1457)
HAnimSite1458 = x3d.HAnimSite()
HAnimSite1458.USE = "hanim_l_axilla_distal"

HAnimHumanoid38.sites.append(HAnimSite1458)
HAnimSite1459 = x3d.HAnimSite()
HAnimSite1459.USE = "hanim_l_axilla_posterior_folds"

HAnimHumanoid38.sites.append(HAnimSite1459)
HAnimSite1460 = x3d.HAnimSite()
HAnimSite1460.USE = "hanim_l_axilla_proximal"

HAnimHumanoid38.sites.append(HAnimSite1460)
HAnimSite1461 = x3d.HAnimSite()
HAnimSite1461.USE = "hanim_l_clavicale"

HAnimHumanoid38.sites.append(HAnimSite1461)
HAnimSite1462 = x3d.HAnimSite()
HAnimSite1462.USE = "hanim_l_bideltoid"

HAnimHumanoid38.sites.append(HAnimSite1462)
HAnimSite1463 = x3d.HAnimSite()
HAnimSite1463.USE = "hanim_l_humeral_lateral_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite1463)
HAnimSite1464 = x3d.HAnimSite()
HAnimSite1464.USE = "hanim_l_humeral_medial_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite1464)
HAnimSite1465 = x3d.HAnimSite()
HAnimSite1465.USE = "hanim_l_olecranon"

HAnimHumanoid38.sites.append(HAnimSite1465)
HAnimSite1466 = x3d.HAnimSite()
HAnimSite1466.USE = "hanim_l_radial_styloid"

HAnimHumanoid38.sites.append(HAnimSite1466)
HAnimSite1467 = x3d.HAnimSite()
HAnimSite1467.USE = "hanim_l_radiale"

HAnimHumanoid38.sites.append(HAnimSite1467)
HAnimSite1468 = x3d.HAnimSite()
HAnimSite1468.USE = "hanim_l_ulnar_styloid"

HAnimHumanoid38.sites.append(HAnimSite1468)
HAnimSite1469 = x3d.HAnimSite()
HAnimSite1469.USE = "hanim_l_metacarpal_phalanx_2"

HAnimHumanoid38.sites.append(HAnimSite1469)
HAnimSite1470 = x3d.HAnimSite()
HAnimSite1470.USE = "hanim_l_metacarpal_phalanx_3"

HAnimHumanoid38.sites.append(HAnimSite1470)
HAnimSite1471 = x3d.HAnimSite()
HAnimSite1471.USE = "hanim_l_metacarpal_phalanx_5"

HAnimHumanoid38.sites.append(HAnimSite1471)
HAnimSite1472 = x3d.HAnimSite()
HAnimSite1472.USE = "hanim_r_acromion"

HAnimHumanoid38.sites.append(HAnimSite1472)
HAnimSite1473 = x3d.HAnimSite()
HAnimSite1473.USE = "hanim_r_axilla_distal"

HAnimHumanoid38.sites.append(HAnimSite1473)
HAnimSite1474 = x3d.HAnimSite()
HAnimSite1474.USE = "hanim_r_axilla_posterior_folds"

HAnimHumanoid38.sites.append(HAnimSite1474)
HAnimSite1475 = x3d.HAnimSite()
HAnimSite1475.USE = "hanim_r_axilla_proximal"

HAnimHumanoid38.sites.append(HAnimSite1475)
HAnimSite1476 = x3d.HAnimSite()
HAnimSite1476.USE = "hanim_r_clavicale"

HAnimHumanoid38.sites.append(HAnimSite1476)
HAnimSite1477 = x3d.HAnimSite()
HAnimSite1477.USE = "hanim_r_bideltoid"

HAnimHumanoid38.sites.append(HAnimSite1477)
HAnimSite1478 = x3d.HAnimSite()
HAnimSite1478.USE = "hanim_r_humeral_lateral_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite1478)
HAnimSite1479 = x3d.HAnimSite()
HAnimSite1479.USE = "hanim_r_humeral_medial_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite1479)
HAnimSite1480 = x3d.HAnimSite()
HAnimSite1480.USE = "hanim_r_olecranon"

HAnimHumanoid38.sites.append(HAnimSite1480)
HAnimSite1481 = x3d.HAnimSite()
HAnimSite1481.USE = "hanim_r_radial_styloid"

HAnimHumanoid38.sites.append(HAnimSite1481)
HAnimSite1482 = x3d.HAnimSite()
HAnimSite1482.USE = "hanim_r_radiale"

HAnimHumanoid38.sites.append(HAnimSite1482)
HAnimSite1483 = x3d.HAnimSite()
HAnimSite1483.USE = "hanim_r_ulnar_styloid"

HAnimHumanoid38.sites.append(HAnimSite1483)
HAnimSite1484 = x3d.HAnimSite()
HAnimSite1484.USE = "hanim_r_metacarpal_phalanx_2"

HAnimHumanoid38.sites.append(HAnimSite1484)
HAnimSite1485 = x3d.HAnimSite()
HAnimSite1485.USE = "hanim_r_metacarpal_phalanx_3"

HAnimHumanoid38.sites.append(HAnimSite1485)
HAnimSite1486 = x3d.HAnimSite()
HAnimSite1486.USE = "hanim_r_metacarpal_phalanx_5"

HAnimHumanoid38.sites.append(HAnimSite1486)

Scene11.children.append(HAnimHumanoid38)

X3D0.Scene = Scene11
f = open("../data/Humanoid2.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Humanoid2.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
