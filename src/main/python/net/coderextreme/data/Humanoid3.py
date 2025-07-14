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
meta3.content = "Humanoid3.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "identifier"
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid3.x3d"

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
"""from vl5 to vl4 vertices 2"""
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
HAnimJoint489.name = "vl4"
HAnimJoint489.DEF = "hanim_vl4"
HAnimJoint489.center = [0.0035,1.0925,-0.0787]
HAnimJoint489.ulimit = [0,0,0]
HAnimJoint489.llimit = [0,0,0]
HAnimSegment490 = x3d.HAnimSegment()
HAnimSegment490.name = "l4"
HAnimSegment490.DEF = "hanim_l4"
Transform491 = x3d.Transform()
Transform491.translation = [0.0035,1.0925,-0.0787]
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
"""from vl4 to vl3 vertices 2"""
ColorRGBA497 = x3d.ColorRGBA()
ColorRGBA497.USE = "HAnimSegmentLineColorRGBA"

LineSet495.color = ColorRGBA497

Shape494.geometry = LineSet495

HAnimSegment490.children.append(Shape494)

HAnimJoint489.children.append(HAnimSegment490)
HAnimJoint498 = x3d.HAnimJoint()
HAnimJoint498.name = "vl3"
HAnimJoint498.DEF = "hanim_vl3"
HAnimJoint498.center = [0.0041,1.1276,-0.0796]
HAnimJoint498.ulimit = [0,0,0]
HAnimJoint498.llimit = [0,0,0]
HAnimSegment499 = x3d.HAnimSegment()
HAnimSegment499.name = "l3"
HAnimSegment499.DEF = "hanim_l3"
Transform500 = x3d.Transform()
Transform500.translation = [0.0041,1.1276,-0.0796]
Transform501 = x3d.Transform()
"""Empty Transform"""
Shape502 = x3d.Shape()
Shape502.USE = "HAnimJointShape"

Transform501.children.append(Shape502)

Transform500.children.append(Transform501)

HAnimSegment499.children.append(Transform500)
Shape503 = x3d.Shape()
LineSet504 = x3d.LineSet()
LineSet504.vertexCount = [2]
Coordinate505 = x3d.Coordinate()

LineSet504.coord = Coordinate505
"""from vl3 to vl2 vertices 2"""
ColorRGBA506 = x3d.ColorRGBA()
ColorRGBA506.USE = "HAnimSegmentLineColorRGBA"

LineSet504.color = ColorRGBA506

Shape503.geometry = LineSet504

HAnimSegment499.children.append(Shape503)

HAnimJoint498.children.append(HAnimSegment499)
HAnimJoint507 = x3d.HAnimJoint()
HAnimJoint507.name = "vl2"
HAnimJoint507.DEF = "hanim_vl2"
HAnimJoint507.center = [0.0045,1.1546,-0.08]
HAnimJoint507.ulimit = [0,0,0]
HAnimJoint507.llimit = [0,0,0]
HAnimSegment508 = x3d.HAnimSegment()
HAnimSegment508.name = "l2"
HAnimSegment508.DEF = "hanim_l2"
Transform509 = x3d.Transform()
Transform509.translation = [0.0045,1.1546,-0.08]
Transform510 = x3d.Transform()
"""Empty Transform"""
Shape511 = x3d.Shape()
Shape511.USE = "HAnimJointShape"

Transform510.children.append(Shape511)

Transform509.children.append(Transform510)

HAnimSegment508.children.append(Transform509)
Shape512 = x3d.Shape()
LineSet513 = x3d.LineSet()
LineSet513.vertexCount = [2]
Coordinate514 = x3d.Coordinate()

LineSet513.coord = Coordinate514
"""from vl2 to vl1 vertices 2"""
ColorRGBA515 = x3d.ColorRGBA()
ColorRGBA515.USE = "HAnimSegmentLineColorRGBA"

LineSet513.color = ColorRGBA515

Shape512.geometry = LineSet513

HAnimSegment508.children.append(Shape512)
HAnimSite516 = x3d.HAnimSite()
HAnimSite516.name = "l_rib10"
HAnimSite516.DEF = "hanim_l_rib10"
HAnimSite516.translation = [0.0871,1.1925,0.0992]
TouchSensor517 = x3d.TouchSensor()
TouchSensor517.description = "HAnimSite 28 l_rib10"

HAnimSite516.children.append(TouchSensor517)
Shape518 = x3d.Shape()
Shape518.USE = "HAnimSiteShape"

HAnimSite516.children.append(Shape518)
Billboard519 = x3d.Billboard()
Shape520 = x3d.Shape()
Text521 = x3d.Text()
Text521.string = ["28"]
FontStyle522 = x3d.FontStyle()
FontStyle522.size = 0.035

Text521.fontStyle = FontStyle522

Shape520.geometry = Text521

Billboard519.children.append(Shape520)

HAnimSite516.children.append(Billboard519)

HAnimSegment508.children.append(HAnimSite516)
HAnimSite523 = x3d.HAnimSite()
HAnimSite523.name = "r_rib10"
HAnimSite523.DEF = "hanim_r_rib10"
HAnimSite523.translation = [-0.0711,1.1941,0.1016]
TouchSensor524 = x3d.TouchSensor()
TouchSensor524.description = "HAnimSite 30 r_rib10"

HAnimSite523.children.append(TouchSensor524)
Shape525 = x3d.Shape()
Shape525.USE = "HAnimSiteShape"

HAnimSite523.children.append(Shape525)
Billboard526 = x3d.Billboard()
Shape527 = x3d.Shape()
Text528 = x3d.Text()
Text528.string = ["30"]
FontStyle529 = x3d.FontStyle()
FontStyle529.size = 0.035

Text528.fontStyle = FontStyle529

Shape527.geometry = Text528

Billboard526.children.append(Shape527)

HAnimSite523.children.append(Billboard526)

HAnimSegment508.children.append(HAnimSite523)
HAnimSite530 = x3d.HAnimSite()
HAnimSite530.name = "spine_2_middle_back"
HAnimSite530.DEF = "hanim_spine_2_middle_back"
TouchSensor531 = x3d.TouchSensor()
TouchSensor531.description = "HAnimSite spine_2_middle_back"

HAnimSite530.children.append(TouchSensor531)
Shape532 = x3d.Shape()
Shape532.USE = "HAnimSiteShape"

HAnimSite530.children.append(Shape532)
Billboard533 = x3d.Billboard()
Shape534 = x3d.Shape()
Text535 = x3d.Text()
Text535.string = [""]
FontStyle536 = x3d.FontStyle()
FontStyle536.size = 0.035

Text535.fontStyle = FontStyle536

Shape534.geometry = Text535

Billboard533.children.append(Shape534)

HAnimSite530.children.append(Billboard533)

HAnimSegment508.children.append(HAnimSite530)

HAnimJoint507.children.append(HAnimSegment508)
HAnimJoint537 = x3d.HAnimJoint()
HAnimJoint537.name = "vl1"
HAnimJoint537.DEF = "hanim_vl1"
HAnimJoint537.center = [0.0048,1.1912,-0.0805]
HAnimJoint537.ulimit = [0,0,0]
HAnimJoint537.llimit = [0,0,0]
HAnimSegment538 = x3d.HAnimSegment()
HAnimSegment538.name = "l1"
HAnimSegment538.DEF = "hanim_l1"
Transform539 = x3d.Transform()
Transform539.translation = [0.0048,1.1912,-0.0805]
Transform540 = x3d.Transform()
"""Empty Transform"""
Shape541 = x3d.Shape()
Shape541.USE = "HAnimJointShape"

Transform540.children.append(Shape541)

Transform539.children.append(Transform540)

HAnimSegment538.children.append(Transform539)
Shape542 = x3d.Shape()
LineSet543 = x3d.LineSet()
LineSet543.vertexCount = [2]
Coordinate544 = x3d.Coordinate()

LineSet543.coord = Coordinate544
"""from vl1 to vt12 vertices 2"""
ColorRGBA545 = x3d.ColorRGBA()
ColorRGBA545.USE = "HAnimSegmentLineColorRGBA"

LineSet543.color = ColorRGBA545

Shape542.geometry = LineSet543

HAnimSegment538.children.append(Shape542)

HAnimJoint537.children.append(HAnimSegment538)
HAnimJoint546 = x3d.HAnimJoint()
HAnimJoint546.name = "vt12"
HAnimJoint546.DEF = "hanim_vt12"
HAnimJoint546.center = [0.0051,1.2278,-0.0808]
HAnimJoint546.ulimit = [0,0,0]
HAnimJoint546.llimit = [0,0,0]
HAnimSegment547 = x3d.HAnimSegment()
HAnimSegment547.name = "t12"
HAnimSegment547.DEF = "hanim_t12"
Transform548 = x3d.Transform()
Transform548.translation = [0.0051,1.2278,-0.0808]
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
"""from vt12 to vt11 vertices 2"""
ColorRGBA554 = x3d.ColorRGBA()
ColorRGBA554.USE = "HAnimSegmentLineColorRGBA"

LineSet552.color = ColorRGBA554

Shape551.geometry = LineSet552

HAnimSegment547.children.append(Shape551)

HAnimJoint546.children.append(HAnimSegment547)
HAnimJoint555 = x3d.HAnimJoint()
HAnimJoint555.name = "vt11"
HAnimJoint555.DEF = "hanim_vt11"
HAnimJoint555.center = [0.0053,1.2679,-0.081]
HAnimJoint555.ulimit = [0,0,0]
HAnimJoint555.llimit = [0,0,0]
HAnimSegment556 = x3d.HAnimSegment()
HAnimSegment556.name = "t11"
HAnimSegment556.DEF = "hanim_t11"
Transform557 = x3d.Transform()
Transform557.translation = [0.0053,1.2679,-0.081]
Transform558 = x3d.Transform()
"""Empty Transform"""
Shape559 = x3d.Shape()
Shape559.USE = "HAnimJointShape"

Transform558.children.append(Shape559)

Transform557.children.append(Transform558)

HAnimSegment556.children.append(Transform557)
Shape560 = x3d.Shape()
LineSet561 = x3d.LineSet()
LineSet561.vertexCount = [2]
Coordinate562 = x3d.Coordinate()

LineSet561.coord = Coordinate562
"""from vt11 to vt10 vertices 2"""
ColorRGBA563 = x3d.ColorRGBA()
ColorRGBA563.USE = "HAnimSegmentLineColorRGBA"

LineSet561.color = ColorRGBA563

Shape560.geometry = LineSet561

HAnimSegment556.children.append(Shape560)

HAnimJoint555.children.append(HAnimSegment556)
HAnimJoint564 = x3d.HAnimJoint()
HAnimJoint564.name = "vt10"
HAnimJoint564.DEF = "hanim_vt10"
HAnimJoint564.center = [0.0056,1.2848,-0.0822]
HAnimJoint564.ulimit = [0,0,0]
HAnimJoint564.llimit = [0,0,0]
HAnimSegment565 = x3d.HAnimSegment()
HAnimSegment565.name = "t10"
HAnimSegment565.DEF = "hanim_t10"
Transform566 = x3d.Transform()
Transform566.translation = [0.0056,1.2848,-0.0822]
Transform567 = x3d.Transform()
"""Empty Transform"""
Shape568 = x3d.Shape()
Shape568.USE = "HAnimJointShape"

Transform567.children.append(Shape568)

Transform566.children.append(Transform567)

HAnimSegment565.children.append(Transform566)
Shape569 = x3d.Shape()
LineSet570 = x3d.LineSet()
LineSet570.vertexCount = [2]
Coordinate571 = x3d.Coordinate()

LineSet570.coord = Coordinate571
"""from vt10 to vt9 vertices 2"""
ColorRGBA572 = x3d.ColorRGBA()
ColorRGBA572.USE = "HAnimSegmentLineColorRGBA"

LineSet570.color = ColorRGBA572

Shape569.geometry = LineSet570

HAnimSegment565.children.append(Shape569)
HAnimSite573 = x3d.HAnimSite()
HAnimSite573.name = "substernale"
HAnimSite573.DEF = "hanim_substernale"
HAnimSite573.translation = [0.0085,1.2995,0.1147]
TouchSensor574 = x3d.TouchSensor()
TouchSensor574.description = "HAnimSite 13 substernale"

HAnimSite573.children.append(TouchSensor574)
Shape575 = x3d.Shape()
Shape575.USE = "HAnimSiteShape"

HAnimSite573.children.append(Shape575)
Billboard576 = x3d.Billboard()
Shape577 = x3d.Shape()
Text578 = x3d.Text()
Text578.string = ["13"]
FontStyle579 = x3d.FontStyle()
FontStyle579.size = 0.035

Text578.fontStyle = FontStyle579

Shape577.geometry = Text578

Billboard576.children.append(Shape577)

HAnimSite573.children.append(Billboard576)

HAnimSegment565.children.append(HAnimSite573)

HAnimJoint564.children.append(HAnimSegment565)
HAnimJoint580 = x3d.HAnimJoint()
HAnimJoint580.name = "vt9"
HAnimJoint580.DEF = "hanim_vt9"
HAnimJoint580.center = [0.0057,1.3126,-0.0838]
HAnimJoint580.ulimit = [0,0,0]
HAnimJoint580.llimit = [0,0,0]
HAnimSegment581 = x3d.HAnimSegment()
HAnimSegment581.name = "t9"
HAnimSegment581.DEF = "hanim_t9"
Transform582 = x3d.Transform()
Transform582.translation = [0.0057,1.3126,-0.0838]
Transform583 = x3d.Transform()
"""Empty Transform"""
Shape584 = x3d.Shape()
Shape584.USE = "HAnimJointShape"

Transform583.children.append(Shape584)

Transform582.children.append(Transform583)

HAnimSegment581.children.append(Transform582)
Shape585 = x3d.Shape()
LineSet586 = x3d.LineSet()
LineSet586.vertexCount = [2]
Coordinate587 = x3d.Coordinate()

LineSet586.coord = Coordinate587
"""from vt9 to vt8 vertices 2"""
ColorRGBA588 = x3d.ColorRGBA()
ColorRGBA588.USE = "HAnimSegmentLineColorRGBA"

LineSet586.color = ColorRGBA588

Shape585.geometry = LineSet586

HAnimSegment581.children.append(Shape585)
HAnimSite589 = x3d.HAnimSite()
HAnimSite589.name = "l_thelion"
HAnimSite589.DEF = "hanim_l_thelion"
HAnimSite589.translation = [0.0918,1.3382,0.1192]
TouchSensor590 = x3d.TouchSensor()
TouchSensor590.description = "HAnimSite 29 l_thelion"

HAnimSite589.children.append(TouchSensor590)
Shape591 = x3d.Shape()
Shape591.USE = "HAnimSiteShape"

HAnimSite589.children.append(Shape591)
Billboard592 = x3d.Billboard()
Shape593 = x3d.Shape()
Text594 = x3d.Text()
Text594.string = ["29"]
FontStyle595 = x3d.FontStyle()
FontStyle595.size = 0.035

Text594.fontStyle = FontStyle595

Shape593.geometry = Text594

Billboard592.children.append(Shape593)

HAnimSite589.children.append(Billboard592)

HAnimSegment581.children.append(HAnimSite589)
HAnimSite596 = x3d.HAnimSite()
HAnimSite596.name = "r_thelion"
HAnimSite596.DEF = "hanim_r_thelion"
HAnimSite596.translation = [-0.0736,1.3385,0.1217]
TouchSensor597 = x3d.TouchSensor()
TouchSensor597.description = "HAnimSite 31 r_thelion"

HAnimSite596.children.append(TouchSensor597)
Shape598 = x3d.Shape()
Shape598.USE = "HAnimSiteShape"

HAnimSite596.children.append(Shape598)
Billboard599 = x3d.Billboard()
Shape600 = x3d.Shape()
Text601 = x3d.Text()
Text601.string = ["31"]
FontStyle602 = x3d.FontStyle()
FontStyle602.size = 0.035

Text601.fontStyle = FontStyle602

Shape600.geometry = Text601

Billboard599.children.append(Shape600)

HAnimSite596.children.append(Billboard599)

HAnimSegment581.children.append(HAnimSite596)

HAnimJoint580.children.append(HAnimSegment581)
HAnimJoint603 = x3d.HAnimJoint()
HAnimJoint603.name = "vt8"
HAnimJoint603.DEF = "hanim_vt8"
HAnimJoint603.center = [0.0057,1.3382,-0.0845]
HAnimJoint603.ulimit = [0,0,0]
HAnimJoint603.llimit = [0,0,0]
HAnimSegment604 = x3d.HAnimSegment()
HAnimSegment604.name = "t8"
HAnimSegment604.DEF = "hanim_t8"
Transform605 = x3d.Transform()
Transform605.translation = [0.0057,1.3382,-0.0845]
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
"""from vt8 to vt7 vertices 2"""
ColorRGBA611 = x3d.ColorRGBA()
ColorRGBA611.USE = "HAnimSegmentLineColorRGBA"

LineSet609.color = ColorRGBA611

Shape608.geometry = LineSet609

HAnimSegment604.children.append(Shape608)

HAnimJoint603.children.append(HAnimSegment604)
HAnimJoint612 = x3d.HAnimJoint()
HAnimJoint612.name = "vt7"
HAnimJoint612.DEF = "hanim_vt7"
HAnimJoint612.center = [0.0058,1.3625,-0.0833]
HAnimJoint612.ulimit = [0,0,0]
HAnimJoint612.llimit = [0,0,0]
HAnimSegment613 = x3d.HAnimSegment()
HAnimSegment613.name = "t7"
HAnimSegment613.DEF = "hanim_t7"
Transform614 = x3d.Transform()
Transform614.translation = [0.0058,1.3625,-0.0833]
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
"""from vt7 to vt6 vertices 2"""
ColorRGBA620 = x3d.ColorRGBA()
ColorRGBA620.USE = "HAnimSegmentLineColorRGBA"

LineSet618.color = ColorRGBA620

Shape617.geometry = LineSet618

HAnimSegment613.children.append(Shape617)

HAnimJoint612.children.append(HAnimSegment613)
HAnimJoint621 = x3d.HAnimJoint()
HAnimJoint621.name = "vt6"
HAnimJoint621.DEF = "hanim_vt6"
HAnimJoint621.center = [0.0059,1.3866,-0.08]
HAnimJoint621.ulimit = [0,0,0]
HAnimJoint621.llimit = [0,0,0]
HAnimSegment622 = x3d.HAnimSegment()
HAnimSegment622.name = "t6"
HAnimSegment622.DEF = "hanim_t6"
Transform623 = x3d.Transform()
Transform623.translation = [0.0059,1.3866,-0.08]
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
"""from vt6 to vt5 vertices 2"""
ColorRGBA629 = x3d.ColorRGBA()
ColorRGBA629.USE = "HAnimSegmentLineColorRGBA"

LineSet627.color = ColorRGBA629

Shape626.geometry = LineSet627

HAnimSegment622.children.append(Shape626)
HAnimSite630 = x3d.HAnimSite()
HAnimSite630.name = "l_chest_midsagittal_plane"
HAnimSite630.DEF = "hanim_l_chest_midsagittal_plane"
TouchSensor631 = x3d.TouchSensor()
TouchSensor631.description = "HAnimSite 94 l_chest_midsagittal_plane"

HAnimSite630.children.append(TouchSensor631)
Shape632 = x3d.Shape()
Shape632.USE = "HAnimSiteShape"

HAnimSite630.children.append(Shape632)
Billboard633 = x3d.Billboard()
Shape634 = x3d.Shape()
Text635 = x3d.Text()
Text635.string = ["94"]
FontStyle636 = x3d.FontStyle()
FontStyle636.size = 0.035

Text635.fontStyle = FontStyle636

Shape634.geometry = Text635

Billboard633.children.append(Shape634)

HAnimSite630.children.append(Billboard633)

HAnimSegment622.children.append(HAnimSite630)
HAnimSite637 = x3d.HAnimSite()
HAnimSite637.name = "mesosternale"
HAnimSite637.DEF = "hanim_mesosternale"
TouchSensor638 = x3d.TouchSensor()
TouchSensor638.description = "HAnimSite 88 mesosternale"

HAnimSite637.children.append(TouchSensor638)
Shape639 = x3d.Shape()
Shape639.USE = "HAnimSiteShape"

HAnimSite637.children.append(Shape639)
Billboard640 = x3d.Billboard()
Shape641 = x3d.Shape()
Text642 = x3d.Text()
Text642.string = ["88"]
FontStyle643 = x3d.FontStyle()
FontStyle643.size = 0.035

Text642.fontStyle = FontStyle643

Shape641.geometry = Text642

Billboard640.children.append(Shape641)

HAnimSite637.children.append(Billboard640)

HAnimSegment622.children.append(HAnimSite637)
HAnimSite644 = x3d.HAnimSite()
HAnimSite644.name = "r_chest_midsagittal_plane"
HAnimSite644.DEF = "hanim_r_chest_midsagittal_plane"
TouchSensor645 = x3d.TouchSensor()
TouchSensor645.description = "HAnimSite 95 r_chest_midsagittal_plane"

HAnimSite644.children.append(TouchSensor645)
Shape646 = x3d.Shape()
Shape646.USE = "HAnimSiteShape"

HAnimSite644.children.append(Shape646)
Billboard647 = x3d.Billboard()
Shape648 = x3d.Shape()
Text649 = x3d.Text()
Text649.string = ["95"]
FontStyle650 = x3d.FontStyle()
FontStyle650.size = 0.035

Text649.fontStyle = FontStyle650

Shape648.geometry = Text649

Billboard647.children.append(Shape648)

HAnimSite644.children.append(Billboard647)

HAnimSegment622.children.append(HAnimSite644)
HAnimSite651 = x3d.HAnimSite()
HAnimSite651.name = "rear_center_midsagittal_plane"
HAnimSite651.DEF = "hanim_rear_center_midsagittal_plane"
TouchSensor652 = x3d.TouchSensor()
TouchSensor652.description = "HAnimSite 92 rear_center_midsagittal_plane"

HAnimSite651.children.append(TouchSensor652)
Shape653 = x3d.Shape()
Shape653.USE = "HAnimSiteShape"

HAnimSite651.children.append(Shape653)
Billboard654 = x3d.Billboard()
Shape655 = x3d.Shape()
Text656 = x3d.Text()
Text656.string = ["92"]
FontStyle657 = x3d.FontStyle()
FontStyle657.size = 0.035

Text656.fontStyle = FontStyle657

Shape655.geometry = Text656

Billboard654.children.append(Shape655)

HAnimSite651.children.append(Billboard654)

HAnimSegment622.children.append(HAnimSite651)

HAnimJoint621.children.append(HAnimSegment622)
HAnimJoint658 = x3d.HAnimJoint()
HAnimJoint658.name = "vt5"
HAnimJoint658.DEF = "hanim_vt5"
HAnimJoint658.center = [0.006,1.4102,-0.0745]
HAnimJoint658.ulimit = [0,0,0]
HAnimJoint658.llimit = [0,0,0]
HAnimSegment659 = x3d.HAnimSegment()
HAnimSegment659.name = "t5"
HAnimSegment659.DEF = "hanim_t5"
Transform660 = x3d.Transform()
Transform660.translation = [0.006,1.4102,-0.0745]
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
"""from vt5 to vt4 vertices 2"""
ColorRGBA666 = x3d.ColorRGBA()
ColorRGBA666.USE = "HAnimSegmentLineColorRGBA"

LineSet664.color = ColorRGBA666

Shape663.geometry = LineSet664

HAnimSegment659.children.append(Shape663)
HAnimSite667 = x3d.HAnimSite()
HAnimSite667.name = "spine_1_middle_back"
HAnimSite667.DEF = "hanim_spine_1_middle_back"
TouchSensor668 = x3d.TouchSensor()
TouchSensor668.description = "HAnimSite 24 spine_1_middle_back"

HAnimSite667.children.append(TouchSensor668)
Shape669 = x3d.Shape()
Shape669.USE = "HAnimSiteShape"

HAnimSite667.children.append(Shape669)
Billboard670 = x3d.Billboard()
Shape671 = x3d.Shape()
Text672 = x3d.Text()
Text672.string = ["24"]
FontStyle673 = x3d.FontStyle()
FontStyle673.size = 0.035

Text672.fontStyle = FontStyle673

Shape671.geometry = Text672

Billboard670.children.append(Shape671)

HAnimSite667.children.append(Billboard670)

HAnimSegment659.children.append(HAnimSite667)

HAnimJoint658.children.append(HAnimSegment659)
HAnimJoint674 = x3d.HAnimJoint()
HAnimJoint674.name = "vt4"
HAnimJoint674.DEF = "hanim_vt4"
HAnimJoint674.center = [0.0061,1.432,-0.0675]
HAnimJoint674.ulimit = [0,0,0]
HAnimJoint674.llimit = [0,0,0]
HAnimSegment675 = x3d.HAnimSegment()
HAnimSegment675.name = "t4"
HAnimSegment675.DEF = "hanim_t4"
Transform676 = x3d.Transform()
Transform676.translation = [0.0061,1.432,-0.0675]
Transform677 = x3d.Transform()
"""Empty Transform"""
Shape678 = x3d.Shape()
Shape678.USE = "HAnimJointShape"

Transform677.children.append(Shape678)

Transform676.children.append(Transform677)

HAnimSegment675.children.append(Transform676)
Shape679 = x3d.Shape()
LineSet680 = x3d.LineSet()
LineSet680.vertexCount = [2]
Coordinate681 = x3d.Coordinate()

LineSet680.coord = Coordinate681
"""from vt4 to vt3 vertices 2"""
ColorRGBA682 = x3d.ColorRGBA()
ColorRGBA682.USE = "HAnimSegmentLineColorRGBA"

LineSet680.color = ColorRGBA682

Shape679.geometry = LineSet680

HAnimSegment675.children.append(Shape679)

HAnimJoint674.children.append(HAnimSegment675)
HAnimJoint683 = x3d.HAnimJoint()
HAnimJoint683.name = "vt3"
HAnimJoint683.DEF = "hanim_vt3"
HAnimJoint683.center = [0.0062,1.4583,-0.057]
HAnimJoint683.ulimit = [0,0,0]
HAnimJoint683.llimit = [0,0,0]
HAnimSegment684 = x3d.HAnimSegment()
HAnimSegment684.name = "t3"
HAnimSegment684.DEF = "hanim_t3"
Transform685 = x3d.Transform()
Transform685.translation = [0.0062,1.4583,-0.057]
Transform686 = x3d.Transform()
"""Empty Transform"""
Shape687 = x3d.Shape()
Shape687.USE = "HAnimJointShape"

Transform686.children.append(Shape687)

Transform685.children.append(Transform686)

HAnimSegment684.children.append(Transform685)
Shape688 = x3d.Shape()
LineSet689 = x3d.LineSet()
LineSet689.vertexCount = [2]
Coordinate690 = x3d.Coordinate()

