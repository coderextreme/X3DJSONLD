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
meta3.setContent("DonHumanoid.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("identifier")
meta4.setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/DonHumanoid.x3d")

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
HAnimJoint104.setUlimit([0,0,0])
HAnimJoint104.setLlimit([0,0,0])
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
HAnimJoint141.setUlimit([0,0,0])
HAnimJoint141.setLlimit([0,0,0])
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
HAnimJoint159.setUlimit([0,0,0])
HAnimJoint159.setLlimit([0,0,0])
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
HAnimJoint174.setUlimit([0,0,0])
HAnimJoint174.setLlimit([0,0,0])
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
Coordinate181.setPoint([0.1101,0.0656,-0.0736,0.0781,0.0283,-0.097])

LineSet180.setCoord(Coordinate181)
#from l_talocrural to l_talocalcaneonavicular vertices 2
ColorRGBA182 = x3d.ColorRGBA()
ColorRGBA182.setUSE("HAnimSegmentLineColorRGBA")

LineSet180.setColor(ColorRGBA182)

Shape179.setGeometry(LineSet180)

HAnimSegment175.addChildren(Shape179)
Shape183 = x3d.Shape()
LineSet184 = x3d.LineSet()
LineSet184.setVertexCount([2])
Coordinate185 = x3d.Coordinate()
Coordinate185.setPoint([0.1101,0.0656,-0.0736,0.0889,0.0494,-0.1278])

LineSet184.setCoord(Coordinate185)
#from l_talocrural to l_calcaneocuboid vertices 2
ColorRGBA186 = x3d.ColorRGBA()
ColorRGBA186.setUSE("HAnimSegmentLineColorRGBA")

LineSet184.setColor(ColorRGBA186)

Shape183.setGeometry(LineSet184)

HAnimSegment175.addChildren(Shape183)

HAnimJoint174.addChildren(HAnimSegment175)
HAnimJoint187 = x3d.HAnimJoint()
HAnimJoint187.setName("l_talocalcaneonavicular")
HAnimJoint187.setDEF("hanim_l_talocalcaneonavicular")
HAnimJoint187.setCenter([0.0781,0.0283,-0.097])
HAnimJoint187.setUlimit([0,0,0])
HAnimJoint187.setLlimit([0,0,0])
HAnimSegment188 = x3d.HAnimSegment()
HAnimSegment188.setName("l_navicular")
HAnimSegment188.setDEF("hanim_l_navicular")
Transform189 = x3d.Transform()
Transform189.setTranslation([0.0781,0.0283,-0.097])
Transform190 = x3d.Transform()
#Empty Transform
Shape191 = x3d.Shape()
Shape191.setUSE("HAnimJointShape")

Transform190.addChild(Shape191)

Transform189.addChildren(Transform190)

HAnimSegment188.addChildren(Transform189)
Shape192 = x3d.Shape()
LineSet193 = x3d.LineSet()
LineSet193.setVertexCount([2])
Coordinate194 = x3d.Coordinate()
Coordinate194.setPoint([0.0781,0.0283,-0.097,0.0672,0.0235,-0.0835])

LineSet193.setCoord(Coordinate194)
#from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
ColorRGBA195 = x3d.ColorRGBA()
ColorRGBA195.setUSE("HAnimSegmentLineColorRGBA")

LineSet193.setColor(ColorRGBA195)

Shape192.setGeometry(LineSet193)

HAnimSegment188.addChildren(Shape192)
Shape196 = x3d.Shape()
LineSet197 = x3d.LineSet()
LineSet197.setVertexCount([2])
Coordinate198 = x3d.Coordinate()
Coordinate198.setPoint([0.0781,0.0283,-0.097,0.0812,0.025,-0.0805])

LineSet197.setCoord(Coordinate198)
#from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
ColorRGBA199 = x3d.ColorRGBA()
ColorRGBA199.setUSE("HAnimSegmentLineColorRGBA")

LineSet197.setColor(ColorRGBA199)

Shape196.setGeometry(LineSet197)

HAnimSegment188.addChildren(Shape196)
Shape200 = x3d.Shape()
LineSet201 = x3d.LineSet()
LineSet201.setVertexCount([2])
Coordinate202 = x3d.Coordinate()
Coordinate202.setPoint([0.0781,0.0283,-0.097,0.0928,0.0248,-0.0821])

LineSet201.setCoord(Coordinate202)
#from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
ColorRGBA203 = x3d.ColorRGBA()
ColorRGBA203.setUSE("HAnimSegmentLineColorRGBA")

LineSet201.setColor(ColorRGBA203)

Shape200.setGeometry(LineSet201)

HAnimSegment188.addChildren(Shape200)

HAnimJoint187.addChildren(HAnimSegment188)
HAnimJoint204 = x3d.HAnimJoint()
HAnimJoint204.setName("l_cuneonavicular_1")
HAnimJoint204.setDEF("hanim_l_cuneonavicular_1")
HAnimJoint204.setCenter([0.0672,0.0235,-0.0835])
HAnimJoint204.setUlimit([0,0,0])
HAnimJoint204.setLlimit([0,0,0])
HAnimSegment205 = x3d.HAnimSegment()
HAnimSegment205.setName("l_cuneiform_1")
HAnimSegment205.setDEF("hanim_l_cuneiform_1")
Transform206 = x3d.Transform()
Transform206.setTranslation([0.0672,0.0235,-0.0835])
Transform207 = x3d.Transform()
#Empty Transform
Shape208 = x3d.Shape()
Shape208.setUSE("HAnimJointShape")

Transform207.addChild(Shape208)

Transform206.addChildren(Transform207)

HAnimSegment205.addChildren(Transform206)
Shape209 = x3d.Shape()
LineSet210 = x3d.LineSet()
LineSet210.setVertexCount([2])
Coordinate211 = x3d.Coordinate()
Coordinate211.setPoint([0.0672,0.0235,-0.0835,0.0644,0.0147,-0.0577])

LineSet210.setCoord(Coordinate211)
#from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
ColorRGBA212 = x3d.ColorRGBA()
ColorRGBA212.setUSE("HAnimSegmentLineColorRGBA")

LineSet210.setColor(ColorRGBA212)

Shape209.setGeometry(LineSet210)

HAnimSegment205.addChildren(Shape209)

HAnimJoint204.addChildren(HAnimSegment205)
HAnimJoint213 = x3d.HAnimJoint()
HAnimJoint213.setName("l_tarsometatarsal_1")
HAnimJoint213.setDEF("hanim_l_tarsometatarsal_1")
HAnimJoint213.setCenter([0.0644,0.0147,-0.0577])
HAnimJoint213.setUlimit([0,0,0])
HAnimJoint213.setLlimit([0,0,0])
HAnimSegment214 = x3d.HAnimSegment()
HAnimSegment214.setName("l_metatarsal_1")
HAnimSegment214.setDEF("hanim_l_metatarsal_1")
Transform215 = x3d.Transform()
Transform215.setTranslation([0.0644,0.0147,-0.0577])
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
Coordinate220.setPoint([0.0644,0.0147,-0.0577,0.0619,0.0059,-0.0083])

LineSet219.setCoord(Coordinate220)
#from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
ColorRGBA221 = x3d.ColorRGBA()
ColorRGBA221.setUSE("HAnimSegmentLineColorRGBA")

LineSet219.setColor(ColorRGBA221)

Shape218.setGeometry(LineSet219)

HAnimSegment214.addChildren(Shape218)
HAnimSite222 = x3d.HAnimSite()
HAnimSite222.setName("l_metatarsal_phalanx_1")
HAnimSite222.setDEF("hanim_l_metatarsal_phalanx_1")
TouchSensor223 = x3d.TouchSensor()
TouchSensor223.setDescription("HAnimSite l_metatarsal_phalanx_1")

HAnimSite222.addChildren(TouchSensor223)
Shape224 = x3d.Shape()
Shape224.setUSE("HAnimSiteShape")

HAnimSite222.addChildren(Shape224)

HAnimSegment214.addChildren(HAnimSite222)

HAnimJoint213.addChildren(HAnimSegment214)
HAnimJoint225 = x3d.HAnimJoint()
HAnimJoint225.setName("l_metatarsophalangeal_1")
HAnimJoint225.setDEF("hanim_l_metatarsophalangeal_1")
HAnimJoint225.setCenter([0.0619,0.0059,-0.0083])
HAnimJoint225.setUlimit([0,0,0])
HAnimJoint225.setLlimit([0,0,0])
HAnimSegment226 = x3d.HAnimSegment()
HAnimSegment226.setName("l_tarsal_proximal_phalanx_1")
HAnimSegment226.setDEF("hanim_l_tarsal_proximal_phalanx_1")
Transform227 = x3d.Transform()
Transform227.setTranslation([0.0619,0.0059,-0.0083])
Transform228 = x3d.Transform()
#Empty Transform
Shape229 = x3d.Shape()
Shape229.setUSE("HAnimJointShape")

Transform228.addChild(Shape229)

Transform227.addChildren(Transform228)

HAnimSegment226.addChildren(Transform227)
Shape230 = x3d.Shape()
LineSet231 = x3d.LineSet()
LineSet231.setVertexCount([2])
Coordinate232 = x3d.Coordinate()
Coordinate232.setPoint([0.0619,0.0059,-0.0083,0.0619,0.0059,-0.0083])

LineSet231.setCoord(Coordinate232)
#from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
ColorRGBA233 = x3d.ColorRGBA()
ColorRGBA233.setUSE("HAnimSegmentLineColorRGBA")

LineSet231.setColor(ColorRGBA233)

Shape230.setGeometry(LineSet231)

HAnimSegment226.addChildren(Shape230)
HAnimSite234 = x3d.HAnimSite()
HAnimSite234.setName("l_tarsal_distal_phalanx_1_tip")
HAnimSite234.setDEF("hanim_l_tarsal_distal_phalanx_1_tip")
TouchSensor235 = x3d.TouchSensor()
TouchSensor235.setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip")

HAnimSite234.addChildren(TouchSensor235)
Shape236 = x3d.Shape()
Shape236.setUSE("HAnimSiteShape")

HAnimSite234.addChildren(Shape236)

HAnimSegment226.addChildren(HAnimSite234)

HAnimJoint225.addChildren(HAnimSegment226)
HAnimJoint237 = x3d.HAnimJoint()
HAnimJoint237.setName("l_tarsal_interphalangeal_1")
HAnimJoint237.setDEF("hanim_l_tarsal_interphalangeal_1")
HAnimJoint237.setUlimit([0,0,0])
HAnimJoint237.setLlimit([0,0,0])

HAnimJoint225.addChildren(HAnimJoint237)

HAnimJoint213.addChildren(HAnimJoint225)

HAnimJoint204.addChildren(HAnimJoint213)

HAnimJoint187.addChildren(HAnimJoint204)
HAnimJoint238 = x3d.HAnimJoint()
HAnimJoint238.setName("l_cuneonavicular_2")
HAnimJoint238.setDEF("hanim_l_cuneonavicular_2")
HAnimJoint238.setCenter([0.0812,0.025,-0.0805])
HAnimJoint238.setUlimit([0,0,0])
HAnimJoint238.setLlimit([0,0,0])
HAnimSegment239 = x3d.HAnimSegment()
HAnimSegment239.setName("l_cuneiform_2")
HAnimSegment239.setDEF("hanim_l_cuneiform_2")
Transform240 = x3d.Transform()
Transform240.setTranslation([0.0812,0.025,-0.0805])
Transform241 = x3d.Transform()
#Empty Transform
Shape242 = x3d.Shape()
Shape242.setUSE("HAnimJointShape")

Transform241.addChild(Shape242)

Transform240.addChildren(Transform241)

HAnimSegment239.addChildren(Transform240)
Shape243 = x3d.Shape()
LineSet244 = x3d.LineSet()
LineSet244.setVertexCount([2])
Coordinate245 = x3d.Coordinate()
Coordinate245.setPoint([0.0812,0.025,-0.0805,0.08,0.0175,-0.0608])

LineSet244.setCoord(Coordinate245)
#from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
ColorRGBA246 = x3d.ColorRGBA()
ColorRGBA246.setUSE("HAnimSegmentLineColorRGBA")

LineSet244.setColor(ColorRGBA246)

Shape243.setGeometry(LineSet244)

HAnimSegment239.addChildren(Shape243)

HAnimJoint238.addChildren(HAnimSegment239)
HAnimJoint247 = x3d.HAnimJoint()
HAnimJoint247.setName("l_tarsometatarsal_2")
HAnimJoint247.setDEF("hanim_l_tarsometatarsal_2")
HAnimJoint247.setCenter([0.08,0.0175,-0.0608])
HAnimJoint247.setUlimit([0,0,0])
HAnimJoint247.setLlimit([0,0,0])
HAnimSegment248 = x3d.HAnimSegment()
HAnimSegment248.setName("l_metatarsal_2")
HAnimSegment248.setDEF("hanim_l_metatarsal_2")
Transform249 = x3d.Transform()
Transform249.setTranslation([0.08,0.0175,-0.0608])
Transform250 = x3d.Transform()
#Empty Transform
Shape251 = x3d.Shape()
Shape251.setUSE("HAnimJointShape")

Transform250.addChild(Shape251)

Transform249.addChildren(Transform250)

HAnimSegment248.addChildren(Transform249)
Shape252 = x3d.Shape()
LineSet253 = x3d.LineSet()
LineSet253.setVertexCount([2])
Coordinate254 = x3d.Coordinate()
Coordinate254.setPoint([0.08,0.0175,-0.0608,0.0824,0.0064,-0.004])

LineSet253.setCoord(Coordinate254)
#from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA255 = x3d.ColorRGBA()
ColorRGBA255.setUSE("HAnimSegmentLineColorRGBA")

LineSet253.setColor(ColorRGBA255)

Shape252.setGeometry(LineSet253)

HAnimSegment248.addChildren(Shape252)

HAnimJoint247.addChildren(HAnimSegment248)
HAnimJoint256 = x3d.HAnimJoint()
HAnimJoint256.setName("l_metatarsophalangeal_2")
HAnimJoint256.setDEF("hanim_l_metatarsophalangeal_2")
HAnimJoint256.setCenter([0.0824,0.0064,-0.004])
HAnimJoint256.setUlimit([0,0,0])
HAnimJoint256.setLlimit([0,0,0])
HAnimSegment257 = x3d.HAnimSegment()
HAnimSegment257.setName("l_tarsal_proximal_phalanx_2")
HAnimSegment257.setDEF("hanim_l_tarsal_proximal_phalanx_2")
Transform258 = x3d.Transform()
Transform258.setTranslation([0.0824,0.0064,-0.004])
Transform259 = x3d.Transform()
#Empty Transform
Shape260 = x3d.Shape()
Shape260.setUSE("HAnimJointShape")

Transform259.addChild(Shape260)

Transform258.addChildren(Transform259)

HAnimSegment257.addChildren(Transform258)
Shape261 = x3d.Shape()
LineSet262 = x3d.LineSet()
LineSet262.setVertexCount([2])
Coordinate263 = x3d.Coordinate()
Coordinate263.setPoint([0.0824,0.0064,-0.004,0.0841,0.0041,0.0121])

LineSet262.setCoord(Coordinate263)
#from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA264 = x3d.ColorRGBA()
ColorRGBA264.setUSE("HAnimSegmentLineColorRGBA")

LineSet262.setColor(ColorRGBA264)

Shape261.setGeometry(LineSet262)

HAnimSegment257.addChildren(Shape261)

HAnimJoint256.addChildren(HAnimSegment257)
HAnimJoint265 = x3d.HAnimJoint()
HAnimJoint265.setName("l_tarsal_proximal_interphalangeal_2")
HAnimJoint265.setDEF("hanim_l_tarsal_proximal_interphalangeal_2")
HAnimJoint265.setCenter([0.0841,0.0041,0.0121])
HAnimJoint265.setUlimit([0,0,0])
HAnimJoint265.setLlimit([0,0,0])
HAnimSegment266 = x3d.HAnimSegment()
HAnimSegment266.setName("l_tarsal_middle_phalanx_2")
HAnimSegment266.setDEF("hanim_l_tarsal_middle_phalanx_2")
Transform267 = x3d.Transform()
Transform267.setTranslation([0.0841,0.0041,0.0121])
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
Coordinate272.setPoint([0.0841,0.0041,0.0121,0.0841,0.0013,0.0216])

LineSet271.setCoord(Coordinate272)
#from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA273 = x3d.ColorRGBA()
ColorRGBA273.setUSE("HAnimSegmentLineColorRGBA")

LineSet271.setColor(ColorRGBA273)

Shape270.setGeometry(LineSet271)

HAnimSegment266.addChildren(Shape270)
HAnimSite274 = x3d.HAnimSite()
HAnimSite274.setName("l_tarsal_distal_phalanx_2_tip")
HAnimSite274.setDEF("hanim_l_tarsal_distal_phalanx_2_tip")
HAnimSite274.setTranslation([0.1195,0.0079,0.1433])
TouchSensor275 = x3d.TouchSensor()
TouchSensor275.setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip")

HAnimSite274.addChildren(TouchSensor275)
Shape276 = x3d.Shape()
Shape276.setUSE("HAnimSiteShape")

HAnimSite274.addChildren(Shape276)

HAnimSegment266.addChildren(HAnimSite274)

HAnimJoint265.addChildren(HAnimSegment266)
HAnimJoint277 = x3d.HAnimJoint()
HAnimJoint277.setName("l_tarsal_distal_interphalangeal_2")
HAnimJoint277.setDEF("hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint277.setCenter([0.0841,0.0013,0.0216])
HAnimJoint277.setUlimit([0,0,0])
HAnimJoint277.setLlimit([0,0,0])

HAnimJoint265.addChildren(HAnimJoint277)

HAnimJoint256.addChildren(HAnimJoint265)

HAnimJoint247.addChildren(HAnimJoint256)

HAnimJoint238.addChildren(HAnimJoint247)

HAnimJoint187.addChildren(HAnimJoint238)
HAnimJoint278 = x3d.HAnimJoint()
HAnimJoint278.setName("l_cuneonavicular_3")
HAnimJoint278.setDEF("hanim_l_cuneonavicular_3")
HAnimJoint278.setCenter([0.0928,0.0248,-0.0821])
HAnimJoint278.setUlimit([0,0,0])
HAnimJoint278.setLlimit([0,0,0])
HAnimSegment279 = x3d.HAnimSegment()
HAnimSegment279.setName("l_cuneiform_3")
HAnimSegment279.setDEF("hanim_l_cuneiform_3")
Transform280 = x3d.Transform()
Transform280.setTranslation([0.0928,0.0248,-0.0821])
Transform281 = x3d.Transform()
#Empty Transform
Shape282 = x3d.Shape()
Shape282.setUSE("HAnimJointShape")

Transform281.addChild(Shape282)

Transform280.addChildren(Transform281)

HAnimSegment279.addChildren(Transform280)
Shape283 = x3d.Shape()
LineSet284 = x3d.LineSet()
LineSet284.setVertexCount([2])
Coordinate285 = x3d.Coordinate()
Coordinate285.setPoint([0.0928,0.0248,-0.0821,0.0944,0.0175,-0.0625])

LineSet284.setCoord(Coordinate285)
#from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
ColorRGBA286 = x3d.ColorRGBA()
ColorRGBA286.setUSE("HAnimSegmentLineColorRGBA")

LineSet284.setColor(ColorRGBA286)

Shape283.setGeometry(LineSet284)

HAnimSegment279.addChildren(Shape283)

HAnimJoint278.addChildren(HAnimSegment279)
HAnimJoint287 = x3d.HAnimJoint()
HAnimJoint287.setName("l_tarsometatarsal_3")
HAnimJoint287.setDEF("hanim_l_tarsometatarsal_3")
HAnimJoint287.setCenter([0.0944,0.0175,-0.0625])
HAnimJoint287.setUlimit([0,0,0])
HAnimJoint287.setLlimit([0,0,0])
HAnimSegment288 = x3d.HAnimSegment()
HAnimSegment288.setName("l_metatarsal_3")
HAnimSegment288.setDEF("hanim_l_metatarsal_3")
Transform289 = x3d.Transform()
Transform289.setTranslation([0.0944,0.0175,-0.0625])
Transform290 = x3d.Transform()
#Empty Transform
Shape291 = x3d.Shape()
Shape291.setUSE("HAnimJointShape")

Transform290.addChild(Shape291)

Transform289.addChildren(Transform290)

HAnimSegment288.addChildren(Transform289)
Shape292 = x3d.Shape()
LineSet293 = x3d.LineSet()
LineSet293.setVertexCount([2])
Coordinate294 = x3d.Coordinate()
Coordinate294.setPoint([0.0944,0.0175,-0.0625,0.0963,0.0065,-0.0065])

LineSet293.setCoord(Coordinate294)
#from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2
ColorRGBA295 = x3d.ColorRGBA()
ColorRGBA295.setUSE("HAnimSegmentLineColorRGBA")

LineSet293.setColor(ColorRGBA295)

Shape292.setGeometry(LineSet293)

HAnimSegment288.addChildren(Shape292)

HAnimJoint287.addChildren(HAnimSegment288)
HAnimJoint296 = x3d.HAnimJoint()
HAnimJoint296.setName("l_metatarsophalangeal_3")
HAnimJoint296.setDEF("hanim_l_metatarsophalangeal_3")
HAnimJoint296.setCenter([0.0963,0.0065,-0.0065])
HAnimJoint296.setUlimit([0,0,0])
HAnimJoint296.setLlimit([0,0,0])
HAnimSegment297 = x3d.HAnimSegment()
HAnimSegment297.setName("l_tarsal_proximal_phalanx_3")
HAnimSegment297.setDEF("hanim_l_tarsal_proximal_phalanx_3")
Transform298 = x3d.Transform()
Transform298.setTranslation([0.0963,0.0065,-0.0065])
Transform299 = x3d.Transform()
#Empty Transform
Shape300 = x3d.Shape()
Shape300.setUSE("HAnimJointShape")

Transform299.addChild(Shape300)

Transform298.addChildren(Transform299)

HAnimSegment297.addChildren(Transform298)
Shape301 = x3d.Shape()
LineSet302 = x3d.LineSet()
LineSet302.setVertexCount([2])
Coordinate303 = x3d.Coordinate()
Coordinate303.setPoint([0.0963,0.0065,-0.0065,0.0987,0.0034,0.0086])

LineSet302.setCoord(Coordinate303)
#from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA304 = x3d.ColorRGBA()
ColorRGBA304.setUSE("HAnimSegmentLineColorRGBA")

LineSet302.setColor(ColorRGBA304)

Shape301.setGeometry(LineSet302)

HAnimSegment297.addChildren(Shape301)

HAnimJoint296.addChildren(HAnimSegment297)
HAnimJoint305 = x3d.HAnimJoint()
HAnimJoint305.setName("l_tarsal_proximal_interphalangeal_3")
HAnimJoint305.setDEF("hanim_l_tarsal_proximal_interphalangeal_3")
HAnimJoint305.setCenter([0.0987,0.0034,0.0086])
HAnimJoint305.setUlimit([0,0,0])
HAnimJoint305.setLlimit([0,0,0])
HAnimSegment306 = x3d.HAnimSegment()
HAnimSegment306.setName("l_tarsal_middle_phalanx_3")
HAnimSegment306.setDEF("hanim_l_tarsal_middle_phalanx_3")
Transform307 = x3d.Transform()
Transform307.setTranslation([0.0987,0.0034,0.0086])
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
Coordinate312.setPoint([0.0987,0.0034,0.0086,0.1002,0.0013,0.0178])

LineSet311.setCoord(Coordinate312)
#from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA313 = x3d.ColorRGBA()
ColorRGBA313.setUSE("HAnimSegmentLineColorRGBA")

LineSet311.setColor(ColorRGBA313)

Shape310.setGeometry(LineSet311)

HAnimSegment306.addChildren(Shape310)
HAnimSite314 = x3d.HAnimSite()
HAnimSite314.setName("l_tarsal_distal_phalanx_3_tip")
HAnimSite314.setDEF("hanim_l_tarsal_distal_phalanx_3_tip")
TouchSensor315 = x3d.TouchSensor()
TouchSensor315.setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip")

HAnimSite314.addChildren(TouchSensor315)
Shape316 = x3d.Shape()
Shape316.setUSE("HAnimSiteShape")

HAnimSite314.addChildren(Shape316)

HAnimSegment306.addChildren(HAnimSite314)

HAnimJoint305.addChildren(HAnimSegment306)
HAnimJoint317 = x3d.HAnimJoint()
HAnimJoint317.setName("l_tarsal_distal_interphalangeal_3")
HAnimJoint317.setDEF("hanim_l_tarsal_distal_interphalangeal_3")
HAnimJoint317.setCenter([0.1002,0.0013,0.0178])
HAnimJoint317.setUlimit([0,0,0])
HAnimJoint317.setLlimit([0,0,0])

HAnimJoint305.addChildren(HAnimJoint317)

HAnimJoint296.addChildren(HAnimJoint305)

HAnimJoint287.addChildren(HAnimJoint296)

HAnimJoint278.addChildren(HAnimJoint287)

HAnimJoint187.addChildren(HAnimJoint278)

HAnimJoint174.addChildren(HAnimJoint187)
HAnimJoint318 = x3d.HAnimJoint()
HAnimJoint318.setName("l_calcaneocuboid")
HAnimJoint318.setDEF("hanim_l_calcaneocuboid")
HAnimJoint318.setCenter([0.0889,0.0494,-0.1278])
HAnimJoint318.setUlimit([0,0,0])
HAnimJoint318.setLlimit([0,0,0])
HAnimSegment319 = x3d.HAnimSegment()
HAnimSegment319.setName("l_calcaneus")
HAnimSegment319.setDEF("hanim_l_calcaneus")
Transform320 = x3d.Transform()
Transform320.setTranslation([0.0889,0.0494,-0.1278])
Transform321 = x3d.Transform()
#Empty Transform
Shape322 = x3d.Shape()
Shape322.setUSE("HAnimJointShape")

Transform321.addChild(Shape322)

Transform320.addChildren(Transform321)

HAnimSegment319.addChildren(Transform320)
Shape323 = x3d.Shape()
LineSet324 = x3d.LineSet()
LineSet324.setVertexCount([2])
Coordinate325 = x3d.Coordinate()
Coordinate325.setPoint([0.0889,0.0494,-0.1278,0.1105,0.0267,-0.0998])

LineSet324.setCoord(Coordinate325)
#from l_calcaneocuboid to l_transversetarsal vertices 2
ColorRGBA326 = x3d.ColorRGBA()
ColorRGBA326.setUSE("HAnimSegmentLineColorRGBA")

LineSet324.setColor(ColorRGBA326)

Shape323.setGeometry(LineSet324)

HAnimSegment319.addChildren(Shape323)

HAnimJoint318.addChildren(HAnimSegment319)
HAnimJoint327 = x3d.HAnimJoint()
HAnimJoint327.setName("l_transversetarsal")
HAnimJoint327.setDEF("hanim_l_transversetarsal")
HAnimJoint327.setCenter([0.1105,0.0267,-0.0998])
HAnimJoint327.setUlimit([0,0,0])
HAnimJoint327.setLlimit([0,0,0])
HAnimSegment328 = x3d.HAnimSegment()
HAnimSegment328.setName("l_cuboid")
HAnimSegment328.setDEF("hanim_l_cuboid")
Transform329 = x3d.Transform()
Transform329.setTranslation([0.1105,0.0267,-0.0998])
Transform330 = x3d.Transform()
#Empty Transform
Shape331 = x3d.Shape()
Shape331.setUSE("HAnimJointShape")

Transform330.addChild(Shape331)

Transform329.addChildren(Transform330)

HAnimSegment328.addChildren(Transform329)
Shape332 = x3d.Shape()
LineSet333 = x3d.LineSet()
LineSet333.setVertexCount([2])
Coordinate334 = x3d.Coordinate()
Coordinate334.setPoint([0.1105,0.0267,-0.0998,0.1063,0.016,-0.0634])

LineSet333.setCoord(Coordinate334)
#from l_transversetarsal to l_tarsometatarsal_4 vertices 2
ColorRGBA335 = x3d.ColorRGBA()
ColorRGBA335.setUSE("HAnimSegmentLineColorRGBA")

LineSet333.setColor(ColorRGBA335)

Shape332.setGeometry(LineSet333)

HAnimSegment328.addChildren(Shape332)
Shape336 = x3d.Shape()
LineSet337 = x3d.LineSet()
LineSet337.setVertexCount([2])
Coordinate338 = x3d.Coordinate()
Coordinate338.setPoint([0.1105,0.0267,-0.0998,0.1206,0.0124,-0.0671])

LineSet337.setCoord(Coordinate338)
#from l_transversetarsal to l_tarsometatarsal_5 vertices 2
ColorRGBA339 = x3d.ColorRGBA()
ColorRGBA339.setUSE("HAnimSegmentLineColorRGBA")

LineSet337.setColor(ColorRGBA339)

Shape336.setGeometry(LineSet337)

HAnimSegment328.addChildren(Shape336)

HAnimJoint327.addChildren(HAnimSegment328)
HAnimJoint340 = x3d.HAnimJoint()
HAnimJoint340.setName("l_tarsometatarsal_4")
HAnimJoint340.setDEF("hanim_l_tarsometatarsal_4")
HAnimJoint340.setCenter([0.1063,0.016,-0.0634])
HAnimJoint340.setUlimit([0,0,0])
HAnimJoint340.setLlimit([0,0,0])
HAnimSegment341 = x3d.HAnimSegment()
HAnimSegment341.setName("l_metatarsal_4")
HAnimSegment341.setDEF("hanim_l_metatarsal_4")
Transform342 = x3d.Transform()
Transform342.setTranslation([0.1063,0.016,-0.0634])
Transform343 = x3d.Transform()
#Empty Transform
Shape344 = x3d.Shape()
Shape344.setUSE("HAnimJointShape")

Transform343.addChild(Shape344)

Transform342.addChildren(Transform343)

HAnimSegment341.addChildren(Transform342)
Shape345 = x3d.Shape()
LineSet346 = x3d.LineSet()
LineSet346.setVertexCount([2])
Coordinate347 = x3d.Coordinate()
Coordinate347.setPoint([0.1063,0.016,-0.0634,0.1097,0.0058,-0.0107])

LineSet346.setCoord(Coordinate347)
#from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
ColorRGBA348 = x3d.ColorRGBA()
ColorRGBA348.setUSE("HAnimSegmentLineColorRGBA")

LineSet346.setColor(ColorRGBA348)

Shape345.setGeometry(LineSet346)

HAnimSegment341.addChildren(Shape345)

HAnimJoint340.addChildren(HAnimSegment341)
HAnimJoint349 = x3d.HAnimJoint()
HAnimJoint349.setName("l_metatarsophalangeal_4")
HAnimJoint349.setDEF("hanim_l_metatarsophalangeal_4")
HAnimJoint349.setCenter([0.1097,0.0058,-0.0107])
HAnimJoint349.setUlimit([0,0,0])
HAnimJoint349.setLlimit([0,0,0])
HAnimSegment350 = x3d.HAnimSegment()
HAnimSegment350.setName("l_tarsal_proximal_phalanx_4")
HAnimSegment350.setDEF("hanim_l_tarsal_proximal_phalanx_4")
Transform351 = x3d.Transform()
Transform351.setTranslation([0.1097,0.0058,-0.0107])
Transform352 = x3d.Transform()
#Empty Transform
Shape353 = x3d.Shape()
Shape353.setUSE("HAnimJointShape")

Transform352.addChild(Shape353)

Transform351.addChildren(Transform352)

HAnimSegment350.addChildren(Transform351)
Shape354 = x3d.Shape()
LineSet355 = x3d.LineSet()
LineSet355.setVertexCount([2])
Coordinate356 = x3d.Coordinate()
Coordinate356.setPoint([0.1097,0.0058,-0.0107,0.114,0.0037,0.0044])

LineSet355.setCoord(Coordinate356)
#from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA357 = x3d.ColorRGBA()
ColorRGBA357.setUSE("HAnimSegmentLineColorRGBA")

LineSet355.setColor(ColorRGBA357)

Shape354.setGeometry(LineSet355)

HAnimSegment350.addChildren(Shape354)

HAnimJoint349.addChildren(HAnimSegment350)
HAnimJoint358 = x3d.HAnimJoint()
HAnimJoint358.setName("l_tarsal_proximal_interphalangeal_4")
HAnimJoint358.setDEF("hanim_l_tarsal_proximal_interphalangeal_4")
HAnimJoint358.setCenter([0.114,0.0037,0.0044])
HAnimJoint358.setUlimit([0,0,0])
HAnimJoint358.setLlimit([0,0,0])
HAnimSegment359 = x3d.HAnimSegment()
HAnimSegment359.setName("l_tarsal_middle_phalanx_4")
HAnimSegment359.setDEF("hanim_l_tarsal_middle_phalanx_4")
Transform360 = x3d.Transform()
Transform360.setTranslation([0.114,0.0037,0.0044])
Transform361 = x3d.Transform()
#Empty Transform
Shape362 = x3d.Shape()
Shape362.setUSE("HAnimJointShape")

Transform361.addChild(Shape362)

Transform360.addChildren(Transform361)

HAnimSegment359.addChildren(Transform360)
Shape363 = x3d.Shape()
LineSet364 = x3d.LineSet()
LineSet364.setVertexCount([2])
Coordinate365 = x3d.Coordinate()
Coordinate365.setPoint([0.114,0.0037,0.0044,0.1155,0.0008,0.0118])

LineSet364.setCoord(Coordinate365)
#from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA366 = x3d.ColorRGBA()
ColorRGBA366.setUSE("HAnimSegmentLineColorRGBA")

LineSet364.setColor(ColorRGBA366)

Shape363.setGeometry(LineSet364)

HAnimSegment359.addChildren(Shape363)
HAnimSite367 = x3d.HAnimSite()
HAnimSite367.setName("l_tarsal_distal_phalanx_4_tip")
HAnimSite367.setDEF("hanim_l_tarsal_distal_phalanx_4_tip")
TouchSensor368 = x3d.TouchSensor()
TouchSensor368.setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip")

HAnimSite367.addChildren(TouchSensor368)
Shape369 = x3d.Shape()
Shape369.setUSE("HAnimSiteShape")

HAnimSite367.addChildren(Shape369)

HAnimSegment359.addChildren(HAnimSite367)

HAnimJoint358.addChildren(HAnimSegment359)
HAnimJoint370 = x3d.HAnimJoint()
HAnimJoint370.setName("l_tarsal_distal_interphalangeal_4")
HAnimJoint370.setDEF("hanim_l_tarsal_distal_interphalangeal_4")
HAnimJoint370.setCenter([0.1155,0.0008,0.0118])
HAnimJoint370.setUlimit([0,0,0])
HAnimJoint370.setLlimit([0,0,0])

HAnimJoint358.addChildren(HAnimJoint370)

HAnimJoint349.addChildren(HAnimJoint358)

HAnimJoint340.addChildren(HAnimJoint349)

HAnimJoint327.addChildren(HAnimJoint340)
HAnimJoint371 = x3d.HAnimJoint()
HAnimJoint371.setName("l_tarsometatarsal_5")
HAnimJoint371.setDEF("hanim_l_tarsometatarsal_5")
HAnimJoint371.setCenter([0.1206,0.0124,-0.0671])
HAnimJoint371.setUlimit([0,0,0])
HAnimJoint371.setLlimit([0,0,0])
HAnimSegment372 = x3d.HAnimSegment()
HAnimSegment372.setName("l_metatarsal_5")
HAnimSegment372.setDEF("hanim_l_metatarsal_5")
Transform373 = x3d.Transform()
Transform373.setTranslation([0.1206,0.0124,-0.0671])
Transform374 = x3d.Transform()
#Empty Transform
Shape375 = x3d.Shape()
Shape375.setUSE("HAnimJointShape")

Transform374.addChild(Shape375)

Transform373.addChildren(Transform374)

HAnimSegment372.addChildren(Transform373)
Shape376 = x3d.Shape()
LineSet377 = x3d.LineSet()
LineSet377.setVertexCount([2])
Coordinate378 = x3d.Coordinate()
Coordinate378.setPoint([0.1206,0.0124,-0.0671,0.1239,0.0051,-0.0153])

LineSet377.setCoord(Coordinate378)
#from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
ColorRGBA379 = x3d.ColorRGBA()
ColorRGBA379.setUSE("HAnimSegmentLineColorRGBA")

LineSet377.setColor(ColorRGBA379)

Shape376.setGeometry(LineSet377)

HAnimSegment372.addChildren(Shape376)
HAnimSite380 = x3d.HAnimSite()
HAnimSite380.setName("l_metatarsal_phalanx_5")
HAnimSite380.setDEF("hanim_l_metatarsal_phalanx_5")
TouchSensor381 = x3d.TouchSensor()
TouchSensor381.setDescription("HAnimSite l_metatarsal_phalanx_5")

HAnimSite380.addChildren(TouchSensor381)
Shape382 = x3d.Shape()
Shape382.setUSE("HAnimSiteShape")

HAnimSite380.addChildren(Shape382)

HAnimSegment372.addChildren(HAnimSite380)

HAnimJoint371.addChildren(HAnimSegment372)
HAnimJoint383 = x3d.HAnimJoint()
HAnimJoint383.setName("l_metatarsophalangeal_5")
HAnimJoint383.setDEF("hanim_l_metatarsophalangeal_5")
HAnimJoint383.setCenter([0.1239,0.0051,-0.0153])
HAnimJoint383.setUlimit([0,0,0])
HAnimJoint383.setLlimit([0,0,0])
HAnimSegment384 = x3d.HAnimSegment()
HAnimSegment384.setName("l_tarsal_proximal_phalanx_5")
HAnimSegment384.setDEF("hanim_l_tarsal_proximal_phalanx_5")
Transform385 = x3d.Transform()
Transform385.setTranslation([0.1239,0.0051,-0.0153])
Transform386 = x3d.Transform()
#Empty Transform
Shape387 = x3d.Shape()
Shape387.setUSE("HAnimJointShape")

Transform386.addChild(Shape387)

Transform385.addChildren(Transform386)

HAnimSegment384.addChildren(Transform385)
Shape388 = x3d.Shape()
LineSet389 = x3d.LineSet()
LineSet389.setVertexCount([2])
Coordinate390 = x3d.Coordinate()
Coordinate390.setPoint([0.1239,0.0051,-0.0153,0.1262,0.0023,-0.0077])

LineSet389.setCoord(Coordinate390)
#from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA391 = x3d.ColorRGBA()
ColorRGBA391.setUSE("HAnimSegmentLineColorRGBA")

LineSet389.setColor(ColorRGBA391)

Shape388.setGeometry(LineSet389)

HAnimSegment384.addChildren(Shape388)

HAnimJoint383.addChildren(HAnimSegment384)
HAnimJoint392 = x3d.HAnimJoint()
HAnimJoint392.setName("l_tarsal_proximal_interphalangeal_5")
HAnimJoint392.setDEF("hanim_l_tarsal_proximal_interphalangeal_5")
HAnimJoint392.setCenter([0.1262,0.0023,-0.0077])
HAnimJoint392.setUlimit([0,0,0])
HAnimJoint392.setLlimit([0,0,0])
HAnimSegment393 = x3d.HAnimSegment()
HAnimSegment393.setName("l_tarsal_middle_phalanx_5")
HAnimSegment393.setDEF("hanim_l_tarsal_middle_phalanx_5")
Transform394 = x3d.Transform()
Transform394.setTranslation([0.1262,0.0023,-0.0077])
Transform395 = x3d.Transform()
#Empty Transform
Shape396 = x3d.Shape()
Shape396.setUSE("HAnimJointShape")

Transform395.addChild(Shape396)

Transform394.addChildren(Transform395)

HAnimSegment393.addChildren(Transform394)
Shape397 = x3d.Shape()
LineSet398 = x3d.LineSet()
LineSet398.setVertexCount([2])
Coordinate399 = x3d.Coordinate()
Coordinate399.setPoint([0.1262,0.0023,-0.0077,0.1271,0,0])

LineSet398.setCoord(Coordinate399)
#from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA400 = x3d.ColorRGBA()
ColorRGBA400.setUSE("HAnimSegmentLineColorRGBA")

LineSet398.setColor(ColorRGBA400)

Shape397.setGeometry(LineSet398)

HAnimSegment393.addChildren(Shape397)
HAnimSite401 = x3d.HAnimSite()
HAnimSite401.setName("l_tarsal_distal_phalanx_5_tip")
HAnimSite401.setDEF("hanim_l_tarsal_distal_phalanx_5_tip")
TouchSensor402 = x3d.TouchSensor()
TouchSensor402.setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip")

HAnimSite401.addChildren(TouchSensor402)
Shape403 = x3d.Shape()
Shape403.setUSE("HAnimSiteShape")

HAnimSite401.addChildren(Shape403)

HAnimSegment393.addChildren(HAnimSite401)

HAnimJoint392.addChildren(HAnimSegment393)
HAnimJoint404 = x3d.HAnimJoint()
HAnimJoint404.setName("l_tarsal_distal_interphalangeal_5")
HAnimJoint404.setDEF("hanim_l_tarsal_distal_interphalangeal_5")
HAnimJoint404.setCenter([0.1271,0,0])
HAnimJoint404.setUlimit([0,0,0])
HAnimJoint404.setLlimit([0,0,0])

HAnimJoint392.addChildren(HAnimJoint404)

HAnimJoint383.addChildren(HAnimJoint392)

HAnimJoint371.addChildren(HAnimJoint383)

HAnimJoint327.addChildren(HAnimJoint371)

HAnimJoint318.addChildren(HAnimJoint327)

HAnimJoint174.addChildren(HAnimJoint318)

HAnimJoint159.addChildren(HAnimJoint174)

HAnimJoint141.addChildren(HAnimJoint159)

HAnimJoint104.addChildren(HAnimJoint141)
HAnimJoint405 = x3d.HAnimJoint()
HAnimJoint405.setName("r_hip")
HAnimJoint405.setDEF("hanim_r_hip")
HAnimJoint405.setCenter([-0.095,0.9171,0.0029])
HAnimJoint405.setUlimit([0,0,0])
HAnimJoint405.setLlimit([0,0,0])
HAnimSegment406 = x3d.HAnimSegment()
HAnimSegment406.setName("r_thigh")
HAnimSegment406.setDEF("hanim_r_thigh")
Transform407 = x3d.Transform()
Transform407.setTranslation([-0.095,0.9171,0.0029])
Transform408 = x3d.Transform()
#Empty Transform
Shape409 = x3d.Shape()
Shape409.setUSE("HAnimJointShape")

Transform408.addChild(Shape409)

Transform407.addChildren(Transform408)

HAnimSegment406.addChildren(Transform407)
Shape410 = x3d.Shape()
LineSet411 = x3d.LineSet()
LineSet411.setVertexCount([2])
Coordinate412 = x3d.Coordinate()
Coordinate412.setPoint([-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318])

LineSet411.setCoord(Coordinate412)
#from r_hip to r_knee vertices 2
ColorRGBA413 = x3d.ColorRGBA()
ColorRGBA413.setUSE("HAnimSegmentLineColorRGBA")

LineSet411.setColor(ColorRGBA413)

Shape410.setGeometry(LineSet411)

HAnimSegment406.addChildren(Shape410)
HAnimSite414 = x3d.HAnimSite()
HAnimSite414.setName("r_lateral_malleolus")
HAnimSite414.setDEF("hanim_r_lateral_malleolus")
HAnimSite414.setTranslation([-0.1006,0.0658,-0.1075])
TouchSensor415 = x3d.TouchSensor()
TouchSensor415.setDescription("HAnimSite r_lateral_malleolus")

HAnimSite414.addChildren(TouchSensor415)
Shape416 = x3d.Shape()
Shape416.setUSE("HAnimSiteShape")

HAnimSite414.addChildren(Shape416)

HAnimSegment406.addChildren(HAnimSite414)
HAnimSite417 = x3d.HAnimSite()
HAnimSite417.setName("r_medial_malleolus")
HAnimSite417.setDEF("hanim_r_medial_malleolus")
HAnimSite417.setTranslation([-0.0591,0.076,-0.0928])
TouchSensor418 = x3d.TouchSensor()
TouchSensor418.setDescription("HAnimSite r_medial_malleolus")

HAnimSite417.addChildren(TouchSensor418)
Shape419 = x3d.Shape()
Shape419.setUSE("HAnimSiteShape")

HAnimSite417.addChildren(Shape419)

HAnimSegment406.addChildren(HAnimSite417)
HAnimSite420 = x3d.HAnimSite()
HAnimSite420.setName("r_tibiale")
HAnimSite420.setDEF("hanim_r_tibiale")
TouchSensor421 = x3d.TouchSensor()
TouchSensor421.setDescription("HAnimSite r_tibiale")

HAnimSite420.addChildren(TouchSensor421)
Shape422 = x3d.Shape()
Shape422.setUSE("HAnimSiteShape")

HAnimSite420.addChildren(Shape422)

HAnimSegment406.addChildren(HAnimSite420)

HAnimJoint405.addChildren(HAnimSegment406)
HAnimJoint423 = x3d.HAnimJoint()
HAnimJoint423.setName("r_knee")
HAnimJoint423.setDEF("hanim_r_knee")
HAnimJoint423.setCenter([-0.0867,0.4913,0.0318])
HAnimJoint423.setUlimit([0,0,0])
HAnimJoint423.setLlimit([0,0,0])
HAnimSegment424 = x3d.HAnimSegment()
HAnimSegment424.setName("r_calf")
HAnimSegment424.setDEF("hanim_r_calf")
Transform425 = x3d.Transform()
Transform425.setTranslation([-0.0867,0.4913,0.0318])
Transform426 = x3d.Transform()
#Empty Transform
Shape427 = x3d.Shape()
Shape427.setUSE("HAnimJointShape")

Transform426.addChild(Shape427)

Transform425.addChildren(Transform426)

HAnimSegment424.addChildren(Transform425)
Shape428 = x3d.Shape()
LineSet429 = x3d.LineSet()
LineSet429.setVertexCount([2])
Coordinate430 = x3d.Coordinate()
Coordinate430.setPoint([-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766])

LineSet429.setCoord(Coordinate430)
#from r_knee to r_talocrural vertices 2
ColorRGBA431 = x3d.ColorRGBA()
ColorRGBA431.setUSE("HAnimSegmentLineColorRGBA")

LineSet429.setColor(ColorRGBA431)

Shape428.setGeometry(LineSet429)

HAnimSegment424.addChildren(Shape428)
HAnimSite432 = x3d.HAnimSite()
HAnimSite432.setName("r_calcaneus_posterior")
HAnimSite432.setDEF("hanim_r_calcaneus_posterior")
HAnimSite432.setTranslation([-0.0692,0.0297,-0.1221])
TouchSensor433 = x3d.TouchSensor()
TouchSensor433.setDescription("HAnimSite r_calcaneus_posterior")

HAnimSite432.addChildren(TouchSensor433)
Shape434 = x3d.Shape()
Shape434.setUSE("HAnimSiteShape")

HAnimSite432.addChildren(Shape434)

HAnimSegment424.addChildren(HAnimSite432)
HAnimSite435 = x3d.HAnimSite()
HAnimSite435.setName("r_sphyrion")
HAnimSite435.setDEF("hanim_r_sphyrion")
HAnimSite435.setTranslation([-0.0603,0.061,-0.1002])
TouchSensor436 = x3d.TouchSensor()
TouchSensor436.setDescription("HAnimSite r_sphyrion")

HAnimSite435.addChildren(TouchSensor436)
Shape437 = x3d.Shape()
Shape437.setUSE("HAnimSiteShape")

HAnimSite435.addChildren(Shape437)

HAnimSegment424.addChildren(HAnimSite435)

HAnimJoint423.addChildren(HAnimSegment424)
HAnimJoint438 = x3d.HAnimJoint()
HAnimJoint438.setName("r_talocrural")
HAnimJoint438.setDEF("hanim_r_talocrural")
HAnimJoint438.setCenter([-0.0801,0.0712,-0.0766])
HAnimJoint438.setUlimit([0,0,0])
HAnimJoint438.setLlimit([0,0,0])
HAnimSegment439 = x3d.HAnimSegment()
HAnimSegment439.setName("r_talus")
HAnimSegment439.setDEF("hanim_r_talus")
Transform440 = x3d.Transform()
Transform440.setScale([0.15,0.15,0.15])
Transform440.setTranslation([-0.05,0.06,-0.025])
Transform440.setRotation([1,0,0,-1.57])
#Transform right foot
Transform441 = x3d.Transform()
#Empty Transform right foot
Shape442 = x3d.Shape()
Shape442.setUSE("HAnimJointShape")

Transform441.addChild(Shape442)

Transform440.addChildren(Transform441)

HAnimSegment439.addChildren(Transform440)
Shape443 = x3d.Shape()
LineSet444 = x3d.LineSet()
LineSet444.setVertexCount([2])
Coordinate445 = x3d.Coordinate()
Coordinate445.setPoint([-0.0801,0.0712,-0.0766,-0.0781,0.0283,-0.097])

LineSet444.setCoord(Coordinate445)
#from r_talocrural to r_talocalcaneonavicular vertices 2
ColorRGBA446 = x3d.ColorRGBA()
ColorRGBA446.setUSE("HAnimSegmentLineColorRGBA")

LineSet444.setColor(ColorRGBA446)

Shape443.setGeometry(LineSet444)

HAnimSegment439.addChildren(Shape443)
Shape447 = x3d.Shape()
LineSet448 = x3d.LineSet()
LineSet448.setVertexCount([2])
Coordinate449 = x3d.Coordinate()
Coordinate449.setPoint([-0.0801,0.0712,-0.0766,-0.0889,0.0494,-0.1278])

LineSet448.setCoord(Coordinate449)
#from r_talocrural to r_calcaneocuboid vertices 2
ColorRGBA450 = x3d.ColorRGBA()
ColorRGBA450.setUSE("HAnimSegmentLineColorRGBA")

LineSet448.setColor(ColorRGBA450)

Shape447.setGeometry(LineSet448)

HAnimSegment439.addChildren(Shape447)

HAnimJoint438.addChildren(HAnimSegment439)
HAnimJoint451 = x3d.HAnimJoint()
HAnimJoint451.setName("r_talocalcaneonavicular")
HAnimJoint451.setDEF("hanim_r_talocalcaneonavicular")
HAnimJoint451.setCenter([-0.0781,0.0283,-0.097])
HAnimJoint451.setUlimit([0,0,0])
HAnimJoint451.setLlimit([0,0,0])
HAnimSegment452 = x3d.HAnimSegment()
HAnimSegment452.setName("r_navicular")
HAnimSegment452.setDEF("hanim_r_navicular")
Transform453 = x3d.Transform()
Transform453.setTranslation([-0.0781,0.0283,-0.097])
Transform454 = x3d.Transform()
#Empty Transform
Shape455 = x3d.Shape()
Shape455.setUSE("HAnimJointShape")

Transform454.addChild(Shape455)

Transform453.addChildren(Transform454)

HAnimSegment452.addChildren(Transform453)
Shape456 = x3d.Shape()
LineSet457 = x3d.LineSet()
LineSet457.setVertexCount([2])
Coordinate458 = x3d.Coordinate()
Coordinate458.setPoint([-0.0781,0.0283,-0.097,-0.0672,0.0235,-0.0835])

LineSet457.setCoord(Coordinate458)
#from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
ColorRGBA459 = x3d.ColorRGBA()
ColorRGBA459.setUSE("HAnimSegmentLineColorRGBA")

LineSet457.setColor(ColorRGBA459)

Shape456.setGeometry(LineSet457)

HAnimSegment452.addChildren(Shape456)
Shape460 = x3d.Shape()
LineSet461 = x3d.LineSet()
LineSet461.setVertexCount([2])
Coordinate462 = x3d.Coordinate()
Coordinate462.setPoint([-0.0781,0.0283,-0.097,-0.0812,0.025,-0.0805])

LineSet461.setCoord(Coordinate462)
#from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
ColorRGBA463 = x3d.ColorRGBA()
ColorRGBA463.setUSE("HAnimSegmentLineColorRGBA")

LineSet461.setColor(ColorRGBA463)

Shape460.setGeometry(LineSet461)

HAnimSegment452.addChildren(Shape460)
Shape464 = x3d.Shape()
LineSet465 = x3d.LineSet()
LineSet465.setVertexCount([2])
Coordinate466 = x3d.Coordinate()
Coordinate466.setPoint([-0.0781,0.0283,-0.097,-0.0928,0.0248,-0.0821])

LineSet465.setCoord(Coordinate466)
#from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
ColorRGBA467 = x3d.ColorRGBA()
ColorRGBA467.setUSE("HAnimSegmentLineColorRGBA")

LineSet465.setColor(ColorRGBA467)

Shape464.setGeometry(LineSet465)

HAnimSegment452.addChildren(Shape464)

HAnimJoint451.addChildren(HAnimSegment452)
HAnimJoint468 = x3d.HAnimJoint()
HAnimJoint468.setName("r_cuneonavicular_1")
HAnimJoint468.setDEF("hanim_r_cuneonavicular_1")
HAnimJoint468.setCenter([-0.0672,0.0235,-0.0835])
HAnimJoint468.setUlimit([0,0,0])
HAnimJoint468.setLlimit([0,0,0])
HAnimSegment469 = x3d.HAnimSegment()
HAnimSegment469.setName("r_cuneiform_1")
HAnimSegment469.setDEF("hanim_r_cuneiform_1")
Transform470 = x3d.Transform()
Transform470.setTranslation([-0.0672,0.0235,-0.0835])
Transform471 = x3d.Transform()
#Empty Transform
Shape472 = x3d.Shape()
Shape472.setUSE("HAnimJointShape")

Transform471.addChild(Shape472)

Transform470.addChildren(Transform471)

HAnimSegment469.addChildren(Transform470)
Shape473 = x3d.Shape()
LineSet474 = x3d.LineSet()
LineSet474.setVertexCount([2])
Coordinate475 = x3d.Coordinate()
Coordinate475.setPoint([-0.0672,0.0235,-0.0835,-0.0644,0.0147,-0.0577])

LineSet474.setCoord(Coordinate475)
#from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
ColorRGBA476 = x3d.ColorRGBA()
ColorRGBA476.setUSE("HAnimSegmentLineColorRGBA")

LineSet474.setColor(ColorRGBA476)

Shape473.setGeometry(LineSet474)

HAnimSegment469.addChildren(Shape473)

HAnimJoint468.addChildren(HAnimSegment469)
HAnimJoint477 = x3d.HAnimJoint()
HAnimJoint477.setName("r_tarsometatarsal_1")
HAnimJoint477.setDEF("hanim_r_tarsometatarsal_1")
HAnimJoint477.setCenter([-0.0644,0.0147,-0.0577])
HAnimJoint477.setUlimit([0,0,0])
HAnimJoint477.setLlimit([0,0,0])
HAnimSegment478 = x3d.HAnimSegment()
HAnimSegment478.setName("r_metatarsal_1")
HAnimSegment478.setDEF("hanim_r_metatarsal_1")
Transform479 = x3d.Transform()
Transform479.setTranslation([-0.0644,0.0147,-0.0577])
Transform480 = x3d.Transform()
#Empty Transform
Shape481 = x3d.Shape()
Shape481.setUSE("HAnimJointShape")

Transform480.addChild(Shape481)

Transform479.addChildren(Transform480)

HAnimSegment478.addChildren(Transform479)
Shape482 = x3d.Shape()
LineSet483 = x3d.LineSet()
LineSet483.setVertexCount([2])
Coordinate484 = x3d.Coordinate()
Coordinate484.setPoint([-0.0644,0.0147,-0.0577,-0.0619,0.0059,-0.0083])

LineSet483.setCoord(Coordinate484)
#from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
ColorRGBA485 = x3d.ColorRGBA()
ColorRGBA485.setUSE("HAnimSegmentLineColorRGBA")

LineSet483.setColor(ColorRGBA485)

Shape482.setGeometry(LineSet483)

HAnimSegment478.addChildren(Shape482)
HAnimSite486 = x3d.HAnimSite()
HAnimSite486.setName("r_metatarsal_phalanx_1")
HAnimSite486.setDEF("hanim_r_metatarsal_phalanx_1")
TouchSensor487 = x3d.TouchSensor()
TouchSensor487.setDescription("HAnimSite r_metatarsal_phalanx_1")

HAnimSite486.addChildren(TouchSensor487)
Shape488 = x3d.Shape()
Shape488.setUSE("HAnimSiteShape")

HAnimSite486.addChildren(Shape488)

HAnimSegment478.addChildren(HAnimSite486)

HAnimJoint477.addChildren(HAnimSegment478)
HAnimJoint489 = x3d.HAnimJoint()
HAnimJoint489.setName("r_metatarsophalangeal_1")
HAnimJoint489.setDEF("hanim_r_metatarsophalangeal_1")
HAnimJoint489.setCenter([-0.0619,0.0059,-0.0083])
HAnimJoint489.setUlimit([0,0,0])
HAnimJoint489.setLlimit([0,0,0])
HAnimSegment490 = x3d.HAnimSegment()
HAnimSegment490.setName("r_tarsal_proximal_phalanx_1")
HAnimSegment490.setDEF("hanim_r_tarsal_proximal_phalanx_1")
Transform491 = x3d.Transform()
Transform491.setTranslation([-0.0619,0.0059,-0.0083])
Transform492 = x3d.Transform()
#Empty Transform
Shape493 = x3d.Shape()
Shape493.setUSE("HAnimJointShape")

Transform492.addChild(Shape493)

Transform491.addChildren(Transform492)

HAnimSegment490.addChildren(Transform491)
Shape494 = x3d.Shape()
LineSet495 = x3d.LineSet()
LineSet495.setVertexCount([2])
Coordinate496 = x3d.Coordinate()
Coordinate496.setPoint([-0.0619,0.0059,-0.0083,-0.0619,0.0059,-0.0083])

LineSet495.setCoord(Coordinate496)
#from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
ColorRGBA497 = x3d.ColorRGBA()
ColorRGBA497.setUSE("HAnimSegmentLineColorRGBA")

LineSet495.setColor(ColorRGBA497)

Shape494.setGeometry(LineSet495)

HAnimSegment490.addChildren(Shape494)
HAnimSite498 = x3d.HAnimSite()
HAnimSite498.setName("r_tarsal_distal_phalanx_1_tip")
HAnimSite498.setDEF("hanim_r_tarsal_distal_phalanx_1_tip")
TouchSensor499 = x3d.TouchSensor()
TouchSensor499.setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip")

HAnimSite498.addChildren(TouchSensor499)
Shape500 = x3d.Shape()
Shape500.setUSE("HAnimSiteShape")

HAnimSite498.addChildren(Shape500)

HAnimSegment490.addChildren(HAnimSite498)

HAnimJoint489.addChildren(HAnimSegment490)
HAnimJoint501 = x3d.HAnimJoint()
HAnimJoint501.setName("r_tarsal_interphalangeal_1")
HAnimJoint501.setDEF("hanim_r_tarsal_interphalangeal_1")
HAnimJoint501.setUlimit([0,0,0])
HAnimJoint501.setLlimit([0,0,0])

HAnimJoint489.addChildren(HAnimJoint501)

HAnimJoint477.addChildren(HAnimJoint489)

HAnimJoint468.addChildren(HAnimJoint477)

HAnimJoint451.addChildren(HAnimJoint468)
HAnimJoint502 = x3d.HAnimJoint()
HAnimJoint502.setName("r_cuneonavicular_2")
HAnimJoint502.setDEF("hanim_r_cuneonavicular_2")
HAnimJoint502.setCenter([-0.0812,0.025,-0.0805])
HAnimJoint502.setUlimit([0,0,0])
HAnimJoint502.setLlimit([0,0,0])
HAnimSegment503 = x3d.HAnimSegment()
HAnimSegment503.setName("r_cuneiform_2")
HAnimSegment503.setDEF("hanim_r_cuneiform_2")
Transform504 = x3d.Transform()
Transform504.setTranslation([-0.0812,0.025,-0.0805])
Transform505 = x3d.Transform()
#Empty Transform
Shape506 = x3d.Shape()
Shape506.setUSE("HAnimJointShape")

Transform505.addChild(Shape506)

Transform504.addChildren(Transform505)

HAnimSegment503.addChildren(Transform504)
Shape507 = x3d.Shape()
LineSet508 = x3d.LineSet()
LineSet508.setVertexCount([2])
Coordinate509 = x3d.Coordinate()
Coordinate509.setPoint([-0.0812,0.025,-0.0805,-0.08,0.0175,-0.0608])

LineSet508.setCoord(Coordinate509)
#from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
ColorRGBA510 = x3d.ColorRGBA()
ColorRGBA510.setUSE("HAnimSegmentLineColorRGBA")

LineSet508.setColor(ColorRGBA510)

Shape507.setGeometry(LineSet508)

HAnimSegment503.addChildren(Shape507)

HAnimJoint502.addChildren(HAnimSegment503)
HAnimJoint511 = x3d.HAnimJoint()
HAnimJoint511.setName("r_tarsometatarsal_2")
HAnimJoint511.setDEF("hanim_r_tarsometatarsal_2")
HAnimJoint511.setCenter([-0.08,0.0175,-0.0608])
HAnimJoint511.setUlimit([0,0,0])
HAnimJoint511.setLlimit([0,0,0])
HAnimSegment512 = x3d.HAnimSegment()
HAnimSegment512.setName("r_metatarsal_2")
HAnimSegment512.setDEF("hanim_r_metatarsal_2")
Transform513 = x3d.Transform()
Transform513.setTranslation([-0.08,0.0175,-0.0608])
Transform514 = x3d.Transform()
#Empty Transform
Shape515 = x3d.Shape()
Shape515.setUSE("HAnimJointShape")

Transform514.addChild(Shape515)

Transform513.addChildren(Transform514)

HAnimSegment512.addChildren(Transform513)
Shape516 = x3d.Shape()
LineSet517 = x3d.LineSet()
LineSet517.setVertexCount([2])
Coordinate518 = x3d.Coordinate()
Coordinate518.setPoint([-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004])

LineSet517.setCoord(Coordinate518)
#from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA519 = x3d.ColorRGBA()
ColorRGBA519.setUSE("HAnimSegmentLineColorRGBA")

LineSet517.setColor(ColorRGBA519)

Shape516.setGeometry(LineSet517)

HAnimSegment512.addChildren(Shape516)

HAnimJoint511.addChildren(HAnimSegment512)
HAnimJoint520 = x3d.HAnimJoint()
HAnimJoint520.setName("r_metatarsophalangeal_2")
HAnimJoint520.setDEF("hanim_r_metatarsophalangeal_2")
HAnimJoint520.setCenter([-0.0823,0.0064,-0.004])
HAnimJoint520.setUlimit([0,0,0])
HAnimJoint520.setLlimit([0,0,0])
HAnimSegment521 = x3d.HAnimSegment()
HAnimSegment521.setName("r_tarsal_proximal_phalanx_2")
HAnimSegment521.setDEF("hanim_r_tarsal_proximal_phalanx_2")
Transform522 = x3d.Transform()
Transform522.setTranslation([-0.0823,0.0064,-0.004])
Transform523 = x3d.Transform()
#Empty Transform
Shape524 = x3d.Shape()
Shape524.setUSE("HAnimJointShape")

Transform523.addChild(Shape524)

Transform522.addChildren(Transform523)

HAnimSegment521.addChildren(Transform522)
Shape525 = x3d.Shape()
LineSet526 = x3d.LineSet()
LineSet526.setVertexCount([2])
Coordinate527 = x3d.Coordinate()
Coordinate527.setPoint([-0.0823,0.0064,-0.004,-0.0841,0.0041,0.0121])

LineSet526.setCoord(Coordinate527)
#from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA528 = x3d.ColorRGBA()
ColorRGBA528.setUSE("HAnimSegmentLineColorRGBA")

LineSet526.setColor(ColorRGBA528)

Shape525.setGeometry(LineSet526)

HAnimSegment521.addChildren(Shape525)

HAnimJoint520.addChildren(HAnimSegment521)
HAnimJoint529 = x3d.HAnimJoint()
HAnimJoint529.setName("r_tarsal_proximal_interphalangeal_2")
HAnimJoint529.setDEF("hanim_r_tarsal_proximal_interphalangeal_2")
HAnimJoint529.setCenter([-0.0841,0.0041,0.0121])
HAnimJoint529.setUlimit([0,0,0])
HAnimJoint529.setLlimit([0,0,0])
HAnimSegment530 = x3d.HAnimSegment()
HAnimSegment530.setName("r_tarsal_middle_phalanx_2")
HAnimSegment530.setDEF("hanim_r_tarsal_middle_phalanx_2")
Transform531 = x3d.Transform()
Transform531.setTranslation([-0.0841,0.0041,0.0121])
Transform532 = x3d.Transform()
#Empty Transform
Shape533 = x3d.Shape()
Shape533.setUSE("HAnimJointShape")

Transform532.addChild(Shape533)

Transform531.addChildren(Transform532)

HAnimSegment530.addChildren(Transform531)
Shape534 = x3d.Shape()
LineSet535 = x3d.LineSet()
LineSet535.setVertexCount([2])
Coordinate536 = x3d.Coordinate()
Coordinate536.setPoint([-0.0841,0.0041,0.0121,-0.0841,0.0013,0.0216])

LineSet535.setCoord(Coordinate536)
#from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA537 = x3d.ColorRGBA()
ColorRGBA537.setUSE("HAnimSegmentLineColorRGBA")

LineSet535.setColor(ColorRGBA537)

Shape534.setGeometry(LineSet535)

HAnimSegment530.addChildren(Shape534)
HAnimSite538 = x3d.HAnimSite()
HAnimSite538.setName("r_tarsal_distal_phalanx_2_tip")
HAnimSite538.setDEF("hanim_r_tarsal_distal_phalanx_2_tip")
HAnimSite538.setTranslation([-0.0883,0.0134,0.1383])
TouchSensor539 = x3d.TouchSensor()
TouchSensor539.setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip")

HAnimSite538.addChildren(TouchSensor539)
Shape540 = x3d.Shape()
Shape540.setUSE("HAnimSiteShape")

HAnimSite538.addChildren(Shape540)

HAnimSegment530.addChildren(HAnimSite538)

HAnimJoint529.addChildren(HAnimSegment530)
HAnimJoint541 = x3d.HAnimJoint()
HAnimJoint541.setName("r_tarsal_distal_interphalangeal_2")
HAnimJoint541.setDEF("hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint541.setCenter([-0.0841,0.0013,0.0216])
HAnimJoint541.setUlimit([0,0,0])
HAnimJoint541.setLlimit([0,0,0])

HAnimJoint529.addChildren(HAnimJoint541)

HAnimJoint520.addChildren(HAnimJoint529)

HAnimJoint511.addChildren(HAnimJoint520)

HAnimJoint502.addChildren(HAnimJoint511)

HAnimJoint451.addChildren(HAnimJoint502)
HAnimJoint542 = x3d.HAnimJoint()
HAnimJoint542.setName("r_cuneonavicular_3")
HAnimJoint542.setDEF("hanim_r_cuneonavicular_3")
HAnimJoint542.setCenter([-0.0928,0.0248,-0.0821])
HAnimJoint542.setUlimit([0,0,0])
HAnimJoint542.setLlimit([0,0,0])
HAnimSegment543 = x3d.HAnimSegment()
HAnimSegment543.setName("r_cuneiform_3")
HAnimSegment543.setDEF("hanim_r_cuneiform_3")
Transform544 = x3d.Transform()
Transform544.setTranslation([-0.0928,0.0248,-0.0821])
Transform545 = x3d.Transform()
#Empty Transform
Shape546 = x3d.Shape()
Shape546.setUSE("HAnimJointShape")

Transform545.addChild(Shape546)

Transform544.addChildren(Transform545)

HAnimSegment543.addChildren(Transform544)
Shape547 = x3d.Shape()
LineSet548 = x3d.LineSet()
LineSet548.setVertexCount([2])
Coordinate549 = x3d.Coordinate()
Coordinate549.setPoint([-0.0928,0.0248,-0.0821,-0.0944,0.0175,-0.0625])

LineSet548.setCoord(Coordinate549)
#from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
ColorRGBA550 = x3d.ColorRGBA()
ColorRGBA550.setUSE("HAnimSegmentLineColorRGBA")

LineSet548.setColor(ColorRGBA550)

Shape547.setGeometry(LineSet548)

HAnimSegment543.addChildren(Shape547)

HAnimJoint542.addChildren(HAnimSegment543)
HAnimJoint551 = x3d.HAnimJoint()
HAnimJoint551.setName("r_tarsometatarsal_3")
HAnimJoint551.setDEF("hanim_r_tarsometatarsal_3")
HAnimJoint551.setCenter([-0.0944,0.0175,-0.0625])
HAnimJoint551.setUlimit([0,0,0])
HAnimJoint551.setLlimit([0,0,0])
HAnimSegment552 = x3d.HAnimSegment()
HAnimSegment552.setName("r_metatarsal_3")
HAnimSegment552.setDEF("hanim_r_metatarsal_3")
Transform553 = x3d.Transform()
Transform553.setTranslation([-0.0944,0.0175,-0.0625])
Transform554 = x3d.Transform()
#Empty Transform
Shape555 = x3d.Shape()
Shape555.setUSE("HAnimJointShape")

Transform554.addChild(Shape555)

Transform553.addChildren(Transform554)

HAnimSegment552.addChildren(Transform553)
Shape556 = x3d.Shape()
LineSet557 = x3d.LineSet()
LineSet557.setVertexCount([2])
Coordinate558 = x3d.Coordinate()
Coordinate558.setPoint([-0.0944,0.0175,-0.0625,-0.0963,0.0065,-0.0065])

LineSet557.setCoord(Coordinate558)
#from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2
ColorRGBA559 = x3d.ColorRGBA()
ColorRGBA559.setUSE("HAnimSegmentLineColorRGBA")

LineSet557.setColor(ColorRGBA559)

Shape556.setGeometry(LineSet557)

HAnimSegment552.addChildren(Shape556)

HAnimJoint551.addChildren(HAnimSegment552)
HAnimJoint560 = x3d.HAnimJoint()
HAnimJoint560.setName("r_metatarsophalangeal_3")
HAnimJoint560.setDEF("hanim_r_metatarsophalangeal_3")
HAnimJoint560.setCenter([-0.0963,0.0065,-0.0065])
HAnimJoint560.setUlimit([0,0,0])
HAnimJoint560.setLlimit([0,0,0])
HAnimSegment561 = x3d.HAnimSegment()
HAnimSegment561.setName("r_tarsal_proximal_phalanx_3")
HAnimSegment561.setDEF("hanim_r_tarsal_proximal_phalanx_3")
Transform562 = x3d.Transform()
Transform562.setTranslation([-0.0963,0.0065,-0.0065])
Transform563 = x3d.Transform()
#Empty Transform
Shape564 = x3d.Shape()
Shape564.setUSE("HAnimJointShape")

Transform563.addChild(Shape564)

Transform562.addChildren(Transform563)

HAnimSegment561.addChildren(Transform562)
Shape565 = x3d.Shape()
LineSet566 = x3d.LineSet()
LineSet566.setVertexCount([2])
Coordinate567 = x3d.Coordinate()
Coordinate567.setPoint([-0.0963,0.0065,-0.0065,-0.0987,0.0034,0.0086])

LineSet566.setCoord(Coordinate567)
#from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA568 = x3d.ColorRGBA()
ColorRGBA568.setUSE("HAnimSegmentLineColorRGBA")

LineSet566.setColor(ColorRGBA568)

Shape565.setGeometry(LineSet566)

HAnimSegment561.addChildren(Shape565)

HAnimJoint560.addChildren(HAnimSegment561)
HAnimJoint569 = x3d.HAnimJoint()
HAnimJoint569.setName("r_tarsal_proximal_interphalangeal_3")
HAnimJoint569.setDEF("hanim_r_tarsal_proximal_interphalangeal_3")
HAnimJoint569.setCenter([-0.0987,0.0034,0.0086])
HAnimJoint569.setUlimit([0,0,0])
HAnimJoint569.setLlimit([0,0,0])
HAnimSegment570 = x3d.HAnimSegment()
HAnimSegment570.setName("r_tarsal_middle_phalanx_3")
HAnimSegment570.setDEF("hanim_r_tarsal_middle_phalanx_3")
Transform571 = x3d.Transform()
Transform571.setTranslation([-0.0987,0.0034,0.0086])
Transform572 = x3d.Transform()
#Empty Transform
Shape573 = x3d.Shape()
Shape573.setUSE("HAnimJointShape")

Transform572.addChild(Shape573)

Transform571.addChildren(Transform572)

HAnimSegment570.addChildren(Transform571)
Shape574 = x3d.Shape()
LineSet575 = x3d.LineSet()
LineSet575.setVertexCount([2])
Coordinate576 = x3d.Coordinate()
Coordinate576.setPoint([-0.0987,0.0034,0.0086,-0.1002,0.0013,0.0178])

LineSet575.setCoord(Coordinate576)
#from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA577 = x3d.ColorRGBA()
ColorRGBA577.setUSE("HAnimSegmentLineColorRGBA")

LineSet575.setColor(ColorRGBA577)

Shape574.setGeometry(LineSet575)

HAnimSegment570.addChildren(Shape574)
HAnimSite578 = x3d.HAnimSite()
HAnimSite578.setName("r_tarsal_distal_phalanx_3_tip")
HAnimSite578.setDEF("hanim_r_tarsal_distal_phalanx_3_tip")
TouchSensor579 = x3d.TouchSensor()
TouchSensor579.setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip")

HAnimSite578.addChildren(TouchSensor579)
Shape580 = x3d.Shape()
Shape580.setUSE("HAnimSiteShape")

HAnimSite578.addChildren(Shape580)

HAnimSegment570.addChildren(HAnimSite578)

HAnimJoint569.addChildren(HAnimSegment570)
HAnimJoint581 = x3d.HAnimJoint()
HAnimJoint581.setName("r_tarsal_distal_interphalangeal_3")
HAnimJoint581.setDEF("hanim_r_tarsal_distal_interphalangeal_3")
HAnimJoint581.setCenter([-0.1002,0.0013,0.0178])
HAnimJoint581.setUlimit([0,0,0])
HAnimJoint581.setLlimit([0,0,0])

HAnimJoint569.addChildren(HAnimJoint581)

HAnimJoint560.addChildren(HAnimJoint569)

HAnimJoint551.addChildren(HAnimJoint560)

HAnimJoint542.addChildren(HAnimJoint551)

HAnimJoint451.addChildren(HAnimJoint542)

HAnimJoint438.addChildren(HAnimJoint451)
HAnimJoint582 = x3d.HAnimJoint()
HAnimJoint582.setName("r_calcaneocuboid")
HAnimJoint582.setDEF("hanim_r_calcaneocuboid")
HAnimJoint582.setCenter([-0.0889,0.0494,-0.1278])
HAnimJoint582.setUlimit([0,0,0])
HAnimJoint582.setLlimit([0,0,0])
HAnimSegment583 = x3d.HAnimSegment()
HAnimSegment583.setName("r_calcaneus")
HAnimSegment583.setDEF("hanim_r_calcaneus")
Transform584 = x3d.Transform()
Transform584.setTranslation([-0.0889,0.0494,-0.1278])
Transform585 = x3d.Transform()
#Empty Transform
Shape586 = x3d.Shape()
Shape586.setUSE("HAnimJointShape")

Transform585.addChild(Shape586)

Transform584.addChildren(Transform585)

HAnimSegment583.addChildren(Transform584)
Shape587 = x3d.Shape()
LineSet588 = x3d.LineSet()
LineSet588.setVertexCount([2])
Coordinate589 = x3d.Coordinate()
Coordinate589.setPoint([-0.0889,0.0494,-0.1278,-0.1105,0.0267,-0.0998])

LineSet588.setCoord(Coordinate589)
#from r_calcaneocuboid to r_transversetarsal vertices 2
ColorRGBA590 = x3d.ColorRGBA()
ColorRGBA590.setUSE("HAnimSegmentLineColorRGBA")

LineSet588.setColor(ColorRGBA590)

Shape587.setGeometry(LineSet588)

HAnimSegment583.addChildren(Shape587)

HAnimJoint582.addChildren(HAnimSegment583)
HAnimJoint591 = x3d.HAnimJoint()
HAnimJoint591.setName("r_transversetarsal")
HAnimJoint591.setDEF("hanim_r_transversetarsal")
HAnimJoint591.setCenter([-0.1105,0.0267,-0.0998])
HAnimJoint591.setUlimit([0,0,0])
HAnimJoint591.setLlimit([0,0,0])
HAnimSegment592 = x3d.HAnimSegment()
HAnimSegment592.setName("r_cuboid")
HAnimSegment592.setDEF("hanim_r_cuboid")
Transform593 = x3d.Transform()
Transform593.setTranslation([-0.1105,0.0267,-0.0998])
Transform594 = x3d.Transform()
#Empty Transform
Shape595 = x3d.Shape()
Shape595.setUSE("HAnimJointShape")

Transform594.addChild(Shape595)

Transform593.addChildren(Transform594)

HAnimSegment592.addChildren(Transform593)
Shape596 = x3d.Shape()
LineSet597 = x3d.LineSet()
LineSet597.setVertexCount([2])
Coordinate598 = x3d.Coordinate()
Coordinate598.setPoint([-0.1105,0.0267,-0.0998,-0.1063,0.016,-0.0634])

LineSet597.setCoord(Coordinate598)
#from r_transversetarsal to r_tarsometatarsal_4 vertices 2
ColorRGBA599 = x3d.ColorRGBA()
ColorRGBA599.setUSE("HAnimSegmentLineColorRGBA")

LineSet597.setColor(ColorRGBA599)

Shape596.setGeometry(LineSet597)

HAnimSegment592.addChildren(Shape596)
Shape600 = x3d.Shape()
LineSet601 = x3d.LineSet()
LineSet601.setVertexCount([2])
Coordinate602 = x3d.Coordinate()
Coordinate602.setPoint([-0.1105,0.0267,-0.0998,-0.1206,0.0124,-0.0671])

LineSet601.setCoord(Coordinate602)
#from r_transversetarsal to r_tarsometatarsal_5 vertices 2
ColorRGBA603 = x3d.ColorRGBA()
ColorRGBA603.setUSE("HAnimSegmentLineColorRGBA")

LineSet601.setColor(ColorRGBA603)

Shape600.setGeometry(LineSet601)

HAnimSegment592.addChildren(Shape600)

HAnimJoint591.addChildren(HAnimSegment592)
HAnimJoint604 = x3d.HAnimJoint()
HAnimJoint604.setName("r_tarsometatarsal_4")
HAnimJoint604.setDEF("hanim_r_tarsometatarsal_4")
HAnimJoint604.setCenter([-0.1063,0.016,-0.0634])
HAnimJoint604.setUlimit([0,0,0])
HAnimJoint604.setLlimit([0,0,0])
HAnimSegment605 = x3d.HAnimSegment()
HAnimSegment605.setName("r_metatarsal_4")
HAnimSegment605.setDEF("hanim_r_metatarsal_4")
Transform606 = x3d.Transform()
Transform606.setTranslation([-0.1063,0.016,-0.0634])
Transform607 = x3d.Transform()
#Empty Transform
Shape608 = x3d.Shape()
Shape608.setUSE("HAnimJointShape")

Transform607.addChild(Shape608)

Transform606.addChildren(Transform607)

HAnimSegment605.addChildren(Transform606)
Shape609 = x3d.Shape()
LineSet610 = x3d.LineSet()
LineSet610.setVertexCount([2])
Coordinate611 = x3d.Coordinate()
Coordinate611.setPoint([-0.1063,0.016,-0.0634,-0.1097,0.0058,-0.0107])

LineSet610.setCoord(Coordinate611)
#from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
ColorRGBA612 = x3d.ColorRGBA()
ColorRGBA612.setUSE("HAnimSegmentLineColorRGBA")

LineSet610.setColor(ColorRGBA612)

Shape609.setGeometry(LineSet610)

HAnimSegment605.addChildren(Shape609)

HAnimJoint604.addChildren(HAnimSegment605)
HAnimJoint613 = x3d.HAnimJoint()
HAnimJoint613.setName("r_metatarsophalangeal_4")
HAnimJoint613.setDEF("hanim_r_metatarsophalangeal_4")
HAnimJoint613.setCenter([-0.1097,0.0058,-0.0107])
HAnimJoint613.setUlimit([0,0,0])
HAnimJoint613.setLlimit([0,0,0])
HAnimSegment614 = x3d.HAnimSegment()
HAnimSegment614.setName("r_tarsal_proximal_phalanx_4")
HAnimSegment614.setDEF("hanim_r_tarsal_proximal_phalanx_4")
Transform615 = x3d.Transform()
Transform615.setTranslation([-0.1097,0.0058,-0.0107])
Transform616 = x3d.Transform()
#Empty Transform
Shape617 = x3d.Shape()
Shape617.setUSE("HAnimJointShape")

Transform616.addChild(Shape617)

Transform615.addChildren(Transform616)

HAnimSegment614.addChildren(Transform615)
Shape618 = x3d.Shape()
LineSet619 = x3d.LineSet()
LineSet619.setVertexCount([2])
Coordinate620 = x3d.Coordinate()
Coordinate620.setPoint([-0.1097,0.0058,-0.0107,-0.114,0.0037,0.0044])

LineSet619.setCoord(Coordinate620)
#from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA621 = x3d.ColorRGBA()
ColorRGBA621.setUSE("HAnimSegmentLineColorRGBA")

LineSet619.setColor(ColorRGBA621)

Shape618.setGeometry(LineSet619)

HAnimSegment614.addChildren(Shape618)

HAnimJoint613.addChildren(HAnimSegment614)
HAnimJoint622 = x3d.HAnimJoint()
HAnimJoint622.setName("r_tarsal_proximal_interphalangeal_4")
HAnimJoint622.setDEF("hanim_r_tarsal_proximal_interphalangeal_4")
HAnimJoint622.setCenter([-0.114,0.0037,0.0044])
HAnimJoint622.setUlimit([0,0,0])
HAnimJoint622.setLlimit([0,0,0])
HAnimSegment623 = x3d.HAnimSegment()
HAnimSegment623.setName("r_tarsal_middle_phalanx_4")
HAnimSegment623.setDEF("hanim_r_tarsal_middle_phalanx_4")
Transform624 = x3d.Transform()
Transform624.setTranslation([-0.114,0.0037,0.0044])
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
Coordinate629.setPoint([-0.114,0.0037,0.0044,-0.1155,0.0008,0.0118])

LineSet628.setCoord(Coordinate629)
#from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA630 = x3d.ColorRGBA()
ColorRGBA630.setUSE("HAnimSegmentLineColorRGBA")

LineSet628.setColor(ColorRGBA630)

Shape627.setGeometry(LineSet628)

HAnimSegment623.addChildren(Shape627)
HAnimSite631 = x3d.HAnimSite()
HAnimSite631.setName("r_tarsal_distal_phalanx_4_tip")
HAnimSite631.setDEF("hanim_r_tarsal_distal_phalanx_4_tip")
TouchSensor632 = x3d.TouchSensor()
TouchSensor632.setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip")

HAnimSite631.addChildren(TouchSensor632)
Shape633 = x3d.Shape()
Shape633.setUSE("HAnimSiteShape")

HAnimSite631.addChildren(Shape633)

HAnimSegment623.addChildren(HAnimSite631)

HAnimJoint622.addChildren(HAnimSegment623)
HAnimJoint634 = x3d.HAnimJoint()
HAnimJoint634.setName("r_tarsal_distal_interphalangeal_4")
HAnimJoint634.setDEF("hanim_r_tarsal_distal_interphalangeal_4")
HAnimJoint634.setCenter([-0.1155,0.0008,0.0118])
HAnimJoint634.setUlimit([0,0,0])
HAnimJoint634.setLlimit([0,0,0])

HAnimJoint622.addChildren(HAnimJoint634)

HAnimJoint613.addChildren(HAnimJoint622)

HAnimJoint604.addChildren(HAnimJoint613)

HAnimJoint591.addChildren(HAnimJoint604)
HAnimJoint635 = x3d.HAnimJoint()
HAnimJoint635.setName("r_tarsometatarsal_5")
HAnimJoint635.setDEF("hanim_r_tarsometatarsal_5")
HAnimJoint635.setCenter([-0.1206,0.0124,-0.0671])
HAnimJoint635.setUlimit([0,0,0])
HAnimJoint635.setLlimit([0,0,0])
HAnimSegment636 = x3d.HAnimSegment()
HAnimSegment636.setName("r_metatarsal_5")
HAnimSegment636.setDEF("hanim_r_metatarsal_5")
Transform637 = x3d.Transform()
Transform637.setTranslation([-0.1206,0.0124,-0.0671])
Transform638 = x3d.Transform()
#Empty Transform
Shape639 = x3d.Shape()
Shape639.setUSE("HAnimJointShape")

Transform638.addChild(Shape639)

Transform637.addChildren(Transform638)

HAnimSegment636.addChildren(Transform637)
Shape640 = x3d.Shape()
LineSet641 = x3d.LineSet()
LineSet641.setVertexCount([2])
Coordinate642 = x3d.Coordinate()
Coordinate642.setPoint([-0.1206,0.0124,-0.0671,-0.1239,0.0051,-0.0153])

LineSet641.setCoord(Coordinate642)
#from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
ColorRGBA643 = x3d.ColorRGBA()
ColorRGBA643.setUSE("HAnimSegmentLineColorRGBA")

LineSet641.setColor(ColorRGBA643)

Shape640.setGeometry(LineSet641)

HAnimSegment636.addChildren(Shape640)
HAnimSite644 = x3d.HAnimSite()
HAnimSite644.setName("r_metatarsal_phalanx_5")
HAnimSite644.setDEF("hanim_r_metatarsal_phalanx_5")
TouchSensor645 = x3d.TouchSensor()
TouchSensor645.setDescription("HAnimSite r_metatarsal_phalanx_5")

HAnimSite644.addChildren(TouchSensor645)
Shape646 = x3d.Shape()
Shape646.setUSE("HAnimSiteShape")

HAnimSite644.addChildren(Shape646)

HAnimSegment636.addChildren(HAnimSite644)

HAnimJoint635.addChildren(HAnimSegment636)
HAnimJoint647 = x3d.HAnimJoint()
HAnimJoint647.setName("r_metatarsophalangeal_5")
HAnimJoint647.setDEF("hanim_r_metatarsophalangeal_5")
HAnimJoint647.setCenter([-0.1239,0.0051,-0.0153])
HAnimJoint647.setUlimit([0,0,0])
HAnimJoint647.setLlimit([0,0,0])
HAnimSegment648 = x3d.HAnimSegment()
HAnimSegment648.setName("r_tarsal_proximal_phalanx_5")
HAnimSegment648.setDEF("hanim_r_tarsal_proximal_phalanx_5")
Transform649 = x3d.Transform()
Transform649.setTranslation([-0.1239,0.0051,-0.0153])
Transform650 = x3d.Transform()
#Empty Transform
Shape651 = x3d.Shape()
Shape651.setUSE("HAnimJointShape")

Transform650.addChild(Shape651)

Transform649.addChildren(Transform650)

HAnimSegment648.addChildren(Transform649)
Shape652 = x3d.Shape()
LineSet653 = x3d.LineSet()
LineSet653.setVertexCount([2])
Coordinate654 = x3d.Coordinate()
Coordinate654.setPoint([-0.1239,0.0051,-0.0153,-0.1262,0.0023,-0.0077])

LineSet653.setCoord(Coordinate654)
#from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA655 = x3d.ColorRGBA()
ColorRGBA655.setUSE("HAnimSegmentLineColorRGBA")

LineSet653.setColor(ColorRGBA655)

Shape652.setGeometry(LineSet653)

HAnimSegment648.addChildren(Shape652)

HAnimJoint647.addChildren(HAnimSegment648)
HAnimJoint656 = x3d.HAnimJoint()
HAnimJoint656.setName("r_tarsal_proximal_interphalangeal_5")
HAnimJoint656.setDEF("hanim_r_tarsal_proximal_interphalangeal_5")
HAnimJoint656.setCenter([-0.1262,0.0023,-0.0077])
HAnimJoint656.setUlimit([0,0,0])
HAnimJoint656.setLlimit([0,0,0])
HAnimSegment657 = x3d.HAnimSegment()
HAnimSegment657.setName("r_tarsal_middle_phalanx_5")
HAnimSegment657.setDEF("hanim_r_tarsal_middle_phalanx_5")
Transform658 = x3d.Transform()
Transform658.setTranslation([-0.1262,0.0023,-0.0077])
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
Coordinate663.setPoint([-0.1262,0.0023,-0.0077,-0.1271,0,0])

LineSet662.setCoord(Coordinate663)
#from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA664 = x3d.ColorRGBA()
ColorRGBA664.setUSE("HAnimSegmentLineColorRGBA")

LineSet662.setColor(ColorRGBA664)

Shape661.setGeometry(LineSet662)

HAnimSegment657.addChildren(Shape661)
HAnimSite665 = x3d.HAnimSite()
HAnimSite665.setName("r_tarsal_distal_phalanx_5_tip")
HAnimSite665.setDEF("hanim_r_tarsal_distal_phalanx_5_tip")
TouchSensor666 = x3d.TouchSensor()
TouchSensor666.setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip")

HAnimSite665.addChildren(TouchSensor666)
Shape667 = x3d.Shape()
Shape667.setUSE("HAnimSiteShape")

HAnimSite665.addChildren(Shape667)

HAnimSegment657.addChildren(HAnimSite665)

HAnimJoint656.addChildren(HAnimSegment657)
HAnimJoint668 = x3d.HAnimJoint()
HAnimJoint668.setName("r_tarsal_distal_interphalangeal_5")
HAnimJoint668.setDEF("hanim_r_tarsal_distal_interphalangeal_5")
HAnimJoint668.setCenter([-0.1271,0,0])
HAnimJoint668.setUlimit([0,0,0])
HAnimJoint668.setLlimit([0,0,0])

HAnimJoint656.addChildren(HAnimJoint668)

HAnimJoint647.addChildren(HAnimJoint656)

HAnimJoint635.addChildren(HAnimJoint647)

HAnimJoint591.addChildren(HAnimJoint635)

HAnimJoint582.addChildren(HAnimJoint591)

HAnimJoint438.addChildren(HAnimJoint582)

HAnimJoint423.addChildren(HAnimJoint438)

HAnimJoint405.addChildren(HAnimJoint423)

HAnimJoint104.addChildren(HAnimJoint405)

HAnimJoint52.addChildren(HAnimJoint104)
HAnimJoint669 = x3d.HAnimJoint()
HAnimJoint669.setName("vl5")
HAnimJoint669.setDEF("hanim_vl5")
HAnimJoint669.setCenter([0.0028,1.0568,-0.0776])
HAnimJoint669.setUlimit([0,0,0])
HAnimJoint669.setLlimit([0,0,0])
HAnimSegment670 = x3d.HAnimSegment()
HAnimSegment670.setName("l5")
HAnimSegment670.setDEF("hanim_l5")
Transform671 = x3d.Transform()
Transform671.setTranslation([0.0028,1.0568,-0.0776])
Transform672 = x3d.Transform()
#Empty Transform
Shape673 = x3d.Shape()
Shape673.setUSE("HAnimJointShape")

Transform672.addChild(Shape673)

Transform671.addChildren(Transform672)

HAnimSegment670.addChildren(Transform671)
Shape674 = x3d.Shape()
LineSet675 = x3d.LineSet()
LineSet675.setVertexCount([2])
Coordinate676 = x3d.Coordinate()
Coordinate676.setPoint([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787])

LineSet675.setCoord(Coordinate676)
#from vl5 to vl4 vertices 2
ColorRGBA677 = x3d.ColorRGBA()
ColorRGBA677.setUSE("HAnimSegmentLineColorRGBA")

LineSet675.setColor(ColorRGBA677)

Shape674.setGeometry(LineSet675)

HAnimSegment670.addChildren(Shape674)

HAnimJoint669.addChildren(HAnimSegment670)
HAnimJoint678 = x3d.HAnimJoint()
HAnimJoint678.setName("vl4")
HAnimJoint678.setDEF("hanim_vl4")
HAnimJoint678.setCenter([0.0035,1.0925,-0.0787])
HAnimJoint678.setUlimit([0,0,0])
HAnimJoint678.setLlimit([0,0,0])
HAnimSegment679 = x3d.HAnimSegment()
HAnimSegment679.setName("l4")
HAnimSegment679.setDEF("hanim_l4")
Transform680 = x3d.Transform()
Transform680.setTranslation([0.0035,1.0925,-0.0787])
Transform681 = x3d.Transform()
#Empty Transform
Shape682 = x3d.Shape()
Shape682.setUSE("HAnimJointShape")

Transform681.addChild(Shape682)

Transform680.addChildren(Transform681)

HAnimSegment679.addChildren(Transform680)
Shape683 = x3d.Shape()
LineSet684 = x3d.LineSet()
LineSet684.setVertexCount([2])
Coordinate685 = x3d.Coordinate()
Coordinate685.setPoint([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796])

LineSet684.setCoord(Coordinate685)
#from vl4 to vl3 vertices 2
ColorRGBA686 = x3d.ColorRGBA()
ColorRGBA686.setUSE("HAnimSegmentLineColorRGBA")

LineSet684.setColor(ColorRGBA686)

Shape683.setGeometry(LineSet684)

HAnimSegment679.addChildren(Shape683)

HAnimJoint678.addChildren(HAnimSegment679)
HAnimJoint687 = x3d.HAnimJoint()
HAnimJoint687.setName("vl3")
HAnimJoint687.setDEF("hanim_vl3")
HAnimJoint687.setCenter([0.0041,1.1276,-0.0796])
HAnimJoint687.setUlimit([0,0,0])
HAnimJoint687.setLlimit([0,0,0])
HAnimSegment688 = x3d.HAnimSegment()
HAnimSegment688.setName("l3")
HAnimSegment688.setDEF("hanim_l3")
Transform689 = x3d.Transform()
Transform689.setTranslation([0.0041,1.1276,-0.0796])
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
Coordinate694.setPoint([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08])

LineSet693.setCoord(Coordinate694)
#from vl3 to vl2 vertices 2
ColorRGBA695 = x3d.ColorRGBA()
ColorRGBA695.setUSE("HAnimSegmentLineColorRGBA")

LineSet693.setColor(ColorRGBA695)

Shape692.setGeometry(LineSet693)

HAnimSegment688.addChildren(Shape692)
HAnimSite696 = x3d.HAnimSite()
HAnimSite696.setName("l_rib10")
HAnimSite696.setDEF("hanim_l_rib10")
HAnimSite696.setTranslation([0.0871,1.1925,0.0992])
TouchSensor697 = x3d.TouchSensor()
TouchSensor697.setDescription("HAnimSite l_rib10")

HAnimSite696.addChildren(TouchSensor697)
Shape698 = x3d.Shape()
Shape698.setUSE("HAnimSiteShape")

HAnimSite696.addChildren(Shape698)

HAnimSegment688.addChildren(HAnimSite696)
HAnimSite699 = x3d.HAnimSite()
HAnimSite699.setName("r_rib10")
HAnimSite699.setDEF("hanim_r_rib10")
HAnimSite699.setTranslation([-0.0711,1.1941,0.1016])
TouchSensor700 = x3d.TouchSensor()
TouchSensor700.setDescription("HAnimSite r_rib10")

HAnimSite699.addChildren(TouchSensor700)
Shape701 = x3d.Shape()
Shape701.setUSE("HAnimSiteShape")

HAnimSite699.addChildren(Shape701)

HAnimSegment688.addChildren(HAnimSite699)
HAnimSite702 = x3d.HAnimSite()
HAnimSite702.setName("spine_2_middle_back")
HAnimSite702.setDEF("hanim_spine_2_middle_back")
TouchSensor703 = x3d.TouchSensor()
TouchSensor703.setDescription("HAnimSite spine_2_middle_back")

HAnimSite702.addChildren(TouchSensor703)
Shape704 = x3d.Shape()
Shape704.setUSE("HAnimSiteShape")

HAnimSite702.addChildren(Shape704)

HAnimSegment688.addChildren(HAnimSite702)

HAnimJoint687.addChildren(HAnimSegment688)
HAnimJoint705 = x3d.HAnimJoint()
HAnimJoint705.setName("vl2")
HAnimJoint705.setDEF("hanim_vl2")
HAnimJoint705.setCenter([0.0045,1.1546,-0.08])
HAnimJoint705.setUlimit([0,0,0])
HAnimJoint705.setLlimit([0,0,0])
HAnimSegment706 = x3d.HAnimSegment()
HAnimSegment706.setName("l2")
HAnimSegment706.setDEF("hanim_l2")
Transform707 = x3d.Transform()
Transform707.setTranslation([0.0045,1.1546,-0.08])
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
Coordinate712.setPoint([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805])

LineSet711.setCoord(Coordinate712)
#from vl2 to vl1 vertices 2
ColorRGBA713 = x3d.ColorRGBA()
ColorRGBA713.setUSE("HAnimSegmentLineColorRGBA")

LineSet711.setColor(ColorRGBA713)

Shape710.setGeometry(LineSet711)

HAnimSegment706.addChildren(Shape710)

HAnimJoint705.addChildren(HAnimSegment706)
HAnimJoint714 = x3d.HAnimJoint()
HAnimJoint714.setName("vl1")
HAnimJoint714.setDEF("hanim_vl1")
HAnimJoint714.setCenter([0.0048,1.1912,-0.0805])
HAnimJoint714.setUlimit([0,0,0])
HAnimJoint714.setLlimit([0,0,0])
HAnimSegment715 = x3d.HAnimSegment()
HAnimSegment715.setName("l1")
HAnimSegment715.setDEF("hanim_l1")
Transform716 = x3d.Transform()
Transform716.setTranslation([0.0048,1.1912,-0.0805])
Transform717 = x3d.Transform()
#Empty Transform
Shape718 = x3d.Shape()
Shape718.setUSE("HAnimJointShape")

Transform717.addChild(Shape718)

Transform716.addChildren(Transform717)

HAnimSegment715.addChildren(Transform716)
Shape719 = x3d.Shape()
LineSet720 = x3d.LineSet()
LineSet720.setVertexCount([2])
Coordinate721 = x3d.Coordinate()
Coordinate721.setPoint([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808])

LineSet720.setCoord(Coordinate721)
#from vl1 to vt12 vertices 2
ColorRGBA722 = x3d.ColorRGBA()
ColorRGBA722.setUSE("HAnimSegmentLineColorRGBA")

LineSet720.setColor(ColorRGBA722)

Shape719.setGeometry(LineSet720)

HAnimSegment715.addChildren(Shape719)

HAnimJoint714.addChildren(HAnimSegment715)
HAnimJoint723 = x3d.HAnimJoint()
HAnimJoint723.setName("vt12")
HAnimJoint723.setDEF("hanim_vt12")
HAnimJoint723.setCenter([0.0051,1.2278,-0.0808])
HAnimJoint723.setUlimit([0,0,0])
HAnimJoint723.setLlimit([0,0,0])
HAnimSegment724 = x3d.HAnimSegment()
HAnimSegment724.setName("t12")
HAnimSegment724.setDEF("hanim_t12")
Transform725 = x3d.Transform()
Transform725.setTranslation([0.0051,1.2278,-0.0808])
Transform726 = x3d.Transform()
#Empty Transform
Shape727 = x3d.Shape()
Shape727.setUSE("HAnimJointShape")

Transform726.addChild(Shape727)

Transform725.addChildren(Transform726)

HAnimSegment724.addChildren(Transform725)
Shape728 = x3d.Shape()
LineSet729 = x3d.LineSet()
LineSet729.setVertexCount([2])
Coordinate730 = x3d.Coordinate()
Coordinate730.setPoint([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081])

LineSet729.setCoord(Coordinate730)
#from vt12 to vt11 vertices 2
ColorRGBA731 = x3d.ColorRGBA()
ColorRGBA731.setUSE("HAnimSegmentLineColorRGBA")

LineSet729.setColor(ColorRGBA731)

Shape728.setGeometry(LineSet729)

HAnimSegment724.addChildren(Shape728)

HAnimJoint723.addChildren(HAnimSegment724)
HAnimJoint732 = x3d.HAnimJoint()
HAnimJoint732.setName("vt11")
HAnimJoint732.setDEF("hanim_vt11")
HAnimJoint732.setCenter([0.0053,1.2679,-0.081])
HAnimJoint732.setUlimit([0,0,0])
HAnimJoint732.setLlimit([0,0,0])
HAnimSegment733 = x3d.HAnimSegment()
HAnimSegment733.setName("t11")
HAnimSegment733.setDEF("hanim_t11")
Transform734 = x3d.Transform()
Transform734.setTranslation([0.0053,1.2679,-0.081])
Transform735 = x3d.Transform()
#Empty Transform
Shape736 = x3d.Shape()
Shape736.setUSE("HAnimJointShape")

Transform735.addChild(Shape736)

Transform734.addChildren(Transform735)

HAnimSegment733.addChildren(Transform734)
Shape737 = x3d.Shape()
LineSet738 = x3d.LineSet()
LineSet738.setVertexCount([2])
Coordinate739 = x3d.Coordinate()
Coordinate739.setPoint([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822])

LineSet738.setCoord(Coordinate739)
#from vt11 to vt10 vertices 2
ColorRGBA740 = x3d.ColorRGBA()
ColorRGBA740.setUSE("HAnimSegmentLineColorRGBA")

LineSet738.setColor(ColorRGBA740)

Shape737.setGeometry(LineSet738)

HAnimSegment733.addChildren(Shape737)
HAnimSite741 = x3d.HAnimSite()
HAnimSite741.setName("substernale")
HAnimSite741.setDEF("hanim_substernale")
HAnimSite741.setTranslation([0.0085,1.2995,0.1147])
TouchSensor742 = x3d.TouchSensor()
TouchSensor742.setDescription("HAnimSite substernale")

HAnimSite741.addChildren(TouchSensor742)
Shape743 = x3d.Shape()
Shape743.setUSE("HAnimSiteShape")

HAnimSite741.addChildren(Shape743)

HAnimSegment733.addChildren(HAnimSite741)

HAnimJoint732.addChildren(HAnimSegment733)
HAnimJoint744 = x3d.HAnimJoint()
HAnimJoint744.setName("vt10")
HAnimJoint744.setDEF("hanim_vt10")
HAnimJoint744.setCenter([0.0056,1.2848,-0.0822])
HAnimJoint744.setUlimit([0,0,0])
HAnimJoint744.setLlimit([0,0,0])
HAnimSegment745 = x3d.HAnimSegment()
HAnimSegment745.setName("t10")
HAnimSegment745.setDEF("hanim_t10")
Transform746 = x3d.Transform()
Transform746.setTranslation([0.0056,1.2848,-0.0822])
Transform747 = x3d.Transform()
#Empty Transform
Shape748 = x3d.Shape()
Shape748.setUSE("HAnimJointShape")

Transform747.addChild(Shape748)

Transform746.addChildren(Transform747)

HAnimSegment745.addChildren(Transform746)
Shape749 = x3d.Shape()
LineSet750 = x3d.LineSet()
LineSet750.setVertexCount([2])
Coordinate751 = x3d.Coordinate()
Coordinate751.setPoint([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838])

LineSet750.setCoord(Coordinate751)
#from vt10 to vt9 vertices 2
ColorRGBA752 = x3d.ColorRGBA()
ColorRGBA752.setUSE("HAnimSegmentLineColorRGBA")

LineSet750.setColor(ColorRGBA752)

Shape749.setGeometry(LineSet750)

HAnimSegment745.addChildren(Shape749)
HAnimSite753 = x3d.HAnimSite()
HAnimSite753.setName("l_thelion")
HAnimSite753.setDEF("hanim_l_thelion")
HAnimSite753.setTranslation([0.0918,1.3382,0.1192])
TouchSensor754 = x3d.TouchSensor()
TouchSensor754.setDescription("HAnimSite l_thelion")

HAnimSite753.addChildren(TouchSensor754)
Shape755 = x3d.Shape()
Shape755.setUSE("HAnimSiteShape")

HAnimSite753.addChildren(Shape755)

HAnimSegment745.addChildren(HAnimSite753)
HAnimSite756 = x3d.HAnimSite()
HAnimSite756.setName("r_thelion")
HAnimSite756.setDEF("hanim_r_thelion")
HAnimSite756.setTranslation([-0.0736,1.3385,0.1217])
TouchSensor757 = x3d.TouchSensor()
TouchSensor757.setDescription("HAnimSite r_thelion")

HAnimSite756.addChildren(TouchSensor757)
Shape758 = x3d.Shape()
Shape758.setUSE("HAnimSiteShape")

HAnimSite756.addChildren(Shape758)

HAnimSegment745.addChildren(HAnimSite756)

HAnimJoint744.addChildren(HAnimSegment745)
HAnimJoint759 = x3d.HAnimJoint()
HAnimJoint759.setName("vt9")
HAnimJoint759.setDEF("hanim_vt9")
HAnimJoint759.setCenter([0.0057,1.3126,-0.0838])
HAnimJoint759.setUlimit([0,0,0])
HAnimJoint759.setLlimit([0,0,0])
HAnimSegment760 = x3d.HAnimSegment()
HAnimSegment760.setName("t9")
HAnimSegment760.setDEF("hanim_t9")
Transform761 = x3d.Transform()
Transform761.setTranslation([0.0057,1.3126,-0.0838])
Transform762 = x3d.Transform()
#Empty Transform
Shape763 = x3d.Shape()
Shape763.setUSE("HAnimJointShape")

Transform762.addChild(Shape763)

Transform761.addChildren(Transform762)

HAnimSegment760.addChildren(Transform761)
Shape764 = x3d.Shape()
LineSet765 = x3d.LineSet()
LineSet765.setVertexCount([2])
Coordinate766 = x3d.Coordinate()
Coordinate766.setPoint([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845])

LineSet765.setCoord(Coordinate766)
#from vt9 to vt8 vertices 2
ColorRGBA767 = x3d.ColorRGBA()
ColorRGBA767.setUSE("HAnimSegmentLineColorRGBA")

LineSet765.setColor(ColorRGBA767)

Shape764.setGeometry(LineSet765)

HAnimSegment760.addChildren(Shape764)

HAnimJoint759.addChildren(HAnimSegment760)
HAnimJoint768 = x3d.HAnimJoint()
HAnimJoint768.setName("vt8")
HAnimJoint768.setDEF("hanim_vt8")
HAnimJoint768.setCenter([0.0057,1.3382,-0.0845])
HAnimJoint768.setUlimit([0,0,0])
HAnimJoint768.setLlimit([0,0,0])
HAnimSegment769 = x3d.HAnimSegment()
HAnimSegment769.setName("t8")
HAnimSegment769.setDEF("hanim_t8")
Transform770 = x3d.Transform()
Transform770.setTranslation([0.0057,1.3382,-0.0845])
Transform771 = x3d.Transform()
#Empty Transform
Shape772 = x3d.Shape()
Shape772.setUSE("HAnimJointShape")

Transform771.addChild(Shape772)

Transform770.addChildren(Transform771)

HAnimSegment769.addChildren(Transform770)
Shape773 = x3d.Shape()
LineSet774 = x3d.LineSet()
LineSet774.setVertexCount([2])
Coordinate775 = x3d.Coordinate()
Coordinate775.setPoint([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833])

LineSet774.setCoord(Coordinate775)
#from vt8 to vt7 vertices 2
ColorRGBA776 = x3d.ColorRGBA()
ColorRGBA776.setUSE("HAnimSegmentLineColorRGBA")

LineSet774.setColor(ColorRGBA776)

Shape773.setGeometry(LineSet774)

HAnimSegment769.addChildren(Shape773)

HAnimJoint768.addChildren(HAnimSegment769)
HAnimJoint777 = x3d.HAnimJoint()
HAnimJoint777.setName("vt7")
HAnimJoint777.setDEF("hanim_vt7")
HAnimJoint777.setCenter([0.0058,1.3625,-0.0833])
HAnimJoint777.setUlimit([0,0,0])
HAnimJoint777.setLlimit([0,0,0])
HAnimSegment778 = x3d.HAnimSegment()
HAnimSegment778.setName("t7")
HAnimSegment778.setDEF("hanim_t7")
Transform779 = x3d.Transform()
Transform779.setTranslation([0.0058,1.3625,-0.0833])
Transform780 = x3d.Transform()
#Empty Transform
Shape781 = x3d.Shape()
Shape781.setUSE("HAnimJointShape")

Transform780.addChild(Shape781)

Transform779.addChildren(Transform780)

HAnimSegment778.addChildren(Transform779)
Shape782 = x3d.Shape()
LineSet783 = x3d.LineSet()
LineSet783.setVertexCount([2])
Coordinate784 = x3d.Coordinate()
Coordinate784.setPoint([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08])

LineSet783.setCoord(Coordinate784)
#from vt7 to vt6 vertices 2
ColorRGBA785 = x3d.ColorRGBA()
ColorRGBA785.setUSE("HAnimSegmentLineColorRGBA")

LineSet783.setColor(ColorRGBA785)

Shape782.setGeometry(LineSet783)

HAnimSegment778.addChildren(Shape782)
HAnimSite786 = x3d.HAnimSite()
HAnimSite786.setName("l_chest_midsagittal_plane")
HAnimSite786.setDEF("hanim_l_chest_midsagittal_plane")
TouchSensor787 = x3d.TouchSensor()
TouchSensor787.setDescription("HAnimSite l_chest_midsagittal_plane")

HAnimSite786.addChildren(TouchSensor787)
Shape788 = x3d.Shape()
Shape788.setUSE("HAnimSiteShape")

HAnimSite786.addChildren(Shape788)

HAnimSegment778.addChildren(HAnimSite786)
HAnimSite789 = x3d.HAnimSite()
HAnimSite789.setName("mesosternale")
HAnimSite789.setDEF("hanim_mesosternale")
TouchSensor790 = x3d.TouchSensor()
TouchSensor790.setDescription("HAnimSite mesosternale")

HAnimSite789.addChildren(TouchSensor790)
Shape791 = x3d.Shape()
Shape791.setUSE("HAnimSiteShape")

HAnimSite789.addChildren(Shape791)

HAnimSegment778.addChildren(HAnimSite789)
HAnimSite792 = x3d.HAnimSite()
HAnimSite792.setName("r_chest_midsagittal_plane")
HAnimSite792.setDEF("hanim_r_chest_midsagittal_plane")
TouchSensor793 = x3d.TouchSensor()
TouchSensor793.setDescription("HAnimSite r_chest_midsagittal_plane")

HAnimSite792.addChildren(TouchSensor793)
Shape794 = x3d.Shape()
Shape794.setUSE("HAnimSiteShape")

HAnimSite792.addChildren(Shape794)

HAnimSegment778.addChildren(HAnimSite792)
HAnimSite795 = x3d.HAnimSite()
HAnimSite795.setName("rear_center_midsagittal_plane")
HAnimSite795.setDEF("hanim_rear_center_midsagittal_plane")
TouchSensor796 = x3d.TouchSensor()
TouchSensor796.setDescription("HAnimSite rear_center_midsagittal_plane")

HAnimSite795.addChildren(TouchSensor796)
Shape797 = x3d.Shape()
Shape797.setUSE("HAnimSiteShape")

HAnimSite795.addChildren(Shape797)

HAnimSegment778.addChildren(HAnimSite795)

HAnimJoint777.addChildren(HAnimSegment778)
HAnimJoint798 = x3d.HAnimJoint()
HAnimJoint798.setName("vt6")
HAnimJoint798.setDEF("hanim_vt6")
HAnimJoint798.setCenter([0.0059,1.3866,-0.08])
HAnimJoint798.setUlimit([0,0,0])
HAnimJoint798.setLlimit([0,0,0])
HAnimSegment799 = x3d.HAnimSegment()
HAnimSegment799.setName("t6")
HAnimSegment799.setDEF("hanim_t6")
Transform800 = x3d.Transform()
Transform800.setTranslation([0.0059,1.3866,-0.08])
Transform801 = x3d.Transform()
#Empty Transform
Shape802 = x3d.Shape()
Shape802.setUSE("HAnimJointShape")

Transform801.addChild(Shape802)

Transform800.addChildren(Transform801)

HAnimSegment799.addChildren(Transform800)
Shape803 = x3d.Shape()
LineSet804 = x3d.LineSet()
LineSet804.setVertexCount([2])
Coordinate805 = x3d.Coordinate()
Coordinate805.setPoint([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745])

LineSet804.setCoord(Coordinate805)
#from vt6 to vt5 vertices 2
ColorRGBA806 = x3d.ColorRGBA()
ColorRGBA806.setUSE("HAnimSegmentLineColorRGBA")

LineSet804.setColor(ColorRGBA806)

Shape803.setGeometry(LineSet804)

HAnimSegment799.addChildren(Shape803)
HAnimSite807 = x3d.HAnimSite()
HAnimSite807.setName("spine_1_middle_back")
HAnimSite807.setDEF("hanim_spine_1_middle_back")
TouchSensor808 = x3d.TouchSensor()
TouchSensor808.setDescription("HAnimSite spine_1_middle_back")

HAnimSite807.addChildren(TouchSensor808)
Shape809 = x3d.Shape()
Shape809.setUSE("HAnimSiteShape")

HAnimSite807.addChildren(Shape809)

HAnimSegment799.addChildren(HAnimSite807)

HAnimJoint798.addChildren(HAnimSegment799)
HAnimJoint810 = x3d.HAnimJoint()
HAnimJoint810.setName("vt5")
HAnimJoint810.setDEF("hanim_vt5")
HAnimJoint810.setCenter([0.006,1.4102,-0.0745])
HAnimJoint810.setUlimit([0,0,0])
HAnimJoint810.setLlimit([0,0,0])
HAnimSegment811 = x3d.HAnimSegment()
HAnimSegment811.setName("t5")
HAnimSegment811.setDEF("hanim_t5")
Transform812 = x3d.Transform()
Transform812.setTranslation([0.006,1.4102,-0.0745])
Transform813 = x3d.Transform()
#Empty Transform
Shape814 = x3d.Shape()
Shape814.setUSE("HAnimJointShape")

Transform813.addChild(Shape814)

Transform812.addChildren(Transform813)

HAnimSegment811.addChildren(Transform812)
Shape815 = x3d.Shape()
LineSet816 = x3d.LineSet()
LineSet816.setVertexCount([2])
Coordinate817 = x3d.Coordinate()
Coordinate817.setPoint([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675])

LineSet816.setCoord(Coordinate817)
#from vt5 to vt4 vertices 2
ColorRGBA818 = x3d.ColorRGBA()
ColorRGBA818.setUSE("HAnimSegmentLineColorRGBA")

LineSet816.setColor(ColorRGBA818)

Shape815.setGeometry(LineSet816)

HAnimSegment811.addChildren(Shape815)

HAnimJoint810.addChildren(HAnimSegment811)
HAnimJoint819 = x3d.HAnimJoint()
HAnimJoint819.setName("vt4")
HAnimJoint819.setDEF("hanim_vt4")
HAnimJoint819.setCenter([0.0061,1.432,-0.0675])
HAnimJoint819.setUlimit([0,0,0])
HAnimJoint819.setLlimit([0,0,0])
HAnimSegment820 = x3d.HAnimSegment()
HAnimSegment820.setName("t4")
HAnimSegment820.setDEF("hanim_t4")
Transform821 = x3d.Transform()
Transform821.setTranslation([0.0061,1.432,-0.0675])
Transform822 = x3d.Transform()
#Empty Transform
Shape823 = x3d.Shape()
Shape823.setUSE("HAnimJointShape")

Transform822.addChild(Shape823)

Transform821.addChildren(Transform822)

HAnimSegment820.addChildren(Transform821)
Shape824 = x3d.Shape()
LineSet825 = x3d.LineSet()
LineSet825.setVertexCount([2])
Coordinate826 = x3d.Coordinate()
Coordinate826.setPoint([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057])

LineSet825.setCoord(Coordinate826)
#from vt4 to vt3 vertices 2
ColorRGBA827 = x3d.ColorRGBA()
ColorRGBA827.setUSE("HAnimSegmentLineColorRGBA")

LineSet825.setColor(ColorRGBA827)

Shape824.setGeometry(LineSet825)

HAnimSegment820.addChildren(Shape824)

HAnimJoint819.addChildren(HAnimSegment820)
HAnimJoint828 = x3d.HAnimJoint()
HAnimJoint828.setName("vt3")
HAnimJoint828.setDEF("hanim_vt3")
HAnimJoint828.setCenter([0.0062,1.4583,-0.057])
HAnimJoint828.setUlimit([0,0,0])
HAnimJoint828.setLlimit([0,0,0])
HAnimSegment829 = x3d.HAnimSegment()
HAnimSegment829.setName("t3")
HAnimSegment829.setDEF("hanim_t3")
Transform830 = x3d.Transform()
Transform830.setTranslation([0.0062,1.4583,-0.057])
Transform831 = x3d.Transform()
#Empty Transform
Shape832 = x3d.Shape()
Shape832.setUSE("HAnimJointShape")

Transform831.addChild(Shape832)

Transform830.addChildren(Transform831)

HAnimSegment829.addChildren(Transform830)
Shape833 = x3d.Shape()
LineSet834 = x3d.LineSet()
LineSet834.setVertexCount([2])
Coordinate835 = x3d.Coordinate()
Coordinate835.setPoint([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484])

LineSet834.setCoord(Coordinate835)
#from vt3 to vt2 vertices 2
ColorRGBA836 = x3d.ColorRGBA()
ColorRGBA836.setUSE("HAnimSegmentLineColorRGBA")

LineSet834.setColor(ColorRGBA836)

Shape833.setGeometry(LineSet834)

HAnimSegment829.addChildren(Shape833)

HAnimJoint828.addChildren(HAnimSegment829)
HAnimJoint837 = x3d.HAnimJoint()
HAnimJoint837.setName("vt2")
HAnimJoint837.setDEF("hanim_vt2")
HAnimJoint837.setCenter([0.0063,1.4761,-0.0484])
HAnimJoint837.setUlimit([0,0,0])
HAnimJoint837.setLlimit([0,0,0])
HAnimSegment838 = x3d.HAnimSegment()
HAnimSegment838.setName("t2")
HAnimSegment838.setDEF("hanim_t2")
Transform839 = x3d.Transform()
Transform839.setTranslation([0.0063,1.4761,-0.0484])
Transform840 = x3d.Transform()
#Empty Transform
Shape841 = x3d.Shape()
Shape841.setUSE("HAnimJointShape")

Transform840.addChild(Shape841)

Transform839.addChildren(Transform840)

HAnimSegment838.addChildren(Transform839)
Shape842 = x3d.Shape()
LineSet843 = x3d.LineSet()
LineSet843.setVertexCount([2])
Coordinate844 = x3d.Coordinate()
Coordinate844.setPoint([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387])

LineSet843.setCoord(Coordinate844)
#from vt2 to vt1 vertices 2
ColorRGBA845 = x3d.ColorRGBA()
ColorRGBA845.setUSE("HAnimSegmentLineColorRGBA")

LineSet843.setColor(ColorRGBA845)

Shape842.setGeometry(LineSet843)

HAnimSegment838.addChildren(Shape842)
HAnimSite846 = x3d.HAnimSite()
HAnimSite846.setName("cervicale")
HAnimSite846.setDEF("hanim_cervicale")
HAnimSite846.setTranslation([0.0064,1.52,-0.0815])
TouchSensor847 = x3d.TouchSensor()
TouchSensor847.setDescription("HAnimSite cervicale")

HAnimSite846.addChildren(TouchSensor847)
Shape848 = x3d.Shape()
Shape848.setUSE("HAnimSiteShape")

HAnimSite846.addChildren(Shape848)

HAnimSegment838.addChildren(HAnimSite846)
HAnimSite849 = x3d.HAnimSite()
HAnimSite849.setName("suprasternale")
HAnimSite849.setDEF("hanim_suprasternale")
HAnimSite849.setTranslation([0.0084,1.4714,0.0551])
TouchSensor850 = x3d.TouchSensor()
TouchSensor850.setDescription("HAnimSite suprasternale")

HAnimSite849.addChildren(TouchSensor850)
Shape851 = x3d.Shape()
Shape851.setUSE("HAnimSiteShape")

HAnimSite849.addChildren(Shape851)

HAnimSegment838.addChildren(HAnimSite849)

HAnimJoint837.addChildren(HAnimSegment838)
HAnimJoint852 = x3d.HAnimJoint()
HAnimJoint852.setName("vt1")
HAnimJoint852.setDEF("hanim_vt1")
HAnimJoint852.setCenter([0.0065,1.4951,-0.0387])
HAnimJoint852.setUlimit([0,0,0])
HAnimJoint852.setLlimit([0,0,0])
HAnimSegment853 = x3d.HAnimSegment()
HAnimSegment853.setName("t1")
HAnimSegment853.setDEF("hanim_t1")
Transform854 = x3d.Transform()
Transform854.setTranslation([0.0065,1.4951,-0.0387])
Transform855 = x3d.Transform()
#Empty Transform
Shape856 = x3d.Shape()
Shape856.setUSE("HAnimJointShape")

Transform855.addChild(Shape856)

Transform854.addChildren(Transform855)

HAnimSegment853.addChildren(Transform854)
Shape857 = x3d.Shape()
LineSet858 = x3d.LineSet()
LineSet858.setVertexCount([2])
Coordinate859 = x3d.Coordinate()
Coordinate859.setPoint([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301])

LineSet858.setCoord(Coordinate859)
#from vt1 to vc7 vertices 2
ColorRGBA860 = x3d.ColorRGBA()
ColorRGBA860.setUSE("HAnimSegmentLineColorRGBA")

LineSet858.setColor(ColorRGBA860)

Shape857.setGeometry(LineSet858)

HAnimSegment853.addChildren(Shape857)
HAnimSite861 = x3d.HAnimSite()
HAnimSite861.setName("l_neck_base")
HAnimSite861.setDEF("hanim_l_neck_base")
HAnimSite861.setTranslation([0.0646,1.5141,-0.038])
TouchSensor862 = x3d.TouchSensor()
TouchSensor862.setDescription("HAnimSite l_neck_base")

HAnimSite861.addChildren(TouchSensor862)
Shape863 = x3d.Shape()
Shape863.setUSE("HAnimSiteShape")

HAnimSite861.addChildren(Shape863)

HAnimSegment853.addChildren(HAnimSite861)
HAnimSite864 = x3d.HAnimSite()
HAnimSite864.setName("r_neck_base")
HAnimSite864.setDEF("hanim_r_neck_base")
HAnimSite864.setTranslation([-0.0419,1.5149,-0.022])
TouchSensor865 = x3d.TouchSensor()
TouchSensor865.setDescription("HAnimSite r_neck_base")

HAnimSite864.addChildren(TouchSensor865)
Shape866 = x3d.Shape()
Shape866.setUSE("HAnimSiteShape")

HAnimSite864.addChildren(Shape866)

HAnimSegment853.addChildren(HAnimSite864)
Shape867 = x3d.Shape()
LineSet868 = x3d.LineSet()
LineSet868.setVertexCount([2])
Coordinate869 = x3d.Coordinate()
Coordinate869.setPoint([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353])

LineSet868.setCoord(Coordinate869)
#from vt1 to l_sternoclavicular vertices 2
ColorRGBA870 = x3d.ColorRGBA()
ColorRGBA870.setUSE("HAnimSegmentLineColorRGBA")

LineSet868.setColor(ColorRGBA870)

Shape867.setGeometry(LineSet868)

HAnimSegment853.addChildren(Shape867)
HAnimSite871 = x3d.HAnimSite()
HAnimSite871.setName("l_acromion")
HAnimSite871.setDEF("hanim_l_acromion")
HAnimSite871.setTranslation([0.2032,1.476,-0.049])
TouchSensor872 = x3d.TouchSensor()
TouchSensor872.setDescription("HAnimSite l_acromion")

HAnimSite871.addChildren(TouchSensor872)
Shape873 = x3d.Shape()
Shape873.setUSE("HAnimSiteShape")

HAnimSite871.addChildren(Shape873)

HAnimSegment853.addChildren(HAnimSite871)
HAnimSite874 = x3d.HAnimSite()
HAnimSite874.setName("l_axilla_distal_pt")
HAnimSite874.setDEF("hanim_l_axilla_distal_pt")
HAnimSite874.setTranslation([0.1706,1.4072,-0.0875])
TouchSensor875 = x3d.TouchSensor()
TouchSensor875.setDescription("HAnimSite l_axilla_distal_pt")

HAnimSite874.addChildren(TouchSensor875)
Shape876 = x3d.Shape()
Shape876.setUSE("HAnimSiteShape")

HAnimSite874.addChildren(Shape876)

HAnimSegment853.addChildren(HAnimSite874)
HAnimSite877 = x3d.HAnimSite()
HAnimSite877.setName("l_axilla_posterior_folds")
HAnimSite877.setDEF("hanim_l_axilla_posterior_folds")
TouchSensor878 = x3d.TouchSensor()
TouchSensor878.setDescription("HAnimSite l_axilla_posterior_folds")

HAnimSite877.addChildren(TouchSensor878)
Shape879 = x3d.Shape()
Shape879.setUSE("HAnimSiteShape")

HAnimSite877.addChildren(Shape879)

HAnimSegment853.addChildren(HAnimSite877)
HAnimSite880 = x3d.HAnimSite()
HAnimSite880.setName("l_axilla_proximal")
HAnimSite880.setDEF("hanim_l_axilla_proximal")
HAnimSite880.setTranslation([0.1777,1.4065,-0.0075])
TouchSensor881 = x3d.TouchSensor()
TouchSensor881.setDescription("HAnimSite l_axilla_proximal")

HAnimSite880.addChildren(TouchSensor881)
Shape882 = x3d.Shape()
Shape882.setUSE("HAnimSiteShape")

HAnimSite880.addChildren(Shape882)

HAnimSegment853.addChildren(HAnimSite880)
HAnimSite883 = x3d.HAnimSite()
HAnimSite883.setName("l_clavicale")
HAnimSite883.setDEF("hanim_l_clavicale")
HAnimSite883.setTranslation([0.0271,1.4943,0.0394])
TouchSensor884 = x3d.TouchSensor()
TouchSensor884.setDescription("HAnimSite l_clavicale")

HAnimSite883.addChildren(TouchSensor884)
Shape885 = x3d.Shape()
Shape885.setUSE("HAnimSiteShape")

HAnimSite883.addChildren(Shape885)

HAnimSegment853.addChildren(HAnimSite883)
Shape886 = x3d.Shape()
LineSet887 = x3d.LineSet()
LineSet887.setVertexCount([2])
Coordinate888 = x3d.Coordinate()
Coordinate888.setPoint([0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033])

LineSet887.setCoord(Coordinate888)
#from vt1 to r_sternoclavicular vertices 2
ColorRGBA889 = x3d.ColorRGBA()
ColorRGBA889.setUSE("HAnimSegmentLineColorRGBA")

LineSet887.setColor(ColorRGBA889)

Shape886.setGeometry(LineSet887)

HAnimSegment853.addChildren(Shape886)
HAnimSite890 = x3d.HAnimSite()
HAnimSite890.setName("r_acromion")
HAnimSite890.setDEF("hanim_r_acromion")
HAnimSite890.setTranslation([-0.1905,1.4791,-0.0431])
TouchSensor891 = x3d.TouchSensor()
TouchSensor891.setDescription("HAnimSite r_acromion")

HAnimSite890.addChildren(TouchSensor891)
Shape892 = x3d.Shape()
Shape892.setUSE("HAnimSiteShape")

HAnimSite890.addChildren(Shape892)

HAnimSegment853.addChildren(HAnimSite890)
HAnimSite893 = x3d.HAnimSite()
HAnimSite893.setName("r_axilla_distal_pt")
HAnimSite893.setDEF("hanim_r_axilla_distal_pt")
HAnimSite893.setTranslation([-0.1603,1.4098,-0.0826])
TouchSensor894 = x3d.TouchSensor()
TouchSensor894.setDescription("HAnimSite r_axilla_distal_pt")

HAnimSite893.addChildren(TouchSensor894)
Shape895 = x3d.Shape()
Shape895.setUSE("HAnimSiteShape")

HAnimSite893.addChildren(Shape895)

HAnimSegment853.addChildren(HAnimSite893)
HAnimSite896 = x3d.HAnimSite()
HAnimSite896.setName("r_axilla_posterior_folds")
HAnimSite896.setDEF("hanim_r_axilla_posterior_folds")
TouchSensor897 = x3d.TouchSensor()
TouchSensor897.setDescription("HAnimSite r_axilla_posterior_folds")

HAnimSite896.addChildren(TouchSensor897)
Shape898 = x3d.Shape()
Shape898.setUSE("HAnimSiteShape")

HAnimSite896.addChildren(Shape898)

HAnimSegment853.addChildren(HAnimSite896)
HAnimSite899 = x3d.HAnimSite()
HAnimSite899.setName("r_axilla_proximal")
HAnimSite899.setDEF("hanim_r_axilla_proximal")
HAnimSite899.setTranslation([-0.1626,1.4072,-0.0031])
TouchSensor900 = x3d.TouchSensor()
TouchSensor900.setDescription("HAnimSite r_axilla_proximal")

HAnimSite899.addChildren(TouchSensor900)
Shape901 = x3d.Shape()
Shape901.setUSE("HAnimSiteShape")

HAnimSite899.addChildren(Shape901)

HAnimSegment853.addChildren(HAnimSite899)
HAnimSite902 = x3d.HAnimSite()
HAnimSite902.setName("r_clavicale")
HAnimSite902.setDEF("hanim_r_clavicale")
HAnimSite902.setTranslation([-0.0115,1.4943,0.04])
TouchSensor903 = x3d.TouchSensor()
TouchSensor903.setDescription("HAnimSite r_clavicale")

HAnimSite902.addChildren(TouchSensor903)
Shape904 = x3d.Shape()
Shape904.setUSE("HAnimSiteShape")

HAnimSite902.addChildren(Shape904)

HAnimSegment853.addChildren(HAnimSite902)

HAnimJoint852.addChildren(HAnimSegment853)
HAnimJoint905 = x3d.HAnimJoint()
HAnimJoint905.setName("vc7")
HAnimJoint905.setDEF("hanim_vc7")
HAnimJoint905.setCenter([0.0066,1.5132,-0.0301])
HAnimJoint905.setUlimit([0,0,0])
HAnimJoint905.setLlimit([0,0,0])
HAnimSegment906 = x3d.HAnimSegment()
HAnimSegment906.setName("c7")
HAnimSegment906.setDEF("hanim_c7")
Transform907 = x3d.Transform()
Transform907.setTranslation([0.0066,1.5132,-0.0301])
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
Coordinate912.setPoint([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143])

LineSet911.setCoord(Coordinate912)
#from vc7 to vc6 vertices 2
ColorRGBA913 = x3d.ColorRGBA()
ColorRGBA913.setUSE("HAnimSegmentLineColorRGBA")

LineSet911.setColor(ColorRGBA913)

Shape910.setGeometry(LineSet911)

HAnimSegment906.addChildren(Shape910)

HAnimJoint905.addChildren(HAnimSegment906)
HAnimJoint914 = x3d.HAnimJoint()
HAnimJoint914.setName("vc6")
HAnimJoint914.setDEF("hanim_vc6")
HAnimJoint914.setCenter([0.0066,1.5357,-0.0143])
HAnimJoint914.setUlimit([0,0,0])
HAnimJoint914.setLlimit([0,0,0])
HAnimSegment915 = x3d.HAnimSegment()
HAnimSegment915.setName("c6")
HAnimSegment915.setDEF("hanim_c6")
Transform916 = x3d.Transform()
Transform916.setTranslation([0.0066,1.5357,-0.0143])
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
Coordinate921.setPoint([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082])

LineSet920.setCoord(Coordinate921)
#from vc6 to vc5 vertices 2
ColorRGBA922 = x3d.ColorRGBA()
ColorRGBA922.setUSE("HAnimSegmentLineColorRGBA")

LineSet920.setColor(ColorRGBA922)

Shape919.setGeometry(LineSet920)

HAnimSegment915.addChildren(Shape919)

HAnimJoint914.addChildren(HAnimSegment915)
HAnimJoint923 = x3d.HAnimJoint()
HAnimJoint923.setName("vc5")
HAnimJoint923.setDEF("hanim_vc5")
HAnimJoint923.setCenter([0.0066,1.552,-0.0082])
HAnimJoint923.setUlimit([0,0,0])
HAnimJoint923.setLlimit([0,0,0])
HAnimSegment924 = x3d.HAnimSegment()
HAnimSegment924.setName("c5")
HAnimSegment924.setDEF("hanim_c5")
Transform925 = x3d.Transform()
Transform925.setTranslation([0.0066,1.552,-0.0082])
Transform926 = x3d.Transform()
#Empty Transform
Shape927 = x3d.Shape()
Shape927.setUSE("HAnimJointShape")

Transform926.addChild(Shape927)

Transform925.addChildren(Transform926)

HAnimSegment924.addChildren(Transform925)
Shape928 = x3d.Shape()
LineSet929 = x3d.LineSet()
LineSet929.setVertexCount([2])
Coordinate930 = x3d.Coordinate()
Coordinate930.setPoint([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084])

LineSet929.setCoord(Coordinate930)
#from vc5 to vc4 vertices 2
ColorRGBA931 = x3d.ColorRGBA()
ColorRGBA931.setUSE("HAnimSegmentLineColorRGBA")

LineSet929.setColor(ColorRGBA931)

Shape928.setGeometry(LineSet929)

HAnimSegment924.addChildren(Shape928)

HAnimJoint923.addChildren(HAnimSegment924)
HAnimJoint932 = x3d.HAnimJoint()
HAnimJoint932.setName("vc4")
HAnimJoint932.setDEF("hanim_vc4")
HAnimJoint932.setCenter([0.0066,1.5662,-0.0084])
HAnimJoint932.setUlimit([0,0,0])
HAnimJoint932.setLlimit([0,0,0])
HAnimSegment933 = x3d.HAnimSegment()
HAnimSegment933.setName("c4")
HAnimSegment933.setDEF("hanim_c4")
Transform934 = x3d.Transform()
Transform934.setTranslation([0.0066,1.5662,-0.0084])
Transform935 = x3d.Transform()
#Empty Transform
Shape936 = x3d.Shape()
Shape936.setUSE("HAnimJointShape")

Transform935.addChild(Shape936)

Transform934.addChildren(Transform935)

HAnimSegment933.addChildren(Transform934)
Shape937 = x3d.Shape()
LineSet938 = x3d.LineSet()
LineSet938.setVertexCount([2])
Coordinate939 = x3d.Coordinate()
Coordinate939.setPoint([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103])

LineSet938.setCoord(Coordinate939)
#from vc4 to vc3 vertices 2
ColorRGBA940 = x3d.ColorRGBA()
ColorRGBA940.setUSE("HAnimSegmentLineColorRGBA")

LineSet938.setColor(ColorRGBA940)

Shape937.setGeometry(LineSet938)

HAnimSegment933.addChildren(Shape937)

HAnimJoint932.addChildren(HAnimSegment933)
HAnimJoint941 = x3d.HAnimJoint()
HAnimJoint941.setName("vc3")
HAnimJoint941.setDEF("hanim_vc3")
HAnimJoint941.setCenter([0.0066,1.58,-0.0103])
HAnimJoint941.setUlimit([0,0,0])
HAnimJoint941.setLlimit([0,0,0])
HAnimSegment942 = x3d.HAnimSegment()
HAnimSegment942.setName("c3")
HAnimSegment942.setDEF("hanim_c3")
Transform943 = x3d.Transform()
Transform943.setTranslation([0.0066,1.58,-0.0103])
Transform944 = x3d.Transform()
#Empty Transform
Shape945 = x3d.Shape()
Shape945.setUSE("HAnimJointShape")

Transform944.addChild(Shape945)

Transform943.addChildren(Transform944)

HAnimSegment942.addChildren(Transform943)
Shape946 = x3d.Shape()
LineSet947 = x3d.LineSet()
LineSet947.setVertexCount([2])
Coordinate948 = x3d.Coordinate()
Coordinate948.setPoint([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103])

LineSet947.setCoord(Coordinate948)
#from vc3 to vc2 vertices 2
ColorRGBA949 = x3d.ColorRGBA()
ColorRGBA949.setUSE("HAnimSegmentLineColorRGBA")

LineSet947.setColor(ColorRGBA949)

Shape946.setGeometry(LineSet947)

HAnimSegment942.addChildren(Shape946)
HAnimSite950 = x3d.HAnimSite()
HAnimSite950.setName("adams_apple")
HAnimSite950.setDEF("hanim_adams_apple")
TouchSensor951 = x3d.TouchSensor()
TouchSensor951.setDescription("HAnimSite adams_apple")

HAnimSite950.addChildren(TouchSensor951)
Shape952 = x3d.Shape()
Shape952.setUSE("HAnimSiteShape")

HAnimSite950.addChildren(Shape952)

HAnimSegment942.addChildren(HAnimSite950)

HAnimJoint941.addChildren(HAnimSegment942)
HAnimJoint953 = x3d.HAnimJoint()
HAnimJoint953.setName("vc2")
HAnimJoint953.setDEF("hanim_vc2")
HAnimJoint953.setCenter([0.0066,1.5928,-0.0103])
HAnimJoint953.setUlimit([0,0,0])
HAnimJoint953.setLlimit([0,0,0])
HAnimSegment954 = x3d.HAnimSegment()
HAnimSegment954.setName("c2")
HAnimSegment954.setDEF("hanim_c2")
Transform955 = x3d.Transform()
Transform955.setTranslation([0.0066,1.5928,-0.0103])
Transform956 = x3d.Transform()
#Empty Transform
Shape957 = x3d.Shape()
Shape957.setUSE("HAnimJointShape")

Transform956.addChild(Shape957)

Transform955.addChildren(Transform956)

HAnimSegment954.addChildren(Transform955)
Shape958 = x3d.Shape()
LineSet959 = x3d.LineSet()
LineSet959.setVertexCount([2])
Coordinate960 = x3d.Coordinate()
Coordinate960.setPoint([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034])

LineSet959.setCoord(Coordinate960)
#from vc2 to vc1 vertices 2
ColorRGBA961 = x3d.ColorRGBA()
ColorRGBA961.setUSE("HAnimSegmentLineColorRGBA")

LineSet959.setColor(ColorRGBA961)

Shape958.setGeometry(LineSet959)

HAnimSegment954.addChildren(Shape958)

HAnimJoint953.addChildren(HAnimSegment954)
HAnimJoint962 = x3d.HAnimJoint()
HAnimJoint962.setName("vc1")
HAnimJoint962.setDEF("hanim_vc1")
HAnimJoint962.setCenter([0.0066,1.6144,-0.0034])
HAnimJoint962.setUlimit([0,0,0])
HAnimJoint962.setLlimit([0,0,0])
HAnimSegment963 = x3d.HAnimSegment()
HAnimSegment963.setName("c1")
HAnimSegment963.setDEF("hanim_c1")
Transform964 = x3d.Transform()
Transform964.setTranslation([0.0066,1.6144,-0.0034])
Transform965 = x3d.Transform()
#Empty Transform
Shape966 = x3d.Shape()
Shape966.setUSE("HAnimJointShape")

Transform965.addChild(Shape966)

Transform964.addChildren(Transform965)

HAnimSegment963.addChildren(Transform964)
Shape967 = x3d.Shape()
LineSet968 = x3d.LineSet()
LineSet968.setVertexCount([2])
Coordinate969 = x3d.Coordinate()
Coordinate969.setPoint([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236])

LineSet968.setCoord(Coordinate969)
#from vc1 to skullbase vertices 2
ColorRGBA970 = x3d.ColorRGBA()
ColorRGBA970.setUSE("HAnimSegmentLineColorRGBA")

LineSet968.setColor(ColorRGBA970)

Shape967.setGeometry(LineSet968)

HAnimSegment963.addChildren(Shape967)
HAnimSite971 = x3d.HAnimSite()
HAnimSite971.setName("glabella")
HAnimSite971.setDEF("hanim_glabella")
TouchSensor972 = x3d.TouchSensor()
TouchSensor972.setDescription("HAnimSite glabella")

HAnimSite971.addChildren(TouchSensor972)
Shape973 = x3d.Shape()
Shape973.setUSE("HAnimSiteShape")

HAnimSite971.addChildren(Shape973)

HAnimSegment963.addChildren(HAnimSite971)
HAnimSite974 = x3d.HAnimSite()
HAnimSite974.setName("l_ectocanthus")
HAnimSite974.setDEF("hanim_l_ectocanthus")
TouchSensor975 = x3d.TouchSensor()
TouchSensor975.setDescription("HAnimSite l_ectocanthus")

HAnimSite974.addChildren(TouchSensor975)
Shape976 = x3d.Shape()
Shape976.setUSE("HAnimSiteShape")

HAnimSite974.addChildren(Shape976)

HAnimSegment963.addChildren(HAnimSite974)
HAnimSite977 = x3d.HAnimSite()
HAnimSite977.setName("l_infraorbitale")
HAnimSite977.setDEF("hanim_l_infraorbitale")
HAnimSite977.setTranslation([0.0341,1.6171,0.0752])
TouchSensor978 = x3d.TouchSensor()
TouchSensor978.setDescription("HAnimSite l_infraorbitale")

HAnimSite977.addChildren(TouchSensor978)
Shape979 = x3d.Shape()
Shape979.setUSE("HAnimSiteShape")

HAnimSite977.addChildren(Shape979)

HAnimSegment963.addChildren(HAnimSite977)
HAnimSite980 = x3d.HAnimSite()
HAnimSite980.setName("l_tragion")
HAnimSite980.setDEF("hanim_l_tragion")
HAnimSite980.setTranslation([0.0739,1.6348,0.0282])
TouchSensor981 = x3d.TouchSensor()
TouchSensor981.setDescription("HAnimSite l_tragion")

HAnimSite980.addChildren(TouchSensor981)
Shape982 = x3d.Shape()
Shape982.setUSE("HAnimSiteShape")

HAnimSite980.addChildren(Shape982)

HAnimSegment963.addChildren(HAnimSite980)
HAnimSite983 = x3d.HAnimSite()
HAnimSite983.setName("nuchale")
HAnimSite983.setDEF("hanim_nuchale")
HAnimSite983.setTranslation([0.0039,1.5972,-0.0796])
TouchSensor984 = x3d.TouchSensor()
TouchSensor984.setDescription("HAnimSite nuchale")

HAnimSite983.addChildren(TouchSensor984)
Shape985 = x3d.Shape()
Shape985.setUSE("HAnimSiteShape")

HAnimSite983.addChildren(Shape985)

HAnimSegment963.addChildren(HAnimSite983)
HAnimSite986 = x3d.HAnimSite()
HAnimSite986.setName("opisthocranion")
HAnimSite986.setDEF("hanim_opisthocranion")
TouchSensor987 = x3d.TouchSensor()
TouchSensor987.setDescription("HAnimSite opisthocranion")

HAnimSite986.addChildren(TouchSensor987)
Shape988 = x3d.Shape()
Shape988.setUSE("HAnimSiteShape")

HAnimSite986.addChildren(Shape988)

HAnimSegment963.addChildren(HAnimSite986)
HAnimSite989 = x3d.HAnimSite()
HAnimSite989.setName("r_ectocanthus")
HAnimSite989.setDEF("hanim_r_ectocanthus")
TouchSensor990 = x3d.TouchSensor()
TouchSensor990.setDescription("HAnimSite r_ectocanthus")

HAnimSite989.addChildren(TouchSensor990)
Shape991 = x3d.Shape()
Shape991.setUSE("HAnimSiteShape")

HAnimSite989.addChildren(Shape991)

HAnimSegment963.addChildren(HAnimSite989)
HAnimSite992 = x3d.HAnimSite()
HAnimSite992.setName("r_infraorbitale")
HAnimSite992.setDEF("hanim_r_infraorbitale")
HAnimSite992.setTranslation([-0.0237,1.6171,0.0752])
TouchSensor993 = x3d.TouchSensor()
TouchSensor993.setDescription("HAnimSite r_infraorbitale")

HAnimSite992.addChildren(TouchSensor993)
Shape994 = x3d.Shape()
Shape994.setUSE("HAnimSiteShape")

HAnimSite992.addChildren(Shape994)

HAnimSegment963.addChildren(HAnimSite992)
HAnimSite995 = x3d.HAnimSite()
HAnimSite995.setName("r_tragion")
HAnimSite995.setDEF("hanim_r_tragion")
HAnimSite995.setTranslation([-0.0646,1.6347,0.0302])
TouchSensor996 = x3d.TouchSensor()
TouchSensor996.setDescription("HAnimSite r_tragion")

HAnimSite995.addChildren(TouchSensor996)
Shape997 = x3d.Shape()
Shape997.setUSE("HAnimSiteShape")

HAnimSite995.addChildren(Shape997)

HAnimSegment963.addChildren(HAnimSite995)
HAnimSite998 = x3d.HAnimSite()
HAnimSite998.setName("sellion")
HAnimSite998.setDEF("hanim_sellion")
HAnimSite998.setTranslation([0.0058,1.6316,0.0852])
TouchSensor999 = x3d.TouchSensor()
TouchSensor999.setDescription("HAnimSite sellion")

HAnimSite998.addChildren(TouchSensor999)
Shape1000 = x3d.Shape()
Shape1000.setUSE("HAnimSiteShape")

HAnimSite998.addChildren(Shape1000)

HAnimSegment963.addChildren(HAnimSite998)
HAnimSite1001 = x3d.HAnimSite()
HAnimSite1001.setName("skull_vertex")
HAnimSite1001.setDEF("hanim_skull_vertex")
TouchSensor1002 = x3d.TouchSensor()
TouchSensor1002.setDescription("HAnimSite skull_vertex")

HAnimSite1001.addChildren(TouchSensor1002)
Shape1003 = x3d.Shape()
Shape1003.setUSE("HAnimSiteShape")

HAnimSite1001.addChildren(Shape1003)

HAnimSegment963.addChildren(HAnimSite1001)

HAnimJoint962.addChildren(HAnimSegment963)
HAnimJoint1004 = x3d.HAnimJoint()
HAnimJoint1004.setName("skullbase")
HAnimJoint1004.setDEF("hanim_skullbase")
HAnimJoint1004.setCenter([0.0044,1.6209,0.0236])
HAnimJoint1004.setUlimit([0,0,0])
HAnimJoint1004.setLlimit([0,0,0])
HAnimSegment1005 = x3d.HAnimSegment()
HAnimSegment1005.setName("skull")
HAnimSegment1005.setDEF("hanim_skull")
Transform1006 = x3d.Transform()
Transform1006.setTranslation([0.0044,1.6209,0.0236])
Transform1007 = x3d.Transform()
#Empty Transform
Shape1008 = x3d.Shape()
Shape1008.setUSE("HAnimJointShape")

Transform1007.addChild(Shape1008)

Transform1006.addChildren(Transform1007)

HAnimSegment1005.addChildren(Transform1006)
Shape1009 = x3d.Shape()
LineSet1010 = x3d.LineSet()
LineSet1010.setVertexCount([2])
Coordinate1011 = x3d.Coordinate()
Coordinate1011.setPoint([0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689])

LineSet1010.setCoord(Coordinate1011)
#from skullbase to l_eyelid_joint vertices 2
ColorRGBA1012 = x3d.ColorRGBA()
ColorRGBA1012.setUSE("HAnimSegmentLineColorRGBA")

LineSet1010.setColor(ColorRGBA1012)

Shape1009.setGeometry(LineSet1010)

HAnimSegment1005.addChildren(Shape1009)
Shape1013 = x3d.Shape()
LineSet1014 = x3d.LineSet()
LineSet1014.setVertexCount([2])
Coordinate1015 = x3d.Coordinate()
Coordinate1015.setPoint([0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689])

LineSet1014.setCoord(Coordinate1015)
#from skullbase to r_eyelid_joint vertices 2
ColorRGBA1016 = x3d.ColorRGBA()
ColorRGBA1016.setUSE("HAnimSegmentLineColorRGBA")

LineSet1014.setColor(ColorRGBA1016)

Shape1013.setGeometry(LineSet1014)

HAnimSegment1005.addChildren(Shape1013)
Shape1017 = x3d.Shape()
LineSet1018 = x3d.LineSet()
LineSet1018.setVertexCount([2])
Coordinate1019 = x3d.Coordinate()
Coordinate1019.setPoint([0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188])

LineSet1018.setCoord(Coordinate1019)
#from skullbase to l_eyeball_joint vertices 2
ColorRGBA1020 = x3d.ColorRGBA()
ColorRGBA1020.setUSE("HAnimSegmentLineColorRGBA")

LineSet1018.setColor(ColorRGBA1020)

Shape1017.setGeometry(LineSet1018)

HAnimSegment1005.addChildren(Shape1017)
Shape1021 = x3d.Shape()
LineSet1022 = x3d.LineSet()
LineSet1022.setVertexCount([2])
Coordinate1023 = x3d.Coordinate()
Coordinate1023.setPoint([0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188])

LineSet1022.setCoord(Coordinate1023)
#from skullbase to r_eyeball_joint vertices 2
ColorRGBA1024 = x3d.ColorRGBA()
ColorRGBA1024.setUSE("HAnimSegmentLineColorRGBA")

LineSet1022.setColor(ColorRGBA1024)

Shape1021.setGeometry(LineSet1022)

HAnimSegment1005.addChildren(Shape1021)
Shape1025 = x3d.Shape()
LineSet1026 = x3d.LineSet()
LineSet1026.setVertexCount([2])
Coordinate1027 = x3d.Coordinate()
Coordinate1027.setPoint([0.0044,1.6209,0.0236,0.0216,1.4053,0.0051])

LineSet1026.setCoord(Coordinate1027)
#from skullbase to l_eyebrow_joint vertices 2
ColorRGBA1028 = x3d.ColorRGBA()
ColorRGBA1028.setUSE("HAnimSegmentLineColorRGBA")

LineSet1026.setColor(ColorRGBA1028)

Shape1025.setGeometry(LineSet1026)

HAnimSegment1005.addChildren(Shape1025)
Shape1029 = x3d.Shape()
LineSet1030 = x3d.LineSet()
LineSet1030.setVertexCount([2])
Coordinate1031 = x3d.Coordinate()
Coordinate1031.setPoint([0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051])

LineSet1030.setCoord(Coordinate1031)
#from skullbase to r_eyebrow_joint vertices 2
ColorRGBA1032 = x3d.ColorRGBA()
ColorRGBA1032.setUSE("HAnimSegmentLineColorRGBA")

LineSet1030.setColor(ColorRGBA1032)

Shape1029.setGeometry(LineSet1030)

HAnimSegment1005.addChildren(Shape1029)
Shape1033 = x3d.Shape()
LineSet1034 = x3d.LineSet()
LineSet1034.setVertexCount([2])
Coordinate1035 = x3d.Coordinate()
Coordinate1035.setPoint([0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865])

LineSet1034.setCoord(Coordinate1035)
#from skullbase to temporomandibular vertices 2
ColorRGBA1036 = x3d.ColorRGBA()
ColorRGBA1036.setUSE("HAnimSegmentLineColorRGBA")

LineSet1034.setColor(ColorRGBA1036)

Shape1033.setGeometry(LineSet1034)

HAnimSegment1005.addChildren(Shape1033)
HAnimSite1037 = x3d.HAnimSite()
HAnimSite1037.setName("l_gonion")
HAnimSite1037.setDEF("hanim_l_gonion")
HAnimSite1037.setTranslation([0.0631,1.553,0.033])
TouchSensor1038 = x3d.TouchSensor()
TouchSensor1038.setDescription("HAnimSite l_gonion")

HAnimSite1037.addChildren(TouchSensor1038)
Shape1039 = x3d.Shape()
Shape1039.setUSE("HAnimSiteShape")

HAnimSite1037.addChildren(Shape1039)

HAnimSegment1005.addChildren(HAnimSite1037)
HAnimSite1040 = x3d.HAnimSite()
HAnimSite1040.setName("menton")
HAnimSite1040.setDEF("hanim_menton")
TouchSensor1041 = x3d.TouchSensor()
TouchSensor1041.setDescription("HAnimSite menton")

HAnimSite1040.addChildren(TouchSensor1041)
Shape1042 = x3d.Shape()
Shape1042.setUSE("HAnimSiteShape")

HAnimSite1040.addChildren(Shape1042)

HAnimSegment1005.addChildren(HAnimSite1040)
HAnimSite1043 = x3d.HAnimSite()
HAnimSite1043.setName("r_gonion")
HAnimSite1043.setDEF("hanim_r_gonion")
HAnimSite1043.setTranslation([-0.052,1.5529,0.0347])
TouchSensor1044 = x3d.TouchSensor()
TouchSensor1044.setDescription("HAnimSite r_gonion")

HAnimSite1043.addChildren(TouchSensor1044)
Shape1045 = x3d.Shape()
Shape1045.setUSE("HAnimSiteShape")

HAnimSite1043.addChildren(Shape1045)

HAnimSegment1005.addChildren(HAnimSite1043)
HAnimSite1046 = x3d.HAnimSite()
HAnimSite1046.setName("supramenton")
HAnimSite1046.setDEF("hanim_supramenton")
HAnimSite1046.setTranslation([0.0061,1.541,0.0805])
TouchSensor1047 = x3d.TouchSensor()
TouchSensor1047.setDescription("HAnimSite supramenton")

HAnimSite1046.addChildren(TouchSensor1047)
Shape1048 = x3d.Shape()
Shape1048.setUSE("HAnimSiteShape")

HAnimSite1046.addChildren(Shape1048)

HAnimSegment1005.addChildren(HAnimSite1046)

HAnimJoint1004.addChildren(HAnimSegment1005)
HAnimJoint1049 = x3d.HAnimJoint()
HAnimJoint1049.setName("l_eyelid_joint")
HAnimJoint1049.setDEF("hanim_l_eyelid_joint")
HAnimJoint1049.setCenter([0.0503,1.4157,-0.0689])
HAnimJoint1049.setUlimit([0,0,0])
HAnimJoint1049.setLlimit([0,0,0])

HAnimJoint1004.addChildren(HAnimJoint1049)
HAnimJoint1050 = x3d.HAnimJoint()
HAnimJoint1050.setName("r_eyelid_joint")
HAnimJoint1050.setDEF("hanim_r_eyelid_joint")
HAnimJoint1050.setCenter([-0.0507,1.4157,-0.0689])
HAnimJoint1050.setUlimit([0,0,0])
HAnimJoint1050.setLlimit([0,0,0])

HAnimJoint1004.addChildren(HAnimJoint1050)
HAnimJoint1051 = x3d.HAnimJoint()
HAnimJoint1051.setName("l_eyeball_joint")
HAnimJoint1051.setDEF("hanim_l_eyeball_joint")
HAnimJoint1051.setCenter([0.0479,1.3963,-0.0188])
HAnimJoint1051.setUlimit([0,0,0])
HAnimJoint1051.setLlimit([0,0,0])

HAnimJoint1004.addChildren(HAnimJoint1051)
HAnimJoint1052 = x3d.HAnimJoint()
HAnimJoint1052.setName("r_eyeball_joint")
HAnimJoint1052.setDEF("hanim_r_eyeball_joint")
HAnimJoint1052.setCenter([-0.0483,1.3963,-0.0188])
HAnimJoint1052.setUlimit([0,0,0])
HAnimJoint1052.setLlimit([0,0,0])

HAnimJoint1004.addChildren(HAnimJoint1052)
HAnimJoint1053 = x3d.HAnimJoint()
HAnimJoint1053.setName("l_eyebrow_joint")
HAnimJoint1053.setDEF("hanim_l_eyebrow_joint")
HAnimJoint1053.setCenter([0.0216,1.4053,0.0051])
HAnimJoint1053.setUlimit([0,0,0])
HAnimJoint1053.setLlimit([0,0,0])

HAnimJoint1004.addChildren(HAnimJoint1053)
HAnimJoint1054 = x3d.HAnimJoint()
HAnimJoint1054.setName("r_eyebrow_joint")
HAnimJoint1054.setDEF("hanim_r_eyebrow_joint")
HAnimJoint1054.setCenter([-0.0219,1.4053,0.0051])
HAnimJoint1054.setUlimit([0,0,0])
HAnimJoint1054.setLlimit([0,0,0])

HAnimJoint1004.addChildren(HAnimJoint1054)
HAnimJoint1055 = x3d.HAnimJoint()
HAnimJoint1055.setName("temporomandibular")
HAnimJoint1055.setDEF("hanim_temporomandibular")
HAnimJoint1055.setCenter([-0.0002,1.3043,-0.0865])
HAnimJoint1055.setUlimit([0,0,0])
HAnimJoint1055.setLlimit([0,0,0])

HAnimJoint1004.addChildren(HAnimJoint1055)

HAnimJoint962.addChildren(HAnimJoint1004)

HAnimJoint953.addChildren(HAnimJoint962)

HAnimJoint941.addChildren(HAnimJoint953)

HAnimJoint932.addChildren(HAnimJoint941)

HAnimJoint923.addChildren(HAnimJoint932)

HAnimJoint914.addChildren(HAnimJoint923)

HAnimJoint905.addChildren(HAnimJoint914)

HAnimJoint852.addChildren(HAnimJoint905)
HAnimJoint1056 = x3d.HAnimJoint()
HAnimJoint1056.setName("l_sternoclavicular")
HAnimJoint1056.setDEF("hanim_l_sternoclavicular")
HAnimJoint1056.setCenter([0.082,1.4488,-0.0353])
HAnimJoint1056.setUlimit([0,0,0])
HAnimJoint1056.setLlimit([0,0,0])
HAnimSegment1057 = x3d.HAnimSegment()
HAnimSegment1057.setName("l_clavicle")
HAnimSegment1057.setDEF("hanim_l_clavicle")
Transform1058 = x3d.Transform()
Transform1058.setTranslation([0.082,1.4488,-0.0353])
Transform1059 = x3d.Transform()
#Empty Transform
Shape1060 = x3d.Shape()
Shape1060.setUSE("HAnimJointShape")

Transform1059.addChild(Shape1060)

Transform1058.addChildren(Transform1059)

HAnimSegment1057.addChildren(Transform1058)
Shape1061 = x3d.Shape()
LineSet1062 = x3d.LineSet()
LineSet1062.setVertexCount([2])
Coordinate1063 = x3d.Coordinate()
Coordinate1063.setPoint([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424])

LineSet1062.setCoord(Coordinate1063)
#from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA1064 = x3d.ColorRGBA()
ColorRGBA1064.setUSE("HAnimSegmentLineColorRGBA")

LineSet1062.setColor(ColorRGBA1064)

Shape1061.setGeometry(LineSet1062)

HAnimSegment1057.addChildren(Shape1061)

HAnimJoint1056.addChildren(HAnimSegment1057)
HAnimJoint1065 = x3d.HAnimJoint()
HAnimJoint1065.setName("l_acromioclavicular")
HAnimJoint1065.setDEF("hanim_l_acromioclavicular")
HAnimJoint1065.setCenter([0.0962,1.4269,-0.0424])
HAnimJoint1065.setUlimit([0,0,0])
HAnimJoint1065.setLlimit([0,0,0])
HAnimSegment1066 = x3d.HAnimSegment()
HAnimSegment1066.setName("l_scapula")
HAnimSegment1066.setDEF("hanim_l_scapula")
Transform1067 = x3d.Transform()
Transform1067.setTranslation([0.0962,1.4269,-0.0424])
Transform1068 = x3d.Transform()
#Empty Transform
Shape1069 = x3d.Shape()
Shape1069.setUSE("HAnimJointShape")

Transform1068.addChild(Shape1069)

Transform1067.addChildren(Transform1068)

HAnimSegment1066.addChildren(Transform1067)
Shape1070 = x3d.Shape()
LineSet1071 = x3d.LineSet()
LineSet1071.setVertexCount([2])
Coordinate1072 = x3d.Coordinate()
Coordinate1072.setPoint([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387])

LineSet1071.setCoord(Coordinate1072)
#from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA1073 = x3d.ColorRGBA()
ColorRGBA1073.setUSE("HAnimSegmentLineColorRGBA")

LineSet1071.setColor(ColorRGBA1073)

Shape1070.setGeometry(LineSet1071)

HAnimSegment1066.addChildren(Shape1070)
HAnimSite1074 = x3d.HAnimSite()
HAnimSite1074.setName("l_bideltoid")
HAnimSite1074.setDEF("hanim_l_bideltoid")
TouchSensor1075 = x3d.TouchSensor()
TouchSensor1075.setDescription("HAnimSite l_bideltoid")

HAnimSite1074.addChildren(TouchSensor1075)
Shape1076 = x3d.Shape()
Shape1076.setUSE("HAnimSiteShape")

HAnimSite1074.addChildren(Shape1076)

HAnimSegment1066.addChildren(HAnimSite1074)
HAnimSite1077 = x3d.HAnimSite()
HAnimSite1077.setName("l_humeral_lateral_epicondyles")
HAnimSite1077.setDEF("hanim_l_humeral_lateral_epicondyles")
HAnimSite1077.setTranslation([0.228,1.1482,-0.11])
TouchSensor1078 = x3d.TouchSensor()
TouchSensor1078.setDescription("HAnimSite l_humeral_lateral_epicondyles")

HAnimSite1077.addChildren(TouchSensor1078)
Shape1079 = x3d.Shape()
Shape1079.setUSE("HAnimSiteShape")

HAnimSite1077.addChildren(Shape1079)

HAnimSegment1066.addChildren(HAnimSite1077)

HAnimJoint1065.addChildren(HAnimSegment1066)
HAnimJoint1080 = x3d.HAnimJoint()
HAnimJoint1080.setName("l_shoulder")
HAnimJoint1080.setDEF("hanim_l_shoulder")
HAnimJoint1080.setCenter([0.2029,1.4376,-0.0387])
HAnimJoint1080.setUlimit([0,0,0])
HAnimJoint1080.setLlimit([0,0,0])
HAnimSegment1081 = x3d.HAnimSegment()
HAnimSegment1081.setName("l_upperarm")
HAnimSegment1081.setDEF("hanim_l_upperarm")
Transform1082 = x3d.Transform()
Transform1082.setTranslation([0.2029,1.4376,-0.0387])
Transform1083 = x3d.Transform()
#Empty Transform
Shape1084 = x3d.Shape()
Shape1084.setUSE("HAnimJointShape")

Transform1083.addChild(Shape1084)

Transform1082.addChildren(Transform1083)

HAnimSegment1081.addChildren(Transform1082)
Shape1085 = x3d.Shape()
LineSet1086 = x3d.LineSet()
LineSet1086.setVertexCount([2])
Coordinate1087 = x3d.Coordinate()
Coordinate1087.setPoint([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682])

LineSet1086.setCoord(Coordinate1087)
#from l_shoulder to l_elbow vertices 2
ColorRGBA1088 = x3d.ColorRGBA()
ColorRGBA1088.setUSE("HAnimSegmentLineColorRGBA")

LineSet1086.setColor(ColorRGBA1088)

Shape1085.setGeometry(LineSet1086)

HAnimSegment1081.addChildren(Shape1085)
HAnimSite1089 = x3d.HAnimSite()
HAnimSite1089.setName("l_humeral_medial_epicondyles")
HAnimSite1089.setDEF("hanim_l_humeral_medial_epicondyles")
HAnimSite1089.setTranslation([0.1735,1.1272,-0.1113])
TouchSensor1090 = x3d.TouchSensor()
TouchSensor1090.setDescription("HAnimSite l_humeral_medial_epicondyles")

HAnimSite1089.addChildren(TouchSensor1090)
Shape1091 = x3d.Shape()
Shape1091.setUSE("HAnimSiteShape")

HAnimSite1089.addChildren(Shape1091)

HAnimSegment1081.addChildren(HAnimSite1089)
HAnimSite1092 = x3d.HAnimSite()
HAnimSite1092.setName("l_olecranon")
HAnimSite1092.setDEF("hanim_l_olecranon")
HAnimSite1092.setTranslation([-0.1962,1.1375,-0.1123])
TouchSensor1093 = x3d.TouchSensor()
TouchSensor1093.setDescription("HAnimSite l_olecranon")

HAnimSite1092.addChildren(TouchSensor1093)
Shape1094 = x3d.Shape()
Shape1094.setUSE("HAnimSiteShape")

HAnimSite1092.addChildren(Shape1094)

HAnimSegment1081.addChildren(HAnimSite1092)
HAnimSite1095 = x3d.HAnimSite()
HAnimSite1095.setName("l_radial_styloid")
HAnimSite1095.setDEF("hanim_l_radial_styloid")
HAnimSite1095.setTranslation([0.1901,0.8645,-0.0415])
TouchSensor1096 = x3d.TouchSensor()
TouchSensor1096.setDescription("HAnimSite l_radial_styloid")

HAnimSite1095.addChildren(TouchSensor1096)
Shape1097 = x3d.Shape()
Shape1097.setUSE("HAnimSiteShape")

HAnimSite1095.addChildren(Shape1097)

HAnimSegment1081.addChildren(HAnimSite1095)
HAnimSite1098 = x3d.HAnimSite()
HAnimSite1098.setName("l_radiale")
HAnimSite1098.setDEF("hanim_l_radiale")
HAnimSite1098.setTranslation([0.2182,1.1212,-0.1167])
TouchSensor1099 = x3d.TouchSensor()
TouchSensor1099.setDescription("HAnimSite l_radiale")

HAnimSite1098.addChildren(TouchSensor1099)
Shape1100 = x3d.Shape()
Shape1100.setUSE("HAnimSiteShape")

HAnimSite1098.addChildren(Shape1100)

HAnimSegment1081.addChildren(HAnimSite1098)

HAnimJoint1080.addChildren(HAnimSegment1081)
HAnimJoint1101 = x3d.HAnimJoint()
HAnimJoint1101.setName("l_elbow")
HAnimJoint1101.setDEF("hanim_l_elbow")
HAnimJoint1101.setCenter([0.2014,1.1357,-0.0682])
HAnimJoint1101.setUlimit([0,0,0])
HAnimJoint1101.setLlimit([0,0,0])
HAnimSegment1102 = x3d.HAnimSegment()
HAnimSegment1102.setName("l_forearm")
HAnimSegment1102.setDEF("hanim_l_forearm")
Transform1103 = x3d.Transform()
Transform1103.setTranslation([0.2014,1.1357,-0.0682])
Transform1104 = x3d.Transform()
#Empty Transform
Shape1105 = x3d.Shape()
Shape1105.setUSE("HAnimJointShape")

Transform1104.addChild(Shape1105)

Transform1103.addChildren(Transform1104)

HAnimSegment1102.addChildren(Transform1103)
Shape1106 = x3d.Shape()
LineSet1107 = x3d.LineSet()
LineSet1107.setVertexCount([2])
Coordinate1108 = x3d.Coordinate()
Coordinate1108.setPoint([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583])

LineSet1107.setCoord(Coordinate1108)
#from l_elbow to l_radiocarpal vertices 2
ColorRGBA1109 = x3d.ColorRGBA()
ColorRGBA1109.setUSE("HAnimSegmentLineColorRGBA")

LineSet1107.setColor(ColorRGBA1109)

Shape1106.setGeometry(LineSet1107)

HAnimSegment1102.addChildren(Shape1106)
HAnimSite1110 = x3d.HAnimSite()
HAnimSite1110.setName("l_ulnar_styloid")
HAnimSite1110.setDEF("hanim_l_ulnar_styloid")
HAnimSite1110.setTranslation([-0.2142,0.8529,-0.0648])
TouchSensor1111 = x3d.TouchSensor()
TouchSensor1111.setDescription("HAnimSite l_ulnar_styloid")

HAnimSite1110.addChildren(TouchSensor1111)
Shape1112 = x3d.Shape()
Shape1112.setUSE("HAnimSiteShape")

HAnimSite1110.addChildren(Shape1112)

HAnimSegment1102.addChildren(HAnimSite1110)

HAnimJoint1101.addChildren(HAnimSegment1102)
HAnimJoint1113 = x3d.HAnimJoint()
HAnimJoint1113.setName("l_radiocarpal")
HAnimJoint1113.setDEF("hanim_l_radiocarpal")
HAnimJoint1113.setCenter([0.1984,0.8663,-0.0583])
HAnimJoint1113.setUlimit([0,0,0])
HAnimJoint1113.setLlimit([0,0,0])
HAnimSegment1114 = x3d.HAnimSegment()
HAnimSegment1114.setName("l_carpal")
HAnimSegment1114.setDEF("hanim_l_carpal")
Transform1115 = x3d.Transform()
Transform1115.setScale([0.2,0.2,0.2])
Transform1115.setTranslation([0.2,0.85,-0.05])
Transform1115.setRotation([0,0,1,-3.14])
#Transform left hand
Transform1116 = x3d.Transform()
Transform1116.setRotation([0,1,0,-1.57])
#Transform left hand
Shape1117 = x3d.Shape()
Shape1117.setUSE("HAnimJointShape")

Transform1116.addChild(Shape1117)

Transform1115.addChildren(Transform1116)

HAnimSegment1114.addChildren(Transform1115)
Shape1118 = x3d.Shape()
LineSet1119 = x3d.LineSet()
LineSet1119.setVertexCount([2])
Coordinate1120 = x3d.Coordinate()
Coordinate1120.setPoint([0.1984,0.8663,-0.0583,0.1811,0.6975,-0.0826])

LineSet1119.setCoord(Coordinate1120)
#from l_radiocarpal to l_midcarpal_1 vertices 2
ColorRGBA1121 = x3d.ColorRGBA()
ColorRGBA1121.setUSE("HAnimSegmentLineColorRGBA")

LineSet1119.setColor(ColorRGBA1121)

Shape1118.setGeometry(LineSet1119)

HAnimSegment1114.addChildren(Shape1118)
Shape1122 = x3d.Shape()
LineSet1123 = x3d.LineSet()
LineSet1123.setVertexCount([2])
Coordinate1124 = x3d.Coordinate()
Coordinate1124.setPoint([0.1984,0.8663,-0.0583,0.1811,0.6984,-0.0935])

LineSet1123.setCoord(Coordinate1124)
#from l_radiocarpal to l_midcarpal_2 vertices 2
ColorRGBA1125 = x3d.ColorRGBA()
ColorRGBA1125.setUSE("HAnimSegmentLineColorRGBA")

LineSet1123.setColor(ColorRGBA1125)

Shape1122.setGeometry(LineSet1123)

HAnimSegment1114.addChildren(Shape1122)
Shape1126 = x3d.Shape()
LineSet1127 = x3d.LineSet()
LineSet1127.setVertexCount([2])
Coordinate1128 = x3d.Coordinate()
Coordinate1128.setPoint([0.1984,0.8663,-0.0583,0.1809,0.7,-0.1067])

LineSet1127.setCoord(Coordinate1128)
#from l_radiocarpal to l_midcarpal_3 vertices 2
ColorRGBA1129 = x3d.ColorRGBA()
ColorRGBA1129.setUSE("HAnimSegmentLineColorRGBA")

LineSet1127.setColor(ColorRGBA1129)

Shape1126.setGeometry(LineSet1127)

HAnimSegment1114.addChildren(Shape1126)
Shape1130 = x3d.Shape()
LineSet1131 = x3d.LineSet()
LineSet1131.setVertexCount([2])
Coordinate1132 = x3d.Coordinate()
Coordinate1132.setPoint([0.1984,0.8663,-0.0583,0.1809,0.6973,-0.1276])

LineSet1131.setCoord(Coordinate1132)
#from l_radiocarpal to l_midcarpal_4_5 vertices 2
ColorRGBA1133 = x3d.ColorRGBA()
ColorRGBA1133.setUSE("HAnimSegmentLineColorRGBA")

LineSet1131.setColor(ColorRGBA1133)

Shape1130.setGeometry(LineSet1131)

HAnimSegment1114.addChildren(Shape1130)

HAnimJoint1113.addChildren(HAnimSegment1114)
HAnimJoint1134 = x3d.HAnimJoint()
HAnimJoint1134.setName("l_midcarpal_1")
HAnimJoint1134.setDEF("hanim_l_midcarpal_1")
HAnimJoint1134.setCenter([0.1811,0.6975,-0.0826])
HAnimJoint1134.setUlimit([0,0,0])
HAnimJoint1134.setLlimit([0,0,0])
HAnimSegment1135 = x3d.HAnimSegment()
HAnimSegment1135.setName("l_trapezium")
HAnimSegment1135.setDEF("hanim_l_trapezium")
Transform1136 = x3d.Transform()
Transform1136.setTranslation([0.1811,0.6975,-0.0826])
Transform1137 = x3d.Transform()
#Empty Transform
Shape1138 = x3d.Shape()
Shape1138.setUSE("HAnimJointShape")

Transform1137.addChild(Shape1138)

Transform1136.addChildren(Transform1137)

HAnimSegment1135.addChildren(Transform1136)
Shape1139 = x3d.Shape()
LineSet1140 = x3d.LineSet()
LineSet1140.setVertexCount([2])
Coordinate1141 = x3d.Coordinate()
Coordinate1141.setPoint([0.1811,0.6975,-0.0826,0.1924,0.8472,-0.0534])

LineSet1140.setCoord(Coordinate1141)
#from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
ColorRGBA1142 = x3d.ColorRGBA()
ColorRGBA1142.setUSE("HAnimSegmentLineColorRGBA")

LineSet1140.setColor(ColorRGBA1142)

Shape1139.setGeometry(LineSet1140)

HAnimSegment1135.addChildren(Shape1139)

HAnimJoint1134.addChildren(HAnimSegment1135)
HAnimJoint1143 = x3d.HAnimJoint()
HAnimJoint1143.setName("l_carpometacarpal_1")
HAnimJoint1143.setDEF("hanim_l_carpometacarpal_1")
HAnimJoint1143.setCenter([0.1924,0.8472,-0.0534])
HAnimJoint1143.setUlimit([0,0,0])
HAnimJoint1143.setLlimit([0,0,0])
HAnimSegment1144 = x3d.HAnimSegment()
HAnimSegment1144.setName("l_metacarpal_1")
HAnimSegment1144.setDEF("hanim_l_metacarpal_1")
Transform1145 = x3d.Transform()
Transform1145.setTranslation([0.1924,0.8472,-0.0534])
Transform1146 = x3d.Transform()
#Empty Transform
Shape1147 = x3d.Shape()
Shape1147.setUSE("HAnimJointShape")

Transform1146.addChild(Shape1147)

Transform1145.addChildren(Transform1146)

HAnimSegment1144.addChildren(Transform1145)
Shape1148 = x3d.Shape()
LineSet1149 = x3d.LineSet()
LineSet1149.setVertexCount([2])
Coordinate1150 = x3d.Coordinate()
Coordinate1150.setPoint([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246])

LineSet1149.setCoord(Coordinate1150)
#from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA1151 = x3d.ColorRGBA()
ColorRGBA1151.setUSE("HAnimSegmentLineColorRGBA")

LineSet1149.setColor(ColorRGBA1151)

Shape1148.setGeometry(LineSet1149)

HAnimSegment1144.addChildren(Shape1148)

HAnimJoint1143.addChildren(HAnimSegment1144)
HAnimJoint1152 = x3d.HAnimJoint()
HAnimJoint1152.setName("l_metacarpophalangeal_1")
HAnimJoint1152.setDEF("hanim_l_metacarpophalangeal_1")
HAnimJoint1152.setCenter([0.1951,0.8226,0.0246])
HAnimJoint1152.setUlimit([0,0,0])
HAnimJoint1152.setLlimit([0,0,0])
HAnimSegment1153 = x3d.HAnimSegment()
HAnimSegment1153.setName("l_carpal_proximal_phalanx_1")
HAnimSegment1153.setDEF("hanim_l_carpal_proximal_phalanx_1")
Transform1154 = x3d.Transform()
Transform1154.setTranslation([0.1951,0.8226,0.0246])
Transform1155 = x3d.Transform()
#Empty Transform
Shape1156 = x3d.Shape()
Shape1156.setUSE("HAnimJointShape")

Transform1155.addChild(Shape1156)

Transform1154.addChildren(Transform1155)

HAnimSegment1153.addChildren(Transform1154)
Shape1157 = x3d.Shape()
LineSet1158 = x3d.LineSet()
LineSet1158.setVertexCount([2])
Coordinate1159 = x3d.Coordinate()
Coordinate1159.setPoint([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464])

LineSet1158.setCoord(Coordinate1159)
#from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA1160 = x3d.ColorRGBA()
ColorRGBA1160.setUSE("HAnimSegmentLineColorRGBA")

LineSet1158.setColor(ColorRGBA1160)

Shape1157.setGeometry(LineSet1158)

HAnimSegment1153.addChildren(Shape1157)
HAnimSite1161 = x3d.HAnimSite()
HAnimSite1161.setName("l_carpal_distal_phalanx_1_tip")
HAnimSite1161.setDEF("hanim_l_carpal_distal_phalanx_1_tip")
TouchSensor1162 = x3d.TouchSensor()
TouchSensor1162.setDescription("HAnimSite l_carpal_distal_phalanx_1_tip")

HAnimSite1161.addChildren(TouchSensor1162)
Shape1163 = x3d.Shape()
Shape1163.setUSE("HAnimSiteShape")

HAnimSite1161.addChildren(Shape1163)

HAnimSegment1153.addChildren(HAnimSite1161)

HAnimJoint1152.addChildren(HAnimSegment1153)
HAnimJoint1164 = x3d.HAnimJoint()
HAnimJoint1164.setName("l_carpal_interphalangeal_1")
HAnimJoint1164.setDEF("hanim_l_carpal_interphalangeal_1")
HAnimJoint1164.setCenter([0.1955,0.8159,0.0464])
HAnimJoint1164.setUlimit([0,0,0])
HAnimJoint1164.setLlimit([0,0,0])

HAnimJoint1152.addChildren(HAnimJoint1164)

HAnimJoint1143.addChildren(HAnimJoint1152)

HAnimJoint1134.addChildren(HAnimJoint1143)

HAnimJoint1113.addChildren(HAnimJoint1134)
HAnimJoint1165 = x3d.HAnimJoint()
HAnimJoint1165.setName("l_midcarpal_2")
HAnimJoint1165.setDEF("hanim_l_midcarpal_2")
HAnimJoint1165.setCenter([0.1811,0.6984,-0.0935])
HAnimJoint1165.setUlimit([0,0,0])
HAnimJoint1165.setLlimit([0,0,0])
HAnimSegment1166 = x3d.HAnimSegment()
HAnimSegment1166.setName("l_trapezoid")
HAnimSegment1166.setDEF("hanim_l_trapezoid")
Transform1167 = x3d.Transform()
Transform1167.setTranslation([0.1811,0.6984,-0.0935])
Transform1168 = x3d.Transform()
#Empty Transform
Shape1169 = x3d.Shape()
Shape1169.setUSE("HAnimJointShape")

Transform1168.addChild(Shape1169)

Transform1167.addChildren(Transform1168)

HAnimSegment1166.addChildren(Transform1167)
Shape1170 = x3d.Shape()
LineSet1171 = x3d.LineSet()
LineSet1171.setVertexCount([2])
Coordinate1172 = x3d.Coordinate()
Coordinate1172.setPoint([0.1811,0.6984,-0.0935,0.1983,0.8024,-0.028])

LineSet1171.setCoord(Coordinate1172)
#from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
ColorRGBA1173 = x3d.ColorRGBA()
ColorRGBA1173.setUSE("HAnimSegmentLineColorRGBA")

LineSet1171.setColor(ColorRGBA1173)

Shape1170.setGeometry(LineSet1171)

HAnimSegment1166.addChildren(Shape1170)
HAnimSite1174 = x3d.HAnimSite()
HAnimSite1174.setName("l_metacarpal_phalanx_2")
HAnimSite1174.setDEF("hanim_l_metacarpal_phalanx_2")
HAnimSite1174.setTranslation([0.2009,0.8139,-0.0237])
TouchSensor1175 = x3d.TouchSensor()
TouchSensor1175.setDescription("HAnimSite l_metacarpal_phalanx_2")

HAnimSite1174.addChildren(TouchSensor1175)
Shape1176 = x3d.Shape()
Shape1176.setUSE("HAnimSiteShape")

HAnimSite1174.addChildren(Shape1176)

HAnimSegment1166.addChildren(HAnimSite1174)

HAnimJoint1165.addChildren(HAnimSegment1166)
HAnimJoint1177 = x3d.HAnimJoint()
HAnimJoint1177.setName("l_carpometacarpal_2")
HAnimJoint1177.setDEF("hanim_l_carpometacarpal_2")
HAnimJoint1177.setCenter([0.1983,0.8024,-0.028])
HAnimJoint1177.setUlimit([0,0,0])
HAnimJoint1177.setLlimit([0,0,0])
HAnimSegment1178 = x3d.HAnimSegment()
HAnimSegment1178.setName("l_metacarpal_2")
HAnimSegment1178.setDEF("hanim_l_metacarpal_2")
Transform1179 = x3d.Transform()
Transform1179.setTranslation([0.1983,0.8024,-0.028])
Transform1180 = x3d.Transform()
#Empty Transform
Shape1181 = x3d.Shape()
Shape1181.setUSE("HAnimJointShape")

Transform1180.addChild(Shape1181)

Transform1179.addChildren(Transform1180)

HAnimSegment1178.addChildren(Transform1179)
Shape1182 = x3d.Shape()
LineSet1183 = x3d.LineSet()
LineSet1183.setVertexCount([2])
Coordinate1184 = x3d.Coordinate()
Coordinate1184.setPoint([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028])

LineSet1183.setCoord(Coordinate1184)
#from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA1185 = x3d.ColorRGBA()
ColorRGBA1185.setUSE("HAnimSegmentLineColorRGBA")

LineSet1183.setColor(ColorRGBA1185)

Shape1182.setGeometry(LineSet1183)

HAnimSegment1178.addChildren(Shape1182)

HAnimJoint1177.addChildren(HAnimSegment1178)
HAnimJoint1186 = x3d.HAnimJoint()
HAnimJoint1186.setName("l_metacarpophalangeal_2")
HAnimJoint1186.setDEF("hanim_l_metacarpophalangeal_2")
HAnimJoint1186.setCenter([0.1983,0.7815,-0.028])
HAnimJoint1186.setUlimit([0,0,0])
HAnimJoint1186.setLlimit([0,0,0])
HAnimSegment1187 = x3d.HAnimSegment()
HAnimSegment1187.setName("l_carpal_proximal_phalanx_2")
HAnimSegment1187.setDEF("hanim_l_carpal_proximal_phalanx_2")
Transform1188 = x3d.Transform()
Transform1188.setTranslation([0.1983,0.7815,-0.028])
Transform1189 = x3d.Transform()
#Empty Transform
Shape1190 = x3d.Shape()
Shape1190.setUSE("HAnimJointShape")

Transform1189.addChild(Shape1190)

Transform1188.addChildren(Transform1189)

HAnimSegment1187.addChildren(Transform1188)
Shape1191 = x3d.Shape()
LineSet1192 = x3d.LineSet()
LineSet1192.setVertexCount([2])
Coordinate1193 = x3d.Coordinate()
Coordinate1193.setPoint([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248])

LineSet1192.setCoord(Coordinate1193)
#from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA1194 = x3d.ColorRGBA()
ColorRGBA1194.setUSE("HAnimSegmentLineColorRGBA")

LineSet1192.setColor(ColorRGBA1194)

Shape1191.setGeometry(LineSet1192)

HAnimSegment1187.addChildren(Shape1191)

HAnimJoint1186.addChildren(HAnimSegment1187)
HAnimJoint1195 = x3d.HAnimJoint()
HAnimJoint1195.setName("l_carpal_proximal_interphalangeal_2")
HAnimJoint1195.setDEF("hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint1195.setCenter([0.2017,0.7363,-0.0248])
HAnimJoint1195.setUlimit([0,0,0])
HAnimJoint1195.setLlimit([0,0,0])
HAnimSegment1196 = x3d.HAnimSegment()
HAnimSegment1196.setName("l_carpal_middle_phalanx_2")
HAnimSegment1196.setDEF("hanim_l_carpal_middle_phalanx_2")
Transform1197 = x3d.Transform()
Transform1197.setTranslation([0.2017,0.7363,-0.0248])
Transform1198 = x3d.Transform()
#Empty Transform
Shape1199 = x3d.Shape()
Shape1199.setUSE("HAnimJointShape")

Transform1198.addChild(Shape1199)

Transform1197.addChildren(Transform1198)

HAnimSegment1196.addChildren(Transform1197)
Shape1200 = x3d.Shape()
LineSet1201 = x3d.LineSet()
LineSet1201.setVertexCount([2])
Coordinate1202 = x3d.Coordinate()
Coordinate1202.setPoint([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236])

LineSet1201.setCoord(Coordinate1202)
#from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA1203 = x3d.ColorRGBA()
ColorRGBA1203.setUSE("HAnimSegmentLineColorRGBA")

LineSet1201.setColor(ColorRGBA1203)

Shape1200.setGeometry(LineSet1201)

HAnimSegment1196.addChildren(Shape1200)
HAnimSite1204 = x3d.HAnimSite()
HAnimSite1204.setName("l_carpal_distal_phalanx_2_tip")
HAnimSite1204.setDEF("hanim_l_carpal_distal_phalanx_2_tip")
TouchSensor1205 = x3d.TouchSensor()
TouchSensor1205.setDescription("HAnimSite l_carpal_distal_phalanx_2_tip")

HAnimSite1204.addChildren(TouchSensor1205)
Shape1206 = x3d.Shape()
Shape1206.setUSE("HAnimSiteShape")

HAnimSite1204.addChildren(Shape1206)

HAnimSegment1196.addChildren(HAnimSite1204)
HAnimSite1207 = x3d.HAnimSite()
HAnimSite1207.setName("l_dactylion")
HAnimSite1207.setDEF("hanim_l_dactylion")
HAnimSite1207.setTranslation([0.2056,0.6743,-0.0482])
TouchSensor1208 = x3d.TouchSensor()
TouchSensor1208.setDescription("HAnimSite l_dactylion")

HAnimSite1207.addChildren(TouchSensor1208)
Shape1209 = x3d.Shape()
Shape1209.setUSE("HAnimSiteShape")

HAnimSite1207.addChildren(Shape1209)

HAnimSegment1196.addChildren(HAnimSite1207)

HAnimJoint1195.addChildren(HAnimSegment1196)
HAnimJoint1210 = x3d.HAnimJoint()
HAnimJoint1210.setName("l_carpal_distal_interphalangeal_2")
HAnimJoint1210.setDEF("hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint1210.setCenter([0.2028,0.7139,-0.0236])
HAnimJoint1210.setUlimit([0,0,0])
HAnimJoint1210.setLlimit([0,0,0])

HAnimJoint1195.addChildren(HAnimJoint1210)

HAnimJoint1186.addChildren(HAnimJoint1195)

HAnimJoint1177.addChildren(HAnimJoint1186)

HAnimJoint1165.addChildren(HAnimJoint1177)

HAnimJoint1113.addChildren(HAnimJoint1165)
HAnimJoint1211 = x3d.HAnimJoint()
HAnimJoint1211.setName("l_midcarpal_3")
HAnimJoint1211.setDEF("hanim_l_midcarpal_3")
HAnimJoint1211.setCenter([0.1809,0.7,-0.1067])
HAnimJoint1211.setUlimit([0,0,0])
HAnimJoint1211.setLlimit([0,0,0])
HAnimSegment1212 = x3d.HAnimSegment()
HAnimSegment1212.setName("l_capitate")
HAnimSegment1212.setDEF("hanim_l_capitate")
Transform1213 = x3d.Transform()
Transform1213.setTranslation([0.1809,0.7,-0.1067])
Transform1214 = x3d.Transform()
#Empty Transform
Shape1215 = x3d.Shape()
Shape1215.setUSE("HAnimJointShape")

Transform1214.addChild(Shape1215)

Transform1213.addChildren(Transform1214)

HAnimSegment1212.addChildren(Transform1213)
Shape1216 = x3d.Shape()
LineSet1217 = x3d.LineSet()
LineSet1217.setVertexCount([2])
Coordinate1218 = x3d.Coordinate()
Coordinate1218.setPoint([0.1809,0.7,-0.1067,0.1987,0.8029,-0.053])

LineSet1217.setCoord(Coordinate1218)
#from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
ColorRGBA1219 = x3d.ColorRGBA()
ColorRGBA1219.setUSE("HAnimSegmentLineColorRGBA")

LineSet1217.setColor(ColorRGBA1219)

Shape1216.setGeometry(LineSet1217)

HAnimSegment1212.addChildren(Shape1216)
HAnimSite1220 = x3d.HAnimSite()
HAnimSite1220.setName("l_metacarpal_phalanx_3")
HAnimSite1220.setDEF("hanim_l_metacarpal_phalanx_3")
TouchSensor1221 = x3d.TouchSensor()
TouchSensor1221.setDescription("HAnimSite l_metacarpal_phalanx_3")

HAnimSite1220.addChildren(TouchSensor1221)
Shape1222 = x3d.Shape()
Shape1222.setUSE("HAnimSiteShape")

HAnimSite1220.addChildren(Shape1222)

HAnimSegment1212.addChildren(HAnimSite1220)

HAnimJoint1211.addChildren(HAnimSegment1212)
HAnimJoint1223 = x3d.HAnimJoint()
HAnimJoint1223.setName("l_carpometacarpal_3")
HAnimJoint1223.setDEF("hanim_l_carpometacarpal_3")
HAnimJoint1223.setCenter([0.1987,0.8029,-0.053])
HAnimJoint1223.setUlimit([0,0,0])
HAnimJoint1223.setLlimit([0,0,0])
HAnimSegment1224 = x3d.HAnimSegment()
HAnimSegment1224.setName("l_metacarpal_3")
HAnimSegment1224.setDEF("hanim_l_metacarpal_3")
Transform1225 = x3d.Transform()
Transform1225.setTranslation([0.1987,0.8029,-0.053])
Transform1226 = x3d.Transform()
#Empty Transform
Shape1227 = x3d.Shape()
Shape1227.setUSE("HAnimJointShape")

Transform1226.addChild(Shape1227)

Transform1225.addChildren(Transform1226)

HAnimSegment1224.addChildren(Transform1225)
Shape1228 = x3d.Shape()
LineSet1229 = x3d.LineSet()
LineSet1229.setVertexCount([2])
Coordinate1230 = x3d.Coordinate()
Coordinate1230.setPoint([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053])

LineSet1229.setCoord(Coordinate1230)
#from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA1231 = x3d.ColorRGBA()
ColorRGBA1231.setUSE("HAnimSegmentLineColorRGBA")

LineSet1229.setColor(ColorRGBA1231)

Shape1228.setGeometry(LineSet1229)

HAnimSegment1224.addChildren(Shape1228)

HAnimJoint1223.addChildren(HAnimSegment1224)
HAnimJoint1232 = x3d.HAnimJoint()
HAnimJoint1232.setName("l_metacarpophalangeal_3")
HAnimJoint1232.setDEF("hanim_l_metacarpophalangeal_3")
HAnimJoint1232.setCenter([0.1987,0.7818,-0.053])
HAnimJoint1232.setUlimit([0,0,0])
HAnimJoint1232.setLlimit([0,0,0])
HAnimSegment1233 = x3d.HAnimSegment()
HAnimSegment1233.setName("l_carpal_proximal_phalanx_3")
HAnimSegment1233.setDEF("hanim_l_carpal_proximal_phalanx_3")
Transform1234 = x3d.Transform()
Transform1234.setTranslation([0.1987,0.7818,-0.053])
Transform1235 = x3d.Transform()
#Empty Transform
Shape1236 = x3d.Shape()
Shape1236.setUSE("HAnimJointShape")

Transform1235.addChild(Shape1236)

Transform1234.addChildren(Transform1235)

HAnimSegment1233.addChildren(Transform1234)
Shape1237 = x3d.Shape()
LineSet1238 = x3d.LineSet()
LineSet1238.setVertexCount([2])
Coordinate1239 = x3d.Coordinate()
Coordinate1239.setPoint([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503])

LineSet1238.setCoord(Coordinate1239)
#from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA1240 = x3d.ColorRGBA()
ColorRGBA1240.setUSE("HAnimSegmentLineColorRGBA")

LineSet1238.setColor(ColorRGBA1240)

Shape1237.setGeometry(LineSet1238)

HAnimSegment1233.addChildren(Shape1237)

HAnimJoint1232.addChildren(HAnimSegment1233)
HAnimJoint1241 = x3d.HAnimJoint()
HAnimJoint1241.setName("l_carpal_proximal_interphalangeal_3")
HAnimJoint1241.setDEF("hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint1241.setCenter([0.2013,0.7273,-0.0503])
HAnimJoint1241.setUlimit([0,0,0])
HAnimJoint1241.setLlimit([0,0,0])
HAnimSegment1242 = x3d.HAnimSegment()
HAnimSegment1242.setName("l_carpal_middle_phalanx_3")
HAnimSegment1242.setDEF("hanim_l_carpal_middle_phalanx_3")
Transform1243 = x3d.Transform()
Transform1243.setTranslation([0.2013,0.7273,-0.0503])
Transform1244 = x3d.Transform()
#Empty Transform
Shape1245 = x3d.Shape()
Shape1245.setUSE("HAnimJointShape")

Transform1244.addChild(Shape1245)

Transform1243.addChildren(Transform1244)

HAnimSegment1242.addChildren(Transform1243)
Shape1246 = x3d.Shape()
LineSet1247 = x3d.LineSet()
LineSet1247.setVertexCount([2])
Coordinate1248 = x3d.Coordinate()
Coordinate1248.setPoint([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494])

LineSet1247.setCoord(Coordinate1248)
#from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA1249 = x3d.ColorRGBA()
ColorRGBA1249.setUSE("HAnimSegmentLineColorRGBA")

LineSet1247.setColor(ColorRGBA1249)

Shape1246.setGeometry(LineSet1247)

HAnimSegment1242.addChildren(Shape1246)
HAnimSite1250 = x3d.HAnimSite()
HAnimSite1250.setName("l_carpal_distal_phalanx_3_tip")
HAnimSite1250.setDEF("hanim_l_carpal_distal_phalanx_3_tip")
TouchSensor1251 = x3d.TouchSensor()
TouchSensor1251.setDescription("HAnimSite l_carpal_distal_phalanx_3_tip")

HAnimSite1250.addChildren(TouchSensor1251)
Shape1252 = x3d.Shape()
Shape1252.setUSE("HAnimSiteShape")

HAnimSite1250.addChildren(Shape1252)

HAnimSegment1242.addChildren(HAnimSite1250)

HAnimJoint1241.addChildren(HAnimSegment1242)
HAnimJoint1253 = x3d.HAnimJoint()
HAnimJoint1253.setName("l_carpal_distal_interphalangeal_3")
HAnimJoint1253.setDEF("hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint1253.setCenter([0.2026,0.7011,-0.0494])
HAnimJoint1253.setUlimit([0,0,0])
HAnimJoint1253.setLlimit([0,0,0])

HAnimJoint1241.addChildren(HAnimJoint1253)

HAnimJoint1232.addChildren(HAnimJoint1241)

HAnimJoint1223.addChildren(HAnimJoint1232)

HAnimJoint1211.addChildren(HAnimJoint1223)

HAnimJoint1113.addChildren(HAnimJoint1211)
HAnimJoint1254 = x3d.HAnimJoint()
HAnimJoint1254.setName("l_midcarpal_4_5")
HAnimJoint1254.setDEF("hanim_l_midcarpal_4_5")
HAnimJoint1254.setCenter([0.1809,0.6973,-0.1276])
HAnimJoint1254.setUlimit([0,0,0])
HAnimJoint1254.setLlimit([0,0,0])
HAnimSegment1255 = x3d.HAnimSegment()
HAnimSegment1255.setName("l_hamate")
HAnimSegment1255.setDEF("hanim_l_hamate")
Transform1256 = x3d.Transform()
Transform1256.setTranslation([0.1809,0.6973,-0.1276])
Transform1257 = x3d.Transform()
#Empty Transform
Shape1258 = x3d.Shape()
Shape1258.setUSE("HAnimJointShape")

Transform1257.addChild(Shape1258)

Transform1256.addChildren(Transform1257)

HAnimSegment1255.addChildren(Transform1256)
Shape1259 = x3d.Shape()
LineSet1260 = x3d.LineSet()
LineSet1260.setVertexCount([2])
Coordinate1261 = x3d.Coordinate()
Coordinate1261.setPoint([0.1809,0.6973,-0.1276,0.1956,0.8019,-0.0794])

LineSet1260.setCoord(Coordinate1261)
#from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
ColorRGBA1262 = x3d.ColorRGBA()
ColorRGBA1262.setUSE("HAnimSegmentLineColorRGBA")

LineSet1260.setColor(ColorRGBA1262)

Shape1259.setGeometry(LineSet1260)

HAnimSegment1255.addChildren(Shape1259)
Shape1263 = x3d.Shape()
LineSet1264 = x3d.LineSet()
LineSet1264.setVertexCount([2])
Coordinate1265 = x3d.Coordinate()
Coordinate1265.setPoint([0.1809,0.6973,-0.1276,0.1925,0.8066,-0.1036])

LineSet1264.setCoord(Coordinate1265)
#from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
ColorRGBA1266 = x3d.ColorRGBA()
ColorRGBA1266.setUSE("HAnimSegmentLineColorRGBA")

LineSet1264.setColor(ColorRGBA1266)

Shape1263.setGeometry(LineSet1264)

HAnimSegment1255.addChildren(Shape1263)
HAnimSite1267 = x3d.HAnimSite()
HAnimSite1267.setName("l_metacarpal_phalanx_5")
HAnimSite1267.setDEF("hanim_l_metacarpal_phalanx_5")
HAnimSite1267.setTranslation([0.1929,0.786,-0.1122])
TouchSensor1268 = x3d.TouchSensor()
TouchSensor1268.setDescription("HAnimSite l_metacarpal_phalanx_5")

HAnimSite1267.addChildren(TouchSensor1268)
Shape1269 = x3d.Shape()
Shape1269.setUSE("HAnimSiteShape")

HAnimSite1267.addChildren(Shape1269)

HAnimSegment1255.addChildren(HAnimSite1267)

HAnimJoint1254.addChildren(HAnimSegment1255)
HAnimJoint1270 = x3d.HAnimJoint()
HAnimJoint1270.setName("l_carpometacarpal_4")
HAnimJoint1270.setDEF("hanim_l_carpometacarpal_4")
HAnimJoint1270.setCenter([0.1956,0.8019,-0.0794])
HAnimJoint1270.setUlimit([0,0,0])
HAnimJoint1270.setLlimit([0,0,0])
HAnimSegment1271 = x3d.HAnimSegment()
HAnimSegment1271.setName("l_metacarpal_4")
HAnimSegment1271.setDEF("hanim_l_metacarpal_4")
Transform1272 = x3d.Transform()
Transform1272.setTranslation([0.1956,0.8019,-0.0794])
Transform1273 = x3d.Transform()
#Empty Transform
Shape1274 = x3d.Shape()
Shape1274.setUSE("HAnimJointShape")

Transform1273.addChild(Shape1274)

Transform1272.addChildren(Transform1273)

HAnimSegment1271.addChildren(Transform1272)
Shape1275 = x3d.Shape()
LineSet1276 = x3d.LineSet()
LineSet1276.setVertexCount([2])
Coordinate1277 = x3d.Coordinate()
Coordinate1277.setPoint([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794])

LineSet1276.setCoord(Coordinate1277)
#from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA1278 = x3d.ColorRGBA()
ColorRGBA1278.setUSE("HAnimSegmentLineColorRGBA")

LineSet1276.setColor(ColorRGBA1278)

Shape1275.setGeometry(LineSet1276)

HAnimSegment1271.addChildren(Shape1275)

HAnimJoint1270.addChildren(HAnimSegment1271)
HAnimJoint1279 = x3d.HAnimJoint()
HAnimJoint1279.setName("l_metacarpophalangeal_4")
HAnimJoint1279.setDEF("hanim_l_metacarpophalangeal_4")
HAnimJoint1279.setCenter([0.1956,0.7815,-0.0794])
HAnimJoint1279.setUlimit([0,0,0])
HAnimJoint1279.setLlimit([0,0,0])
HAnimSegment1280 = x3d.HAnimSegment()
HAnimSegment1280.setName("l_carpal_proximal_phalanx_4")
HAnimSegment1280.setDEF("hanim_l_carpal_proximal_phalanx_4")
Transform1281 = x3d.Transform()
Transform1281.setTranslation([0.1956,0.7815,-0.0794])
Transform1282 = x3d.Transform()
#Empty Transform
Shape1283 = x3d.Shape()
Shape1283.setUSE("HAnimJointShape")

Transform1282.addChild(Shape1283)

Transform1281.addChildren(Transform1282)

HAnimSegment1280.addChildren(Transform1281)
Shape1284 = x3d.Shape()
LineSet1285 = x3d.LineSet()
LineSet1285.setVertexCount([2])
Coordinate1286 = x3d.Coordinate()
Coordinate1286.setPoint([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777])

LineSet1285.setCoord(Coordinate1286)
#from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA1287 = x3d.ColorRGBA()
ColorRGBA1287.setUSE("HAnimSegmentLineColorRGBA")

LineSet1285.setColor(ColorRGBA1287)

Shape1284.setGeometry(LineSet1285)

HAnimSegment1280.addChildren(Shape1284)

HAnimJoint1279.addChildren(HAnimSegment1280)
HAnimJoint1288 = x3d.HAnimJoint()
HAnimJoint1288.setName("l_carpal_proximal_interphalangeal_4")
HAnimJoint1288.setDEF("hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint1288.setCenter([0.1973,0.7287,-0.0777])
HAnimJoint1288.setUlimit([0,0,0])
HAnimJoint1288.setLlimit([0,0,0])
HAnimSegment1289 = x3d.HAnimSegment()
HAnimSegment1289.setName("l_carpal_middle_phalanx_4")
HAnimSegment1289.setDEF("hanim_l_carpal_middle_phalanx_4")
Transform1290 = x3d.Transform()
Transform1290.setTranslation([0.1973,0.7287,-0.0777])
Transform1291 = x3d.Transform()
#Empty Transform
Shape1292 = x3d.Shape()
Shape1292.setUSE("HAnimJointShape")

Transform1291.addChild(Shape1292)

Transform1290.addChildren(Transform1291)

HAnimSegment1289.addChildren(Transform1290)
Shape1293 = x3d.Shape()
LineSet1294 = x3d.LineSet()
LineSet1294.setVertexCount([2])
Coordinate1295 = x3d.Coordinate()
Coordinate1295.setPoint([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767])

LineSet1294.setCoord(Coordinate1295)
#from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA1296 = x3d.ColorRGBA()
ColorRGBA1296.setUSE("HAnimSegmentLineColorRGBA")

LineSet1294.setColor(ColorRGBA1296)

Shape1293.setGeometry(LineSet1294)

HAnimSegment1289.addChildren(Shape1293)
HAnimSite1297 = x3d.HAnimSite()
HAnimSite1297.setName("l_carpal_distal_phalanx_4_tip")
HAnimSite1297.setDEF("hanim_l_carpal_distal_phalanx_4_tip")
TouchSensor1298 = x3d.TouchSensor()
TouchSensor1298.setDescription("HAnimSite l_carpal_distal_phalanx_4_tip")

HAnimSite1297.addChildren(TouchSensor1298)
Shape1299 = x3d.Shape()
Shape1299.setUSE("HAnimSiteShape")

HAnimSite1297.addChildren(Shape1299)

HAnimSegment1289.addChildren(HAnimSite1297)

HAnimJoint1288.addChildren(HAnimSegment1289)
HAnimJoint1300 = x3d.HAnimJoint()
HAnimJoint1300.setName("l_carpal_distal_interphalangeal_4")
HAnimJoint1300.setDEF("hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint1300.setCenter([0.1983,0.7045,-0.0767])
HAnimJoint1300.setUlimit([0,0,0])
HAnimJoint1300.setLlimit([0,0,0])

HAnimJoint1288.addChildren(HAnimJoint1300)

HAnimJoint1279.addChildren(HAnimJoint1288)

HAnimJoint1270.addChildren(HAnimJoint1279)

HAnimJoint1254.addChildren(HAnimJoint1270)
HAnimJoint1301 = x3d.HAnimJoint()
HAnimJoint1301.setName("l_carpometacarpal_5")
HAnimJoint1301.setDEF("hanim_l_carpometacarpal_5")
HAnimJoint1301.setCenter([0.1925,0.8066,-0.1036])
HAnimJoint1301.setUlimit([0,0,0])
HAnimJoint1301.setLlimit([0,0,0])
HAnimSegment1302 = x3d.HAnimSegment()
HAnimSegment1302.setName("l_metacarpal_5")
HAnimSegment1302.setDEF("hanim_l_metacarpal_5")
Transform1303 = x3d.Transform()
Transform1303.setTranslation([0.1925,0.8066,-0.1036])
Transform1304 = x3d.Transform()
#Empty Transform
Shape1305 = x3d.Shape()
Shape1305.setUSE("HAnimJointShape")

Transform1304.addChild(Shape1305)

Transform1303.addChildren(Transform1304)

HAnimSegment1302.addChildren(Transform1303)
Shape1306 = x3d.Shape()
LineSet1307 = x3d.LineSet()
LineSet1307.setVertexCount([2])
Coordinate1308 = x3d.Coordinate()
Coordinate1308.setPoint([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036])

LineSet1307.setCoord(Coordinate1308)
#from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA1309 = x3d.ColorRGBA()
ColorRGBA1309.setUSE("HAnimSegmentLineColorRGBA")

LineSet1307.setColor(ColorRGBA1309)

Shape1306.setGeometry(LineSet1307)

HAnimSegment1302.addChildren(Shape1306)

HAnimJoint1301.addChildren(HAnimSegment1302)
HAnimJoint1310 = x3d.HAnimJoint()
HAnimJoint1310.setName("l_metacarpophalangeal_5")
HAnimJoint1310.setDEF("hanim_l_metacarpophalangeal_5")
HAnimJoint1310.setCenter([0.1925,0.7866,-0.1036])
HAnimJoint1310.setUlimit([0,0,0])
HAnimJoint1310.setLlimit([0,0,0])
HAnimSegment1311 = x3d.HAnimSegment()
HAnimSegment1311.setName("l_carpal_proximal_phalanx_5")
HAnimSegment1311.setDEF("hanim_l_carpal_proximal_phalanx_5")
Transform1312 = x3d.Transform()
Transform1312.setTranslation([0.1925,0.7866,-0.1036])
Transform1313 = x3d.Transform()
#Empty Transform
Shape1314 = x3d.Shape()
Shape1314.setUSE("HAnimJointShape")

Transform1313.addChild(Shape1314)

Transform1312.addChildren(Transform1313)

HAnimSegment1311.addChildren(Transform1312)
Shape1315 = x3d.Shape()
LineSet1316 = x3d.LineSet()
LineSet1316.setVertexCount([2])
Coordinate1317 = x3d.Coordinate()
Coordinate1317.setPoint([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024])

LineSet1316.setCoord(Coordinate1317)
#from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA1318 = x3d.ColorRGBA()
ColorRGBA1318.setUSE("HAnimSegmentLineColorRGBA")

LineSet1316.setColor(ColorRGBA1318)

Shape1315.setGeometry(LineSet1316)

HAnimSegment1311.addChildren(Shape1315)

HAnimJoint1310.addChildren(HAnimSegment1311)
HAnimJoint1319 = x3d.HAnimJoint()
HAnimJoint1319.setName("l_carpal_proximal_interphalangeal_5")
HAnimJoint1319.setDEF("hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint1319.setCenter([0.1938,0.7452,-0.1024])
HAnimJoint1319.setUlimit([0,0,0])
HAnimJoint1319.setLlimit([0,0,0])
HAnimSegment1320 = x3d.HAnimSegment()
HAnimSegment1320.setName("l_carpal_middle_phalanx_5")
HAnimSegment1320.setDEF("hanim_l_carpal_middle_phalanx_5")
Transform1321 = x3d.Transform()
Transform1321.setTranslation([0.1938,0.7452,-0.1024])
Transform1322 = x3d.Transform()
#Empty Transform
Shape1323 = x3d.Shape()
Shape1323.setUSE("HAnimJointShape")

Transform1322.addChild(Shape1323)

Transform1321.addChildren(Transform1322)

HAnimSegment1320.addChildren(Transform1321)
Shape1324 = x3d.Shape()
LineSet1325 = x3d.LineSet()
LineSet1325.setVertexCount([2])
Coordinate1326 = x3d.Coordinate()
Coordinate1326.setPoint([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017])

LineSet1325.setCoord(Coordinate1326)
#from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA1327 = x3d.ColorRGBA()
ColorRGBA1327.setUSE("HAnimSegmentLineColorRGBA")

LineSet1325.setColor(ColorRGBA1327)

Shape1324.setGeometry(LineSet1325)

HAnimSegment1320.addChildren(Shape1324)
HAnimSite1328 = x3d.HAnimSite()
HAnimSite1328.setName("l_carpal_distal_phalanx_5_tip")
HAnimSite1328.setDEF("hanim_l_carpal_distal_phalanx_5_tip")
TouchSensor1329 = x3d.TouchSensor()
TouchSensor1329.setDescription("HAnimSite l_carpal_distal_phalanx_5_tip")

HAnimSite1328.addChildren(TouchSensor1329)
Shape1330 = x3d.Shape()
Shape1330.setUSE("HAnimSiteShape")

HAnimSite1328.addChildren(Shape1330)

HAnimSegment1320.addChildren(HAnimSite1328)

HAnimJoint1319.addChildren(HAnimSegment1320)
HAnimJoint1331 = x3d.HAnimJoint()
HAnimJoint1331.setName("l_carpal_distal_interphalangeal_5")
HAnimJoint1331.setDEF("hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint1331.setCenter([0.1948,0.7277,-0.1017])
HAnimJoint1331.setUlimit([0,0,0])
HAnimJoint1331.setLlimit([0,0,0])

HAnimJoint1319.addChildren(HAnimJoint1331)

HAnimJoint1310.addChildren(HAnimJoint1319)

HAnimJoint1301.addChildren(HAnimJoint1310)

HAnimJoint1254.addChildren(HAnimJoint1301)

HAnimJoint1113.addChildren(HAnimJoint1254)

HAnimJoint1101.addChildren(HAnimJoint1113)

HAnimJoint1080.addChildren(HAnimJoint1101)

HAnimJoint1065.addChildren(HAnimJoint1080)

HAnimJoint1056.addChildren(HAnimJoint1065)

HAnimJoint852.addChildren(HAnimJoint1056)
HAnimJoint1332 = x3d.HAnimJoint()
HAnimJoint1332.setName("r_sternoclavicular")
HAnimJoint1332.setDEF("hanim_r_sternoclavicular")
HAnimJoint1332.setCenter([-0.0694,1.46,-0.033])
HAnimJoint1332.setUlimit([0,0,0])
HAnimJoint1332.setLlimit([0,0,0])
HAnimSegment1333 = x3d.HAnimSegment()
HAnimSegment1333.setName("r_clavicle")
HAnimSegment1333.setDEF("hanim_r_clavicle")
Transform1334 = x3d.Transform()
Transform1334.setTranslation([-0.0694,1.46,-0.033])
Transform1335 = x3d.Transform()
#Empty Transform
Shape1336 = x3d.Shape()
Shape1336.setUSE("HAnimJointShape")

Transform1335.addChild(Shape1336)

Transform1334.addChildren(Transform1335)

HAnimSegment1333.addChildren(Transform1334)
Shape1337 = x3d.Shape()
LineSet1338 = x3d.LineSet()
LineSet1338.setVertexCount([2])
Coordinate1339 = x3d.Coordinate()
Coordinate1339.setPoint([-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401])

LineSet1338.setCoord(Coordinate1339)
#from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA1340 = x3d.ColorRGBA()
ColorRGBA1340.setUSE("HAnimSegmentLineColorRGBA")

LineSet1338.setColor(ColorRGBA1340)

Shape1337.setGeometry(LineSet1338)

HAnimSegment1333.addChildren(Shape1337)

HAnimJoint1332.addChildren(HAnimSegment1333)
HAnimJoint1341 = x3d.HAnimJoint()
HAnimJoint1341.setName("r_acromioclavicular")
HAnimJoint1341.setDEF("hanim_r_acromioclavicular")
HAnimJoint1341.setCenter([-0.0836,1.4281,-0.0401])
HAnimJoint1341.setUlimit([0,0,0])
HAnimJoint1341.setLlimit([0,0,0])
HAnimSegment1342 = x3d.HAnimSegment()
HAnimSegment1342.setName("r_scapula")
HAnimSegment1342.setDEF("hanim_r_scapula")
Transform1343 = x3d.Transform()
Transform1343.setTranslation([-0.0836,1.4281,-0.0401])
Transform1344 = x3d.Transform()
#Empty Transform
Shape1345 = x3d.Shape()
Shape1345.setUSE("HAnimJointShape")

Transform1344.addChild(Shape1345)

Transform1343.addChildren(Transform1344)

HAnimSegment1342.addChildren(Transform1343)
Shape1346 = x3d.Shape()
LineSet1347 = x3d.LineSet()
LineSet1347.setVertexCount([2])
Coordinate1348 = x3d.Coordinate()
Coordinate1348.setPoint([-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325])

LineSet1347.setCoord(Coordinate1348)
#from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA1349 = x3d.ColorRGBA()
ColorRGBA1349.setUSE("HAnimSegmentLineColorRGBA")

LineSet1347.setColor(ColorRGBA1349)

Shape1346.setGeometry(LineSet1347)

HAnimSegment1342.addChildren(Shape1346)
HAnimSite1350 = x3d.HAnimSite()
HAnimSite1350.setName("r_bideltoid")
HAnimSite1350.setDEF("hanim_r_bideltoid")
TouchSensor1351 = x3d.TouchSensor()
TouchSensor1351.setDescription("HAnimSite r_bideltoid")

HAnimSite1350.addChildren(TouchSensor1351)
Shape1352 = x3d.Shape()
Shape1352.setUSE("HAnimSiteShape")

HAnimSite1350.addChildren(Shape1352)

HAnimSegment1342.addChildren(HAnimSite1350)
HAnimSite1353 = x3d.HAnimSite()
HAnimSite1353.setName("r_humeral_lateral_epicondyles")
HAnimSite1353.setDEF("hanim_r_humeral_lateral_epicondyles")
HAnimSite1353.setTranslation([-0.2224,1.1517,-0.1033])
TouchSensor1354 = x3d.TouchSensor()
TouchSensor1354.setDescription("HAnimSite r_humeral_lateral_epicondyles")

HAnimSite1353.addChildren(TouchSensor1354)
Shape1355 = x3d.Shape()
Shape1355.setUSE("HAnimSiteShape")

HAnimSite1353.addChildren(Shape1355)

HAnimSegment1342.addChildren(HAnimSite1353)

HAnimJoint1341.addChildren(HAnimSegment1342)
HAnimJoint1356 = x3d.HAnimJoint()
HAnimJoint1356.setName("r_shoulder")
HAnimJoint1356.setDEF("hanim_r_shoulder")
HAnimJoint1356.setCenter([-0.1907,1.4407,-0.0325])
HAnimJoint1356.setUlimit([0,0,0])
HAnimJoint1356.setLlimit([0,0,0])
HAnimSegment1357 = x3d.HAnimSegment()
HAnimSegment1357.setName("r_upperarm")
HAnimSegment1357.setDEF("hanim_r_upperarm")
Transform1358 = x3d.Transform()
Transform1358.setTranslation([-0.1907,1.4407,-0.0325])
Transform1359 = x3d.Transform()
#Empty Transform
Shape1360 = x3d.Shape()
Shape1360.setUSE("HAnimJointShape")

Transform1359.addChild(Shape1360)

Transform1358.addChildren(Transform1359)

HAnimSegment1357.addChildren(Transform1358)
Shape1361 = x3d.Shape()
LineSet1362 = x3d.LineSet()
LineSet1362.setVertexCount([2])
Coordinate1363 = x3d.Coordinate()
Coordinate1363.setPoint([-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062])

LineSet1362.setCoord(Coordinate1363)
#from r_shoulder to r_elbow vertices 2
ColorRGBA1364 = x3d.ColorRGBA()
ColorRGBA1364.setUSE("HAnimSegmentLineColorRGBA")

LineSet1362.setColor(ColorRGBA1364)

Shape1361.setGeometry(LineSet1362)

HAnimSegment1357.addChildren(Shape1361)
HAnimSite1365 = x3d.HAnimSite()
HAnimSite1365.setName("r_humeral_medial_epicondyles")
HAnimSite1365.setDEF("hanim_r_humeral_medial_epicondyles")
HAnimSite1365.setTranslation([-0.168,1.1298,-0.1062])
TouchSensor1366 = x3d.TouchSensor()
TouchSensor1366.setDescription("HAnimSite r_humeral_medial_epicondyles")

HAnimSite1365.addChildren(TouchSensor1366)
Shape1367 = x3d.Shape()
Shape1367.setUSE("HAnimSiteShape")

HAnimSite1365.addChildren(Shape1367)

HAnimSegment1357.addChildren(HAnimSite1365)
HAnimSite1368 = x3d.HAnimSite()
HAnimSite1368.setName("r_olecranon")
HAnimSite1368.setDEF("hanim_r_olecranon")
HAnimSite1368.setTranslation([-0.1907,1.1405,-0.1065])
TouchSensor1369 = x3d.TouchSensor()
TouchSensor1369.setDescription("HAnimSite r_olecranon")

HAnimSite1368.addChildren(TouchSensor1369)
Shape1370 = x3d.Shape()
Shape1370.setUSE("HAnimSiteShape")

HAnimSite1368.addChildren(Shape1370)

HAnimSegment1357.addChildren(HAnimSite1368)
HAnimSite1371 = x3d.HAnimSite()
HAnimSite1371.setName("r_radial_styloid")
HAnimSite1371.setDEF("hanim_r_radial_styloid")
HAnimSite1371.setTranslation([-0.1884,0.8676,-0.036])
TouchSensor1372 = x3d.TouchSensor()
TouchSensor1372.setDescription("HAnimSite r_radial_styloid")

HAnimSite1371.addChildren(TouchSensor1372)
Shape1373 = x3d.Shape()
Shape1373.setUSE("HAnimSiteShape")

HAnimSite1371.addChildren(Shape1373)

HAnimSegment1357.addChildren(HAnimSite1371)
HAnimSite1374 = x3d.HAnimSite()
HAnimSite1374.setName("r_radiale")
HAnimSite1374.setDEF("hanim_r_radiale")
HAnimSite1374.setTranslation([-0.213,1.1305,-0.1091])
TouchSensor1375 = x3d.TouchSensor()
TouchSensor1375.setDescription("HAnimSite r_radiale")

HAnimSite1374.addChildren(TouchSensor1375)
Shape1376 = x3d.Shape()
Shape1376.setUSE("HAnimSiteShape")

HAnimSite1374.addChildren(Shape1376)

HAnimSegment1357.addChildren(HAnimSite1374)

HAnimJoint1356.addChildren(HAnimSegment1357)
HAnimJoint1377 = x3d.HAnimJoint()
HAnimJoint1377.setName("r_elbow")
HAnimJoint1377.setDEF("hanim_r_elbow")
HAnimJoint1377.setCenter([-0.1949,1.1388,-0.062])
HAnimJoint1377.setUlimit([0,0,0])
HAnimJoint1377.setLlimit([0,0,0])
HAnimSegment1378 = x3d.HAnimSegment()
HAnimSegment1378.setName("r_forearm")
HAnimSegment1378.setDEF("hanim_r_forearm")
Transform1379 = x3d.Transform()
Transform1379.setTranslation([-0.1949,1.1388,-0.062])
Transform1380 = x3d.Transform()
#Empty Transform
Shape1381 = x3d.Shape()
Shape1381.setUSE("HAnimJointShape")

Transform1380.addChild(Shape1381)

Transform1379.addChildren(Transform1380)

HAnimSegment1378.addChildren(Transform1379)
Shape1382 = x3d.Shape()
LineSet1383 = x3d.LineSet()
LineSet1383.setVertexCount([2])
Coordinate1384 = x3d.Coordinate()
Coordinate1384.setPoint([-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521])

LineSet1383.setCoord(Coordinate1384)
#from r_elbow to r_radiocarpal vertices 2
ColorRGBA1385 = x3d.ColorRGBA()
ColorRGBA1385.setUSE("HAnimSegmentLineColorRGBA")

LineSet1383.setColor(ColorRGBA1385)

Shape1382.setGeometry(LineSet1383)

HAnimSegment1378.addChildren(Shape1382)
HAnimSite1386 = x3d.HAnimSite()
HAnimSite1386.setName("r_ulnar_styloid")
HAnimSite1386.setDEF("hanim_r_ulnar_styloid")
HAnimSite1386.setTranslation([-0.2117,0.8562,-0.0584])
TouchSensor1387 = x3d.TouchSensor()
TouchSensor1387.setDescription("HAnimSite r_ulnar_styloid")

HAnimSite1386.addChildren(TouchSensor1387)
Shape1388 = x3d.Shape()
Shape1388.setUSE("HAnimSiteShape")

HAnimSite1386.addChildren(Shape1388)

HAnimSegment1378.addChildren(HAnimSite1386)

HAnimJoint1377.addChildren(HAnimSegment1378)
HAnimJoint1389 = x3d.HAnimJoint()
HAnimJoint1389.setName("r_radiocarpal")
HAnimJoint1389.setDEF("hanim_r_radiocarpal")
HAnimJoint1389.setCenter([-0.1959,0.8694,-0.0521])
HAnimJoint1389.setUlimit([0,0,0])
HAnimJoint1389.setLlimit([0,0,0])
HAnimSegment1390 = x3d.HAnimSegment()
HAnimSegment1390.setName("r_carpal")
HAnimSegment1390.setDEF("hanim_r_carpal")
Transform1391 = x3d.Transform()
Transform1391.setScale([0.2,0.2,0.2])
Transform1391.setTranslation([-0.2,0.85,-0.05])
Transform1391.setRotation([0,0,1,-3.14])
#Transform right hand
Transform1392 = x3d.Transform()
Transform1392.setRotation([0,1,0,1.57])
#Transform right hand
Shape1393 = x3d.Shape()
Shape1393.setUSE("HAnimJointShape")

Transform1392.addChild(Shape1393)

Transform1391.addChildren(Transform1392)

HAnimSegment1390.addChildren(Transform1391)
Shape1394 = x3d.Shape()
LineSet1395 = x3d.LineSet()
LineSet1395.setVertexCount([2])
Coordinate1396 = x3d.Coordinate()
Coordinate1396.setPoint([-0.1959,0.8694,-0.0521,-0.1811,0.6975,-0.0826])

LineSet1395.setCoord(Coordinate1396)
#from r_radiocarpal to r_midcarpal_1 vertices 2
ColorRGBA1397 = x3d.ColorRGBA()
ColorRGBA1397.setUSE("HAnimSegmentLineColorRGBA")

LineSet1395.setColor(ColorRGBA1397)

Shape1394.setGeometry(LineSet1395)

HAnimSegment1390.addChildren(Shape1394)
Shape1398 = x3d.Shape()
LineSet1399 = x3d.LineSet()
LineSet1399.setVertexCount([2])
Coordinate1400 = x3d.Coordinate()
Coordinate1400.setPoint([-0.1959,0.8694,-0.0521,-0.1811,0.6984,-0.0935])

LineSet1399.setCoord(Coordinate1400)
#from r_radiocarpal to r_midcarpal_2 vertices 2
ColorRGBA1401 = x3d.ColorRGBA()
ColorRGBA1401.setUSE("HAnimSegmentLineColorRGBA")

LineSet1399.setColor(ColorRGBA1401)

Shape1398.setGeometry(LineSet1399)

HAnimSegment1390.addChildren(Shape1398)
Shape1402 = x3d.Shape()
LineSet1403 = x3d.LineSet()
LineSet1403.setVertexCount([2])
Coordinate1404 = x3d.Coordinate()
Coordinate1404.setPoint([-0.1959,0.8694,-0.0521,-0.1809,0.7,-0.1067])

LineSet1403.setCoord(Coordinate1404)
#from r_radiocarpal to r_midcarpal_3 vertices 2
ColorRGBA1405 = x3d.ColorRGBA()
ColorRGBA1405.setUSE("HAnimSegmentLineColorRGBA")

LineSet1403.setColor(ColorRGBA1405)

Shape1402.setGeometry(LineSet1403)

HAnimSegment1390.addChildren(Shape1402)
Shape1406 = x3d.Shape()
LineSet1407 = x3d.LineSet()
LineSet1407.setVertexCount([2])
Coordinate1408 = x3d.Coordinate()
Coordinate1408.setPoint([-0.1959,0.8694,-0.0521,-0.1809,0.6973,-0.1276])

LineSet1407.setCoord(Coordinate1408)
#from r_radiocarpal to r_midcarpal_4_5 vertices 2
ColorRGBA1409 = x3d.ColorRGBA()
ColorRGBA1409.setUSE("HAnimSegmentLineColorRGBA")

LineSet1407.setColor(ColorRGBA1409)

Shape1406.setGeometry(LineSet1407)

HAnimSegment1390.addChildren(Shape1406)

HAnimJoint1389.addChildren(HAnimSegment1390)
HAnimJoint1410 = x3d.HAnimJoint()
HAnimJoint1410.setName("r_midcarpal_1")
HAnimJoint1410.setDEF("hanim_r_midcarpal_1")
HAnimJoint1410.setCenter([-0.1811,0.6975,-0.0826])
HAnimJoint1410.setUlimit([0,0,0])
HAnimJoint1410.setLlimit([0,0,0])
HAnimSegment1411 = x3d.HAnimSegment()
HAnimSegment1411.setName("r_trapezium")
HAnimSegment1411.setDEF("hanim_r_trapezium")
Transform1412 = x3d.Transform()
Transform1412.setTranslation([-0.1811,0.6975,-0.0826])
Transform1413 = x3d.Transform()
#Empty Transform
Shape1414 = x3d.Shape()
Shape1414.setUSE("HAnimJointShape")

Transform1413.addChild(Shape1414)

Transform1412.addChildren(Transform1413)

HAnimSegment1411.addChildren(Transform1412)
Shape1415 = x3d.Shape()
LineSet1416 = x3d.LineSet()
LineSet1416.setVertexCount([2])
Coordinate1417 = x3d.Coordinate()
Coordinate1417.setPoint([-0.1811,0.6975,-0.0826,-0.1899,0.8502,-0.0473])

LineSet1416.setCoord(Coordinate1417)
#from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
ColorRGBA1418 = x3d.ColorRGBA()
ColorRGBA1418.setUSE("HAnimSegmentLineColorRGBA")

LineSet1416.setColor(ColorRGBA1418)

Shape1415.setGeometry(LineSet1416)

HAnimSegment1411.addChildren(Shape1415)

HAnimJoint1410.addChildren(HAnimSegment1411)
HAnimJoint1419 = x3d.HAnimJoint()
HAnimJoint1419.setName("r_carpometacarpal_1")
HAnimJoint1419.setDEF("hanim_r_carpometacarpal_1")
HAnimJoint1419.setCenter([-0.1899,0.8502,-0.0473])
HAnimJoint1419.setUlimit([0,0,0])
HAnimJoint1419.setLlimit([0,0,0])
HAnimSegment1420 = x3d.HAnimSegment()
HAnimSegment1420.setName("r_metacarpal_1")
HAnimSegment1420.setDEF("hanim_r_metacarpal_1")
Transform1421 = x3d.Transform()
Transform1421.setTranslation([-0.1899,0.8502,-0.0473])
Transform1422 = x3d.Transform()
#Empty Transform
Shape1423 = x3d.Shape()
Shape1423.setUSE("HAnimJointShape")

Transform1422.addChild(Shape1423)

Transform1421.addChildren(Transform1422)

HAnimSegment1420.addChildren(Transform1421)
Shape1424 = x3d.Shape()
LineSet1425 = x3d.LineSet()
LineSet1425.setVertexCount([2])
Coordinate1426 = x3d.Coordinate()
Coordinate1426.setPoint([-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306])

LineSet1425.setCoord(Coordinate1426)
#from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA1427 = x3d.ColorRGBA()
ColorRGBA1427.setUSE("HAnimSegmentLineColorRGBA")

LineSet1425.setColor(ColorRGBA1427)

Shape1424.setGeometry(LineSet1425)

HAnimSegment1420.addChildren(Shape1424)

HAnimJoint1419.addChildren(HAnimSegment1420)
HAnimJoint1428 = x3d.HAnimJoint()
HAnimJoint1428.setName("r_metacarpophalangeal_1")
HAnimJoint1428.setDEF("hanim_r_metacarpophalangeal_1")
HAnimJoint1428.setCenter([-0.1874,0.8256,0.0306])
HAnimJoint1428.setUlimit([0,0,0])
HAnimJoint1428.setLlimit([0,0,0])
HAnimSegment1429 = x3d.HAnimSegment()
HAnimSegment1429.setName("r_carpal_proximal_phalanx_1")
HAnimSegment1429.setDEF("hanim_r_carpal_proximal_phalanx_1")
Transform1430 = x3d.Transform()
Transform1430.setTranslation([-0.1874,0.8256,0.0306])
Transform1431 = x3d.Transform()
#Empty Transform
Shape1432 = x3d.Shape()
Shape1432.setUSE("HAnimJointShape")

Transform1431.addChild(Shape1432)

Transform1430.addChildren(Transform1431)

HAnimSegment1429.addChildren(Transform1430)
Shape1433 = x3d.Shape()
LineSet1434 = x3d.LineSet()
LineSet1434.setVertexCount([2])
Coordinate1435 = x3d.Coordinate()
Coordinate1435.setPoint([-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506])

LineSet1434.setCoord(Coordinate1435)
#from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA1436 = x3d.ColorRGBA()
ColorRGBA1436.setUSE("HAnimSegmentLineColorRGBA")

LineSet1434.setColor(ColorRGBA1436)

Shape1433.setGeometry(LineSet1434)

HAnimSegment1429.addChildren(Shape1433)
HAnimSite1437 = x3d.HAnimSite()
HAnimSite1437.setName("r_carpal_distal_phalanx_1_tip")
HAnimSite1437.setDEF("hanim_r_carpal_distal_phalanx_1_tip")
TouchSensor1438 = x3d.TouchSensor()
TouchSensor1438.setDescription("HAnimSite r_carpal_distal_phalanx_1_tip")

HAnimSite1437.addChildren(TouchSensor1438)
Shape1439 = x3d.Shape()
Shape1439.setUSE("HAnimSiteShape")

HAnimSite1437.addChildren(Shape1439)

HAnimSegment1429.addChildren(HAnimSite1437)

HAnimJoint1428.addChildren(HAnimSegment1429)
HAnimJoint1440 = x3d.HAnimJoint()
HAnimJoint1440.setName("r_carpal_interphalangeal_1")
HAnimJoint1440.setDEF("hanim_r_carpal_interphalangeal_1")
HAnimJoint1440.setCenter([-0.1864,0.819,0.0506])
HAnimJoint1440.setUlimit([0,0,0])
HAnimJoint1440.setLlimit([0,0,0])

HAnimJoint1428.addChildren(HAnimJoint1440)

HAnimJoint1419.addChildren(HAnimJoint1428)

HAnimJoint1410.addChildren(HAnimJoint1419)

HAnimJoint1389.addChildren(HAnimJoint1410)
HAnimJoint1441 = x3d.HAnimJoint()
HAnimJoint1441.setName("r_midcarpal_2")
HAnimJoint1441.setDEF("hanim_r_midcarpal_2")
HAnimJoint1441.setCenter([-0.1811,0.6984,-0.0935])
HAnimJoint1441.setUlimit([0,0,0])
HAnimJoint1441.setLlimit([0,0,0])
HAnimSegment1442 = x3d.HAnimSegment()
HAnimSegment1442.setName("r_trapezoid")
HAnimSegment1442.setDEF("hanim_r_trapezoid")
Transform1443 = x3d.Transform()
Transform1443.setTranslation([-0.1811,0.6984,-0.0935])
Transform1444 = x3d.Transform()
#Empty Transform
Shape1445 = x3d.Shape()
Shape1445.setUSE("HAnimJointShape")

Transform1444.addChild(Shape1445)

Transform1443.addChildren(Transform1444)

HAnimSegment1442.addChildren(Transform1443)
Shape1446 = x3d.Shape()
LineSet1447 = x3d.LineSet()
LineSet1447.setVertexCount([2])
Coordinate1448 = x3d.Coordinate()
Coordinate1448.setPoint([-0.1811,0.6984,-0.0935,-0.1961,0.8055,-0.0218])

LineSet1447.setCoord(Coordinate1448)
#from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
ColorRGBA1449 = x3d.ColorRGBA()
ColorRGBA1449.setUSE("HAnimSegmentLineColorRGBA")

LineSet1447.setColor(ColorRGBA1449)

Shape1446.setGeometry(LineSet1447)

HAnimSegment1442.addChildren(Shape1446)
HAnimSite1450 = x3d.HAnimSite()
HAnimSite1450.setName("r_metacarpal_phalanx_2")
HAnimSite1450.setDEF("hanim_r_metacarpal_phalanx_2")
HAnimSite1450.setTranslation([-0.1977,0.8169,-0.0177])
TouchSensor1451 = x3d.TouchSensor()
TouchSensor1451.setDescription("HAnimSite r_metacarpal_phalanx_2")

HAnimSite1450.addChildren(TouchSensor1451)
Shape1452 = x3d.Shape()
Shape1452.setUSE("HAnimSiteShape")

HAnimSite1450.addChildren(Shape1452)

HAnimSegment1442.addChildren(HAnimSite1450)

HAnimJoint1441.addChildren(HAnimSegment1442)
HAnimJoint1453 = x3d.HAnimJoint()
HAnimJoint1453.setName("r_carpometacarpal_2")
HAnimJoint1453.setDEF("hanim_r_carpometacarpal_2")
HAnimJoint1453.setCenter([-0.1961,0.8055,-0.0218])
HAnimJoint1453.setUlimit([0,0,0])
HAnimJoint1453.setLlimit([0,0,0])
HAnimSegment1454 = x3d.HAnimSegment()
HAnimSegment1454.setName("r_metacarpal_2")
HAnimSegment1454.setDEF("hanim_r_metacarpal_2")
Transform1455 = x3d.Transform()
Transform1455.setTranslation([-0.1961,0.8055,-0.0218])
Transform1456 = x3d.Transform()
#Empty Transform
Shape1457 = x3d.Shape()
Shape1457.setUSE("HAnimJointShape")

Transform1456.addChild(Shape1457)

Transform1455.addChildren(Transform1456)

HAnimSegment1454.addChildren(Transform1455)
Shape1458 = x3d.Shape()
LineSet1459 = x3d.LineSet()
LineSet1459.setVertexCount([2])
Coordinate1460 = x3d.Coordinate()
Coordinate1460.setPoint([-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218])

LineSet1459.setCoord(Coordinate1460)
#from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA1461 = x3d.ColorRGBA()
ColorRGBA1461.setUSE("HAnimSegmentLineColorRGBA")

LineSet1459.setColor(ColorRGBA1461)

Shape1458.setGeometry(LineSet1459)

HAnimSegment1454.addChildren(Shape1458)

HAnimJoint1453.addChildren(HAnimSegment1454)
HAnimJoint1462 = x3d.HAnimJoint()
HAnimJoint1462.setName("r_metacarpophalangeal_2")
HAnimJoint1462.setDEF("hanim_r_metacarpophalangeal_2")
HAnimJoint1462.setCenter([-0.1961,0.7846,-0.0218])
HAnimJoint1462.setUlimit([0,0,0])
HAnimJoint1462.setLlimit([0,0,0])
HAnimSegment1463 = x3d.HAnimSegment()
HAnimSegment1463.setName("r_carpal_proximal_phalanx_2")
HAnimSegment1463.setDEF("hanim_r_carpal_proximal_phalanx_2")
Transform1464 = x3d.Transform()
Transform1464.setTranslation([-0.1961,0.7846,-0.0218])
Transform1465 = x3d.Transform()
#Empty Transform
Shape1466 = x3d.Shape()
Shape1466.setUSE("HAnimJointShape")

Transform1465.addChild(Shape1466)

Transform1464.addChildren(Transform1465)

HAnimSegment1463.addChildren(Transform1464)
Shape1467 = x3d.Shape()
LineSet1468 = x3d.LineSet()
LineSet1468.setVertexCount([2])
Coordinate1469 = x3d.Coordinate()
Coordinate1469.setPoint([-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185])

LineSet1468.setCoord(Coordinate1469)
#from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA1470 = x3d.ColorRGBA()
ColorRGBA1470.setUSE("HAnimSegmentLineColorRGBA")

LineSet1468.setColor(ColorRGBA1470)

Shape1467.setGeometry(LineSet1468)

HAnimSegment1463.addChildren(Shape1467)

HAnimJoint1462.addChildren(HAnimSegment1463)
HAnimJoint1471 = x3d.HAnimJoint()
HAnimJoint1471.setName("r_carpal_proximal_interphalangeal_2")
HAnimJoint1471.setDEF("hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint1471.setCenter([-0.1954,0.7393,-0.0185])
HAnimJoint1471.setUlimit([0,0,0])
HAnimJoint1471.setLlimit([0,0,0])
HAnimSegment1472 = x3d.HAnimSegment()
HAnimSegment1472.setName("r_carpal_middle_phalanx_2")
HAnimSegment1472.setDEF("hanim_r_carpal_middle_phalanx_2")
Transform1473 = x3d.Transform()
Transform1473.setTranslation([-0.1954,0.7393,-0.0185])
Transform1474 = x3d.Transform()
#Empty Transform
Shape1475 = x3d.Shape()
Shape1475.setUSE("HAnimJointShape")

Transform1474.addChild(Shape1475)

Transform1473.addChildren(Transform1474)

HAnimSegment1472.addChildren(Transform1473)
Shape1476 = x3d.Shape()
LineSet1477 = x3d.LineSet()
LineSet1477.setVertexCount([2])
Coordinate1478 = x3d.Coordinate()
Coordinate1478.setPoint([-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173])

LineSet1477.setCoord(Coordinate1478)
#from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA1479 = x3d.ColorRGBA()
ColorRGBA1479.setUSE("HAnimSegmentLineColorRGBA")

LineSet1477.setColor(ColorRGBA1479)

Shape1476.setGeometry(LineSet1477)

HAnimSegment1472.addChildren(Shape1476)
HAnimSite1480 = x3d.HAnimSite()
HAnimSite1480.setName("r_carpal_distal_phalanx_2_tip")
HAnimSite1480.setDEF("hanim_r_carpal_distal_phalanx_2_tip")
TouchSensor1481 = x3d.TouchSensor()
TouchSensor1481.setDescription("HAnimSite r_carpal_distal_phalanx_2_tip")

HAnimSite1480.addChildren(TouchSensor1481)
Shape1482 = x3d.Shape()
Shape1482.setUSE("HAnimSiteShape")

HAnimSite1480.addChildren(Shape1482)

HAnimSegment1472.addChildren(HAnimSite1480)
HAnimSite1483 = x3d.HAnimSite()
HAnimSite1483.setName("r_dactylion")
HAnimSite1483.setDEF("hanim_r_dactylion")
HAnimSite1483.setTranslation([-0.1941,0.6772,-0.0423])
TouchSensor1484 = x3d.TouchSensor()
TouchSensor1484.setDescription("HAnimSite r_dactylion")

HAnimSite1483.addChildren(TouchSensor1484)
Shape1485 = x3d.Shape()
Shape1485.setUSE("HAnimSiteShape")

HAnimSite1483.addChildren(Shape1485)

HAnimSegment1472.addChildren(HAnimSite1483)

HAnimJoint1471.addChildren(HAnimSegment1472)
HAnimJoint1486 = x3d.HAnimJoint()
HAnimJoint1486.setName("r_carpal_distal_interphalangeal_2")
HAnimJoint1486.setDEF("hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint1486.setCenter([-0.1945,0.7169,-0.0173])
HAnimJoint1486.setUlimit([0,0,0])
HAnimJoint1486.setLlimit([0,0,0])

HAnimJoint1471.addChildren(HAnimJoint1486)

HAnimJoint1462.addChildren(HAnimJoint1471)

HAnimJoint1453.addChildren(HAnimJoint1462)

HAnimJoint1441.addChildren(HAnimJoint1453)

HAnimJoint1389.addChildren(HAnimJoint1441)
HAnimJoint1487 = x3d.HAnimJoint()
HAnimJoint1487.setName("r_midcarpal_3")
HAnimJoint1487.setDEF("hanim_r_midcarpal_3")
HAnimJoint1487.setCenter([-0.1809,0.7,-0.1067])
HAnimJoint1487.setUlimit([0,0,0])
HAnimJoint1487.setLlimit([0,0,0])
HAnimSegment1488 = x3d.HAnimSegment()
HAnimSegment1488.setName("r_capitate")
HAnimSegment1488.setDEF("hanim_r_capitate")
Transform1489 = x3d.Transform()
Transform1489.setTranslation([-0.1809,0.7,-0.1067])
Transform1490 = x3d.Transform()
#Empty Transform
Shape1491 = x3d.Shape()
Shape1491.setUSE("HAnimJointShape")

Transform1490.addChild(Shape1491)

Transform1489.addChildren(Transform1490)

HAnimSegment1488.addChildren(Transform1489)
Shape1492 = x3d.Shape()
LineSet1493 = x3d.LineSet()
LineSet1493.setVertexCount([2])
Coordinate1494 = x3d.Coordinate()
Coordinate1494.setPoint([-0.1809,0.7,-0.1067,-0.1972,0.806,-0.0468])

LineSet1493.setCoord(Coordinate1494)
#from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
ColorRGBA1495 = x3d.ColorRGBA()
ColorRGBA1495.setUSE("HAnimSegmentLineColorRGBA")

LineSet1493.setColor(ColorRGBA1495)

Shape1492.setGeometry(LineSet1493)

HAnimSegment1488.addChildren(Shape1492)
HAnimSite1496 = x3d.HAnimSite()
HAnimSite1496.setName("r_metacarpal_phalanx_3")
HAnimSite1496.setDEF("hanim_r_metacarpal_phalanx_3")
TouchSensor1497 = x3d.TouchSensor()
TouchSensor1497.setDescription("HAnimSite r_metacarpal_phalanx_3")

HAnimSite1496.addChildren(TouchSensor1497)
Shape1498 = x3d.Shape()
Shape1498.setUSE("HAnimSiteShape")

HAnimSite1496.addChildren(Shape1498)

HAnimSegment1488.addChildren(HAnimSite1496)

HAnimJoint1487.addChildren(HAnimSegment1488)
HAnimJoint1499 = x3d.HAnimJoint()
HAnimJoint1499.setName("r_carpometacarpal_3")
HAnimJoint1499.setDEF("hanim_r_carpometacarpal_3")
HAnimJoint1499.setCenter([-0.1972,0.806,-0.0468])
HAnimJoint1499.setUlimit([0,0,0])
HAnimJoint1499.setLlimit([0,0,0])
HAnimSegment1500 = x3d.HAnimSegment()
HAnimSegment1500.setName("r_metacarpal_3")
HAnimSegment1500.setDEF("hanim_r_metacarpal_3")
Transform1501 = x3d.Transform()
Transform1501.setTranslation([-0.1972,0.806,-0.0468])
Transform1502 = x3d.Transform()
#Empty Transform
Shape1503 = x3d.Shape()
Shape1503.setUSE("HAnimJointShape")

Transform1502.addChild(Shape1503)

Transform1501.addChildren(Transform1502)

HAnimSegment1500.addChildren(Transform1501)
Shape1504 = x3d.Shape()
LineSet1505 = x3d.LineSet()
LineSet1505.setVertexCount([2])
Coordinate1506 = x3d.Coordinate()
Coordinate1506.setPoint([-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468])

LineSet1505.setCoord(Coordinate1506)
#from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA1507 = x3d.ColorRGBA()
ColorRGBA1507.setUSE("HAnimSegmentLineColorRGBA")

LineSet1505.setColor(ColorRGBA1507)

Shape1504.setGeometry(LineSet1505)

HAnimSegment1500.addChildren(Shape1504)

HAnimJoint1499.addChildren(HAnimSegment1500)
HAnimJoint1508 = x3d.HAnimJoint()
HAnimJoint1508.setName("r_metacarpophalangeal_3")
HAnimJoint1508.setDEF("hanim_r_metacarpophalangeal_3")
HAnimJoint1508.setCenter([-0.1972,0.7849,-0.0468])
HAnimJoint1508.setUlimit([0,0,0])
HAnimJoint1508.setLlimit([0,0,0])
HAnimSegment1509 = x3d.HAnimSegment()
HAnimSegment1509.setName("r_carpal_proximal_phalanx_3")
HAnimSegment1509.setDEF("hanim_r_carpal_proximal_phalanx_3")
Transform1510 = x3d.Transform()
Transform1510.setTranslation([-0.1972,0.7849,-0.0468])
Transform1511 = x3d.Transform()
#Empty Transform
Shape1512 = x3d.Shape()
Shape1512.setUSE("HAnimJointShape")

Transform1511.addChild(Shape1512)

Transform1510.addChildren(Transform1511)

HAnimSegment1509.addChildren(Transform1510)
Shape1513 = x3d.Shape()
LineSet1514 = x3d.LineSet()
LineSet1514.setVertexCount([2])
Coordinate1515 = x3d.Coordinate()
Coordinate1515.setPoint([-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441])

LineSet1514.setCoord(Coordinate1515)
#from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA1516 = x3d.ColorRGBA()
ColorRGBA1516.setUSE("HAnimSegmentLineColorRGBA")

LineSet1514.setColor(ColorRGBA1516)

Shape1513.setGeometry(LineSet1514)

HAnimSegment1509.addChildren(Shape1513)

HAnimJoint1508.addChildren(HAnimSegment1509)
HAnimJoint1517 = x3d.HAnimJoint()
HAnimJoint1517.setName("r_carpal_proximal_interphalangeal_3")
HAnimJoint1517.setDEF("hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint1517.setCenter([-0.195,0.7304,-0.0441])
HAnimJoint1517.setUlimit([0,0,0])
HAnimJoint1517.setLlimit([0,0,0])
HAnimSegment1518 = x3d.HAnimSegment()
HAnimSegment1518.setName("r_carpal_middle_phalanx_3")
HAnimSegment1518.setDEF("hanim_r_carpal_middle_phalanx_3")
Transform1519 = x3d.Transform()
Transform1519.setTranslation([-0.195,0.7304,-0.0441])
Transform1520 = x3d.Transform()
#Empty Transform
Shape1521 = x3d.Shape()
Shape1521.setUSE("HAnimJointShape")

Transform1520.addChild(Shape1521)

Transform1519.addChildren(Transform1520)

HAnimSegment1518.addChildren(Transform1519)
Shape1522 = x3d.Shape()
LineSet1523 = x3d.LineSet()
LineSet1523.setVertexCount([2])
Coordinate1524 = x3d.Coordinate()
Coordinate1524.setPoint([-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432])

LineSet1523.setCoord(Coordinate1524)
#from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA1525 = x3d.ColorRGBA()
ColorRGBA1525.setUSE("HAnimSegmentLineColorRGBA")

LineSet1523.setColor(ColorRGBA1525)

Shape1522.setGeometry(LineSet1523)

HAnimSegment1518.addChildren(Shape1522)
HAnimSite1526 = x3d.HAnimSite()
HAnimSite1526.setName("r_carpal_distal_phalanx_3_tip")
HAnimSite1526.setDEF("hanim_r_carpal_distal_phalanx_3_tip")
TouchSensor1527 = x3d.TouchSensor()
TouchSensor1527.setDescription("HAnimSite r_carpal_distal_phalanx_3_tip")

HAnimSite1526.addChildren(TouchSensor1527)
Shape1528 = x3d.Shape()
Shape1528.setUSE("HAnimSiteShape")

HAnimSite1526.addChildren(Shape1528)

HAnimSegment1518.addChildren(HAnimSite1526)

HAnimJoint1517.addChildren(HAnimSegment1518)
HAnimJoint1529 = x3d.HAnimJoint()
HAnimJoint1529.setName("r_carpal_distal_interphalangeal_3")
HAnimJoint1529.setDEF("hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint1529.setCenter([-0.1939,0.7042,-0.0432])
HAnimJoint1529.setUlimit([0,0,0])
HAnimJoint1529.setLlimit([0,0,0])

HAnimJoint1517.addChildren(HAnimJoint1529)

HAnimJoint1508.addChildren(HAnimJoint1517)

HAnimJoint1499.addChildren(HAnimJoint1508)

HAnimJoint1487.addChildren(HAnimJoint1499)

HAnimJoint1389.addChildren(HAnimJoint1487)
HAnimJoint1530 = x3d.HAnimJoint()
HAnimJoint1530.setName("r_midcarpal_4_5")
HAnimJoint1530.setDEF("hanim_r_midcarpal_4_5")
HAnimJoint1530.setCenter([-0.1809,0.6973,-0.1276])
HAnimJoint1530.setUlimit([0,0,0])
HAnimJoint1530.setLlimit([0,0,0])
HAnimSegment1531 = x3d.HAnimSegment()
HAnimSegment1531.setName("r_hamate")
HAnimSegment1531.setDEF("hanim_r_hamate")
Transform1532 = x3d.Transform()
Transform1532.setTranslation([-0.1809,0.6973,-0.1276])
Transform1533 = x3d.Transform()
#Empty Transform
Shape1534 = x3d.Shape()
Shape1534.setUSE("HAnimJointShape")

Transform1533.addChild(Shape1534)

Transform1532.addChildren(Transform1533)

HAnimSegment1531.addChildren(Transform1532)
Shape1535 = x3d.Shape()
LineSet1536 = x3d.LineSet()
LineSet1536.setVertexCount([2])
Coordinate1537 = x3d.Coordinate()
Coordinate1537.setPoint([-0.1809,0.6973,-0.1276,-0.1951,0.8049,-0.0732])

LineSet1536.setCoord(Coordinate1537)
#from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
ColorRGBA1538 = x3d.ColorRGBA()
ColorRGBA1538.setUSE("HAnimSegmentLineColorRGBA")

LineSet1536.setColor(ColorRGBA1538)

Shape1535.setGeometry(LineSet1536)

HAnimSegment1531.addChildren(Shape1535)
Shape1539 = x3d.Shape()
LineSet1540 = x3d.LineSet()
LineSet1540.setVertexCount([2])
Coordinate1541 = x3d.Coordinate()
Coordinate1541.setPoint([-0.1809,0.6973,-0.1276,-0.1926,0.8096,-0.0975])

LineSet1540.setCoord(Coordinate1541)
#from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
ColorRGBA1542 = x3d.ColorRGBA()
ColorRGBA1542.setUSE("HAnimSegmentLineColorRGBA")

LineSet1540.setColor(ColorRGBA1542)

Shape1539.setGeometry(LineSet1540)

HAnimSegment1531.addChildren(Shape1539)
HAnimSite1543 = x3d.HAnimSite()
HAnimSite1543.setName("r_metacarpal_phalanx_5")
HAnimSite1543.setDEF("hanim_r_metacarpal_phalanx_5")
HAnimSite1543.setTranslation([-0.1929,0.789,-0.1064])
TouchSensor1544 = x3d.TouchSensor()
TouchSensor1544.setDescription("HAnimSite r_metacarpal_phalanx_5")

HAnimSite1543.addChildren(TouchSensor1544)
Shape1545 = x3d.Shape()
Shape1545.setUSE("HAnimSiteShape")

HAnimSite1543.addChildren(Shape1545)

HAnimSegment1531.addChildren(HAnimSite1543)

HAnimJoint1530.addChildren(HAnimSegment1531)
HAnimJoint1546 = x3d.HAnimJoint()
HAnimJoint1546.setName("r_carpometacarpal_4")
HAnimJoint1546.setDEF("hanim_r_carpometacarpal_4")
HAnimJoint1546.setCenter([-0.1951,0.8049,-0.0732])
HAnimJoint1546.setUlimit([0,0,0])
HAnimJoint1546.setLlimit([0,0,0])
HAnimSegment1547 = x3d.HAnimSegment()
HAnimSegment1547.setName("r_metacarpal_4")
HAnimSegment1547.setDEF("hanim_r_metacarpal_4")
Transform1548 = x3d.Transform()
Transform1548.setTranslation([-0.1951,0.8049,-0.0732])
Transform1549 = x3d.Transform()
#Empty Transform
Shape1550 = x3d.Shape()
Shape1550.setUSE("HAnimJointShape")

Transform1549.addChild(Shape1550)

Transform1548.addChildren(Transform1549)

HAnimSegment1547.addChildren(Transform1548)
Shape1551 = x3d.Shape()
LineSet1552 = x3d.LineSet()
LineSet1552.setVertexCount([2])
Coordinate1553 = x3d.Coordinate()
Coordinate1553.setPoint([-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732])

LineSet1552.setCoord(Coordinate1553)
#from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA1554 = x3d.ColorRGBA()
ColorRGBA1554.setUSE("HAnimSegmentLineColorRGBA")

LineSet1552.setColor(ColorRGBA1554)

Shape1551.setGeometry(LineSet1552)

HAnimSegment1547.addChildren(Shape1551)

HAnimJoint1546.addChildren(HAnimSegment1547)
HAnimJoint1555 = x3d.HAnimJoint()
HAnimJoint1555.setName("r_metacarpophalangeal_4")
HAnimJoint1555.setDEF("hanim_r_metacarpophalangeal_4")
HAnimJoint1555.setCenter([-0.1951,0.7845,-0.0732])
HAnimJoint1555.setUlimit([0,0,0])
HAnimJoint1555.setLlimit([0,0,0])
HAnimSegment1556 = x3d.HAnimSegment()
HAnimSegment1556.setName("r_carpal_proximal_phalanx_4")
HAnimSegment1556.setDEF("hanim_r_carpal_proximal_phalanx_4")
Transform1557 = x3d.Transform()
Transform1557.setTranslation([-0.1951,0.7845,-0.0732])
Transform1558 = x3d.Transform()
#Empty Transform
Shape1559 = x3d.Shape()
Shape1559.setUSE("HAnimJointShape")

Transform1558.addChild(Shape1559)

Transform1557.addChildren(Transform1558)

HAnimSegment1556.addChildren(Transform1557)
Shape1560 = x3d.Shape()
LineSet1561 = x3d.LineSet()
LineSet1561.setVertexCount([2])
Coordinate1562 = x3d.Coordinate()
Coordinate1562.setPoint([-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716])

LineSet1561.setCoord(Coordinate1562)
#from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA1563 = x3d.ColorRGBA()
ColorRGBA1563.setUSE("HAnimSegmentLineColorRGBA")

LineSet1561.setColor(ColorRGBA1563)

Shape1560.setGeometry(LineSet1561)

HAnimSegment1556.addChildren(Shape1560)

HAnimJoint1555.addChildren(HAnimSegment1556)
HAnimJoint1564 = x3d.HAnimJoint()
HAnimJoint1564.setName("r_carpal_proximal_interphalangeal_4")
HAnimJoint1564.setDEF("hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint1564.setCenter([-0.192,0.7318,-0.0716])
HAnimJoint1564.setUlimit([0,0,0])
HAnimJoint1564.setLlimit([0,0,0])
HAnimSegment1565 = x3d.HAnimSegment()
HAnimSegment1565.setName("r_carpal_middle_phalanx_4")
HAnimSegment1565.setDEF("hanim_r_carpal_middle_phalanx_4")
Transform1566 = x3d.Transform()
Transform1566.setTranslation([-0.192,0.7318,-0.0716])
Transform1567 = x3d.Transform()
#Empty Transform
Shape1568 = x3d.Shape()
Shape1568.setUSE("HAnimJointShape")

Transform1567.addChild(Shape1568)

Transform1566.addChildren(Transform1567)

HAnimSegment1565.addChildren(Transform1566)
Shape1569 = x3d.Shape()
LineSet1570 = x3d.LineSet()
LineSet1570.setVertexCount([2])
Coordinate1571 = x3d.Coordinate()
Coordinate1571.setPoint([-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706])

LineSet1570.setCoord(Coordinate1571)
#from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA1572 = x3d.ColorRGBA()
ColorRGBA1572.setUSE("HAnimSegmentLineColorRGBA")

LineSet1570.setColor(ColorRGBA1572)

Shape1569.setGeometry(LineSet1570)

HAnimSegment1565.addChildren(Shape1569)
HAnimSite1573 = x3d.HAnimSite()
HAnimSite1573.setName("r_carpal_distal_phalanx_4_tip")
HAnimSite1573.setDEF("hanim_r_carpal_distal_phalanx_4_tip")
TouchSensor1574 = x3d.TouchSensor()
TouchSensor1574.setDescription("HAnimSite r_carpal_distal_phalanx_4_tip")

HAnimSite1573.addChildren(TouchSensor1574)
Shape1575 = x3d.Shape()
Shape1575.setUSE("HAnimSiteShape")

HAnimSite1573.addChildren(Shape1575)

HAnimSegment1565.addChildren(HAnimSite1573)

HAnimJoint1564.addChildren(HAnimSegment1565)
HAnimJoint1576 = x3d.HAnimJoint()
HAnimJoint1576.setName("r_carpal_distal_interphalangeal_4")
HAnimJoint1576.setDEF("hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint1576.setCenter([-0.1908,0.7077,-0.0706])
HAnimJoint1576.setUlimit([0,0,0])
HAnimJoint1576.setLlimit([0,0,0])

HAnimJoint1564.addChildren(HAnimJoint1576)

HAnimJoint1555.addChildren(HAnimJoint1564)

HAnimJoint1546.addChildren(HAnimJoint1555)

HAnimJoint1530.addChildren(HAnimJoint1546)
HAnimJoint1577 = x3d.HAnimJoint()
HAnimJoint1577.setName("r_carpometacarpal_5")
HAnimJoint1577.setDEF("hanim_r_carpometacarpal_5")
HAnimJoint1577.setCenter([-0.1926,0.8096,-0.0975])
HAnimJoint1577.setUlimit([0,0,0])
HAnimJoint1577.setLlimit([0,0,0])
HAnimSegment1578 = x3d.HAnimSegment()
HAnimSegment1578.setName("r_metacarpal_5")
HAnimSegment1578.setDEF("hanim_r_metacarpal_5")
Transform1579 = x3d.Transform()
Transform1579.setTranslation([-0.1926,0.8096,-0.0975])
Transform1580 = x3d.Transform()
#Empty Transform
Shape1581 = x3d.Shape()
Shape1581.setUSE("HAnimJointShape")

Transform1580.addChild(Shape1581)

Transform1579.addChildren(Transform1580)

HAnimSegment1578.addChildren(Transform1579)
Shape1582 = x3d.Shape()
LineSet1583 = x3d.LineSet()
LineSet1583.setVertexCount([2])
Coordinate1584 = x3d.Coordinate()
Coordinate1584.setPoint([-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975])

LineSet1583.setCoord(Coordinate1584)
#from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA1585 = x3d.ColorRGBA()
ColorRGBA1585.setUSE("HAnimSegmentLineColorRGBA")

LineSet1583.setColor(ColorRGBA1585)

Shape1582.setGeometry(LineSet1583)

HAnimSegment1578.addChildren(Shape1582)

HAnimJoint1577.addChildren(HAnimSegment1578)
HAnimJoint1586 = x3d.HAnimJoint()
HAnimJoint1586.setName("r_metacarpophalangeal_5")
HAnimJoint1586.setDEF("hanim_r_metacarpophalangeal_5")
HAnimJoint1586.setCenter([-0.1926,0.7896,-0.0975])
HAnimJoint1586.setUlimit([0,0,0])
HAnimJoint1586.setLlimit([0,0,0])
HAnimSegment1587 = x3d.HAnimSegment()
HAnimSegment1587.setName("r_carpal_proximal_phalanx_5")
HAnimSegment1587.setDEF("hanim_r_carpal_proximal_phalanx_5")
Transform1588 = x3d.Transform()
Transform1588.setTranslation([-0.1926,0.7896,-0.0975])
Transform1589 = x3d.Transform()
#Empty Transform
Shape1590 = x3d.Shape()
Shape1590.setUSE("HAnimJointShape")

Transform1589.addChild(Shape1590)

Transform1588.addChildren(Transform1589)

HAnimSegment1587.addChildren(Transform1588)
Shape1591 = x3d.Shape()
LineSet1592 = x3d.LineSet()
LineSet1592.setVertexCount([2])
Coordinate1593 = x3d.Coordinate()
Coordinate1593.setPoint([-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963])

LineSet1592.setCoord(Coordinate1593)
#from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA1594 = x3d.ColorRGBA()
ColorRGBA1594.setUSE("HAnimSegmentLineColorRGBA")

LineSet1592.setColor(ColorRGBA1594)

Shape1591.setGeometry(LineSet1592)

HAnimSegment1587.addChildren(Shape1591)

HAnimJoint1586.addChildren(HAnimSegment1587)
HAnimJoint1595 = x3d.HAnimJoint()
HAnimJoint1595.setName("r_carpal_proximal_interphalangeal_5")
HAnimJoint1595.setDEF("hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint1595.setCenter([-0.1902,0.7483,-0.0963])
HAnimJoint1595.setUlimit([0,0,0])
HAnimJoint1595.setLlimit([0,0,0])
HAnimSegment1596 = x3d.HAnimSegment()
HAnimSegment1596.setName("r_carpal_middle_phalanx_5")
HAnimSegment1596.setDEF("hanim_r_carpal_middle_phalanx_5")
Transform1597 = x3d.Transform()
Transform1597.setTranslation([-0.1902,0.7483,-0.0963])
Transform1598 = x3d.Transform()
#Empty Transform
Shape1599 = x3d.Shape()
Shape1599.setUSE("HAnimJointShape")

Transform1598.addChild(Shape1599)

Transform1597.addChildren(Transform1598)

HAnimSegment1596.addChildren(Transform1597)
Shape1600 = x3d.Shape()
LineSet1601 = x3d.LineSet()
LineSet1601.setVertexCount([2])
Coordinate1602 = x3d.Coordinate()
Coordinate1602.setPoint([-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096])

LineSet1601.setCoord(Coordinate1602)
#from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA1603 = x3d.ColorRGBA()
ColorRGBA1603.setUSE("HAnimSegmentLineColorRGBA")

LineSet1601.setColor(ColorRGBA1603)

Shape1600.setGeometry(LineSet1601)

HAnimSegment1596.addChildren(Shape1600)
HAnimSite1604 = x3d.HAnimSite()
HAnimSite1604.setName("r_carpal_distal_phalanx_5_tip")
HAnimSite1604.setDEF("hanim_r_carpal_distal_phalanx_5_tip")
TouchSensor1605 = x3d.TouchSensor()
TouchSensor1605.setDescription("HAnimSite r_carpal_distal_phalanx_5_tip")

HAnimSite1604.addChildren(TouchSensor1605)
Shape1606 = x3d.Shape()
Shape1606.setUSE("HAnimSiteShape")

HAnimSite1604.addChildren(Shape1606)

HAnimSegment1596.addChildren(HAnimSite1604)

HAnimJoint1595.addChildren(HAnimSegment1596)
HAnimJoint1607 = x3d.HAnimJoint()
HAnimJoint1607.setName("r_carpal_distal_interphalangeal_5")
HAnimJoint1607.setDEF("hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint1607.setCenter([-0.1908,0.754,-0.096])
HAnimJoint1607.setUlimit([0,0,0])
HAnimJoint1607.setLlimit([0,0,0])

HAnimJoint1595.addChildren(HAnimJoint1607)

HAnimJoint1586.addChildren(HAnimJoint1595)

HAnimJoint1577.addChildren(HAnimJoint1586)

HAnimJoint1530.addChildren(HAnimJoint1577)

HAnimJoint1389.addChildren(HAnimJoint1530)

HAnimJoint1377.addChildren(HAnimJoint1389)

HAnimJoint1356.addChildren(HAnimJoint1377)

HAnimJoint1341.addChildren(HAnimJoint1356)

HAnimJoint1332.addChildren(HAnimJoint1341)

HAnimJoint852.addChildren(HAnimJoint1332)

HAnimJoint837.addChildren(HAnimJoint852)

HAnimJoint828.addChildren(HAnimJoint837)

HAnimJoint819.addChildren(HAnimJoint828)

HAnimJoint810.addChildren(HAnimJoint819)

HAnimJoint798.addChildren(HAnimJoint810)

HAnimJoint777.addChildren(HAnimJoint798)

HAnimJoint768.addChildren(HAnimJoint777)

HAnimJoint759.addChildren(HAnimJoint768)

HAnimJoint744.addChildren(HAnimJoint759)

HAnimJoint732.addChildren(HAnimJoint744)

HAnimJoint723.addChildren(HAnimJoint732)

HAnimJoint714.addChildren(HAnimJoint723)

HAnimJoint705.addChildren(HAnimJoint714)

HAnimJoint687.addChildren(HAnimJoint705)

HAnimJoint678.addChildren(HAnimJoint687)

HAnimJoint669.addChildren(HAnimJoint678)

HAnimJoint52.addChildren(HAnimJoint669)

HAnimHumanoid43.setSkeleton(HAnimJoint52)
HAnimJoint1608 = x3d.HAnimJoint()
HAnimJoint1608.setUSE("hanim_humanoid_root")

HAnimHumanoid43.addJoints(HAnimJoint1608)
HAnimJoint1609 = x3d.HAnimJoint()
HAnimJoint1609.setUSE("hanim_sacroiliac")

HAnimHumanoid43.addJoints(HAnimJoint1609)
HAnimJoint1610 = x3d.HAnimJoint()
HAnimJoint1610.setUSE("hanim_l_hip")

HAnimHumanoid43.addJoints(HAnimJoint1610)
HAnimJoint1611 = x3d.HAnimJoint()
HAnimJoint1611.setUSE("hanim_l_knee")

HAnimHumanoid43.addJoints(HAnimJoint1611)
HAnimJoint1612 = x3d.HAnimJoint()
HAnimJoint1612.setUSE("hanim_l_talocrural")

HAnimHumanoid43.addJoints(HAnimJoint1612)
HAnimJoint1613 = x3d.HAnimJoint()
HAnimJoint1613.setUSE("hanim_l_talocalcaneonavicular")

HAnimHumanoid43.addJoints(HAnimJoint1613)
HAnimJoint1614 = x3d.HAnimJoint()
HAnimJoint1614.setUSE("hanim_l_cuneonavicular_1")

HAnimHumanoid43.addJoints(HAnimJoint1614)
HAnimJoint1615 = x3d.HAnimJoint()
HAnimJoint1615.setUSE("hanim_l_tarsometatarsal_1")

HAnimHumanoid43.addJoints(HAnimJoint1615)
HAnimJoint1616 = x3d.HAnimJoint()
HAnimJoint1616.setUSE("hanim_l_metatarsophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1616)
HAnimJoint1617 = x3d.HAnimJoint()
HAnimJoint1617.setUSE("hanim_l_tarsal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1617)
HAnimJoint1618 = x3d.HAnimJoint()
HAnimJoint1618.setUSE("hanim_l_cuneonavicular_2")

HAnimHumanoid43.addJoints(HAnimJoint1618)
HAnimJoint1619 = x3d.HAnimJoint()
HAnimJoint1619.setUSE("hanim_l_tarsometatarsal_2")

HAnimHumanoid43.addJoints(HAnimJoint1619)
HAnimJoint1620 = x3d.HAnimJoint()
HAnimJoint1620.setUSE("hanim_l_metatarsophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1620)
HAnimJoint1621 = x3d.HAnimJoint()
HAnimJoint1621.setUSE("hanim_l_tarsal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1621)
HAnimJoint1622 = x3d.HAnimJoint()
HAnimJoint1622.setUSE("hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1622)
HAnimJoint1623 = x3d.HAnimJoint()
HAnimJoint1623.setUSE("hanim_l_cuneonavicular_3")

HAnimHumanoid43.addJoints(HAnimJoint1623)
HAnimJoint1624 = x3d.HAnimJoint()
HAnimJoint1624.setUSE("hanim_l_tarsometatarsal_3")

HAnimHumanoid43.addJoints(HAnimJoint1624)
HAnimJoint1625 = x3d.HAnimJoint()
HAnimJoint1625.setUSE("hanim_l_metatarsophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1625)
HAnimJoint1626 = x3d.HAnimJoint()
HAnimJoint1626.setUSE("hanim_l_tarsal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1626)
HAnimJoint1627 = x3d.HAnimJoint()
HAnimJoint1627.setUSE("hanim_l_tarsal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1627)
HAnimJoint1628 = x3d.HAnimJoint()
HAnimJoint1628.setUSE("hanim_l_calcaneocuboid")

HAnimHumanoid43.addJoints(HAnimJoint1628)
HAnimJoint1629 = x3d.HAnimJoint()
HAnimJoint1629.setUSE("hanim_l_transversetarsal")

HAnimHumanoid43.addJoints(HAnimJoint1629)
HAnimJoint1630 = x3d.HAnimJoint()
HAnimJoint1630.setUSE("hanim_l_tarsometatarsal_4")

HAnimHumanoid43.addJoints(HAnimJoint1630)
HAnimJoint1631 = x3d.HAnimJoint()
HAnimJoint1631.setUSE("hanim_l_metatarsophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1631)
HAnimJoint1632 = x3d.HAnimJoint()
HAnimJoint1632.setUSE("hanim_l_tarsal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1632)
HAnimJoint1633 = x3d.HAnimJoint()
HAnimJoint1633.setUSE("hanim_l_tarsal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1633)
HAnimJoint1634 = x3d.HAnimJoint()
HAnimJoint1634.setUSE("hanim_l_tarsometatarsal_5")

HAnimHumanoid43.addJoints(HAnimJoint1634)
HAnimJoint1635 = x3d.HAnimJoint()
HAnimJoint1635.setUSE("hanim_l_metatarsophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1635)
HAnimJoint1636 = x3d.HAnimJoint()
HAnimJoint1636.setUSE("hanim_l_tarsal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1636)
HAnimJoint1637 = x3d.HAnimJoint()
HAnimJoint1637.setUSE("hanim_l_tarsal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1637)
HAnimJoint1638 = x3d.HAnimJoint()
HAnimJoint1638.setUSE("hanim_r_hip")

HAnimHumanoid43.addJoints(HAnimJoint1638)
HAnimJoint1639 = x3d.HAnimJoint()
HAnimJoint1639.setUSE("hanim_r_knee")

HAnimHumanoid43.addJoints(HAnimJoint1639)
HAnimJoint1640 = x3d.HAnimJoint()
HAnimJoint1640.setUSE("hanim_r_talocrural")

HAnimHumanoid43.addJoints(HAnimJoint1640)
HAnimJoint1641 = x3d.HAnimJoint()
HAnimJoint1641.setUSE("hanim_r_talocalcaneonavicular")

HAnimHumanoid43.addJoints(HAnimJoint1641)
HAnimJoint1642 = x3d.HAnimJoint()
HAnimJoint1642.setUSE("hanim_r_cuneonavicular_1")

HAnimHumanoid43.addJoints(HAnimJoint1642)
HAnimJoint1643 = x3d.HAnimJoint()
HAnimJoint1643.setUSE("hanim_r_tarsometatarsal_1")

HAnimHumanoid43.addJoints(HAnimJoint1643)
HAnimJoint1644 = x3d.HAnimJoint()
HAnimJoint1644.setUSE("hanim_r_metatarsophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1644)
HAnimJoint1645 = x3d.HAnimJoint()
HAnimJoint1645.setUSE("hanim_r_tarsal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1645)
HAnimJoint1646 = x3d.HAnimJoint()
HAnimJoint1646.setUSE("hanim_r_cuneonavicular_2")

HAnimHumanoid43.addJoints(HAnimJoint1646)
HAnimJoint1647 = x3d.HAnimJoint()
HAnimJoint1647.setUSE("hanim_r_tarsometatarsal_2")

HAnimHumanoid43.addJoints(HAnimJoint1647)
HAnimJoint1648 = x3d.HAnimJoint()
HAnimJoint1648.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1648)
HAnimJoint1649 = x3d.HAnimJoint()
HAnimJoint1649.setUSE("hanim_r_tarsal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1649)
HAnimJoint1650 = x3d.HAnimJoint()
HAnimJoint1650.setUSE("hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1650)
HAnimJoint1651 = x3d.HAnimJoint()
HAnimJoint1651.setUSE("hanim_r_cuneonavicular_3")

HAnimHumanoid43.addJoints(HAnimJoint1651)
HAnimJoint1652 = x3d.HAnimJoint()
HAnimJoint1652.setUSE("hanim_r_tarsometatarsal_3")

HAnimHumanoid43.addJoints(HAnimJoint1652)
HAnimJoint1653 = x3d.HAnimJoint()
HAnimJoint1653.setUSE("hanim_r_metatarsophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1653)
HAnimJoint1654 = x3d.HAnimJoint()
HAnimJoint1654.setUSE("hanim_r_tarsal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1654)
HAnimJoint1655 = x3d.HAnimJoint()
HAnimJoint1655.setUSE("hanim_r_tarsal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1655)
HAnimJoint1656 = x3d.HAnimJoint()
HAnimJoint1656.setUSE("hanim_r_calcaneocuboid")

HAnimHumanoid43.addJoints(HAnimJoint1656)
HAnimJoint1657 = x3d.HAnimJoint()
HAnimJoint1657.setUSE("hanim_r_transversetarsal")

HAnimHumanoid43.addJoints(HAnimJoint1657)
HAnimJoint1658 = x3d.HAnimJoint()
HAnimJoint1658.setUSE("hanim_r_tarsometatarsal_4")

HAnimHumanoid43.addJoints(HAnimJoint1658)
HAnimJoint1659 = x3d.HAnimJoint()
HAnimJoint1659.setUSE("hanim_r_metatarsophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1659)
HAnimJoint1660 = x3d.HAnimJoint()
HAnimJoint1660.setUSE("hanim_r_tarsal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1660)
HAnimJoint1661 = x3d.HAnimJoint()
HAnimJoint1661.setUSE("hanim_r_tarsal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1661)
HAnimJoint1662 = x3d.HAnimJoint()
HAnimJoint1662.setUSE("hanim_r_tarsometatarsal_5")

HAnimHumanoid43.addJoints(HAnimJoint1662)
HAnimJoint1663 = x3d.HAnimJoint()
HAnimJoint1663.setUSE("hanim_r_metatarsophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1663)
HAnimJoint1664 = x3d.HAnimJoint()
HAnimJoint1664.setUSE("hanim_r_tarsal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1664)
HAnimJoint1665 = x3d.HAnimJoint()
HAnimJoint1665.setUSE("hanim_r_tarsal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1665)
HAnimJoint1666 = x3d.HAnimJoint()
HAnimJoint1666.setUSE("hanim_vl5")

HAnimHumanoid43.addJoints(HAnimJoint1666)
HAnimJoint1667 = x3d.HAnimJoint()
HAnimJoint1667.setUSE("hanim_vl4")

HAnimHumanoid43.addJoints(HAnimJoint1667)
HAnimJoint1668 = x3d.HAnimJoint()
HAnimJoint1668.setUSE("hanim_vl3")

HAnimHumanoid43.addJoints(HAnimJoint1668)
HAnimJoint1669 = x3d.HAnimJoint()
HAnimJoint1669.setUSE("hanim_vl2")

HAnimHumanoid43.addJoints(HAnimJoint1669)
HAnimJoint1670 = x3d.HAnimJoint()
HAnimJoint1670.setUSE("hanim_vl1")

HAnimHumanoid43.addJoints(HAnimJoint1670)
HAnimJoint1671 = x3d.HAnimJoint()
HAnimJoint1671.setUSE("hanim_vt12")

HAnimHumanoid43.addJoints(HAnimJoint1671)
HAnimJoint1672 = x3d.HAnimJoint()
HAnimJoint1672.setUSE("hanim_vt11")

HAnimHumanoid43.addJoints(HAnimJoint1672)
HAnimJoint1673 = x3d.HAnimJoint()
HAnimJoint1673.setUSE("hanim_vt10")

HAnimHumanoid43.addJoints(HAnimJoint1673)
HAnimJoint1674 = x3d.HAnimJoint()
HAnimJoint1674.setUSE("hanim_vt9")

HAnimHumanoid43.addJoints(HAnimJoint1674)
HAnimJoint1675 = x3d.HAnimJoint()
HAnimJoint1675.setUSE("hanim_vt8")

HAnimHumanoid43.addJoints(HAnimJoint1675)
HAnimJoint1676 = x3d.HAnimJoint()
HAnimJoint1676.setUSE("hanim_vt7")

HAnimHumanoid43.addJoints(HAnimJoint1676)
HAnimJoint1677 = x3d.HAnimJoint()
HAnimJoint1677.setUSE("hanim_vt6")

HAnimHumanoid43.addJoints(HAnimJoint1677)
HAnimJoint1678 = x3d.HAnimJoint()
HAnimJoint1678.setUSE("hanim_vt5")

HAnimHumanoid43.addJoints(HAnimJoint1678)
HAnimJoint1679 = x3d.HAnimJoint()
HAnimJoint1679.setUSE("hanim_vt4")

HAnimHumanoid43.addJoints(HAnimJoint1679)
HAnimJoint1680 = x3d.HAnimJoint()
HAnimJoint1680.setUSE("hanim_vt3")

HAnimHumanoid43.addJoints(HAnimJoint1680)
HAnimJoint1681 = x3d.HAnimJoint()
HAnimJoint1681.setUSE("hanim_vt2")

HAnimHumanoid43.addJoints(HAnimJoint1681)
HAnimJoint1682 = x3d.HAnimJoint()
HAnimJoint1682.setUSE("hanim_vt1")

HAnimHumanoid43.addJoints(HAnimJoint1682)
HAnimJoint1683 = x3d.HAnimJoint()
HAnimJoint1683.setUSE("hanim_vc7")

HAnimHumanoid43.addJoints(HAnimJoint1683)
HAnimJoint1684 = x3d.HAnimJoint()
HAnimJoint1684.setUSE("hanim_vc6")

HAnimHumanoid43.addJoints(HAnimJoint1684)
HAnimJoint1685 = x3d.HAnimJoint()
HAnimJoint1685.setUSE("hanim_vc5")

HAnimHumanoid43.addJoints(HAnimJoint1685)
HAnimJoint1686 = x3d.HAnimJoint()
HAnimJoint1686.setUSE("hanim_vc4")

HAnimHumanoid43.addJoints(HAnimJoint1686)
HAnimJoint1687 = x3d.HAnimJoint()
HAnimJoint1687.setUSE("hanim_vc3")

HAnimHumanoid43.addJoints(HAnimJoint1687)
HAnimJoint1688 = x3d.HAnimJoint()
HAnimJoint1688.setUSE("hanim_vc2")

HAnimHumanoid43.addJoints(HAnimJoint1688)
HAnimJoint1689 = x3d.HAnimJoint()
HAnimJoint1689.setUSE("hanim_vc1")

HAnimHumanoid43.addJoints(HAnimJoint1689)
HAnimJoint1690 = x3d.HAnimJoint()
HAnimJoint1690.setUSE("hanim_skullbase")

HAnimHumanoid43.addJoints(HAnimJoint1690)
HAnimJoint1691 = x3d.HAnimJoint()
HAnimJoint1691.setUSE("hanim_l_eyelid_joint")

HAnimHumanoid43.addJoints(HAnimJoint1691)
HAnimJoint1692 = x3d.HAnimJoint()
HAnimJoint1692.setUSE("hanim_r_eyelid_joint")

HAnimHumanoid43.addJoints(HAnimJoint1692)
HAnimJoint1693 = x3d.HAnimJoint()
HAnimJoint1693.setUSE("hanim_l_eyeball_joint")

HAnimHumanoid43.addJoints(HAnimJoint1693)
HAnimJoint1694 = x3d.HAnimJoint()
HAnimJoint1694.setUSE("hanim_r_eyeball_joint")

HAnimHumanoid43.addJoints(HAnimJoint1694)
HAnimJoint1695 = x3d.HAnimJoint()
HAnimJoint1695.setUSE("hanim_l_eyebrow_joint")

HAnimHumanoid43.addJoints(HAnimJoint1695)
HAnimJoint1696 = x3d.HAnimJoint()
HAnimJoint1696.setUSE("hanim_r_eyebrow_joint")

HAnimHumanoid43.addJoints(HAnimJoint1696)
HAnimJoint1697 = x3d.HAnimJoint()
HAnimJoint1697.setUSE("hanim_temporomandibular")

HAnimHumanoid43.addJoints(HAnimJoint1697)
HAnimJoint1698 = x3d.HAnimJoint()
HAnimJoint1698.setUSE("hanim_l_sternoclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1698)
HAnimJoint1699 = x3d.HAnimJoint()
HAnimJoint1699.setUSE("hanim_l_acromioclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1699)
HAnimJoint1700 = x3d.HAnimJoint()
HAnimJoint1700.setUSE("hanim_l_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint1700)
HAnimJoint1701 = x3d.HAnimJoint()
HAnimJoint1701.setUSE("hanim_l_elbow")

HAnimHumanoid43.addJoints(HAnimJoint1701)
HAnimJoint1702 = x3d.HAnimJoint()
HAnimJoint1702.setUSE("hanim_l_radiocarpal")

HAnimHumanoid43.addJoints(HAnimJoint1702)
HAnimJoint1703 = x3d.HAnimJoint()
HAnimJoint1703.setUSE("hanim_l_midcarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1703)
HAnimJoint1704 = x3d.HAnimJoint()
HAnimJoint1704.setUSE("hanim_l_carpometacarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1704)
HAnimJoint1705 = x3d.HAnimJoint()
HAnimJoint1705.setUSE("hanim_l_metacarpophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1705)
HAnimJoint1706 = x3d.HAnimJoint()
HAnimJoint1706.setUSE("hanim_l_carpal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1706)
HAnimJoint1707 = x3d.HAnimJoint()
HAnimJoint1707.setUSE("hanim_l_midcarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1707)
HAnimJoint1708 = x3d.HAnimJoint()
HAnimJoint1708.setUSE("hanim_l_carpometacarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1708)
HAnimJoint1709 = x3d.HAnimJoint()
HAnimJoint1709.setUSE("hanim_l_metacarpophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1709)
HAnimJoint1710 = x3d.HAnimJoint()
HAnimJoint1710.setUSE("hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1710)
HAnimJoint1711 = x3d.HAnimJoint()
HAnimJoint1711.setUSE("hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1711)
HAnimJoint1712 = x3d.HAnimJoint()
HAnimJoint1712.setUSE("hanim_l_midcarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1712)
HAnimJoint1713 = x3d.HAnimJoint()
HAnimJoint1713.setUSE("hanim_l_carpometacarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1713)
HAnimJoint1714 = x3d.HAnimJoint()
HAnimJoint1714.setUSE("hanim_l_metacarpophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1714)
HAnimJoint1715 = x3d.HAnimJoint()
HAnimJoint1715.setUSE("hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1715)
HAnimJoint1716 = x3d.HAnimJoint()
HAnimJoint1716.setUSE("hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1716)
HAnimJoint1717 = x3d.HAnimJoint()
HAnimJoint1717.setUSE("hanim_l_midcarpal_4_5")

HAnimHumanoid43.addJoints(HAnimJoint1717)
HAnimJoint1718 = x3d.HAnimJoint()
HAnimJoint1718.setUSE("hanim_l_carpometacarpal_4")

HAnimHumanoid43.addJoints(HAnimJoint1718)
HAnimJoint1719 = x3d.HAnimJoint()
HAnimJoint1719.setUSE("hanim_l_metacarpophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1719)
HAnimJoint1720 = x3d.HAnimJoint()
HAnimJoint1720.setUSE("hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1720)
HAnimJoint1721 = x3d.HAnimJoint()
HAnimJoint1721.setUSE("hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1721)
HAnimJoint1722 = x3d.HAnimJoint()
HAnimJoint1722.setUSE("hanim_l_carpometacarpal_5")

HAnimHumanoid43.addJoints(HAnimJoint1722)
HAnimJoint1723 = x3d.HAnimJoint()
HAnimJoint1723.setUSE("hanim_l_metacarpophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1723)
HAnimJoint1724 = x3d.HAnimJoint()
HAnimJoint1724.setUSE("hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1724)
HAnimJoint1725 = x3d.HAnimJoint()
HAnimJoint1725.setUSE("hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1725)
HAnimJoint1726 = x3d.HAnimJoint()
HAnimJoint1726.setUSE("hanim_r_sternoclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1726)
HAnimJoint1727 = x3d.HAnimJoint()
HAnimJoint1727.setUSE("hanim_r_acromioclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1727)
HAnimJoint1728 = x3d.HAnimJoint()
HAnimJoint1728.setUSE("hanim_r_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint1728)
HAnimJoint1729 = x3d.HAnimJoint()
HAnimJoint1729.setUSE("hanim_r_elbow")

HAnimHumanoid43.addJoints(HAnimJoint1729)
HAnimJoint1730 = x3d.HAnimJoint()
HAnimJoint1730.setUSE("hanim_r_radiocarpal")

HAnimHumanoid43.addJoints(HAnimJoint1730)
HAnimJoint1731 = x3d.HAnimJoint()
HAnimJoint1731.setUSE("hanim_r_midcarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1731)
HAnimJoint1732 = x3d.HAnimJoint()
HAnimJoint1732.setUSE("hanim_r_carpometacarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1732)
HAnimJoint1733 = x3d.HAnimJoint()
HAnimJoint1733.setUSE("hanim_r_metacarpophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1733)
HAnimJoint1734 = x3d.HAnimJoint()
HAnimJoint1734.setUSE("hanim_r_carpal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1734)
HAnimJoint1735 = x3d.HAnimJoint()
HAnimJoint1735.setUSE("hanim_r_midcarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1735)
HAnimJoint1736 = x3d.HAnimJoint()
HAnimJoint1736.setUSE("hanim_r_carpometacarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1736)
HAnimJoint1737 = x3d.HAnimJoint()
HAnimJoint1737.setUSE("hanim_r_metacarpophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1737)
HAnimJoint1738 = x3d.HAnimJoint()
HAnimJoint1738.setUSE("hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1738)
HAnimJoint1739 = x3d.HAnimJoint()
HAnimJoint1739.setUSE("hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1739)
HAnimJoint1740 = x3d.HAnimJoint()
HAnimJoint1740.setUSE("hanim_r_midcarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1740)
HAnimJoint1741 = x3d.HAnimJoint()
HAnimJoint1741.setUSE("hanim_r_carpometacarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1741)
HAnimJoint1742 = x3d.HAnimJoint()
HAnimJoint1742.setUSE("hanim_r_metacarpophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1742)
HAnimJoint1743 = x3d.HAnimJoint()
HAnimJoint1743.setUSE("hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1743)
HAnimJoint1744 = x3d.HAnimJoint()
HAnimJoint1744.setUSE("hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1744)
HAnimJoint1745 = x3d.HAnimJoint()
HAnimJoint1745.setUSE("hanim_r_midcarpal_4_5")

HAnimHumanoid43.addJoints(HAnimJoint1745)
HAnimJoint1746 = x3d.HAnimJoint()
HAnimJoint1746.setUSE("hanim_r_carpometacarpal_4")

HAnimHumanoid43.addJoints(HAnimJoint1746)
HAnimJoint1747 = x3d.HAnimJoint()
HAnimJoint1747.setUSE("hanim_r_metacarpophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1747)
HAnimJoint1748 = x3d.HAnimJoint()
HAnimJoint1748.setUSE("hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1748)
HAnimJoint1749 = x3d.HAnimJoint()
HAnimJoint1749.setUSE("hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1749)
HAnimJoint1750 = x3d.HAnimJoint()
HAnimJoint1750.setUSE("hanim_r_carpometacarpal_5")

HAnimHumanoid43.addJoints(HAnimJoint1750)
HAnimJoint1751 = x3d.HAnimJoint()
HAnimJoint1751.setUSE("hanim_r_metacarpophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1751)
HAnimJoint1752 = x3d.HAnimJoint()
HAnimJoint1752.setUSE("hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1752)
HAnimJoint1753 = x3d.HAnimJoint()
HAnimJoint1753.setUSE("hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1753)
HAnimSegment1754 = x3d.HAnimSegment()
HAnimSegment1754.setUSE("hanim_sacrum")

HAnimHumanoid43.setSegments(HAnimSegment1754)
HAnimSegment1755 = x3d.HAnimSegment()
HAnimSegment1755.setUSE("hanim_pelvis")

HAnimHumanoid43.setSegments(HAnimSegment1755)
HAnimSegment1756 = x3d.HAnimSegment()
HAnimSegment1756.setUSE("hanim_l_thigh")

HAnimHumanoid43.setSegments(HAnimSegment1756)
HAnimSegment1757 = x3d.HAnimSegment()
HAnimSegment1757.setUSE("hanim_l_calf")

HAnimHumanoid43.setSegments(HAnimSegment1757)
HAnimSegment1758 = x3d.HAnimSegment()
HAnimSegment1758.setUSE("hanim_l_talus")

HAnimHumanoid43.setSegments(HAnimSegment1758)
HAnimSegment1759 = x3d.HAnimSegment()
HAnimSegment1759.setUSE("hanim_l_navicular")

HAnimHumanoid43.setSegments(HAnimSegment1759)
HAnimSegment1760 = x3d.HAnimSegment()
HAnimSegment1760.setUSE("hanim_l_cuneiform_1")

HAnimHumanoid43.setSegments(HAnimSegment1760)
HAnimSegment1761 = x3d.HAnimSegment()
HAnimSegment1761.setUSE("hanim_l_metatarsal_1")

HAnimHumanoid43.setSegments(HAnimSegment1761)
HAnimSegment1762 = x3d.HAnimSegment()
HAnimSegment1762.setUSE("hanim_l_tarsal_proximal_phalanx_1")

HAnimHumanoid43.setSegments(HAnimSegment1762)
HAnimSegment1763 = x3d.HAnimSegment()
HAnimSegment1763.setUSE("hanim_l_cuneiform_2")

HAnimHumanoid43.setSegments(HAnimSegment1763)
HAnimSegment1764 = x3d.HAnimSegment()
HAnimSegment1764.setUSE("hanim_l_metatarsal_2")

HAnimHumanoid43.setSegments(HAnimSegment1764)
HAnimSegment1765 = x3d.HAnimSegment()
HAnimSegment1765.setUSE("hanim_l_tarsal_proximal_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1765)
HAnimSegment1766 = x3d.HAnimSegment()
HAnimSegment1766.setUSE("hanim_l_tarsal_middle_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1766)
HAnimSegment1767 = x3d.HAnimSegment()
HAnimSegment1767.setUSE("hanim_l_cuneiform_3")

HAnimHumanoid43.setSegments(HAnimSegment1767)
HAnimSegment1768 = x3d.HAnimSegment()
HAnimSegment1768.setUSE("hanim_l_metatarsal_3")

HAnimHumanoid43.setSegments(HAnimSegment1768)
HAnimSegment1769 = x3d.HAnimSegment()
HAnimSegment1769.setUSE("hanim_l_tarsal_proximal_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1769)
HAnimSegment1770 = x3d.HAnimSegment()
HAnimSegment1770.setUSE("hanim_l_tarsal_middle_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1770)
HAnimSegment1771 = x3d.HAnimSegment()
HAnimSegment1771.setUSE("hanim_l_calcaneus")

HAnimHumanoid43.setSegments(HAnimSegment1771)
HAnimSegment1772 = x3d.HAnimSegment()
HAnimSegment1772.setUSE("hanim_l_cuboid")

HAnimHumanoid43.setSegments(HAnimSegment1772)
HAnimSegment1773 = x3d.HAnimSegment()
HAnimSegment1773.setUSE("hanim_l_metatarsal_4")

HAnimHumanoid43.setSegments(HAnimSegment1773)
HAnimSegment1774 = x3d.HAnimSegment()
HAnimSegment1774.setUSE("hanim_l_tarsal_proximal_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1774)
HAnimSegment1775 = x3d.HAnimSegment()
HAnimSegment1775.setUSE("hanim_l_tarsal_middle_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1775)
HAnimSegment1776 = x3d.HAnimSegment()
HAnimSegment1776.setUSE("hanim_l_metatarsal_5")

HAnimHumanoid43.setSegments(HAnimSegment1776)
HAnimSegment1777 = x3d.HAnimSegment()
HAnimSegment1777.setUSE("hanim_l_tarsal_proximal_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1777)
HAnimSegment1778 = x3d.HAnimSegment()
HAnimSegment1778.setUSE("hanim_l_tarsal_middle_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1778)
HAnimSegment1779 = x3d.HAnimSegment()
HAnimSegment1779.setUSE("hanim_r_thigh")

HAnimHumanoid43.setSegments(HAnimSegment1779)
HAnimSegment1780 = x3d.HAnimSegment()
HAnimSegment1780.setUSE("hanim_r_calf")

HAnimHumanoid43.setSegments(HAnimSegment1780)
HAnimSegment1781 = x3d.HAnimSegment()
HAnimSegment1781.setUSE("hanim_r_talus")

HAnimHumanoid43.setSegments(HAnimSegment1781)
HAnimSegment1782 = x3d.HAnimSegment()
HAnimSegment1782.setUSE("hanim_r_navicular")

HAnimHumanoid43.setSegments(HAnimSegment1782)
HAnimSegment1783 = x3d.HAnimSegment()
HAnimSegment1783.setUSE("hanim_r_cuneiform_1")

HAnimHumanoid43.setSegments(HAnimSegment1783)
HAnimSegment1784 = x3d.HAnimSegment()
HAnimSegment1784.setUSE("hanim_r_metatarsal_1")

HAnimHumanoid43.setSegments(HAnimSegment1784)
HAnimSegment1785 = x3d.HAnimSegment()
HAnimSegment1785.setUSE("hanim_r_tarsal_proximal_phalanx_1")

HAnimHumanoid43.setSegments(HAnimSegment1785)
HAnimSegment1786 = x3d.HAnimSegment()
HAnimSegment1786.setUSE("hanim_r_cuneiform_2")

HAnimHumanoid43.setSegments(HAnimSegment1786)
HAnimSegment1787 = x3d.HAnimSegment()
HAnimSegment1787.setUSE("hanim_r_metatarsal_2")

HAnimHumanoid43.setSegments(HAnimSegment1787)
HAnimSegment1788 = x3d.HAnimSegment()
HAnimSegment1788.setUSE("hanim_r_tarsal_proximal_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1788)
HAnimSegment1789 = x3d.HAnimSegment()
HAnimSegment1789.setUSE("hanim_r_tarsal_middle_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1789)
HAnimSegment1790 = x3d.HAnimSegment()
HAnimSegment1790.setUSE("hanim_r_cuneiform_3")

HAnimHumanoid43.setSegments(HAnimSegment1790)
HAnimSegment1791 = x3d.HAnimSegment()
HAnimSegment1791.setUSE("hanim_r_metatarsal_3")

HAnimHumanoid43.setSegments(HAnimSegment1791)
HAnimSegment1792 = x3d.HAnimSegment()
HAnimSegment1792.setUSE("hanim_r_tarsal_proximal_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1792)
HAnimSegment1793 = x3d.HAnimSegment()
HAnimSegment1793.setUSE("hanim_r_tarsal_middle_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1793)
HAnimSegment1794 = x3d.HAnimSegment()
HAnimSegment1794.setUSE("hanim_r_calcaneus")

HAnimHumanoid43.setSegments(HAnimSegment1794)
HAnimSegment1795 = x3d.HAnimSegment()
HAnimSegment1795.setUSE("hanim_r_cuboid")

HAnimHumanoid43.setSegments(HAnimSegment1795)
HAnimSegment1796 = x3d.HAnimSegment()
HAnimSegment1796.setUSE("hanim_r_metatarsal_4")

HAnimHumanoid43.setSegments(HAnimSegment1796)
HAnimSegment1797 = x3d.HAnimSegment()
HAnimSegment1797.setUSE("hanim_r_tarsal_proximal_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1797)
HAnimSegment1798 = x3d.HAnimSegment()
HAnimSegment1798.setUSE("hanim_r_tarsal_middle_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1798)
HAnimSegment1799 = x3d.HAnimSegment()
HAnimSegment1799.setUSE("hanim_r_metatarsal_5")

HAnimHumanoid43.setSegments(HAnimSegment1799)
HAnimSegment1800 = x3d.HAnimSegment()
HAnimSegment1800.setUSE("hanim_r_tarsal_proximal_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1800)
HAnimSegment1801 = x3d.HAnimSegment()
HAnimSegment1801.setUSE("hanim_r_tarsal_middle_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1801)
HAnimSegment1802 = x3d.HAnimSegment()
HAnimSegment1802.setUSE("hanim_l5")

HAnimHumanoid43.setSegments(HAnimSegment1802)
HAnimSegment1803 = x3d.HAnimSegment()
HAnimSegment1803.setUSE("hanim_l4")

HAnimHumanoid43.setSegments(HAnimSegment1803)
HAnimSegment1804 = x3d.HAnimSegment()
HAnimSegment1804.setUSE("hanim_l3")

HAnimHumanoid43.setSegments(HAnimSegment1804)
HAnimSegment1805 = x3d.HAnimSegment()
HAnimSegment1805.setUSE("hanim_l2")

HAnimHumanoid43.setSegments(HAnimSegment1805)
HAnimSegment1806 = x3d.HAnimSegment()
HAnimSegment1806.setUSE("hanim_l1")

HAnimHumanoid43.setSegments(HAnimSegment1806)
HAnimSegment1807 = x3d.HAnimSegment()
HAnimSegment1807.setUSE("hanim_t12")

HAnimHumanoid43.setSegments(HAnimSegment1807)
HAnimSegment1808 = x3d.HAnimSegment()
HAnimSegment1808.setUSE("hanim_t11")

HAnimHumanoid43.setSegments(HAnimSegment1808)
HAnimSegment1809 = x3d.HAnimSegment()
HAnimSegment1809.setUSE("hanim_t10")

HAnimHumanoid43.setSegments(HAnimSegment1809)
HAnimSegment1810 = x3d.HAnimSegment()
HAnimSegment1810.setUSE("hanim_t9")

HAnimHumanoid43.setSegments(HAnimSegment1810)
HAnimSegment1811 = x3d.HAnimSegment()
HAnimSegment1811.setUSE("hanim_t8")

HAnimHumanoid43.setSegments(HAnimSegment1811)
HAnimSegment1812 = x3d.HAnimSegment()
HAnimSegment1812.setUSE("hanim_t7")

HAnimHumanoid43.setSegments(HAnimSegment1812)
HAnimSegment1813 = x3d.HAnimSegment()
HAnimSegment1813.setUSE("hanim_t6")

HAnimHumanoid43.setSegments(HAnimSegment1813)
HAnimSegment1814 = x3d.HAnimSegment()
HAnimSegment1814.setUSE("hanim_t5")

HAnimHumanoid43.setSegments(HAnimSegment1814)
HAnimSegment1815 = x3d.HAnimSegment()
HAnimSegment1815.setUSE("hanim_t4")

HAnimHumanoid43.setSegments(HAnimSegment1815)
HAnimSegment1816 = x3d.HAnimSegment()
HAnimSegment1816.setUSE("hanim_t3")

HAnimHumanoid43.setSegments(HAnimSegment1816)
HAnimSegment1817 = x3d.HAnimSegment()
HAnimSegment1817.setUSE("hanim_t2")

HAnimHumanoid43.setSegments(HAnimSegment1817)
HAnimSegment1818 = x3d.HAnimSegment()
HAnimSegment1818.setUSE("hanim_t1")

HAnimHumanoid43.setSegments(HAnimSegment1818)
HAnimSegment1819 = x3d.HAnimSegment()
HAnimSegment1819.setUSE("hanim_c7")

HAnimHumanoid43.setSegments(HAnimSegment1819)
HAnimSegment1820 = x3d.HAnimSegment()
HAnimSegment1820.setUSE("hanim_c6")

HAnimHumanoid43.setSegments(HAnimSegment1820)
HAnimSegment1821 = x3d.HAnimSegment()
HAnimSegment1821.setUSE("hanim_c5")

HAnimHumanoid43.setSegments(HAnimSegment1821)
HAnimSegment1822 = x3d.HAnimSegment()
HAnimSegment1822.setUSE("hanim_c4")

HAnimHumanoid43.setSegments(HAnimSegment1822)
HAnimSegment1823 = x3d.HAnimSegment()
HAnimSegment1823.setUSE("hanim_c3")

HAnimHumanoid43.setSegments(HAnimSegment1823)
HAnimSegment1824 = x3d.HAnimSegment()
HAnimSegment1824.setUSE("hanim_c2")

HAnimHumanoid43.setSegments(HAnimSegment1824)
HAnimSegment1825 = x3d.HAnimSegment()
HAnimSegment1825.setUSE("hanim_c1")

HAnimHumanoid43.setSegments(HAnimSegment1825)
HAnimSegment1826 = x3d.HAnimSegment()
HAnimSegment1826.setUSE("hanim_skull")

HAnimHumanoid43.setSegments(HAnimSegment1826)
HAnimSegment1827 = x3d.HAnimSegment()
HAnimSegment1827.setUSE("hanim_l_clavicle")

HAnimHumanoid43.setSegments(HAnimSegment1827)
HAnimSegment1828 = x3d.HAnimSegment()
HAnimSegment1828.setUSE("hanim_l_scapula")

HAnimHumanoid43.setSegments(HAnimSegment1828)
HAnimSegment1829 = x3d.HAnimSegment()
HAnimSegment1829.setUSE("hanim_l_upperarm")

HAnimHumanoid43.setSegments(HAnimSegment1829)
HAnimSegment1830 = x3d.HAnimSegment()
HAnimSegment1830.setUSE("hanim_l_forearm")

HAnimHumanoid43.setSegments(HAnimSegment1830)
HAnimSegment1831 = x3d.HAnimSegment()
HAnimSegment1831.setUSE("hanim_l_carpal")

HAnimHumanoid43.setSegments(HAnimSegment1831)
HAnimSegment1832 = x3d.HAnimSegment()
HAnimSegment1832.setUSE("hanim_l_trapezium")

HAnimHumanoid43.setSegments(HAnimSegment1832)
HAnimSegment1833 = x3d.HAnimSegment()
HAnimSegment1833.setUSE("hanim_l_metacarpal_1")

HAnimHumanoid43.setSegments(HAnimSegment1833)
HAnimSegment1834 = x3d.HAnimSegment()
HAnimSegment1834.setUSE("hanim_l_carpal_proximal_phalanx_1")

HAnimHumanoid43.setSegments(HAnimSegment1834)
HAnimSegment1835 = x3d.HAnimSegment()
HAnimSegment1835.setUSE("hanim_l_trapezoid")

HAnimHumanoid43.setSegments(HAnimSegment1835)
HAnimSegment1836 = x3d.HAnimSegment()
HAnimSegment1836.setUSE("hanim_l_metacarpal_2")

HAnimHumanoid43.setSegments(HAnimSegment1836)
HAnimSegment1837 = x3d.HAnimSegment()
HAnimSegment1837.setUSE("hanim_l_carpal_proximal_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1837)
HAnimSegment1838 = x3d.HAnimSegment()
HAnimSegment1838.setUSE("hanim_l_carpal_middle_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1838)
HAnimSegment1839 = x3d.HAnimSegment()
HAnimSegment1839.setUSE("hanim_l_capitate")

HAnimHumanoid43.setSegments(HAnimSegment1839)
HAnimSegment1840 = x3d.HAnimSegment()
HAnimSegment1840.setUSE("hanim_l_metacarpal_3")

HAnimHumanoid43.setSegments(HAnimSegment1840)
HAnimSegment1841 = x3d.HAnimSegment()
HAnimSegment1841.setUSE("hanim_l_carpal_proximal_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1841)
HAnimSegment1842 = x3d.HAnimSegment()
HAnimSegment1842.setUSE("hanim_l_carpal_middle_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1842)
HAnimSegment1843 = x3d.HAnimSegment()
HAnimSegment1843.setUSE("hanim_l_hamate")

HAnimHumanoid43.setSegments(HAnimSegment1843)
HAnimSegment1844 = x3d.HAnimSegment()
HAnimSegment1844.setUSE("hanim_l_metacarpal_4")

HAnimHumanoid43.setSegments(HAnimSegment1844)
HAnimSegment1845 = x3d.HAnimSegment()
HAnimSegment1845.setUSE("hanim_l_carpal_proximal_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1845)
HAnimSegment1846 = x3d.HAnimSegment()
HAnimSegment1846.setUSE("hanim_l_carpal_middle_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1846)
HAnimSegment1847 = x3d.HAnimSegment()
HAnimSegment1847.setUSE("hanim_l_metacarpal_5")

HAnimHumanoid43.setSegments(HAnimSegment1847)
HAnimSegment1848 = x3d.HAnimSegment()
HAnimSegment1848.setUSE("hanim_l_carpal_proximal_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1848)
HAnimSegment1849 = x3d.HAnimSegment()
HAnimSegment1849.setUSE("hanim_l_carpal_middle_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1849)
HAnimSegment1850 = x3d.HAnimSegment()
HAnimSegment1850.setUSE("hanim_r_clavicle")

HAnimHumanoid43.setSegments(HAnimSegment1850)
HAnimSegment1851 = x3d.HAnimSegment()
HAnimSegment1851.setUSE("hanim_r_scapula")

HAnimHumanoid43.setSegments(HAnimSegment1851)
HAnimSegment1852 = x3d.HAnimSegment()
HAnimSegment1852.setUSE("hanim_r_upperarm")

HAnimHumanoid43.setSegments(HAnimSegment1852)
HAnimSegment1853 = x3d.HAnimSegment()
HAnimSegment1853.setUSE("hanim_r_forearm")

HAnimHumanoid43.setSegments(HAnimSegment1853)
HAnimSegment1854 = x3d.HAnimSegment()
HAnimSegment1854.setUSE("hanim_r_carpal")

HAnimHumanoid43.setSegments(HAnimSegment1854)
HAnimSegment1855 = x3d.HAnimSegment()
HAnimSegment1855.setUSE("hanim_r_trapezium")

HAnimHumanoid43.setSegments(HAnimSegment1855)
HAnimSegment1856 = x3d.HAnimSegment()
HAnimSegment1856.setUSE("hanim_r_metacarpal_1")

HAnimHumanoid43.setSegments(HAnimSegment1856)
HAnimSegment1857 = x3d.HAnimSegment()
HAnimSegment1857.setUSE("hanim_r_carpal_proximal_phalanx_1")

HAnimHumanoid43.setSegments(HAnimSegment1857)
HAnimSegment1858 = x3d.HAnimSegment()
HAnimSegment1858.setUSE("hanim_r_trapezoid")

HAnimHumanoid43.setSegments(HAnimSegment1858)
HAnimSegment1859 = x3d.HAnimSegment()
HAnimSegment1859.setUSE("hanim_r_metacarpal_2")

HAnimHumanoid43.setSegments(HAnimSegment1859)
HAnimSegment1860 = x3d.HAnimSegment()
HAnimSegment1860.setUSE("hanim_r_carpal_proximal_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1860)
HAnimSegment1861 = x3d.HAnimSegment()
HAnimSegment1861.setUSE("hanim_r_carpal_middle_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1861)
HAnimSegment1862 = x3d.HAnimSegment()
HAnimSegment1862.setUSE("hanim_r_capitate")

HAnimHumanoid43.setSegments(HAnimSegment1862)
HAnimSegment1863 = x3d.HAnimSegment()
HAnimSegment1863.setUSE("hanim_r_metacarpal_3")

HAnimHumanoid43.setSegments(HAnimSegment1863)
HAnimSegment1864 = x3d.HAnimSegment()
HAnimSegment1864.setUSE("hanim_r_carpal_proximal_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1864)
HAnimSegment1865 = x3d.HAnimSegment()
HAnimSegment1865.setUSE("hanim_r_carpal_middle_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1865)
HAnimSegment1866 = x3d.HAnimSegment()
HAnimSegment1866.setUSE("hanim_r_hamate")

HAnimHumanoid43.setSegments(HAnimSegment1866)
HAnimSegment1867 = x3d.HAnimSegment()
HAnimSegment1867.setUSE("hanim_r_metacarpal_4")

HAnimHumanoid43.setSegments(HAnimSegment1867)
HAnimSegment1868 = x3d.HAnimSegment()
HAnimSegment1868.setUSE("hanim_r_carpal_proximal_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1868)
HAnimSegment1869 = x3d.HAnimSegment()
HAnimSegment1869.setUSE("hanim_r_carpal_middle_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1869)
HAnimSegment1870 = x3d.HAnimSegment()
HAnimSegment1870.setUSE("hanim_r_metacarpal_5")

HAnimHumanoid43.setSegments(HAnimSegment1870)
HAnimSegment1871 = x3d.HAnimSegment()
HAnimSegment1871.setUSE("hanim_r_carpal_proximal_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1871)
HAnimSegment1872 = x3d.HAnimSegment()
HAnimSegment1872.setUSE("hanim_r_carpal_middle_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1872)
HAnimSite1873 = x3d.HAnimSite()
HAnimSite1873.setUSE("hanim_buttocks_standing_wall_contact_point")

HAnimHumanoid43.setSites(HAnimSite1873)
HAnimSite1874 = x3d.HAnimSite()
HAnimSite1874.setUSE("hanim_crotch")

HAnimHumanoid43.setSites(HAnimSite1874)
HAnimSite1875 = x3d.HAnimSite()
HAnimSite1875.setUSE("hanim_l_asis")

HAnimHumanoid43.setSites(HAnimSite1875)
HAnimSite1876 = x3d.HAnimSite()
HAnimSite1876.setUSE("hanim_l_iliocristale")

HAnimHumanoid43.setSites(HAnimSite1876)
HAnimSite1877 = x3d.HAnimSite()
HAnimSite1877.setUSE("hanim_l_psis")

HAnimHumanoid43.setSites(HAnimSite1877)
HAnimSite1878 = x3d.HAnimSite()
HAnimSite1878.setUSE("hanim_l_trochanterion")

HAnimHumanoid43.setSites(HAnimSite1878)
HAnimSite1879 = x3d.HAnimSite()
HAnimSite1879.setUSE("hanim_r_asis")

HAnimHumanoid43.setSites(HAnimSite1879)
HAnimSite1880 = x3d.HAnimSite()
HAnimSite1880.setUSE("hanim_r_iliocristale")

HAnimHumanoid43.setSites(HAnimSite1880)
HAnimSite1881 = x3d.HAnimSite()
HAnimSite1881.setUSE("hanim_r_psis")

HAnimHumanoid43.setSites(HAnimSite1881)
HAnimSite1882 = x3d.HAnimSite()
HAnimSite1882.setUSE("hanim_r_trochanterion")

HAnimHumanoid43.setSites(HAnimSite1882)
HAnimSite1883 = x3d.HAnimSite()
HAnimSite1883.setUSE("hanim_navel")

HAnimHumanoid43.setSites(HAnimSite1883)
HAnimSite1884 = x3d.HAnimSite()
HAnimSite1884.setUSE("hanim_waist_preferred_anterior")

HAnimHumanoid43.setSites(HAnimSite1884)
HAnimSite1885 = x3d.HAnimSite()
HAnimSite1885.setUSE("hanim_waist_preferred_posterior")

HAnimHumanoid43.setSites(HAnimSite1885)
HAnimSite1886 = x3d.HAnimSite()
HAnimSite1886.setUSE("hanim_l_femoral_lateral_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1886)
HAnimSite1887 = x3d.HAnimSite()
HAnimSite1887.setUSE("hanim_l_femoral_medial_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1887)
HAnimSite1888 = x3d.HAnimSite()
HAnimSite1888.setUSE("hanim_l_knee_crease")

HAnimHumanoid43.setSites(HAnimSite1888)
HAnimSite1889 = x3d.HAnimSite()
HAnimSite1889.setUSE("hanim_l_suprapatella")

HAnimHumanoid43.setSites(HAnimSite1889)
HAnimSite1890 = x3d.HAnimSite()
HAnimSite1890.setUSE("hanim_r_femoral_lateral_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1890)
HAnimSite1891 = x3d.HAnimSite()
HAnimSite1891.setUSE("hanim_r_femoral_medial_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1891)
HAnimSite1892 = x3d.HAnimSite()
HAnimSite1892.setUSE("hanim_r_knee_crease")

HAnimHumanoid43.setSites(HAnimSite1892)
HAnimSite1893 = x3d.HAnimSite()
HAnimSite1893.setUSE("hanim_r_suprapatella")

HAnimHumanoid43.setSites(HAnimSite1893)
HAnimSite1894 = x3d.HAnimSite()
HAnimSite1894.setUSE("hanim_l_lateral_malleolus")

HAnimHumanoid43.setSites(HAnimSite1894)
HAnimSite1895 = x3d.HAnimSite()
HAnimSite1895.setUSE("hanim_l_medial_malleolus")

HAnimHumanoid43.setSites(HAnimSite1895)
HAnimSite1896 = x3d.HAnimSite()
HAnimSite1896.setUSE("hanim_l_tibiale")

HAnimHumanoid43.setSites(HAnimSite1896)
HAnimSite1897 = x3d.HAnimSite()
HAnimSite1897.setUSE("hanim_l_calcaneus_posterior")

HAnimHumanoid43.setSites(HAnimSite1897)
HAnimSite1898 = x3d.HAnimSite()
HAnimSite1898.setUSE("hanim_l_sphyrion")

HAnimHumanoid43.setSites(HAnimSite1898)
HAnimSite1899 = x3d.HAnimSite()
HAnimSite1899.setUSE("hanim_l_metatarsal_phalanx_1")

HAnimHumanoid43.setSites(HAnimSite1899)
HAnimSite1900 = x3d.HAnimSite()
HAnimSite1900.setUSE("hanim_l_tarsal_distal_phalanx_1_tip")

HAnimHumanoid43.setSites(HAnimSite1900)
HAnimSite1901 = x3d.HAnimSite()
HAnimSite1901.setUSE("hanim_l_tarsal_distal_phalanx_2_tip")

HAnimHumanoid43.setSites(HAnimSite1901)
HAnimSite1902 = x3d.HAnimSite()
HAnimSite1902.setUSE("hanim_l_tarsal_distal_phalanx_3_tip")

HAnimHumanoid43.setSites(HAnimSite1902)
HAnimSite1903 = x3d.HAnimSite()
HAnimSite1903.setUSE("hanim_l_tarsal_distal_phalanx_4_tip")

HAnimHumanoid43.setSites(HAnimSite1903)
HAnimSite1904 = x3d.HAnimSite()
HAnimSite1904.setUSE("hanim_l_metatarsal_phalanx_5")

HAnimHumanoid43.setSites(HAnimSite1904)
HAnimSite1905 = x3d.HAnimSite()
HAnimSite1905.setUSE("hanim_l_tarsal_distal_phalanx_5_tip")

HAnimHumanoid43.setSites(HAnimSite1905)
HAnimSite1906 = x3d.HAnimSite()
HAnimSite1906.setUSE("hanim_r_lateral_malleolus")

HAnimHumanoid43.setSites(HAnimSite1906)
HAnimSite1907 = x3d.HAnimSite()
HAnimSite1907.setUSE("hanim_r_medial_malleolus")

HAnimHumanoid43.setSites(HAnimSite1907)
HAnimSite1908 = x3d.HAnimSite()
HAnimSite1908.setUSE("hanim_r_tibiale")

HAnimHumanoid43.setSites(HAnimSite1908)
HAnimSite1909 = x3d.HAnimSite()
HAnimSite1909.setUSE("hanim_r_calcaneus_posterior")

HAnimHumanoid43.setSites(HAnimSite1909)
HAnimSite1910 = x3d.HAnimSite()
HAnimSite1910.setUSE("hanim_r_sphyrion")

HAnimHumanoid43.setSites(HAnimSite1910)
HAnimSite1911 = x3d.HAnimSite()
HAnimSite1911.setUSE("hanim_r_metatarsal_phalanx_1")

HAnimHumanoid43.setSites(HAnimSite1911)
HAnimSite1912 = x3d.HAnimSite()
HAnimSite1912.setUSE("hanim_r_tarsal_distal_phalanx_1_tip")

HAnimHumanoid43.setSites(HAnimSite1912)
HAnimSite1913 = x3d.HAnimSite()
HAnimSite1913.setUSE("hanim_r_tarsal_distal_phalanx_2_tip")

HAnimHumanoid43.setSites(HAnimSite1913)
HAnimSite1914 = x3d.HAnimSite()
HAnimSite1914.setUSE("hanim_r_tarsal_distal_phalanx_3_tip")

HAnimHumanoid43.setSites(HAnimSite1914)
HAnimSite1915 = x3d.HAnimSite()
HAnimSite1915.setUSE("hanim_r_tarsal_distal_phalanx_4_tip")

HAnimHumanoid43.setSites(HAnimSite1915)
HAnimSite1916 = x3d.HAnimSite()
HAnimSite1916.setUSE("hanim_r_metatarsal_phalanx_5")

HAnimHumanoid43.setSites(HAnimSite1916)
HAnimSite1917 = x3d.HAnimSite()
HAnimSite1917.setUSE("hanim_r_tarsal_distal_phalanx_5_tip")

HAnimHumanoid43.setSites(HAnimSite1917)
HAnimSite1918 = x3d.HAnimSite()
HAnimSite1918.setUSE("hanim_l_rib10")

HAnimHumanoid43.setSites(HAnimSite1918)
HAnimSite1919 = x3d.HAnimSite()
HAnimSite1919.setUSE("hanim_r_rib10")

HAnimHumanoid43.setSites(HAnimSite1919)
HAnimSite1920 = x3d.HAnimSite()
HAnimSite1920.setUSE("hanim_spine_2_middle_back")

HAnimHumanoid43.setSites(HAnimSite1920)
HAnimSite1921 = x3d.HAnimSite()
HAnimSite1921.setUSE("hanim_substernale")

HAnimHumanoid43.setSites(HAnimSite1921)
HAnimSite1922 = x3d.HAnimSite()
HAnimSite1922.setUSE("hanim_l_thelion")

HAnimHumanoid43.setSites(HAnimSite1922)
HAnimSite1923 = x3d.HAnimSite()
HAnimSite1923.setUSE("hanim_r_thelion")

HAnimHumanoid43.setSites(HAnimSite1923)
HAnimSite1924 = x3d.HAnimSite()
HAnimSite1924.setUSE("hanim_l_chest_midsagittal_plane")

HAnimHumanoid43.setSites(HAnimSite1924)
HAnimSite1925 = x3d.HAnimSite()
HAnimSite1925.setUSE("hanim_mesosternale")

HAnimHumanoid43.setSites(HAnimSite1925)
HAnimSite1926 = x3d.HAnimSite()
HAnimSite1926.setUSE("hanim_r_chest_midsagittal_plane")

HAnimHumanoid43.setSites(HAnimSite1926)
HAnimSite1927 = x3d.HAnimSite()
HAnimSite1927.setUSE("hanim_rear_center_midsagittal_plane")

HAnimHumanoid43.setSites(HAnimSite1927)
HAnimSite1928 = x3d.HAnimSite()
HAnimSite1928.setUSE("hanim_spine_1_middle_back")

HAnimHumanoid43.setSites(HAnimSite1928)
HAnimSite1929 = x3d.HAnimSite()
HAnimSite1929.setUSE("hanim_cervicale")

HAnimHumanoid43.setSites(HAnimSite1929)
HAnimSite1930 = x3d.HAnimSite()
HAnimSite1930.setUSE("hanim_suprasternale")

HAnimHumanoid43.setSites(HAnimSite1930)
HAnimSite1931 = x3d.HAnimSite()
HAnimSite1931.setUSE("hanim_l_neck_base")

HAnimHumanoid43.setSites(HAnimSite1931)
HAnimSite1932 = x3d.HAnimSite()
HAnimSite1932.setUSE("hanim_r_neck_base")

HAnimHumanoid43.setSites(HAnimSite1932)
HAnimSite1933 = x3d.HAnimSite()
HAnimSite1933.setUSE("hanim_l_acromion")

HAnimHumanoid43.setSites(HAnimSite1933)
HAnimSite1934 = x3d.HAnimSite()
HAnimSite1934.setUSE("hanim_l_axilla_distal_pt")

HAnimHumanoid43.setSites(HAnimSite1934)
HAnimSite1935 = x3d.HAnimSite()
HAnimSite1935.setUSE("hanim_l_axilla_posterior_folds")

HAnimHumanoid43.setSites(HAnimSite1935)
HAnimSite1936 = x3d.HAnimSite()
HAnimSite1936.setUSE("hanim_l_axilla_proximal")

HAnimHumanoid43.setSites(HAnimSite1936)
HAnimSite1937 = x3d.HAnimSite()
HAnimSite1937.setUSE("hanim_l_clavicale")

HAnimHumanoid43.setSites(HAnimSite1937)
HAnimSite1938 = x3d.HAnimSite()
HAnimSite1938.setUSE("hanim_r_acromion")

HAnimHumanoid43.setSites(HAnimSite1938)
HAnimSite1939 = x3d.HAnimSite()
HAnimSite1939.setUSE("hanim_r_axilla_distal_pt")

HAnimHumanoid43.setSites(HAnimSite1939)
HAnimSite1940 = x3d.HAnimSite()
HAnimSite1940.setUSE("hanim_r_axilla_posterior_folds")

HAnimHumanoid43.setSites(HAnimSite1940)
HAnimSite1941 = x3d.HAnimSite()
HAnimSite1941.setUSE("hanim_r_axilla_proximal")

HAnimHumanoid43.setSites(HAnimSite1941)
HAnimSite1942 = x3d.HAnimSite()
HAnimSite1942.setUSE("hanim_r_clavicale")

HAnimHumanoid43.setSites(HAnimSite1942)
HAnimSite1943 = x3d.HAnimSite()
HAnimSite1943.setUSE("hanim_adams_apple")

HAnimHumanoid43.setSites(HAnimSite1943)
HAnimSite1944 = x3d.HAnimSite()
HAnimSite1944.setUSE("hanim_glabella")

HAnimHumanoid43.setSites(HAnimSite1944)
HAnimSite1945 = x3d.HAnimSite()
HAnimSite1945.setUSE("hanim_l_ectocanthus")

HAnimHumanoid43.setSites(HAnimSite1945)
HAnimSite1946 = x3d.HAnimSite()
HAnimSite1946.setUSE("hanim_l_infraorbitale")

HAnimHumanoid43.setSites(HAnimSite1946)
HAnimSite1947 = x3d.HAnimSite()
HAnimSite1947.setUSE("hanim_l_tragion")

HAnimHumanoid43.setSites(HAnimSite1947)
HAnimSite1948 = x3d.HAnimSite()
HAnimSite1948.setUSE("hanim_nuchale")

HAnimHumanoid43.setSites(HAnimSite1948)
HAnimSite1949 = x3d.HAnimSite()
HAnimSite1949.setUSE("hanim_opisthocranion")

HAnimHumanoid43.setSites(HAnimSite1949)
HAnimSite1950 = x3d.HAnimSite()
HAnimSite1950.setUSE("hanim_r_ectocanthus")

HAnimHumanoid43.setSites(HAnimSite1950)
HAnimSite1951 = x3d.HAnimSite()
HAnimSite1951.setUSE("hanim_r_infraorbitale")

HAnimHumanoid43.setSites(HAnimSite1951)
HAnimSite1952 = x3d.HAnimSite()
HAnimSite1952.setUSE("hanim_r_tragion")

HAnimHumanoid43.setSites(HAnimSite1952)
HAnimSite1953 = x3d.HAnimSite()
HAnimSite1953.setUSE("hanim_sellion")

HAnimHumanoid43.setSites(HAnimSite1953)
HAnimSite1954 = x3d.HAnimSite()
HAnimSite1954.setUSE("hanim_skull_vertex")

HAnimHumanoid43.setSites(HAnimSite1954)
HAnimSite1955 = x3d.HAnimSite()
HAnimSite1955.setUSE("hanim_l_gonion")

HAnimHumanoid43.setSites(HAnimSite1955)
HAnimSite1956 = x3d.HAnimSite()
HAnimSite1956.setUSE("hanim_menton")

HAnimHumanoid43.setSites(HAnimSite1956)
HAnimSite1957 = x3d.HAnimSite()
HAnimSite1957.setUSE("hanim_r_gonion")

HAnimHumanoid43.setSites(HAnimSite1957)
HAnimSite1958 = x3d.HAnimSite()
HAnimSite1958.setUSE("hanim_supramenton")

HAnimHumanoid43.setSites(HAnimSite1958)
HAnimSite1959 = x3d.HAnimSite()
HAnimSite1959.setUSE("hanim_l_bideltoid")

HAnimHumanoid43.setSites(HAnimSite1959)
HAnimSite1960 = x3d.HAnimSite()
HAnimSite1960.setUSE("hanim_l_humeral_lateral_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1960)
HAnimSite1961 = x3d.HAnimSite()
HAnimSite1961.setUSE("hanim_l_humeral_medial_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1961)
HAnimSite1962 = x3d.HAnimSite()
HAnimSite1962.setUSE("hanim_l_olecranon")

HAnimHumanoid43.setSites(HAnimSite1962)
HAnimSite1963 = x3d.HAnimSite()
HAnimSite1963.setUSE("hanim_l_radial_styloid")

HAnimHumanoid43.setSites(HAnimSite1963)
HAnimSite1964 = x3d.HAnimSite()
HAnimSite1964.setUSE("hanim_l_radiale")

HAnimHumanoid43.setSites(HAnimSite1964)
HAnimSite1965 = x3d.HAnimSite()
HAnimSite1965.setUSE("hanim_l_ulnar_styloid")

HAnimHumanoid43.setSites(HAnimSite1965)
HAnimSite1966 = x3d.HAnimSite()
HAnimSite1966.setUSE("hanim_l_carpal_distal_phalanx_1_tip")

HAnimHumanoid43.setSites(HAnimSite1966)
HAnimSite1967 = x3d.HAnimSite()
HAnimSite1967.setUSE("hanim_l_metacarpal_phalanx_2")

HAnimHumanoid43.setSites(HAnimSite1967)
HAnimSite1968 = x3d.HAnimSite()
HAnimSite1968.setUSE("hanim_l_carpal_distal_phalanx_2_tip")

HAnimHumanoid43.setSites(HAnimSite1968)
HAnimSite1969 = x3d.HAnimSite()
HAnimSite1969.setUSE("hanim_l_dactylion")

HAnimHumanoid43.setSites(HAnimSite1969)
HAnimSite1970 = x3d.HAnimSite()
HAnimSite1970.setUSE("hanim_l_metacarpal_phalanx_3")

HAnimHumanoid43.setSites(HAnimSite1970)
HAnimSite1971 = x3d.HAnimSite()
HAnimSite1971.setUSE("hanim_l_carpal_distal_phalanx_3_tip")

HAnimHumanoid43.setSites(HAnimSite1971)
HAnimSite1972 = x3d.HAnimSite()
HAnimSite1972.setUSE("hanim_l_metacarpal_phalanx_5")

HAnimHumanoid43.setSites(HAnimSite1972)
HAnimSite1973 = x3d.HAnimSite()
HAnimSite1973.setUSE("hanim_l_carpal_distal_phalanx_4_tip")

HAnimHumanoid43.setSites(HAnimSite1973)
HAnimSite1974 = x3d.HAnimSite()
HAnimSite1974.setUSE("hanim_l_carpal_distal_phalanx_5_tip")

HAnimHumanoid43.setSites(HAnimSite1974)
HAnimSite1975 = x3d.HAnimSite()
HAnimSite1975.setUSE("hanim_r_bideltoid")

HAnimHumanoid43.setSites(HAnimSite1975)
HAnimSite1976 = x3d.HAnimSite()
HAnimSite1976.setUSE("hanim_r_humeral_lateral_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1976)
HAnimSite1977 = x3d.HAnimSite()
HAnimSite1977.setUSE("hanim_r_humeral_medial_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1977)
HAnimSite1978 = x3d.HAnimSite()
HAnimSite1978.setUSE("hanim_r_olecranon")

HAnimHumanoid43.setSites(HAnimSite1978)
HAnimSite1979 = x3d.HAnimSite()
HAnimSite1979.setUSE("hanim_r_radial_styloid")

HAnimHumanoid43.setSites(HAnimSite1979)
HAnimSite1980 = x3d.HAnimSite()
HAnimSite1980.setUSE("hanim_r_radiale")

HAnimHumanoid43.setSites(HAnimSite1980)
HAnimSite1981 = x3d.HAnimSite()
HAnimSite1981.setUSE("hanim_r_ulnar_styloid")

HAnimHumanoid43.setSites(HAnimSite1981)
HAnimSite1982 = x3d.HAnimSite()
HAnimSite1982.setUSE("hanim_r_carpal_distal_phalanx_1_tip")

HAnimHumanoid43.setSites(HAnimSite1982)
HAnimSite1983 = x3d.HAnimSite()
HAnimSite1983.setUSE("hanim_r_metacarpal_phalanx_2")

HAnimHumanoid43.setSites(HAnimSite1983)
HAnimSite1984 = x3d.HAnimSite()
HAnimSite1984.setUSE("hanim_r_carpal_distal_phalanx_2_tip")

HAnimHumanoid43.setSites(HAnimSite1984)
HAnimSite1985 = x3d.HAnimSite()
HAnimSite1985.setUSE("hanim_r_dactylion")

HAnimHumanoid43.setSites(HAnimSite1985)
HAnimSite1986 = x3d.HAnimSite()
HAnimSite1986.setUSE("hanim_r_metacarpal_phalanx_3")

HAnimHumanoid43.setSites(HAnimSite1986)
HAnimSite1987 = x3d.HAnimSite()
HAnimSite1987.setUSE("hanim_r_carpal_distal_phalanx_3_tip")

HAnimHumanoid43.setSites(HAnimSite1987)
HAnimSite1988 = x3d.HAnimSite()
HAnimSite1988.setUSE("hanim_r_metacarpal_phalanx_5")

HAnimHumanoid43.setSites(HAnimSite1988)
HAnimSite1989 = x3d.HAnimSite()
HAnimSite1989.setUSE("hanim_r_carpal_distal_phalanx_4_tip")

HAnimHumanoid43.setSites(HAnimSite1989)
HAnimSite1990 = x3d.HAnimSite()
HAnimSite1990.setUSE("hanim_r_carpal_distal_phalanx_5_tip")

HAnimHumanoid43.setSites(HAnimSite1990)

Scene11.addChildren(HAnimHumanoid43)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/DonHumanoid.new.python.x3d")
