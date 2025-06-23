import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("HAnim")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("JohnJoint20.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("identifier")
meta4.setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint20.x3d")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("description")
meta5.setContent("An attempt at a standard LOA-4 skeleton")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("generator")
meta6.setContent("h2.pl")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("20 Jan 2023")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("creator")
meta8.setContent("John Carlson")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("created")
meta9.setContent("9 November 2020")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("license")
meta10.setContent("../license.html")

head1.addMeta(meta10)

X3D0.setHead(head1)
Scene11 = x3d.Scene()
Transform12 = x3d.Transform()
#DEF for markerfor XYZ axes
Shape13 = x3d.Shape()
Shape13.setDEF("AxisLinesShape")
#RGB lines showing XYZ axes
IndexedLineSet14 = x3d.IndexedLineSet()
IndexedLineSet14.setColorIndex([0,1,2])
IndexedLineSet14.setColorPerVertex(False)
IndexedLineSet14.setCoordIndex([0,1,-1,0,2,-1,0,3,-1])
Coordinate15 = x3d.Coordinate()
Coordinate15.setPoint([0,0,0,0.1,0,0,0,0.1,0,0,0,0.1])

IndexedLineSet14.setCoord(Coordinate15)
Color16 = x3d.Color()
Color16.setColor([1,0,0,0,0.6,0,0,0,1])

IndexedLineSet14.setColor(Color16)

Shape13.setGeometry(IndexedLineSet14)

Transform12.addChild(Shape13)

Scene11.addChildren(Transform12)
Group17 = x3d.Group()
#DEFS for markers of skeleton joints, segments, and sites
Transform18 = x3d.Transform()
Transform19 = x3d.Transform()
Transform19.setTranslation([0,2,0])
Shape20 = x3d.Shape()
Shape20.setDEF("HAnimRootShape")
Sphere21 = x3d.Sphere()
Sphere21.setRadius(0.02)

Shape20.setGeometry(Sphere21)
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.setDEF("HAnimRootMaterial")
Material23.setDiffuseColor([0.8,0,0])
Material23.setTransparency(0.3)

Appearance22.setMaterial(Material23)

Shape20.setAppearance(Appearance22)

Transform19.addChild(Shape20)

Transform18.addChildren(Transform19)
Transform24 = x3d.Transform()
Transform24.setTranslation([0,2.1,0])
Shape25 = x3d.Shape()
Shape25.setDEF("HAnimJointShape")
Sphere26 = x3d.Sphere()
Sphere26.setRadius(0.02)

Shape25.setGeometry(Sphere26)
Appearance27 = x3d.Appearance()
Material28 = x3d.Material()
Material28.setDEF("HAnimJointMaterial")
Material28.setDiffuseColor([0,0,0.8])
Material28.setTransparency(0.3)

Appearance27.setMaterial(Material28)

Shape25.setAppearance(Appearance27)

Transform24.addChild(Shape25)

Transform18.addChildren(Transform24)
Transform29 = x3d.Transform()
Transform29.setTranslation([0,2.05,0])
Shape30 = x3d.Shape()
Shape30.setDEF("HAnimSegmentLine")
LineSet31 = x3d.LineSet()
LineSet31.setVertexCount([2])
ColorRGBA32 = x3d.ColorRGBA()
ColorRGBA32.setDEF("HAnimSegmentLineColorRGBA")
ColorRGBA32.setColor([1,1,0,1,1,1,0,0.1])

LineSet31.setColor(ColorRGBA32)
Coordinate33 = x3d.Coordinate()
Coordinate33.setPoint([-0.05,0,0,0.05,0,0])

LineSet31.setCoord(Coordinate33)

Shape30.setGeometry(LineSet31)

Transform29.addChild(Shape30)

Transform18.addChildren(Transform29)
Transform34 = x3d.Transform()
Transform34.setTranslation([0,2.1,0])
Shape35 = x3d.Shape()
Shape35.setDEF("HAnimSiteShape")
IndexedFaceSet36 = x3d.IndexedFaceSet()
IndexedFaceSet36.setDEF("DiamondIFS")
IndexedFaceSet36.setCreaseAngle(0.5)
IndexedFaceSet36.setSolid(False)
IndexedFaceSet36.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
ColorRGBA37 = x3d.ColorRGBA()
ColorRGBA37.setDEF("HAnimSiteColorRGBA")
ColorRGBA37.setColor([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])

IndexedFaceSet36.setColor(ColorRGBA37)
Coordinate38 = x3d.Coordinate()
Coordinate38.setPoint([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])

IndexedFaceSet36.setCoord(Coordinate38)

Shape35.setGeometry(IndexedFaceSet36)
Appearance39 = x3d.Appearance()
Material40 = x3d.Material()
Material40.setDiffuseColor([1,1,0])
Material40.setTransparency(0.3)

Appearance39.setMaterial(Material40)

Shape35.setAppearance(Appearance39)

Transform34.addChild(Shape35)

Transform18.addChildren(Transform34)

Group17.addChildren(Transform18)

Scene11.addChildren(Group17)
NavigationInfo41 = x3d.NavigationInfo()
NavigationInfo41.setSpeed(1.5)

Scene11.addChildren(NavigationInfo41)
Viewpoint42 = x3d.Viewpoint()
Viewpoint42.setDescription("default")

Scene11.addChildren(Viewpoint42)
HAnimHumanoid43 = x3d.HAnimHumanoid()
HAnimHumanoid43.setName("HAnim")
HAnimHumanoid43.setDEF("hanim_HAnim")
HAnimHumanoid43.setInfo(["humanoidVersion=2.0"])
HAnimHumanoid43.setVersion("2.0")
#<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
#</LOD>
Shape44 = x3d.Shape()
Shape44.setDEF("SkinShape")
Shape44.setContainerFieldOverride("skin")
IndexedFaceSet45 = x3d.IndexedFaceSet()
IndexedFaceSet45.setCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1])
IndexedFaceSet45.setCreaseAngle(3.1)
Coordinate46 = x3d.Coordinate()
Coordinate46.setDEF("TheSkinCoord")
Coordinate46.setPoint([0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168])

IndexedFaceSet45.setCoord(Coordinate46)
Color47 = x3d.Color()
Color47.setColor([1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1])

IndexedFaceSet45.setColor(Color47)

Shape44.setGeometry(IndexedFaceSet45)
Appearance48 = x3d.Appearance()
Appearance48.setDEF("SkinAppearance")
ImageTexture49 = x3d.ImageTexture()
ImageTexture49.setDEF("zBlueSpiralBkg2")
ImageTexture49.setUrl(["../resources/images/zBlueSpiralBkg2.gif","../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"])

Appearance48.setTexture(ImageTexture49)
Material50 = x3d.Material()
Material50.setDEF("SkinMaterial")
Material50.setAmbientIntensity(0.6)
Material50.setDiffuseColor([1,1,1])
Material50.setShininess(0.6)
Material50.setTransparency(0.2)

Appearance48.setMaterial(Material50)

Shape44.setAppearance(Appearance48)

HAnimHumanoid43.addSkin(Shape44)
Coordinate51 = x3d.Coordinate()
Coordinate51.setContainerFieldOverride("skinCoord")
Coordinate51.setUSE("TheSkinCoord")

HAnimHumanoid43.setSkinCoord(Coordinate51)
HAnimJoint52 = x3d.HAnimJoint()
HAnimJoint52.setName("humanoid_root")
HAnimJoint52.setDEF("hanim_humanoid_root")
HAnimJoint52.setCenter([0,0.824,0.0277])
HAnimJoint52.setUlimit([0,0,0])
HAnimJoint52.setLlimit([0,0,0])
HAnimJoint52.setContainerFieldOverride("skeleton")
HAnimSegment53 = x3d.HAnimSegment()
HAnimSegment53.setName("sacrum")
HAnimSegment53.setDEF("hanim_sacrum")
HAnimDisplacer54 = x3d.HAnimDisplacer()
HAnimDisplacer54.setName("sacrum_feature")
HAnimDisplacer54.setCoordIndex([0])
HAnimDisplacer54.setDisplacements([0,0,0])

HAnimSegment53.addDisplacers(HAnimDisplacer54)
HAnimDisplacer55 = x3d.HAnimDisplacer()
HAnimDisplacer55.setName("sacrum_config")
HAnimDisplacer55.setCoordIndex([0])
HAnimDisplacer55.setDisplacements([0,0,0])

HAnimSegment53.addDisplacers(HAnimDisplacer55)
Transform56 = x3d.Transform()
#Empty Transform
Transform57 = x3d.Transform()
#Empty Transform
Shape58 = x3d.Shape()
Shape58.setUSE("HAnimJointShape")

Transform57.addChild(Shape58)

Transform56.addChildren(Transform57)

HAnimSegment53.addChildren(Transform56)
Shape59 = x3d.Shape()
LineSet60 = x3d.LineSet()
LineSet60.setVertexCount([2])
Coordinate61 = x3d.Coordinate()
Coordinate61.setPoint([0,0.824,0.0277,0,0.9149,0.0016])

LineSet60.setCoord(Coordinate61)
#from humanoid_root to sacroiliac vertices 2
ColorRGBA62 = x3d.ColorRGBA()
ColorRGBA62.setUSE("HAnimSegmentLineColorRGBA")

LineSet60.setColor(ColorRGBA62)

Shape59.setGeometry(LineSet60)

HAnimSegment53.addChildren(Shape59)
HAnimSite63 = x3d.HAnimSite()
HAnimSite63.setName("buttocks_standing_wall_contact_point_pt")
HAnimSite63.setDEF("hanim_buttocks_standing_wall_contact_point_pt")
HAnimSite63.setTranslation([0,1,0])
TouchSensor64 = x3d.TouchSensor()
TouchSensor64.setDescription("HAnimSite buttocks_standing_wall_contact_point_pt")

HAnimSite63.addChildren(TouchSensor64)
Shape65 = x3d.Shape()
Shape65.setUSE("HAnimSiteShape")

HAnimSite63.addChildren(Shape65)

HAnimSegment53.addChildren(HAnimSite63)
HAnimSite66 = x3d.HAnimSite()
HAnimSite66.setName("crotch_pt")
HAnimSite66.setDEF("hanim_crotch_pt")
HAnimSite66.setTranslation([0.0034,0.8266,0.0257])
TouchSensor67 = x3d.TouchSensor()
TouchSensor67.setDescription("HAnimSite crotch_pt")

HAnimSite66.addChildren(TouchSensor67)
Shape68 = x3d.Shape()
Shape68.setUSE("HAnimSiteShape")

HAnimSite66.addChildren(Shape68)

HAnimSegment53.addChildren(HAnimSite66)
HAnimSite69 = x3d.HAnimSite()
HAnimSite69.setName("l_asis_pt")
HAnimSite69.setDEF("hanim_l_asis_pt")
HAnimSite69.setTranslation([0.0925,0.9983,0.1052])
TouchSensor70 = x3d.TouchSensor()
TouchSensor70.setDescription("HAnimSite l_asis_pt")

HAnimSite69.addChildren(TouchSensor70)
Shape71 = x3d.Shape()
Shape71.setUSE("HAnimSiteShape")

HAnimSite69.addChildren(Shape71)

HAnimSegment53.addChildren(HAnimSite69)
HAnimSite72 = x3d.HAnimSite()
HAnimSite72.setName("l_iliocristale_pt")
HAnimSite72.setDEF("hanim_l_iliocristale_pt")
HAnimSite72.setTranslation([0.1612,1.0537,0.0008])
TouchSensor73 = x3d.TouchSensor()
TouchSensor73.setDescription("HAnimSite l_iliocristale_pt")

HAnimSite72.addChildren(TouchSensor73)
Shape74 = x3d.Shape()
Shape74.setUSE("HAnimSiteShape")

HAnimSite72.addChildren(Shape74)

HAnimSegment53.addChildren(HAnimSite72)
HAnimSite75 = x3d.HAnimSite()
HAnimSite75.setName("l_psis_pt")
HAnimSite75.setDEF("hanim_l_psis_pt")
HAnimSite75.setTranslation([0.0774,1.019,-0.1151])
TouchSensor76 = x3d.TouchSensor()
TouchSensor76.setDescription("HAnimSite l_psis_pt")

HAnimSite75.addChildren(TouchSensor76)
Shape77 = x3d.Shape()
Shape77.setUSE("HAnimSiteShape")

HAnimSite75.addChildren(Shape77)

HAnimSegment53.addChildren(HAnimSite75)
HAnimSite78 = x3d.HAnimSite()
HAnimSite78.setName("l_trochanterion_pt")
HAnimSite78.setDEF("hanim_l_trochanterion_pt")
HAnimSite78.setTranslation([0.1677,0.8336,0.0303])
TouchSensor79 = x3d.TouchSensor()
TouchSensor79.setDescription("HAnimSite l_trochanterion_pt")

HAnimSite78.addChildren(TouchSensor79)
Shape80 = x3d.Shape()
Shape80.setUSE("HAnimSiteShape")

HAnimSite78.addChildren(Shape80)

HAnimSegment53.addChildren(HAnimSite78)
HAnimSite81 = x3d.HAnimSite()
HAnimSite81.setName("r_asis_pt")
HAnimSite81.setDEF("hanim_r_asis_pt")
HAnimSite81.setTranslation([-0.0887,1.0021,0.1112])
TouchSensor82 = x3d.TouchSensor()
TouchSensor82.setDescription("HAnimSite r_asis_pt")

HAnimSite81.addChildren(TouchSensor82)
Shape83 = x3d.Shape()
Shape83.setUSE("HAnimSiteShape")

HAnimSite81.addChildren(Shape83)

HAnimSegment53.addChildren(HAnimSite81)
HAnimSite84 = x3d.HAnimSite()
HAnimSite84.setName("r_iliocristale_pt")
HAnimSite84.setDEF("hanim_r_iliocristale_pt")
HAnimSite84.setTranslation([-0.1525,1.0628,0.0035])
TouchSensor85 = x3d.TouchSensor()
TouchSensor85.setDescription("HAnimSite r_iliocristale_pt")

HAnimSite84.addChildren(TouchSensor85)
Shape86 = x3d.Shape()
Shape86.setUSE("HAnimSiteShape")

HAnimSite84.addChildren(Shape86)

HAnimSegment53.addChildren(HAnimSite84)
HAnimSite87 = x3d.HAnimSite()
HAnimSite87.setName("r_psis_pt")
HAnimSite87.setDEF("hanim_r_psis_pt")
HAnimSite87.setTranslation([-0.0716,1.019,-0.1138])
TouchSensor88 = x3d.TouchSensor()
TouchSensor88.setDescription("HAnimSite r_psis_pt")

HAnimSite87.addChildren(TouchSensor88)
Shape89 = x3d.Shape()
Shape89.setUSE("HAnimSiteShape")

HAnimSite87.addChildren(Shape89)

HAnimSegment53.addChildren(HAnimSite87)
HAnimSite90 = x3d.HAnimSite()
HAnimSite90.setName("r_trochanterion_pt")
HAnimSite90.setDEF("hanim_r_trochanterion_pt")
HAnimSite90.setTranslation([-0.1689,0.8419,0.0352])
TouchSensor91 = x3d.TouchSensor()
TouchSensor91.setDescription("HAnimSite r_trochanterion_pt")

HAnimSite90.addChildren(TouchSensor91)
Shape92 = x3d.Shape()
Shape92.setUSE("HAnimSiteShape")

HAnimSite90.addChildren(Shape92)

HAnimSegment53.addChildren(HAnimSite90)
Shape93 = x3d.Shape()
LineSet94 = x3d.LineSet()
LineSet94.setVertexCount([2])
Coordinate95 = x3d.Coordinate()
Coordinate95.setPoint([0,0.824,0.0277,0.0028,1.0568,-0.0776])

LineSet94.setCoord(Coordinate95)
#from humanoid_root to vl5 vertices 2
ColorRGBA96 = x3d.ColorRGBA()
ColorRGBA96.setUSE("HAnimSegmentLineColorRGBA")

LineSet94.setColor(ColorRGBA96)

Shape93.setGeometry(LineSet94)

HAnimSegment53.addChildren(Shape93)
HAnimSite97 = x3d.HAnimSite()
HAnimSite97.setName("navel_pt")
HAnimSite97.setDEF("hanim_navel_pt")
HAnimSite97.setTranslation([0.0069,1.0966,0.1017])
TouchSensor98 = x3d.TouchSensor()
TouchSensor98.setDescription("HAnimSite navel_pt")

HAnimSite97.addChildren(TouchSensor98)
Shape99 = x3d.Shape()
Shape99.setUSE("HAnimSiteShape")

HAnimSite97.addChildren(Shape99)

HAnimSegment53.addChildren(HAnimSite97)
HAnimSite100 = x3d.HAnimSite()
HAnimSite100.setName("waist_preferred_anterior_pt")
HAnimSite100.setDEF("hanim_waist_preferred_anterior_pt")
HAnimSite100.setTranslation([0,1,0])
TouchSensor101 = x3d.TouchSensor()
TouchSensor101.setDescription("HAnimSite waist_preferred_anterior_pt")

HAnimSite100.addChildren(TouchSensor101)
Shape102 = x3d.Shape()
Shape102.setUSE("HAnimSiteShape")

HAnimSite100.addChildren(Shape102)

HAnimSegment53.addChildren(HAnimSite100)
HAnimSite103 = x3d.HAnimSite()
HAnimSite103.setName("waist_preferred_posterior_pt")
HAnimSite103.setDEF("hanim_waist_preferred_posterior_pt")
HAnimSite103.setTranslation([0.29,1.0915,-0.1091])
TouchSensor104 = x3d.TouchSensor()
TouchSensor104.setDescription("HAnimSite waist_preferred_posterior_pt")

HAnimSite103.addChildren(TouchSensor104)
Shape105 = x3d.Shape()
Shape105.setUSE("HAnimSiteShape")

HAnimSite103.addChildren(Shape105)

HAnimSegment53.addChildren(HAnimSite103)

HAnimJoint52.addChildren(HAnimSegment53)
HAnimJoint106 = x3d.HAnimJoint()
HAnimJoint106.setName("sacroiliac")
HAnimJoint106.setDEF("hanim_sacroiliac")
HAnimJoint106.setCenter([0,0.9149,0.0016])
HAnimJoint106.setUlimit([0,0,0])
HAnimJoint106.setLlimit([0,0,0])
HAnimSegment107 = x3d.HAnimSegment()
HAnimSegment107.setName("pelvis")
HAnimSegment107.setDEF("hanim_pelvis")
Transform108 = x3d.Transform()
#Empty Transform
Transform109 = x3d.Transform()
#Empty Transform
Shape110 = x3d.Shape()
Shape110.setUSE("HAnimJointShape")

Transform109.addChild(Shape110)

Transform108.addChildren(Transform109)

HAnimSegment107.addChildren(Transform108)
Shape111 = x3d.Shape()
LineSet112 = x3d.LineSet()
LineSet112.setVertexCount([2])
Coordinate113 = x3d.Coordinate()
Coordinate113.setPoint([0,0.9149,0.0016,0.0961,0.9124,-0.0001])

LineSet112.setCoord(Coordinate113)
#from sacroiliac to l_hip vertices 2
ColorRGBA114 = x3d.ColorRGBA()
ColorRGBA114.setUSE("HAnimSegmentLineColorRGBA")

LineSet112.setColor(ColorRGBA114)

Shape111.setGeometry(LineSet112)

HAnimSegment107.addChildren(Shape111)
HAnimSite115 = x3d.HAnimSite()
HAnimSite115.setName("l_femoral_lateral_epicondyles_pt")
HAnimSite115.setDEF("hanim_l_femoral_lateral_epicondyles_pt")
HAnimSite115.setTranslation([0.1598,0.4967,0.0297])
TouchSensor116 = x3d.TouchSensor()
TouchSensor116.setDescription("HAnimSite l_femoral_lateral_epicondyles_pt")

HAnimSite115.addChildren(TouchSensor116)
Shape117 = x3d.Shape()
Shape117.setUSE("HAnimSiteShape")

HAnimSite115.addChildren(Shape117)

HAnimSegment107.addChildren(HAnimSite115)
HAnimSite118 = x3d.HAnimSite()
HAnimSite118.setName("l_femoral_medial_epicondyles_pt")
HAnimSite118.setDEF("hanim_l_femoral_medial_epicondyles_pt")
HAnimSite118.setTranslation([0.0398,0.4946,0.0303])
TouchSensor119 = x3d.TouchSensor()
TouchSensor119.setDescription("HAnimSite l_femoral_medial_epicondyles_pt")

HAnimSite118.addChildren(TouchSensor119)
Shape120 = x3d.Shape()
Shape120.setUSE("HAnimSiteShape")

HAnimSite118.addChildren(Shape120)

HAnimSegment107.addChildren(HAnimSite118)
HAnimSite121 = x3d.HAnimSite()
HAnimSite121.setName("l_knee_crease_pt")
HAnimSite121.setDEF("hanim_l_knee_crease_pt")
HAnimSite121.setTranslation([0.0993,0.4881,-0.0309])
TouchSensor122 = x3d.TouchSensor()
TouchSensor122.setDescription("HAnimSite l_knee_crease_pt")

HAnimSite121.addChildren(TouchSensor122)
Shape123 = x3d.Shape()
Shape123.setUSE("HAnimSiteShape")

HAnimSite121.addChildren(Shape123)

HAnimSegment107.addChildren(HAnimSite121)
HAnimSite124 = x3d.HAnimSite()
HAnimSite124.setName("l_suprapatella_pt")
HAnimSite124.setDEF("hanim_l_suprapatella_pt")
HAnimSite124.setTranslation([0,1,0])
TouchSensor125 = x3d.TouchSensor()
TouchSensor125.setDescription("HAnimSite l_suprapatella_pt")

HAnimSite124.addChildren(TouchSensor125)
Shape126 = x3d.Shape()
Shape126.setUSE("HAnimSiteShape")

HAnimSite124.addChildren(Shape126)

HAnimSegment107.addChildren(HAnimSite124)
Shape127 = x3d.Shape()
LineSet128 = x3d.LineSet()
LineSet128.setVertexCount([2])
Coordinate129 = x3d.Coordinate()
Coordinate129.setPoint([0,0.9149,0.0016,-0.095,0.9171,0.0029])

LineSet128.setCoord(Coordinate129)
#from sacroiliac to r_hip vertices 2
ColorRGBA130 = x3d.ColorRGBA()
ColorRGBA130.setUSE("HAnimSegmentLineColorRGBA")

LineSet128.setColor(ColorRGBA130)

Shape127.setGeometry(LineSet128)

HAnimSegment107.addChildren(Shape127)
HAnimSite131 = x3d.HAnimSite()
HAnimSite131.setName("r_femoral_lateral_epicondyles_pt")
HAnimSite131.setDEF("hanim_r_femoral_lateral_epicondyles_pt")
HAnimSite131.setTranslation([-0.1421,0.4992,0.031])
TouchSensor132 = x3d.TouchSensor()
TouchSensor132.setDescription("HAnimSite r_femoral_lateral_epicondyles_pt")

HAnimSite131.addChildren(TouchSensor132)
Shape133 = x3d.Shape()
Shape133.setUSE("HAnimSiteShape")

HAnimSite131.addChildren(Shape133)

HAnimSegment107.addChildren(HAnimSite131)
HAnimSite134 = x3d.HAnimSite()
HAnimSite134.setName("r_femoral_medial_epicondyles_pt")
HAnimSite134.setDEF("hanim_r_femoral_medial_epicondyles_pt")
HAnimSite134.setTranslation([-0.0221,0.5014,0.0289])
TouchSensor135 = x3d.TouchSensor()
TouchSensor135.setDescription("HAnimSite r_femoral_medial_epicondyles_pt")

HAnimSite134.addChildren(TouchSensor135)
Shape136 = x3d.Shape()
Shape136.setUSE("HAnimSiteShape")

HAnimSite134.addChildren(Shape136)

HAnimSegment107.addChildren(HAnimSite134)
HAnimSite137 = x3d.HAnimSite()
HAnimSite137.setName("r_knee_crease_pt")
HAnimSite137.setDEF("hanim_r_knee_crease_pt")
HAnimSite137.setTranslation([-0.0825,0.4932,-0.0326])
TouchSensor138 = x3d.TouchSensor()
TouchSensor138.setDescription("HAnimSite r_knee_crease_pt")

HAnimSite137.addChildren(TouchSensor138)
Shape139 = x3d.Shape()
Shape139.setUSE("HAnimSiteShape")

HAnimSite137.addChildren(Shape139)

HAnimSegment107.addChildren(HAnimSite137)
HAnimSite140 = x3d.HAnimSite()
HAnimSite140.setName("r_suprapatella_pt")
HAnimSite140.setDEF("hanim_r_suprapatella_pt")
HAnimSite140.setTranslation([0,1,0])
TouchSensor141 = x3d.TouchSensor()
TouchSensor141.setDescription("HAnimSite r_suprapatella_pt")

HAnimSite140.addChildren(TouchSensor141)
Shape142 = x3d.Shape()
Shape142.setUSE("HAnimSiteShape")

HAnimSite140.addChildren(Shape142)

HAnimSegment107.addChildren(HAnimSite140)

HAnimJoint106.addChildren(HAnimSegment107)
HAnimJoint143 = x3d.HAnimJoint()
HAnimJoint143.setName("l_hip")
HAnimJoint143.setDEF("hanim_l_hip")
HAnimJoint143.setCenter([0.0961,0.9124,-0.0001])
HAnimJoint143.setUlimit([0,0,0])
HAnimJoint143.setLlimit([0,0,0])
HAnimSegment144 = x3d.HAnimSegment()
HAnimSegment144.setName("l_thigh")
HAnimSegment144.setDEF("hanim_l_thigh")
Transform145 = x3d.Transform()
#Empty Transform
Transform146 = x3d.Transform()
#Empty Transform
Shape147 = x3d.Shape()
Shape147.setUSE("HAnimJointShape")

Transform146.addChild(Shape147)

Transform145.addChildren(Transform146)

HAnimSegment144.addChildren(Transform145)
Shape148 = x3d.Shape()
LineSet149 = x3d.LineSet()
LineSet149.setVertexCount([2])
Coordinate150 = x3d.Coordinate()
Coordinate150.setPoint([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308])

LineSet149.setCoord(Coordinate150)
#from l_hip to l_knee vertices 2
ColorRGBA151 = x3d.ColorRGBA()
ColorRGBA151.setUSE("HAnimSegmentLineColorRGBA")

LineSet149.setColor(ColorRGBA151)

Shape148.setGeometry(LineSet149)

HAnimSegment144.addChildren(Shape148)
HAnimSite152 = x3d.HAnimSite()
HAnimSite152.setName("l_lateral_malleolus_pt")
HAnimSite152.setDEF("hanim_l_lateral_malleolus_pt")
HAnimSite152.setTranslation([0.1308,0.0597,-0.1032])
TouchSensor153 = x3d.TouchSensor()
TouchSensor153.setDescription("HAnimSite l_lateral_malleolus_pt")

HAnimSite152.addChildren(TouchSensor153)
Shape154 = x3d.Shape()
Shape154.setUSE("HAnimSiteShape")

HAnimSite152.addChildren(Shape154)

HAnimSegment144.addChildren(HAnimSite152)
HAnimSite155 = x3d.HAnimSite()
HAnimSite155.setName("l_medial_malleolus_pt")
HAnimSite155.setDEF("hanim_l_medial_malleolus_pt")
HAnimSite155.setTranslation([0.089,0.0716,-0.0881])
TouchSensor156 = x3d.TouchSensor()
TouchSensor156.setDescription("HAnimSite l_medial_malleolus_pt")

HAnimSite155.addChildren(TouchSensor156)
Shape157 = x3d.Shape()
Shape157.setUSE("HAnimSiteShape")

HAnimSite155.addChildren(Shape157)

HAnimSegment144.addChildren(HAnimSite155)
HAnimSite158 = x3d.HAnimSite()
HAnimSite158.setName("l_tibiale_pt")
HAnimSite158.setDEF("hanim_l_tibiale_pt")
HAnimSite158.setTranslation([0,1,0])
TouchSensor159 = x3d.TouchSensor()
TouchSensor159.setDescription("HAnimSite l_tibiale_pt")

HAnimSite158.addChildren(TouchSensor159)
Shape160 = x3d.Shape()
Shape160.setUSE("HAnimSiteShape")

HAnimSite158.addChildren(Shape160)

HAnimSegment144.addChildren(HAnimSite158)

HAnimJoint143.addChildren(HAnimSegment144)
HAnimJoint161 = x3d.HAnimJoint()
HAnimJoint161.setName("l_knee")
HAnimJoint161.setDEF("hanim_l_knee")
HAnimJoint161.setCenter([0.104,0.4867,0.0308])
HAnimJoint161.setUlimit([0,0,0])
HAnimJoint161.setLlimit([0,0,0])
HAnimSegment162 = x3d.HAnimSegment()
HAnimSegment162.setName("l_calf")
HAnimSegment162.setDEF("hanim_l_calf")
Transform163 = x3d.Transform()
#Empty Transform
Transform164 = x3d.Transform()
#Empty Transform
Shape165 = x3d.Shape()
Shape165.setUSE("HAnimJointShape")

Transform164.addChild(Shape165)

Transform163.addChildren(Transform164)

HAnimSegment162.addChildren(Transform163)
Shape166 = x3d.Shape()
LineSet167 = x3d.LineSet()
LineSet167.setVertexCount([2])
Coordinate168 = x3d.Coordinate()
Coordinate168.setPoint([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736])

LineSet167.setCoord(Coordinate168)
#from l_knee to l_talocrural vertices 2
ColorRGBA169 = x3d.ColorRGBA()
ColorRGBA169.setUSE("HAnimSegmentLineColorRGBA")

LineSet167.setColor(ColorRGBA169)

Shape166.setGeometry(LineSet167)

HAnimSegment162.addChildren(Shape166)
HAnimSite170 = x3d.HAnimSite()
HAnimSite170.setName("l_calcaneus_posterior_pt")
HAnimSite170.setDEF("hanim_l_calcaneus_posterior_pt")
HAnimSite170.setTranslation([0.0974,0.0259,-0.1171])
TouchSensor171 = x3d.TouchSensor()
TouchSensor171.setDescription("HAnimSite l_calcaneus_posterior_pt")

HAnimSite170.addChildren(TouchSensor171)
Shape172 = x3d.Shape()
Shape172.setUSE("HAnimSiteShape")

HAnimSite170.addChildren(Shape172)

HAnimSegment162.addChildren(HAnimSite170)
HAnimSite173 = x3d.HAnimSite()
HAnimSite173.setName("l_sphyrion_pt")
HAnimSite173.setDEF("hanim_l_sphyrion_pt")
HAnimSite173.setTranslation([0.089,0.0575,-0.0943])
TouchSensor174 = x3d.TouchSensor()
TouchSensor174.setDescription("HAnimSite l_sphyrion_pt")

HAnimSite173.addChildren(TouchSensor174)
Shape175 = x3d.Shape()
Shape175.setUSE("HAnimSiteShape")

HAnimSite173.addChildren(Shape175)

HAnimSegment162.addChildren(HAnimSite173)

HAnimJoint161.addChildren(HAnimSegment162)
HAnimJoint176 = x3d.HAnimJoint()
HAnimJoint176.setName("l_talocrural")
HAnimJoint176.setDEF("hanim_l_talocrural")
HAnimJoint176.setCenter([0.1101,0.0656,-0.0736])
HAnimJoint176.setUlimit([0,0,0])
HAnimJoint176.setLlimit([0,0,0])
HAnimSegment177 = x3d.HAnimSegment()
HAnimSegment177.setName("l_talus")
HAnimSegment177.setDEF("hanim_l_talus")
Transform178 = x3d.Transform()
Transform178.setScale([0.15,0.15,0.15])
Transform178.setTranslation([0.08,0.06,-0.025])
Transform178.setRotation([1,0,0,-1.57])
#Transform left foot
Transform179 = x3d.Transform()
#Empty Transform left foot
Shape180 = x3d.Shape()
Shape180.setUSE("HAnimJointShape")

Transform179.addChild(Shape180)

Transform178.addChildren(Transform179)

HAnimSegment177.addChildren(Transform178)
Shape181 = x3d.Shape()
LineSet182 = x3d.LineSet()
LineSet182.setVertexCount([2])
Coordinate183 = x3d.Coordinate()
Coordinate183.setPoint([0.1101,0.0656,-0.0736,0,1,0])

LineSet182.setCoord(Coordinate183)
#from l_talocrural to l_talocalcaneonavicular vertices 2
ColorRGBA184 = x3d.ColorRGBA()
ColorRGBA184.setUSE("HAnimSegmentLineColorRGBA")

LineSet182.setColor(ColorRGBA184)

Shape181.setGeometry(LineSet182)

HAnimSegment177.addChildren(Shape181)
Shape185 = x3d.Shape()
LineSet186 = x3d.LineSet()
LineSet186.setVertexCount([2])
Coordinate187 = x3d.Coordinate()
Coordinate187.setPoint([0.1101,0.0656,-0.0736,0,1,0])

LineSet186.setCoord(Coordinate187)
#from l_talocrural to l_calcaneocuboid vertices 2
ColorRGBA188 = x3d.ColorRGBA()
ColorRGBA188.setUSE("HAnimSegmentLineColorRGBA")

LineSet186.setColor(ColorRGBA188)

Shape185.setGeometry(LineSet186)

HAnimSegment177.addChildren(Shape185)

HAnimJoint176.addChildren(HAnimSegment177)
HAnimJoint189 = x3d.HAnimJoint()
HAnimJoint189.setName("l_talocalcaneonavicular")
HAnimJoint189.setDEF("hanim_l_talocalcaneonavicular")
HAnimJoint189.setCenter([0,1,0])
HAnimJoint189.setUlimit([0,0,0])
HAnimJoint189.setLlimit([0,0,0])
HAnimSegment190 = x3d.HAnimSegment()
HAnimSegment190.setName("l_navicular")
HAnimSegment190.setDEF("hanim_l_navicular")
Transform191 = x3d.Transform()
#Empty Transform
Transform192 = x3d.Transform()
#Empty Transform
Shape193 = x3d.Shape()
Shape193.setUSE("HAnimJointShape")

Transform192.addChild(Shape193)

Transform191.addChildren(Transform192)

HAnimSegment190.addChildren(Transform191)
Shape194 = x3d.Shape()
LineSet195 = x3d.LineSet()
LineSet195.setVertexCount([2])
Coordinate196 = x3d.Coordinate()
Coordinate196.setPoint([0,1,0,0,1,0])

LineSet195.setCoord(Coordinate196)
#from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
ColorRGBA197 = x3d.ColorRGBA()
ColorRGBA197.setUSE("HAnimSegmentLineColorRGBA")

LineSet195.setColor(ColorRGBA197)

Shape194.setGeometry(LineSet195)

HAnimSegment190.addChildren(Shape194)
Shape198 = x3d.Shape()
LineSet199 = x3d.LineSet()
LineSet199.setVertexCount([2])
Coordinate200 = x3d.Coordinate()
Coordinate200.setPoint([0,1,0,0,1,0])

LineSet199.setCoord(Coordinate200)
#from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
ColorRGBA201 = x3d.ColorRGBA()
ColorRGBA201.setUSE("HAnimSegmentLineColorRGBA")

LineSet199.setColor(ColorRGBA201)

Shape198.setGeometry(LineSet199)

HAnimSegment190.addChildren(Shape198)
Shape202 = x3d.Shape()
LineSet203 = x3d.LineSet()
LineSet203.setVertexCount([2])
Coordinate204 = x3d.Coordinate()
Coordinate204.setPoint([0,1,0,0,1,0])

LineSet203.setCoord(Coordinate204)
#from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
ColorRGBA205 = x3d.ColorRGBA()
ColorRGBA205.setUSE("HAnimSegmentLineColorRGBA")

LineSet203.setColor(ColorRGBA205)

Shape202.setGeometry(LineSet203)

HAnimSegment190.addChildren(Shape202)

HAnimJoint189.addChildren(HAnimSegment190)
HAnimJoint206 = x3d.HAnimJoint()
HAnimJoint206.setName("l_cuneonavicular_1")
HAnimJoint206.setDEF("hanim_l_cuneonavicular_1")
HAnimJoint206.setCenter([0,1,0])
HAnimJoint206.setUlimit([0,0,0])
HAnimJoint206.setLlimit([0,0,0])
HAnimSegment207 = x3d.HAnimSegment()
HAnimSegment207.setName("l_cuneiform_1")
HAnimSegment207.setDEF("hanim_l_cuneiform_1")
Transform208 = x3d.Transform()
#Empty Transform
Transform209 = x3d.Transform()
#Empty Transform
Shape210 = x3d.Shape()
Shape210.setUSE("HAnimJointShape")

Transform209.addChild(Shape210)

Transform208.addChildren(Transform209)

HAnimSegment207.addChildren(Transform208)
Shape211 = x3d.Shape()
LineSet212 = x3d.LineSet()
LineSet212.setVertexCount([2])
Coordinate213 = x3d.Coordinate()
Coordinate213.setPoint([0,1,0,0,1,0])

LineSet212.setCoord(Coordinate213)
#from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
ColorRGBA214 = x3d.ColorRGBA()
ColorRGBA214.setUSE("HAnimSegmentLineColorRGBA")

LineSet212.setColor(ColorRGBA214)

Shape211.setGeometry(LineSet212)

HAnimSegment207.addChildren(Shape211)

HAnimJoint206.addChildren(HAnimSegment207)
HAnimJoint215 = x3d.HAnimJoint()
HAnimJoint215.setName("l_tarsometatarsal_1")
HAnimJoint215.setDEF("hanim_l_tarsometatarsal_1")
HAnimJoint215.setCenter([0,1,0])
HAnimJoint215.setUlimit([0,0,0])
HAnimJoint215.setLlimit([0,0,0])
HAnimSegment216 = x3d.HAnimSegment()
HAnimSegment216.setName("l_metatarsal_1")
HAnimSegment216.setDEF("hanim_l_metatarsal_1")
Transform217 = x3d.Transform()
#Empty Transform
Transform218 = x3d.Transform()
#Empty Transform
Shape219 = x3d.Shape()
Shape219.setUSE("HAnimJointShape")

Transform218.addChild(Shape219)

Transform217.addChildren(Transform218)

HAnimSegment216.addChildren(Transform217)
Shape220 = x3d.Shape()
LineSet221 = x3d.LineSet()
LineSet221.setVertexCount([2])
Coordinate222 = x3d.Coordinate()
Coordinate222.setPoint([0,1,0,0,1,0])

LineSet221.setCoord(Coordinate222)
#from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
ColorRGBA223 = x3d.ColorRGBA()
ColorRGBA223.setUSE("HAnimSegmentLineColorRGBA")

LineSet221.setColor(ColorRGBA223)

Shape220.setGeometry(LineSet221)

HAnimSegment216.addChildren(Shape220)
HAnimSite224 = x3d.HAnimSite()
HAnimSite224.setName("l_metatarsal_phalanx_1_pt")
HAnimSite224.setDEF("hanim_l_metatarsal_phalanx_1_pt")
HAnimSite224.setTranslation([0,1,0])
TouchSensor225 = x3d.TouchSensor()
TouchSensor225.setDescription("HAnimSite l_metatarsal_phalanx_1_pt")

HAnimSite224.addChildren(TouchSensor225)
Shape226 = x3d.Shape()
Shape226.setUSE("HAnimSiteShape")

HAnimSite224.addChildren(Shape226)

HAnimSegment216.addChildren(HAnimSite224)

HAnimJoint215.addChildren(HAnimSegment216)
HAnimJoint227 = x3d.HAnimJoint()
HAnimJoint227.setName("l_metatarsophalangeal_1")
HAnimJoint227.setDEF("hanim_l_metatarsophalangeal_1")
HAnimJoint227.setCenter([0,1,0])
HAnimJoint227.setUlimit([0,0,0])
HAnimJoint227.setLlimit([0,0,0])
HAnimSegment228 = x3d.HAnimSegment()
HAnimSegment228.setName("l_tarsal_proximal_phalanx_1")
HAnimSegment228.setDEF("hanim_l_tarsal_proximal_phalanx_1")
Transform229 = x3d.Transform()
#Empty Transform
Transform230 = x3d.Transform()
#Empty Transform
Shape231 = x3d.Shape()
Shape231.setUSE("HAnimJointShape")

Transform230.addChild(Shape231)

Transform229.addChildren(Transform230)

HAnimSegment228.addChildren(Transform229)
Shape232 = x3d.Shape()
LineSet233 = x3d.LineSet()
LineSet233.setVertexCount([2])
Coordinate234 = x3d.Coordinate()
Coordinate234.setPoint([0,1,0,0,1,0])

LineSet233.setCoord(Coordinate234)
#from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
ColorRGBA235 = x3d.ColorRGBA()
ColorRGBA235.setUSE("HAnimSegmentLineColorRGBA")

LineSet233.setColor(ColorRGBA235)

Shape232.setGeometry(LineSet233)

HAnimSegment228.addChildren(Shape232)
HAnimSite236 = x3d.HAnimSite()
HAnimSite236.setName("l_tarsal_distal_phalanx_1_tip")
HAnimSite236.setDEF("hanim_l_tarsal_distal_phalanx_1_tip")
HAnimSite236.setTranslation([0,1,0])
TouchSensor237 = x3d.TouchSensor()
TouchSensor237.setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip")

HAnimSite236.addChildren(TouchSensor237)
Shape238 = x3d.Shape()
Shape238.setUSE("HAnimSiteShape")

HAnimSite236.addChildren(Shape238)

HAnimSegment228.addChildren(HAnimSite236)

HAnimJoint227.addChildren(HAnimSegment228)
HAnimJoint239 = x3d.HAnimJoint()
HAnimJoint239.setName("l_tarsal_interphalangeal_1")
HAnimJoint239.setDEF("hanim_l_tarsal_interphalangeal_1")
HAnimJoint239.setCenter([0,1,0])
HAnimJoint239.setUlimit([0,0,0])
HAnimJoint239.setLlimit([0,0,0])

HAnimJoint227.addChildren(HAnimJoint239)

HAnimJoint215.addChildren(HAnimJoint227)

HAnimJoint206.addChildren(HAnimJoint215)

HAnimJoint189.addChildren(HAnimJoint206)
HAnimJoint240 = x3d.HAnimJoint()
HAnimJoint240.setName("l_cuneonavicular_2")
HAnimJoint240.setDEF("hanim_l_cuneonavicular_2")
HAnimJoint240.setCenter([0,1,0])
HAnimJoint240.setUlimit([0,0,0])
HAnimJoint240.setLlimit([0,0,0])
HAnimSegment241 = x3d.HAnimSegment()
HAnimSegment241.setName("l_cuneiform_2")
HAnimSegment241.setDEF("hanim_l_cuneiform_2")
Transform242 = x3d.Transform()
#Empty Transform
Transform243 = x3d.Transform()
#Empty Transform
Shape244 = x3d.Shape()
Shape244.setUSE("HAnimJointShape")

Transform243.addChild(Shape244)

Transform242.addChildren(Transform243)

HAnimSegment241.addChildren(Transform242)
Shape245 = x3d.Shape()
LineSet246 = x3d.LineSet()
LineSet246.setVertexCount([2])
Coordinate247 = x3d.Coordinate()
Coordinate247.setPoint([0,1,0,0,1,0])

LineSet246.setCoord(Coordinate247)
#from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
ColorRGBA248 = x3d.ColorRGBA()
ColorRGBA248.setUSE("HAnimSegmentLineColorRGBA")

LineSet246.setColor(ColorRGBA248)

Shape245.setGeometry(LineSet246)

HAnimSegment241.addChildren(Shape245)

HAnimJoint240.addChildren(HAnimSegment241)
HAnimJoint249 = x3d.HAnimJoint()
HAnimJoint249.setName("l_tarsometatarsal_2")
HAnimJoint249.setDEF("hanim_l_tarsometatarsal_2")
HAnimJoint249.setCenter([0,1,0])
HAnimJoint249.setUlimit([0,0,0])
HAnimJoint249.setLlimit([0,0,0])
HAnimSegment250 = x3d.HAnimSegment()
HAnimSegment250.setName("l_metatarsal_2")
HAnimSegment250.setDEF("hanim_l_metatarsal_2")
Transform251 = x3d.Transform()
#Empty Transform
Transform252 = x3d.Transform()
#Empty Transform
Shape253 = x3d.Shape()
Shape253.setUSE("HAnimJointShape")

Transform252.addChild(Shape253)

Transform251.addChildren(Transform252)

HAnimSegment250.addChildren(Transform251)
Shape254 = x3d.Shape()
LineSet255 = x3d.LineSet()
LineSet255.setVertexCount([2])
Coordinate256 = x3d.Coordinate()
Coordinate256.setPoint([0,1,0,0,1,0])

LineSet255.setCoord(Coordinate256)
#from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA257 = x3d.ColorRGBA()
ColorRGBA257.setUSE("HAnimSegmentLineColorRGBA")

LineSet255.setColor(ColorRGBA257)

Shape254.setGeometry(LineSet255)

HAnimSegment250.addChildren(Shape254)

HAnimJoint249.addChildren(HAnimSegment250)
HAnimJoint258 = x3d.HAnimJoint()
HAnimJoint258.setName("l_metatarsophalangeal_2")
HAnimJoint258.setDEF("hanim_l_metatarsophalangeal_2")
HAnimJoint258.setCenter([0,1,0])
HAnimJoint258.setUlimit([0,0,0])
HAnimJoint258.setLlimit([0,0,0])
HAnimSegment259 = x3d.HAnimSegment()
HAnimSegment259.setName("l_tarsal_proximal_phalanx_2")
HAnimSegment259.setDEF("hanim_l_tarsal_proximal_phalanx_2")
Transform260 = x3d.Transform()
#Empty Transform
Transform261 = x3d.Transform()
#Empty Transform
Shape262 = x3d.Shape()
Shape262.setUSE("HAnimJointShape")

Transform261.addChild(Shape262)

Transform260.addChildren(Transform261)

HAnimSegment259.addChildren(Transform260)
Shape263 = x3d.Shape()
LineSet264 = x3d.LineSet()
LineSet264.setVertexCount([2])
Coordinate265 = x3d.Coordinate()
Coordinate265.setPoint([0,1,0,0,1,0])

LineSet264.setCoord(Coordinate265)
#from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA266 = x3d.ColorRGBA()
ColorRGBA266.setUSE("HAnimSegmentLineColorRGBA")

LineSet264.setColor(ColorRGBA266)

Shape263.setGeometry(LineSet264)

HAnimSegment259.addChildren(Shape263)

HAnimJoint258.addChildren(HAnimSegment259)
HAnimJoint267 = x3d.HAnimJoint()
HAnimJoint267.setName("l_tarsal_proximal_interphalangeal_2")
HAnimJoint267.setDEF("hanim_l_tarsal_proximal_interphalangeal_2")
HAnimJoint267.setCenter([0,1,0])
HAnimJoint267.setUlimit([0,0,0])
HAnimJoint267.setLlimit([0,0,0])
HAnimSegment268 = x3d.HAnimSegment()
HAnimSegment268.setName("l_tarsal_middle_phalanx_2")
HAnimSegment268.setDEF("hanim_l_tarsal_middle_phalanx_2")
Transform269 = x3d.Transform()
#Empty Transform
Transform270 = x3d.Transform()
#Empty Transform
Shape271 = x3d.Shape()
Shape271.setUSE("HAnimJointShape")

Transform270.addChild(Shape271)

Transform269.addChildren(Transform270)

HAnimSegment268.addChildren(Transform269)
Shape272 = x3d.Shape()
LineSet273 = x3d.LineSet()
LineSet273.setVertexCount([2])
Coordinate274 = x3d.Coordinate()
Coordinate274.setPoint([0,1,0,0,1,0])

LineSet273.setCoord(Coordinate274)
#from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA275 = x3d.ColorRGBA()
ColorRGBA275.setUSE("HAnimSegmentLineColorRGBA")

LineSet273.setColor(ColorRGBA275)

Shape272.setGeometry(LineSet273)

HAnimSegment268.addChildren(Shape272)
HAnimSite276 = x3d.HAnimSite()
HAnimSite276.setName("l_tarsal_distal_phalanx_2_tip")
HAnimSite276.setDEF("hanim_l_tarsal_distal_phalanx_2_tip")
HAnimSite276.setTranslation([0.1195,0.0079,0.1433])
TouchSensor277 = x3d.TouchSensor()
TouchSensor277.setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip")

HAnimSite276.addChildren(TouchSensor277)
Shape278 = x3d.Shape()
Shape278.setUSE("HAnimSiteShape")

HAnimSite276.addChildren(Shape278)

HAnimSegment268.addChildren(HAnimSite276)

HAnimJoint267.addChildren(HAnimSegment268)
HAnimJoint279 = x3d.HAnimJoint()
HAnimJoint279.setName("l_tarsal_distal_interphalangeal_2")
HAnimJoint279.setDEF("hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint279.setCenter([0,1,0])
HAnimJoint279.setUlimit([0,0,0])
HAnimJoint279.setLlimit([0,0,0])

HAnimJoint267.addChildren(HAnimJoint279)

HAnimJoint258.addChildren(HAnimJoint267)

HAnimJoint249.addChildren(HAnimJoint258)

HAnimJoint240.addChildren(HAnimJoint249)

HAnimJoint189.addChildren(HAnimJoint240)
HAnimJoint280 = x3d.HAnimJoint()
HAnimJoint280.setName("l_cuneonavicular_3")
HAnimJoint280.setDEF("hanim_l_cuneonavicular_3")
HAnimJoint280.setCenter([0,1,0])
HAnimJoint280.setUlimit([0,0,0])
HAnimJoint280.setLlimit([0,0,0])
HAnimSegment281 = x3d.HAnimSegment()
HAnimSegment281.setName("l_cuneiform_3")
HAnimSegment281.setDEF("hanim_l_cuneiform_3")
Transform282 = x3d.Transform()
#Empty Transform
Transform283 = x3d.Transform()
#Empty Transform
Shape284 = x3d.Shape()
Shape284.setUSE("HAnimJointShape")

Transform283.addChild(Shape284)

Transform282.addChildren(Transform283)

HAnimSegment281.addChildren(Transform282)
Shape285 = x3d.Shape()
LineSet286 = x3d.LineSet()
LineSet286.setVertexCount([2])
Coordinate287 = x3d.Coordinate()
Coordinate287.setPoint([0,1,0,0,1,0])

LineSet286.setCoord(Coordinate287)
#from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
ColorRGBA288 = x3d.ColorRGBA()
ColorRGBA288.setUSE("HAnimSegmentLineColorRGBA")

LineSet286.setColor(ColorRGBA288)

Shape285.setGeometry(LineSet286)

HAnimSegment281.addChildren(Shape285)

HAnimJoint280.addChildren(HAnimSegment281)
HAnimJoint289 = x3d.HAnimJoint()
HAnimJoint289.setName("l_tarsometatarsal_3")
HAnimJoint289.setDEF("hanim_l_tarsometatarsal_3")
HAnimJoint289.setCenter([0,1,0])
HAnimJoint289.setUlimit([0,0,0])
HAnimJoint289.setLlimit([0,0,0])
HAnimSegment290 = x3d.HAnimSegment()
HAnimSegment290.setName("l_metatarsal_3")
HAnimSegment290.setDEF("hanim_l_metatarsal_3")
Transform291 = x3d.Transform()
#Empty Transform
Transform292 = x3d.Transform()
#Empty Transform
Shape293 = x3d.Shape()
Shape293.setUSE("HAnimJointShape")

Transform292.addChild(Shape293)

Transform291.addChildren(Transform292)

HAnimSegment290.addChildren(Transform291)
Shape294 = x3d.Shape()
LineSet295 = x3d.LineSet()
LineSet295.setVertexCount([2])
Coordinate296 = x3d.Coordinate()
Coordinate296.setPoint([0,1,0,0,1,0])

LineSet295.setCoord(Coordinate296)
#from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2
ColorRGBA297 = x3d.ColorRGBA()
ColorRGBA297.setUSE("HAnimSegmentLineColorRGBA")

LineSet295.setColor(ColorRGBA297)

Shape294.setGeometry(LineSet295)

HAnimSegment290.addChildren(Shape294)

HAnimJoint289.addChildren(HAnimSegment290)
HAnimJoint298 = x3d.HAnimJoint()
HAnimJoint298.setName("l_metatarsophalangeal_3")
HAnimJoint298.setDEF("hanim_l_metatarsophalangeal_3")
HAnimJoint298.setCenter([0,1,0])
HAnimJoint298.setUlimit([0,0,0])
HAnimJoint298.setLlimit([0,0,0])
HAnimSegment299 = x3d.HAnimSegment()
HAnimSegment299.setName("l_tarsal_proximal_phalanx_3")
HAnimSegment299.setDEF("hanim_l_tarsal_proximal_phalanx_3")
Transform300 = x3d.Transform()
#Empty Transform
Transform301 = x3d.Transform()
#Empty Transform
Shape302 = x3d.Shape()
Shape302.setUSE("HAnimJointShape")

Transform301.addChild(Shape302)

Transform300.addChildren(Transform301)

HAnimSegment299.addChildren(Transform300)
Shape303 = x3d.Shape()
LineSet304 = x3d.LineSet()
LineSet304.setVertexCount([2])
Coordinate305 = x3d.Coordinate()
Coordinate305.setPoint([0,1,0,0,1,0])

LineSet304.setCoord(Coordinate305)
#from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA306 = x3d.ColorRGBA()
ColorRGBA306.setUSE("HAnimSegmentLineColorRGBA")

LineSet304.setColor(ColorRGBA306)

Shape303.setGeometry(LineSet304)

HAnimSegment299.addChildren(Shape303)

HAnimJoint298.addChildren(HAnimSegment299)
HAnimJoint307 = x3d.HAnimJoint()
HAnimJoint307.setName("l_tarsal_proximal_interphalangeal_3")
HAnimJoint307.setDEF("hanim_l_tarsal_proximal_interphalangeal_3")
HAnimJoint307.setCenter([0,1,0])
HAnimJoint307.setUlimit([0,0,0])
HAnimJoint307.setLlimit([0,0,0])
HAnimSegment308 = x3d.HAnimSegment()
HAnimSegment308.setName("l_tarsal_middle_phalanx_3")
HAnimSegment308.setDEF("hanim_l_tarsal_middle_phalanx_3")
Transform309 = x3d.Transform()
#Empty Transform
Transform310 = x3d.Transform()
#Empty Transform
Shape311 = x3d.Shape()
Shape311.setUSE("HAnimJointShape")

Transform310.addChild(Shape311)

Transform309.addChildren(Transform310)

HAnimSegment308.addChildren(Transform309)
Shape312 = x3d.Shape()
LineSet313 = x3d.LineSet()
LineSet313.setVertexCount([2])
Coordinate314 = x3d.Coordinate()
Coordinate314.setPoint([0,1,0,0,1,0])

LineSet313.setCoord(Coordinate314)
#from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA315 = x3d.ColorRGBA()
ColorRGBA315.setUSE("HAnimSegmentLineColorRGBA")

LineSet313.setColor(ColorRGBA315)

Shape312.setGeometry(LineSet313)

HAnimSegment308.addChildren(Shape312)
HAnimSite316 = x3d.HAnimSite()
HAnimSite316.setName("l_tarsal_distal_phalanx_3_tip")
HAnimSite316.setDEF("hanim_l_tarsal_distal_phalanx_3_tip")
HAnimSite316.setTranslation([0,1,0])
TouchSensor317 = x3d.TouchSensor()
TouchSensor317.setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip")

HAnimSite316.addChildren(TouchSensor317)
Shape318 = x3d.Shape()
Shape318.setUSE("HAnimSiteShape")

HAnimSite316.addChildren(Shape318)

HAnimSegment308.addChildren(HAnimSite316)

HAnimJoint307.addChildren(HAnimSegment308)
HAnimJoint319 = x3d.HAnimJoint()
HAnimJoint319.setName("l_tarsal_distal_interphalangeal_3")
HAnimJoint319.setDEF("hanim_l_tarsal_distal_interphalangeal_3")
HAnimJoint319.setCenter([0,1,0])
HAnimJoint319.setUlimit([0,0,0])
HAnimJoint319.setLlimit([0,0,0])

HAnimJoint307.addChildren(HAnimJoint319)

HAnimJoint298.addChildren(HAnimJoint307)

HAnimJoint289.addChildren(HAnimJoint298)

HAnimJoint280.addChildren(HAnimJoint289)

HAnimJoint189.addChildren(HAnimJoint280)

HAnimJoint176.addChildren(HAnimJoint189)
HAnimJoint320 = x3d.HAnimJoint()
HAnimJoint320.setName("l_calcaneocuboid")
HAnimJoint320.setDEF("hanim_l_calcaneocuboid")
HAnimJoint320.setCenter([0,1,0])
HAnimJoint320.setUlimit([0,0,0])
HAnimJoint320.setLlimit([0,0,0])
HAnimSegment321 = x3d.HAnimSegment()
HAnimSegment321.setName("l_calcaneus")
HAnimSegment321.setDEF("hanim_l_calcaneus")
Transform322 = x3d.Transform()
#Empty Transform
Transform323 = x3d.Transform()
#Empty Transform
Shape324 = x3d.Shape()
Shape324.setUSE("HAnimJointShape")

Transform323.addChild(Shape324)

Transform322.addChildren(Transform323)

HAnimSegment321.addChildren(Transform322)
Shape325 = x3d.Shape()
LineSet326 = x3d.LineSet()
LineSet326.setVertexCount([2])
Coordinate327 = x3d.Coordinate()
Coordinate327.setPoint([0,1,0,0,1,0])

LineSet326.setCoord(Coordinate327)
#from l_calcaneocuboid to l_transversetarsal vertices 2
ColorRGBA328 = x3d.ColorRGBA()
ColorRGBA328.setUSE("HAnimSegmentLineColorRGBA")

LineSet326.setColor(ColorRGBA328)

Shape325.setGeometry(LineSet326)

HAnimSegment321.addChildren(Shape325)

HAnimJoint320.addChildren(HAnimSegment321)
HAnimJoint329 = x3d.HAnimJoint()
HAnimJoint329.setName("l_transversetarsal")
HAnimJoint329.setDEF("hanim_l_transversetarsal")
HAnimJoint329.setCenter([0,1,0])
HAnimJoint329.setUlimit([0,0,0])
HAnimJoint329.setLlimit([0,0,0])
HAnimSegment330 = x3d.HAnimSegment()
HAnimSegment330.setName("l_cuboid")
HAnimSegment330.setDEF("hanim_l_cuboid")
Transform331 = x3d.Transform()
#Empty Transform
Transform332 = x3d.Transform()
#Empty Transform
Shape333 = x3d.Shape()
Shape333.setUSE("HAnimJointShape")

Transform332.addChild(Shape333)

Transform331.addChildren(Transform332)

HAnimSegment330.addChildren(Transform331)
Shape334 = x3d.Shape()
LineSet335 = x3d.LineSet()
LineSet335.setVertexCount([2])
Coordinate336 = x3d.Coordinate()
Coordinate336.setPoint([0,1,0,0,1,0])

LineSet335.setCoord(Coordinate336)
#from l_transversetarsal to l_tarsometatarsal_4 vertices 2
ColorRGBA337 = x3d.ColorRGBA()
ColorRGBA337.setUSE("HAnimSegmentLineColorRGBA")

LineSet335.setColor(ColorRGBA337)

Shape334.setGeometry(LineSet335)

HAnimSegment330.addChildren(Shape334)
Shape338 = x3d.Shape()
LineSet339 = x3d.LineSet()
LineSet339.setVertexCount([2])
Coordinate340 = x3d.Coordinate()
Coordinate340.setPoint([0,1,0,0,1,0])

LineSet339.setCoord(Coordinate340)
#from l_transversetarsal to l_tarsometatarsal_5 vertices 2
ColorRGBA341 = x3d.ColorRGBA()
ColorRGBA341.setUSE("HAnimSegmentLineColorRGBA")

LineSet339.setColor(ColorRGBA341)

Shape338.setGeometry(LineSet339)

HAnimSegment330.addChildren(Shape338)

HAnimJoint329.addChildren(HAnimSegment330)
HAnimJoint342 = x3d.HAnimJoint()
HAnimJoint342.setName("l_tarsometatarsal_4")
HAnimJoint342.setDEF("hanim_l_tarsometatarsal_4")
HAnimJoint342.setCenter([0,1,0])
HAnimJoint342.setUlimit([0,0,0])
HAnimJoint342.setLlimit([0,0,0])
HAnimSegment343 = x3d.HAnimSegment()
HAnimSegment343.setName("l_metatarsal_4")
HAnimSegment343.setDEF("hanim_l_metatarsal_4")
Transform344 = x3d.Transform()
#Empty Transform
Transform345 = x3d.Transform()
#Empty Transform
Shape346 = x3d.Shape()
Shape346.setUSE("HAnimJointShape")

Transform345.addChild(Shape346)

Transform344.addChildren(Transform345)

HAnimSegment343.addChildren(Transform344)
Shape347 = x3d.Shape()
LineSet348 = x3d.LineSet()
LineSet348.setVertexCount([2])
Coordinate349 = x3d.Coordinate()
Coordinate349.setPoint([0,1,0,0,1,0])

LineSet348.setCoord(Coordinate349)
#from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
ColorRGBA350 = x3d.ColorRGBA()
ColorRGBA350.setUSE("HAnimSegmentLineColorRGBA")

LineSet348.setColor(ColorRGBA350)

Shape347.setGeometry(LineSet348)

HAnimSegment343.addChildren(Shape347)

HAnimJoint342.addChildren(HAnimSegment343)
HAnimJoint351 = x3d.HAnimJoint()
HAnimJoint351.setName("l_metatarsophalangeal_4")
HAnimJoint351.setDEF("hanim_l_metatarsophalangeal_4")
HAnimJoint351.setCenter([0,1,0])
HAnimJoint351.setUlimit([0,0,0])
HAnimJoint351.setLlimit([0,0,0])
HAnimSegment352 = x3d.HAnimSegment()
HAnimSegment352.setName("l_tarsal_proximal_phalanx_4")
HAnimSegment352.setDEF("hanim_l_tarsal_proximal_phalanx_4")
Transform353 = x3d.Transform()
#Empty Transform
Transform354 = x3d.Transform()
#Empty Transform
Shape355 = x3d.Shape()
Shape355.setUSE("HAnimJointShape")

Transform354.addChild(Shape355)

Transform353.addChildren(Transform354)

HAnimSegment352.addChildren(Transform353)
Shape356 = x3d.Shape()
LineSet357 = x3d.LineSet()
LineSet357.setVertexCount([2])
Coordinate358 = x3d.Coordinate()
Coordinate358.setPoint([0,1,0,0,1,0])

LineSet357.setCoord(Coordinate358)
#from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA359 = x3d.ColorRGBA()
ColorRGBA359.setUSE("HAnimSegmentLineColorRGBA")

LineSet357.setColor(ColorRGBA359)

Shape356.setGeometry(LineSet357)

HAnimSegment352.addChildren(Shape356)

HAnimJoint351.addChildren(HAnimSegment352)
HAnimJoint360 = x3d.HAnimJoint()
HAnimJoint360.setName("l_tarsal_proximal_interphalangeal_4")
HAnimJoint360.setDEF("hanim_l_tarsal_proximal_interphalangeal_4")
HAnimJoint360.setCenter([0,1,0])
HAnimJoint360.setUlimit([0,0,0])
HAnimJoint360.setLlimit([0,0,0])
HAnimSegment361 = x3d.HAnimSegment()
HAnimSegment361.setName("l_tarsal_middle_phalanx_4")
HAnimSegment361.setDEF("hanim_l_tarsal_middle_phalanx_4")
Transform362 = x3d.Transform()
#Empty Transform
Transform363 = x3d.Transform()
#Empty Transform
Shape364 = x3d.Shape()
Shape364.setUSE("HAnimJointShape")

Transform363.addChild(Shape364)

Transform362.addChildren(Transform363)

HAnimSegment361.addChildren(Transform362)
Shape365 = x3d.Shape()
LineSet366 = x3d.LineSet()
LineSet366.setVertexCount([2])
Coordinate367 = x3d.Coordinate()
Coordinate367.setPoint([0,1,0,0,1,0])

LineSet366.setCoord(Coordinate367)
#from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA368 = x3d.ColorRGBA()
ColorRGBA368.setUSE("HAnimSegmentLineColorRGBA")

LineSet366.setColor(ColorRGBA368)

Shape365.setGeometry(LineSet366)

HAnimSegment361.addChildren(Shape365)
HAnimSite369 = x3d.HAnimSite()
HAnimSite369.setName("l_tarsal_distal_phalanx_4_tip")
HAnimSite369.setDEF("hanim_l_tarsal_distal_phalanx_4_tip")
HAnimSite369.setTranslation([0,1,0])
TouchSensor370 = x3d.TouchSensor()
TouchSensor370.setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip")

HAnimSite369.addChildren(TouchSensor370)
Shape371 = x3d.Shape()
Shape371.setUSE("HAnimSiteShape")

HAnimSite369.addChildren(Shape371)

HAnimSegment361.addChildren(HAnimSite369)

HAnimJoint360.addChildren(HAnimSegment361)
HAnimJoint372 = x3d.HAnimJoint()
HAnimJoint372.setName("l_tarsal_distal_interphalangeal_4")
HAnimJoint372.setDEF("hanim_l_tarsal_distal_interphalangeal_4")
HAnimJoint372.setCenter([0,1,0])
HAnimJoint372.setUlimit([0,0,0])
HAnimJoint372.setLlimit([0,0,0])

HAnimJoint360.addChildren(HAnimJoint372)

HAnimJoint351.addChildren(HAnimJoint360)

HAnimJoint342.addChildren(HAnimJoint351)

HAnimJoint329.addChildren(HAnimJoint342)
HAnimJoint373 = x3d.HAnimJoint()
HAnimJoint373.setName("l_tarsometatarsal_5")
HAnimJoint373.setDEF("hanim_l_tarsometatarsal_5")
HAnimJoint373.setCenter([0,1,0])
HAnimJoint373.setUlimit([0,0,0])
HAnimJoint373.setLlimit([0,0,0])
HAnimSegment374 = x3d.HAnimSegment()
HAnimSegment374.setName("l_metatarsal_5")
HAnimSegment374.setDEF("hanim_l_metatarsal_5")
Transform375 = x3d.Transform()
#Empty Transform
Transform376 = x3d.Transform()
#Empty Transform
Shape377 = x3d.Shape()
Shape377.setUSE("HAnimJointShape")

Transform376.addChild(Shape377)

Transform375.addChildren(Transform376)

HAnimSegment374.addChildren(Transform375)
Shape378 = x3d.Shape()
LineSet379 = x3d.LineSet()
LineSet379.setVertexCount([2])
Coordinate380 = x3d.Coordinate()
Coordinate380.setPoint([0,1,0,0,1,0])

LineSet379.setCoord(Coordinate380)
#from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
ColorRGBA381 = x3d.ColorRGBA()
ColorRGBA381.setUSE("HAnimSegmentLineColorRGBA")

LineSet379.setColor(ColorRGBA381)

Shape378.setGeometry(LineSet379)

HAnimSegment374.addChildren(Shape378)
HAnimSite382 = x3d.HAnimSite()
HAnimSite382.setName("l_metatarsal_phalanx_5_pt")
HAnimSite382.setDEF("hanim_l_metatarsal_phalanx_5_pt")
HAnimSite382.setTranslation([0,1,0])
TouchSensor383 = x3d.TouchSensor()
TouchSensor383.setDescription("HAnimSite l_metatarsal_phalanx_5_pt")

HAnimSite382.addChildren(TouchSensor383)
Shape384 = x3d.Shape()
Shape384.setUSE("HAnimSiteShape")

HAnimSite382.addChildren(Shape384)

HAnimSegment374.addChildren(HAnimSite382)

HAnimJoint373.addChildren(HAnimSegment374)
HAnimJoint385 = x3d.HAnimJoint()
HAnimJoint385.setName("l_metatarsophalangeal_5")
HAnimJoint385.setDEF("hanim_l_metatarsophalangeal_5")
HAnimJoint385.setCenter([0,1,0])
HAnimJoint385.setUlimit([0,0,0])
HAnimJoint385.setLlimit([0,0,0])
HAnimSegment386 = x3d.HAnimSegment()
HAnimSegment386.setName("l_tarsal_proximal_phalanx_5")
HAnimSegment386.setDEF("hanim_l_tarsal_proximal_phalanx_5")
Transform387 = x3d.Transform()
#Empty Transform
Transform388 = x3d.Transform()
#Empty Transform
Shape389 = x3d.Shape()
Shape389.setUSE("HAnimJointShape")

Transform388.addChild(Shape389)

Transform387.addChildren(Transform388)

HAnimSegment386.addChildren(Transform387)
Shape390 = x3d.Shape()
LineSet391 = x3d.LineSet()
LineSet391.setVertexCount([2])
Coordinate392 = x3d.Coordinate()
Coordinate392.setPoint([0,1,0,0,1,0])

LineSet391.setCoord(Coordinate392)
#from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA393 = x3d.ColorRGBA()
ColorRGBA393.setUSE("HAnimSegmentLineColorRGBA")

LineSet391.setColor(ColorRGBA393)

Shape390.setGeometry(LineSet391)

HAnimSegment386.addChildren(Shape390)

HAnimJoint385.addChildren(HAnimSegment386)
HAnimJoint394 = x3d.HAnimJoint()
HAnimJoint394.setName("l_tarsal_proximal_interphalangeal_5")
HAnimJoint394.setDEF("hanim_l_tarsal_proximal_interphalangeal_5")
HAnimJoint394.setCenter([0,1,0])
HAnimJoint394.setUlimit([0,0,0])
HAnimJoint394.setLlimit([0,0,0])
HAnimSegment395 = x3d.HAnimSegment()
HAnimSegment395.setName("l_tarsal_middle_phalanx_5")
HAnimSegment395.setDEF("hanim_l_tarsal_middle_phalanx_5")
Transform396 = x3d.Transform()
#Empty Transform
Transform397 = x3d.Transform()
#Empty Transform
Shape398 = x3d.Shape()
Shape398.setUSE("HAnimJointShape")

Transform397.addChild(Shape398)

Transform396.addChildren(Transform397)

HAnimSegment395.addChildren(Transform396)
Shape399 = x3d.Shape()
LineSet400 = x3d.LineSet()
LineSet400.setVertexCount([2])
Coordinate401 = x3d.Coordinate()
Coordinate401.setPoint([0,1,0,0,1,0])

LineSet400.setCoord(Coordinate401)
#from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA402 = x3d.ColorRGBA()
ColorRGBA402.setUSE("HAnimSegmentLineColorRGBA")

LineSet400.setColor(ColorRGBA402)

Shape399.setGeometry(LineSet400)

HAnimSegment395.addChildren(Shape399)
HAnimSite403 = x3d.HAnimSite()
HAnimSite403.setName("l_tarsal_distal_phalanx_5_tip")
HAnimSite403.setDEF("hanim_l_tarsal_distal_phalanx_5_tip")
HAnimSite403.setTranslation([0,1,0])
TouchSensor404 = x3d.TouchSensor()
TouchSensor404.setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip")

HAnimSite403.addChildren(TouchSensor404)
Shape405 = x3d.Shape()
Shape405.setUSE("HAnimSiteShape")

HAnimSite403.addChildren(Shape405)

HAnimSegment395.addChildren(HAnimSite403)

HAnimJoint394.addChildren(HAnimSegment395)
HAnimJoint406 = x3d.HAnimJoint()
HAnimJoint406.setName("l_tarsal_distal_interphalangeal_5")
HAnimJoint406.setDEF("hanim_l_tarsal_distal_interphalangeal_5")
HAnimJoint406.setCenter([0,1,0])
HAnimJoint406.setUlimit([0,0,0])
HAnimJoint406.setLlimit([0,0,0])

HAnimJoint394.addChildren(HAnimJoint406)

HAnimJoint385.addChildren(HAnimJoint394)

HAnimJoint373.addChildren(HAnimJoint385)

HAnimJoint329.addChildren(HAnimJoint373)

HAnimJoint320.addChildren(HAnimJoint329)

HAnimJoint176.addChildren(HAnimJoint320)

HAnimJoint161.addChildren(HAnimJoint176)

HAnimJoint143.addChildren(HAnimJoint161)

HAnimJoint106.addChildren(HAnimJoint143)
HAnimJoint407 = x3d.HAnimJoint()
HAnimJoint407.setName("r_hip")
HAnimJoint407.setDEF("hanim_r_hip")
HAnimJoint407.setCenter([-0.095,0.9171,0.0029])
HAnimJoint407.setUlimit([0,0,0])
HAnimJoint407.setLlimit([0,0,0])
HAnimSegment408 = x3d.HAnimSegment()
HAnimSegment408.setName("r_thigh")
HAnimSegment408.setDEF("hanim_r_thigh")
Transform409 = x3d.Transform()
#Empty Transform
Transform410 = x3d.Transform()
#Empty Transform
Shape411 = x3d.Shape()
Shape411.setUSE("HAnimJointShape")

Transform410.addChild(Shape411)

Transform409.addChildren(Transform410)

HAnimSegment408.addChildren(Transform409)
Shape412 = x3d.Shape()
LineSet413 = x3d.LineSet()
LineSet413.setVertexCount([2])
Coordinate414 = x3d.Coordinate()
Coordinate414.setPoint([-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318])

LineSet413.setCoord(Coordinate414)
#from r_hip to r_knee vertices 2
ColorRGBA415 = x3d.ColorRGBA()
ColorRGBA415.setUSE("HAnimSegmentLineColorRGBA")

LineSet413.setColor(ColorRGBA415)

Shape412.setGeometry(LineSet413)

HAnimSegment408.addChildren(Shape412)
HAnimSite416 = x3d.HAnimSite()
HAnimSite416.setName("r_lateral_malleolus_pt")
HAnimSite416.setDEF("hanim_r_lateral_malleolus_pt")
HAnimSite416.setTranslation([-0.1006,0.0658,-0.1075])
TouchSensor417 = x3d.TouchSensor()
TouchSensor417.setDescription("HAnimSite r_lateral_malleolus_pt")

HAnimSite416.addChildren(TouchSensor417)
Shape418 = x3d.Shape()
Shape418.setUSE("HAnimSiteShape")

HAnimSite416.addChildren(Shape418)

HAnimSegment408.addChildren(HAnimSite416)
HAnimSite419 = x3d.HAnimSite()
HAnimSite419.setName("r_medial_malleolus_pt")
HAnimSite419.setDEF("hanim_r_medial_malleolus_pt")
HAnimSite419.setTranslation([-0.0591,0.076,-0.0928])
TouchSensor420 = x3d.TouchSensor()
TouchSensor420.setDescription("HAnimSite r_medial_malleolus_pt")

HAnimSite419.addChildren(TouchSensor420)
Shape421 = x3d.Shape()
Shape421.setUSE("HAnimSiteShape")

HAnimSite419.addChildren(Shape421)

HAnimSegment408.addChildren(HAnimSite419)
HAnimSite422 = x3d.HAnimSite()
HAnimSite422.setName("r_tibiale_pt")
HAnimSite422.setDEF("hanim_r_tibiale_pt")
HAnimSite422.setTranslation([0,1,0])
TouchSensor423 = x3d.TouchSensor()
TouchSensor423.setDescription("HAnimSite r_tibiale_pt")

HAnimSite422.addChildren(TouchSensor423)
Shape424 = x3d.Shape()
Shape424.setUSE("HAnimSiteShape")

HAnimSite422.addChildren(Shape424)

HAnimSegment408.addChildren(HAnimSite422)

HAnimJoint407.addChildren(HAnimSegment408)
HAnimJoint425 = x3d.HAnimJoint()
HAnimJoint425.setName("r_knee")
HAnimJoint425.setDEF("hanim_r_knee")
HAnimJoint425.setCenter([-0.0867,0.4913,0.0318])
HAnimJoint425.setUlimit([0,0,0])
HAnimJoint425.setLlimit([0,0,0])
HAnimSegment426 = x3d.HAnimSegment()
HAnimSegment426.setName("r_calf")
HAnimSegment426.setDEF("hanim_r_calf")
Transform427 = x3d.Transform()
#Empty Transform
Transform428 = x3d.Transform()
#Empty Transform
Shape429 = x3d.Shape()
Shape429.setUSE("HAnimJointShape")

Transform428.addChild(Shape429)

Transform427.addChildren(Transform428)

HAnimSegment426.addChildren(Transform427)
Shape430 = x3d.Shape()
LineSet431 = x3d.LineSet()
LineSet431.setVertexCount([2])
Coordinate432 = x3d.Coordinate()
Coordinate432.setPoint([-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766])

LineSet431.setCoord(Coordinate432)
#from r_knee to r_talocrural vertices 2
ColorRGBA433 = x3d.ColorRGBA()
ColorRGBA433.setUSE("HAnimSegmentLineColorRGBA")

LineSet431.setColor(ColorRGBA433)

Shape430.setGeometry(LineSet431)

HAnimSegment426.addChildren(Shape430)
HAnimSite434 = x3d.HAnimSite()
HAnimSite434.setName("r_calcaneus_posterior_pt")
HAnimSite434.setDEF("hanim_r_calcaneus_posterior_pt")
HAnimSite434.setTranslation([-0.0692,0.0297,-0.1221])
TouchSensor435 = x3d.TouchSensor()
TouchSensor435.setDescription("HAnimSite r_calcaneus_posterior_pt")

HAnimSite434.addChildren(TouchSensor435)
Shape436 = x3d.Shape()
Shape436.setUSE("HAnimSiteShape")

HAnimSite434.addChildren(Shape436)

HAnimSegment426.addChildren(HAnimSite434)
HAnimSite437 = x3d.HAnimSite()
HAnimSite437.setName("r_sphyrion_pt")
HAnimSite437.setDEF("hanim_r_sphyrion_pt")
HAnimSite437.setTranslation([-0.0603,0.061,-0.1002])
TouchSensor438 = x3d.TouchSensor()
TouchSensor438.setDescription("HAnimSite r_sphyrion_pt")

HAnimSite437.addChildren(TouchSensor438)
Shape439 = x3d.Shape()
Shape439.setUSE("HAnimSiteShape")

HAnimSite437.addChildren(Shape439)

HAnimSegment426.addChildren(HAnimSite437)

HAnimJoint425.addChildren(HAnimSegment426)
HAnimJoint440 = x3d.HAnimJoint()
HAnimJoint440.setName("r_talocrural")
HAnimJoint440.setDEF("hanim_r_talocrural")
HAnimJoint440.setCenter([-0.0801,0.0712,-0.0766])
HAnimJoint440.setUlimit([0,0,0])
HAnimJoint440.setLlimit([0,0,0])
HAnimSegment441 = x3d.HAnimSegment()
HAnimSegment441.setName("r_talus")
HAnimSegment441.setDEF("hanim_r_talus")
Transform442 = x3d.Transform()
Transform442.setScale([0.15,0.15,0.15])
Transform442.setTranslation([-0.05,0.06,-0.025])
Transform442.setRotation([1,0,0,-1.57])
#Transform right foot
Transform443 = x3d.Transform()
#Empty Transform right foot
Shape444 = x3d.Shape()
Shape444.setUSE("HAnimJointShape")

Transform443.addChild(Shape444)

Transform442.addChildren(Transform443)

HAnimSegment441.addChildren(Transform442)
Shape445 = x3d.Shape()
LineSet446 = x3d.LineSet()
LineSet446.setVertexCount([2])
Coordinate447 = x3d.Coordinate()
Coordinate447.setPoint([-0.0801,0.0712,-0.0766,0,1,0])

LineSet446.setCoord(Coordinate447)
#from r_talocrural to r_talocalcaneonavicular vertices 2
ColorRGBA448 = x3d.ColorRGBA()
ColorRGBA448.setUSE("HAnimSegmentLineColorRGBA")

LineSet446.setColor(ColorRGBA448)

Shape445.setGeometry(LineSet446)

HAnimSegment441.addChildren(Shape445)
Shape449 = x3d.Shape()
LineSet450 = x3d.LineSet()
LineSet450.setVertexCount([2])
Coordinate451 = x3d.Coordinate()
Coordinate451.setPoint([-0.0801,0.0712,-0.0766,0,1,0])

LineSet450.setCoord(Coordinate451)
#from r_talocrural to r_calcaneocuboid vertices 2
ColorRGBA452 = x3d.ColorRGBA()
ColorRGBA452.setUSE("HAnimSegmentLineColorRGBA")

LineSet450.setColor(ColorRGBA452)

Shape449.setGeometry(LineSet450)

HAnimSegment441.addChildren(Shape449)

HAnimJoint440.addChildren(HAnimSegment441)
HAnimJoint453 = x3d.HAnimJoint()
HAnimJoint453.setName("r_talocalcaneonavicular")
HAnimJoint453.setDEF("hanim_r_talocalcaneonavicular")
HAnimJoint453.setCenter([0,1,0])
HAnimJoint453.setUlimit([0,0,0])
HAnimJoint453.setLlimit([0,0,0])
HAnimSegment454 = x3d.HAnimSegment()
HAnimSegment454.setName("r_navicular")
HAnimSegment454.setDEF("hanim_r_navicular")
Transform455 = x3d.Transform()
#Empty Transform
Transform456 = x3d.Transform()
#Empty Transform
Shape457 = x3d.Shape()
Shape457.setUSE("HAnimJointShape")

Transform456.addChild(Shape457)

Transform455.addChildren(Transform456)

HAnimSegment454.addChildren(Transform455)
Shape458 = x3d.Shape()
LineSet459 = x3d.LineSet()
LineSet459.setVertexCount([2])
Coordinate460 = x3d.Coordinate()
Coordinate460.setPoint([0,1,0,0,1,0])

LineSet459.setCoord(Coordinate460)
#from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
ColorRGBA461 = x3d.ColorRGBA()
ColorRGBA461.setUSE("HAnimSegmentLineColorRGBA")

LineSet459.setColor(ColorRGBA461)

Shape458.setGeometry(LineSet459)

HAnimSegment454.addChildren(Shape458)
Shape462 = x3d.Shape()
LineSet463 = x3d.LineSet()
LineSet463.setVertexCount([2])
Coordinate464 = x3d.Coordinate()
Coordinate464.setPoint([0,1,0,0,1,0])

LineSet463.setCoord(Coordinate464)
#from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
ColorRGBA465 = x3d.ColorRGBA()
ColorRGBA465.setUSE("HAnimSegmentLineColorRGBA")

LineSet463.setColor(ColorRGBA465)

Shape462.setGeometry(LineSet463)

HAnimSegment454.addChildren(Shape462)
Shape466 = x3d.Shape()
LineSet467 = x3d.LineSet()
LineSet467.setVertexCount([2])
Coordinate468 = x3d.Coordinate()
Coordinate468.setPoint([0,1,0,0,1,0])

LineSet467.setCoord(Coordinate468)
#from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
ColorRGBA469 = x3d.ColorRGBA()
ColorRGBA469.setUSE("HAnimSegmentLineColorRGBA")

LineSet467.setColor(ColorRGBA469)

Shape466.setGeometry(LineSet467)

HAnimSegment454.addChildren(Shape466)

HAnimJoint453.addChildren(HAnimSegment454)
HAnimJoint470 = x3d.HAnimJoint()
HAnimJoint470.setName("r_cuneonavicular_1")
HAnimJoint470.setDEF("hanim_r_cuneonavicular_1")
HAnimJoint470.setCenter([0,1,0])
HAnimJoint470.setUlimit([0,0,0])
HAnimJoint470.setLlimit([0,0,0])
HAnimSegment471 = x3d.HAnimSegment()
HAnimSegment471.setName("r_cuneiform_1")
HAnimSegment471.setDEF("hanim_r_cuneiform_1")
Transform472 = x3d.Transform()
#Empty Transform
Transform473 = x3d.Transform()
#Empty Transform
Shape474 = x3d.Shape()
Shape474.setUSE("HAnimJointShape")

Transform473.addChild(Shape474)

Transform472.addChildren(Transform473)

HAnimSegment471.addChildren(Transform472)
Shape475 = x3d.Shape()
LineSet476 = x3d.LineSet()
LineSet476.setVertexCount([2])
Coordinate477 = x3d.Coordinate()
Coordinate477.setPoint([0,1,0,0,1,0])

LineSet476.setCoord(Coordinate477)
#from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
ColorRGBA478 = x3d.ColorRGBA()
ColorRGBA478.setUSE("HAnimSegmentLineColorRGBA")

LineSet476.setColor(ColorRGBA478)

Shape475.setGeometry(LineSet476)

HAnimSegment471.addChildren(Shape475)

HAnimJoint470.addChildren(HAnimSegment471)
HAnimJoint479 = x3d.HAnimJoint()
HAnimJoint479.setName("r_tarsometatarsal_1")
HAnimJoint479.setDEF("hanim_r_tarsometatarsal_1")
HAnimJoint479.setCenter([0,1,0])
HAnimJoint479.setUlimit([0,0,0])
HAnimJoint479.setLlimit([0,0,0])
HAnimSegment480 = x3d.HAnimSegment()
HAnimSegment480.setName("r_metatarsal_1")
HAnimSegment480.setDEF("hanim_r_metatarsal_1")
Transform481 = x3d.Transform()
#Empty Transform
Transform482 = x3d.Transform()
#Empty Transform
Shape483 = x3d.Shape()
Shape483.setUSE("HAnimJointShape")

Transform482.addChild(Shape483)

Transform481.addChildren(Transform482)

HAnimSegment480.addChildren(Transform481)
Shape484 = x3d.Shape()
LineSet485 = x3d.LineSet()
LineSet485.setVertexCount([2])
Coordinate486 = x3d.Coordinate()
Coordinate486.setPoint([0,1,0,0,1,0])

LineSet485.setCoord(Coordinate486)
#from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
ColorRGBA487 = x3d.ColorRGBA()
ColorRGBA487.setUSE("HAnimSegmentLineColorRGBA")

LineSet485.setColor(ColorRGBA487)

Shape484.setGeometry(LineSet485)

HAnimSegment480.addChildren(Shape484)
HAnimSite488 = x3d.HAnimSite()
HAnimSite488.setName("r_metatarsal_phalanx_1_pt")
HAnimSite488.setDEF("hanim_r_metatarsal_phalanx_1_pt")
HAnimSite488.setTranslation([0,1,0])
TouchSensor489 = x3d.TouchSensor()
TouchSensor489.setDescription("HAnimSite r_metatarsal_phalanx_1_pt")

HAnimSite488.addChildren(TouchSensor489)
Shape490 = x3d.Shape()
Shape490.setUSE("HAnimSiteShape")

HAnimSite488.addChildren(Shape490)

HAnimSegment480.addChildren(HAnimSite488)

HAnimJoint479.addChildren(HAnimSegment480)
HAnimJoint491 = x3d.HAnimJoint()
HAnimJoint491.setName("r_metatarsophalangeal_1")
HAnimJoint491.setDEF("hanim_r_metatarsophalangeal_1")
HAnimJoint491.setCenter([0,1,0])
HAnimJoint491.setUlimit([0,0,0])
HAnimJoint491.setLlimit([0,0,0])
HAnimSegment492 = x3d.HAnimSegment()
HAnimSegment492.setName("r_tarsal_proximal_phalanx_1")
HAnimSegment492.setDEF("hanim_r_tarsal_proximal_phalanx_1")
Transform493 = x3d.Transform()
#Empty Transform
Transform494 = x3d.Transform()
#Empty Transform
Shape495 = x3d.Shape()
Shape495.setUSE("HAnimJointShape")

Transform494.addChild(Shape495)

Transform493.addChildren(Transform494)

HAnimSegment492.addChildren(Transform493)
Shape496 = x3d.Shape()
LineSet497 = x3d.LineSet()
LineSet497.setVertexCount([2])
Coordinate498 = x3d.Coordinate()
Coordinate498.setPoint([0,1,0,0,1,0])

LineSet497.setCoord(Coordinate498)
#from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
ColorRGBA499 = x3d.ColorRGBA()
ColorRGBA499.setUSE("HAnimSegmentLineColorRGBA")

LineSet497.setColor(ColorRGBA499)

Shape496.setGeometry(LineSet497)

HAnimSegment492.addChildren(Shape496)
HAnimSite500 = x3d.HAnimSite()
HAnimSite500.setName("r_tarsal_distal_phalanx_1_tip")
HAnimSite500.setDEF("hanim_r_tarsal_distal_phalanx_1_tip")
HAnimSite500.setTranslation([0.1,-1.05,0])
TouchSensor501 = x3d.TouchSensor()
TouchSensor501.setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip")

HAnimSite500.addChildren(TouchSensor501)
Shape502 = x3d.Shape()
Shape502.setUSE("HAnimSiteShape")

HAnimSite500.addChildren(Shape502)

HAnimSegment492.addChildren(HAnimSite500)

HAnimJoint491.addChildren(HAnimSegment492)
HAnimJoint503 = x3d.HAnimJoint()
HAnimJoint503.setName("r_tarsal_interphalangeal_1")
HAnimJoint503.setDEF("hanim_r_tarsal_interphalangeal_1")
HAnimJoint503.setCenter([0,1,0])
HAnimJoint503.setUlimit([0,0,0])
HAnimJoint503.setLlimit([0,0,0])

HAnimJoint491.addChildren(HAnimJoint503)

HAnimJoint479.addChildren(HAnimJoint491)

HAnimJoint470.addChildren(HAnimJoint479)

HAnimJoint453.addChildren(HAnimJoint470)
HAnimJoint504 = x3d.HAnimJoint()
HAnimJoint504.setName("r_cuneonavicular_2")
HAnimJoint504.setDEF("hanim_r_cuneonavicular_2")
HAnimJoint504.setCenter([0,1,0])
HAnimJoint504.setUlimit([0,0,0])
HAnimJoint504.setLlimit([0,0,0])
HAnimSegment505 = x3d.HAnimSegment()
HAnimSegment505.setName("r_cuneiform_2")
HAnimSegment505.setDEF("hanim_r_cuneiform_2")
Transform506 = x3d.Transform()
#Empty Transform
Transform507 = x3d.Transform()
#Empty Transform
Shape508 = x3d.Shape()
Shape508.setUSE("HAnimJointShape")

Transform507.addChild(Shape508)

Transform506.addChildren(Transform507)

HAnimSegment505.addChildren(Transform506)
Shape509 = x3d.Shape()
LineSet510 = x3d.LineSet()
LineSet510.setVertexCount([2])
Coordinate511 = x3d.Coordinate()
Coordinate511.setPoint([0,1,0,0,1,0])

LineSet510.setCoord(Coordinate511)
#from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
ColorRGBA512 = x3d.ColorRGBA()
ColorRGBA512.setUSE("HAnimSegmentLineColorRGBA")

LineSet510.setColor(ColorRGBA512)

Shape509.setGeometry(LineSet510)

HAnimSegment505.addChildren(Shape509)

HAnimJoint504.addChildren(HAnimSegment505)
HAnimJoint513 = x3d.HAnimJoint()
HAnimJoint513.setName("r_tarsometatarsal_2")
HAnimJoint513.setDEF("hanim_r_tarsometatarsal_2")
HAnimJoint513.setCenter([0,1,0])
HAnimJoint513.setUlimit([0,0,0])
HAnimJoint513.setLlimit([0,0,0])
HAnimSegment514 = x3d.HAnimSegment()
HAnimSegment514.setName("r_metatarsal_2")
HAnimSegment514.setDEF("hanim_r_metatarsal_2")
Transform515 = x3d.Transform()
#Empty Transform
Transform516 = x3d.Transform()
#Empty Transform
Shape517 = x3d.Shape()
Shape517.setUSE("HAnimJointShape")

Transform516.addChild(Shape517)

Transform515.addChildren(Transform516)

HAnimSegment514.addChildren(Transform515)
Shape518 = x3d.Shape()
LineSet519 = x3d.LineSet()
LineSet519.setVertexCount([2])
Coordinate520 = x3d.Coordinate()
Coordinate520.setPoint([0,1,0,0,1,0])

LineSet519.setCoord(Coordinate520)
#from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA521 = x3d.ColorRGBA()
ColorRGBA521.setUSE("HAnimSegmentLineColorRGBA")

LineSet519.setColor(ColorRGBA521)

Shape518.setGeometry(LineSet519)

HAnimSegment514.addChildren(Shape518)

HAnimJoint513.addChildren(HAnimSegment514)
HAnimJoint522 = x3d.HAnimJoint()
HAnimJoint522.setName("r_metatarsophalangeal_2")
HAnimJoint522.setDEF("hanim_r_metatarsophalangeal_2")
HAnimJoint522.setCenter([0,1,0])
HAnimJoint522.setUlimit([0,0,0])
HAnimJoint522.setLlimit([0,0,0])
HAnimSegment523 = x3d.HAnimSegment()
HAnimSegment523.setName("r_tarsal_proximal_phalanx_2")
HAnimSegment523.setDEF("hanim_r_tarsal_proximal_phalanx_2")
Transform524 = x3d.Transform()
#Empty Transform
Transform525 = x3d.Transform()
#Empty Transform
Shape526 = x3d.Shape()
Shape526.setUSE("HAnimJointShape")

Transform525.addChild(Shape526)

Transform524.addChildren(Transform525)

HAnimSegment523.addChildren(Transform524)
Shape527 = x3d.Shape()
LineSet528 = x3d.LineSet()
LineSet528.setVertexCount([2])
Coordinate529 = x3d.Coordinate()
Coordinate529.setPoint([0,1,0,0,1,0])

LineSet528.setCoord(Coordinate529)
#from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA530 = x3d.ColorRGBA()
ColorRGBA530.setUSE("HAnimSegmentLineColorRGBA")

LineSet528.setColor(ColorRGBA530)

Shape527.setGeometry(LineSet528)

HAnimSegment523.addChildren(Shape527)

HAnimJoint522.addChildren(HAnimSegment523)
HAnimJoint531 = x3d.HAnimJoint()
HAnimJoint531.setName("r_tarsal_proximal_interphalangeal_2")
HAnimJoint531.setDEF("hanim_r_tarsal_proximal_interphalangeal_2")
HAnimJoint531.setCenter([0,1,0])
HAnimJoint531.setUlimit([0,0,0])
HAnimJoint531.setLlimit([0,0,0])
HAnimSegment532 = x3d.HAnimSegment()
HAnimSegment532.setName("r_tarsal_middle_phalanx_2")
HAnimSegment532.setDEF("hanim_r_tarsal_middle_phalanx_2")
Transform533 = x3d.Transform()
#Empty Transform
Transform534 = x3d.Transform()
#Empty Transform
Shape535 = x3d.Shape()
Shape535.setUSE("HAnimJointShape")

Transform534.addChild(Shape535)

Transform533.addChildren(Transform534)

HAnimSegment532.addChildren(Transform533)
Shape536 = x3d.Shape()
LineSet537 = x3d.LineSet()
LineSet537.setVertexCount([2])
Coordinate538 = x3d.Coordinate()
Coordinate538.setPoint([0,1,0,0,1,0])

LineSet537.setCoord(Coordinate538)
#from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA539 = x3d.ColorRGBA()
ColorRGBA539.setUSE("HAnimSegmentLineColorRGBA")

LineSet537.setColor(ColorRGBA539)

Shape536.setGeometry(LineSet537)

HAnimSegment532.addChildren(Shape536)
HAnimSite540 = x3d.HAnimSite()
HAnimSite540.setName("r_tarsal_distal_phalanx_2_tip")
HAnimSite540.setDEF("hanim_r_tarsal_distal_phalanx_2_tip")
HAnimSite540.setTranslation([-0.05,-1.12,0])
TouchSensor541 = x3d.TouchSensor()
TouchSensor541.setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip")

HAnimSite540.addChildren(TouchSensor541)
Shape542 = x3d.Shape()
Shape542.setUSE("HAnimSiteShape")

HAnimSite540.addChildren(Shape542)

HAnimSegment532.addChildren(HAnimSite540)

HAnimJoint531.addChildren(HAnimSegment532)
HAnimJoint543 = x3d.HAnimJoint()
HAnimJoint543.setName("r_tarsal_distal_interphalangeal_2")
HAnimJoint543.setDEF("hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint543.setCenter([0,1,0])
HAnimJoint543.setUlimit([0,0,0])
HAnimJoint543.setLlimit([0,0,0])

HAnimJoint531.addChildren(HAnimJoint543)

HAnimJoint522.addChildren(HAnimJoint531)

HAnimJoint513.addChildren(HAnimJoint522)

HAnimJoint504.addChildren(HAnimJoint513)

HAnimJoint453.addChildren(HAnimJoint504)
HAnimJoint544 = x3d.HAnimJoint()
HAnimJoint544.setName("r_cuneonavicular_3")
HAnimJoint544.setDEF("hanim_r_cuneonavicular_3")
HAnimJoint544.setCenter([0,1,0])
HAnimJoint544.setUlimit([0,0,0])
HAnimJoint544.setLlimit([0,0,0])
HAnimSegment545 = x3d.HAnimSegment()
HAnimSegment545.setName("r_cuneiform_3")
HAnimSegment545.setDEF("hanim_r_cuneiform_3")
Transform546 = x3d.Transform()
#Empty Transform
Transform547 = x3d.Transform()
#Empty Transform
Shape548 = x3d.Shape()
Shape548.setUSE("HAnimJointShape")

Transform547.addChild(Shape548)

Transform546.addChildren(Transform547)

HAnimSegment545.addChildren(Transform546)
Shape549 = x3d.Shape()
LineSet550 = x3d.LineSet()
LineSet550.setVertexCount([2])
Coordinate551 = x3d.Coordinate()
Coordinate551.setPoint([0,1,0,0,1,0])

LineSet550.setCoord(Coordinate551)
#from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
ColorRGBA552 = x3d.ColorRGBA()
ColorRGBA552.setUSE("HAnimSegmentLineColorRGBA")

LineSet550.setColor(ColorRGBA552)

Shape549.setGeometry(LineSet550)

HAnimSegment545.addChildren(Shape549)

HAnimJoint544.addChildren(HAnimSegment545)
HAnimJoint553 = x3d.HAnimJoint()
HAnimJoint553.setName("r_tarsometatarsal_3")
HAnimJoint553.setDEF("hanim_r_tarsometatarsal_3")
HAnimJoint553.setCenter([0,1,0])
HAnimJoint553.setUlimit([0,0,0])
HAnimJoint553.setLlimit([0,0,0])
HAnimSegment554 = x3d.HAnimSegment()
HAnimSegment554.setName("r_metatarsal_3")
HAnimSegment554.setDEF("hanim_r_metatarsal_3")
Transform555 = x3d.Transform()
#Empty Transform
Transform556 = x3d.Transform()
#Empty Transform
Shape557 = x3d.Shape()
Shape557.setUSE("HAnimJointShape")

Transform556.addChild(Shape557)

Transform555.addChildren(Transform556)

HAnimSegment554.addChildren(Transform555)
Shape558 = x3d.Shape()
LineSet559 = x3d.LineSet()
LineSet559.setVertexCount([2])
Coordinate560 = x3d.Coordinate()
Coordinate560.setPoint([0,1,0,0,1,0])

LineSet559.setCoord(Coordinate560)
#from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2
ColorRGBA561 = x3d.ColorRGBA()
ColorRGBA561.setUSE("HAnimSegmentLineColorRGBA")

LineSet559.setColor(ColorRGBA561)

Shape558.setGeometry(LineSet559)

HAnimSegment554.addChildren(Shape558)

HAnimJoint553.addChildren(HAnimSegment554)
HAnimJoint562 = x3d.HAnimJoint()
HAnimJoint562.setName("r_metatarsophalangeal_3")
HAnimJoint562.setDEF("hanim_r_metatarsophalangeal_3")
HAnimJoint562.setCenter([0,1,0])
HAnimJoint562.setUlimit([0,0,0])
HAnimJoint562.setLlimit([0,0,0])
HAnimSegment563 = x3d.HAnimSegment()
HAnimSegment563.setName("r_tarsal_proximal_phalanx_3")
HAnimSegment563.setDEF("hanim_r_tarsal_proximal_phalanx_3")
Transform564 = x3d.Transform()
#Empty Transform
Transform565 = x3d.Transform()
#Empty Transform
Shape566 = x3d.Shape()
Shape566.setUSE("HAnimJointShape")

Transform565.addChild(Shape566)

Transform564.addChildren(Transform565)

HAnimSegment563.addChildren(Transform564)
Shape567 = x3d.Shape()
LineSet568 = x3d.LineSet()
LineSet568.setVertexCount([2])
Coordinate569 = x3d.Coordinate()
Coordinate569.setPoint([0,1,0,0,1,0])

LineSet568.setCoord(Coordinate569)
#from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA570 = x3d.ColorRGBA()
ColorRGBA570.setUSE("HAnimSegmentLineColorRGBA")

LineSet568.setColor(ColorRGBA570)

Shape567.setGeometry(LineSet568)

HAnimSegment563.addChildren(Shape567)

HAnimJoint562.addChildren(HAnimSegment563)
HAnimJoint571 = x3d.HAnimJoint()
HAnimJoint571.setName("r_tarsal_proximal_interphalangeal_3")
HAnimJoint571.setDEF("hanim_r_tarsal_proximal_interphalangeal_3")
HAnimJoint571.setCenter([0,1,0])
HAnimJoint571.setUlimit([0,0,0])
HAnimJoint571.setLlimit([0,0,0])
HAnimSegment572 = x3d.HAnimSegment()
HAnimSegment572.setName("r_tarsal_middle_phalanx_3")
HAnimSegment572.setDEF("hanim_r_tarsal_middle_phalanx_3")
Transform573 = x3d.Transform()
#Empty Transform
Transform574 = x3d.Transform()
#Empty Transform
Shape575 = x3d.Shape()
Shape575.setUSE("HAnimJointShape")

Transform574.addChild(Shape575)

Transform573.addChildren(Transform574)

HAnimSegment572.addChildren(Transform573)
Shape576 = x3d.Shape()
LineSet577 = x3d.LineSet()
LineSet577.setVertexCount([2])
Coordinate578 = x3d.Coordinate()
Coordinate578.setPoint([0,1,0,0,1,0])

LineSet577.setCoord(Coordinate578)
#from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA579 = x3d.ColorRGBA()
ColorRGBA579.setUSE("HAnimSegmentLineColorRGBA")

LineSet577.setColor(ColorRGBA579)

Shape576.setGeometry(LineSet577)

HAnimSegment572.addChildren(Shape576)
HAnimSite580 = x3d.HAnimSite()
HAnimSite580.setName("r_tarsal_distal_phalanx_3_tip")
HAnimSite580.setDEF("hanim_r_tarsal_distal_phalanx_3_tip")
HAnimSite580.setTranslation([-0.15,-1.13,0])
TouchSensor581 = x3d.TouchSensor()
TouchSensor581.setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip")

HAnimSite580.addChildren(TouchSensor581)
Shape582 = x3d.Shape()
Shape582.setUSE("HAnimSiteShape")

HAnimSite580.addChildren(Shape582)

HAnimSegment572.addChildren(HAnimSite580)

HAnimJoint571.addChildren(HAnimSegment572)
HAnimJoint583 = x3d.HAnimJoint()
HAnimJoint583.setName("r_tarsal_distal_interphalangeal_3")
HAnimJoint583.setDEF("hanim_r_tarsal_distal_interphalangeal_3")
HAnimJoint583.setCenter([0,1,0])
HAnimJoint583.setUlimit([0,0,0])
HAnimJoint583.setLlimit([0,0,0])

HAnimJoint571.addChildren(HAnimJoint583)

HAnimJoint562.addChildren(HAnimJoint571)

HAnimJoint553.addChildren(HAnimJoint562)

HAnimJoint544.addChildren(HAnimJoint553)

HAnimJoint453.addChildren(HAnimJoint544)

HAnimJoint440.addChildren(HAnimJoint453)
HAnimJoint584 = x3d.HAnimJoint()
HAnimJoint584.setName("r_calcaneocuboid")
HAnimJoint584.setDEF("hanim_r_calcaneocuboid")
HAnimJoint584.setCenter([0,1,0])
HAnimJoint584.setUlimit([0,0,0])
HAnimJoint584.setLlimit([0,0,0])
HAnimSegment585 = x3d.HAnimSegment()
HAnimSegment585.setName("r_calcaneus")
HAnimSegment585.setDEF("hanim_r_calcaneus")
Transform586 = x3d.Transform()
#Empty Transform
Transform587 = x3d.Transform()
#Empty Transform
Shape588 = x3d.Shape()
Shape588.setUSE("HAnimJointShape")

Transform587.addChild(Shape588)

Transform586.addChildren(Transform587)

HAnimSegment585.addChildren(Transform586)
Shape589 = x3d.Shape()
LineSet590 = x3d.LineSet()
LineSet590.setVertexCount([2])
Coordinate591 = x3d.Coordinate()
Coordinate591.setPoint([0,1,0,0,1,0])

LineSet590.setCoord(Coordinate591)
#from r_calcaneocuboid to r_transversetarsal vertices 2
ColorRGBA592 = x3d.ColorRGBA()
ColorRGBA592.setUSE("HAnimSegmentLineColorRGBA")

LineSet590.setColor(ColorRGBA592)

Shape589.setGeometry(LineSet590)

HAnimSegment585.addChildren(Shape589)

HAnimJoint584.addChildren(HAnimSegment585)
HAnimJoint593 = x3d.HAnimJoint()
HAnimJoint593.setName("r_transversetarsal")
HAnimJoint593.setDEF("hanim_r_transversetarsal")
HAnimJoint593.setCenter([0,1,0])
HAnimJoint593.setUlimit([0,0,0])
HAnimJoint593.setLlimit([0,0,0])
HAnimSegment594 = x3d.HAnimSegment()
HAnimSegment594.setName("r_cuboid")
HAnimSegment594.setDEF("hanim_r_cuboid")
Transform595 = x3d.Transform()
#Empty Transform
Transform596 = x3d.Transform()
#Empty Transform
Shape597 = x3d.Shape()
Shape597.setUSE("HAnimJointShape")

Transform596.addChild(Shape597)

Transform595.addChildren(Transform596)

HAnimSegment594.addChildren(Transform595)
Shape598 = x3d.Shape()
LineSet599 = x3d.LineSet()
LineSet599.setVertexCount([2])
Coordinate600 = x3d.Coordinate()
Coordinate600.setPoint([0,1,0,0,1,0])

LineSet599.setCoord(Coordinate600)
#from r_transversetarsal to r_tarsometatarsal_4 vertices 2
ColorRGBA601 = x3d.ColorRGBA()
ColorRGBA601.setUSE("HAnimSegmentLineColorRGBA")

LineSet599.setColor(ColorRGBA601)

Shape598.setGeometry(LineSet599)

HAnimSegment594.addChildren(Shape598)
Shape602 = x3d.Shape()
LineSet603 = x3d.LineSet()
LineSet603.setVertexCount([2])
Coordinate604 = x3d.Coordinate()
Coordinate604.setPoint([0,1,0,0,1,0])

LineSet603.setCoord(Coordinate604)
#from r_transversetarsal to r_tarsometatarsal_5 vertices 2
ColorRGBA605 = x3d.ColorRGBA()
ColorRGBA605.setUSE("HAnimSegmentLineColorRGBA")

LineSet603.setColor(ColorRGBA605)

Shape602.setGeometry(LineSet603)

HAnimSegment594.addChildren(Shape602)

HAnimJoint593.addChildren(HAnimSegment594)
HAnimJoint606 = x3d.HAnimJoint()
HAnimJoint606.setName("r_tarsometatarsal_4")
HAnimJoint606.setDEF("hanim_r_tarsometatarsal_4")
HAnimJoint606.setCenter([0,1,0])
HAnimJoint606.setUlimit([0,0,0])
HAnimJoint606.setLlimit([0,0,0])
HAnimSegment607 = x3d.HAnimSegment()
HAnimSegment607.setName("r_metatarsal_4")
HAnimSegment607.setDEF("hanim_r_metatarsal_4")
Transform608 = x3d.Transform()
#Empty Transform
Transform609 = x3d.Transform()
#Empty Transform
Shape610 = x3d.Shape()
Shape610.setUSE("HAnimJointShape")

Transform609.addChild(Shape610)

Transform608.addChildren(Transform609)

HAnimSegment607.addChildren(Transform608)
Shape611 = x3d.Shape()
LineSet612 = x3d.LineSet()
LineSet612.setVertexCount([2])
Coordinate613 = x3d.Coordinate()
Coordinate613.setPoint([0,1,0,0,1,0])

LineSet612.setCoord(Coordinate613)
#from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
ColorRGBA614 = x3d.ColorRGBA()
ColorRGBA614.setUSE("HAnimSegmentLineColorRGBA")

LineSet612.setColor(ColorRGBA614)

Shape611.setGeometry(LineSet612)

HAnimSegment607.addChildren(Shape611)

HAnimJoint606.addChildren(HAnimSegment607)
HAnimJoint615 = x3d.HAnimJoint()
HAnimJoint615.setName("r_metatarsophalangeal_4")
HAnimJoint615.setDEF("hanim_r_metatarsophalangeal_4")
HAnimJoint615.setCenter([0,1,0])
HAnimJoint615.setUlimit([0,0,0])
HAnimJoint615.setLlimit([0,0,0])
HAnimSegment616 = x3d.HAnimSegment()
HAnimSegment616.setName("r_tarsal_proximal_phalanx_4")
HAnimSegment616.setDEF("hanim_r_tarsal_proximal_phalanx_4")
Transform617 = x3d.Transform()
#Empty Transform
Transform618 = x3d.Transform()
#Empty Transform
Shape619 = x3d.Shape()
Shape619.setUSE("HAnimJointShape")

Transform618.addChild(Shape619)

Transform617.addChildren(Transform618)

HAnimSegment616.addChildren(Transform617)
Shape620 = x3d.Shape()
LineSet621 = x3d.LineSet()
LineSet621.setVertexCount([2])
Coordinate622 = x3d.Coordinate()
Coordinate622.setPoint([0,1,0,0,1,0])

LineSet621.setCoord(Coordinate622)
#from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA623 = x3d.ColorRGBA()
ColorRGBA623.setUSE("HAnimSegmentLineColorRGBA")

LineSet621.setColor(ColorRGBA623)

Shape620.setGeometry(LineSet621)

HAnimSegment616.addChildren(Shape620)

HAnimJoint615.addChildren(HAnimSegment616)
HAnimJoint624 = x3d.HAnimJoint()
HAnimJoint624.setName("r_tarsal_proximal_interphalangeal_4")
HAnimJoint624.setDEF("hanim_r_tarsal_proximal_interphalangeal_4")
HAnimJoint624.setCenter([0,1,0])
HAnimJoint624.setUlimit([0,0,0])
HAnimJoint624.setLlimit([0,0,0])
HAnimSegment625 = x3d.HAnimSegment()
HAnimSegment625.setName("r_tarsal_middle_phalanx_4")
HAnimSegment625.setDEF("hanim_r_tarsal_middle_phalanx_4")
Transform626 = x3d.Transform()
#Empty Transform
Transform627 = x3d.Transform()
#Empty Transform
Shape628 = x3d.Shape()
Shape628.setUSE("HAnimJointShape")

Transform627.addChild(Shape628)

Transform626.addChildren(Transform627)

HAnimSegment625.addChildren(Transform626)
Shape629 = x3d.Shape()
LineSet630 = x3d.LineSet()
LineSet630.setVertexCount([2])
Coordinate631 = x3d.Coordinate()
Coordinate631.setPoint([0,1,0,0,1,0])

LineSet630.setCoord(Coordinate631)
#from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA632 = x3d.ColorRGBA()
ColorRGBA632.setUSE("HAnimSegmentLineColorRGBA")

LineSet630.setColor(ColorRGBA632)

Shape629.setGeometry(LineSet630)

HAnimSegment625.addChildren(Shape629)
HAnimSite633 = x3d.HAnimSite()
HAnimSite633.setName("r_tarsal_distal_phalanx_4_tip")
HAnimSite633.setDEF("hanim_r_tarsal_distal_phalanx_4_tip")
HAnimSite633.setTranslation([-0.25,-1.1,0])
TouchSensor634 = x3d.TouchSensor()
TouchSensor634.setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip")

HAnimSite633.addChildren(TouchSensor634)
Shape635 = x3d.Shape()
Shape635.setUSE("HAnimSiteShape")

HAnimSite633.addChildren(Shape635)

HAnimSegment625.addChildren(HAnimSite633)

HAnimJoint624.addChildren(HAnimSegment625)
HAnimJoint636 = x3d.HAnimJoint()
HAnimJoint636.setName("r_tarsal_distal_interphalangeal_4")
HAnimJoint636.setDEF("hanim_r_tarsal_distal_interphalangeal_4")
HAnimJoint636.setCenter([0,1,0])
HAnimJoint636.setUlimit([0,0,0])
HAnimJoint636.setLlimit([0,0,0])

HAnimJoint624.addChildren(HAnimJoint636)

HAnimJoint615.addChildren(HAnimJoint624)

HAnimJoint606.addChildren(HAnimJoint615)

HAnimJoint593.addChildren(HAnimJoint606)
HAnimJoint637 = x3d.HAnimJoint()
HAnimJoint637.setName("r_tarsometatarsal_5")
HAnimJoint637.setDEF("hanim_r_tarsometatarsal_5")
HAnimJoint637.setCenter([0,1,0])
HAnimJoint637.setUlimit([0,0,0])
HAnimJoint637.setLlimit([0,0,0])
HAnimSegment638 = x3d.HAnimSegment()
HAnimSegment638.setName("r_metatarsal_5")
HAnimSegment638.setDEF("hanim_r_metatarsal_5")
Transform639 = x3d.Transform()
#Empty Transform
Transform640 = x3d.Transform()
#Empty Transform
Shape641 = x3d.Shape()
Shape641.setUSE("HAnimJointShape")

Transform640.addChild(Shape641)

Transform639.addChildren(Transform640)

HAnimSegment638.addChildren(Transform639)
Shape642 = x3d.Shape()
LineSet643 = x3d.LineSet()
LineSet643.setVertexCount([2])
Coordinate644 = x3d.Coordinate()
Coordinate644.setPoint([0,1,0,0,1,0])

LineSet643.setCoord(Coordinate644)
#from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
ColorRGBA645 = x3d.ColorRGBA()
ColorRGBA645.setUSE("HAnimSegmentLineColorRGBA")

LineSet643.setColor(ColorRGBA645)

Shape642.setGeometry(LineSet643)

HAnimSegment638.addChildren(Shape642)
HAnimSite646 = x3d.HAnimSite()
HAnimSite646.setName("r_metatarsal_phalanx_5_pt")
HAnimSite646.setDEF("hanim_r_metatarsal_phalanx_5_pt")
HAnimSite646.setTranslation([0,1,0])
TouchSensor647 = x3d.TouchSensor()
TouchSensor647.setDescription("HAnimSite r_metatarsal_phalanx_5_pt")

HAnimSite646.addChildren(TouchSensor647)
Shape648 = x3d.Shape()
Shape648.setUSE("HAnimSiteShape")

HAnimSite646.addChildren(Shape648)

HAnimSegment638.addChildren(HAnimSite646)

HAnimJoint637.addChildren(HAnimSegment638)
HAnimJoint649 = x3d.HAnimJoint()
HAnimJoint649.setName("r_metatarsophalangeal_5")
HAnimJoint649.setDEF("hanim_r_metatarsophalangeal_5")
HAnimJoint649.setCenter([0,1,0])
HAnimJoint649.setUlimit([0,0,0])
HAnimJoint649.setLlimit([0,0,0])
HAnimSegment650 = x3d.HAnimSegment()
HAnimSegment650.setName("r_tarsal_proximal_phalanx_5")
HAnimSegment650.setDEF("hanim_r_tarsal_proximal_phalanx_5")
Transform651 = x3d.Transform()
#Empty Transform
Transform652 = x3d.Transform()
#Empty Transform
Shape653 = x3d.Shape()
Shape653.setUSE("HAnimJointShape")

Transform652.addChild(Shape653)

Transform651.addChildren(Transform652)

HAnimSegment650.addChildren(Transform651)
Shape654 = x3d.Shape()
LineSet655 = x3d.LineSet()
LineSet655.setVertexCount([2])
Coordinate656 = x3d.Coordinate()
Coordinate656.setPoint([0,1,0,0,1,0])

LineSet655.setCoord(Coordinate656)
#from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA657 = x3d.ColorRGBA()
ColorRGBA657.setUSE("HAnimSegmentLineColorRGBA")

LineSet655.setColor(ColorRGBA657)

Shape654.setGeometry(LineSet655)

HAnimSegment650.addChildren(Shape654)

HAnimJoint649.addChildren(HAnimSegment650)
HAnimJoint658 = x3d.HAnimJoint()
HAnimJoint658.setName("r_tarsal_proximal_interphalangeal_5")
HAnimJoint658.setDEF("hanim_r_tarsal_proximal_interphalangeal_5")
HAnimJoint658.setCenter([0,1,0])
HAnimJoint658.setUlimit([0,0,0])
HAnimJoint658.setLlimit([0,0,0])
HAnimSegment659 = x3d.HAnimSegment()
HAnimSegment659.setName("r_tarsal_middle_phalanx_5")
HAnimSegment659.setDEF("hanim_r_tarsal_middle_phalanx_5")
Transform660 = x3d.Transform()
#Empty Transform
Transform661 = x3d.Transform()
#Empty Transform
Shape662 = x3d.Shape()
Shape662.setUSE("HAnimJointShape")

Transform661.addChild(Shape662)

Transform660.addChildren(Transform661)

HAnimSegment659.addChildren(Transform660)
Shape663 = x3d.Shape()
LineSet664 = x3d.LineSet()
LineSet664.setVertexCount([2])
Coordinate665 = x3d.Coordinate()
Coordinate665.setPoint([0,1,0,0,1,0])

LineSet664.setCoord(Coordinate665)
#from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA666 = x3d.ColorRGBA()
ColorRGBA666.setUSE("HAnimSegmentLineColorRGBA")

LineSet664.setColor(ColorRGBA666)

Shape663.setGeometry(LineSet664)

HAnimSegment659.addChildren(Shape663)
HAnimSite667 = x3d.HAnimSite()
HAnimSite667.setName("r_tarsal_distal_phalanx_5_tip")
HAnimSite667.setDEF("hanim_r_tarsal_distal_phalanx_5_tip")
HAnimSite667.setTranslation([-0.34,-1.05,0])
TouchSensor668 = x3d.TouchSensor()
TouchSensor668.setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip")

HAnimSite667.addChildren(TouchSensor668)
Shape669 = x3d.Shape()
Shape669.setUSE("HAnimSiteShape")

HAnimSite667.addChildren(Shape669)

HAnimSegment659.addChildren(HAnimSite667)

HAnimJoint658.addChildren(HAnimSegment659)
HAnimJoint670 = x3d.HAnimJoint()
HAnimJoint670.setName("r_tarsal_distal_interphalangeal_5")
HAnimJoint670.setDEF("hanim_r_tarsal_distal_interphalangeal_5")
HAnimJoint670.setCenter([0,1,0])
HAnimJoint670.setUlimit([0,0,0])
HAnimJoint670.setLlimit([0,0,0])

HAnimJoint658.addChildren(HAnimJoint670)

HAnimJoint649.addChildren(HAnimJoint658)

HAnimJoint637.addChildren(HAnimJoint649)

HAnimJoint593.addChildren(HAnimJoint637)

HAnimJoint584.addChildren(HAnimJoint593)

HAnimJoint440.addChildren(HAnimJoint584)

HAnimJoint425.addChildren(HAnimJoint440)

HAnimJoint407.addChildren(HAnimJoint425)

HAnimJoint106.addChildren(HAnimJoint407)

HAnimJoint52.addChildren(HAnimJoint106)
HAnimJoint671 = x3d.HAnimJoint()
HAnimJoint671.setName("vl5")
HAnimJoint671.setDEF("hanim_vl5")
HAnimJoint671.setCenter([0.0028,1.0568,-0.0776])
HAnimJoint671.setUlimit([0,0,0])
HAnimJoint671.setLlimit([0,0,0])
HAnimSegment672 = x3d.HAnimSegment()
HAnimSegment672.setName("l5")
HAnimSegment672.setDEF("hanim_l5")
Transform673 = x3d.Transform()
#Empty Transform
Transform674 = x3d.Transform()
#Empty Transform
Shape675 = x3d.Shape()
Shape675.setUSE("HAnimJointShape")

Transform674.addChild(Shape675)

Transform673.addChildren(Transform674)

HAnimSegment672.addChildren(Transform673)
Shape676 = x3d.Shape()
LineSet677 = x3d.LineSet()
LineSet677.setVertexCount([2])
Coordinate678 = x3d.Coordinate()
Coordinate678.setPoint([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787])

LineSet677.setCoord(Coordinate678)
#from vl5 to vl4 vertices 2
ColorRGBA679 = x3d.ColorRGBA()
ColorRGBA679.setUSE("HAnimSegmentLineColorRGBA")

LineSet677.setColor(ColorRGBA679)

Shape676.setGeometry(LineSet677)

HAnimSegment672.addChildren(Shape676)

HAnimJoint671.addChildren(HAnimSegment672)
HAnimJoint680 = x3d.HAnimJoint()
HAnimJoint680.setName("vl4")
HAnimJoint680.setDEF("hanim_vl4")
HAnimJoint680.setCenter([0.0035,1.0925,-0.0787])
HAnimJoint680.setUlimit([0,0,0])
HAnimJoint680.setLlimit([0,0,0])
HAnimSegment681 = x3d.HAnimSegment()
HAnimSegment681.setName("l4")
HAnimSegment681.setDEF("hanim_l4")
Transform682 = x3d.Transform()
#Empty Transform
Transform683 = x3d.Transform()
#Empty Transform
Shape684 = x3d.Shape()
Shape684.setUSE("HAnimJointShape")

Transform683.addChild(Shape684)

Transform682.addChildren(Transform683)

HAnimSegment681.addChildren(Transform682)
Shape685 = x3d.Shape()
LineSet686 = x3d.LineSet()
LineSet686.setVertexCount([2])
Coordinate687 = x3d.Coordinate()
Coordinate687.setPoint([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796])

LineSet686.setCoord(Coordinate687)
#from vl4 to vl3 vertices 2
ColorRGBA688 = x3d.ColorRGBA()
ColorRGBA688.setUSE("HAnimSegmentLineColorRGBA")

LineSet686.setColor(ColorRGBA688)

Shape685.setGeometry(LineSet686)

HAnimSegment681.addChildren(Shape685)

HAnimJoint680.addChildren(HAnimSegment681)
HAnimJoint689 = x3d.HAnimJoint()
HAnimJoint689.setName("vl3")
HAnimJoint689.setDEF("hanim_vl3")
HAnimJoint689.setCenter([0.0041,1.1276,-0.0796])
HAnimJoint689.setUlimit([0,0,0])
HAnimJoint689.setLlimit([0,0,0])
HAnimSegment690 = x3d.HAnimSegment()
HAnimSegment690.setName("l3")
HAnimSegment690.setDEF("hanim_l3")
Transform691 = x3d.Transform()
#Empty Transform
Transform692 = x3d.Transform()
#Empty Transform
Shape693 = x3d.Shape()
Shape693.setUSE("HAnimJointShape")

Transform692.addChild(Shape693)

Transform691.addChildren(Transform692)

HAnimSegment690.addChildren(Transform691)
Shape694 = x3d.Shape()
LineSet695 = x3d.LineSet()
LineSet695.setVertexCount([2])
Coordinate696 = x3d.Coordinate()
Coordinate696.setPoint([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08])

LineSet695.setCoord(Coordinate696)
#from vl3 to vl2 vertices 2
ColorRGBA697 = x3d.ColorRGBA()
ColorRGBA697.setUSE("HAnimSegmentLineColorRGBA")

LineSet695.setColor(ColorRGBA697)

Shape694.setGeometry(LineSet695)

HAnimSegment690.addChildren(Shape694)
HAnimSite698 = x3d.HAnimSite()
HAnimSite698.setName("l_rib10_pt")
HAnimSite698.setDEF("hanim_l_rib10_pt")
HAnimSite698.setTranslation([0.0871,1.1925,0.0992])
TouchSensor699 = x3d.TouchSensor()
TouchSensor699.setDescription("HAnimSite l_rib10_pt")

HAnimSite698.addChildren(TouchSensor699)
Shape700 = x3d.Shape()
Shape700.setUSE("HAnimSiteShape")

HAnimSite698.addChildren(Shape700)

HAnimSegment690.addChildren(HAnimSite698)
HAnimSite701 = x3d.HAnimSite()
HAnimSite701.setName("r_rib10_pt")
HAnimSite701.setDEF("hanim_r_rib10_pt")
HAnimSite701.setTranslation([-0.0711,1.1941,0.1016])
TouchSensor702 = x3d.TouchSensor()
TouchSensor702.setDescription("HAnimSite r_rib10_pt")

HAnimSite701.addChildren(TouchSensor702)
Shape703 = x3d.Shape()
Shape703.setUSE("HAnimSiteShape")

HAnimSite701.addChildren(Shape703)

HAnimSegment690.addChildren(HAnimSite701)
HAnimSite704 = x3d.HAnimSite()
HAnimSite704.setName("spine_2_middle_back_pt")
HAnimSite704.setDEF("hanim_spine_2_middle_back_pt")
HAnimSite704.setTranslation([0,1,0])
TouchSensor705 = x3d.TouchSensor()
TouchSensor705.setDescription("HAnimSite spine_2_middle_back_pt")

HAnimSite704.addChildren(TouchSensor705)
Shape706 = x3d.Shape()
Shape706.setUSE("HAnimSiteShape")

HAnimSite704.addChildren(Shape706)

HAnimSegment690.addChildren(HAnimSite704)

HAnimJoint689.addChildren(HAnimSegment690)
HAnimJoint707 = x3d.HAnimJoint()
HAnimJoint707.setName("vl2")
HAnimJoint707.setDEF("hanim_vl2")
HAnimJoint707.setCenter([0.0045,1.1546,-0.08])
HAnimJoint707.setUlimit([0,0,0])
HAnimJoint707.setLlimit([0,0,0])
HAnimSegment708 = x3d.HAnimSegment()
HAnimSegment708.setName("l2")
HAnimSegment708.setDEF("hanim_l2")
Transform709 = x3d.Transform()
#Empty Transform
Transform710 = x3d.Transform()
#Empty Transform
Shape711 = x3d.Shape()
Shape711.setUSE("HAnimJointShape")

Transform710.addChild(Shape711)

Transform709.addChildren(Transform710)

HAnimSegment708.addChildren(Transform709)
Shape712 = x3d.Shape()
LineSet713 = x3d.LineSet()
LineSet713.setVertexCount([2])
Coordinate714 = x3d.Coordinate()
Coordinate714.setPoint([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805])

LineSet713.setCoord(Coordinate714)
#from vl2 to vl1 vertices 2
ColorRGBA715 = x3d.ColorRGBA()
ColorRGBA715.setUSE("HAnimSegmentLineColorRGBA")

LineSet713.setColor(ColorRGBA715)

Shape712.setGeometry(LineSet713)

HAnimSegment708.addChildren(Shape712)

HAnimJoint707.addChildren(HAnimSegment708)
HAnimJoint716 = x3d.HAnimJoint()
HAnimJoint716.setName("vl1")
HAnimJoint716.setDEF("hanim_vl1")
HAnimJoint716.setCenter([0.0048,1.1912,-0.0805])
HAnimJoint716.setUlimit([0,0,0])
HAnimJoint716.setLlimit([0,0,0])
HAnimSegment717 = x3d.HAnimSegment()
HAnimSegment717.setName("l1")
HAnimSegment717.setDEF("hanim_l1")
Transform718 = x3d.Transform()
#Empty Transform
Transform719 = x3d.Transform()
#Empty Transform
Shape720 = x3d.Shape()
Shape720.setUSE("HAnimJointShape")

Transform719.addChild(Shape720)

Transform718.addChildren(Transform719)

HAnimSegment717.addChildren(Transform718)
Shape721 = x3d.Shape()
LineSet722 = x3d.LineSet()
LineSet722.setVertexCount([2])
Coordinate723 = x3d.Coordinate()
Coordinate723.setPoint([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808])

LineSet722.setCoord(Coordinate723)
#from vl1 to vt12 vertices 2
ColorRGBA724 = x3d.ColorRGBA()
ColorRGBA724.setUSE("HAnimSegmentLineColorRGBA")

LineSet722.setColor(ColorRGBA724)

Shape721.setGeometry(LineSet722)

HAnimSegment717.addChildren(Shape721)

HAnimJoint716.addChildren(HAnimSegment717)
HAnimJoint725 = x3d.HAnimJoint()
HAnimJoint725.setName("vt12")
HAnimJoint725.setDEF("hanim_vt12")
HAnimJoint725.setCenter([0.0051,1.2278,-0.0808])
HAnimJoint725.setUlimit([0,0,0])
HAnimJoint725.setLlimit([0,0,0])
HAnimSegment726 = x3d.HAnimSegment()
HAnimSegment726.setName("t12")
HAnimSegment726.setDEF("hanim_t12")
Transform727 = x3d.Transform()
#Empty Transform
Transform728 = x3d.Transform()
#Empty Transform
Shape729 = x3d.Shape()
Shape729.setUSE("HAnimJointShape")

Transform728.addChild(Shape729)

Transform727.addChildren(Transform728)

HAnimSegment726.addChildren(Transform727)
Shape730 = x3d.Shape()
LineSet731 = x3d.LineSet()
LineSet731.setVertexCount([2])
Coordinate732 = x3d.Coordinate()
Coordinate732.setPoint([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081])

LineSet731.setCoord(Coordinate732)
#from vt12 to vt11 vertices 2
ColorRGBA733 = x3d.ColorRGBA()
ColorRGBA733.setUSE("HAnimSegmentLineColorRGBA")

LineSet731.setColor(ColorRGBA733)

Shape730.setGeometry(LineSet731)

HAnimSegment726.addChildren(Shape730)

HAnimJoint725.addChildren(HAnimSegment726)
HAnimJoint734 = x3d.HAnimJoint()
HAnimJoint734.setName("vt11")
HAnimJoint734.setDEF("hanim_vt11")
HAnimJoint734.setCenter([0.0053,1.2679,-0.081])
HAnimJoint734.setUlimit([0,0,0])
HAnimJoint734.setLlimit([0,0,0])
HAnimSegment735 = x3d.HAnimSegment()
HAnimSegment735.setName("t11")
HAnimSegment735.setDEF("hanim_t11")
Transform736 = x3d.Transform()
#Empty Transform
Transform737 = x3d.Transform()
#Empty Transform
Shape738 = x3d.Shape()
Shape738.setUSE("HAnimJointShape")

Transform737.addChild(Shape738)

Transform736.addChildren(Transform737)

HAnimSegment735.addChildren(Transform736)
Shape739 = x3d.Shape()
LineSet740 = x3d.LineSet()
LineSet740.setVertexCount([2])
Coordinate741 = x3d.Coordinate()
Coordinate741.setPoint([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822])

LineSet740.setCoord(Coordinate741)
#from vt11 to vt10 vertices 2
ColorRGBA742 = x3d.ColorRGBA()
ColorRGBA742.setUSE("HAnimSegmentLineColorRGBA")

LineSet740.setColor(ColorRGBA742)

Shape739.setGeometry(LineSet740)

HAnimSegment735.addChildren(Shape739)
HAnimSite743 = x3d.HAnimSite()
HAnimSite743.setName("substernale_pt")
HAnimSite743.setDEF("hanim_substernale_pt")
HAnimSite743.setTranslation([0.0085,1.2995,0.1147])
TouchSensor744 = x3d.TouchSensor()
TouchSensor744.setDescription("HAnimSite substernale_pt")

HAnimSite743.addChildren(TouchSensor744)
Shape745 = x3d.Shape()
Shape745.setUSE("HAnimSiteShape")

HAnimSite743.addChildren(Shape745)

HAnimSegment735.addChildren(HAnimSite743)

HAnimJoint734.addChildren(HAnimSegment735)
HAnimJoint746 = x3d.HAnimJoint()
HAnimJoint746.setName("vt10")
HAnimJoint746.setDEF("hanim_vt10")
HAnimJoint746.setCenter([0.0056,1.2848,-0.0822])
HAnimJoint746.setUlimit([0,0,0])
HAnimJoint746.setLlimit([0,0,0])
HAnimSegment747 = x3d.HAnimSegment()
HAnimSegment747.setName("t10")
HAnimSegment747.setDEF("hanim_t10")
Transform748 = x3d.Transform()
#Empty Transform
Transform749 = x3d.Transform()
#Empty Transform
Shape750 = x3d.Shape()
Shape750.setUSE("HAnimJointShape")

Transform749.addChild(Shape750)

Transform748.addChildren(Transform749)

HAnimSegment747.addChildren(Transform748)
Shape751 = x3d.Shape()
LineSet752 = x3d.LineSet()
LineSet752.setVertexCount([2])
Coordinate753 = x3d.Coordinate()
Coordinate753.setPoint([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838])

LineSet752.setCoord(Coordinate753)
#from vt10 to vt9 vertices 2
ColorRGBA754 = x3d.ColorRGBA()
ColorRGBA754.setUSE("HAnimSegmentLineColorRGBA")

LineSet752.setColor(ColorRGBA754)

Shape751.setGeometry(LineSet752)

HAnimSegment747.addChildren(Shape751)
HAnimSite755 = x3d.HAnimSite()
HAnimSite755.setName("l_thelion_pt")
HAnimSite755.setDEF("hanim_l_thelion_pt")
HAnimSite755.setTranslation([0.0918,1.3382,0.1192])
TouchSensor756 = x3d.TouchSensor()
TouchSensor756.setDescription("HAnimSite l_thelion_pt")

HAnimSite755.addChildren(TouchSensor756)
Shape757 = x3d.Shape()
Shape757.setUSE("HAnimSiteShape")

HAnimSite755.addChildren(Shape757)

HAnimSegment747.addChildren(HAnimSite755)
HAnimSite758 = x3d.HAnimSite()
HAnimSite758.setName("r_thelion_pt")
HAnimSite758.setDEF("hanim_r_thelion_pt")
HAnimSite758.setTranslation([-0.0736,1.3385,0.1217])
TouchSensor759 = x3d.TouchSensor()
TouchSensor759.setDescription("HAnimSite r_thelion_pt")

HAnimSite758.addChildren(TouchSensor759)
Shape760 = x3d.Shape()
Shape760.setUSE("HAnimSiteShape")

HAnimSite758.addChildren(Shape760)

HAnimSegment747.addChildren(HAnimSite758)

HAnimJoint746.addChildren(HAnimSegment747)
HAnimJoint761 = x3d.HAnimJoint()
HAnimJoint761.setName("vt9")
HAnimJoint761.setDEF("hanim_vt9")
HAnimJoint761.setCenter([0.0057,1.3126,-0.0838])
HAnimJoint761.setUlimit([0,0,0])
HAnimJoint761.setLlimit([0,0,0])
HAnimSegment762 = x3d.HAnimSegment()
HAnimSegment762.setName("t9")
HAnimSegment762.setDEF("hanim_t9")
Transform763 = x3d.Transform()
#Empty Transform
Transform764 = x3d.Transform()
#Empty Transform
Shape765 = x3d.Shape()
Shape765.setUSE("HAnimJointShape")

Transform764.addChild(Shape765)

Transform763.addChildren(Transform764)

HAnimSegment762.addChildren(Transform763)
Shape766 = x3d.Shape()
LineSet767 = x3d.LineSet()
LineSet767.setVertexCount([2])
Coordinate768 = x3d.Coordinate()
Coordinate768.setPoint([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845])

LineSet767.setCoord(Coordinate768)
#from vt9 to vt8 vertices 2
ColorRGBA769 = x3d.ColorRGBA()
ColorRGBA769.setUSE("HAnimSegmentLineColorRGBA")

LineSet767.setColor(ColorRGBA769)

Shape766.setGeometry(LineSet767)

HAnimSegment762.addChildren(Shape766)

HAnimJoint761.addChildren(HAnimSegment762)
HAnimJoint770 = x3d.HAnimJoint()
HAnimJoint770.setName("vt8")
HAnimJoint770.setDEF("hanim_vt8")
HAnimJoint770.setCenter([0.0057,1.3382,-0.0845])
HAnimJoint770.setUlimit([0,0,0])
HAnimJoint770.setLlimit([0,0,0])
HAnimSegment771 = x3d.HAnimSegment()
HAnimSegment771.setName("t8")
HAnimSegment771.setDEF("hanim_t8")
Transform772 = x3d.Transform()
#Empty Transform
Transform773 = x3d.Transform()
#Empty Transform
Shape774 = x3d.Shape()
Shape774.setUSE("HAnimJointShape")

Transform773.addChild(Shape774)

Transform772.addChildren(Transform773)

HAnimSegment771.addChildren(Transform772)
Shape775 = x3d.Shape()
LineSet776 = x3d.LineSet()
LineSet776.setVertexCount([2])
Coordinate777 = x3d.Coordinate()
Coordinate777.setPoint([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833])

LineSet776.setCoord(Coordinate777)
#from vt8 to vt7 vertices 2
ColorRGBA778 = x3d.ColorRGBA()
ColorRGBA778.setUSE("HAnimSegmentLineColorRGBA")

LineSet776.setColor(ColorRGBA778)

Shape775.setGeometry(LineSet776)

HAnimSegment771.addChildren(Shape775)

HAnimJoint770.addChildren(HAnimSegment771)
HAnimJoint779 = x3d.HAnimJoint()
HAnimJoint779.setName("vt7")
HAnimJoint779.setDEF("hanim_vt7")
HAnimJoint779.setCenter([0.0058,1.3625,-0.0833])
HAnimJoint779.setUlimit([0,0,0])
HAnimJoint779.setLlimit([0,0,0])
HAnimSegment780 = x3d.HAnimSegment()
HAnimSegment780.setName("t7")
HAnimSegment780.setDEF("hanim_t7")
Transform781 = x3d.Transform()
#Empty Transform
Transform782 = x3d.Transform()
#Empty Transform
Shape783 = x3d.Shape()
Shape783.setUSE("HAnimJointShape")

Transform782.addChild(Shape783)

Transform781.addChildren(Transform782)

HAnimSegment780.addChildren(Transform781)
Shape784 = x3d.Shape()
LineSet785 = x3d.LineSet()
LineSet785.setVertexCount([2])
Coordinate786 = x3d.Coordinate()
Coordinate786.setPoint([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08])

LineSet785.setCoord(Coordinate786)
#from vt7 to vt6 vertices 2
ColorRGBA787 = x3d.ColorRGBA()
ColorRGBA787.setUSE("HAnimSegmentLineColorRGBA")

LineSet785.setColor(ColorRGBA787)

Shape784.setGeometry(LineSet785)

HAnimSegment780.addChildren(Shape784)
HAnimSite788 = x3d.HAnimSite()
HAnimSite788.setName("l_chest_midsagittal_plane_pt")
HAnimSite788.setDEF("hanim_l_chest_midsagittal_plane_pt")
HAnimSite788.setTranslation([0,1,0])
TouchSensor789 = x3d.TouchSensor()
TouchSensor789.setDescription("HAnimSite l_chest_midsagittal_plane_pt")

HAnimSite788.addChildren(TouchSensor789)
Shape790 = x3d.Shape()
Shape790.setUSE("HAnimSiteShape")

HAnimSite788.addChildren(Shape790)

HAnimSegment780.addChildren(HAnimSite788)
HAnimSite791 = x3d.HAnimSite()
HAnimSite791.setName("mesosternale_pt")
HAnimSite791.setDEF("hanim_mesosternale_pt")
HAnimSite791.setTranslation([0,1,0])
TouchSensor792 = x3d.TouchSensor()
TouchSensor792.setDescription("HAnimSite mesosternale_pt")

HAnimSite791.addChildren(TouchSensor792)
Shape793 = x3d.Shape()
Shape793.setUSE("HAnimSiteShape")

HAnimSite791.addChildren(Shape793)

HAnimSegment780.addChildren(HAnimSite791)
HAnimSite794 = x3d.HAnimSite()
HAnimSite794.setName("r_chest_midsagittal_plane_pt")
HAnimSite794.setDEF("hanim_r_chest_midsagittal_plane_pt")
HAnimSite794.setTranslation([0,1,0])
TouchSensor795 = x3d.TouchSensor()
TouchSensor795.setDescription("HAnimSite r_chest_midsagittal_plane_pt")

HAnimSite794.addChildren(TouchSensor795)
Shape796 = x3d.Shape()
Shape796.setUSE("HAnimSiteShape")

HAnimSite794.addChildren(Shape796)

HAnimSegment780.addChildren(HAnimSite794)
HAnimSite797 = x3d.HAnimSite()
HAnimSite797.setName("rear_center_midsagittal_plane_pt")
HAnimSite797.setDEF("hanim_rear_center_midsagittal_plane_pt")
HAnimSite797.setTranslation([0,1,0])
TouchSensor798 = x3d.TouchSensor()
TouchSensor798.setDescription("HAnimSite rear_center_midsagittal_plane_pt")

HAnimSite797.addChildren(TouchSensor798)
Shape799 = x3d.Shape()
Shape799.setUSE("HAnimSiteShape")

HAnimSite797.addChildren(Shape799)

HAnimSegment780.addChildren(HAnimSite797)

HAnimJoint779.addChildren(HAnimSegment780)
HAnimJoint800 = x3d.HAnimJoint()
HAnimJoint800.setName("vt6")
HAnimJoint800.setDEF("hanim_vt6")
HAnimJoint800.setCenter([0.0059,1.3866,-0.08])
HAnimJoint800.setUlimit([0,0,0])
HAnimJoint800.setLlimit([0,0,0])
HAnimSegment801 = x3d.HAnimSegment()
HAnimSegment801.setName("t6")
HAnimSegment801.setDEF("hanim_t6")
Transform802 = x3d.Transform()
#Empty Transform
Transform803 = x3d.Transform()
#Empty Transform
Shape804 = x3d.Shape()
Shape804.setUSE("HAnimJointShape")

Transform803.addChild(Shape804)

Transform802.addChildren(Transform803)

HAnimSegment801.addChildren(Transform802)
Shape805 = x3d.Shape()
LineSet806 = x3d.LineSet()
LineSet806.setVertexCount([2])
Coordinate807 = x3d.Coordinate()
Coordinate807.setPoint([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745])

LineSet806.setCoord(Coordinate807)
#from vt6 to vt5 vertices 2
ColorRGBA808 = x3d.ColorRGBA()
ColorRGBA808.setUSE("HAnimSegmentLineColorRGBA")

LineSet806.setColor(ColorRGBA808)

Shape805.setGeometry(LineSet806)

HAnimSegment801.addChildren(Shape805)
HAnimSite809 = x3d.HAnimSite()
HAnimSite809.setName("spine_1_middle_back_pt")
HAnimSite809.setDEF("hanim_spine_1_middle_back_pt")
HAnimSite809.setTranslation([0,1,0])
TouchSensor810 = x3d.TouchSensor()
TouchSensor810.setDescription("HAnimSite spine_1_middle_back_pt")

HAnimSite809.addChildren(TouchSensor810)
Shape811 = x3d.Shape()
Shape811.setUSE("HAnimSiteShape")

HAnimSite809.addChildren(Shape811)

HAnimSegment801.addChildren(HAnimSite809)

HAnimJoint800.addChildren(HAnimSegment801)
HAnimJoint812 = x3d.HAnimJoint()
HAnimJoint812.setName("vt5")
HAnimJoint812.setDEF("hanim_vt5")
HAnimJoint812.setCenter([0.006,1.4102,-0.0745])
HAnimJoint812.setUlimit([0,0,0])
HAnimJoint812.setLlimit([0,0,0])
HAnimSegment813 = x3d.HAnimSegment()
HAnimSegment813.setName("t5")
HAnimSegment813.setDEF("hanim_t5")
Transform814 = x3d.Transform()
#Empty Transform
Transform815 = x3d.Transform()
#Empty Transform
Shape816 = x3d.Shape()
Shape816.setUSE("HAnimJointShape")

Transform815.addChild(Shape816)

Transform814.addChildren(Transform815)

HAnimSegment813.addChildren(Transform814)
Shape817 = x3d.Shape()
LineSet818 = x3d.LineSet()
LineSet818.setVertexCount([2])
Coordinate819 = x3d.Coordinate()
Coordinate819.setPoint([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675])

LineSet818.setCoord(Coordinate819)
#from vt5 to vt4 vertices 2
ColorRGBA820 = x3d.ColorRGBA()
ColorRGBA820.setUSE("HAnimSegmentLineColorRGBA")

LineSet818.setColor(ColorRGBA820)

Shape817.setGeometry(LineSet818)

HAnimSegment813.addChildren(Shape817)

HAnimJoint812.addChildren(HAnimSegment813)
HAnimJoint821 = x3d.HAnimJoint()
HAnimJoint821.setName("vt4")
HAnimJoint821.setDEF("hanim_vt4")
HAnimJoint821.setCenter([0.0061,1.432,-0.0675])
HAnimJoint821.setUlimit([0,0,0])
HAnimJoint821.setLlimit([0,0,0])
HAnimSegment822 = x3d.HAnimSegment()
HAnimSegment822.setName("t4")
HAnimSegment822.setDEF("hanim_t4")
Transform823 = x3d.Transform()
#Empty Transform
Transform824 = x3d.Transform()
#Empty Transform
Shape825 = x3d.Shape()
Shape825.setUSE("HAnimJointShape")

Transform824.addChild(Shape825)

Transform823.addChildren(Transform824)

HAnimSegment822.addChildren(Transform823)
Shape826 = x3d.Shape()
LineSet827 = x3d.LineSet()
LineSet827.setVertexCount([2])
Coordinate828 = x3d.Coordinate()
Coordinate828.setPoint([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057])

LineSet827.setCoord(Coordinate828)
#from vt4 to vt3 vertices 2
ColorRGBA829 = x3d.ColorRGBA()
ColorRGBA829.setUSE("HAnimSegmentLineColorRGBA")

LineSet827.setColor(ColorRGBA829)

Shape826.setGeometry(LineSet827)

HAnimSegment822.addChildren(Shape826)

HAnimJoint821.addChildren(HAnimSegment822)
HAnimJoint830 = x3d.HAnimJoint()
HAnimJoint830.setName("vt3")
HAnimJoint830.setDEF("hanim_vt3")
HAnimJoint830.setCenter([0.0062,1.4583,-0.057])
HAnimJoint830.setUlimit([0,0,0])
HAnimJoint830.setLlimit([0,0,0])
HAnimSegment831 = x3d.HAnimSegment()
HAnimSegment831.setName("t3")
HAnimSegment831.setDEF("hanim_t3")
Transform832 = x3d.Transform()
#Empty Transform
Transform833 = x3d.Transform()
#Empty Transform
Shape834 = x3d.Shape()
Shape834.setUSE("HAnimJointShape")

Transform833.addChild(Shape834)

Transform832.addChildren(Transform833)

HAnimSegment831.addChildren(Transform832)
Shape835 = x3d.Shape()
LineSet836 = x3d.LineSet()
LineSet836.setVertexCount([2])
Coordinate837 = x3d.Coordinate()
Coordinate837.setPoint([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484])

LineSet836.setCoord(Coordinate837)
#from vt3 to vt2 vertices 2
ColorRGBA838 = x3d.ColorRGBA()
ColorRGBA838.setUSE("HAnimSegmentLineColorRGBA")

LineSet836.setColor(ColorRGBA838)

Shape835.setGeometry(LineSet836)

HAnimSegment831.addChildren(Shape835)

HAnimJoint830.addChildren(HAnimSegment831)
HAnimJoint839 = x3d.HAnimJoint()
HAnimJoint839.setName("vt2")
HAnimJoint839.setDEF("hanim_vt2")
HAnimJoint839.setCenter([0.0063,1.4761,-0.0484])
HAnimJoint839.setUlimit([0,0,0])
HAnimJoint839.setLlimit([0,0,0])
HAnimSegment840 = x3d.HAnimSegment()
HAnimSegment840.setName("t2")
HAnimSegment840.setDEF("hanim_t2")
Transform841 = x3d.Transform()
#Empty Transform
Transform842 = x3d.Transform()
#Empty Transform
Shape843 = x3d.Shape()
Shape843.setUSE("HAnimJointShape")

Transform842.addChild(Shape843)

Transform841.addChildren(Transform842)

HAnimSegment840.addChildren(Transform841)
Shape844 = x3d.Shape()
LineSet845 = x3d.LineSet()
LineSet845.setVertexCount([2])
Coordinate846 = x3d.Coordinate()
Coordinate846.setPoint([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387])

LineSet845.setCoord(Coordinate846)
#from vt2 to vt1 vertices 2
ColorRGBA847 = x3d.ColorRGBA()
ColorRGBA847.setUSE("HAnimSegmentLineColorRGBA")

LineSet845.setColor(ColorRGBA847)

Shape844.setGeometry(LineSet845)

HAnimSegment840.addChildren(Shape844)
HAnimSite848 = x3d.HAnimSite()
HAnimSite848.setName("cervicale_pt")
HAnimSite848.setDEF("hanim_cervicale_pt")
HAnimSite848.setTranslation([0.0064,1.52,-0.0815])
TouchSensor849 = x3d.TouchSensor()
TouchSensor849.setDescription("HAnimSite cervicale_pt")

HAnimSite848.addChildren(TouchSensor849)
Shape850 = x3d.Shape()
Shape850.setUSE("HAnimSiteShape")

HAnimSite848.addChildren(Shape850)

HAnimSegment840.addChildren(HAnimSite848)
HAnimSite851 = x3d.HAnimSite()
HAnimSite851.setName("suprasternale_pt")
HAnimSite851.setDEF("hanim_suprasternale_pt")
HAnimSite851.setTranslation([0.0084,1.4714,0.0551])
TouchSensor852 = x3d.TouchSensor()
TouchSensor852.setDescription("HAnimSite suprasternale_pt")

HAnimSite851.addChildren(TouchSensor852)
Shape853 = x3d.Shape()
Shape853.setUSE("HAnimSiteShape")

HAnimSite851.addChildren(Shape853)

HAnimSegment840.addChildren(HAnimSite851)

HAnimJoint839.addChildren(HAnimSegment840)
HAnimJoint854 = x3d.HAnimJoint()
HAnimJoint854.setName("vt1")
HAnimJoint854.setDEF("hanim_vt1")
HAnimJoint854.setCenter([0.0065,1.4951,-0.0387])
HAnimJoint854.setUlimit([0,0,0])
HAnimJoint854.setLlimit([0,0,0])
HAnimSegment855 = x3d.HAnimSegment()
HAnimSegment855.setName("t1")
HAnimSegment855.setDEF("hanim_t1")
Transform856 = x3d.Transform()
#Empty Transform
Transform857 = x3d.Transform()
#Empty Transform
Shape858 = x3d.Shape()
Shape858.setUSE("HAnimJointShape")

Transform857.addChild(Shape858)

Transform856.addChildren(Transform857)

HAnimSegment855.addChildren(Transform856)
Shape859 = x3d.Shape()
LineSet860 = x3d.LineSet()
LineSet860.setVertexCount([2])
Coordinate861 = x3d.Coordinate()
Coordinate861.setPoint([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301])

LineSet860.setCoord(Coordinate861)
#from vt1 to vc7 vertices 2
ColorRGBA862 = x3d.ColorRGBA()
ColorRGBA862.setUSE("HAnimSegmentLineColorRGBA")

LineSet860.setColor(ColorRGBA862)

Shape859.setGeometry(LineSet860)

HAnimSegment855.addChildren(Shape859)
HAnimSite863 = x3d.HAnimSite()
HAnimSite863.setName("l_neck_base_pt")
HAnimSite863.setDEF("hanim_l_neck_base_pt")
HAnimSite863.setTranslation([0.0646,1.5141,-0.038])
TouchSensor864 = x3d.TouchSensor()
TouchSensor864.setDescription("HAnimSite l_neck_base_pt")

HAnimSite863.addChildren(TouchSensor864)
Shape865 = x3d.Shape()
Shape865.setUSE("HAnimSiteShape")

HAnimSite863.addChildren(Shape865)

HAnimSegment855.addChildren(HAnimSite863)
HAnimSite866 = x3d.HAnimSite()
HAnimSite866.setName("r_neck_base_pt")
HAnimSite866.setDEF("hanim_r_neck_base_pt")
HAnimSite866.setTranslation([-0.0419,1.5149,-0.022])
TouchSensor867 = x3d.TouchSensor()
TouchSensor867.setDescription("HAnimSite r_neck_base_pt")

HAnimSite866.addChildren(TouchSensor867)
Shape868 = x3d.Shape()
Shape868.setUSE("HAnimSiteShape")

HAnimSite866.addChildren(Shape868)

HAnimSegment855.addChildren(HAnimSite866)
Shape869 = x3d.Shape()
LineSet870 = x3d.LineSet()
LineSet870.setVertexCount([2])
Coordinate871 = x3d.Coordinate()
Coordinate871.setPoint([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353])

LineSet870.setCoord(Coordinate871)
#from vt1 to l_sternoclavicular vertices 2
ColorRGBA872 = x3d.ColorRGBA()
ColorRGBA872.setUSE("HAnimSegmentLineColorRGBA")

LineSet870.setColor(ColorRGBA872)

Shape869.setGeometry(LineSet870)

HAnimSegment855.addChildren(Shape869)
HAnimSite873 = x3d.HAnimSite()
HAnimSite873.setName("l_acromion_pt")
HAnimSite873.setDEF("hanim_l_acromion_pt")
HAnimSite873.setTranslation([0.2032,1.476,-0.049])
TouchSensor874 = x3d.TouchSensor()
TouchSensor874.setDescription("HAnimSite l_acromion_pt")

HAnimSite873.addChildren(TouchSensor874)
Shape875 = x3d.Shape()
Shape875.setUSE("HAnimSiteShape")

HAnimSite873.addChildren(Shape875)

HAnimSegment855.addChildren(HAnimSite873)
HAnimSite876 = x3d.HAnimSite()
HAnimSite876.setName("l_axilla_distal_pt")
HAnimSite876.setDEF("hanim_l_axilla_distal_pt")
HAnimSite876.setTranslation([0.1706,1.4072,-0.0875])
TouchSensor877 = x3d.TouchSensor()
TouchSensor877.setDescription("HAnimSite l_axilla_distal_pt")

HAnimSite876.addChildren(TouchSensor877)
Shape878 = x3d.Shape()
Shape878.setUSE("HAnimSiteShape")

HAnimSite876.addChildren(Shape878)

HAnimSegment855.addChildren(HAnimSite876)
HAnimSite879 = x3d.HAnimSite()
HAnimSite879.setName("l_axilla_posterior_folds_pt")
HAnimSite879.setDEF("hanim_l_axilla_posterior_folds_pt")
HAnimSite879.setTranslation([0,1,0])
TouchSensor880 = x3d.TouchSensor()
TouchSensor880.setDescription("HAnimSite l_axilla_posterior_folds_pt")

HAnimSite879.addChildren(TouchSensor880)
Shape881 = x3d.Shape()
Shape881.setUSE("HAnimSiteShape")

HAnimSite879.addChildren(Shape881)

HAnimSegment855.addChildren(HAnimSite879)
HAnimSite882 = x3d.HAnimSite()
HAnimSite882.setName("l_axilla_proximal_pt")
HAnimSite882.setDEF("hanim_l_axilla_proximal_pt")
HAnimSite882.setTranslation([0.1777,1.4065,-0.0075])
TouchSensor883 = x3d.TouchSensor()
TouchSensor883.setDescription("HAnimSite l_axilla_proximal_pt")

HAnimSite882.addChildren(TouchSensor883)
Shape884 = x3d.Shape()
Shape884.setUSE("HAnimSiteShape")

HAnimSite882.addChildren(Shape884)

HAnimSegment855.addChildren(HAnimSite882)
HAnimSite885 = x3d.HAnimSite()
HAnimSite885.setName("l_clavicale_pt")
HAnimSite885.setDEF("hanim_l_clavicale_pt")
HAnimSite885.setTranslation([0.0271,1.4943,0.0394])
TouchSensor886 = x3d.TouchSensor()
TouchSensor886.setDescription("HAnimSite l_clavicale_pt")

HAnimSite885.addChildren(TouchSensor886)
Shape887 = x3d.Shape()
Shape887.setUSE("HAnimSiteShape")

HAnimSite885.addChildren(Shape887)

HAnimSegment855.addChildren(HAnimSite885)
Shape888 = x3d.Shape()
LineSet889 = x3d.LineSet()
LineSet889.setVertexCount([2])
Coordinate890 = x3d.Coordinate()
Coordinate890.setPoint([0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033])

LineSet889.setCoord(Coordinate890)
#from vt1 to r_sternoclavicular vertices 2
ColorRGBA891 = x3d.ColorRGBA()
ColorRGBA891.setUSE("HAnimSegmentLineColorRGBA")

LineSet889.setColor(ColorRGBA891)

Shape888.setGeometry(LineSet889)

HAnimSegment855.addChildren(Shape888)
HAnimSite892 = x3d.HAnimSite()
HAnimSite892.setName("r_acromion_pt")
HAnimSite892.setDEF("hanim_r_acromion_pt")
HAnimSite892.setTranslation([-0.1905,1.4791,-0.0431])
TouchSensor893 = x3d.TouchSensor()
TouchSensor893.setDescription("HAnimSite r_acromion_pt")

HAnimSite892.addChildren(TouchSensor893)
Shape894 = x3d.Shape()
Shape894.setUSE("HAnimSiteShape")

HAnimSite892.addChildren(Shape894)

HAnimSegment855.addChildren(HAnimSite892)
HAnimSite895 = x3d.HAnimSite()
HAnimSite895.setName("r_axilla_distal_pt")
HAnimSite895.setDEF("hanim_r_axilla_distal_pt")
HAnimSite895.setTranslation([-0.1603,1.4098,-0.0826])
TouchSensor896 = x3d.TouchSensor()
TouchSensor896.setDescription("HAnimSite r_axilla_distal_pt")

HAnimSite895.addChildren(TouchSensor896)
Shape897 = x3d.Shape()
Shape897.setUSE("HAnimSiteShape")

HAnimSite895.addChildren(Shape897)

HAnimSegment855.addChildren(HAnimSite895)
HAnimSite898 = x3d.HAnimSite()
HAnimSite898.setName("r_axilla_posterior_folds_pt")
HAnimSite898.setDEF("hanim_r_axilla_posterior_folds_pt")
HAnimSite898.setTranslation([0,1,0])
TouchSensor899 = x3d.TouchSensor()
TouchSensor899.setDescription("HAnimSite r_axilla_posterior_folds_pt")

HAnimSite898.addChildren(TouchSensor899)
Shape900 = x3d.Shape()
Shape900.setUSE("HAnimSiteShape")

HAnimSite898.addChildren(Shape900)

HAnimSegment855.addChildren(HAnimSite898)
HAnimSite901 = x3d.HAnimSite()
HAnimSite901.setName("r_axilla_proximal_pt")
HAnimSite901.setDEF("hanim_r_axilla_proximal_pt")
HAnimSite901.setTranslation([-0.1626,1.4072,-0.0031])
TouchSensor902 = x3d.TouchSensor()
TouchSensor902.setDescription("HAnimSite r_axilla_proximal_pt")

HAnimSite901.addChildren(TouchSensor902)
Shape903 = x3d.Shape()
Shape903.setUSE("HAnimSiteShape")

HAnimSite901.addChildren(Shape903)

HAnimSegment855.addChildren(HAnimSite901)
HAnimSite904 = x3d.HAnimSite()
HAnimSite904.setName("r_clavicale_pt")
HAnimSite904.setDEF("hanim_r_clavicale_pt")
HAnimSite904.setTranslation([-0.0115,1.4943,0.04])
TouchSensor905 = x3d.TouchSensor()
TouchSensor905.setDescription("HAnimSite r_clavicale_pt")

HAnimSite904.addChildren(TouchSensor905)
Shape906 = x3d.Shape()
Shape906.setUSE("HAnimSiteShape")

HAnimSite904.addChildren(Shape906)

HAnimSegment855.addChildren(HAnimSite904)

HAnimJoint854.addChildren(HAnimSegment855)
HAnimJoint907 = x3d.HAnimJoint()
HAnimJoint907.setName("vc7")
HAnimJoint907.setDEF("hanim_vc7")
HAnimJoint907.setCenter([0.0066,1.5132,-0.0301])
HAnimJoint907.setUlimit([0,0,0])
HAnimJoint907.setLlimit([0,0,0])
HAnimSegment908 = x3d.HAnimSegment()
HAnimSegment908.setName("c7")
HAnimSegment908.setDEF("hanim_c7")
Transform909 = x3d.Transform()
#Empty Transform
Transform910 = x3d.Transform()
#Empty Transform
Shape911 = x3d.Shape()
Shape911.setUSE("HAnimJointShape")

Transform910.addChild(Shape911)

Transform909.addChildren(Transform910)

HAnimSegment908.addChildren(Transform909)
Shape912 = x3d.Shape()
LineSet913 = x3d.LineSet()
LineSet913.setVertexCount([2])
Coordinate914 = x3d.Coordinate()
Coordinate914.setPoint([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143])

LineSet913.setCoord(Coordinate914)
#from vc7 to vc6 vertices 2
ColorRGBA915 = x3d.ColorRGBA()
ColorRGBA915.setUSE("HAnimSegmentLineColorRGBA")

LineSet913.setColor(ColorRGBA915)

Shape912.setGeometry(LineSet913)

HAnimSegment908.addChildren(Shape912)

HAnimJoint907.addChildren(HAnimSegment908)
HAnimJoint916 = x3d.HAnimJoint()
HAnimJoint916.setName("vc6")
HAnimJoint916.setDEF("hanim_vc6")
HAnimJoint916.setCenter([0.0066,1.5357,-0.0143])
HAnimJoint916.setUlimit([0,0,0])
HAnimJoint916.setLlimit([0,0,0])
HAnimSegment917 = x3d.HAnimSegment()
HAnimSegment917.setName("c6")
HAnimSegment917.setDEF("hanim_c6")
Transform918 = x3d.Transform()
#Empty Transform
Transform919 = x3d.Transform()
#Empty Transform
Shape920 = x3d.Shape()
Shape920.setUSE("HAnimJointShape")

Transform919.addChild(Shape920)

Transform918.addChildren(Transform919)

HAnimSegment917.addChildren(Transform918)
Shape921 = x3d.Shape()
LineSet922 = x3d.LineSet()
LineSet922.setVertexCount([2])
Coordinate923 = x3d.Coordinate()
Coordinate923.setPoint([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082])

LineSet922.setCoord(Coordinate923)
#from vc6 to vc5 vertices 2
ColorRGBA924 = x3d.ColorRGBA()
ColorRGBA924.setUSE("HAnimSegmentLineColorRGBA")

LineSet922.setColor(ColorRGBA924)

Shape921.setGeometry(LineSet922)

HAnimSegment917.addChildren(Shape921)

HAnimJoint916.addChildren(HAnimSegment917)
HAnimJoint925 = x3d.HAnimJoint()
HAnimJoint925.setName("vc5")
HAnimJoint925.setDEF("hanim_vc5")
HAnimJoint925.setCenter([0.0066,1.552,-0.0082])
HAnimJoint925.setUlimit([0,0,0])
HAnimJoint925.setLlimit([0,0,0])
HAnimSegment926 = x3d.HAnimSegment()
HAnimSegment926.setName("c5")
HAnimSegment926.setDEF("hanim_c5")
Transform927 = x3d.Transform()
#Empty Transform
Transform928 = x3d.Transform()
#Empty Transform
Shape929 = x3d.Shape()
Shape929.setUSE("HAnimJointShape")

Transform928.addChild(Shape929)

Transform927.addChildren(Transform928)

HAnimSegment926.addChildren(Transform927)
Shape930 = x3d.Shape()
LineSet931 = x3d.LineSet()
LineSet931.setVertexCount([2])
Coordinate932 = x3d.Coordinate()
Coordinate932.setPoint([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084])

LineSet931.setCoord(Coordinate932)
#from vc5 to vc4 vertices 2
ColorRGBA933 = x3d.ColorRGBA()
ColorRGBA933.setUSE("HAnimSegmentLineColorRGBA")

LineSet931.setColor(ColorRGBA933)

Shape930.setGeometry(LineSet931)

HAnimSegment926.addChildren(Shape930)

HAnimJoint925.addChildren(HAnimSegment926)
HAnimJoint934 = x3d.HAnimJoint()
HAnimJoint934.setName("vc4")
HAnimJoint934.setDEF("hanim_vc4")
HAnimJoint934.setCenter([0.0066,1.5662,-0.0084])
HAnimJoint934.setUlimit([0,0,0])
HAnimJoint934.setLlimit([0,0,0])
HAnimSegment935 = x3d.HAnimSegment()
HAnimSegment935.setName("c4")
HAnimSegment935.setDEF("hanim_c4")
Transform936 = x3d.Transform()
#Empty Transform
Transform937 = x3d.Transform()
#Empty Transform
Shape938 = x3d.Shape()
Shape938.setUSE("HAnimJointShape")

Transform937.addChild(Shape938)

Transform936.addChildren(Transform937)

HAnimSegment935.addChildren(Transform936)
Shape939 = x3d.Shape()
LineSet940 = x3d.LineSet()
LineSet940.setVertexCount([2])
Coordinate941 = x3d.Coordinate()
Coordinate941.setPoint([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103])

LineSet940.setCoord(Coordinate941)
#from vc4 to vc3 vertices 2
ColorRGBA942 = x3d.ColorRGBA()
ColorRGBA942.setUSE("HAnimSegmentLineColorRGBA")

LineSet940.setColor(ColorRGBA942)

Shape939.setGeometry(LineSet940)

HAnimSegment935.addChildren(Shape939)

HAnimJoint934.addChildren(HAnimSegment935)
HAnimJoint943 = x3d.HAnimJoint()
HAnimJoint943.setName("vc3")
HAnimJoint943.setDEF("hanim_vc3")
HAnimJoint943.setCenter([0.0066,1.58,-0.0103])
HAnimJoint943.setUlimit([0,0,0])
HAnimJoint943.setLlimit([0,0,0])
HAnimSegment944 = x3d.HAnimSegment()
HAnimSegment944.setName("c3")
HAnimSegment944.setDEF("hanim_c3")
Transform945 = x3d.Transform()
#Empty Transform
Transform946 = x3d.Transform()
#Empty Transform
Shape947 = x3d.Shape()
Shape947.setUSE("HAnimJointShape")

Transform946.addChild(Shape947)

Transform945.addChildren(Transform946)

HAnimSegment944.addChildren(Transform945)
Shape948 = x3d.Shape()
LineSet949 = x3d.LineSet()
LineSet949.setVertexCount([2])
Coordinate950 = x3d.Coordinate()
Coordinate950.setPoint([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103])

LineSet949.setCoord(Coordinate950)
#from vc3 to vc2 vertices 2
ColorRGBA951 = x3d.ColorRGBA()
ColorRGBA951.setUSE("HAnimSegmentLineColorRGBA")

LineSet949.setColor(ColorRGBA951)

Shape948.setGeometry(LineSet949)

HAnimSegment944.addChildren(Shape948)
HAnimSite952 = x3d.HAnimSite()
HAnimSite952.setName("adams_apple_pt")
HAnimSite952.setDEF("hanim_adams_apple_pt")
HAnimSite952.setTranslation([0,1,0])
TouchSensor953 = x3d.TouchSensor()
TouchSensor953.setDescription("HAnimSite adams_apple_pt")

HAnimSite952.addChildren(TouchSensor953)
Shape954 = x3d.Shape()
Shape954.setUSE("HAnimSiteShape")

HAnimSite952.addChildren(Shape954)

HAnimSegment944.addChildren(HAnimSite952)

HAnimJoint943.addChildren(HAnimSegment944)
HAnimJoint955 = x3d.HAnimJoint()
HAnimJoint955.setName("vc2")
HAnimJoint955.setDEF("hanim_vc2")
HAnimJoint955.setCenter([0.0066,1.5928,-0.0103])
HAnimJoint955.setUlimit([0,0,0])
HAnimJoint955.setLlimit([0,0,0])
HAnimSegment956 = x3d.HAnimSegment()
HAnimSegment956.setName("c2")
HAnimSegment956.setDEF("hanim_c2")
Transform957 = x3d.Transform()
#Empty Transform
Transform958 = x3d.Transform()
#Empty Transform
Shape959 = x3d.Shape()
Shape959.setUSE("HAnimJointShape")

Transform958.addChild(Shape959)

Transform957.addChildren(Transform958)

HAnimSegment956.addChildren(Transform957)
Shape960 = x3d.Shape()
LineSet961 = x3d.LineSet()
LineSet961.setVertexCount([2])
Coordinate962 = x3d.Coordinate()
Coordinate962.setPoint([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034])

LineSet961.setCoord(Coordinate962)
#from vc2 to vc1 vertices 2
ColorRGBA963 = x3d.ColorRGBA()
ColorRGBA963.setUSE("HAnimSegmentLineColorRGBA")

LineSet961.setColor(ColorRGBA963)

Shape960.setGeometry(LineSet961)

HAnimSegment956.addChildren(Shape960)

HAnimJoint955.addChildren(HAnimSegment956)
HAnimJoint964 = x3d.HAnimJoint()
HAnimJoint964.setName("vc1")
HAnimJoint964.setDEF("hanim_vc1")
HAnimJoint964.setCenter([0.0066,1.6144,-0.0034])
HAnimJoint964.setUlimit([0,0,0])
HAnimJoint964.setLlimit([0,0,0])
HAnimSegment965 = x3d.HAnimSegment()
HAnimSegment965.setName("c1")
HAnimSegment965.setDEF("hanim_c1")
Transform966 = x3d.Transform()
#Empty Transform
Transform967 = x3d.Transform()
#Empty Transform
Shape968 = x3d.Shape()
Shape968.setUSE("HAnimJointShape")

Transform967.addChild(Shape968)

Transform966.addChildren(Transform967)

HAnimSegment965.addChildren(Transform966)
Shape969 = x3d.Shape()
LineSet970 = x3d.LineSet()
LineSet970.setVertexCount([2])
Coordinate971 = x3d.Coordinate()
Coordinate971.setPoint([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236])

LineSet970.setCoord(Coordinate971)
#from vc1 to skullbase vertices 2
ColorRGBA972 = x3d.ColorRGBA()
ColorRGBA972.setUSE("HAnimSegmentLineColorRGBA")

LineSet970.setColor(ColorRGBA972)

Shape969.setGeometry(LineSet970)

HAnimSegment965.addChildren(Shape969)
HAnimSite973 = x3d.HAnimSite()
HAnimSite973.setName("glabella_pt")
HAnimSite973.setDEF("hanim_glabella_pt")
HAnimSite973.setTranslation([0,1,0])
TouchSensor974 = x3d.TouchSensor()
TouchSensor974.setDescription("HAnimSite glabella_pt")

HAnimSite973.addChildren(TouchSensor974)
Shape975 = x3d.Shape()
Shape975.setUSE("HAnimSiteShape")

HAnimSite973.addChildren(Shape975)

HAnimSegment965.addChildren(HAnimSite973)
HAnimSite976 = x3d.HAnimSite()
HAnimSite976.setName("l_ectocanthus_pt")
HAnimSite976.setDEF("hanim_l_ectocanthus_pt")
HAnimSite976.setTranslation([0,1,0])
TouchSensor977 = x3d.TouchSensor()
TouchSensor977.setDescription("HAnimSite l_ectocanthus_pt")

HAnimSite976.addChildren(TouchSensor977)
Shape978 = x3d.Shape()
Shape978.setUSE("HAnimSiteShape")

HAnimSite976.addChildren(Shape978)

HAnimSegment965.addChildren(HAnimSite976)
HAnimSite979 = x3d.HAnimSite()
HAnimSite979.setName("l_infraorbitale_pt")
HAnimSite979.setDEF("hanim_l_infraorbitale_pt")
HAnimSite979.setTranslation([0.0341,1.6171,0.0752])
TouchSensor980 = x3d.TouchSensor()
TouchSensor980.setDescription("HAnimSite l_infraorbitale_pt")

HAnimSite979.addChildren(TouchSensor980)
Shape981 = x3d.Shape()
Shape981.setUSE("HAnimSiteShape")

HAnimSite979.addChildren(Shape981)

HAnimSegment965.addChildren(HAnimSite979)
HAnimSite982 = x3d.HAnimSite()
HAnimSite982.setName("l_tragion_pt")
HAnimSite982.setDEF("hanim_l_tragion_pt")
HAnimSite982.setTranslation([0.0739,1.6348,0.0282])
TouchSensor983 = x3d.TouchSensor()
TouchSensor983.setDescription("HAnimSite l_tragion_pt")

HAnimSite982.addChildren(TouchSensor983)
Shape984 = x3d.Shape()
Shape984.setUSE("HAnimSiteShape")

HAnimSite982.addChildren(Shape984)

HAnimSegment965.addChildren(HAnimSite982)
HAnimSite985 = x3d.HAnimSite()
HAnimSite985.setName("nuchale_pt")
HAnimSite985.setDEF("hanim_nuchale_pt")
HAnimSite985.setTranslation([0.0039,1.5972,-0.0796])
TouchSensor986 = x3d.TouchSensor()
TouchSensor986.setDescription("HAnimSite nuchale_pt")

HAnimSite985.addChildren(TouchSensor986)
Shape987 = x3d.Shape()
Shape987.setUSE("HAnimSiteShape")

HAnimSite985.addChildren(Shape987)

HAnimSegment965.addChildren(HAnimSite985)
HAnimSite988 = x3d.HAnimSite()
HAnimSite988.setName("opisthocranion_pt")
HAnimSite988.setDEF("hanim_opisthocranion_pt")
HAnimSite988.setTranslation([0,1,0])
TouchSensor989 = x3d.TouchSensor()
TouchSensor989.setDescription("HAnimSite opisthocranion_pt")

HAnimSite988.addChildren(TouchSensor989)
Shape990 = x3d.Shape()
Shape990.setUSE("HAnimSiteShape")

HAnimSite988.addChildren(Shape990)

HAnimSegment965.addChildren(HAnimSite988)
HAnimSite991 = x3d.HAnimSite()
HAnimSite991.setName("r_ectocanthus_pt")
HAnimSite991.setDEF("hanim_r_ectocanthus_pt")
HAnimSite991.setTranslation([0,1,0])
TouchSensor992 = x3d.TouchSensor()
TouchSensor992.setDescription("HAnimSite r_ectocanthus_pt")

HAnimSite991.addChildren(TouchSensor992)
Shape993 = x3d.Shape()
Shape993.setUSE("HAnimSiteShape")

HAnimSite991.addChildren(Shape993)

HAnimSegment965.addChildren(HAnimSite991)
HAnimSite994 = x3d.HAnimSite()
HAnimSite994.setName("r_infraorbitale_pt")
HAnimSite994.setDEF("hanim_r_infraorbitale_pt")
HAnimSite994.setTranslation([-0.0237,1.6171,0.0752])
TouchSensor995 = x3d.TouchSensor()
TouchSensor995.setDescription("HAnimSite r_infraorbitale_pt")

HAnimSite994.addChildren(TouchSensor995)
Shape996 = x3d.Shape()
Shape996.setUSE("HAnimSiteShape")

HAnimSite994.addChildren(Shape996)

HAnimSegment965.addChildren(HAnimSite994)
HAnimSite997 = x3d.HAnimSite()
HAnimSite997.setName("r_tragion_pt")
HAnimSite997.setDEF("hanim_r_tragion_pt")
HAnimSite997.setTranslation([-0.0646,1.6347,0.0302])
TouchSensor998 = x3d.TouchSensor()
TouchSensor998.setDescription("HAnimSite r_tragion_pt")

HAnimSite997.addChildren(TouchSensor998)
Shape999 = x3d.Shape()
Shape999.setUSE("HAnimSiteShape")

HAnimSite997.addChildren(Shape999)

HAnimSegment965.addChildren(HAnimSite997)
HAnimSite1000 = x3d.HAnimSite()
HAnimSite1000.setName("sellion_pt")
HAnimSite1000.setDEF("hanim_sellion_pt")
HAnimSite1000.setTranslation([0.0058,1.6316,0.0852])
TouchSensor1001 = x3d.TouchSensor()
TouchSensor1001.setDescription("HAnimSite sellion_pt")

HAnimSite1000.addChildren(TouchSensor1001)
Shape1002 = x3d.Shape()
Shape1002.setUSE("HAnimSiteShape")

HAnimSite1000.addChildren(Shape1002)

HAnimSegment965.addChildren(HAnimSite1000)
HAnimSite1003 = x3d.HAnimSite()
HAnimSite1003.setName("skull_vertex_pt")
HAnimSite1003.setDEF("hanim_skull_vertex_pt")
HAnimSite1003.setTranslation([0.005,1.7504,0.0055])
TouchSensor1004 = x3d.TouchSensor()
TouchSensor1004.setDescription("HAnimSite skull_vertex_pt")

HAnimSite1003.addChildren(TouchSensor1004)
Shape1005 = x3d.Shape()
Shape1005.setUSE("HAnimSiteShape")

HAnimSite1003.addChildren(Shape1005)

HAnimSegment965.addChildren(HAnimSite1003)

HAnimJoint964.addChildren(HAnimSegment965)
HAnimJoint1006 = x3d.HAnimJoint()
HAnimJoint1006.setName("skullbase")
HAnimJoint1006.setDEF("hanim_skullbase")
HAnimJoint1006.setCenter([0.0044,1.6209,0.0236])
HAnimJoint1006.setUlimit([0,0,0])
HAnimJoint1006.setLlimit([0,0,0])
HAnimSegment1007 = x3d.HAnimSegment()
HAnimSegment1007.setName("skull")
HAnimSegment1007.setDEF("hanim_skull")
Transform1008 = x3d.Transform()
#Empty Transform
Transform1009 = x3d.Transform()
#Empty Transform
Shape1010 = x3d.Shape()
Shape1010.setUSE("HAnimJointShape")

Transform1009.addChild(Shape1010)

Transform1008.addChildren(Transform1009)

HAnimSegment1007.addChildren(Transform1008)
Shape1011 = x3d.Shape()
LineSet1012 = x3d.LineSet()
LineSet1012.setVertexCount([2])
Coordinate1013 = x3d.Coordinate()
Coordinate1013.setPoint([0.0044,1.6209,0.0236,0,1,0])

LineSet1012.setCoord(Coordinate1013)
#from skullbase to l_eyelid_joint vertices 2
ColorRGBA1014 = x3d.ColorRGBA()
ColorRGBA1014.setUSE("HAnimSegmentLineColorRGBA")

LineSet1012.setColor(ColorRGBA1014)

Shape1011.setGeometry(LineSet1012)

HAnimSegment1007.addChildren(Shape1011)
Shape1015 = x3d.Shape()
LineSet1016 = x3d.LineSet()
LineSet1016.setVertexCount([2])
Coordinate1017 = x3d.Coordinate()
Coordinate1017.setPoint([0.0044,1.6209,0.0236,0,1,0])

LineSet1016.setCoord(Coordinate1017)
#from skullbase to r_eyelid_joint vertices 2
ColorRGBA1018 = x3d.ColorRGBA()
ColorRGBA1018.setUSE("HAnimSegmentLineColorRGBA")

LineSet1016.setColor(ColorRGBA1018)

Shape1015.setGeometry(LineSet1016)

HAnimSegment1007.addChildren(Shape1015)
Shape1019 = x3d.Shape()
LineSet1020 = x3d.LineSet()
LineSet1020.setVertexCount([2])
Coordinate1021 = x3d.Coordinate()
Coordinate1021.setPoint([0.0044,1.6209,0.0236,0,1,0])

LineSet1020.setCoord(Coordinate1021)
#from skullbase to l_eyeball_joint vertices 2
ColorRGBA1022 = x3d.ColorRGBA()
ColorRGBA1022.setUSE("HAnimSegmentLineColorRGBA")

LineSet1020.setColor(ColorRGBA1022)

Shape1019.setGeometry(LineSet1020)

HAnimSegment1007.addChildren(Shape1019)
Shape1023 = x3d.Shape()
LineSet1024 = x3d.LineSet()
LineSet1024.setVertexCount([2])
Coordinate1025 = x3d.Coordinate()
Coordinate1025.setPoint([0.0044,1.6209,0.0236,0,1,0])

LineSet1024.setCoord(Coordinate1025)
#from skullbase to r_eyeball_joint vertices 2
ColorRGBA1026 = x3d.ColorRGBA()
ColorRGBA1026.setUSE("HAnimSegmentLineColorRGBA")

LineSet1024.setColor(ColorRGBA1026)

Shape1023.setGeometry(LineSet1024)

HAnimSegment1007.addChildren(Shape1023)
Shape1027 = x3d.Shape()
LineSet1028 = x3d.LineSet()
LineSet1028.setVertexCount([2])
Coordinate1029 = x3d.Coordinate()
Coordinate1029.setPoint([0.0044,1.6209,0.0236,0,1,0])

LineSet1028.setCoord(Coordinate1029)
#from skullbase to l_eyebrow_joint vertices 2
ColorRGBA1030 = x3d.ColorRGBA()
ColorRGBA1030.setUSE("HAnimSegmentLineColorRGBA")

LineSet1028.setColor(ColorRGBA1030)

Shape1027.setGeometry(LineSet1028)

HAnimSegment1007.addChildren(Shape1027)
Shape1031 = x3d.Shape()
LineSet1032 = x3d.LineSet()
LineSet1032.setVertexCount([2])
Coordinate1033 = x3d.Coordinate()
Coordinate1033.setPoint([0.0044,1.6209,0.0236,0,1,0])

LineSet1032.setCoord(Coordinate1033)
#from skullbase to r_eyebrow_joint vertices 2
ColorRGBA1034 = x3d.ColorRGBA()
ColorRGBA1034.setUSE("HAnimSegmentLineColorRGBA")

LineSet1032.setColor(ColorRGBA1034)

Shape1031.setGeometry(LineSet1032)

HAnimSegment1007.addChildren(Shape1031)
Shape1035 = x3d.Shape()
LineSet1036 = x3d.LineSet()
LineSet1036.setVertexCount([2])
Coordinate1037 = x3d.Coordinate()
Coordinate1037.setPoint([0.0044,1.6209,0.0236,0,1,0])

LineSet1036.setCoord(Coordinate1037)
#from skullbase to temporomandibular vertices 2
ColorRGBA1038 = x3d.ColorRGBA()
ColorRGBA1038.setUSE("HAnimSegmentLineColorRGBA")

LineSet1036.setColor(ColorRGBA1038)

Shape1035.setGeometry(LineSet1036)

HAnimSegment1007.addChildren(Shape1035)
HAnimSite1039 = x3d.HAnimSite()
HAnimSite1039.setName("l_gonion_pt")
HAnimSite1039.setDEF("hanim_l_gonion_pt")
HAnimSite1039.setTranslation([0.0631,1.553,0.033])
TouchSensor1040 = x3d.TouchSensor()
TouchSensor1040.setDescription("HAnimSite l_gonion_pt")

HAnimSite1039.addChildren(TouchSensor1040)
Shape1041 = x3d.Shape()
Shape1041.setUSE("HAnimSiteShape")

HAnimSite1039.addChildren(Shape1041)

HAnimSegment1007.addChildren(HAnimSite1039)
HAnimSite1042 = x3d.HAnimSite()
HAnimSite1042.setName("menton_pt")
HAnimSite1042.setDEF("hanim_menton_pt")
HAnimSite1042.setTranslation([0,1,0])
TouchSensor1043 = x3d.TouchSensor()
TouchSensor1043.setDescription("HAnimSite menton_pt")

HAnimSite1042.addChildren(TouchSensor1043)
Shape1044 = x3d.Shape()
Shape1044.setUSE("HAnimSiteShape")

HAnimSite1042.addChildren(Shape1044)

HAnimSegment1007.addChildren(HAnimSite1042)
HAnimSite1045 = x3d.HAnimSite()
HAnimSite1045.setName("r_gonion_pt")
HAnimSite1045.setDEF("hanim_r_gonion_pt")
HAnimSite1045.setTranslation([-0.052,1.5529,0.0347])
TouchSensor1046 = x3d.TouchSensor()
TouchSensor1046.setDescription("HAnimSite r_gonion_pt")

HAnimSite1045.addChildren(TouchSensor1046)
Shape1047 = x3d.Shape()
Shape1047.setUSE("HAnimSiteShape")

HAnimSite1045.addChildren(Shape1047)

HAnimSegment1007.addChildren(HAnimSite1045)
HAnimSite1048 = x3d.HAnimSite()
HAnimSite1048.setName("supramenton_pt")
HAnimSite1048.setDEF("hanim_supramenton_pt")
HAnimSite1048.setTranslation([0.0061,1.541,0.0805])
TouchSensor1049 = x3d.TouchSensor()
TouchSensor1049.setDescription("HAnimSite supramenton_pt")

HAnimSite1048.addChildren(TouchSensor1049)
Shape1050 = x3d.Shape()
Shape1050.setUSE("HAnimSiteShape")

HAnimSite1048.addChildren(Shape1050)

HAnimSegment1007.addChildren(HAnimSite1048)

HAnimJoint1006.addChildren(HAnimSegment1007)
HAnimJoint1051 = x3d.HAnimJoint()
HAnimJoint1051.setName("l_eyelid_joint")
HAnimJoint1051.setDEF("hanim_l_eyelid_joint")
HAnimJoint1051.setCenter([0,1,0])
HAnimJoint1051.setUlimit([0,0,0])
HAnimJoint1051.setLlimit([0,0,0])

HAnimJoint1006.addChildren(HAnimJoint1051)
HAnimJoint1052 = x3d.HAnimJoint()
HAnimJoint1052.setName("r_eyelid_joint")
HAnimJoint1052.setDEF("hanim_r_eyelid_joint")
HAnimJoint1052.setCenter([0,1,0])
HAnimJoint1052.setUlimit([0,0,0])
HAnimJoint1052.setLlimit([0,0,0])

HAnimJoint1006.addChildren(HAnimJoint1052)
HAnimJoint1053 = x3d.HAnimJoint()
HAnimJoint1053.setName("l_eyeball_joint")
HAnimJoint1053.setDEF("hanim_l_eyeball_joint")
HAnimJoint1053.setCenter([0,1,0])
HAnimJoint1053.setUlimit([0,0,0])
HAnimJoint1053.setLlimit([0,0,0])

HAnimJoint1006.addChildren(HAnimJoint1053)
HAnimJoint1054 = x3d.HAnimJoint()
HAnimJoint1054.setName("r_eyeball_joint")
HAnimJoint1054.setDEF("hanim_r_eyeball_joint")
HAnimJoint1054.setCenter([0,1,0])
HAnimJoint1054.setUlimit([0,0,0])
HAnimJoint1054.setLlimit([0,0,0])

HAnimJoint1006.addChildren(HAnimJoint1054)
HAnimJoint1055 = x3d.HAnimJoint()
HAnimJoint1055.setName("l_eyebrow_joint")
HAnimJoint1055.setDEF("hanim_l_eyebrow_joint")
HAnimJoint1055.setCenter([0,1,0])
HAnimJoint1055.setUlimit([0,0,0])
HAnimJoint1055.setLlimit([0,0,0])

HAnimJoint1006.addChildren(HAnimJoint1055)
HAnimJoint1056 = x3d.HAnimJoint()
HAnimJoint1056.setName("r_eyebrow_joint")
HAnimJoint1056.setDEF("hanim_r_eyebrow_joint")
HAnimJoint1056.setCenter([0,1,0])
HAnimJoint1056.setUlimit([0,0,0])
HAnimJoint1056.setLlimit([0,0,0])

HAnimJoint1006.addChildren(HAnimJoint1056)
HAnimJoint1057 = x3d.HAnimJoint()
HAnimJoint1057.setName("temporomandibular")
HAnimJoint1057.setDEF("hanim_temporomandibular")
HAnimJoint1057.setCenter([0,1,0])
HAnimJoint1057.setUlimit([0,0,0])
HAnimJoint1057.setLlimit([0,0,0])

HAnimJoint1006.addChildren(HAnimJoint1057)
HAnimDisplacer1058 = x3d.HAnimDisplacer()
HAnimDisplacer1058.setName("skull_tip_raiser_action")
HAnimDisplacer1058.setDEF("Joe_skull_tip_raiser_action")
HAnimDisplacer1058.setCoordIndex([0,1,2,3,4,5,6,7,8,9])
HAnimDisplacer1058.setDisplacements([0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15])

HAnimJoint1006.addDisplacers(HAnimDisplacer1058)

HAnimJoint964.addChildren(HAnimJoint1006)

HAnimJoint955.addChildren(HAnimJoint964)

HAnimJoint943.addChildren(HAnimJoint955)

HAnimJoint934.addChildren(HAnimJoint943)

HAnimJoint925.addChildren(HAnimJoint934)

HAnimJoint916.addChildren(HAnimJoint925)

HAnimJoint907.addChildren(HAnimJoint916)

HAnimJoint854.addChildren(HAnimJoint907)
HAnimJoint1059 = x3d.HAnimJoint()
HAnimJoint1059.setName("l_sternoclavicular")
HAnimJoint1059.setDEF("hanim_l_sternoclavicular")
HAnimJoint1059.setCenter([0.082,1.4488,-0.0353])
HAnimJoint1059.setUlimit([0,0,0])
HAnimJoint1059.setLlimit([0,0,0])
HAnimSegment1060 = x3d.HAnimSegment()
HAnimSegment1060.setName("l_clavicle")
HAnimSegment1060.setDEF("hanim_l_clavicle")
Transform1061 = x3d.Transform()
#Empty Transform
Transform1062 = x3d.Transform()
#Empty Transform
Shape1063 = x3d.Shape()
Shape1063.setUSE("HAnimJointShape")

Transform1062.addChild(Shape1063)

Transform1061.addChildren(Transform1062)

HAnimSegment1060.addChildren(Transform1061)
Shape1064 = x3d.Shape()
LineSet1065 = x3d.LineSet()
LineSet1065.setVertexCount([2])
Coordinate1066 = x3d.Coordinate()
Coordinate1066.setPoint([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424])

LineSet1065.setCoord(Coordinate1066)
#from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA1067 = x3d.ColorRGBA()
ColorRGBA1067.setUSE("HAnimSegmentLineColorRGBA")

LineSet1065.setColor(ColorRGBA1067)

Shape1064.setGeometry(LineSet1065)

HAnimSegment1060.addChildren(Shape1064)

HAnimJoint1059.addChildren(HAnimSegment1060)
HAnimJoint1068 = x3d.HAnimJoint()
HAnimJoint1068.setName("l_acromioclavicular")
HAnimJoint1068.setDEF("hanim_l_acromioclavicular")
HAnimJoint1068.setCenter([0.0962,1.4269,-0.0424])
HAnimJoint1068.setUlimit([0,0,0])
HAnimJoint1068.setLlimit([0,0,0])
HAnimSegment1069 = x3d.HAnimSegment()
HAnimSegment1069.setName("l_scapula")
HAnimSegment1069.setDEF("hanim_l_scapula")
Transform1070 = x3d.Transform()
#Empty Transform
Transform1071 = x3d.Transform()
#Empty Transform
Shape1072 = x3d.Shape()
Shape1072.setUSE("HAnimJointShape")

Transform1071.addChild(Shape1072)

Transform1070.addChildren(Transform1071)

HAnimSegment1069.addChildren(Transform1070)
Shape1073 = x3d.Shape()
LineSet1074 = x3d.LineSet()
LineSet1074.setVertexCount([2])
Coordinate1075 = x3d.Coordinate()
Coordinate1075.setPoint([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387])

LineSet1074.setCoord(Coordinate1075)
#from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA1076 = x3d.ColorRGBA()
ColorRGBA1076.setUSE("HAnimSegmentLineColorRGBA")

LineSet1074.setColor(ColorRGBA1076)

Shape1073.setGeometry(LineSet1074)

HAnimSegment1069.addChildren(Shape1073)
HAnimSite1077 = x3d.HAnimSite()
HAnimSite1077.setName("l_bideltoid_pt")
HAnimSite1077.setDEF("hanim_l_bideltoid_pt")
HAnimSite1077.setTranslation([0,1,0])
TouchSensor1078 = x3d.TouchSensor()
TouchSensor1078.setDescription("HAnimSite l_bideltoid_pt")

HAnimSite1077.addChildren(TouchSensor1078)
Shape1079 = x3d.Shape()
Shape1079.setUSE("HAnimSiteShape")

HAnimSite1077.addChildren(Shape1079)

HAnimSegment1069.addChildren(HAnimSite1077)
HAnimSite1080 = x3d.HAnimSite()
HAnimSite1080.setName("l_humeral_lateral_epicondyles_pt")
HAnimSite1080.setDEF("hanim_l_humeral_lateral_epicondyles_pt")
HAnimSite1080.setTranslation([0.228,1.1482,-0.11])
TouchSensor1081 = x3d.TouchSensor()
TouchSensor1081.setDescription("HAnimSite l_humeral_lateral_epicondyles_pt")

HAnimSite1080.addChildren(TouchSensor1081)
Shape1082 = x3d.Shape()
Shape1082.setUSE("HAnimSiteShape")

HAnimSite1080.addChildren(Shape1082)

HAnimSegment1069.addChildren(HAnimSite1080)

HAnimJoint1068.addChildren(HAnimSegment1069)
HAnimJoint1083 = x3d.HAnimJoint()
HAnimJoint1083.setName("l_shoulder")
HAnimJoint1083.setDEF("hanim_l_shoulder")
HAnimJoint1083.setCenter([0.2029,1.4376,-0.0387])
HAnimJoint1083.setUlimit([0,0,0])
HAnimJoint1083.setLlimit([0,0,0])
HAnimSegment1084 = x3d.HAnimSegment()
HAnimSegment1084.setName("l_upperarm")
HAnimSegment1084.setDEF("hanim_l_upperarm")
Transform1085 = x3d.Transform()
#Empty Transform
Transform1086 = x3d.Transform()
#Empty Transform
Shape1087 = x3d.Shape()
Shape1087.setUSE("HAnimJointShape")

Transform1086.addChild(Shape1087)

Transform1085.addChildren(Transform1086)

HAnimSegment1084.addChildren(Transform1085)
Shape1088 = x3d.Shape()
LineSet1089 = x3d.LineSet()
LineSet1089.setVertexCount([2])
Coordinate1090 = x3d.Coordinate()
Coordinate1090.setPoint([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682])

LineSet1089.setCoord(Coordinate1090)
#from l_shoulder to l_elbow vertices 2
ColorRGBA1091 = x3d.ColorRGBA()
ColorRGBA1091.setUSE("HAnimSegmentLineColorRGBA")

LineSet1089.setColor(ColorRGBA1091)

Shape1088.setGeometry(LineSet1089)

HAnimSegment1084.addChildren(Shape1088)
HAnimSite1092 = x3d.HAnimSite()
HAnimSite1092.setName("l_humeral_medial_epicondyles_pt")
HAnimSite1092.setDEF("hanim_l_humeral_medial_epicondyles_pt")
HAnimSite1092.setTranslation([0.1735,1.1272,-0.1113])
TouchSensor1093 = x3d.TouchSensor()
TouchSensor1093.setDescription("HAnimSite l_humeral_medial_epicondyles_pt")

HAnimSite1092.addChildren(TouchSensor1093)
Shape1094 = x3d.Shape()
Shape1094.setUSE("HAnimSiteShape")

HAnimSite1092.addChildren(Shape1094)

HAnimSegment1084.addChildren(HAnimSite1092)
HAnimSite1095 = x3d.HAnimSite()
HAnimSite1095.setName("l_olecranon_pt")
HAnimSite1095.setDEF("hanim_l_olecranon_pt")
HAnimSite1095.setTranslation([-0.1962,1.1375,-0.1123])
TouchSensor1096 = x3d.TouchSensor()
TouchSensor1096.setDescription("HAnimSite l_olecranon_pt")

HAnimSite1095.addChildren(TouchSensor1096)
Shape1097 = x3d.Shape()
Shape1097.setUSE("HAnimSiteShape")

HAnimSite1095.addChildren(Shape1097)

HAnimSegment1084.addChildren(HAnimSite1095)
HAnimSite1098 = x3d.HAnimSite()
HAnimSite1098.setName("l_radial_styloid_pt")
HAnimSite1098.setDEF("hanim_l_radial_styloid_pt")
HAnimSite1098.setTranslation([0.1901,0.8645,-0.0415])
TouchSensor1099 = x3d.TouchSensor()
TouchSensor1099.setDescription("HAnimSite l_radial_styloid_pt")

HAnimSite1098.addChildren(TouchSensor1099)
Shape1100 = x3d.Shape()
Shape1100.setUSE("HAnimSiteShape")

HAnimSite1098.addChildren(Shape1100)

HAnimSegment1084.addChildren(HAnimSite1098)
HAnimSite1101 = x3d.HAnimSite()
HAnimSite1101.setName("l_radiale_pt")
HAnimSite1101.setDEF("hanim_l_radiale_pt")
HAnimSite1101.setTranslation([0.2182,1.1212,-0.1167])
TouchSensor1102 = x3d.TouchSensor()
TouchSensor1102.setDescription("HAnimSite l_radiale_pt")

HAnimSite1101.addChildren(TouchSensor1102)
Shape1103 = x3d.Shape()
Shape1103.setUSE("HAnimSiteShape")

HAnimSite1101.addChildren(Shape1103)

HAnimSegment1084.addChildren(HAnimSite1101)

HAnimJoint1083.addChildren(HAnimSegment1084)
HAnimJoint1104 = x3d.HAnimJoint()
HAnimJoint1104.setName("l_elbow")
HAnimJoint1104.setDEF("hanim_l_elbow")
HAnimJoint1104.setCenter([0.2014,1.1357,-0.0682])
HAnimJoint1104.setUlimit([0,0,0])
HAnimJoint1104.setLlimit([0,0,0])
HAnimSegment1105 = x3d.HAnimSegment()
HAnimSegment1105.setName("l_forearm")
HAnimSegment1105.setDEF("hanim_l_forearm")
Transform1106 = x3d.Transform()
#Empty Transform
Transform1107 = x3d.Transform()
#Empty Transform
Shape1108 = x3d.Shape()
Shape1108.setUSE("HAnimJointShape")

Transform1107.addChild(Shape1108)

Transform1106.addChildren(Transform1107)

HAnimSegment1105.addChildren(Transform1106)
Shape1109 = x3d.Shape()
LineSet1110 = x3d.LineSet()
LineSet1110.setVertexCount([2])
Coordinate1111 = x3d.Coordinate()
Coordinate1111.setPoint([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583])

LineSet1110.setCoord(Coordinate1111)
#from l_elbow to l_radiocarpal vertices 2
ColorRGBA1112 = x3d.ColorRGBA()
ColorRGBA1112.setUSE("HAnimSegmentLineColorRGBA")

LineSet1110.setColor(ColorRGBA1112)

Shape1109.setGeometry(LineSet1110)

HAnimSegment1105.addChildren(Shape1109)
HAnimSite1113 = x3d.HAnimSite()
HAnimSite1113.setName("l_ulnar_styloid_pt")
HAnimSite1113.setDEF("hanim_l_ulnar_styloid_pt")
HAnimSite1113.setTranslation([-0.2142,0.8529,-0.0648])
TouchSensor1114 = x3d.TouchSensor()
TouchSensor1114.setDescription("HAnimSite l_ulnar_styloid_pt")

HAnimSite1113.addChildren(TouchSensor1114)
Shape1115 = x3d.Shape()
Shape1115.setUSE("HAnimSiteShape")

HAnimSite1113.addChildren(Shape1115)

HAnimSegment1105.addChildren(HAnimSite1113)

HAnimJoint1104.addChildren(HAnimSegment1105)
HAnimJoint1116 = x3d.HAnimJoint()
HAnimJoint1116.setName("l_radiocarpal")
HAnimJoint1116.setDEF("hanim_l_radiocarpal")
HAnimJoint1116.setCenter([0.1984,0.8663,-0.0583])
HAnimJoint1116.setUlimit([0,0,0])
HAnimJoint1116.setLlimit([0,0,0])
HAnimSegment1117 = x3d.HAnimSegment()
HAnimSegment1117.setName("l_carpal")
HAnimSegment1117.setDEF("hanim_l_carpal")
Transform1118 = x3d.Transform()
Transform1118.setScale([0.2,0.2,0.2])
Transform1118.setTranslation([0.2,0.85,-0.05])
Transform1118.setRotation([0,0,1,-3.14])
#Transform left hand
Transform1119 = x3d.Transform()
Transform1119.setRotation([0,1,0,-1.57])
#Transform left hand
Shape1120 = x3d.Shape()
Shape1120.setUSE("HAnimJointShape")

Transform1119.addChild(Shape1120)

Transform1118.addChildren(Transform1119)

HAnimSegment1117.addChildren(Transform1118)
Shape1121 = x3d.Shape()
LineSet1122 = x3d.LineSet()
LineSet1122.setVertexCount([2])
Coordinate1123 = x3d.Coordinate()
Coordinate1123.setPoint([0.1984,0.8663,-0.0583,0,1,0])

LineSet1122.setCoord(Coordinate1123)
#from l_radiocarpal to l_midcarpal_1 vertices 2
ColorRGBA1124 = x3d.ColorRGBA()
ColorRGBA1124.setUSE("HAnimSegmentLineColorRGBA")

LineSet1122.setColor(ColorRGBA1124)

Shape1121.setGeometry(LineSet1122)

HAnimSegment1117.addChildren(Shape1121)
Shape1125 = x3d.Shape()
LineSet1126 = x3d.LineSet()
LineSet1126.setVertexCount([2])
Coordinate1127 = x3d.Coordinate()
Coordinate1127.setPoint([0.1984,0.8663,-0.0583,0,1,0])

LineSet1126.setCoord(Coordinate1127)
#from l_radiocarpal to l_midcarpal_2 vertices 2
ColorRGBA1128 = x3d.ColorRGBA()
ColorRGBA1128.setUSE("HAnimSegmentLineColorRGBA")

LineSet1126.setColor(ColorRGBA1128)

Shape1125.setGeometry(LineSet1126)

HAnimSegment1117.addChildren(Shape1125)
Shape1129 = x3d.Shape()
LineSet1130 = x3d.LineSet()
LineSet1130.setVertexCount([2])
Coordinate1131 = x3d.Coordinate()
Coordinate1131.setPoint([0.1984,0.8663,-0.0583,0,1,0])

LineSet1130.setCoord(Coordinate1131)
#from l_radiocarpal to l_midcarpal_3 vertices 2
ColorRGBA1132 = x3d.ColorRGBA()
ColorRGBA1132.setUSE("HAnimSegmentLineColorRGBA")

LineSet1130.setColor(ColorRGBA1132)

Shape1129.setGeometry(LineSet1130)

HAnimSegment1117.addChildren(Shape1129)
Shape1133 = x3d.Shape()
LineSet1134 = x3d.LineSet()
LineSet1134.setVertexCount([2])
Coordinate1135 = x3d.Coordinate()
Coordinate1135.setPoint([0.1984,0.8663,-0.0583,0,1,0])

LineSet1134.setCoord(Coordinate1135)
#from l_radiocarpal to l_midcarpal_4_5 vertices 2
ColorRGBA1136 = x3d.ColorRGBA()
ColorRGBA1136.setUSE("HAnimSegmentLineColorRGBA")

LineSet1134.setColor(ColorRGBA1136)

Shape1133.setGeometry(LineSet1134)

HAnimSegment1117.addChildren(Shape1133)

HAnimJoint1116.addChildren(HAnimSegment1117)
HAnimJoint1137 = x3d.HAnimJoint()
HAnimJoint1137.setName("l_midcarpal_1")
HAnimJoint1137.setDEF("hanim_l_midcarpal_1")
HAnimJoint1137.setCenter([0,1,0])
HAnimJoint1137.setUlimit([0,0,0])
HAnimJoint1137.setLlimit([0,0,0])
HAnimSegment1138 = x3d.HAnimSegment()
HAnimSegment1138.setName("l_trapezium")
HAnimSegment1138.setDEF("hanim_l_trapezium")
Transform1139 = x3d.Transform()
#Empty Transform
Transform1140 = x3d.Transform()
#Empty Transform
Shape1141 = x3d.Shape()
Shape1141.setUSE("HAnimJointShape")

Transform1140.addChild(Shape1141)

Transform1139.addChildren(Transform1140)

HAnimSegment1138.addChildren(Transform1139)
Shape1142 = x3d.Shape()
LineSet1143 = x3d.LineSet()
LineSet1143.setVertexCount([2])
Coordinate1144 = x3d.Coordinate()
Coordinate1144.setPoint([0,1,0,0.1924,0.8472,-0.0534])

LineSet1143.setCoord(Coordinate1144)
#from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
ColorRGBA1145 = x3d.ColorRGBA()
ColorRGBA1145.setUSE("HAnimSegmentLineColorRGBA")

LineSet1143.setColor(ColorRGBA1145)

Shape1142.setGeometry(LineSet1143)

HAnimSegment1138.addChildren(Shape1142)

HAnimJoint1137.addChildren(HAnimSegment1138)
HAnimJoint1146 = x3d.HAnimJoint()
HAnimJoint1146.setName("l_carpometacarpal_1")
HAnimJoint1146.setDEF("hanim_l_carpometacarpal_1")
HAnimJoint1146.setCenter([0.1924,0.8472,-0.0534])
HAnimJoint1146.setUlimit([0,0,0])
HAnimJoint1146.setLlimit([0,0,0])
HAnimSegment1147 = x3d.HAnimSegment()
HAnimSegment1147.setName("l_metacarpal_1")
HAnimSegment1147.setDEF("hanim_l_metacarpal_1")
Transform1148 = x3d.Transform()
#Empty Transform
Transform1149 = x3d.Transform()
#Empty Transform
Shape1150 = x3d.Shape()
Shape1150.setUSE("HAnimJointShape")

Transform1149.addChild(Shape1150)

Transform1148.addChildren(Transform1149)

HAnimSegment1147.addChildren(Transform1148)
Shape1151 = x3d.Shape()
LineSet1152 = x3d.LineSet()
LineSet1152.setVertexCount([2])
Coordinate1153 = x3d.Coordinate()
Coordinate1153.setPoint([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246])

LineSet1152.setCoord(Coordinate1153)
#from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA1154 = x3d.ColorRGBA()
ColorRGBA1154.setUSE("HAnimSegmentLineColorRGBA")

LineSet1152.setColor(ColorRGBA1154)

Shape1151.setGeometry(LineSet1152)

HAnimSegment1147.addChildren(Shape1151)

HAnimJoint1146.addChildren(HAnimSegment1147)
HAnimJoint1155 = x3d.HAnimJoint()
HAnimJoint1155.setName("l_metacarpophalangeal_1")
HAnimJoint1155.setDEF("hanim_l_metacarpophalangeal_1")
HAnimJoint1155.setCenter([0.1951,0.8226,0.0246])
HAnimJoint1155.setUlimit([0,0,0])
HAnimJoint1155.setLlimit([0,0,0])
HAnimSegment1156 = x3d.HAnimSegment()
HAnimSegment1156.setName("l_carpal_proximal_phalanx_1")
HAnimSegment1156.setDEF("hanim_l_carpal_proximal_phalanx_1")
Transform1157 = x3d.Transform()
#Empty Transform
Transform1158 = x3d.Transform()
#Empty Transform
Shape1159 = x3d.Shape()
Shape1159.setUSE("HAnimJointShape")

Transform1158.addChild(Shape1159)

Transform1157.addChildren(Transform1158)

HAnimSegment1156.addChildren(Transform1157)
Shape1160 = x3d.Shape()
LineSet1161 = x3d.LineSet()
LineSet1161.setVertexCount([2])
Coordinate1162 = x3d.Coordinate()
Coordinate1162.setPoint([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464])

LineSet1161.setCoord(Coordinate1162)
#from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA1163 = x3d.ColorRGBA()
ColorRGBA1163.setUSE("HAnimSegmentLineColorRGBA")

LineSet1161.setColor(ColorRGBA1163)

Shape1160.setGeometry(LineSet1161)

HAnimSegment1156.addChildren(Shape1160)
HAnimSite1164 = x3d.HAnimSite()
HAnimSite1164.setName("l_carpal_distal_phalanx_1_tip")
HAnimSite1164.setDEF("hanim_l_carpal_distal_phalanx_1_tip")
HAnimSite1164.setTranslation([0,1,0])
TouchSensor1165 = x3d.TouchSensor()
TouchSensor1165.setDescription("HAnimSite l_carpal_distal_phalanx_1_tip")

HAnimSite1164.addChildren(TouchSensor1165)
Shape1166 = x3d.Shape()
Shape1166.setUSE("HAnimSiteShape")

HAnimSite1164.addChildren(Shape1166)

HAnimSegment1156.addChildren(HAnimSite1164)

HAnimJoint1155.addChildren(HAnimSegment1156)
HAnimJoint1167 = x3d.HAnimJoint()
HAnimJoint1167.setName("l_carpal_interphalangeal_1")
HAnimJoint1167.setDEF("hanim_l_carpal_interphalangeal_1")
HAnimJoint1167.setCenter([0.1955,0.8159,0.0464])
HAnimJoint1167.setUlimit([0,0,0])
HAnimJoint1167.setLlimit([0,0,0])

HAnimJoint1155.addChildren(HAnimJoint1167)

HAnimJoint1146.addChildren(HAnimJoint1155)

HAnimJoint1137.addChildren(HAnimJoint1146)

HAnimJoint1116.addChildren(HAnimJoint1137)
HAnimJoint1168 = x3d.HAnimJoint()
HAnimJoint1168.setName("l_midcarpal_2")
HAnimJoint1168.setDEF("hanim_l_midcarpal_2")
HAnimJoint1168.setCenter([0,1,0])
HAnimJoint1168.setUlimit([0,0,0])
HAnimJoint1168.setLlimit([0,0,0])
HAnimSegment1169 = x3d.HAnimSegment()
HAnimSegment1169.setName("l_trapezoid")
HAnimSegment1169.setDEF("hanim_l_trapezoid")
Transform1170 = x3d.Transform()
#Empty Transform
Transform1171 = x3d.Transform()
#Empty Transform
Shape1172 = x3d.Shape()
Shape1172.setUSE("HAnimJointShape")

Transform1171.addChild(Shape1172)

Transform1170.addChildren(Transform1171)

HAnimSegment1169.addChildren(Transform1170)
Shape1173 = x3d.Shape()
LineSet1174 = x3d.LineSet()
LineSet1174.setVertexCount([2])
Coordinate1175 = x3d.Coordinate()
Coordinate1175.setPoint([0,1,0,0.1983,0.8024,-0.028])

LineSet1174.setCoord(Coordinate1175)
#from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
ColorRGBA1176 = x3d.ColorRGBA()
ColorRGBA1176.setUSE("HAnimSegmentLineColorRGBA")

LineSet1174.setColor(ColorRGBA1176)

Shape1173.setGeometry(LineSet1174)

HAnimSegment1169.addChildren(Shape1173)
HAnimSite1177 = x3d.HAnimSite()
HAnimSite1177.setName("l_metacarpal_phalanx_2_pt")
HAnimSite1177.setDEF("hanim_l_metacarpal_phalanx_2_pt")
HAnimSite1177.setTranslation([0.2009,0.8139,-0.0237])
TouchSensor1178 = x3d.TouchSensor()
TouchSensor1178.setDescription("HAnimSite l_metacarpal_phalanx_2_pt")

HAnimSite1177.addChildren(TouchSensor1178)
Shape1179 = x3d.Shape()
Shape1179.setUSE("HAnimSiteShape")

HAnimSite1177.addChildren(Shape1179)

HAnimSegment1169.addChildren(HAnimSite1177)

HAnimJoint1168.addChildren(HAnimSegment1169)
HAnimJoint1180 = x3d.HAnimJoint()
HAnimJoint1180.setName("l_carpometacarpal_2")
HAnimJoint1180.setDEF("hanim_l_carpometacarpal_2")
HAnimJoint1180.setCenter([0.1983,0.8024,-0.028])
HAnimJoint1180.setUlimit([0,0,0])
HAnimJoint1180.setLlimit([0,0,0])
HAnimSegment1181 = x3d.HAnimSegment()
HAnimSegment1181.setName("l_metacarpal_2")
HAnimSegment1181.setDEF("hanim_l_metacarpal_2")
Transform1182 = x3d.Transform()
#Empty Transform
Transform1183 = x3d.Transform()
#Empty Transform
Shape1184 = x3d.Shape()
Shape1184.setUSE("HAnimJointShape")

Transform1183.addChild(Shape1184)

Transform1182.addChildren(Transform1183)

HAnimSegment1181.addChildren(Transform1182)
Shape1185 = x3d.Shape()
LineSet1186 = x3d.LineSet()
LineSet1186.setVertexCount([2])
Coordinate1187 = x3d.Coordinate()
Coordinate1187.setPoint([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028])

LineSet1186.setCoord(Coordinate1187)
#from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA1188 = x3d.ColorRGBA()
ColorRGBA1188.setUSE("HAnimSegmentLineColorRGBA")

LineSet1186.setColor(ColorRGBA1188)

Shape1185.setGeometry(LineSet1186)

HAnimSegment1181.addChildren(Shape1185)

HAnimJoint1180.addChildren(HAnimSegment1181)
HAnimJoint1189 = x3d.HAnimJoint()
HAnimJoint1189.setName("l_metacarpophalangeal_2")
HAnimJoint1189.setDEF("hanim_l_metacarpophalangeal_2")
HAnimJoint1189.setCenter([0.1983,0.7815,-0.028])
HAnimJoint1189.setUlimit([0,0,0])
HAnimJoint1189.setLlimit([0,0,0])
HAnimSegment1190 = x3d.HAnimSegment()
HAnimSegment1190.setName("l_carpal_proximal_phalanx_2")
HAnimSegment1190.setDEF("hanim_l_carpal_proximal_phalanx_2")
Transform1191 = x3d.Transform()
#Empty Transform
Transform1192 = x3d.Transform()
#Empty Transform
Shape1193 = x3d.Shape()
Shape1193.setUSE("HAnimJointShape")

Transform1192.addChild(Shape1193)

Transform1191.addChildren(Transform1192)

HAnimSegment1190.addChildren(Transform1191)
Shape1194 = x3d.Shape()
LineSet1195 = x3d.LineSet()
LineSet1195.setVertexCount([2])
Coordinate1196 = x3d.Coordinate()
Coordinate1196.setPoint([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248])

LineSet1195.setCoord(Coordinate1196)
#from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA1197 = x3d.ColorRGBA()
ColorRGBA1197.setUSE("HAnimSegmentLineColorRGBA")

LineSet1195.setColor(ColorRGBA1197)

Shape1194.setGeometry(LineSet1195)

HAnimSegment1190.addChildren(Shape1194)

HAnimJoint1189.addChildren(HAnimSegment1190)
HAnimJoint1198 = x3d.HAnimJoint()
HAnimJoint1198.setName("l_carpal_proximal_interphalangeal_2")
HAnimJoint1198.setDEF("hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint1198.setCenter([0.2017,0.7363,-0.0248])
HAnimJoint1198.setUlimit([0,0,0])
HAnimJoint1198.setLlimit([0,0,0])
HAnimSegment1199 = x3d.HAnimSegment()
HAnimSegment1199.setName("l_carpal_middle_phalanx_2")
HAnimSegment1199.setDEF("hanim_l_carpal_middle_phalanx_2")
Transform1200 = x3d.Transform()
#Empty Transform
Transform1201 = x3d.Transform()
#Empty Transform
Shape1202 = x3d.Shape()
Shape1202.setUSE("HAnimJointShape")

Transform1201.addChild(Shape1202)

Transform1200.addChildren(Transform1201)

HAnimSegment1199.addChildren(Transform1200)
Shape1203 = x3d.Shape()
LineSet1204 = x3d.LineSet()
LineSet1204.setVertexCount([2])
Coordinate1205 = x3d.Coordinate()
Coordinate1205.setPoint([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236])

LineSet1204.setCoord(Coordinate1205)
#from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA1206 = x3d.ColorRGBA()
ColorRGBA1206.setUSE("HAnimSegmentLineColorRGBA")

LineSet1204.setColor(ColorRGBA1206)

Shape1203.setGeometry(LineSet1204)

HAnimSegment1199.addChildren(Shape1203)
HAnimSite1207 = x3d.HAnimSite()
HAnimSite1207.setName("l_carpal_distal_phalanx_2_tip")
HAnimSite1207.setDEF("hanim_l_carpal_distal_phalanx_2_tip")
HAnimSite1207.setTranslation([0,1,0])
TouchSensor1208 = x3d.TouchSensor()
TouchSensor1208.setDescription("HAnimSite l_carpal_distal_phalanx_2_tip")

HAnimSite1207.addChildren(TouchSensor1208)
Shape1209 = x3d.Shape()
Shape1209.setUSE("HAnimSiteShape")

HAnimSite1207.addChildren(Shape1209)

HAnimSegment1199.addChildren(HAnimSite1207)
HAnimSite1210 = x3d.HAnimSite()
HAnimSite1210.setName("l_dactylion_pt")
HAnimSite1210.setDEF("hanim_l_dactylion_pt")
HAnimSite1210.setTranslation([0.2056,0.6743,-0.0482])
TouchSensor1211 = x3d.TouchSensor()
TouchSensor1211.setDescription("HAnimSite l_dactylion_pt")

HAnimSite1210.addChildren(TouchSensor1211)
Shape1212 = x3d.Shape()
Shape1212.setUSE("HAnimSiteShape")

HAnimSite1210.addChildren(Shape1212)

HAnimSegment1199.addChildren(HAnimSite1210)

HAnimJoint1198.addChildren(HAnimSegment1199)
HAnimJoint1213 = x3d.HAnimJoint()
HAnimJoint1213.setName("l_carpal_distal_interphalangeal_2")
HAnimJoint1213.setDEF("hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint1213.setCenter([0.2028,0.7139,-0.0236])
HAnimJoint1213.setUlimit([0,0,0])
HAnimJoint1213.setLlimit([0,0,0])

HAnimJoint1198.addChildren(HAnimJoint1213)

HAnimJoint1189.addChildren(HAnimJoint1198)

HAnimJoint1180.addChildren(HAnimJoint1189)

HAnimJoint1168.addChildren(HAnimJoint1180)

HAnimJoint1116.addChildren(HAnimJoint1168)
HAnimJoint1214 = x3d.HAnimJoint()
HAnimJoint1214.setName("l_midcarpal_3")
HAnimJoint1214.setDEF("hanim_l_midcarpal_3")
HAnimJoint1214.setCenter([0,1,0])
HAnimJoint1214.setUlimit([0,0,0])
HAnimJoint1214.setLlimit([0,0,0])
HAnimSegment1215 = x3d.HAnimSegment()
HAnimSegment1215.setName("l_capitate")
HAnimSegment1215.setDEF("hanim_l_capitate")
Transform1216 = x3d.Transform()
#Empty Transform
Transform1217 = x3d.Transform()
#Empty Transform
Shape1218 = x3d.Shape()
Shape1218.setUSE("HAnimJointShape")

Transform1217.addChild(Shape1218)

Transform1216.addChildren(Transform1217)

HAnimSegment1215.addChildren(Transform1216)
Shape1219 = x3d.Shape()
LineSet1220 = x3d.LineSet()
LineSet1220.setVertexCount([2])
Coordinate1221 = x3d.Coordinate()
Coordinate1221.setPoint([0,1,0,0.1987,0.8029,-0.053])

LineSet1220.setCoord(Coordinate1221)
#from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
ColorRGBA1222 = x3d.ColorRGBA()
ColorRGBA1222.setUSE("HAnimSegmentLineColorRGBA")

LineSet1220.setColor(ColorRGBA1222)

Shape1219.setGeometry(LineSet1220)

HAnimSegment1215.addChildren(Shape1219)
HAnimSite1223 = x3d.HAnimSite()
HAnimSite1223.setName("l_metacarpal_phalanx_3_pt")
HAnimSite1223.setDEF("hanim_l_metacarpal_phalanx_3_pt")
HAnimSite1223.setTranslation([0,1,0])
TouchSensor1224 = x3d.TouchSensor()
TouchSensor1224.setDescription("HAnimSite l_metacarpal_phalanx_3_pt")

HAnimSite1223.addChildren(TouchSensor1224)
Shape1225 = x3d.Shape()
Shape1225.setUSE("HAnimSiteShape")

HAnimSite1223.addChildren(Shape1225)

HAnimSegment1215.addChildren(HAnimSite1223)

HAnimJoint1214.addChildren(HAnimSegment1215)
HAnimJoint1226 = x3d.HAnimJoint()
HAnimJoint1226.setName("l_carpometacarpal_3")
HAnimJoint1226.setDEF("hanim_l_carpometacarpal_3")
HAnimJoint1226.setCenter([0.1987,0.8029,-0.053])
HAnimJoint1226.setUlimit([0,0,0])
HAnimJoint1226.setLlimit([0,0,0])
HAnimSegment1227 = x3d.HAnimSegment()
HAnimSegment1227.setName("l_metacarpal_3")
HAnimSegment1227.setDEF("hanim_l_metacarpal_3")
Transform1228 = x3d.Transform()
#Empty Transform
Transform1229 = x3d.Transform()
#Empty Transform
Shape1230 = x3d.Shape()
Shape1230.setUSE("HAnimJointShape")

Transform1229.addChild(Shape1230)

Transform1228.addChildren(Transform1229)

HAnimSegment1227.addChildren(Transform1228)
Shape1231 = x3d.Shape()
LineSet1232 = x3d.LineSet()
LineSet1232.setVertexCount([2])
Coordinate1233 = x3d.Coordinate()
Coordinate1233.setPoint([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053])

LineSet1232.setCoord(Coordinate1233)
#from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA1234 = x3d.ColorRGBA()
ColorRGBA1234.setUSE("HAnimSegmentLineColorRGBA")

LineSet1232.setColor(ColorRGBA1234)

Shape1231.setGeometry(LineSet1232)

HAnimSegment1227.addChildren(Shape1231)

HAnimJoint1226.addChildren(HAnimSegment1227)
HAnimJoint1235 = x3d.HAnimJoint()
HAnimJoint1235.setName("l_metacarpophalangeal_3")
HAnimJoint1235.setDEF("hanim_l_metacarpophalangeal_3")
HAnimJoint1235.setCenter([0.1987,0.7818,-0.053])
HAnimJoint1235.setUlimit([0,0,0])
HAnimJoint1235.setLlimit([0,0,0])
HAnimSegment1236 = x3d.HAnimSegment()
HAnimSegment1236.setName("l_carpal_proximal_phalanx_3")
HAnimSegment1236.setDEF("hanim_l_carpal_proximal_phalanx_3")
Transform1237 = x3d.Transform()
#Empty Transform
Transform1238 = x3d.Transform()
#Empty Transform
Shape1239 = x3d.Shape()
Shape1239.setUSE("HAnimJointShape")

Transform1238.addChild(Shape1239)

Transform1237.addChildren(Transform1238)

HAnimSegment1236.addChildren(Transform1237)
Shape1240 = x3d.Shape()
LineSet1241 = x3d.LineSet()
LineSet1241.setVertexCount([2])
Coordinate1242 = x3d.Coordinate()
Coordinate1242.setPoint([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503])

LineSet1241.setCoord(Coordinate1242)
#from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA1243 = x3d.ColorRGBA()
ColorRGBA1243.setUSE("HAnimSegmentLineColorRGBA")

LineSet1241.setColor(ColorRGBA1243)

Shape1240.setGeometry(LineSet1241)

HAnimSegment1236.addChildren(Shape1240)

HAnimJoint1235.addChildren(HAnimSegment1236)
HAnimJoint1244 = x3d.HAnimJoint()
HAnimJoint1244.setName("l_carpal_proximal_interphalangeal_3")
HAnimJoint1244.setDEF("hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint1244.setCenter([0.2013,0.7273,-0.0503])
HAnimJoint1244.setUlimit([0,0,0])
HAnimJoint1244.setLlimit([0,0,0])
HAnimSegment1245 = x3d.HAnimSegment()
HAnimSegment1245.setName("l_carpal_middle_phalanx_3")
HAnimSegment1245.setDEF("hanim_l_carpal_middle_phalanx_3")
Transform1246 = x3d.Transform()
#Empty Transform
Transform1247 = x3d.Transform()
#Empty Transform
Shape1248 = x3d.Shape()
Shape1248.setUSE("HAnimJointShape")

Transform1247.addChild(Shape1248)

Transform1246.addChildren(Transform1247)

HAnimSegment1245.addChildren(Transform1246)
Shape1249 = x3d.Shape()
LineSet1250 = x3d.LineSet()
LineSet1250.setVertexCount([2])
Coordinate1251 = x3d.Coordinate()
Coordinate1251.setPoint([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494])

LineSet1250.setCoord(Coordinate1251)
#from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA1252 = x3d.ColorRGBA()
ColorRGBA1252.setUSE("HAnimSegmentLineColorRGBA")

LineSet1250.setColor(ColorRGBA1252)

Shape1249.setGeometry(LineSet1250)

HAnimSegment1245.addChildren(Shape1249)
HAnimSite1253 = x3d.HAnimSite()
HAnimSite1253.setName("l_carpal_distal_phalanx_3_tip")
HAnimSite1253.setDEF("hanim_l_carpal_distal_phalanx_3_tip")
HAnimSite1253.setTranslation([0,1,0])
TouchSensor1254 = x3d.TouchSensor()
TouchSensor1254.setDescription("HAnimSite l_carpal_distal_phalanx_3_tip")

HAnimSite1253.addChildren(TouchSensor1254)
Shape1255 = x3d.Shape()
Shape1255.setUSE("HAnimSiteShape")

HAnimSite1253.addChildren(Shape1255)

HAnimSegment1245.addChildren(HAnimSite1253)

HAnimJoint1244.addChildren(HAnimSegment1245)
HAnimJoint1256 = x3d.HAnimJoint()
HAnimJoint1256.setName("l_carpal_distal_interphalangeal_3")
HAnimJoint1256.setDEF("hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint1256.setCenter([0.2026,0.7011,-0.0494])
HAnimJoint1256.setUlimit([0,0,0])
HAnimJoint1256.setLlimit([0,0,0])

HAnimJoint1244.addChildren(HAnimJoint1256)

HAnimJoint1235.addChildren(HAnimJoint1244)

HAnimJoint1226.addChildren(HAnimJoint1235)

HAnimJoint1214.addChildren(HAnimJoint1226)

HAnimJoint1116.addChildren(HAnimJoint1214)
HAnimJoint1257 = x3d.HAnimJoint()
HAnimJoint1257.setName("l_midcarpal_4_5")
HAnimJoint1257.setDEF("hanim_l_midcarpal_4_5")
HAnimJoint1257.setCenter([0,1,0])
HAnimJoint1257.setUlimit([0,0,0])
HAnimJoint1257.setLlimit([0,0,0])
HAnimSegment1258 = x3d.HAnimSegment()
HAnimSegment1258.setName("l_hamate")
HAnimSegment1258.setDEF("hanim_l_hamate")
Transform1259 = x3d.Transform()
#Empty Transform
Transform1260 = x3d.Transform()
#Empty Transform
Shape1261 = x3d.Shape()
Shape1261.setUSE("HAnimJointShape")

Transform1260.addChild(Shape1261)

Transform1259.addChildren(Transform1260)

HAnimSegment1258.addChildren(Transform1259)
Shape1262 = x3d.Shape()
LineSet1263 = x3d.LineSet()
LineSet1263.setVertexCount([2])
Coordinate1264 = x3d.Coordinate()
Coordinate1264.setPoint([0,1,0,0.1956,0.8019,-0.0794])

LineSet1263.setCoord(Coordinate1264)
#from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
ColorRGBA1265 = x3d.ColorRGBA()
ColorRGBA1265.setUSE("HAnimSegmentLineColorRGBA")

LineSet1263.setColor(ColorRGBA1265)

Shape1262.setGeometry(LineSet1263)

HAnimSegment1258.addChildren(Shape1262)
Shape1266 = x3d.Shape()
LineSet1267 = x3d.LineSet()
LineSet1267.setVertexCount([2])
Coordinate1268 = x3d.Coordinate()
Coordinate1268.setPoint([0,1,0,0.1925,0.8066,-0.1036])

LineSet1267.setCoord(Coordinate1268)
#from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
ColorRGBA1269 = x3d.ColorRGBA()
ColorRGBA1269.setUSE("HAnimSegmentLineColorRGBA")

LineSet1267.setColor(ColorRGBA1269)

Shape1266.setGeometry(LineSet1267)

HAnimSegment1258.addChildren(Shape1266)
HAnimSite1270 = x3d.HAnimSite()
HAnimSite1270.setName("l_metacarpal_phalanx_5_pt")
HAnimSite1270.setDEF("hanim_l_metacarpal_phalanx_5_pt")
HAnimSite1270.setTranslation([0.1929,0.786,-0.1122])
TouchSensor1271 = x3d.TouchSensor()
TouchSensor1271.setDescription("HAnimSite l_metacarpal_phalanx_5_pt")

HAnimSite1270.addChildren(TouchSensor1271)
Shape1272 = x3d.Shape()
Shape1272.setUSE("HAnimSiteShape")

HAnimSite1270.addChildren(Shape1272)

HAnimSegment1258.addChildren(HAnimSite1270)

HAnimJoint1257.addChildren(HAnimSegment1258)
HAnimJoint1273 = x3d.HAnimJoint()
HAnimJoint1273.setName("l_carpometacarpal_4")
HAnimJoint1273.setDEF("hanim_l_carpometacarpal_4")
HAnimJoint1273.setCenter([0.1956,0.8019,-0.0794])
HAnimJoint1273.setUlimit([0,0,0])
HAnimJoint1273.setLlimit([0,0,0])
HAnimSegment1274 = x3d.HAnimSegment()
HAnimSegment1274.setName("l_metacarpal_4")
HAnimSegment1274.setDEF("hanim_l_metacarpal_4")
Transform1275 = x3d.Transform()
#Empty Transform
Transform1276 = x3d.Transform()
#Empty Transform
Shape1277 = x3d.Shape()
Shape1277.setUSE("HAnimJointShape")

Transform1276.addChild(Shape1277)

Transform1275.addChildren(Transform1276)

HAnimSegment1274.addChildren(Transform1275)
Shape1278 = x3d.Shape()
LineSet1279 = x3d.LineSet()
LineSet1279.setVertexCount([2])
Coordinate1280 = x3d.Coordinate()
Coordinate1280.setPoint([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794])

LineSet1279.setCoord(Coordinate1280)
#from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA1281 = x3d.ColorRGBA()
ColorRGBA1281.setUSE("HAnimSegmentLineColorRGBA")

LineSet1279.setColor(ColorRGBA1281)

Shape1278.setGeometry(LineSet1279)

HAnimSegment1274.addChildren(Shape1278)

HAnimJoint1273.addChildren(HAnimSegment1274)
HAnimJoint1282 = x3d.HAnimJoint()
HAnimJoint1282.setName("l_metacarpophalangeal_4")
HAnimJoint1282.setDEF("hanim_l_metacarpophalangeal_4")
HAnimJoint1282.setCenter([0.1956,0.7815,-0.0794])
HAnimJoint1282.setUlimit([0,0,0])
HAnimJoint1282.setLlimit([0,0,0])
HAnimSegment1283 = x3d.HAnimSegment()
HAnimSegment1283.setName("l_carpal_proximal_phalanx_4")
HAnimSegment1283.setDEF("hanim_l_carpal_proximal_phalanx_4")
Transform1284 = x3d.Transform()
#Empty Transform
Transform1285 = x3d.Transform()
#Empty Transform
Shape1286 = x3d.Shape()
Shape1286.setUSE("HAnimJointShape")

Transform1285.addChild(Shape1286)

Transform1284.addChildren(Transform1285)

HAnimSegment1283.addChildren(Transform1284)
Shape1287 = x3d.Shape()
LineSet1288 = x3d.LineSet()
LineSet1288.setVertexCount([2])
Coordinate1289 = x3d.Coordinate()
Coordinate1289.setPoint([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777])

LineSet1288.setCoord(Coordinate1289)
#from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA1290 = x3d.ColorRGBA()
ColorRGBA1290.setUSE("HAnimSegmentLineColorRGBA")

LineSet1288.setColor(ColorRGBA1290)

Shape1287.setGeometry(LineSet1288)

HAnimSegment1283.addChildren(Shape1287)

HAnimJoint1282.addChildren(HAnimSegment1283)
HAnimJoint1291 = x3d.HAnimJoint()
HAnimJoint1291.setName("l_carpal_proximal_interphalangeal_4")
HAnimJoint1291.setDEF("hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint1291.setCenter([0.1973,0.7287,-0.0777])
HAnimJoint1291.setUlimit([0,0,0])
HAnimJoint1291.setLlimit([0,0,0])
HAnimSegment1292 = x3d.HAnimSegment()
HAnimSegment1292.setName("l_carpal_middle_phalanx_4")
HAnimSegment1292.setDEF("hanim_l_carpal_middle_phalanx_4")
Transform1293 = x3d.Transform()
#Empty Transform
Transform1294 = x3d.Transform()
#Empty Transform
Shape1295 = x3d.Shape()
Shape1295.setUSE("HAnimJointShape")

Transform1294.addChild(Shape1295)

Transform1293.addChildren(Transform1294)

HAnimSegment1292.addChildren(Transform1293)
Shape1296 = x3d.Shape()
LineSet1297 = x3d.LineSet()
LineSet1297.setVertexCount([2])
Coordinate1298 = x3d.Coordinate()
Coordinate1298.setPoint([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767])

LineSet1297.setCoord(Coordinate1298)
#from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA1299 = x3d.ColorRGBA()
ColorRGBA1299.setUSE("HAnimSegmentLineColorRGBA")

LineSet1297.setColor(ColorRGBA1299)

Shape1296.setGeometry(LineSet1297)

HAnimSegment1292.addChildren(Shape1296)
HAnimSite1300 = x3d.HAnimSite()
HAnimSite1300.setName("l_carpal_distal_phalanx_4_tip")
HAnimSite1300.setDEF("hanim_l_carpal_distal_phalanx_4_tip")
HAnimSite1300.setTranslation([0,1,0])
TouchSensor1301 = x3d.TouchSensor()
TouchSensor1301.setDescription("HAnimSite l_carpal_distal_phalanx_4_tip")

HAnimSite1300.addChildren(TouchSensor1301)
Shape1302 = x3d.Shape()
Shape1302.setUSE("HAnimSiteShape")

HAnimSite1300.addChildren(Shape1302)

HAnimSegment1292.addChildren(HAnimSite1300)

HAnimJoint1291.addChildren(HAnimSegment1292)
HAnimJoint1303 = x3d.HAnimJoint()
HAnimJoint1303.setName("l_carpal_distal_interphalangeal_4")
HAnimJoint1303.setDEF("hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint1303.setCenter([0.1983,0.7045,-0.0767])
HAnimJoint1303.setUlimit([0,0,0])
HAnimJoint1303.setLlimit([0,0,0])

HAnimJoint1291.addChildren(HAnimJoint1303)

HAnimJoint1282.addChildren(HAnimJoint1291)

HAnimJoint1273.addChildren(HAnimJoint1282)

HAnimJoint1257.addChildren(HAnimJoint1273)
HAnimJoint1304 = x3d.HAnimJoint()
HAnimJoint1304.setName("l_carpometacarpal_5")
HAnimJoint1304.setDEF("hanim_l_carpometacarpal_5")
HAnimJoint1304.setCenter([0.1925,0.8066,-0.1036])
HAnimJoint1304.setUlimit([0,0,0])
HAnimJoint1304.setLlimit([0,0,0])
HAnimSegment1305 = x3d.HAnimSegment()
HAnimSegment1305.setName("l_metacarpal_5")
HAnimSegment1305.setDEF("hanim_l_metacarpal_5")
Transform1306 = x3d.Transform()
#Empty Transform
Transform1307 = x3d.Transform()
#Empty Transform
Shape1308 = x3d.Shape()
Shape1308.setUSE("HAnimJointShape")

Transform1307.addChild(Shape1308)

Transform1306.addChildren(Transform1307)

HAnimSegment1305.addChildren(Transform1306)
Shape1309 = x3d.Shape()
LineSet1310 = x3d.LineSet()
LineSet1310.setVertexCount([2])
Coordinate1311 = x3d.Coordinate()
Coordinate1311.setPoint([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036])

LineSet1310.setCoord(Coordinate1311)
#from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA1312 = x3d.ColorRGBA()
ColorRGBA1312.setUSE("HAnimSegmentLineColorRGBA")

LineSet1310.setColor(ColorRGBA1312)

Shape1309.setGeometry(LineSet1310)

HAnimSegment1305.addChildren(Shape1309)

HAnimJoint1304.addChildren(HAnimSegment1305)
HAnimJoint1313 = x3d.HAnimJoint()
HAnimJoint1313.setName("l_metacarpophalangeal_5")
HAnimJoint1313.setDEF("hanim_l_metacarpophalangeal_5")
HAnimJoint1313.setCenter([0.1925,0.7866,-0.1036])
HAnimJoint1313.setUlimit([0,0,0])
HAnimJoint1313.setLlimit([0,0,0])
HAnimSegment1314 = x3d.HAnimSegment()
HAnimSegment1314.setName("l_carpal_proximal_phalanx_5")
HAnimSegment1314.setDEF("hanim_l_carpal_proximal_phalanx_5")
Transform1315 = x3d.Transform()
#Empty Transform
Transform1316 = x3d.Transform()
#Empty Transform
Shape1317 = x3d.Shape()
Shape1317.setUSE("HAnimJointShape")

Transform1316.addChild(Shape1317)

Transform1315.addChildren(Transform1316)

HAnimSegment1314.addChildren(Transform1315)
Shape1318 = x3d.Shape()
LineSet1319 = x3d.LineSet()
LineSet1319.setVertexCount([2])
Coordinate1320 = x3d.Coordinate()
Coordinate1320.setPoint([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024])

LineSet1319.setCoord(Coordinate1320)
#from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA1321 = x3d.ColorRGBA()
ColorRGBA1321.setUSE("HAnimSegmentLineColorRGBA")

LineSet1319.setColor(ColorRGBA1321)

Shape1318.setGeometry(LineSet1319)

HAnimSegment1314.addChildren(Shape1318)

HAnimJoint1313.addChildren(HAnimSegment1314)
HAnimJoint1322 = x3d.HAnimJoint()
HAnimJoint1322.setName("l_carpal_proximal_interphalangeal_5")
HAnimJoint1322.setDEF("hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint1322.setCenter([0.1938,0.7452,-0.1024])
HAnimJoint1322.setUlimit([0,0,0])
HAnimJoint1322.setLlimit([0,0,0])
HAnimSegment1323 = x3d.HAnimSegment()
HAnimSegment1323.setName("l_carpal_middle_phalanx_5")
HAnimSegment1323.setDEF("hanim_l_carpal_middle_phalanx_5")
Transform1324 = x3d.Transform()
#Empty Transform
Transform1325 = x3d.Transform()
#Empty Transform
Shape1326 = x3d.Shape()
Shape1326.setUSE("HAnimJointShape")

Transform1325.addChild(Shape1326)

Transform1324.addChildren(Transform1325)

HAnimSegment1323.addChildren(Transform1324)
Shape1327 = x3d.Shape()
LineSet1328 = x3d.LineSet()
LineSet1328.setVertexCount([2])
Coordinate1329 = x3d.Coordinate()
Coordinate1329.setPoint([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017])

LineSet1328.setCoord(Coordinate1329)
#from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA1330 = x3d.ColorRGBA()
ColorRGBA1330.setUSE("HAnimSegmentLineColorRGBA")

LineSet1328.setColor(ColorRGBA1330)

Shape1327.setGeometry(LineSet1328)

HAnimSegment1323.addChildren(Shape1327)
HAnimSite1331 = x3d.HAnimSite()
HAnimSite1331.setName("l_carpal_distal_phalanx_5_tip")
HAnimSite1331.setDEF("hanim_l_carpal_distal_phalanx_5_tip")
HAnimSite1331.setTranslation([0,1,0])
TouchSensor1332 = x3d.TouchSensor()
TouchSensor1332.setDescription("HAnimSite l_carpal_distal_phalanx_5_tip")

HAnimSite1331.addChildren(TouchSensor1332)
Shape1333 = x3d.Shape()
Shape1333.setUSE("HAnimSiteShape")

HAnimSite1331.addChildren(Shape1333)

HAnimSegment1323.addChildren(HAnimSite1331)

HAnimJoint1322.addChildren(HAnimSegment1323)
HAnimJoint1334 = x3d.HAnimJoint()
HAnimJoint1334.setName("l_carpal_distal_interphalangeal_5")
HAnimJoint1334.setDEF("hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint1334.setCenter([0.1948,0.7277,-0.1017])
HAnimJoint1334.setUlimit([0,0,0])
HAnimJoint1334.setLlimit([0,0,0])

HAnimJoint1322.addChildren(HAnimJoint1334)

HAnimJoint1313.addChildren(HAnimJoint1322)

HAnimJoint1304.addChildren(HAnimJoint1313)

HAnimJoint1257.addChildren(HAnimJoint1304)

HAnimJoint1116.addChildren(HAnimJoint1257)

HAnimJoint1104.addChildren(HAnimJoint1116)

HAnimJoint1083.addChildren(HAnimJoint1104)

HAnimJoint1068.addChildren(HAnimJoint1083)

HAnimJoint1059.addChildren(HAnimJoint1068)

HAnimJoint854.addChildren(HAnimJoint1059)
HAnimJoint1335 = x3d.HAnimJoint()
HAnimJoint1335.setName("r_sternoclavicular")
HAnimJoint1335.setDEF("hanim_r_sternoclavicular")
HAnimJoint1335.setCenter([-0.0694,1.46,-0.033])
HAnimJoint1335.setUlimit([0,0,0])
HAnimJoint1335.setLlimit([0,0,0])
HAnimSegment1336 = x3d.HAnimSegment()
HAnimSegment1336.setName("r_clavicle")
HAnimSegment1336.setDEF("hanim_r_clavicle")
Transform1337 = x3d.Transform()
#Empty Transform
Transform1338 = x3d.Transform()
#Empty Transform
Shape1339 = x3d.Shape()
Shape1339.setUSE("HAnimJointShape")

Transform1338.addChild(Shape1339)

Transform1337.addChildren(Transform1338)

HAnimSegment1336.addChildren(Transform1337)
Shape1340 = x3d.Shape()
LineSet1341 = x3d.LineSet()
LineSet1341.setVertexCount([2])
Coordinate1342 = x3d.Coordinate()
Coordinate1342.setPoint([-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401])

LineSet1341.setCoord(Coordinate1342)
#from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA1343 = x3d.ColorRGBA()
ColorRGBA1343.setUSE("HAnimSegmentLineColorRGBA")

LineSet1341.setColor(ColorRGBA1343)

Shape1340.setGeometry(LineSet1341)

HAnimSegment1336.addChildren(Shape1340)

HAnimJoint1335.addChildren(HAnimSegment1336)
HAnimJoint1344 = x3d.HAnimJoint()
HAnimJoint1344.setName("r_acromioclavicular")
HAnimJoint1344.setDEF("hanim_r_acromioclavicular")
HAnimJoint1344.setCenter([-0.0836,1.4281,-0.0401])
HAnimJoint1344.setUlimit([0,0,0])
HAnimJoint1344.setLlimit([0,0,0])
HAnimSegment1345 = x3d.HAnimSegment()
HAnimSegment1345.setName("r_scapula")
HAnimSegment1345.setDEF("hanim_r_scapula")
Transform1346 = x3d.Transform()
#Empty Transform
Transform1347 = x3d.Transform()
#Empty Transform
Shape1348 = x3d.Shape()
Shape1348.setUSE("HAnimJointShape")

Transform1347.addChild(Shape1348)

Transform1346.addChildren(Transform1347)

HAnimSegment1345.addChildren(Transform1346)
Shape1349 = x3d.Shape()
LineSet1350 = x3d.LineSet()
LineSet1350.setVertexCount([2])
Coordinate1351 = x3d.Coordinate()
Coordinate1351.setPoint([-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325])

LineSet1350.setCoord(Coordinate1351)
#from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA1352 = x3d.ColorRGBA()
ColorRGBA1352.setUSE("HAnimSegmentLineColorRGBA")

LineSet1350.setColor(ColorRGBA1352)

Shape1349.setGeometry(LineSet1350)

HAnimSegment1345.addChildren(Shape1349)
HAnimSite1353 = x3d.HAnimSite()
HAnimSite1353.setName("r_bideltoid_pt")
HAnimSite1353.setDEF("hanim_r_bideltoid_pt")
HAnimSite1353.setTranslation([0,1,0])
TouchSensor1354 = x3d.TouchSensor()
TouchSensor1354.setDescription("HAnimSite r_bideltoid_pt")

HAnimSite1353.addChildren(TouchSensor1354)
Shape1355 = x3d.Shape()
Shape1355.setUSE("HAnimSiteShape")

HAnimSite1353.addChildren(Shape1355)

HAnimSegment1345.addChildren(HAnimSite1353)
HAnimSite1356 = x3d.HAnimSite()
HAnimSite1356.setName("r_humeral_lateral_epicondyles_pt")
HAnimSite1356.setDEF("hanim_r_humeral_lateral_epicondyles_pt")
HAnimSite1356.setTranslation([-0.2224,1.1517,-0.1033])
TouchSensor1357 = x3d.TouchSensor()
TouchSensor1357.setDescription("HAnimSite r_humeral_lateral_epicondyles_pt")

HAnimSite1356.addChildren(TouchSensor1357)
Shape1358 = x3d.Shape()
Shape1358.setUSE("HAnimSiteShape")

HAnimSite1356.addChildren(Shape1358)

HAnimSegment1345.addChildren(HAnimSite1356)

HAnimJoint1344.addChildren(HAnimSegment1345)
HAnimJoint1359 = x3d.HAnimJoint()
HAnimJoint1359.setName("r_shoulder")
HAnimJoint1359.setDEF("hanim_r_shoulder")
HAnimJoint1359.setCenter([-0.1907,1.4407,-0.0325])
HAnimJoint1359.setUlimit([0,0,0])
HAnimJoint1359.setLlimit([0,0,0])
HAnimSegment1360 = x3d.HAnimSegment()
HAnimSegment1360.setName("r_upperarm")
HAnimSegment1360.setDEF("hanim_r_upperarm")
Transform1361 = x3d.Transform()
#Empty Transform
Transform1362 = x3d.Transform()
#Empty Transform
Shape1363 = x3d.Shape()
Shape1363.setUSE("HAnimJointShape")

Transform1362.addChild(Shape1363)

Transform1361.addChildren(Transform1362)

HAnimSegment1360.addChildren(Transform1361)
Shape1364 = x3d.Shape()
LineSet1365 = x3d.LineSet()
LineSet1365.setVertexCount([2])
Coordinate1366 = x3d.Coordinate()
Coordinate1366.setPoint([-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062])

LineSet1365.setCoord(Coordinate1366)
#from r_shoulder to r_elbow vertices 2
ColorRGBA1367 = x3d.ColorRGBA()
ColorRGBA1367.setUSE("HAnimSegmentLineColorRGBA")

LineSet1365.setColor(ColorRGBA1367)

Shape1364.setGeometry(LineSet1365)

HAnimSegment1360.addChildren(Shape1364)
HAnimSite1368 = x3d.HAnimSite()
HAnimSite1368.setName("r_humeral_medial_epicondyles_pt")
HAnimSite1368.setDEF("hanim_r_humeral_medial_epicondyles_pt")
HAnimSite1368.setTranslation([-0.168,1.1298,-0.1062])
TouchSensor1369 = x3d.TouchSensor()
TouchSensor1369.setDescription("HAnimSite r_humeral_medial_epicondyles_pt")

HAnimSite1368.addChildren(TouchSensor1369)
Shape1370 = x3d.Shape()
Shape1370.setUSE("HAnimSiteShape")

HAnimSite1368.addChildren(Shape1370)

HAnimSegment1360.addChildren(HAnimSite1368)
HAnimSite1371 = x3d.HAnimSite()
HAnimSite1371.setName("r_olecranon_pt")
HAnimSite1371.setDEF("hanim_r_olecranon_pt")
HAnimSite1371.setTranslation([-0.1907,1.1405,-0.1065])
TouchSensor1372 = x3d.TouchSensor()
TouchSensor1372.setDescription("HAnimSite r_olecranon_pt")

HAnimSite1371.addChildren(TouchSensor1372)
Shape1373 = x3d.Shape()
Shape1373.setUSE("HAnimSiteShape")

HAnimSite1371.addChildren(Shape1373)

HAnimSegment1360.addChildren(HAnimSite1371)
HAnimSite1374 = x3d.HAnimSite()
HAnimSite1374.setName("r_radial_styloid_pt")
HAnimSite1374.setDEF("hanim_r_radial_styloid_pt")
HAnimSite1374.setTranslation([-0.1884,0.8676,-0.036])
TouchSensor1375 = x3d.TouchSensor()
TouchSensor1375.setDescription("HAnimSite r_radial_styloid_pt")

HAnimSite1374.addChildren(TouchSensor1375)
Shape1376 = x3d.Shape()
Shape1376.setUSE("HAnimSiteShape")

HAnimSite1374.addChildren(Shape1376)

HAnimSegment1360.addChildren(HAnimSite1374)
HAnimSite1377 = x3d.HAnimSite()
HAnimSite1377.setName("r_radiale_pt")
HAnimSite1377.setDEF("hanim_r_radiale_pt")
HAnimSite1377.setTranslation([-0.213,1.1305,-0.1091])
TouchSensor1378 = x3d.TouchSensor()
TouchSensor1378.setDescription("HAnimSite r_radiale_pt")

HAnimSite1377.addChildren(TouchSensor1378)
Shape1379 = x3d.Shape()
Shape1379.setUSE("HAnimSiteShape")

HAnimSite1377.addChildren(Shape1379)

HAnimSegment1360.addChildren(HAnimSite1377)

HAnimJoint1359.addChildren(HAnimSegment1360)
HAnimJoint1380 = x3d.HAnimJoint()
HAnimJoint1380.setName("r_elbow")
HAnimJoint1380.setDEF("hanim_r_elbow")
HAnimJoint1380.setCenter([-0.1949,1.1388,-0.062])
HAnimJoint1380.setUlimit([0,0,0])
HAnimJoint1380.setLlimit([0,0,0])
HAnimSegment1381 = x3d.HAnimSegment()
HAnimSegment1381.setName("r_forearm")
HAnimSegment1381.setDEF("hanim_r_forearm")
Transform1382 = x3d.Transform()
#Empty Transform
Transform1383 = x3d.Transform()
#Empty Transform
Shape1384 = x3d.Shape()
Shape1384.setUSE("HAnimJointShape")

Transform1383.addChild(Shape1384)

Transform1382.addChildren(Transform1383)

HAnimSegment1381.addChildren(Transform1382)
Shape1385 = x3d.Shape()
LineSet1386 = x3d.LineSet()
LineSet1386.setVertexCount([2])
Coordinate1387 = x3d.Coordinate()
Coordinate1387.setPoint([-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521])

LineSet1386.setCoord(Coordinate1387)
#from r_elbow to r_radiocarpal vertices 2
ColorRGBA1388 = x3d.ColorRGBA()
ColorRGBA1388.setUSE("HAnimSegmentLineColorRGBA")

LineSet1386.setColor(ColorRGBA1388)

Shape1385.setGeometry(LineSet1386)

HAnimSegment1381.addChildren(Shape1385)
HAnimSite1389 = x3d.HAnimSite()
HAnimSite1389.setName("r_ulnar_styloid_pt")
HAnimSite1389.setDEF("hanim_r_ulnar_styloid_pt")
HAnimSite1389.setTranslation([-0.2117,0.8562,-0.0584])
TouchSensor1390 = x3d.TouchSensor()
TouchSensor1390.setDescription("HAnimSite r_ulnar_styloid_pt")

HAnimSite1389.addChildren(TouchSensor1390)
Shape1391 = x3d.Shape()
Shape1391.setUSE("HAnimSiteShape")

HAnimSite1389.addChildren(Shape1391)

HAnimSegment1381.addChildren(HAnimSite1389)

HAnimJoint1380.addChildren(HAnimSegment1381)
HAnimJoint1392 = x3d.HAnimJoint()
HAnimJoint1392.setName("r_radiocarpal")
HAnimJoint1392.setDEF("hanim_r_radiocarpal")
HAnimJoint1392.setCenter([-0.1959,0.8694,-0.0521])
HAnimJoint1392.setUlimit([0,0,0])
HAnimJoint1392.setLlimit([0,0,0])
HAnimSegment1393 = x3d.HAnimSegment()
HAnimSegment1393.setName("r_carpal")
HAnimSegment1393.setDEF("hanim_r_carpal")
Transform1394 = x3d.Transform()
Transform1394.setScale([0.2,0.2,0.2])
Transform1394.setTranslation([-0.2,0.85,-0.05])
Transform1394.setRotation([0,0,1,-3.14])
#Transform right hand
Transform1395 = x3d.Transform()
Transform1395.setRotation([0,1,0,1.57])
#Transform right hand
Shape1396 = x3d.Shape()
Shape1396.setUSE("HAnimJointShape")

Transform1395.addChild(Shape1396)

Transform1394.addChildren(Transform1395)

HAnimSegment1393.addChildren(Transform1394)
Shape1397 = x3d.Shape()
LineSet1398 = x3d.LineSet()
LineSet1398.setVertexCount([2])
Coordinate1399 = x3d.Coordinate()
Coordinate1399.setPoint([-0.1959,0.8694,-0.0521,0,1,0])

LineSet1398.setCoord(Coordinate1399)
#from r_radiocarpal to r_midcarpal_1 vertices 2
ColorRGBA1400 = x3d.ColorRGBA()
ColorRGBA1400.setUSE("HAnimSegmentLineColorRGBA")

LineSet1398.setColor(ColorRGBA1400)

Shape1397.setGeometry(LineSet1398)

HAnimSegment1393.addChildren(Shape1397)
Shape1401 = x3d.Shape()
LineSet1402 = x3d.LineSet()
LineSet1402.setVertexCount([2])
Coordinate1403 = x3d.Coordinate()
Coordinate1403.setPoint([-0.1959,0.8694,-0.0521,0,1,0])

LineSet1402.setCoord(Coordinate1403)
#from r_radiocarpal to r_midcarpal_2 vertices 2
ColorRGBA1404 = x3d.ColorRGBA()
ColorRGBA1404.setUSE("HAnimSegmentLineColorRGBA")

LineSet1402.setColor(ColorRGBA1404)

Shape1401.setGeometry(LineSet1402)

HAnimSegment1393.addChildren(Shape1401)
Shape1405 = x3d.Shape()
LineSet1406 = x3d.LineSet()
LineSet1406.setVertexCount([2])
Coordinate1407 = x3d.Coordinate()
Coordinate1407.setPoint([-0.1959,0.8694,-0.0521,0,1,0])

LineSet1406.setCoord(Coordinate1407)
#from r_radiocarpal to r_midcarpal_3 vertices 2
ColorRGBA1408 = x3d.ColorRGBA()
ColorRGBA1408.setUSE("HAnimSegmentLineColorRGBA")

LineSet1406.setColor(ColorRGBA1408)

Shape1405.setGeometry(LineSet1406)

HAnimSegment1393.addChildren(Shape1405)
Shape1409 = x3d.Shape()
LineSet1410 = x3d.LineSet()
LineSet1410.setVertexCount([2])
Coordinate1411 = x3d.Coordinate()
Coordinate1411.setPoint([-0.1959,0.8694,-0.0521,0,1,0])

LineSet1410.setCoord(Coordinate1411)
#from r_radiocarpal to r_midcarpal_4_5 vertices 2
ColorRGBA1412 = x3d.ColorRGBA()
ColorRGBA1412.setUSE("HAnimSegmentLineColorRGBA")

LineSet1410.setColor(ColorRGBA1412)

Shape1409.setGeometry(LineSet1410)

HAnimSegment1393.addChildren(Shape1409)

HAnimJoint1392.addChildren(HAnimSegment1393)
HAnimJoint1413 = x3d.HAnimJoint()
HAnimJoint1413.setName("r_midcarpal_1")
HAnimJoint1413.setDEF("hanim_r_midcarpal_1")
HAnimJoint1413.setCenter([0,1,0])
HAnimJoint1413.setUlimit([0,0,0])
HAnimJoint1413.setLlimit([0,0,0])
HAnimSegment1414 = x3d.HAnimSegment()
HAnimSegment1414.setName("r_trapezium")
HAnimSegment1414.setDEF("hanim_r_trapezium")
Transform1415 = x3d.Transform()
#Empty Transform
Transform1416 = x3d.Transform()
#Empty Transform
Shape1417 = x3d.Shape()
Shape1417.setUSE("HAnimJointShape")

Transform1416.addChild(Shape1417)

Transform1415.addChildren(Transform1416)

HAnimSegment1414.addChildren(Transform1415)
Shape1418 = x3d.Shape()
LineSet1419 = x3d.LineSet()
LineSet1419.setVertexCount([2])
Coordinate1420 = x3d.Coordinate()
Coordinate1420.setPoint([0,1,0,-0.1899,0.8502,-0.0473])

LineSet1419.setCoord(Coordinate1420)
#from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
ColorRGBA1421 = x3d.ColorRGBA()
ColorRGBA1421.setUSE("HAnimSegmentLineColorRGBA")

LineSet1419.setColor(ColorRGBA1421)

Shape1418.setGeometry(LineSet1419)

HAnimSegment1414.addChildren(Shape1418)

HAnimJoint1413.addChildren(HAnimSegment1414)
HAnimJoint1422 = x3d.HAnimJoint()
HAnimJoint1422.setName("r_carpometacarpal_1")
HAnimJoint1422.setDEF("hanim_r_carpometacarpal_1")
HAnimJoint1422.setCenter([-0.1899,0.8502,-0.0473])
HAnimJoint1422.setUlimit([0,0,0])
HAnimJoint1422.setLlimit([0,0,0])
HAnimSegment1423 = x3d.HAnimSegment()
HAnimSegment1423.setName("r_metacarpal_1")
HAnimSegment1423.setDEF("hanim_r_metacarpal_1")
Transform1424 = x3d.Transform()
#Empty Transform
Transform1425 = x3d.Transform()
#Empty Transform
Shape1426 = x3d.Shape()
Shape1426.setUSE("HAnimJointShape")

Transform1425.addChild(Shape1426)

Transform1424.addChildren(Transform1425)

HAnimSegment1423.addChildren(Transform1424)
Shape1427 = x3d.Shape()
LineSet1428 = x3d.LineSet()
LineSet1428.setVertexCount([2])
Coordinate1429 = x3d.Coordinate()
Coordinate1429.setPoint([-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306])

LineSet1428.setCoord(Coordinate1429)
#from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA1430 = x3d.ColorRGBA()
ColorRGBA1430.setUSE("HAnimSegmentLineColorRGBA")

LineSet1428.setColor(ColorRGBA1430)

Shape1427.setGeometry(LineSet1428)

HAnimSegment1423.addChildren(Shape1427)

HAnimJoint1422.addChildren(HAnimSegment1423)
HAnimJoint1431 = x3d.HAnimJoint()
HAnimJoint1431.setName("r_metacarpophalangeal_1")
HAnimJoint1431.setDEF("hanim_r_metacarpophalangeal_1")
HAnimJoint1431.setCenter([-0.1874,0.8256,0.0306])
HAnimJoint1431.setUlimit([0,0,0])
HAnimJoint1431.setLlimit([0,0,0])
HAnimSegment1432 = x3d.HAnimSegment()
HAnimSegment1432.setName("r_carpal_proximal_phalanx_1")
HAnimSegment1432.setDEF("hanim_r_carpal_proximal_phalanx_1")
Transform1433 = x3d.Transform()
#Empty Transform
Transform1434 = x3d.Transform()
#Empty Transform
Shape1435 = x3d.Shape()
Shape1435.setUSE("HAnimJointShape")

Transform1434.addChild(Shape1435)

Transform1433.addChildren(Transform1434)

HAnimSegment1432.addChildren(Transform1433)
Shape1436 = x3d.Shape()
LineSet1437 = x3d.LineSet()
LineSet1437.setVertexCount([2])
Coordinate1438 = x3d.Coordinate()
Coordinate1438.setPoint([-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506])

LineSet1437.setCoord(Coordinate1438)
#from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA1439 = x3d.ColorRGBA()
ColorRGBA1439.setUSE("HAnimSegmentLineColorRGBA")

LineSet1437.setColor(ColorRGBA1439)

Shape1436.setGeometry(LineSet1437)

HAnimSegment1432.addChildren(Shape1436)
HAnimSite1440 = x3d.HAnimSite()
HAnimSite1440.setName("r_carpal_distal_phalanx_1_tip")
HAnimSite1440.setDEF("hanim_r_carpal_distal_phalanx_1_tip")
HAnimSite1440.setTranslation([-0.35,0.4,0])
TouchSensor1441 = x3d.TouchSensor()
TouchSensor1441.setDescription("HAnimSite r_carpal_distal_phalanx_1_tip")

HAnimSite1440.addChildren(TouchSensor1441)
Shape1442 = x3d.Shape()
Shape1442.setUSE("HAnimSiteShape")

HAnimSite1440.addChildren(Shape1442)

HAnimSegment1432.addChildren(HAnimSite1440)

HAnimJoint1431.addChildren(HAnimSegment1432)
HAnimJoint1443 = x3d.HAnimJoint()
HAnimJoint1443.setName("r_carpal_interphalangeal_1")
HAnimJoint1443.setDEF("hanim_r_carpal_interphalangeal_1")
HAnimJoint1443.setCenter([-0.1864,0.819,0.0506])
HAnimJoint1443.setUlimit([0,0,0])
HAnimJoint1443.setLlimit([0,0,0])

HAnimJoint1431.addChildren(HAnimJoint1443)

HAnimJoint1422.addChildren(HAnimJoint1431)

HAnimJoint1413.addChildren(HAnimJoint1422)

HAnimJoint1392.addChildren(HAnimJoint1413)
HAnimJoint1444 = x3d.HAnimJoint()
HAnimJoint1444.setName("r_midcarpal_2")
HAnimJoint1444.setDEF("hanim_r_midcarpal_2")
HAnimJoint1444.setCenter([0,1,0])
HAnimJoint1444.setUlimit([0,0,0])
HAnimJoint1444.setLlimit([0,0,0])
HAnimSegment1445 = x3d.HAnimSegment()
HAnimSegment1445.setName("r_trapezoid")
HAnimSegment1445.setDEF("hanim_r_trapezoid")
Transform1446 = x3d.Transform()
#Empty Transform
Transform1447 = x3d.Transform()
#Empty Transform
Shape1448 = x3d.Shape()
Shape1448.setUSE("HAnimJointShape")

Transform1447.addChild(Shape1448)

Transform1446.addChildren(Transform1447)

HAnimSegment1445.addChildren(Transform1446)
Shape1449 = x3d.Shape()
LineSet1450 = x3d.LineSet()
LineSet1450.setVertexCount([2])
Coordinate1451 = x3d.Coordinate()
Coordinate1451.setPoint([0,1,0,-0.1961,0.8055,-0.0218])

LineSet1450.setCoord(Coordinate1451)
#from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
ColorRGBA1452 = x3d.ColorRGBA()
ColorRGBA1452.setUSE("HAnimSegmentLineColorRGBA")

LineSet1450.setColor(ColorRGBA1452)

Shape1449.setGeometry(LineSet1450)

HAnimSegment1445.addChildren(Shape1449)
HAnimSite1453 = x3d.HAnimSite()
HAnimSite1453.setName("r_metacarpal_phalanx_2_pt")
HAnimSite1453.setDEF("hanim_r_metacarpal_phalanx_2_pt")
HAnimSite1453.setTranslation([-0.1977,0.8169,-0.0177])
TouchSensor1454 = x3d.TouchSensor()
TouchSensor1454.setDescription("HAnimSite r_metacarpal_phalanx_2_pt")

HAnimSite1453.addChildren(TouchSensor1454)
Shape1455 = x3d.Shape()
Shape1455.setUSE("HAnimSiteShape")

HAnimSite1453.addChildren(Shape1455)

HAnimSegment1445.addChildren(HAnimSite1453)

HAnimJoint1444.addChildren(HAnimSegment1445)
HAnimJoint1456 = x3d.HAnimJoint()
HAnimJoint1456.setName("r_carpometacarpal_2")
HAnimJoint1456.setDEF("hanim_r_carpometacarpal_2")
HAnimJoint1456.setCenter([-0.1961,0.8055,-0.0218])
HAnimJoint1456.setUlimit([0,0,0])
HAnimJoint1456.setLlimit([0,0,0])
HAnimSegment1457 = x3d.HAnimSegment()
HAnimSegment1457.setName("r_metacarpal_2")
HAnimSegment1457.setDEF("hanim_r_metacarpal_2")
Transform1458 = x3d.Transform()
#Empty Transform
Transform1459 = x3d.Transform()
#Empty Transform
Shape1460 = x3d.Shape()
Shape1460.setUSE("HAnimJointShape")

Transform1459.addChild(Shape1460)

Transform1458.addChildren(Transform1459)

HAnimSegment1457.addChildren(Transform1458)
Shape1461 = x3d.Shape()
LineSet1462 = x3d.LineSet()
LineSet1462.setVertexCount([2])
Coordinate1463 = x3d.Coordinate()
Coordinate1463.setPoint([-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218])

LineSet1462.setCoord(Coordinate1463)
#from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA1464 = x3d.ColorRGBA()
ColorRGBA1464.setUSE("HAnimSegmentLineColorRGBA")

LineSet1462.setColor(ColorRGBA1464)

Shape1461.setGeometry(LineSet1462)

HAnimSegment1457.addChildren(Shape1461)

HAnimJoint1456.addChildren(HAnimSegment1457)
HAnimJoint1465 = x3d.HAnimJoint()
HAnimJoint1465.setName("r_metacarpophalangeal_2")
HAnimJoint1465.setDEF("hanim_r_metacarpophalangeal_2")
HAnimJoint1465.setCenter([-0.1961,0.7846,-0.0218])
HAnimJoint1465.setUlimit([0,0,0])
HAnimJoint1465.setLlimit([0,0,0])
HAnimSegment1466 = x3d.HAnimSegment()
HAnimSegment1466.setName("r_carpal_proximal_phalanx_2")
HAnimSegment1466.setDEF("hanim_r_carpal_proximal_phalanx_2")
Transform1467 = x3d.Transform()
#Empty Transform
Transform1468 = x3d.Transform()
#Empty Transform
Shape1469 = x3d.Shape()
Shape1469.setUSE("HAnimJointShape")

Transform1468.addChild(Shape1469)

Transform1467.addChildren(Transform1468)

HAnimSegment1466.addChildren(Transform1467)
Shape1470 = x3d.Shape()
LineSet1471 = x3d.LineSet()
LineSet1471.setVertexCount([2])
Coordinate1472 = x3d.Coordinate()
Coordinate1472.setPoint([-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185])

LineSet1471.setCoord(Coordinate1472)
#from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA1473 = x3d.ColorRGBA()
ColorRGBA1473.setUSE("HAnimSegmentLineColorRGBA")

LineSet1471.setColor(ColorRGBA1473)

Shape1470.setGeometry(LineSet1471)

HAnimSegment1466.addChildren(Shape1470)

HAnimJoint1465.addChildren(HAnimSegment1466)
HAnimJoint1474 = x3d.HAnimJoint()
HAnimJoint1474.setName("r_carpal_proximal_interphalangeal_2")
HAnimJoint1474.setDEF("hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint1474.setCenter([-0.1954,0.7393,-0.0185])
HAnimJoint1474.setUlimit([0,0,0])
HAnimJoint1474.setLlimit([0,0,0])
HAnimSegment1475 = x3d.HAnimSegment()
HAnimSegment1475.setName("r_carpal_middle_phalanx_2")
HAnimSegment1475.setDEF("hanim_r_carpal_middle_phalanx_2")
Transform1476 = x3d.Transform()
#Empty Transform
Transform1477 = x3d.Transform()
#Empty Transform
Shape1478 = x3d.Shape()
Shape1478.setUSE("HAnimJointShape")

Transform1477.addChild(Shape1478)

Transform1476.addChildren(Transform1477)

HAnimSegment1475.addChildren(Transform1476)
Shape1479 = x3d.Shape()
LineSet1480 = x3d.LineSet()
LineSet1480.setVertexCount([2])
Coordinate1481 = x3d.Coordinate()
Coordinate1481.setPoint([-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173])

LineSet1480.setCoord(Coordinate1481)
#from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA1482 = x3d.ColorRGBA()
ColorRGBA1482.setUSE("HAnimSegmentLineColorRGBA")

LineSet1480.setColor(ColorRGBA1482)

Shape1479.setGeometry(LineSet1480)

HAnimSegment1475.addChildren(Shape1479)
HAnimSite1483 = x3d.HAnimSite()
HAnimSite1483.setName("r_carpal_distal_phalanx_2_tip")
HAnimSite1483.setDEF("hanim_r_carpal_distal_phalanx_2_tip")
HAnimSite1483.setTranslation([-0.24,0.87,0])
TouchSensor1484 = x3d.TouchSensor()
TouchSensor1484.setDescription("HAnimSite r_carpal_distal_phalanx_2_tip")

HAnimSite1483.addChildren(TouchSensor1484)
Shape1485 = x3d.Shape()
Shape1485.setUSE("HAnimSiteShape")

HAnimSite1483.addChildren(Shape1485)

HAnimSegment1475.addChildren(HAnimSite1483)
HAnimSite1486 = x3d.HAnimSite()
HAnimSite1486.setName("r_dactylion_pt")
HAnimSite1486.setDEF("hanim_r_dactylion_pt")
HAnimSite1486.setTranslation([-0.1941,0.6772,-0.0423])
TouchSensor1487 = x3d.TouchSensor()
TouchSensor1487.setDescription("HAnimSite r_dactylion_pt")

HAnimSite1486.addChildren(TouchSensor1487)
Shape1488 = x3d.Shape()
Shape1488.setUSE("HAnimSiteShape")

HAnimSite1486.addChildren(Shape1488)

HAnimSegment1475.addChildren(HAnimSite1486)

HAnimJoint1474.addChildren(HAnimSegment1475)
HAnimJoint1489 = x3d.HAnimJoint()
HAnimJoint1489.setName("r_carpal_distal_interphalangeal_2")
HAnimJoint1489.setDEF("hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint1489.setCenter([-0.1945,0.7169,-0.0173])
HAnimJoint1489.setUlimit([0,0,0])
HAnimJoint1489.setLlimit([0,0,0])

HAnimJoint1474.addChildren(HAnimJoint1489)

HAnimJoint1465.addChildren(HAnimJoint1474)

HAnimJoint1456.addChildren(HAnimJoint1465)

HAnimJoint1444.addChildren(HAnimJoint1456)

HAnimJoint1392.addChildren(HAnimJoint1444)
HAnimJoint1490 = x3d.HAnimJoint()
HAnimJoint1490.setName("r_midcarpal_3")
HAnimJoint1490.setDEF("hanim_r_midcarpal_3")
HAnimJoint1490.setCenter([0,1,0])
HAnimJoint1490.setUlimit([0,0,0])
HAnimJoint1490.setLlimit([0,0,0])
HAnimSegment1491 = x3d.HAnimSegment()
HAnimSegment1491.setName("r_capitate")
HAnimSegment1491.setDEF("hanim_r_capitate")
Transform1492 = x3d.Transform()
#Empty Transform
Transform1493 = x3d.Transform()
#Empty Transform
Shape1494 = x3d.Shape()
Shape1494.setUSE("HAnimJointShape")

Transform1493.addChild(Shape1494)

Transform1492.addChildren(Transform1493)

HAnimSegment1491.addChildren(Transform1492)
Shape1495 = x3d.Shape()
LineSet1496 = x3d.LineSet()
LineSet1496.setVertexCount([2])
Coordinate1497 = x3d.Coordinate()
Coordinate1497.setPoint([0,1,0,-0.1972,0.806,-0.0468])

LineSet1496.setCoord(Coordinate1497)
#from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
ColorRGBA1498 = x3d.ColorRGBA()
ColorRGBA1498.setUSE("HAnimSegmentLineColorRGBA")

LineSet1496.setColor(ColorRGBA1498)

Shape1495.setGeometry(LineSet1496)

HAnimSegment1491.addChildren(Shape1495)
HAnimSite1499 = x3d.HAnimSite()
HAnimSite1499.setName("r_metacarpal_phalanx_3_pt")
HAnimSite1499.setDEF("hanim_r_metacarpal_phalanx_3_pt")
HAnimSite1499.setTranslation([0,1,0])
TouchSensor1500 = x3d.TouchSensor()
TouchSensor1500.setDescription("HAnimSite r_metacarpal_phalanx_3_pt")

HAnimSite1499.addChildren(TouchSensor1500)
Shape1501 = x3d.Shape()
Shape1501.setUSE("HAnimSiteShape")

HAnimSite1499.addChildren(Shape1501)

HAnimSegment1491.addChildren(HAnimSite1499)

HAnimJoint1490.addChildren(HAnimSegment1491)
HAnimJoint1502 = x3d.HAnimJoint()
HAnimJoint1502.setName("r_carpometacarpal_3")
HAnimJoint1502.setDEF("hanim_r_carpometacarpal_3")
HAnimJoint1502.setCenter([-0.1972,0.806,-0.0468])
HAnimJoint1502.setUlimit([0,0,0])
HAnimJoint1502.setLlimit([0,0,0])
HAnimSegment1503 = x3d.HAnimSegment()
HAnimSegment1503.setName("r_metacarpal_3")
HAnimSegment1503.setDEF("hanim_r_metacarpal_3")
Transform1504 = x3d.Transform()
#Empty Transform
Transform1505 = x3d.Transform()
#Empty Transform
Shape1506 = x3d.Shape()
Shape1506.setUSE("HAnimJointShape")

Transform1505.addChild(Shape1506)

Transform1504.addChildren(Transform1505)

HAnimSegment1503.addChildren(Transform1504)
Shape1507 = x3d.Shape()
LineSet1508 = x3d.LineSet()
LineSet1508.setVertexCount([2])
Coordinate1509 = x3d.Coordinate()
Coordinate1509.setPoint([-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468])

LineSet1508.setCoord(Coordinate1509)
#from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA1510 = x3d.ColorRGBA()
ColorRGBA1510.setUSE("HAnimSegmentLineColorRGBA")

LineSet1508.setColor(ColorRGBA1510)

Shape1507.setGeometry(LineSet1508)

HAnimSegment1503.addChildren(Shape1507)

HAnimJoint1502.addChildren(HAnimSegment1503)
HAnimJoint1511 = x3d.HAnimJoint()
HAnimJoint1511.setName("r_metacarpophalangeal_3")
HAnimJoint1511.setDEF("hanim_r_metacarpophalangeal_3")
HAnimJoint1511.setCenter([-0.1972,0.7849,-0.0468])
HAnimJoint1511.setUlimit([0,0,0])
HAnimJoint1511.setLlimit([0,0,0])
HAnimSegment1512 = x3d.HAnimSegment()
HAnimSegment1512.setName("r_carpal_proximal_phalanx_3")
HAnimSegment1512.setDEF("hanim_r_carpal_proximal_phalanx_3")
Transform1513 = x3d.Transform()
#Empty Transform
Transform1514 = x3d.Transform()
#Empty Transform
Shape1515 = x3d.Shape()
Shape1515.setUSE("HAnimJointShape")

Transform1514.addChild(Shape1515)

Transform1513.addChildren(Transform1514)

HAnimSegment1512.addChildren(Transform1513)
Shape1516 = x3d.Shape()
LineSet1517 = x3d.LineSet()
LineSet1517.setVertexCount([2])
Coordinate1518 = x3d.Coordinate()
Coordinate1518.setPoint([-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441])

LineSet1517.setCoord(Coordinate1518)
#from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA1519 = x3d.ColorRGBA()
ColorRGBA1519.setUSE("HAnimSegmentLineColorRGBA")

LineSet1517.setColor(ColorRGBA1519)

Shape1516.setGeometry(LineSet1517)

HAnimSegment1512.addChildren(Shape1516)

HAnimJoint1511.addChildren(HAnimSegment1512)
HAnimJoint1520 = x3d.HAnimJoint()
HAnimJoint1520.setName("r_carpal_proximal_interphalangeal_3")
HAnimJoint1520.setDEF("hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint1520.setCenter([-0.195,0.7304,-0.0441])
HAnimJoint1520.setUlimit([0,0,0])
HAnimJoint1520.setLlimit([0,0,0])
HAnimSegment1521 = x3d.HAnimSegment()
HAnimSegment1521.setName("r_carpal_middle_phalanx_3")
HAnimSegment1521.setDEF("hanim_r_carpal_middle_phalanx_3")
Transform1522 = x3d.Transform()
#Empty Transform
Transform1523 = x3d.Transform()
#Empty Transform
Shape1524 = x3d.Shape()
Shape1524.setUSE("HAnimJointShape")

Transform1523.addChild(Shape1524)

Transform1522.addChildren(Transform1523)

HAnimSegment1521.addChildren(Transform1522)
Shape1525 = x3d.Shape()
LineSet1526 = x3d.LineSet()
LineSet1526.setVertexCount([2])
Coordinate1527 = x3d.Coordinate()
Coordinate1527.setPoint([-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432])

LineSet1526.setCoord(Coordinate1527)
#from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA1528 = x3d.ColorRGBA()
ColorRGBA1528.setUSE("HAnimSegmentLineColorRGBA")

LineSet1526.setColor(ColorRGBA1528)

Shape1525.setGeometry(LineSet1526)

HAnimSegment1521.addChildren(Shape1525)
HAnimSite1529 = x3d.HAnimSite()
HAnimSite1529.setName("r_carpal_distal_phalanx_3_tip")
HAnimSite1529.setDEF("hanim_r_carpal_distal_phalanx_3_tip")
HAnimSite1529.setTranslation([-0.08,0.96,0])
TouchSensor1530 = x3d.TouchSensor()
TouchSensor1530.setDescription("HAnimSite r_carpal_distal_phalanx_3_tip")

HAnimSite1529.addChildren(TouchSensor1530)
Shape1531 = x3d.Shape()
Shape1531.setUSE("HAnimSiteShape")

HAnimSite1529.addChildren(Shape1531)

HAnimSegment1521.addChildren(HAnimSite1529)

HAnimJoint1520.addChildren(HAnimSegment1521)
HAnimJoint1532 = x3d.HAnimJoint()
HAnimJoint1532.setName("r_carpal_distal_interphalangeal_3")
HAnimJoint1532.setDEF("hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint1532.setCenter([-0.1939,0.7042,-0.0432])
HAnimJoint1532.setUlimit([0,0,0])
HAnimJoint1532.setLlimit([0,0,0])

HAnimJoint1520.addChildren(HAnimJoint1532)

HAnimJoint1511.addChildren(HAnimJoint1520)

HAnimJoint1502.addChildren(HAnimJoint1511)

HAnimJoint1490.addChildren(HAnimJoint1502)

HAnimJoint1392.addChildren(HAnimJoint1490)
HAnimJoint1533 = x3d.HAnimJoint()
HAnimJoint1533.setName("r_midcarpal_4_5")
HAnimJoint1533.setDEF("hanim_r_midcarpal_4_5")
HAnimJoint1533.setCenter([0,1,0])
HAnimJoint1533.setUlimit([0,0,0])
HAnimJoint1533.setLlimit([0,0,0])
HAnimSegment1534 = x3d.HAnimSegment()
HAnimSegment1534.setName("r_hamate")
HAnimSegment1534.setDEF("hanim_r_hamate")
Transform1535 = x3d.Transform()
#Empty Transform
Transform1536 = x3d.Transform()
#Empty Transform
Shape1537 = x3d.Shape()
Shape1537.setUSE("HAnimJointShape")

Transform1536.addChild(Shape1537)

Transform1535.addChildren(Transform1536)

HAnimSegment1534.addChildren(Transform1535)
Shape1538 = x3d.Shape()
LineSet1539 = x3d.LineSet()
LineSet1539.setVertexCount([2])
Coordinate1540 = x3d.Coordinate()
Coordinate1540.setPoint([0,1,0,-0.1951,0.8049,-0.0732])

LineSet1539.setCoord(Coordinate1540)
#from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
ColorRGBA1541 = x3d.ColorRGBA()
ColorRGBA1541.setUSE("HAnimSegmentLineColorRGBA")

LineSet1539.setColor(ColorRGBA1541)

Shape1538.setGeometry(LineSet1539)

HAnimSegment1534.addChildren(Shape1538)
Shape1542 = x3d.Shape()
LineSet1543 = x3d.LineSet()
LineSet1543.setVertexCount([2])
Coordinate1544 = x3d.Coordinate()
Coordinate1544.setPoint([0,1,0,-0.1926,0.8096,-0.0975])

LineSet1543.setCoord(Coordinate1544)
#from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
ColorRGBA1545 = x3d.ColorRGBA()
ColorRGBA1545.setUSE("HAnimSegmentLineColorRGBA")

LineSet1543.setColor(ColorRGBA1545)

Shape1542.setGeometry(LineSet1543)

HAnimSegment1534.addChildren(Shape1542)
HAnimSite1546 = x3d.HAnimSite()
HAnimSite1546.setName("r_metacarpal_phalanx_5_pt")
HAnimSite1546.setDEF("hanim_r_metacarpal_phalanx_5_pt")
HAnimSite1546.setTranslation([-0.1929,0.789,-0.1064])
TouchSensor1547 = x3d.TouchSensor()
TouchSensor1547.setDescription("HAnimSite r_metacarpal_phalanx_5_pt")

HAnimSite1546.addChildren(TouchSensor1547)
Shape1548 = x3d.Shape()
Shape1548.setUSE("HAnimSiteShape")

HAnimSite1546.addChildren(Shape1548)

HAnimSegment1534.addChildren(HAnimSite1546)

HAnimJoint1533.addChildren(HAnimSegment1534)
HAnimJoint1549 = x3d.HAnimJoint()
HAnimJoint1549.setName("r_carpometacarpal_4")
HAnimJoint1549.setDEF("hanim_r_carpometacarpal_4")
HAnimJoint1549.setCenter([-0.1951,0.8049,-0.0732])
HAnimJoint1549.setUlimit([0,0,0])
HAnimJoint1549.setLlimit([0,0,0])
HAnimSegment1550 = x3d.HAnimSegment()
HAnimSegment1550.setName("r_metacarpal_4")
HAnimSegment1550.setDEF("hanim_r_metacarpal_4")
Transform1551 = x3d.Transform()
#Empty Transform
Transform1552 = x3d.Transform()
#Empty Transform
Shape1553 = x3d.Shape()
Shape1553.setUSE("HAnimJointShape")

Transform1552.addChild(Shape1553)

Transform1551.addChildren(Transform1552)

HAnimSegment1550.addChildren(Transform1551)
Shape1554 = x3d.Shape()
LineSet1555 = x3d.LineSet()
LineSet1555.setVertexCount([2])
Coordinate1556 = x3d.Coordinate()
Coordinate1556.setPoint([-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732])

LineSet1555.setCoord(Coordinate1556)
#from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA1557 = x3d.ColorRGBA()
ColorRGBA1557.setUSE("HAnimSegmentLineColorRGBA")

LineSet1555.setColor(ColorRGBA1557)

Shape1554.setGeometry(LineSet1555)

HAnimSegment1550.addChildren(Shape1554)

HAnimJoint1549.addChildren(HAnimSegment1550)
HAnimJoint1558 = x3d.HAnimJoint()
HAnimJoint1558.setName("r_metacarpophalangeal_4")
HAnimJoint1558.setDEF("hanim_r_metacarpophalangeal_4")
HAnimJoint1558.setCenter([-0.1951,0.7845,-0.0732])
HAnimJoint1558.setUlimit([0,0,0])
HAnimJoint1558.setLlimit([0,0,0])
HAnimSegment1559 = x3d.HAnimSegment()
HAnimSegment1559.setName("r_carpal_proximal_phalanx_4")
HAnimSegment1559.setDEF("hanim_r_carpal_proximal_phalanx_4")
Transform1560 = x3d.Transform()
#Empty Transform
Transform1561 = x3d.Transform()
#Empty Transform
Shape1562 = x3d.Shape()
Shape1562.setUSE("HAnimJointShape")

Transform1561.addChild(Shape1562)

Transform1560.addChildren(Transform1561)

HAnimSegment1559.addChildren(Transform1560)
Shape1563 = x3d.Shape()
LineSet1564 = x3d.LineSet()
LineSet1564.setVertexCount([2])
Coordinate1565 = x3d.Coordinate()
Coordinate1565.setPoint([-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716])

LineSet1564.setCoord(Coordinate1565)
#from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA1566 = x3d.ColorRGBA()
ColorRGBA1566.setUSE("HAnimSegmentLineColorRGBA")

LineSet1564.setColor(ColorRGBA1566)

Shape1563.setGeometry(LineSet1564)

HAnimSegment1559.addChildren(Shape1563)

HAnimJoint1558.addChildren(HAnimSegment1559)
HAnimJoint1567 = x3d.HAnimJoint()
HAnimJoint1567.setName("r_carpal_proximal_interphalangeal_4")
HAnimJoint1567.setDEF("hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint1567.setCenter([-0.192,0.7318,-0.0716])
HAnimJoint1567.setUlimit([0,0,0])
HAnimJoint1567.setLlimit([0,0,0])
HAnimSegment1568 = x3d.HAnimSegment()
HAnimSegment1568.setName("r_carpal_middle_phalanx_4")
HAnimSegment1568.setDEF("hanim_r_carpal_middle_phalanx_4")
Transform1569 = x3d.Transform()
#Empty Transform
Transform1570 = x3d.Transform()
#Empty Transform
Shape1571 = x3d.Shape()
Shape1571.setUSE("HAnimJointShape")

Transform1570.addChild(Shape1571)

Transform1569.addChildren(Transform1570)

HAnimSegment1568.addChildren(Transform1569)
Shape1572 = x3d.Shape()
LineSet1573 = x3d.LineSet()
LineSet1573.setVertexCount([2])
Coordinate1574 = x3d.Coordinate()
Coordinate1574.setPoint([-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706])

LineSet1573.setCoord(Coordinate1574)
#from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA1575 = x3d.ColorRGBA()
ColorRGBA1575.setUSE("HAnimSegmentLineColorRGBA")

LineSet1573.setColor(ColorRGBA1575)

Shape1572.setGeometry(LineSet1573)

HAnimSegment1568.addChildren(Shape1572)
HAnimSite1576 = x3d.HAnimSite()
HAnimSite1576.setName("r_carpal_distal_phalanx_4_tip")
HAnimSite1576.setDEF("hanim_r_carpal_distal_phalanx_4_tip")
HAnimSite1576.setTranslation([0.1,0.93,0])
TouchSensor1577 = x3d.TouchSensor()
TouchSensor1577.setDescription("HAnimSite r_carpal_distal_phalanx_4_tip")

HAnimSite1576.addChildren(TouchSensor1577)
Shape1578 = x3d.Shape()
Shape1578.setUSE("HAnimSiteShape")

HAnimSite1576.addChildren(Shape1578)

HAnimSegment1568.addChildren(HAnimSite1576)

HAnimJoint1567.addChildren(HAnimSegment1568)
HAnimJoint1579 = x3d.HAnimJoint()
HAnimJoint1579.setName("r_carpal_distal_interphalangeal_4")
HAnimJoint1579.setDEF("hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint1579.setCenter([-0.1908,0.7077,-0.0706])
HAnimJoint1579.setUlimit([0,0,0])
HAnimJoint1579.setLlimit([0,0,0])

HAnimJoint1567.addChildren(HAnimJoint1579)

HAnimJoint1558.addChildren(HAnimJoint1567)

HAnimJoint1549.addChildren(HAnimJoint1558)

HAnimJoint1533.addChildren(HAnimJoint1549)
HAnimJoint1580 = x3d.HAnimJoint()
HAnimJoint1580.setName("r_carpometacarpal_5")
HAnimJoint1580.setDEF("hanim_r_carpometacarpal_5")
HAnimJoint1580.setCenter([-0.1926,0.8096,-0.0975])
HAnimJoint1580.setUlimit([0,0,0])
HAnimJoint1580.setLlimit([0,0,0])
HAnimSegment1581 = x3d.HAnimSegment()
HAnimSegment1581.setName("r_metacarpal_5")
HAnimSegment1581.setDEF("hanim_r_metacarpal_5")
Transform1582 = x3d.Transform()
#Empty Transform
Transform1583 = x3d.Transform()
#Empty Transform
Shape1584 = x3d.Shape()
Shape1584.setUSE("HAnimJointShape")

Transform1583.addChild(Shape1584)

Transform1582.addChildren(Transform1583)

HAnimSegment1581.addChildren(Transform1582)
Shape1585 = x3d.Shape()
LineSet1586 = x3d.LineSet()
LineSet1586.setVertexCount([2])
Coordinate1587 = x3d.Coordinate()
Coordinate1587.setPoint([-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975])

LineSet1586.setCoord(Coordinate1587)
#from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA1588 = x3d.ColorRGBA()
ColorRGBA1588.setUSE("HAnimSegmentLineColorRGBA")

LineSet1586.setColor(ColorRGBA1588)

Shape1585.setGeometry(LineSet1586)

HAnimSegment1581.addChildren(Shape1585)

HAnimJoint1580.addChildren(HAnimSegment1581)
HAnimJoint1589 = x3d.HAnimJoint()
HAnimJoint1589.setName("r_metacarpophalangeal_5")
HAnimJoint1589.setDEF("hanim_r_metacarpophalangeal_5")
HAnimJoint1589.setCenter([-0.1926,0.7896,-0.0975])
HAnimJoint1589.setUlimit([0,0,0])
HAnimJoint1589.setLlimit([0,0,0])
HAnimSegment1590 = x3d.HAnimSegment()
HAnimSegment1590.setName("r_carpal_proximal_phalanx_5")
HAnimSegment1590.setDEF("hanim_r_carpal_proximal_phalanx_5")
Transform1591 = x3d.Transform()
#Empty Transform
Transform1592 = x3d.Transform()
#Empty Transform
Shape1593 = x3d.Shape()
Shape1593.setUSE("HAnimJointShape")

Transform1592.addChild(Shape1593)

Transform1591.addChildren(Transform1592)

HAnimSegment1590.addChildren(Transform1591)
Shape1594 = x3d.Shape()
LineSet1595 = x3d.LineSet()
LineSet1595.setVertexCount([2])
Coordinate1596 = x3d.Coordinate()
Coordinate1596.setPoint([-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963])

LineSet1595.setCoord(Coordinate1596)
#from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA1597 = x3d.ColorRGBA()
ColorRGBA1597.setUSE("HAnimSegmentLineColorRGBA")

LineSet1595.setColor(ColorRGBA1597)

Shape1594.setGeometry(LineSet1595)

HAnimSegment1590.addChildren(Shape1594)

HAnimJoint1589.addChildren(HAnimSegment1590)
HAnimJoint1598 = x3d.HAnimJoint()
HAnimJoint1598.setName("r_carpal_proximal_interphalangeal_5")
HAnimJoint1598.setDEF("hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint1598.setCenter([-0.1902,0.7483,-0.0963])
HAnimJoint1598.setUlimit([0,0,0])
HAnimJoint1598.setLlimit([0,0,0])
HAnimSegment1599 = x3d.HAnimSegment()
HAnimSegment1599.setName("r_carpal_middle_phalanx_5")
HAnimSegment1599.setDEF("hanim_r_carpal_middle_phalanx_5")
Transform1600 = x3d.Transform()
#Empty Transform
Transform1601 = x3d.Transform()
#Empty Transform
Shape1602 = x3d.Shape()
Shape1602.setUSE("HAnimJointShape")

Transform1601.addChild(Shape1602)

Transform1600.addChildren(Transform1601)

HAnimSegment1599.addChildren(Transform1600)
Shape1603 = x3d.Shape()
LineSet1604 = x3d.LineSet()
LineSet1604.setVertexCount([2])
Coordinate1605 = x3d.Coordinate()
Coordinate1605.setPoint([-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096])

LineSet1604.setCoord(Coordinate1605)
#from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA1606 = x3d.ColorRGBA()
ColorRGBA1606.setUSE("HAnimSegmentLineColorRGBA")

LineSet1604.setColor(ColorRGBA1606)

Shape1603.setGeometry(LineSet1604)

HAnimSegment1599.addChildren(Shape1603)
HAnimSite1607 = x3d.HAnimSite()
HAnimSite1607.setName("r_carpal_distal_phalanx_5_tip")
HAnimSite1607.setDEF("hanim_r_carpal_distal_phalanx_5_tip")
HAnimSite1607.setTranslation([0.25,0.79,0])
TouchSensor1608 = x3d.TouchSensor()
TouchSensor1608.setDescription("HAnimSite r_carpal_distal_phalanx_5_tip")

HAnimSite1607.addChildren(TouchSensor1608)
Shape1609 = x3d.Shape()
Shape1609.setUSE("HAnimSiteShape")

HAnimSite1607.addChildren(Shape1609)

HAnimSegment1599.addChildren(HAnimSite1607)

HAnimJoint1598.addChildren(HAnimSegment1599)
HAnimJoint1610 = x3d.HAnimJoint()
HAnimJoint1610.setName("r_carpal_distal_interphalangeal_5")
HAnimJoint1610.setDEF("hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint1610.setCenter([-0.1908,0.754,-0.096])
HAnimJoint1610.setUlimit([0,0,0])
HAnimJoint1610.setLlimit([0,0,0])

HAnimJoint1598.addChildren(HAnimJoint1610)

HAnimJoint1589.addChildren(HAnimJoint1598)

HAnimJoint1580.addChildren(HAnimJoint1589)

HAnimJoint1533.addChildren(HAnimJoint1580)

HAnimJoint1392.addChildren(HAnimJoint1533)

HAnimJoint1380.addChildren(HAnimJoint1392)

HAnimJoint1359.addChildren(HAnimJoint1380)

HAnimJoint1344.addChildren(HAnimJoint1359)

HAnimJoint1335.addChildren(HAnimJoint1344)

HAnimJoint854.addChildren(HAnimJoint1335)

HAnimJoint839.addChildren(HAnimJoint854)

HAnimJoint830.addChildren(HAnimJoint839)

HAnimJoint821.addChildren(HAnimJoint830)

HAnimJoint812.addChildren(HAnimJoint821)

HAnimJoint800.addChildren(HAnimJoint812)

HAnimJoint779.addChildren(HAnimJoint800)

HAnimJoint770.addChildren(HAnimJoint779)

HAnimJoint761.addChildren(HAnimJoint770)

HAnimJoint746.addChildren(HAnimJoint761)

HAnimJoint734.addChildren(HAnimJoint746)

HAnimJoint725.addChildren(HAnimJoint734)

HAnimJoint716.addChildren(HAnimJoint725)

HAnimJoint707.addChildren(HAnimJoint716)

HAnimJoint689.addChildren(HAnimJoint707)

HAnimJoint680.addChildren(HAnimJoint689)

HAnimJoint671.addChildren(HAnimJoint680)

HAnimJoint52.addChildren(HAnimJoint671)

HAnimHumanoid43.addSkeleton(HAnimJoint52)
HAnimJoint1611 = x3d.HAnimJoint()
HAnimJoint1611.setContainerFieldOverride("joints")
HAnimJoint1611.setUSE("hanim_humanoid_root")

HAnimHumanoid43.addJoints(HAnimJoint1611)
HAnimJoint1612 = x3d.HAnimJoint()
HAnimJoint1612.setContainerFieldOverride("joints")
HAnimJoint1612.setUSE("hanim_sacroiliac")

HAnimHumanoid43.addJoints(HAnimJoint1612)
HAnimJoint1613 = x3d.HAnimJoint()
HAnimJoint1613.setContainerFieldOverride("joints")
HAnimJoint1613.setUSE("hanim_l_hip")

HAnimHumanoid43.addJoints(HAnimJoint1613)
HAnimJoint1614 = x3d.HAnimJoint()
HAnimJoint1614.setContainerFieldOverride("joints")
HAnimJoint1614.setUSE("hanim_l_knee")

HAnimHumanoid43.addJoints(HAnimJoint1614)
HAnimJoint1615 = x3d.HAnimJoint()
HAnimJoint1615.setContainerFieldOverride("joints")
HAnimJoint1615.setUSE("hanim_l_talocrural")

HAnimHumanoid43.addJoints(HAnimJoint1615)
HAnimJoint1616 = x3d.HAnimJoint()
HAnimJoint1616.setContainerFieldOverride("joints")
HAnimJoint1616.setUSE("hanim_l_talocalcaneonavicular")

HAnimHumanoid43.addJoints(HAnimJoint1616)
HAnimJoint1617 = x3d.HAnimJoint()
HAnimJoint1617.setContainerFieldOverride("joints")
HAnimJoint1617.setUSE("hanim_l_cuneonavicular_1")

HAnimHumanoid43.addJoints(HAnimJoint1617)
HAnimJoint1618 = x3d.HAnimJoint()
HAnimJoint1618.setContainerFieldOverride("joints")
HAnimJoint1618.setUSE("hanim_l_tarsometatarsal_1")

HAnimHumanoid43.addJoints(HAnimJoint1618)
HAnimJoint1619 = x3d.HAnimJoint()
HAnimJoint1619.setContainerFieldOverride("joints")
HAnimJoint1619.setUSE("hanim_l_metatarsophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1619)
HAnimJoint1620 = x3d.HAnimJoint()
HAnimJoint1620.setContainerFieldOverride("joints")
HAnimJoint1620.setUSE("hanim_l_tarsal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1620)
HAnimJoint1621 = x3d.HAnimJoint()
HAnimJoint1621.setContainerFieldOverride("joints")
HAnimJoint1621.setUSE("hanim_l_cuneonavicular_2")

HAnimHumanoid43.addJoints(HAnimJoint1621)
HAnimJoint1622 = x3d.HAnimJoint()
HAnimJoint1622.setContainerFieldOverride("joints")
HAnimJoint1622.setUSE("hanim_l_tarsometatarsal_2")

HAnimHumanoid43.addJoints(HAnimJoint1622)
HAnimJoint1623 = x3d.HAnimJoint()
HAnimJoint1623.setContainerFieldOverride("joints")
HAnimJoint1623.setUSE("hanim_l_metatarsophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1623)
HAnimJoint1624 = x3d.HAnimJoint()
HAnimJoint1624.setContainerFieldOverride("joints")
HAnimJoint1624.setUSE("hanim_l_tarsal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1624)
HAnimJoint1625 = x3d.HAnimJoint()
HAnimJoint1625.setContainerFieldOverride("joints")
HAnimJoint1625.setUSE("hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1625)
HAnimJoint1626 = x3d.HAnimJoint()
HAnimJoint1626.setContainerFieldOverride("joints")
HAnimJoint1626.setUSE("hanim_l_cuneonavicular_3")

HAnimHumanoid43.addJoints(HAnimJoint1626)
HAnimJoint1627 = x3d.HAnimJoint()
HAnimJoint1627.setContainerFieldOverride("joints")
HAnimJoint1627.setUSE("hanim_l_tarsometatarsal_3")

HAnimHumanoid43.addJoints(HAnimJoint1627)
HAnimJoint1628 = x3d.HAnimJoint()
HAnimJoint1628.setContainerFieldOverride("joints")
HAnimJoint1628.setUSE("hanim_l_metatarsophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1628)
HAnimJoint1629 = x3d.HAnimJoint()
HAnimJoint1629.setContainerFieldOverride("joints")
HAnimJoint1629.setUSE("hanim_l_tarsal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1629)
HAnimJoint1630 = x3d.HAnimJoint()
HAnimJoint1630.setContainerFieldOverride("joints")
HAnimJoint1630.setUSE("hanim_l_tarsal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1630)
HAnimJoint1631 = x3d.HAnimJoint()
HAnimJoint1631.setContainerFieldOverride("joints")
HAnimJoint1631.setUSE("hanim_l_calcaneocuboid")

HAnimHumanoid43.addJoints(HAnimJoint1631)
HAnimJoint1632 = x3d.HAnimJoint()
HAnimJoint1632.setContainerFieldOverride("joints")
HAnimJoint1632.setUSE("hanim_l_transversetarsal")

HAnimHumanoid43.addJoints(HAnimJoint1632)
HAnimJoint1633 = x3d.HAnimJoint()
HAnimJoint1633.setContainerFieldOverride("joints")
HAnimJoint1633.setUSE("hanim_l_tarsometatarsal_4")

HAnimHumanoid43.addJoints(HAnimJoint1633)
HAnimJoint1634 = x3d.HAnimJoint()
HAnimJoint1634.setContainerFieldOverride("joints")
HAnimJoint1634.setUSE("hanim_l_metatarsophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1634)
HAnimJoint1635 = x3d.HAnimJoint()
HAnimJoint1635.setContainerFieldOverride("joints")
HAnimJoint1635.setUSE("hanim_l_tarsal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1635)
HAnimJoint1636 = x3d.HAnimJoint()
HAnimJoint1636.setContainerFieldOverride("joints")
HAnimJoint1636.setUSE("hanim_l_tarsal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1636)
HAnimJoint1637 = x3d.HAnimJoint()
HAnimJoint1637.setContainerFieldOverride("joints")
HAnimJoint1637.setUSE("hanim_l_tarsometatarsal_5")

HAnimHumanoid43.addJoints(HAnimJoint1637)
HAnimJoint1638 = x3d.HAnimJoint()
HAnimJoint1638.setContainerFieldOverride("joints")
HAnimJoint1638.setUSE("hanim_l_metatarsophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1638)
HAnimJoint1639 = x3d.HAnimJoint()
HAnimJoint1639.setContainerFieldOverride("joints")
HAnimJoint1639.setUSE("hanim_l_tarsal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1639)
HAnimJoint1640 = x3d.HAnimJoint()
HAnimJoint1640.setContainerFieldOverride("joints")
HAnimJoint1640.setUSE("hanim_l_tarsal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1640)
HAnimJoint1641 = x3d.HAnimJoint()
HAnimJoint1641.setContainerFieldOverride("joints")
HAnimJoint1641.setUSE("hanim_r_hip")

HAnimHumanoid43.addJoints(HAnimJoint1641)
HAnimJoint1642 = x3d.HAnimJoint()
HAnimJoint1642.setContainerFieldOverride("joints")
HAnimJoint1642.setUSE("hanim_r_knee")

HAnimHumanoid43.addJoints(HAnimJoint1642)
HAnimJoint1643 = x3d.HAnimJoint()
HAnimJoint1643.setContainerFieldOverride("joints")
HAnimJoint1643.setUSE("hanim_r_talocrural")

HAnimHumanoid43.addJoints(HAnimJoint1643)
HAnimJoint1644 = x3d.HAnimJoint()
HAnimJoint1644.setContainerFieldOverride("joints")
HAnimJoint1644.setUSE("hanim_r_talocalcaneonavicular")

HAnimHumanoid43.addJoints(HAnimJoint1644)
HAnimJoint1645 = x3d.HAnimJoint()
HAnimJoint1645.setContainerFieldOverride("joints")
HAnimJoint1645.setUSE("hanim_r_cuneonavicular_1")

HAnimHumanoid43.addJoints(HAnimJoint1645)
HAnimJoint1646 = x3d.HAnimJoint()
HAnimJoint1646.setContainerFieldOverride("joints")
HAnimJoint1646.setUSE("hanim_r_tarsometatarsal_1")

HAnimHumanoid43.addJoints(HAnimJoint1646)
HAnimJoint1647 = x3d.HAnimJoint()
HAnimJoint1647.setContainerFieldOverride("joints")
HAnimJoint1647.setUSE("hanim_r_metatarsophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1647)
HAnimJoint1648 = x3d.HAnimJoint()
HAnimJoint1648.setContainerFieldOverride("joints")
HAnimJoint1648.setUSE("hanim_r_tarsal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1648)
HAnimJoint1649 = x3d.HAnimJoint()
HAnimJoint1649.setContainerFieldOverride("joints")
HAnimJoint1649.setUSE("hanim_r_cuneonavicular_2")

HAnimHumanoid43.addJoints(HAnimJoint1649)
HAnimJoint1650 = x3d.HAnimJoint()
HAnimJoint1650.setContainerFieldOverride("joints")
HAnimJoint1650.setUSE("hanim_r_tarsometatarsal_2")

HAnimHumanoid43.addJoints(HAnimJoint1650)
HAnimJoint1651 = x3d.HAnimJoint()
HAnimJoint1651.setContainerFieldOverride("joints")
HAnimJoint1651.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1651)
HAnimJoint1652 = x3d.HAnimJoint()
HAnimJoint1652.setContainerFieldOverride("joints")
HAnimJoint1652.setUSE("hanim_r_tarsal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1652)
HAnimJoint1653 = x3d.HAnimJoint()
HAnimJoint1653.setContainerFieldOverride("joints")
HAnimJoint1653.setUSE("hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1653)
HAnimJoint1654 = x3d.HAnimJoint()
HAnimJoint1654.setContainerFieldOverride("joints")
HAnimJoint1654.setUSE("hanim_r_cuneonavicular_3")

HAnimHumanoid43.addJoints(HAnimJoint1654)
HAnimJoint1655 = x3d.HAnimJoint()
HAnimJoint1655.setContainerFieldOverride("joints")
HAnimJoint1655.setUSE("hanim_r_tarsometatarsal_3")

HAnimHumanoid43.addJoints(HAnimJoint1655)
HAnimJoint1656 = x3d.HAnimJoint()
HAnimJoint1656.setContainerFieldOverride("joints")
HAnimJoint1656.setUSE("hanim_r_metatarsophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1656)
HAnimJoint1657 = x3d.HAnimJoint()
HAnimJoint1657.setContainerFieldOverride("joints")
HAnimJoint1657.setUSE("hanim_r_tarsal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1657)
HAnimJoint1658 = x3d.HAnimJoint()
HAnimJoint1658.setContainerFieldOverride("joints")
HAnimJoint1658.setUSE("hanim_r_tarsal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1658)
HAnimJoint1659 = x3d.HAnimJoint()
HAnimJoint1659.setContainerFieldOverride("joints")
HAnimJoint1659.setUSE("hanim_r_calcaneocuboid")

HAnimHumanoid43.addJoints(HAnimJoint1659)
HAnimJoint1660 = x3d.HAnimJoint()
HAnimJoint1660.setContainerFieldOverride("joints")
HAnimJoint1660.setUSE("hanim_r_transversetarsal")

HAnimHumanoid43.addJoints(HAnimJoint1660)
HAnimJoint1661 = x3d.HAnimJoint()
HAnimJoint1661.setContainerFieldOverride("joints")
HAnimJoint1661.setUSE("hanim_r_tarsometatarsal_4")

HAnimHumanoid43.addJoints(HAnimJoint1661)
HAnimJoint1662 = x3d.HAnimJoint()
HAnimJoint1662.setContainerFieldOverride("joints")
HAnimJoint1662.setUSE("hanim_r_metatarsophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1662)
HAnimJoint1663 = x3d.HAnimJoint()
HAnimJoint1663.setContainerFieldOverride("joints")
HAnimJoint1663.setUSE("hanim_r_tarsal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1663)
HAnimJoint1664 = x3d.HAnimJoint()
HAnimJoint1664.setContainerFieldOverride("joints")
HAnimJoint1664.setUSE("hanim_r_tarsal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1664)
HAnimJoint1665 = x3d.HAnimJoint()
HAnimJoint1665.setContainerFieldOverride("joints")
HAnimJoint1665.setUSE("hanim_r_tarsometatarsal_5")

HAnimHumanoid43.addJoints(HAnimJoint1665)
HAnimJoint1666 = x3d.HAnimJoint()
HAnimJoint1666.setContainerFieldOverride("joints")
HAnimJoint1666.setUSE("hanim_r_metatarsophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1666)
HAnimJoint1667 = x3d.HAnimJoint()
HAnimJoint1667.setContainerFieldOverride("joints")
HAnimJoint1667.setUSE("hanim_r_tarsal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1667)
HAnimJoint1668 = x3d.HAnimJoint()
HAnimJoint1668.setContainerFieldOverride("joints")
HAnimJoint1668.setUSE("hanim_r_tarsal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1668)
HAnimJoint1669 = x3d.HAnimJoint()
HAnimJoint1669.setContainerFieldOverride("joints")
HAnimJoint1669.setUSE("hanim_vl5")

HAnimHumanoid43.addJoints(HAnimJoint1669)
HAnimJoint1670 = x3d.HAnimJoint()
HAnimJoint1670.setContainerFieldOverride("joints")
HAnimJoint1670.setUSE("hanim_vl4")

HAnimHumanoid43.addJoints(HAnimJoint1670)
HAnimJoint1671 = x3d.HAnimJoint()
HAnimJoint1671.setContainerFieldOverride("joints")
HAnimJoint1671.setUSE("hanim_vl3")

HAnimHumanoid43.addJoints(HAnimJoint1671)
HAnimJoint1672 = x3d.HAnimJoint()
HAnimJoint1672.setContainerFieldOverride("joints")
HAnimJoint1672.setUSE("hanim_vl2")

HAnimHumanoid43.addJoints(HAnimJoint1672)
HAnimJoint1673 = x3d.HAnimJoint()
HAnimJoint1673.setContainerFieldOverride("joints")
HAnimJoint1673.setUSE("hanim_vl1")

HAnimHumanoid43.addJoints(HAnimJoint1673)
HAnimJoint1674 = x3d.HAnimJoint()
HAnimJoint1674.setContainerFieldOverride("joints")
HAnimJoint1674.setUSE("hanim_vt12")

HAnimHumanoid43.addJoints(HAnimJoint1674)
HAnimJoint1675 = x3d.HAnimJoint()
HAnimJoint1675.setContainerFieldOverride("joints")
HAnimJoint1675.setUSE("hanim_vt11")

HAnimHumanoid43.addJoints(HAnimJoint1675)
HAnimJoint1676 = x3d.HAnimJoint()
HAnimJoint1676.setContainerFieldOverride("joints")
HAnimJoint1676.setUSE("hanim_vt10")

HAnimHumanoid43.addJoints(HAnimJoint1676)
HAnimJoint1677 = x3d.HAnimJoint()
HAnimJoint1677.setContainerFieldOverride("joints")
HAnimJoint1677.setUSE("hanim_vt9")

HAnimHumanoid43.addJoints(HAnimJoint1677)
HAnimJoint1678 = x3d.HAnimJoint()
HAnimJoint1678.setContainerFieldOverride("joints")
HAnimJoint1678.setUSE("hanim_vt8")

HAnimHumanoid43.addJoints(HAnimJoint1678)
HAnimJoint1679 = x3d.HAnimJoint()
HAnimJoint1679.setContainerFieldOverride("joints")
HAnimJoint1679.setUSE("hanim_vt7")

HAnimHumanoid43.addJoints(HAnimJoint1679)
HAnimJoint1680 = x3d.HAnimJoint()
HAnimJoint1680.setContainerFieldOverride("joints")
HAnimJoint1680.setUSE("hanim_vt6")

HAnimHumanoid43.addJoints(HAnimJoint1680)
HAnimJoint1681 = x3d.HAnimJoint()
HAnimJoint1681.setContainerFieldOverride("joints")
HAnimJoint1681.setUSE("hanim_vt5")

HAnimHumanoid43.addJoints(HAnimJoint1681)
HAnimJoint1682 = x3d.HAnimJoint()
HAnimJoint1682.setContainerFieldOverride("joints")
HAnimJoint1682.setUSE("hanim_vt4")

HAnimHumanoid43.addJoints(HAnimJoint1682)
HAnimJoint1683 = x3d.HAnimJoint()
HAnimJoint1683.setContainerFieldOverride("joints")
HAnimJoint1683.setUSE("hanim_vt3")

HAnimHumanoid43.addJoints(HAnimJoint1683)
HAnimJoint1684 = x3d.HAnimJoint()
HAnimJoint1684.setContainerFieldOverride("joints")
HAnimJoint1684.setUSE("hanim_vt2")

HAnimHumanoid43.addJoints(HAnimJoint1684)
HAnimJoint1685 = x3d.HAnimJoint()
HAnimJoint1685.setContainerFieldOverride("joints")
HAnimJoint1685.setUSE("hanim_vt1")

HAnimHumanoid43.addJoints(HAnimJoint1685)
HAnimJoint1686 = x3d.HAnimJoint()
HAnimJoint1686.setContainerFieldOverride("joints")
HAnimJoint1686.setUSE("hanim_vc7")

HAnimHumanoid43.addJoints(HAnimJoint1686)
HAnimJoint1687 = x3d.HAnimJoint()
HAnimJoint1687.setContainerFieldOverride("joints")
HAnimJoint1687.setUSE("hanim_vc6")

HAnimHumanoid43.addJoints(HAnimJoint1687)
HAnimJoint1688 = x3d.HAnimJoint()
HAnimJoint1688.setContainerFieldOverride("joints")
HAnimJoint1688.setUSE("hanim_vc5")

HAnimHumanoid43.addJoints(HAnimJoint1688)
HAnimJoint1689 = x3d.HAnimJoint()
HAnimJoint1689.setContainerFieldOverride("joints")
HAnimJoint1689.setUSE("hanim_vc4")

HAnimHumanoid43.addJoints(HAnimJoint1689)
HAnimJoint1690 = x3d.HAnimJoint()
HAnimJoint1690.setContainerFieldOverride("joints")
HAnimJoint1690.setUSE("hanim_vc3")

HAnimHumanoid43.addJoints(HAnimJoint1690)
HAnimJoint1691 = x3d.HAnimJoint()
HAnimJoint1691.setContainerFieldOverride("joints")
HAnimJoint1691.setUSE("hanim_vc2")

HAnimHumanoid43.addJoints(HAnimJoint1691)
HAnimJoint1692 = x3d.HAnimJoint()
HAnimJoint1692.setContainerFieldOverride("joints")
HAnimJoint1692.setUSE("hanim_vc1")

HAnimHumanoid43.addJoints(HAnimJoint1692)
HAnimJoint1693 = x3d.HAnimJoint()
HAnimJoint1693.setContainerFieldOverride("joints")
HAnimJoint1693.setUSE("hanim_skullbase")

HAnimHumanoid43.addJoints(HAnimJoint1693)
HAnimJoint1694 = x3d.HAnimJoint()
HAnimJoint1694.setContainerFieldOverride("joints")
HAnimJoint1694.setUSE("hanim_l_eyelid_joint")

HAnimHumanoid43.addJoints(HAnimJoint1694)
HAnimJoint1695 = x3d.HAnimJoint()
HAnimJoint1695.setContainerFieldOverride("joints")
HAnimJoint1695.setUSE("hanim_r_eyelid_joint")

HAnimHumanoid43.addJoints(HAnimJoint1695)
HAnimJoint1696 = x3d.HAnimJoint()
HAnimJoint1696.setContainerFieldOverride("joints")
HAnimJoint1696.setUSE("hanim_l_eyeball_joint")

HAnimHumanoid43.addJoints(HAnimJoint1696)
HAnimJoint1697 = x3d.HAnimJoint()
HAnimJoint1697.setContainerFieldOverride("joints")
HAnimJoint1697.setUSE("hanim_r_eyeball_joint")

HAnimHumanoid43.addJoints(HAnimJoint1697)
HAnimJoint1698 = x3d.HAnimJoint()
HAnimJoint1698.setContainerFieldOverride("joints")
HAnimJoint1698.setUSE("hanim_l_eyebrow_joint")

HAnimHumanoid43.addJoints(HAnimJoint1698)
HAnimJoint1699 = x3d.HAnimJoint()
HAnimJoint1699.setContainerFieldOverride("joints")
HAnimJoint1699.setUSE("hanim_r_eyebrow_joint")

HAnimHumanoid43.addJoints(HAnimJoint1699)
HAnimJoint1700 = x3d.HAnimJoint()
HAnimJoint1700.setContainerFieldOverride("joints")
HAnimJoint1700.setUSE("hanim_temporomandibular")

HAnimHumanoid43.addJoints(HAnimJoint1700)
HAnimJoint1701 = x3d.HAnimJoint()
HAnimJoint1701.setContainerFieldOverride("joints")
HAnimJoint1701.setUSE("hanim_l_sternoclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1701)
HAnimJoint1702 = x3d.HAnimJoint()
HAnimJoint1702.setContainerFieldOverride("joints")
HAnimJoint1702.setUSE("hanim_l_acromioclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1702)
HAnimJoint1703 = x3d.HAnimJoint()
HAnimJoint1703.setContainerFieldOverride("joints")
HAnimJoint1703.setUSE("hanim_l_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint1703)
HAnimJoint1704 = x3d.HAnimJoint()
HAnimJoint1704.setContainerFieldOverride("joints")
HAnimJoint1704.setUSE("hanim_l_elbow")

HAnimHumanoid43.addJoints(HAnimJoint1704)
HAnimJoint1705 = x3d.HAnimJoint()
HAnimJoint1705.setContainerFieldOverride("joints")
HAnimJoint1705.setUSE("hanim_l_radiocarpal")

HAnimHumanoid43.addJoints(HAnimJoint1705)
HAnimJoint1706 = x3d.HAnimJoint()
HAnimJoint1706.setContainerFieldOverride("joints")
HAnimJoint1706.setUSE("hanim_l_midcarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1706)
HAnimJoint1707 = x3d.HAnimJoint()
HAnimJoint1707.setContainerFieldOverride("joints")
HAnimJoint1707.setUSE("hanim_l_carpometacarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1707)
HAnimJoint1708 = x3d.HAnimJoint()
HAnimJoint1708.setContainerFieldOverride("joints")
HAnimJoint1708.setUSE("hanim_l_metacarpophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1708)
HAnimJoint1709 = x3d.HAnimJoint()
HAnimJoint1709.setContainerFieldOverride("joints")
HAnimJoint1709.setUSE("hanim_l_carpal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1709)
HAnimJoint1710 = x3d.HAnimJoint()
HAnimJoint1710.setContainerFieldOverride("joints")
HAnimJoint1710.setUSE("hanim_l_midcarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1710)
HAnimJoint1711 = x3d.HAnimJoint()
HAnimJoint1711.setContainerFieldOverride("joints")
HAnimJoint1711.setUSE("hanim_l_carpometacarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1711)
HAnimJoint1712 = x3d.HAnimJoint()
HAnimJoint1712.setContainerFieldOverride("joints")
HAnimJoint1712.setUSE("hanim_l_metacarpophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1712)
HAnimJoint1713 = x3d.HAnimJoint()
HAnimJoint1713.setContainerFieldOverride("joints")
HAnimJoint1713.setUSE("hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1713)
HAnimJoint1714 = x3d.HAnimJoint()
HAnimJoint1714.setContainerFieldOverride("joints")
HAnimJoint1714.setUSE("hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1714)
HAnimJoint1715 = x3d.HAnimJoint()
HAnimJoint1715.setContainerFieldOverride("joints")
HAnimJoint1715.setUSE("hanim_l_midcarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1715)
HAnimJoint1716 = x3d.HAnimJoint()
HAnimJoint1716.setContainerFieldOverride("joints")
HAnimJoint1716.setUSE("hanim_l_carpometacarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1716)
HAnimJoint1717 = x3d.HAnimJoint()
HAnimJoint1717.setContainerFieldOverride("joints")
HAnimJoint1717.setUSE("hanim_l_metacarpophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1717)
HAnimJoint1718 = x3d.HAnimJoint()
HAnimJoint1718.setContainerFieldOverride("joints")
HAnimJoint1718.setUSE("hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1718)
HAnimJoint1719 = x3d.HAnimJoint()
HAnimJoint1719.setContainerFieldOverride("joints")
HAnimJoint1719.setUSE("hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1719)
HAnimJoint1720 = x3d.HAnimJoint()
HAnimJoint1720.setContainerFieldOverride("joints")
HAnimJoint1720.setUSE("hanim_l_midcarpal_4_5")

HAnimHumanoid43.addJoints(HAnimJoint1720)
HAnimJoint1721 = x3d.HAnimJoint()
HAnimJoint1721.setContainerFieldOverride("joints")
HAnimJoint1721.setUSE("hanim_l_carpometacarpal_4")

HAnimHumanoid43.addJoints(HAnimJoint1721)
HAnimJoint1722 = x3d.HAnimJoint()
HAnimJoint1722.setContainerFieldOverride("joints")
HAnimJoint1722.setUSE("hanim_l_metacarpophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1722)
HAnimJoint1723 = x3d.HAnimJoint()
HAnimJoint1723.setContainerFieldOverride("joints")
HAnimJoint1723.setUSE("hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1723)
HAnimJoint1724 = x3d.HAnimJoint()
HAnimJoint1724.setContainerFieldOverride("joints")
HAnimJoint1724.setUSE("hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1724)
HAnimJoint1725 = x3d.HAnimJoint()
HAnimJoint1725.setContainerFieldOverride("joints")
HAnimJoint1725.setUSE("hanim_l_carpometacarpal_5")

HAnimHumanoid43.addJoints(HAnimJoint1725)
HAnimJoint1726 = x3d.HAnimJoint()
HAnimJoint1726.setContainerFieldOverride("joints")
HAnimJoint1726.setUSE("hanim_l_metacarpophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1726)
HAnimJoint1727 = x3d.HAnimJoint()
HAnimJoint1727.setContainerFieldOverride("joints")
HAnimJoint1727.setUSE("hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1727)
HAnimJoint1728 = x3d.HAnimJoint()
HAnimJoint1728.setContainerFieldOverride("joints")
HAnimJoint1728.setUSE("hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1728)
HAnimJoint1729 = x3d.HAnimJoint()
HAnimJoint1729.setContainerFieldOverride("joints")
HAnimJoint1729.setUSE("hanim_r_sternoclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1729)
HAnimJoint1730 = x3d.HAnimJoint()
HAnimJoint1730.setContainerFieldOverride("joints")
HAnimJoint1730.setUSE("hanim_r_acromioclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1730)
HAnimJoint1731 = x3d.HAnimJoint()
HAnimJoint1731.setContainerFieldOverride("joints")
HAnimJoint1731.setUSE("hanim_r_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint1731)
HAnimJoint1732 = x3d.HAnimJoint()
HAnimJoint1732.setContainerFieldOverride("joints")
HAnimJoint1732.setUSE("hanim_r_elbow")

HAnimHumanoid43.addJoints(HAnimJoint1732)
HAnimJoint1733 = x3d.HAnimJoint()
HAnimJoint1733.setContainerFieldOverride("joints")
HAnimJoint1733.setUSE("hanim_r_radiocarpal")

HAnimHumanoid43.addJoints(HAnimJoint1733)
HAnimJoint1734 = x3d.HAnimJoint()
HAnimJoint1734.setContainerFieldOverride("joints")
HAnimJoint1734.setUSE("hanim_r_midcarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1734)
HAnimJoint1735 = x3d.HAnimJoint()
HAnimJoint1735.setContainerFieldOverride("joints")
HAnimJoint1735.setUSE("hanim_r_carpometacarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1735)
HAnimJoint1736 = x3d.HAnimJoint()
HAnimJoint1736.setContainerFieldOverride("joints")
HAnimJoint1736.setUSE("hanim_r_metacarpophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1736)
HAnimJoint1737 = x3d.HAnimJoint()
HAnimJoint1737.setContainerFieldOverride("joints")
HAnimJoint1737.setUSE("hanim_r_carpal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1737)
HAnimJoint1738 = x3d.HAnimJoint()
HAnimJoint1738.setContainerFieldOverride("joints")
HAnimJoint1738.setUSE("hanim_r_midcarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1738)
HAnimJoint1739 = x3d.HAnimJoint()
HAnimJoint1739.setContainerFieldOverride("joints")
HAnimJoint1739.setUSE("hanim_r_carpometacarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1739)
HAnimJoint1740 = x3d.HAnimJoint()
HAnimJoint1740.setContainerFieldOverride("joints")
HAnimJoint1740.setUSE("hanim_r_metacarpophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1740)
HAnimJoint1741 = x3d.HAnimJoint()
HAnimJoint1741.setContainerFieldOverride("joints")
HAnimJoint1741.setUSE("hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1741)
HAnimJoint1742 = x3d.HAnimJoint()
HAnimJoint1742.setContainerFieldOverride("joints")
HAnimJoint1742.setUSE("hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1742)
HAnimJoint1743 = x3d.HAnimJoint()
HAnimJoint1743.setContainerFieldOverride("joints")
HAnimJoint1743.setUSE("hanim_r_midcarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1743)
HAnimJoint1744 = x3d.HAnimJoint()
HAnimJoint1744.setContainerFieldOverride("joints")
HAnimJoint1744.setUSE("hanim_r_carpometacarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1744)
HAnimJoint1745 = x3d.HAnimJoint()
HAnimJoint1745.setContainerFieldOverride("joints")
HAnimJoint1745.setUSE("hanim_r_metacarpophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1745)
HAnimJoint1746 = x3d.HAnimJoint()
HAnimJoint1746.setContainerFieldOverride("joints")
HAnimJoint1746.setUSE("hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1746)
HAnimJoint1747 = x3d.HAnimJoint()
HAnimJoint1747.setContainerFieldOverride("joints")
HAnimJoint1747.setUSE("hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1747)
HAnimJoint1748 = x3d.HAnimJoint()
HAnimJoint1748.setContainerFieldOverride("joints")
HAnimJoint1748.setUSE("hanim_r_midcarpal_4_5")

HAnimHumanoid43.addJoints(HAnimJoint1748)
HAnimJoint1749 = x3d.HAnimJoint()
HAnimJoint1749.setContainerFieldOverride("joints")
HAnimJoint1749.setUSE("hanim_r_carpometacarpal_4")

HAnimHumanoid43.addJoints(HAnimJoint1749)
HAnimJoint1750 = x3d.HAnimJoint()
HAnimJoint1750.setContainerFieldOverride("joints")
HAnimJoint1750.setUSE("hanim_r_metacarpophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1750)
HAnimJoint1751 = x3d.HAnimJoint()
HAnimJoint1751.setContainerFieldOverride("joints")
HAnimJoint1751.setUSE("hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1751)
HAnimJoint1752 = x3d.HAnimJoint()
HAnimJoint1752.setContainerFieldOverride("joints")
HAnimJoint1752.setUSE("hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1752)
HAnimJoint1753 = x3d.HAnimJoint()
HAnimJoint1753.setContainerFieldOverride("joints")
HAnimJoint1753.setUSE("hanim_r_carpometacarpal_5")

HAnimHumanoid43.addJoints(HAnimJoint1753)
HAnimJoint1754 = x3d.HAnimJoint()
HAnimJoint1754.setContainerFieldOverride("joints")
HAnimJoint1754.setUSE("hanim_r_metacarpophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1754)
HAnimJoint1755 = x3d.HAnimJoint()
HAnimJoint1755.setContainerFieldOverride("joints")
HAnimJoint1755.setUSE("hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1755)
HAnimJoint1756 = x3d.HAnimJoint()
HAnimJoint1756.setContainerFieldOverride("joints")
HAnimJoint1756.setUSE("hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1756)
HAnimSegment1757 = x3d.HAnimSegment()
HAnimSegment1757.setContainerFieldOverride("segments")
HAnimSegment1757.setUSE("hanim_sacrum")

HAnimHumanoid43.addSegments(HAnimSegment1757)
HAnimSegment1758 = x3d.HAnimSegment()
HAnimSegment1758.setContainerFieldOverride("segments")
HAnimSegment1758.setUSE("hanim_pelvis")

HAnimHumanoid43.addSegments(HAnimSegment1758)
HAnimSegment1759 = x3d.HAnimSegment()
HAnimSegment1759.setContainerFieldOverride("segments")
HAnimSegment1759.setUSE("hanim_l_thigh")

HAnimHumanoid43.addSegments(HAnimSegment1759)
HAnimSegment1760 = x3d.HAnimSegment()
HAnimSegment1760.setContainerFieldOverride("segments")
HAnimSegment1760.setUSE("hanim_l_calf")

HAnimHumanoid43.addSegments(HAnimSegment1760)
HAnimSegment1761 = x3d.HAnimSegment()
HAnimSegment1761.setContainerFieldOverride("segments")
HAnimSegment1761.setUSE("hanim_l_talus")

HAnimHumanoid43.addSegments(HAnimSegment1761)
HAnimSegment1762 = x3d.HAnimSegment()
HAnimSegment1762.setContainerFieldOverride("segments")
HAnimSegment1762.setUSE("hanim_l_navicular")

HAnimHumanoid43.addSegments(HAnimSegment1762)
HAnimSegment1763 = x3d.HAnimSegment()
HAnimSegment1763.setContainerFieldOverride("segments")
HAnimSegment1763.setUSE("hanim_l_cuneiform_1")

HAnimHumanoid43.addSegments(HAnimSegment1763)
HAnimSegment1764 = x3d.HAnimSegment()
HAnimSegment1764.setContainerFieldOverride("segments")
HAnimSegment1764.setUSE("hanim_l_metatarsal_1")

HAnimHumanoid43.addSegments(HAnimSegment1764)
HAnimSegment1765 = x3d.HAnimSegment()
HAnimSegment1765.setContainerFieldOverride("segments")
HAnimSegment1765.setUSE("hanim_l_tarsal_proximal_phalanx_1")

HAnimHumanoid43.addSegments(HAnimSegment1765)
HAnimSegment1766 = x3d.HAnimSegment()
HAnimSegment1766.setContainerFieldOverride("segments")
HAnimSegment1766.setUSE("hanim_l_cuneiform_2")

HAnimHumanoid43.addSegments(HAnimSegment1766)
HAnimSegment1767 = x3d.HAnimSegment()
HAnimSegment1767.setContainerFieldOverride("segments")
HAnimSegment1767.setUSE("hanim_l_metatarsal_2")

HAnimHumanoid43.addSegments(HAnimSegment1767)
HAnimSegment1768 = x3d.HAnimSegment()
HAnimSegment1768.setContainerFieldOverride("segments")
HAnimSegment1768.setUSE("hanim_l_tarsal_proximal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1768)
HAnimSegment1769 = x3d.HAnimSegment()
HAnimSegment1769.setContainerFieldOverride("segments")
HAnimSegment1769.setUSE("hanim_l_tarsal_middle_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1769)
HAnimSegment1770 = x3d.HAnimSegment()
HAnimSegment1770.setContainerFieldOverride("segments")
HAnimSegment1770.setUSE("hanim_l_cuneiform_3")

HAnimHumanoid43.addSegments(HAnimSegment1770)
HAnimSegment1771 = x3d.HAnimSegment()
HAnimSegment1771.setContainerFieldOverride("segments")
HAnimSegment1771.setUSE("hanim_l_metatarsal_3")

HAnimHumanoid43.addSegments(HAnimSegment1771)
HAnimSegment1772 = x3d.HAnimSegment()
HAnimSegment1772.setContainerFieldOverride("segments")
HAnimSegment1772.setUSE("hanim_l_tarsal_proximal_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment1772)
HAnimSegment1773 = x3d.HAnimSegment()
HAnimSegment1773.setContainerFieldOverride("segments")
HAnimSegment1773.setUSE("hanim_l_tarsal_middle_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment1773)
HAnimSegment1774 = x3d.HAnimSegment()
HAnimSegment1774.setContainerFieldOverride("segments")
HAnimSegment1774.setUSE("hanim_l_calcaneus")

HAnimHumanoid43.addSegments(HAnimSegment1774)
HAnimSegment1775 = x3d.HAnimSegment()
HAnimSegment1775.setContainerFieldOverride("segments")
HAnimSegment1775.setUSE("hanim_l_cuboid")

HAnimHumanoid43.addSegments(HAnimSegment1775)
HAnimSegment1776 = x3d.HAnimSegment()
HAnimSegment1776.setContainerFieldOverride("segments")
HAnimSegment1776.setUSE("hanim_l_metatarsal_4")

HAnimHumanoid43.addSegments(HAnimSegment1776)
HAnimSegment1777 = x3d.HAnimSegment()
HAnimSegment1777.setContainerFieldOverride("segments")
HAnimSegment1777.setUSE("hanim_l_tarsal_proximal_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment1777)
HAnimSegment1778 = x3d.HAnimSegment()
HAnimSegment1778.setContainerFieldOverride("segments")
HAnimSegment1778.setUSE("hanim_l_tarsal_middle_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment1778)
HAnimSegment1779 = x3d.HAnimSegment()
HAnimSegment1779.setContainerFieldOverride("segments")
HAnimSegment1779.setUSE("hanim_l_metatarsal_5")

HAnimHumanoid43.addSegments(HAnimSegment1779)
HAnimSegment1780 = x3d.HAnimSegment()
HAnimSegment1780.setContainerFieldOverride("segments")
HAnimSegment1780.setUSE("hanim_l_tarsal_proximal_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment1780)
HAnimSegment1781 = x3d.HAnimSegment()
HAnimSegment1781.setContainerFieldOverride("segments")
HAnimSegment1781.setUSE("hanim_l_tarsal_middle_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment1781)
HAnimSegment1782 = x3d.HAnimSegment()
HAnimSegment1782.setContainerFieldOverride("segments")
HAnimSegment1782.setUSE("hanim_r_thigh")

HAnimHumanoid43.addSegments(HAnimSegment1782)
HAnimSegment1783 = x3d.HAnimSegment()
HAnimSegment1783.setContainerFieldOverride("segments")
HAnimSegment1783.setUSE("hanim_r_calf")

HAnimHumanoid43.addSegments(HAnimSegment1783)
HAnimSegment1784 = x3d.HAnimSegment()
HAnimSegment1784.setContainerFieldOverride("segments")
HAnimSegment1784.setUSE("hanim_r_talus")

HAnimHumanoid43.addSegments(HAnimSegment1784)
HAnimSegment1785 = x3d.HAnimSegment()
HAnimSegment1785.setContainerFieldOverride("segments")
HAnimSegment1785.setUSE("hanim_r_navicular")

HAnimHumanoid43.addSegments(HAnimSegment1785)
HAnimSegment1786 = x3d.HAnimSegment()
HAnimSegment1786.setContainerFieldOverride("segments")
HAnimSegment1786.setUSE("hanim_r_cuneiform_1")

HAnimHumanoid43.addSegments(HAnimSegment1786)
HAnimSegment1787 = x3d.HAnimSegment()
HAnimSegment1787.setContainerFieldOverride("segments")
HAnimSegment1787.setUSE("hanim_r_metatarsal_1")

HAnimHumanoid43.addSegments(HAnimSegment1787)
HAnimSegment1788 = x3d.HAnimSegment()
HAnimSegment1788.setContainerFieldOverride("segments")
HAnimSegment1788.setUSE("hanim_r_tarsal_proximal_phalanx_1")

HAnimHumanoid43.addSegments(HAnimSegment1788)
HAnimSegment1789 = x3d.HAnimSegment()
HAnimSegment1789.setContainerFieldOverride("segments")
HAnimSegment1789.setUSE("hanim_r_cuneiform_2")

HAnimHumanoid43.addSegments(HAnimSegment1789)
HAnimSegment1790 = x3d.HAnimSegment()
HAnimSegment1790.setContainerFieldOverride("segments")
HAnimSegment1790.setUSE("hanim_r_metatarsal_2")

HAnimHumanoid43.addSegments(HAnimSegment1790)
HAnimSegment1791 = x3d.HAnimSegment()
HAnimSegment1791.setContainerFieldOverride("segments")
HAnimSegment1791.setUSE("hanim_r_tarsal_proximal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1791)
HAnimSegment1792 = x3d.HAnimSegment()
HAnimSegment1792.setContainerFieldOverride("segments")
HAnimSegment1792.setUSE("hanim_r_tarsal_middle_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1792)
HAnimSegment1793 = x3d.HAnimSegment()
HAnimSegment1793.setContainerFieldOverride("segments")
HAnimSegment1793.setUSE("hanim_r_cuneiform_3")

HAnimHumanoid43.addSegments(HAnimSegment1793)
HAnimSegment1794 = x3d.HAnimSegment()
HAnimSegment1794.setContainerFieldOverride("segments")
HAnimSegment1794.setUSE("hanim_r_metatarsal_3")

HAnimHumanoid43.addSegments(HAnimSegment1794)
HAnimSegment1795 = x3d.HAnimSegment()
HAnimSegment1795.setContainerFieldOverride("segments")
HAnimSegment1795.setUSE("hanim_r_tarsal_proximal_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment1795)
HAnimSegment1796 = x3d.HAnimSegment()
HAnimSegment1796.setContainerFieldOverride("segments")
HAnimSegment1796.setUSE("hanim_r_tarsal_middle_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment1796)
HAnimSegment1797 = x3d.HAnimSegment()
HAnimSegment1797.setContainerFieldOverride("segments")
HAnimSegment1797.setUSE("hanim_r_calcaneus")

HAnimHumanoid43.addSegments(HAnimSegment1797)
HAnimSegment1798 = x3d.HAnimSegment()
HAnimSegment1798.setContainerFieldOverride("segments")
HAnimSegment1798.setUSE("hanim_r_cuboid")

HAnimHumanoid43.addSegments(HAnimSegment1798)
HAnimSegment1799 = x3d.HAnimSegment()
HAnimSegment1799.setContainerFieldOverride("segments")
HAnimSegment1799.setUSE("hanim_r_metatarsal_4")

HAnimHumanoid43.addSegments(HAnimSegment1799)
HAnimSegment1800 = x3d.HAnimSegment()
HAnimSegment1800.setContainerFieldOverride("segments")
HAnimSegment1800.setUSE("hanim_r_tarsal_proximal_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment1800)
HAnimSegment1801 = x3d.HAnimSegment()
HAnimSegment1801.setContainerFieldOverride("segments")
HAnimSegment1801.setUSE("hanim_r_tarsal_middle_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment1801)
HAnimSegment1802 = x3d.HAnimSegment()
HAnimSegment1802.setContainerFieldOverride("segments")
HAnimSegment1802.setUSE("hanim_r_metatarsal_5")

HAnimHumanoid43.addSegments(HAnimSegment1802)
HAnimSegment1803 = x3d.HAnimSegment()
HAnimSegment1803.setContainerFieldOverride("segments")
HAnimSegment1803.setUSE("hanim_r_tarsal_proximal_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment1803)
HAnimSegment1804 = x3d.HAnimSegment()
HAnimSegment1804.setContainerFieldOverride("segments")
HAnimSegment1804.setUSE("hanim_r_tarsal_middle_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment1804)
HAnimSegment1805 = x3d.HAnimSegment()
HAnimSegment1805.setContainerFieldOverride("segments")
HAnimSegment1805.setUSE("hanim_l5")

HAnimHumanoid43.addSegments(HAnimSegment1805)
HAnimSegment1806 = x3d.HAnimSegment()
HAnimSegment1806.setContainerFieldOverride("segments")
HAnimSegment1806.setUSE("hanim_l4")

HAnimHumanoid43.addSegments(HAnimSegment1806)
HAnimSegment1807 = x3d.HAnimSegment()
HAnimSegment1807.setContainerFieldOverride("segments")
HAnimSegment1807.setUSE("hanim_l3")

HAnimHumanoid43.addSegments(HAnimSegment1807)
HAnimSegment1808 = x3d.HAnimSegment()
HAnimSegment1808.setContainerFieldOverride("segments")
HAnimSegment1808.setUSE("hanim_l2")

HAnimHumanoid43.addSegments(HAnimSegment1808)
HAnimSegment1809 = x3d.HAnimSegment()
HAnimSegment1809.setContainerFieldOverride("segments")
HAnimSegment1809.setUSE("hanim_l1")

HAnimHumanoid43.addSegments(HAnimSegment1809)
HAnimSegment1810 = x3d.HAnimSegment()
HAnimSegment1810.setContainerFieldOverride("segments")
HAnimSegment1810.setUSE("hanim_t12")

HAnimHumanoid43.addSegments(HAnimSegment1810)
HAnimSegment1811 = x3d.HAnimSegment()
HAnimSegment1811.setContainerFieldOverride("segments")
HAnimSegment1811.setUSE("hanim_t11")

HAnimHumanoid43.addSegments(HAnimSegment1811)
HAnimSegment1812 = x3d.HAnimSegment()
HAnimSegment1812.setContainerFieldOverride("segments")
HAnimSegment1812.setUSE("hanim_t10")

HAnimHumanoid43.addSegments(HAnimSegment1812)
HAnimSegment1813 = x3d.HAnimSegment()
HAnimSegment1813.setContainerFieldOverride("segments")
HAnimSegment1813.setUSE("hanim_t9")

HAnimHumanoid43.addSegments(HAnimSegment1813)
HAnimSegment1814 = x3d.HAnimSegment()
HAnimSegment1814.setContainerFieldOverride("segments")
HAnimSegment1814.setUSE("hanim_t8")

HAnimHumanoid43.addSegments(HAnimSegment1814)
HAnimSegment1815 = x3d.HAnimSegment()
HAnimSegment1815.setContainerFieldOverride("segments")
HAnimSegment1815.setUSE("hanim_t7")

HAnimHumanoid43.addSegments(HAnimSegment1815)
HAnimSegment1816 = x3d.HAnimSegment()
HAnimSegment1816.setContainerFieldOverride("segments")
HAnimSegment1816.setUSE("hanim_t6")

HAnimHumanoid43.addSegments(HAnimSegment1816)
HAnimSegment1817 = x3d.HAnimSegment()
HAnimSegment1817.setContainerFieldOverride("segments")
HAnimSegment1817.setUSE("hanim_t5")

HAnimHumanoid43.addSegments(HAnimSegment1817)
HAnimSegment1818 = x3d.HAnimSegment()
HAnimSegment1818.setContainerFieldOverride("segments")
HAnimSegment1818.setUSE("hanim_t4")

HAnimHumanoid43.addSegments(HAnimSegment1818)
HAnimSegment1819 = x3d.HAnimSegment()
HAnimSegment1819.setContainerFieldOverride("segments")
HAnimSegment1819.setUSE("hanim_t3")

HAnimHumanoid43.addSegments(HAnimSegment1819)
HAnimSegment1820 = x3d.HAnimSegment()
HAnimSegment1820.setContainerFieldOverride("segments")
HAnimSegment1820.setUSE("hanim_t2")

HAnimHumanoid43.addSegments(HAnimSegment1820)
HAnimSegment1821 = x3d.HAnimSegment()
HAnimSegment1821.setContainerFieldOverride("segments")
HAnimSegment1821.setUSE("hanim_t1")

HAnimHumanoid43.addSegments(HAnimSegment1821)
HAnimSegment1822 = x3d.HAnimSegment()
HAnimSegment1822.setContainerFieldOverride("segments")
HAnimSegment1822.setUSE("hanim_c7")

HAnimHumanoid43.addSegments(HAnimSegment1822)
HAnimSegment1823 = x3d.HAnimSegment()
HAnimSegment1823.setContainerFieldOverride("segments")
HAnimSegment1823.setUSE("hanim_c6")

HAnimHumanoid43.addSegments(HAnimSegment1823)
HAnimSegment1824 = x3d.HAnimSegment()
HAnimSegment1824.setContainerFieldOverride("segments")
HAnimSegment1824.setUSE("hanim_c5")

HAnimHumanoid43.addSegments(HAnimSegment1824)
HAnimSegment1825 = x3d.HAnimSegment()
HAnimSegment1825.setContainerFieldOverride("segments")
HAnimSegment1825.setUSE("hanim_c4")

HAnimHumanoid43.addSegments(HAnimSegment1825)
HAnimSegment1826 = x3d.HAnimSegment()
HAnimSegment1826.setContainerFieldOverride("segments")
HAnimSegment1826.setUSE("hanim_c3")

HAnimHumanoid43.addSegments(HAnimSegment1826)
HAnimSegment1827 = x3d.HAnimSegment()
HAnimSegment1827.setContainerFieldOverride("segments")
HAnimSegment1827.setUSE("hanim_c2")

HAnimHumanoid43.addSegments(HAnimSegment1827)
HAnimSegment1828 = x3d.HAnimSegment()
HAnimSegment1828.setContainerFieldOverride("segments")
HAnimSegment1828.setUSE("hanim_c1")

HAnimHumanoid43.addSegments(HAnimSegment1828)
HAnimSegment1829 = x3d.HAnimSegment()
HAnimSegment1829.setContainerFieldOverride("segments")
HAnimSegment1829.setUSE("hanim_skull")

HAnimHumanoid43.addSegments(HAnimSegment1829)
HAnimSegment1830 = x3d.HAnimSegment()
HAnimSegment1830.setContainerFieldOverride("segments")
HAnimSegment1830.setUSE("hanim_l_clavicle")

HAnimHumanoid43.addSegments(HAnimSegment1830)
HAnimSegment1831 = x3d.HAnimSegment()
HAnimSegment1831.setContainerFieldOverride("segments")
HAnimSegment1831.setUSE("hanim_l_scapula")

HAnimHumanoid43.addSegments(HAnimSegment1831)
HAnimSegment1832 = x3d.HAnimSegment()
HAnimSegment1832.setContainerFieldOverride("segments")
HAnimSegment1832.setUSE("hanim_l_upperarm")

HAnimHumanoid43.addSegments(HAnimSegment1832)
HAnimSegment1833 = x3d.HAnimSegment()
HAnimSegment1833.setContainerFieldOverride("segments")
HAnimSegment1833.setUSE("hanim_l_forearm")

HAnimHumanoid43.addSegments(HAnimSegment1833)
HAnimSegment1834 = x3d.HAnimSegment()
HAnimSegment1834.setContainerFieldOverride("segments")
HAnimSegment1834.setUSE("hanim_l_carpal")

HAnimHumanoid43.addSegments(HAnimSegment1834)
HAnimSegment1835 = x3d.HAnimSegment()
HAnimSegment1835.setContainerFieldOverride("segments")
HAnimSegment1835.setUSE("hanim_l_trapezium")

HAnimHumanoid43.addSegments(HAnimSegment1835)
HAnimSegment1836 = x3d.HAnimSegment()
HAnimSegment1836.setContainerFieldOverride("segments")
HAnimSegment1836.setUSE("hanim_l_metacarpal_1")

HAnimHumanoid43.addSegments(HAnimSegment1836)
HAnimSegment1837 = x3d.HAnimSegment()
HAnimSegment1837.setContainerFieldOverride("segments")
HAnimSegment1837.setUSE("hanim_l_carpal_proximal_phalanx_1")

HAnimHumanoid43.addSegments(HAnimSegment1837)
HAnimSegment1838 = x3d.HAnimSegment()
HAnimSegment1838.setContainerFieldOverride("segments")
HAnimSegment1838.setUSE("hanim_l_trapezoid")

HAnimHumanoid43.addSegments(HAnimSegment1838)
HAnimSegment1839 = x3d.HAnimSegment()
HAnimSegment1839.setContainerFieldOverride("segments")
HAnimSegment1839.setUSE("hanim_l_metacarpal_2")

HAnimHumanoid43.addSegments(HAnimSegment1839)
HAnimSegment1840 = x3d.HAnimSegment()
HAnimSegment1840.setContainerFieldOverride("segments")
HAnimSegment1840.setUSE("hanim_l_carpal_proximal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1840)
HAnimSegment1841 = x3d.HAnimSegment()
HAnimSegment1841.setContainerFieldOverride("segments")
HAnimSegment1841.setUSE("hanim_l_carpal_middle_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1841)
HAnimSegment1842 = x3d.HAnimSegment()
HAnimSegment1842.setContainerFieldOverride("segments")
HAnimSegment1842.setUSE("hanim_l_capitate")

HAnimHumanoid43.addSegments(HAnimSegment1842)
HAnimSegment1843 = x3d.HAnimSegment()
HAnimSegment1843.setContainerFieldOverride("segments")
HAnimSegment1843.setUSE("hanim_l_metacarpal_3")

HAnimHumanoid43.addSegments(HAnimSegment1843)
HAnimSegment1844 = x3d.HAnimSegment()
HAnimSegment1844.setContainerFieldOverride("segments")
HAnimSegment1844.setUSE("hanim_l_carpal_proximal_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment1844)
HAnimSegment1845 = x3d.HAnimSegment()
HAnimSegment1845.setContainerFieldOverride("segments")
HAnimSegment1845.setUSE("hanim_l_carpal_middle_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment1845)
HAnimSegment1846 = x3d.HAnimSegment()
HAnimSegment1846.setContainerFieldOverride("segments")
HAnimSegment1846.setUSE("hanim_l_hamate")

HAnimHumanoid43.addSegments(HAnimSegment1846)
HAnimSegment1847 = x3d.HAnimSegment()
HAnimSegment1847.setContainerFieldOverride("segments")
HAnimSegment1847.setUSE("hanim_l_metacarpal_4")

HAnimHumanoid43.addSegments(HAnimSegment1847)
HAnimSegment1848 = x3d.HAnimSegment()
HAnimSegment1848.setContainerFieldOverride("segments")
HAnimSegment1848.setUSE("hanim_l_carpal_proximal_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment1848)
HAnimSegment1849 = x3d.HAnimSegment()
HAnimSegment1849.setContainerFieldOverride("segments")
HAnimSegment1849.setUSE("hanim_l_carpal_middle_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment1849)
HAnimSegment1850 = x3d.HAnimSegment()
HAnimSegment1850.setContainerFieldOverride("segments")
HAnimSegment1850.setUSE("hanim_l_metacarpal_5")

HAnimHumanoid43.addSegments(HAnimSegment1850)
HAnimSegment1851 = x3d.HAnimSegment()
HAnimSegment1851.setContainerFieldOverride("segments")
HAnimSegment1851.setUSE("hanim_l_carpal_proximal_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment1851)
HAnimSegment1852 = x3d.HAnimSegment()
HAnimSegment1852.setContainerFieldOverride("segments")
HAnimSegment1852.setUSE("hanim_l_carpal_middle_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment1852)
HAnimSegment1853 = x3d.HAnimSegment()
HAnimSegment1853.setContainerFieldOverride("segments")
HAnimSegment1853.setUSE("hanim_r_clavicle")

HAnimHumanoid43.addSegments(HAnimSegment1853)
HAnimSegment1854 = x3d.HAnimSegment()
HAnimSegment1854.setContainerFieldOverride("segments")
HAnimSegment1854.setUSE("hanim_r_scapula")

HAnimHumanoid43.addSegments(HAnimSegment1854)
HAnimSegment1855 = x3d.HAnimSegment()
HAnimSegment1855.setContainerFieldOverride("segments")
HAnimSegment1855.setUSE("hanim_r_upperarm")

HAnimHumanoid43.addSegments(HAnimSegment1855)
HAnimSegment1856 = x3d.HAnimSegment()
HAnimSegment1856.setContainerFieldOverride("segments")
HAnimSegment1856.setUSE("hanim_r_forearm")

HAnimHumanoid43.addSegments(HAnimSegment1856)
HAnimSegment1857 = x3d.HAnimSegment()
HAnimSegment1857.setContainerFieldOverride("segments")
HAnimSegment1857.setUSE("hanim_r_carpal")

HAnimHumanoid43.addSegments(HAnimSegment1857)
HAnimSegment1858 = x3d.HAnimSegment()
HAnimSegment1858.setContainerFieldOverride("segments")
HAnimSegment1858.setUSE("hanim_r_trapezium")

HAnimHumanoid43.addSegments(HAnimSegment1858)
HAnimSegment1859 = x3d.HAnimSegment()
HAnimSegment1859.setContainerFieldOverride("segments")
HAnimSegment1859.setUSE("hanim_r_metacarpal_1")

HAnimHumanoid43.addSegments(HAnimSegment1859)
HAnimSegment1860 = x3d.HAnimSegment()
HAnimSegment1860.setContainerFieldOverride("segments")
HAnimSegment1860.setUSE("hanim_r_carpal_proximal_phalanx_1")

HAnimHumanoid43.addSegments(HAnimSegment1860)
HAnimSegment1861 = x3d.HAnimSegment()
HAnimSegment1861.setContainerFieldOverride("segments")
HAnimSegment1861.setUSE("hanim_r_trapezoid")

HAnimHumanoid43.addSegments(HAnimSegment1861)
HAnimSegment1862 = x3d.HAnimSegment()
HAnimSegment1862.setContainerFieldOverride("segments")
HAnimSegment1862.setUSE("hanim_r_metacarpal_2")

HAnimHumanoid43.addSegments(HAnimSegment1862)
HAnimSegment1863 = x3d.HAnimSegment()
HAnimSegment1863.setContainerFieldOverride("segments")
HAnimSegment1863.setUSE("hanim_r_carpal_proximal_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1863)
HAnimSegment1864 = x3d.HAnimSegment()
HAnimSegment1864.setContainerFieldOverride("segments")
HAnimSegment1864.setUSE("hanim_r_carpal_middle_phalanx_2")

HAnimHumanoid43.addSegments(HAnimSegment1864)
HAnimSegment1865 = x3d.HAnimSegment()
HAnimSegment1865.setContainerFieldOverride("segments")
HAnimSegment1865.setUSE("hanim_r_capitate")

HAnimHumanoid43.addSegments(HAnimSegment1865)
HAnimSegment1866 = x3d.HAnimSegment()
HAnimSegment1866.setContainerFieldOverride("segments")
HAnimSegment1866.setUSE("hanim_r_metacarpal_3")

HAnimHumanoid43.addSegments(HAnimSegment1866)
HAnimSegment1867 = x3d.HAnimSegment()
HAnimSegment1867.setContainerFieldOverride("segments")
HAnimSegment1867.setUSE("hanim_r_carpal_proximal_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment1867)
HAnimSegment1868 = x3d.HAnimSegment()
HAnimSegment1868.setContainerFieldOverride("segments")
HAnimSegment1868.setUSE("hanim_r_carpal_middle_phalanx_3")

HAnimHumanoid43.addSegments(HAnimSegment1868)
HAnimSegment1869 = x3d.HAnimSegment()
HAnimSegment1869.setContainerFieldOverride("segments")
HAnimSegment1869.setUSE("hanim_r_hamate")

HAnimHumanoid43.addSegments(HAnimSegment1869)
HAnimSegment1870 = x3d.HAnimSegment()
HAnimSegment1870.setContainerFieldOverride("segments")
HAnimSegment1870.setUSE("hanim_r_metacarpal_4")

HAnimHumanoid43.addSegments(HAnimSegment1870)
HAnimSegment1871 = x3d.HAnimSegment()
HAnimSegment1871.setContainerFieldOverride("segments")
HAnimSegment1871.setUSE("hanim_r_carpal_proximal_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment1871)
HAnimSegment1872 = x3d.HAnimSegment()
HAnimSegment1872.setContainerFieldOverride("segments")
HAnimSegment1872.setUSE("hanim_r_carpal_middle_phalanx_4")

HAnimHumanoid43.addSegments(HAnimSegment1872)
HAnimSegment1873 = x3d.HAnimSegment()
HAnimSegment1873.setContainerFieldOverride("segments")
HAnimSegment1873.setUSE("hanim_r_metacarpal_5")

HAnimHumanoid43.addSegments(HAnimSegment1873)
HAnimSegment1874 = x3d.HAnimSegment()
HAnimSegment1874.setContainerFieldOverride("segments")
HAnimSegment1874.setUSE("hanim_r_carpal_proximal_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment1874)
HAnimSegment1875 = x3d.HAnimSegment()
HAnimSegment1875.setContainerFieldOverride("segments")
HAnimSegment1875.setUSE("hanim_r_carpal_middle_phalanx_5")

HAnimHumanoid43.addSegments(HAnimSegment1875)
HAnimSite1876 = x3d.HAnimSite()
HAnimSite1876.setContainerFieldOverride("sites")
HAnimSite1876.setUSE("hanim_buttocks_standing_wall_contact_point_pt")

HAnimHumanoid43.addSites(HAnimSite1876)
HAnimSite1877 = x3d.HAnimSite()
HAnimSite1877.setContainerFieldOverride("sites")
HAnimSite1877.setUSE("hanim_crotch_pt")

HAnimHumanoid43.addSites(HAnimSite1877)
HAnimSite1878 = x3d.HAnimSite()
HAnimSite1878.setContainerFieldOverride("sites")
HAnimSite1878.setUSE("hanim_l_asis_pt")

HAnimHumanoid43.addSites(HAnimSite1878)
HAnimSite1879 = x3d.HAnimSite()
HAnimSite1879.setContainerFieldOverride("sites")
HAnimSite1879.setUSE("hanim_l_iliocristale_pt")

HAnimHumanoid43.addSites(HAnimSite1879)
HAnimSite1880 = x3d.HAnimSite()
HAnimSite1880.setContainerFieldOverride("sites")
HAnimSite1880.setUSE("hanim_l_psis_pt")

HAnimHumanoid43.addSites(HAnimSite1880)
HAnimSite1881 = x3d.HAnimSite()
HAnimSite1881.setContainerFieldOverride("sites")
HAnimSite1881.setUSE("hanim_l_trochanterion_pt")

HAnimHumanoid43.addSites(HAnimSite1881)
HAnimSite1882 = x3d.HAnimSite()
HAnimSite1882.setContainerFieldOverride("sites")
HAnimSite1882.setUSE("hanim_r_asis_pt")

HAnimHumanoid43.addSites(HAnimSite1882)
HAnimSite1883 = x3d.HAnimSite()
HAnimSite1883.setContainerFieldOverride("sites")
HAnimSite1883.setUSE("hanim_r_iliocristale_pt")

HAnimHumanoid43.addSites(HAnimSite1883)
HAnimSite1884 = x3d.HAnimSite()
HAnimSite1884.setContainerFieldOverride("sites")
HAnimSite1884.setUSE("hanim_r_psis_pt")

HAnimHumanoid43.addSites(HAnimSite1884)
HAnimSite1885 = x3d.HAnimSite()
HAnimSite1885.setContainerFieldOverride("sites")
HAnimSite1885.setUSE("hanim_r_trochanterion_pt")

HAnimHumanoid43.addSites(HAnimSite1885)
HAnimSite1886 = x3d.HAnimSite()
HAnimSite1886.setContainerFieldOverride("sites")
HAnimSite1886.setUSE("hanim_navel_pt")

HAnimHumanoid43.addSites(HAnimSite1886)
HAnimSite1887 = x3d.HAnimSite()
HAnimSite1887.setContainerFieldOverride("sites")
HAnimSite1887.setUSE("hanim_waist_preferred_anterior_pt")

HAnimHumanoid43.addSites(HAnimSite1887)
HAnimSite1888 = x3d.HAnimSite()
HAnimSite1888.setContainerFieldOverride("sites")
HAnimSite1888.setUSE("hanim_waist_preferred_posterior_pt")

HAnimHumanoid43.addSites(HAnimSite1888)
HAnimSite1889 = x3d.HAnimSite()
HAnimSite1889.setContainerFieldOverride("sites")
HAnimSite1889.setUSE("hanim_l_femoral_lateral_epicondyles_pt")

HAnimHumanoid43.addSites(HAnimSite1889)
HAnimSite1890 = x3d.HAnimSite()
HAnimSite1890.setContainerFieldOverride("sites")
HAnimSite1890.setUSE("hanim_l_femoral_medial_epicondyles_pt")

HAnimHumanoid43.addSites(HAnimSite1890)
HAnimSite1891 = x3d.HAnimSite()
HAnimSite1891.setContainerFieldOverride("sites")
HAnimSite1891.setUSE("hanim_l_knee_crease_pt")

HAnimHumanoid43.addSites(HAnimSite1891)
HAnimSite1892 = x3d.HAnimSite()
HAnimSite1892.setContainerFieldOverride("sites")
HAnimSite1892.setUSE("hanim_l_suprapatella_pt")

HAnimHumanoid43.addSites(HAnimSite1892)
HAnimSite1893 = x3d.HAnimSite()
HAnimSite1893.setContainerFieldOverride("sites")
HAnimSite1893.setUSE("hanim_r_femoral_lateral_epicondyles_pt")

HAnimHumanoid43.addSites(HAnimSite1893)
HAnimSite1894 = x3d.HAnimSite()
HAnimSite1894.setContainerFieldOverride("sites")
HAnimSite1894.setUSE("hanim_r_femoral_medial_epicondyles_pt")

HAnimHumanoid43.addSites(HAnimSite1894)
HAnimSite1895 = x3d.HAnimSite()
HAnimSite1895.setContainerFieldOverride("sites")
HAnimSite1895.setUSE("hanim_r_knee_crease_pt")

HAnimHumanoid43.addSites(HAnimSite1895)
HAnimSite1896 = x3d.HAnimSite()
HAnimSite1896.setContainerFieldOverride("sites")
HAnimSite1896.setUSE("hanim_r_suprapatella_pt")

HAnimHumanoid43.addSites(HAnimSite1896)
HAnimSite1897 = x3d.HAnimSite()
HAnimSite1897.setContainerFieldOverride("sites")
HAnimSite1897.setUSE("hanim_l_lateral_malleolus_pt")

HAnimHumanoid43.addSites(HAnimSite1897)
HAnimSite1898 = x3d.HAnimSite()
HAnimSite1898.setContainerFieldOverride("sites")
HAnimSite1898.setUSE("hanim_l_medial_malleolus_pt")

HAnimHumanoid43.addSites(HAnimSite1898)
HAnimSite1899 = x3d.HAnimSite()
HAnimSite1899.setContainerFieldOverride("sites")
HAnimSite1899.setUSE("hanim_l_tibiale_pt")

HAnimHumanoid43.addSites(HAnimSite1899)
HAnimSite1900 = x3d.HAnimSite()
HAnimSite1900.setContainerFieldOverride("sites")
HAnimSite1900.setUSE("hanim_l_calcaneus_posterior_pt")

HAnimHumanoid43.addSites(HAnimSite1900)
HAnimSite1901 = x3d.HAnimSite()
HAnimSite1901.setContainerFieldOverride("sites")
HAnimSite1901.setUSE("hanim_l_sphyrion_pt")

HAnimHumanoid43.addSites(HAnimSite1901)
HAnimSite1902 = x3d.HAnimSite()
HAnimSite1902.setContainerFieldOverride("sites")
HAnimSite1902.setUSE("hanim_l_metatarsal_phalanx_1_pt")

HAnimHumanoid43.addSites(HAnimSite1902)
HAnimSite1903 = x3d.HAnimSite()
HAnimSite1903.setContainerFieldOverride("sites")
HAnimSite1903.setUSE("hanim_l_tarsal_distal_phalanx_1_tip")

HAnimHumanoid43.addSites(HAnimSite1903)
HAnimSite1904 = x3d.HAnimSite()
HAnimSite1904.setContainerFieldOverride("sites")
HAnimSite1904.setUSE("hanim_l_tarsal_distal_phalanx_2_tip")

HAnimHumanoid43.addSites(HAnimSite1904)
HAnimSite1905 = x3d.HAnimSite()
HAnimSite1905.setContainerFieldOverride("sites")
HAnimSite1905.setUSE("hanim_l_tarsal_distal_phalanx_3_tip")

HAnimHumanoid43.addSites(HAnimSite1905)
HAnimSite1906 = x3d.HAnimSite()
HAnimSite1906.setContainerFieldOverride("sites")
HAnimSite1906.setUSE("hanim_l_tarsal_distal_phalanx_4_tip")

HAnimHumanoid43.addSites(HAnimSite1906)
HAnimSite1907 = x3d.HAnimSite()
HAnimSite1907.setContainerFieldOverride("sites")
HAnimSite1907.setUSE("hanim_l_metatarsal_phalanx_5_pt")

HAnimHumanoid43.addSites(HAnimSite1907)
HAnimSite1908 = x3d.HAnimSite()
HAnimSite1908.setContainerFieldOverride("sites")
HAnimSite1908.setUSE("hanim_l_tarsal_distal_phalanx_5_tip")

HAnimHumanoid43.addSites(HAnimSite1908)
HAnimSite1909 = x3d.HAnimSite()
HAnimSite1909.setContainerFieldOverride("sites")
HAnimSite1909.setUSE("hanim_r_lateral_malleolus_pt")

HAnimHumanoid43.addSites(HAnimSite1909)
HAnimSite1910 = x3d.HAnimSite()
HAnimSite1910.setContainerFieldOverride("sites")
HAnimSite1910.setUSE("hanim_r_medial_malleolus_pt")

HAnimHumanoid43.addSites(HAnimSite1910)
HAnimSite1911 = x3d.HAnimSite()
HAnimSite1911.setContainerFieldOverride("sites")
HAnimSite1911.setUSE("hanim_r_tibiale_pt")

HAnimHumanoid43.addSites(HAnimSite1911)
HAnimSite1912 = x3d.HAnimSite()
HAnimSite1912.setContainerFieldOverride("sites")
HAnimSite1912.setUSE("hanim_r_calcaneus_posterior_pt")

HAnimHumanoid43.addSites(HAnimSite1912)
HAnimSite1913 = x3d.HAnimSite()
HAnimSite1913.setContainerFieldOverride("sites")
HAnimSite1913.setUSE("hanim_r_sphyrion_pt")

HAnimHumanoid43.addSites(HAnimSite1913)
HAnimSite1914 = x3d.HAnimSite()
HAnimSite1914.setContainerFieldOverride("sites")
HAnimSite1914.setUSE("hanim_r_metatarsal_phalanx_1_pt")

HAnimHumanoid43.addSites(HAnimSite1914)
HAnimSite1915 = x3d.HAnimSite()
HAnimSite1915.setContainerFieldOverride("sites")
HAnimSite1915.setUSE("hanim_r_tarsal_distal_phalanx_1_tip")

HAnimHumanoid43.addSites(HAnimSite1915)
HAnimSite1916 = x3d.HAnimSite()
HAnimSite1916.setContainerFieldOverride("sites")
HAnimSite1916.setUSE("hanim_r_tarsal_distal_phalanx_2_tip")

HAnimHumanoid43.addSites(HAnimSite1916)
HAnimSite1917 = x3d.HAnimSite()
HAnimSite1917.setContainerFieldOverride("sites")
HAnimSite1917.setUSE("hanim_r_tarsal_distal_phalanx_3_tip")

HAnimHumanoid43.addSites(HAnimSite1917)
HAnimSite1918 = x3d.HAnimSite()
HAnimSite1918.setContainerFieldOverride("sites")
HAnimSite1918.setUSE("hanim_r_tarsal_distal_phalanx_4_tip")

HAnimHumanoid43.addSites(HAnimSite1918)
HAnimSite1919 = x3d.HAnimSite()
HAnimSite1919.setContainerFieldOverride("sites")
HAnimSite1919.setUSE("hanim_r_metatarsal_phalanx_5_pt")

HAnimHumanoid43.addSites(HAnimSite1919)
HAnimSite1920 = x3d.HAnimSite()
HAnimSite1920.setContainerFieldOverride("sites")
HAnimSite1920.setUSE("hanim_r_tarsal_distal_phalanx_5_tip")

HAnimHumanoid43.addSites(HAnimSite1920)
HAnimSite1921 = x3d.HAnimSite()
HAnimSite1921.setContainerFieldOverride("sites")
HAnimSite1921.setUSE("hanim_l_rib10_pt")

HAnimHumanoid43.addSites(HAnimSite1921)
HAnimSite1922 = x3d.HAnimSite()
HAnimSite1922.setContainerFieldOverride("sites")
HAnimSite1922.setUSE("hanim_r_rib10_pt")

HAnimHumanoid43.addSites(HAnimSite1922)
HAnimSite1923 = x3d.HAnimSite()
HAnimSite1923.setContainerFieldOverride("sites")
HAnimSite1923.setUSE("hanim_spine_2_middle_back_pt")

HAnimHumanoid43.addSites(HAnimSite1923)
HAnimSite1924 = x3d.HAnimSite()
HAnimSite1924.setContainerFieldOverride("sites")
HAnimSite1924.setUSE("hanim_substernale_pt")

HAnimHumanoid43.addSites(HAnimSite1924)
HAnimSite1925 = x3d.HAnimSite()
HAnimSite1925.setContainerFieldOverride("sites")
HAnimSite1925.setUSE("hanim_l_thelion_pt")

HAnimHumanoid43.addSites(HAnimSite1925)
HAnimSite1926 = x3d.HAnimSite()
HAnimSite1926.setContainerFieldOverride("sites")
HAnimSite1926.setUSE("hanim_r_thelion_pt")

HAnimHumanoid43.addSites(HAnimSite1926)
HAnimSite1927 = x3d.HAnimSite()
HAnimSite1927.setContainerFieldOverride("sites")
HAnimSite1927.setUSE("hanim_l_chest_midsagittal_plane_pt")

HAnimHumanoid43.addSites(HAnimSite1927)
HAnimSite1928 = x3d.HAnimSite()
HAnimSite1928.setContainerFieldOverride("sites")
HAnimSite1928.setUSE("hanim_mesosternale_pt")

HAnimHumanoid43.addSites(HAnimSite1928)
HAnimSite1929 = x3d.HAnimSite()
HAnimSite1929.setContainerFieldOverride("sites")
HAnimSite1929.setUSE("hanim_r_chest_midsagittal_plane_pt")

HAnimHumanoid43.addSites(HAnimSite1929)
HAnimSite1930 = x3d.HAnimSite()
HAnimSite1930.setContainerFieldOverride("sites")
HAnimSite1930.setUSE("hanim_rear_center_midsagittal_plane_pt")

HAnimHumanoid43.addSites(HAnimSite1930)
HAnimSite1931 = x3d.HAnimSite()
HAnimSite1931.setContainerFieldOverride("sites")
HAnimSite1931.setUSE("hanim_spine_1_middle_back_pt")

HAnimHumanoid43.addSites(HAnimSite1931)
HAnimSite1932 = x3d.HAnimSite()
HAnimSite1932.setContainerFieldOverride("sites")
HAnimSite1932.setUSE("hanim_cervicale_pt")

HAnimHumanoid43.addSites(HAnimSite1932)
HAnimSite1933 = x3d.HAnimSite()
HAnimSite1933.setContainerFieldOverride("sites")
HAnimSite1933.setUSE("hanim_suprasternale_pt")

HAnimHumanoid43.addSites(HAnimSite1933)
HAnimSite1934 = x3d.HAnimSite()
HAnimSite1934.setContainerFieldOverride("sites")
HAnimSite1934.setUSE("hanim_l_neck_base_pt")

HAnimHumanoid43.addSites(HAnimSite1934)
HAnimSite1935 = x3d.HAnimSite()
HAnimSite1935.setContainerFieldOverride("sites")
HAnimSite1935.setUSE("hanim_r_neck_base_pt")

HAnimHumanoid43.addSites(HAnimSite1935)
HAnimSite1936 = x3d.HAnimSite()
HAnimSite1936.setContainerFieldOverride("sites")
HAnimSite1936.setUSE("hanim_l_acromion_pt")

HAnimHumanoid43.addSites(HAnimSite1936)
HAnimSite1937 = x3d.HAnimSite()
HAnimSite1937.setContainerFieldOverride("sites")
HAnimSite1937.setUSE("hanim_l_axilla_distal_pt")

HAnimHumanoid43.addSites(HAnimSite1937)
HAnimSite1938 = x3d.HAnimSite()
HAnimSite1938.setContainerFieldOverride("sites")
HAnimSite1938.setUSE("hanim_l_axilla_posterior_folds_pt")

HAnimHumanoid43.addSites(HAnimSite1938)
HAnimSite1939 = x3d.HAnimSite()
HAnimSite1939.setContainerFieldOverride("sites")
HAnimSite1939.setUSE("hanim_l_axilla_proximal_pt")

HAnimHumanoid43.addSites(HAnimSite1939)
HAnimSite1940 = x3d.HAnimSite()
HAnimSite1940.setContainerFieldOverride("sites")
HAnimSite1940.setUSE("hanim_l_clavicale_pt")

HAnimHumanoid43.addSites(HAnimSite1940)
HAnimSite1941 = x3d.HAnimSite()
HAnimSite1941.setContainerFieldOverride("sites")
HAnimSite1941.setUSE("hanim_r_acromion_pt")

HAnimHumanoid43.addSites(HAnimSite1941)
HAnimSite1942 = x3d.HAnimSite()
HAnimSite1942.setContainerFieldOverride("sites")
HAnimSite1942.setUSE("hanim_r_axilla_distal_pt")

HAnimHumanoid43.addSites(HAnimSite1942)
HAnimSite1943 = x3d.HAnimSite()
HAnimSite1943.setContainerFieldOverride("sites")
HAnimSite1943.setUSE("hanim_r_axilla_posterior_folds_pt")

HAnimHumanoid43.addSites(HAnimSite1943)
HAnimSite1944 = x3d.HAnimSite()
HAnimSite1944.setContainerFieldOverride("sites")
HAnimSite1944.setUSE("hanim_r_axilla_proximal_pt")

HAnimHumanoid43.addSites(HAnimSite1944)
HAnimSite1945 = x3d.HAnimSite()
HAnimSite1945.setContainerFieldOverride("sites")
HAnimSite1945.setUSE("hanim_r_clavicale_pt")

HAnimHumanoid43.addSites(HAnimSite1945)
HAnimSite1946 = x3d.HAnimSite()
HAnimSite1946.setContainerFieldOverride("sites")
HAnimSite1946.setUSE("hanim_adams_apple_pt")

HAnimHumanoid43.addSites(HAnimSite1946)
HAnimSite1947 = x3d.HAnimSite()
HAnimSite1947.setContainerFieldOverride("sites")
HAnimSite1947.setUSE("hanim_glabella_pt")

HAnimHumanoid43.addSites(HAnimSite1947)
HAnimSite1948 = x3d.HAnimSite()
HAnimSite1948.setContainerFieldOverride("sites")
HAnimSite1948.setUSE("hanim_l_ectocanthus_pt")

HAnimHumanoid43.addSites(HAnimSite1948)
HAnimSite1949 = x3d.HAnimSite()
HAnimSite1949.setContainerFieldOverride("sites")
HAnimSite1949.setUSE("hanim_l_infraorbitale_pt")

HAnimHumanoid43.addSites(HAnimSite1949)
HAnimSite1950 = x3d.HAnimSite()
HAnimSite1950.setContainerFieldOverride("sites")
HAnimSite1950.setUSE("hanim_l_tragion_pt")

HAnimHumanoid43.addSites(HAnimSite1950)
HAnimSite1951 = x3d.HAnimSite()
HAnimSite1951.setContainerFieldOverride("sites")
HAnimSite1951.setUSE("hanim_nuchale_pt")

HAnimHumanoid43.addSites(HAnimSite1951)
HAnimSite1952 = x3d.HAnimSite()
HAnimSite1952.setContainerFieldOverride("sites")
HAnimSite1952.setUSE("hanim_opisthocranion_pt")

HAnimHumanoid43.addSites(HAnimSite1952)
HAnimSite1953 = x3d.HAnimSite()
HAnimSite1953.setContainerFieldOverride("sites")
HAnimSite1953.setUSE("hanim_r_ectocanthus_pt")

HAnimHumanoid43.addSites(HAnimSite1953)
HAnimSite1954 = x3d.HAnimSite()
HAnimSite1954.setContainerFieldOverride("sites")
HAnimSite1954.setUSE("hanim_r_infraorbitale_pt")

HAnimHumanoid43.addSites(HAnimSite1954)
HAnimSite1955 = x3d.HAnimSite()
HAnimSite1955.setContainerFieldOverride("sites")
HAnimSite1955.setUSE("hanim_r_tragion_pt")

HAnimHumanoid43.addSites(HAnimSite1955)
HAnimSite1956 = x3d.HAnimSite()
HAnimSite1956.setContainerFieldOverride("sites")
HAnimSite1956.setUSE("hanim_sellion_pt")

HAnimHumanoid43.addSites(HAnimSite1956)
HAnimSite1957 = x3d.HAnimSite()
HAnimSite1957.setContainerFieldOverride("sites")
HAnimSite1957.setUSE("hanim_skull_vertex_pt")

HAnimHumanoid43.addSites(HAnimSite1957)
HAnimSite1958 = x3d.HAnimSite()
HAnimSite1958.setContainerFieldOverride("sites")
HAnimSite1958.setUSE("hanim_l_gonion_pt")

HAnimHumanoid43.addSites(HAnimSite1958)
HAnimSite1959 = x3d.HAnimSite()
HAnimSite1959.setContainerFieldOverride("sites")
HAnimSite1959.setUSE("hanim_menton_pt")

HAnimHumanoid43.addSites(HAnimSite1959)
HAnimSite1960 = x3d.HAnimSite()
HAnimSite1960.setContainerFieldOverride("sites")
HAnimSite1960.setUSE("hanim_r_gonion_pt")

HAnimHumanoid43.addSites(HAnimSite1960)
HAnimSite1961 = x3d.HAnimSite()
HAnimSite1961.setContainerFieldOverride("sites")
HAnimSite1961.setUSE("hanim_supramenton_pt")

HAnimHumanoid43.addSites(HAnimSite1961)
HAnimSite1962 = x3d.HAnimSite()
HAnimSite1962.setContainerFieldOverride("sites")
HAnimSite1962.setUSE("hanim_l_bideltoid_pt")

HAnimHumanoid43.addSites(HAnimSite1962)
HAnimSite1963 = x3d.HAnimSite()
HAnimSite1963.setContainerFieldOverride("sites")
HAnimSite1963.setUSE("hanim_l_humeral_lateral_epicondyles_pt")

HAnimHumanoid43.addSites(HAnimSite1963)
HAnimSite1964 = x3d.HAnimSite()
HAnimSite1964.setContainerFieldOverride("sites")
HAnimSite1964.setUSE("hanim_l_humeral_medial_epicondyles_pt")

HAnimHumanoid43.addSites(HAnimSite1964)
HAnimSite1965 = x3d.HAnimSite()
HAnimSite1965.setContainerFieldOverride("sites")
HAnimSite1965.setUSE("hanim_l_olecranon_pt")

HAnimHumanoid43.addSites(HAnimSite1965)
HAnimSite1966 = x3d.HAnimSite()
HAnimSite1966.setContainerFieldOverride("sites")
HAnimSite1966.setUSE("hanim_l_radial_styloid_pt")

HAnimHumanoid43.addSites(HAnimSite1966)
HAnimSite1967 = x3d.HAnimSite()
HAnimSite1967.setContainerFieldOverride("sites")
HAnimSite1967.setUSE("hanim_l_radiale_pt")

HAnimHumanoid43.addSites(HAnimSite1967)
HAnimSite1968 = x3d.HAnimSite()
HAnimSite1968.setContainerFieldOverride("sites")
HAnimSite1968.setUSE("hanim_l_ulnar_styloid_pt")

HAnimHumanoid43.addSites(HAnimSite1968)
HAnimSite1969 = x3d.HAnimSite()
HAnimSite1969.setContainerFieldOverride("sites")
HAnimSite1969.setUSE("hanim_l_carpal_distal_phalanx_1_tip")

HAnimHumanoid43.addSites(HAnimSite1969)
HAnimSite1970 = x3d.HAnimSite()
HAnimSite1970.setContainerFieldOverride("sites")
HAnimSite1970.setUSE("hanim_l_metacarpal_phalanx_2_pt")

HAnimHumanoid43.addSites(HAnimSite1970)
HAnimSite1971 = x3d.HAnimSite()
HAnimSite1971.setContainerFieldOverride("sites")
HAnimSite1971.setUSE("hanim_l_carpal_distal_phalanx_2_tip")

HAnimHumanoid43.addSites(HAnimSite1971)
HAnimSite1972 = x3d.HAnimSite()
HAnimSite1972.setContainerFieldOverride("sites")
HAnimSite1972.setUSE("hanim_l_dactylion_pt")

HAnimHumanoid43.addSites(HAnimSite1972)
HAnimSite1973 = x3d.HAnimSite()
HAnimSite1973.setContainerFieldOverride("sites")
HAnimSite1973.setUSE("hanim_l_metacarpal_phalanx_3_pt")

HAnimHumanoid43.addSites(HAnimSite1973)
HAnimSite1974 = x3d.HAnimSite()
HAnimSite1974.setContainerFieldOverride("sites")
HAnimSite1974.setUSE("hanim_l_carpal_distal_phalanx_3_tip")

HAnimHumanoid43.addSites(HAnimSite1974)
HAnimSite1975 = x3d.HAnimSite()
HAnimSite1975.setContainerFieldOverride("sites")
HAnimSite1975.setUSE("hanim_l_metacarpal_phalanx_5_pt")

HAnimHumanoid43.addSites(HAnimSite1975)
HAnimSite1976 = x3d.HAnimSite()
HAnimSite1976.setContainerFieldOverride("sites")
HAnimSite1976.setUSE("hanim_l_carpal_distal_phalanx_4_tip")

HAnimHumanoid43.addSites(HAnimSite1976)
HAnimSite1977 = x3d.HAnimSite()
HAnimSite1977.setContainerFieldOverride("sites")
HAnimSite1977.setUSE("hanim_l_carpal_distal_phalanx_5_tip")

HAnimHumanoid43.addSites(HAnimSite1977)
HAnimSite1978 = x3d.HAnimSite()
HAnimSite1978.setContainerFieldOverride("sites")
HAnimSite1978.setUSE("hanim_r_bideltoid_pt")

HAnimHumanoid43.addSites(HAnimSite1978)
HAnimSite1979 = x3d.HAnimSite()
HAnimSite1979.setContainerFieldOverride("sites")
HAnimSite1979.setUSE("hanim_r_humeral_lateral_epicondyles_pt")

HAnimHumanoid43.addSites(HAnimSite1979)
HAnimSite1980 = x3d.HAnimSite()
HAnimSite1980.setContainerFieldOverride("sites")
HAnimSite1980.setUSE("hanim_r_humeral_medial_epicondyles_pt")

HAnimHumanoid43.addSites(HAnimSite1980)
HAnimSite1981 = x3d.HAnimSite()
HAnimSite1981.setContainerFieldOverride("sites")
HAnimSite1981.setUSE("hanim_r_olecranon_pt")

HAnimHumanoid43.addSites(HAnimSite1981)
HAnimSite1982 = x3d.HAnimSite()
HAnimSite1982.setContainerFieldOverride("sites")
HAnimSite1982.setUSE("hanim_r_radial_styloid_pt")

HAnimHumanoid43.addSites(HAnimSite1982)
HAnimSite1983 = x3d.HAnimSite()
HAnimSite1983.setContainerFieldOverride("sites")
HAnimSite1983.setUSE("hanim_r_radiale_pt")

HAnimHumanoid43.addSites(HAnimSite1983)
HAnimSite1984 = x3d.HAnimSite()
HAnimSite1984.setContainerFieldOverride("sites")
HAnimSite1984.setUSE("hanim_r_ulnar_styloid_pt")

HAnimHumanoid43.addSites(HAnimSite1984)
HAnimSite1985 = x3d.HAnimSite()
HAnimSite1985.setContainerFieldOverride("sites")
HAnimSite1985.setUSE("hanim_r_carpal_distal_phalanx_1_tip")

HAnimHumanoid43.addSites(HAnimSite1985)
HAnimSite1986 = x3d.HAnimSite()
HAnimSite1986.setContainerFieldOverride("sites")
HAnimSite1986.setUSE("hanim_r_metacarpal_phalanx_2_pt")

HAnimHumanoid43.addSites(HAnimSite1986)
HAnimSite1987 = x3d.HAnimSite()
HAnimSite1987.setContainerFieldOverride("sites")
HAnimSite1987.setUSE("hanim_r_carpal_distal_phalanx_2_tip")

HAnimHumanoid43.addSites(HAnimSite1987)
HAnimSite1988 = x3d.HAnimSite()
HAnimSite1988.setContainerFieldOverride("sites")
HAnimSite1988.setUSE("hanim_r_dactylion_pt")

HAnimHumanoid43.addSites(HAnimSite1988)
HAnimSite1989 = x3d.HAnimSite()
HAnimSite1989.setContainerFieldOverride("sites")
HAnimSite1989.setUSE("hanim_r_metacarpal_phalanx_3_pt")

HAnimHumanoid43.addSites(HAnimSite1989)
HAnimSite1990 = x3d.HAnimSite()
HAnimSite1990.setContainerFieldOverride("sites")
HAnimSite1990.setUSE("hanim_r_carpal_distal_phalanx_3_tip")

HAnimHumanoid43.addSites(HAnimSite1990)
HAnimSite1991 = x3d.HAnimSite()
HAnimSite1991.setContainerFieldOverride("sites")
HAnimSite1991.setUSE("hanim_r_metacarpal_phalanx_5_pt")

HAnimHumanoid43.addSites(HAnimSite1991)
HAnimSite1992 = x3d.HAnimSite()
HAnimSite1992.setContainerFieldOverride("sites")
HAnimSite1992.setUSE("hanim_r_carpal_distal_phalanx_4_tip")

HAnimHumanoid43.addSites(HAnimSite1992)
HAnimSite1993 = x3d.HAnimSite()
HAnimSite1993.setContainerFieldOverride("sites")
HAnimSite1993.setUSE("hanim_r_carpal_distal_phalanx_5_tip")

HAnimHumanoid43.addSites(HAnimSite1993)

Scene11.addChildren(HAnimHumanoid43)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/JohnJoint20.new.python.x3d")
X3D0.toFileJSON("../data/JohnJoint20.new.python.json")
