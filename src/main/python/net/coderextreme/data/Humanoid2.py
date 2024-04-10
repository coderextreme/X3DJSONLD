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
meta3.setContent("Humanoid2.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("identifier")
meta4.setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid2.x3d")

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
HAnimSite95.setName("navel")
HAnimSite95.setDEF("hanim_navel")
HAnimSite95.setTranslation([0.0069,1.0966,0.1017])
TouchSensor96 = x3d.TouchSensor()
TouchSensor96.setDescription("HAnimSite navel")

HAnimSite95.addChildren(TouchSensor96)
Shape97 = x3d.Shape()
Shape97.setUSE("HAnimSiteShape")

HAnimSite95.addChildren(Shape97)

HAnimSegment53.addChildren(HAnimSite95)
HAnimSite98 = x3d.HAnimSite()
HAnimSite98.setName("waist_preferred_anterior")
HAnimSite98.setDEF("hanim_waist_preferred_anterior")
TouchSensor99 = x3d.TouchSensor()
TouchSensor99.setDescription("HAnimSite waist_preferred_anterior")

HAnimSite98.addChildren(TouchSensor99)
Shape100 = x3d.Shape()
Shape100.setUSE("HAnimSiteShape")

HAnimSite98.addChildren(Shape100)

HAnimSegment53.addChildren(HAnimSite98)
HAnimSite101 = x3d.HAnimSite()
HAnimSite101.setName("waist_preferred_posterior")
HAnimSite101.setDEF("hanim_waist_preferred_posterior")
HAnimSite101.setTranslation([0.29,1.0915,-0.1091])
TouchSensor102 = x3d.TouchSensor()
TouchSensor102.setDescription("HAnimSite waist_preferred_posterior")

HAnimSite101.addChildren(TouchSensor102)
Shape103 = x3d.Shape()
Shape103.setUSE("HAnimSiteShape")

HAnimSite101.addChildren(Shape103)

HAnimSegment53.addChildren(HAnimSite101)

HAnimJoint52.addChildren(HAnimSegment53)
HAnimJoint104 = x3d.HAnimJoint()
HAnimJoint104.setName("sacroiliac")
HAnimJoint104.setDEF("hanim_sacroiliac")
HAnimJoint104.setCenter([0,0.9149,0.0016])
HAnimSegment105 = x3d.HAnimSegment()
HAnimSegment105.setName("pelvis")
HAnimSegment105.setDEF("hanim_pelvis")
Transform106 = x3d.Transform()
Transform106.setTranslation([0,0.9149,0.0016])
Transform107 = x3d.Transform()
#Empty Transform
Shape108 = x3d.Shape()
Shape108.setUSE("HAnimJointShape")

Transform107.addChild(Shape108)

Transform106.addChildren(Transform107)

HAnimSegment105.addChildren(Transform106)
Shape109 = x3d.Shape()
LineSet110 = x3d.LineSet()
LineSet110.setVertexCount([2])
Coordinate111 = x3d.Coordinate()
Coordinate111.setPoint([0,0.9149,0.0016,0.0961,0.9124,-0.0001])

LineSet110.setCoord(Coordinate111)
#from sacroiliac to l_hip vertices 2
ColorRGBA112 = x3d.ColorRGBA()
ColorRGBA112.setUSE("HAnimSegmentLineColorRGBA")

LineSet110.setColor(ColorRGBA112)

Shape109.setGeometry(LineSet110)

HAnimSegment105.addChildren(Shape109)
HAnimSite113 = x3d.HAnimSite()
HAnimSite113.setName("l_femoral_lateral_epicondyles")
HAnimSite113.setDEF("hanim_l_femoral_lateral_epicondyles")
HAnimSite113.setTranslation([0.1598,0.4967,0.0297])
TouchSensor114 = x3d.TouchSensor()
TouchSensor114.setDescription("HAnimSite l_femoral_lateral_epicondyles")

HAnimSite113.addChildren(TouchSensor114)
Shape115 = x3d.Shape()
Shape115.setUSE("HAnimSiteShape")

HAnimSite113.addChildren(Shape115)

HAnimSegment105.addChildren(HAnimSite113)
HAnimSite116 = x3d.HAnimSite()
HAnimSite116.setName("l_femoral_medial_epicondyles")
HAnimSite116.setDEF("hanim_l_femoral_medial_epicondyles")
HAnimSite116.setTranslation([0.0398,0.4946,0.0303])
TouchSensor117 = x3d.TouchSensor()
TouchSensor117.setDescription("HAnimSite l_femoral_medial_epicondyles")

HAnimSite116.addChildren(TouchSensor117)
Shape118 = x3d.Shape()
Shape118.setUSE("HAnimSiteShape")

HAnimSite116.addChildren(Shape118)

HAnimSegment105.addChildren(HAnimSite116)
HAnimSite119 = x3d.HAnimSite()
HAnimSite119.setName("l_knee_crease")
HAnimSite119.setDEF("hanim_l_knee_crease")
HAnimSite119.setTranslation([0.0993,0.4881,-0.0309])
TouchSensor120 = x3d.TouchSensor()
TouchSensor120.setDescription("HAnimSite l_knee_crease")

HAnimSite119.addChildren(TouchSensor120)
Shape121 = x3d.Shape()
Shape121.setUSE("HAnimSiteShape")

HAnimSite119.addChildren(Shape121)

HAnimSegment105.addChildren(HAnimSite119)
HAnimSite122 = x3d.HAnimSite()
HAnimSite122.setName("l_suprapatella")
HAnimSite122.setDEF("hanim_l_suprapatella")
TouchSensor123 = x3d.TouchSensor()
TouchSensor123.setDescription("HAnimSite l_suprapatella")

HAnimSite122.addChildren(TouchSensor123)
Shape124 = x3d.Shape()
Shape124.setUSE("HAnimSiteShape")

HAnimSite122.addChildren(Shape124)

HAnimSegment105.addChildren(HAnimSite122)
Shape125 = x3d.Shape()
LineSet126 = x3d.LineSet()
LineSet126.setVertexCount([2])
Coordinate127 = x3d.Coordinate()
Coordinate127.setPoint([0,0.9149,0.0016,-0.095,0.9171,0.0029])

LineSet126.setCoord(Coordinate127)
#from sacroiliac to r_hip vertices 2
ColorRGBA128 = x3d.ColorRGBA()
ColorRGBA128.setUSE("HAnimSegmentLineColorRGBA")

LineSet126.setColor(ColorRGBA128)

Shape125.setGeometry(LineSet126)

HAnimSegment105.addChildren(Shape125)
HAnimSite129 = x3d.HAnimSite()
HAnimSite129.setName("r_femoral_lateral_epicondyles")
HAnimSite129.setDEF("hanim_r_femoral_lateral_epicondyles")
HAnimSite129.setTranslation([-0.1421,0.4992,0.031])
TouchSensor130 = x3d.TouchSensor()
TouchSensor130.setDescription("HAnimSite r_femoral_lateral_epicondyles")

HAnimSite129.addChildren(TouchSensor130)
Shape131 = x3d.Shape()
Shape131.setUSE("HAnimSiteShape")

HAnimSite129.addChildren(Shape131)

HAnimSegment105.addChildren(HAnimSite129)
HAnimSite132 = x3d.HAnimSite()
HAnimSite132.setName("r_femoral_medial_epicondyles")
HAnimSite132.setDEF("hanim_r_femoral_medial_epicondyles")
HAnimSite132.setTranslation([-0.0221,0.5014,0.0289])
TouchSensor133 = x3d.TouchSensor()
TouchSensor133.setDescription("HAnimSite r_femoral_medial_epicondyles")

HAnimSite132.addChildren(TouchSensor133)
Shape134 = x3d.Shape()
Shape134.setUSE("HAnimSiteShape")

HAnimSite132.addChildren(Shape134)

HAnimSegment105.addChildren(HAnimSite132)
HAnimSite135 = x3d.HAnimSite()
HAnimSite135.setName("r_knee_crease")
HAnimSite135.setDEF("hanim_r_knee_crease")
HAnimSite135.setTranslation([-0.0825,0.4932,-0.0326])
TouchSensor136 = x3d.TouchSensor()
TouchSensor136.setDescription("HAnimSite r_knee_crease")

HAnimSite135.addChildren(TouchSensor136)
Shape137 = x3d.Shape()
Shape137.setUSE("HAnimSiteShape")

HAnimSite135.addChildren(Shape137)

HAnimSegment105.addChildren(HAnimSite135)
HAnimSite138 = x3d.HAnimSite()
HAnimSite138.setName("r_suprapatella")
HAnimSite138.setDEF("hanim_r_suprapatella")
TouchSensor139 = x3d.TouchSensor()
TouchSensor139.setDescription("HAnimSite r_suprapatella")

HAnimSite138.addChildren(TouchSensor139)
Shape140 = x3d.Shape()
Shape140.setUSE("HAnimSiteShape")

HAnimSite138.addChildren(Shape140)

HAnimSegment105.addChildren(HAnimSite138)

HAnimJoint104.addChildren(HAnimSegment105)
HAnimJoint141 = x3d.HAnimJoint()
HAnimJoint141.setName("l_hip")
HAnimJoint141.setDEF("hanim_l_hip")
HAnimJoint141.setCenter([0.0961,0.9124,-0.0001])
HAnimSegment142 = x3d.HAnimSegment()
HAnimSegment142.setName("l_thigh")
HAnimSegment142.setDEF("hanim_l_thigh")
Transform143 = x3d.Transform()
Transform143.setTranslation([0.0961,0.9124,-0.0001])
Transform144 = x3d.Transform()
#Empty Transform
Shape145 = x3d.Shape()
Shape145.setUSE("HAnimJointShape")

Transform144.addChild(Shape145)

Transform143.addChildren(Transform144)

HAnimSegment142.addChildren(Transform143)
Shape146 = x3d.Shape()
LineSet147 = x3d.LineSet()
LineSet147.setVertexCount([2])
Coordinate148 = x3d.Coordinate()
Coordinate148.setPoint([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308])

LineSet147.setCoord(Coordinate148)
#from l_hip to l_knee vertices 2
ColorRGBA149 = x3d.ColorRGBA()
ColorRGBA149.setUSE("HAnimSegmentLineColorRGBA")

LineSet147.setColor(ColorRGBA149)

Shape146.setGeometry(LineSet147)

HAnimSegment142.addChildren(Shape146)
HAnimSite150 = x3d.HAnimSite()
HAnimSite150.setName("l_lateral_malleolus")
HAnimSite150.setDEF("hanim_l_lateral_malleolus")
HAnimSite150.setTranslation([0.1308,0.0597,-0.1032])
TouchSensor151 = x3d.TouchSensor()
TouchSensor151.setDescription("HAnimSite l_lateral_malleolus")

HAnimSite150.addChildren(TouchSensor151)
Shape152 = x3d.Shape()
Shape152.setUSE("HAnimSiteShape")

HAnimSite150.addChildren(Shape152)

HAnimSegment142.addChildren(HAnimSite150)
HAnimSite153 = x3d.HAnimSite()
HAnimSite153.setName("l_medial_malleolus")
HAnimSite153.setDEF("hanim_l_medial_malleolus")
HAnimSite153.setTranslation([0.089,0.0716,-0.0881])
TouchSensor154 = x3d.TouchSensor()
TouchSensor154.setDescription("HAnimSite l_medial_malleolus")

HAnimSite153.addChildren(TouchSensor154)
Shape155 = x3d.Shape()
Shape155.setUSE("HAnimSiteShape")

HAnimSite153.addChildren(Shape155)

HAnimSegment142.addChildren(HAnimSite153)
HAnimSite156 = x3d.HAnimSite()
HAnimSite156.setName("l_tibiale")
HAnimSite156.setDEF("hanim_l_tibiale")
TouchSensor157 = x3d.TouchSensor()
TouchSensor157.setDescription("HAnimSite l_tibiale")

HAnimSite156.addChildren(TouchSensor157)
Shape158 = x3d.Shape()
Shape158.setUSE("HAnimSiteShape")

HAnimSite156.addChildren(Shape158)

HAnimSegment142.addChildren(HAnimSite156)

HAnimJoint141.addChildren(HAnimSegment142)
HAnimJoint159 = x3d.HAnimJoint()
HAnimJoint159.setName("l_knee")
HAnimJoint159.setDEF("hanim_l_knee")
HAnimJoint159.setCenter([0.104,0.4867,0.0308])
HAnimSegment160 = x3d.HAnimSegment()
HAnimSegment160.setName("l_calf")
HAnimSegment160.setDEF("hanim_l_calf")
Transform161 = x3d.Transform()
Transform161.setTranslation([0.104,0.4867,0.0308])
Transform162 = x3d.Transform()
#Empty Transform
Shape163 = x3d.Shape()
Shape163.setUSE("HAnimJointShape")

Transform162.addChild(Shape163)

Transform161.addChildren(Transform162)

HAnimSegment160.addChildren(Transform161)
Shape164 = x3d.Shape()
LineSet165 = x3d.LineSet()
LineSet165.setVertexCount([2])
Coordinate166 = x3d.Coordinate()
Coordinate166.setPoint([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736])

LineSet165.setCoord(Coordinate166)
#from l_knee to l_talocrural vertices 2
ColorRGBA167 = x3d.ColorRGBA()
ColorRGBA167.setUSE("HAnimSegmentLineColorRGBA")

LineSet165.setColor(ColorRGBA167)

Shape164.setGeometry(LineSet165)

HAnimSegment160.addChildren(Shape164)
HAnimSite168 = x3d.HAnimSite()
HAnimSite168.setName("l_calcaneus_posterior")
HAnimSite168.setDEF("hanim_l_calcaneus_posterior")
HAnimSite168.setTranslation([0.0974,0.0259,-0.1171])
TouchSensor169 = x3d.TouchSensor()
TouchSensor169.setDescription("HAnimSite l_calcaneus_posterior")

HAnimSite168.addChildren(TouchSensor169)
Shape170 = x3d.Shape()
Shape170.setUSE("HAnimSiteShape")

HAnimSite168.addChildren(Shape170)

HAnimSegment160.addChildren(HAnimSite168)
HAnimSite171 = x3d.HAnimSite()
HAnimSite171.setName("l_sphyrion")
HAnimSite171.setDEF("hanim_l_sphyrion")
HAnimSite171.setTranslation([0.089,0.0575,-0.0943])
TouchSensor172 = x3d.TouchSensor()
TouchSensor172.setDescription("HAnimSite l_sphyrion")

HAnimSite171.addChildren(TouchSensor172)
Shape173 = x3d.Shape()
Shape173.setUSE("HAnimSiteShape")

HAnimSite171.addChildren(Shape173)

HAnimSegment160.addChildren(HAnimSite171)

HAnimJoint159.addChildren(HAnimSegment160)
HAnimJoint174 = x3d.HAnimJoint()
HAnimJoint174.setName("l_talocrural")
HAnimJoint174.setDEF("hanim_l_talocrural")
HAnimJoint174.setCenter([0.1101,0.0656,-0.0736])
HAnimSegment175 = x3d.HAnimSegment()
HAnimSegment175.setName("l_talus")
HAnimSegment175.setDEF("hanim_l_talus")
Transform176 = x3d.Transform()
Transform176.setScale([0.15,0.15,0.15])
Transform176.setTranslation([0.08,0.06,-0.025])
Transform176.setRotation([1,0,0,-1.57])
#Transform left foot
Transform177 = x3d.Transform()
#Empty Transform left foot
Shape178 = x3d.Shape()
Shape178.setUSE("HAnimJointShape")

Transform177.addChild(Shape178)

Transform176.addChildren(Transform177)

HAnimSegment175.addChildren(Transform176)
Shape179 = x3d.Shape()
LineSet180 = x3d.LineSet()
LineSet180.setVertexCount([2])
Coordinate181 = x3d.Coordinate()
Coordinate181.setPoint([0.1101,0.0656,-0.0736,0.08,0.0175,-0.0608])

LineSet180.setCoord(Coordinate181)
#from l_talocrural to l_tarsometatarsal_2 vertices 2
ColorRGBA182 = x3d.ColorRGBA()
ColorRGBA182.setUSE("HAnimSegmentLineColorRGBA")

LineSet180.setColor(ColorRGBA182)

Shape179.setGeometry(LineSet180)

HAnimSegment175.addChildren(Shape179)

HAnimJoint174.addChildren(HAnimSegment175)
HAnimJoint183 = x3d.HAnimJoint()
HAnimJoint183.setName("l_tarsometatarsal_2")
HAnimJoint183.setDEF("hanim_l_tarsometatarsal_2")
HAnimJoint183.setCenter([0.08,0.0175,-0.0608])
HAnimSegment184 = x3d.HAnimSegment()
HAnimSegment184.setName("l_metatarsal_2")
HAnimSegment184.setDEF("hanim_l_metatarsal_2")
Transform185 = x3d.Transform()
Transform185.setTranslation([0.08,0.0175,-0.0608])
Transform186 = x3d.Transform()
#Empty Transform
Shape187 = x3d.Shape()
Shape187.setUSE("HAnimJointShape")

Transform186.addChild(Shape187)

Transform185.addChildren(Transform186)

HAnimSegment184.addChildren(Transform185)
Shape188 = x3d.Shape()
LineSet189 = x3d.LineSet()
LineSet189.setVertexCount([2])
Coordinate190 = x3d.Coordinate()
Coordinate190.setPoint([0.08,0.0175,-0.0608,0.0824,0.0064,-0.004])

LineSet189.setCoord(Coordinate190)
#from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA191 = x3d.ColorRGBA()
ColorRGBA191.setUSE("HAnimSegmentLineColorRGBA")

LineSet189.setColor(ColorRGBA191)

Shape188.setGeometry(LineSet189)

HAnimSegment184.addChildren(Shape188)
HAnimSite192 = x3d.HAnimSite()
HAnimSite192.setName("l_metatarsal_phalanx_1")
HAnimSite192.setDEF("hanim_l_metatarsal_phalanx_1")
TouchSensor193 = x3d.TouchSensor()
TouchSensor193.setDescription("HAnimSite l_metatarsal_phalanx_1")

HAnimSite192.addChildren(TouchSensor193)
Shape194 = x3d.Shape()
Shape194.setUSE("HAnimSiteShape")

HAnimSite192.addChildren(Shape194)

HAnimSegment184.addChildren(HAnimSite192)
HAnimSite195 = x3d.HAnimSite()
HAnimSite195.setName("l_metatarsal_phalanx_5")
HAnimSite195.setDEF("hanim_l_metatarsal_phalanx_5")
TouchSensor196 = x3d.TouchSensor()
TouchSensor196.setDescription("HAnimSite l_metatarsal_phalanx_5")

HAnimSite195.addChildren(TouchSensor196)
Shape197 = x3d.Shape()
Shape197.setUSE("HAnimSiteShape")

HAnimSite195.addChildren(Shape197)

HAnimSegment184.addChildren(HAnimSite195)
HAnimSite198 = x3d.HAnimSite()
HAnimSite198.setName("l_tarsal_distal_phalanx_1_tip")
HAnimSite198.setDEF("hanim_l_tarsal_distal_phalanx_1_tip")
TouchSensor199 = x3d.TouchSensor()
TouchSensor199.setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip")

HAnimSite198.addChildren(TouchSensor199)
Shape200 = x3d.Shape()
Shape200.setUSE("HAnimSiteShape")

HAnimSite198.addChildren(Shape200)

HAnimSegment184.addChildren(HAnimSite198)
HAnimSite201 = x3d.HAnimSite()
HAnimSite201.setName("l_tarsal_distal_phalanx_2_tip")
HAnimSite201.setDEF("hanim_l_tarsal_distal_phalanx_2_tip")
HAnimSite201.setTranslation([0.1195,0.0079,0.1433])
TouchSensor202 = x3d.TouchSensor()
TouchSensor202.setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip")

HAnimSite201.addChildren(TouchSensor202)
Shape203 = x3d.Shape()
Shape203.setUSE("HAnimSiteShape")

HAnimSite201.addChildren(Shape203)

HAnimSegment184.addChildren(HAnimSite201)
HAnimSite204 = x3d.HAnimSite()
HAnimSite204.setName("l_tarsal_distal_phalanx_3_tip")
HAnimSite204.setDEF("hanim_l_tarsal_distal_phalanx_3_tip")
TouchSensor205 = x3d.TouchSensor()
TouchSensor205.setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip")

HAnimSite204.addChildren(TouchSensor205)
Shape206 = x3d.Shape()
Shape206.setUSE("HAnimSiteShape")

HAnimSite204.addChildren(Shape206)

HAnimSegment184.addChildren(HAnimSite204)
HAnimSite207 = x3d.HAnimSite()
HAnimSite207.setName("l_tarsal_distal_phalanx_4_tip")
HAnimSite207.setDEF("hanim_l_tarsal_distal_phalanx_4_tip")
TouchSensor208 = x3d.TouchSensor()
TouchSensor208.setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip")

HAnimSite207.addChildren(TouchSensor208)
Shape209 = x3d.Shape()
Shape209.setUSE("HAnimSiteShape")

HAnimSite207.addChildren(Shape209)

HAnimSegment184.addChildren(HAnimSite207)
HAnimSite210 = x3d.HAnimSite()
HAnimSite210.setName("l_tarsal_distal_phalanx_5_tip")
HAnimSite210.setDEF("hanim_l_tarsal_distal_phalanx_5_tip")
TouchSensor211 = x3d.TouchSensor()
TouchSensor211.setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip")

HAnimSite210.addChildren(TouchSensor211)
Shape212 = x3d.Shape()
Shape212.setUSE("HAnimSiteShape")

HAnimSite210.addChildren(Shape212)

HAnimSegment184.addChildren(HAnimSite210)

HAnimJoint183.addChildren(HAnimSegment184)
HAnimJoint213 = x3d.HAnimJoint()
HAnimJoint213.setName("l_metatarsophalangeal_2")
HAnimJoint213.setDEF("hanim_l_metatarsophalangeal_2")
HAnimJoint213.setCenter([0.0824,0.0064,-0.004])
HAnimSegment214 = x3d.HAnimSegment()
HAnimSegment214.setName("l_tarsal_proximal_phalanx_2")
HAnimSegment214.setDEF("hanim_l_tarsal_proximal_phalanx_2")
Transform215 = x3d.Transform()
Transform215.setTranslation([0.0824,0.0064,-0.004])
Transform216 = x3d.Transform()
#Empty Transform
Shape217 = x3d.Shape()
Shape217.setUSE("HAnimJointShape")

Transform216.addChild(Shape217)

Transform215.addChildren(Transform216)

HAnimSegment214.addChildren(Transform215)
Shape218 = x3d.Shape()
LineSet219 = x3d.LineSet()
LineSet219.setVertexCount([2])
Coordinate220 = x3d.Coordinate()
Coordinate220.setPoint([0.0824,0.0064,-0.004,0.0841,0.0013,0.0216])

LineSet219.setCoord(Coordinate220)
#from l_metatarsophalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA221 = x3d.ColorRGBA()
ColorRGBA221.setUSE("HAnimSegmentLineColorRGBA")

LineSet219.setColor(ColorRGBA221)

Shape218.setGeometry(LineSet219)

HAnimSegment214.addChildren(Shape218)

HAnimJoint213.addChildren(HAnimSegment214)
HAnimJoint222 = x3d.HAnimJoint()
HAnimJoint222.setName("l_tarsal_distal_interphalangeal_2")
HAnimJoint222.setDEF("hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint222.setCenter([0.0841,0.0013,0.0216])

HAnimJoint213.addChildren(HAnimJoint222)

HAnimJoint183.addChildren(HAnimJoint213)

HAnimJoint174.addChildren(HAnimJoint183)

HAnimJoint159.addChildren(HAnimJoint174)

HAnimJoint141.addChildren(HAnimJoint159)

HAnimJoint104.addChildren(HAnimJoint141)
HAnimJoint223 = x3d.HAnimJoint()
HAnimJoint223.setName("r_hip")
HAnimJoint223.setDEF("hanim_r_hip")
HAnimJoint223.setCenter([-0.095,0.9171,0.0029])
HAnimSegment224 = x3d.HAnimSegment()
HAnimSegment224.setName("r_thigh")
HAnimSegment224.setDEF("hanim_r_thigh")
Transform225 = x3d.Transform()
Transform225.setTranslation([-0.095,0.9171,0.0029])
Transform226 = x3d.Transform()
#Empty Transform
Shape227 = x3d.Shape()
Shape227.setUSE("HAnimJointShape")

Transform226.addChild(Shape227)

Transform225.addChildren(Transform226)

HAnimSegment224.addChildren(Transform225)
Shape228 = x3d.Shape()
LineSet229 = x3d.LineSet()
LineSet229.setVertexCount([2])
Coordinate230 = x3d.Coordinate()
Coordinate230.setPoint([-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318])

LineSet229.setCoord(Coordinate230)
#from r_hip to r_knee vertices 2
ColorRGBA231 = x3d.ColorRGBA()
ColorRGBA231.setUSE("HAnimSegmentLineColorRGBA")

LineSet229.setColor(ColorRGBA231)

Shape228.setGeometry(LineSet229)

HAnimSegment224.addChildren(Shape228)
HAnimSite232 = x3d.HAnimSite()
HAnimSite232.setName("r_lateral_malleolus")
HAnimSite232.setDEF("hanim_r_lateral_malleolus")
HAnimSite232.setTranslation([-0.1006,0.0658,-0.1075])
TouchSensor233 = x3d.TouchSensor()
TouchSensor233.setDescription("HAnimSite r_lateral_malleolus")

HAnimSite232.addChildren(TouchSensor233)
Shape234 = x3d.Shape()
Shape234.setUSE("HAnimSiteShape")

HAnimSite232.addChildren(Shape234)

HAnimSegment224.addChildren(HAnimSite232)
HAnimSite235 = x3d.HAnimSite()
HAnimSite235.setName("r_medial_malleolus")
HAnimSite235.setDEF("hanim_r_medial_malleolus")
HAnimSite235.setTranslation([-0.0591,0.076,-0.0928])
TouchSensor236 = x3d.TouchSensor()
TouchSensor236.setDescription("HAnimSite r_medial_malleolus")

HAnimSite235.addChildren(TouchSensor236)
Shape237 = x3d.Shape()
Shape237.setUSE("HAnimSiteShape")

HAnimSite235.addChildren(Shape237)

HAnimSegment224.addChildren(HAnimSite235)
HAnimSite238 = x3d.HAnimSite()
HAnimSite238.setName("r_tibiale")
HAnimSite238.setDEF("hanim_r_tibiale")
TouchSensor239 = x3d.TouchSensor()
TouchSensor239.setDescription("HAnimSite r_tibiale")

HAnimSite238.addChildren(TouchSensor239)
Shape240 = x3d.Shape()
Shape240.setUSE("HAnimSiteShape")

HAnimSite238.addChildren(Shape240)

HAnimSegment224.addChildren(HAnimSite238)

HAnimJoint223.addChildren(HAnimSegment224)
HAnimJoint241 = x3d.HAnimJoint()
HAnimJoint241.setName("r_knee")
HAnimJoint241.setDEF("hanim_r_knee")
HAnimJoint241.setCenter([-0.0867,0.4913,0.0318])
HAnimSegment242 = x3d.HAnimSegment()
HAnimSegment242.setName("r_calf")
HAnimSegment242.setDEF("hanim_r_calf")
Transform243 = x3d.Transform()
Transform243.setTranslation([-0.0867,0.4913,0.0318])
Transform244 = x3d.Transform()
#Empty Transform
Shape245 = x3d.Shape()
Shape245.setUSE("HAnimJointShape")

Transform244.addChild(Shape245)

Transform243.addChildren(Transform244)

HAnimSegment242.addChildren(Transform243)
Shape246 = x3d.Shape()
LineSet247 = x3d.LineSet()
LineSet247.setVertexCount([2])
Coordinate248 = x3d.Coordinate()
Coordinate248.setPoint([-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766])

LineSet247.setCoord(Coordinate248)
#from r_knee to r_talocrural vertices 2
ColorRGBA249 = x3d.ColorRGBA()
ColorRGBA249.setUSE("HAnimSegmentLineColorRGBA")

LineSet247.setColor(ColorRGBA249)

Shape246.setGeometry(LineSet247)

HAnimSegment242.addChildren(Shape246)
HAnimSite250 = x3d.HAnimSite()
HAnimSite250.setName("r_calcaneus_posterior")
HAnimSite250.setDEF("hanim_r_calcaneus_posterior")
HAnimSite250.setTranslation([-0.0692,0.0297,-0.1221])
TouchSensor251 = x3d.TouchSensor()
TouchSensor251.setDescription("HAnimSite r_calcaneus_posterior")

HAnimSite250.addChildren(TouchSensor251)
Shape252 = x3d.Shape()
Shape252.setUSE("HAnimSiteShape")

HAnimSite250.addChildren(Shape252)

HAnimSegment242.addChildren(HAnimSite250)
HAnimSite253 = x3d.HAnimSite()
HAnimSite253.setName("r_sphyrion")
HAnimSite253.setDEF("hanim_r_sphyrion")
HAnimSite253.setTranslation([-0.0603,0.061,-0.1002])
TouchSensor254 = x3d.TouchSensor()
TouchSensor254.setDescription("HAnimSite r_sphyrion")

HAnimSite253.addChildren(TouchSensor254)
Shape255 = x3d.Shape()
Shape255.setUSE("HAnimSiteShape")

HAnimSite253.addChildren(Shape255)

HAnimSegment242.addChildren(HAnimSite253)

HAnimJoint241.addChildren(HAnimSegment242)
HAnimJoint256 = x3d.HAnimJoint()
HAnimJoint256.setName("r_talocrural")
HAnimJoint256.setDEF("hanim_r_talocrural")
HAnimJoint256.setCenter([-0.0801,0.0712,-0.0766])
HAnimSegment257 = x3d.HAnimSegment()
HAnimSegment257.setName("r_talus")
HAnimSegment257.setDEF("hanim_r_talus")
Transform258 = x3d.Transform()
Transform258.setScale([0.15,0.15,0.15])
Transform258.setTranslation([-0.05,0.06,-0.025])
Transform258.setRotation([1,0,0,-1.57])
#Transform right foot
Transform259 = x3d.Transform()
#Empty Transform right foot
Shape260 = x3d.Shape()
Shape260.setUSE("HAnimJointShape")

Transform259.addChild(Shape260)

Transform258.addChildren(Transform259)

HAnimSegment257.addChildren(Transform258)
Shape261 = x3d.Shape()
LineSet262 = x3d.LineSet()
LineSet262.setVertexCount([2])
Coordinate263 = x3d.Coordinate()
Coordinate263.setPoint([-0.0801,0.0712,-0.0766,-0.08,0.0175,-0.0608])

LineSet262.setCoord(Coordinate263)
#from r_talocrural to r_tarsometatarsal_2 vertices 2
ColorRGBA264 = x3d.ColorRGBA()
ColorRGBA264.setUSE("HAnimSegmentLineColorRGBA")

LineSet262.setColor(ColorRGBA264)

Shape261.setGeometry(LineSet262)

HAnimSegment257.addChildren(Shape261)

HAnimJoint256.addChildren(HAnimSegment257)
HAnimJoint265 = x3d.HAnimJoint()
HAnimJoint265.setName("r_tarsometatarsal_2")
HAnimJoint265.setDEF("hanim_r_tarsometatarsal_2")
HAnimJoint265.setCenter([-0.08,0.0175,-0.0608])
HAnimSegment266 = x3d.HAnimSegment()
HAnimSegment266.setName("r_metatarsal_2")
HAnimSegment266.setDEF("hanim_r_metatarsal_2")
Transform267 = x3d.Transform()
Transform267.setTranslation([-0.08,0.0175,-0.0608])
Transform268 = x3d.Transform()
#Empty Transform
Shape269 = x3d.Shape()
Shape269.setUSE("HAnimJointShape")

Transform268.addChild(Shape269)

Transform267.addChildren(Transform268)

HAnimSegment266.addChildren(Transform267)
Shape270 = x3d.Shape()
LineSet271 = x3d.LineSet()
LineSet271.setVertexCount([2])
Coordinate272 = x3d.Coordinate()
Coordinate272.setPoint([-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004])

LineSet271.setCoord(Coordinate272)
#from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA273 = x3d.ColorRGBA()
ColorRGBA273.setUSE("HAnimSegmentLineColorRGBA")

LineSet271.setColor(ColorRGBA273)

Shape270.setGeometry(LineSet271)

HAnimSegment266.addChildren(Shape270)
HAnimSite274 = x3d.HAnimSite()
HAnimSite274.setName("r_metatarsal_phalanx_1")
HAnimSite274.setDEF("hanim_r_metatarsal_phalanx_1")
TouchSensor275 = x3d.TouchSensor()
TouchSensor275.setDescription("HAnimSite r_metatarsal_phalanx_1")

HAnimSite274.addChildren(TouchSensor275)
Shape276 = x3d.Shape()
Shape276.setUSE("HAnimSiteShape")

HAnimSite274.addChildren(Shape276)

HAnimSegment266.addChildren(HAnimSite274)
HAnimSite277 = x3d.HAnimSite()
HAnimSite277.setName("r_metatarsal_phalanx_5")
HAnimSite277.setDEF("hanim_r_metatarsal_phalanx_5")
TouchSensor278 = x3d.TouchSensor()
TouchSensor278.setDescription("HAnimSite r_metatarsal_phalanx_5")

HAnimSite277.addChildren(TouchSensor278)
Shape279 = x3d.Shape()
Shape279.setUSE("HAnimSiteShape")

HAnimSite277.addChildren(Shape279)

HAnimSegment266.addChildren(HAnimSite277)
HAnimSite280 = x3d.HAnimSite()
HAnimSite280.setName("r_tarsal_distal_phalanx_1_tip")
HAnimSite280.setDEF("hanim_r_tarsal_distal_phalanx_1_tip")
TouchSensor281 = x3d.TouchSensor()
TouchSensor281.setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip")

HAnimSite280.addChildren(TouchSensor281)
Shape282 = x3d.Shape()
Shape282.setUSE("HAnimSiteShape")

HAnimSite280.addChildren(Shape282)

HAnimSegment266.addChildren(HAnimSite280)
HAnimSite283 = x3d.HAnimSite()
HAnimSite283.setName("r_tarsal_distal_phalanx_2_tip")
HAnimSite283.setDEF("hanim_r_tarsal_distal_phalanx_2_tip")
HAnimSite283.setTranslation([-0.0883,0.0134,0.1383])
TouchSensor284 = x3d.TouchSensor()
TouchSensor284.setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip")

HAnimSite283.addChildren(TouchSensor284)
Shape285 = x3d.Shape()
Shape285.setUSE("HAnimSiteShape")

HAnimSite283.addChildren(Shape285)

HAnimSegment266.addChildren(HAnimSite283)
HAnimSite286 = x3d.HAnimSite()
HAnimSite286.setName("r_tarsal_distal_phalanx_3_tip")
HAnimSite286.setDEF("hanim_r_tarsal_distal_phalanx_3_tip")
TouchSensor287 = x3d.TouchSensor()
TouchSensor287.setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip")

HAnimSite286.addChildren(TouchSensor287)
Shape288 = x3d.Shape()
Shape288.setUSE("HAnimSiteShape")

HAnimSite286.addChildren(Shape288)

HAnimSegment266.addChildren(HAnimSite286)
HAnimSite289 = x3d.HAnimSite()
HAnimSite289.setName("r_tarsal_distal_phalanx_4_tip")
HAnimSite289.setDEF("hanim_r_tarsal_distal_phalanx_4_tip")
TouchSensor290 = x3d.TouchSensor()
TouchSensor290.setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip")

HAnimSite289.addChildren(TouchSensor290)
Shape291 = x3d.Shape()
Shape291.setUSE("HAnimSiteShape")

HAnimSite289.addChildren(Shape291)

HAnimSegment266.addChildren(HAnimSite289)
HAnimSite292 = x3d.HAnimSite()
HAnimSite292.setName("r_tarsal_distal_phalanx_5_tip")
HAnimSite292.setDEF("hanim_r_tarsal_distal_phalanx_5_tip")
TouchSensor293 = x3d.TouchSensor()
TouchSensor293.setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip")

HAnimSite292.addChildren(TouchSensor293)
Shape294 = x3d.Shape()
Shape294.setUSE("HAnimSiteShape")

HAnimSite292.addChildren(Shape294)

HAnimSegment266.addChildren(HAnimSite292)

HAnimJoint265.addChildren(HAnimSegment266)
HAnimJoint295 = x3d.HAnimJoint()
HAnimJoint295.setName("r_metatarsophalangeal_2")
HAnimJoint295.setDEF("hanim_r_metatarsophalangeal_2")
HAnimJoint295.setCenter([-0.0823,0.0064,-0.004])
HAnimSegment296 = x3d.HAnimSegment()
HAnimSegment296.setName("r_tarsal_proximal_phalanx_2")
HAnimSegment296.setDEF("hanim_r_tarsal_proximal_phalanx_2")
Transform297 = x3d.Transform()
Transform297.setTranslation([-0.0823,0.0064,-0.004])
Transform298 = x3d.Transform()
#Empty Transform
Shape299 = x3d.Shape()
Shape299.setUSE("HAnimJointShape")

Transform298.addChild(Shape299)

Transform297.addChildren(Transform298)

HAnimSegment296.addChildren(Transform297)
Shape300 = x3d.Shape()
LineSet301 = x3d.LineSet()
LineSet301.setVertexCount([2])
Coordinate302 = x3d.Coordinate()
Coordinate302.setPoint([-0.0823,0.0064,-0.004,-0.0841,0.0013,0.0216])

LineSet301.setCoord(Coordinate302)
#from r_metatarsophalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA303 = x3d.ColorRGBA()
ColorRGBA303.setUSE("HAnimSegmentLineColorRGBA")

LineSet301.setColor(ColorRGBA303)

Shape300.setGeometry(LineSet301)

HAnimSegment296.addChildren(Shape300)

HAnimJoint295.addChildren(HAnimSegment296)
HAnimJoint304 = x3d.HAnimJoint()
HAnimJoint304.setName("r_tarsal_distal_interphalangeal_2")
HAnimJoint304.setDEF("hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint304.setCenter([-0.0841,0.0013,0.0216])

HAnimJoint295.addChildren(HAnimJoint304)

HAnimJoint265.addChildren(HAnimJoint295)

HAnimJoint256.addChildren(HAnimJoint265)

HAnimJoint241.addChildren(HAnimJoint256)

HAnimJoint223.addChildren(HAnimJoint241)

HAnimJoint104.addChildren(HAnimJoint223)

HAnimJoint52.addChildren(HAnimJoint104)
HAnimJoint305 = x3d.HAnimJoint()
HAnimJoint305.setName("vl5")
HAnimJoint305.setDEF("hanim_vl5")
HAnimJoint305.setCenter([0.0028,1.0568,-0.0776])
HAnimSegment306 = x3d.HAnimSegment()
HAnimSegment306.setName("l5")
HAnimSegment306.setDEF("hanim_l5")
Transform307 = x3d.Transform()
Transform307.setTranslation([0.0028,1.0568,-0.0776])
Transform308 = x3d.Transform()
#Empty Transform
Shape309 = x3d.Shape()
Shape309.setUSE("HAnimJointShape")

Transform308.addChild(Shape309)

Transform307.addChildren(Transform308)

HAnimSegment306.addChildren(Transform307)
Shape310 = x3d.Shape()
LineSet311 = x3d.LineSet()
LineSet311.setVertexCount([2])
Coordinate312 = x3d.Coordinate()
Coordinate312.setPoint([0.0028,1.0568,-0.0776,0.0041,1.1276,-0.0796])

LineSet311.setCoord(Coordinate312)
#from vl5 to vl3 vertices 2
ColorRGBA313 = x3d.ColorRGBA()
ColorRGBA313.setUSE("HAnimSegmentLineColorRGBA")

LineSet311.setColor(ColorRGBA313)

Shape310.setGeometry(LineSet311)

HAnimSegment306.addChildren(Shape310)
HAnimSite314 = x3d.HAnimSite()
HAnimSite314.setName("l_rib10")
HAnimSite314.setDEF("hanim_l_rib10")
HAnimSite314.setTranslation([0.0871,1.1925,0.0992])
TouchSensor315 = x3d.TouchSensor()
TouchSensor315.setDescription("HAnimSite l_rib10")

HAnimSite314.addChildren(TouchSensor315)
Shape316 = x3d.Shape()
Shape316.setUSE("HAnimSiteShape")

HAnimSite314.addChildren(Shape316)

HAnimSegment306.addChildren(HAnimSite314)
HAnimSite317 = x3d.HAnimSite()
HAnimSite317.setName("r_rib10")
HAnimSite317.setDEF("hanim_r_rib10")
HAnimSite317.setTranslation([-0.0711,1.1941,0.1016])
TouchSensor318 = x3d.TouchSensor()
TouchSensor318.setDescription("HAnimSite r_rib10")

HAnimSite317.addChildren(TouchSensor318)
Shape319 = x3d.Shape()
Shape319.setUSE("HAnimSiteShape")

HAnimSite317.addChildren(Shape319)

HAnimSegment306.addChildren(HAnimSite317)
HAnimSite320 = x3d.HAnimSite()
HAnimSite320.setName("spine_1_middle_back")
HAnimSite320.setDEF("hanim_spine_1_middle_back")
TouchSensor321 = x3d.TouchSensor()
TouchSensor321.setDescription("HAnimSite spine_1_middle_back")

HAnimSite320.addChildren(TouchSensor321)
Shape322 = x3d.Shape()
Shape322.setUSE("HAnimSiteShape")

HAnimSite320.addChildren(Shape322)

HAnimSegment306.addChildren(HAnimSite320)
HAnimSite323 = x3d.HAnimSite()
HAnimSite323.setName("spine_2_middle_back")
HAnimSite323.setDEF("hanim_spine_2_middle_back")
TouchSensor324 = x3d.TouchSensor()
TouchSensor324.setDescription("HAnimSite spine_2_middle_back")

HAnimSite323.addChildren(TouchSensor324)
Shape325 = x3d.Shape()
Shape325.setUSE("HAnimSiteShape")

HAnimSite323.addChildren(Shape325)

HAnimSegment306.addChildren(HAnimSite323)

HAnimJoint305.addChildren(HAnimSegment306)
HAnimJoint326 = x3d.HAnimJoint()
HAnimJoint326.setName("vl3")
HAnimJoint326.setDEF("hanim_vl3")
HAnimJoint326.setCenter([0.0041,1.1276,-0.0796])
HAnimSegment327 = x3d.HAnimSegment()
HAnimSegment327.setName("l3")
HAnimSegment327.setDEF("hanim_l3")
Transform328 = x3d.Transform()
Transform328.setTranslation([0.0041,1.1276,-0.0796])
Transform329 = x3d.Transform()
#Empty Transform
Shape330 = x3d.Shape()
Shape330.setUSE("HAnimJointShape")

Transform329.addChild(Shape330)

Transform328.addChildren(Transform329)

HAnimSegment327.addChildren(Transform328)
Shape331 = x3d.Shape()
LineSet332 = x3d.LineSet()
LineSet332.setVertexCount([2])
Coordinate333 = x3d.Coordinate()
Coordinate333.setPoint([0.0041,1.1276,-0.0796,0.0048,1.1912,-0.0805])

LineSet332.setCoord(Coordinate333)
#from vl3 to vl1 vertices 2
ColorRGBA334 = x3d.ColorRGBA()
ColorRGBA334.setUSE("HAnimSegmentLineColorRGBA")

LineSet332.setColor(ColorRGBA334)

Shape331.setGeometry(LineSet332)

HAnimSegment327.addChildren(Shape331)

HAnimJoint326.addChildren(HAnimSegment327)
HAnimJoint335 = x3d.HAnimJoint()
HAnimJoint335.setName("vl1")
HAnimJoint335.setDEF("hanim_vl1")
HAnimJoint335.setCenter([0.0048,1.1912,-0.0805])
HAnimSegment336 = x3d.HAnimSegment()
HAnimSegment336.setName("l1")
HAnimSegment336.setDEF("hanim_l1")
Transform337 = x3d.Transform()
Transform337.setTranslation([0.0048,1.1912,-0.0805])
Transform338 = x3d.Transform()
#Empty Transform
Shape339 = x3d.Shape()
Shape339.setUSE("HAnimJointShape")

Transform338.addChild(Shape339)

Transform337.addChildren(Transform338)

HAnimSegment336.addChildren(Transform337)
Shape340 = x3d.Shape()
LineSet341 = x3d.LineSet()
LineSet341.setVertexCount([2])
Coordinate342 = x3d.Coordinate()
Coordinate342.setPoint([0.0048,1.1912,-0.0805,0.0056,1.2848,-0.0822])

LineSet341.setCoord(Coordinate342)
#from vl1 to vt10 vertices 2
ColorRGBA343 = x3d.ColorRGBA()
ColorRGBA343.setUSE("HAnimSegmentLineColorRGBA")

LineSet341.setColor(ColorRGBA343)

Shape340.setGeometry(LineSet341)

HAnimSegment336.addChildren(Shape340)
HAnimSite344 = x3d.HAnimSite()
HAnimSite344.setName("l_thelion")
HAnimSite344.setDEF("hanim_l_thelion")
HAnimSite344.setTranslation([0.0918,1.3382,0.1192])
TouchSensor345 = x3d.TouchSensor()
TouchSensor345.setDescription("HAnimSite l_thelion")

HAnimSite344.addChildren(TouchSensor345)
Shape346 = x3d.Shape()
Shape346.setUSE("HAnimSiteShape")

HAnimSite344.addChildren(Shape346)

HAnimSegment336.addChildren(HAnimSite344)
HAnimSite347 = x3d.HAnimSite()
HAnimSite347.setName("r_thelion")
HAnimSite347.setDEF("hanim_r_thelion")
HAnimSite347.setTranslation([-0.0736,1.3385,0.1217])
TouchSensor348 = x3d.TouchSensor()
TouchSensor348.setDescription("HAnimSite r_thelion")

HAnimSite347.addChildren(TouchSensor348)
Shape349 = x3d.Shape()
Shape349.setUSE("HAnimSiteShape")

HAnimSite347.addChildren(Shape349)

HAnimSegment336.addChildren(HAnimSite347)
HAnimSite350 = x3d.HAnimSite()
HAnimSite350.setName("substernale")
HAnimSite350.setDEF("hanim_substernale")
HAnimSite350.setTranslation([0.0085,1.2995,0.1147])
TouchSensor351 = x3d.TouchSensor()
TouchSensor351.setDescription("HAnimSite substernale")

HAnimSite350.addChildren(TouchSensor351)
Shape352 = x3d.Shape()
Shape352.setUSE("HAnimSiteShape")

HAnimSite350.addChildren(Shape352)

HAnimSegment336.addChildren(HAnimSite350)

HAnimJoint335.addChildren(HAnimSegment336)
HAnimJoint353 = x3d.HAnimJoint()
HAnimJoint353.setName("vt10")
HAnimJoint353.setDEF("hanim_vt10")
HAnimJoint353.setCenter([0.0056,1.2848,-0.0822])
HAnimSegment354 = x3d.HAnimSegment()
HAnimSegment354.setName("t10")
HAnimSegment354.setDEF("hanim_t10")
Transform355 = x3d.Transform()
Transform355.setTranslation([0.0056,1.2848,-0.0822])
Transform356 = x3d.Transform()
#Empty Transform
Shape357 = x3d.Shape()
Shape357.setUSE("HAnimJointShape")

Transform356.addChild(Shape357)

Transform355.addChildren(Transform356)

HAnimSegment354.addChildren(Transform355)
Shape358 = x3d.Shape()
LineSet359 = x3d.LineSet()
LineSet359.setVertexCount([2])
Coordinate360 = x3d.Coordinate()
Coordinate360.setPoint([0.0056,1.2848,-0.0822,0.0059,1.3866,-0.08])

LineSet359.setCoord(Coordinate360)
#from vt10 to vt6 vertices 2
ColorRGBA361 = x3d.ColorRGBA()
ColorRGBA361.setUSE("HAnimSegmentLineColorRGBA")

LineSet359.setColor(ColorRGBA361)

Shape358.setGeometry(LineSet359)

HAnimSegment354.addChildren(Shape358)
HAnimSite362 = x3d.HAnimSite()
HAnimSite362.setName("l_chest_midsagittal_plane")
HAnimSite362.setDEF("hanim_l_chest_midsagittal_plane")
TouchSensor363 = x3d.TouchSensor()
TouchSensor363.setDescription("HAnimSite l_chest_midsagittal_plane")

HAnimSite362.addChildren(TouchSensor363)
Shape364 = x3d.Shape()
Shape364.setUSE("HAnimSiteShape")

HAnimSite362.addChildren(Shape364)

HAnimSegment354.addChildren(HAnimSite362)
HAnimSite365 = x3d.HAnimSite()
HAnimSite365.setName("mesosternale")
HAnimSite365.setDEF("hanim_mesosternale")
TouchSensor366 = x3d.TouchSensor()
TouchSensor366.setDescription("HAnimSite mesosternale")

HAnimSite365.addChildren(TouchSensor366)
Shape367 = x3d.Shape()
Shape367.setUSE("HAnimSiteShape")

HAnimSite365.addChildren(Shape367)

HAnimSegment354.addChildren(HAnimSite365)
HAnimSite368 = x3d.HAnimSite()
HAnimSite368.setName("r_chest_midsagittal_plane")
HAnimSite368.setDEF("hanim_r_chest_midsagittal_plane")
TouchSensor369 = x3d.TouchSensor()
TouchSensor369.setDescription("HAnimSite r_chest_midsagittal_plane")

HAnimSite368.addChildren(TouchSensor369)
Shape370 = x3d.Shape()
Shape370.setUSE("HAnimSiteShape")

HAnimSite368.addChildren(Shape370)

HAnimSegment354.addChildren(HAnimSite368)
HAnimSite371 = x3d.HAnimSite()
HAnimSite371.setName("rear_center_midsagittal_plane")
HAnimSite371.setDEF("hanim_rear_center_midsagittal_plane")
TouchSensor372 = x3d.TouchSensor()
TouchSensor372.setDescription("HAnimSite rear_center_midsagittal_plane")

HAnimSite371.addChildren(TouchSensor372)
Shape373 = x3d.Shape()
Shape373.setUSE("HAnimSiteShape")

HAnimSite371.addChildren(Shape373)

HAnimSegment354.addChildren(HAnimSite371)

HAnimJoint353.addChildren(HAnimSegment354)
HAnimJoint374 = x3d.HAnimJoint()
HAnimJoint374.setName("vt6")
HAnimJoint374.setDEF("hanim_vt6")
HAnimJoint374.setCenter([0.0059,1.3866,-0.08])
HAnimSegment375 = x3d.HAnimSegment()
HAnimSegment375.setName("t6")
HAnimSegment375.setDEF("hanim_t6")
Transform376 = x3d.Transform()
Transform376.setTranslation([0.0059,1.3866,-0.08])
Transform377 = x3d.Transform()
#Empty Transform
Shape378 = x3d.Shape()
Shape378.setUSE("HAnimJointShape")

Transform377.addChild(Shape378)

Transform376.addChildren(Transform377)

HAnimSegment375.addChildren(Transform376)
Shape379 = x3d.Shape()
LineSet380 = x3d.LineSet()
LineSet380.setVertexCount([2])
Coordinate381 = x3d.Coordinate()
Coordinate381.setPoint([0.0059,1.3866,-0.08,0.0065,1.4951,-0.0387])

LineSet380.setCoord(Coordinate381)
#from vt6 to vt1 vertices 2
ColorRGBA382 = x3d.ColorRGBA()
ColorRGBA382.setUSE("HAnimSegmentLineColorRGBA")

LineSet380.setColor(ColorRGBA382)

Shape379.setGeometry(LineSet380)

HAnimSegment375.addChildren(Shape379)
HAnimSite383 = x3d.HAnimSite()
HAnimSite383.setName("cervicale")
HAnimSite383.setDEF("hanim_cervicale")
HAnimSite383.setTranslation([0.0064,1.52,-0.0815])
TouchSensor384 = x3d.TouchSensor()
TouchSensor384.setDescription("HAnimSite cervicale")

HAnimSite383.addChildren(TouchSensor384)
Shape385 = x3d.Shape()
Shape385.setUSE("HAnimSiteShape")

HAnimSite383.addChildren(Shape385)

HAnimSegment375.addChildren(HAnimSite383)
HAnimSite386 = x3d.HAnimSite()
HAnimSite386.setName("l_neck_base")
HAnimSite386.setDEF("hanim_l_neck_base")
HAnimSite386.setTranslation([0.0646,1.5141,-0.038])
TouchSensor387 = x3d.TouchSensor()
TouchSensor387.setDescription("HAnimSite l_neck_base")

HAnimSite386.addChildren(TouchSensor387)
Shape388 = x3d.Shape()
Shape388.setUSE("HAnimSiteShape")

HAnimSite386.addChildren(Shape388)

HAnimSegment375.addChildren(HAnimSite386)
HAnimSite389 = x3d.HAnimSite()
HAnimSite389.setName("r_neck_base")
HAnimSite389.setDEF("hanim_r_neck_base")
HAnimSite389.setTranslation([-0.0419,1.5149,-0.022])
TouchSensor390 = x3d.TouchSensor()
TouchSensor390.setDescription("HAnimSite r_neck_base")

HAnimSite389.addChildren(TouchSensor390)
Shape391 = x3d.Shape()
Shape391.setUSE("HAnimSiteShape")

HAnimSite389.addChildren(Shape391)

HAnimSegment375.addChildren(HAnimSite389)
HAnimSite392 = x3d.HAnimSite()
HAnimSite392.setName("suprasternale")
HAnimSite392.setDEF("hanim_suprasternale")
HAnimSite392.setTranslation([0.0084,1.4714,0.0551])
TouchSensor393 = x3d.TouchSensor()
TouchSensor393.setDescription("HAnimSite suprasternale")

HAnimSite392.addChildren(TouchSensor393)
Shape394 = x3d.Shape()
Shape394.setUSE("HAnimSiteShape")

HAnimSite392.addChildren(Shape394)

HAnimSegment375.addChildren(HAnimSite392)

HAnimJoint374.addChildren(HAnimSegment375)
HAnimJoint395 = x3d.HAnimJoint()
HAnimJoint395.setName("vt1")
HAnimJoint395.setDEF("hanim_vt1")
HAnimJoint395.setCenter([0.0065,1.4951,-0.0387])
HAnimSegment396 = x3d.HAnimSegment()
HAnimSegment396.setName("t1")
HAnimSegment396.setDEF("hanim_t1")
Transform397 = x3d.Transform()
Transform397.setTranslation([0.0065,1.4951,-0.0387])
Transform398 = x3d.Transform()
#Empty Transform
Shape399 = x3d.Shape()
Shape399.setUSE("HAnimJointShape")

Transform398.addChild(Shape399)

Transform397.addChildren(Transform398)

HAnimSegment396.addChildren(Transform397)
Shape400 = x3d.Shape()
LineSet401 = x3d.LineSet()
LineSet401.setVertexCount([2])
Coordinate402 = x3d.Coordinate()
Coordinate402.setPoint([0.0065,1.4951,-0.0387,0.0066,1.5662,-0.0084])

LineSet401.setCoord(Coordinate402)
#from vt1 to vc4 vertices 2
ColorRGBA403 = x3d.ColorRGBA()
ColorRGBA403.setUSE("HAnimSegmentLineColorRGBA")

LineSet401.setColor(ColorRGBA403)

Shape400.setGeometry(LineSet401)

HAnimSegment396.addChildren(Shape400)
Shape404 = x3d.Shape()
LineSet405 = x3d.LineSet()
LineSet405.setVertexCount([2])
Coordinate406 = x3d.Coordinate()
Coordinate406.setPoint([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353])

LineSet405.setCoord(Coordinate406)
#from vt1 to l_sternoclavicular vertices 2
ColorRGBA407 = x3d.ColorRGBA()
ColorRGBA407.setUSE("HAnimSegmentLineColorRGBA")

LineSet405.setColor(ColorRGBA407)

Shape404.setGeometry(LineSet405)

HAnimSegment396.addChildren(Shape404)
HAnimSite408 = x3d.HAnimSite()
HAnimSite408.setName("l_acromion")
HAnimSite408.setDEF("hanim_l_acromion")
HAnimSite408.setTranslation([0.2032,1.476,-0.049])
TouchSensor409 = x3d.TouchSensor()
TouchSensor409.setDescription("HAnimSite l_acromion")

HAnimSite408.addChildren(TouchSensor409)
Shape410 = x3d.Shape()
Shape410.setUSE("HAnimSiteShape")

HAnimSite408.addChildren(Shape410)

HAnimSegment396.addChildren(HAnimSite408)
HAnimSite411 = x3d.HAnimSite()
HAnimSite411.setName("l_axilla_distal_pt")
HAnimSite411.setDEF("hanim_l_axilla_distal_pt")
HAnimSite411.setTranslation([0.1706,1.4072,-0.0875])
TouchSensor412 = x3d.TouchSensor()
TouchSensor412.setDescription("HAnimSite l_axilla_distal_pt")

HAnimSite411.addChildren(TouchSensor412)
Shape413 = x3d.Shape()
Shape413.setUSE("HAnimSiteShape")

HAnimSite411.addChildren(Shape413)

HAnimSegment396.addChildren(HAnimSite411)
HAnimSite414 = x3d.HAnimSite()
HAnimSite414.setName("l_axilla_posterior_folds")
HAnimSite414.setDEF("hanim_l_axilla_posterior_folds")
TouchSensor415 = x3d.TouchSensor()
TouchSensor415.setDescription("HAnimSite l_axilla_posterior_folds")

HAnimSite414.addChildren(TouchSensor415)
Shape416 = x3d.Shape()
Shape416.setUSE("HAnimSiteShape")

HAnimSite414.addChildren(Shape416)

HAnimSegment396.addChildren(HAnimSite414)
HAnimSite417 = x3d.HAnimSite()
HAnimSite417.setName("l_axilla_proximal")
HAnimSite417.setDEF("hanim_l_axilla_proximal")
HAnimSite417.setTranslation([0.1777,1.4065,-0.0075])
TouchSensor418 = x3d.TouchSensor()
TouchSensor418.setDescription("HAnimSite l_axilla_proximal")

HAnimSite417.addChildren(TouchSensor418)
Shape419 = x3d.Shape()
Shape419.setUSE("HAnimSiteShape")

HAnimSite417.addChildren(Shape419)

HAnimSegment396.addChildren(HAnimSite417)
HAnimSite420 = x3d.HAnimSite()
HAnimSite420.setName("l_clavicale")
HAnimSite420.setDEF("hanim_l_clavicale")
HAnimSite420.setTranslation([0.0271,1.4943,0.0394])
TouchSensor421 = x3d.TouchSensor()
TouchSensor421.setDescription("HAnimSite l_clavicale")

HAnimSite420.addChildren(TouchSensor421)
Shape422 = x3d.Shape()
Shape422.setUSE("HAnimSiteShape")

HAnimSite420.addChildren(Shape422)

HAnimSegment396.addChildren(HAnimSite420)
Shape423 = x3d.Shape()
LineSet424 = x3d.LineSet()
LineSet424.setVertexCount([2])
Coordinate425 = x3d.Coordinate()
Coordinate425.setPoint([0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033])

LineSet424.setCoord(Coordinate425)
#from vt1 to r_sternoclavicular vertices 2
ColorRGBA426 = x3d.ColorRGBA()
ColorRGBA426.setUSE("HAnimSegmentLineColorRGBA")

LineSet424.setColor(ColorRGBA426)

Shape423.setGeometry(LineSet424)

HAnimSegment396.addChildren(Shape423)
HAnimSite427 = x3d.HAnimSite()
HAnimSite427.setName("r_acromion")
HAnimSite427.setDEF("hanim_r_acromion")
HAnimSite427.setTranslation([-0.1905,1.4791,-0.0431])
TouchSensor428 = x3d.TouchSensor()
TouchSensor428.setDescription("HAnimSite r_acromion")

HAnimSite427.addChildren(TouchSensor428)
Shape429 = x3d.Shape()
Shape429.setUSE("HAnimSiteShape")

HAnimSite427.addChildren(Shape429)

HAnimSegment396.addChildren(HAnimSite427)
HAnimSite430 = x3d.HAnimSite()
HAnimSite430.setName("r_axilla_distal_pt")
HAnimSite430.setDEF("hanim_r_axilla_distal_pt")
HAnimSite430.setTranslation([-0.1603,1.4098,-0.0826])
TouchSensor431 = x3d.TouchSensor()
TouchSensor431.setDescription("HAnimSite r_axilla_distal_pt")

HAnimSite430.addChildren(TouchSensor431)
Shape432 = x3d.Shape()
Shape432.setUSE("HAnimSiteShape")

HAnimSite430.addChildren(Shape432)

HAnimSegment396.addChildren(HAnimSite430)
HAnimSite433 = x3d.HAnimSite()
HAnimSite433.setName("r_axilla_posterior_folds")
HAnimSite433.setDEF("hanim_r_axilla_posterior_folds")
TouchSensor434 = x3d.TouchSensor()
TouchSensor434.setDescription("HAnimSite r_axilla_posterior_folds")

HAnimSite433.addChildren(TouchSensor434)
Shape435 = x3d.Shape()
Shape435.setUSE("HAnimSiteShape")

HAnimSite433.addChildren(Shape435)

HAnimSegment396.addChildren(HAnimSite433)
HAnimSite436 = x3d.HAnimSite()
HAnimSite436.setName("r_axilla_proximal")
HAnimSite436.setDEF("hanim_r_axilla_proximal")
HAnimSite436.setTranslation([-0.1626,1.4072,-0.0031])
TouchSensor437 = x3d.TouchSensor()
TouchSensor437.setDescription("HAnimSite r_axilla_proximal")

HAnimSite436.addChildren(TouchSensor437)
Shape438 = x3d.Shape()
Shape438.setUSE("HAnimSiteShape")

HAnimSite436.addChildren(Shape438)

HAnimSegment396.addChildren(HAnimSite436)
HAnimSite439 = x3d.HAnimSite()
HAnimSite439.setName("r_clavicale")
HAnimSite439.setDEF("hanim_r_clavicale")
HAnimSite439.setTranslation([-0.0115,1.4943,0.04])
TouchSensor440 = x3d.TouchSensor()
TouchSensor440.setDescription("HAnimSite r_clavicale")

HAnimSite439.addChildren(TouchSensor440)
Shape441 = x3d.Shape()
Shape441.setUSE("HAnimSiteShape")

HAnimSite439.addChildren(Shape441)

HAnimSegment396.addChildren(HAnimSite439)

HAnimJoint395.addChildren(HAnimSegment396)
HAnimJoint442 = x3d.HAnimJoint()
HAnimJoint442.setName("vc4")
HAnimJoint442.setDEF("hanim_vc4")
HAnimJoint442.setCenter([0.0066,1.5662,-0.0084])
HAnimSegment443 = x3d.HAnimSegment()
HAnimSegment443.setName("c4")
HAnimSegment443.setDEF("hanim_c4")
Transform444 = x3d.Transform()
Transform444.setTranslation([0.0066,1.5662,-0.0084])
Transform445 = x3d.Transform()
#Empty Transform
Shape446 = x3d.Shape()
Shape446.setUSE("HAnimJointShape")

Transform445.addChild(Shape446)

Transform444.addChildren(Transform445)

HAnimSegment443.addChildren(Transform444)
Shape447 = x3d.Shape()
LineSet448 = x3d.LineSet()
LineSet448.setVertexCount([2])
Coordinate449 = x3d.Coordinate()
Coordinate449.setPoint([0.0066,1.5662,-0.0084,0.0066,1.5928,-0.0103])

LineSet448.setCoord(Coordinate449)
#from vc4 to vc2 vertices 2
ColorRGBA450 = x3d.ColorRGBA()
ColorRGBA450.setUSE("HAnimSegmentLineColorRGBA")

LineSet448.setColor(ColorRGBA450)

Shape447.setGeometry(LineSet448)

HAnimSegment443.addChildren(Shape447)
HAnimSite451 = x3d.HAnimSite()
HAnimSite451.setName("adams_apple")
HAnimSite451.setDEF("hanim_adams_apple")
TouchSensor452 = x3d.TouchSensor()
TouchSensor452.setDescription("HAnimSite adams_apple")

HAnimSite451.addChildren(TouchSensor452)
Shape453 = x3d.Shape()
Shape453.setUSE("HAnimSiteShape")

HAnimSite451.addChildren(Shape453)

HAnimSegment443.addChildren(HAnimSite451)

HAnimJoint442.addChildren(HAnimSegment443)
HAnimJoint454 = x3d.HAnimJoint()
HAnimJoint454.setName("vc2")
HAnimJoint454.setDEF("hanim_vc2")
HAnimJoint454.setCenter([0.0066,1.5928,-0.0103])
HAnimSegment455 = x3d.HAnimSegment()
HAnimSegment455.setName("c2")
HAnimSegment455.setDEF("hanim_c2")
Transform456 = x3d.Transform()
Transform456.setTranslation([0.0066,1.5928,-0.0103])
Transform457 = x3d.Transform()
#Empty Transform
Shape458 = x3d.Shape()
Shape458.setUSE("HAnimJointShape")

Transform457.addChild(Shape458)

Transform456.addChildren(Transform457)

HAnimSegment455.addChildren(Transform456)
Shape459 = x3d.Shape()
LineSet460 = x3d.LineSet()
LineSet460.setVertexCount([2])
Coordinate461 = x3d.Coordinate()
Coordinate461.setPoint([0.0066,1.5928,-0.0103,0.0044,1.6209,0.0236])

LineSet460.setCoord(Coordinate461)
#from vc2 to skullbase vertices 2
ColorRGBA462 = x3d.ColorRGBA()
ColorRGBA462.setUSE("HAnimSegmentLineColorRGBA")

LineSet460.setColor(ColorRGBA462)

Shape459.setGeometry(LineSet460)

HAnimSegment455.addChildren(Shape459)
HAnimSite463 = x3d.HAnimSite()
HAnimSite463.setName("glabella")
HAnimSite463.setDEF("hanim_glabella")
TouchSensor464 = x3d.TouchSensor()
TouchSensor464.setDescription("HAnimSite glabella")

HAnimSite463.addChildren(TouchSensor464)
Shape465 = x3d.Shape()
Shape465.setUSE("HAnimSiteShape")

HAnimSite463.addChildren(Shape465)

HAnimSegment455.addChildren(HAnimSite463)
HAnimSite466 = x3d.HAnimSite()
HAnimSite466.setName("l_ectocanthus")
HAnimSite466.setDEF("hanim_l_ectocanthus")
TouchSensor467 = x3d.TouchSensor()
TouchSensor467.setDescription("HAnimSite l_ectocanthus")

HAnimSite466.addChildren(TouchSensor467)
Shape468 = x3d.Shape()
Shape468.setUSE("HAnimSiteShape")

HAnimSite466.addChildren(Shape468)

HAnimSegment455.addChildren(HAnimSite466)
HAnimSite469 = x3d.HAnimSite()
HAnimSite469.setName("l_gonion")
HAnimSite469.setDEF("hanim_l_gonion")
HAnimSite469.setTranslation([0.0631,1.553,0.033])
TouchSensor470 = x3d.TouchSensor()
TouchSensor470.setDescription("HAnimSite l_gonion")

HAnimSite469.addChildren(TouchSensor470)
Shape471 = x3d.Shape()
Shape471.setUSE("HAnimSiteShape")

HAnimSite469.addChildren(Shape471)

HAnimSegment455.addChildren(HAnimSite469)
HAnimSite472 = x3d.HAnimSite()
HAnimSite472.setName("l_infraorbitale")
HAnimSite472.setDEF("hanim_l_infraorbitale")
HAnimSite472.setTranslation([0.0341,1.6171,0.0752])
TouchSensor473 = x3d.TouchSensor()
TouchSensor473.setDescription("HAnimSite l_infraorbitale")

HAnimSite472.addChildren(TouchSensor473)
Shape474 = x3d.Shape()
Shape474.setUSE("HAnimSiteShape")

HAnimSite472.addChildren(Shape474)

HAnimSegment455.addChildren(HAnimSite472)
HAnimSite475 = x3d.HAnimSite()
HAnimSite475.setName("l_tragion")
HAnimSite475.setDEF("hanim_l_tragion")
HAnimSite475.setTranslation([0.0739,1.6348,0.0282])
TouchSensor476 = x3d.TouchSensor()
TouchSensor476.setDescription("HAnimSite l_tragion")

HAnimSite475.addChildren(TouchSensor476)
Shape477 = x3d.Shape()
Shape477.setUSE("HAnimSiteShape")

HAnimSite475.addChildren(Shape477)

HAnimSegment455.addChildren(HAnimSite475)
HAnimSite478 = x3d.HAnimSite()
HAnimSite478.setName("menton")
HAnimSite478.setDEF("hanim_menton")
TouchSensor479 = x3d.TouchSensor()
TouchSensor479.setDescription("HAnimSite menton")

HAnimSite478.addChildren(TouchSensor479)
Shape480 = x3d.Shape()
Shape480.setUSE("HAnimSiteShape")

HAnimSite478.addChildren(Shape480)

HAnimSegment455.addChildren(HAnimSite478)
HAnimSite481 = x3d.HAnimSite()
HAnimSite481.setName("nuchale")
HAnimSite481.setDEF("hanim_nuchale")
HAnimSite481.setTranslation([0.0039,1.5972,-0.0796])
TouchSensor482 = x3d.TouchSensor()
TouchSensor482.setDescription("HAnimSite nuchale")

HAnimSite481.addChildren(TouchSensor482)
Shape483 = x3d.Shape()
Shape483.setUSE("HAnimSiteShape")

HAnimSite481.addChildren(Shape483)

HAnimSegment455.addChildren(HAnimSite481)
HAnimSite484 = x3d.HAnimSite()
HAnimSite484.setName("opisthocranion")
HAnimSite484.setDEF("hanim_opisthocranion")
TouchSensor485 = x3d.TouchSensor()
TouchSensor485.setDescription("HAnimSite opisthocranion")

HAnimSite484.addChildren(TouchSensor485)
Shape486 = x3d.Shape()
Shape486.setUSE("HAnimSiteShape")

HAnimSite484.addChildren(Shape486)

HAnimSegment455.addChildren(HAnimSite484)
HAnimSite487 = x3d.HAnimSite()
HAnimSite487.setName("r_ectocanthus")
HAnimSite487.setDEF("hanim_r_ectocanthus")
TouchSensor488 = x3d.TouchSensor()
TouchSensor488.setDescription("HAnimSite r_ectocanthus")

HAnimSite487.addChildren(TouchSensor488)
Shape489 = x3d.Shape()
Shape489.setUSE("HAnimSiteShape")

HAnimSite487.addChildren(Shape489)

HAnimSegment455.addChildren(HAnimSite487)
HAnimSite490 = x3d.HAnimSite()
HAnimSite490.setName("r_gonion")
HAnimSite490.setDEF("hanim_r_gonion")
HAnimSite490.setTranslation([-0.052,1.5529,0.0347])
TouchSensor491 = x3d.TouchSensor()
TouchSensor491.setDescription("HAnimSite r_gonion")

HAnimSite490.addChildren(TouchSensor491)
Shape492 = x3d.Shape()
Shape492.setUSE("HAnimSiteShape")

HAnimSite490.addChildren(Shape492)

HAnimSegment455.addChildren(HAnimSite490)
HAnimSite493 = x3d.HAnimSite()
HAnimSite493.setName("r_infraorbitale")
HAnimSite493.setDEF("hanim_r_infraorbitale")
HAnimSite493.setTranslation([-0.0237,1.6171,0.0752])
TouchSensor494 = x3d.TouchSensor()
TouchSensor494.setDescription("HAnimSite r_infraorbitale")

HAnimSite493.addChildren(TouchSensor494)
Shape495 = x3d.Shape()
Shape495.setUSE("HAnimSiteShape")

HAnimSite493.addChildren(Shape495)

HAnimSegment455.addChildren(HAnimSite493)
HAnimSite496 = x3d.HAnimSite()
HAnimSite496.setName("r_tragion")
HAnimSite496.setDEF("hanim_r_tragion")
HAnimSite496.setTranslation([-0.0646,1.6347,0.0302])
TouchSensor497 = x3d.TouchSensor()
TouchSensor497.setDescription("HAnimSite r_tragion")

HAnimSite496.addChildren(TouchSensor497)
Shape498 = x3d.Shape()
Shape498.setUSE("HAnimSiteShape")

HAnimSite496.addChildren(Shape498)

HAnimSegment455.addChildren(HAnimSite496)
HAnimSite499 = x3d.HAnimSite()
HAnimSite499.setName("sellion")
HAnimSite499.setDEF("hanim_sellion")
HAnimSite499.setTranslation([0.0058,1.6316,0.0852])
TouchSensor500 = x3d.TouchSensor()
TouchSensor500.setDescription("HAnimSite sellion")

HAnimSite499.addChildren(TouchSensor500)
Shape501 = x3d.Shape()
Shape501.setUSE("HAnimSiteShape")

HAnimSite499.addChildren(Shape501)

HAnimSegment455.addChildren(HAnimSite499)
HAnimSite502 = x3d.HAnimSite()
HAnimSite502.setName("skull_vertex")
HAnimSite502.setDEF("hanim_skull_vertex")
TouchSensor503 = x3d.TouchSensor()
TouchSensor503.setDescription("HAnimSite skull_vertex")

HAnimSite502.addChildren(TouchSensor503)
Shape504 = x3d.Shape()
Shape504.setUSE("HAnimSiteShape")

HAnimSite502.addChildren(Shape504)

HAnimSegment455.addChildren(HAnimSite502)
HAnimSite505 = x3d.HAnimSite()
HAnimSite505.setName("supramenton")
HAnimSite505.setDEF("hanim_supramenton")
HAnimSite505.setTranslation([0.0061,1.541,0.0805])
TouchSensor506 = x3d.TouchSensor()
TouchSensor506.setDescription("HAnimSite supramenton")

HAnimSite505.addChildren(TouchSensor506)
Shape507 = x3d.Shape()
Shape507.setUSE("HAnimSiteShape")

HAnimSite505.addChildren(Shape507)

HAnimSegment455.addChildren(HAnimSite505)

HAnimJoint454.addChildren(HAnimSegment455)
HAnimJoint508 = x3d.HAnimJoint()
HAnimJoint508.setName("skullbase")
HAnimJoint508.setDEF("hanim_skullbase")
HAnimJoint508.setCenter([0.0044,1.6209,0.0236])

HAnimJoint454.addChildren(HAnimJoint508)

HAnimJoint442.addChildren(HAnimJoint454)

HAnimJoint395.addChildren(HAnimJoint442)
HAnimJoint509 = x3d.HAnimJoint()
HAnimJoint509.setName("l_sternoclavicular")
HAnimJoint509.setDEF("hanim_l_sternoclavicular")
HAnimJoint509.setCenter([0.082,1.4488,-0.0353])
HAnimSegment510 = x3d.HAnimSegment()
HAnimSegment510.setName("l_clavicle")
HAnimSegment510.setDEF("hanim_l_clavicle")
Transform511 = x3d.Transform()
Transform511.setTranslation([0.082,1.4488,-0.0353])
Transform512 = x3d.Transform()
#Empty Transform
Shape513 = x3d.Shape()
Shape513.setUSE("HAnimJointShape")

Transform512.addChild(Shape513)

Transform511.addChildren(Transform512)

HAnimSegment510.addChildren(Transform511)
Shape514 = x3d.Shape()
LineSet515 = x3d.LineSet()
LineSet515.setVertexCount([2])
Coordinate516 = x3d.Coordinate()
Coordinate516.setPoint([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424])

LineSet515.setCoord(Coordinate516)
#from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA517 = x3d.ColorRGBA()
ColorRGBA517.setUSE("HAnimSegmentLineColorRGBA")

LineSet515.setColor(ColorRGBA517)

Shape514.setGeometry(LineSet515)

HAnimSegment510.addChildren(Shape514)

HAnimJoint509.addChildren(HAnimSegment510)
HAnimJoint518 = x3d.HAnimJoint()
HAnimJoint518.setName("l_acromioclavicular")
HAnimJoint518.setDEF("hanim_l_acromioclavicular")
HAnimJoint518.setCenter([0.0962,1.4269,-0.0424])
HAnimSegment519 = x3d.HAnimSegment()
HAnimSegment519.setName("l_scapula")
HAnimSegment519.setDEF("hanim_l_scapula")
Transform520 = x3d.Transform()
Transform520.setTranslation([0.0962,1.4269,-0.0424])
Transform521 = x3d.Transform()
#Empty Transform
Shape522 = x3d.Shape()
Shape522.setUSE("HAnimJointShape")

Transform521.addChild(Shape522)

Transform520.addChildren(Transform521)

HAnimSegment519.addChildren(Transform520)
Shape523 = x3d.Shape()
LineSet524 = x3d.LineSet()
LineSet524.setVertexCount([2])
Coordinate525 = x3d.Coordinate()
Coordinate525.setPoint([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387])

LineSet524.setCoord(Coordinate525)
#from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA526 = x3d.ColorRGBA()
ColorRGBA526.setUSE("HAnimSegmentLineColorRGBA")

LineSet524.setColor(ColorRGBA526)

Shape523.setGeometry(LineSet524)

HAnimSegment519.addChildren(Shape523)
HAnimSite527 = x3d.HAnimSite()
HAnimSite527.setName("l_bideltoid")
HAnimSite527.setDEF("hanim_l_bideltoid")
TouchSensor528 = x3d.TouchSensor()
TouchSensor528.setDescription("HAnimSite l_bideltoid")

HAnimSite527.addChildren(TouchSensor528)
Shape529 = x3d.Shape()
Shape529.setUSE("HAnimSiteShape")

HAnimSite527.addChildren(Shape529)

HAnimSegment519.addChildren(HAnimSite527)
HAnimSite530 = x3d.HAnimSite()
HAnimSite530.setName("l_humeral_lateral_epicondyles")
HAnimSite530.setDEF("hanim_l_humeral_lateral_epicondyles")
HAnimSite530.setTranslation([0.228,1.1482,-0.11])
TouchSensor531 = x3d.TouchSensor()
TouchSensor531.setDescription("HAnimSite l_humeral_lateral_epicondyles")

HAnimSite530.addChildren(TouchSensor531)
Shape532 = x3d.Shape()
Shape532.setUSE("HAnimSiteShape")

HAnimSite530.addChildren(Shape532)

HAnimSegment519.addChildren(HAnimSite530)

HAnimJoint518.addChildren(HAnimSegment519)
HAnimJoint533 = x3d.HAnimJoint()
HAnimJoint533.setName("l_shoulder")
HAnimJoint533.setDEF("hanim_l_shoulder")
HAnimJoint533.setCenter([0.2029,1.4376,-0.0387])
HAnimSegment534 = x3d.HAnimSegment()
HAnimSegment534.setName("l_upperarm")
HAnimSegment534.setDEF("hanim_l_upperarm")
Transform535 = x3d.Transform()
Transform535.setTranslation([0.2029,1.4376,-0.0387])
Transform536 = x3d.Transform()
#Empty Transform
Shape537 = x3d.Shape()
Shape537.setUSE("HAnimJointShape")

Transform536.addChild(Shape537)

Transform535.addChildren(Transform536)

HAnimSegment534.addChildren(Transform535)
Shape538 = x3d.Shape()
LineSet539 = x3d.LineSet()
LineSet539.setVertexCount([2])
Coordinate540 = x3d.Coordinate()
Coordinate540.setPoint([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682])

LineSet539.setCoord(Coordinate540)
#from l_shoulder to l_elbow vertices 2
ColorRGBA541 = x3d.ColorRGBA()
ColorRGBA541.setUSE("HAnimSegmentLineColorRGBA")

LineSet539.setColor(ColorRGBA541)

Shape538.setGeometry(LineSet539)

HAnimSegment534.addChildren(Shape538)
HAnimSite542 = x3d.HAnimSite()
HAnimSite542.setName("l_humeral_medial_epicondyles")
HAnimSite542.setDEF("hanim_l_humeral_medial_epicondyles")
HAnimSite542.setTranslation([0.1735,1.1272,-0.1113])
TouchSensor543 = x3d.TouchSensor()
TouchSensor543.setDescription("HAnimSite l_humeral_medial_epicondyles")

HAnimSite542.addChildren(TouchSensor543)
Shape544 = x3d.Shape()
Shape544.setUSE("HAnimSiteShape")

HAnimSite542.addChildren(Shape544)

HAnimSegment534.addChildren(HAnimSite542)
HAnimSite545 = x3d.HAnimSite()
HAnimSite545.setName("l_olecranon")
HAnimSite545.setDEF("hanim_l_olecranon")
HAnimSite545.setTranslation([-0.1962,1.1375,-0.1123])
TouchSensor546 = x3d.TouchSensor()
TouchSensor546.setDescription("HAnimSite l_olecranon")

HAnimSite545.addChildren(TouchSensor546)
Shape547 = x3d.Shape()
Shape547.setUSE("HAnimSiteShape")

HAnimSite545.addChildren(Shape547)

HAnimSegment534.addChildren(HAnimSite545)
HAnimSite548 = x3d.HAnimSite()
HAnimSite548.setName("l_radial_styloid")
HAnimSite548.setDEF("hanim_l_radial_styloid")
HAnimSite548.setTranslation([0.1901,0.8645,-0.0415])
TouchSensor549 = x3d.TouchSensor()
TouchSensor549.setDescription("HAnimSite l_radial_styloid")

HAnimSite548.addChildren(TouchSensor549)
Shape550 = x3d.Shape()
Shape550.setUSE("HAnimSiteShape")

HAnimSite548.addChildren(Shape550)

HAnimSegment534.addChildren(HAnimSite548)
HAnimSite551 = x3d.HAnimSite()
HAnimSite551.setName("l_radiale")
HAnimSite551.setDEF("hanim_l_radiale")
HAnimSite551.setTranslation([0.2182,1.1212,-0.1167])
TouchSensor552 = x3d.TouchSensor()
TouchSensor552.setDescription("HAnimSite l_radiale")

HAnimSite551.addChildren(TouchSensor552)
Shape553 = x3d.Shape()
Shape553.setUSE("HAnimSiteShape")

HAnimSite551.addChildren(Shape553)

HAnimSegment534.addChildren(HAnimSite551)

HAnimJoint533.addChildren(HAnimSegment534)
HAnimJoint554 = x3d.HAnimJoint()
HAnimJoint554.setName("l_elbow")
HAnimJoint554.setDEF("hanim_l_elbow")
HAnimJoint554.setCenter([0.2014,1.1357,-0.0682])
HAnimSegment555 = x3d.HAnimSegment()
HAnimSegment555.setName("l_forearm")
HAnimSegment555.setDEF("hanim_l_forearm")
Transform556 = x3d.Transform()
Transform556.setTranslation([0.2014,1.1357,-0.0682])
Transform557 = x3d.Transform()
#Empty Transform
Shape558 = x3d.Shape()
Shape558.setUSE("HAnimJointShape")

Transform557.addChild(Shape558)

Transform556.addChildren(Transform557)

HAnimSegment555.addChildren(Transform556)
Shape559 = x3d.Shape()
LineSet560 = x3d.LineSet()
LineSet560.setVertexCount([2])
Coordinate561 = x3d.Coordinate()
Coordinate561.setPoint([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583])

LineSet560.setCoord(Coordinate561)
#from l_elbow to l_radiocarpal vertices 2
ColorRGBA562 = x3d.ColorRGBA()
ColorRGBA562.setUSE("HAnimSegmentLineColorRGBA")

LineSet560.setColor(ColorRGBA562)

Shape559.setGeometry(LineSet560)

HAnimSegment555.addChildren(Shape559)
HAnimSite563 = x3d.HAnimSite()
HAnimSite563.setName("l_ulnar_styloid")
HAnimSite563.setDEF("hanim_l_ulnar_styloid")
HAnimSite563.setTranslation([-0.2142,0.8529,-0.0648])
TouchSensor564 = x3d.TouchSensor()
TouchSensor564.setDescription("HAnimSite l_ulnar_styloid")

HAnimSite563.addChildren(TouchSensor564)
Shape565 = x3d.Shape()
Shape565.setUSE("HAnimSiteShape")

HAnimSite563.addChildren(Shape565)

HAnimSegment555.addChildren(HAnimSite563)

HAnimJoint554.addChildren(HAnimSegment555)
HAnimJoint566 = x3d.HAnimJoint()
HAnimJoint566.setName("l_radiocarpal")
HAnimJoint566.setDEF("hanim_l_radiocarpal")
HAnimJoint566.setCenter([0.1984,0.8663,-0.0583])
HAnimSegment567 = x3d.HAnimSegment()
HAnimSegment567.setName("l_carpal")
HAnimSegment567.setDEF("hanim_l_carpal")
Transform568 = x3d.Transform()
Transform568.setScale([0.2,0.2,0.2])
Transform568.setTranslation([0.2,0.85,-0.05])
Transform568.setRotation([0,0,1,-3.14])
#Transform left hand
Transform569 = x3d.Transform()
Transform569.setRotation([0,1,0,-1.57])
#Transform left hand
Shape570 = x3d.Shape()
Shape570.setUSE("HAnimJointShape")

Transform569.addChild(Shape570)

Transform568.addChildren(Transform569)

HAnimSegment567.addChildren(Transform568)
Shape571 = x3d.Shape()
LineSet572 = x3d.LineSet()
LineSet572.setVertexCount([2])
Coordinate573 = x3d.Coordinate()
Coordinate573.setPoint([0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534])

LineSet572.setCoord(Coordinate573)
#from l_radiocarpal to l_carpometacarpal_1 vertices 2
ColorRGBA574 = x3d.ColorRGBA()
ColorRGBA574.setUSE("HAnimSegmentLineColorRGBA")

LineSet572.setColor(ColorRGBA574)

Shape571.setGeometry(LineSet572)

HAnimSegment567.addChildren(Shape571)
Shape575 = x3d.Shape()
LineSet576 = x3d.LineSet()
LineSet576.setVertexCount([2])
Coordinate577 = x3d.Coordinate()
Coordinate577.setPoint([0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028])

LineSet576.setCoord(Coordinate577)
#from l_radiocarpal to l_carpometacarpal_2 vertices 2
ColorRGBA578 = x3d.ColorRGBA()
ColorRGBA578.setUSE("HAnimSegmentLineColorRGBA")

LineSet576.setColor(ColorRGBA578)

Shape575.setGeometry(LineSet576)

HAnimSegment567.addChildren(Shape575)
HAnimSite579 = x3d.HAnimSite()
HAnimSite579.setName("l_metacarpal_phalanx_2")
HAnimSite579.setDEF("hanim_l_metacarpal_phalanx_2")
HAnimSite579.setTranslation([0.2009,0.8139,-0.0237])
TouchSensor580 = x3d.TouchSensor()
TouchSensor580.setDescription("HAnimSite l_metacarpal_phalanx_2")

HAnimSite579.addChildren(TouchSensor580)
Shape581 = x3d.Shape()
Shape581.setUSE("HAnimSiteShape")

HAnimSite579.addChildren(Shape581)

HAnimSegment567.addChildren(HAnimSite579)
Shape582 = x3d.Shape()
LineSet583 = x3d.LineSet()
LineSet583.setVertexCount([2])
Coordinate584 = x3d.Coordinate()
Coordinate584.setPoint([0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053])

LineSet583.setCoord(Coordinate584)
#from l_radiocarpal to l_carpometacarpal_3 vertices 2
ColorRGBA585 = x3d.ColorRGBA()
ColorRGBA585.setUSE("HAnimSegmentLineColorRGBA")

LineSet583.setColor(ColorRGBA585)

Shape582.setGeometry(LineSet583)

HAnimSegment567.addChildren(Shape582)
HAnimSite586 = x3d.HAnimSite()
HAnimSite586.setName("l_metacarpal_phalanx_3")
HAnimSite586.setDEF("hanim_l_metacarpal_phalanx_3")
TouchSensor587 = x3d.TouchSensor()
TouchSensor587.setDescription("HAnimSite l_metacarpal_phalanx_3")

HAnimSite586.addChildren(TouchSensor587)
Shape588 = x3d.Shape()
Shape588.setUSE("HAnimSiteShape")

HAnimSite586.addChildren(Shape588)

HAnimSegment567.addChildren(HAnimSite586)
Shape589 = x3d.Shape()
LineSet590 = x3d.LineSet()
LineSet590.setVertexCount([2])
Coordinate591 = x3d.Coordinate()
Coordinate591.setPoint([0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794])

LineSet590.setCoord(Coordinate591)
#from l_radiocarpal to l_carpometacarpal_4 vertices 2
ColorRGBA592 = x3d.ColorRGBA()
ColorRGBA592.setUSE("HAnimSegmentLineColorRGBA")

LineSet590.setColor(ColorRGBA592)

Shape589.setGeometry(LineSet590)

HAnimSegment567.addChildren(Shape589)
Shape593 = x3d.Shape()
LineSet594 = x3d.LineSet()
LineSet594.setVertexCount([2])
Coordinate595 = x3d.Coordinate()
Coordinate595.setPoint([0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036])

LineSet594.setCoord(Coordinate595)
#from l_radiocarpal to l_carpometacarpal_5 vertices 2
ColorRGBA596 = x3d.ColorRGBA()
ColorRGBA596.setUSE("HAnimSegmentLineColorRGBA")

LineSet594.setColor(ColorRGBA596)

Shape593.setGeometry(LineSet594)

HAnimSegment567.addChildren(Shape593)
HAnimSite597 = x3d.HAnimSite()
HAnimSite597.setName("l_metacarpal_phalanx_5")
HAnimSite597.setDEF("hanim_l_metacarpal_phalanx_5")
HAnimSite597.setTranslation([0.1929,0.786,-0.1122])
TouchSensor598 = x3d.TouchSensor()
TouchSensor598.setDescription("HAnimSite l_metacarpal_phalanx_5")

HAnimSite597.addChildren(TouchSensor598)
Shape599 = x3d.Shape()
Shape599.setUSE("HAnimSiteShape")

HAnimSite597.addChildren(Shape599)

HAnimSegment567.addChildren(HAnimSite597)

HAnimJoint566.addChildren(HAnimSegment567)
HAnimJoint600 = x3d.HAnimJoint()
HAnimJoint600.setName("l_carpometacarpal_1")
HAnimJoint600.setDEF("hanim_l_carpometacarpal_1")
HAnimJoint600.setCenter([0.1924,0.8472,-0.0534])
HAnimSegment601 = x3d.HAnimSegment()
HAnimSegment601.setName("l_metacarpal_1")
HAnimSegment601.setDEF("hanim_l_metacarpal_1")
Transform602 = x3d.Transform()
Transform602.setTranslation([0.1924,0.8472,-0.0534])
Transform603 = x3d.Transform()
#Empty Transform
Shape604 = x3d.Shape()
Shape604.setUSE("HAnimJointShape")

Transform603.addChild(Shape604)

Transform602.addChildren(Transform603)

HAnimSegment601.addChildren(Transform602)
Shape605 = x3d.Shape()
LineSet606 = x3d.LineSet()
LineSet606.setVertexCount([2])
Coordinate607 = x3d.Coordinate()
Coordinate607.setPoint([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246])

LineSet606.setCoord(Coordinate607)
#from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA608 = x3d.ColorRGBA()
ColorRGBA608.setUSE("HAnimSegmentLineColorRGBA")

LineSet606.setColor(ColorRGBA608)

Shape605.setGeometry(LineSet606)

HAnimSegment601.addChildren(Shape605)

HAnimJoint600.addChildren(HAnimSegment601)
HAnimJoint609 = x3d.HAnimJoint()
HAnimJoint609.setName("l_metacarpophalangeal_1")
HAnimJoint609.setDEF("hanim_l_metacarpophalangeal_1")
HAnimJoint609.setCenter([0.1951,0.8226,0.0246])
HAnimSegment610 = x3d.HAnimSegment()
HAnimSegment610.setName("l_carpal_proximal_phalanx_1")
HAnimSegment610.setDEF("hanim_l_carpal_proximal_phalanx_1")
Transform611 = x3d.Transform()
Transform611.setTranslation([0.1951,0.8226,0.0246])
Transform612 = x3d.Transform()
#Empty Transform
Shape613 = x3d.Shape()
Shape613.setUSE("HAnimJointShape")

Transform612.addChild(Shape613)

Transform611.addChildren(Transform612)

HAnimSegment610.addChildren(Transform611)
Shape614 = x3d.Shape()
LineSet615 = x3d.LineSet()
LineSet615.setVertexCount([2])
Coordinate616 = x3d.Coordinate()
Coordinate616.setPoint([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464])

LineSet615.setCoord(Coordinate616)
#from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA617 = x3d.ColorRGBA()
ColorRGBA617.setUSE("HAnimSegmentLineColorRGBA")

LineSet615.setColor(ColorRGBA617)

Shape614.setGeometry(LineSet615)

HAnimSegment610.addChildren(Shape614)
HAnimSite618 = x3d.HAnimSite()
HAnimSite618.setName("l_carpal_distal_phalanx_1_tip")
HAnimSite618.setDEF("hanim_l_carpal_distal_phalanx_1_tip")
TouchSensor619 = x3d.TouchSensor()
TouchSensor619.setDescription("HAnimSite l_carpal_distal_phalanx_1_tip")

HAnimSite618.addChildren(TouchSensor619)
Shape620 = x3d.Shape()
Shape620.setUSE("HAnimSiteShape")

HAnimSite618.addChildren(Shape620)

HAnimSegment610.addChildren(HAnimSite618)

HAnimJoint609.addChildren(HAnimSegment610)
HAnimJoint621 = x3d.HAnimJoint()
HAnimJoint621.setName("l_carpal_interphalangeal_1")
HAnimJoint621.setDEF("hanim_l_carpal_interphalangeal_1")
HAnimJoint621.setCenter([0.1955,0.8159,0.0464])

HAnimJoint609.addChildren(HAnimJoint621)

HAnimJoint600.addChildren(HAnimJoint609)

HAnimJoint566.addChildren(HAnimJoint600)
HAnimJoint622 = x3d.HAnimJoint()
HAnimJoint622.setName("l_carpometacarpal_2")
HAnimJoint622.setDEF("hanim_l_carpometacarpal_2")
HAnimJoint622.setCenter([0.1983,0.8024,-0.028])
HAnimSegment623 = x3d.HAnimSegment()
HAnimSegment623.setName("l_metacarpal_2")
HAnimSegment623.setDEF("hanim_l_metacarpal_2")
Transform624 = x3d.Transform()
Transform624.setTranslation([0.1983,0.8024,-0.028])
Transform625 = x3d.Transform()
#Empty Transform
Shape626 = x3d.Shape()
Shape626.setUSE("HAnimJointShape")

Transform625.addChild(Shape626)

Transform624.addChildren(Transform625)

HAnimSegment623.addChildren(Transform624)
Shape627 = x3d.Shape()
LineSet628 = x3d.LineSet()
LineSet628.setVertexCount([2])
Coordinate629 = x3d.Coordinate()
Coordinate629.setPoint([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028])

LineSet628.setCoord(Coordinate629)
#from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA630 = x3d.ColorRGBA()
ColorRGBA630.setUSE("HAnimSegmentLineColorRGBA")

LineSet628.setColor(ColorRGBA630)

Shape627.setGeometry(LineSet628)

HAnimSegment623.addChildren(Shape627)

HAnimJoint622.addChildren(HAnimSegment623)
HAnimJoint631 = x3d.HAnimJoint()
HAnimJoint631.setName("l_metacarpophalangeal_2")
HAnimJoint631.setDEF("hanim_l_metacarpophalangeal_2")
HAnimJoint631.setCenter([0.1983,0.7815,-0.028])
HAnimSegment632 = x3d.HAnimSegment()
HAnimSegment632.setName("l_carpal_proximal_phalanx_2")
HAnimSegment632.setDEF("hanim_l_carpal_proximal_phalanx_2")
Transform633 = x3d.Transform()
Transform633.setTranslation([0.1983,0.7815,-0.028])
Transform634 = x3d.Transform()
#Empty Transform
Shape635 = x3d.Shape()
Shape635.setUSE("HAnimJointShape")

Transform634.addChild(Shape635)

Transform633.addChildren(Transform634)

HAnimSegment632.addChildren(Transform633)
Shape636 = x3d.Shape()
LineSet637 = x3d.LineSet()
LineSet637.setVertexCount([2])
Coordinate638 = x3d.Coordinate()
Coordinate638.setPoint([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248])

LineSet637.setCoord(Coordinate638)
#from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA639 = x3d.ColorRGBA()
ColorRGBA639.setUSE("HAnimSegmentLineColorRGBA")

LineSet637.setColor(ColorRGBA639)

Shape636.setGeometry(LineSet637)

HAnimSegment632.addChildren(Shape636)

HAnimJoint631.addChildren(HAnimSegment632)
HAnimJoint640 = x3d.HAnimJoint()
HAnimJoint640.setName("l_carpal_proximal_interphalangeal_2")
HAnimJoint640.setDEF("hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint640.setCenter([0.2017,0.7363,-0.0248])
HAnimSegment641 = x3d.HAnimSegment()
HAnimSegment641.setName("l_carpal_middle_phalanx_2")
HAnimSegment641.setDEF("hanim_l_carpal_middle_phalanx_2")
Transform642 = x3d.Transform()
Transform642.setTranslation([0.2017,0.7363,-0.0248])
Transform643 = x3d.Transform()
#Empty Transform
Shape644 = x3d.Shape()
Shape644.setUSE("HAnimJointShape")

Transform643.addChild(Shape644)

Transform642.addChildren(Transform643)

HAnimSegment641.addChildren(Transform642)
Shape645 = x3d.Shape()
LineSet646 = x3d.LineSet()
LineSet646.setVertexCount([2])
Coordinate647 = x3d.Coordinate()
Coordinate647.setPoint([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236])

LineSet646.setCoord(Coordinate647)
#from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA648 = x3d.ColorRGBA()
ColorRGBA648.setUSE("HAnimSegmentLineColorRGBA")

LineSet646.setColor(ColorRGBA648)

Shape645.setGeometry(LineSet646)

HAnimSegment641.addChildren(Shape645)
HAnimSite649 = x3d.HAnimSite()
HAnimSite649.setName("l_carpal_distal_phalanx_2_tip")
HAnimSite649.setDEF("hanim_l_carpal_distal_phalanx_2_tip")
TouchSensor650 = x3d.TouchSensor()
TouchSensor650.setDescription("HAnimSite l_carpal_distal_phalanx_2_tip")

HAnimSite649.addChildren(TouchSensor650)
Shape651 = x3d.Shape()
Shape651.setUSE("HAnimSiteShape")

HAnimSite649.addChildren(Shape651)

HAnimSegment641.addChildren(HAnimSite649)
HAnimSite652 = x3d.HAnimSite()
HAnimSite652.setName("l_dactylion")
HAnimSite652.setDEF("hanim_l_dactylion")
HAnimSite652.setTranslation([0.2056,0.6743,-0.0482])
TouchSensor653 = x3d.TouchSensor()
TouchSensor653.setDescription("HAnimSite l_dactylion")

HAnimSite652.addChildren(TouchSensor653)
Shape654 = x3d.Shape()
Shape654.setUSE("HAnimSiteShape")

HAnimSite652.addChildren(Shape654)

HAnimSegment641.addChildren(HAnimSite652)

HAnimJoint640.addChildren(HAnimSegment641)
HAnimJoint655 = x3d.HAnimJoint()
HAnimJoint655.setName("l_carpal_distal_interphalangeal_2")
HAnimJoint655.setDEF("hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint655.setCenter([0.2028,0.7139,-0.0236])

HAnimJoint640.addChildren(HAnimJoint655)

HAnimJoint631.addChildren(HAnimJoint640)

HAnimJoint622.addChildren(HAnimJoint631)

HAnimJoint566.addChildren(HAnimJoint622)
HAnimJoint656 = x3d.HAnimJoint()
HAnimJoint656.setName("l_carpometacarpal_3")
HAnimJoint656.setDEF("hanim_l_carpometacarpal_3")
HAnimJoint656.setCenter([0.1987,0.8029,-0.053])
HAnimSegment657 = x3d.HAnimSegment()
HAnimSegment657.setName("l_metacarpal_3")
HAnimSegment657.setDEF("hanim_l_metacarpal_3")
Transform658 = x3d.Transform()
Transform658.setTranslation([0.1987,0.8029,-0.053])
Transform659 = x3d.Transform()
#Empty Transform
Shape660 = x3d.Shape()
Shape660.setUSE("HAnimJointShape")

Transform659.addChild(Shape660)

Transform658.addChildren(Transform659)

HAnimSegment657.addChildren(Transform658)
Shape661 = x3d.Shape()
LineSet662 = x3d.LineSet()
LineSet662.setVertexCount([2])
Coordinate663 = x3d.Coordinate()
Coordinate663.setPoint([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053])

LineSet662.setCoord(Coordinate663)
#from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA664 = x3d.ColorRGBA()
ColorRGBA664.setUSE("HAnimSegmentLineColorRGBA")

LineSet662.setColor(ColorRGBA664)

Shape661.setGeometry(LineSet662)

HAnimSegment657.addChildren(Shape661)

HAnimJoint656.addChildren(HAnimSegment657)
HAnimJoint665 = x3d.HAnimJoint()
HAnimJoint665.setName("l_metacarpophalangeal_3")
HAnimJoint665.setDEF("hanim_l_metacarpophalangeal_3")
HAnimJoint665.setCenter([0.1987,0.7818,-0.053])
HAnimSegment666 = x3d.HAnimSegment()
HAnimSegment666.setName("l_carpal_proximal_phalanx_3")
HAnimSegment666.setDEF("hanim_l_carpal_proximal_phalanx_3")
Transform667 = x3d.Transform()
Transform667.setTranslation([0.1987,0.7818,-0.053])
Transform668 = x3d.Transform()
#Empty Transform
Shape669 = x3d.Shape()
Shape669.setUSE("HAnimJointShape")

Transform668.addChild(Shape669)

Transform667.addChildren(Transform668)

HAnimSegment666.addChildren(Transform667)
Shape670 = x3d.Shape()
LineSet671 = x3d.LineSet()
LineSet671.setVertexCount([2])
Coordinate672 = x3d.Coordinate()
Coordinate672.setPoint([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503])

LineSet671.setCoord(Coordinate672)
#from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA673 = x3d.ColorRGBA()
ColorRGBA673.setUSE("HAnimSegmentLineColorRGBA")

LineSet671.setColor(ColorRGBA673)

Shape670.setGeometry(LineSet671)

HAnimSegment666.addChildren(Shape670)

HAnimJoint665.addChildren(HAnimSegment666)
HAnimJoint674 = x3d.HAnimJoint()
HAnimJoint674.setName("l_carpal_proximal_interphalangeal_3")
HAnimJoint674.setDEF("hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint674.setCenter([0.2013,0.7273,-0.0503])
HAnimSegment675 = x3d.HAnimSegment()
HAnimSegment675.setName("l_carpal_middle_phalanx_3")
HAnimSegment675.setDEF("hanim_l_carpal_middle_phalanx_3")
Transform676 = x3d.Transform()
Transform676.setTranslation([0.2013,0.7273,-0.0503])
Transform677 = x3d.Transform()
#Empty Transform
Shape678 = x3d.Shape()
Shape678.setUSE("HAnimJointShape")

Transform677.addChild(Shape678)

Transform676.addChildren(Transform677)

HAnimSegment675.addChildren(Transform676)
Shape679 = x3d.Shape()
LineSet680 = x3d.LineSet()
LineSet680.setVertexCount([2])
Coordinate681 = x3d.Coordinate()
Coordinate681.setPoint([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494])

LineSet680.setCoord(Coordinate681)
#from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA682 = x3d.ColorRGBA()
ColorRGBA682.setUSE("HAnimSegmentLineColorRGBA")

LineSet680.setColor(ColorRGBA682)

Shape679.setGeometry(LineSet680)

HAnimSegment675.addChildren(Shape679)
HAnimSite683 = x3d.HAnimSite()
HAnimSite683.setName("l_carpal_distal_phalanx_3_tip")
HAnimSite683.setDEF("hanim_l_carpal_distal_phalanx_3_tip")
TouchSensor684 = x3d.TouchSensor()
TouchSensor684.setDescription("HAnimSite l_carpal_distal_phalanx_3_tip")

HAnimSite683.addChildren(TouchSensor684)
Shape685 = x3d.Shape()
Shape685.setUSE("HAnimSiteShape")

HAnimSite683.addChildren(Shape685)

HAnimSegment675.addChildren(HAnimSite683)

HAnimJoint674.addChildren(HAnimSegment675)
HAnimJoint686 = x3d.HAnimJoint()
HAnimJoint686.setName("l_carpal_distal_interphalangeal_3")
HAnimJoint686.setDEF("hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint686.setCenter([0.2026,0.7011,-0.0494])

HAnimJoint674.addChildren(HAnimJoint686)

HAnimJoint665.addChildren(HAnimJoint674)

HAnimJoint656.addChildren(HAnimJoint665)

HAnimJoint566.addChildren(HAnimJoint656)
HAnimJoint687 = x3d.HAnimJoint()
HAnimJoint687.setName("l_carpometacarpal_4")
HAnimJoint687.setDEF("hanim_l_carpometacarpal_4")
HAnimJoint687.setCenter([0.1956,0.8019,-0.0794])
HAnimSegment688 = x3d.HAnimSegment()
HAnimSegment688.setName("l_metacarpal_4")
HAnimSegment688.setDEF("hanim_l_metacarpal_4")
Transform689 = x3d.Transform()
Transform689.setTranslation([0.1956,0.8019,-0.0794])
Transform690 = x3d.Transform()
#Empty Transform
Shape691 = x3d.Shape()
Shape691.setUSE("HAnimJointShape")

Transform690.addChild(Shape691)

Transform689.addChildren(Transform690)

HAnimSegment688.addChildren(Transform689)
Shape692 = x3d.Shape()
LineSet693 = x3d.LineSet()
LineSet693.setVertexCount([2])
Coordinate694 = x3d.Coordinate()
Coordinate694.setPoint([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794])

LineSet693.setCoord(Coordinate694)
#from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA695 = x3d.ColorRGBA()
ColorRGBA695.setUSE("HAnimSegmentLineColorRGBA")

LineSet693.setColor(ColorRGBA695)

Shape692.setGeometry(LineSet693)

HAnimSegment688.addChildren(Shape692)

HAnimJoint687.addChildren(HAnimSegment688)
HAnimJoint696 = x3d.HAnimJoint()
HAnimJoint696.setName("l_metacarpophalangeal_4")
HAnimJoint696.setDEF("hanim_l_metacarpophalangeal_4")
HAnimJoint696.setCenter([0.1956,0.7815,-0.0794])
HAnimSegment697 = x3d.HAnimSegment()
HAnimSegment697.setName("l_carpal_proximal_phalanx_4")
HAnimSegment697.setDEF("hanim_l_carpal_proximal_phalanx_4")
Transform698 = x3d.Transform()
Transform698.setTranslation([0.1956,0.7815,-0.0794])
Transform699 = x3d.Transform()
#Empty Transform
Shape700 = x3d.Shape()
Shape700.setUSE("HAnimJointShape")

Transform699.addChild(Shape700)

Transform698.addChildren(Transform699)

HAnimSegment697.addChildren(Transform698)
Shape701 = x3d.Shape()
LineSet702 = x3d.LineSet()
LineSet702.setVertexCount([2])
Coordinate703 = x3d.Coordinate()
Coordinate703.setPoint([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777])

LineSet702.setCoord(Coordinate703)
#from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA704 = x3d.ColorRGBA()
ColorRGBA704.setUSE("HAnimSegmentLineColorRGBA")

LineSet702.setColor(ColorRGBA704)

Shape701.setGeometry(LineSet702)

HAnimSegment697.addChildren(Shape701)

HAnimJoint696.addChildren(HAnimSegment697)
HAnimJoint705 = x3d.HAnimJoint()
HAnimJoint705.setName("l_carpal_proximal_interphalangeal_4")
HAnimJoint705.setDEF("hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint705.setCenter([0.1973,0.7287,-0.0777])
HAnimSegment706 = x3d.HAnimSegment()
HAnimSegment706.setName("l_carpal_middle_phalanx_4")
HAnimSegment706.setDEF("hanim_l_carpal_middle_phalanx_4")
Transform707 = x3d.Transform()
Transform707.setTranslation([0.1973,0.7287,-0.0777])
Transform708 = x3d.Transform()
#Empty Transform
Shape709 = x3d.Shape()
Shape709.setUSE("HAnimJointShape")

Transform708.addChild(Shape709)

Transform707.addChildren(Transform708)

HAnimSegment706.addChildren(Transform707)
Shape710 = x3d.Shape()
LineSet711 = x3d.LineSet()
LineSet711.setVertexCount([2])
Coordinate712 = x3d.Coordinate()
Coordinate712.setPoint([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767])

LineSet711.setCoord(Coordinate712)
#from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA713 = x3d.ColorRGBA()
ColorRGBA713.setUSE("HAnimSegmentLineColorRGBA")

LineSet711.setColor(ColorRGBA713)

Shape710.setGeometry(LineSet711)

HAnimSegment706.addChildren(Shape710)
HAnimSite714 = x3d.HAnimSite()
HAnimSite714.setName("l_carpal_distal_phalanx_4_tip")
HAnimSite714.setDEF("hanim_l_carpal_distal_phalanx_4_tip")
TouchSensor715 = x3d.TouchSensor()
TouchSensor715.setDescription("HAnimSite l_carpal_distal_phalanx_4_tip")

HAnimSite714.addChildren(TouchSensor715)
Shape716 = x3d.Shape()
Shape716.setUSE("HAnimSiteShape")

HAnimSite714.addChildren(Shape716)

HAnimSegment706.addChildren(HAnimSite714)

HAnimJoint705.addChildren(HAnimSegment706)
HAnimJoint717 = x3d.HAnimJoint()
HAnimJoint717.setName("l_carpal_distal_interphalangeal_4")
HAnimJoint717.setDEF("hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint717.setCenter([0.1983,0.7045,-0.0767])

HAnimJoint705.addChildren(HAnimJoint717)

HAnimJoint696.addChildren(HAnimJoint705)

HAnimJoint687.addChildren(HAnimJoint696)

HAnimJoint566.addChildren(HAnimJoint687)
HAnimJoint718 = x3d.HAnimJoint()
HAnimJoint718.setName("l_carpometacarpal_5")
HAnimJoint718.setDEF("hanim_l_carpometacarpal_5")
HAnimJoint718.setCenter([0.1925,0.8066,-0.1036])
HAnimSegment719 = x3d.HAnimSegment()
HAnimSegment719.setName("l_metacarpal_5")
HAnimSegment719.setDEF("hanim_l_metacarpal_5")
Transform720 = x3d.Transform()
Transform720.setTranslation([0.1925,0.8066,-0.1036])
Transform721 = x3d.Transform()
#Empty Transform
Shape722 = x3d.Shape()
Shape722.setUSE("HAnimJointShape")

Transform721.addChild(Shape722)

Transform720.addChildren(Transform721)

HAnimSegment719.addChildren(Transform720)
Shape723 = x3d.Shape()
LineSet724 = x3d.LineSet()
LineSet724.setVertexCount([2])
Coordinate725 = x3d.Coordinate()
Coordinate725.setPoint([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036])

LineSet724.setCoord(Coordinate725)
#from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA726 = x3d.ColorRGBA()
ColorRGBA726.setUSE("HAnimSegmentLineColorRGBA")

LineSet724.setColor(ColorRGBA726)

Shape723.setGeometry(LineSet724)

HAnimSegment719.addChildren(Shape723)

HAnimJoint718.addChildren(HAnimSegment719)
HAnimJoint727 = x3d.HAnimJoint()
HAnimJoint727.setName("l_metacarpophalangeal_5")
HAnimJoint727.setDEF("hanim_l_metacarpophalangeal_5")
HAnimJoint727.setCenter([0.1925,0.7866,-0.1036])
HAnimSegment728 = x3d.HAnimSegment()
HAnimSegment728.setName("l_carpal_proximal_phalanx_5")
HAnimSegment728.setDEF("hanim_l_carpal_proximal_phalanx_5")
Transform729 = x3d.Transform()
Transform729.setTranslation([0.1925,0.7866,-0.1036])
Transform730 = x3d.Transform()
#Empty Transform
Shape731 = x3d.Shape()
Shape731.setUSE("HAnimJointShape")

Transform730.addChild(Shape731)

Transform729.addChildren(Transform730)

HAnimSegment728.addChildren(Transform729)
Shape732 = x3d.Shape()
LineSet733 = x3d.LineSet()
LineSet733.setVertexCount([2])
Coordinate734 = x3d.Coordinate()
Coordinate734.setPoint([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024])

LineSet733.setCoord(Coordinate734)
#from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA735 = x3d.ColorRGBA()
ColorRGBA735.setUSE("HAnimSegmentLineColorRGBA")

LineSet733.setColor(ColorRGBA735)

Shape732.setGeometry(LineSet733)

HAnimSegment728.addChildren(Shape732)

HAnimJoint727.addChildren(HAnimSegment728)
HAnimJoint736 = x3d.HAnimJoint()
HAnimJoint736.setName("l_carpal_proximal_interphalangeal_5")
HAnimJoint736.setDEF("hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint736.setCenter([0.1938,0.7452,-0.1024])
HAnimSegment737 = x3d.HAnimSegment()
HAnimSegment737.setName("l_carpal_middle_phalanx_5")
HAnimSegment737.setDEF("hanim_l_carpal_middle_phalanx_5")
Transform738 = x3d.Transform()
Transform738.setTranslation([0.1938,0.7452,-0.1024])
Transform739 = x3d.Transform()
#Empty Transform
Shape740 = x3d.Shape()
Shape740.setUSE("HAnimJointShape")

Transform739.addChild(Shape740)

Transform738.addChildren(Transform739)

HAnimSegment737.addChildren(Transform738)
Shape741 = x3d.Shape()
LineSet742 = x3d.LineSet()
LineSet742.setVertexCount([2])
Coordinate743 = x3d.Coordinate()
Coordinate743.setPoint([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017])

LineSet742.setCoord(Coordinate743)
#from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA744 = x3d.ColorRGBA()
ColorRGBA744.setUSE("HAnimSegmentLineColorRGBA")

LineSet742.setColor(ColorRGBA744)

Shape741.setGeometry(LineSet742)

HAnimSegment737.addChildren(Shape741)
HAnimSite745 = x3d.HAnimSite()
HAnimSite745.setName("l_carpal_distal_phalanx_5_tip")
HAnimSite745.setDEF("hanim_l_carpal_distal_phalanx_5_tip")
TouchSensor746 = x3d.TouchSensor()
TouchSensor746.setDescription("HAnimSite l_carpal_distal_phalanx_5_tip")

HAnimSite745.addChildren(TouchSensor746)
Shape747 = x3d.Shape()
Shape747.setUSE("HAnimSiteShape")

HAnimSite745.addChildren(Shape747)

HAnimSegment737.addChildren(HAnimSite745)

HAnimJoint736.addChildren(HAnimSegment737)
HAnimJoint748 = x3d.HAnimJoint()
HAnimJoint748.setName("l_carpal_distal_interphalangeal_5")
HAnimJoint748.setDEF("hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint748.setCenter([0.1948,0.7277,-0.1017])

HAnimJoint736.addChildren(HAnimJoint748)

HAnimJoint727.addChildren(HAnimJoint736)

HAnimJoint718.addChildren(HAnimJoint727)

HAnimJoint566.addChildren(HAnimJoint718)

HAnimJoint554.addChildren(HAnimJoint566)

HAnimJoint533.addChildren(HAnimJoint554)

HAnimJoint518.addChildren(HAnimJoint533)

HAnimJoint509.addChildren(HAnimJoint518)

HAnimJoint395.addChildren(HAnimJoint509)
HAnimJoint749 = x3d.HAnimJoint()
HAnimJoint749.setName("r_sternoclavicular")
HAnimJoint749.setDEF("hanim_r_sternoclavicular")
HAnimJoint749.setCenter([-0.0694,1.46,-0.033])
HAnimSegment750 = x3d.HAnimSegment()
HAnimSegment750.setName("r_clavicle")
HAnimSegment750.setDEF("hanim_r_clavicle")
Transform751 = x3d.Transform()
Transform751.setTranslation([-0.0694,1.46,-0.033])
Transform752 = x3d.Transform()
#Empty Transform
Shape753 = x3d.Shape()
Shape753.setUSE("HAnimJointShape")

Transform752.addChild(Shape753)

Transform751.addChildren(Transform752)

HAnimSegment750.addChildren(Transform751)
Shape754 = x3d.Shape()
LineSet755 = x3d.LineSet()
LineSet755.setVertexCount([2])
Coordinate756 = x3d.Coordinate()
Coordinate756.setPoint([-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401])

LineSet755.setCoord(Coordinate756)
#from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA757 = x3d.ColorRGBA()
ColorRGBA757.setUSE("HAnimSegmentLineColorRGBA")

LineSet755.setColor(ColorRGBA757)

Shape754.setGeometry(LineSet755)

HAnimSegment750.addChildren(Shape754)

HAnimJoint749.addChildren(HAnimSegment750)
HAnimJoint758 = x3d.HAnimJoint()
HAnimJoint758.setName("r_acromioclavicular")
HAnimJoint758.setDEF("hanim_r_acromioclavicular")
HAnimJoint758.setCenter([-0.0836,1.4281,-0.0401])
HAnimSegment759 = x3d.HAnimSegment()
HAnimSegment759.setName("r_scapula")
HAnimSegment759.setDEF("hanim_r_scapula")
Transform760 = x3d.Transform()
Transform760.setTranslation([-0.0836,1.4281,-0.0401])
Transform761 = x3d.Transform()
#Empty Transform
Shape762 = x3d.Shape()
Shape762.setUSE("HAnimJointShape")

Transform761.addChild(Shape762)

Transform760.addChildren(Transform761)

HAnimSegment759.addChildren(Transform760)
Shape763 = x3d.Shape()
LineSet764 = x3d.LineSet()
LineSet764.setVertexCount([2])
Coordinate765 = x3d.Coordinate()
Coordinate765.setPoint([-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325])

LineSet764.setCoord(Coordinate765)
#from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA766 = x3d.ColorRGBA()
ColorRGBA766.setUSE("HAnimSegmentLineColorRGBA")

LineSet764.setColor(ColorRGBA766)

Shape763.setGeometry(LineSet764)

HAnimSegment759.addChildren(Shape763)
HAnimSite767 = x3d.HAnimSite()
HAnimSite767.setName("r_bideltoid")
HAnimSite767.setDEF("hanim_r_bideltoid")
TouchSensor768 = x3d.TouchSensor()
TouchSensor768.setDescription("HAnimSite r_bideltoid")

HAnimSite767.addChildren(TouchSensor768)
Shape769 = x3d.Shape()
Shape769.setUSE("HAnimSiteShape")

HAnimSite767.addChildren(Shape769)

HAnimSegment759.addChildren(HAnimSite767)
HAnimSite770 = x3d.HAnimSite()
HAnimSite770.setName("r_humeral_lateral_epicondyles")
HAnimSite770.setDEF("hanim_r_humeral_lateral_epicondyles")
HAnimSite770.setTranslation([-0.2224,1.1517,-0.1033])
TouchSensor771 = x3d.TouchSensor()
TouchSensor771.setDescription("HAnimSite r_humeral_lateral_epicondyles")

HAnimSite770.addChildren(TouchSensor771)
Shape772 = x3d.Shape()
Shape772.setUSE("HAnimSiteShape")

HAnimSite770.addChildren(Shape772)

HAnimSegment759.addChildren(HAnimSite770)

HAnimJoint758.addChildren(HAnimSegment759)
HAnimJoint773 = x3d.HAnimJoint()
HAnimJoint773.setName("r_shoulder")
HAnimJoint773.setDEF("hanim_r_shoulder")
HAnimJoint773.setCenter([-0.1907,1.4407,-0.0325])
HAnimSegment774 = x3d.HAnimSegment()
HAnimSegment774.setName("r_upperarm")
HAnimSegment774.setDEF("hanim_r_upperarm")
Transform775 = x3d.Transform()
Transform775.setTranslation([-0.1907,1.4407,-0.0325])
Transform776 = x3d.Transform()
#Empty Transform
Shape777 = x3d.Shape()
Shape777.setUSE("HAnimJointShape")

Transform776.addChild(Shape777)

Transform775.addChildren(Transform776)

HAnimSegment774.addChildren(Transform775)
Shape778 = x3d.Shape()
LineSet779 = x3d.LineSet()
LineSet779.setVertexCount([2])
Coordinate780 = x3d.Coordinate()
Coordinate780.setPoint([-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062])

LineSet779.setCoord(Coordinate780)
#from r_shoulder to r_elbow vertices 2
ColorRGBA781 = x3d.ColorRGBA()
ColorRGBA781.setUSE("HAnimSegmentLineColorRGBA")

LineSet779.setColor(ColorRGBA781)

Shape778.setGeometry(LineSet779)

HAnimSegment774.addChildren(Shape778)
HAnimSite782 = x3d.HAnimSite()
HAnimSite782.setName("r_humeral_medial_epicondyles")
HAnimSite782.setDEF("hanim_r_humeral_medial_epicondyles")
HAnimSite782.setTranslation([-0.168,1.1298,-0.1062])
TouchSensor783 = x3d.TouchSensor()
TouchSensor783.setDescription("HAnimSite r_humeral_medial_epicondyles")

HAnimSite782.addChildren(TouchSensor783)
Shape784 = x3d.Shape()
Shape784.setUSE("HAnimSiteShape")

HAnimSite782.addChildren(Shape784)

HAnimSegment774.addChildren(HAnimSite782)
HAnimSite785 = x3d.HAnimSite()
HAnimSite785.setName("r_olecranon")
HAnimSite785.setDEF("hanim_r_olecranon")
HAnimSite785.setTranslation([-0.1907,1.1405,-0.1065])
TouchSensor786 = x3d.TouchSensor()
TouchSensor786.setDescription("HAnimSite r_olecranon")

HAnimSite785.addChildren(TouchSensor786)
Shape787 = x3d.Shape()
Shape787.setUSE("HAnimSiteShape")

HAnimSite785.addChildren(Shape787)

HAnimSegment774.addChildren(HAnimSite785)
HAnimSite788 = x3d.HAnimSite()
HAnimSite788.setName("r_radial_styloid")
HAnimSite788.setDEF("hanim_r_radial_styloid")
HAnimSite788.setTranslation([-0.1884,0.8676,-0.036])
TouchSensor789 = x3d.TouchSensor()
TouchSensor789.setDescription("HAnimSite r_radial_styloid")

HAnimSite788.addChildren(TouchSensor789)
Shape790 = x3d.Shape()
Shape790.setUSE("HAnimSiteShape")

HAnimSite788.addChildren(Shape790)

HAnimSegment774.addChildren(HAnimSite788)
HAnimSite791 = x3d.HAnimSite()
HAnimSite791.setName("r_radiale")
HAnimSite791.setDEF("hanim_r_radiale")
HAnimSite791.setTranslation([-0.213,1.1305,-0.1091])
TouchSensor792 = x3d.TouchSensor()
TouchSensor792.setDescription("HAnimSite r_radiale")

HAnimSite791.addChildren(TouchSensor792)
Shape793 = x3d.Shape()
Shape793.setUSE("HAnimSiteShape")

HAnimSite791.addChildren(Shape793)

HAnimSegment774.addChildren(HAnimSite791)

HAnimJoint773.addChildren(HAnimSegment774)
HAnimJoint794 = x3d.HAnimJoint()
HAnimJoint794.setName("r_elbow")
HAnimJoint794.setDEF("hanim_r_elbow")
HAnimJoint794.setCenter([-0.1949,1.1388,-0.062])
HAnimSegment795 = x3d.HAnimSegment()
HAnimSegment795.setName("r_forearm")
HAnimSegment795.setDEF("hanim_r_forearm")
Transform796 = x3d.Transform()
Transform796.setTranslation([-0.1949,1.1388,-0.062])
Transform797 = x3d.Transform()
#Empty Transform
Shape798 = x3d.Shape()
Shape798.setUSE("HAnimJointShape")

Transform797.addChild(Shape798)

Transform796.addChildren(Transform797)

HAnimSegment795.addChildren(Transform796)
Shape799 = x3d.Shape()
LineSet800 = x3d.LineSet()
LineSet800.setVertexCount([2])
Coordinate801 = x3d.Coordinate()
Coordinate801.setPoint([-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521])

LineSet800.setCoord(Coordinate801)
#from r_elbow to r_radiocarpal vertices 2
ColorRGBA802 = x3d.ColorRGBA()
ColorRGBA802.setUSE("HAnimSegmentLineColorRGBA")

LineSet800.setColor(ColorRGBA802)

Shape799.setGeometry(LineSet800)

HAnimSegment795.addChildren(Shape799)
HAnimSite803 = x3d.HAnimSite()
HAnimSite803.setName("r_ulnar_styloid")
HAnimSite803.setDEF("hanim_r_ulnar_styloid")
HAnimSite803.setTranslation([-0.2117,0.8562,-0.0584])
TouchSensor804 = x3d.TouchSensor()
TouchSensor804.setDescription("HAnimSite r_ulnar_styloid")

HAnimSite803.addChildren(TouchSensor804)
Shape805 = x3d.Shape()
Shape805.setUSE("HAnimSiteShape")

HAnimSite803.addChildren(Shape805)

HAnimSegment795.addChildren(HAnimSite803)

HAnimJoint794.addChildren(HAnimSegment795)
HAnimJoint806 = x3d.HAnimJoint()
HAnimJoint806.setName("r_radiocarpal")
HAnimJoint806.setDEF("hanim_r_radiocarpal")
HAnimJoint806.setCenter([-0.1959,0.8694,-0.0521])
HAnimSegment807 = x3d.HAnimSegment()
HAnimSegment807.setName("r_carpal")
HAnimSegment807.setDEF("hanim_r_carpal")
Transform808 = x3d.Transform()
Transform808.setScale([0.2,0.2,0.2])
Transform808.setTranslation([-0.2,0.85,-0.05])
Transform808.setRotation([0,0,1,-3.14])
#Transform right hand
Transform809 = x3d.Transform()
Transform809.setRotation([0,1,0,1.57])
#Transform right hand
Shape810 = x3d.Shape()
Shape810.setUSE("HAnimJointShape")

Transform809.addChild(Shape810)

Transform808.addChildren(Transform809)

HAnimSegment807.addChildren(Transform808)
Shape811 = x3d.Shape()
LineSet812 = x3d.LineSet()
LineSet812.setVertexCount([2])
Coordinate813 = x3d.Coordinate()
Coordinate813.setPoint([-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473])

LineSet812.setCoord(Coordinate813)
#from r_radiocarpal to r_carpometacarpal_1 vertices 2
ColorRGBA814 = x3d.ColorRGBA()
ColorRGBA814.setUSE("HAnimSegmentLineColorRGBA")

LineSet812.setColor(ColorRGBA814)

Shape811.setGeometry(LineSet812)

HAnimSegment807.addChildren(Shape811)
Shape815 = x3d.Shape()
LineSet816 = x3d.LineSet()
LineSet816.setVertexCount([2])
Coordinate817 = x3d.Coordinate()
Coordinate817.setPoint([-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218])

LineSet816.setCoord(Coordinate817)
#from r_radiocarpal to r_carpometacarpal_2 vertices 2
ColorRGBA818 = x3d.ColorRGBA()
ColorRGBA818.setUSE("HAnimSegmentLineColorRGBA")

LineSet816.setColor(ColorRGBA818)

Shape815.setGeometry(LineSet816)

HAnimSegment807.addChildren(Shape815)
HAnimSite819 = x3d.HAnimSite()
HAnimSite819.setName("r_metacarpal_phalanx_2")
HAnimSite819.setDEF("hanim_r_metacarpal_phalanx_2")
HAnimSite819.setTranslation([-0.1977,0.8169,-0.0177])
TouchSensor820 = x3d.TouchSensor()
TouchSensor820.setDescription("HAnimSite r_metacarpal_phalanx_2")

HAnimSite819.addChildren(TouchSensor820)
Shape821 = x3d.Shape()
Shape821.setUSE("HAnimSiteShape")

HAnimSite819.addChildren(Shape821)

HAnimSegment807.addChildren(HAnimSite819)
Shape822 = x3d.Shape()
LineSet823 = x3d.LineSet()
LineSet823.setVertexCount([2])
Coordinate824 = x3d.Coordinate()
Coordinate824.setPoint([-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468])

LineSet823.setCoord(Coordinate824)
#from r_radiocarpal to r_carpometacarpal_3 vertices 2
ColorRGBA825 = x3d.ColorRGBA()
ColorRGBA825.setUSE("HAnimSegmentLineColorRGBA")

LineSet823.setColor(ColorRGBA825)

Shape822.setGeometry(LineSet823)

HAnimSegment807.addChildren(Shape822)
HAnimSite826 = x3d.HAnimSite()
HAnimSite826.setName("r_metacarpal_phalanx_3")
HAnimSite826.setDEF("hanim_r_metacarpal_phalanx_3")
TouchSensor827 = x3d.TouchSensor()
TouchSensor827.setDescription("HAnimSite r_metacarpal_phalanx_3")

HAnimSite826.addChildren(TouchSensor827)
Shape828 = x3d.Shape()
Shape828.setUSE("HAnimSiteShape")

HAnimSite826.addChildren(Shape828)

HAnimSegment807.addChildren(HAnimSite826)
Shape829 = x3d.Shape()
LineSet830 = x3d.LineSet()
LineSet830.setVertexCount([2])
Coordinate831 = x3d.Coordinate()
Coordinate831.setPoint([-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732])

LineSet830.setCoord(Coordinate831)
#from r_radiocarpal to r_carpometacarpal_4 vertices 2
ColorRGBA832 = x3d.ColorRGBA()
ColorRGBA832.setUSE("HAnimSegmentLineColorRGBA")

LineSet830.setColor(ColorRGBA832)

Shape829.setGeometry(LineSet830)

HAnimSegment807.addChildren(Shape829)
Shape833 = x3d.Shape()
LineSet834 = x3d.LineSet()
LineSet834.setVertexCount([2])
Coordinate835 = x3d.Coordinate()
Coordinate835.setPoint([-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975])

LineSet834.setCoord(Coordinate835)
#from r_radiocarpal to r_carpometacarpal_5 vertices 2
ColorRGBA836 = x3d.ColorRGBA()
ColorRGBA836.setUSE("HAnimSegmentLineColorRGBA")

LineSet834.setColor(ColorRGBA836)

Shape833.setGeometry(LineSet834)

HAnimSegment807.addChildren(Shape833)
HAnimSite837 = x3d.HAnimSite()
HAnimSite837.setName("r_metacarpal_phalanx_5")
HAnimSite837.setDEF("hanim_r_metacarpal_phalanx_5")
HAnimSite837.setTranslation([-0.1929,0.789,-0.1064])
TouchSensor838 = x3d.TouchSensor()
TouchSensor838.setDescription("HAnimSite r_metacarpal_phalanx_5")

HAnimSite837.addChildren(TouchSensor838)
Shape839 = x3d.Shape()
Shape839.setUSE("HAnimSiteShape")

HAnimSite837.addChildren(Shape839)

HAnimSegment807.addChildren(HAnimSite837)

HAnimJoint806.addChildren(HAnimSegment807)
HAnimJoint840 = x3d.HAnimJoint()
HAnimJoint840.setName("r_carpometacarpal_1")
HAnimJoint840.setDEF("hanim_r_carpometacarpal_1")
HAnimJoint840.setCenter([-0.1899,0.8502,-0.0473])
HAnimSegment841 = x3d.HAnimSegment()
HAnimSegment841.setName("r_metacarpal_1")
HAnimSegment841.setDEF("hanim_r_metacarpal_1")
Transform842 = x3d.Transform()
Transform842.setTranslation([-0.1899,0.8502,-0.0473])
Transform843 = x3d.Transform()
#Empty Transform
Shape844 = x3d.Shape()
Shape844.setUSE("HAnimJointShape")

Transform843.addChild(Shape844)

Transform842.addChildren(Transform843)

HAnimSegment841.addChildren(Transform842)
Shape845 = x3d.Shape()
LineSet846 = x3d.LineSet()
LineSet846.setVertexCount([2])
Coordinate847 = x3d.Coordinate()
Coordinate847.setPoint([-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306])

LineSet846.setCoord(Coordinate847)
#from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA848 = x3d.ColorRGBA()
ColorRGBA848.setUSE("HAnimSegmentLineColorRGBA")

LineSet846.setColor(ColorRGBA848)

Shape845.setGeometry(LineSet846)

HAnimSegment841.addChildren(Shape845)

HAnimJoint840.addChildren(HAnimSegment841)
HAnimJoint849 = x3d.HAnimJoint()
HAnimJoint849.setName("r_metacarpophalangeal_1")
HAnimJoint849.setDEF("hanim_r_metacarpophalangeal_1")
HAnimJoint849.setCenter([-0.1874,0.8256,0.0306])
HAnimSegment850 = x3d.HAnimSegment()
HAnimSegment850.setName("r_carpal_proximal_phalanx_1")
HAnimSegment850.setDEF("hanim_r_carpal_proximal_phalanx_1")
Transform851 = x3d.Transform()
Transform851.setTranslation([-0.1874,0.8256,0.0306])
Transform852 = x3d.Transform()
#Empty Transform
Shape853 = x3d.Shape()
Shape853.setUSE("HAnimJointShape")

Transform852.addChild(Shape853)

Transform851.addChildren(Transform852)

HAnimSegment850.addChildren(Transform851)
Shape854 = x3d.Shape()
LineSet855 = x3d.LineSet()
LineSet855.setVertexCount([2])
Coordinate856 = x3d.Coordinate()
Coordinate856.setPoint([-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506])

LineSet855.setCoord(Coordinate856)
#from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA857 = x3d.ColorRGBA()
ColorRGBA857.setUSE("HAnimSegmentLineColorRGBA")

LineSet855.setColor(ColorRGBA857)

Shape854.setGeometry(LineSet855)

HAnimSegment850.addChildren(Shape854)
HAnimSite858 = x3d.HAnimSite()
HAnimSite858.setName("r_carpal_distal_phalanx_1_tip")
HAnimSite858.setDEF("hanim_r_carpal_distal_phalanx_1_tip")
TouchSensor859 = x3d.TouchSensor()
TouchSensor859.setDescription("HAnimSite r_carpal_distal_phalanx_1_tip")

HAnimSite858.addChildren(TouchSensor859)
Shape860 = x3d.Shape()
Shape860.setUSE("HAnimSiteShape")

HAnimSite858.addChildren(Shape860)

HAnimSegment850.addChildren(HAnimSite858)

HAnimJoint849.addChildren(HAnimSegment850)
HAnimJoint861 = x3d.HAnimJoint()
HAnimJoint861.setName("r_carpal_interphalangeal_1")
HAnimJoint861.setDEF("hanim_r_carpal_interphalangeal_1")
HAnimJoint861.setCenter([-0.1864,0.819,0.0506])

HAnimJoint849.addChildren(HAnimJoint861)

HAnimJoint840.addChildren(HAnimJoint849)

HAnimJoint806.addChildren(HAnimJoint840)
HAnimJoint862 = x3d.HAnimJoint()
HAnimJoint862.setName("r_carpometacarpal_2")
HAnimJoint862.setDEF("hanim_r_carpometacarpal_2")
HAnimJoint862.setCenter([-0.1961,0.8055,-0.0218])
HAnimSegment863 = x3d.HAnimSegment()
HAnimSegment863.setName("r_metacarpal_2")
HAnimSegment863.setDEF("hanim_r_metacarpal_2")
Transform864 = x3d.Transform()
Transform864.setTranslation([-0.1961,0.8055,-0.0218])
Transform865 = x3d.Transform()
#Empty Transform
Shape866 = x3d.Shape()
Shape866.setUSE("HAnimJointShape")

Transform865.addChild(Shape866)

Transform864.addChildren(Transform865)

HAnimSegment863.addChildren(Transform864)
Shape867 = x3d.Shape()
LineSet868 = x3d.LineSet()
LineSet868.setVertexCount([2])
Coordinate869 = x3d.Coordinate()
Coordinate869.setPoint([-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218])

LineSet868.setCoord(Coordinate869)
#from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA870 = x3d.ColorRGBA()
ColorRGBA870.setUSE("HAnimSegmentLineColorRGBA")

LineSet868.setColor(ColorRGBA870)

Shape867.setGeometry(LineSet868)

HAnimSegment863.addChildren(Shape867)

HAnimJoint862.addChildren(HAnimSegment863)
HAnimJoint871 = x3d.HAnimJoint()
HAnimJoint871.setName("r_metacarpophalangeal_2")
HAnimJoint871.setDEF("hanim_r_metacarpophalangeal_2")
HAnimJoint871.setCenter([-0.1961,0.7846,-0.0218])
HAnimSegment872 = x3d.HAnimSegment()
HAnimSegment872.setName("r_carpal_proximal_phalanx_2")
HAnimSegment872.setDEF("hanim_r_carpal_proximal_phalanx_2")
Transform873 = x3d.Transform()
Transform873.setTranslation([-0.1961,0.7846,-0.0218])
Transform874 = x3d.Transform()
#Empty Transform
Shape875 = x3d.Shape()
Shape875.setUSE("HAnimJointShape")

Transform874.addChild(Shape875)

Transform873.addChildren(Transform874)

HAnimSegment872.addChildren(Transform873)
Shape876 = x3d.Shape()
LineSet877 = x3d.LineSet()
LineSet877.setVertexCount([2])
Coordinate878 = x3d.Coordinate()
Coordinate878.setPoint([-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185])

LineSet877.setCoord(Coordinate878)
#from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA879 = x3d.ColorRGBA()
ColorRGBA879.setUSE("HAnimSegmentLineColorRGBA")

LineSet877.setColor(ColorRGBA879)

Shape876.setGeometry(LineSet877)

HAnimSegment872.addChildren(Shape876)

HAnimJoint871.addChildren(HAnimSegment872)
HAnimJoint880 = x3d.HAnimJoint()
HAnimJoint880.setName("r_carpal_proximal_interphalangeal_2")
HAnimJoint880.setDEF("hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint880.setCenter([-0.1954,0.7393,-0.0185])
HAnimSegment881 = x3d.HAnimSegment()
HAnimSegment881.setName("r_carpal_middle_phalanx_2")
HAnimSegment881.setDEF("hanim_r_carpal_middle_phalanx_2")
Transform882 = x3d.Transform()
Transform882.setTranslation([-0.1954,0.7393,-0.0185])
Transform883 = x3d.Transform()
#Empty Transform
Shape884 = x3d.Shape()
Shape884.setUSE("HAnimJointShape")

Transform883.addChild(Shape884)

Transform882.addChildren(Transform883)

HAnimSegment881.addChildren(Transform882)
Shape885 = x3d.Shape()
LineSet886 = x3d.LineSet()
LineSet886.setVertexCount([2])
Coordinate887 = x3d.Coordinate()
Coordinate887.setPoint([-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173])

LineSet886.setCoord(Coordinate887)
#from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA888 = x3d.ColorRGBA()
ColorRGBA888.setUSE("HAnimSegmentLineColorRGBA")

LineSet886.setColor(ColorRGBA888)

Shape885.setGeometry(LineSet886)

HAnimSegment881.addChildren(Shape885)
HAnimSite889 = x3d.HAnimSite()
HAnimSite889.setName("r_carpal_distal_phalanx_2_tip")
HAnimSite889.setDEF("hanim_r_carpal_distal_phalanx_2_tip")
TouchSensor890 = x3d.TouchSensor()
TouchSensor890.setDescription("HAnimSite r_carpal_distal_phalanx_2_tip")

HAnimSite889.addChildren(TouchSensor890)
Shape891 = x3d.Shape()
Shape891.setUSE("HAnimSiteShape")

HAnimSite889.addChildren(Shape891)

HAnimSegment881.addChildren(HAnimSite889)
HAnimSite892 = x3d.HAnimSite()
HAnimSite892.setName("r_dactylion")
HAnimSite892.setDEF("hanim_r_dactylion")
HAnimSite892.setTranslation([-0.1941,0.6772,-0.0423])
TouchSensor893 = x3d.TouchSensor()
TouchSensor893.setDescription("HAnimSite r_dactylion")

HAnimSite892.addChildren(TouchSensor893)
Shape894 = x3d.Shape()
Shape894.setUSE("HAnimSiteShape")

HAnimSite892.addChildren(Shape894)

HAnimSegment881.addChildren(HAnimSite892)

HAnimJoint880.addChildren(HAnimSegment881)
HAnimJoint895 = x3d.HAnimJoint()
HAnimJoint895.setName("r_carpal_distal_interphalangeal_2")
HAnimJoint895.setDEF("hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint895.setCenter([-0.1945,0.7169,-0.0173])

HAnimJoint880.addChildren(HAnimJoint895)

HAnimJoint871.addChildren(HAnimJoint880)

HAnimJoint862.addChildren(HAnimJoint871)

HAnimJoint806.addChildren(HAnimJoint862)
HAnimJoint896 = x3d.HAnimJoint()
HAnimJoint896.setName("r_carpometacarpal_3")
HAnimJoint896.setDEF("hanim_r_carpometacarpal_3")
HAnimJoint896.setCenter([-0.1972,0.806,-0.0468])
HAnimSegment897 = x3d.HAnimSegment()
HAnimSegment897.setName("r_metacarpal_3")
HAnimSegment897.setDEF("hanim_r_metacarpal_3")
Transform898 = x3d.Transform()
Transform898.setTranslation([-0.1972,0.806,-0.0468])
Transform899 = x3d.Transform()
#Empty Transform
Shape900 = x3d.Shape()
Shape900.setUSE("HAnimJointShape")

Transform899.addChild(Shape900)

Transform898.addChildren(Transform899)

HAnimSegment897.addChildren(Transform898)
Shape901 = x3d.Shape()
LineSet902 = x3d.LineSet()
LineSet902.setVertexCount([2])
Coordinate903 = x3d.Coordinate()
Coordinate903.setPoint([-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468])

LineSet902.setCoord(Coordinate903)
#from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA904 = x3d.ColorRGBA()
ColorRGBA904.setUSE("HAnimSegmentLineColorRGBA")

LineSet902.setColor(ColorRGBA904)

Shape901.setGeometry(LineSet902)

HAnimSegment897.addChildren(Shape901)

HAnimJoint896.addChildren(HAnimSegment897)
HAnimJoint905 = x3d.HAnimJoint()
HAnimJoint905.setName("r_metacarpophalangeal_3")
HAnimJoint905.setDEF("hanim_r_metacarpophalangeal_3")
HAnimJoint905.setCenter([-0.1972,0.7849,-0.0468])
HAnimSegment906 = x3d.HAnimSegment()
HAnimSegment906.setName("r_carpal_proximal_phalanx_3")
HAnimSegment906.setDEF("hanim_r_carpal_proximal_phalanx_3")
Transform907 = x3d.Transform()
Transform907.setTranslation([-0.1972,0.7849,-0.0468])
Transform908 = x3d.Transform()
#Empty Transform
Shape909 = x3d.Shape()
Shape909.setUSE("HAnimJointShape")

Transform908.addChild(Shape909)

Transform907.addChildren(Transform908)

HAnimSegment906.addChildren(Transform907)
Shape910 = x3d.Shape()
LineSet911 = x3d.LineSet()
LineSet911.setVertexCount([2])
Coordinate912 = x3d.Coordinate()
Coordinate912.setPoint([-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441])

LineSet911.setCoord(Coordinate912)
#from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA913 = x3d.ColorRGBA()
ColorRGBA913.setUSE("HAnimSegmentLineColorRGBA")

LineSet911.setColor(ColorRGBA913)

Shape910.setGeometry(LineSet911)

HAnimSegment906.addChildren(Shape910)

HAnimJoint905.addChildren(HAnimSegment906)
HAnimJoint914 = x3d.HAnimJoint()
HAnimJoint914.setName("r_carpal_proximal_interphalangeal_3")
HAnimJoint914.setDEF("hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint914.setCenter([-0.195,0.7304,-0.0441])
HAnimSegment915 = x3d.HAnimSegment()
HAnimSegment915.setName("r_carpal_middle_phalanx_3")
HAnimSegment915.setDEF("hanim_r_carpal_middle_phalanx_3")
Transform916 = x3d.Transform()
Transform916.setTranslation([-0.195,0.7304,-0.0441])
Transform917 = x3d.Transform()
#Empty Transform
Shape918 = x3d.Shape()
Shape918.setUSE("HAnimJointShape")

Transform917.addChild(Shape918)

Transform916.addChildren(Transform917)

HAnimSegment915.addChildren(Transform916)
Shape919 = x3d.Shape()
LineSet920 = x3d.LineSet()
LineSet920.setVertexCount([2])
Coordinate921 = x3d.Coordinate()
Coordinate921.setPoint([-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432])

LineSet920.setCoord(Coordinate921)
#from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA922 = x3d.ColorRGBA()
ColorRGBA922.setUSE("HAnimSegmentLineColorRGBA")

LineSet920.setColor(ColorRGBA922)

Shape919.setGeometry(LineSet920)

HAnimSegment915.addChildren(Shape919)
HAnimSite923 = x3d.HAnimSite()
HAnimSite923.setName("r_carpal_distal_phalanx_3_tip")
HAnimSite923.setDEF("hanim_r_carpal_distal_phalanx_3_tip")
TouchSensor924 = x3d.TouchSensor()
TouchSensor924.setDescription("HAnimSite r_carpal_distal_phalanx_3_tip")

HAnimSite923.addChildren(TouchSensor924)
Shape925 = x3d.Shape()
Shape925.setUSE("HAnimSiteShape")

HAnimSite923.addChildren(Shape925)

HAnimSegment915.addChildren(HAnimSite923)

HAnimJoint914.addChildren(HAnimSegment915)
HAnimJoint926 = x3d.HAnimJoint()
HAnimJoint926.setName("r_carpal_distal_interphalangeal_3")
HAnimJoint926.setDEF("hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint926.setCenter([-0.1939,0.7042,-0.0432])

HAnimJoint914.addChildren(HAnimJoint926)

HAnimJoint905.addChildren(HAnimJoint914)

HAnimJoint896.addChildren(HAnimJoint905)

HAnimJoint806.addChildren(HAnimJoint896)
HAnimJoint927 = x3d.HAnimJoint()
HAnimJoint927.setName("r_carpometacarpal_4")
HAnimJoint927.setDEF("hanim_r_carpometacarpal_4")
HAnimJoint927.setCenter([-0.1951,0.8049,-0.0732])
HAnimSegment928 = x3d.HAnimSegment()
HAnimSegment928.setName("r_metacarpal_4")
HAnimSegment928.setDEF("hanim_r_metacarpal_4")
Transform929 = x3d.Transform()
Transform929.setTranslation([-0.1951,0.8049,-0.0732])
Transform930 = x3d.Transform()
#Empty Transform
Shape931 = x3d.Shape()
Shape931.setUSE("HAnimJointShape")

Transform930.addChild(Shape931)

Transform929.addChildren(Transform930)

HAnimSegment928.addChildren(Transform929)
Shape932 = x3d.Shape()
LineSet933 = x3d.LineSet()
LineSet933.setVertexCount([2])
Coordinate934 = x3d.Coordinate()
Coordinate934.setPoint([-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732])

LineSet933.setCoord(Coordinate934)
#from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA935 = x3d.ColorRGBA()
ColorRGBA935.setUSE("HAnimSegmentLineColorRGBA")

LineSet933.setColor(ColorRGBA935)

Shape932.setGeometry(LineSet933)

HAnimSegment928.addChildren(Shape932)

HAnimJoint927.addChildren(HAnimSegment928)
HAnimJoint936 = x3d.HAnimJoint()
HAnimJoint936.setName("r_metacarpophalangeal_4")
HAnimJoint936.setDEF("hanim_r_metacarpophalangeal_4")
HAnimJoint936.setCenter([-0.1951,0.7845,-0.0732])
HAnimSegment937 = x3d.HAnimSegment()
HAnimSegment937.setName("r_carpal_proximal_phalanx_4")
HAnimSegment937.setDEF("hanim_r_carpal_proximal_phalanx_4")
Transform938 = x3d.Transform()
Transform938.setTranslation([-0.1951,0.7845,-0.0732])
Transform939 = x3d.Transform()
#Empty Transform
Shape940 = x3d.Shape()
Shape940.setUSE("HAnimJointShape")

Transform939.addChild(Shape940)

Transform938.addChildren(Transform939)

HAnimSegment937.addChildren(Transform938)
Shape941 = x3d.Shape()
LineSet942 = x3d.LineSet()
LineSet942.setVertexCount([2])
Coordinate943 = x3d.Coordinate()
Coordinate943.setPoint([-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716])

LineSet942.setCoord(Coordinate943)
#from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA944 = x3d.ColorRGBA()
ColorRGBA944.setUSE("HAnimSegmentLineColorRGBA")

LineSet942.setColor(ColorRGBA944)

Shape941.setGeometry(LineSet942)

HAnimSegment937.addChildren(Shape941)

HAnimJoint936.addChildren(HAnimSegment937)
HAnimJoint945 = x3d.HAnimJoint()
HAnimJoint945.setName("r_carpal_proximal_interphalangeal_4")
HAnimJoint945.setDEF("hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint945.setCenter([-0.192,0.7318,-0.0716])
HAnimSegment946 = x3d.HAnimSegment()
HAnimSegment946.setName("r_carpal_middle_phalanx_4")
HAnimSegment946.setDEF("hanim_r_carpal_middle_phalanx_4")
Transform947 = x3d.Transform()
Transform947.setTranslation([-0.192,0.7318,-0.0716])
Transform948 = x3d.Transform()
#Empty Transform
Shape949 = x3d.Shape()
Shape949.setUSE("HAnimJointShape")

Transform948.addChild(Shape949)

Transform947.addChildren(Transform948)

HAnimSegment946.addChildren(Transform947)
Shape950 = x3d.Shape()
LineSet951 = x3d.LineSet()
LineSet951.setVertexCount([2])
Coordinate952 = x3d.Coordinate()
Coordinate952.setPoint([-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706])

LineSet951.setCoord(Coordinate952)
#from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA953 = x3d.ColorRGBA()
ColorRGBA953.setUSE("HAnimSegmentLineColorRGBA")

LineSet951.setColor(ColorRGBA953)

Shape950.setGeometry(LineSet951)

HAnimSegment946.addChildren(Shape950)
HAnimSite954 = x3d.HAnimSite()
HAnimSite954.setName("r_carpal_distal_phalanx_4_tip")
HAnimSite954.setDEF("hanim_r_carpal_distal_phalanx_4_tip")
TouchSensor955 = x3d.TouchSensor()
TouchSensor955.setDescription("HAnimSite r_carpal_distal_phalanx_4_tip")

HAnimSite954.addChildren(TouchSensor955)
Shape956 = x3d.Shape()
Shape956.setUSE("HAnimSiteShape")

HAnimSite954.addChildren(Shape956)

HAnimSegment946.addChildren(HAnimSite954)

HAnimJoint945.addChildren(HAnimSegment946)
HAnimJoint957 = x3d.HAnimJoint()
HAnimJoint957.setName("r_carpal_distal_interphalangeal_4")
HAnimJoint957.setDEF("hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint957.setCenter([-0.1908,0.7077,-0.0706])

HAnimJoint945.addChildren(HAnimJoint957)

HAnimJoint936.addChildren(HAnimJoint945)

HAnimJoint927.addChildren(HAnimJoint936)

HAnimJoint806.addChildren(HAnimJoint927)
HAnimJoint958 = x3d.HAnimJoint()
HAnimJoint958.setName("r_carpometacarpal_5")
HAnimJoint958.setDEF("hanim_r_carpometacarpal_5")
HAnimJoint958.setCenter([-0.1926,0.8096,-0.0975])
HAnimSegment959 = x3d.HAnimSegment()
HAnimSegment959.setName("r_metacarpal_5")
HAnimSegment959.setDEF("hanim_r_metacarpal_5")
Transform960 = x3d.Transform()
Transform960.setTranslation([-0.1926,0.8096,-0.0975])
Transform961 = x3d.Transform()
#Empty Transform
Shape962 = x3d.Shape()
Shape962.setUSE("HAnimJointShape")

Transform961.addChild(Shape962)

Transform960.addChildren(Transform961)

HAnimSegment959.addChildren(Transform960)
Shape963 = x3d.Shape()
LineSet964 = x3d.LineSet()
LineSet964.setVertexCount([2])
Coordinate965 = x3d.Coordinate()
Coordinate965.setPoint([-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975])

LineSet964.setCoord(Coordinate965)
#from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA966 = x3d.ColorRGBA()
ColorRGBA966.setUSE("HAnimSegmentLineColorRGBA")

LineSet964.setColor(ColorRGBA966)

Shape963.setGeometry(LineSet964)

HAnimSegment959.addChildren(Shape963)

HAnimJoint958.addChildren(HAnimSegment959)
HAnimJoint967 = x3d.HAnimJoint()
HAnimJoint967.setName("r_metacarpophalangeal_5")
HAnimJoint967.setDEF("hanim_r_metacarpophalangeal_5")
HAnimJoint967.setCenter([-0.1926,0.7896,-0.0975])
HAnimSegment968 = x3d.HAnimSegment()
HAnimSegment968.setName("r_carpal_proximal_phalanx_5")
HAnimSegment968.setDEF("hanim_r_carpal_proximal_phalanx_5")
Transform969 = x3d.Transform()
Transform969.setTranslation([-0.1926,0.7896,-0.0975])
Transform970 = x3d.Transform()
#Empty Transform
Shape971 = x3d.Shape()
Shape971.setUSE("HAnimJointShape")

Transform970.addChild(Shape971)

Transform969.addChildren(Transform970)

HAnimSegment968.addChildren(Transform969)
Shape972 = x3d.Shape()
LineSet973 = x3d.LineSet()
LineSet973.setVertexCount([2])
Coordinate974 = x3d.Coordinate()
Coordinate974.setPoint([-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963])

LineSet973.setCoord(Coordinate974)
#from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA975 = x3d.ColorRGBA()
ColorRGBA975.setUSE("HAnimSegmentLineColorRGBA")

LineSet973.setColor(ColorRGBA975)

Shape972.setGeometry(LineSet973)

HAnimSegment968.addChildren(Shape972)

HAnimJoint967.addChildren(HAnimSegment968)
HAnimJoint976 = x3d.HAnimJoint()
HAnimJoint976.setName("r_carpal_proximal_interphalangeal_5")
HAnimJoint976.setDEF("hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint976.setCenter([-0.1902,0.7483,-0.0963])
HAnimSegment977 = x3d.HAnimSegment()
HAnimSegment977.setName("r_carpal_middle_phalanx_5")
HAnimSegment977.setDEF("hanim_r_carpal_middle_phalanx_5")
Transform978 = x3d.Transform()
Transform978.setTranslation([-0.1902,0.7483,-0.0963])
Transform979 = x3d.Transform()
#Empty Transform
Shape980 = x3d.Shape()
Shape980.setUSE("HAnimJointShape")

Transform979.addChild(Shape980)

Transform978.addChildren(Transform979)

HAnimSegment977.addChildren(Transform978)
Shape981 = x3d.Shape()
LineSet982 = x3d.LineSet()
LineSet982.setVertexCount([2])
Coordinate983 = x3d.Coordinate()
Coordinate983.setPoint([-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096])

LineSet982.setCoord(Coordinate983)
#from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA984 = x3d.ColorRGBA()
ColorRGBA984.setUSE("HAnimSegmentLineColorRGBA")

LineSet982.setColor(ColorRGBA984)

Shape981.setGeometry(LineSet982)

HAnimSegment977.addChildren(Shape981)
HAnimSite985 = x3d.HAnimSite()
HAnimSite985.setName("r_carpal_distal_phalanx_5_tip")
HAnimSite985.setDEF("hanim_r_carpal_distal_phalanx_5_tip")
TouchSensor986 = x3d.TouchSensor()
TouchSensor986.setDescription("HAnimSite r_carpal_distal_phalanx_5_tip")

HAnimSite985.addChildren(TouchSensor986)
Shape987 = x3d.Shape()
Shape987.setUSE("HAnimSiteShape")

HAnimSite985.addChildren(Shape987)

HAnimSegment977.addChildren(HAnimSite985)

HAnimJoint976.addChildren(HAnimSegment977)
HAnimJoint988 = x3d.HAnimJoint()
HAnimJoint988.setName("r_carpal_distal_interphalangeal_5")
HAnimJoint988.setDEF("hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint988.setCenter([-0.1908,0.754,-0.096])

HAnimJoint976.addChildren(HAnimJoint988)

HAnimJoint967.addChildren(HAnimJoint976)

HAnimJoint958.addChildren(HAnimJoint967)

HAnimJoint806.addChildren(HAnimJoint958)

HAnimJoint794.addChildren(HAnimJoint806)

HAnimJoint773.addChildren(HAnimJoint794)

HAnimJoint758.addChildren(HAnimJoint773)

HAnimJoint749.addChildren(HAnimJoint758)

HAnimJoint395.addChildren(HAnimJoint749)

HAnimJoint374.addChildren(HAnimJoint395)

HAnimJoint353.addChildren(HAnimJoint374)

HAnimJoint335.addChildren(HAnimJoint353)

HAnimJoint326.addChildren(HAnimJoint335)

HAnimJoint305.addChildren(HAnimJoint326)

HAnimJoint52.addChildren(HAnimJoint305)

HAnimHumanoid43.setSkeleton(HAnimJoint52)
HAnimJoint989 = x3d.HAnimJoint()
HAnimJoint989.setUSE("hanim_humanoid_root")

HAnimHumanoid43.addJoints(HAnimJoint989)
HAnimJoint990 = x3d.HAnimJoint()
HAnimJoint990.setUSE("hanim_sacroiliac")

HAnimHumanoid43.addJoints(HAnimJoint990)
HAnimJoint991 = x3d.HAnimJoint()
HAnimJoint991.setUSE("hanim_l_hip")

HAnimHumanoid43.addJoints(HAnimJoint991)
HAnimJoint992 = x3d.HAnimJoint()
HAnimJoint992.setUSE("hanim_l_knee")

HAnimHumanoid43.addJoints(HAnimJoint992)
HAnimJoint993 = x3d.HAnimJoint()
HAnimJoint993.setUSE("hanim_l_talocrural")

HAnimHumanoid43.addJoints(HAnimJoint993)
HAnimJoint994 = x3d.HAnimJoint()
HAnimJoint994.setUSE("hanim_l_tarsometatarsal_2")

HAnimHumanoid43.addJoints(HAnimJoint994)
HAnimJoint995 = x3d.HAnimJoint()
HAnimJoint995.setUSE("hanim_l_metatarsophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint995)
HAnimJoint996 = x3d.HAnimJoint()
HAnimJoint996.setUSE("hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint996)
HAnimJoint997 = x3d.HAnimJoint()
HAnimJoint997.setUSE("hanim_r_hip")

HAnimHumanoid43.addJoints(HAnimJoint997)
HAnimJoint998 = x3d.HAnimJoint()
HAnimJoint998.setUSE("hanim_r_knee")

HAnimHumanoid43.addJoints(HAnimJoint998)
HAnimJoint999 = x3d.HAnimJoint()
HAnimJoint999.setUSE("hanim_r_talocrural")

HAnimHumanoid43.addJoints(HAnimJoint999)
HAnimJoint1000 = x3d.HAnimJoint()
HAnimJoint1000.setUSE("hanim_r_tarsometatarsal_2")

HAnimHumanoid43.addJoints(HAnimJoint1000)
HAnimJoint1001 = x3d.HAnimJoint()
HAnimJoint1001.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1001)
HAnimJoint1002 = x3d.HAnimJoint()
HAnimJoint1002.setUSE("hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1002)
HAnimJoint1003 = x3d.HAnimJoint()
HAnimJoint1003.setUSE("hanim_vl5")

HAnimHumanoid43.addJoints(HAnimJoint1003)
HAnimJoint1004 = x3d.HAnimJoint()
HAnimJoint1004.setUSE("hanim_vl3")

HAnimHumanoid43.addJoints(HAnimJoint1004)
HAnimJoint1005 = x3d.HAnimJoint()
HAnimJoint1005.setUSE("hanim_vl1")

HAnimHumanoid43.addJoints(HAnimJoint1005)
HAnimJoint1006 = x3d.HAnimJoint()
HAnimJoint1006.setUSE("hanim_vt10")

HAnimHumanoid43.addJoints(HAnimJoint1006)
HAnimJoint1007 = x3d.HAnimJoint()
HAnimJoint1007.setUSE("hanim_vt6")

HAnimHumanoid43.addJoints(HAnimJoint1007)
HAnimJoint1008 = x3d.HAnimJoint()
HAnimJoint1008.setUSE("hanim_vt1")

HAnimHumanoid43.addJoints(HAnimJoint1008)
HAnimJoint1009 = x3d.HAnimJoint()
HAnimJoint1009.setUSE("hanim_vc4")

HAnimHumanoid43.addJoints(HAnimJoint1009)
HAnimJoint1010 = x3d.HAnimJoint()
HAnimJoint1010.setUSE("hanim_vc2")

HAnimHumanoid43.addJoints(HAnimJoint1010)
HAnimJoint1011 = x3d.HAnimJoint()
HAnimJoint1011.setUSE("hanim_skullbase")

HAnimHumanoid43.addJoints(HAnimJoint1011)
HAnimJoint1012 = x3d.HAnimJoint()
HAnimJoint1012.setUSE("hanim_l_sternoclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1012)
HAnimJoint1013 = x3d.HAnimJoint()
HAnimJoint1013.setUSE("hanim_l_acromioclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1013)
HAnimJoint1014 = x3d.HAnimJoint()
HAnimJoint1014.setUSE("hanim_l_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint1014)
HAnimJoint1015 = x3d.HAnimJoint()
HAnimJoint1015.setUSE("hanim_l_elbow")

HAnimHumanoid43.addJoints(HAnimJoint1015)
HAnimJoint1016 = x3d.HAnimJoint()
HAnimJoint1016.setUSE("hanim_l_radiocarpal")

HAnimHumanoid43.addJoints(HAnimJoint1016)
HAnimJoint1017 = x3d.HAnimJoint()
HAnimJoint1017.setUSE("hanim_l_carpometacarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1017)
HAnimJoint1018 = x3d.HAnimJoint()
HAnimJoint1018.setUSE("hanim_l_metacarpophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1018)
HAnimJoint1019 = x3d.HAnimJoint()
HAnimJoint1019.setUSE("hanim_l_carpal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1019)
HAnimJoint1020 = x3d.HAnimJoint()
HAnimJoint1020.setUSE("hanim_l_carpometacarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1020)
HAnimJoint1021 = x3d.HAnimJoint()
HAnimJoint1021.setUSE("hanim_l_metacarpophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1021)
HAnimJoint1022 = x3d.HAnimJoint()
HAnimJoint1022.setUSE("hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1022)
HAnimJoint1023 = x3d.HAnimJoint()
HAnimJoint1023.setUSE("hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1023)
HAnimJoint1024 = x3d.HAnimJoint()
HAnimJoint1024.setUSE("hanim_l_carpometacarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1024)
HAnimJoint1025 = x3d.HAnimJoint()
HAnimJoint1025.setUSE("hanim_l_metacarpophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1025)
HAnimJoint1026 = x3d.HAnimJoint()
HAnimJoint1026.setUSE("hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1026)
HAnimJoint1027 = x3d.HAnimJoint()
HAnimJoint1027.setUSE("hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1027)
HAnimJoint1028 = x3d.HAnimJoint()
HAnimJoint1028.setUSE("hanim_l_carpometacarpal_4")

HAnimHumanoid43.addJoints(HAnimJoint1028)
HAnimJoint1029 = x3d.HAnimJoint()
HAnimJoint1029.setUSE("hanim_l_metacarpophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1029)
HAnimJoint1030 = x3d.HAnimJoint()
HAnimJoint1030.setUSE("hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1030)
HAnimJoint1031 = x3d.HAnimJoint()
HAnimJoint1031.setUSE("hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1031)
HAnimJoint1032 = x3d.HAnimJoint()
HAnimJoint1032.setUSE("hanim_l_carpometacarpal_5")

HAnimHumanoid43.addJoints(HAnimJoint1032)
HAnimJoint1033 = x3d.HAnimJoint()
HAnimJoint1033.setUSE("hanim_l_metacarpophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1033)
HAnimJoint1034 = x3d.HAnimJoint()
HAnimJoint1034.setUSE("hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1034)
HAnimJoint1035 = x3d.HAnimJoint()
HAnimJoint1035.setUSE("hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1035)
HAnimJoint1036 = x3d.HAnimJoint()
HAnimJoint1036.setUSE("hanim_r_sternoclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1036)
HAnimJoint1037 = x3d.HAnimJoint()
HAnimJoint1037.setUSE("hanim_r_acromioclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1037)
HAnimJoint1038 = x3d.HAnimJoint()
HAnimJoint1038.setUSE("hanim_r_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint1038)
HAnimJoint1039 = x3d.HAnimJoint()
HAnimJoint1039.setUSE("hanim_r_elbow")

HAnimHumanoid43.addJoints(HAnimJoint1039)
HAnimJoint1040 = x3d.HAnimJoint()
HAnimJoint1040.setUSE("hanim_r_radiocarpal")

HAnimHumanoid43.addJoints(HAnimJoint1040)
HAnimJoint1041 = x3d.HAnimJoint()
HAnimJoint1041.setUSE("hanim_r_carpometacarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1041)
HAnimJoint1042 = x3d.HAnimJoint()
HAnimJoint1042.setUSE("hanim_r_metacarpophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1042)
HAnimJoint1043 = x3d.HAnimJoint()
HAnimJoint1043.setUSE("hanim_r_carpal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1043)
HAnimJoint1044 = x3d.HAnimJoint()
HAnimJoint1044.setUSE("hanim_r_carpometacarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1044)
HAnimJoint1045 = x3d.HAnimJoint()
HAnimJoint1045.setUSE("hanim_r_metacarpophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1045)
HAnimJoint1046 = x3d.HAnimJoint()
HAnimJoint1046.setUSE("hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1046)
HAnimJoint1047 = x3d.HAnimJoint()
HAnimJoint1047.setUSE("hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1047)
HAnimJoint1048 = x3d.HAnimJoint()
HAnimJoint1048.setUSE("hanim_r_carpometacarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1048)
HAnimJoint1049 = x3d.HAnimJoint()
HAnimJoint1049.setUSE("hanim_r_metacarpophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1049)
HAnimJoint1050 = x3d.HAnimJoint()
HAnimJoint1050.setUSE("hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1050)
HAnimJoint1051 = x3d.HAnimJoint()
HAnimJoint1051.setUSE("hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1051)
HAnimJoint1052 = x3d.HAnimJoint()
HAnimJoint1052.setUSE("hanim_r_carpometacarpal_4")

HAnimHumanoid43.addJoints(HAnimJoint1052)
HAnimJoint1053 = x3d.HAnimJoint()
HAnimJoint1053.setUSE("hanim_r_metacarpophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1053)
HAnimJoint1054 = x3d.HAnimJoint()
HAnimJoint1054.setUSE("hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1054)
HAnimJoint1055 = x3d.HAnimJoint()
HAnimJoint1055.setUSE("hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1055)
HAnimJoint1056 = x3d.HAnimJoint()
HAnimJoint1056.setUSE("hanim_r_carpometacarpal_5")

HAnimHumanoid43.addJoints(HAnimJoint1056)
HAnimJoint1057 = x3d.HAnimJoint()
HAnimJoint1057.setUSE("hanim_r_metacarpophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1057)
HAnimJoint1058 = x3d.HAnimJoint()
HAnimJoint1058.setUSE("hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1058)
HAnimJoint1059 = x3d.HAnimJoint()
HAnimJoint1059.setUSE("hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1059)
HAnimSegment1060 = x3d.HAnimSegment()
HAnimSegment1060.setUSE("hanim_sacrum")

HAnimHumanoid43.setSegments(HAnimSegment1060)
HAnimSegment1061 = x3d.HAnimSegment()
HAnimSegment1061.setUSE("hanim_pelvis")

HAnimHumanoid43.setSegments(HAnimSegment1061)
HAnimSegment1062 = x3d.HAnimSegment()
HAnimSegment1062.setUSE("hanim_l_thigh")

HAnimHumanoid43.setSegments(HAnimSegment1062)
HAnimSegment1063 = x3d.HAnimSegment()
HAnimSegment1063.setUSE("hanim_l_calf")

HAnimHumanoid43.setSegments(HAnimSegment1063)
HAnimSegment1064 = x3d.HAnimSegment()
HAnimSegment1064.setUSE("hanim_l_talus")

HAnimHumanoid43.setSegments(HAnimSegment1064)
HAnimSegment1065 = x3d.HAnimSegment()
HAnimSegment1065.setUSE("hanim_l_metatarsal_2")

HAnimHumanoid43.setSegments(HAnimSegment1065)
HAnimSegment1066 = x3d.HAnimSegment()
HAnimSegment1066.setUSE("hanim_l_tarsal_proximal_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1066)
HAnimSegment1067 = x3d.HAnimSegment()
HAnimSegment1067.setUSE("hanim_r_thigh")

HAnimHumanoid43.setSegments(HAnimSegment1067)
HAnimSegment1068 = x3d.HAnimSegment()
HAnimSegment1068.setUSE("hanim_r_calf")

HAnimHumanoid43.setSegments(HAnimSegment1068)
HAnimSegment1069 = x3d.HAnimSegment()
HAnimSegment1069.setUSE("hanim_r_talus")

HAnimHumanoid43.setSegments(HAnimSegment1069)
HAnimSegment1070 = x3d.HAnimSegment()
HAnimSegment1070.setUSE("hanim_r_metatarsal_2")

HAnimHumanoid43.setSegments(HAnimSegment1070)
HAnimSegment1071 = x3d.HAnimSegment()
HAnimSegment1071.setUSE("hanim_r_tarsal_proximal_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1071)
HAnimSegment1072 = x3d.HAnimSegment()
HAnimSegment1072.setUSE("hanim_l5")

HAnimHumanoid43.setSegments(HAnimSegment1072)
HAnimSegment1073 = x3d.HAnimSegment()
HAnimSegment1073.setUSE("hanim_l3")

HAnimHumanoid43.setSegments(HAnimSegment1073)
HAnimSegment1074 = x3d.HAnimSegment()
HAnimSegment1074.setUSE("hanim_l1")

HAnimHumanoid43.setSegments(HAnimSegment1074)
HAnimSegment1075 = x3d.HAnimSegment()
HAnimSegment1075.setUSE("hanim_t10")

HAnimHumanoid43.setSegments(HAnimSegment1075)
HAnimSegment1076 = x3d.HAnimSegment()
HAnimSegment1076.setUSE("hanim_t6")

HAnimHumanoid43.setSegments(HAnimSegment1076)
HAnimSegment1077 = x3d.HAnimSegment()
HAnimSegment1077.setUSE("hanim_t1")

HAnimHumanoid43.setSegments(HAnimSegment1077)
HAnimSegment1078 = x3d.HAnimSegment()
HAnimSegment1078.setUSE("hanim_c4")

HAnimHumanoid43.setSegments(HAnimSegment1078)
HAnimSegment1079 = x3d.HAnimSegment()
HAnimSegment1079.setUSE("hanim_c2")

HAnimHumanoid43.setSegments(HAnimSegment1079)
HAnimSegment1080 = x3d.HAnimSegment()
HAnimSegment1080.setUSE("hanim_l_clavicle")

HAnimHumanoid43.setSegments(HAnimSegment1080)
HAnimSegment1081 = x3d.HAnimSegment()
HAnimSegment1081.setUSE("hanim_l_scapula")

HAnimHumanoid43.setSegments(HAnimSegment1081)
HAnimSegment1082 = x3d.HAnimSegment()
HAnimSegment1082.setUSE("hanim_l_upperarm")

HAnimHumanoid43.setSegments(HAnimSegment1082)
HAnimSegment1083 = x3d.HAnimSegment()
HAnimSegment1083.setUSE("hanim_l_forearm")

HAnimHumanoid43.setSegments(HAnimSegment1083)
HAnimSegment1084 = x3d.HAnimSegment()
HAnimSegment1084.setUSE("hanim_l_carpal")

HAnimHumanoid43.setSegments(HAnimSegment1084)
HAnimSegment1085 = x3d.HAnimSegment()
HAnimSegment1085.setUSE("hanim_l_metacarpal_1")

HAnimHumanoid43.setSegments(HAnimSegment1085)
HAnimSegment1086 = x3d.HAnimSegment()
HAnimSegment1086.setUSE("hanim_l_carpal_proximal_phalanx_1")

HAnimHumanoid43.setSegments(HAnimSegment1086)
HAnimSegment1087 = x3d.HAnimSegment()
HAnimSegment1087.setUSE("hanim_l_metacarpal_2")

HAnimHumanoid43.setSegments(HAnimSegment1087)
HAnimSegment1088 = x3d.HAnimSegment()
HAnimSegment1088.setUSE("hanim_l_carpal_proximal_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1088)
HAnimSegment1089 = x3d.HAnimSegment()
HAnimSegment1089.setUSE("hanim_l_carpal_middle_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1089)
HAnimSegment1090 = x3d.HAnimSegment()
HAnimSegment1090.setUSE("hanim_l_metacarpal_3")

HAnimHumanoid43.setSegments(HAnimSegment1090)
HAnimSegment1091 = x3d.HAnimSegment()
HAnimSegment1091.setUSE("hanim_l_carpal_proximal_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1091)
HAnimSegment1092 = x3d.HAnimSegment()
HAnimSegment1092.setUSE("hanim_l_carpal_middle_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1092)
HAnimSegment1093 = x3d.HAnimSegment()
HAnimSegment1093.setUSE("hanim_l_metacarpal_4")

HAnimHumanoid43.setSegments(HAnimSegment1093)
HAnimSegment1094 = x3d.HAnimSegment()
HAnimSegment1094.setUSE("hanim_l_carpal_proximal_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1094)
HAnimSegment1095 = x3d.HAnimSegment()
HAnimSegment1095.setUSE("hanim_l_carpal_middle_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1095)
HAnimSegment1096 = x3d.HAnimSegment()
HAnimSegment1096.setUSE("hanim_l_metacarpal_5")

HAnimHumanoid43.setSegments(HAnimSegment1096)
HAnimSegment1097 = x3d.HAnimSegment()
HAnimSegment1097.setUSE("hanim_l_carpal_proximal_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1097)
HAnimSegment1098 = x3d.HAnimSegment()
HAnimSegment1098.setUSE("hanim_l_carpal_middle_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1098)
HAnimSegment1099 = x3d.HAnimSegment()
HAnimSegment1099.setUSE("hanim_r_clavicle")

HAnimHumanoid43.setSegments(HAnimSegment1099)
HAnimSegment1100 = x3d.HAnimSegment()
HAnimSegment1100.setUSE("hanim_r_scapula")

HAnimHumanoid43.setSegments(HAnimSegment1100)
HAnimSegment1101 = x3d.HAnimSegment()
HAnimSegment1101.setUSE("hanim_r_upperarm")

HAnimHumanoid43.setSegments(HAnimSegment1101)
HAnimSegment1102 = x3d.HAnimSegment()
HAnimSegment1102.setUSE("hanim_r_forearm")

HAnimHumanoid43.setSegments(HAnimSegment1102)
HAnimSegment1103 = x3d.HAnimSegment()
HAnimSegment1103.setUSE("hanim_r_carpal")

HAnimHumanoid43.setSegments(HAnimSegment1103)
HAnimSegment1104 = x3d.HAnimSegment()
HAnimSegment1104.setUSE("hanim_r_metacarpal_1")

HAnimHumanoid43.setSegments(HAnimSegment1104)
HAnimSegment1105 = x3d.HAnimSegment()
HAnimSegment1105.setUSE("hanim_r_carpal_proximal_phalanx_1")

HAnimHumanoid43.setSegments(HAnimSegment1105)
HAnimSegment1106 = x3d.HAnimSegment()
HAnimSegment1106.setUSE("hanim_r_metacarpal_2")

HAnimHumanoid43.setSegments(HAnimSegment1106)
HAnimSegment1107 = x3d.HAnimSegment()
HAnimSegment1107.setUSE("hanim_r_carpal_proximal_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1107)
HAnimSegment1108 = x3d.HAnimSegment()
HAnimSegment1108.setUSE("hanim_r_carpal_middle_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1108)
HAnimSegment1109 = x3d.HAnimSegment()
HAnimSegment1109.setUSE("hanim_r_metacarpal_3")

HAnimHumanoid43.setSegments(HAnimSegment1109)
HAnimSegment1110 = x3d.HAnimSegment()
HAnimSegment1110.setUSE("hanim_r_carpal_proximal_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1110)
HAnimSegment1111 = x3d.HAnimSegment()
HAnimSegment1111.setUSE("hanim_r_carpal_middle_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1111)
HAnimSegment1112 = x3d.HAnimSegment()
HAnimSegment1112.setUSE("hanim_r_metacarpal_4")

HAnimHumanoid43.setSegments(HAnimSegment1112)
HAnimSegment1113 = x3d.HAnimSegment()
HAnimSegment1113.setUSE("hanim_r_carpal_proximal_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1113)
HAnimSegment1114 = x3d.HAnimSegment()
HAnimSegment1114.setUSE("hanim_r_carpal_middle_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1114)
HAnimSegment1115 = x3d.HAnimSegment()
HAnimSegment1115.setUSE("hanim_r_metacarpal_5")

HAnimHumanoid43.setSegments(HAnimSegment1115)
HAnimSegment1116 = x3d.HAnimSegment()
HAnimSegment1116.setUSE("hanim_r_carpal_proximal_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1116)
HAnimSegment1117 = x3d.HAnimSegment()
HAnimSegment1117.setUSE("hanim_r_carpal_middle_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1117)
HAnimSite1118 = x3d.HAnimSite()
HAnimSite1118.setUSE("hanim_buttocks_standing_wall_contact_point")

HAnimHumanoid43.setSites(HAnimSite1118)
HAnimSite1119 = x3d.HAnimSite()
HAnimSite1119.setUSE("hanim_crotch")

HAnimHumanoid43.setSites(HAnimSite1119)
HAnimSite1120 = x3d.HAnimSite()
HAnimSite1120.setUSE("hanim_l_asis")

HAnimHumanoid43.setSites(HAnimSite1120)
HAnimSite1121 = x3d.HAnimSite()
HAnimSite1121.setUSE("hanim_l_iliocristale")

HAnimHumanoid43.setSites(HAnimSite1121)
HAnimSite1122 = x3d.HAnimSite()
HAnimSite1122.setUSE("hanim_l_psis")

HAnimHumanoid43.setSites(HAnimSite1122)
HAnimSite1123 = x3d.HAnimSite()
HAnimSite1123.setUSE("hanim_l_trochanterion")

HAnimHumanoid43.setSites(HAnimSite1123)
HAnimSite1124 = x3d.HAnimSite()
HAnimSite1124.setUSE("hanim_r_asis")

HAnimHumanoid43.setSites(HAnimSite1124)
HAnimSite1125 = x3d.HAnimSite()
HAnimSite1125.setUSE("hanim_r_iliocristale")

HAnimHumanoid43.setSites(HAnimSite1125)
HAnimSite1126 = x3d.HAnimSite()
HAnimSite1126.setUSE("hanim_r_psis")

HAnimHumanoid43.setSites(HAnimSite1126)
HAnimSite1127 = x3d.HAnimSite()
HAnimSite1127.setUSE("hanim_r_trochanterion")

HAnimHumanoid43.setSites(HAnimSite1127)
HAnimSite1128 = x3d.HAnimSite()
HAnimSite1128.setUSE("hanim_navel")

HAnimHumanoid43.setSites(HAnimSite1128)
HAnimSite1129 = x3d.HAnimSite()
HAnimSite1129.setUSE("hanim_waist_preferred_anterior")

HAnimHumanoid43.setSites(HAnimSite1129)
HAnimSite1130 = x3d.HAnimSite()
HAnimSite1130.setUSE("hanim_waist_preferred_posterior")

HAnimHumanoid43.setSites(HAnimSite1130)
HAnimSite1131 = x3d.HAnimSite()
HAnimSite1131.setUSE("hanim_l_femoral_lateral_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1131)
HAnimSite1132 = x3d.HAnimSite()
HAnimSite1132.setUSE("hanim_l_femoral_medial_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1132)
HAnimSite1133 = x3d.HAnimSite()
HAnimSite1133.setUSE("hanim_l_knee_crease")

HAnimHumanoid43.setSites(HAnimSite1133)
HAnimSite1134 = x3d.HAnimSite()
HAnimSite1134.setUSE("hanim_l_suprapatella")

HAnimHumanoid43.setSites(HAnimSite1134)
HAnimSite1135 = x3d.HAnimSite()
HAnimSite1135.setUSE("hanim_r_femoral_lateral_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1135)
HAnimSite1136 = x3d.HAnimSite()
HAnimSite1136.setUSE("hanim_r_femoral_medial_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1136)
HAnimSite1137 = x3d.HAnimSite()
HAnimSite1137.setUSE("hanim_r_knee_crease")

HAnimHumanoid43.setSites(HAnimSite1137)
HAnimSite1138 = x3d.HAnimSite()
HAnimSite1138.setUSE("hanim_r_suprapatella")

HAnimHumanoid43.setSites(HAnimSite1138)
HAnimSite1139 = x3d.HAnimSite()
HAnimSite1139.setUSE("hanim_l_lateral_malleolus")

HAnimHumanoid43.setSites(HAnimSite1139)
HAnimSite1140 = x3d.HAnimSite()
HAnimSite1140.setUSE("hanim_l_medial_malleolus")

HAnimHumanoid43.setSites(HAnimSite1140)
HAnimSite1141 = x3d.HAnimSite()
HAnimSite1141.setUSE("hanim_l_tibiale")

HAnimHumanoid43.setSites(HAnimSite1141)
HAnimSite1142 = x3d.HAnimSite()
HAnimSite1142.setUSE("hanim_l_calcaneus_posterior")

HAnimHumanoid43.setSites(HAnimSite1142)
HAnimSite1143 = x3d.HAnimSite()
HAnimSite1143.setUSE("hanim_l_sphyrion")

HAnimHumanoid43.setSites(HAnimSite1143)
HAnimSite1144 = x3d.HAnimSite()
HAnimSite1144.setUSE("hanim_l_metatarsal_phalanx_1")

HAnimHumanoid43.setSites(HAnimSite1144)
HAnimSite1145 = x3d.HAnimSite()
HAnimSite1145.setUSE("hanim_l_metatarsal_phalanx_5")

HAnimHumanoid43.setSites(HAnimSite1145)
HAnimSite1146 = x3d.HAnimSite()
HAnimSite1146.setUSE("hanim_l_tarsal_distal_phalanx_1_tip")

HAnimHumanoid43.setSites(HAnimSite1146)
HAnimSite1147 = x3d.HAnimSite()
HAnimSite1147.setUSE("hanim_l_tarsal_distal_phalanx_2_tip")

HAnimHumanoid43.setSites(HAnimSite1147)
HAnimSite1148 = x3d.HAnimSite()
HAnimSite1148.setUSE("hanim_l_tarsal_distal_phalanx_3_tip")

HAnimHumanoid43.setSites(HAnimSite1148)
HAnimSite1149 = x3d.HAnimSite()
HAnimSite1149.setUSE("hanim_l_tarsal_distal_phalanx_4_tip")

HAnimHumanoid43.setSites(HAnimSite1149)
HAnimSite1150 = x3d.HAnimSite()
HAnimSite1150.setUSE("hanim_l_tarsal_distal_phalanx_5_tip")

HAnimHumanoid43.setSites(HAnimSite1150)
HAnimSite1151 = x3d.HAnimSite()
HAnimSite1151.setUSE("hanim_r_lateral_malleolus")

HAnimHumanoid43.setSites(HAnimSite1151)
HAnimSite1152 = x3d.HAnimSite()
HAnimSite1152.setUSE("hanim_r_medial_malleolus")

HAnimHumanoid43.setSites(HAnimSite1152)
HAnimSite1153 = x3d.HAnimSite()
HAnimSite1153.setUSE("hanim_r_tibiale")

HAnimHumanoid43.setSites(HAnimSite1153)
HAnimSite1154 = x3d.HAnimSite()
HAnimSite1154.setUSE("hanim_r_calcaneus_posterior")

HAnimHumanoid43.setSites(HAnimSite1154)
HAnimSite1155 = x3d.HAnimSite()
HAnimSite1155.setUSE("hanim_r_sphyrion")

HAnimHumanoid43.setSites(HAnimSite1155)
HAnimSite1156 = x3d.HAnimSite()
HAnimSite1156.setUSE("hanim_r_metatarsal_phalanx_1")

HAnimHumanoid43.setSites(HAnimSite1156)
HAnimSite1157 = x3d.HAnimSite()
HAnimSite1157.setUSE("hanim_r_metatarsal_phalanx_5")

HAnimHumanoid43.setSites(HAnimSite1157)
HAnimSite1158 = x3d.HAnimSite()
HAnimSite1158.setUSE("hanim_r_tarsal_distal_phalanx_1_tip")

HAnimHumanoid43.setSites(HAnimSite1158)
HAnimSite1159 = x3d.HAnimSite()
HAnimSite1159.setUSE("hanim_r_tarsal_distal_phalanx_2_tip")

HAnimHumanoid43.setSites(HAnimSite1159)
HAnimSite1160 = x3d.HAnimSite()
HAnimSite1160.setUSE("hanim_r_tarsal_distal_phalanx_3_tip")

HAnimHumanoid43.setSites(HAnimSite1160)
HAnimSite1161 = x3d.HAnimSite()
HAnimSite1161.setUSE("hanim_r_tarsal_distal_phalanx_4_tip")

HAnimHumanoid43.setSites(HAnimSite1161)
HAnimSite1162 = x3d.HAnimSite()
HAnimSite1162.setUSE("hanim_r_tarsal_distal_phalanx_5_tip")

HAnimHumanoid43.setSites(HAnimSite1162)
HAnimSite1163 = x3d.HAnimSite()
HAnimSite1163.setUSE("hanim_l_rib10")

HAnimHumanoid43.setSites(HAnimSite1163)
HAnimSite1164 = x3d.HAnimSite()
HAnimSite1164.setUSE("hanim_r_rib10")

HAnimHumanoid43.setSites(HAnimSite1164)
HAnimSite1165 = x3d.HAnimSite()
HAnimSite1165.setUSE("hanim_spine_1_middle_back")

HAnimHumanoid43.setSites(HAnimSite1165)
HAnimSite1166 = x3d.HAnimSite()
HAnimSite1166.setUSE("hanim_spine_2_middle_back")

HAnimHumanoid43.setSites(HAnimSite1166)
HAnimSite1167 = x3d.HAnimSite()
HAnimSite1167.setUSE("hanim_l_thelion")

HAnimHumanoid43.setSites(HAnimSite1167)
HAnimSite1168 = x3d.HAnimSite()
HAnimSite1168.setUSE("hanim_r_thelion")

HAnimHumanoid43.setSites(HAnimSite1168)
HAnimSite1169 = x3d.HAnimSite()
HAnimSite1169.setUSE("hanim_substernale")

HAnimHumanoid43.setSites(HAnimSite1169)
HAnimSite1170 = x3d.HAnimSite()
HAnimSite1170.setUSE("hanim_l_chest_midsagittal_plane")

HAnimHumanoid43.setSites(HAnimSite1170)
HAnimSite1171 = x3d.HAnimSite()
HAnimSite1171.setUSE("hanim_mesosternale")

HAnimHumanoid43.setSites(HAnimSite1171)
HAnimSite1172 = x3d.HAnimSite()
HAnimSite1172.setUSE("hanim_r_chest_midsagittal_plane")

HAnimHumanoid43.setSites(HAnimSite1172)
HAnimSite1173 = x3d.HAnimSite()
HAnimSite1173.setUSE("hanim_rear_center_midsagittal_plane")

HAnimHumanoid43.setSites(HAnimSite1173)
HAnimSite1174 = x3d.HAnimSite()
HAnimSite1174.setUSE("hanim_cervicale")

HAnimHumanoid43.setSites(HAnimSite1174)
HAnimSite1175 = x3d.HAnimSite()
HAnimSite1175.setUSE("hanim_l_neck_base")

HAnimHumanoid43.setSites(HAnimSite1175)
HAnimSite1176 = x3d.HAnimSite()
HAnimSite1176.setUSE("hanim_r_neck_base")

HAnimHumanoid43.setSites(HAnimSite1176)
HAnimSite1177 = x3d.HAnimSite()
HAnimSite1177.setUSE("hanim_suprasternale")

HAnimHumanoid43.setSites(HAnimSite1177)
HAnimSite1178 = x3d.HAnimSite()
HAnimSite1178.setUSE("hanim_l_acromion")

HAnimHumanoid43.setSites(HAnimSite1178)
HAnimSite1179 = x3d.HAnimSite()
HAnimSite1179.setUSE("hanim_l_axilla_distal_pt")

HAnimHumanoid43.setSites(HAnimSite1179)
HAnimSite1180 = x3d.HAnimSite()
HAnimSite1180.setUSE("hanim_l_axilla_posterior_folds")

HAnimHumanoid43.setSites(HAnimSite1180)
HAnimSite1181 = x3d.HAnimSite()
HAnimSite1181.setUSE("hanim_l_axilla_proximal")

HAnimHumanoid43.setSites(HAnimSite1181)
HAnimSite1182 = x3d.HAnimSite()
HAnimSite1182.setUSE("hanim_l_clavicale")

HAnimHumanoid43.setSites(HAnimSite1182)
HAnimSite1183 = x3d.HAnimSite()
HAnimSite1183.setUSE("hanim_r_acromion")

HAnimHumanoid43.setSites(HAnimSite1183)
HAnimSite1184 = x3d.HAnimSite()
HAnimSite1184.setUSE("hanim_r_axilla_distal_pt")

HAnimHumanoid43.setSites(HAnimSite1184)
HAnimSite1185 = x3d.HAnimSite()
HAnimSite1185.setUSE("hanim_r_axilla_posterior_folds")

HAnimHumanoid43.setSites(HAnimSite1185)
HAnimSite1186 = x3d.HAnimSite()
HAnimSite1186.setUSE("hanim_r_axilla_proximal")

HAnimHumanoid43.setSites(HAnimSite1186)
HAnimSite1187 = x3d.HAnimSite()
HAnimSite1187.setUSE("hanim_r_clavicale")

HAnimHumanoid43.setSites(HAnimSite1187)
HAnimSite1188 = x3d.HAnimSite()
HAnimSite1188.setUSE("hanim_adams_apple")

HAnimHumanoid43.setSites(HAnimSite1188)
HAnimSite1189 = x3d.HAnimSite()
HAnimSite1189.setUSE("hanim_glabella")

HAnimHumanoid43.setSites(HAnimSite1189)
HAnimSite1190 = x3d.HAnimSite()
HAnimSite1190.setUSE("hanim_l_ectocanthus")

HAnimHumanoid43.setSites(HAnimSite1190)
HAnimSite1191 = x3d.HAnimSite()
HAnimSite1191.setUSE("hanim_l_gonion")

HAnimHumanoid43.setSites(HAnimSite1191)
HAnimSite1192 = x3d.HAnimSite()
HAnimSite1192.setUSE("hanim_l_infraorbitale")

HAnimHumanoid43.setSites(HAnimSite1192)
HAnimSite1193 = x3d.HAnimSite()
HAnimSite1193.setUSE("hanim_l_tragion")

HAnimHumanoid43.setSites(HAnimSite1193)
HAnimSite1194 = x3d.HAnimSite()
HAnimSite1194.setUSE("hanim_menton")

HAnimHumanoid43.setSites(HAnimSite1194)
HAnimSite1195 = x3d.HAnimSite()
HAnimSite1195.setUSE("hanim_nuchale")

HAnimHumanoid43.setSites(HAnimSite1195)
HAnimSite1196 = x3d.HAnimSite()
HAnimSite1196.setUSE("hanim_opisthocranion")

HAnimHumanoid43.setSites(HAnimSite1196)
HAnimSite1197 = x3d.HAnimSite()
HAnimSite1197.setUSE("hanim_r_ectocanthus")

HAnimHumanoid43.setSites(HAnimSite1197)
HAnimSite1198 = x3d.HAnimSite()
HAnimSite1198.setUSE("hanim_r_gonion")

HAnimHumanoid43.setSites(HAnimSite1198)
HAnimSite1199 = x3d.HAnimSite()
HAnimSite1199.setUSE("hanim_r_infraorbitale")

HAnimHumanoid43.setSites(HAnimSite1199)
HAnimSite1200 = x3d.HAnimSite()
HAnimSite1200.setUSE("hanim_r_tragion")

HAnimHumanoid43.setSites(HAnimSite1200)
HAnimSite1201 = x3d.HAnimSite()
HAnimSite1201.setUSE("hanim_sellion")

HAnimHumanoid43.setSites(HAnimSite1201)
HAnimSite1202 = x3d.HAnimSite()
HAnimSite1202.setUSE("hanim_skull_vertex")

HAnimHumanoid43.setSites(HAnimSite1202)
HAnimSite1203 = x3d.HAnimSite()
HAnimSite1203.setUSE("hanim_supramenton")

HAnimHumanoid43.setSites(HAnimSite1203)
HAnimSite1204 = x3d.HAnimSite()
HAnimSite1204.setUSE("hanim_l_bideltoid")

HAnimHumanoid43.setSites(HAnimSite1204)
HAnimSite1205 = x3d.HAnimSite()
HAnimSite1205.setUSE("hanim_l_humeral_lateral_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1205)
HAnimSite1206 = x3d.HAnimSite()
HAnimSite1206.setUSE("hanim_l_humeral_medial_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1206)
HAnimSite1207 = x3d.HAnimSite()
HAnimSite1207.setUSE("hanim_l_olecranon")

HAnimHumanoid43.setSites(HAnimSite1207)
HAnimSite1208 = x3d.HAnimSite()
HAnimSite1208.setUSE("hanim_l_radial_styloid")

HAnimHumanoid43.setSites(HAnimSite1208)
HAnimSite1209 = x3d.HAnimSite()
HAnimSite1209.setUSE("hanim_l_radiale")

HAnimHumanoid43.setSites(HAnimSite1209)
HAnimSite1210 = x3d.HAnimSite()
HAnimSite1210.setUSE("hanim_l_ulnar_styloid")

HAnimHumanoid43.setSites(HAnimSite1210)
HAnimSite1211 = x3d.HAnimSite()
HAnimSite1211.setUSE("hanim_l_metacarpal_phalanx_2")

HAnimHumanoid43.setSites(HAnimSite1211)
HAnimSite1212 = x3d.HAnimSite()
HAnimSite1212.setUSE("hanim_l_metacarpal_phalanx_3")

HAnimHumanoid43.setSites(HAnimSite1212)
HAnimSite1213 = x3d.HAnimSite()
HAnimSite1213.setUSE("hanim_l_metacarpal_phalanx_5")

HAnimHumanoid43.setSites(HAnimSite1213)
HAnimSite1214 = x3d.HAnimSite()
HAnimSite1214.setUSE("hanim_l_carpal_distal_phalanx_1_tip")

HAnimHumanoid43.setSites(HAnimSite1214)
HAnimSite1215 = x3d.HAnimSite()
HAnimSite1215.setUSE("hanim_l_carpal_distal_phalanx_2_tip")

HAnimHumanoid43.setSites(HAnimSite1215)
HAnimSite1216 = x3d.HAnimSite()
HAnimSite1216.setUSE("hanim_l_dactylion")

HAnimHumanoid43.setSites(HAnimSite1216)
HAnimSite1217 = x3d.HAnimSite()
HAnimSite1217.setUSE("hanim_l_carpal_distal_phalanx_3_tip")

HAnimHumanoid43.setSites(HAnimSite1217)
HAnimSite1218 = x3d.HAnimSite()
HAnimSite1218.setUSE("hanim_l_carpal_distal_phalanx_4_tip")

HAnimHumanoid43.setSites(HAnimSite1218)
HAnimSite1219 = x3d.HAnimSite()
HAnimSite1219.setUSE("hanim_l_carpal_distal_phalanx_5_tip")

HAnimHumanoid43.setSites(HAnimSite1219)
HAnimSite1220 = x3d.HAnimSite()
HAnimSite1220.setUSE("hanim_r_bideltoid")

HAnimHumanoid43.setSites(HAnimSite1220)
HAnimSite1221 = x3d.HAnimSite()
HAnimSite1221.setUSE("hanim_r_humeral_lateral_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1221)
HAnimSite1222 = x3d.HAnimSite()
HAnimSite1222.setUSE("hanim_r_humeral_medial_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1222)
HAnimSite1223 = x3d.HAnimSite()
HAnimSite1223.setUSE("hanim_r_olecranon")

HAnimHumanoid43.setSites(HAnimSite1223)
HAnimSite1224 = x3d.HAnimSite()
HAnimSite1224.setUSE("hanim_r_radial_styloid")

HAnimHumanoid43.setSites(HAnimSite1224)
HAnimSite1225 = x3d.HAnimSite()
HAnimSite1225.setUSE("hanim_r_radiale")

HAnimHumanoid43.setSites(HAnimSite1225)
HAnimSite1226 = x3d.HAnimSite()
HAnimSite1226.setUSE("hanim_r_ulnar_styloid")

HAnimHumanoid43.setSites(HAnimSite1226)
HAnimSite1227 = x3d.HAnimSite()
HAnimSite1227.setUSE("hanim_r_metacarpal_phalanx_2")

HAnimHumanoid43.setSites(HAnimSite1227)
HAnimSite1228 = x3d.HAnimSite()
HAnimSite1228.setUSE("hanim_r_metacarpal_phalanx_3")

HAnimHumanoid43.setSites(HAnimSite1228)
HAnimSite1229 = x3d.HAnimSite()
HAnimSite1229.setUSE("hanim_r_metacarpal_phalanx_5")

HAnimHumanoid43.setSites(HAnimSite1229)
HAnimSite1230 = x3d.HAnimSite()
HAnimSite1230.setUSE("hanim_r_carpal_distal_phalanx_1_tip")

HAnimHumanoid43.setSites(HAnimSite1230)
HAnimSite1231 = x3d.HAnimSite()
HAnimSite1231.setUSE("hanim_r_carpal_distal_phalanx_2_tip")

HAnimHumanoid43.setSites(HAnimSite1231)
HAnimSite1232 = x3d.HAnimSite()
HAnimSite1232.setUSE("hanim_r_dactylion")

HAnimHumanoid43.setSites(HAnimSite1232)
HAnimSite1233 = x3d.HAnimSite()
HAnimSite1233.setUSE("hanim_r_carpal_distal_phalanx_3_tip")

HAnimHumanoid43.setSites(HAnimSite1233)
HAnimSite1234 = x3d.HAnimSite()
HAnimSite1234.setUSE("hanim_r_carpal_distal_phalanx_4_tip")

HAnimHumanoid43.setSites(HAnimSite1234)
HAnimSite1235 = x3d.HAnimSite()
HAnimSite1235.setUSE("hanim_r_carpal_distal_phalanx_5_tip")

HAnimHumanoid43.setSites(HAnimSite1235)

Scene11.addChildren(HAnimHumanoid43)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/Humanoid2.new.python.x3d")
X3D0.toFileJSON("../data/Humanoid2.new.python.json")