LineSet689.coord = Coordinate690
"""from vt3 to vt2 vertices 2"""
ColorRGBA691 = x3d.ColorRGBA()
ColorRGBA691.USE = "HAnimSegmentLineColorRGBA"

LineSet689.color = ColorRGBA691

Shape688.geometry = LineSet689

HAnimSegment684.children.append(Shape688)

HAnimJoint683.children.append(HAnimSegment684)
HAnimJoint692 = x3d.HAnimJoint()
HAnimJoint692.name = "vt2"
HAnimJoint692.DEF = "hanim_vt2"
HAnimJoint692.center = [0.0063,1.4761,-0.0484]
HAnimJoint692.ulimit = [0,0,0]
HAnimJoint692.llimit = [0,0,0]
HAnimSegment693 = x3d.HAnimSegment()
HAnimSegment693.name = "t2"
HAnimSegment693.DEF = "hanim_t2"
Transform694 = x3d.Transform()
Transform694.translation = [0.0063,1.4761,-0.0484]
Transform695 = x3d.Transform()
"""Empty Transform"""
Shape696 = x3d.Shape()
Shape696.USE = "HAnimJointShape"

Transform695.children.append(Shape696)

Transform694.children.append(Transform695)

HAnimSegment693.children.append(Transform694)
Shape697 = x3d.Shape()
LineSet698 = x3d.LineSet()
LineSet698.vertexCount = [2]
Coordinate699 = x3d.Coordinate()

LineSet698.coord = Coordinate699
"""from vt2 to vt1 vertices 2"""
ColorRGBA700 = x3d.ColorRGBA()
ColorRGBA700.USE = "HAnimSegmentLineColorRGBA"

LineSet698.color = ColorRGBA700

Shape697.geometry = LineSet698

HAnimSegment693.children.append(Shape697)

HAnimJoint692.children.append(HAnimSegment693)
HAnimJoint701 = x3d.HAnimJoint()
HAnimJoint701.name = "vt1"
HAnimJoint701.DEF = "hanim_vt1"
HAnimJoint701.center = [0.0065,1.4951,-0.0387]
HAnimJoint701.ulimit = [0,0,0]
HAnimJoint701.llimit = [0,0,0]
HAnimSegment702 = x3d.HAnimSegment()
HAnimSegment702.name = "t1"
HAnimSegment702.DEF = "hanim_t1"
Transform703 = x3d.Transform()
Transform703.translation = [0.0065,1.4951,-0.0387]
Transform704 = x3d.Transform()
"""Empty Transform"""
Shape705 = x3d.Shape()
Shape705.USE = "HAnimJointShape"

Transform704.children.append(Shape705)

Transform703.children.append(Transform704)

HAnimSegment702.children.append(Transform703)
Shape706 = x3d.Shape()
LineSet707 = x3d.LineSet()
LineSet707.vertexCount = [2]
Coordinate708 = x3d.Coordinate()

LineSet707.coord = Coordinate708
"""from vt1 to vc7 vertices 2"""
ColorRGBA709 = x3d.ColorRGBA()
ColorRGBA709.USE = "HAnimSegmentLineColorRGBA"

LineSet707.color = ColorRGBA709

Shape706.geometry = LineSet707

HAnimSegment702.children.append(Shape706)
HAnimSite710 = x3d.HAnimSite()
HAnimSite710.name = "cervicale"
HAnimSite710.DEF = "hanim_cervicale"
HAnimSite710.translation = [0.0064,1.52,-0.0815]
TouchSensor711 = x3d.TouchSensor()
TouchSensor711.description = "HAnimSite 10 cervicale"

HAnimSite710.children.append(TouchSensor711)
Shape712 = x3d.Shape()
Shape712.USE = "HAnimSiteShape"

HAnimSite710.children.append(Shape712)
Billboard713 = x3d.Billboard()
Shape714 = x3d.Shape()
Text715 = x3d.Text()
Text715.string = ["10"]
FontStyle716 = x3d.FontStyle()
FontStyle716.size = 0.035

Text715.fontStyle = FontStyle716

Shape714.geometry = Text715

Billboard713.children.append(Shape714)

HAnimSite710.children.append(Billboard713)

HAnimSegment702.children.append(HAnimSite710)
HAnimSite717 = x3d.HAnimSite()
HAnimSite717.name = "suprasternale"
HAnimSite717.DEF = "hanim_suprasternale"
HAnimSite717.translation = [0.0084,1.4714,0.0551]
TouchSensor718 = x3d.TouchSensor()
TouchSensor718.description = "HAnimSite 12 suprasternale"

HAnimSite717.children.append(TouchSensor718)
Shape719 = x3d.Shape()
Shape719.USE = "HAnimSiteShape"

HAnimSite717.children.append(Shape719)
Billboard720 = x3d.Billboard()
Shape721 = x3d.Shape()
Text722 = x3d.Text()
Text722.string = ["12"]
FontStyle723 = x3d.FontStyle()
FontStyle723.size = 0.035

Text722.fontStyle = FontStyle723

Shape721.geometry = Text722

Billboard720.children.append(Shape721)

HAnimSite717.children.append(Billboard720)

HAnimSegment702.children.append(HAnimSite717)
Shape724 = x3d.Shape()
LineSet725 = x3d.LineSet()
LineSet725.vertexCount = [2]
Coordinate726 = x3d.Coordinate()

LineSet725.coord = Coordinate726
"""from vt1 to l_sternoclavicular vertices 2"""
ColorRGBA727 = x3d.ColorRGBA()
ColorRGBA727.USE = "HAnimSegmentLineColorRGBA"

LineSet725.color = ColorRGBA727

Shape724.geometry = LineSet725

HAnimSegment702.children.append(Shape724)
Shape728 = x3d.Shape()
LineSet729 = x3d.LineSet()
LineSet729.vertexCount = [2]
Coordinate730 = x3d.Coordinate()

LineSet729.coord = Coordinate730
"""from vt1 to r_sternoclavicular vertices 2"""
ColorRGBA731 = x3d.ColorRGBA()
ColorRGBA731.USE = "HAnimSegmentLineColorRGBA"

LineSet729.color = ColorRGBA731

Shape728.geometry = LineSet729

HAnimSegment702.children.append(Shape728)

HAnimJoint701.children.append(HAnimSegment702)
HAnimJoint732 = x3d.HAnimJoint()
HAnimJoint732.name = "vc7"
HAnimJoint732.DEF = "hanim_vc7"
HAnimJoint732.center = [0.0066,1.5132,-0.0301]
HAnimJoint732.ulimit = [0,0,0]
HAnimJoint732.llimit = [0,0,0]
HAnimSegment733 = x3d.HAnimSegment()
HAnimSegment733.name = "c7"
HAnimSegment733.DEF = "hanim_c7"
Transform734 = x3d.Transform()
Transform734.translation = [0.0066,1.5132,-0.0301]
Transform735 = x3d.Transform()
"""Empty Transform"""
Shape736 = x3d.Shape()
Shape736.USE = "HAnimJointShape"

Transform735.children.append(Shape736)

Transform734.children.append(Transform735)

HAnimSegment733.children.append(Transform734)
Shape737 = x3d.Shape()
LineSet738 = x3d.LineSet()
LineSet738.vertexCount = [2]
Coordinate739 = x3d.Coordinate()

LineSet738.coord = Coordinate739
"""from vc7 to vc6 vertices 2"""
ColorRGBA740 = x3d.ColorRGBA()
ColorRGBA740.USE = "HAnimSegmentLineColorRGBA"

LineSet738.color = ColorRGBA740

Shape737.geometry = LineSet738

HAnimSegment733.children.append(Shape737)
HAnimSite741 = x3d.HAnimSite()
HAnimSite741.name = "l_neck_base"
HAnimSite741.DEF = "hanim_l_neck_base"
HAnimSite741.translation = [0.0646,1.5141,-0.038]
TouchSensor742 = x3d.TouchSensor()
TouchSensor742.description = "HAnimSite 82 l_neck_base"

HAnimSite741.children.append(TouchSensor742)
Shape743 = x3d.Shape()
Shape743.USE = "HAnimSiteShape"

HAnimSite741.children.append(Shape743)
Billboard744 = x3d.Billboard()
Shape745 = x3d.Shape()
Text746 = x3d.Text()
Text746.string = ["82"]
FontStyle747 = x3d.FontStyle()
FontStyle747.size = 0.035

Text746.fontStyle = FontStyle747

Shape745.geometry = Text746

Billboard744.children.append(Shape745)

HAnimSite741.children.append(Billboard744)

HAnimSegment733.children.append(HAnimSite741)
HAnimSite748 = x3d.HAnimSite()
HAnimSite748.name = "r_neck_base"
HAnimSite748.DEF = "hanim_r_neck_base"
HAnimSite748.translation = [-0.0419,1.5149,-0.022]
TouchSensor749 = x3d.TouchSensor()
TouchSensor749.description = "HAnimSite 83 r_neck_base"

HAnimSite748.children.append(TouchSensor749)
Shape750 = x3d.Shape()
Shape750.USE = "HAnimSiteShape"

HAnimSite748.children.append(Shape750)
Billboard751 = x3d.Billboard()
Shape752 = x3d.Shape()
Text753 = x3d.Text()
Text753.string = ["83"]
FontStyle754 = x3d.FontStyle()
FontStyle754.size = 0.035

Text753.fontStyle = FontStyle754

Shape752.geometry = Text753

Billboard751.children.append(Shape752)

HAnimSite748.children.append(Billboard751)

HAnimSegment733.children.append(HAnimSite748)

HAnimJoint732.children.append(HAnimSegment733)
HAnimJoint755 = x3d.HAnimJoint()
HAnimJoint755.name = "vc6"
HAnimJoint755.DEF = "hanim_vc6"
HAnimJoint755.center = [0.0066,1.5357,-0.0143]
HAnimJoint755.ulimit = [0,0,0]
HAnimJoint755.llimit = [0,0,0]
HAnimSegment756 = x3d.HAnimSegment()
HAnimSegment756.name = "c6"
HAnimSegment756.DEF = "hanim_c6"
Transform757 = x3d.Transform()
Transform757.translation = [0.0066,1.5357,-0.0143]
Transform758 = x3d.Transform()
"""Empty Transform"""
Shape759 = x3d.Shape()
Shape759.USE = "HAnimJointShape"

Transform758.children.append(Shape759)

Transform757.children.append(Transform758)

HAnimSegment756.children.append(Transform757)
Shape760 = x3d.Shape()
LineSet761 = x3d.LineSet()
LineSet761.vertexCount = [2]
Coordinate762 = x3d.Coordinate()

LineSet761.coord = Coordinate762
"""from vc6 to vc5 vertices 2"""
ColorRGBA763 = x3d.ColorRGBA()
ColorRGBA763.USE = "HAnimSegmentLineColorRGBA"

LineSet761.color = ColorRGBA763

Shape760.geometry = LineSet761

HAnimSegment756.children.append(Shape760)

HAnimJoint755.children.append(HAnimSegment756)
HAnimJoint764 = x3d.HAnimJoint()
HAnimJoint764.name = "vc5"
HAnimJoint764.DEF = "hanim_vc5"
HAnimJoint764.center = [0.0066,1.552,-0.0082]
HAnimJoint764.ulimit = [0,0,0]
HAnimJoint764.llimit = [0,0,0]
HAnimSegment765 = x3d.HAnimSegment()
HAnimSegment765.name = "c5"
HAnimSegment765.DEF = "hanim_c5"
Transform766 = x3d.Transform()
Transform766.translation = [0.0066,1.552,-0.0082]
Transform767 = x3d.Transform()
"""Empty Transform"""
Shape768 = x3d.Shape()
Shape768.USE = "HAnimJointShape"

Transform767.children.append(Shape768)

Transform766.children.append(Transform767)

HAnimSegment765.children.append(Transform766)
Shape769 = x3d.Shape()
LineSet770 = x3d.LineSet()
LineSet770.vertexCount = [2]
Coordinate771 = x3d.Coordinate()

LineSet770.coord = Coordinate771
"""from vc5 to vc4 vertices 2"""
ColorRGBA772 = x3d.ColorRGBA()
ColorRGBA772.USE = "HAnimSegmentLineColorRGBA"

LineSet770.color = ColorRGBA772

Shape769.geometry = LineSet770

HAnimSegment765.children.append(Shape769)

HAnimJoint764.children.append(HAnimSegment765)
HAnimJoint773 = x3d.HAnimJoint()
HAnimJoint773.name = "vc4"
HAnimJoint773.DEF = "hanim_vc4"
HAnimJoint773.center = [0.0066,1.5662,-0.0084]
HAnimJoint773.ulimit = [0,0,0]
HAnimJoint773.llimit = [0,0,0]
HAnimSegment774 = x3d.HAnimSegment()
HAnimSegment774.name = "c4"
HAnimSegment774.DEF = "hanim_c4"
Transform775 = x3d.Transform()
Transform775.translation = [0.0066,1.5662,-0.0084]
Transform776 = x3d.Transform()
"""Empty Transform"""
Shape777 = x3d.Shape()
Shape777.USE = "HAnimJointShape"

Transform776.children.append(Shape777)

Transform775.children.append(Transform776)

HAnimSegment774.children.append(Transform775)
Shape778 = x3d.Shape()
LineSet779 = x3d.LineSet()
LineSet779.vertexCount = [2]
Coordinate780 = x3d.Coordinate()

LineSet779.coord = Coordinate780
"""from vc4 to vc3 vertices 2"""
ColorRGBA781 = x3d.ColorRGBA()
ColorRGBA781.USE = "HAnimSegmentLineColorRGBA"

LineSet779.color = ColorRGBA781

Shape778.geometry = LineSet779

HAnimSegment774.children.append(Shape778)

HAnimJoint773.children.append(HAnimSegment774)
HAnimJoint782 = x3d.HAnimJoint()
HAnimJoint782.name = "vc3"
HAnimJoint782.DEF = "hanim_vc3"
HAnimJoint782.center = [0.0066,1.58,-0.0103]
HAnimJoint782.ulimit = [0,0,0]
HAnimJoint782.llimit = [0,0,0]
HAnimSegment783 = x3d.HAnimSegment()
HAnimSegment783.name = "c3"
HAnimSegment783.DEF = "hanim_c3"
Transform784 = x3d.Transform()
Transform784.translation = [0.0066,1.58,-0.0103]
Transform785 = x3d.Transform()
"""Empty Transform"""
Shape786 = x3d.Shape()
Shape786.USE = "HAnimJointShape"

Transform785.children.append(Shape786)

Transform784.children.append(Transform785)

HAnimSegment783.children.append(Transform784)
Shape787 = x3d.Shape()
LineSet788 = x3d.LineSet()
LineSet788.vertexCount = [2]
Coordinate789 = x3d.Coordinate()

LineSet788.coord = Coordinate789
"""from vc3 to vc2 vertices 2"""
ColorRGBA790 = x3d.ColorRGBA()
ColorRGBA790.USE = "HAnimSegmentLineColorRGBA"

LineSet788.color = ColorRGBA790

Shape787.geometry = LineSet788

HAnimSegment783.children.append(Shape787)

HAnimJoint782.children.append(HAnimSegment783)
HAnimJoint791 = x3d.HAnimJoint()
HAnimJoint791.name = "vc2"
HAnimJoint791.DEF = "hanim_vc2"
HAnimJoint791.center = [0.0066,1.5928,-0.0103]
HAnimJoint791.ulimit = [0,0,0]
HAnimJoint791.llimit = [0,0,0]
HAnimSegment792 = x3d.HAnimSegment()
HAnimSegment792.name = "c2"
HAnimSegment792.DEF = "hanim_c2"
Transform793 = x3d.Transform()
Transform793.translation = [0.0066,1.5928,-0.0103]
Transform794 = x3d.Transform()
"""Empty Transform"""
Shape795 = x3d.Shape()
Shape795.USE = "HAnimJointShape"

Transform794.children.append(Shape795)

Transform793.children.append(Transform794)

HAnimSegment792.children.append(Transform793)
Shape796 = x3d.Shape()
LineSet797 = x3d.LineSet()
LineSet797.vertexCount = [2]
Coordinate798 = x3d.Coordinate()

LineSet797.coord = Coordinate798
"""from vc2 to vc1 vertices 2"""
ColorRGBA799 = x3d.ColorRGBA()
ColorRGBA799.USE = "HAnimSegmentLineColorRGBA"

LineSet797.color = ColorRGBA799

Shape796.geometry = LineSet797

HAnimSegment792.children.append(Shape796)
HAnimSite800 = x3d.HAnimSite()
HAnimSite800.name = "adams_apple"
HAnimSite800.DEF = "hanim_adams_apple"
TouchSensor801 = x3d.TouchSensor()
TouchSensor801.description = "HAnimSite 11 adams_apple"

HAnimSite800.children.append(TouchSensor801)
Shape802 = x3d.Shape()
Shape802.USE = "HAnimSiteShape"

HAnimSite800.children.append(Shape802)
Billboard803 = x3d.Billboard()
Shape804 = x3d.Shape()
Text805 = x3d.Text()
Text805.string = ["11"]
FontStyle806 = x3d.FontStyle()
FontStyle806.size = 0.035

Text805.fontStyle = FontStyle806

Shape804.geometry = Text805

Billboard803.children.append(Shape804)

HAnimSite800.children.append(Billboard803)

HAnimSegment792.children.append(HAnimSite800)

HAnimJoint791.children.append(HAnimSegment792)
HAnimJoint807 = x3d.HAnimJoint()
HAnimJoint807.name = "vc1"
HAnimJoint807.DEF = "hanim_vc1"
HAnimJoint807.center = [0.0066,1.6144,-0.0034]
HAnimJoint807.ulimit = [0,0,0]
HAnimJoint807.llimit = [0,0,0]
HAnimSegment808 = x3d.HAnimSegment()
HAnimSegment808.name = "c1"
HAnimSegment808.DEF = "hanim_c1"
Transform809 = x3d.Transform()
Transform809.translation = [0.0066,1.6144,-0.0034]
Transform810 = x3d.Transform()
"""Empty Transform"""
Shape811 = x3d.Shape()
Shape811.USE = "HAnimJointShape"

Transform810.children.append(Shape811)

Transform809.children.append(Transform810)

HAnimSegment808.children.append(Transform809)
Shape812 = x3d.Shape()
LineSet813 = x3d.LineSet()
LineSet813.vertexCount = [2]
Coordinate814 = x3d.Coordinate()

LineSet813.coord = Coordinate814
"""from vc1 to skullbase vertices 2"""
ColorRGBA815 = x3d.ColorRGBA()
ColorRGBA815.USE = "HAnimSegmentLineColorRGBA"

LineSet813.color = ColorRGBA815

Shape812.geometry = LineSet813

HAnimSegment808.children.append(Shape812)

HAnimJoint807.children.append(HAnimSegment808)
HAnimJoint816 = x3d.HAnimJoint()
HAnimJoint816.name = "skullbase"
HAnimJoint816.DEF = "hanim_skullbase"
HAnimJoint816.center = [0.0044,1.6209,0.0236]
HAnimJoint816.ulimit = [0,0,0]
HAnimJoint816.llimit = [0,0,0]
HAnimSegment817 = x3d.HAnimSegment()
HAnimSegment817.name = "skull"
HAnimSegment817.DEF = "hanim_skull"
Transform818 = x3d.Transform()
Transform818.translation = [0.0044,1.6209,0.0236]
Transform819 = x3d.Transform()
"""Empty Transform"""
Shape820 = x3d.Shape()
Shape820.USE = "HAnimJointShape"

Transform819.children.append(Shape820)

Transform818.children.append(Transform819)

HAnimSegment817.children.append(Transform818)
Shape821 = x3d.Shape()
LineSet822 = x3d.LineSet()
LineSet822.vertexCount = [2]
Coordinate823 = x3d.Coordinate()

LineSet822.coord = Coordinate823
"""from skullbase to l_eyelid_joint vertices 2"""
ColorRGBA824 = x3d.ColorRGBA()
ColorRGBA824.USE = "HAnimSegmentLineColorRGBA"

LineSet822.color = ColorRGBA824

Shape821.geometry = LineSet822

HAnimSegment817.children.append(Shape821)
HAnimSite825 = x3d.HAnimSite()
HAnimSite825.name = "glabella"
HAnimSite825.DEF = "hanim_glabella"
TouchSensor826 = x3d.TouchSensor()
TouchSensor826.description = "HAnimSite 1 glabella"

HAnimSite825.children.append(TouchSensor826)
Shape827 = x3d.Shape()
Shape827.USE = "HAnimSiteShape"

HAnimSite825.children.append(Shape827)
Billboard828 = x3d.Billboard()
Shape829 = x3d.Shape()
Text830 = x3d.Text()
Text830.string = ["1"]
FontStyle831 = x3d.FontStyle()
FontStyle831.size = 0.035

Text830.fontStyle = FontStyle831

Shape829.geometry = Text830

Billboard828.children.append(Shape829)

HAnimSite825.children.append(Billboard828)

HAnimSegment817.children.append(HAnimSite825)
HAnimSite832 = x3d.HAnimSite()
HAnimSite832.name = "l_ectocanthus"
HAnimSite832.DEF = "hanim_l_ectocanthus"
TouchSensor833 = x3d.TouchSensor()
TouchSensor833.description = "HAnimSite 85 l_ectocanthus"

HAnimSite832.children.append(TouchSensor833)
Shape834 = x3d.Shape()
Shape834.USE = "HAnimSiteShape"

HAnimSite832.children.append(Shape834)
Billboard835 = x3d.Billboard()
Shape836 = x3d.Shape()
Text837 = x3d.Text()
Text837.string = ["85"]
FontStyle838 = x3d.FontStyle()
FontStyle838.size = 0.035

Text837.fontStyle = FontStyle838

Shape836.geometry = Text837

Billboard835.children.append(Shape836)

HAnimSite832.children.append(Billboard835)

HAnimSegment817.children.append(HAnimSite832)
HAnimSite839 = x3d.HAnimSite()
HAnimSite839.name = "l_infraorbitale"
HAnimSite839.DEF = "hanim_l_infraorbitale"
HAnimSite839.translation = [0.0341,1.6171,0.0752]
TouchSensor840 = x3d.TouchSensor()
TouchSensor840.description = "HAnimSite 3 l_infraorbitale"

HAnimSite839.children.append(TouchSensor840)
Shape841 = x3d.Shape()
Shape841.USE = "HAnimSiteShape"

HAnimSite839.children.append(Shape841)
Billboard842 = x3d.Billboard()
Shape843 = x3d.Shape()
Text844 = x3d.Text()
Text844.string = ["3"]
FontStyle845 = x3d.FontStyle()
FontStyle845.size = 0.035

Text844.fontStyle = FontStyle845

Shape843.geometry = Text844

Billboard842.children.append(Shape843)

HAnimSite839.children.append(Billboard842)

HAnimSegment817.children.append(HAnimSite839)
HAnimSite846 = x3d.HAnimSite()
HAnimSite846.name = "l_tragion"
HAnimSite846.DEF = "hanim_l_tragion"
HAnimSite846.translation = [0.0739,1.6348,0.0282]
TouchSensor847 = x3d.TouchSensor()
TouchSensor847.description = "HAnimSite 4 l_tragion"

HAnimSite846.children.append(TouchSensor847)
Shape848 = x3d.Shape()
Shape848.USE = "HAnimSiteShape"

HAnimSite846.children.append(Shape848)
Billboard849 = x3d.Billboard()
Shape850 = x3d.Shape()
Text851 = x3d.Text()
Text851.string = ["4"]
FontStyle852 = x3d.FontStyle()
FontStyle852.size = 0.035

Text851.fontStyle = FontStyle852

Shape850.geometry = Text851

Billboard849.children.append(Shape850)

HAnimSite846.children.append(Billboard849)

HAnimSegment817.children.append(HAnimSite846)
HAnimSite853 = x3d.HAnimSite()
HAnimSite853.name = "nuchale"
HAnimSite853.DEF = "hanim_nuchale"
HAnimSite853.translation = [0.0039,1.5972,-0.0796]
TouchSensor854 = x3d.TouchSensor()
TouchSensor854.description = "HAnimSite 81 nuchale"

HAnimSite853.children.append(TouchSensor854)
Shape855 = x3d.Shape()
Shape855.USE = "HAnimSiteShape"

HAnimSite853.children.append(Shape855)
Billboard856 = x3d.Billboard()
Shape857 = x3d.Shape()
Text858 = x3d.Text()
Text858.string = ["81"]
FontStyle859 = x3d.FontStyle()
FontStyle859.size = 0.035

Text858.fontStyle = FontStyle859

Shape857.geometry = Text858

Billboard856.children.append(Shape857)

HAnimSite853.children.append(Billboard856)

HAnimSegment817.children.append(HAnimSite853)
HAnimSite860 = x3d.HAnimSite()
HAnimSite860.name = "opisthocranion"
HAnimSite860.DEF = "hanim_opisthocranion"
TouchSensor861 = x3d.TouchSensor()
TouchSensor861.description = "HAnimSite 89 opisthocranion"

HAnimSite860.children.append(TouchSensor861)
Shape862 = x3d.Shape()
Shape862.USE = "HAnimSiteShape"

HAnimSite860.children.append(Shape862)
Billboard863 = x3d.Billboard()
Shape864 = x3d.Shape()
Text865 = x3d.Text()
Text865.string = ["89"]
FontStyle866 = x3d.FontStyle()
FontStyle866.size = 0.035

Text865.fontStyle = FontStyle866

Shape864.geometry = Text865

Billboard863.children.append(Shape864)

HAnimSite860.children.append(Billboard863)

HAnimSegment817.children.append(HAnimSite860)
HAnimSite867 = x3d.HAnimSite()
HAnimSite867.name = "r_ectocanthus"
HAnimSite867.DEF = "hanim_r_ectocanthus"
TouchSensor868 = x3d.TouchSensor()
TouchSensor868.description = "HAnimSite 86 r_ectocanthus"

HAnimSite867.children.append(TouchSensor868)
Shape869 = x3d.Shape()
Shape869.USE = "HAnimSiteShape"

HAnimSite867.children.append(Shape869)
Billboard870 = x3d.Billboard()
Shape871 = x3d.Shape()
Text872 = x3d.Text()
Text872.string = ["86"]
FontStyle873 = x3d.FontStyle()
FontStyle873.size = 0.035

Text872.fontStyle = FontStyle873

Shape871.geometry = Text872

Billboard870.children.append(Shape871)

HAnimSite867.children.append(Billboard870)

HAnimSegment817.children.append(HAnimSite867)
HAnimSite874 = x3d.HAnimSite()
HAnimSite874.name = "r_infraorbitale"
HAnimSite874.DEF = "hanim_r_infraorbitale"
HAnimSite874.translation = [-0.0237,1.6171,0.0752]
TouchSensor875 = x3d.TouchSensor()
TouchSensor875.description = "HAnimSite 6 r_infraorbitale"

