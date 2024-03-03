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
meta3.setContent("Humanoid1.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("identifier")
meta4.setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid1.x3d")

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
meta7.setContent("14 Jan 2023")

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
ImageTexture49.setDescription("Blue Spiral Pattern")
ImageTexture49.setUrl(["./data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"])

Appearance48.setTexture(ImageTexture49)
Material50 = x3d.Material()
Material50.setDEF("SkinMaterial")
Material50.setAmbientIntensity(0.6)
Material50.setDiffuseColor([1,1,1])
Material50.setShininess(0.6)
Material50.setTransparency(0.2)

Appearance48.setMaterial(Material50)

Shape44.setAppearance(Appearance48)

HAnimHumanoid43.setSkin(Shape44)
Coordinate51 = x3d.Coordinate()
Coordinate51.setUSE("TheSkinCoord")

HAnimHumanoid43.setSkinCoord(Coordinate51)
HAnimJoint52 = x3d.HAnimJoint()
HAnimJoint52.setName("humanoid_root")
HAnimJoint52.setDEF("hanim_humanoid_root")
HAnimJoint52.setCenter([0,0.824,0.0277])
HAnimJoint52.setUlimit([0,0,0])
HAnimJoint52.setLlimit([0,0,0])
HAnimSegment53 = x3d.HAnimSegment()
HAnimSegment53.setName("sacrum")
HAnimSegment53.setDEF("hanim_sacrum")
Transform54 = x3d.Transform()
Transform54.setTranslation([0,0.824,0.0277])
Transform55 = x3d.Transform()
#Empty Transform
Shape56 = x3d.Shape()
Shape56.setUSE("HAnimJointShape")

Transform55.addChild(Shape56)

Transform54.addChildren(Transform55)

HAnimSegment53.addChildren(Transform54)
Shape57 = x3d.Shape()
LineSet58 = x3d.LineSet()
LineSet58.setVertexCount([2])
Coordinate59 = x3d.Coordinate()
Coordinate59.setPoint([0,0.824,0.0277,0,0.9149,0.0016])

LineSet58.setCoord(Coordinate59)
#from humanoid_root to sacroiliac vertices 2
ColorRGBA60 = x3d.ColorRGBA()
ColorRGBA60.setUSE("HAnimSegmentLineColorRGBA")

LineSet58.setColor(ColorRGBA60)

Shape57.setGeometry(LineSet58)

HAnimSegment53.addChildren(Shape57)
HAnimSite61 = x3d.HAnimSite()
HAnimSite61.setName("buttocks_standing_wall_contact_point")
HAnimSite61.setDEF("hanim_buttocks_standing_wall_contact_point")
TouchSensor62 = x3d.TouchSensor()
TouchSensor62.setDescription("HAnimSite buttocks_standing_wall_contact_point")

HAnimSite61.addChildren(TouchSensor62)
Shape63 = x3d.Shape()
Shape63.setUSE("HAnimSiteShape")

HAnimSite61.addChildren(Shape63)

HAnimSegment53.addChildren(HAnimSite61)
HAnimSite64 = x3d.HAnimSite()
HAnimSite64.setName("crotch")
HAnimSite64.setDEF("hanim_crotch")
HAnimSite64.setTranslation([0.0034,0.8266,0.0257])
TouchSensor65 = x3d.TouchSensor()
TouchSensor65.setDescription("HAnimSite crotch")

HAnimSite64.addChildren(TouchSensor65)
Shape66 = x3d.Shape()
Shape66.setUSE("HAnimSiteShape")

HAnimSite64.addChildren(Shape66)

HAnimSegment53.addChildren(HAnimSite64)
HAnimSite67 = x3d.HAnimSite()
HAnimSite67.setName("l_asis")
HAnimSite67.setDEF("hanim_l_asis")
HAnimSite67.setTranslation([0.0925,0.9983,0.1052])
TouchSensor68 = x3d.TouchSensor()
TouchSensor68.setDescription("HAnimSite l_asis")

HAnimSite67.addChildren(TouchSensor68)
Shape69 = x3d.Shape()
Shape69.setUSE("HAnimSiteShape")

HAnimSite67.addChildren(Shape69)

HAnimSegment53.addChildren(HAnimSite67)
HAnimSite70 = x3d.HAnimSite()
HAnimSite70.setName("l_iliocristale")
HAnimSite70.setDEF("hanim_l_iliocristale")
HAnimSite70.setTranslation([0.1612,1.0537,0.0008])
TouchSensor71 = x3d.TouchSensor()
TouchSensor71.setDescription("HAnimSite l_iliocristale")

HAnimSite70.addChildren(TouchSensor71)
Shape72 = x3d.Shape()
Shape72.setUSE("HAnimSiteShape")

HAnimSite70.addChildren(Shape72)

HAnimSegment53.addChildren(HAnimSite70)
HAnimSite73 = x3d.HAnimSite()
HAnimSite73.setName("l_psis")
HAnimSite73.setDEF("hanim_l_psis")
HAnimSite73.setTranslation([0.0774,1.019,-0.1151])
TouchSensor74 = x3d.TouchSensor()
TouchSensor74.setDescription("HAnimSite l_psis")

HAnimSite73.addChildren(TouchSensor74)
Shape75 = x3d.Shape()
Shape75.setUSE("HAnimSiteShape")

HAnimSite73.addChildren(Shape75)

HAnimSegment53.addChildren(HAnimSite73)
HAnimSite76 = x3d.HAnimSite()
HAnimSite76.setName("l_trochanterion")
HAnimSite76.setDEF("hanim_l_trochanterion")
HAnimSite76.setTranslation([0.1677,0.8336,0.0303])
TouchSensor77 = x3d.TouchSensor()
TouchSensor77.setDescription("HAnimSite l_trochanterion")

HAnimSite76.addChildren(TouchSensor77)
Shape78 = x3d.Shape()
Shape78.setUSE("HAnimSiteShape")

HAnimSite76.addChildren(Shape78)

HAnimSegment53.addChildren(HAnimSite76)
HAnimSite79 = x3d.HAnimSite()
HAnimSite79.setName("r_asis")
HAnimSite79.setDEF("hanim_r_asis")
HAnimSite79.setTranslation([-0.0887,1.0021,0.1112])
TouchSensor80 = x3d.TouchSensor()
TouchSensor80.setDescription("HAnimSite r_asis")

HAnimSite79.addChildren(TouchSensor80)
Shape81 = x3d.Shape()
Shape81.setUSE("HAnimSiteShape")

HAnimSite79.addChildren(Shape81)

HAnimSegment53.addChildren(HAnimSite79)
HAnimSite82 = x3d.HAnimSite()
HAnimSite82.setName("r_iliocristale")
HAnimSite82.setDEF("hanim_r_iliocristale")
HAnimSite82.setTranslation([-0.1525,1.0628,0.0035])
TouchSensor83 = x3d.TouchSensor()
TouchSensor83.setDescription("HAnimSite r_iliocristale")

HAnimSite82.addChildren(TouchSensor83)
Shape84 = x3d.Shape()
Shape84.setUSE("HAnimSiteShape")

HAnimSite82.addChildren(Shape84)

HAnimSegment53.addChildren(HAnimSite82)
HAnimSite85 = x3d.HAnimSite()
HAnimSite85.setName("r_psis")
HAnimSite85.setDEF("hanim_r_psis")
HAnimSite85.setTranslation([-0.0716,1.019,-0.1138])
TouchSensor86 = x3d.TouchSensor()
TouchSensor86.setDescription("HAnimSite r_psis")

HAnimSite85.addChildren(TouchSensor86)
Shape87 = x3d.Shape()
Shape87.setUSE("HAnimSiteShape")

HAnimSite85.addChildren(Shape87)

HAnimSegment53.addChildren(HAnimSite85)
HAnimSite88 = x3d.HAnimSite()
HAnimSite88.setName("r_trochanterion")
HAnimSite88.setDEF("hanim_r_trochanterion")
HAnimSite88.setTranslation([-0.1689,0.8419,0.0352])
TouchSensor89 = x3d.TouchSensor()
TouchSensor89.setDescription("HAnimSite r_trochanterion")

HAnimSite88.addChildren(TouchSensor89)
Shape90 = x3d.Shape()
Shape90.setUSE("HAnimSiteShape")

HAnimSite88.addChildren(Shape90)

HAnimSegment53.addChildren(HAnimSite88)
Shape91 = x3d.Shape()
LineSet92 = x3d.LineSet()
LineSet92.setVertexCount([2])
Coordinate93 = x3d.Coordinate()
Coordinate93.setPoint([0,0.824,0.0277,0.0028,1.0568,-0.0776])

LineSet92.setCoord(Coordinate93)
#from humanoid_root to vl5 vertices 2
ColorRGBA94 = x3d.ColorRGBA()
ColorRGBA94.setUSE("HAnimSegmentLineColorRGBA")

LineSet92.setColor(ColorRGBA94)

Shape91.setGeometry(LineSet92)

HAnimSegment53.addChildren(Shape91)
HAnimSite95 = x3d.HAnimSite()
HAnimSite95.setName("adams_apple")
HAnimSite95.setDEF("hanim_adams_apple")
TouchSensor96 = x3d.TouchSensor()
TouchSensor96.setDescription("HAnimSite adams_apple")

HAnimSite95.addChildren(TouchSensor96)
Shape97 = x3d.Shape()
Shape97.setUSE("HAnimSiteShape")

HAnimSite95.addChildren(Shape97)

HAnimSegment53.addChildren(HAnimSite95)
HAnimSite98 = x3d.HAnimSite()
HAnimSite98.setName("cervicale")
HAnimSite98.setDEF("hanim_cervicale")
HAnimSite98.setTranslation([0.0064,1.52,-0.0815])
TouchSensor99 = x3d.TouchSensor()
TouchSensor99.setDescription("HAnimSite cervicale")

HAnimSite98.addChildren(TouchSensor99)
Shape100 = x3d.Shape()
Shape100.setUSE("HAnimSiteShape")

HAnimSite98.addChildren(Shape100)

HAnimSegment53.addChildren(HAnimSite98)
HAnimSite101 = x3d.HAnimSite()
HAnimSite101.setName("l_acromion")
HAnimSite101.setDEF("hanim_l_acromion")
HAnimSite101.setTranslation([0.2032,1.476,-0.049])
TouchSensor102 = x3d.TouchSensor()
TouchSensor102.setDescription("HAnimSite l_acromion")

HAnimSite101.addChildren(TouchSensor102)
Shape103 = x3d.Shape()
Shape103.setUSE("HAnimSiteShape")

HAnimSite101.addChildren(Shape103)

HAnimSegment53.addChildren(HAnimSite101)
HAnimSite104 = x3d.HAnimSite()
HAnimSite104.setName("l_axilla_distal_pt")
HAnimSite104.setDEF("hanim_l_axilla_distal_pt")
HAnimSite104.setTranslation([0.1706,1.4072,-0.0875])
TouchSensor105 = x3d.TouchSensor()
TouchSensor105.setDescription("HAnimSite l_axilla_distal_pt")

HAnimSite104.addChildren(TouchSensor105)
Shape106 = x3d.Shape()
Shape106.setUSE("HAnimSiteShape")

HAnimSite104.addChildren(Shape106)

HAnimSegment53.addChildren(HAnimSite104)
HAnimSite107 = x3d.HAnimSite()
HAnimSite107.setName("l_axilla_posterior_folds")
HAnimSite107.setDEF("hanim_l_axilla_posterior_folds")
TouchSensor108 = x3d.TouchSensor()
TouchSensor108.setDescription("HAnimSite l_axilla_posterior_folds")

HAnimSite107.addChildren(TouchSensor108)
Shape109 = x3d.Shape()
Shape109.setUSE("HAnimSiteShape")

HAnimSite107.addChildren(Shape109)

HAnimSegment53.addChildren(HAnimSite107)
HAnimSite110 = x3d.HAnimSite()
HAnimSite110.setName("l_axilla_proximal")
HAnimSite110.setDEF("hanim_l_axilla_proximal")
HAnimSite110.setTranslation([0.1777,1.4065,-0.0075])
TouchSensor111 = x3d.TouchSensor()
TouchSensor111.setDescription("HAnimSite l_axilla_proximal")

HAnimSite110.addChildren(TouchSensor111)
Shape112 = x3d.Shape()
Shape112.setUSE("HAnimSiteShape")

HAnimSite110.addChildren(Shape112)

HAnimSegment53.addChildren(HAnimSite110)
HAnimSite113 = x3d.HAnimSite()
HAnimSite113.setName("l_chest_midsagittal_plane")
HAnimSite113.setDEF("hanim_l_chest_midsagittal_plane")
TouchSensor114 = x3d.TouchSensor()
TouchSensor114.setDescription("HAnimSite l_chest_midsagittal_plane")

HAnimSite113.addChildren(TouchSensor114)
Shape115 = x3d.Shape()
Shape115.setUSE("HAnimSiteShape")

HAnimSite113.addChildren(Shape115)

HAnimSegment53.addChildren(HAnimSite113)
HAnimSite116 = x3d.HAnimSite()
HAnimSite116.setName("l_clavicale")
HAnimSite116.setDEF("hanim_l_clavicale")
HAnimSite116.setTranslation([0.0271,1.4943,0.0394])
TouchSensor117 = x3d.TouchSensor()
TouchSensor117.setDescription("HAnimSite l_clavicale")

HAnimSite116.addChildren(TouchSensor117)
Shape118 = x3d.Shape()
Shape118.setUSE("HAnimSiteShape")

HAnimSite116.addChildren(Shape118)

HAnimSegment53.addChildren(HAnimSite116)
HAnimSite119 = x3d.HAnimSite()
HAnimSite119.setName("l_neck_base")
HAnimSite119.setDEF("hanim_l_neck_base")
HAnimSite119.setTranslation([0.0646,1.5141,-0.038])
TouchSensor120 = x3d.TouchSensor()
TouchSensor120.setDescription("HAnimSite l_neck_base")

HAnimSite119.addChildren(TouchSensor120)
Shape121 = x3d.Shape()
Shape121.setUSE("HAnimSiteShape")

HAnimSite119.addChildren(Shape121)

HAnimSegment53.addChildren(HAnimSite119)
HAnimSite122 = x3d.HAnimSite()
HAnimSite122.setName("l_rib10")
HAnimSite122.setDEF("hanim_l_rib10")
HAnimSite122.setTranslation([0.0871,1.1925,0.0992])
TouchSensor123 = x3d.TouchSensor()
TouchSensor123.setDescription("HAnimSite l_rib10")

HAnimSite122.addChildren(TouchSensor123)
Shape124 = x3d.Shape()
Shape124.setUSE("HAnimSiteShape")

HAnimSite122.addChildren(Shape124)

HAnimSegment53.addChildren(HAnimSite122)
HAnimSite125 = x3d.HAnimSite()
HAnimSite125.setName("l_thelion")
HAnimSite125.setDEF("hanim_l_thelion")
HAnimSite125.setTranslation([0.0918,1.3382,0.1192])
TouchSensor126 = x3d.TouchSensor()
TouchSensor126.setDescription("HAnimSite l_thelion")

HAnimSite125.addChildren(TouchSensor126)
Shape127 = x3d.Shape()
Shape127.setUSE("HAnimSiteShape")

HAnimSite125.addChildren(Shape127)

HAnimSegment53.addChildren(HAnimSite125)
HAnimSite128 = x3d.HAnimSite()
HAnimSite128.setName("mesosternale")
HAnimSite128.setDEF("hanim_mesosternale")
TouchSensor129 = x3d.TouchSensor()
TouchSensor129.setDescription("HAnimSite mesosternale")

HAnimSite128.addChildren(TouchSensor129)
Shape130 = x3d.Shape()
Shape130.setUSE("HAnimSiteShape")

HAnimSite128.addChildren(Shape130)

HAnimSegment53.addChildren(HAnimSite128)
HAnimSite131 = x3d.HAnimSite()
HAnimSite131.setName("navel")
HAnimSite131.setDEF("hanim_navel")
HAnimSite131.setTranslation([0.0069,1.0966,0.1017])
TouchSensor132 = x3d.TouchSensor()
TouchSensor132.setDescription("HAnimSite navel")

HAnimSite131.addChildren(TouchSensor132)
Shape133 = x3d.Shape()
Shape133.setUSE("HAnimSiteShape")

HAnimSite131.addChildren(Shape133)

HAnimSegment53.addChildren(HAnimSite131)
HAnimSite134 = x3d.HAnimSite()
HAnimSite134.setName("r_acromion")
HAnimSite134.setDEF("hanim_r_acromion")
HAnimSite134.setTranslation([-0.1905,1.4791,-0.0431])
TouchSensor135 = x3d.TouchSensor()
TouchSensor135.setDescription("HAnimSite r_acromion")

HAnimSite134.addChildren(TouchSensor135)
Shape136 = x3d.Shape()
Shape136.setUSE("HAnimSiteShape")

HAnimSite134.addChildren(Shape136)

HAnimSegment53.addChildren(HAnimSite134)
HAnimSite137 = x3d.HAnimSite()
HAnimSite137.setName("r_axilla_distal_pt")
HAnimSite137.setDEF("hanim_r_axilla_distal_pt")
HAnimSite137.setTranslation([-0.1603,1.4098,-0.0826])
TouchSensor138 = x3d.TouchSensor()
TouchSensor138.setDescription("HAnimSite r_axilla_distal_pt")

HAnimSite137.addChildren(TouchSensor138)
Shape139 = x3d.Shape()
Shape139.setUSE("HAnimSiteShape")

HAnimSite137.addChildren(Shape139)

HAnimSegment53.addChildren(HAnimSite137)
HAnimSite140 = x3d.HAnimSite()
HAnimSite140.setName("r_axilla_posterior_folds")
HAnimSite140.setDEF("hanim_r_axilla_posterior_folds")
TouchSensor141 = x3d.TouchSensor()
TouchSensor141.setDescription("HAnimSite r_axilla_posterior_folds")

HAnimSite140.addChildren(TouchSensor141)
Shape142 = x3d.Shape()
Shape142.setUSE("HAnimSiteShape")

HAnimSite140.addChildren(Shape142)

HAnimSegment53.addChildren(HAnimSite140)
HAnimSite143 = x3d.HAnimSite()
HAnimSite143.setName("r_axilla_proximal")
HAnimSite143.setDEF("hanim_r_axilla_proximal")
HAnimSite143.setTranslation([-0.1626,1.4072,-0.0031])
TouchSensor144 = x3d.TouchSensor()
TouchSensor144.setDescription("HAnimSite r_axilla_proximal")

HAnimSite143.addChildren(TouchSensor144)
Shape145 = x3d.Shape()
Shape145.setUSE("HAnimSiteShape")

HAnimSite143.addChildren(Shape145)

HAnimSegment53.addChildren(HAnimSite143)
HAnimSite146 = x3d.HAnimSite()
HAnimSite146.setName("r_chest_midsagittal_plane")
HAnimSite146.setDEF("hanim_r_chest_midsagittal_plane")
TouchSensor147 = x3d.TouchSensor()
TouchSensor147.setDescription("HAnimSite r_chest_midsagittal_plane")

HAnimSite146.addChildren(TouchSensor147)
Shape148 = x3d.Shape()
Shape148.setUSE("HAnimSiteShape")

HAnimSite146.addChildren(Shape148)

HAnimSegment53.addChildren(HAnimSite146)
HAnimSite149 = x3d.HAnimSite()
HAnimSite149.setName("r_clavicale")
HAnimSite149.setDEF("hanim_r_clavicale")
HAnimSite149.setTranslation([-0.0115,1.4943,0.04])
TouchSensor150 = x3d.TouchSensor()
TouchSensor150.setDescription("HAnimSite r_clavicale")

HAnimSite149.addChildren(TouchSensor150)
Shape151 = x3d.Shape()
Shape151.setUSE("HAnimSiteShape")

HAnimSite149.addChildren(Shape151)

HAnimSegment53.addChildren(HAnimSite149)
HAnimSite152 = x3d.HAnimSite()
HAnimSite152.setName("r_neck_base")
HAnimSite152.setDEF("hanim_r_neck_base")
HAnimSite152.setTranslation([-0.0419,1.5149,-0.022])
TouchSensor153 = x3d.TouchSensor()
TouchSensor153.setDescription("HAnimSite r_neck_base")

HAnimSite152.addChildren(TouchSensor153)
Shape154 = x3d.Shape()
Shape154.setUSE("HAnimSiteShape")

HAnimSite152.addChildren(Shape154)

HAnimSegment53.addChildren(HAnimSite152)
HAnimSite155 = x3d.HAnimSite()
HAnimSite155.setName("r_rib10")
HAnimSite155.setDEF("hanim_r_rib10")
HAnimSite155.setTranslation([-0.0711,1.1941,0.1016])
TouchSensor156 = x3d.TouchSensor()
TouchSensor156.setDescription("HAnimSite r_rib10")

HAnimSite155.addChildren(TouchSensor156)
Shape157 = x3d.Shape()
Shape157.setUSE("HAnimSiteShape")

HAnimSite155.addChildren(Shape157)

HAnimSegment53.addChildren(HAnimSite155)
HAnimSite158 = x3d.HAnimSite()
HAnimSite158.setName("r_thelion")
HAnimSite158.setDEF("hanim_r_thelion")
HAnimSite158.setTranslation([-0.0736,1.3385,0.1217])
TouchSensor159 = x3d.TouchSensor()
TouchSensor159.setDescription("HAnimSite r_thelion")

HAnimSite158.addChildren(TouchSensor159)
Shape160 = x3d.Shape()
Shape160.setUSE("HAnimSiteShape")

HAnimSite158.addChildren(Shape160)

HAnimSegment53.addChildren(HAnimSite158)
HAnimSite161 = x3d.HAnimSite()
HAnimSite161.setName("rear_center_midsagittal_plane")
HAnimSite161.setDEF("hanim_rear_center_midsagittal_plane")
TouchSensor162 = x3d.TouchSensor()
TouchSensor162.setDescription("HAnimSite rear_center_midsagittal_plane")

HAnimSite161.addChildren(TouchSensor162)
Shape163 = x3d.Shape()
Shape163.setUSE("HAnimSiteShape")

HAnimSite161.addChildren(Shape163)

HAnimSegment53.addChildren(HAnimSite161)
HAnimSite164 = x3d.HAnimSite()
HAnimSite164.setName("spine_1_middle_back")
HAnimSite164.setDEF("hanim_spine_1_middle_back")
TouchSensor165 = x3d.TouchSensor()
TouchSensor165.setDescription("HAnimSite spine_1_middle_back")

HAnimSite164.addChildren(TouchSensor165)
Shape166 = x3d.Shape()
Shape166.setUSE("HAnimSiteShape")

HAnimSite164.addChildren(Shape166)

HAnimSegment53.addChildren(HAnimSite164)
HAnimSite167 = x3d.HAnimSite()
HAnimSite167.setName("spine_2_middle_back")
HAnimSite167.setDEF("hanim_spine_2_middle_back")
TouchSensor168 = x3d.TouchSensor()
TouchSensor168.setDescription("HAnimSite spine_2_middle_back")

HAnimSite167.addChildren(TouchSensor168)
Shape169 = x3d.Shape()
Shape169.setUSE("HAnimSiteShape")

HAnimSite167.addChildren(Shape169)

HAnimSegment53.addChildren(HAnimSite167)
HAnimSite170 = x3d.HAnimSite()
HAnimSite170.setName("substernale")
HAnimSite170.setDEF("hanim_substernale")
HAnimSite170.setTranslation([0.0085,1.2995,0.1147])
TouchSensor171 = x3d.TouchSensor()
TouchSensor171.setDescription("HAnimSite substernale")

HAnimSite170.addChildren(TouchSensor171)
Shape172 = x3d.Shape()
Shape172.setUSE("HAnimSiteShape")

HAnimSite170.addChildren(Shape172)

HAnimSegment53.addChildren(HAnimSite170)
HAnimSite173 = x3d.HAnimSite()
HAnimSite173.setName("suprasternale")
HAnimSite173.setDEF("hanim_suprasternale")
HAnimSite173.setTranslation([0.0084,1.4714,0.0551])
TouchSensor174 = x3d.TouchSensor()
TouchSensor174.setDescription("HAnimSite suprasternale")

HAnimSite173.addChildren(TouchSensor174)
Shape175 = x3d.Shape()
Shape175.setUSE("HAnimSiteShape")

HAnimSite173.addChildren(Shape175)

HAnimSegment53.addChildren(HAnimSite173)
HAnimSite176 = x3d.HAnimSite()
HAnimSite176.setName("waist_preferred_anterior")
HAnimSite176.setDEF("hanim_waist_preferred_anterior")
TouchSensor177 = x3d.TouchSensor()
TouchSensor177.setDescription("HAnimSite waist_preferred_anterior")

HAnimSite176.addChildren(TouchSensor177)
Shape178 = x3d.Shape()
Shape178.setUSE("HAnimSiteShape")

HAnimSite176.addChildren(Shape178)

HAnimSegment53.addChildren(HAnimSite176)
HAnimSite179 = x3d.HAnimSite()
HAnimSite179.setName("waist_preferred_posterior")
HAnimSite179.setDEF("hanim_waist_preferred_posterior")
HAnimSite179.setTranslation([0.29,1.0915,-0.1091])
TouchSensor180 = x3d.TouchSensor()
TouchSensor180.setDescription("HAnimSite waist_preferred_posterior")

HAnimSite179.addChildren(TouchSensor180)
Shape181 = x3d.Shape()
Shape181.setUSE("HAnimSiteShape")

HAnimSite179.addChildren(Shape181)

HAnimSegment53.addChildren(HAnimSite179)

HAnimJoint52.addChildren(HAnimSegment53)
HAnimJoint182 = x3d.HAnimJoint()
HAnimJoint182.setName("sacroiliac")
HAnimJoint182.setDEF("hanim_sacroiliac")
HAnimJoint182.setCenter([0,0.9149,0.0016])
HAnimJoint182.setUlimit([0,0,0])
HAnimJoint182.setLlimit([0,0,0])
HAnimSegment183 = x3d.HAnimSegment()
HAnimSegment183.setName("pelvis")
HAnimSegment183.setDEF("hanim_pelvis")
Transform184 = x3d.Transform()
Transform184.setTranslation([0,0.9149,0.0016])
Transform185 = x3d.Transform()
#Empty Transform
Shape186 = x3d.Shape()
Shape186.setUSE("HAnimJointShape")

Transform185.addChild(Shape186)

Transform184.addChildren(Transform185)

HAnimSegment183.addChildren(Transform184)
Shape187 = x3d.Shape()
LineSet188 = x3d.LineSet()
LineSet188.setVertexCount([2])
Coordinate189 = x3d.Coordinate()
Coordinate189.setPoint([0,0.9149,0.0016,0.0961,0.9124,-0.0001])

LineSet188.setCoord(Coordinate189)
#from sacroiliac to l_hip vertices 2
ColorRGBA190 = x3d.ColorRGBA()
ColorRGBA190.setUSE("HAnimSegmentLineColorRGBA")

LineSet188.setColor(ColorRGBA190)

Shape187.setGeometry(LineSet188)

HAnimSegment183.addChildren(Shape187)
HAnimSite191 = x3d.HAnimSite()
HAnimSite191.setName("l_femoral_lateral_epicondyles")
HAnimSite191.setDEF("hanim_l_femoral_lateral_epicondyles")
HAnimSite191.setTranslation([0.1598,0.4967,0.0297])
TouchSensor192 = x3d.TouchSensor()
TouchSensor192.setDescription("HAnimSite l_femoral_lateral_epicondyles")

HAnimSite191.addChildren(TouchSensor192)
Shape193 = x3d.Shape()
Shape193.setUSE("HAnimSiteShape")

HAnimSite191.addChildren(Shape193)

HAnimSegment183.addChildren(HAnimSite191)
HAnimSite194 = x3d.HAnimSite()
HAnimSite194.setName("l_femoral_medial_epicondyles")
HAnimSite194.setDEF("hanim_l_femoral_medial_epicondyles")
HAnimSite194.setTranslation([0.0398,0.4946,0.0303])
TouchSensor195 = x3d.TouchSensor()
TouchSensor195.setDescription("HAnimSite l_femoral_medial_epicondyles")

HAnimSite194.addChildren(TouchSensor195)
Shape196 = x3d.Shape()
Shape196.setUSE("HAnimSiteShape")

HAnimSite194.addChildren(Shape196)

HAnimSegment183.addChildren(HAnimSite194)
HAnimSite197 = x3d.HAnimSite()
HAnimSite197.setName("l_knee_crease")
HAnimSite197.setDEF("hanim_l_knee_crease")
HAnimSite197.setTranslation([0.0993,0.4881,-0.0309])
TouchSensor198 = x3d.TouchSensor()
TouchSensor198.setDescription("HAnimSite l_knee_crease")

HAnimSite197.addChildren(TouchSensor198)
Shape199 = x3d.Shape()
Shape199.setUSE("HAnimSiteShape")

HAnimSite197.addChildren(Shape199)

HAnimSegment183.addChildren(HAnimSite197)
HAnimSite200 = x3d.HAnimSite()
HAnimSite200.setName("l_suprapatella")
HAnimSite200.setDEF("hanim_l_suprapatella")
TouchSensor201 = x3d.TouchSensor()
TouchSensor201.setDescription("HAnimSite l_suprapatella")

HAnimSite200.addChildren(TouchSensor201)
Shape202 = x3d.Shape()
Shape202.setUSE("HAnimSiteShape")

HAnimSite200.addChildren(Shape202)

HAnimSegment183.addChildren(HAnimSite200)
Shape203 = x3d.Shape()
LineSet204 = x3d.LineSet()
LineSet204.setVertexCount([2])
Coordinate205 = x3d.Coordinate()
Coordinate205.setPoint([0,0.9149,0.0016,-0.095,0.9171,0.0029])

LineSet204.setCoord(Coordinate205)
#from sacroiliac to r_hip vertices 2
ColorRGBA206 = x3d.ColorRGBA()
ColorRGBA206.setUSE("HAnimSegmentLineColorRGBA")

LineSet204.setColor(ColorRGBA206)

Shape203.setGeometry(LineSet204)

HAnimSegment183.addChildren(Shape203)
HAnimSite207 = x3d.HAnimSite()
HAnimSite207.setName("r_femoral_lateral_epicondyles")
HAnimSite207.setDEF("hanim_r_femoral_lateral_epicondyles")
HAnimSite207.setTranslation([-0.1421,0.4992,0.031])
TouchSensor208 = x3d.TouchSensor()
TouchSensor208.setDescription("HAnimSite r_femoral_lateral_epicondyles")

HAnimSite207.addChildren(TouchSensor208)
Shape209 = x3d.Shape()
Shape209.setUSE("HAnimSiteShape")

HAnimSite207.addChildren(Shape209)

HAnimSegment183.addChildren(HAnimSite207)
HAnimSite210 = x3d.HAnimSite()
HAnimSite210.setName("r_femoral_medial_epicondyles")
HAnimSite210.setDEF("hanim_r_femoral_medial_epicondyles")
HAnimSite210.setTranslation([-0.0221,0.5014,0.0289])
TouchSensor211 = x3d.TouchSensor()
TouchSensor211.setDescription("HAnimSite r_femoral_medial_epicondyles")

HAnimSite210.addChildren(TouchSensor211)
Shape212 = x3d.Shape()
Shape212.setUSE("HAnimSiteShape")

HAnimSite210.addChildren(Shape212)

HAnimSegment183.addChildren(HAnimSite210)
HAnimSite213 = x3d.HAnimSite()
HAnimSite213.setName("r_knee_crease")
HAnimSite213.setDEF("hanim_r_knee_crease")
HAnimSite213.setTranslation([-0.0825,0.4932,-0.0326])
TouchSensor214 = x3d.TouchSensor()
TouchSensor214.setDescription("HAnimSite r_knee_crease")

HAnimSite213.addChildren(TouchSensor214)
Shape215 = x3d.Shape()
Shape215.setUSE("HAnimSiteShape")

HAnimSite213.addChildren(Shape215)

HAnimSegment183.addChildren(HAnimSite213)
HAnimSite216 = x3d.HAnimSite()
HAnimSite216.setName("r_suprapatella")
HAnimSite216.setDEF("hanim_r_suprapatella")
TouchSensor217 = x3d.TouchSensor()
TouchSensor217.setDescription("HAnimSite r_suprapatella")

HAnimSite216.addChildren(TouchSensor217)
Shape218 = x3d.Shape()
Shape218.setUSE("HAnimSiteShape")

HAnimSite216.addChildren(Shape218)

HAnimSegment183.addChildren(HAnimSite216)

HAnimJoint182.addChildren(HAnimSegment183)
HAnimJoint219 = x3d.HAnimJoint()
HAnimJoint219.setName("l_hip")
HAnimJoint219.setDEF("hanim_l_hip")
HAnimJoint219.setCenter([0.0961,0.9124,-0.0001])
HAnimJoint219.setUlimit([0,0,0])
HAnimJoint219.setLlimit([0,0,0])
HAnimSegment220 = x3d.HAnimSegment()
HAnimSegment220.setName("l_thigh")
HAnimSegment220.setDEF("hanim_l_thigh")
Transform221 = x3d.Transform()
Transform221.setTranslation([0.0961,0.9124,-0.0001])
Transform222 = x3d.Transform()
#Empty Transform
Shape223 = x3d.Shape()
Shape223.setUSE("HAnimJointShape")

Transform222.addChild(Shape223)

Transform221.addChildren(Transform222)

HAnimSegment220.addChildren(Transform221)
Shape224 = x3d.Shape()
LineSet225 = x3d.LineSet()
LineSet225.setVertexCount([2])
Coordinate226 = x3d.Coordinate()
Coordinate226.setPoint([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308])

LineSet225.setCoord(Coordinate226)
#from l_hip to l_knee vertices 2
ColorRGBA227 = x3d.ColorRGBA()
ColorRGBA227.setUSE("HAnimSegmentLineColorRGBA")

LineSet225.setColor(ColorRGBA227)

Shape224.setGeometry(LineSet225)

HAnimSegment220.addChildren(Shape224)
HAnimSite228 = x3d.HAnimSite()
HAnimSite228.setName("l_lateral_malleolus")
HAnimSite228.setDEF("hanim_l_lateral_malleolus")
HAnimSite228.setTranslation([0.1308,0.0597,-0.1032])
TouchSensor229 = x3d.TouchSensor()
TouchSensor229.setDescription("HAnimSite l_lateral_malleolus")

HAnimSite228.addChildren(TouchSensor229)
Shape230 = x3d.Shape()
Shape230.setUSE("HAnimSiteShape")

HAnimSite228.addChildren(Shape230)

HAnimSegment220.addChildren(HAnimSite228)
HAnimSite231 = x3d.HAnimSite()
HAnimSite231.setName("l_medial_malleolus")
HAnimSite231.setDEF("hanim_l_medial_malleolus")
HAnimSite231.setTranslation([0.089,0.0716,-0.0881])
TouchSensor232 = x3d.TouchSensor()
TouchSensor232.setDescription("HAnimSite l_medial_malleolus")

HAnimSite231.addChildren(TouchSensor232)
Shape233 = x3d.Shape()
Shape233.setUSE("HAnimSiteShape")

HAnimSite231.addChildren(Shape233)

HAnimSegment220.addChildren(HAnimSite231)
HAnimSite234 = x3d.HAnimSite()
HAnimSite234.setName("l_tibiale")
HAnimSite234.setDEF("hanim_l_tibiale")
TouchSensor235 = x3d.TouchSensor()
TouchSensor235.setDescription("HAnimSite l_tibiale")

HAnimSite234.addChildren(TouchSensor235)
Shape236 = x3d.Shape()
Shape236.setUSE("HAnimSiteShape")

HAnimSite234.addChildren(Shape236)

HAnimSegment220.addChildren(HAnimSite234)

HAnimJoint219.addChildren(HAnimSegment220)
HAnimJoint237 = x3d.HAnimJoint()
HAnimJoint237.setName("l_knee")
HAnimJoint237.setDEF("hanim_l_knee")
HAnimJoint237.setCenter([0.104,0.4867,0.0308])
HAnimJoint237.setUlimit([0,0,0])
HAnimJoint237.setLlimit([0,0,0])
HAnimSegment238 = x3d.HAnimSegment()
HAnimSegment238.setName("l_calf")
HAnimSegment238.setDEF("hanim_l_calf")
Transform239 = x3d.Transform()
Transform239.setTranslation([0.104,0.4867,0.0308])
Transform240 = x3d.Transform()
#Empty Transform
Shape241 = x3d.Shape()
Shape241.setUSE("HAnimJointShape")

Transform240.addChild(Shape241)

Transform239.addChildren(Transform240)

HAnimSegment238.addChildren(Transform239)
Shape242 = x3d.Shape()
LineSet243 = x3d.LineSet()
LineSet243.setVertexCount([2])
Coordinate244 = x3d.Coordinate()
Coordinate244.setPoint([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736])

LineSet243.setCoord(Coordinate244)
#from l_knee to l_talocrural vertices 2
ColorRGBA245 = x3d.ColorRGBA()
ColorRGBA245.setUSE("HAnimSegmentLineColorRGBA")

LineSet243.setColor(ColorRGBA245)

Shape242.setGeometry(LineSet243)

HAnimSegment238.addChildren(Shape242)
HAnimSite246 = x3d.HAnimSite()
HAnimSite246.setName("l_calcaneus_posterior")
HAnimSite246.setDEF("hanim_l_calcaneus_posterior")
HAnimSite246.setTranslation([0.0974,0.0259,-0.1171])
TouchSensor247 = x3d.TouchSensor()
TouchSensor247.setDescription("HAnimSite l_calcaneus_posterior")

HAnimSite246.addChildren(TouchSensor247)
Shape248 = x3d.Shape()
Shape248.setUSE("HAnimSiteShape")

HAnimSite246.addChildren(Shape248)

HAnimSegment238.addChildren(HAnimSite246)
HAnimSite249 = x3d.HAnimSite()
HAnimSite249.setName("l_sphyrion")
HAnimSite249.setDEF("hanim_l_sphyrion")
HAnimSite249.setTranslation([0.089,0.0575,-0.0943])
TouchSensor250 = x3d.TouchSensor()
TouchSensor250.setDescription("HAnimSite l_sphyrion")

HAnimSite249.addChildren(TouchSensor250)
Shape251 = x3d.Shape()
Shape251.setUSE("HAnimSiteShape")

HAnimSite249.addChildren(Shape251)

HAnimSegment238.addChildren(HAnimSite249)

HAnimJoint237.addChildren(HAnimSegment238)
HAnimJoint252 = x3d.HAnimJoint()
HAnimJoint252.setName("l_talocrural")
HAnimJoint252.setDEF("hanim_l_talocrural")
HAnimJoint252.setCenter([0.1101,0.0656,-0.0736])
HAnimJoint252.setUlimit([0,0,0])
HAnimJoint252.setLlimit([0,0,0])
HAnimSegment253 = x3d.HAnimSegment()
HAnimSegment253.setName("l_talus")
HAnimSegment253.setDEF("hanim_l_talus")
Transform254 = x3d.Transform()
Transform254.setScale([0.15,0.15,0.15])
Transform254.setTranslation([0.08,0.06,-0.025])
Transform254.setRotation([1,0,0,-1.57])
#Transform left foot
Transform255 = x3d.Transform()
#Empty Transform left foot
Shape256 = x3d.Shape()
Shape256.setUSE("HAnimJointShape")

Transform255.addChild(Shape256)

Transform254.addChildren(Transform255)

HAnimSegment253.addChildren(Transform254)
Shape257 = x3d.Shape()
LineSet258 = x3d.LineSet()
LineSet258.setVertexCount([2])
Coordinate259 = x3d.Coordinate()
Coordinate259.setPoint([0.1101,0.0656,-0.0736,0.0824,0.0064,-0.004])

LineSet258.setCoord(Coordinate259)
#from l_talocrural to l_metatarsophalangeal_2 vertices 2
ColorRGBA260 = x3d.ColorRGBA()
ColorRGBA260.setUSE("HAnimSegmentLineColorRGBA")

LineSet258.setColor(ColorRGBA260)

Shape257.setGeometry(LineSet258)

HAnimSegment253.addChildren(Shape257)
HAnimSite261 = x3d.HAnimSite()
HAnimSite261.setName("l_metatarsal_phalanx_1")
HAnimSite261.setDEF("hanim_l_metatarsal_phalanx_1")
TouchSensor262 = x3d.TouchSensor()
TouchSensor262.setDescription("HAnimSite l_metatarsal_phalanx_1")

HAnimSite261.addChildren(TouchSensor262)
Shape263 = x3d.Shape()
Shape263.setUSE("HAnimSiteShape")

HAnimSite261.addChildren(Shape263)

HAnimSegment253.addChildren(HAnimSite261)
HAnimSite264 = x3d.HAnimSite()
HAnimSite264.setName("l_metatarsal_phalanx_5")
HAnimSite264.setDEF("hanim_l_metatarsal_phalanx_5")
TouchSensor265 = x3d.TouchSensor()
TouchSensor265.setDescription("HAnimSite l_metatarsal_phalanx_5")

HAnimSite264.addChildren(TouchSensor265)
Shape266 = x3d.Shape()
Shape266.setUSE("HAnimSiteShape")

HAnimSite264.addChildren(Shape266)

HAnimSegment253.addChildren(HAnimSite264)
HAnimSite267 = x3d.HAnimSite()
HAnimSite267.setName("l_tarsal_distal_phalanx_1_tip")
HAnimSite267.setDEF("hanim_l_tarsal_distal_phalanx_1_tip")
TouchSensor268 = x3d.TouchSensor()
TouchSensor268.setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip")

HAnimSite267.addChildren(TouchSensor268)
Shape269 = x3d.Shape()
Shape269.setUSE("HAnimSiteShape")

HAnimSite267.addChildren(Shape269)

HAnimSegment253.addChildren(HAnimSite267)
HAnimSite270 = x3d.HAnimSite()
HAnimSite270.setName("l_tarsal_distal_phalanx_2_tip")
HAnimSite270.setDEF("hanim_l_tarsal_distal_phalanx_2_tip")
HAnimSite270.setTranslation([0.1195,0.0079,0.1433])
TouchSensor271 = x3d.TouchSensor()
TouchSensor271.setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip")

HAnimSite270.addChildren(TouchSensor271)
Shape272 = x3d.Shape()
Shape272.setUSE("HAnimSiteShape")

HAnimSite270.addChildren(Shape272)

HAnimSegment253.addChildren(HAnimSite270)
HAnimSite273 = x3d.HAnimSite()
HAnimSite273.setName("l_tarsal_distal_phalanx_3_tip")
HAnimSite273.setDEF("hanim_l_tarsal_distal_phalanx_3_tip")
TouchSensor274 = x3d.TouchSensor()
TouchSensor274.setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip")

HAnimSite273.addChildren(TouchSensor274)
Shape275 = x3d.Shape()
Shape275.setUSE("HAnimSiteShape")

HAnimSite273.addChildren(Shape275)

HAnimSegment253.addChildren(HAnimSite273)
HAnimSite276 = x3d.HAnimSite()
HAnimSite276.setName("l_tarsal_distal_phalanx_4_tip")
HAnimSite276.setDEF("hanim_l_tarsal_distal_phalanx_4_tip")
TouchSensor277 = x3d.TouchSensor()
TouchSensor277.setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip")

HAnimSite276.addChildren(TouchSensor277)
Shape278 = x3d.Shape()
Shape278.setUSE("HAnimSiteShape")

HAnimSite276.addChildren(Shape278)

HAnimSegment253.addChildren(HAnimSite276)
HAnimSite279 = x3d.HAnimSite()
HAnimSite279.setName("l_tarsal_distal_phalanx_5_tip")
HAnimSite279.setDEF("hanim_l_tarsal_distal_phalanx_5_tip")
TouchSensor280 = x3d.TouchSensor()
TouchSensor280.setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip")

HAnimSite279.addChildren(TouchSensor280)
Shape281 = x3d.Shape()
Shape281.setUSE("HAnimSiteShape")

HAnimSite279.addChildren(Shape281)

HAnimSegment253.addChildren(HAnimSite279)

HAnimJoint252.addChildren(HAnimSegment253)
HAnimJoint282 = x3d.HAnimJoint()
HAnimJoint282.setName("l_metatarsophalangeal_2")
HAnimJoint282.setDEF("hanim_l_metatarsophalangeal_2")
HAnimJoint282.setCenter([0.0824,0.0064,-0.004])
HAnimJoint282.setUlimit([0,0,0])
HAnimJoint282.setLlimit([0,0,0])

HAnimJoint252.addChildren(HAnimJoint282)

HAnimJoint237.addChildren(HAnimJoint252)

HAnimJoint219.addChildren(HAnimJoint237)

HAnimJoint182.addChildren(HAnimJoint219)
HAnimJoint283 = x3d.HAnimJoint()
HAnimJoint283.setName("r_hip")
HAnimJoint283.setDEF("hanim_r_hip")
HAnimJoint283.setCenter([-0.095,0.9171,0.0029])
HAnimJoint283.setUlimit([0,0,0])
HAnimJoint283.setLlimit([0,0,0])
HAnimSegment284 = x3d.HAnimSegment()
HAnimSegment284.setName("r_thigh")
HAnimSegment284.setDEF("hanim_r_thigh")
Transform285 = x3d.Transform()
Transform285.setTranslation([-0.095,0.9171,0.0029])
Transform286 = x3d.Transform()
#Empty Transform
Shape287 = x3d.Shape()
Shape287.setUSE("HAnimJointShape")

Transform286.addChild(Shape287)

Transform285.addChildren(Transform286)

HAnimSegment284.addChildren(Transform285)
Shape288 = x3d.Shape()
LineSet289 = x3d.LineSet()
LineSet289.setVertexCount([2])
Coordinate290 = x3d.Coordinate()
Coordinate290.setPoint([-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318])

LineSet289.setCoord(Coordinate290)
#from r_hip to r_knee vertices 2
ColorRGBA291 = x3d.ColorRGBA()
ColorRGBA291.setUSE("HAnimSegmentLineColorRGBA")

LineSet289.setColor(ColorRGBA291)

Shape288.setGeometry(LineSet289)

HAnimSegment284.addChildren(Shape288)
HAnimSite292 = x3d.HAnimSite()
HAnimSite292.setName("r_lateral_malleolus")
HAnimSite292.setDEF("hanim_r_lateral_malleolus")
HAnimSite292.setTranslation([-0.1006,0.0658,-0.1075])
TouchSensor293 = x3d.TouchSensor()
TouchSensor293.setDescription("HAnimSite r_lateral_malleolus")

HAnimSite292.addChildren(TouchSensor293)
Shape294 = x3d.Shape()
Shape294.setUSE("HAnimSiteShape")

HAnimSite292.addChildren(Shape294)

HAnimSegment284.addChildren(HAnimSite292)
HAnimSite295 = x3d.HAnimSite()
HAnimSite295.setName("r_medial_malleolus")
HAnimSite295.setDEF("hanim_r_medial_malleolus")
HAnimSite295.setTranslation([-0.0591,0.076,-0.0928])
TouchSensor296 = x3d.TouchSensor()
TouchSensor296.setDescription("HAnimSite r_medial_malleolus")

HAnimSite295.addChildren(TouchSensor296)
Shape297 = x3d.Shape()
Shape297.setUSE("HAnimSiteShape")

HAnimSite295.addChildren(Shape297)

HAnimSegment284.addChildren(HAnimSite295)
HAnimSite298 = x3d.HAnimSite()
HAnimSite298.setName("r_tibiale")
HAnimSite298.setDEF("hanim_r_tibiale")
TouchSensor299 = x3d.TouchSensor()
TouchSensor299.setDescription("HAnimSite r_tibiale")

HAnimSite298.addChildren(TouchSensor299)
Shape300 = x3d.Shape()
Shape300.setUSE("HAnimSiteShape")

HAnimSite298.addChildren(Shape300)

HAnimSegment284.addChildren(HAnimSite298)

HAnimJoint283.addChildren(HAnimSegment284)
HAnimJoint301 = x3d.HAnimJoint()
HAnimJoint301.setName("r_knee")
HAnimJoint301.setDEF("hanim_r_knee")
HAnimJoint301.setCenter([-0.0867,0.4913,0.0318])
HAnimJoint301.setUlimit([0,0,0])
HAnimJoint301.setLlimit([0,0,0])
HAnimSegment302 = x3d.HAnimSegment()
HAnimSegment302.setName("r_calf")
HAnimSegment302.setDEF("hanim_r_calf")
Transform303 = x3d.Transform()
Transform303.setTranslation([-0.0867,0.4913,0.0318])
Transform304 = x3d.Transform()
#Empty Transform
Shape305 = x3d.Shape()
Shape305.setUSE("HAnimJointShape")

Transform304.addChild(Shape305)

Transform303.addChildren(Transform304)

HAnimSegment302.addChildren(Transform303)
Shape306 = x3d.Shape()
LineSet307 = x3d.LineSet()
LineSet307.setVertexCount([2])
Coordinate308 = x3d.Coordinate()
Coordinate308.setPoint([-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766])

LineSet307.setCoord(Coordinate308)
#from r_knee to r_talocrural vertices 2
ColorRGBA309 = x3d.ColorRGBA()
ColorRGBA309.setUSE("HAnimSegmentLineColorRGBA")

LineSet307.setColor(ColorRGBA309)

Shape306.setGeometry(LineSet307)

HAnimSegment302.addChildren(Shape306)
HAnimSite310 = x3d.HAnimSite()
HAnimSite310.setName("r_calcaneus_posterior")
HAnimSite310.setDEF("hanim_r_calcaneus_posterior")
HAnimSite310.setTranslation([-0.0692,0.0297,-0.1221])
TouchSensor311 = x3d.TouchSensor()
TouchSensor311.setDescription("HAnimSite r_calcaneus_posterior")

HAnimSite310.addChildren(TouchSensor311)
Shape312 = x3d.Shape()
Shape312.setUSE("HAnimSiteShape")

HAnimSite310.addChildren(Shape312)

HAnimSegment302.addChildren(HAnimSite310)
HAnimSite313 = x3d.HAnimSite()
HAnimSite313.setName("r_sphyrion")
HAnimSite313.setDEF("hanim_r_sphyrion")
HAnimSite313.setTranslation([-0.0603,0.061,-0.1002])
TouchSensor314 = x3d.TouchSensor()
TouchSensor314.setDescription("HAnimSite r_sphyrion")

HAnimSite313.addChildren(TouchSensor314)
Shape315 = x3d.Shape()
Shape315.setUSE("HAnimSiteShape")

HAnimSite313.addChildren(Shape315)

HAnimSegment302.addChildren(HAnimSite313)

HAnimJoint301.addChildren(HAnimSegment302)
HAnimJoint316 = x3d.HAnimJoint()
HAnimJoint316.setName("r_talocrural")
HAnimJoint316.setDEF("hanim_r_talocrural")
HAnimJoint316.setCenter([-0.0801,0.0712,-0.0766])
HAnimJoint316.setUlimit([0,0,0])
HAnimJoint316.setLlimit([0,0,0])
HAnimSegment317 = x3d.HAnimSegment()
HAnimSegment317.setName("r_talus")
HAnimSegment317.setDEF("hanim_r_talus")
Transform318 = x3d.Transform()
Transform318.setScale([0.15,0.15,0.15])
Transform318.setTranslation([-0.05,0.06,-0.025])
Transform318.setRotation([1,0,0,-1.57])
#Transform right foot
Transform319 = x3d.Transform()
#Empty Transform right foot
Shape320 = x3d.Shape()
Shape320.setUSE("HAnimJointShape")

Transform319.addChild(Shape320)

Transform318.addChildren(Transform319)

HAnimSegment317.addChildren(Transform318)
Shape321 = x3d.Shape()
LineSet322 = x3d.LineSet()
LineSet322.setVertexCount([2])
Coordinate323 = x3d.Coordinate()
Coordinate323.setPoint([-0.0801,0.0712,-0.0766,-0.0823,0.0064,-0.004])

LineSet322.setCoord(Coordinate323)
#from r_talocrural to r_metatarsophalangeal_2 vertices 2
ColorRGBA324 = x3d.ColorRGBA()
ColorRGBA324.setUSE("HAnimSegmentLineColorRGBA")

LineSet322.setColor(ColorRGBA324)

Shape321.setGeometry(LineSet322)

HAnimSegment317.addChildren(Shape321)
HAnimSite325 = x3d.HAnimSite()
HAnimSite325.setName("r_metatarsal_phalanx_1")
HAnimSite325.setDEF("hanim_r_metatarsal_phalanx_1")
TouchSensor326 = x3d.TouchSensor()
TouchSensor326.setDescription("HAnimSite r_metatarsal_phalanx_1")

HAnimSite325.addChildren(TouchSensor326)
Shape327 = x3d.Shape()
Shape327.setUSE("HAnimSiteShape")

HAnimSite325.addChildren(Shape327)

HAnimSegment317.addChildren(HAnimSite325)
HAnimSite328 = x3d.HAnimSite()
HAnimSite328.setName("r_metatarsal_phalanx_5")
HAnimSite328.setDEF("hanim_r_metatarsal_phalanx_5")
TouchSensor329 = x3d.TouchSensor()
TouchSensor329.setDescription("HAnimSite r_metatarsal_phalanx_5")

HAnimSite328.addChildren(TouchSensor329)
Shape330 = x3d.Shape()
Shape330.setUSE("HAnimSiteShape")

HAnimSite328.addChildren(Shape330)

HAnimSegment317.addChildren(HAnimSite328)
HAnimSite331 = x3d.HAnimSite()
HAnimSite331.setName("r_tarsal_distal_phalanx_1_tip")
HAnimSite331.setDEF("hanim_r_tarsal_distal_phalanx_1_tip")
TouchSensor332 = x3d.TouchSensor()
TouchSensor332.setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip")

HAnimSite331.addChildren(TouchSensor332)
Shape333 = x3d.Shape()
Shape333.setUSE("HAnimSiteShape")

HAnimSite331.addChildren(Shape333)

HAnimSegment317.addChildren(HAnimSite331)
HAnimSite334 = x3d.HAnimSite()
HAnimSite334.setName("r_tarsal_distal_phalanx_2_tip")
HAnimSite334.setDEF("hanim_r_tarsal_distal_phalanx_2_tip")
HAnimSite334.setTranslation([-0.0883,0.0134,0.1383])
TouchSensor335 = x3d.TouchSensor()
TouchSensor335.setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip")

HAnimSite334.addChildren(TouchSensor335)
Shape336 = x3d.Shape()
Shape336.setUSE("HAnimSiteShape")

HAnimSite334.addChildren(Shape336)

HAnimSegment317.addChildren(HAnimSite334)
HAnimSite337 = x3d.HAnimSite()
HAnimSite337.setName("r_tarsal_distal_phalanx_3_tip")
HAnimSite337.setDEF("hanim_r_tarsal_distal_phalanx_3_tip")
TouchSensor338 = x3d.TouchSensor()
TouchSensor338.setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip")

HAnimSite337.addChildren(TouchSensor338)
Shape339 = x3d.Shape()
Shape339.setUSE("HAnimSiteShape")

HAnimSite337.addChildren(Shape339)

HAnimSegment317.addChildren(HAnimSite337)
HAnimSite340 = x3d.HAnimSite()
HAnimSite340.setName("r_tarsal_distal_phalanx_4_tip")
HAnimSite340.setDEF("hanim_r_tarsal_distal_phalanx_4_tip")
TouchSensor341 = x3d.TouchSensor()
TouchSensor341.setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip")

HAnimSite340.addChildren(TouchSensor341)
Shape342 = x3d.Shape()
Shape342.setUSE("HAnimSiteShape")

HAnimSite340.addChildren(Shape342)

HAnimSegment317.addChildren(HAnimSite340)
HAnimSite343 = x3d.HAnimSite()
HAnimSite343.setName("r_tarsal_distal_phalanx_5_tip")
HAnimSite343.setDEF("hanim_r_tarsal_distal_phalanx_5_tip")
TouchSensor344 = x3d.TouchSensor()
TouchSensor344.setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip")

HAnimSite343.addChildren(TouchSensor344)
Shape345 = x3d.Shape()
Shape345.setUSE("HAnimSiteShape")

HAnimSite343.addChildren(Shape345)

HAnimSegment317.addChildren(HAnimSite343)

HAnimJoint316.addChildren(HAnimSegment317)
HAnimJoint346 = x3d.HAnimJoint()
HAnimJoint346.setName("r_metatarsophalangeal_2")
HAnimJoint346.setDEF("hanim_r_metatarsophalangeal_2")
HAnimJoint346.setCenter([-0.0823,0.0064,-0.004])
HAnimJoint346.setUlimit([0,0,0])
HAnimJoint346.setLlimit([0,0,0])

HAnimJoint316.addChildren(HAnimJoint346)

HAnimJoint301.addChildren(HAnimJoint316)

HAnimJoint283.addChildren(HAnimJoint301)

HAnimJoint182.addChildren(HAnimJoint283)

HAnimJoint52.addChildren(HAnimJoint182)
HAnimJoint347 = x3d.HAnimJoint()
HAnimJoint347.setName("vl5")
HAnimJoint347.setDEF("hanim_vl5")
HAnimJoint347.setCenter([0.0028,1.0568,-0.0776])
HAnimJoint347.setUlimit([0,0,0])
HAnimJoint347.setLlimit([0,0,0])
HAnimSegment348 = x3d.HAnimSegment()
HAnimSegment348.setName("l5")
HAnimSegment348.setDEF("hanim_l5")
Transform349 = x3d.Transform()
Transform349.setTranslation([0.0028,1.0568,-0.0776])
Transform350 = x3d.Transform()
#Empty Transform
Shape351 = x3d.Shape()
Shape351.setUSE("HAnimJointShape")

Transform350.addChild(Shape351)

Transform349.addChildren(Transform350)

HAnimSegment348.addChildren(Transform349)
Shape352 = x3d.Shape()
LineSet353 = x3d.LineSet()
LineSet353.setVertexCount([2])
Coordinate354 = x3d.Coordinate()
Coordinate354.setPoint([0.0028,1.0568,-0.0776,0.0044,1.6209,0.0236])

LineSet353.setCoord(Coordinate354)
#from vl5 to skullbase vertices 2
ColorRGBA355 = x3d.ColorRGBA()
ColorRGBA355.setUSE("HAnimSegmentLineColorRGBA")

LineSet353.setColor(ColorRGBA355)

Shape352.setGeometry(LineSet353)

HAnimSegment348.addChildren(Shape352)
HAnimSite356 = x3d.HAnimSite()
HAnimSite356.setName("glabella")
HAnimSite356.setDEF("hanim_glabella")
TouchSensor357 = x3d.TouchSensor()
TouchSensor357.setDescription("HAnimSite glabella")

HAnimSite356.addChildren(TouchSensor357)
Shape358 = x3d.Shape()
Shape358.setUSE("HAnimSiteShape")

HAnimSite356.addChildren(Shape358)

HAnimSegment348.addChildren(HAnimSite356)
HAnimSite359 = x3d.HAnimSite()
HAnimSite359.setName("l_ectocanthus")
HAnimSite359.setDEF("hanim_l_ectocanthus")
TouchSensor360 = x3d.TouchSensor()
TouchSensor360.setDescription("HAnimSite l_ectocanthus")

HAnimSite359.addChildren(TouchSensor360)
Shape361 = x3d.Shape()
Shape361.setUSE("HAnimSiteShape")

HAnimSite359.addChildren(Shape361)

HAnimSegment348.addChildren(HAnimSite359)
HAnimSite362 = x3d.HAnimSite()
HAnimSite362.setName("l_gonion")
HAnimSite362.setDEF("hanim_l_gonion")
HAnimSite362.setTranslation([0.0631,1.553,0.033])
TouchSensor363 = x3d.TouchSensor()
TouchSensor363.setDescription("HAnimSite l_gonion")

HAnimSite362.addChildren(TouchSensor363)
Shape364 = x3d.Shape()
Shape364.setUSE("HAnimSiteShape")

HAnimSite362.addChildren(Shape364)

HAnimSegment348.addChildren(HAnimSite362)
HAnimSite365 = x3d.HAnimSite()
HAnimSite365.setName("l_infraorbitale")
HAnimSite365.setDEF("hanim_l_infraorbitale")
HAnimSite365.setTranslation([0.0341,1.6171,0.0752])
TouchSensor366 = x3d.TouchSensor()
TouchSensor366.setDescription("HAnimSite l_infraorbitale")

HAnimSite365.addChildren(TouchSensor366)
Shape367 = x3d.Shape()
Shape367.setUSE("HAnimSiteShape")

HAnimSite365.addChildren(Shape367)

HAnimSegment348.addChildren(HAnimSite365)
HAnimSite368 = x3d.HAnimSite()
HAnimSite368.setName("l_tragion")
HAnimSite368.setDEF("hanim_l_tragion")
HAnimSite368.setTranslation([0.0739,1.6348,0.0282])
TouchSensor369 = x3d.TouchSensor()
TouchSensor369.setDescription("HAnimSite l_tragion")

HAnimSite368.addChildren(TouchSensor369)
Shape370 = x3d.Shape()
Shape370.setUSE("HAnimSiteShape")

HAnimSite368.addChildren(Shape370)

HAnimSegment348.addChildren(HAnimSite368)
HAnimSite371 = x3d.HAnimSite()
HAnimSite371.setName("menton")
HAnimSite371.setDEF("hanim_menton")
TouchSensor372 = x3d.TouchSensor()
TouchSensor372.setDescription("HAnimSite menton")

HAnimSite371.addChildren(TouchSensor372)
Shape373 = x3d.Shape()
Shape373.setUSE("HAnimSiteShape")

HAnimSite371.addChildren(Shape373)

HAnimSegment348.addChildren(HAnimSite371)
HAnimSite374 = x3d.HAnimSite()
HAnimSite374.setName("nuchale")
HAnimSite374.setDEF("hanim_nuchale")
HAnimSite374.setTranslation([0.0039,1.5972,-0.0796])
TouchSensor375 = x3d.TouchSensor()
TouchSensor375.setDescription("HAnimSite nuchale")

HAnimSite374.addChildren(TouchSensor375)
Shape376 = x3d.Shape()
Shape376.setUSE("HAnimSiteShape")

HAnimSite374.addChildren(Shape376)

HAnimSegment348.addChildren(HAnimSite374)
HAnimSite377 = x3d.HAnimSite()
HAnimSite377.setName("opisthocranion")
HAnimSite377.setDEF("hanim_opisthocranion")
TouchSensor378 = x3d.TouchSensor()
TouchSensor378.setDescription("HAnimSite opisthocranion")

HAnimSite377.addChildren(TouchSensor378)
Shape379 = x3d.Shape()
Shape379.setUSE("HAnimSiteShape")

HAnimSite377.addChildren(Shape379)

HAnimSegment348.addChildren(HAnimSite377)
HAnimSite380 = x3d.HAnimSite()
HAnimSite380.setName("r_ectocanthus")
HAnimSite380.setDEF("hanim_r_ectocanthus")
TouchSensor381 = x3d.TouchSensor()
TouchSensor381.setDescription("HAnimSite r_ectocanthus")

HAnimSite380.addChildren(TouchSensor381)
Shape382 = x3d.Shape()
Shape382.setUSE("HAnimSiteShape")

HAnimSite380.addChildren(Shape382)

HAnimSegment348.addChildren(HAnimSite380)
HAnimSite383 = x3d.HAnimSite()
HAnimSite383.setName("r_gonion")
HAnimSite383.setDEF("hanim_r_gonion")
HAnimSite383.setTranslation([-0.052,1.5529,0.0347])
TouchSensor384 = x3d.TouchSensor()
TouchSensor384.setDescription("HAnimSite r_gonion")

HAnimSite383.addChildren(TouchSensor384)
Shape385 = x3d.Shape()
Shape385.setUSE("HAnimSiteShape")

HAnimSite383.addChildren(Shape385)

HAnimSegment348.addChildren(HAnimSite383)
HAnimSite386 = x3d.HAnimSite()
HAnimSite386.setName("r_infraorbitale")
HAnimSite386.setDEF("hanim_r_infraorbitale")
HAnimSite386.setTranslation([-0.0237,1.6171,0.0752])
TouchSensor387 = x3d.TouchSensor()
TouchSensor387.setDescription("HAnimSite r_infraorbitale")

HAnimSite386.addChildren(TouchSensor387)
Shape388 = x3d.Shape()
Shape388.setUSE("HAnimSiteShape")

HAnimSite386.addChildren(Shape388)

HAnimSegment348.addChildren(HAnimSite386)
HAnimSite389 = x3d.HAnimSite()
HAnimSite389.setName("r_tragion")
HAnimSite389.setDEF("hanim_r_tragion")
HAnimSite389.setTranslation([-0.0646,1.6347,0.0302])
TouchSensor390 = x3d.TouchSensor()
TouchSensor390.setDescription("HAnimSite r_tragion")

HAnimSite389.addChildren(TouchSensor390)
Shape391 = x3d.Shape()
Shape391.setUSE("HAnimSiteShape")

HAnimSite389.addChildren(Shape391)

HAnimSegment348.addChildren(HAnimSite389)
HAnimSite392 = x3d.HAnimSite()
HAnimSite392.setName("sellion")
HAnimSite392.setDEF("hanim_sellion")
HAnimSite392.setTranslation([0.0058,1.6316,0.0852])
TouchSensor393 = x3d.TouchSensor()
TouchSensor393.setDescription("HAnimSite sellion")

HAnimSite392.addChildren(TouchSensor393)
Shape394 = x3d.Shape()
Shape394.setUSE("HAnimSiteShape")

HAnimSite392.addChildren(Shape394)

HAnimSegment348.addChildren(HAnimSite392)
HAnimSite395 = x3d.HAnimSite()
HAnimSite395.setName("skull_vertex")
HAnimSite395.setDEF("hanim_skull_vertex")
TouchSensor396 = x3d.TouchSensor()
TouchSensor396.setDescription("HAnimSite skull_vertex")

HAnimSite395.addChildren(TouchSensor396)
Shape397 = x3d.Shape()
Shape397.setUSE("HAnimSiteShape")

HAnimSite395.addChildren(Shape397)

HAnimSegment348.addChildren(HAnimSite395)
HAnimSite398 = x3d.HAnimSite()
HAnimSite398.setName("supramenton")
HAnimSite398.setDEF("hanim_supramenton")
HAnimSite398.setTranslation([0.0061,1.541,0.0805])
TouchSensor399 = x3d.TouchSensor()
TouchSensor399.setDescription("HAnimSite supramenton")

HAnimSite398.addChildren(TouchSensor399)
Shape400 = x3d.Shape()
Shape400.setUSE("HAnimSiteShape")

HAnimSite398.addChildren(Shape400)

HAnimSegment348.addChildren(HAnimSite398)
Shape401 = x3d.Shape()
LineSet402 = x3d.LineSet()
LineSet402.setVertexCount([2])
Coordinate403 = x3d.Coordinate()
Coordinate403.setPoint([0.0028,1.0568,-0.0776,0.2029,1.4376,-0.0387])

LineSet402.setCoord(Coordinate403)
#from vl5 to l_shoulder vertices 2
ColorRGBA404 = x3d.ColorRGBA()
ColorRGBA404.setUSE("HAnimSegmentLineColorRGBA")

LineSet402.setColor(ColorRGBA404)

Shape401.setGeometry(LineSet402)

HAnimSegment348.addChildren(Shape401)
HAnimSite405 = x3d.HAnimSite()
HAnimSite405.setName("l_bideltoid")
HAnimSite405.setDEF("hanim_l_bideltoid")
TouchSensor406 = x3d.TouchSensor()
TouchSensor406.setDescription("HAnimSite l_bideltoid")

HAnimSite405.addChildren(TouchSensor406)
Shape407 = x3d.Shape()
Shape407.setUSE("HAnimSiteShape")

HAnimSite405.addChildren(Shape407)

HAnimSegment348.addChildren(HAnimSite405)
HAnimSite408 = x3d.HAnimSite()
HAnimSite408.setName("l_humeral_lateral_epicondyles")
HAnimSite408.setDEF("hanim_l_humeral_lateral_epicondyles")
HAnimSite408.setTranslation([0.228,1.1482,-0.11])
TouchSensor409 = x3d.TouchSensor()
TouchSensor409.setDescription("HAnimSite l_humeral_lateral_epicondyles")

HAnimSite408.addChildren(TouchSensor409)
Shape410 = x3d.Shape()
Shape410.setUSE("HAnimSiteShape")

HAnimSite408.addChildren(Shape410)

HAnimSegment348.addChildren(HAnimSite408)
Shape411 = x3d.Shape()
LineSet412 = x3d.LineSet()
LineSet412.setVertexCount([2])
Coordinate413 = x3d.Coordinate()
Coordinate413.setPoint([0.0028,1.0568,-0.0776,-0.1907,1.4407,-0.0325])

LineSet412.setCoord(Coordinate413)
#from vl5 to r_shoulder vertices 2
ColorRGBA414 = x3d.ColorRGBA()
ColorRGBA414.setUSE("HAnimSegmentLineColorRGBA")

LineSet412.setColor(ColorRGBA414)

Shape411.setGeometry(LineSet412)

HAnimSegment348.addChildren(Shape411)
HAnimSite415 = x3d.HAnimSite()
HAnimSite415.setName("r_bideltoid")
HAnimSite415.setDEF("hanim_r_bideltoid")
TouchSensor416 = x3d.TouchSensor()
TouchSensor416.setDescription("HAnimSite r_bideltoid")

HAnimSite415.addChildren(TouchSensor416)
Shape417 = x3d.Shape()
Shape417.setUSE("HAnimSiteShape")

HAnimSite415.addChildren(Shape417)

HAnimSegment348.addChildren(HAnimSite415)
HAnimSite418 = x3d.HAnimSite()
HAnimSite418.setName("r_humeral_lateral_epicondyles")
HAnimSite418.setDEF("hanim_r_humeral_lateral_epicondyles")
HAnimSite418.setTranslation([-0.2224,1.1517,-0.1033])
TouchSensor419 = x3d.TouchSensor()
TouchSensor419.setDescription("HAnimSite r_humeral_lateral_epicondyles")

HAnimSite418.addChildren(TouchSensor419)
Shape420 = x3d.Shape()
Shape420.setUSE("HAnimSiteShape")

HAnimSite418.addChildren(Shape420)

HAnimSegment348.addChildren(HAnimSite418)

HAnimJoint347.addChildren(HAnimSegment348)
HAnimJoint421 = x3d.HAnimJoint()
HAnimJoint421.setName("skullbase")
HAnimJoint421.setDEF("hanim_skullbase")
HAnimJoint421.setCenter([0.0044,1.6209,0.0236])
HAnimJoint421.setUlimit([0,0,0])
HAnimJoint421.setLlimit([0,0,0])

HAnimJoint347.addChildren(HAnimJoint421)
HAnimJoint422 = x3d.HAnimJoint()
HAnimJoint422.setName("l_shoulder")
HAnimJoint422.setDEF("hanim_l_shoulder")
HAnimJoint422.setCenter([0.2029,1.4376,-0.0387])
HAnimJoint422.setUlimit([0,0,0])
HAnimJoint422.setLlimit([0,0,0])
HAnimSegment423 = x3d.HAnimSegment()
HAnimSegment423.setName("l_upperarm")
HAnimSegment423.setDEF("hanim_l_upperarm")
Transform424 = x3d.Transform()
Transform424.setTranslation([0.2029,1.4376,-0.0387])
Transform425 = x3d.Transform()
#Empty Transform
Shape426 = x3d.Shape()
Shape426.setUSE("HAnimJointShape")

Transform425.addChild(Shape426)

Transform424.addChildren(Transform425)

HAnimSegment423.addChildren(Transform424)
Shape427 = x3d.Shape()
LineSet428 = x3d.LineSet()
LineSet428.setVertexCount([2])
Coordinate429 = x3d.Coordinate()
Coordinate429.setPoint([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682])

LineSet428.setCoord(Coordinate429)
#from l_shoulder to l_elbow vertices 2
ColorRGBA430 = x3d.ColorRGBA()
ColorRGBA430.setUSE("HAnimSegmentLineColorRGBA")

LineSet428.setColor(ColorRGBA430)

Shape427.setGeometry(LineSet428)

HAnimSegment423.addChildren(Shape427)
HAnimSite431 = x3d.HAnimSite()
HAnimSite431.setName("l_humeral_medial_epicondyles")
HAnimSite431.setDEF("hanim_l_humeral_medial_epicondyles")
HAnimSite431.setTranslation([0.1735,1.1272,-0.1113])
TouchSensor432 = x3d.TouchSensor()
TouchSensor432.setDescription("HAnimSite l_humeral_medial_epicondyles")

HAnimSite431.addChildren(TouchSensor432)
Shape433 = x3d.Shape()
Shape433.setUSE("HAnimSiteShape")

HAnimSite431.addChildren(Shape433)

HAnimSegment423.addChildren(HAnimSite431)
HAnimSite434 = x3d.HAnimSite()
HAnimSite434.setName("l_olecranon")
HAnimSite434.setDEF("hanim_l_olecranon")
HAnimSite434.setTranslation([-0.1962,1.1375,-0.1123])
TouchSensor435 = x3d.TouchSensor()
TouchSensor435.setDescription("HAnimSite l_olecranon")

HAnimSite434.addChildren(TouchSensor435)
Shape436 = x3d.Shape()
Shape436.setUSE("HAnimSiteShape")

HAnimSite434.addChildren(Shape436)

HAnimSegment423.addChildren(HAnimSite434)
HAnimSite437 = x3d.HAnimSite()
HAnimSite437.setName("l_radial_styloid")
HAnimSite437.setDEF("hanim_l_radial_styloid")
HAnimSite437.setTranslation([0.1901,0.8645,-0.0415])
TouchSensor438 = x3d.TouchSensor()
TouchSensor438.setDescription("HAnimSite l_radial_styloid")

HAnimSite437.addChildren(TouchSensor438)
Shape439 = x3d.Shape()
Shape439.setUSE("HAnimSiteShape")

HAnimSite437.addChildren(Shape439)

HAnimSegment423.addChildren(HAnimSite437)
HAnimSite440 = x3d.HAnimSite()
HAnimSite440.setName("l_radiale")
HAnimSite440.setDEF("hanim_l_radiale")
HAnimSite440.setTranslation([0.2182,1.1212,-0.1167])
TouchSensor441 = x3d.TouchSensor()
TouchSensor441.setDescription("HAnimSite l_radiale")

HAnimSite440.addChildren(TouchSensor441)
Shape442 = x3d.Shape()
Shape442.setUSE("HAnimSiteShape")

HAnimSite440.addChildren(Shape442)

HAnimSegment423.addChildren(HAnimSite440)

HAnimJoint422.addChildren(HAnimSegment423)
HAnimJoint443 = x3d.HAnimJoint()
HAnimJoint443.setName("l_elbow")
HAnimJoint443.setDEF("hanim_l_elbow")
HAnimJoint443.setCenter([0.2014,1.1357,-0.0682])
HAnimJoint443.setUlimit([0,0,0])
HAnimJoint443.setLlimit([0,0,0])
HAnimSegment444 = x3d.HAnimSegment()
HAnimSegment444.setName("l_forearm")
HAnimSegment444.setDEF("hanim_l_forearm")
Transform445 = x3d.Transform()
Transform445.setTranslation([0.2014,1.1357,-0.0682])
Transform446 = x3d.Transform()
#Empty Transform
Shape447 = x3d.Shape()
Shape447.setUSE("HAnimJointShape")

Transform446.addChild(Shape447)

Transform445.addChildren(Transform446)

HAnimSegment444.addChildren(Transform445)
Shape448 = x3d.Shape()
LineSet449 = x3d.LineSet()
LineSet449.setVertexCount([2])
Coordinate450 = x3d.Coordinate()
Coordinate450.setPoint([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583])

LineSet449.setCoord(Coordinate450)
#from l_elbow to l_radiocarpal vertices 2
ColorRGBA451 = x3d.ColorRGBA()
ColorRGBA451.setUSE("HAnimSegmentLineColorRGBA")

LineSet449.setColor(ColorRGBA451)

Shape448.setGeometry(LineSet449)

HAnimSegment444.addChildren(Shape448)
HAnimSite452 = x3d.HAnimSite()
HAnimSite452.setName("l_carpal_distal_phalanx_1_tip")
HAnimSite452.setDEF("hanim_l_carpal_distal_phalanx_1_tip")
TouchSensor453 = x3d.TouchSensor()
TouchSensor453.setDescription("HAnimSite l_carpal_distal_phalanx_1_tip")

HAnimSite452.addChildren(TouchSensor453)
Shape454 = x3d.Shape()
Shape454.setUSE("HAnimSiteShape")

HAnimSite452.addChildren(Shape454)

HAnimSegment444.addChildren(HAnimSite452)
HAnimSite455 = x3d.HAnimSite()
HAnimSite455.setName("l_dactylion")
HAnimSite455.setDEF("hanim_l_dactylion")
HAnimSite455.setTranslation([0.2056,0.6743,-0.0482])
TouchSensor456 = x3d.TouchSensor()
TouchSensor456.setDescription("HAnimSite l_dactylion")

HAnimSite455.addChildren(TouchSensor456)
Shape457 = x3d.Shape()
Shape457.setUSE("HAnimSiteShape")

HAnimSite455.addChildren(Shape457)

HAnimSegment444.addChildren(HAnimSite455)
HAnimSite458 = x3d.HAnimSite()
HAnimSite458.setName("l_metacarpal_phalanx_2")
HAnimSite458.setDEF("hanim_l_metacarpal_phalanx_2")
HAnimSite458.setTranslation([0.2009,0.8139,-0.0237])
TouchSensor459 = x3d.TouchSensor()
TouchSensor459.setDescription("HAnimSite l_metacarpal_phalanx_2")

HAnimSite458.addChildren(TouchSensor459)
Shape460 = x3d.Shape()
Shape460.setUSE("HAnimSiteShape")

HAnimSite458.addChildren(Shape460)

HAnimSegment444.addChildren(HAnimSite458)
HAnimSite461 = x3d.HAnimSite()
HAnimSite461.setName("l_metacarpal_phalanx_3")
HAnimSite461.setDEF("hanim_l_metacarpal_phalanx_3")
TouchSensor462 = x3d.TouchSensor()
TouchSensor462.setDescription("HAnimSite l_metacarpal_phalanx_3")

HAnimSite461.addChildren(TouchSensor462)
Shape463 = x3d.Shape()
Shape463.setUSE("HAnimSiteShape")

HAnimSite461.addChildren(Shape463)

HAnimSegment444.addChildren(HAnimSite461)
HAnimSite464 = x3d.HAnimSite()
HAnimSite464.setName("l_metacarpal_phalanx_5")
HAnimSite464.setDEF("hanim_l_metacarpal_phalanx_5")
HAnimSite464.setTranslation([0.1929,0.786,-0.1122])
TouchSensor465 = x3d.TouchSensor()
TouchSensor465.setDescription("HAnimSite l_metacarpal_phalanx_5")

HAnimSite464.addChildren(TouchSensor465)
Shape466 = x3d.Shape()
Shape466.setUSE("HAnimSiteShape")

HAnimSite464.addChildren(Shape466)

HAnimSegment444.addChildren(HAnimSite464)
HAnimSite467 = x3d.HAnimSite()
HAnimSite467.setName("l_ulnar_styloid")
HAnimSite467.setDEF("hanim_l_ulnar_styloid")
HAnimSite467.setTranslation([-0.2142,0.8529,-0.0648])
TouchSensor468 = x3d.TouchSensor()
TouchSensor468.setDescription("HAnimSite l_ulnar_styloid")

HAnimSite467.addChildren(TouchSensor468)
Shape469 = x3d.Shape()
Shape469.setUSE("HAnimSiteShape")

HAnimSite467.addChildren(Shape469)

HAnimSegment444.addChildren(HAnimSite467)

HAnimJoint443.addChildren(HAnimSegment444)
HAnimJoint470 = x3d.HAnimJoint()
HAnimJoint470.setName("l_radiocarpal")
HAnimJoint470.setDEF("hanim_l_radiocarpal")
HAnimJoint470.setCenter([0.1984,0.8663,-0.0583])
HAnimJoint470.setUlimit([0,0,0])
HAnimJoint470.setLlimit([0,0,0])

HAnimJoint443.addChildren(HAnimJoint470)

HAnimJoint422.addChildren(HAnimJoint443)

HAnimJoint347.addChildren(HAnimJoint422)
HAnimJoint471 = x3d.HAnimJoint()
HAnimJoint471.setName("r_shoulder")
HAnimJoint471.setDEF("hanim_r_shoulder")
HAnimJoint471.setCenter([-0.1907,1.4407,-0.0325])
HAnimJoint471.setUlimit([0,0,0])
HAnimJoint471.setLlimit([0,0,0])
HAnimSegment472 = x3d.HAnimSegment()
HAnimSegment472.setName("r_upperarm")
HAnimSegment472.setDEF("hanim_r_upperarm")
Transform473 = x3d.Transform()
Transform473.setTranslation([-0.1907,1.4407,-0.0325])
Transform474 = x3d.Transform()
#Empty Transform
Shape475 = x3d.Shape()
Shape475.setUSE("HAnimJointShape")

Transform474.addChild(Shape475)

Transform473.addChildren(Transform474)

HAnimSegment472.addChildren(Transform473)
Shape476 = x3d.Shape()
LineSet477 = x3d.LineSet()
LineSet477.setVertexCount([2])
Coordinate478 = x3d.Coordinate()
Coordinate478.setPoint([-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062])

LineSet477.setCoord(Coordinate478)
#from r_shoulder to r_elbow vertices 2
ColorRGBA479 = x3d.ColorRGBA()
ColorRGBA479.setUSE("HAnimSegmentLineColorRGBA")

LineSet477.setColor(ColorRGBA479)

Shape476.setGeometry(LineSet477)

HAnimSegment472.addChildren(Shape476)
HAnimSite480 = x3d.HAnimSite()
HAnimSite480.setName("r_humeral_medial_epicondyles")
HAnimSite480.setDEF("hanim_r_humeral_medial_epicondyles")
HAnimSite480.setTranslation([-0.168,1.1298,-0.1062])
TouchSensor481 = x3d.TouchSensor()
TouchSensor481.setDescription("HAnimSite r_humeral_medial_epicondyles")

HAnimSite480.addChildren(TouchSensor481)
Shape482 = x3d.Shape()
Shape482.setUSE("HAnimSiteShape")

HAnimSite480.addChildren(Shape482)

HAnimSegment472.addChildren(HAnimSite480)
HAnimSite483 = x3d.HAnimSite()
HAnimSite483.setName("r_olecranon")
HAnimSite483.setDEF("hanim_r_olecranon")
HAnimSite483.setTranslation([-0.1907,1.1405,-0.1065])
TouchSensor484 = x3d.TouchSensor()
TouchSensor484.setDescription("HAnimSite r_olecranon")

HAnimSite483.addChildren(TouchSensor484)
Shape485 = x3d.Shape()
Shape485.setUSE("HAnimSiteShape")

HAnimSite483.addChildren(Shape485)

HAnimSegment472.addChildren(HAnimSite483)
HAnimSite486 = x3d.HAnimSite()
HAnimSite486.setName("r_radial_styloid")
HAnimSite486.setDEF("hanim_r_radial_styloid")
HAnimSite486.setTranslation([-0.1884,0.8676,-0.036])
TouchSensor487 = x3d.TouchSensor()
TouchSensor487.setDescription("HAnimSite r_radial_styloid")

HAnimSite486.addChildren(TouchSensor487)
Shape488 = x3d.Shape()
Shape488.setUSE("HAnimSiteShape")

HAnimSite486.addChildren(Shape488)

HAnimSegment472.addChildren(HAnimSite486)
HAnimSite489 = x3d.HAnimSite()
HAnimSite489.setName("r_radiale")
HAnimSite489.setDEF("hanim_r_radiale")
HAnimSite489.setTranslation([-0.213,1.1305,-0.1091])
TouchSensor490 = x3d.TouchSensor()
TouchSensor490.setDescription("HAnimSite r_radiale")

HAnimSite489.addChildren(TouchSensor490)
Shape491 = x3d.Shape()
Shape491.setUSE("HAnimSiteShape")

HAnimSite489.addChildren(Shape491)

HAnimSegment472.addChildren(HAnimSite489)

HAnimJoint471.addChildren(HAnimSegment472)
HAnimJoint492 = x3d.HAnimJoint()
HAnimJoint492.setName("r_elbow")
HAnimJoint492.setDEF("hanim_r_elbow")
HAnimJoint492.setCenter([-0.1949,1.1388,-0.062])
HAnimJoint492.setUlimit([0,0,0])
HAnimJoint492.setLlimit([0,0,0])
HAnimSegment493 = x3d.HAnimSegment()
HAnimSegment493.setName("r_forearm")
HAnimSegment493.setDEF("hanim_r_forearm")
Transform494 = x3d.Transform()
Transform494.setTranslation([-0.1949,1.1388,-0.062])
Transform495 = x3d.Transform()
#Empty Transform
Shape496 = x3d.Shape()
Shape496.setUSE("HAnimJointShape")

Transform495.addChild(Shape496)

Transform494.addChildren(Transform495)

HAnimSegment493.addChildren(Transform494)
Shape497 = x3d.Shape()
LineSet498 = x3d.LineSet()
LineSet498.setVertexCount([2])
Coordinate499 = x3d.Coordinate()
Coordinate499.setPoint([-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521])

LineSet498.setCoord(Coordinate499)
#from r_elbow to r_radiocarpal vertices 2
ColorRGBA500 = x3d.ColorRGBA()
ColorRGBA500.setUSE("HAnimSegmentLineColorRGBA")

LineSet498.setColor(ColorRGBA500)

Shape497.setGeometry(LineSet498)

HAnimSegment493.addChildren(Shape497)
HAnimSite501 = x3d.HAnimSite()
HAnimSite501.setName("r_carpal_distal_phalanx_1_tip")
HAnimSite501.setDEF("hanim_r_carpal_distal_phalanx_1_tip")
TouchSensor502 = x3d.TouchSensor()
TouchSensor502.setDescription("HAnimSite r_carpal_distal_phalanx_1_tip")

HAnimSite501.addChildren(TouchSensor502)
Shape503 = x3d.Shape()
Shape503.setUSE("HAnimSiteShape")

HAnimSite501.addChildren(Shape503)

HAnimSegment493.addChildren(HAnimSite501)
HAnimSite504 = x3d.HAnimSite()
HAnimSite504.setName("r_dactylion")
HAnimSite504.setDEF("hanim_r_dactylion")
HAnimSite504.setTranslation([-0.1941,0.6772,-0.0423])
TouchSensor505 = x3d.TouchSensor()
TouchSensor505.setDescription("HAnimSite r_dactylion")

HAnimSite504.addChildren(TouchSensor505)
Shape506 = x3d.Shape()
Shape506.setUSE("HAnimSiteShape")

HAnimSite504.addChildren(Shape506)

HAnimSegment493.addChildren(HAnimSite504)
HAnimSite507 = x3d.HAnimSite()
HAnimSite507.setName("r_metacarpal_phalanx_2")
HAnimSite507.setDEF("hanim_r_metacarpal_phalanx_2")
HAnimSite507.setTranslation([-0.1977,0.8169,-0.0177])
TouchSensor508 = x3d.TouchSensor()
TouchSensor508.setDescription("HAnimSite r_metacarpal_phalanx_2")

HAnimSite507.addChildren(TouchSensor508)
Shape509 = x3d.Shape()
Shape509.setUSE("HAnimSiteShape")

HAnimSite507.addChildren(Shape509)

HAnimSegment493.addChildren(HAnimSite507)
HAnimSite510 = x3d.HAnimSite()
HAnimSite510.setName("r_metacarpal_phalanx_3")
HAnimSite510.setDEF("hanim_r_metacarpal_phalanx_3")
TouchSensor511 = x3d.TouchSensor()
TouchSensor511.setDescription("HAnimSite r_metacarpal_phalanx_3")

HAnimSite510.addChildren(TouchSensor511)
Shape512 = x3d.Shape()
Shape512.setUSE("HAnimSiteShape")

HAnimSite510.addChildren(Shape512)

HAnimSegment493.addChildren(HAnimSite510)
HAnimSite513 = x3d.HAnimSite()
HAnimSite513.setName("r_metacarpal_phalanx_5")
HAnimSite513.setDEF("hanim_r_metacarpal_phalanx_5")
HAnimSite513.setTranslation([-0.1929,0.789,-0.1064])
TouchSensor514 = x3d.TouchSensor()
TouchSensor514.setDescription("HAnimSite r_metacarpal_phalanx_5")

HAnimSite513.addChildren(TouchSensor514)
Shape515 = x3d.Shape()
Shape515.setUSE("HAnimSiteShape")

HAnimSite513.addChildren(Shape515)

HAnimSegment493.addChildren(HAnimSite513)
HAnimSite516 = x3d.HAnimSite()
HAnimSite516.setName("r_ulnar_styloid")
HAnimSite516.setDEF("hanim_r_ulnar_styloid")
HAnimSite516.setTranslation([-0.2117,0.8562,-0.0584])
TouchSensor517 = x3d.TouchSensor()
TouchSensor517.setDescription("HAnimSite r_ulnar_styloid")

HAnimSite516.addChildren(TouchSensor517)
Shape518 = x3d.Shape()
Shape518.setUSE("HAnimSiteShape")

HAnimSite516.addChildren(Shape518)

HAnimSegment493.addChildren(HAnimSite516)

HAnimJoint492.addChildren(HAnimSegment493)
HAnimJoint519 = x3d.HAnimJoint()
HAnimJoint519.setName("r_radiocarpal")
HAnimJoint519.setDEF("hanim_r_radiocarpal")
HAnimJoint519.setCenter([-0.1959,0.8694,-0.0521])
HAnimJoint519.setUlimit([0,0,0])
HAnimJoint519.setLlimit([0,0,0])

HAnimJoint492.addChildren(HAnimJoint519)

HAnimJoint471.addChildren(HAnimJoint492)

HAnimJoint347.addChildren(HAnimJoint471)

HAnimJoint52.addChildren(HAnimJoint347)

HAnimHumanoid43.setSkeleton(HAnimJoint52)
HAnimJoint520 = x3d.HAnimJoint()
HAnimJoint520.setUSE("hanim_humanoid_root")

HAnimHumanoid43.addJoints(HAnimJoint520)
HAnimJoint521 = x3d.HAnimJoint()
HAnimJoint521.setUSE("hanim_sacroiliac")

HAnimHumanoid43.addJoints(HAnimJoint521)
HAnimJoint522 = x3d.HAnimJoint()
HAnimJoint522.setUSE("hanim_l_hip")

HAnimHumanoid43.addJoints(HAnimJoint522)
HAnimJoint523 = x3d.HAnimJoint()
HAnimJoint523.setUSE("hanim_l_knee")

HAnimHumanoid43.addJoints(HAnimJoint523)
HAnimJoint524 = x3d.HAnimJoint()
HAnimJoint524.setUSE("hanim_l_talocrural")

HAnimHumanoid43.addJoints(HAnimJoint524)
HAnimJoint525 = x3d.HAnimJoint()
HAnimJoint525.setUSE("hanim_l_metatarsophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint525)
HAnimJoint526 = x3d.HAnimJoint()
HAnimJoint526.setUSE("hanim_r_hip")

HAnimHumanoid43.addJoints(HAnimJoint526)
HAnimJoint527 = x3d.HAnimJoint()
HAnimJoint527.setUSE("hanim_r_knee")

HAnimHumanoid43.addJoints(HAnimJoint527)
HAnimJoint528 = x3d.HAnimJoint()
HAnimJoint528.setUSE("hanim_r_talocrural")

HAnimHumanoid43.addJoints(HAnimJoint528)
HAnimJoint529 = x3d.HAnimJoint()
HAnimJoint529.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint529)
HAnimJoint530 = x3d.HAnimJoint()
HAnimJoint530.setUSE("hanim_vl5")

HAnimHumanoid43.addJoints(HAnimJoint530)
HAnimJoint531 = x3d.HAnimJoint()
HAnimJoint531.setUSE("hanim_skullbase")

HAnimHumanoid43.addJoints(HAnimJoint531)
HAnimJoint532 = x3d.HAnimJoint()
HAnimJoint532.setUSE("hanim_l_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint532)
HAnimJoint533 = x3d.HAnimJoint()
HAnimJoint533.setUSE("hanim_l_elbow")

HAnimHumanoid43.addJoints(HAnimJoint533)
HAnimJoint534 = x3d.HAnimJoint()
HAnimJoint534.setUSE("hanim_l_radiocarpal")

HAnimHumanoid43.addJoints(HAnimJoint534)
HAnimJoint535 = x3d.HAnimJoint()
HAnimJoint535.setUSE("hanim_r_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint535)
HAnimJoint536 = x3d.HAnimJoint()
HAnimJoint536.setUSE("hanim_r_elbow")

HAnimHumanoid43.addJoints(HAnimJoint536)
HAnimJoint537 = x3d.HAnimJoint()
HAnimJoint537.setUSE("hanim_r_radiocarpal")

HAnimHumanoid43.addJoints(HAnimJoint537)
HAnimSegment538 = x3d.HAnimSegment()
HAnimSegment538.setUSE("hanim_sacrum")

HAnimHumanoid43.setSegments(HAnimSegment538)
HAnimSegment539 = x3d.HAnimSegment()
HAnimSegment539.setUSE("hanim_pelvis")

HAnimHumanoid43.setSegments(HAnimSegment539)
HAnimSegment540 = x3d.HAnimSegment()
HAnimSegment540.setUSE("hanim_l_thigh")

HAnimHumanoid43.setSegments(HAnimSegment540)
HAnimSegment541 = x3d.HAnimSegment()
HAnimSegment541.setUSE("hanim_l_calf")

HAnimHumanoid43.setSegments(HAnimSegment541)
HAnimSegment542 = x3d.HAnimSegment()
HAnimSegment542.setUSE("hanim_l_talus")

HAnimHumanoid43.setSegments(HAnimSegment542)
HAnimSegment543 = x3d.HAnimSegment()
HAnimSegment543.setUSE("hanim_r_thigh")

HAnimHumanoid43.setSegments(HAnimSegment543)
HAnimSegment544 = x3d.HAnimSegment()
HAnimSegment544.setUSE("hanim_r_calf")

HAnimHumanoid43.setSegments(HAnimSegment544)
HAnimSegment545 = x3d.HAnimSegment()
HAnimSegment545.setUSE("hanim_r_talus")

HAnimHumanoid43.setSegments(HAnimSegment545)
HAnimSegment546 = x3d.HAnimSegment()
HAnimSegment546.setUSE("hanim_l5")

HAnimHumanoid43.setSegments(HAnimSegment546)
HAnimSegment547 = x3d.HAnimSegment()
HAnimSegment547.setUSE("hanim_l_upperarm")

HAnimHumanoid43.setSegments(HAnimSegment547)
HAnimSegment548 = x3d.HAnimSegment()
HAnimSegment548.setUSE("hanim_l_forearm")

HAnimHumanoid43.setSegments(HAnimSegment548)
HAnimSegment549 = x3d.HAnimSegment()
HAnimSegment549.setUSE("hanim_r_upperarm")

HAnimHumanoid43.setSegments(HAnimSegment549)
HAnimSegment550 = x3d.HAnimSegment()
HAnimSegment550.setUSE("hanim_r_forearm")

HAnimHumanoid43.setSegments(HAnimSegment550)
HAnimSite551 = x3d.HAnimSite()
HAnimSite551.setUSE("hanim_buttocks_standing_wall_contact_point")

HAnimHumanoid43.setSites(HAnimSite551)
HAnimSite552 = x3d.HAnimSite()
HAnimSite552.setUSE("hanim_crotch")

HAnimHumanoid43.setSites(HAnimSite552)
HAnimSite553 = x3d.HAnimSite()
HAnimSite553.setUSE("hanim_l_asis")

HAnimHumanoid43.setSites(HAnimSite553)
HAnimSite554 = x3d.HAnimSite()
HAnimSite554.setUSE("hanim_l_iliocristale")

HAnimHumanoid43.setSites(HAnimSite554)
HAnimSite555 = x3d.HAnimSite()
HAnimSite555.setUSE("hanim_l_psis")

HAnimHumanoid43.setSites(HAnimSite555)
HAnimSite556 = x3d.HAnimSite()
HAnimSite556.setUSE("hanim_l_trochanterion")

HAnimHumanoid43.setSites(HAnimSite556)
HAnimSite557 = x3d.HAnimSite()
HAnimSite557.setUSE("hanim_r_asis")

HAnimHumanoid43.setSites(HAnimSite557)
HAnimSite558 = x3d.HAnimSite()
HAnimSite558.setUSE("hanim_r_iliocristale")

HAnimHumanoid43.setSites(HAnimSite558)
HAnimSite559 = x3d.HAnimSite()
HAnimSite559.setUSE("hanim_r_psis")

HAnimHumanoid43.setSites(HAnimSite559)
HAnimSite560 = x3d.HAnimSite()
HAnimSite560.setUSE("hanim_r_trochanterion")

HAnimHumanoid43.setSites(HAnimSite560)
HAnimSite561 = x3d.HAnimSite()
HAnimSite561.setUSE("hanim_adams_apple")

HAnimHumanoid43.setSites(HAnimSite561)
HAnimSite562 = x3d.HAnimSite()
HAnimSite562.setUSE("hanim_cervicale")

HAnimHumanoid43.setSites(HAnimSite562)
HAnimSite563 = x3d.HAnimSite()
HAnimSite563.setUSE("hanim_l_acromion")

HAnimHumanoid43.setSites(HAnimSite563)
HAnimSite564 = x3d.HAnimSite()
HAnimSite564.setUSE("hanim_l_axilla_distal_pt")

HAnimHumanoid43.setSites(HAnimSite564)
HAnimSite565 = x3d.HAnimSite()
HAnimSite565.setUSE("hanim_l_axilla_posterior_folds")

HAnimHumanoid43.setSites(HAnimSite565)
HAnimSite566 = x3d.HAnimSite()
HAnimSite566.setUSE("hanim_l_axilla_proximal")

HAnimHumanoid43.setSites(HAnimSite566)
HAnimSite567 = x3d.HAnimSite()
HAnimSite567.setUSE("hanim_l_chest_midsagittal_plane")

HAnimHumanoid43.setSites(HAnimSite567)
HAnimSite568 = x3d.HAnimSite()
HAnimSite568.setUSE("hanim_l_clavicale")

HAnimHumanoid43.setSites(HAnimSite568)
HAnimSite569 = x3d.HAnimSite()
HAnimSite569.setUSE("hanim_l_neck_base")

HAnimHumanoid43.setSites(HAnimSite569)
HAnimSite570 = x3d.HAnimSite()
HAnimSite570.setUSE("hanim_l_rib10")

HAnimHumanoid43.setSites(HAnimSite570)
HAnimSite571 = x3d.HAnimSite()
HAnimSite571.setUSE("hanim_l_thelion")

HAnimHumanoid43.setSites(HAnimSite571)
HAnimSite572 = x3d.HAnimSite()
HAnimSite572.setUSE("hanim_mesosternale")

HAnimHumanoid43.setSites(HAnimSite572)
HAnimSite573 = x3d.HAnimSite()
HAnimSite573.setUSE("hanim_navel")

HAnimHumanoid43.setSites(HAnimSite573)
HAnimSite574 = x3d.HAnimSite()
HAnimSite574.setUSE("hanim_r_acromion")

HAnimHumanoid43.setSites(HAnimSite574)
HAnimSite575 = x3d.HAnimSite()
HAnimSite575.setUSE("hanim_r_axilla_distal_pt")

HAnimHumanoid43.setSites(HAnimSite575)
HAnimSite576 = x3d.HAnimSite()
HAnimSite576.setUSE("hanim_r_axilla_posterior_folds")

HAnimHumanoid43.setSites(HAnimSite576)
HAnimSite577 = x3d.HAnimSite()
HAnimSite577.setUSE("hanim_r_axilla_proximal")

HAnimHumanoid43.setSites(HAnimSite577)
HAnimSite578 = x3d.HAnimSite()
HAnimSite578.setUSE("hanim_r_chest_midsagittal_plane")

HAnimHumanoid43.setSites(HAnimSite578)
HAnimSite579 = x3d.HAnimSite()
HAnimSite579.setUSE("hanim_r_clavicale")

HAnimHumanoid43.setSites(HAnimSite579)
HAnimSite580 = x3d.HAnimSite()
HAnimSite580.setUSE("hanim_r_neck_base")

HAnimHumanoid43.setSites(HAnimSite580)
HAnimSite581 = x3d.HAnimSite()
HAnimSite581.setUSE("hanim_r_rib10")

HAnimHumanoid43.setSites(HAnimSite581)
HAnimSite582 = x3d.HAnimSite()
HAnimSite582.setUSE("hanim_r_thelion")

HAnimHumanoid43.setSites(HAnimSite582)
HAnimSite583 = x3d.HAnimSite()
HAnimSite583.setUSE("hanim_rear_center_midsagittal_plane")

HAnimHumanoid43.setSites(HAnimSite583)
HAnimSite584 = x3d.HAnimSite()
HAnimSite584.setUSE("hanim_spine_1_middle_back")

HAnimHumanoid43.setSites(HAnimSite584)
HAnimSite585 = x3d.HAnimSite()
HAnimSite585.setUSE("hanim_spine_2_middle_back")

HAnimHumanoid43.setSites(HAnimSite585)
HAnimSite586 = x3d.HAnimSite()
HAnimSite586.setUSE("hanim_substernale")

HAnimHumanoid43.setSites(HAnimSite586)
HAnimSite587 = x3d.HAnimSite()
HAnimSite587.setUSE("hanim_suprasternale")

HAnimHumanoid43.setSites(HAnimSite587)
HAnimSite588 = x3d.HAnimSite()
HAnimSite588.setUSE("hanim_waist_preferred_anterior")

HAnimHumanoid43.setSites(HAnimSite588)
HAnimSite589 = x3d.HAnimSite()
HAnimSite589.setUSE("hanim_waist_preferred_posterior")

HAnimHumanoid43.setSites(HAnimSite589)
HAnimSite590 = x3d.HAnimSite()
HAnimSite590.setUSE("hanim_l_femoral_lateral_epicondyles")

HAnimHumanoid43.setSites(HAnimSite590)
HAnimSite591 = x3d.HAnimSite()
HAnimSite591.setUSE("hanim_l_femoral_medial_epicondyles")

HAnimHumanoid43.setSites(HAnimSite591)
HAnimSite592 = x3d.HAnimSite()
HAnimSite592.setUSE("hanim_l_knee_crease")

HAnimHumanoid43.setSites(HAnimSite592)
HAnimSite593 = x3d.HAnimSite()
HAnimSite593.setUSE("hanim_l_suprapatella")

HAnimHumanoid43.setSites(HAnimSite593)
HAnimSite594 = x3d.HAnimSite()
HAnimSite594.setUSE("hanim_r_femoral_lateral_epicondyles")

HAnimHumanoid43.setSites(HAnimSite594)
HAnimSite595 = x3d.HAnimSite()
HAnimSite595.setUSE("hanim_r_femoral_medial_epicondyles")

HAnimHumanoid43.setSites(HAnimSite595)
HAnimSite596 = x3d.HAnimSite()
HAnimSite596.setUSE("hanim_r_knee_crease")

HAnimHumanoid43.setSites(HAnimSite596)
HAnimSite597 = x3d.HAnimSite()
HAnimSite597.setUSE("hanim_r_suprapatella")

HAnimHumanoid43.setSites(HAnimSite597)
HAnimSite598 = x3d.HAnimSite()
HAnimSite598.setUSE("hanim_l_lateral_malleolus")

HAnimHumanoid43.setSites(HAnimSite598)
HAnimSite599 = x3d.HAnimSite()
HAnimSite599.setUSE("hanim_l_medial_malleolus")

HAnimHumanoid43.setSites(HAnimSite599)
HAnimSite600 = x3d.HAnimSite()
HAnimSite600.setUSE("hanim_l_tibiale")

HAnimHumanoid43.setSites(HAnimSite600)
HAnimSite601 = x3d.HAnimSite()
HAnimSite601.setUSE("hanim_l_calcaneus_posterior")

HAnimHumanoid43.setSites(HAnimSite601)
HAnimSite602 = x3d.HAnimSite()
HAnimSite602.setUSE("hanim_l_sphyrion")

HAnimHumanoid43.setSites(HAnimSite602)
HAnimSite603 = x3d.HAnimSite()
HAnimSite603.setUSE("hanim_l_metatarsal_phalanx_1")

HAnimHumanoid43.setSites(HAnimSite603)
HAnimSite604 = x3d.HAnimSite()
HAnimSite604.setUSE("hanim_l_metatarsal_phalanx_5")

HAnimHumanoid43.setSites(HAnimSite604)
HAnimSite605 = x3d.HAnimSite()
HAnimSite605.setUSE("hanim_l_tarsal_distal_phalanx_1_tip")

HAnimHumanoid43.setSites(HAnimSite605)
HAnimSite606 = x3d.HAnimSite()
HAnimSite606.setUSE("hanim_l_tarsal_distal_phalanx_2_tip")

HAnimHumanoid43.setSites(HAnimSite606)
HAnimSite607 = x3d.HAnimSite()
HAnimSite607.setUSE("hanim_l_tarsal_distal_phalanx_3_tip")

HAnimHumanoid43.setSites(HAnimSite607)
HAnimSite608 = x3d.HAnimSite()
HAnimSite608.setUSE("hanim_l_tarsal_distal_phalanx_4_tip")

HAnimHumanoid43.setSites(HAnimSite608)
HAnimSite609 = x3d.HAnimSite()
HAnimSite609.setUSE("hanim_l_tarsal_distal_phalanx_5_tip")

HAnimHumanoid43.setSites(HAnimSite609)
HAnimSite610 = x3d.HAnimSite()
HAnimSite610.setUSE("hanim_r_lateral_malleolus")

HAnimHumanoid43.setSites(HAnimSite610)
HAnimSite611 = x3d.HAnimSite()
HAnimSite611.setUSE("hanim_r_medial_malleolus")

HAnimHumanoid43.setSites(HAnimSite611)
HAnimSite612 = x3d.HAnimSite()
HAnimSite612.setUSE("hanim_r_tibiale")

HAnimHumanoid43.setSites(HAnimSite612)
HAnimSite613 = x3d.HAnimSite()
HAnimSite613.setUSE("hanim_r_calcaneus_posterior")

HAnimHumanoid43.setSites(HAnimSite613)
HAnimSite614 = x3d.HAnimSite()
HAnimSite614.setUSE("hanim_r_sphyrion")

HAnimHumanoid43.setSites(HAnimSite614)
HAnimSite615 = x3d.HAnimSite()
HAnimSite615.setUSE("hanim_r_metatarsal_phalanx_1")

HAnimHumanoid43.setSites(HAnimSite615)
HAnimSite616 = x3d.HAnimSite()
HAnimSite616.setUSE("hanim_r_metatarsal_phalanx_5")

HAnimHumanoid43.setSites(HAnimSite616)
HAnimSite617 = x3d.HAnimSite()
HAnimSite617.setUSE("hanim_r_tarsal_distal_phalanx_1_tip")

HAnimHumanoid43.setSites(HAnimSite617)
HAnimSite618 = x3d.HAnimSite()
HAnimSite618.setUSE("hanim_r_tarsal_distal_phalanx_2_tip")

HAnimHumanoid43.setSites(HAnimSite618)
HAnimSite619 = x3d.HAnimSite()
HAnimSite619.setUSE("hanim_r_tarsal_distal_phalanx_3_tip")

HAnimHumanoid43.setSites(HAnimSite619)
HAnimSite620 = x3d.HAnimSite()
HAnimSite620.setUSE("hanim_r_tarsal_distal_phalanx_4_tip")

HAnimHumanoid43.setSites(HAnimSite620)
HAnimSite621 = x3d.HAnimSite()
HAnimSite621.setUSE("hanim_r_tarsal_distal_phalanx_5_tip")

HAnimHumanoid43.setSites(HAnimSite621)
HAnimSite622 = x3d.HAnimSite()
HAnimSite622.setUSE("hanim_glabella")

HAnimHumanoid43.setSites(HAnimSite622)
HAnimSite623 = x3d.HAnimSite()
HAnimSite623.setUSE("hanim_l_ectocanthus")

HAnimHumanoid43.setSites(HAnimSite623)
HAnimSite624 = x3d.HAnimSite()
HAnimSite624.setUSE("hanim_l_gonion")

HAnimHumanoid43.setSites(HAnimSite624)
HAnimSite625 = x3d.HAnimSite()
HAnimSite625.setUSE("hanim_l_infraorbitale")

HAnimHumanoid43.setSites(HAnimSite625)
HAnimSite626 = x3d.HAnimSite()
HAnimSite626.setUSE("hanim_l_tragion")

HAnimHumanoid43.setSites(HAnimSite626)
HAnimSite627 = x3d.HAnimSite()
HAnimSite627.setUSE("hanim_menton")

HAnimHumanoid43.setSites(HAnimSite627)
HAnimSite628 = x3d.HAnimSite()
HAnimSite628.setUSE("hanim_nuchale")

HAnimHumanoid43.setSites(HAnimSite628)
HAnimSite629 = x3d.HAnimSite()
HAnimSite629.setUSE("hanim_opisthocranion")

HAnimHumanoid43.setSites(HAnimSite629)
HAnimSite630 = x3d.HAnimSite()
HAnimSite630.setUSE("hanim_r_ectocanthus")

HAnimHumanoid43.setSites(HAnimSite630)
HAnimSite631 = x3d.HAnimSite()
HAnimSite631.setUSE("hanim_r_gonion")

HAnimHumanoid43.setSites(HAnimSite631)
HAnimSite632 = x3d.HAnimSite()
HAnimSite632.setUSE("hanim_r_infraorbitale")

HAnimHumanoid43.setSites(HAnimSite632)
HAnimSite633 = x3d.HAnimSite()
HAnimSite633.setUSE("hanim_r_tragion")

HAnimHumanoid43.setSites(HAnimSite633)
HAnimSite634 = x3d.HAnimSite()
HAnimSite634.setUSE("hanim_sellion")

HAnimHumanoid43.setSites(HAnimSite634)
HAnimSite635 = x3d.HAnimSite()
HAnimSite635.setUSE("hanim_skull_vertex")

HAnimHumanoid43.setSites(HAnimSite635)
HAnimSite636 = x3d.HAnimSite()
HAnimSite636.setUSE("hanim_supramenton")

HAnimHumanoid43.setSites(HAnimSite636)
HAnimSite637 = x3d.HAnimSite()
HAnimSite637.setUSE("hanim_l_bideltoid")

HAnimHumanoid43.setSites(HAnimSite637)
HAnimSite638 = x3d.HAnimSite()
HAnimSite638.setUSE("hanim_l_humeral_lateral_epicondyles")

HAnimHumanoid43.setSites(HAnimSite638)
HAnimSite639 = x3d.HAnimSite()
HAnimSite639.setUSE("hanim_r_bideltoid")

HAnimHumanoid43.setSites(HAnimSite639)
HAnimSite640 = x3d.HAnimSite()
HAnimSite640.setUSE("hanim_r_humeral_lateral_epicondyles")

HAnimHumanoid43.setSites(HAnimSite640)
HAnimSite641 = x3d.HAnimSite()
HAnimSite641.setUSE("hanim_l_humeral_medial_epicondyles")

HAnimHumanoid43.setSites(HAnimSite641)
HAnimSite642 = x3d.HAnimSite()
HAnimSite642.setUSE("hanim_l_olecranon")

HAnimHumanoid43.setSites(HAnimSite642)
HAnimSite643 = x3d.HAnimSite()
HAnimSite643.setUSE("hanim_l_radial_styloid")

HAnimHumanoid43.setSites(HAnimSite643)
HAnimSite644 = x3d.HAnimSite()
HAnimSite644.setUSE("hanim_l_radiale")

HAnimHumanoid43.setSites(HAnimSite644)
HAnimSite645 = x3d.HAnimSite()
HAnimSite645.setUSE("hanim_l_carpal_distal_phalanx_1_tip")

HAnimHumanoid43.setSites(HAnimSite645)
HAnimSite646 = x3d.HAnimSite()
HAnimSite646.setUSE("hanim_l_dactylion")

HAnimHumanoid43.setSites(HAnimSite646)
HAnimSite647 = x3d.HAnimSite()
HAnimSite647.setUSE("hanim_l_metacarpal_phalanx_2")

HAnimHumanoid43.setSites(HAnimSite647)
HAnimSite648 = x3d.HAnimSite()
HAnimSite648.setUSE("hanim_l_metacarpal_phalanx_3")

HAnimHumanoid43.setSites(HAnimSite648)
HAnimSite649 = x3d.HAnimSite()
HAnimSite649.setUSE("hanim_l_metacarpal_phalanx_5")

HAnimHumanoid43.setSites(HAnimSite649)
HAnimSite650 = x3d.HAnimSite()
HAnimSite650.setUSE("hanim_l_ulnar_styloid")

HAnimHumanoid43.setSites(HAnimSite650)
HAnimSite651 = x3d.HAnimSite()
HAnimSite651.setUSE("hanim_r_humeral_medial_epicondyles")

HAnimHumanoid43.setSites(HAnimSite651)
HAnimSite652 = x3d.HAnimSite()
HAnimSite652.setUSE("hanim_r_olecranon")

HAnimHumanoid43.setSites(HAnimSite652)
HAnimSite653 = x3d.HAnimSite()
HAnimSite653.setUSE("hanim_r_radial_styloid")

HAnimHumanoid43.setSites(HAnimSite653)
HAnimSite654 = x3d.HAnimSite()
HAnimSite654.setUSE("hanim_r_radiale")

HAnimHumanoid43.setSites(HAnimSite654)
HAnimSite655 = x3d.HAnimSite()
HAnimSite655.setUSE("hanim_r_carpal_distal_phalanx_1_tip")

HAnimHumanoid43.setSites(HAnimSite655)
HAnimSite656 = x3d.HAnimSite()
HAnimSite656.setUSE("hanim_r_dactylion")

HAnimHumanoid43.setSites(HAnimSite656)
HAnimSite657 = x3d.HAnimSite()
HAnimSite657.setUSE("hanim_r_metacarpal_phalanx_2")

HAnimHumanoid43.setSites(HAnimSite657)
HAnimSite658 = x3d.HAnimSite()
HAnimSite658.setUSE("hanim_r_metacarpal_phalanx_3")

HAnimHumanoid43.setSites(HAnimSite658)
HAnimSite659 = x3d.HAnimSite()
HAnimSite659.setUSE("hanim_r_metacarpal_phalanx_5")

HAnimHumanoid43.setSites(HAnimSite659)
HAnimSite660 = x3d.HAnimSite()
HAnimSite660.setUSE("hanim_r_ulnar_styloid")

HAnimHumanoid43.setSites(HAnimSite660)

Scene11.addChildren(HAnimHumanoid43)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/Humanoid1.new.python.x3d")
X3D0.toFileJSON("../data/Humanoid1.new.python.json")