HAnimSite874.children.append(TouchSensor875)
Shape876 = x3d.Shape()
Shape876.USE = "HAnimSiteShape"

HAnimSite874.children.append(Shape876)
Billboard877 = x3d.Billboard()
Shape878 = x3d.Shape()
Text879 = x3d.Text()
Text879.string = ["6"]
FontStyle880 = x3d.FontStyle()
FontStyle880.size = 0.035

Text879.fontStyle = FontStyle880

Shape878.geometry = Text879

Billboard877.children.append(Shape878)

HAnimSite874.children.append(Billboard877)

HAnimSegment817.children.append(HAnimSite874)
HAnimSite881 = x3d.HAnimSite()
HAnimSite881.name = "r_tragion"
HAnimSite881.DEF = "hanim_r_tragion"
HAnimSite881.translation = [-0.0646,1.6347,0.0302]
TouchSensor882 = x3d.TouchSensor()
TouchSensor882.description = "HAnimSite 7 r_tragion"

HAnimSite881.children.append(TouchSensor882)
Shape883 = x3d.Shape()
Shape883.USE = "HAnimSiteShape"

HAnimSite881.children.append(Shape883)
Billboard884 = x3d.Billboard()
Shape885 = x3d.Shape()
Text886 = x3d.Text()
Text886.string = ["7"]
FontStyle887 = x3d.FontStyle()
FontStyle887.size = 0.035

Text886.fontStyle = FontStyle887

Shape885.geometry = Text886

Billboard884.children.append(Shape885)

HAnimSite881.children.append(Billboard884)

HAnimSegment817.children.append(HAnimSite881)
HAnimSite888 = x3d.HAnimSite()
HAnimSite888.name = "sellion"
HAnimSite888.DEF = "hanim_sellion"
HAnimSite888.translation = [0.0058,1.6316,0.0852]
TouchSensor889 = x3d.TouchSensor()
TouchSensor889.description = "HAnimSite 2 sellion"

HAnimSite888.children.append(TouchSensor889)
Shape890 = x3d.Shape()
Shape890.USE = "HAnimSiteShape"

HAnimSite888.children.append(Shape890)
Billboard891 = x3d.Billboard()
Shape892 = x3d.Shape()
Text893 = x3d.Text()
Text893.string = ["2"]
FontStyle894 = x3d.FontStyle()
FontStyle894.size = 0.035

Text893.fontStyle = FontStyle894

Shape892.geometry = Text893

Billboard891.children.append(Shape892)

HAnimSite888.children.append(Billboard891)

HAnimSegment817.children.append(HAnimSite888)
HAnimSite895 = x3d.HAnimSite()
HAnimSite895.name = "skull_vertex"
HAnimSite895.DEF = "hanim_skull_vertex"
HAnimSite895.translation = [0.005,1.7504,0.0055]
TouchSensor896 = x3d.TouchSensor()
TouchSensor896.description = "HAnimSite 0 skull_vertex"

HAnimSite895.children.append(TouchSensor896)
Shape897 = x3d.Shape()
Shape897.USE = "HAnimSiteShape"

HAnimSite895.children.append(Shape897)
Billboard898 = x3d.Billboard()
Shape899 = x3d.Shape()
Text900 = x3d.Text()
Text900.string = ["0"]
FontStyle901 = x3d.FontStyle()
FontStyle901.size = 0.035

Text900.fontStyle = FontStyle901

Shape899.geometry = Text900

Billboard898.children.append(Shape899)

HAnimSite895.children.append(Billboard898)

HAnimSegment817.children.append(HAnimSite895)
Shape902 = x3d.Shape()
LineSet903 = x3d.LineSet()
LineSet903.vertexCount = [2]
Coordinate904 = x3d.Coordinate()

LineSet903.coord = Coordinate904
"""from skullbase to r_eyelid_joint vertices 2"""
ColorRGBA905 = x3d.ColorRGBA()
ColorRGBA905.USE = "HAnimSegmentLineColorRGBA"

LineSet903.color = ColorRGBA905

Shape902.geometry = LineSet903

HAnimSegment817.children.append(Shape902)
Shape906 = x3d.Shape()
LineSet907 = x3d.LineSet()
LineSet907.vertexCount = [2]
Coordinate908 = x3d.Coordinate()

LineSet907.coord = Coordinate908
"""from skullbase to l_eyeball_joint vertices 2"""
ColorRGBA909 = x3d.ColorRGBA()
ColorRGBA909.USE = "HAnimSegmentLineColorRGBA"

LineSet907.color = ColorRGBA909

Shape906.geometry = LineSet907

HAnimSegment817.children.append(Shape906)
Shape910 = x3d.Shape()
LineSet911 = x3d.LineSet()
LineSet911.vertexCount = [2]
Coordinate912 = x3d.Coordinate()

LineSet911.coord = Coordinate912
"""from skullbase to r_eyeball_joint vertices 2"""
ColorRGBA913 = x3d.ColorRGBA()
ColorRGBA913.USE = "HAnimSegmentLineColorRGBA"

LineSet911.color = ColorRGBA913

Shape910.geometry = LineSet911

HAnimSegment817.children.append(Shape910)
Shape914 = x3d.Shape()
LineSet915 = x3d.LineSet()
LineSet915.vertexCount = [2]
Coordinate916 = x3d.Coordinate()

LineSet915.coord = Coordinate916
"""from skullbase to l_eyebrow_joint vertices 2"""
ColorRGBA917 = x3d.ColorRGBA()
ColorRGBA917.USE = "HAnimSegmentLineColorRGBA"

LineSet915.color = ColorRGBA917

Shape914.geometry = LineSet915

HAnimSegment817.children.append(Shape914)
Shape918 = x3d.Shape()
LineSet919 = x3d.LineSet()
LineSet919.vertexCount = [2]
Coordinate920 = x3d.Coordinate()

LineSet919.coord = Coordinate920
"""from skullbase to r_eyebrow_joint vertices 2"""
ColorRGBA921 = x3d.ColorRGBA()
ColorRGBA921.USE = "HAnimSegmentLineColorRGBA"

LineSet919.color = ColorRGBA921

Shape918.geometry = LineSet919

HAnimSegment817.children.append(Shape918)
Shape922 = x3d.Shape()
LineSet923 = x3d.LineSet()
LineSet923.vertexCount = [2]
Coordinate924 = x3d.Coordinate()

LineSet923.coord = Coordinate924
"""from skullbase to temporomandibular vertices 2"""
ColorRGBA925 = x3d.ColorRGBA()
ColorRGBA925.USE = "HAnimSegmentLineColorRGBA"

LineSet923.color = ColorRGBA925

Shape922.geometry = LineSet923

HAnimSegment817.children.append(Shape922)

HAnimJoint816.children.append(HAnimSegment817)
HAnimJoint926 = x3d.HAnimJoint()
HAnimJoint926.name = "l_eyelid_joint"
HAnimJoint926.DEF = "hanim_l_eyelid_joint"
HAnimJoint926.center = [0.0503,1.4157,-0.0689]
HAnimJoint926.ulimit = [0,0,0]
HAnimJoint926.llimit = [0,0,0]

HAnimJoint816.children.append(HAnimJoint926)
HAnimJoint927 = x3d.HAnimJoint()
HAnimJoint927.name = "r_eyelid_joint"
HAnimJoint927.DEF = "hanim_r_eyelid_joint"
HAnimJoint927.center = [-0.0507,1.4157,-0.0689]
HAnimJoint927.ulimit = [0,0,0]
HAnimJoint927.llimit = [0,0,0]

HAnimJoint816.children.append(HAnimJoint927)
HAnimJoint928 = x3d.HAnimJoint()
HAnimJoint928.name = "l_eyeball_joint"
HAnimJoint928.DEF = "hanim_l_eyeball_joint"
HAnimJoint928.center = [0.0479,1.3963,-0.0188]
HAnimJoint928.ulimit = [0,0,0]
HAnimJoint928.llimit = [0,0,0]

HAnimJoint816.children.append(HAnimJoint928)
HAnimJoint929 = x3d.HAnimJoint()
HAnimJoint929.name = "r_eyeball_joint"
HAnimJoint929.DEF = "hanim_r_eyeball_joint"
HAnimJoint929.center = [-0.0483,1.3963,-0.0188]
HAnimJoint929.ulimit = [0,0,0]
HAnimJoint929.llimit = [0,0,0]

HAnimJoint816.children.append(HAnimJoint929)
HAnimJoint930 = x3d.HAnimJoint()
HAnimJoint930.name = "l_eyebrow_joint"
HAnimJoint930.DEF = "hanim_l_eyebrow_joint"
HAnimJoint930.center = [0.0216,1.4053,0.0051]
HAnimJoint930.ulimit = [0,0,0]
HAnimJoint930.llimit = [0,0,0]

HAnimJoint816.children.append(HAnimJoint930)
HAnimJoint931 = x3d.HAnimJoint()
HAnimJoint931.name = "r_eyebrow_joint"
HAnimJoint931.DEF = "hanim_r_eyebrow_joint"
HAnimJoint931.center = [-0.0219,1.4053,0.0051]
HAnimJoint931.ulimit = [0,0,0]
HAnimJoint931.llimit = [0,0,0]

HAnimJoint816.children.append(HAnimJoint931)
HAnimJoint932 = x3d.HAnimJoint()
HAnimJoint932.name = "temporomandibular"
HAnimJoint932.DEF = "hanim_temporomandibular"
HAnimJoint932.center = [-0.0002,1.3043,-0.0865]
HAnimJoint932.ulimit = [0,0,0]
HAnimJoint932.llimit = [0,0,0]

HAnimJoint816.children.append(HAnimJoint932)

HAnimJoint807.children.append(HAnimJoint816)

HAnimJoint791.children.append(HAnimJoint807)

HAnimJoint782.children.append(HAnimJoint791)

HAnimJoint773.children.append(HAnimJoint782)

HAnimJoint764.children.append(HAnimJoint773)

HAnimJoint755.children.append(HAnimJoint764)

HAnimJoint732.children.append(HAnimJoint755)

HAnimJoint701.children.append(HAnimJoint732)
HAnimJoint933 = x3d.HAnimJoint()
HAnimJoint933.name = "l_sternoclavicular"
HAnimJoint933.DEF = "hanim_l_sternoclavicular"
HAnimJoint933.center = [0.082,1.4488,-0.0353]
HAnimJoint933.ulimit = [0,0,0]
HAnimJoint933.llimit = [0,0,0]
HAnimSegment934 = x3d.HAnimSegment()
HAnimSegment934.name = "l_clavicle"
HAnimSegment934.DEF = "hanim_l_clavicle"
Transform935 = x3d.Transform()
Transform935.translation = [0.082,1.4488,-0.0353]
Transform936 = x3d.Transform()
"""Empty Transform"""
Shape937 = x3d.Shape()
Shape937.USE = "HAnimJointShape"

Transform936.children.append(Shape937)

Transform935.children.append(Transform936)

HAnimSegment934.children.append(Transform935)
Shape938 = x3d.Shape()
LineSet939 = x3d.LineSet()
LineSet939.vertexCount = [2]
Coordinate940 = x3d.Coordinate()

LineSet939.coord = Coordinate940
"""from l_sternoclavicular to l_acromioclavicular vertices 2"""
ColorRGBA941 = x3d.ColorRGBA()
ColorRGBA941.USE = "HAnimSegmentLineColorRGBA"

LineSet939.color = ColorRGBA941

Shape938.geometry = LineSet939

HAnimSegment934.children.append(Shape938)
HAnimSite942 = x3d.HAnimSite()
HAnimSite942.name = "l_acromion"
HAnimSite942.DEF = "hanim_l_acromion"
HAnimSite942.translation = [0.2032,1.476,-0.049]
TouchSensor943 = x3d.TouchSensor()
TouchSensor943.description = "HAnimSite 15 l_acromion"

HAnimSite942.children.append(TouchSensor943)
Shape944 = x3d.Shape()
Shape944.USE = "HAnimSiteShape"

HAnimSite942.children.append(Shape944)
Billboard945 = x3d.Billboard()
Shape946 = x3d.Shape()
Text947 = x3d.Text()
Text947.string = ["15"]
FontStyle948 = x3d.FontStyle()
FontStyle948.size = 0.035

Text947.fontStyle = FontStyle948

Shape946.geometry = Text947

Billboard945.children.append(Shape946)

HAnimSite942.children.append(Billboard945)

HAnimSegment934.children.append(HAnimSite942)
HAnimSite949 = x3d.HAnimSite()
HAnimSite949.name = "l_axilla_distal"
HAnimSite949.DEF = "hanim_l_axilla_distal"
HAnimSite949.translation = [0.1706,1.4072,-0.0875]
TouchSensor950 = x3d.TouchSensor()
TouchSensor950.description = "HAnimSite 17 l_axilla_distal"

HAnimSite949.children.append(TouchSensor950)
Shape951 = x3d.Shape()
Shape951.USE = "HAnimSiteShape"

HAnimSite949.children.append(Shape951)
Billboard952 = x3d.Billboard()
Shape953 = x3d.Shape()
Text954 = x3d.Text()
Text954.string = ["17"]
FontStyle955 = x3d.FontStyle()
FontStyle955.size = 0.035

Text954.fontStyle = FontStyle955

Shape953.geometry = Text954

Billboard952.children.append(Shape953)

HAnimSite949.children.append(Billboard952)

HAnimSegment934.children.append(HAnimSite949)
HAnimSite956 = x3d.HAnimSite()
HAnimSite956.name = "l_axilla_posterior_folds"
HAnimSite956.DEF = "hanim_l_axilla_posterior_folds"
TouchSensor957 = x3d.TouchSensor()
TouchSensor957.description = "HAnimSite 18 l_axilla_posterior_folds"

HAnimSite956.children.append(TouchSensor957)
Shape958 = x3d.Shape()
Shape958.USE = "HAnimSiteShape"

HAnimSite956.children.append(Shape958)
Billboard959 = x3d.Billboard()
Shape960 = x3d.Shape()
Text961 = x3d.Text()
Text961.string = ["18"]
FontStyle962 = x3d.FontStyle()
FontStyle962.size = 0.035

Text961.fontStyle = FontStyle962

Shape960.geometry = Text961

Billboard959.children.append(Shape960)

HAnimSite956.children.append(Billboard959)

HAnimSegment934.children.append(HAnimSite956)
HAnimSite963 = x3d.HAnimSite()
HAnimSite963.name = "l_axilla_proximal"
HAnimSite963.DEF = "hanim_l_axilla_proximal"
HAnimSite963.translation = [0.1777,1.4065,-0.0075]
TouchSensor964 = x3d.TouchSensor()
TouchSensor964.description = "HAnimSite 16 l_axilla_proximal"

HAnimSite963.children.append(TouchSensor964)
Shape965 = x3d.Shape()
Shape965.USE = "HAnimSiteShape"

HAnimSite963.children.append(Shape965)
Billboard966 = x3d.Billboard()
Shape967 = x3d.Shape()
Text968 = x3d.Text()
Text968.string = ["16"]
FontStyle969 = x3d.FontStyle()
FontStyle969.size = 0.035

Text968.fontStyle = FontStyle969

Shape967.geometry = Text968

Billboard966.children.append(Shape967)

HAnimSite963.children.append(Billboard966)

HAnimSegment934.children.append(HAnimSite963)
HAnimSite970 = x3d.HAnimSite()
HAnimSite970.name = "l_clavicale"
HAnimSite970.DEF = "hanim_l_clavicale"
HAnimSite970.translation = [0.0271,1.4943,0.0394]
TouchSensor971 = x3d.TouchSensor()
TouchSensor971.description = "HAnimSite 14 l_clavicale"

HAnimSite970.children.append(TouchSensor971)
Shape972 = x3d.Shape()
Shape972.USE = "HAnimSiteShape"

HAnimSite970.children.append(Shape972)
Billboard973 = x3d.Billboard()
Shape974 = x3d.Shape()
Text975 = x3d.Text()
Text975.string = ["14"]
FontStyle976 = x3d.FontStyle()
FontStyle976.size = 0.035

Text975.fontStyle = FontStyle976

Shape974.geometry = Text975

Billboard973.children.append(Shape974)

HAnimSite970.children.append(Billboard973)

HAnimSegment934.children.append(HAnimSite970)

HAnimJoint933.children.append(HAnimSegment934)
HAnimJoint977 = x3d.HAnimJoint()
HAnimJoint977.name = "l_acromioclavicular"
HAnimJoint977.DEF = "hanim_l_acromioclavicular"
HAnimJoint977.center = [0.0962,1.4269,-0.0424]
HAnimJoint977.ulimit = [0,0,0]
HAnimJoint977.llimit = [0,0,0]
HAnimSegment978 = x3d.HAnimSegment()
HAnimSegment978.name = "l_scapula"
HAnimSegment978.DEF = "hanim_l_scapula"
Transform979 = x3d.Transform()
Transform979.translation = [0.0962,1.4269,-0.0424]
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
"""from l_acromioclavicular to l_shoulder vertices 2"""
ColorRGBA985 = x3d.ColorRGBA()
ColorRGBA985.USE = "HAnimSegmentLineColorRGBA"

LineSet983.color = ColorRGBA985

Shape982.geometry = LineSet983

HAnimSegment978.children.append(Shape982)

HAnimJoint977.children.append(HAnimSegment978)
HAnimJoint986 = x3d.HAnimJoint()
HAnimJoint986.name = "l_shoulder"
HAnimJoint986.DEF = "hanim_l_shoulder"
HAnimJoint986.center = [0.2029,1.4376,-0.0387]
HAnimJoint986.ulimit = [0,0,0]
HAnimJoint986.llimit = [0,0,0]
HAnimSegment987 = x3d.HAnimSegment()
HAnimSegment987.name = "l_upperarm"
HAnimSegment987.DEF = "hanim_l_upperarm"
Transform988 = x3d.Transform()
Transform988.translation = [0.2029,1.4376,-0.0387]
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
"""from l_shoulder to l_elbow vertices 2"""
ColorRGBA994 = x3d.ColorRGBA()
ColorRGBA994.USE = "HAnimSegmentLineColorRGBA"

LineSet992.color = ColorRGBA994

Shape991.geometry = LineSet992

HAnimSegment987.children.append(Shape991)
HAnimSite995 = x3d.HAnimSite()
HAnimSite995.name = "l_bideltoid"
HAnimSite995.DEF = "hanim_l_bideltoid"
TouchSensor996 = x3d.TouchSensor()
TouchSensor996.description = "HAnimSite 96 l_bideltoid"

HAnimSite995.children.append(TouchSensor996)
Shape997 = x3d.Shape()
Shape997.USE = "HAnimSiteShape"

HAnimSite995.children.append(Shape997)
Billboard998 = x3d.Billboard()
Shape999 = x3d.Shape()
Text1000 = x3d.Text()
Text1000.string = ["96"]
FontStyle1001 = x3d.FontStyle()
FontStyle1001.size = 0.035

Text1000.fontStyle = FontStyle1001

Shape999.geometry = Text1000

Billboard998.children.append(Shape999)

HAnimSite995.children.append(Billboard998)

HAnimSegment987.children.append(HAnimSite995)
HAnimSite1002 = x3d.HAnimSite()
HAnimSite1002.name = "l_humeral_lateral_epicondyles"
HAnimSite1002.DEF = "hanim_l_humeral_lateral_epicondyles"
HAnimSite1002.translation = [0.228,1.1482,-0.11]
TouchSensor1003 = x3d.TouchSensor()
TouchSensor1003.description = "HAnimSite 63 l_humeral_lateral_epicondyles"

HAnimSite1002.children.append(TouchSensor1003)
Shape1004 = x3d.Shape()
Shape1004.USE = "HAnimSiteShape"

HAnimSite1002.children.append(Shape1004)
Billboard1005 = x3d.Billboard()
Shape1006 = x3d.Shape()
Text1007 = x3d.Text()
Text1007.string = ["63"]
FontStyle1008 = x3d.FontStyle()
FontStyle1008.size = 0.035

Text1007.fontStyle = FontStyle1008

Shape1006.geometry = Text1007

Billboard1005.children.append(Shape1006)

HAnimSite1002.children.append(Billboard1005)

HAnimSegment987.children.append(HAnimSite1002)

HAnimJoint986.children.append(HAnimSegment987)
HAnimJoint1009 = x3d.HAnimJoint()
HAnimJoint1009.name = "l_elbow"
HAnimJoint1009.DEF = "hanim_l_elbow"
HAnimJoint1009.center = [0.2014,1.1357,-0.0682]
HAnimJoint1009.ulimit = [0,0,0]
HAnimJoint1009.llimit = [0,0,0]
HAnimSegment1010 = x3d.HAnimSegment()
HAnimSegment1010.name = "l_forearm"
HAnimSegment1010.DEF = "hanim_l_forearm"
Transform1011 = x3d.Transform()
Transform1011.translation = [0.2014,1.1357,-0.0682]
Transform1012 = x3d.Transform()
"""Empty Transform"""
Shape1013 = x3d.Shape()
Shape1013.USE = "HAnimJointShape"

Transform1012.children.append(Shape1013)

Transform1011.children.append(Transform1012)

HAnimSegment1010.children.append(Transform1011)
Shape1014 = x3d.Shape()
LineSet1015 = x3d.LineSet()
LineSet1015.vertexCount = [2]
Coordinate1016 = x3d.Coordinate()

LineSet1015.coord = Coordinate1016
"""from l_elbow to l_radiocarpal vertices 2"""
ColorRGBA1017 = x3d.ColorRGBA()
ColorRGBA1017.USE = "HAnimSegmentLineColorRGBA"

LineSet1015.color = ColorRGBA1017

Shape1014.geometry = LineSet1015

HAnimSegment1010.children.append(Shape1014)
HAnimSite1018 = x3d.HAnimSite()
HAnimSite1018.name = "l_humeral_medial_epicondyles"
HAnimSite1018.DEF = "hanim_l_humeral_medial_epicondyles"
HAnimSite1018.translation = [0.1735,1.1272,-0.1113]
TouchSensor1019 = x3d.TouchSensor()
TouchSensor1019.description = "HAnimSite 64 l_humeral_medial_epicondyles"

HAnimSite1018.children.append(TouchSensor1019)
Shape1020 = x3d.Shape()
Shape1020.USE = "HAnimSiteShape"

HAnimSite1018.children.append(Shape1020)
Billboard1021 = x3d.Billboard()
Shape1022 = x3d.Shape()
Text1023 = x3d.Text()
Text1023.string = ["64"]
FontStyle1024 = x3d.FontStyle()
FontStyle1024.size = 0.035

Text1023.fontStyle = FontStyle1024

Shape1022.geometry = Text1023

Billboard1021.children.append(Shape1022)

HAnimSite1018.children.append(Billboard1021)

HAnimSegment1010.children.append(HAnimSite1018)
HAnimSite1025 = x3d.HAnimSite()
HAnimSite1025.name = "l_olecranon"
HAnimSite1025.DEF = "hanim_l_olecranon"
HAnimSite1025.translation = [-0.1962,1.1375,-0.1123]
TouchSensor1026 = x3d.TouchSensor()
TouchSensor1026.description = "HAnimSite 65 l_olecranon"

HAnimSite1025.children.append(TouchSensor1026)
Shape1027 = x3d.Shape()
Shape1027.USE = "HAnimSiteShape"

HAnimSite1025.children.append(Shape1027)
Billboard1028 = x3d.Billboard()
Shape1029 = x3d.Shape()
Text1030 = x3d.Text()
Text1030.string = ["65"]
FontStyle1031 = x3d.FontStyle()
FontStyle1031.size = 0.035

Text1030.fontStyle = FontStyle1031

Shape1029.geometry = Text1030

Billboard1028.children.append(Shape1029)

HAnimSite1025.children.append(Billboard1028)

HAnimSegment1010.children.append(HAnimSite1025)
HAnimSite1032 = x3d.HAnimSite()
HAnimSite1032.name = "l_radial_styloid"
HAnimSite1032.DEF = "hanim_l_radial_styloid"
HAnimSite1032.translation = [0.1901,0.8645,-0.0415]
TouchSensor1033 = x3d.TouchSensor()
TouchSensor1033.description = "HAnimSite 71 l_radial_styloid"

HAnimSite1032.children.append(TouchSensor1033)
Shape1034 = x3d.Shape()
Shape1034.USE = "HAnimSiteShape"

HAnimSite1032.children.append(Shape1034)
Billboard1035 = x3d.Billboard()
Shape1036 = x3d.Shape()
Text1037 = x3d.Text()
Text1037.string = ["71"]
FontStyle1038 = x3d.FontStyle()
FontStyle1038.size = 0.035

Text1037.fontStyle = FontStyle1038

Shape1036.geometry = Text1037

Billboard1035.children.append(Shape1036)

HAnimSite1032.children.append(Billboard1035)

HAnimSegment1010.children.append(HAnimSite1032)
HAnimSite1039 = x3d.HAnimSite()
HAnimSite1039.name = "l_radiale"
HAnimSite1039.DEF = "hanim_l_radiale"
HAnimSite1039.translation = [0.2182,1.1212,-0.1167]
TouchSensor1040 = x3d.TouchSensor()
TouchSensor1040.description = "HAnimSite 69 l_radiale"

HAnimSite1039.children.append(TouchSensor1040)
Shape1041 = x3d.Shape()
Shape1041.USE = "HAnimSiteShape"

HAnimSite1039.children.append(Shape1041)
Billboard1042 = x3d.Billboard()
Shape1043 = x3d.Shape()
Text1044 = x3d.Text()
Text1044.string = ["69"]
FontStyle1045 = x3d.FontStyle()
FontStyle1045.size = 0.035

Text1044.fontStyle = FontStyle1045

Shape1043.geometry = Text1044

Billboard1042.children.append(Shape1043)

HAnimSite1039.children.append(Billboard1042)

HAnimSegment1010.children.append(HAnimSite1039)

HAnimJoint1009.children.append(HAnimSegment1010)
HAnimJoint1046 = x3d.HAnimJoint()
HAnimJoint1046.name = "l_radiocarpal"
HAnimJoint1046.DEF = "hanim_l_radiocarpal"
HAnimJoint1046.center = [0.1984,0.8663,-0.0583]
HAnimJoint1046.ulimit = [0,0,0]
HAnimJoint1046.llimit = [0,0,0]
HAnimSegment1047 = x3d.HAnimSegment()
HAnimSegment1047.name = "l_carpal"
HAnimSegment1047.DEF = "hanim_l_carpal"
Transform1048 = x3d.Transform()
Transform1048.scale = [0.2,0.2,0.2]
Transform1048.translation = [0.2,0.85,-0.05]
Transform1048.rotation = [0,0,1,-3.14]
"""Transform left hand"""
Transform1049 = x3d.Transform()
Transform1049.rotation = [0,1,0,-1.57]
"""Transform left hand"""
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
"""from l_radiocarpal to l_carpometacarpal_1 vertices 2"""
ColorRGBA1054 = x3d.ColorRGBA()
ColorRGBA1054.USE = "HAnimSegmentLineColorRGBA"

LineSet1052.color = ColorRGBA1054

Shape1051.geometry = LineSet1052

HAnimSegment1047.children.append(Shape1051)
HAnimSite1055 = x3d.HAnimSite()
HAnimSite1055.name = "l_ulnar_styloid"
HAnimSite1055.DEF = "hanim_l_ulnar_styloid"
HAnimSite1055.translation = [-0.2142,0.8529,-0.0648]
TouchSensor1056 = x3d.TouchSensor()
TouchSensor1056.description = "HAnimSite 70 l_ulnar_styloid"

HAnimSite1055.children.append(TouchSensor1056)
Shape1057 = x3d.Shape()
Shape1057.USE = "HAnimSiteShape"

HAnimSite1055.children.append(Shape1057)
Billboard1058 = x3d.Billboard()
Shape1059 = x3d.Shape()
Text1060 = x3d.Text()
Text1060.string = ["70"]
FontStyle1061 = x3d.FontStyle()
FontStyle1061.size = 0.035

Text1060.fontStyle = FontStyle1061

Shape1059.geometry = Text1060

Billboard1058.children.append(Shape1059)

HAnimSite1055.children.append(Billboard1058)

HAnimSegment1047.children.append(HAnimSite1055)
Shape1062 = x3d.Shape()
LineSet1063 = x3d.LineSet()
LineSet1063.vertexCount = [2]
Coordinate1064 = x3d.Coordinate()

LineSet1063.coord = Coordinate1064
"""from l_radiocarpal to l_carpometacarpal_2 vertices 2"""
ColorRGBA1065 = x3d.ColorRGBA()
ColorRGBA1065.USE = "HAnimSegmentLineColorRGBA"

LineSet1063.color = ColorRGBA1065

Shape1062.geometry = LineSet1063

HAnimSegment1047.children.append(Shape1062)
Shape1066 = x3d.Shape()
LineSet1067 = x3d.LineSet()
LineSet1067.vertexCount = [2]
Coordinate1068 = x3d.Coordinate()

LineSet1067.coord = Coordinate1068
"""from l_radiocarpal to l_carpometacarpal_3 vertices 2"""
ColorRGBA1069 = x3d.ColorRGBA()
ColorRGBA1069.USE = "HAnimSegmentLineColorRGBA"

LineSet1067.color = ColorRGBA1069

Shape1066.geometry = LineSet1067

HAnimSegment1047.children.append(Shape1066)
Shape1070 = x3d.Shape()
LineSet1071 = x3d.LineSet()
LineSet1071.vertexCount = [2]
Coordinate1072 = x3d.Coordinate()

LineSet1071.coord = Coordinate1072
"""from l_radiocarpal to l_carpometacarpal_4 vertices 2"""
ColorRGBA1073 = x3d.ColorRGBA()
ColorRGBA1073.USE = "HAnimSegmentLineColorRGBA"

LineSet1071.color = ColorRGBA1073

Shape1070.geometry = LineSet1071

HAnimSegment1047.children.append(Shape1070)
Shape1074 = x3d.Shape()
LineSet1075 = x3d.LineSet()
LineSet1075.vertexCount = [2]
Coordinate1076 = x3d.Coordinate()

LineSet1075.coord = Coordinate1076
"""from l_radiocarpal to l_carpometacarpal_5 vertices 2"""
ColorRGBA1077 = x3d.ColorRGBA()
ColorRGBA1077.USE = "HAnimSegmentLineColorRGBA"

LineSet1075.color = ColorRGBA1077

Shape1074.geometry = LineSet1075

HAnimSegment1047.children.append(Shape1074)

HAnimJoint1046.children.append(HAnimSegment1047)
HAnimJoint1078 = x3d.HAnimJoint()
HAnimJoint1078.name = "l_carpometacarpal_1"
HAnimJoint1078.DEF = "hanim_l_carpometacarpal_1"
HAnimJoint1078.center = [0.1924,0.8472,-0.0534]
HAnimJoint1078.ulimit = [0,0,0]
HAnimJoint1078.llimit = [0,0,0]
HAnimSegment1079 = x3d.HAnimSegment()
HAnimSegment1079.name = "l_metacarpal_1"
HAnimSegment1079.DEF = "hanim_l_metacarpal_1"
Transform1080 = x3d.Transform()
Transform1080.translation = [0.1924,0.8472,-0.0534]
Transform1081 = x3d.Transform()
"""Empty Transform"""
Shape1082 = x3d.Shape()
Shape1082.USE = "HAnimJointShape"

Transform1081.children.append(Shape1082)

Transform1080.children.append(Transform1081)

HAnimSegment1079.children.append(Transform1080)
Shape1083 = x3d.Shape()
LineSet1084 = x3d.LineSet()
LineSet1084.vertexCount = [2]
Coordinate1085 = x3d.Coordinate()

LineSet1084.coord = Coordinate1085
"""from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2"""
ColorRGBA1086 = x3d.ColorRGBA()
ColorRGBA1086.USE = "HAnimSegmentLineColorRGBA"

LineSet1084.color = ColorRGBA1086

Shape1083.geometry = LineSet1084

HAnimSegment1079.children.append(Shape1083)

HAnimJoint1078.children.append(HAnimSegment1079)
HAnimJoint1087 = x3d.HAnimJoint()
HAnimJoint1087.name = "l_metacarpophalangeal_1"
HAnimJoint1087.DEF = "hanim_l_metacarpophalangeal_1"
HAnimJoint1087.center = [0.1951,0.8226,0.0246]
HAnimJoint1087.ulimit = [0,0,0]
HAnimJoint1087.llimit = [0,0,0]
HAnimSegment1088 = x3d.HAnimSegment()
HAnimSegment1088.name = "l_carpal_proximal_phalanx_1"
HAnimSegment1088.DEF = "hanim_l_carpal_proximal_phalanx_1"
Transform1089 = x3d.Transform()
Transform1089.translation = [0.1951,0.8226,0.0246]
Transform1090 = x3d.Transform()
"""Empty Transform"""
Shape1091 = x3d.Shape()
Shape1091.USE = "HAnimJointShape"

Transform1090.children.append(Shape1091)

Transform1089.children.append(Transform1090)

HAnimSegment1088.children.append(Transform1089)
Shape1092 = x3d.Shape()
LineSet1093 = x3d.LineSet()
LineSet1093.vertexCount = [2]
Coordinate1094 = x3d.Coordinate()

LineSet1093.coord = Coordinate1094
"""from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2"""
ColorRGBA1095 = x3d.ColorRGBA()
ColorRGBA1095.USE = "HAnimSegmentLineColorRGBA"

LineSet1093.color = ColorRGBA1095

Shape1092.geometry = LineSet1093

HAnimSegment1088.children.append(Shape1092)

HAnimJoint1087.children.append(HAnimSegment1088)
HAnimJoint1096 = x3d.HAnimJoint()
HAnimJoint1096.name = "l_carpal_interphalangeal_1"
HAnimJoint1096.DEF = "hanim_l_carpal_interphalangeal_1"
HAnimJoint1096.center = [0.1955,0.8159,0.0464]
HAnimJoint1096.ulimit = [0,0,0]
HAnimJoint1096.llimit = [0,0,0]

HAnimJoint1087.children.append(HAnimJoint1096)

HAnimJoint1078.children.append(HAnimJoint1087)

HAnimJoint1046.children.append(HAnimJoint1078)
HAnimJoint1097 = x3d.HAnimJoint()
HAnimJoint1097.name = "l_carpometacarpal_2"
HAnimJoint1097.DEF = "hanim_l_carpometacarpal_2"
HAnimJoint1097.center = [0.1983,0.8024,-0.028]
HAnimJoint1097.ulimit = [0,0,0]
HAnimJoint1097.llimit = [0,0,0]
HAnimSegment1098 = x3d.HAnimSegment()
HAnimSegment1098.name = "l_metacarpal_2"
HAnimSegment1098.DEF = "hanim_l_metacarpal_2"
Transform1099 = x3d.Transform()
Transform1099.translation = [0.1983,0.8024,-0.028]
Transform1100 = x3d.Transform()
"""Empty Transform"""
Shape1101 = x3d.Shape()
Shape1101.USE = "HAnimJointShape"

Transform1100.children.append(Shape1101)

Transform1099.children.append(Transform1100)

HAnimSegment1098.children.append(Transform1099)
Shape1102 = x3d.Shape()
LineSet1103 = x3d.LineSet()
LineSet1103.vertexCount = [2]
Coordinate1104 = x3d.Coordinate()

LineSet1103.coord = Coordinate1104
"""from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2"""
ColorRGBA1105 = x3d.ColorRGBA()
ColorRGBA1105.USE = "HAnimSegmentLineColorRGBA"

LineSet1103.color = ColorRGBA1105

Shape1102.geometry = LineSet1103

HAnimSegment1098.children.append(Shape1102)
HAnimSite1106 = x3d.HAnimSite()
HAnimSite1106.name = "l_metacarpal_phalanx_2"
HAnimSite1106.DEF = "hanim_l_metacarpal_phalanx_2"
HAnimSite1106.translation = [0.2009,0.8139,-0.0237]
TouchSensor1107 = x3d.TouchSensor()
TouchSensor1107.description = "HAnimSite 75 l_metacarpal_phalanx_2"

HAnimSite1106.children.append(TouchSensor1107)
Shape1108 = x3d.Shape()
Shape1108.USE = "HAnimSiteShape"

HAnimSite1106.children.append(Shape1108)
Billboard1109 = x3d.Billboard()
Shape1110 = x3d.Shape()
Text1111 = x3d.Text()
Text1111.string = ["75"]
FontStyle1112 = x3d.FontStyle()
FontStyle1112.size = 0.035

Text1111.fontStyle = FontStyle1112

Shape1110.geometry = Text1111

Billboard1109.children.append(Shape1110)

HAnimSite1106.children.append(Billboard1109)

HAnimSegment1098.children.append(HAnimSite1106)

HAnimJoint1097.children.append(HAnimSegment1098)
HAnimJoint1113 = x3d.HAnimJoint()
HAnimJoint1113.name = "l_metacarpophalangeal_2"
HAnimJoint1113.DEF = "hanim_l_metacarpophalangeal_2"
HAnimJoint1113.center = [0.1983,0.7815,-0.028]
HAnimJoint1113.ulimit = [0,0,0]
HAnimJoint1113.llimit = [0,0,0]
HAnimSegment1114 = x3d.HAnimSegment()
HAnimSegment1114.name = "l_carpal_proximal_phalanx_2"
HAnimSegment1114.DEF = "hanim_l_carpal_proximal_phalanx_2"
Transform1115 = x3d.Transform()
Transform1115.translation = [0.1983,0.7815,-0.028]
Transform1116 = x3d.Transform()
"""Empty Transform"""
Shape1117 = x3d.Shape()
Shape1117.USE = "HAnimJointShape"

Transform1116.children.append(Shape1117)

Transform1115.children.append(Transform1116)

HAnimSegment1114.children.append(Transform1115)
Shape1118 = x3d.Shape()
LineSet1119 = x3d.LineSet()
LineSet1119.vertexCount = [2]
Coordinate1120 = x3d.Coordinate()

LineSet1119.coord = Coordinate1120
"""from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2"""
ColorRGBA1121 = x3d.ColorRGBA()
ColorRGBA1121.USE = "HAnimSegmentLineColorRGBA"

LineSet1119.color = ColorRGBA1121

Shape1118.geometry = LineSet1119

HAnimSegment1114.children.append(Shape1118)

HAnimJoint1113.children.append(HAnimSegment1114)
HAnimJoint1122 = x3d.HAnimJoint()
HAnimJoint1122.name = "l_carpal_proximal_interphalangeal_2"
HAnimJoint1122.DEF = "hanim_l_carpal_proximal_interphalangeal_2"
HAnimJoint1122.center = [0.2017,0.7363,-0.0248]
HAnimJoint1122.ulimit = [0,0,0]
HAnimJoint1122.llimit = [0,0,0]
HAnimSegment1123 = x3d.HAnimSegment()
HAnimSegment1123.name = "l_carpal_middle_phalanx_2"
HAnimSegment1123.DEF = "hanim_l_carpal_middle_phalanx_2"
Transform1124 = x3d.Transform()
Transform1124.translation = [0.2017,0.7363,-0.0248]
Transform1125 = x3d.Transform()
"""Empty Transform"""
Shape1126 = x3d.Shape()
Shape1126.USE = "HAnimJointShape"

Transform1125.children.append(Shape1126)

Transform1124.children.append(Transform1125)

HAnimSegment1123.children.append(Transform1124)
Shape1127 = x3d.Shape()
LineSet1128 = x3d.LineSet()
LineSet1128.vertexCount = [2]
Coordinate1129 = x3d.Coordinate()

LineSet1128.coord = Coordinate1129
"""from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2"""
ColorRGBA1130 = x3d.ColorRGBA()
ColorRGBA1130.USE = "HAnimSegmentLineColorRGBA"

LineSet1128.color = ColorRGBA1130

Shape1127.geometry = LineSet1128

HAnimSegment1123.children.append(Shape1127)

HAnimJoint1122.children.append(HAnimSegment1123)
HAnimJoint1131 = x3d.HAnimJoint()
HAnimJoint1131.name = "l_carpal_distal_interphalangeal_2"
HAnimJoint1131.DEF = "hanim_l_carpal_distal_interphalangeal_2"
HAnimJoint1131.center = [0.2028,0.7139,-0.0236]
HAnimJoint1131.ulimit = [0,0,0]
HAnimJoint1131.llimit = [0,0,0]

HAnimJoint1122.children.append(HAnimJoint1131)

HAnimJoint1113.children.append(HAnimJoint1122)

HAnimJoint1097.children.append(HAnimJoint1113)

HAnimJoint1046.children.append(HAnimJoint1097)
HAnimJoint1132 = x3d.HAnimJoint()
HAnimJoint1132.name = "l_carpometacarpal_3"
HAnimJoint1132.DEF = "hanim_l_carpometacarpal_3"
HAnimJoint1132.center = [0.1987,0.8029,-0.053]
HAnimJoint1132.ulimit = [0,0,0]
HAnimJoint1132.llimit = [0,0,0]
HAnimSegment1133 = x3d.HAnimSegment()
HAnimSegment1133.name = "l_metacarpal_3"
HAnimSegment1133.DEF = "hanim_l_metacarpal_3"
Transform1134 = x3d.Transform()
Transform1134.translation = [0.1987,0.8029,-0.053]
Transform1135 = x3d.Transform()
"""Empty Transform"""
Shape1136 = x3d.Shape()
Shape1136.USE = "HAnimJointShape"

Transform1135.children.append(Shape1136)

Transform1134.children.append(Transform1135)

HAnimSegment1133.children.append(Transform1134)
Shape1137 = x3d.Shape()
LineSet1138 = x3d.LineSet()
LineSet1138.vertexCount = [2]
Coordinate1139 = x3d.Coordinate()

LineSet1138.coord = Coordinate1139
"""from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2"""
ColorRGBA1140 = x3d.ColorRGBA()
ColorRGBA1140.USE = "HAnimSegmentLineColorRGBA"

LineSet1138.color = ColorRGBA1140

Shape1137.geometry = LineSet1138

HAnimSegment1133.children.append(Shape1137)
HAnimSite1141 = x3d.HAnimSite()
HAnimSite1141.name = "l_metacarpal_phalanx_3"
HAnimSite1141.DEF = "hanim_l_metacarpal_phalanx_3"
TouchSensor1142 = x3d.TouchSensor()
TouchSensor1142.description = "HAnimSite 76 l_metacarpal_phalanx_3"

HAnimSite1141.children.append(TouchSensor1142)
Shape1143 = x3d.Shape()
Shape1143.USE = "HAnimSiteShape"

HAnimSite1141.children.append(Shape1143)
Billboard1144 = x3d.Billboard()
Shape1145 = x3d.Shape()
Text1146 = x3d.Text()
Text1146.string = ["76"]
FontStyle1147 = x3d.FontStyle()
FontStyle1147.size = 0.035

Text1146.fontStyle = FontStyle1147

Shape1145.geometry = Text1146

Billboard1144.children.append(Shape1145)

HAnimSite1141.children.append(Billboard1144)

HAnimSegment1133.children.append(HAnimSite1141)

HAnimJoint1132.children.append(HAnimSegment1133)
HAnimJoint1148 = x3d.HAnimJoint()
HAnimJoint1148.name = "l_metacarpophalangeal_3"
HAnimJoint1148.DEF = "hanim_l_metacarpophalangeal_3"
HAnimJoint1148.center = [0.1987,0.7818,-0.053]
HAnimJoint1148.ulimit = [0,0,0]
HAnimJoint1148.llimit = [0,0,0]
HAnimSegment1149 = x3d.HAnimSegment()
HAnimSegment1149.name = "l_carpal_proximal_phalanx_3"
HAnimSegment1149.DEF = "hanim_l_carpal_proximal_phalanx_3"
Transform1150 = x3d.Transform()
Transform1150.translation = [0.1987,0.7818,-0.053]
Transform1151 = x3d.Transform()
"""Empty Transform"""
Shape1152 = x3d.Shape()
Shape1152.USE = "HAnimJointShape"

Transform1151.children.append(Shape1152)

Transform1150.children.append(Transform1151)

HAnimSegment1149.children.append(Transform1150)
Shape1153 = x3d.Shape()
LineSet1154 = x3d.LineSet()
LineSet1154.vertexCount = [2]
Coordinate1155 = x3d.Coordinate()

LineSet1154.coord = Coordinate1155
"""from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2"""
ColorRGBA1156 = x3d.ColorRGBA()
ColorRGBA1156.USE = "HAnimSegmentLineColorRGBA"

LineSet1154.color = ColorRGBA1156

Shape1153.geometry = LineSet1154

HAnimSegment1149.children.append(Shape1153)

HAnimJoint1148.children.append(HAnimSegment1149)
HAnimJoint1157 = x3d.HAnimJoint()
HAnimJoint1157.name = "l_carpal_proximal_interphalangeal_3"
HAnimJoint1157.DEF = "hanim_l_carpal_proximal_interphalangeal_3"
HAnimJoint1157.center = [0.2013,0.7273,-0.0503]
HAnimJoint1157.ulimit = [0,0,0]
HAnimJoint1157.llimit = [0,0,0]
HAnimSegment1158 = x3d.HAnimSegment()
HAnimSegment1158.name = "l_carpal_middle_phalanx_3"
HAnimSegment1158.DEF = "hanim_l_carpal_middle_phalanx_3"
Transform1159 = x3d.Transform()
Transform1159.translation = [0.2013,0.7273,-0.0503]
Transform1160 = x3d.Transform()
"""Empty Transform"""
Shape1161 = x3d.Shape()
Shape1161.USE = "HAnimJointShape"

Transform1160.children.append(Shape1161)

Transform1159.children.append(Transform1160)

HAnimSegment1158.children.append(Transform1159)
Shape1162 = x3d.Shape()
LineSet1163 = x3d.LineSet()
LineSet1163.vertexCount = [2]
Coordinate1164 = x3d.Coordinate()

LineSet1163.coord = Coordinate1164
"""from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2"""
ColorRGBA1165 = x3d.ColorRGBA()
ColorRGBA1165.USE = "HAnimSegmentLineColorRGBA"

LineSet1163.color = ColorRGBA1165

Shape1162.geometry = LineSet1163

HAnimSegment1158.children.append(Shape1162)

HAnimJoint1157.children.append(HAnimSegment1158)
HAnimJoint1166 = x3d.HAnimJoint()
HAnimJoint1166.name = "l_carpal_distal_interphalangeal_3"
HAnimJoint1166.DEF = "hanim_l_carpal_distal_interphalangeal_3"
HAnimJoint1166.center = [0.2026,0.7011,-0.0494]
HAnimJoint1166.ulimit = [0,0,0]
HAnimJoint1166.llimit = [0,0,0]

HAnimJoint1157.children.append(HAnimJoint1166)

HAnimJoint1148.children.append(HAnimJoint1157)

HAnimJoint1132.children.append(HAnimJoint1148)

HAnimJoint1046.children.append(HAnimJoint1132)
HAnimJoint1167 = x3d.HAnimJoint()
HAnimJoint1167.name = "l_carpometacarpal_4"
HAnimJoint1167.DEF = "hanim_l_carpometacarpal_4"
HAnimJoint1167.center = [0.1956,0.8019,-0.0794]
HAnimJoint1167.ulimit = [0,0,0]
HAnimJoint1167.llimit = [0,0,0]
HAnimSegment1168 = x3d.HAnimSegment()
HAnimSegment1168.name = "l_metacarpal_4"
HAnimSegment1168.DEF = "hanim_l_metacarpal_4"
Transform1169 = x3d.Transform()
Transform1169.translation = [0.1956,0.8019,-0.0794]
Transform1170 = x3d.Transform()
"""Empty Transform"""
Shape1171 = x3d.Shape()
Shape1171.USE = "HAnimJointShape"

Transform1170.children.append(Shape1171)

Transform1169.children.append(Transform1170)

HAnimSegment1168.children.append(Transform1169)
Shape1172 = x3d.Shape()
LineSet1173 = x3d.LineSet()
LineSet1173.vertexCount = [2]
Coordinate1174 = x3d.Coordinate()

LineSet1173.coord = Coordinate1174
"""from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2"""
ColorRGBA1175 = x3d.ColorRGBA()
ColorRGBA1175.USE = "HAnimSegmentLineColorRGBA"

LineSet1173.color = ColorRGBA1175

Shape1172.geometry = LineSet1173

HAnimSegment1168.children.append(Shape1172)

HAnimJoint1167.children.append(HAnimSegment1168)
HAnimJoint1176 = x3d.HAnimJoint()
HAnimJoint1176.name = "l_metacarpophalangeal_4"
HAnimJoint1176.DEF = "hanim_l_metacarpophalangeal_4"
HAnimJoint1176.center = [0.1956,0.7815,-0.0794]
HAnimJoint1176.ulimit = [0,0,0]
HAnimJoint1176.llimit = [0,0,0]
HAnimSegment1177 = x3d.HAnimSegment()
HAnimSegment1177.name = "l_carpal_proximal_phalanx_4"
HAnimSegment1177.DEF = "hanim_l_carpal_proximal_phalanx_4"
Transform1178 = x3d.Transform()
Transform1178.translation = [0.1956,0.7815,-0.0794]
Transform1179 = x3d.Transform()
"""Empty Transform"""
Shape1180 = x3d.Shape()
Shape1180.USE = "HAnimJointShape"

Transform1179.children.append(Shape1180)

Transform1178.children.append(Transform1179)

HAnimSegment1177.children.append(Transform1178)
Shape1181 = x3d.Shape()
LineSet1182 = x3d.LineSet()
LineSet1182.vertexCount = [2]
Coordinate1183 = x3d.Coordinate()

LineSet1182.coord = Coordinate1183
"""from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2"""
ColorRGBA1184 = x3d.ColorRGBA()
ColorRGBA1184.USE = "HAnimSegmentLineColorRGBA"

LineSet1182.color = ColorRGBA1184

Shape1181.geometry = LineSet1182

HAnimSegment1177.children.append(Shape1181)

HAnimJoint1176.children.append(HAnimSegment1177)
HAnimJoint1185 = x3d.HAnimJoint()
HAnimJoint1185.name = "l_carpal_proximal_interphalangeal_4"
HAnimJoint1185.DEF = "hanim_l_carpal_proximal_interphalangeal_4"
HAnimJoint1185.center = [0.1973,0.7287,-0.0777]
HAnimJoint1185.ulimit = [0,0,0]
HAnimJoint1185.llimit = [0,0,0]
HAnimSegment1186 = x3d.HAnimSegment()
HAnimSegment1186.name = "l_carpal_middle_phalanx_4"
HAnimSegment1186.DEF = "hanim_l_carpal_middle_phalanx_4"
Transform1187 = x3d.Transform()
Transform1187.translation = [0.1973,0.7287,-0.0777]
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
"""from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2"""
ColorRGBA1193 = x3d.ColorRGBA()
ColorRGBA1193.USE = "HAnimSegmentLineColorRGBA"

LineSet1191.color = ColorRGBA1193

Shape1190.geometry = LineSet1191

HAnimSegment1186.children.append(Shape1190)

HAnimJoint1185.children.append(HAnimSegment1186)
HAnimJoint1194 = x3d.HAnimJoint()
HAnimJoint1194.name = "l_carpal_distal_interphalangeal_4"
HAnimJoint1194.DEF = "hanim_l_carpal_distal_interphalangeal_4"
HAnimJoint1194.center = [0.1983,0.7045,-0.0767]
HAnimJoint1194.ulimit = [0,0,0]
HAnimJoint1194.llimit = [0,0,0]

HAnimJoint1185.children.append(HAnimJoint1194)

HAnimJoint1176.children.append(HAnimJoint1185)

HAnimJoint1167.children.append(HAnimJoint1176)

HAnimJoint1046.children.append(HAnimJoint1167)
HAnimJoint1195 = x3d.HAnimJoint()
HAnimJoint1195.name = "l_carpometacarpal_5"
HAnimJoint1195.DEF = "hanim_l_carpometacarpal_5"
HAnimJoint1195.center = [0.1925,0.8066,-0.1036]
HAnimJoint1195.ulimit = [0,0,0]
HAnimJoint1195.llimit = [0,0,0]
HAnimSegment1196 = x3d.HAnimSegment()
HAnimSegment1196.name = "l_metacarpal_5"
HAnimSegment1196.DEF = "hanim_l_metacarpal_5"
Transform1197 = x3d.Transform()
Transform1197.translation = [0.1925,0.8066,-0.1036]
Transform1198 = x3d.Transform()
"""Empty Transform"""
Shape1199 = x3d.Shape()
Shape1199.USE = "HAnimJointShape"

Transform1198.children.append(Shape1199)

Transform1197.children.append(Transform1198)

HAnimSegment1196.children.append(Transform1197)
Shape1200 = x3d.Shape()
LineSet1201 = x3d.LineSet()
LineSet1201.vertexCount = [2]
Coordinate1202 = x3d.Coordinate()

LineSet1201.coord = Coordinate1202
"""from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2"""
ColorRGBA1203 = x3d.ColorRGBA()
ColorRGBA1203.USE = "HAnimSegmentLineColorRGBA"

LineSet1201.color = ColorRGBA1203

Shape1200.geometry = LineSet1201

HAnimSegment1196.children.append(Shape1200)
HAnimSite1204 = x3d.HAnimSite()
HAnimSite1204.name = "l_metacarpal_phalanx_5"
HAnimSite1204.DEF = "hanim_l_metacarpal_phalanx_5"
HAnimSite1204.translation = [0.1929,0.786,-0.1122]
TouchSensor1205 = x3d.TouchSensor()
TouchSensor1205.description = "HAnimSite 77 l_metacarpal_phalanx_5"

HAnimSite1204.children.append(TouchSensor1205)
Shape1206 = x3d.Shape()
Shape1206.USE = "HAnimSiteShape"

HAnimSite1204.children.append(Shape1206)
Billboard1207 = x3d.Billboard()
Shape1208 = x3d.Shape()
Text1209 = x3d.Text()
Text1209.string = ["77"]
FontStyle1210 = x3d.FontStyle()
FontStyle1210.size = 0.035

Text1209.fontStyle = FontStyle1210

Shape1208.geometry = Text1209

Billboard1207.children.append(Shape1208)

HAnimSite1204.children.append(Billboard1207)

HAnimSegment1196.children.append(HAnimSite1204)

HAnimJoint1195.children.append(HAnimSegment1196)
HAnimJoint1211 = x3d.HAnimJoint()
HAnimJoint1211.name = "l_metacarpophalangeal_5"
HAnimJoint1211.DEF = "hanim_l_metacarpophalangeal_5"
HAnimJoint1211.center = [0.1925,0.7866,-0.1036]
HAnimJoint1211.ulimit = [0,0,0]
HAnimJoint1211.llimit = [0,0,0]
HAnimSegment1212 = x3d.HAnimSegment()
HAnimSegment1212.name = "l_carpal_proximal_phalanx_5"
HAnimSegment1212.DEF = "hanim_l_carpal_proximal_phalanx_5"
Transform1213 = x3d.Transform()
Transform1213.translation = [0.1925,0.7866,-0.1036]
Transform1214 = x3d.Transform()
"""Empty Transform"""
Shape1215 = x3d.Shape()
Shape1215.USE = "HAnimJointShape"

Transform1214.children.append(Shape1215)

Transform1213.children.append(Transform1214)

HAnimSegment1212.children.append(Transform1213)
Shape1216 = x3d.Shape()
LineSet1217 = x3d.LineSet()
LineSet1217.vertexCount = [2]
Coordinate1218 = x3d.Coordinate()

LineSet1217.coord = Coordinate1218
"""from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2"""
ColorRGBA1219 = x3d.ColorRGBA()
ColorRGBA1219.USE = "HAnimSegmentLineColorRGBA"

LineSet1217.color = ColorRGBA1219

Shape1216.geometry = LineSet1217

HAnimSegment1212.children.append(Shape1216)

HAnimJoint1211.children.append(HAnimSegment1212)
HAnimJoint1220 = x3d.HAnimJoint()
HAnimJoint1220.name = "l_carpal_proximal_interphalangeal_5"
HAnimJoint1220.DEF = "hanim_l_carpal_proximal_interphalangeal_5"
HAnimJoint1220.center = [0.1938,0.7452,-0.1024]
HAnimJoint1220.ulimit = [0,0,0]
HAnimJoint1220.llimit = [0,0,0]
HAnimSegment1221 = x3d.HAnimSegment()
HAnimSegment1221.name = "l_carpal_middle_phalanx_5"
HAnimSegment1221.DEF = "hanim_l_carpal_middle_phalanx_5"
Transform1222 = x3d.Transform()
Transform1222.translation = [0.1938,0.7452,-0.1024]
Transform1223 = x3d.Transform()
"""Empty Transform"""
Shape1224 = x3d.Shape()
Shape1224.USE = "HAnimJointShape"

Transform1223.children.append(Shape1224)

Transform1222.children.append(Transform1223)

HAnimSegment1221.children.append(Transform1222)
Shape1225 = x3d.Shape()
LineSet1226 = x3d.LineSet()
LineSet1226.vertexCount = [2]
Coordinate1227 = x3d.Coordinate()

LineSet1226.coord = Coordinate1227
"""from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2"""
ColorRGBA1228 = x3d.ColorRGBA()
ColorRGBA1228.USE = "HAnimSegmentLineColorRGBA"

LineSet1226.color = ColorRGBA1228

Shape1225.geometry = LineSet1226

HAnimSegment1221.children.append(Shape1225)

HAnimJoint1220.children.append(HAnimSegment1221)
HAnimJoint1229 = x3d.HAnimJoint()
HAnimJoint1229.name = "l_carpal_distal_interphalangeal_5"
HAnimJoint1229.DEF = "hanim_l_carpal_distal_interphalangeal_5"
HAnimJoint1229.center = [0.1948,0.7277,-0.1017]
HAnimJoint1229.ulimit = [0,0,0]
HAnimJoint1229.llimit = [0,0,0]

HAnimJoint1220.children.append(HAnimJoint1229)

HAnimJoint1211.children.append(HAnimJoint1220)

HAnimJoint1195.children.append(HAnimJoint1211)

HAnimJoint1046.children.append(HAnimJoint1195)

HAnimJoint1009.children.append(HAnimJoint1046)

HAnimJoint986.children.append(HAnimJoint1009)

HAnimJoint977.children.append(HAnimJoint986)

HAnimJoint933.children.append(HAnimJoint977)

HAnimJoint701.children.append(HAnimJoint933)
HAnimJoint1230 = x3d.HAnimJoint()
HAnimJoint1230.name = "r_sternoclavicular"
HAnimJoint1230.DEF = "hanim_r_sternoclavicular"
HAnimJoint1230.center = [-0.0694,1.46,-0.033]
HAnimJoint1230.ulimit = [0,0,0]
HAnimJoint1230.llimit = [0,0,0]
HAnimSegment1231 = x3d.HAnimSegment()
HAnimSegment1231.name = "r_clavicle"
HAnimSegment1231.DEF = "hanim_r_clavicle"
Transform1232 = x3d.Transform()
Transform1232.translation = [-0.0694,1.46,-0.033]
Transform1233 = x3d.Transform()
"""Empty Transform"""
Shape1234 = x3d.Shape()
Shape1234.USE = "HAnimJointShape"

Transform1233.children.append(Shape1234)

Transform1232.children.append(Transform1233)

HAnimSegment1231.children.append(Transform1232)
Shape1235 = x3d.Shape()
LineSet1236 = x3d.LineSet()
LineSet1236.vertexCount = [2]
Coordinate1237 = x3d.Coordinate()

LineSet1236.coord = Coordinate1237
"""from r_sternoclavicular to r_acromioclavicular vertices 2"""
ColorRGBA1238 = x3d.ColorRGBA()
ColorRGBA1238.USE = "HAnimSegmentLineColorRGBA"

LineSet1236.color = ColorRGBA1238

Shape1235.geometry = LineSet1236

HAnimSegment1231.children.append(Shape1235)
HAnimSite1239 = x3d.HAnimSite()
HAnimSite1239.name = "r_acromion"
HAnimSite1239.DEF = "hanim_r_acromion"
HAnimSite1239.translation = [-0.1905,1.4791,-0.0431]
TouchSensor1240 = x3d.TouchSensor()
TouchSensor1240.description = "HAnimSite 20 r_acromion"

HAnimSite1239.children.append(TouchSensor1240)
Shape1241 = x3d.Shape()
Shape1241.USE = "HAnimSiteShape"

HAnimSite1239.children.append(Shape1241)
Billboard1242 = x3d.Billboard()
Shape1243 = x3d.Shape()
Text1244 = x3d.Text()
Text1244.string = ["20"]
FontStyle1245 = x3d.FontStyle()
FontStyle1245.size = 0.035

Text1244.fontStyle = FontStyle1245

Shape1243.geometry = Text1244

Billboard1242.children.append(Shape1243)

HAnimSite1239.children.append(Billboard1242)

HAnimSegment1231.children.append(HAnimSite1239)
HAnimSite1246 = x3d.HAnimSite()
HAnimSite1246.name = "r_axilla_distal"
HAnimSite1246.DEF = "hanim_r_axilla_distal"
HAnimSite1246.translation = [-0.1603,1.4098,-0.0826]
TouchSensor1247 = x3d.TouchSensor()
TouchSensor1247.description = "HAnimSite 22 r_axilla_distal"

HAnimSite1246.children.append(TouchSensor1247)
Shape1248 = x3d.Shape()
Shape1248.USE = "HAnimSiteShape"

HAnimSite1246.children.append(Shape1248)
Billboard1249 = x3d.Billboard()
Shape1250 = x3d.Shape()
Text1251 = x3d.Text()
Text1251.string = ["22"]
FontStyle1252 = x3d.FontStyle()
FontStyle1252.size = 0.035

Text1251.fontStyle = FontStyle1252

Shape1250.geometry = Text1251

Billboard1249.children.append(Shape1250)

HAnimSite1246.children.append(Billboard1249)

HAnimSegment1231.children.append(HAnimSite1246)
HAnimSite1253 = x3d.HAnimSite()
HAnimSite1253.name = "r_axilla_posterior_folds"
HAnimSite1253.DEF = "hanim_r_axilla_posterior_folds"
TouchSensor1254 = x3d.TouchSensor()
TouchSensor1254.description = "HAnimSite 23 r_axilla_posterior_folds"

HAnimSite1253.children.append(TouchSensor1254)
Shape1255 = x3d.Shape()
Shape1255.USE = "HAnimSiteShape"

HAnimSite1253.children.append(Shape1255)
Billboard1256 = x3d.Billboard()
Shape1257 = x3d.Shape()
Text1258 = x3d.Text()
Text1258.string = ["23"]
FontStyle1259 = x3d.FontStyle()
FontStyle1259.size = 0.035

Text1258.fontStyle = FontStyle1259

Shape1257.geometry = Text1258

Billboard1256.children.append(Shape1257)

HAnimSite1253.children.append(Billboard1256)

HAnimSegment1231.children.append(HAnimSite1253)
HAnimSite1260 = x3d.HAnimSite()
HAnimSite1260.name = "r_axilla_proximal"
HAnimSite1260.DEF = "hanim_r_axilla_proximal"
HAnimSite1260.translation = [-0.1626,1.4072,-0.0031]
TouchSensor1261 = x3d.TouchSensor()
TouchSensor1261.description = "HAnimSite 21 r_axilla_proximal"

HAnimSite1260.children.append(TouchSensor1261)
Shape1262 = x3d.Shape()
Shape1262.USE = "HAnimSiteShape"

HAnimSite1260.children.append(Shape1262)
Billboard1263 = x3d.Billboard()
Shape1264 = x3d.Shape()
Text1265 = x3d.Text()
Text1265.string = ["21"]
FontStyle1266 = x3d.FontStyle()
FontStyle1266.size = 0.035

Text1265.fontStyle = FontStyle1266

Shape1264.geometry = Text1265

Billboard1263.children.append(Shape1264)

HAnimSite1260.children.append(Billboard1263)

HAnimSegment1231.children.append(HAnimSite1260)
HAnimSite1267 = x3d.HAnimSite()
HAnimSite1267.name = "r_clavicale"
HAnimSite1267.DEF = "hanim_r_clavicale"
HAnimSite1267.translation = [-0.0115,1.4943,0.04]
TouchSensor1268 = x3d.TouchSensor()
TouchSensor1268.description = "HAnimSite 19 r_clavicale"

HAnimSite1267.children.append(TouchSensor1268)
Shape1269 = x3d.Shape()
Shape1269.USE = "HAnimSiteShape"

HAnimSite1267.children.append(Shape1269)
Billboard1270 = x3d.Billboard()
Shape1271 = x3d.Shape()
Text1272 = x3d.Text()
Text1272.string = ["19"]
FontStyle1273 = x3d.FontStyle()
FontStyle1273.size = 0.035

Text1272.fontStyle = FontStyle1273

Shape1271.geometry = Text1272

Billboard1270.children.append(Shape1271)

HAnimSite1267.children.append(Billboard1270)

HAnimSegment1231.children.append(HAnimSite1267)

HAnimJoint1230.children.append(HAnimSegment1231)
HAnimJoint1274 = x3d.HAnimJoint()
HAnimJoint1274.name = "r_acromioclavicular"
HAnimJoint1274.DEF = "hanim_r_acromioclavicular"
HAnimJoint1274.center = [-0.0836,1.4281,-0.0401]
HAnimJoint1274.ulimit = [0,0,0]
HAnimJoint1274.llimit = [0,0,0]
HAnimSegment1275 = x3d.HAnimSegment()
HAnimSegment1275.name = "r_scapula"
HAnimSegment1275.DEF = "hanim_r_scapula"
Transform1276 = x3d.Transform()
Transform1276.translation = [-0.0836,1.4281,-0.0401]
Transform1277 = x3d.Transform()
"""Empty Transform"""
Shape1278 = x3d.Shape()
Shape1278.USE = "HAnimJointShape"

Transform1277.children.append(Shape1278)

Transform1276.children.append(Transform1277)

HAnimSegment1275.children.append(Transform1276)
Shape1279 = x3d.Shape()
LineSet1280 = x3d.LineSet()
LineSet1280.vertexCount = [2]
Coordinate1281 = x3d.Coordinate()

LineSet1280.coord = Coordinate1281
"""from r_acromioclavicular to r_shoulder vertices 2"""
ColorRGBA1282 = x3d.ColorRGBA()
ColorRGBA1282.USE = "HAnimSegmentLineColorRGBA"

LineSet1280.color = ColorRGBA1282

Shape1279.geometry = LineSet1280

HAnimSegment1275.children.append(Shape1279)

HAnimJoint1274.children.append(HAnimSegment1275)
HAnimJoint1283 = x3d.HAnimJoint()
HAnimJoint1283.name = "r_shoulder"
HAnimJoint1283.DEF = "hanim_r_shoulder"
HAnimJoint1283.center = [-0.1907,1.4407,-0.0325]
HAnimJoint1283.ulimit = [0,0,0]
HAnimJoint1283.llimit = [0,0,0]
HAnimSegment1284 = x3d.HAnimSegment()
HAnimSegment1284.name = "r_upperarm"
HAnimSegment1284.DEF = "hanim_r_upperarm"
Transform1285 = x3d.Transform()
Transform1285.translation = [-0.1907,1.4407,-0.0325]
Transform1286 = x3d.Transform()
"""Empty Transform"""
Shape1287 = x3d.Shape()
Shape1287.USE = "HAnimJointShape"

Transform1286.children.append(Shape1287)

Transform1285.children.append(Transform1286)

HAnimSegment1284.children.append(Transform1285)
Shape1288 = x3d.Shape()
LineSet1289 = x3d.LineSet()
LineSet1289.vertexCount = [2]
Coordinate1290 = x3d.Coordinate()

LineSet1289.coord = Coordinate1290
"""from r_shoulder to r_elbow vertices 2"""
ColorRGBA1291 = x3d.ColorRGBA()
ColorRGBA1291.USE = "HAnimSegmentLineColorRGBA"

LineSet1289.color = ColorRGBA1291

Shape1288.geometry = LineSet1289

HAnimSegment1284.children.append(Shape1288)
HAnimSite1292 = x3d.HAnimSite()
HAnimSite1292.name = "r_bideltoid"
HAnimSite1292.DEF = "hanim_r_bideltoid"
TouchSensor1293 = x3d.TouchSensor()
TouchSensor1293.description = "HAnimSite 97 r_bideltoid"

HAnimSite1292.children.append(TouchSensor1293)
Shape1294 = x3d.Shape()
Shape1294.USE = "HAnimSiteShape"

HAnimSite1292.children.append(Shape1294)
Billboard1295 = x3d.Billboard()
Shape1296 = x3d.Shape()
Text1297 = x3d.Text()
Text1297.string = ["97"]
FontStyle1298 = x3d.FontStyle()
FontStyle1298.size = 0.035

Text1297.fontStyle = FontStyle1298

Shape1296.geometry = Text1297

Billboard1295.children.append(Shape1296)

HAnimSite1292.children.append(Billboard1295)

HAnimSegment1284.children.append(HAnimSite1292)
HAnimSite1299 = x3d.HAnimSite()
HAnimSite1299.name = "r_humeral_lateral_epicondyles"
HAnimSite1299.DEF = "hanim_r_humeral_lateral_epicondyles"
HAnimSite1299.translation = [-0.2224,1.1517,-0.1033]
TouchSensor1300 = x3d.TouchSensor()
TouchSensor1300.description = "HAnimSite 66 r_humeral_lateral_epicondyles"

HAnimSite1299.children.append(TouchSensor1300)
Shape1301 = x3d.Shape()
Shape1301.USE = "HAnimSiteShape"

HAnimSite1299.children.append(Shape1301)
Billboard1302 = x3d.Billboard()
Shape1303 = x3d.Shape()
Text1304 = x3d.Text()
Text1304.string = ["66"]
FontStyle1305 = x3d.FontStyle()
FontStyle1305.size = 0.035

Text1304.fontStyle = FontStyle1305

Shape1303.geometry = Text1304

Billboard1302.children.append(Shape1303)

HAnimSite1299.children.append(Billboard1302)

HAnimSegment1284.children.append(HAnimSite1299)

HAnimJoint1283.children.append(HAnimSegment1284)
HAnimJoint1306 = x3d.HAnimJoint()
HAnimJoint1306.name = "r_elbow"
HAnimJoint1306.DEF = "hanim_r_elbow"
HAnimJoint1306.center = [-0.1949,1.1388,-0.062]
HAnimJoint1306.ulimit = [0,0,0]
HAnimJoint1306.llimit = [0,0,0]
HAnimSegment1307 = x3d.HAnimSegment()
HAnimSegment1307.name = "r_forearm"
HAnimSegment1307.DEF = "hanim_r_forearm"
Transform1308 = x3d.Transform()
Transform1308.translation = [-0.1949,1.1388,-0.062]
Transform1309 = x3d.Transform()
"""Empty Transform"""
Shape1310 = x3d.Shape()
Shape1310.USE = "HAnimJointShape"

Transform1309.children.append(Shape1310)

Transform1308.children.append(Transform1309)

HAnimSegment1307.children.append(Transform1308)
Shape1311 = x3d.Shape()
LineSet1312 = x3d.LineSet()
LineSet1312.vertexCount = [2]
Coordinate1313 = x3d.Coordinate()

LineSet1312.coord = Coordinate1313
"""from r_elbow to r_radiocarpal vertices 2"""
ColorRGBA1314 = x3d.ColorRGBA()
ColorRGBA1314.USE = "HAnimSegmentLineColorRGBA"

LineSet1312.color = ColorRGBA1314

Shape1311.geometry = LineSet1312

HAnimSegment1307.children.append(Shape1311)
HAnimSite1315 = x3d.HAnimSite()
HAnimSite1315.name = "r_humeral_medial_epicondyles"
HAnimSite1315.DEF = "hanim_r_humeral_medial_epicondyles"
HAnimSite1315.translation = [-0.168,1.1298,-0.1062]
TouchSensor1316 = x3d.TouchSensor()
TouchSensor1316.description = "HAnimSite 67 r_humeral_medial_epicondyles"

HAnimSite1315.children.append(TouchSensor1316)
Shape1317 = x3d.Shape()
Shape1317.USE = "HAnimSiteShape"

HAnimSite1315.children.append(Shape1317)
Billboard1318 = x3d.Billboard()
Shape1319 = x3d.Shape()
Text1320 = x3d.Text()
Text1320.string = ["67"]
FontStyle1321 = x3d.FontStyle()
FontStyle1321.size = 0.035

Text1320.fontStyle = FontStyle1321

Shape1319.geometry = Text1320

Billboard1318.children.append(Shape1319)

HAnimSite1315.children.append(Billboard1318)

HAnimSegment1307.children.append(HAnimSite1315)
HAnimSite1322 = x3d.HAnimSite()
HAnimSite1322.name = "r_olecranon"
HAnimSite1322.DEF = "hanim_r_olecranon"
HAnimSite1322.translation = [-0.1907,1.1405,-0.1065]
TouchSensor1323 = x3d.TouchSensor()
TouchSensor1323.description = "HAnimSite 68 r_olecranon"

HAnimSite1322.children.append(TouchSensor1323)
Shape1324 = x3d.Shape()
Shape1324.USE = "HAnimSiteShape"

HAnimSite1322.children.append(Shape1324)
Billboard1325 = x3d.Billboard()
Shape1326 = x3d.Shape()
Text1327 = x3d.Text()
Text1327.string = ["68"]
FontStyle1328 = x3d.FontStyle()
FontStyle1328.size = 0.035

Text1327.fontStyle = FontStyle1328

Shape1326.geometry = Text1327

Billboard1325.children.append(Shape1326)

HAnimSite1322.children.append(Billboard1325)

HAnimSegment1307.children.append(HAnimSite1322)
HAnimSite1329 = x3d.HAnimSite()
HAnimSite1329.name = "r_radial_styloid"
HAnimSite1329.DEF = "hanim_r_radial_styloid"
HAnimSite1329.translation = [-0.1884,0.8676,-0.036]
TouchSensor1330 = x3d.TouchSensor()
TouchSensor1330.description = "HAnimSite 74 r_radial_styloid"

HAnimSite1329.children.append(TouchSensor1330)
Shape1331 = x3d.Shape()
Shape1331.USE = "HAnimSiteShape"

HAnimSite1329.children.append(Shape1331)
Billboard1332 = x3d.Billboard()
Shape1333 = x3d.Shape()
Text1334 = x3d.Text()
Text1334.string = ["74"]
FontStyle1335 = x3d.FontStyle()
FontStyle1335.size = 0.035

Text1334.fontStyle = FontStyle1335

Shape1333.geometry = Text1334

Billboard1332.children.append(Shape1333)

HAnimSite1329.children.append(Billboard1332)

HAnimSegment1307.children.append(HAnimSite1329)
HAnimSite1336 = x3d.HAnimSite()
HAnimSite1336.name = "r_radiale"
HAnimSite1336.DEF = "hanim_r_radiale"
HAnimSite1336.translation = [-0.213,1.1305,-0.1091]
TouchSensor1337 = x3d.TouchSensor()
TouchSensor1337.description = "HAnimSite 72 r_radiale"

HAnimSite1336.children.append(TouchSensor1337)
Shape1338 = x3d.Shape()
Shape1338.USE = "HAnimSiteShape"

HAnimSite1336.children.append(Shape1338)
Billboard1339 = x3d.Billboard()
Shape1340 = x3d.Shape()
Text1341 = x3d.Text()
Text1341.string = ["72"]
FontStyle1342 = x3d.FontStyle()
FontStyle1342.size = 0.035

Text1341.fontStyle = FontStyle1342

Shape1340.geometry = Text1341

Billboard1339.children.append(Shape1340)

HAnimSite1336.children.append(Billboard1339)

HAnimSegment1307.children.append(HAnimSite1336)

HAnimJoint1306.children.append(HAnimSegment1307)
HAnimJoint1343 = x3d.HAnimJoint()
HAnimJoint1343.name = "r_radiocarpal"
HAnimJoint1343.DEF = "hanim_r_radiocarpal"
HAnimJoint1343.center = [-0.1959,0.8694,-0.0521]
HAnimJoint1343.ulimit = [0,0,0]
HAnimJoint1343.llimit = [0,0,0]
HAnimSegment1344 = x3d.HAnimSegment()
HAnimSegment1344.name = "r_carpal"
HAnimSegment1344.DEF = "hanim_r_carpal"
Transform1345 = x3d.Transform()
Transform1345.scale = [0.2,0.2,0.2]
Transform1345.translation = [-0.2,0.85,-0.05]
Transform1345.rotation = [0,0,1,-3.14]
"""Transform right hand"""
Transform1346 = x3d.Transform()
Transform1346.rotation = [0,1,0,1.57]
"""Transform right hand"""
Shape1347 = x3d.Shape()
Shape1347.USE = "HAnimJointShape"

Transform1346.children.append(Shape1347)

Transform1345.children.append(Transform1346)

HAnimSegment1344.children.append(Transform1345)
Shape1348 = x3d.Shape()
LineSet1349 = x3d.LineSet()
LineSet1349.vertexCount = [2]
Coordinate1350 = x3d.Coordinate()

LineSet1349.coord = Coordinate1350
"""from r_radiocarpal to r_carpometacarpal_1 vertices 2"""
ColorRGBA1351 = x3d.ColorRGBA()
ColorRGBA1351.USE = "HAnimSegmentLineColorRGBA"

LineSet1349.color = ColorRGBA1351

Shape1348.geometry = LineSet1349

HAnimSegment1344.children.append(Shape1348)
HAnimSite1352 = x3d.HAnimSite()
HAnimSite1352.name = "r_ulnar_styloid"
HAnimSite1352.DEF = "hanim_r_ulnar_styloid"
HAnimSite1352.translation = [-0.2117,0.8562,-0.0584]
TouchSensor1353 = x3d.TouchSensor()
TouchSensor1353.description = "HAnimSite 73 r_ulnar_styloid"

HAnimSite1352.children.append(TouchSensor1353)
Shape1354 = x3d.Shape()
Shape1354.USE = "HAnimSiteShape"

HAnimSite1352.children.append(Shape1354)
Billboard1355 = x3d.Billboard()
Shape1356 = x3d.Shape()
Text1357 = x3d.Text()
Text1357.string = ["73"]
FontStyle1358 = x3d.FontStyle()
FontStyle1358.size = 0.035

Text1357.fontStyle = FontStyle1358

Shape1356.geometry = Text1357

Billboard1355.children.append(Shape1356)

HAnimSite1352.children.append(Billboard1355)

HAnimSegment1344.children.append(HAnimSite1352)
Shape1359 = x3d.Shape()
LineSet1360 = x3d.LineSet()
LineSet1360.vertexCount = [2]
Coordinate1361 = x3d.Coordinate()

LineSet1360.coord = Coordinate1361
"""from r_radiocarpal to r_carpometacarpal_2 vertices 2"""
ColorRGBA1362 = x3d.ColorRGBA()
ColorRGBA1362.USE = "HAnimSegmentLineColorRGBA"

LineSet1360.color = ColorRGBA1362

Shape1359.geometry = LineSet1360

HAnimSegment1344.children.append(Shape1359)
Shape1363 = x3d.Shape()
LineSet1364 = x3d.LineSet()
LineSet1364.vertexCount = [2]
Coordinate1365 = x3d.Coordinate()

LineSet1364.coord = Coordinate1365
"""from r_radiocarpal to r_carpometacarpal_3 vertices 2"""
ColorRGBA1366 = x3d.ColorRGBA()
ColorRGBA1366.USE = "HAnimSegmentLineColorRGBA"

LineSet1364.color = ColorRGBA1366

Shape1363.geometry = LineSet1364

HAnimSegment1344.children.append(Shape1363)
Shape1367 = x3d.Shape()
LineSet1368 = x3d.LineSet()
LineSet1368.vertexCount = [2]
Coordinate1369 = x3d.Coordinate()

LineSet1368.coord = Coordinate1369
"""from r_radiocarpal to r_carpometacarpal_4 vertices 2"""
ColorRGBA1370 = x3d.ColorRGBA()
ColorRGBA1370.USE = "HAnimSegmentLineColorRGBA"

LineSet1368.color = ColorRGBA1370

Shape1367.geometry = LineSet1368

HAnimSegment1344.children.append(Shape1367)
Shape1371 = x3d.Shape()
LineSet1372 = x3d.LineSet()
LineSet1372.vertexCount = [2]
Coordinate1373 = x3d.Coordinate()

LineSet1372.coord = Coordinate1373
"""from r_radiocarpal to r_carpometacarpal_5 vertices 2"""
ColorRGBA1374 = x3d.ColorRGBA()
ColorRGBA1374.USE = "HAnimSegmentLineColorRGBA"

LineSet1372.color = ColorRGBA1374

Shape1371.geometry = LineSet1372

HAnimSegment1344.children.append(Shape1371)

HAnimJoint1343.children.append(HAnimSegment1344)
HAnimJoint1375 = x3d.HAnimJoint()
HAnimJoint1375.name = "r_carpometacarpal_1"
HAnimJoint1375.DEF = "hanim_r_carpometacarpal_1"
HAnimJoint1375.center = [-0.1899,0.8502,-0.0473]
HAnimJoint1375.ulimit = [0,0,0]
HAnimJoint1375.llimit = [0,0,0]
HAnimSegment1376 = x3d.HAnimSegment()
HAnimSegment1376.name = "r_metacarpal_1"
HAnimSegment1376.DEF = "hanim_r_metacarpal_1"
Transform1377 = x3d.Transform()
Transform1377.translation = [-0.1899,0.8502,-0.0473]
Transform1378 = x3d.Transform()
"""Empty Transform"""
Shape1379 = x3d.Shape()
Shape1379.USE = "HAnimJointShape"

Transform1378.children.append(Shape1379)

Transform1377.children.append(Transform1378)

HAnimSegment1376.children.append(Transform1377)
Shape1380 = x3d.Shape()
LineSet1381 = x3d.LineSet()
LineSet1381.vertexCount = [2]
Coordinate1382 = x3d.Coordinate()

LineSet1381.coord = Coordinate1382
"""from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2"""
ColorRGBA1383 = x3d.ColorRGBA()
ColorRGBA1383.USE = "HAnimSegmentLineColorRGBA"

LineSet1381.color = ColorRGBA1383

Shape1380.geometry = LineSet1381

HAnimSegment1376.children.append(Shape1380)

HAnimJoint1375.children.append(HAnimSegment1376)
HAnimJoint1384 = x3d.HAnimJoint()
HAnimJoint1384.name = "r_metacarpophalangeal_1"
HAnimJoint1384.DEF = "hanim_r_metacarpophalangeal_1"
HAnimJoint1384.center = [-0.1874,0.8256,0.0306]
HAnimJoint1384.ulimit = [0,0,0]
HAnimJoint1384.llimit = [0,0,0]
HAnimSegment1385 = x3d.HAnimSegment()
HAnimSegment1385.name = "r_carpal_proximal_phalanx_1"
HAnimSegment1385.DEF = "hanim_r_carpal_proximal_phalanx_1"
Transform1386 = x3d.Transform()
Transform1386.translation = [-0.1874,0.8256,0.0306]
Transform1387 = x3d.Transform()
"""Empty Transform"""
Shape1388 = x3d.Shape()
Shape1388.USE = "HAnimJointShape"

Transform1387.children.append(Shape1388)

Transform1386.children.append(Transform1387)

HAnimSegment1385.children.append(Transform1386)
Shape1389 = x3d.Shape()
LineSet1390 = x3d.LineSet()
LineSet1390.vertexCount = [2]
Coordinate1391 = x3d.Coordinate()

LineSet1390.coord = Coordinate1391
"""from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2"""
ColorRGBA1392 = x3d.ColorRGBA()
ColorRGBA1392.USE = "HAnimSegmentLineColorRGBA"

LineSet1390.color = ColorRGBA1392

Shape1389.geometry = LineSet1390

HAnimSegment1385.children.append(Shape1389)

HAnimJoint1384.children.append(HAnimSegment1385)
HAnimJoint1393 = x3d.HAnimJoint()
HAnimJoint1393.name = "r_carpal_interphalangeal_1"
HAnimJoint1393.DEF = "hanim_r_carpal_interphalangeal_1"
HAnimJoint1393.center = [-0.1864,0.819,0.0506]
HAnimJoint1393.ulimit = [0,0,0]
HAnimJoint1393.llimit = [0,0,0]

HAnimJoint1384.children.append(HAnimJoint1393)

HAnimJoint1375.children.append(HAnimJoint1384)

HAnimJoint1343.children.append(HAnimJoint1375)
HAnimJoint1394 = x3d.HAnimJoint()
HAnimJoint1394.name = "r_carpometacarpal_2"
HAnimJoint1394.DEF = "hanim_r_carpometacarpal_2"
HAnimJoint1394.center = [-0.1961,0.8055,-0.0218]
HAnimJoint1394.ulimit = [0,0,0]
HAnimJoint1394.llimit = [0,0,0]
HAnimSegment1395 = x3d.HAnimSegment()
HAnimSegment1395.name = "r_metacarpal_2"
HAnimSegment1395.DEF = "hanim_r_metacarpal_2"
Transform1396 = x3d.Transform()
Transform1396.translation = [-0.1961,0.8055,-0.0218]
Transform1397 = x3d.Transform()
"""Empty Transform"""
Shape1398 = x3d.Shape()
Shape1398.USE = "HAnimJointShape"

Transform1397.children.append(Shape1398)

Transform1396.children.append(Transform1397)

HAnimSegment1395.children.append(Transform1396)
Shape1399 = x3d.Shape()
LineSet1400 = x3d.LineSet()
LineSet1400.vertexCount = [2]
Coordinate1401 = x3d.Coordinate()

LineSet1400.coord = Coordinate1401
"""from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2"""
ColorRGBA1402 = x3d.ColorRGBA()
ColorRGBA1402.USE = "HAnimSegmentLineColorRGBA"

LineSet1400.color = ColorRGBA1402

Shape1399.geometry = LineSet1400

HAnimSegment1395.children.append(Shape1399)
HAnimSite1403 = x3d.HAnimSite()
HAnimSite1403.name = "r_metacarpal_phalanx_2"
HAnimSite1403.DEF = "hanim_r_metacarpal_phalanx_2"
HAnimSite1403.translation = [-0.1977,0.8169,-0.0177]
TouchSensor1404 = x3d.TouchSensor()
TouchSensor1404.description = "HAnimSite 78 r_metacarpal_phalanx_2"

HAnimSite1403.children.append(TouchSensor1404)
Shape1405 = x3d.Shape()
Shape1405.USE = "HAnimSiteShape"

HAnimSite1403.children.append(Shape1405)
Billboard1406 = x3d.Billboard()
Shape1407 = x3d.Shape()
Text1408 = x3d.Text()
Text1408.string = ["78"]
FontStyle1409 = x3d.FontStyle()
FontStyle1409.size = 0.035

Text1408.fontStyle = FontStyle1409

Shape1407.geometry = Text1408

Billboard1406.children.append(Shape1407)

HAnimSite1403.children.append(Billboard1406)

HAnimSegment1395.children.append(HAnimSite1403)

HAnimJoint1394.children.append(HAnimSegment1395)
HAnimJoint1410 = x3d.HAnimJoint()
HAnimJoint1410.name = "r_metacarpophalangeal_2"
HAnimJoint1410.DEF = "hanim_r_metacarpophalangeal_2"
HAnimJoint1410.center = [-0.1961,0.7846,-0.0218]
HAnimJoint1410.ulimit = [0,0,0]
HAnimJoint1410.llimit = [0,0,0]
HAnimSegment1411 = x3d.HAnimSegment()
HAnimSegment1411.name = "r_carpal_proximal_phalanx_2"
HAnimSegment1411.DEF = "hanim_r_carpal_proximal_phalanx_2"
Transform1412 = x3d.Transform()
Transform1412.translation = [-0.1961,0.7846,-0.0218]
Transform1413 = x3d.Transform()
"""Empty Transform"""
Shape1414 = x3d.Shape()
Shape1414.USE = "HAnimJointShape"

Transform1413.children.append(Shape1414)

Transform1412.children.append(Transform1413)

HAnimSegment1411.children.append(Transform1412)
Shape1415 = x3d.Shape()
LineSet1416 = x3d.LineSet()
LineSet1416.vertexCount = [2]
Coordinate1417 = x3d.Coordinate()

LineSet1416.coord = Coordinate1417
"""from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2"""
ColorRGBA1418 = x3d.ColorRGBA()
ColorRGBA1418.USE = "HAnimSegmentLineColorRGBA"

LineSet1416.color = ColorRGBA1418

Shape1415.geometry = LineSet1416

HAnimSegment1411.children.append(Shape1415)

HAnimJoint1410.children.append(HAnimSegment1411)
HAnimJoint1419 = x3d.HAnimJoint()
HAnimJoint1419.name = "r_carpal_proximal_interphalangeal_2"
HAnimJoint1419.DEF = "hanim_r_carpal_proximal_interphalangeal_2"
HAnimJoint1419.center = [-0.1954,0.7393,-0.0185]
HAnimJoint1419.ulimit = [0,0,0]
HAnimJoint1419.llimit = [0,0,0]
HAnimSegment1420 = x3d.HAnimSegment()
HAnimSegment1420.name = "r_carpal_middle_phalanx_2"
HAnimSegment1420.DEF = "hanim_r_carpal_middle_phalanx_2"
Transform1421 = x3d.Transform()
Transform1421.translation = [-0.1954,0.7393,-0.0185]
Transform1422 = x3d.Transform()
"""Empty Transform"""
Shape1423 = x3d.Shape()
Shape1423.USE = "HAnimJointShape"

Transform1422.children.append(Shape1423)

Transform1421.children.append(Transform1422)

HAnimSegment1420.children.append(Transform1421)
Shape1424 = x3d.Shape()
LineSet1425 = x3d.LineSet()
LineSet1425.vertexCount = [2]
Coordinate1426 = x3d.Coordinate()

LineSet1425.coord = Coordinate1426
"""from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2"""
ColorRGBA1427 = x3d.ColorRGBA()
ColorRGBA1427.USE = "HAnimSegmentLineColorRGBA"

LineSet1425.color = ColorRGBA1427

Shape1424.geometry = LineSet1425

HAnimSegment1420.children.append(Shape1424)

HAnimJoint1419.children.append(HAnimSegment1420)
HAnimJoint1428 = x3d.HAnimJoint()
HAnimJoint1428.name = "r_carpal_distal_interphalangeal_2"
HAnimJoint1428.DEF = "hanim_r_carpal_distal_interphalangeal_2"
HAnimJoint1428.center = [-0.1945,0.7169,-0.0173]
HAnimJoint1428.ulimit = [0,0,0]
HAnimJoint1428.llimit = [0,0,0]

HAnimJoint1419.children.append(HAnimJoint1428)

HAnimJoint1410.children.append(HAnimJoint1419)

HAnimJoint1394.children.append(HAnimJoint1410)

HAnimJoint1343.children.append(HAnimJoint1394)
HAnimJoint1429 = x3d.HAnimJoint()
HAnimJoint1429.name = "r_carpometacarpal_3"
HAnimJoint1429.DEF = "hanim_r_carpometacarpal_3"
HAnimJoint1429.center = [-0.1972,0.806,-0.0468]
HAnimJoint1429.ulimit = [0,0,0]
HAnimJoint1429.llimit = [0,0,0]
HAnimSegment1430 = x3d.HAnimSegment()
HAnimSegment1430.name = "r_metacarpal_3"
HAnimSegment1430.DEF = "hanim_r_metacarpal_3"
Transform1431 = x3d.Transform()
Transform1431.translation = [-0.1972,0.806,-0.0468]
Transform1432 = x3d.Transform()
"""Empty Transform"""
Shape1433 = x3d.Shape()
Shape1433.USE = "HAnimJointShape"

Transform1432.children.append(Shape1433)

Transform1431.children.append(Transform1432)

HAnimSegment1430.children.append(Transform1431)
Shape1434 = x3d.Shape()
LineSet1435 = x3d.LineSet()
LineSet1435.vertexCount = [2]
Coordinate1436 = x3d.Coordinate()

LineSet1435.coord = Coordinate1436
"""from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2"""
ColorRGBA1437 = x3d.ColorRGBA()
ColorRGBA1437.USE = "HAnimSegmentLineColorRGBA"

LineSet1435.color = ColorRGBA1437

Shape1434.geometry = LineSet1435

HAnimSegment1430.children.append(Shape1434)
HAnimSite1438 = x3d.HAnimSite()
HAnimSite1438.name = "r_metacarpal_phalanx_3"
HAnimSite1438.DEF = "hanim_r_metacarpal_phalanx_3"
TouchSensor1439 = x3d.TouchSensor()
TouchSensor1439.description = "HAnimSite 79 r_metacarpal_phalanx_3"

HAnimSite1438.children.append(TouchSensor1439)
Shape1440 = x3d.Shape()
Shape1440.USE = "HAnimSiteShape"

HAnimSite1438.children.append(Shape1440)
Billboard1441 = x3d.Billboard()
Shape1442 = x3d.Shape()
Text1443 = x3d.Text()
Text1443.string = ["79"]
FontStyle1444 = x3d.FontStyle()
FontStyle1444.size = 0.035

Text1443.fontStyle = FontStyle1444

Shape1442.geometry = Text1443

Billboard1441.children.append(Shape1442)

HAnimSite1438.children.append(Billboard1441)

HAnimSegment1430.children.append(HAnimSite1438)

HAnimJoint1429.children.append(HAnimSegment1430)
HAnimJoint1445 = x3d.HAnimJoint()
HAnimJoint1445.name = "r_metacarpophalangeal_3"
HAnimJoint1445.DEF = "hanim_r_metacarpophalangeal_3"
HAnimJoint1445.center = [-0.1972,0.7849,-0.0468]
HAnimJoint1445.ulimit = [0,0,0]
HAnimJoint1445.llimit = [0,0,0]
HAnimSegment1446 = x3d.HAnimSegment()
HAnimSegment1446.name = "r_carpal_proximal_phalanx_3"
HAnimSegment1446.DEF = "hanim_r_carpal_proximal_phalanx_3"
Transform1447 = x3d.Transform()
Transform1447.translation = [-0.1972,0.7849,-0.0468]
Transform1448 = x3d.Transform()
"""Empty Transform"""
Shape1449 = x3d.Shape()
Shape1449.USE = "HAnimJointShape"

Transform1448.children.append(Shape1449)

Transform1447.children.append(Transform1448)

HAnimSegment1446.children.append(Transform1447)
Shape1450 = x3d.Shape()
LineSet1451 = x3d.LineSet()
LineSet1451.vertexCount = [2]
Coordinate1452 = x3d.Coordinate()

LineSet1451.coord = Coordinate1452
"""from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2"""
ColorRGBA1453 = x3d.ColorRGBA()
ColorRGBA1453.USE = "HAnimSegmentLineColorRGBA"

LineSet1451.color = ColorRGBA1453

Shape1450.geometry = LineSet1451

HAnimSegment1446.children.append(Shape1450)

HAnimJoint1445.children.append(HAnimSegment1446)
HAnimJoint1454 = x3d.HAnimJoint()
HAnimJoint1454.name = "r_carpal_proximal_interphalangeal_3"
HAnimJoint1454.DEF = "hanim_r_carpal_proximal_interphalangeal_3"
HAnimJoint1454.center = [-0.195,0.7304,-0.0441]
HAnimJoint1454.ulimit = [0,0,0]
HAnimJoint1454.llimit = [0,0,0]
HAnimSegment1455 = x3d.HAnimSegment()
HAnimSegment1455.name = "r_carpal_middle_phalanx_3"
HAnimSegment1455.DEF = "hanim_r_carpal_middle_phalanx_3"
Transform1456 = x3d.Transform()
Transform1456.translation = [-0.195,0.7304,-0.0441]
Transform1457 = x3d.Transform()
"""Empty Transform"""
Shape1458 = x3d.Shape()
Shape1458.USE = "HAnimJointShape"

Transform1457.children.append(Shape1458)

Transform1456.children.append(Transform1457)

HAnimSegment1455.children.append(Transform1456)
Shape1459 = x3d.Shape()
LineSet1460 = x3d.LineSet()
LineSet1460.vertexCount = [2]
Coordinate1461 = x3d.Coordinate()

LineSet1460.coord = Coordinate1461
"""from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2"""
ColorRGBA1462 = x3d.ColorRGBA()
ColorRGBA1462.USE = "HAnimSegmentLineColorRGBA"

LineSet1460.color = ColorRGBA1462

Shape1459.geometry = LineSet1460

HAnimSegment1455.children.append(Shape1459)

HAnimJoint1454.children.append(HAnimSegment1455)
HAnimJoint1463 = x3d.HAnimJoint()
HAnimJoint1463.name = "r_carpal_distal_interphalangeal_3"
HAnimJoint1463.DEF = "hanim_r_carpal_distal_interphalangeal_3"
HAnimJoint1463.center = [-0.1939,0.7042,-0.0432]
HAnimJoint1463.ulimit = [0,0,0]
HAnimJoint1463.llimit = [0,0,0]

HAnimJoint1454.children.append(HAnimJoint1463)

HAnimJoint1445.children.append(HAnimJoint1454)

HAnimJoint1429.children.append(HAnimJoint1445)

HAnimJoint1343.children.append(HAnimJoint1429)
HAnimJoint1464 = x3d.HAnimJoint()
HAnimJoint1464.name = "r_carpometacarpal_4"
HAnimJoint1464.DEF = "hanim_r_carpometacarpal_4"
HAnimJoint1464.center = [-0.1951,0.8049,-0.0732]
HAnimJoint1464.ulimit = [0,0,0]
HAnimJoint1464.llimit = [0,0,0]
HAnimSegment1465 = x3d.HAnimSegment()
HAnimSegment1465.name = "r_metacarpal_4"
HAnimSegment1465.DEF = "hanim_r_metacarpal_4"
Transform1466 = x3d.Transform()
Transform1466.translation = [-0.1951,0.8049,-0.0732]
Transform1467 = x3d.Transform()
"""Empty Transform"""
Shape1468 = x3d.Shape()
Shape1468.USE = "HAnimJointShape"

Transform1467.children.append(Shape1468)

Transform1466.children.append(Transform1467)

HAnimSegment1465.children.append(Transform1466)
Shape1469 = x3d.Shape()
LineSet1470 = x3d.LineSet()
LineSet1470.vertexCount = [2]
Coordinate1471 = x3d.Coordinate()

LineSet1470.coord = Coordinate1471
"""from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2"""
ColorRGBA1472 = x3d.ColorRGBA()
ColorRGBA1472.USE = "HAnimSegmentLineColorRGBA"

LineSet1470.color = ColorRGBA1472

Shape1469.geometry = LineSet1470

HAnimSegment1465.children.append(Shape1469)

HAnimJoint1464.children.append(HAnimSegment1465)
HAnimJoint1473 = x3d.HAnimJoint()
HAnimJoint1473.name = "r_metacarpophalangeal_4"
HAnimJoint1473.DEF = "hanim_r_metacarpophalangeal_4"
HAnimJoint1473.center = [-0.1951,0.7845,-0.0732]
HAnimJoint1473.ulimit = [0,0,0]
HAnimJoint1473.llimit = [0,0,0]
HAnimSegment1474 = x3d.HAnimSegment()
HAnimSegment1474.name = "r_carpal_proximal_phalanx_4"
HAnimSegment1474.DEF = "hanim_r_carpal_proximal_phalanx_4"
Transform1475 = x3d.Transform()
Transform1475.translation = [-0.1951,0.7845,-0.0732]
Transform1476 = x3d.Transform()
"""Empty Transform"""
Shape1477 = x3d.Shape()
Shape1477.USE = "HAnimJointShape"

Transform1476.children.append(Shape1477)

Transform1475.children.append(Transform1476)

HAnimSegment1474.children.append(Transform1475)
Shape1478 = x3d.Shape()
LineSet1479 = x3d.LineSet()
LineSet1479.vertexCount = [2]
Coordinate1480 = x3d.Coordinate()

LineSet1479.coord = Coordinate1480
"""from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2"""
ColorRGBA1481 = x3d.ColorRGBA()
ColorRGBA1481.USE = "HAnimSegmentLineColorRGBA"

LineSet1479.color = ColorRGBA1481

Shape1478.geometry = LineSet1479

HAnimSegment1474.children.append(Shape1478)

HAnimJoint1473.children.append(HAnimSegment1474)
HAnimJoint1482 = x3d.HAnimJoint()
HAnimJoint1482.name = "r_carpal_proximal_interphalangeal_4"
HAnimJoint1482.DEF = "hanim_r_carpal_proximal_interphalangeal_4"
HAnimJoint1482.center = [-0.192,0.7318,-0.0716]
HAnimJoint1482.ulimit = [0,0,0]
HAnimJoint1482.llimit = [0,0,0]
HAnimSegment1483 = x3d.HAnimSegment()
HAnimSegment1483.name = "r_carpal_middle_phalanx_4"
HAnimSegment1483.DEF = "hanim_r_carpal_middle_phalanx_4"
Transform1484 = x3d.Transform()
Transform1484.translation = [-0.192,0.7318,-0.0716]
Transform1485 = x3d.Transform()
"""Empty Transform"""
Shape1486 = x3d.Shape()
Shape1486.USE = "HAnimJointShape"

Transform1485.children.append(Shape1486)

Transform1484.children.append(Transform1485)

HAnimSegment1483.children.append(Transform1484)
Shape1487 = x3d.Shape()
LineSet1488 = x3d.LineSet()
LineSet1488.vertexCount = [2]
Coordinate1489 = x3d.Coordinate()

LineSet1488.coord = Coordinate1489
"""from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2"""
ColorRGBA1490 = x3d.ColorRGBA()
ColorRGBA1490.USE = "HAnimSegmentLineColorRGBA"

LineSet1488.color = ColorRGBA1490

Shape1487.geometry = LineSet1488

HAnimSegment1483.children.append(Shape1487)

HAnimJoint1482.children.append(HAnimSegment1483)
HAnimJoint1491 = x3d.HAnimJoint()
HAnimJoint1491.name = "r_carpal_distal_interphalangeal_4"
HAnimJoint1491.DEF = "hanim_r_carpal_distal_interphalangeal_4"
HAnimJoint1491.center = [-0.1908,0.7077,-0.0706]
HAnimJoint1491.ulimit = [0,0,0]
HAnimJoint1491.llimit = [0,0,0]

HAnimJoint1482.children.append(HAnimJoint1491)

HAnimJoint1473.children.append(HAnimJoint1482)

HAnimJoint1464.children.append(HAnimJoint1473)

HAnimJoint1343.children.append(HAnimJoint1464)
HAnimJoint1492 = x3d.HAnimJoint()
HAnimJoint1492.name = "r_carpometacarpal_5"
HAnimJoint1492.DEF = "hanim_r_carpometacarpal_5"
HAnimJoint1492.center = [-0.1926,0.8096,-0.0975]
HAnimJoint1492.ulimit = [0,0,0]
HAnimJoint1492.llimit = [0,0,0]
HAnimSegment1493 = x3d.HAnimSegment()
HAnimSegment1493.name = "r_metacarpal_5"
HAnimSegment1493.DEF = "hanim_r_metacarpal_5"
Transform1494 = x3d.Transform()
Transform1494.translation = [-0.1926,0.8096,-0.0975]
Transform1495 = x3d.Transform()
"""Empty Transform"""
Shape1496 = x3d.Shape()
Shape1496.USE = "HAnimJointShape"

Transform1495.children.append(Shape1496)

Transform1494.children.append(Transform1495)

HAnimSegment1493.children.append(Transform1494)
Shape1497 = x3d.Shape()
LineSet1498 = x3d.LineSet()
LineSet1498.vertexCount = [2]
Coordinate1499 = x3d.Coordinate()

LineSet1498.coord = Coordinate1499
"""from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2"""
ColorRGBA1500 = x3d.ColorRGBA()
ColorRGBA1500.USE = "HAnimSegmentLineColorRGBA"

LineSet1498.color = ColorRGBA1500

Shape1497.geometry = LineSet1498

HAnimSegment1493.children.append(Shape1497)
HAnimSite1501 = x3d.HAnimSite()
HAnimSite1501.name = "r_metacarpal_phalanx_5"
HAnimSite1501.DEF = "hanim_r_metacarpal_phalanx_5"
HAnimSite1501.translation = [-0.1929,0.789,-0.1064]
TouchSensor1502 = x3d.TouchSensor()
TouchSensor1502.description = "HAnimSite 80 r_metacarpal_phalanx_5"

HAnimSite1501.children.append(TouchSensor1502)
Shape1503 = x3d.Shape()
Shape1503.USE = "HAnimSiteShape"

HAnimSite1501.children.append(Shape1503)
Billboard1504 = x3d.Billboard()
Shape1505 = x3d.Shape()
Text1506 = x3d.Text()
Text1506.string = ["80"]
FontStyle1507 = x3d.FontStyle()
FontStyle1507.size = 0.035

Text1506.fontStyle = FontStyle1507

Shape1505.geometry = Text1506

Billboard1504.children.append(Shape1505)

HAnimSite1501.children.append(Billboard1504)

HAnimSegment1493.children.append(HAnimSite1501)

HAnimJoint1492.children.append(HAnimSegment1493)
HAnimJoint1508 = x3d.HAnimJoint()
HAnimJoint1508.name = "r_metacarpophalangeal_5"
HAnimJoint1508.DEF = "hanim_r_metacarpophalangeal_5"
HAnimJoint1508.center = [-0.1926,0.7896,-0.0975]
HAnimJoint1508.ulimit = [0,0,0]
HAnimJoint1508.llimit = [0,0,0]
HAnimSegment1509 = x3d.HAnimSegment()
HAnimSegment1509.name = "r_carpal_proximal_phalanx_5"
HAnimSegment1509.DEF = "hanim_r_carpal_proximal_phalanx_5"
Transform1510 = x3d.Transform()
Transform1510.translation = [-0.1926,0.7896,-0.0975]
Transform1511 = x3d.Transform()
"""Empty Transform"""
Shape1512 = x3d.Shape()
Shape1512.USE = "HAnimJointShape"

Transform1511.children.append(Shape1512)

Transform1510.children.append(Transform1511)

HAnimSegment1509.children.append(Transform1510)
Shape1513 = x3d.Shape()
LineSet1514 = x3d.LineSet()
LineSet1514.vertexCount = [2]
Coordinate1515 = x3d.Coordinate()

LineSet1514.coord = Coordinate1515
"""from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2"""
ColorRGBA1516 = x3d.ColorRGBA()
ColorRGBA1516.USE = "HAnimSegmentLineColorRGBA"

LineSet1514.color = ColorRGBA1516

Shape1513.geometry = LineSet1514

HAnimSegment1509.children.append(Shape1513)

HAnimJoint1508.children.append(HAnimSegment1509)
HAnimJoint1517 = x3d.HAnimJoint()
HAnimJoint1517.name = "r_carpal_proximal_interphalangeal_5"
HAnimJoint1517.DEF = "hanim_r_carpal_proximal_interphalangeal_5"
HAnimJoint1517.center = [-0.1902,0.7483,-0.0963]
HAnimJoint1517.ulimit = [0,0,0]
HAnimJoint1517.llimit = [0,0,0]
HAnimSegment1518 = x3d.HAnimSegment()
HAnimSegment1518.name = "r_carpal_middle_phalanx_5"
HAnimSegment1518.DEF = "hanim_r_carpal_middle_phalanx_5"
Transform1519 = x3d.Transform()
Transform1519.translation = [-0.1902,0.7483,-0.0963]
Transform1520 = x3d.Transform()
"""Empty Transform"""
Shape1521 = x3d.Shape()
Shape1521.USE = "HAnimJointShape"

Transform1520.children.append(Shape1521)

Transform1519.children.append(Transform1520)

HAnimSegment1518.children.append(Transform1519)
Shape1522 = x3d.Shape()
LineSet1523 = x3d.LineSet()
LineSet1523.vertexCount = [2]
Coordinate1524 = x3d.Coordinate()

LineSet1523.coord = Coordinate1524
"""from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2"""
ColorRGBA1525 = x3d.ColorRGBA()
ColorRGBA1525.USE = "HAnimSegmentLineColorRGBA"

LineSet1523.color = ColorRGBA1525

Shape1522.geometry = LineSet1523

HAnimSegment1518.children.append(Shape1522)

HAnimJoint1517.children.append(HAnimSegment1518)
HAnimJoint1526 = x3d.HAnimJoint()
HAnimJoint1526.name = "r_carpal_distal_interphalangeal_5"
HAnimJoint1526.DEF = "hanim_r_carpal_distal_interphalangeal_5"
HAnimJoint1526.center = [-0.1908,0.754,-0.096]
HAnimJoint1526.ulimit = [0,0,0]
HAnimJoint1526.llimit = [0,0,0]

HAnimJoint1517.children.append(HAnimJoint1526)

HAnimJoint1508.children.append(HAnimJoint1517)

HAnimJoint1492.children.append(HAnimJoint1508)

HAnimJoint1343.children.append(HAnimJoint1492)

HAnimJoint1306.children.append(HAnimJoint1343)

HAnimJoint1283.children.append(HAnimJoint1306)

HAnimJoint1274.children.append(HAnimJoint1283)

HAnimJoint1230.children.append(HAnimJoint1274)

HAnimJoint701.children.append(HAnimJoint1230)

HAnimJoint692.children.append(HAnimJoint701)

HAnimJoint683.children.append(HAnimJoint692)

HAnimJoint674.children.append(HAnimJoint683)

HAnimJoint658.children.append(HAnimJoint674)

HAnimJoint621.children.append(HAnimJoint658)

HAnimJoint612.children.append(HAnimJoint621)

HAnimJoint603.children.append(HAnimJoint612)

HAnimJoint580.children.append(HAnimJoint603)

HAnimJoint564.children.append(HAnimJoint580)

HAnimJoint555.children.append(HAnimJoint564)

HAnimJoint546.children.append(HAnimJoint555)

HAnimJoint537.children.append(HAnimJoint546)

HAnimJoint507.children.append(HAnimJoint537)

HAnimJoint498.children.append(HAnimJoint507)

HAnimJoint489.children.append(HAnimJoint498)

HAnimJoint459.children.append(HAnimJoint489)

HAnimJoint47.children.append(HAnimJoint459)

HAnimHumanoid38.skeleton.append(HAnimJoint47)
HAnimJoint1527 = x3d.HAnimJoint()
HAnimJoint1527.USE = "hanim_humanoid_root"

HAnimHumanoid38.joints.append(HAnimJoint1527)
HAnimJoint1528 = x3d.HAnimJoint()
HAnimJoint1528.USE = "hanim_sacroiliac"

HAnimHumanoid38.joints.append(HAnimJoint1528)
HAnimJoint1529 = x3d.HAnimJoint()
HAnimJoint1529.USE = "hanim_l_hip"

HAnimHumanoid38.joints.append(HAnimJoint1529)
HAnimJoint1530 = x3d.HAnimJoint()
HAnimJoint1530.USE = "hanim_l_knee"

HAnimHumanoid38.joints.append(HAnimJoint1530)
HAnimJoint1531 = x3d.HAnimJoint()
HAnimJoint1531.USE = "hanim_l_talocrural"

HAnimHumanoid38.joints.append(HAnimJoint1531)
HAnimJoint1532 = x3d.HAnimJoint()
HAnimJoint1532.USE = "hanim_l_tarsometatarsal_2"

HAnimHumanoid38.joints.append(HAnimJoint1532)
HAnimJoint1533 = x3d.HAnimJoint()
HAnimJoint1533.USE = "hanim_l_metatarsophalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1533)
HAnimJoint1534 = x3d.HAnimJoint()
HAnimJoint1534.USE = "hanim_l_tarsal_distal_interphalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1534)
HAnimJoint1535 = x3d.HAnimJoint()
HAnimJoint1535.USE = "hanim_r_hip"

HAnimHumanoid38.joints.append(HAnimJoint1535)
HAnimJoint1536 = x3d.HAnimJoint()
HAnimJoint1536.USE = "hanim_r_knee"

HAnimHumanoid38.joints.append(HAnimJoint1536)
HAnimJoint1537 = x3d.HAnimJoint()
HAnimJoint1537.USE = "hanim_r_talocrural"

HAnimHumanoid38.joints.append(HAnimJoint1537)
HAnimJoint1538 = x3d.HAnimJoint()
HAnimJoint1538.USE = "hanim_r_tarsometatarsal_2"

HAnimHumanoid38.joints.append(HAnimJoint1538)
HAnimJoint1539 = x3d.HAnimJoint()
HAnimJoint1539.USE = "hanim_r_metatarsophalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1539)
HAnimJoint1540 = x3d.HAnimJoint()
HAnimJoint1540.USE = "hanim_r_tarsal_distal_interphalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1540)
HAnimJoint1541 = x3d.HAnimJoint()
HAnimJoint1541.USE = "hanim_vl5"

HAnimHumanoid38.joints.append(HAnimJoint1541)
HAnimJoint1542 = x3d.HAnimJoint()
HAnimJoint1542.USE = "hanim_vl4"

HAnimHumanoid38.joints.append(HAnimJoint1542)
HAnimJoint1543 = x3d.HAnimJoint()
HAnimJoint1543.USE = "hanim_vl3"

HAnimHumanoid38.joints.append(HAnimJoint1543)
HAnimJoint1544 = x3d.HAnimJoint()
HAnimJoint1544.USE = "hanim_vl2"

HAnimHumanoid38.joints.append(HAnimJoint1544)
HAnimJoint1545 = x3d.HAnimJoint()
HAnimJoint1545.USE = "hanim_vl1"

HAnimHumanoid38.joints.append(HAnimJoint1545)
HAnimJoint1546 = x3d.HAnimJoint()
HAnimJoint1546.USE = "hanim_vt12"

HAnimHumanoid38.joints.append(HAnimJoint1546)
HAnimJoint1547 = x3d.HAnimJoint()
HAnimJoint1547.USE = "hanim_vt11"

HAnimHumanoid38.joints.append(HAnimJoint1547)
HAnimJoint1548 = x3d.HAnimJoint()
HAnimJoint1548.USE = "hanim_vt10"

HAnimHumanoid38.joints.append(HAnimJoint1548)
HAnimJoint1549 = x3d.HAnimJoint()
HAnimJoint1549.USE = "hanim_vt9"

HAnimHumanoid38.joints.append(HAnimJoint1549)
HAnimJoint1550 = x3d.HAnimJoint()
HAnimJoint1550.USE = "hanim_vt8"

HAnimHumanoid38.joints.append(HAnimJoint1550)
HAnimJoint1551 = x3d.HAnimJoint()
HAnimJoint1551.USE = "hanim_vt7"

HAnimHumanoid38.joints.append(HAnimJoint1551)
HAnimJoint1552 = x3d.HAnimJoint()
HAnimJoint1552.USE = "hanim_vt6"

HAnimHumanoid38.joints.append(HAnimJoint1552)
HAnimJoint1553 = x3d.HAnimJoint()
HAnimJoint1553.USE = "hanim_vt5"

HAnimHumanoid38.joints.append(HAnimJoint1553)
HAnimJoint1554 = x3d.HAnimJoint()
HAnimJoint1554.USE = "hanim_vt4"

HAnimHumanoid38.joints.append(HAnimJoint1554)
HAnimJoint1555 = x3d.HAnimJoint()
HAnimJoint1555.USE = "hanim_vt3"

HAnimHumanoid38.joints.append(HAnimJoint1555)
HAnimJoint1556 = x3d.HAnimJoint()
HAnimJoint1556.USE = "hanim_vt2"

HAnimHumanoid38.joints.append(HAnimJoint1556)
HAnimJoint1557 = x3d.HAnimJoint()
HAnimJoint1557.USE = "hanim_vt1"

HAnimHumanoid38.joints.append(HAnimJoint1557)
HAnimJoint1558 = x3d.HAnimJoint()
HAnimJoint1558.USE = "hanim_vc7"

HAnimHumanoid38.joints.append(HAnimJoint1558)
HAnimJoint1559 = x3d.HAnimJoint()
HAnimJoint1559.USE = "hanim_vc6"

HAnimHumanoid38.joints.append(HAnimJoint1559)
HAnimJoint1560 = x3d.HAnimJoint()
HAnimJoint1560.USE = "hanim_vc5"

HAnimHumanoid38.joints.append(HAnimJoint1560)
HAnimJoint1561 = x3d.HAnimJoint()
HAnimJoint1561.USE = "hanim_vc4"

HAnimHumanoid38.joints.append(HAnimJoint1561)
HAnimJoint1562 = x3d.HAnimJoint()
HAnimJoint1562.USE = "hanim_vc3"

HAnimHumanoid38.joints.append(HAnimJoint1562)
HAnimJoint1563 = x3d.HAnimJoint()
HAnimJoint1563.USE = "hanim_vc2"

HAnimHumanoid38.joints.append(HAnimJoint1563)
HAnimJoint1564 = x3d.HAnimJoint()
HAnimJoint1564.USE = "hanim_vc1"

HAnimHumanoid38.joints.append(HAnimJoint1564)
HAnimJoint1565 = x3d.HAnimJoint()
HAnimJoint1565.USE = "hanim_skullbase"

HAnimHumanoid38.joints.append(HAnimJoint1565)
HAnimJoint1566 = x3d.HAnimJoint()
HAnimJoint1566.USE = "hanim_l_eyelid_joint"

HAnimHumanoid38.joints.append(HAnimJoint1566)
HAnimJoint1567 = x3d.HAnimJoint()
HAnimJoint1567.USE = "hanim_r_eyelid_joint"

HAnimHumanoid38.joints.append(HAnimJoint1567)
HAnimJoint1568 = x3d.HAnimJoint()
HAnimJoint1568.USE = "hanim_l_eyeball_joint"

HAnimHumanoid38.joints.append(HAnimJoint1568)
HAnimJoint1569 = x3d.HAnimJoint()
HAnimJoint1569.USE = "hanim_r_eyeball_joint"

HAnimHumanoid38.joints.append(HAnimJoint1569)
HAnimJoint1570 = x3d.HAnimJoint()
HAnimJoint1570.USE = "hanim_l_eyebrow_joint"

HAnimHumanoid38.joints.append(HAnimJoint1570)
HAnimJoint1571 = x3d.HAnimJoint()
HAnimJoint1571.USE = "hanim_r_eyebrow_joint"

HAnimHumanoid38.joints.append(HAnimJoint1571)
HAnimJoint1572 = x3d.HAnimJoint()
HAnimJoint1572.USE = "hanim_temporomandibular"

HAnimHumanoid38.joints.append(HAnimJoint1572)
HAnimJoint1573 = x3d.HAnimJoint()
HAnimJoint1573.USE = "hanim_l_sternoclavicular"

HAnimHumanoid38.joints.append(HAnimJoint1573)
HAnimJoint1574 = x3d.HAnimJoint()
HAnimJoint1574.USE = "hanim_l_acromioclavicular"

HAnimHumanoid38.joints.append(HAnimJoint1574)
HAnimJoint1575 = x3d.HAnimJoint()
HAnimJoint1575.USE = "hanim_l_shoulder"

HAnimHumanoid38.joints.append(HAnimJoint1575)
HAnimJoint1576 = x3d.HAnimJoint()
HAnimJoint1576.USE = "hanim_l_elbow"

HAnimHumanoid38.joints.append(HAnimJoint1576)
HAnimJoint1577 = x3d.HAnimJoint()
HAnimJoint1577.USE = "hanim_l_radiocarpal"

HAnimHumanoid38.joints.append(HAnimJoint1577)
HAnimJoint1578 = x3d.HAnimJoint()
HAnimJoint1578.USE = "hanim_l_carpometacarpal_1"

HAnimHumanoid38.joints.append(HAnimJoint1578)
HAnimJoint1579 = x3d.HAnimJoint()
HAnimJoint1579.USE = "hanim_l_metacarpophalangeal_1"

HAnimHumanoid38.joints.append(HAnimJoint1579)
HAnimJoint1580 = x3d.HAnimJoint()
HAnimJoint1580.USE = "hanim_l_carpal_interphalangeal_1"

HAnimHumanoid38.joints.append(HAnimJoint1580)
HAnimJoint1581 = x3d.HAnimJoint()
HAnimJoint1581.USE = "hanim_l_carpometacarpal_2"

HAnimHumanoid38.joints.append(HAnimJoint1581)
HAnimJoint1582 = x3d.HAnimJoint()
HAnimJoint1582.USE = "hanim_l_metacarpophalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1582)
HAnimJoint1583 = x3d.HAnimJoint()
HAnimJoint1583.USE = "hanim_l_carpal_proximal_interphalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1583)
HAnimJoint1584 = x3d.HAnimJoint()
HAnimJoint1584.USE = "hanim_l_carpal_distal_interphalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1584)
HAnimJoint1585 = x3d.HAnimJoint()
HAnimJoint1585.USE = "hanim_l_carpometacarpal_3"

HAnimHumanoid38.joints.append(HAnimJoint1585)
HAnimJoint1586 = x3d.HAnimJoint()
HAnimJoint1586.USE = "hanim_l_metacarpophalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint1586)
HAnimJoint1587 = x3d.HAnimJoint()
HAnimJoint1587.USE = "hanim_l_carpal_proximal_interphalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint1587)
HAnimJoint1588 = x3d.HAnimJoint()
HAnimJoint1588.USE = "hanim_l_carpal_distal_interphalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint1588)
HAnimJoint1589 = x3d.HAnimJoint()
HAnimJoint1589.USE = "hanim_l_carpometacarpal_4"

HAnimHumanoid38.joints.append(HAnimJoint1589)
HAnimJoint1590 = x3d.HAnimJoint()
HAnimJoint1590.USE = "hanim_l_metacarpophalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint1590)
HAnimJoint1591 = x3d.HAnimJoint()
HAnimJoint1591.USE = "hanim_l_carpal_proximal_interphalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint1591)
HAnimJoint1592 = x3d.HAnimJoint()
HAnimJoint1592.USE = "hanim_l_carpal_distal_interphalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint1592)
HAnimJoint1593 = x3d.HAnimJoint()
HAnimJoint1593.USE = "hanim_l_carpometacarpal_5"

HAnimHumanoid38.joints.append(HAnimJoint1593)
HAnimJoint1594 = x3d.HAnimJoint()
HAnimJoint1594.USE = "hanim_l_metacarpophalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint1594)
HAnimJoint1595 = x3d.HAnimJoint()
HAnimJoint1595.USE = "hanim_l_carpal_proximal_interphalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint1595)
HAnimJoint1596 = x3d.HAnimJoint()
HAnimJoint1596.USE = "hanim_l_carpal_distal_interphalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint1596)
HAnimJoint1597 = x3d.HAnimJoint()
HAnimJoint1597.USE = "hanim_r_sternoclavicular"

HAnimHumanoid38.joints.append(HAnimJoint1597)
HAnimJoint1598 = x3d.HAnimJoint()
HAnimJoint1598.USE = "hanim_r_acromioclavicular"

HAnimHumanoid38.joints.append(HAnimJoint1598)
HAnimJoint1599 = x3d.HAnimJoint()
HAnimJoint1599.USE = "hanim_r_shoulder"

HAnimHumanoid38.joints.append(HAnimJoint1599)
HAnimJoint1600 = x3d.HAnimJoint()
HAnimJoint1600.USE = "hanim_r_elbow"

HAnimHumanoid38.joints.append(HAnimJoint1600)
HAnimJoint1601 = x3d.HAnimJoint()
HAnimJoint1601.USE = "hanim_r_radiocarpal"

HAnimHumanoid38.joints.append(HAnimJoint1601)
HAnimJoint1602 = x3d.HAnimJoint()
HAnimJoint1602.USE = "hanim_r_carpometacarpal_1"

HAnimHumanoid38.joints.append(HAnimJoint1602)
HAnimJoint1603 = x3d.HAnimJoint()
HAnimJoint1603.USE = "hanim_r_metacarpophalangeal_1"

HAnimHumanoid38.joints.append(HAnimJoint1603)
HAnimJoint1604 = x3d.HAnimJoint()
HAnimJoint1604.USE = "hanim_r_carpal_interphalangeal_1"

HAnimHumanoid38.joints.append(HAnimJoint1604)
HAnimJoint1605 = x3d.HAnimJoint()
HAnimJoint1605.USE = "hanim_r_carpometacarpal_2"

HAnimHumanoid38.joints.append(HAnimJoint1605)
HAnimJoint1606 = x3d.HAnimJoint()
HAnimJoint1606.USE = "hanim_r_metacarpophalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1606)
HAnimJoint1607 = x3d.HAnimJoint()
HAnimJoint1607.USE = "hanim_r_carpal_proximal_interphalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1607)
HAnimJoint1608 = x3d.HAnimJoint()
HAnimJoint1608.USE = "hanim_r_carpal_distal_interphalangeal_2"

HAnimHumanoid38.joints.append(HAnimJoint1608)
HAnimJoint1609 = x3d.HAnimJoint()
HAnimJoint1609.USE = "hanim_r_carpometacarpal_3"

HAnimHumanoid38.joints.append(HAnimJoint1609)
HAnimJoint1610 = x3d.HAnimJoint()
HAnimJoint1610.USE = "hanim_r_metacarpophalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint1610)
HAnimJoint1611 = x3d.HAnimJoint()
HAnimJoint1611.USE = "hanim_r_carpal_proximal_interphalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint1611)
HAnimJoint1612 = x3d.HAnimJoint()
HAnimJoint1612.USE = "hanim_r_carpal_distal_interphalangeal_3"

HAnimHumanoid38.joints.append(HAnimJoint1612)
HAnimJoint1613 = x3d.HAnimJoint()
HAnimJoint1613.USE = "hanim_r_carpometacarpal_4"

HAnimHumanoid38.joints.append(HAnimJoint1613)
HAnimJoint1614 = x3d.HAnimJoint()
HAnimJoint1614.USE = "hanim_r_metacarpophalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint1614)
HAnimJoint1615 = x3d.HAnimJoint()
HAnimJoint1615.USE = "hanim_r_carpal_proximal_interphalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint1615)
HAnimJoint1616 = x3d.HAnimJoint()
HAnimJoint1616.USE = "hanim_r_carpal_distal_interphalangeal_4"

HAnimHumanoid38.joints.append(HAnimJoint1616)
HAnimJoint1617 = x3d.HAnimJoint()
HAnimJoint1617.USE = "hanim_r_carpometacarpal_5"

HAnimHumanoid38.joints.append(HAnimJoint1617)
HAnimJoint1618 = x3d.HAnimJoint()
HAnimJoint1618.USE = "hanim_r_metacarpophalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint1618)
HAnimJoint1619 = x3d.HAnimJoint()
HAnimJoint1619.USE = "hanim_r_carpal_proximal_interphalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint1619)
HAnimJoint1620 = x3d.HAnimJoint()
HAnimJoint1620.USE = "hanim_r_carpal_distal_interphalangeal_5"

HAnimHumanoid38.joints.append(HAnimJoint1620)
HAnimSegment1621 = x3d.HAnimSegment()
HAnimSegment1621.USE = "hanim_sacrum"

HAnimHumanoid38.segments.append(HAnimSegment1621)
HAnimSegment1622 = x3d.HAnimSegment()
HAnimSegment1622.USE = "hanim_pelvis"

HAnimHumanoid38.segments.append(HAnimSegment1622)
HAnimSegment1623 = x3d.HAnimSegment()
HAnimSegment1623.USE = "hanim_l_thigh"

HAnimHumanoid38.segments.append(HAnimSegment1623)
HAnimSegment1624 = x3d.HAnimSegment()
HAnimSegment1624.USE = "hanim_l_calf"

HAnimHumanoid38.segments.append(HAnimSegment1624)
HAnimSegment1625 = x3d.HAnimSegment()
HAnimSegment1625.USE = "hanim_l_talus"

HAnimHumanoid38.segments.append(HAnimSegment1625)
HAnimSegment1626 = x3d.HAnimSegment()
HAnimSegment1626.USE = "hanim_l_metatarsal_2"

HAnimHumanoid38.segments.append(HAnimSegment1626)
HAnimSegment1627 = x3d.HAnimSegment()
HAnimSegment1627.USE = "hanim_l_tarsal_proximal_phalanx_2"

HAnimHumanoid38.segments.append(HAnimSegment1627)
HAnimSegment1628 = x3d.HAnimSegment()
HAnimSegment1628.USE = "hanim_r_thigh"

HAnimHumanoid38.segments.append(HAnimSegment1628)
HAnimSegment1629 = x3d.HAnimSegment()
HAnimSegment1629.USE = "hanim_r_calf"

HAnimHumanoid38.segments.append(HAnimSegment1629)
HAnimSegment1630 = x3d.HAnimSegment()
HAnimSegment1630.USE = "hanim_r_talus"

HAnimHumanoid38.segments.append(HAnimSegment1630)
HAnimSegment1631 = x3d.HAnimSegment()
HAnimSegment1631.USE = "hanim_r_metatarsal_2"

HAnimHumanoid38.segments.append(HAnimSegment1631)
HAnimSegment1632 = x3d.HAnimSegment()
HAnimSegment1632.USE = "hanim_r_tarsal_proximal_phalanx_2"

HAnimHumanoid38.segments.append(HAnimSegment1632)
HAnimSegment1633 = x3d.HAnimSegment()
HAnimSegment1633.USE = "hanim_l5"

HAnimHumanoid38.segments.append(HAnimSegment1633)
HAnimSegment1634 = x3d.HAnimSegment()
HAnimSegment1634.USE = "hanim_l4"

HAnimHumanoid38.segments.append(HAnimSegment1634)
HAnimSegment1635 = x3d.HAnimSegment()
HAnimSegment1635.USE = "hanim_l3"

HAnimHumanoid38.segments.append(HAnimSegment1635)
HAnimSegment1636 = x3d.HAnimSegment()
HAnimSegment1636.USE = "hanim_l2"

HAnimHumanoid38.segments.append(HAnimSegment1636)
HAnimSegment1637 = x3d.HAnimSegment()
HAnimSegment1637.USE = "hanim_l1"

HAnimHumanoid38.segments.append(HAnimSegment1637)
HAnimSegment1638 = x3d.HAnimSegment()
HAnimSegment1638.USE = "hanim_t12"

HAnimHumanoid38.segments.append(HAnimSegment1638)
HAnimSegment1639 = x3d.HAnimSegment()
HAnimSegment1639.USE = "hanim_t11"

HAnimHumanoid38.segments.append(HAnimSegment1639)
HAnimSegment1640 = x3d.HAnimSegment()
HAnimSegment1640.USE = "hanim_t10"

HAnimHumanoid38.segments.append(HAnimSegment1640)
HAnimSegment1641 = x3d.HAnimSegment()
HAnimSegment1641.USE = "hanim_t9"

HAnimHumanoid38.segments.append(HAnimSegment1641)
HAnimSegment1642 = x3d.HAnimSegment()
HAnimSegment1642.USE = "hanim_t8"

HAnimHumanoid38.segments.append(HAnimSegment1642)
HAnimSegment1643 = x3d.HAnimSegment()
HAnimSegment1643.USE = "hanim_t7"

HAnimHumanoid38.segments.append(HAnimSegment1643)
HAnimSegment1644 = x3d.HAnimSegment()
HAnimSegment1644.USE = "hanim_t6"

HAnimHumanoid38.segments.append(HAnimSegment1644)
HAnimSegment1645 = x3d.HAnimSegment()
HAnimSegment1645.USE = "hanim_t5"

HAnimHumanoid38.segments.append(HAnimSegment1645)
HAnimSegment1646 = x3d.HAnimSegment()
HAnimSegment1646.USE = "hanim_t4"

HAnimHumanoid38.segments.append(HAnimSegment1646)
HAnimSegment1647 = x3d.HAnimSegment()
HAnimSegment1647.USE = "hanim_t3"

HAnimHumanoid38.segments.append(HAnimSegment1647)
HAnimSegment1648 = x3d.HAnimSegment()
HAnimSegment1648.USE = "hanim_t2"

HAnimHumanoid38.segments.append(HAnimSegment1648)
HAnimSegment1649 = x3d.HAnimSegment()
HAnimSegment1649.USE = "hanim_t1"

HAnimHumanoid38.segments.append(HAnimSegment1649)
HAnimSegment1650 = x3d.HAnimSegment()
HAnimSegment1650.USE = "hanim_c7"

HAnimHumanoid38.segments.append(HAnimSegment1650)
HAnimSegment1651 = x3d.HAnimSegment()
HAnimSegment1651.USE = "hanim_c6"

HAnimHumanoid38.segments.append(HAnimSegment1651)
HAnimSegment1652 = x3d.HAnimSegment()
HAnimSegment1652.USE = "hanim_c5"

HAnimHumanoid38.segments.append(HAnimSegment1652)
HAnimSegment1653 = x3d.HAnimSegment()
HAnimSegment1653.USE = "hanim_c4"

HAnimHumanoid38.segments.append(HAnimSegment1653)
HAnimSegment1654 = x3d.HAnimSegment()
HAnimSegment1654.USE = "hanim_c3"

HAnimHumanoid38.segments.append(HAnimSegment1654)
HAnimSegment1655 = x3d.HAnimSegment()
HAnimSegment1655.USE = "hanim_c2"

HAnimHumanoid38.segments.append(HAnimSegment1655)
HAnimSegment1656 = x3d.HAnimSegment()
HAnimSegment1656.USE = "hanim_c1"

HAnimHumanoid38.segments.append(HAnimSegment1656)
HAnimSegment1657 = x3d.HAnimSegment()
HAnimSegment1657.USE = "hanim_skull"

HAnimHumanoid38.segments.append(HAnimSegment1657)
HAnimSegment1658 = x3d.HAnimSegment()
HAnimSegment1658.USE = "hanim_l_clavicle"

HAnimHumanoid38.segments.append(HAnimSegment1658)
HAnimSegment1659 = x3d.HAnimSegment()
HAnimSegment1659.USE = "hanim_l_scapula"

HAnimHumanoid38.segments.append(HAnimSegment1659)
HAnimSegment1660 = x3d.HAnimSegment()
HAnimSegment1660.USE = "hanim_l_upperarm"

HAnimHumanoid38.segments.append(HAnimSegment1660)
HAnimSegment1661 = x3d.HAnimSegment()
HAnimSegment1661.USE = "hanim_l_forearm"

HAnimHumanoid38.segments.append(HAnimSegment1661)
HAnimSegment1662 = x3d.HAnimSegment()
HAnimSegment1662.USE = "hanim_l_carpal"

HAnimHumanoid38.segments.append(HAnimSegment1662)
HAnimSegment1663 = x3d.HAnimSegment()
HAnimSegment1663.USE = "hanim_l_metacarpal_1"

HAnimHumanoid38.segments.append(HAnimSegment1663)
HAnimSegment1664 = x3d.HAnimSegment()
HAnimSegment1664.USE = "hanim_l_carpal_proximal_phalanx_1"

HAnimHumanoid38.segments.append(HAnimSegment1664)
HAnimSegment1665 = x3d.HAnimSegment()
HAnimSegment1665.USE = "hanim_l_metacarpal_2"

HAnimHumanoid38.segments.append(HAnimSegment1665)
HAnimSegment1666 = x3d.HAnimSegment()
HAnimSegment1666.USE = "hanim_l_carpal_proximal_phalanx_2"

HAnimHumanoid38.segments.append(HAnimSegment1666)
HAnimSegment1667 = x3d.HAnimSegment()
HAnimSegment1667.USE = "hanim_l_carpal_middle_phalanx_2"

HAnimHumanoid38.segments.append(HAnimSegment1667)
HAnimSegment1668 = x3d.HAnimSegment()
HAnimSegment1668.USE = "hanim_l_metacarpal_3"

HAnimHumanoid38.segments.append(HAnimSegment1668)
HAnimSegment1669 = x3d.HAnimSegment()
HAnimSegment1669.USE = "hanim_l_carpal_proximal_phalanx_3"

HAnimHumanoid38.segments.append(HAnimSegment1669)
HAnimSegment1670 = x3d.HAnimSegment()
HAnimSegment1670.USE = "hanim_l_carpal_middle_phalanx_3"

HAnimHumanoid38.segments.append(HAnimSegment1670)
HAnimSegment1671 = x3d.HAnimSegment()
HAnimSegment1671.USE = "hanim_l_metacarpal_4"

HAnimHumanoid38.segments.append(HAnimSegment1671)
HAnimSegment1672 = x3d.HAnimSegment()
HAnimSegment1672.USE = "hanim_l_carpal_proximal_phalanx_4"

HAnimHumanoid38.segments.append(HAnimSegment1672)
HAnimSegment1673 = x3d.HAnimSegment()
HAnimSegment1673.USE = "hanim_l_carpal_middle_phalanx_4"

HAnimHumanoid38.segments.append(HAnimSegment1673)
HAnimSegment1674 = x3d.HAnimSegment()
HAnimSegment1674.USE = "hanim_l_metacarpal_5"

HAnimHumanoid38.segments.append(HAnimSegment1674)
HAnimSegment1675 = x3d.HAnimSegment()
HAnimSegment1675.USE = "hanim_l_carpal_proximal_phalanx_5"

HAnimHumanoid38.segments.append(HAnimSegment1675)
HAnimSegment1676 = x3d.HAnimSegment()
HAnimSegment1676.USE = "hanim_l_carpal_middle_phalanx_5"

HAnimHumanoid38.segments.append(HAnimSegment1676)
HAnimSegment1677 = x3d.HAnimSegment()
HAnimSegment1677.USE = "hanim_r_clavicle"

HAnimHumanoid38.segments.append(HAnimSegment1677)
HAnimSegment1678 = x3d.HAnimSegment()
HAnimSegment1678.USE = "hanim_r_scapula"

HAnimHumanoid38.segments.append(HAnimSegment1678)
HAnimSegment1679 = x3d.HAnimSegment()
HAnimSegment1679.USE = "hanim_r_upperarm"

HAnimHumanoid38.segments.append(HAnimSegment1679)
HAnimSegment1680 = x3d.HAnimSegment()
HAnimSegment1680.USE = "hanim_r_forearm"

HAnimHumanoid38.segments.append(HAnimSegment1680)
HAnimSegment1681 = x3d.HAnimSegment()
HAnimSegment1681.USE = "hanim_r_carpal"

HAnimHumanoid38.segments.append(HAnimSegment1681)
HAnimSegment1682 = x3d.HAnimSegment()
HAnimSegment1682.USE = "hanim_r_metacarpal_1"

HAnimHumanoid38.segments.append(HAnimSegment1682)
HAnimSegment1683 = x3d.HAnimSegment()
HAnimSegment1683.USE = "hanim_r_carpal_proximal_phalanx_1"

HAnimHumanoid38.segments.append(HAnimSegment1683)
HAnimSegment1684 = x3d.HAnimSegment()
HAnimSegment1684.USE = "hanim_r_metacarpal_2"

HAnimHumanoid38.segments.append(HAnimSegment1684)
HAnimSegment1685 = x3d.HAnimSegment()
HAnimSegment1685.USE = "hanim_r_carpal_proximal_phalanx_2"

HAnimHumanoid38.segments.append(HAnimSegment1685)
HAnimSegment1686 = x3d.HAnimSegment()
HAnimSegment1686.USE = "hanim_r_carpal_middle_phalanx_2"

HAnimHumanoid38.segments.append(HAnimSegment1686)
HAnimSegment1687 = x3d.HAnimSegment()
HAnimSegment1687.USE = "hanim_r_metacarpal_3"

HAnimHumanoid38.segments.append(HAnimSegment1687)
HAnimSegment1688 = x3d.HAnimSegment()
HAnimSegment1688.USE = "hanim_r_carpal_proximal_phalanx_3"

HAnimHumanoid38.segments.append(HAnimSegment1688)
HAnimSegment1689 = x3d.HAnimSegment()
HAnimSegment1689.USE = "hanim_r_carpal_middle_phalanx_3"

HAnimHumanoid38.segments.append(HAnimSegment1689)
HAnimSegment1690 = x3d.HAnimSegment()
HAnimSegment1690.USE = "hanim_r_metacarpal_4"

HAnimHumanoid38.segments.append(HAnimSegment1690)
HAnimSegment1691 = x3d.HAnimSegment()
HAnimSegment1691.USE = "hanim_r_carpal_proximal_phalanx_4"

HAnimHumanoid38.segments.append(HAnimSegment1691)
HAnimSegment1692 = x3d.HAnimSegment()
HAnimSegment1692.USE = "hanim_r_carpal_middle_phalanx_4"

HAnimHumanoid38.segments.append(HAnimSegment1692)
HAnimSegment1693 = x3d.HAnimSegment()
HAnimSegment1693.USE = "hanim_r_metacarpal_5"

HAnimHumanoid38.segments.append(HAnimSegment1693)
HAnimSegment1694 = x3d.HAnimSegment()
HAnimSegment1694.USE = "hanim_r_carpal_proximal_phalanx_5"

HAnimHumanoid38.segments.append(HAnimSegment1694)
HAnimSegment1695 = x3d.HAnimSegment()
HAnimSegment1695.USE = "hanim_r_carpal_middle_phalanx_5"

HAnimHumanoid38.segments.append(HAnimSegment1695)
HAnimSite1696 = x3d.HAnimSite()
HAnimSite1696.USE = "hanim_buttocks_standing_wall_contact_point"

HAnimHumanoid38.sites.append(HAnimSite1696)
HAnimSite1697 = x3d.HAnimSite()
HAnimSite1697.USE = "hanim_crotch"

HAnimHumanoid38.sites.append(HAnimSite1697)
HAnimSite1698 = x3d.HAnimSite()
HAnimSite1698.USE = "hanim_l_asis"

HAnimHumanoid38.sites.append(HAnimSite1698)
HAnimSite1699 = x3d.HAnimSite()
HAnimSite1699.USE = "hanim_l_iliocristale"

HAnimHumanoid38.sites.append(HAnimSite1699)
HAnimSite1700 = x3d.HAnimSite()
HAnimSite1700.USE = "hanim_l_psis"

HAnimHumanoid38.sites.append(HAnimSite1700)
HAnimSite1701 = x3d.HAnimSite()
HAnimSite1701.USE = "hanim_l_trochanterion"

HAnimHumanoid38.sites.append(HAnimSite1701)
HAnimSite1702 = x3d.HAnimSite()
HAnimSite1702.USE = "hanim_r_asis"

HAnimHumanoid38.sites.append(HAnimSite1702)
HAnimSite1703 = x3d.HAnimSite()
HAnimSite1703.USE = "hanim_r_iliocristale"

HAnimHumanoid38.sites.append(HAnimSite1703)
HAnimSite1704 = x3d.HAnimSite()
HAnimSite1704.USE = "hanim_r_psis"

HAnimHumanoid38.sites.append(HAnimSite1704)
HAnimSite1705 = x3d.HAnimSite()
HAnimSite1705.USE = "hanim_r_trochanterion"

HAnimHumanoid38.sites.append(HAnimSite1705)
HAnimSite1706 = x3d.HAnimSite()
HAnimSite1706.USE = "hanim_l_femoral_lateral_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite1706)
HAnimSite1707 = x3d.HAnimSite()
HAnimSite1707.USE = "hanim_l_femoral_medial_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite1707)
HAnimSite1708 = x3d.HAnimSite()
HAnimSite1708.USE = "hanim_l_knee_crease"

HAnimHumanoid38.sites.append(HAnimSite1708)
HAnimSite1709 = x3d.HAnimSite()
HAnimSite1709.USE = "hanim_l_suprapatella"

HAnimHumanoid38.sites.append(HAnimSite1709)
HAnimSite1710 = x3d.HAnimSite()
HAnimSite1710.USE = "hanim_l_lateral_malleolus"

HAnimHumanoid38.sites.append(HAnimSite1710)
HAnimSite1711 = x3d.HAnimSite()
HAnimSite1711.USE = "hanim_l_medial_malleolus"

HAnimHumanoid38.sites.append(HAnimSite1711)
HAnimSite1712 = x3d.HAnimSite()
HAnimSite1712.USE = "hanim_l_tibiale"

HAnimHumanoid38.sites.append(HAnimSite1712)
HAnimSite1713 = x3d.HAnimSite()
HAnimSite1713.USE = "hanim_l_calcaneus_posterior"

HAnimHumanoid38.sites.append(HAnimSite1713)
HAnimSite1714 = x3d.HAnimSite()
HAnimSite1714.USE = "hanim_l_sphyrion"

HAnimHumanoid38.sites.append(HAnimSite1714)
HAnimSite1715 = x3d.HAnimSite()
HAnimSite1715.USE = "hanim_l_metatarsal_phalanx_1"

HAnimHumanoid38.sites.append(HAnimSite1715)
HAnimSite1716 = x3d.HAnimSite()
HAnimSite1716.USE = "hanim_l_metatarsal_phalanx_5"

HAnimHumanoid38.sites.append(HAnimSite1716)
HAnimSite1717 = x3d.HAnimSite()
HAnimSite1717.USE = "hanim_l_tarsal_distal_phalanx_1_tip"

HAnimHumanoid38.sites.append(HAnimSite1717)
HAnimSite1718 = x3d.HAnimSite()
HAnimSite1718.USE = "hanim_l_tarsal_distal_phalanx_2_tip"

HAnimHumanoid38.sites.append(HAnimSite1718)
HAnimSite1719 = x3d.HAnimSite()
HAnimSite1719.USE = "hanim_l_tarsal_distal_phalanx_3_tip"

HAnimHumanoid38.sites.append(HAnimSite1719)
HAnimSite1720 = x3d.HAnimSite()
HAnimSite1720.USE = "hanim_l_tarsal_distal_phalanx_4_tip"

HAnimHumanoid38.sites.append(HAnimSite1720)
HAnimSite1721 = x3d.HAnimSite()
HAnimSite1721.USE = "hanim_l_tarsal_distal_phalanx_5_tip"

HAnimHumanoid38.sites.append(HAnimSite1721)
HAnimSite1722 = x3d.HAnimSite()
HAnimSite1722.USE = "hanim_r_femoral_lateral_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite1722)
HAnimSite1723 = x3d.HAnimSite()
HAnimSite1723.USE = "hanim_r_femoral_medial_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite1723)
HAnimSite1724 = x3d.HAnimSite()
HAnimSite1724.USE = "hanim_r_knee_crease"

HAnimHumanoid38.sites.append(HAnimSite1724)
HAnimSite1725 = x3d.HAnimSite()
HAnimSite1725.USE = "hanim_r_suprapatella"

HAnimHumanoid38.sites.append(HAnimSite1725)
HAnimSite1726 = x3d.HAnimSite()
HAnimSite1726.USE = "hanim_r_lateral_malleolus"

HAnimHumanoid38.sites.append(HAnimSite1726)
HAnimSite1727 = x3d.HAnimSite()
HAnimSite1727.USE = "hanim_r_medial_malleolus"

HAnimHumanoid38.sites.append(HAnimSite1727)
HAnimSite1728 = x3d.HAnimSite()
HAnimSite1728.USE = "hanim_r_tibiale"

HAnimHumanoid38.sites.append(HAnimSite1728)
HAnimSite1729 = x3d.HAnimSite()
HAnimSite1729.USE = "hanim_r_calcaneus_posterior"

HAnimHumanoid38.sites.append(HAnimSite1729)
HAnimSite1730 = x3d.HAnimSite()
HAnimSite1730.USE = "hanim_r_sphyrion"

HAnimHumanoid38.sites.append(HAnimSite1730)
HAnimSite1731 = x3d.HAnimSite()
HAnimSite1731.USE = "hanim_r_metatarsal_phalanx_1"

HAnimHumanoid38.sites.append(HAnimSite1731)
HAnimSite1732 = x3d.HAnimSite()
HAnimSite1732.USE = "hanim_r_metatarsal_phalanx_5"

HAnimHumanoid38.sites.append(HAnimSite1732)
HAnimSite1733 = x3d.HAnimSite()
HAnimSite1733.USE = "hanim_r_tarsal_distal_phalanx_1_tip"

HAnimHumanoid38.sites.append(HAnimSite1733)
HAnimSite1734 = x3d.HAnimSite()
HAnimSite1734.USE = "hanim_r_tarsal_distal_phalanx_2_tip"

HAnimHumanoid38.sites.append(HAnimSite1734)
HAnimSite1735 = x3d.HAnimSite()
HAnimSite1735.USE = "hanim_r_tarsal_distal_phalanx_3_tip"

HAnimHumanoid38.sites.append(HAnimSite1735)
HAnimSite1736 = x3d.HAnimSite()
HAnimSite1736.USE = "hanim_r_tarsal_distal_phalanx_4_tip"

HAnimHumanoid38.sites.append(HAnimSite1736)
HAnimSite1737 = x3d.HAnimSite()
HAnimSite1737.USE = "hanim_r_tarsal_distal_phalanx_5_tip"

HAnimHumanoid38.sites.append(HAnimSite1737)
HAnimSite1738 = x3d.HAnimSite()
HAnimSite1738.USE = "hanim_navel"

HAnimHumanoid38.sites.append(HAnimSite1738)
HAnimSite1739 = x3d.HAnimSite()
HAnimSite1739.USE = "hanim_waist_preferred_anterior"

HAnimHumanoid38.sites.append(HAnimSite1739)
HAnimSite1740 = x3d.HAnimSite()
HAnimSite1740.USE = "hanim_waist_preferred_posterior"

HAnimHumanoid38.sites.append(HAnimSite1740)
HAnimSite1741 = x3d.HAnimSite()
HAnimSite1741.USE = "hanim_l_rib10"

HAnimHumanoid38.sites.append(HAnimSite1741)
HAnimSite1742 = x3d.HAnimSite()
HAnimSite1742.USE = "hanim_r_rib10"

HAnimHumanoid38.sites.append(HAnimSite1742)
HAnimSite1743 = x3d.HAnimSite()
HAnimSite1743.USE = "hanim_spine_2_middle_back"

HAnimHumanoid38.sites.append(HAnimSite1743)
HAnimSite1744 = x3d.HAnimSite()
HAnimSite1744.USE = "hanim_substernale"

HAnimHumanoid38.sites.append(HAnimSite1744)
HAnimSite1745 = x3d.HAnimSite()
HAnimSite1745.USE = "hanim_l_thelion"

HAnimHumanoid38.sites.append(HAnimSite1745)
HAnimSite1746 = x3d.HAnimSite()
HAnimSite1746.USE = "hanim_r_thelion"

HAnimHumanoid38.sites.append(HAnimSite1746)
HAnimSite1747 = x3d.HAnimSite()
HAnimSite1747.USE = "hanim_l_chest_midsagittal_plane"

HAnimHumanoid38.sites.append(HAnimSite1747)
HAnimSite1748 = x3d.HAnimSite()
HAnimSite1748.USE = "hanim_mesosternale"

HAnimHumanoid38.sites.append(HAnimSite1748)
HAnimSite1749 = x3d.HAnimSite()
HAnimSite1749.USE = "hanim_r_chest_midsagittal_plane"

HAnimHumanoid38.sites.append(HAnimSite1749)
HAnimSite1750 = x3d.HAnimSite()
HAnimSite1750.USE = "hanim_rear_center_midsagittal_plane"

HAnimHumanoid38.sites.append(HAnimSite1750)
HAnimSite1751 = x3d.HAnimSite()
HAnimSite1751.USE = "hanim_spine_1_middle_back"

HAnimHumanoid38.sites.append(HAnimSite1751)
HAnimSite1752 = x3d.HAnimSite()
HAnimSite1752.USE = "hanim_cervicale"

HAnimHumanoid38.sites.append(HAnimSite1752)
HAnimSite1753 = x3d.HAnimSite()
HAnimSite1753.USE = "hanim_suprasternale"

HAnimHumanoid38.sites.append(HAnimSite1753)
HAnimSite1754 = x3d.HAnimSite()
HAnimSite1754.USE = "hanim_l_neck_base"

HAnimHumanoid38.sites.append(HAnimSite1754)
HAnimSite1755 = x3d.HAnimSite()
HAnimSite1755.USE = "hanim_r_neck_base"

HAnimHumanoid38.sites.append(HAnimSite1755)
HAnimSite1756 = x3d.HAnimSite()
HAnimSite1756.USE = "hanim_adams_apple"

HAnimHumanoid38.sites.append(HAnimSite1756)
HAnimSite1757 = x3d.HAnimSite()
HAnimSite1757.USE = "hanim_glabella"

HAnimHumanoid38.sites.append(HAnimSite1757)
HAnimSite1758 = x3d.HAnimSite()
HAnimSite1758.USE = "hanim_l_ectocanthus"

HAnimHumanoid38.sites.append(HAnimSite1758)
HAnimSite1759 = x3d.HAnimSite()
HAnimSite1759.USE = "hanim_l_infraorbitale"

HAnimHumanoid38.sites.append(HAnimSite1759)
HAnimSite1760 = x3d.HAnimSite()
HAnimSite1760.USE = "hanim_l_tragion"

HAnimHumanoid38.sites.append(HAnimSite1760)
HAnimSite1761 = x3d.HAnimSite()
HAnimSite1761.USE = "hanim_nuchale"

HAnimHumanoid38.sites.append(HAnimSite1761)
HAnimSite1762 = x3d.HAnimSite()
HAnimSite1762.USE = "hanim_opisthocranion"

HAnimHumanoid38.sites.append(HAnimSite1762)
HAnimSite1763 = x3d.HAnimSite()
HAnimSite1763.USE = "hanim_r_ectocanthus"

HAnimHumanoid38.sites.append(HAnimSite1763)
HAnimSite1764 = x3d.HAnimSite()
HAnimSite1764.USE = "hanim_r_infraorbitale"

HAnimHumanoid38.sites.append(HAnimSite1764)
HAnimSite1765 = x3d.HAnimSite()
HAnimSite1765.USE = "hanim_r_tragion"

HAnimHumanoid38.sites.append(HAnimSite1765)
HAnimSite1766 = x3d.HAnimSite()
HAnimSite1766.USE = "hanim_sellion"

HAnimHumanoid38.sites.append(HAnimSite1766)
HAnimSite1767 = x3d.HAnimSite()
HAnimSite1767.USE = "hanim_skull_vertex"

HAnimHumanoid38.sites.append(HAnimSite1767)
HAnimSite1768 = x3d.HAnimSite()
HAnimSite1768.USE = "hanim_l_acromion"

HAnimHumanoid38.sites.append(HAnimSite1768)
HAnimSite1769 = x3d.HAnimSite()
HAnimSite1769.USE = "hanim_l_axilla_distal"

HAnimHumanoid38.sites.append(HAnimSite1769)
HAnimSite1770 = x3d.HAnimSite()
HAnimSite1770.USE = "hanim_l_axilla_posterior_folds"

HAnimHumanoid38.sites.append(HAnimSite1770)
HAnimSite1771 = x3d.HAnimSite()
HAnimSite1771.USE = "hanim_l_axilla_proximal"

HAnimHumanoid38.sites.append(HAnimSite1771)
HAnimSite1772 = x3d.HAnimSite()
HAnimSite1772.USE = "hanim_l_clavicale"

HAnimHumanoid38.sites.append(HAnimSite1772)
HAnimSite1773 = x3d.HAnimSite()
HAnimSite1773.USE = "hanim_l_bideltoid"

HAnimHumanoid38.sites.append(HAnimSite1773)
HAnimSite1774 = x3d.HAnimSite()
HAnimSite1774.USE = "hanim_l_humeral_lateral_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite1774)
HAnimSite1775 = x3d.HAnimSite()
HAnimSite1775.USE = "hanim_l_humeral_medial_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite1775)
HAnimSite1776 = x3d.HAnimSite()
HAnimSite1776.USE = "hanim_l_olecranon"

HAnimHumanoid38.sites.append(HAnimSite1776)
HAnimSite1777 = x3d.HAnimSite()
HAnimSite1777.USE = "hanim_l_radial_styloid"

HAnimHumanoid38.sites.append(HAnimSite1777)
HAnimSite1778 = x3d.HAnimSite()
HAnimSite1778.USE = "hanim_l_radiale"

HAnimHumanoid38.sites.append(HAnimSite1778)
HAnimSite1779 = x3d.HAnimSite()
HAnimSite1779.USE = "hanim_l_ulnar_styloid"

HAnimHumanoid38.sites.append(HAnimSite1779)
HAnimSite1780 = x3d.HAnimSite()
HAnimSite1780.USE = "hanim_l_metacarpal_phalanx_2"

HAnimHumanoid38.sites.append(HAnimSite1780)
HAnimSite1781 = x3d.HAnimSite()
HAnimSite1781.USE = "hanim_l_metacarpal_phalanx_3"

HAnimHumanoid38.sites.append(HAnimSite1781)
HAnimSite1782 = x3d.HAnimSite()
HAnimSite1782.USE = "hanim_l_metacarpal_phalanx_5"

HAnimHumanoid38.sites.append(HAnimSite1782)
HAnimSite1783 = x3d.HAnimSite()
HAnimSite1783.USE = "hanim_r_acromion"

HAnimHumanoid38.sites.append(HAnimSite1783)
HAnimSite1784 = x3d.HAnimSite()
HAnimSite1784.USE = "hanim_r_axilla_distal"

HAnimHumanoid38.sites.append(HAnimSite1784)
HAnimSite1785 = x3d.HAnimSite()
HAnimSite1785.USE = "hanim_r_axilla_posterior_folds"

HAnimHumanoid38.sites.append(HAnimSite1785)
HAnimSite1786 = x3d.HAnimSite()
HAnimSite1786.USE = "hanim_r_axilla_proximal"

HAnimHumanoid38.sites.append(HAnimSite1786)
HAnimSite1787 = x3d.HAnimSite()
HAnimSite1787.USE = "hanim_r_clavicale"

HAnimHumanoid38.sites.append(HAnimSite1787)
HAnimSite1788 = x3d.HAnimSite()
HAnimSite1788.USE = "hanim_r_bideltoid"

HAnimHumanoid38.sites.append(HAnimSite1788)
HAnimSite1789 = x3d.HAnimSite()
HAnimSite1789.USE = "hanim_r_humeral_lateral_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite1789)
HAnimSite1790 = x3d.HAnimSite()
HAnimSite1790.USE = "hanim_r_humeral_medial_epicondyles"

HAnimHumanoid38.sites.append(HAnimSite1790)
HAnimSite1791 = x3d.HAnimSite()
HAnimSite1791.USE = "hanim_r_olecranon"

HAnimHumanoid38.sites.append(HAnimSite1791)
HAnimSite1792 = x3d.HAnimSite()
HAnimSite1792.USE = "hanim_r_radial_styloid"

HAnimHumanoid38.sites.append(HAnimSite1792)
HAnimSite1793 = x3d.HAnimSite()
HAnimSite1793.USE = "hanim_r_radiale"

HAnimHumanoid38.sites.append(HAnimSite1793)
HAnimSite1794 = x3d.HAnimSite()
HAnimSite1794.USE = "hanim_r_ulnar_styloid"

HAnimHumanoid38.sites.append(HAnimSite1794)
HAnimSite1795 = x3d.HAnimSite()
HAnimSite1795.USE = "hanim_r_metacarpal_phalanx_2"

HAnimHumanoid38.sites.append(HAnimSite1795)
HAnimSite1796 = x3d.HAnimSite()
HAnimSite1796.USE = "hanim_r_metacarpal_phalanx_3"

HAnimHumanoid38.sites.append(HAnimSite1796)
HAnimSite1797 = x3d.HAnimSite()
HAnimSite1797.USE = "hanim_r_metacarpal_phalanx_5"

HAnimHumanoid38.sites.append(HAnimSite1797)

Scene11.children.append(HAnimHumanoid38)

X3D0.Scene = Scene11
f = open("../data/Humanoid3.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/Humanoid3.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
