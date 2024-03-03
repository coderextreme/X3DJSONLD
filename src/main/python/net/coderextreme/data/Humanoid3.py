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
meta3.setContent("Humanoid3.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("identifier")
meta4.setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid3.x3d")

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
HAnimJoint183.setUlimit([0,0,0])
HAnimJoint183.setLlimit([0,0,0])
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
HAnimJoint213.setUlimit([0,0,0])
HAnimJoint213.setLlimit([0,0,0])
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
HAnimJoint222.setUlimit([0,0,0])
HAnimJoint222.setLlimit([0,0,0])

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
HAnimJoint223.setUlimit([0,0,0])
HAnimJoint223.setLlimit([0,0,0])
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
HAnimJoint241.setUlimit([0,0,0])
HAnimJoint241.setLlimit([0,0,0])
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
HAnimJoint256.setUlimit([0,0,0])
HAnimJoint256.setLlimit([0,0,0])
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
HAnimJoint265.setUlimit([0,0,0])
HAnimJoint265.setLlimit([0,0,0])
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
HAnimJoint295.setUlimit([0,0,0])
HAnimJoint295.setLlimit([0,0,0])
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
HAnimJoint304.setUlimit([0,0,0])
HAnimJoint304.setLlimit([0,0,0])

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
HAnimJoint305.setUlimit([0,0,0])
HAnimJoint305.setLlimit([0,0,0])
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
Coordinate312.setPoint([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787])

LineSet311.setCoord(Coordinate312)
#from vl5 to vl4 vertices 2
ColorRGBA313 = x3d.ColorRGBA()
ColorRGBA313.setUSE("HAnimSegmentLineColorRGBA")

LineSet311.setColor(ColorRGBA313)

Shape310.setGeometry(LineSet311)

HAnimSegment306.addChildren(Shape310)

HAnimJoint305.addChildren(HAnimSegment306)
HAnimJoint314 = x3d.HAnimJoint()
HAnimJoint314.setName("vl4")
HAnimJoint314.setDEF("hanim_vl4")
HAnimJoint314.setCenter([0.0035,1.0925,-0.0787])
HAnimJoint314.setUlimit([0,0,0])
HAnimJoint314.setLlimit([0,0,0])
HAnimSegment315 = x3d.HAnimSegment()
HAnimSegment315.setName("l4")
HAnimSegment315.setDEF("hanim_l4")
Transform316 = x3d.Transform()
Transform316.setTranslation([0.0035,1.0925,-0.0787])
Transform317 = x3d.Transform()
#Empty Transform
Shape318 = x3d.Shape()
Shape318.setUSE("HAnimJointShape")

Transform317.addChild(Shape318)

Transform316.addChildren(Transform317)

HAnimSegment315.addChildren(Transform316)
Shape319 = x3d.Shape()
LineSet320 = x3d.LineSet()
LineSet320.setVertexCount([2])
Coordinate321 = x3d.Coordinate()
Coordinate321.setPoint([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796])

LineSet320.setCoord(Coordinate321)
#from vl4 to vl3 vertices 2
ColorRGBA322 = x3d.ColorRGBA()
ColorRGBA322.setUSE("HAnimSegmentLineColorRGBA")

LineSet320.setColor(ColorRGBA322)

Shape319.setGeometry(LineSet320)

HAnimSegment315.addChildren(Shape319)

HAnimJoint314.addChildren(HAnimSegment315)
HAnimJoint323 = x3d.HAnimJoint()
HAnimJoint323.setName("vl3")
HAnimJoint323.setDEF("hanim_vl3")
HAnimJoint323.setCenter([0.0041,1.1276,-0.0796])
HAnimJoint323.setUlimit([0,0,0])
HAnimJoint323.setLlimit([0,0,0])
HAnimSegment324 = x3d.HAnimSegment()
HAnimSegment324.setName("l3")
HAnimSegment324.setDEF("hanim_l3")
Transform325 = x3d.Transform()
Transform325.setTranslation([0.0041,1.1276,-0.0796])
Transform326 = x3d.Transform()
#Empty Transform
Shape327 = x3d.Shape()
Shape327.setUSE("HAnimJointShape")

Transform326.addChild(Shape327)

Transform325.addChildren(Transform326)

HAnimSegment324.addChildren(Transform325)
Shape328 = x3d.Shape()
LineSet329 = x3d.LineSet()
LineSet329.setVertexCount([2])
Coordinate330 = x3d.Coordinate()
Coordinate330.setPoint([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08])

LineSet329.setCoord(Coordinate330)
#from vl3 to vl2 vertices 2
ColorRGBA331 = x3d.ColorRGBA()
ColorRGBA331.setUSE("HAnimSegmentLineColorRGBA")

LineSet329.setColor(ColorRGBA331)

Shape328.setGeometry(LineSet329)

HAnimSegment324.addChildren(Shape328)
HAnimSite332 = x3d.HAnimSite()
HAnimSite332.setName("l_rib10")
HAnimSite332.setDEF("hanim_l_rib10")
HAnimSite332.setTranslation([0.0871,1.1925,0.0992])
TouchSensor333 = x3d.TouchSensor()
TouchSensor333.setDescription("HAnimSite l_rib10")

HAnimSite332.addChildren(TouchSensor333)
Shape334 = x3d.Shape()
Shape334.setUSE("HAnimSiteShape")

HAnimSite332.addChildren(Shape334)

HAnimSegment324.addChildren(HAnimSite332)
HAnimSite335 = x3d.HAnimSite()
HAnimSite335.setName("r_rib10")
HAnimSite335.setDEF("hanim_r_rib10")
HAnimSite335.setTranslation([-0.0711,1.1941,0.1016])
TouchSensor336 = x3d.TouchSensor()
TouchSensor336.setDescription("HAnimSite r_rib10")

HAnimSite335.addChildren(TouchSensor336)
Shape337 = x3d.Shape()
Shape337.setUSE("HAnimSiteShape")

HAnimSite335.addChildren(Shape337)

HAnimSegment324.addChildren(HAnimSite335)
HAnimSite338 = x3d.HAnimSite()
HAnimSite338.setName("spine_2_middle_back")
HAnimSite338.setDEF("hanim_spine_2_middle_back")
TouchSensor339 = x3d.TouchSensor()
TouchSensor339.setDescription("HAnimSite spine_2_middle_back")

HAnimSite338.addChildren(TouchSensor339)
Shape340 = x3d.Shape()
Shape340.setUSE("HAnimSiteShape")

HAnimSite338.addChildren(Shape340)

HAnimSegment324.addChildren(HAnimSite338)

HAnimJoint323.addChildren(HAnimSegment324)
HAnimJoint341 = x3d.HAnimJoint()
HAnimJoint341.setName("vl2")
HAnimJoint341.setDEF("hanim_vl2")
HAnimJoint341.setCenter([0.0045,1.1546,-0.08])
HAnimJoint341.setUlimit([0,0,0])
HAnimJoint341.setLlimit([0,0,0])
HAnimSegment342 = x3d.HAnimSegment()
HAnimSegment342.setName("l2")
HAnimSegment342.setDEF("hanim_l2")
Transform343 = x3d.Transform()
Transform343.setTranslation([0.0045,1.1546,-0.08])
Transform344 = x3d.Transform()
#Empty Transform
Shape345 = x3d.Shape()
Shape345.setUSE("HAnimJointShape")

Transform344.addChild(Shape345)

Transform343.addChildren(Transform344)

HAnimSegment342.addChildren(Transform343)
Shape346 = x3d.Shape()
LineSet347 = x3d.LineSet()
LineSet347.setVertexCount([2])
Coordinate348 = x3d.Coordinate()
Coordinate348.setPoint([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805])

LineSet347.setCoord(Coordinate348)
#from vl2 to vl1 vertices 2
ColorRGBA349 = x3d.ColorRGBA()
ColorRGBA349.setUSE("HAnimSegmentLineColorRGBA")

LineSet347.setColor(ColorRGBA349)

Shape346.setGeometry(LineSet347)

HAnimSegment342.addChildren(Shape346)

HAnimJoint341.addChildren(HAnimSegment342)
HAnimJoint350 = x3d.HAnimJoint()
HAnimJoint350.setName("vl1")
HAnimJoint350.setDEF("hanim_vl1")
HAnimJoint350.setCenter([0.0048,1.1912,-0.0805])
HAnimJoint350.setUlimit([0,0,0])
HAnimJoint350.setLlimit([0,0,0])
HAnimSegment351 = x3d.HAnimSegment()
HAnimSegment351.setName("l1")
HAnimSegment351.setDEF("hanim_l1")
Transform352 = x3d.Transform()
Transform352.setTranslation([0.0048,1.1912,-0.0805])
Transform353 = x3d.Transform()
#Empty Transform
Shape354 = x3d.Shape()
Shape354.setUSE("HAnimJointShape")

Transform353.addChild(Shape354)

Transform352.addChildren(Transform353)

HAnimSegment351.addChildren(Transform352)
Shape355 = x3d.Shape()
LineSet356 = x3d.LineSet()
LineSet356.setVertexCount([2])
Coordinate357 = x3d.Coordinate()
Coordinate357.setPoint([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808])

LineSet356.setCoord(Coordinate357)
#from vl1 to vt12 vertices 2
ColorRGBA358 = x3d.ColorRGBA()
ColorRGBA358.setUSE("HAnimSegmentLineColorRGBA")

LineSet356.setColor(ColorRGBA358)

Shape355.setGeometry(LineSet356)

HAnimSegment351.addChildren(Shape355)

HAnimJoint350.addChildren(HAnimSegment351)
HAnimJoint359 = x3d.HAnimJoint()
HAnimJoint359.setName("vt12")
HAnimJoint359.setDEF("hanim_vt12")
HAnimJoint359.setCenter([0.0051,1.2278,-0.0808])
HAnimJoint359.setUlimit([0,0,0])
HAnimJoint359.setLlimit([0,0,0])
HAnimSegment360 = x3d.HAnimSegment()
HAnimSegment360.setName("t12")
HAnimSegment360.setDEF("hanim_t12")
Transform361 = x3d.Transform()
Transform361.setTranslation([0.0051,1.2278,-0.0808])
Transform362 = x3d.Transform()
#Empty Transform
Shape363 = x3d.Shape()
Shape363.setUSE("HAnimJointShape")

Transform362.addChild(Shape363)

Transform361.addChildren(Transform362)

HAnimSegment360.addChildren(Transform361)
Shape364 = x3d.Shape()
LineSet365 = x3d.LineSet()
LineSet365.setVertexCount([2])
Coordinate366 = x3d.Coordinate()
Coordinate366.setPoint([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081])

LineSet365.setCoord(Coordinate366)
#from vt12 to vt11 vertices 2
ColorRGBA367 = x3d.ColorRGBA()
ColorRGBA367.setUSE("HAnimSegmentLineColorRGBA")

LineSet365.setColor(ColorRGBA367)

Shape364.setGeometry(LineSet365)

HAnimSegment360.addChildren(Shape364)

HAnimJoint359.addChildren(HAnimSegment360)
HAnimJoint368 = x3d.HAnimJoint()
HAnimJoint368.setName("vt11")
HAnimJoint368.setDEF("hanim_vt11")
HAnimJoint368.setCenter([0.0053,1.2679,-0.081])
HAnimJoint368.setUlimit([0,0,0])
HAnimJoint368.setLlimit([0,0,0])
HAnimSegment369 = x3d.HAnimSegment()
HAnimSegment369.setName("t11")
HAnimSegment369.setDEF("hanim_t11")
Transform370 = x3d.Transform()
Transform370.setTranslation([0.0053,1.2679,-0.081])
Transform371 = x3d.Transform()
#Empty Transform
Shape372 = x3d.Shape()
Shape372.setUSE("HAnimJointShape")

Transform371.addChild(Shape372)

Transform370.addChildren(Transform371)

HAnimSegment369.addChildren(Transform370)
Shape373 = x3d.Shape()
LineSet374 = x3d.LineSet()
LineSet374.setVertexCount([2])
Coordinate375 = x3d.Coordinate()
Coordinate375.setPoint([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822])

LineSet374.setCoord(Coordinate375)
#from vt11 to vt10 vertices 2
ColorRGBA376 = x3d.ColorRGBA()
ColorRGBA376.setUSE("HAnimSegmentLineColorRGBA")

LineSet374.setColor(ColorRGBA376)

Shape373.setGeometry(LineSet374)

HAnimSegment369.addChildren(Shape373)
HAnimSite377 = x3d.HAnimSite()
HAnimSite377.setName("substernale")
HAnimSite377.setDEF("hanim_substernale")
HAnimSite377.setTranslation([0.0085,1.2995,0.1147])
TouchSensor378 = x3d.TouchSensor()
TouchSensor378.setDescription("HAnimSite substernale")

HAnimSite377.addChildren(TouchSensor378)
Shape379 = x3d.Shape()
Shape379.setUSE("HAnimSiteShape")

HAnimSite377.addChildren(Shape379)

HAnimSegment369.addChildren(HAnimSite377)

HAnimJoint368.addChildren(HAnimSegment369)
HAnimJoint380 = x3d.HAnimJoint()
HAnimJoint380.setName("vt10")
HAnimJoint380.setDEF("hanim_vt10")
HAnimJoint380.setCenter([0.0056,1.2848,-0.0822])
HAnimJoint380.setUlimit([0,0,0])
HAnimJoint380.setLlimit([0,0,0])
HAnimSegment381 = x3d.HAnimSegment()
HAnimSegment381.setName("t10")
HAnimSegment381.setDEF("hanim_t10")
Transform382 = x3d.Transform()
Transform382.setTranslation([0.0056,1.2848,-0.0822])
Transform383 = x3d.Transform()
#Empty Transform
Shape384 = x3d.Shape()
Shape384.setUSE("HAnimJointShape")

Transform383.addChild(Shape384)

Transform382.addChildren(Transform383)

HAnimSegment381.addChildren(Transform382)
Shape385 = x3d.Shape()
LineSet386 = x3d.LineSet()
LineSet386.setVertexCount([2])
Coordinate387 = x3d.Coordinate()
Coordinate387.setPoint([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838])

LineSet386.setCoord(Coordinate387)
#from vt10 to vt9 vertices 2
ColorRGBA388 = x3d.ColorRGBA()
ColorRGBA388.setUSE("HAnimSegmentLineColorRGBA")

LineSet386.setColor(ColorRGBA388)

Shape385.setGeometry(LineSet386)

HAnimSegment381.addChildren(Shape385)
HAnimSite389 = x3d.HAnimSite()
HAnimSite389.setName("l_thelion")
HAnimSite389.setDEF("hanim_l_thelion")
HAnimSite389.setTranslation([0.0918,1.3382,0.1192])
TouchSensor390 = x3d.TouchSensor()
TouchSensor390.setDescription("HAnimSite l_thelion")

HAnimSite389.addChildren(TouchSensor390)
Shape391 = x3d.Shape()
Shape391.setUSE("HAnimSiteShape")

HAnimSite389.addChildren(Shape391)

HAnimSegment381.addChildren(HAnimSite389)
HAnimSite392 = x3d.HAnimSite()
HAnimSite392.setName("r_thelion")
HAnimSite392.setDEF("hanim_r_thelion")
HAnimSite392.setTranslation([-0.0736,1.3385,0.1217])
TouchSensor393 = x3d.TouchSensor()
TouchSensor393.setDescription("HAnimSite r_thelion")

HAnimSite392.addChildren(TouchSensor393)
Shape394 = x3d.Shape()
Shape394.setUSE("HAnimSiteShape")

HAnimSite392.addChildren(Shape394)

HAnimSegment381.addChildren(HAnimSite392)

HAnimJoint380.addChildren(HAnimSegment381)
HAnimJoint395 = x3d.HAnimJoint()
HAnimJoint395.setName("vt9")
HAnimJoint395.setDEF("hanim_vt9")
HAnimJoint395.setCenter([0.0057,1.3126,-0.0838])
HAnimJoint395.setUlimit([0,0,0])
HAnimJoint395.setLlimit([0,0,0])
HAnimSegment396 = x3d.HAnimSegment()
HAnimSegment396.setName("t9")
HAnimSegment396.setDEF("hanim_t9")
Transform397 = x3d.Transform()
Transform397.setTranslation([0.0057,1.3126,-0.0838])
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
Coordinate402.setPoint([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845])

LineSet401.setCoord(Coordinate402)
#from vt9 to vt8 vertices 2
ColorRGBA403 = x3d.ColorRGBA()
ColorRGBA403.setUSE("HAnimSegmentLineColorRGBA")

LineSet401.setColor(ColorRGBA403)

Shape400.setGeometry(LineSet401)

HAnimSegment396.addChildren(Shape400)

HAnimJoint395.addChildren(HAnimSegment396)
HAnimJoint404 = x3d.HAnimJoint()
HAnimJoint404.setName("vt8")
HAnimJoint404.setDEF("hanim_vt8")
HAnimJoint404.setCenter([0.0057,1.3382,-0.0845])
HAnimJoint404.setUlimit([0,0,0])
HAnimJoint404.setLlimit([0,0,0])
HAnimSegment405 = x3d.HAnimSegment()
HAnimSegment405.setName("t8")
HAnimSegment405.setDEF("hanim_t8")
Transform406 = x3d.Transform()
Transform406.setTranslation([0.0057,1.3382,-0.0845])
Transform407 = x3d.Transform()
#Empty Transform
Shape408 = x3d.Shape()
Shape408.setUSE("HAnimJointShape")

Transform407.addChild(Shape408)

Transform406.addChildren(Transform407)

HAnimSegment405.addChildren(Transform406)
Shape409 = x3d.Shape()
LineSet410 = x3d.LineSet()
LineSet410.setVertexCount([2])
Coordinate411 = x3d.Coordinate()
Coordinate411.setPoint([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833])

LineSet410.setCoord(Coordinate411)
#from vt8 to vt7 vertices 2
ColorRGBA412 = x3d.ColorRGBA()
ColorRGBA412.setUSE("HAnimSegmentLineColorRGBA")

LineSet410.setColor(ColorRGBA412)

Shape409.setGeometry(LineSet410)

HAnimSegment405.addChildren(Shape409)

HAnimJoint404.addChildren(HAnimSegment405)
HAnimJoint413 = x3d.HAnimJoint()
HAnimJoint413.setName("vt7")
HAnimJoint413.setDEF("hanim_vt7")
HAnimJoint413.setCenter([0.0058,1.3625,-0.0833])
HAnimJoint413.setUlimit([0,0,0])
HAnimJoint413.setLlimit([0,0,0])
HAnimSegment414 = x3d.HAnimSegment()
HAnimSegment414.setName("t7")
HAnimSegment414.setDEF("hanim_t7")
Transform415 = x3d.Transform()
Transform415.setTranslation([0.0058,1.3625,-0.0833])
Transform416 = x3d.Transform()
#Empty Transform
Shape417 = x3d.Shape()
Shape417.setUSE("HAnimJointShape")

Transform416.addChild(Shape417)

Transform415.addChildren(Transform416)

HAnimSegment414.addChildren(Transform415)
Shape418 = x3d.Shape()
LineSet419 = x3d.LineSet()
LineSet419.setVertexCount([2])
Coordinate420 = x3d.Coordinate()
Coordinate420.setPoint([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08])

LineSet419.setCoord(Coordinate420)
#from vt7 to vt6 vertices 2
ColorRGBA421 = x3d.ColorRGBA()
ColorRGBA421.setUSE("HAnimSegmentLineColorRGBA")

LineSet419.setColor(ColorRGBA421)

Shape418.setGeometry(LineSet419)

HAnimSegment414.addChildren(Shape418)
HAnimSite422 = x3d.HAnimSite()
HAnimSite422.setName("l_chest_midsagittal_plane")
HAnimSite422.setDEF("hanim_l_chest_midsagittal_plane")
TouchSensor423 = x3d.TouchSensor()
TouchSensor423.setDescription("HAnimSite l_chest_midsagittal_plane")

HAnimSite422.addChildren(TouchSensor423)
Shape424 = x3d.Shape()
Shape424.setUSE("HAnimSiteShape")

HAnimSite422.addChildren(Shape424)

HAnimSegment414.addChildren(HAnimSite422)
HAnimSite425 = x3d.HAnimSite()
HAnimSite425.setName("mesosternale")
HAnimSite425.setDEF("hanim_mesosternale")
TouchSensor426 = x3d.TouchSensor()
TouchSensor426.setDescription("HAnimSite mesosternale")

HAnimSite425.addChildren(TouchSensor426)
Shape427 = x3d.Shape()
Shape427.setUSE("HAnimSiteShape")

HAnimSite425.addChildren(Shape427)

HAnimSegment414.addChildren(HAnimSite425)
HAnimSite428 = x3d.HAnimSite()
HAnimSite428.setName("r_chest_midsagittal_plane")
HAnimSite428.setDEF("hanim_r_chest_midsagittal_plane")
TouchSensor429 = x3d.TouchSensor()
TouchSensor429.setDescription("HAnimSite r_chest_midsagittal_plane")

HAnimSite428.addChildren(TouchSensor429)
Shape430 = x3d.Shape()
Shape430.setUSE("HAnimSiteShape")

HAnimSite428.addChildren(Shape430)

HAnimSegment414.addChildren(HAnimSite428)
HAnimSite431 = x3d.HAnimSite()
HAnimSite431.setName("rear_center_midsagittal_plane")
HAnimSite431.setDEF("hanim_rear_center_midsagittal_plane")
TouchSensor432 = x3d.TouchSensor()
TouchSensor432.setDescription("HAnimSite rear_center_midsagittal_plane")

HAnimSite431.addChildren(TouchSensor432)
Shape433 = x3d.Shape()
Shape433.setUSE("HAnimSiteShape")

HAnimSite431.addChildren(Shape433)

HAnimSegment414.addChildren(HAnimSite431)

HAnimJoint413.addChildren(HAnimSegment414)
HAnimJoint434 = x3d.HAnimJoint()
HAnimJoint434.setName("vt6")
HAnimJoint434.setDEF("hanim_vt6")
HAnimJoint434.setCenter([0.0059,1.3866,-0.08])
HAnimJoint434.setUlimit([0,0,0])
HAnimJoint434.setLlimit([0,0,0])
HAnimSegment435 = x3d.HAnimSegment()
HAnimSegment435.setName("t6")
HAnimSegment435.setDEF("hanim_t6")
Transform436 = x3d.Transform()
Transform436.setTranslation([0.0059,1.3866,-0.08])
Transform437 = x3d.Transform()
#Empty Transform
Shape438 = x3d.Shape()
Shape438.setUSE("HAnimJointShape")

Transform437.addChild(Shape438)

Transform436.addChildren(Transform437)

HAnimSegment435.addChildren(Transform436)
Shape439 = x3d.Shape()
LineSet440 = x3d.LineSet()
LineSet440.setVertexCount([2])
Coordinate441 = x3d.Coordinate()
Coordinate441.setPoint([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745])

LineSet440.setCoord(Coordinate441)
#from vt6 to vt5 vertices 2
ColorRGBA442 = x3d.ColorRGBA()
ColorRGBA442.setUSE("HAnimSegmentLineColorRGBA")

LineSet440.setColor(ColorRGBA442)

Shape439.setGeometry(LineSet440)

HAnimSegment435.addChildren(Shape439)
HAnimSite443 = x3d.HAnimSite()
HAnimSite443.setName("spine_1_middle_back")
HAnimSite443.setDEF("hanim_spine_1_middle_back")
TouchSensor444 = x3d.TouchSensor()
TouchSensor444.setDescription("HAnimSite spine_1_middle_back")

HAnimSite443.addChildren(TouchSensor444)
Shape445 = x3d.Shape()
Shape445.setUSE("HAnimSiteShape")

HAnimSite443.addChildren(Shape445)

HAnimSegment435.addChildren(HAnimSite443)

HAnimJoint434.addChildren(HAnimSegment435)
HAnimJoint446 = x3d.HAnimJoint()
HAnimJoint446.setName("vt5")
HAnimJoint446.setDEF("hanim_vt5")
HAnimJoint446.setCenter([0.006,1.4102,-0.0745])
HAnimJoint446.setUlimit([0,0,0])
HAnimJoint446.setLlimit([0,0,0])
HAnimSegment447 = x3d.HAnimSegment()
HAnimSegment447.setName("t5")
HAnimSegment447.setDEF("hanim_t5")
Transform448 = x3d.Transform()
Transform448.setTranslation([0.006,1.4102,-0.0745])
Transform449 = x3d.Transform()
#Empty Transform
Shape450 = x3d.Shape()
Shape450.setUSE("HAnimJointShape")

Transform449.addChild(Shape450)

Transform448.addChildren(Transform449)

HAnimSegment447.addChildren(Transform448)
Shape451 = x3d.Shape()
LineSet452 = x3d.LineSet()
LineSet452.setVertexCount([2])
Coordinate453 = x3d.Coordinate()
Coordinate453.setPoint([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675])

LineSet452.setCoord(Coordinate453)
#from vt5 to vt4 vertices 2
ColorRGBA454 = x3d.ColorRGBA()
ColorRGBA454.setUSE("HAnimSegmentLineColorRGBA")

LineSet452.setColor(ColorRGBA454)

Shape451.setGeometry(LineSet452)

HAnimSegment447.addChildren(Shape451)

HAnimJoint446.addChildren(HAnimSegment447)
HAnimJoint455 = x3d.HAnimJoint()
HAnimJoint455.setName("vt4")
HAnimJoint455.setDEF("hanim_vt4")
HAnimJoint455.setCenter([0.0061,1.432,-0.0675])
HAnimJoint455.setUlimit([0,0,0])
HAnimJoint455.setLlimit([0,0,0])
HAnimSegment456 = x3d.HAnimSegment()
HAnimSegment456.setName("t4")
HAnimSegment456.setDEF("hanim_t4")
Transform457 = x3d.Transform()
Transform457.setTranslation([0.0061,1.432,-0.0675])
Transform458 = x3d.Transform()
#Empty Transform
Shape459 = x3d.Shape()
Shape459.setUSE("HAnimJointShape")

Transform458.addChild(Shape459)

Transform457.addChildren(Transform458)

HAnimSegment456.addChildren(Transform457)
Shape460 = x3d.Shape()
LineSet461 = x3d.LineSet()
LineSet461.setVertexCount([2])
Coordinate462 = x3d.Coordinate()
Coordinate462.setPoint([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057])

LineSet461.setCoord(Coordinate462)
#from vt4 to vt3 vertices 2
ColorRGBA463 = x3d.ColorRGBA()
ColorRGBA463.setUSE("HAnimSegmentLineColorRGBA")

LineSet461.setColor(ColorRGBA463)

Shape460.setGeometry(LineSet461)

HAnimSegment456.addChildren(Shape460)

HAnimJoint455.addChildren(HAnimSegment456)
HAnimJoint464 = x3d.HAnimJoint()
HAnimJoint464.setName("vt3")
HAnimJoint464.setDEF("hanim_vt3")
HAnimJoint464.setCenter([0.0062,1.4583,-0.057])
HAnimJoint464.setUlimit([0,0,0])
HAnimJoint464.setLlimit([0,0,0])
HAnimSegment465 = x3d.HAnimSegment()
HAnimSegment465.setName("t3")
HAnimSegment465.setDEF("hanim_t3")
Transform466 = x3d.Transform()
Transform466.setTranslation([0.0062,1.4583,-0.057])
Transform467 = x3d.Transform()
#Empty Transform
Shape468 = x3d.Shape()
Shape468.setUSE("HAnimJointShape")

Transform467.addChild(Shape468)

Transform466.addChildren(Transform467)

HAnimSegment465.addChildren(Transform466)
Shape469 = x3d.Shape()
LineSet470 = x3d.LineSet()
LineSet470.setVertexCount([2])
Coordinate471 = x3d.Coordinate()
Coordinate471.setPoint([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484])

LineSet470.setCoord(Coordinate471)
#from vt3 to vt2 vertices 2
ColorRGBA472 = x3d.ColorRGBA()
ColorRGBA472.setUSE("HAnimSegmentLineColorRGBA")

LineSet470.setColor(ColorRGBA472)

Shape469.setGeometry(LineSet470)

HAnimSegment465.addChildren(Shape469)

HAnimJoint464.addChildren(HAnimSegment465)
HAnimJoint473 = x3d.HAnimJoint()
HAnimJoint473.setName("vt2")
HAnimJoint473.setDEF("hanim_vt2")
HAnimJoint473.setCenter([0.0063,1.4761,-0.0484])
HAnimJoint473.setUlimit([0,0,0])
HAnimJoint473.setLlimit([0,0,0])
HAnimSegment474 = x3d.HAnimSegment()
HAnimSegment474.setName("t2")
HAnimSegment474.setDEF("hanim_t2")
Transform475 = x3d.Transform()
Transform475.setTranslation([0.0063,1.4761,-0.0484])
Transform476 = x3d.Transform()
#Empty Transform
Shape477 = x3d.Shape()
Shape477.setUSE("HAnimJointShape")

Transform476.addChild(Shape477)

Transform475.addChildren(Transform476)

HAnimSegment474.addChildren(Transform475)
Shape478 = x3d.Shape()
LineSet479 = x3d.LineSet()
LineSet479.setVertexCount([2])
Coordinate480 = x3d.Coordinate()
Coordinate480.setPoint([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387])

LineSet479.setCoord(Coordinate480)
#from vt2 to vt1 vertices 2
ColorRGBA481 = x3d.ColorRGBA()
ColorRGBA481.setUSE("HAnimSegmentLineColorRGBA")

LineSet479.setColor(ColorRGBA481)

Shape478.setGeometry(LineSet479)

HAnimSegment474.addChildren(Shape478)
HAnimSite482 = x3d.HAnimSite()
HAnimSite482.setName("cervicale")
HAnimSite482.setDEF("hanim_cervicale")
HAnimSite482.setTranslation([0.0064,1.52,-0.0815])
TouchSensor483 = x3d.TouchSensor()
TouchSensor483.setDescription("HAnimSite cervicale")

HAnimSite482.addChildren(TouchSensor483)
Shape484 = x3d.Shape()
Shape484.setUSE("HAnimSiteShape")

HAnimSite482.addChildren(Shape484)

HAnimSegment474.addChildren(HAnimSite482)
HAnimSite485 = x3d.HAnimSite()
HAnimSite485.setName("suprasternale")
HAnimSite485.setDEF("hanim_suprasternale")
HAnimSite485.setTranslation([0.0084,1.4714,0.0551])
TouchSensor486 = x3d.TouchSensor()
TouchSensor486.setDescription("HAnimSite suprasternale")

HAnimSite485.addChildren(TouchSensor486)
Shape487 = x3d.Shape()
Shape487.setUSE("HAnimSiteShape")

HAnimSite485.addChildren(Shape487)

HAnimSegment474.addChildren(HAnimSite485)

HAnimJoint473.addChildren(HAnimSegment474)
HAnimJoint488 = x3d.HAnimJoint()
HAnimJoint488.setName("vt1")
HAnimJoint488.setDEF("hanim_vt1")
HAnimJoint488.setCenter([0.0065,1.4951,-0.0387])
HAnimJoint488.setUlimit([0,0,0])
HAnimJoint488.setLlimit([0,0,0])
HAnimSegment489 = x3d.HAnimSegment()
HAnimSegment489.setName("t1")
HAnimSegment489.setDEF("hanim_t1")
Transform490 = x3d.Transform()
Transform490.setTranslation([0.0065,1.4951,-0.0387])
Transform491 = x3d.Transform()
#Empty Transform
Shape492 = x3d.Shape()
Shape492.setUSE("HAnimJointShape")

Transform491.addChild(Shape492)

Transform490.addChildren(Transform491)

HAnimSegment489.addChildren(Transform490)
Shape493 = x3d.Shape()
LineSet494 = x3d.LineSet()
LineSet494.setVertexCount([2])
Coordinate495 = x3d.Coordinate()
Coordinate495.setPoint([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301])

LineSet494.setCoord(Coordinate495)
#from vt1 to vc7 vertices 2
ColorRGBA496 = x3d.ColorRGBA()
ColorRGBA496.setUSE("HAnimSegmentLineColorRGBA")

LineSet494.setColor(ColorRGBA496)

Shape493.setGeometry(LineSet494)

HAnimSegment489.addChildren(Shape493)
HAnimSite497 = x3d.HAnimSite()
HAnimSite497.setName("l_neck_base")
HAnimSite497.setDEF("hanim_l_neck_base")
HAnimSite497.setTranslation([0.0646,1.5141,-0.038])
TouchSensor498 = x3d.TouchSensor()
TouchSensor498.setDescription("HAnimSite l_neck_base")

HAnimSite497.addChildren(TouchSensor498)
Shape499 = x3d.Shape()
Shape499.setUSE("HAnimSiteShape")

HAnimSite497.addChildren(Shape499)

HAnimSegment489.addChildren(HAnimSite497)
HAnimSite500 = x3d.HAnimSite()
HAnimSite500.setName("r_neck_base")
HAnimSite500.setDEF("hanim_r_neck_base")
HAnimSite500.setTranslation([-0.0419,1.5149,-0.022])
TouchSensor501 = x3d.TouchSensor()
TouchSensor501.setDescription("HAnimSite r_neck_base")

HAnimSite500.addChildren(TouchSensor501)
Shape502 = x3d.Shape()
Shape502.setUSE("HAnimSiteShape")

HAnimSite500.addChildren(Shape502)

HAnimSegment489.addChildren(HAnimSite500)
Shape503 = x3d.Shape()
LineSet504 = x3d.LineSet()
LineSet504.setVertexCount([2])
Coordinate505 = x3d.Coordinate()
Coordinate505.setPoint([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353])

LineSet504.setCoord(Coordinate505)
#from vt1 to l_sternoclavicular vertices 2
ColorRGBA506 = x3d.ColorRGBA()
ColorRGBA506.setUSE("HAnimSegmentLineColorRGBA")

LineSet504.setColor(ColorRGBA506)

Shape503.setGeometry(LineSet504)

HAnimSegment489.addChildren(Shape503)
HAnimSite507 = x3d.HAnimSite()
HAnimSite507.setName("l_acromion")
HAnimSite507.setDEF("hanim_l_acromion")
HAnimSite507.setTranslation([0.2032,1.476,-0.049])
TouchSensor508 = x3d.TouchSensor()
TouchSensor508.setDescription("HAnimSite l_acromion")

HAnimSite507.addChildren(TouchSensor508)
Shape509 = x3d.Shape()
Shape509.setUSE("HAnimSiteShape")

HAnimSite507.addChildren(Shape509)

HAnimSegment489.addChildren(HAnimSite507)
HAnimSite510 = x3d.HAnimSite()
HAnimSite510.setName("l_axilla_distal_pt")
HAnimSite510.setDEF("hanim_l_axilla_distal_pt")
HAnimSite510.setTranslation([0.1706,1.4072,-0.0875])
TouchSensor511 = x3d.TouchSensor()
TouchSensor511.setDescription("HAnimSite l_axilla_distal_pt")

HAnimSite510.addChildren(TouchSensor511)
Shape512 = x3d.Shape()
Shape512.setUSE("HAnimSiteShape")

HAnimSite510.addChildren(Shape512)

HAnimSegment489.addChildren(HAnimSite510)
HAnimSite513 = x3d.HAnimSite()
HAnimSite513.setName("l_axilla_posterior_folds")
HAnimSite513.setDEF("hanim_l_axilla_posterior_folds")
TouchSensor514 = x3d.TouchSensor()
TouchSensor514.setDescription("HAnimSite l_axilla_posterior_folds")

HAnimSite513.addChildren(TouchSensor514)
Shape515 = x3d.Shape()
Shape515.setUSE("HAnimSiteShape")

HAnimSite513.addChildren(Shape515)

HAnimSegment489.addChildren(HAnimSite513)
HAnimSite516 = x3d.HAnimSite()
HAnimSite516.setName("l_axilla_proximal")
HAnimSite516.setDEF("hanim_l_axilla_proximal")
HAnimSite516.setTranslation([0.1777,1.4065,-0.0075])
TouchSensor517 = x3d.TouchSensor()
TouchSensor517.setDescription("HAnimSite l_axilla_proximal")

HAnimSite516.addChildren(TouchSensor517)
Shape518 = x3d.Shape()
Shape518.setUSE("HAnimSiteShape")

HAnimSite516.addChildren(Shape518)

HAnimSegment489.addChildren(HAnimSite516)
HAnimSite519 = x3d.HAnimSite()
HAnimSite519.setName("l_clavicale")
HAnimSite519.setDEF("hanim_l_clavicale")
HAnimSite519.setTranslation([0.0271,1.4943,0.0394])
TouchSensor520 = x3d.TouchSensor()
TouchSensor520.setDescription("HAnimSite l_clavicale")

HAnimSite519.addChildren(TouchSensor520)
Shape521 = x3d.Shape()
Shape521.setUSE("HAnimSiteShape")

HAnimSite519.addChildren(Shape521)

HAnimSegment489.addChildren(HAnimSite519)
Shape522 = x3d.Shape()
LineSet523 = x3d.LineSet()
LineSet523.setVertexCount([2])
Coordinate524 = x3d.Coordinate()
Coordinate524.setPoint([0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033])

LineSet523.setCoord(Coordinate524)
#from vt1 to r_sternoclavicular vertices 2
ColorRGBA525 = x3d.ColorRGBA()
ColorRGBA525.setUSE("HAnimSegmentLineColorRGBA")

LineSet523.setColor(ColorRGBA525)

Shape522.setGeometry(LineSet523)

HAnimSegment489.addChildren(Shape522)
HAnimSite526 = x3d.HAnimSite()
HAnimSite526.setName("r_acromion")
HAnimSite526.setDEF("hanim_r_acromion")
HAnimSite526.setTranslation([-0.1905,1.4791,-0.0431])
TouchSensor527 = x3d.TouchSensor()
TouchSensor527.setDescription("HAnimSite r_acromion")

HAnimSite526.addChildren(TouchSensor527)
Shape528 = x3d.Shape()
Shape528.setUSE("HAnimSiteShape")

HAnimSite526.addChildren(Shape528)

HAnimSegment489.addChildren(HAnimSite526)
HAnimSite529 = x3d.HAnimSite()
HAnimSite529.setName("r_axilla_distal_pt")
HAnimSite529.setDEF("hanim_r_axilla_distal_pt")
HAnimSite529.setTranslation([-0.1603,1.4098,-0.0826])
TouchSensor530 = x3d.TouchSensor()
TouchSensor530.setDescription("HAnimSite r_axilla_distal_pt")

HAnimSite529.addChildren(TouchSensor530)
Shape531 = x3d.Shape()
Shape531.setUSE("HAnimSiteShape")

HAnimSite529.addChildren(Shape531)

HAnimSegment489.addChildren(HAnimSite529)
HAnimSite532 = x3d.HAnimSite()
HAnimSite532.setName("r_axilla_posterior_folds")
HAnimSite532.setDEF("hanim_r_axilla_posterior_folds")
TouchSensor533 = x3d.TouchSensor()
TouchSensor533.setDescription("HAnimSite r_axilla_posterior_folds")

HAnimSite532.addChildren(TouchSensor533)
Shape534 = x3d.Shape()
Shape534.setUSE("HAnimSiteShape")

HAnimSite532.addChildren(Shape534)

HAnimSegment489.addChildren(HAnimSite532)
HAnimSite535 = x3d.HAnimSite()
HAnimSite535.setName("r_axilla_proximal")
HAnimSite535.setDEF("hanim_r_axilla_proximal")
HAnimSite535.setTranslation([-0.1626,1.4072,-0.0031])
TouchSensor536 = x3d.TouchSensor()
TouchSensor536.setDescription("HAnimSite r_axilla_proximal")

HAnimSite535.addChildren(TouchSensor536)
Shape537 = x3d.Shape()
Shape537.setUSE("HAnimSiteShape")

HAnimSite535.addChildren(Shape537)

HAnimSegment489.addChildren(HAnimSite535)
HAnimSite538 = x3d.HAnimSite()
HAnimSite538.setName("r_clavicale")
HAnimSite538.setDEF("hanim_r_clavicale")
HAnimSite538.setTranslation([-0.0115,1.4943,0.04])
TouchSensor539 = x3d.TouchSensor()
TouchSensor539.setDescription("HAnimSite r_clavicale")

HAnimSite538.addChildren(TouchSensor539)
Shape540 = x3d.Shape()
Shape540.setUSE("HAnimSiteShape")

HAnimSite538.addChildren(Shape540)

HAnimSegment489.addChildren(HAnimSite538)

HAnimJoint488.addChildren(HAnimSegment489)
HAnimJoint541 = x3d.HAnimJoint()
HAnimJoint541.setName("vc7")
HAnimJoint541.setDEF("hanim_vc7")
HAnimJoint541.setCenter([0.0066,1.5132,-0.0301])
HAnimJoint541.setUlimit([0,0,0])
HAnimJoint541.setLlimit([0,0,0])
HAnimSegment542 = x3d.HAnimSegment()
HAnimSegment542.setName("c7")
HAnimSegment542.setDEF("hanim_c7")
Transform543 = x3d.Transform()
Transform543.setTranslation([0.0066,1.5132,-0.0301])
Transform544 = x3d.Transform()
#Empty Transform
Shape545 = x3d.Shape()
Shape545.setUSE("HAnimJointShape")

Transform544.addChild(Shape545)

Transform543.addChildren(Transform544)

HAnimSegment542.addChildren(Transform543)
Shape546 = x3d.Shape()
LineSet547 = x3d.LineSet()
LineSet547.setVertexCount([2])
Coordinate548 = x3d.Coordinate()
Coordinate548.setPoint([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143])

LineSet547.setCoord(Coordinate548)
#from vc7 to vc6 vertices 2
ColorRGBA549 = x3d.ColorRGBA()
ColorRGBA549.setUSE("HAnimSegmentLineColorRGBA")

LineSet547.setColor(ColorRGBA549)

Shape546.setGeometry(LineSet547)

HAnimSegment542.addChildren(Shape546)

HAnimJoint541.addChildren(HAnimSegment542)
HAnimJoint550 = x3d.HAnimJoint()
HAnimJoint550.setName("vc6")
HAnimJoint550.setDEF("hanim_vc6")
HAnimJoint550.setCenter([0.0066,1.5357,-0.0143])
HAnimJoint550.setUlimit([0,0,0])
HAnimJoint550.setLlimit([0,0,0])
HAnimSegment551 = x3d.HAnimSegment()
HAnimSegment551.setName("c6")
HAnimSegment551.setDEF("hanim_c6")
Transform552 = x3d.Transform()
Transform552.setTranslation([0.0066,1.5357,-0.0143])
Transform553 = x3d.Transform()
#Empty Transform
Shape554 = x3d.Shape()
Shape554.setUSE("HAnimJointShape")

Transform553.addChild(Shape554)

Transform552.addChildren(Transform553)

HAnimSegment551.addChildren(Transform552)
Shape555 = x3d.Shape()
LineSet556 = x3d.LineSet()
LineSet556.setVertexCount([2])
Coordinate557 = x3d.Coordinate()
Coordinate557.setPoint([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082])

LineSet556.setCoord(Coordinate557)
#from vc6 to vc5 vertices 2
ColorRGBA558 = x3d.ColorRGBA()
ColorRGBA558.setUSE("HAnimSegmentLineColorRGBA")

LineSet556.setColor(ColorRGBA558)

Shape555.setGeometry(LineSet556)

HAnimSegment551.addChildren(Shape555)

HAnimJoint550.addChildren(HAnimSegment551)
HAnimJoint559 = x3d.HAnimJoint()
HAnimJoint559.setName("vc5")
HAnimJoint559.setDEF("hanim_vc5")
HAnimJoint559.setCenter([0.0066,1.552,-0.0082])
HAnimJoint559.setUlimit([0,0,0])
HAnimJoint559.setLlimit([0,0,0])
HAnimSegment560 = x3d.HAnimSegment()
HAnimSegment560.setName("c5")
HAnimSegment560.setDEF("hanim_c5")
Transform561 = x3d.Transform()
Transform561.setTranslation([0.0066,1.552,-0.0082])
Transform562 = x3d.Transform()
#Empty Transform
Shape563 = x3d.Shape()
Shape563.setUSE("HAnimJointShape")

Transform562.addChild(Shape563)

Transform561.addChildren(Transform562)

HAnimSegment560.addChildren(Transform561)
Shape564 = x3d.Shape()
LineSet565 = x3d.LineSet()
LineSet565.setVertexCount([2])
Coordinate566 = x3d.Coordinate()
Coordinate566.setPoint([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084])

LineSet565.setCoord(Coordinate566)
#from vc5 to vc4 vertices 2
ColorRGBA567 = x3d.ColorRGBA()
ColorRGBA567.setUSE("HAnimSegmentLineColorRGBA")

LineSet565.setColor(ColorRGBA567)

Shape564.setGeometry(LineSet565)

HAnimSegment560.addChildren(Shape564)

HAnimJoint559.addChildren(HAnimSegment560)
HAnimJoint568 = x3d.HAnimJoint()
HAnimJoint568.setName("vc4")
HAnimJoint568.setDEF("hanim_vc4")
HAnimJoint568.setCenter([0.0066,1.5662,-0.0084])
HAnimJoint568.setUlimit([0,0,0])
HAnimJoint568.setLlimit([0,0,0])
HAnimSegment569 = x3d.HAnimSegment()
HAnimSegment569.setName("c4")
HAnimSegment569.setDEF("hanim_c4")
Transform570 = x3d.Transform()
Transform570.setTranslation([0.0066,1.5662,-0.0084])
Transform571 = x3d.Transform()
#Empty Transform
Shape572 = x3d.Shape()
Shape572.setUSE("HAnimJointShape")

Transform571.addChild(Shape572)

Transform570.addChildren(Transform571)

HAnimSegment569.addChildren(Transform570)
Shape573 = x3d.Shape()
LineSet574 = x3d.LineSet()
LineSet574.setVertexCount([2])
Coordinate575 = x3d.Coordinate()
Coordinate575.setPoint([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103])

LineSet574.setCoord(Coordinate575)
#from vc4 to vc3 vertices 2
ColorRGBA576 = x3d.ColorRGBA()
ColorRGBA576.setUSE("HAnimSegmentLineColorRGBA")

LineSet574.setColor(ColorRGBA576)

Shape573.setGeometry(LineSet574)

HAnimSegment569.addChildren(Shape573)

HAnimJoint568.addChildren(HAnimSegment569)
HAnimJoint577 = x3d.HAnimJoint()
HAnimJoint577.setName("vc3")
HAnimJoint577.setDEF("hanim_vc3")
HAnimJoint577.setCenter([0.0066,1.58,-0.0103])
HAnimJoint577.setUlimit([0,0,0])
HAnimJoint577.setLlimit([0,0,0])
HAnimSegment578 = x3d.HAnimSegment()
HAnimSegment578.setName("c3")
HAnimSegment578.setDEF("hanim_c3")
Transform579 = x3d.Transform()
Transform579.setTranslation([0.0066,1.58,-0.0103])
Transform580 = x3d.Transform()
#Empty Transform
Shape581 = x3d.Shape()
Shape581.setUSE("HAnimJointShape")

Transform580.addChild(Shape581)

Transform579.addChildren(Transform580)

HAnimSegment578.addChildren(Transform579)
Shape582 = x3d.Shape()
LineSet583 = x3d.LineSet()
LineSet583.setVertexCount([2])
Coordinate584 = x3d.Coordinate()
Coordinate584.setPoint([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103])

LineSet583.setCoord(Coordinate584)
#from vc3 to vc2 vertices 2
ColorRGBA585 = x3d.ColorRGBA()
ColorRGBA585.setUSE("HAnimSegmentLineColorRGBA")

LineSet583.setColor(ColorRGBA585)

Shape582.setGeometry(LineSet583)

HAnimSegment578.addChildren(Shape582)
HAnimSite586 = x3d.HAnimSite()
HAnimSite586.setName("adams_apple")
HAnimSite586.setDEF("hanim_adams_apple")
TouchSensor587 = x3d.TouchSensor()
TouchSensor587.setDescription("HAnimSite adams_apple")

HAnimSite586.addChildren(TouchSensor587)
Shape588 = x3d.Shape()
Shape588.setUSE("HAnimSiteShape")

HAnimSite586.addChildren(Shape588)

HAnimSegment578.addChildren(HAnimSite586)

HAnimJoint577.addChildren(HAnimSegment578)
HAnimJoint589 = x3d.HAnimJoint()
HAnimJoint589.setName("vc2")
HAnimJoint589.setDEF("hanim_vc2")
HAnimJoint589.setCenter([0.0066,1.5928,-0.0103])
HAnimJoint589.setUlimit([0,0,0])
HAnimJoint589.setLlimit([0,0,0])
HAnimSegment590 = x3d.HAnimSegment()
HAnimSegment590.setName("c2")
HAnimSegment590.setDEF("hanim_c2")
Transform591 = x3d.Transform()
Transform591.setTranslation([0.0066,1.5928,-0.0103])
Transform592 = x3d.Transform()
#Empty Transform
Shape593 = x3d.Shape()
Shape593.setUSE("HAnimJointShape")

Transform592.addChild(Shape593)

Transform591.addChildren(Transform592)

HAnimSegment590.addChildren(Transform591)
Shape594 = x3d.Shape()
LineSet595 = x3d.LineSet()
LineSet595.setVertexCount([2])
Coordinate596 = x3d.Coordinate()
Coordinate596.setPoint([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034])

LineSet595.setCoord(Coordinate596)
#from vc2 to vc1 vertices 2
ColorRGBA597 = x3d.ColorRGBA()
ColorRGBA597.setUSE("HAnimSegmentLineColorRGBA")

LineSet595.setColor(ColorRGBA597)

Shape594.setGeometry(LineSet595)

HAnimSegment590.addChildren(Shape594)

HAnimJoint589.addChildren(HAnimSegment590)
HAnimJoint598 = x3d.HAnimJoint()
HAnimJoint598.setName("vc1")
HAnimJoint598.setDEF("hanim_vc1")
HAnimJoint598.setCenter([0.0066,1.6144,-0.0034])
HAnimJoint598.setUlimit([0,0,0])
HAnimJoint598.setLlimit([0,0,0])
HAnimSegment599 = x3d.HAnimSegment()
HAnimSegment599.setName("c1")
HAnimSegment599.setDEF("hanim_c1")
Transform600 = x3d.Transform()
Transform600.setTranslation([0.0066,1.6144,-0.0034])
Transform601 = x3d.Transform()
#Empty Transform
Shape602 = x3d.Shape()
Shape602.setUSE("HAnimJointShape")

Transform601.addChild(Shape602)

Transform600.addChildren(Transform601)

HAnimSegment599.addChildren(Transform600)
Shape603 = x3d.Shape()
LineSet604 = x3d.LineSet()
LineSet604.setVertexCount([2])
Coordinate605 = x3d.Coordinate()
Coordinate605.setPoint([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236])

LineSet604.setCoord(Coordinate605)
#from vc1 to skullbase vertices 2
ColorRGBA606 = x3d.ColorRGBA()
ColorRGBA606.setUSE("HAnimSegmentLineColorRGBA")

LineSet604.setColor(ColorRGBA606)

Shape603.setGeometry(LineSet604)

HAnimSegment599.addChildren(Shape603)
HAnimSite607 = x3d.HAnimSite()
HAnimSite607.setName("glabella")
HAnimSite607.setDEF("hanim_glabella")
TouchSensor608 = x3d.TouchSensor()
TouchSensor608.setDescription("HAnimSite glabella")

HAnimSite607.addChildren(TouchSensor608)
Shape609 = x3d.Shape()
Shape609.setUSE("HAnimSiteShape")

HAnimSite607.addChildren(Shape609)

HAnimSegment599.addChildren(HAnimSite607)
HAnimSite610 = x3d.HAnimSite()
HAnimSite610.setName("l_ectocanthus")
HAnimSite610.setDEF("hanim_l_ectocanthus")
TouchSensor611 = x3d.TouchSensor()
TouchSensor611.setDescription("HAnimSite l_ectocanthus")

HAnimSite610.addChildren(TouchSensor611)
Shape612 = x3d.Shape()
Shape612.setUSE("HAnimSiteShape")

HAnimSite610.addChildren(Shape612)

HAnimSegment599.addChildren(HAnimSite610)
HAnimSite613 = x3d.HAnimSite()
HAnimSite613.setName("l_infraorbitale")
HAnimSite613.setDEF("hanim_l_infraorbitale")
HAnimSite613.setTranslation([0.0341,1.6171,0.0752])
TouchSensor614 = x3d.TouchSensor()
TouchSensor614.setDescription("HAnimSite l_infraorbitale")

HAnimSite613.addChildren(TouchSensor614)
Shape615 = x3d.Shape()
Shape615.setUSE("HAnimSiteShape")

HAnimSite613.addChildren(Shape615)

HAnimSegment599.addChildren(HAnimSite613)
HAnimSite616 = x3d.HAnimSite()
HAnimSite616.setName("l_tragion")
HAnimSite616.setDEF("hanim_l_tragion")
HAnimSite616.setTranslation([0.0739,1.6348,0.0282])
TouchSensor617 = x3d.TouchSensor()
TouchSensor617.setDescription("HAnimSite l_tragion")

HAnimSite616.addChildren(TouchSensor617)
Shape618 = x3d.Shape()
Shape618.setUSE("HAnimSiteShape")

HAnimSite616.addChildren(Shape618)

HAnimSegment599.addChildren(HAnimSite616)
HAnimSite619 = x3d.HAnimSite()
HAnimSite619.setName("nuchale")
HAnimSite619.setDEF("hanim_nuchale")
HAnimSite619.setTranslation([0.0039,1.5972,-0.0796])
TouchSensor620 = x3d.TouchSensor()
TouchSensor620.setDescription("HAnimSite nuchale")

HAnimSite619.addChildren(TouchSensor620)
Shape621 = x3d.Shape()
Shape621.setUSE("HAnimSiteShape")

HAnimSite619.addChildren(Shape621)

HAnimSegment599.addChildren(HAnimSite619)
HAnimSite622 = x3d.HAnimSite()
HAnimSite622.setName("opisthocranion")
HAnimSite622.setDEF("hanim_opisthocranion")
TouchSensor623 = x3d.TouchSensor()
TouchSensor623.setDescription("HAnimSite opisthocranion")

HAnimSite622.addChildren(TouchSensor623)
Shape624 = x3d.Shape()
Shape624.setUSE("HAnimSiteShape")

HAnimSite622.addChildren(Shape624)

HAnimSegment599.addChildren(HAnimSite622)
HAnimSite625 = x3d.HAnimSite()
HAnimSite625.setName("r_ectocanthus")
HAnimSite625.setDEF("hanim_r_ectocanthus")
TouchSensor626 = x3d.TouchSensor()
TouchSensor626.setDescription("HAnimSite r_ectocanthus")

HAnimSite625.addChildren(TouchSensor626)
Shape627 = x3d.Shape()
Shape627.setUSE("HAnimSiteShape")

HAnimSite625.addChildren(Shape627)

HAnimSegment599.addChildren(HAnimSite625)
HAnimSite628 = x3d.HAnimSite()
HAnimSite628.setName("r_infraorbitale")
HAnimSite628.setDEF("hanim_r_infraorbitale")
HAnimSite628.setTranslation([-0.0237,1.6171,0.0752])
TouchSensor629 = x3d.TouchSensor()
TouchSensor629.setDescription("HAnimSite r_infraorbitale")

HAnimSite628.addChildren(TouchSensor629)
Shape630 = x3d.Shape()
Shape630.setUSE("HAnimSiteShape")

HAnimSite628.addChildren(Shape630)

HAnimSegment599.addChildren(HAnimSite628)
HAnimSite631 = x3d.HAnimSite()
HAnimSite631.setName("r_tragion")
HAnimSite631.setDEF("hanim_r_tragion")
HAnimSite631.setTranslation([-0.0646,1.6347,0.0302])
TouchSensor632 = x3d.TouchSensor()
TouchSensor632.setDescription("HAnimSite r_tragion")

HAnimSite631.addChildren(TouchSensor632)
Shape633 = x3d.Shape()
Shape633.setUSE("HAnimSiteShape")

HAnimSite631.addChildren(Shape633)

HAnimSegment599.addChildren(HAnimSite631)
HAnimSite634 = x3d.HAnimSite()
HAnimSite634.setName("sellion")
HAnimSite634.setDEF("hanim_sellion")
HAnimSite634.setTranslation([0.0058,1.6316,0.0852])
TouchSensor635 = x3d.TouchSensor()
TouchSensor635.setDescription("HAnimSite sellion")

HAnimSite634.addChildren(TouchSensor635)
Shape636 = x3d.Shape()
Shape636.setUSE("HAnimSiteShape")

HAnimSite634.addChildren(Shape636)

HAnimSegment599.addChildren(HAnimSite634)
HAnimSite637 = x3d.HAnimSite()
HAnimSite637.setName("skull_vertex")
HAnimSite637.setDEF("hanim_skull_vertex")
TouchSensor638 = x3d.TouchSensor()
TouchSensor638.setDescription("HAnimSite skull_vertex")

HAnimSite637.addChildren(TouchSensor638)
Shape639 = x3d.Shape()
Shape639.setUSE("HAnimSiteShape")

HAnimSite637.addChildren(Shape639)

HAnimSegment599.addChildren(HAnimSite637)

HAnimJoint598.addChildren(HAnimSegment599)
HAnimJoint640 = x3d.HAnimJoint()
HAnimJoint640.setName("skullbase")
HAnimJoint640.setDEF("hanim_skullbase")
HAnimJoint640.setCenter([0.0044,1.6209,0.0236])
HAnimJoint640.setUlimit([0,0,0])
HAnimJoint640.setLlimit([0,0,0])
HAnimSegment641 = x3d.HAnimSegment()
HAnimSegment641.setName("skull")
HAnimSegment641.setDEF("hanim_skull")
Transform642 = x3d.Transform()
Transform642.setTranslation([0.0044,1.6209,0.0236])
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
Coordinate647.setPoint([0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689])

LineSet646.setCoord(Coordinate647)
#from skullbase to l_eyelid_joint vertices 2
ColorRGBA648 = x3d.ColorRGBA()
ColorRGBA648.setUSE("HAnimSegmentLineColorRGBA")

LineSet646.setColor(ColorRGBA648)

Shape645.setGeometry(LineSet646)

HAnimSegment641.addChildren(Shape645)
Shape649 = x3d.Shape()
LineSet650 = x3d.LineSet()
LineSet650.setVertexCount([2])
Coordinate651 = x3d.Coordinate()
Coordinate651.setPoint([0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689])

LineSet650.setCoord(Coordinate651)
#from skullbase to r_eyelid_joint vertices 2
ColorRGBA652 = x3d.ColorRGBA()
ColorRGBA652.setUSE("HAnimSegmentLineColorRGBA")

LineSet650.setColor(ColorRGBA652)

Shape649.setGeometry(LineSet650)

HAnimSegment641.addChildren(Shape649)
Shape653 = x3d.Shape()
LineSet654 = x3d.LineSet()
LineSet654.setVertexCount([2])
Coordinate655 = x3d.Coordinate()
Coordinate655.setPoint([0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188])

LineSet654.setCoord(Coordinate655)
#from skullbase to l_eyeball_joint vertices 2
ColorRGBA656 = x3d.ColorRGBA()
ColorRGBA656.setUSE("HAnimSegmentLineColorRGBA")

LineSet654.setColor(ColorRGBA656)

Shape653.setGeometry(LineSet654)

HAnimSegment641.addChildren(Shape653)
Shape657 = x3d.Shape()
LineSet658 = x3d.LineSet()
LineSet658.setVertexCount([2])
Coordinate659 = x3d.Coordinate()
Coordinate659.setPoint([0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188])

LineSet658.setCoord(Coordinate659)
#from skullbase to r_eyeball_joint vertices 2
ColorRGBA660 = x3d.ColorRGBA()
ColorRGBA660.setUSE("HAnimSegmentLineColorRGBA")

LineSet658.setColor(ColorRGBA660)

Shape657.setGeometry(LineSet658)

HAnimSegment641.addChildren(Shape657)
Shape661 = x3d.Shape()
LineSet662 = x3d.LineSet()
LineSet662.setVertexCount([2])
Coordinate663 = x3d.Coordinate()
Coordinate663.setPoint([0.0044,1.6209,0.0236,0.0216,1.4053,0.0051])

LineSet662.setCoord(Coordinate663)
#from skullbase to l_eyebrow_joint vertices 2
ColorRGBA664 = x3d.ColorRGBA()
ColorRGBA664.setUSE("HAnimSegmentLineColorRGBA")

LineSet662.setColor(ColorRGBA664)

Shape661.setGeometry(LineSet662)

HAnimSegment641.addChildren(Shape661)
Shape665 = x3d.Shape()
LineSet666 = x3d.LineSet()
LineSet666.setVertexCount([2])
Coordinate667 = x3d.Coordinate()
Coordinate667.setPoint([0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051])

LineSet666.setCoord(Coordinate667)
#from skullbase to r_eyebrow_joint vertices 2
ColorRGBA668 = x3d.ColorRGBA()
ColorRGBA668.setUSE("HAnimSegmentLineColorRGBA")

LineSet666.setColor(ColorRGBA668)

Shape665.setGeometry(LineSet666)

HAnimSegment641.addChildren(Shape665)
Shape669 = x3d.Shape()
LineSet670 = x3d.LineSet()
LineSet670.setVertexCount([2])
Coordinate671 = x3d.Coordinate()
Coordinate671.setPoint([0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865])

LineSet670.setCoord(Coordinate671)
#from skullbase to temporomandibular vertices 2
ColorRGBA672 = x3d.ColorRGBA()
ColorRGBA672.setUSE("HAnimSegmentLineColorRGBA")

LineSet670.setColor(ColorRGBA672)

Shape669.setGeometry(LineSet670)

HAnimSegment641.addChildren(Shape669)
HAnimSite673 = x3d.HAnimSite()
HAnimSite673.setName("l_gonion")
HAnimSite673.setDEF("hanim_l_gonion")
HAnimSite673.setTranslation([0.0631,1.553,0.033])
TouchSensor674 = x3d.TouchSensor()
TouchSensor674.setDescription("HAnimSite l_gonion")

HAnimSite673.addChildren(TouchSensor674)
Shape675 = x3d.Shape()
Shape675.setUSE("HAnimSiteShape")

HAnimSite673.addChildren(Shape675)

HAnimSegment641.addChildren(HAnimSite673)
HAnimSite676 = x3d.HAnimSite()
HAnimSite676.setName("menton")
HAnimSite676.setDEF("hanim_menton")
TouchSensor677 = x3d.TouchSensor()
TouchSensor677.setDescription("HAnimSite menton")

HAnimSite676.addChildren(TouchSensor677)
Shape678 = x3d.Shape()
Shape678.setUSE("HAnimSiteShape")

HAnimSite676.addChildren(Shape678)

HAnimSegment641.addChildren(HAnimSite676)
HAnimSite679 = x3d.HAnimSite()
HAnimSite679.setName("r_gonion")
HAnimSite679.setDEF("hanim_r_gonion")
HAnimSite679.setTranslation([-0.052,1.5529,0.0347])
TouchSensor680 = x3d.TouchSensor()
TouchSensor680.setDescription("HAnimSite r_gonion")

HAnimSite679.addChildren(TouchSensor680)
Shape681 = x3d.Shape()
Shape681.setUSE("HAnimSiteShape")

HAnimSite679.addChildren(Shape681)

HAnimSegment641.addChildren(HAnimSite679)
HAnimSite682 = x3d.HAnimSite()
HAnimSite682.setName("supramenton")
HAnimSite682.setDEF("hanim_supramenton")
HAnimSite682.setTranslation([0.0061,1.541,0.0805])
TouchSensor683 = x3d.TouchSensor()
TouchSensor683.setDescription("HAnimSite supramenton")

HAnimSite682.addChildren(TouchSensor683)
Shape684 = x3d.Shape()
Shape684.setUSE("HAnimSiteShape")

HAnimSite682.addChildren(Shape684)

HAnimSegment641.addChildren(HAnimSite682)

HAnimJoint640.addChildren(HAnimSegment641)
HAnimJoint685 = x3d.HAnimJoint()
HAnimJoint685.setName("l_eyelid_joint")
HAnimJoint685.setDEF("hanim_l_eyelid_joint")
HAnimJoint685.setCenter([0.0503,1.4157,-0.0689])
HAnimJoint685.setUlimit([0,0,0])
HAnimJoint685.setLlimit([0,0,0])

HAnimJoint640.addChildren(HAnimJoint685)
HAnimJoint686 = x3d.HAnimJoint()
HAnimJoint686.setName("r_eyelid_joint")
HAnimJoint686.setDEF("hanim_r_eyelid_joint")
HAnimJoint686.setCenter([-0.0507,1.4157,-0.0689])
HAnimJoint686.setUlimit([0,0,0])
HAnimJoint686.setLlimit([0,0,0])

HAnimJoint640.addChildren(HAnimJoint686)
HAnimJoint687 = x3d.HAnimJoint()
HAnimJoint687.setName("l_eyeball_joint")
HAnimJoint687.setDEF("hanim_l_eyeball_joint")
HAnimJoint687.setCenter([0.0479,1.3963,-0.0188])
HAnimJoint687.setUlimit([0,0,0])
HAnimJoint687.setLlimit([0,0,0])

HAnimJoint640.addChildren(HAnimJoint687)
HAnimJoint688 = x3d.HAnimJoint()
HAnimJoint688.setName("r_eyeball_joint")
HAnimJoint688.setDEF("hanim_r_eyeball_joint")
HAnimJoint688.setCenter([-0.0483,1.3963,-0.0188])
HAnimJoint688.setUlimit([0,0,0])
HAnimJoint688.setLlimit([0,0,0])

HAnimJoint640.addChildren(HAnimJoint688)
HAnimJoint689 = x3d.HAnimJoint()
HAnimJoint689.setName("l_eyebrow_joint")
HAnimJoint689.setDEF("hanim_l_eyebrow_joint")
HAnimJoint689.setCenter([0.0216,1.4053,0.0051])
HAnimJoint689.setUlimit([0,0,0])
HAnimJoint689.setLlimit([0,0,0])

HAnimJoint640.addChildren(HAnimJoint689)
HAnimJoint690 = x3d.HAnimJoint()
HAnimJoint690.setName("r_eyebrow_joint")
HAnimJoint690.setDEF("hanim_r_eyebrow_joint")
HAnimJoint690.setCenter([-0.0219,1.4053,0.0051])
HAnimJoint690.setUlimit([0,0,0])
HAnimJoint690.setLlimit([0,0,0])

HAnimJoint640.addChildren(HAnimJoint690)
HAnimJoint691 = x3d.HAnimJoint()
HAnimJoint691.setName("temporomandibular")
HAnimJoint691.setDEF("hanim_temporomandibular")
HAnimJoint691.setCenter([-0.0002,1.3043,-0.0865])
HAnimJoint691.setUlimit([0,0,0])
HAnimJoint691.setLlimit([0,0,0])

HAnimJoint640.addChildren(HAnimJoint691)

HAnimJoint598.addChildren(HAnimJoint640)

HAnimJoint589.addChildren(HAnimJoint598)

HAnimJoint577.addChildren(HAnimJoint589)

HAnimJoint568.addChildren(HAnimJoint577)

HAnimJoint559.addChildren(HAnimJoint568)

HAnimJoint550.addChildren(HAnimJoint559)

HAnimJoint541.addChildren(HAnimJoint550)

HAnimJoint488.addChildren(HAnimJoint541)
HAnimJoint692 = x3d.HAnimJoint()
HAnimJoint692.setName("l_sternoclavicular")
HAnimJoint692.setDEF("hanim_l_sternoclavicular")
HAnimJoint692.setCenter([0.082,1.4488,-0.0353])
HAnimJoint692.setUlimit([0,0,0])
HAnimJoint692.setLlimit([0,0,0])
HAnimSegment693 = x3d.HAnimSegment()
HAnimSegment693.setName("l_clavicle")
HAnimSegment693.setDEF("hanim_l_clavicle")
Transform694 = x3d.Transform()
Transform694.setTranslation([0.082,1.4488,-0.0353])
Transform695 = x3d.Transform()
#Empty Transform
Shape696 = x3d.Shape()
Shape696.setUSE("HAnimJointShape")

Transform695.addChild(Shape696)

Transform694.addChildren(Transform695)

HAnimSegment693.addChildren(Transform694)
Shape697 = x3d.Shape()
LineSet698 = x3d.LineSet()
LineSet698.setVertexCount([2])
Coordinate699 = x3d.Coordinate()
Coordinate699.setPoint([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424])

LineSet698.setCoord(Coordinate699)
#from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA700 = x3d.ColorRGBA()
ColorRGBA700.setUSE("HAnimSegmentLineColorRGBA")

LineSet698.setColor(ColorRGBA700)

Shape697.setGeometry(LineSet698)

HAnimSegment693.addChildren(Shape697)

HAnimJoint692.addChildren(HAnimSegment693)
HAnimJoint701 = x3d.HAnimJoint()
HAnimJoint701.setName("l_acromioclavicular")
HAnimJoint701.setDEF("hanim_l_acromioclavicular")
HAnimJoint701.setCenter([0.0962,1.4269,-0.0424])
HAnimJoint701.setUlimit([0,0,0])
HAnimJoint701.setLlimit([0,0,0])
HAnimSegment702 = x3d.HAnimSegment()
HAnimSegment702.setName("l_scapula")
HAnimSegment702.setDEF("hanim_l_scapula")
Transform703 = x3d.Transform()
Transform703.setTranslation([0.0962,1.4269,-0.0424])
Transform704 = x3d.Transform()
#Empty Transform
Shape705 = x3d.Shape()
Shape705.setUSE("HAnimJointShape")

Transform704.addChild(Shape705)

Transform703.addChildren(Transform704)

HAnimSegment702.addChildren(Transform703)
Shape706 = x3d.Shape()
LineSet707 = x3d.LineSet()
LineSet707.setVertexCount([2])
Coordinate708 = x3d.Coordinate()
Coordinate708.setPoint([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387])

LineSet707.setCoord(Coordinate708)
#from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA709 = x3d.ColorRGBA()
ColorRGBA709.setUSE("HAnimSegmentLineColorRGBA")

LineSet707.setColor(ColorRGBA709)

Shape706.setGeometry(LineSet707)

HAnimSegment702.addChildren(Shape706)
HAnimSite710 = x3d.HAnimSite()
HAnimSite710.setName("l_bideltoid")
HAnimSite710.setDEF("hanim_l_bideltoid")
TouchSensor711 = x3d.TouchSensor()
TouchSensor711.setDescription("HAnimSite l_bideltoid")

HAnimSite710.addChildren(TouchSensor711)
Shape712 = x3d.Shape()
Shape712.setUSE("HAnimSiteShape")

HAnimSite710.addChildren(Shape712)

HAnimSegment702.addChildren(HAnimSite710)
HAnimSite713 = x3d.HAnimSite()
HAnimSite713.setName("l_humeral_lateral_epicondyles")
HAnimSite713.setDEF("hanim_l_humeral_lateral_epicondyles")
HAnimSite713.setTranslation([0.228,1.1482,-0.11])
TouchSensor714 = x3d.TouchSensor()
TouchSensor714.setDescription("HAnimSite l_humeral_lateral_epicondyles")

HAnimSite713.addChildren(TouchSensor714)
Shape715 = x3d.Shape()
Shape715.setUSE("HAnimSiteShape")

HAnimSite713.addChildren(Shape715)

HAnimSegment702.addChildren(HAnimSite713)

HAnimJoint701.addChildren(HAnimSegment702)
HAnimJoint716 = x3d.HAnimJoint()
HAnimJoint716.setName("l_shoulder")
HAnimJoint716.setDEF("hanim_l_shoulder")
HAnimJoint716.setCenter([0.2029,1.4376,-0.0387])
HAnimJoint716.setUlimit([0,0,0])
HAnimJoint716.setLlimit([0,0,0])
HAnimSegment717 = x3d.HAnimSegment()
HAnimSegment717.setName("l_upperarm")
HAnimSegment717.setDEF("hanim_l_upperarm")
Transform718 = x3d.Transform()
Transform718.setTranslation([0.2029,1.4376,-0.0387])
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
Coordinate723.setPoint([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682])

LineSet722.setCoord(Coordinate723)
#from l_shoulder to l_elbow vertices 2
ColorRGBA724 = x3d.ColorRGBA()
ColorRGBA724.setUSE("HAnimSegmentLineColorRGBA")

LineSet722.setColor(ColorRGBA724)

Shape721.setGeometry(LineSet722)

HAnimSegment717.addChildren(Shape721)
HAnimSite725 = x3d.HAnimSite()
HAnimSite725.setName("l_humeral_medial_epicondyles")
HAnimSite725.setDEF("hanim_l_humeral_medial_epicondyles")
HAnimSite725.setTranslation([0.1735,1.1272,-0.1113])
TouchSensor726 = x3d.TouchSensor()
TouchSensor726.setDescription("HAnimSite l_humeral_medial_epicondyles")

HAnimSite725.addChildren(TouchSensor726)
Shape727 = x3d.Shape()
Shape727.setUSE("HAnimSiteShape")

HAnimSite725.addChildren(Shape727)

HAnimSegment717.addChildren(HAnimSite725)
HAnimSite728 = x3d.HAnimSite()
HAnimSite728.setName("l_olecranon")
HAnimSite728.setDEF("hanim_l_olecranon")
HAnimSite728.setTranslation([-0.1962,1.1375,-0.1123])
TouchSensor729 = x3d.TouchSensor()
TouchSensor729.setDescription("HAnimSite l_olecranon")

HAnimSite728.addChildren(TouchSensor729)
Shape730 = x3d.Shape()
Shape730.setUSE("HAnimSiteShape")

HAnimSite728.addChildren(Shape730)

HAnimSegment717.addChildren(HAnimSite728)
HAnimSite731 = x3d.HAnimSite()
HAnimSite731.setName("l_radial_styloid")
HAnimSite731.setDEF("hanim_l_radial_styloid")
HAnimSite731.setTranslation([0.1901,0.8645,-0.0415])
TouchSensor732 = x3d.TouchSensor()
TouchSensor732.setDescription("HAnimSite l_radial_styloid")

HAnimSite731.addChildren(TouchSensor732)
Shape733 = x3d.Shape()
Shape733.setUSE("HAnimSiteShape")

HAnimSite731.addChildren(Shape733)

HAnimSegment717.addChildren(HAnimSite731)
HAnimSite734 = x3d.HAnimSite()
HAnimSite734.setName("l_radiale")
HAnimSite734.setDEF("hanim_l_radiale")
HAnimSite734.setTranslation([0.2182,1.1212,-0.1167])
TouchSensor735 = x3d.TouchSensor()
TouchSensor735.setDescription("HAnimSite l_radiale")

HAnimSite734.addChildren(TouchSensor735)
Shape736 = x3d.Shape()
Shape736.setUSE("HAnimSiteShape")

HAnimSite734.addChildren(Shape736)

HAnimSegment717.addChildren(HAnimSite734)

HAnimJoint716.addChildren(HAnimSegment717)
HAnimJoint737 = x3d.HAnimJoint()
HAnimJoint737.setName("l_elbow")
HAnimJoint737.setDEF("hanim_l_elbow")
HAnimJoint737.setCenter([0.2014,1.1357,-0.0682])
HAnimJoint737.setUlimit([0,0,0])
HAnimJoint737.setLlimit([0,0,0])
HAnimSegment738 = x3d.HAnimSegment()
HAnimSegment738.setName("l_forearm")
HAnimSegment738.setDEF("hanim_l_forearm")
Transform739 = x3d.Transform()
Transform739.setTranslation([0.2014,1.1357,-0.0682])
Transform740 = x3d.Transform()
#Empty Transform
Shape741 = x3d.Shape()
Shape741.setUSE("HAnimJointShape")

Transform740.addChild(Shape741)

Transform739.addChildren(Transform740)

HAnimSegment738.addChildren(Transform739)
Shape742 = x3d.Shape()
LineSet743 = x3d.LineSet()
LineSet743.setVertexCount([2])
Coordinate744 = x3d.Coordinate()
Coordinate744.setPoint([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583])

LineSet743.setCoord(Coordinate744)
#from l_elbow to l_radiocarpal vertices 2
ColorRGBA745 = x3d.ColorRGBA()
ColorRGBA745.setUSE("HAnimSegmentLineColorRGBA")

LineSet743.setColor(ColorRGBA745)

Shape742.setGeometry(LineSet743)

HAnimSegment738.addChildren(Shape742)
HAnimSite746 = x3d.HAnimSite()
HAnimSite746.setName("l_ulnar_styloid")
HAnimSite746.setDEF("hanim_l_ulnar_styloid")
HAnimSite746.setTranslation([-0.2142,0.8529,-0.0648])
TouchSensor747 = x3d.TouchSensor()
TouchSensor747.setDescription("HAnimSite l_ulnar_styloid")

HAnimSite746.addChildren(TouchSensor747)
Shape748 = x3d.Shape()
Shape748.setUSE("HAnimSiteShape")

HAnimSite746.addChildren(Shape748)

HAnimSegment738.addChildren(HAnimSite746)

HAnimJoint737.addChildren(HAnimSegment738)
HAnimJoint749 = x3d.HAnimJoint()
HAnimJoint749.setName("l_radiocarpal")
HAnimJoint749.setDEF("hanim_l_radiocarpal")
HAnimJoint749.setCenter([0.1984,0.8663,-0.0583])
HAnimJoint749.setUlimit([0,0,0])
HAnimJoint749.setLlimit([0,0,0])
HAnimSegment750 = x3d.HAnimSegment()
HAnimSegment750.setName("l_carpal")
HAnimSegment750.setDEF("hanim_l_carpal")
Transform751 = x3d.Transform()
Transform751.setScale([0.2,0.2,0.2])
Transform751.setTranslation([0.2,0.85,-0.05])
Transform751.setRotation([0,0,1,-3.14])
#Transform left hand
Transform752 = x3d.Transform()
Transform752.setRotation([0,1,0,-1.57])
#Transform left hand
Shape753 = x3d.Shape()
Shape753.setUSE("HAnimJointShape")

Transform752.addChild(Shape753)

Transform751.addChildren(Transform752)

HAnimSegment750.addChildren(Transform751)
Shape754 = x3d.Shape()
LineSet755 = x3d.LineSet()
LineSet755.setVertexCount([2])
Coordinate756 = x3d.Coordinate()
Coordinate756.setPoint([0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534])

LineSet755.setCoord(Coordinate756)
#from l_radiocarpal to l_carpometacarpal_1 vertices 2
ColorRGBA757 = x3d.ColorRGBA()
ColorRGBA757.setUSE("HAnimSegmentLineColorRGBA")

LineSet755.setColor(ColorRGBA757)

Shape754.setGeometry(LineSet755)

HAnimSegment750.addChildren(Shape754)
Shape758 = x3d.Shape()
LineSet759 = x3d.LineSet()
LineSet759.setVertexCount([2])
Coordinate760 = x3d.Coordinate()
Coordinate760.setPoint([0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028])

LineSet759.setCoord(Coordinate760)
#from l_radiocarpal to l_carpometacarpal_2 vertices 2
ColorRGBA761 = x3d.ColorRGBA()
ColorRGBA761.setUSE("HAnimSegmentLineColorRGBA")

LineSet759.setColor(ColorRGBA761)

Shape758.setGeometry(LineSet759)

HAnimSegment750.addChildren(Shape758)
HAnimSite762 = x3d.HAnimSite()
HAnimSite762.setName("l_metacarpal_phalanx_2")
HAnimSite762.setDEF("hanim_l_metacarpal_phalanx_2")
HAnimSite762.setTranslation([0.2009,0.8139,-0.0237])
TouchSensor763 = x3d.TouchSensor()
TouchSensor763.setDescription("HAnimSite l_metacarpal_phalanx_2")

HAnimSite762.addChildren(TouchSensor763)
Shape764 = x3d.Shape()
Shape764.setUSE("HAnimSiteShape")

HAnimSite762.addChildren(Shape764)

HAnimSegment750.addChildren(HAnimSite762)
Shape765 = x3d.Shape()
LineSet766 = x3d.LineSet()
LineSet766.setVertexCount([2])
Coordinate767 = x3d.Coordinate()
Coordinate767.setPoint([0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053])

LineSet766.setCoord(Coordinate767)
#from l_radiocarpal to l_carpometacarpal_3 vertices 2
ColorRGBA768 = x3d.ColorRGBA()
ColorRGBA768.setUSE("HAnimSegmentLineColorRGBA")

LineSet766.setColor(ColorRGBA768)

Shape765.setGeometry(LineSet766)

HAnimSegment750.addChildren(Shape765)
HAnimSite769 = x3d.HAnimSite()
HAnimSite769.setName("l_metacarpal_phalanx_3")
HAnimSite769.setDEF("hanim_l_metacarpal_phalanx_3")
TouchSensor770 = x3d.TouchSensor()
TouchSensor770.setDescription("HAnimSite l_metacarpal_phalanx_3")

HAnimSite769.addChildren(TouchSensor770)
Shape771 = x3d.Shape()
Shape771.setUSE("HAnimSiteShape")

HAnimSite769.addChildren(Shape771)

HAnimSegment750.addChildren(HAnimSite769)
Shape772 = x3d.Shape()
LineSet773 = x3d.LineSet()
LineSet773.setVertexCount([2])
Coordinate774 = x3d.Coordinate()
Coordinate774.setPoint([0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794])

LineSet773.setCoord(Coordinate774)
#from l_radiocarpal to l_carpometacarpal_4 vertices 2
ColorRGBA775 = x3d.ColorRGBA()
ColorRGBA775.setUSE("HAnimSegmentLineColorRGBA")

LineSet773.setColor(ColorRGBA775)

Shape772.setGeometry(LineSet773)

HAnimSegment750.addChildren(Shape772)
Shape776 = x3d.Shape()
LineSet777 = x3d.LineSet()
LineSet777.setVertexCount([2])
Coordinate778 = x3d.Coordinate()
Coordinate778.setPoint([0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036])

LineSet777.setCoord(Coordinate778)
#from l_radiocarpal to l_carpometacarpal_5 vertices 2
ColorRGBA779 = x3d.ColorRGBA()
ColorRGBA779.setUSE("HAnimSegmentLineColorRGBA")

LineSet777.setColor(ColorRGBA779)

Shape776.setGeometry(LineSet777)

HAnimSegment750.addChildren(Shape776)
HAnimSite780 = x3d.HAnimSite()
HAnimSite780.setName("l_metacarpal_phalanx_5")
HAnimSite780.setDEF("hanim_l_metacarpal_phalanx_5")
HAnimSite780.setTranslation([0.1929,0.786,-0.1122])
TouchSensor781 = x3d.TouchSensor()
TouchSensor781.setDescription("HAnimSite l_metacarpal_phalanx_5")

HAnimSite780.addChildren(TouchSensor781)
Shape782 = x3d.Shape()
Shape782.setUSE("HAnimSiteShape")

HAnimSite780.addChildren(Shape782)

HAnimSegment750.addChildren(HAnimSite780)

HAnimJoint749.addChildren(HAnimSegment750)
HAnimJoint783 = x3d.HAnimJoint()
HAnimJoint783.setName("l_carpometacarpal_1")
HAnimJoint783.setDEF("hanim_l_carpometacarpal_1")
HAnimJoint783.setCenter([0.1924,0.8472,-0.0534])
HAnimJoint783.setUlimit([0,0,0])
HAnimJoint783.setLlimit([0,0,0])
HAnimSegment784 = x3d.HAnimSegment()
HAnimSegment784.setName("l_metacarpal_1")
HAnimSegment784.setDEF("hanim_l_metacarpal_1")
Transform785 = x3d.Transform()
Transform785.setTranslation([0.1924,0.8472,-0.0534])
Transform786 = x3d.Transform()
#Empty Transform
Shape787 = x3d.Shape()
Shape787.setUSE("HAnimJointShape")

Transform786.addChild(Shape787)

Transform785.addChildren(Transform786)

HAnimSegment784.addChildren(Transform785)
Shape788 = x3d.Shape()
LineSet789 = x3d.LineSet()
LineSet789.setVertexCount([2])
Coordinate790 = x3d.Coordinate()
Coordinate790.setPoint([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246])

LineSet789.setCoord(Coordinate790)
#from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA791 = x3d.ColorRGBA()
ColorRGBA791.setUSE("HAnimSegmentLineColorRGBA")

LineSet789.setColor(ColorRGBA791)

Shape788.setGeometry(LineSet789)

HAnimSegment784.addChildren(Shape788)

HAnimJoint783.addChildren(HAnimSegment784)
HAnimJoint792 = x3d.HAnimJoint()
HAnimJoint792.setName("l_metacarpophalangeal_1")
HAnimJoint792.setDEF("hanim_l_metacarpophalangeal_1")
HAnimJoint792.setCenter([0.1951,0.8226,0.0246])
HAnimJoint792.setUlimit([0,0,0])
HAnimJoint792.setLlimit([0,0,0])
HAnimSegment793 = x3d.HAnimSegment()
HAnimSegment793.setName("l_carpal_proximal_phalanx_1")
HAnimSegment793.setDEF("hanim_l_carpal_proximal_phalanx_1")
Transform794 = x3d.Transform()
Transform794.setTranslation([0.1951,0.8226,0.0246])
Transform795 = x3d.Transform()
#Empty Transform
Shape796 = x3d.Shape()
Shape796.setUSE("HAnimJointShape")

Transform795.addChild(Shape796)

Transform794.addChildren(Transform795)

HAnimSegment793.addChildren(Transform794)
Shape797 = x3d.Shape()
LineSet798 = x3d.LineSet()
LineSet798.setVertexCount([2])
Coordinate799 = x3d.Coordinate()
Coordinate799.setPoint([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464])

LineSet798.setCoord(Coordinate799)
#from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA800 = x3d.ColorRGBA()
ColorRGBA800.setUSE("HAnimSegmentLineColorRGBA")

LineSet798.setColor(ColorRGBA800)

Shape797.setGeometry(LineSet798)

HAnimSegment793.addChildren(Shape797)
HAnimSite801 = x3d.HAnimSite()
HAnimSite801.setName("l_carpal_distal_phalanx_1_tip")
HAnimSite801.setDEF("hanim_l_carpal_distal_phalanx_1_tip")
TouchSensor802 = x3d.TouchSensor()
TouchSensor802.setDescription("HAnimSite l_carpal_distal_phalanx_1_tip")

HAnimSite801.addChildren(TouchSensor802)
Shape803 = x3d.Shape()
Shape803.setUSE("HAnimSiteShape")

HAnimSite801.addChildren(Shape803)

HAnimSegment793.addChildren(HAnimSite801)

HAnimJoint792.addChildren(HAnimSegment793)
HAnimJoint804 = x3d.HAnimJoint()
HAnimJoint804.setName("l_carpal_interphalangeal_1")
HAnimJoint804.setDEF("hanim_l_carpal_interphalangeal_1")
HAnimJoint804.setCenter([0.1955,0.8159,0.0464])
HAnimJoint804.setUlimit([0,0,0])
HAnimJoint804.setLlimit([0,0,0])

HAnimJoint792.addChildren(HAnimJoint804)

HAnimJoint783.addChildren(HAnimJoint792)

HAnimJoint749.addChildren(HAnimJoint783)
HAnimJoint805 = x3d.HAnimJoint()
HAnimJoint805.setName("l_carpometacarpal_2")
HAnimJoint805.setDEF("hanim_l_carpometacarpal_2")
HAnimJoint805.setCenter([0.1983,0.8024,-0.028])
HAnimJoint805.setUlimit([0,0,0])
HAnimJoint805.setLlimit([0,0,0])
HAnimSegment806 = x3d.HAnimSegment()
HAnimSegment806.setName("l_metacarpal_2")
HAnimSegment806.setDEF("hanim_l_metacarpal_2")
Transform807 = x3d.Transform()
Transform807.setTranslation([0.1983,0.8024,-0.028])
Transform808 = x3d.Transform()
#Empty Transform
Shape809 = x3d.Shape()
Shape809.setUSE("HAnimJointShape")

Transform808.addChild(Shape809)

Transform807.addChildren(Transform808)

HAnimSegment806.addChildren(Transform807)
Shape810 = x3d.Shape()
LineSet811 = x3d.LineSet()
LineSet811.setVertexCount([2])
Coordinate812 = x3d.Coordinate()
Coordinate812.setPoint([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028])

LineSet811.setCoord(Coordinate812)
#from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA813 = x3d.ColorRGBA()
ColorRGBA813.setUSE("HAnimSegmentLineColorRGBA")

LineSet811.setColor(ColorRGBA813)

Shape810.setGeometry(LineSet811)

HAnimSegment806.addChildren(Shape810)

HAnimJoint805.addChildren(HAnimSegment806)
HAnimJoint814 = x3d.HAnimJoint()
HAnimJoint814.setName("l_metacarpophalangeal_2")
HAnimJoint814.setDEF("hanim_l_metacarpophalangeal_2")
HAnimJoint814.setCenter([0.1983,0.7815,-0.028])
HAnimJoint814.setUlimit([0,0,0])
HAnimJoint814.setLlimit([0,0,0])
HAnimSegment815 = x3d.HAnimSegment()
HAnimSegment815.setName("l_carpal_proximal_phalanx_2")
HAnimSegment815.setDEF("hanim_l_carpal_proximal_phalanx_2")
Transform816 = x3d.Transform()
Transform816.setTranslation([0.1983,0.7815,-0.028])
Transform817 = x3d.Transform()
#Empty Transform
Shape818 = x3d.Shape()
Shape818.setUSE("HAnimJointShape")

Transform817.addChild(Shape818)

Transform816.addChildren(Transform817)

HAnimSegment815.addChildren(Transform816)
Shape819 = x3d.Shape()
LineSet820 = x3d.LineSet()
LineSet820.setVertexCount([2])
Coordinate821 = x3d.Coordinate()
Coordinate821.setPoint([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248])

LineSet820.setCoord(Coordinate821)
#from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA822 = x3d.ColorRGBA()
ColorRGBA822.setUSE("HAnimSegmentLineColorRGBA")

LineSet820.setColor(ColorRGBA822)

Shape819.setGeometry(LineSet820)

HAnimSegment815.addChildren(Shape819)

HAnimJoint814.addChildren(HAnimSegment815)
HAnimJoint823 = x3d.HAnimJoint()
HAnimJoint823.setName("l_carpal_proximal_interphalangeal_2")
HAnimJoint823.setDEF("hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint823.setCenter([0.2017,0.7363,-0.0248])
HAnimJoint823.setUlimit([0,0,0])
HAnimJoint823.setLlimit([0,0,0])
HAnimSegment824 = x3d.HAnimSegment()
HAnimSegment824.setName("l_carpal_middle_phalanx_2")
HAnimSegment824.setDEF("hanim_l_carpal_middle_phalanx_2")
Transform825 = x3d.Transform()
Transform825.setTranslation([0.2017,0.7363,-0.0248])
Transform826 = x3d.Transform()
#Empty Transform
Shape827 = x3d.Shape()
Shape827.setUSE("HAnimJointShape")

Transform826.addChild(Shape827)

Transform825.addChildren(Transform826)

HAnimSegment824.addChildren(Transform825)
Shape828 = x3d.Shape()
LineSet829 = x3d.LineSet()
LineSet829.setVertexCount([2])
Coordinate830 = x3d.Coordinate()
Coordinate830.setPoint([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236])

LineSet829.setCoord(Coordinate830)
#from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA831 = x3d.ColorRGBA()
ColorRGBA831.setUSE("HAnimSegmentLineColorRGBA")

LineSet829.setColor(ColorRGBA831)

Shape828.setGeometry(LineSet829)

HAnimSegment824.addChildren(Shape828)
HAnimSite832 = x3d.HAnimSite()
HAnimSite832.setName("l_carpal_distal_phalanx_2_tip")
HAnimSite832.setDEF("hanim_l_carpal_distal_phalanx_2_tip")
TouchSensor833 = x3d.TouchSensor()
TouchSensor833.setDescription("HAnimSite l_carpal_distal_phalanx_2_tip")

HAnimSite832.addChildren(TouchSensor833)
Shape834 = x3d.Shape()
Shape834.setUSE("HAnimSiteShape")

HAnimSite832.addChildren(Shape834)

HAnimSegment824.addChildren(HAnimSite832)
HAnimSite835 = x3d.HAnimSite()
HAnimSite835.setName("l_dactylion")
HAnimSite835.setDEF("hanim_l_dactylion")
HAnimSite835.setTranslation([0.2056,0.6743,-0.0482])
TouchSensor836 = x3d.TouchSensor()
TouchSensor836.setDescription("HAnimSite l_dactylion")

HAnimSite835.addChildren(TouchSensor836)
Shape837 = x3d.Shape()
Shape837.setUSE("HAnimSiteShape")

HAnimSite835.addChildren(Shape837)

HAnimSegment824.addChildren(HAnimSite835)

HAnimJoint823.addChildren(HAnimSegment824)
HAnimJoint838 = x3d.HAnimJoint()
HAnimJoint838.setName("l_carpal_distal_interphalangeal_2")
HAnimJoint838.setDEF("hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint838.setCenter([0.2028,0.7139,-0.0236])
HAnimJoint838.setUlimit([0,0,0])
HAnimJoint838.setLlimit([0,0,0])

HAnimJoint823.addChildren(HAnimJoint838)

HAnimJoint814.addChildren(HAnimJoint823)

HAnimJoint805.addChildren(HAnimJoint814)

HAnimJoint749.addChildren(HAnimJoint805)
HAnimJoint839 = x3d.HAnimJoint()
HAnimJoint839.setName("l_carpometacarpal_3")
HAnimJoint839.setDEF("hanim_l_carpometacarpal_3")
HAnimJoint839.setCenter([0.1987,0.8029,-0.053])
HAnimJoint839.setUlimit([0,0,0])
HAnimJoint839.setLlimit([0,0,0])
HAnimSegment840 = x3d.HAnimSegment()
HAnimSegment840.setName("l_metacarpal_3")
HAnimSegment840.setDEF("hanim_l_metacarpal_3")
Transform841 = x3d.Transform()
Transform841.setTranslation([0.1987,0.8029,-0.053])
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
Coordinate846.setPoint([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053])

LineSet845.setCoord(Coordinate846)
#from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA847 = x3d.ColorRGBA()
ColorRGBA847.setUSE("HAnimSegmentLineColorRGBA")

LineSet845.setColor(ColorRGBA847)

Shape844.setGeometry(LineSet845)

HAnimSegment840.addChildren(Shape844)

HAnimJoint839.addChildren(HAnimSegment840)
HAnimJoint848 = x3d.HAnimJoint()
HAnimJoint848.setName("l_metacarpophalangeal_3")
HAnimJoint848.setDEF("hanim_l_metacarpophalangeal_3")
HAnimJoint848.setCenter([0.1987,0.7818,-0.053])
HAnimJoint848.setUlimit([0,0,0])
HAnimJoint848.setLlimit([0,0,0])
HAnimSegment849 = x3d.HAnimSegment()
HAnimSegment849.setName("l_carpal_proximal_phalanx_3")
HAnimSegment849.setDEF("hanim_l_carpal_proximal_phalanx_3")
Transform850 = x3d.Transform()
Transform850.setTranslation([0.1987,0.7818,-0.053])
Transform851 = x3d.Transform()
#Empty Transform
Shape852 = x3d.Shape()
Shape852.setUSE("HAnimJointShape")

Transform851.addChild(Shape852)

Transform850.addChildren(Transform851)

HAnimSegment849.addChildren(Transform850)
Shape853 = x3d.Shape()
LineSet854 = x3d.LineSet()
LineSet854.setVertexCount([2])
Coordinate855 = x3d.Coordinate()
Coordinate855.setPoint([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503])

LineSet854.setCoord(Coordinate855)
#from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA856 = x3d.ColorRGBA()
ColorRGBA856.setUSE("HAnimSegmentLineColorRGBA")

LineSet854.setColor(ColorRGBA856)

Shape853.setGeometry(LineSet854)

HAnimSegment849.addChildren(Shape853)

HAnimJoint848.addChildren(HAnimSegment849)
HAnimJoint857 = x3d.HAnimJoint()
HAnimJoint857.setName("l_carpal_proximal_interphalangeal_3")
HAnimJoint857.setDEF("hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint857.setCenter([0.2013,0.7273,-0.0503])
HAnimJoint857.setUlimit([0,0,0])
HAnimJoint857.setLlimit([0,0,0])
HAnimSegment858 = x3d.HAnimSegment()
HAnimSegment858.setName("l_carpal_middle_phalanx_3")
HAnimSegment858.setDEF("hanim_l_carpal_middle_phalanx_3")
Transform859 = x3d.Transform()
Transform859.setTranslation([0.2013,0.7273,-0.0503])
Transform860 = x3d.Transform()
#Empty Transform
Shape861 = x3d.Shape()
Shape861.setUSE("HAnimJointShape")

Transform860.addChild(Shape861)

Transform859.addChildren(Transform860)

HAnimSegment858.addChildren(Transform859)
Shape862 = x3d.Shape()
LineSet863 = x3d.LineSet()
LineSet863.setVertexCount([2])
Coordinate864 = x3d.Coordinate()
Coordinate864.setPoint([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494])

LineSet863.setCoord(Coordinate864)
#from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA865 = x3d.ColorRGBA()
ColorRGBA865.setUSE("HAnimSegmentLineColorRGBA")

LineSet863.setColor(ColorRGBA865)

Shape862.setGeometry(LineSet863)

HAnimSegment858.addChildren(Shape862)
HAnimSite866 = x3d.HAnimSite()
HAnimSite866.setName("l_carpal_distal_phalanx_3_tip")
HAnimSite866.setDEF("hanim_l_carpal_distal_phalanx_3_tip")
TouchSensor867 = x3d.TouchSensor()
TouchSensor867.setDescription("HAnimSite l_carpal_distal_phalanx_3_tip")

HAnimSite866.addChildren(TouchSensor867)
Shape868 = x3d.Shape()
Shape868.setUSE("HAnimSiteShape")

HAnimSite866.addChildren(Shape868)

HAnimSegment858.addChildren(HAnimSite866)

HAnimJoint857.addChildren(HAnimSegment858)
HAnimJoint869 = x3d.HAnimJoint()
HAnimJoint869.setName("l_carpal_distal_interphalangeal_3")
HAnimJoint869.setDEF("hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint869.setCenter([0.2026,0.7011,-0.0494])
HAnimJoint869.setUlimit([0,0,0])
HAnimJoint869.setLlimit([0,0,0])

HAnimJoint857.addChildren(HAnimJoint869)

HAnimJoint848.addChildren(HAnimJoint857)

HAnimJoint839.addChildren(HAnimJoint848)

HAnimJoint749.addChildren(HAnimJoint839)
HAnimJoint870 = x3d.HAnimJoint()
HAnimJoint870.setName("l_carpometacarpal_4")
HAnimJoint870.setDEF("hanim_l_carpometacarpal_4")
HAnimJoint870.setCenter([0.1956,0.8019,-0.0794])
HAnimJoint870.setUlimit([0,0,0])
HAnimJoint870.setLlimit([0,0,0])
HAnimSegment871 = x3d.HAnimSegment()
HAnimSegment871.setName("l_metacarpal_4")
HAnimSegment871.setDEF("hanim_l_metacarpal_4")
Transform872 = x3d.Transform()
Transform872.setTranslation([0.1956,0.8019,-0.0794])
Transform873 = x3d.Transform()
#Empty Transform
Shape874 = x3d.Shape()
Shape874.setUSE("HAnimJointShape")

Transform873.addChild(Shape874)

Transform872.addChildren(Transform873)

HAnimSegment871.addChildren(Transform872)
Shape875 = x3d.Shape()
LineSet876 = x3d.LineSet()
LineSet876.setVertexCount([2])
Coordinate877 = x3d.Coordinate()
Coordinate877.setPoint([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794])

LineSet876.setCoord(Coordinate877)
#from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA878 = x3d.ColorRGBA()
ColorRGBA878.setUSE("HAnimSegmentLineColorRGBA")

LineSet876.setColor(ColorRGBA878)

Shape875.setGeometry(LineSet876)

HAnimSegment871.addChildren(Shape875)

HAnimJoint870.addChildren(HAnimSegment871)
HAnimJoint879 = x3d.HAnimJoint()
HAnimJoint879.setName("l_metacarpophalangeal_4")
HAnimJoint879.setDEF("hanim_l_metacarpophalangeal_4")
HAnimJoint879.setCenter([0.1956,0.7815,-0.0794])
HAnimJoint879.setUlimit([0,0,0])
HAnimJoint879.setLlimit([0,0,0])
HAnimSegment880 = x3d.HAnimSegment()
HAnimSegment880.setName("l_carpal_proximal_phalanx_4")
HAnimSegment880.setDEF("hanim_l_carpal_proximal_phalanx_4")
Transform881 = x3d.Transform()
Transform881.setTranslation([0.1956,0.7815,-0.0794])
Transform882 = x3d.Transform()
#Empty Transform
Shape883 = x3d.Shape()
Shape883.setUSE("HAnimJointShape")

Transform882.addChild(Shape883)

Transform881.addChildren(Transform882)

HAnimSegment880.addChildren(Transform881)
Shape884 = x3d.Shape()
LineSet885 = x3d.LineSet()
LineSet885.setVertexCount([2])
Coordinate886 = x3d.Coordinate()
Coordinate886.setPoint([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777])

LineSet885.setCoord(Coordinate886)
#from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA887 = x3d.ColorRGBA()
ColorRGBA887.setUSE("HAnimSegmentLineColorRGBA")

LineSet885.setColor(ColorRGBA887)

Shape884.setGeometry(LineSet885)

HAnimSegment880.addChildren(Shape884)

HAnimJoint879.addChildren(HAnimSegment880)
HAnimJoint888 = x3d.HAnimJoint()
HAnimJoint888.setName("l_carpal_proximal_interphalangeal_4")
HAnimJoint888.setDEF("hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint888.setCenter([0.1973,0.7287,-0.0777])
HAnimJoint888.setUlimit([0,0,0])
HAnimJoint888.setLlimit([0,0,0])
HAnimSegment889 = x3d.HAnimSegment()
HAnimSegment889.setName("l_carpal_middle_phalanx_4")
HAnimSegment889.setDEF("hanim_l_carpal_middle_phalanx_4")
Transform890 = x3d.Transform()
Transform890.setTranslation([0.1973,0.7287,-0.0777])
Transform891 = x3d.Transform()
#Empty Transform
Shape892 = x3d.Shape()
Shape892.setUSE("HAnimJointShape")

Transform891.addChild(Shape892)

Transform890.addChildren(Transform891)

HAnimSegment889.addChildren(Transform890)
Shape893 = x3d.Shape()
LineSet894 = x3d.LineSet()
LineSet894.setVertexCount([2])
Coordinate895 = x3d.Coordinate()
Coordinate895.setPoint([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767])

LineSet894.setCoord(Coordinate895)
#from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA896 = x3d.ColorRGBA()
ColorRGBA896.setUSE("HAnimSegmentLineColorRGBA")

LineSet894.setColor(ColorRGBA896)

Shape893.setGeometry(LineSet894)

HAnimSegment889.addChildren(Shape893)
HAnimSite897 = x3d.HAnimSite()
HAnimSite897.setName("l_carpal_distal_phalanx_4_tip")
HAnimSite897.setDEF("hanim_l_carpal_distal_phalanx_4_tip")
TouchSensor898 = x3d.TouchSensor()
TouchSensor898.setDescription("HAnimSite l_carpal_distal_phalanx_4_tip")

HAnimSite897.addChildren(TouchSensor898)
Shape899 = x3d.Shape()
Shape899.setUSE("HAnimSiteShape")

HAnimSite897.addChildren(Shape899)

HAnimSegment889.addChildren(HAnimSite897)

HAnimJoint888.addChildren(HAnimSegment889)
HAnimJoint900 = x3d.HAnimJoint()
HAnimJoint900.setName("l_carpal_distal_interphalangeal_4")
HAnimJoint900.setDEF("hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint900.setCenter([0.1983,0.7045,-0.0767])
HAnimJoint900.setUlimit([0,0,0])
HAnimJoint900.setLlimit([0,0,0])

HAnimJoint888.addChildren(HAnimJoint900)

HAnimJoint879.addChildren(HAnimJoint888)

HAnimJoint870.addChildren(HAnimJoint879)

HAnimJoint749.addChildren(HAnimJoint870)
HAnimJoint901 = x3d.HAnimJoint()
HAnimJoint901.setName("l_carpometacarpal_5")
HAnimJoint901.setDEF("hanim_l_carpometacarpal_5")
HAnimJoint901.setCenter([0.1925,0.8066,-0.1036])
HAnimJoint901.setUlimit([0,0,0])
HAnimJoint901.setLlimit([0,0,0])
HAnimSegment902 = x3d.HAnimSegment()
HAnimSegment902.setName("l_metacarpal_5")
HAnimSegment902.setDEF("hanim_l_metacarpal_5")
Transform903 = x3d.Transform()
Transform903.setTranslation([0.1925,0.8066,-0.1036])
Transform904 = x3d.Transform()
#Empty Transform
Shape905 = x3d.Shape()
Shape905.setUSE("HAnimJointShape")

Transform904.addChild(Shape905)

Transform903.addChildren(Transform904)

HAnimSegment902.addChildren(Transform903)
Shape906 = x3d.Shape()
LineSet907 = x3d.LineSet()
LineSet907.setVertexCount([2])
Coordinate908 = x3d.Coordinate()
Coordinate908.setPoint([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036])

LineSet907.setCoord(Coordinate908)
#from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA909 = x3d.ColorRGBA()
ColorRGBA909.setUSE("HAnimSegmentLineColorRGBA")

LineSet907.setColor(ColorRGBA909)

Shape906.setGeometry(LineSet907)

HAnimSegment902.addChildren(Shape906)

HAnimJoint901.addChildren(HAnimSegment902)
HAnimJoint910 = x3d.HAnimJoint()
HAnimJoint910.setName("l_metacarpophalangeal_5")
HAnimJoint910.setDEF("hanim_l_metacarpophalangeal_5")
HAnimJoint910.setCenter([0.1925,0.7866,-0.1036])
HAnimJoint910.setUlimit([0,0,0])
HAnimJoint910.setLlimit([0,0,0])
HAnimSegment911 = x3d.HAnimSegment()
HAnimSegment911.setName("l_carpal_proximal_phalanx_5")
HAnimSegment911.setDEF("hanim_l_carpal_proximal_phalanx_5")
Transform912 = x3d.Transform()
Transform912.setTranslation([0.1925,0.7866,-0.1036])
Transform913 = x3d.Transform()
#Empty Transform
Shape914 = x3d.Shape()
Shape914.setUSE("HAnimJointShape")

Transform913.addChild(Shape914)

Transform912.addChildren(Transform913)

HAnimSegment911.addChildren(Transform912)
Shape915 = x3d.Shape()
LineSet916 = x3d.LineSet()
LineSet916.setVertexCount([2])
Coordinate917 = x3d.Coordinate()
Coordinate917.setPoint([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024])

LineSet916.setCoord(Coordinate917)
#from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA918 = x3d.ColorRGBA()
ColorRGBA918.setUSE("HAnimSegmentLineColorRGBA")

LineSet916.setColor(ColorRGBA918)

Shape915.setGeometry(LineSet916)

HAnimSegment911.addChildren(Shape915)

HAnimJoint910.addChildren(HAnimSegment911)
HAnimJoint919 = x3d.HAnimJoint()
HAnimJoint919.setName("l_carpal_proximal_interphalangeal_5")
HAnimJoint919.setDEF("hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint919.setCenter([0.1938,0.7452,-0.1024])
HAnimJoint919.setUlimit([0,0,0])
HAnimJoint919.setLlimit([0,0,0])
HAnimSegment920 = x3d.HAnimSegment()
HAnimSegment920.setName("l_carpal_middle_phalanx_5")
HAnimSegment920.setDEF("hanim_l_carpal_middle_phalanx_5")
Transform921 = x3d.Transform()
Transform921.setTranslation([0.1938,0.7452,-0.1024])
Transform922 = x3d.Transform()
#Empty Transform
Shape923 = x3d.Shape()
Shape923.setUSE("HAnimJointShape")

Transform922.addChild(Shape923)

Transform921.addChildren(Transform922)

HAnimSegment920.addChildren(Transform921)
Shape924 = x3d.Shape()
LineSet925 = x3d.LineSet()
LineSet925.setVertexCount([2])
Coordinate926 = x3d.Coordinate()
Coordinate926.setPoint([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017])

LineSet925.setCoord(Coordinate926)
#from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA927 = x3d.ColorRGBA()
ColorRGBA927.setUSE("HAnimSegmentLineColorRGBA")

LineSet925.setColor(ColorRGBA927)

Shape924.setGeometry(LineSet925)

HAnimSegment920.addChildren(Shape924)
HAnimSite928 = x3d.HAnimSite()
HAnimSite928.setName("l_carpal_distal_phalanx_5_tip")
HAnimSite928.setDEF("hanim_l_carpal_distal_phalanx_5_tip")
TouchSensor929 = x3d.TouchSensor()
TouchSensor929.setDescription("HAnimSite l_carpal_distal_phalanx_5_tip")

HAnimSite928.addChildren(TouchSensor929)
Shape930 = x3d.Shape()
Shape930.setUSE("HAnimSiteShape")

HAnimSite928.addChildren(Shape930)

HAnimSegment920.addChildren(HAnimSite928)

HAnimJoint919.addChildren(HAnimSegment920)
HAnimJoint931 = x3d.HAnimJoint()
HAnimJoint931.setName("l_carpal_distal_interphalangeal_5")
HAnimJoint931.setDEF("hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint931.setCenter([0.1948,0.7277,-0.1017])
HAnimJoint931.setUlimit([0,0,0])
HAnimJoint931.setLlimit([0,0,0])

HAnimJoint919.addChildren(HAnimJoint931)

HAnimJoint910.addChildren(HAnimJoint919)

HAnimJoint901.addChildren(HAnimJoint910)

HAnimJoint749.addChildren(HAnimJoint901)

HAnimJoint737.addChildren(HAnimJoint749)

HAnimJoint716.addChildren(HAnimJoint737)

HAnimJoint701.addChildren(HAnimJoint716)

HAnimJoint692.addChildren(HAnimJoint701)

HAnimJoint488.addChildren(HAnimJoint692)
HAnimJoint932 = x3d.HAnimJoint()
HAnimJoint932.setName("r_sternoclavicular")
HAnimJoint932.setDEF("hanim_r_sternoclavicular")
HAnimJoint932.setCenter([-0.0694,1.46,-0.033])
HAnimJoint932.setUlimit([0,0,0])
HAnimJoint932.setLlimit([0,0,0])
HAnimSegment933 = x3d.HAnimSegment()
HAnimSegment933.setName("r_clavicle")
HAnimSegment933.setDEF("hanim_r_clavicle")
Transform934 = x3d.Transform()
Transform934.setTranslation([-0.0694,1.46,-0.033])
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
Coordinate939.setPoint([-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401])

LineSet938.setCoord(Coordinate939)
#from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA940 = x3d.ColorRGBA()
ColorRGBA940.setUSE("HAnimSegmentLineColorRGBA")

LineSet938.setColor(ColorRGBA940)

Shape937.setGeometry(LineSet938)

HAnimSegment933.addChildren(Shape937)

HAnimJoint932.addChildren(HAnimSegment933)
HAnimJoint941 = x3d.HAnimJoint()
HAnimJoint941.setName("r_acromioclavicular")
HAnimJoint941.setDEF("hanim_r_acromioclavicular")
HAnimJoint941.setCenter([-0.0836,1.4281,-0.0401])
HAnimJoint941.setUlimit([0,0,0])
HAnimJoint941.setLlimit([0,0,0])
HAnimSegment942 = x3d.HAnimSegment()
HAnimSegment942.setName("r_scapula")
HAnimSegment942.setDEF("hanim_r_scapula")
Transform943 = x3d.Transform()
Transform943.setTranslation([-0.0836,1.4281,-0.0401])
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
Coordinate948.setPoint([-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325])

LineSet947.setCoord(Coordinate948)
#from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA949 = x3d.ColorRGBA()
ColorRGBA949.setUSE("HAnimSegmentLineColorRGBA")

LineSet947.setColor(ColorRGBA949)

Shape946.setGeometry(LineSet947)

HAnimSegment942.addChildren(Shape946)
HAnimSite950 = x3d.HAnimSite()
HAnimSite950.setName("r_bideltoid")
HAnimSite950.setDEF("hanim_r_bideltoid")
TouchSensor951 = x3d.TouchSensor()
TouchSensor951.setDescription("HAnimSite r_bideltoid")

HAnimSite950.addChildren(TouchSensor951)
Shape952 = x3d.Shape()
Shape952.setUSE("HAnimSiteShape")

HAnimSite950.addChildren(Shape952)

HAnimSegment942.addChildren(HAnimSite950)
HAnimSite953 = x3d.HAnimSite()
HAnimSite953.setName("r_humeral_lateral_epicondyles")
HAnimSite953.setDEF("hanim_r_humeral_lateral_epicondyles")
HAnimSite953.setTranslation([-0.2224,1.1517,-0.1033])
TouchSensor954 = x3d.TouchSensor()
TouchSensor954.setDescription("HAnimSite r_humeral_lateral_epicondyles")

HAnimSite953.addChildren(TouchSensor954)
Shape955 = x3d.Shape()
Shape955.setUSE("HAnimSiteShape")

HAnimSite953.addChildren(Shape955)

HAnimSegment942.addChildren(HAnimSite953)

HAnimJoint941.addChildren(HAnimSegment942)
HAnimJoint956 = x3d.HAnimJoint()
HAnimJoint956.setName("r_shoulder")
HAnimJoint956.setDEF("hanim_r_shoulder")
HAnimJoint956.setCenter([-0.1907,1.4407,-0.0325])
HAnimJoint956.setUlimit([0,0,0])
HAnimJoint956.setLlimit([0,0,0])
HAnimSegment957 = x3d.HAnimSegment()
HAnimSegment957.setName("r_upperarm")
HAnimSegment957.setDEF("hanim_r_upperarm")
Transform958 = x3d.Transform()
Transform958.setTranslation([-0.1907,1.4407,-0.0325])
Transform959 = x3d.Transform()
#Empty Transform
Shape960 = x3d.Shape()
Shape960.setUSE("HAnimJointShape")

Transform959.addChild(Shape960)

Transform958.addChildren(Transform959)

HAnimSegment957.addChildren(Transform958)
Shape961 = x3d.Shape()
LineSet962 = x3d.LineSet()
LineSet962.setVertexCount([2])
Coordinate963 = x3d.Coordinate()
Coordinate963.setPoint([-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062])

LineSet962.setCoord(Coordinate963)
#from r_shoulder to r_elbow vertices 2
ColorRGBA964 = x3d.ColorRGBA()
ColorRGBA964.setUSE("HAnimSegmentLineColorRGBA")

LineSet962.setColor(ColorRGBA964)

Shape961.setGeometry(LineSet962)

HAnimSegment957.addChildren(Shape961)
HAnimSite965 = x3d.HAnimSite()
HAnimSite965.setName("r_humeral_medial_epicondyles")
HAnimSite965.setDEF("hanim_r_humeral_medial_epicondyles")
HAnimSite965.setTranslation([-0.168,1.1298,-0.1062])
TouchSensor966 = x3d.TouchSensor()
TouchSensor966.setDescription("HAnimSite r_humeral_medial_epicondyles")

HAnimSite965.addChildren(TouchSensor966)
Shape967 = x3d.Shape()
Shape967.setUSE("HAnimSiteShape")

HAnimSite965.addChildren(Shape967)

HAnimSegment957.addChildren(HAnimSite965)
HAnimSite968 = x3d.HAnimSite()
HAnimSite968.setName("r_olecranon")
HAnimSite968.setDEF("hanim_r_olecranon")
HAnimSite968.setTranslation([-0.1907,1.1405,-0.1065])
TouchSensor969 = x3d.TouchSensor()
TouchSensor969.setDescription("HAnimSite r_olecranon")

HAnimSite968.addChildren(TouchSensor969)
Shape970 = x3d.Shape()
Shape970.setUSE("HAnimSiteShape")

HAnimSite968.addChildren(Shape970)

HAnimSegment957.addChildren(HAnimSite968)
HAnimSite971 = x3d.HAnimSite()
HAnimSite971.setName("r_radial_styloid")
HAnimSite971.setDEF("hanim_r_radial_styloid")
HAnimSite971.setTranslation([-0.1884,0.8676,-0.036])
TouchSensor972 = x3d.TouchSensor()
TouchSensor972.setDescription("HAnimSite r_radial_styloid")

HAnimSite971.addChildren(TouchSensor972)
Shape973 = x3d.Shape()
Shape973.setUSE("HAnimSiteShape")

HAnimSite971.addChildren(Shape973)

HAnimSegment957.addChildren(HAnimSite971)
HAnimSite974 = x3d.HAnimSite()
HAnimSite974.setName("r_radiale")
HAnimSite974.setDEF("hanim_r_radiale")
HAnimSite974.setTranslation([-0.213,1.1305,-0.1091])
TouchSensor975 = x3d.TouchSensor()
TouchSensor975.setDescription("HAnimSite r_radiale")

HAnimSite974.addChildren(TouchSensor975)
Shape976 = x3d.Shape()
Shape976.setUSE("HAnimSiteShape")

HAnimSite974.addChildren(Shape976)

HAnimSegment957.addChildren(HAnimSite974)

HAnimJoint956.addChildren(HAnimSegment957)
HAnimJoint977 = x3d.HAnimJoint()
HAnimJoint977.setName("r_elbow")
HAnimJoint977.setDEF("hanim_r_elbow")
HAnimJoint977.setCenter([-0.1949,1.1388,-0.062])
HAnimJoint977.setUlimit([0,0,0])
HAnimJoint977.setLlimit([0,0,0])
HAnimSegment978 = x3d.HAnimSegment()
HAnimSegment978.setName("r_forearm")
HAnimSegment978.setDEF("hanim_r_forearm")
Transform979 = x3d.Transform()
Transform979.setTranslation([-0.1949,1.1388,-0.062])
Transform980 = x3d.Transform()
#Empty Transform
Shape981 = x3d.Shape()
Shape981.setUSE("HAnimJointShape")

Transform980.addChild(Shape981)

Transform979.addChildren(Transform980)

HAnimSegment978.addChildren(Transform979)
Shape982 = x3d.Shape()
LineSet983 = x3d.LineSet()
LineSet983.setVertexCount([2])
Coordinate984 = x3d.Coordinate()
Coordinate984.setPoint([-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521])

LineSet983.setCoord(Coordinate984)
#from r_elbow to r_radiocarpal vertices 2
ColorRGBA985 = x3d.ColorRGBA()
ColorRGBA985.setUSE("HAnimSegmentLineColorRGBA")

LineSet983.setColor(ColorRGBA985)

Shape982.setGeometry(LineSet983)

HAnimSegment978.addChildren(Shape982)
HAnimSite986 = x3d.HAnimSite()
HAnimSite986.setName("r_ulnar_styloid")
HAnimSite986.setDEF("hanim_r_ulnar_styloid")
HAnimSite986.setTranslation([-0.2117,0.8562,-0.0584])
TouchSensor987 = x3d.TouchSensor()
TouchSensor987.setDescription("HAnimSite r_ulnar_styloid")

HAnimSite986.addChildren(TouchSensor987)
Shape988 = x3d.Shape()
Shape988.setUSE("HAnimSiteShape")

HAnimSite986.addChildren(Shape988)

HAnimSegment978.addChildren(HAnimSite986)

HAnimJoint977.addChildren(HAnimSegment978)
HAnimJoint989 = x3d.HAnimJoint()
HAnimJoint989.setName("r_radiocarpal")
HAnimJoint989.setDEF("hanim_r_radiocarpal")
HAnimJoint989.setCenter([-0.1959,0.8694,-0.0521])
HAnimJoint989.setUlimit([0,0,0])
HAnimJoint989.setLlimit([0,0,0])
HAnimSegment990 = x3d.HAnimSegment()
HAnimSegment990.setName("r_carpal")
HAnimSegment990.setDEF("hanim_r_carpal")
Transform991 = x3d.Transform()
Transform991.setScale([0.2,0.2,0.2])
Transform991.setTranslation([-0.2,0.85,-0.05])
Transform991.setRotation([0,0,1,-3.14])
#Transform right hand
Transform992 = x3d.Transform()
Transform992.setRotation([0,1,0,1.57])
#Transform right hand
Shape993 = x3d.Shape()
Shape993.setUSE("HAnimJointShape")

Transform992.addChild(Shape993)

Transform991.addChildren(Transform992)

HAnimSegment990.addChildren(Transform991)
Shape994 = x3d.Shape()
LineSet995 = x3d.LineSet()
LineSet995.setVertexCount([2])
Coordinate996 = x3d.Coordinate()
Coordinate996.setPoint([-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473])

LineSet995.setCoord(Coordinate996)
#from r_radiocarpal to r_carpometacarpal_1 vertices 2
ColorRGBA997 = x3d.ColorRGBA()
ColorRGBA997.setUSE("HAnimSegmentLineColorRGBA")

LineSet995.setColor(ColorRGBA997)

Shape994.setGeometry(LineSet995)

HAnimSegment990.addChildren(Shape994)
Shape998 = x3d.Shape()
LineSet999 = x3d.LineSet()
LineSet999.setVertexCount([2])
Coordinate1000 = x3d.Coordinate()
Coordinate1000.setPoint([-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218])

LineSet999.setCoord(Coordinate1000)
#from r_radiocarpal to r_carpometacarpal_2 vertices 2
ColorRGBA1001 = x3d.ColorRGBA()
ColorRGBA1001.setUSE("HAnimSegmentLineColorRGBA")

LineSet999.setColor(ColorRGBA1001)

Shape998.setGeometry(LineSet999)

HAnimSegment990.addChildren(Shape998)
HAnimSite1002 = x3d.HAnimSite()
HAnimSite1002.setName("r_metacarpal_phalanx_2")
HAnimSite1002.setDEF("hanim_r_metacarpal_phalanx_2")
HAnimSite1002.setTranslation([-0.1977,0.8169,-0.0177])
TouchSensor1003 = x3d.TouchSensor()
TouchSensor1003.setDescription("HAnimSite r_metacarpal_phalanx_2")

HAnimSite1002.addChildren(TouchSensor1003)
Shape1004 = x3d.Shape()
Shape1004.setUSE("HAnimSiteShape")

HAnimSite1002.addChildren(Shape1004)

HAnimSegment990.addChildren(HAnimSite1002)
Shape1005 = x3d.Shape()
LineSet1006 = x3d.LineSet()
LineSet1006.setVertexCount([2])
Coordinate1007 = x3d.Coordinate()
Coordinate1007.setPoint([-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468])

LineSet1006.setCoord(Coordinate1007)
#from r_radiocarpal to r_carpometacarpal_3 vertices 2
ColorRGBA1008 = x3d.ColorRGBA()
ColorRGBA1008.setUSE("HAnimSegmentLineColorRGBA")

LineSet1006.setColor(ColorRGBA1008)

Shape1005.setGeometry(LineSet1006)

HAnimSegment990.addChildren(Shape1005)
HAnimSite1009 = x3d.HAnimSite()
HAnimSite1009.setName("r_metacarpal_phalanx_3")
HAnimSite1009.setDEF("hanim_r_metacarpal_phalanx_3")
TouchSensor1010 = x3d.TouchSensor()
TouchSensor1010.setDescription("HAnimSite r_metacarpal_phalanx_3")

HAnimSite1009.addChildren(TouchSensor1010)
Shape1011 = x3d.Shape()
Shape1011.setUSE("HAnimSiteShape")

HAnimSite1009.addChildren(Shape1011)

HAnimSegment990.addChildren(HAnimSite1009)
Shape1012 = x3d.Shape()
LineSet1013 = x3d.LineSet()
LineSet1013.setVertexCount([2])
Coordinate1014 = x3d.Coordinate()
Coordinate1014.setPoint([-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732])

LineSet1013.setCoord(Coordinate1014)
#from r_radiocarpal to r_carpometacarpal_4 vertices 2
ColorRGBA1015 = x3d.ColorRGBA()
ColorRGBA1015.setUSE("HAnimSegmentLineColorRGBA")

LineSet1013.setColor(ColorRGBA1015)

Shape1012.setGeometry(LineSet1013)

HAnimSegment990.addChildren(Shape1012)
Shape1016 = x3d.Shape()
LineSet1017 = x3d.LineSet()
LineSet1017.setVertexCount([2])
Coordinate1018 = x3d.Coordinate()
Coordinate1018.setPoint([-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975])

LineSet1017.setCoord(Coordinate1018)
#from r_radiocarpal to r_carpometacarpal_5 vertices 2
ColorRGBA1019 = x3d.ColorRGBA()
ColorRGBA1019.setUSE("HAnimSegmentLineColorRGBA")

LineSet1017.setColor(ColorRGBA1019)

Shape1016.setGeometry(LineSet1017)

HAnimSegment990.addChildren(Shape1016)
HAnimSite1020 = x3d.HAnimSite()
HAnimSite1020.setName("r_metacarpal_phalanx_5")
HAnimSite1020.setDEF("hanim_r_metacarpal_phalanx_5")
HAnimSite1020.setTranslation([-0.1929,0.789,-0.1064])
TouchSensor1021 = x3d.TouchSensor()
TouchSensor1021.setDescription("HAnimSite r_metacarpal_phalanx_5")

HAnimSite1020.addChildren(TouchSensor1021)
Shape1022 = x3d.Shape()
Shape1022.setUSE("HAnimSiteShape")

HAnimSite1020.addChildren(Shape1022)

HAnimSegment990.addChildren(HAnimSite1020)

HAnimJoint989.addChildren(HAnimSegment990)
HAnimJoint1023 = x3d.HAnimJoint()
HAnimJoint1023.setName("r_carpometacarpal_1")
HAnimJoint1023.setDEF("hanim_r_carpometacarpal_1")
HAnimJoint1023.setCenter([-0.1899,0.8502,-0.0473])
HAnimJoint1023.setUlimit([0,0,0])
HAnimJoint1023.setLlimit([0,0,0])
HAnimSegment1024 = x3d.HAnimSegment()
HAnimSegment1024.setName("r_metacarpal_1")
HAnimSegment1024.setDEF("hanim_r_metacarpal_1")
Transform1025 = x3d.Transform()
Transform1025.setTranslation([-0.1899,0.8502,-0.0473])
Transform1026 = x3d.Transform()
#Empty Transform
Shape1027 = x3d.Shape()
Shape1027.setUSE("HAnimJointShape")

Transform1026.addChild(Shape1027)

Transform1025.addChildren(Transform1026)

HAnimSegment1024.addChildren(Transform1025)
Shape1028 = x3d.Shape()
LineSet1029 = x3d.LineSet()
LineSet1029.setVertexCount([2])
Coordinate1030 = x3d.Coordinate()
Coordinate1030.setPoint([-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306])

LineSet1029.setCoord(Coordinate1030)
#from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA1031 = x3d.ColorRGBA()
ColorRGBA1031.setUSE("HAnimSegmentLineColorRGBA")

LineSet1029.setColor(ColorRGBA1031)

Shape1028.setGeometry(LineSet1029)

HAnimSegment1024.addChildren(Shape1028)

HAnimJoint1023.addChildren(HAnimSegment1024)
HAnimJoint1032 = x3d.HAnimJoint()
HAnimJoint1032.setName("r_metacarpophalangeal_1")
HAnimJoint1032.setDEF("hanim_r_metacarpophalangeal_1")
HAnimJoint1032.setCenter([-0.1874,0.8256,0.0306])
HAnimJoint1032.setUlimit([0,0,0])
HAnimJoint1032.setLlimit([0,0,0])
HAnimSegment1033 = x3d.HAnimSegment()
HAnimSegment1033.setName("r_carpal_proximal_phalanx_1")
HAnimSegment1033.setDEF("hanim_r_carpal_proximal_phalanx_1")
Transform1034 = x3d.Transform()
Transform1034.setTranslation([-0.1874,0.8256,0.0306])
Transform1035 = x3d.Transform()
#Empty Transform
Shape1036 = x3d.Shape()
Shape1036.setUSE("HAnimJointShape")

Transform1035.addChild(Shape1036)

Transform1034.addChildren(Transform1035)

HAnimSegment1033.addChildren(Transform1034)
Shape1037 = x3d.Shape()
LineSet1038 = x3d.LineSet()
LineSet1038.setVertexCount([2])
Coordinate1039 = x3d.Coordinate()
Coordinate1039.setPoint([-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506])

LineSet1038.setCoord(Coordinate1039)
#from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA1040 = x3d.ColorRGBA()
ColorRGBA1040.setUSE("HAnimSegmentLineColorRGBA")

LineSet1038.setColor(ColorRGBA1040)

Shape1037.setGeometry(LineSet1038)

HAnimSegment1033.addChildren(Shape1037)
HAnimSite1041 = x3d.HAnimSite()
HAnimSite1041.setName("r_carpal_distal_phalanx_1_tip")
HAnimSite1041.setDEF("hanim_r_carpal_distal_phalanx_1_tip")
TouchSensor1042 = x3d.TouchSensor()
TouchSensor1042.setDescription("HAnimSite r_carpal_distal_phalanx_1_tip")

HAnimSite1041.addChildren(TouchSensor1042)
Shape1043 = x3d.Shape()
Shape1043.setUSE("HAnimSiteShape")

HAnimSite1041.addChildren(Shape1043)

HAnimSegment1033.addChildren(HAnimSite1041)

HAnimJoint1032.addChildren(HAnimSegment1033)
HAnimJoint1044 = x3d.HAnimJoint()
HAnimJoint1044.setName("r_carpal_interphalangeal_1")
HAnimJoint1044.setDEF("hanim_r_carpal_interphalangeal_1")
HAnimJoint1044.setCenter([-0.1864,0.819,0.0506])
HAnimJoint1044.setUlimit([0,0,0])
HAnimJoint1044.setLlimit([0,0,0])

HAnimJoint1032.addChildren(HAnimJoint1044)

HAnimJoint1023.addChildren(HAnimJoint1032)

HAnimJoint989.addChildren(HAnimJoint1023)
HAnimJoint1045 = x3d.HAnimJoint()
HAnimJoint1045.setName("r_carpometacarpal_2")
HAnimJoint1045.setDEF("hanim_r_carpometacarpal_2")
HAnimJoint1045.setCenter([-0.1961,0.8055,-0.0218])
HAnimJoint1045.setUlimit([0,0,0])
HAnimJoint1045.setLlimit([0,0,0])
HAnimSegment1046 = x3d.HAnimSegment()
HAnimSegment1046.setName("r_metacarpal_2")
HAnimSegment1046.setDEF("hanim_r_metacarpal_2")
Transform1047 = x3d.Transform()
Transform1047.setTranslation([-0.1961,0.8055,-0.0218])
Transform1048 = x3d.Transform()
#Empty Transform
Shape1049 = x3d.Shape()
Shape1049.setUSE("HAnimJointShape")

Transform1048.addChild(Shape1049)

Transform1047.addChildren(Transform1048)

HAnimSegment1046.addChildren(Transform1047)
Shape1050 = x3d.Shape()
LineSet1051 = x3d.LineSet()
LineSet1051.setVertexCount([2])
Coordinate1052 = x3d.Coordinate()
Coordinate1052.setPoint([-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218])

LineSet1051.setCoord(Coordinate1052)
#from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA1053 = x3d.ColorRGBA()
ColorRGBA1053.setUSE("HAnimSegmentLineColorRGBA")

LineSet1051.setColor(ColorRGBA1053)

Shape1050.setGeometry(LineSet1051)

HAnimSegment1046.addChildren(Shape1050)

HAnimJoint1045.addChildren(HAnimSegment1046)
HAnimJoint1054 = x3d.HAnimJoint()
HAnimJoint1054.setName("r_metacarpophalangeal_2")
HAnimJoint1054.setDEF("hanim_r_metacarpophalangeal_2")
HAnimJoint1054.setCenter([-0.1961,0.7846,-0.0218])
HAnimJoint1054.setUlimit([0,0,0])
HAnimJoint1054.setLlimit([0,0,0])
HAnimSegment1055 = x3d.HAnimSegment()
HAnimSegment1055.setName("r_carpal_proximal_phalanx_2")
HAnimSegment1055.setDEF("hanim_r_carpal_proximal_phalanx_2")
Transform1056 = x3d.Transform()
Transform1056.setTranslation([-0.1961,0.7846,-0.0218])
Transform1057 = x3d.Transform()
#Empty Transform
Shape1058 = x3d.Shape()
Shape1058.setUSE("HAnimJointShape")

Transform1057.addChild(Shape1058)

Transform1056.addChildren(Transform1057)

HAnimSegment1055.addChildren(Transform1056)
Shape1059 = x3d.Shape()
LineSet1060 = x3d.LineSet()
LineSet1060.setVertexCount([2])
Coordinate1061 = x3d.Coordinate()
Coordinate1061.setPoint([-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185])

LineSet1060.setCoord(Coordinate1061)
#from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA1062 = x3d.ColorRGBA()
ColorRGBA1062.setUSE("HAnimSegmentLineColorRGBA")

LineSet1060.setColor(ColorRGBA1062)

Shape1059.setGeometry(LineSet1060)

HAnimSegment1055.addChildren(Shape1059)

HAnimJoint1054.addChildren(HAnimSegment1055)
HAnimJoint1063 = x3d.HAnimJoint()
HAnimJoint1063.setName("r_carpal_proximal_interphalangeal_2")
HAnimJoint1063.setDEF("hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint1063.setCenter([-0.1954,0.7393,-0.0185])
HAnimJoint1063.setUlimit([0,0,0])
HAnimJoint1063.setLlimit([0,0,0])
HAnimSegment1064 = x3d.HAnimSegment()
HAnimSegment1064.setName("r_carpal_middle_phalanx_2")
HAnimSegment1064.setDEF("hanim_r_carpal_middle_phalanx_2")
Transform1065 = x3d.Transform()
Transform1065.setTranslation([-0.1954,0.7393,-0.0185])
Transform1066 = x3d.Transform()
#Empty Transform
Shape1067 = x3d.Shape()
Shape1067.setUSE("HAnimJointShape")

Transform1066.addChild(Shape1067)

Transform1065.addChildren(Transform1066)

HAnimSegment1064.addChildren(Transform1065)
Shape1068 = x3d.Shape()
LineSet1069 = x3d.LineSet()
LineSet1069.setVertexCount([2])
Coordinate1070 = x3d.Coordinate()
Coordinate1070.setPoint([-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173])

LineSet1069.setCoord(Coordinate1070)
#from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA1071 = x3d.ColorRGBA()
ColorRGBA1071.setUSE("HAnimSegmentLineColorRGBA")

LineSet1069.setColor(ColorRGBA1071)

Shape1068.setGeometry(LineSet1069)

HAnimSegment1064.addChildren(Shape1068)
HAnimSite1072 = x3d.HAnimSite()
HAnimSite1072.setName("r_carpal_distal_phalanx_2_tip")
HAnimSite1072.setDEF("hanim_r_carpal_distal_phalanx_2_tip")
TouchSensor1073 = x3d.TouchSensor()
TouchSensor1073.setDescription("HAnimSite r_carpal_distal_phalanx_2_tip")

HAnimSite1072.addChildren(TouchSensor1073)
Shape1074 = x3d.Shape()
Shape1074.setUSE("HAnimSiteShape")

HAnimSite1072.addChildren(Shape1074)

HAnimSegment1064.addChildren(HAnimSite1072)
HAnimSite1075 = x3d.HAnimSite()
HAnimSite1075.setName("r_dactylion")
HAnimSite1075.setDEF("hanim_r_dactylion")
HAnimSite1075.setTranslation([-0.1941,0.6772,-0.0423])
TouchSensor1076 = x3d.TouchSensor()
TouchSensor1076.setDescription("HAnimSite r_dactylion")

HAnimSite1075.addChildren(TouchSensor1076)
Shape1077 = x3d.Shape()
Shape1077.setUSE("HAnimSiteShape")

HAnimSite1075.addChildren(Shape1077)

HAnimSegment1064.addChildren(HAnimSite1075)

HAnimJoint1063.addChildren(HAnimSegment1064)
HAnimJoint1078 = x3d.HAnimJoint()
HAnimJoint1078.setName("r_carpal_distal_interphalangeal_2")
HAnimJoint1078.setDEF("hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint1078.setCenter([-0.1945,0.7169,-0.0173])
HAnimJoint1078.setUlimit([0,0,0])
HAnimJoint1078.setLlimit([0,0,0])

HAnimJoint1063.addChildren(HAnimJoint1078)

HAnimJoint1054.addChildren(HAnimJoint1063)

HAnimJoint1045.addChildren(HAnimJoint1054)

HAnimJoint989.addChildren(HAnimJoint1045)
HAnimJoint1079 = x3d.HAnimJoint()
HAnimJoint1079.setName("r_carpometacarpal_3")
HAnimJoint1079.setDEF("hanim_r_carpometacarpal_3")
HAnimJoint1079.setCenter([-0.1972,0.806,-0.0468])
HAnimJoint1079.setUlimit([0,0,0])
HAnimJoint1079.setLlimit([0,0,0])
HAnimSegment1080 = x3d.HAnimSegment()
HAnimSegment1080.setName("r_metacarpal_3")
HAnimSegment1080.setDEF("hanim_r_metacarpal_3")
Transform1081 = x3d.Transform()
Transform1081.setTranslation([-0.1972,0.806,-0.0468])
Transform1082 = x3d.Transform()
#Empty Transform
Shape1083 = x3d.Shape()
Shape1083.setUSE("HAnimJointShape")

Transform1082.addChild(Shape1083)

Transform1081.addChildren(Transform1082)

HAnimSegment1080.addChildren(Transform1081)
Shape1084 = x3d.Shape()
LineSet1085 = x3d.LineSet()
LineSet1085.setVertexCount([2])
Coordinate1086 = x3d.Coordinate()
Coordinate1086.setPoint([-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468])

LineSet1085.setCoord(Coordinate1086)
#from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA1087 = x3d.ColorRGBA()
ColorRGBA1087.setUSE("HAnimSegmentLineColorRGBA")

LineSet1085.setColor(ColorRGBA1087)

Shape1084.setGeometry(LineSet1085)

HAnimSegment1080.addChildren(Shape1084)

HAnimJoint1079.addChildren(HAnimSegment1080)
HAnimJoint1088 = x3d.HAnimJoint()
HAnimJoint1088.setName("r_metacarpophalangeal_3")
HAnimJoint1088.setDEF("hanim_r_metacarpophalangeal_3")
HAnimJoint1088.setCenter([-0.1972,0.7849,-0.0468])
HAnimJoint1088.setUlimit([0,0,0])
HAnimJoint1088.setLlimit([0,0,0])
HAnimSegment1089 = x3d.HAnimSegment()
HAnimSegment1089.setName("r_carpal_proximal_phalanx_3")
HAnimSegment1089.setDEF("hanim_r_carpal_proximal_phalanx_3")
Transform1090 = x3d.Transform()
Transform1090.setTranslation([-0.1972,0.7849,-0.0468])
Transform1091 = x3d.Transform()
#Empty Transform
Shape1092 = x3d.Shape()
Shape1092.setUSE("HAnimJointShape")

Transform1091.addChild(Shape1092)

Transform1090.addChildren(Transform1091)

HAnimSegment1089.addChildren(Transform1090)
Shape1093 = x3d.Shape()
LineSet1094 = x3d.LineSet()
LineSet1094.setVertexCount([2])
Coordinate1095 = x3d.Coordinate()
Coordinate1095.setPoint([-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441])

LineSet1094.setCoord(Coordinate1095)
#from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA1096 = x3d.ColorRGBA()
ColorRGBA1096.setUSE("HAnimSegmentLineColorRGBA")

LineSet1094.setColor(ColorRGBA1096)

Shape1093.setGeometry(LineSet1094)

HAnimSegment1089.addChildren(Shape1093)

HAnimJoint1088.addChildren(HAnimSegment1089)
HAnimJoint1097 = x3d.HAnimJoint()
HAnimJoint1097.setName("r_carpal_proximal_interphalangeal_3")
HAnimJoint1097.setDEF("hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint1097.setCenter([-0.195,0.7304,-0.0441])
HAnimJoint1097.setUlimit([0,0,0])
HAnimJoint1097.setLlimit([0,0,0])
HAnimSegment1098 = x3d.HAnimSegment()
HAnimSegment1098.setName("r_carpal_middle_phalanx_3")
HAnimSegment1098.setDEF("hanim_r_carpal_middle_phalanx_3")
Transform1099 = x3d.Transform()
Transform1099.setTranslation([-0.195,0.7304,-0.0441])
Transform1100 = x3d.Transform()
#Empty Transform
Shape1101 = x3d.Shape()
Shape1101.setUSE("HAnimJointShape")

Transform1100.addChild(Shape1101)

Transform1099.addChildren(Transform1100)

HAnimSegment1098.addChildren(Transform1099)
Shape1102 = x3d.Shape()
LineSet1103 = x3d.LineSet()
LineSet1103.setVertexCount([2])
Coordinate1104 = x3d.Coordinate()
Coordinate1104.setPoint([-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432])

LineSet1103.setCoord(Coordinate1104)
#from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA1105 = x3d.ColorRGBA()
ColorRGBA1105.setUSE("HAnimSegmentLineColorRGBA")

LineSet1103.setColor(ColorRGBA1105)

Shape1102.setGeometry(LineSet1103)

HAnimSegment1098.addChildren(Shape1102)
HAnimSite1106 = x3d.HAnimSite()
HAnimSite1106.setName("r_carpal_distal_phalanx_3_tip")
HAnimSite1106.setDEF("hanim_r_carpal_distal_phalanx_3_tip")
TouchSensor1107 = x3d.TouchSensor()
TouchSensor1107.setDescription("HAnimSite r_carpal_distal_phalanx_3_tip")

HAnimSite1106.addChildren(TouchSensor1107)
Shape1108 = x3d.Shape()
Shape1108.setUSE("HAnimSiteShape")

HAnimSite1106.addChildren(Shape1108)

HAnimSegment1098.addChildren(HAnimSite1106)

HAnimJoint1097.addChildren(HAnimSegment1098)
HAnimJoint1109 = x3d.HAnimJoint()
HAnimJoint1109.setName("r_carpal_distal_interphalangeal_3")
HAnimJoint1109.setDEF("hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint1109.setCenter([-0.1939,0.7042,-0.0432])
HAnimJoint1109.setUlimit([0,0,0])
HAnimJoint1109.setLlimit([0,0,0])

HAnimJoint1097.addChildren(HAnimJoint1109)

HAnimJoint1088.addChildren(HAnimJoint1097)

HAnimJoint1079.addChildren(HAnimJoint1088)

HAnimJoint989.addChildren(HAnimJoint1079)
HAnimJoint1110 = x3d.HAnimJoint()
HAnimJoint1110.setName("r_carpometacarpal_4")
HAnimJoint1110.setDEF("hanim_r_carpometacarpal_4")
HAnimJoint1110.setCenter([-0.1951,0.8049,-0.0732])
HAnimJoint1110.setUlimit([0,0,0])
HAnimJoint1110.setLlimit([0,0,0])
HAnimSegment1111 = x3d.HAnimSegment()
HAnimSegment1111.setName("r_metacarpal_4")
HAnimSegment1111.setDEF("hanim_r_metacarpal_4")
Transform1112 = x3d.Transform()
Transform1112.setTranslation([-0.1951,0.8049,-0.0732])
Transform1113 = x3d.Transform()
#Empty Transform
Shape1114 = x3d.Shape()
Shape1114.setUSE("HAnimJointShape")

Transform1113.addChild(Shape1114)

Transform1112.addChildren(Transform1113)

HAnimSegment1111.addChildren(Transform1112)
Shape1115 = x3d.Shape()
LineSet1116 = x3d.LineSet()
LineSet1116.setVertexCount([2])
Coordinate1117 = x3d.Coordinate()
Coordinate1117.setPoint([-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732])

LineSet1116.setCoord(Coordinate1117)
#from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA1118 = x3d.ColorRGBA()
ColorRGBA1118.setUSE("HAnimSegmentLineColorRGBA")

LineSet1116.setColor(ColorRGBA1118)

Shape1115.setGeometry(LineSet1116)

HAnimSegment1111.addChildren(Shape1115)

HAnimJoint1110.addChildren(HAnimSegment1111)
HAnimJoint1119 = x3d.HAnimJoint()
HAnimJoint1119.setName("r_metacarpophalangeal_4")
HAnimJoint1119.setDEF("hanim_r_metacarpophalangeal_4")
HAnimJoint1119.setCenter([-0.1951,0.7845,-0.0732])
HAnimJoint1119.setUlimit([0,0,0])
HAnimJoint1119.setLlimit([0,0,0])
HAnimSegment1120 = x3d.HAnimSegment()
HAnimSegment1120.setName("r_carpal_proximal_phalanx_4")
HAnimSegment1120.setDEF("hanim_r_carpal_proximal_phalanx_4")
Transform1121 = x3d.Transform()
Transform1121.setTranslation([-0.1951,0.7845,-0.0732])
Transform1122 = x3d.Transform()
#Empty Transform
Shape1123 = x3d.Shape()
Shape1123.setUSE("HAnimJointShape")

Transform1122.addChild(Shape1123)

Transform1121.addChildren(Transform1122)

HAnimSegment1120.addChildren(Transform1121)
Shape1124 = x3d.Shape()
LineSet1125 = x3d.LineSet()
LineSet1125.setVertexCount([2])
Coordinate1126 = x3d.Coordinate()
Coordinate1126.setPoint([-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716])

LineSet1125.setCoord(Coordinate1126)
#from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA1127 = x3d.ColorRGBA()
ColorRGBA1127.setUSE("HAnimSegmentLineColorRGBA")

LineSet1125.setColor(ColorRGBA1127)

Shape1124.setGeometry(LineSet1125)

HAnimSegment1120.addChildren(Shape1124)

HAnimJoint1119.addChildren(HAnimSegment1120)
HAnimJoint1128 = x3d.HAnimJoint()
HAnimJoint1128.setName("r_carpal_proximal_interphalangeal_4")
HAnimJoint1128.setDEF("hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint1128.setCenter([-0.192,0.7318,-0.0716])
HAnimJoint1128.setUlimit([0,0,0])
HAnimJoint1128.setLlimit([0,0,0])
HAnimSegment1129 = x3d.HAnimSegment()
HAnimSegment1129.setName("r_carpal_middle_phalanx_4")
HAnimSegment1129.setDEF("hanim_r_carpal_middle_phalanx_4")
Transform1130 = x3d.Transform()
Transform1130.setTranslation([-0.192,0.7318,-0.0716])
Transform1131 = x3d.Transform()
#Empty Transform
Shape1132 = x3d.Shape()
Shape1132.setUSE("HAnimJointShape")

Transform1131.addChild(Shape1132)

Transform1130.addChildren(Transform1131)

HAnimSegment1129.addChildren(Transform1130)
Shape1133 = x3d.Shape()
LineSet1134 = x3d.LineSet()
LineSet1134.setVertexCount([2])
Coordinate1135 = x3d.Coordinate()
Coordinate1135.setPoint([-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706])

LineSet1134.setCoord(Coordinate1135)
#from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA1136 = x3d.ColorRGBA()
ColorRGBA1136.setUSE("HAnimSegmentLineColorRGBA")

LineSet1134.setColor(ColorRGBA1136)

Shape1133.setGeometry(LineSet1134)

HAnimSegment1129.addChildren(Shape1133)
HAnimSite1137 = x3d.HAnimSite()
HAnimSite1137.setName("r_carpal_distal_phalanx_4_tip")
HAnimSite1137.setDEF("hanim_r_carpal_distal_phalanx_4_tip")
TouchSensor1138 = x3d.TouchSensor()
TouchSensor1138.setDescription("HAnimSite r_carpal_distal_phalanx_4_tip")

HAnimSite1137.addChildren(TouchSensor1138)
Shape1139 = x3d.Shape()
Shape1139.setUSE("HAnimSiteShape")

HAnimSite1137.addChildren(Shape1139)

HAnimSegment1129.addChildren(HAnimSite1137)

HAnimJoint1128.addChildren(HAnimSegment1129)
HAnimJoint1140 = x3d.HAnimJoint()
HAnimJoint1140.setName("r_carpal_distal_interphalangeal_4")
HAnimJoint1140.setDEF("hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint1140.setCenter([-0.1908,0.7077,-0.0706])
HAnimJoint1140.setUlimit([0,0,0])
HAnimJoint1140.setLlimit([0,0,0])

HAnimJoint1128.addChildren(HAnimJoint1140)

HAnimJoint1119.addChildren(HAnimJoint1128)

HAnimJoint1110.addChildren(HAnimJoint1119)

HAnimJoint989.addChildren(HAnimJoint1110)
HAnimJoint1141 = x3d.HAnimJoint()
HAnimJoint1141.setName("r_carpometacarpal_5")
HAnimJoint1141.setDEF("hanim_r_carpometacarpal_5")
HAnimJoint1141.setCenter([-0.1926,0.8096,-0.0975])
HAnimJoint1141.setUlimit([0,0,0])
HAnimJoint1141.setLlimit([0,0,0])
HAnimSegment1142 = x3d.HAnimSegment()
HAnimSegment1142.setName("r_metacarpal_5")
HAnimSegment1142.setDEF("hanim_r_metacarpal_5")
Transform1143 = x3d.Transform()
Transform1143.setTranslation([-0.1926,0.8096,-0.0975])
Transform1144 = x3d.Transform()
#Empty Transform
Shape1145 = x3d.Shape()
Shape1145.setUSE("HAnimJointShape")

Transform1144.addChild(Shape1145)

Transform1143.addChildren(Transform1144)

HAnimSegment1142.addChildren(Transform1143)
Shape1146 = x3d.Shape()
LineSet1147 = x3d.LineSet()
LineSet1147.setVertexCount([2])
Coordinate1148 = x3d.Coordinate()
Coordinate1148.setPoint([-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975])

LineSet1147.setCoord(Coordinate1148)
#from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA1149 = x3d.ColorRGBA()
ColorRGBA1149.setUSE("HAnimSegmentLineColorRGBA")

LineSet1147.setColor(ColorRGBA1149)

Shape1146.setGeometry(LineSet1147)

HAnimSegment1142.addChildren(Shape1146)

HAnimJoint1141.addChildren(HAnimSegment1142)
HAnimJoint1150 = x3d.HAnimJoint()
HAnimJoint1150.setName("r_metacarpophalangeal_5")
HAnimJoint1150.setDEF("hanim_r_metacarpophalangeal_5")
HAnimJoint1150.setCenter([-0.1926,0.7896,-0.0975])
HAnimJoint1150.setUlimit([0,0,0])
HAnimJoint1150.setLlimit([0,0,0])
HAnimSegment1151 = x3d.HAnimSegment()
HAnimSegment1151.setName("r_carpal_proximal_phalanx_5")
HAnimSegment1151.setDEF("hanim_r_carpal_proximal_phalanx_5")
Transform1152 = x3d.Transform()
Transform1152.setTranslation([-0.1926,0.7896,-0.0975])
Transform1153 = x3d.Transform()
#Empty Transform
Shape1154 = x3d.Shape()
Shape1154.setUSE("HAnimJointShape")

Transform1153.addChild(Shape1154)

Transform1152.addChildren(Transform1153)

HAnimSegment1151.addChildren(Transform1152)
Shape1155 = x3d.Shape()
LineSet1156 = x3d.LineSet()
LineSet1156.setVertexCount([2])
Coordinate1157 = x3d.Coordinate()
Coordinate1157.setPoint([-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963])

LineSet1156.setCoord(Coordinate1157)
#from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA1158 = x3d.ColorRGBA()
ColorRGBA1158.setUSE("HAnimSegmentLineColorRGBA")

LineSet1156.setColor(ColorRGBA1158)

Shape1155.setGeometry(LineSet1156)

HAnimSegment1151.addChildren(Shape1155)

HAnimJoint1150.addChildren(HAnimSegment1151)
HAnimJoint1159 = x3d.HAnimJoint()
HAnimJoint1159.setName("r_carpal_proximal_interphalangeal_5")
HAnimJoint1159.setDEF("hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint1159.setCenter([-0.1902,0.7483,-0.0963])
HAnimJoint1159.setUlimit([0,0,0])
HAnimJoint1159.setLlimit([0,0,0])
HAnimSegment1160 = x3d.HAnimSegment()
HAnimSegment1160.setName("r_carpal_middle_phalanx_5")
HAnimSegment1160.setDEF("hanim_r_carpal_middle_phalanx_5")
Transform1161 = x3d.Transform()
Transform1161.setTranslation([-0.1902,0.7483,-0.0963])
Transform1162 = x3d.Transform()
#Empty Transform
Shape1163 = x3d.Shape()
Shape1163.setUSE("HAnimJointShape")

Transform1162.addChild(Shape1163)

Transform1161.addChildren(Transform1162)

HAnimSegment1160.addChildren(Transform1161)
Shape1164 = x3d.Shape()
LineSet1165 = x3d.LineSet()
LineSet1165.setVertexCount([2])
Coordinate1166 = x3d.Coordinate()
Coordinate1166.setPoint([-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096])

LineSet1165.setCoord(Coordinate1166)
#from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA1167 = x3d.ColorRGBA()
ColorRGBA1167.setUSE("HAnimSegmentLineColorRGBA")

LineSet1165.setColor(ColorRGBA1167)

Shape1164.setGeometry(LineSet1165)

HAnimSegment1160.addChildren(Shape1164)
HAnimSite1168 = x3d.HAnimSite()
HAnimSite1168.setName("r_carpal_distal_phalanx_5_tip")
HAnimSite1168.setDEF("hanim_r_carpal_distal_phalanx_5_tip")
TouchSensor1169 = x3d.TouchSensor()
TouchSensor1169.setDescription("HAnimSite r_carpal_distal_phalanx_5_tip")

HAnimSite1168.addChildren(TouchSensor1169)
Shape1170 = x3d.Shape()
Shape1170.setUSE("HAnimSiteShape")

HAnimSite1168.addChildren(Shape1170)

HAnimSegment1160.addChildren(HAnimSite1168)

HAnimJoint1159.addChildren(HAnimSegment1160)
HAnimJoint1171 = x3d.HAnimJoint()
HAnimJoint1171.setName("r_carpal_distal_interphalangeal_5")
HAnimJoint1171.setDEF("hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint1171.setCenter([-0.1908,0.754,-0.096])
HAnimJoint1171.setUlimit([0,0,0])
HAnimJoint1171.setLlimit([0,0,0])

HAnimJoint1159.addChildren(HAnimJoint1171)

HAnimJoint1150.addChildren(HAnimJoint1159)

HAnimJoint1141.addChildren(HAnimJoint1150)

HAnimJoint989.addChildren(HAnimJoint1141)

HAnimJoint977.addChildren(HAnimJoint989)

HAnimJoint956.addChildren(HAnimJoint977)

HAnimJoint941.addChildren(HAnimJoint956)

HAnimJoint932.addChildren(HAnimJoint941)

HAnimJoint488.addChildren(HAnimJoint932)

HAnimJoint473.addChildren(HAnimJoint488)

HAnimJoint464.addChildren(HAnimJoint473)

HAnimJoint455.addChildren(HAnimJoint464)

HAnimJoint446.addChildren(HAnimJoint455)

HAnimJoint434.addChildren(HAnimJoint446)

HAnimJoint413.addChildren(HAnimJoint434)

HAnimJoint404.addChildren(HAnimJoint413)

HAnimJoint395.addChildren(HAnimJoint404)

HAnimJoint380.addChildren(HAnimJoint395)

HAnimJoint368.addChildren(HAnimJoint380)

HAnimJoint359.addChildren(HAnimJoint368)

HAnimJoint350.addChildren(HAnimJoint359)

HAnimJoint341.addChildren(HAnimJoint350)

HAnimJoint323.addChildren(HAnimJoint341)

HAnimJoint314.addChildren(HAnimJoint323)

HAnimJoint305.addChildren(HAnimJoint314)

HAnimJoint52.addChildren(HAnimJoint305)

HAnimHumanoid43.setSkeleton(HAnimJoint52)
HAnimJoint1172 = x3d.HAnimJoint()
HAnimJoint1172.setUSE("hanim_humanoid_root")

HAnimHumanoid43.addJoints(HAnimJoint1172)
HAnimJoint1173 = x3d.HAnimJoint()
HAnimJoint1173.setUSE("hanim_sacroiliac")

HAnimHumanoid43.addJoints(HAnimJoint1173)
HAnimJoint1174 = x3d.HAnimJoint()
HAnimJoint1174.setUSE("hanim_l_hip")

HAnimHumanoid43.addJoints(HAnimJoint1174)
HAnimJoint1175 = x3d.HAnimJoint()
HAnimJoint1175.setUSE("hanim_l_knee")

HAnimHumanoid43.addJoints(HAnimJoint1175)
HAnimJoint1176 = x3d.HAnimJoint()
HAnimJoint1176.setUSE("hanim_l_talocrural")

HAnimHumanoid43.addJoints(HAnimJoint1176)
HAnimJoint1177 = x3d.HAnimJoint()
HAnimJoint1177.setUSE("hanim_l_tarsometatarsal_2")

HAnimHumanoid43.addJoints(HAnimJoint1177)
HAnimJoint1178 = x3d.HAnimJoint()
HAnimJoint1178.setUSE("hanim_l_metatarsophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1178)
HAnimJoint1179 = x3d.HAnimJoint()
HAnimJoint1179.setUSE("hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1179)
HAnimJoint1180 = x3d.HAnimJoint()
HAnimJoint1180.setUSE("hanim_r_hip")

HAnimHumanoid43.addJoints(HAnimJoint1180)
HAnimJoint1181 = x3d.HAnimJoint()
HAnimJoint1181.setUSE("hanim_r_knee")

HAnimHumanoid43.addJoints(HAnimJoint1181)
HAnimJoint1182 = x3d.HAnimJoint()
HAnimJoint1182.setUSE("hanim_r_talocrural")

HAnimHumanoid43.addJoints(HAnimJoint1182)
HAnimJoint1183 = x3d.HAnimJoint()
HAnimJoint1183.setUSE("hanim_r_tarsometatarsal_2")

HAnimHumanoid43.addJoints(HAnimJoint1183)
HAnimJoint1184 = x3d.HAnimJoint()
HAnimJoint1184.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1184)
HAnimJoint1185 = x3d.HAnimJoint()
HAnimJoint1185.setUSE("hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1185)
HAnimJoint1186 = x3d.HAnimJoint()
HAnimJoint1186.setUSE("hanim_vl5")

HAnimHumanoid43.addJoints(HAnimJoint1186)
HAnimJoint1187 = x3d.HAnimJoint()
HAnimJoint1187.setUSE("hanim_vl4")

HAnimHumanoid43.addJoints(HAnimJoint1187)
HAnimJoint1188 = x3d.HAnimJoint()
HAnimJoint1188.setUSE("hanim_vl3")

HAnimHumanoid43.addJoints(HAnimJoint1188)
HAnimJoint1189 = x3d.HAnimJoint()
HAnimJoint1189.setUSE("hanim_vl2")

HAnimHumanoid43.addJoints(HAnimJoint1189)
HAnimJoint1190 = x3d.HAnimJoint()
HAnimJoint1190.setUSE("hanim_vl1")

HAnimHumanoid43.addJoints(HAnimJoint1190)
HAnimJoint1191 = x3d.HAnimJoint()
HAnimJoint1191.setUSE("hanim_vt12")

HAnimHumanoid43.addJoints(HAnimJoint1191)
HAnimJoint1192 = x3d.HAnimJoint()
HAnimJoint1192.setUSE("hanim_vt11")

HAnimHumanoid43.addJoints(HAnimJoint1192)
HAnimJoint1193 = x3d.HAnimJoint()
HAnimJoint1193.setUSE("hanim_vt10")

HAnimHumanoid43.addJoints(HAnimJoint1193)
HAnimJoint1194 = x3d.HAnimJoint()
HAnimJoint1194.setUSE("hanim_vt9")

HAnimHumanoid43.addJoints(HAnimJoint1194)
HAnimJoint1195 = x3d.HAnimJoint()
HAnimJoint1195.setUSE("hanim_vt8")

HAnimHumanoid43.addJoints(HAnimJoint1195)
HAnimJoint1196 = x3d.HAnimJoint()
HAnimJoint1196.setUSE("hanim_vt7")

HAnimHumanoid43.addJoints(HAnimJoint1196)
HAnimJoint1197 = x3d.HAnimJoint()
HAnimJoint1197.setUSE("hanim_vt6")

HAnimHumanoid43.addJoints(HAnimJoint1197)
HAnimJoint1198 = x3d.HAnimJoint()
HAnimJoint1198.setUSE("hanim_vt5")

HAnimHumanoid43.addJoints(HAnimJoint1198)
HAnimJoint1199 = x3d.HAnimJoint()
HAnimJoint1199.setUSE("hanim_vt4")

HAnimHumanoid43.addJoints(HAnimJoint1199)
HAnimJoint1200 = x3d.HAnimJoint()
HAnimJoint1200.setUSE("hanim_vt3")

HAnimHumanoid43.addJoints(HAnimJoint1200)
HAnimJoint1201 = x3d.HAnimJoint()
HAnimJoint1201.setUSE("hanim_vt2")

HAnimHumanoid43.addJoints(HAnimJoint1201)
HAnimJoint1202 = x3d.HAnimJoint()
HAnimJoint1202.setUSE("hanim_vt1")

HAnimHumanoid43.addJoints(HAnimJoint1202)
HAnimJoint1203 = x3d.HAnimJoint()
HAnimJoint1203.setUSE("hanim_vc7")

HAnimHumanoid43.addJoints(HAnimJoint1203)
HAnimJoint1204 = x3d.HAnimJoint()
HAnimJoint1204.setUSE("hanim_vc6")

HAnimHumanoid43.addJoints(HAnimJoint1204)
HAnimJoint1205 = x3d.HAnimJoint()
HAnimJoint1205.setUSE("hanim_vc5")

HAnimHumanoid43.addJoints(HAnimJoint1205)
HAnimJoint1206 = x3d.HAnimJoint()
HAnimJoint1206.setUSE("hanim_vc4")

HAnimHumanoid43.addJoints(HAnimJoint1206)
HAnimJoint1207 = x3d.HAnimJoint()
HAnimJoint1207.setUSE("hanim_vc3")

HAnimHumanoid43.addJoints(HAnimJoint1207)
HAnimJoint1208 = x3d.HAnimJoint()
HAnimJoint1208.setUSE("hanim_vc2")

HAnimHumanoid43.addJoints(HAnimJoint1208)
HAnimJoint1209 = x3d.HAnimJoint()
HAnimJoint1209.setUSE("hanim_vc1")

HAnimHumanoid43.addJoints(HAnimJoint1209)
HAnimJoint1210 = x3d.HAnimJoint()
HAnimJoint1210.setUSE("hanim_skullbase")

HAnimHumanoid43.addJoints(HAnimJoint1210)
HAnimJoint1211 = x3d.HAnimJoint()
HAnimJoint1211.setUSE("hanim_l_eyelid_joint")

HAnimHumanoid43.addJoints(HAnimJoint1211)
HAnimJoint1212 = x3d.HAnimJoint()
HAnimJoint1212.setUSE("hanim_r_eyelid_joint")

HAnimHumanoid43.addJoints(HAnimJoint1212)
HAnimJoint1213 = x3d.HAnimJoint()
HAnimJoint1213.setUSE("hanim_l_eyeball_joint")

HAnimHumanoid43.addJoints(HAnimJoint1213)
HAnimJoint1214 = x3d.HAnimJoint()
HAnimJoint1214.setUSE("hanim_r_eyeball_joint")

HAnimHumanoid43.addJoints(HAnimJoint1214)
HAnimJoint1215 = x3d.HAnimJoint()
HAnimJoint1215.setUSE("hanim_l_eyebrow_joint")

HAnimHumanoid43.addJoints(HAnimJoint1215)
HAnimJoint1216 = x3d.HAnimJoint()
HAnimJoint1216.setUSE("hanim_r_eyebrow_joint")

HAnimHumanoid43.addJoints(HAnimJoint1216)
HAnimJoint1217 = x3d.HAnimJoint()
HAnimJoint1217.setUSE("hanim_temporomandibular")

HAnimHumanoid43.addJoints(HAnimJoint1217)
HAnimJoint1218 = x3d.HAnimJoint()
HAnimJoint1218.setUSE("hanim_l_sternoclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1218)
HAnimJoint1219 = x3d.HAnimJoint()
HAnimJoint1219.setUSE("hanim_l_acromioclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1219)
HAnimJoint1220 = x3d.HAnimJoint()
HAnimJoint1220.setUSE("hanim_l_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint1220)
HAnimJoint1221 = x3d.HAnimJoint()
HAnimJoint1221.setUSE("hanim_l_elbow")

HAnimHumanoid43.addJoints(HAnimJoint1221)
HAnimJoint1222 = x3d.HAnimJoint()
HAnimJoint1222.setUSE("hanim_l_radiocarpal")

HAnimHumanoid43.addJoints(HAnimJoint1222)
HAnimJoint1223 = x3d.HAnimJoint()
HAnimJoint1223.setUSE("hanim_l_carpometacarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1223)
HAnimJoint1224 = x3d.HAnimJoint()
HAnimJoint1224.setUSE("hanim_l_metacarpophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1224)
HAnimJoint1225 = x3d.HAnimJoint()
HAnimJoint1225.setUSE("hanim_l_carpal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1225)
HAnimJoint1226 = x3d.HAnimJoint()
HAnimJoint1226.setUSE("hanim_l_carpometacarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1226)
HAnimJoint1227 = x3d.HAnimJoint()
HAnimJoint1227.setUSE("hanim_l_metacarpophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1227)
HAnimJoint1228 = x3d.HAnimJoint()
HAnimJoint1228.setUSE("hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1228)
HAnimJoint1229 = x3d.HAnimJoint()
HAnimJoint1229.setUSE("hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1229)
HAnimJoint1230 = x3d.HAnimJoint()
HAnimJoint1230.setUSE("hanim_l_carpometacarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1230)
HAnimJoint1231 = x3d.HAnimJoint()
HAnimJoint1231.setUSE("hanim_l_metacarpophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1231)
HAnimJoint1232 = x3d.HAnimJoint()
HAnimJoint1232.setUSE("hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1232)
HAnimJoint1233 = x3d.HAnimJoint()
HAnimJoint1233.setUSE("hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1233)
HAnimJoint1234 = x3d.HAnimJoint()
HAnimJoint1234.setUSE("hanim_l_carpometacarpal_4")

HAnimHumanoid43.addJoints(HAnimJoint1234)
HAnimJoint1235 = x3d.HAnimJoint()
HAnimJoint1235.setUSE("hanim_l_metacarpophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1235)
HAnimJoint1236 = x3d.HAnimJoint()
HAnimJoint1236.setUSE("hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1236)
HAnimJoint1237 = x3d.HAnimJoint()
HAnimJoint1237.setUSE("hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1237)
HAnimJoint1238 = x3d.HAnimJoint()
HAnimJoint1238.setUSE("hanim_l_carpometacarpal_5")

HAnimHumanoid43.addJoints(HAnimJoint1238)
HAnimJoint1239 = x3d.HAnimJoint()
HAnimJoint1239.setUSE("hanim_l_metacarpophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1239)
HAnimJoint1240 = x3d.HAnimJoint()
HAnimJoint1240.setUSE("hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1240)
HAnimJoint1241 = x3d.HAnimJoint()
HAnimJoint1241.setUSE("hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1241)
HAnimJoint1242 = x3d.HAnimJoint()
HAnimJoint1242.setUSE("hanim_r_sternoclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1242)
HAnimJoint1243 = x3d.HAnimJoint()
HAnimJoint1243.setUSE("hanim_r_acromioclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1243)
HAnimJoint1244 = x3d.HAnimJoint()
HAnimJoint1244.setUSE("hanim_r_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint1244)
HAnimJoint1245 = x3d.HAnimJoint()
HAnimJoint1245.setUSE("hanim_r_elbow")

HAnimHumanoid43.addJoints(HAnimJoint1245)
HAnimJoint1246 = x3d.HAnimJoint()
HAnimJoint1246.setUSE("hanim_r_radiocarpal")

HAnimHumanoid43.addJoints(HAnimJoint1246)
HAnimJoint1247 = x3d.HAnimJoint()
HAnimJoint1247.setUSE("hanim_r_carpometacarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1247)
HAnimJoint1248 = x3d.HAnimJoint()
HAnimJoint1248.setUSE("hanim_r_metacarpophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1248)
HAnimJoint1249 = x3d.HAnimJoint()
HAnimJoint1249.setUSE("hanim_r_carpal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1249)
HAnimJoint1250 = x3d.HAnimJoint()
HAnimJoint1250.setUSE("hanim_r_carpometacarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1250)
HAnimJoint1251 = x3d.HAnimJoint()
HAnimJoint1251.setUSE("hanim_r_metacarpophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1251)
HAnimJoint1252 = x3d.HAnimJoint()
HAnimJoint1252.setUSE("hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1252)
HAnimJoint1253 = x3d.HAnimJoint()
HAnimJoint1253.setUSE("hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1253)
HAnimJoint1254 = x3d.HAnimJoint()
HAnimJoint1254.setUSE("hanim_r_carpometacarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1254)
HAnimJoint1255 = x3d.HAnimJoint()
HAnimJoint1255.setUSE("hanim_r_metacarpophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1255)
HAnimJoint1256 = x3d.HAnimJoint()
HAnimJoint1256.setUSE("hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1256)
HAnimJoint1257 = x3d.HAnimJoint()
HAnimJoint1257.setUSE("hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1257)
HAnimJoint1258 = x3d.HAnimJoint()
HAnimJoint1258.setUSE("hanim_r_carpometacarpal_4")

HAnimHumanoid43.addJoints(HAnimJoint1258)
HAnimJoint1259 = x3d.HAnimJoint()
HAnimJoint1259.setUSE("hanim_r_metacarpophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1259)
HAnimJoint1260 = x3d.HAnimJoint()
HAnimJoint1260.setUSE("hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1260)
HAnimJoint1261 = x3d.HAnimJoint()
HAnimJoint1261.setUSE("hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1261)
HAnimJoint1262 = x3d.HAnimJoint()
HAnimJoint1262.setUSE("hanim_r_carpometacarpal_5")

HAnimHumanoid43.addJoints(HAnimJoint1262)
HAnimJoint1263 = x3d.HAnimJoint()
HAnimJoint1263.setUSE("hanim_r_metacarpophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1263)
HAnimJoint1264 = x3d.HAnimJoint()
HAnimJoint1264.setUSE("hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1264)
HAnimJoint1265 = x3d.HAnimJoint()
HAnimJoint1265.setUSE("hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1265)
HAnimSegment1266 = x3d.HAnimSegment()
HAnimSegment1266.setUSE("hanim_sacrum")

HAnimHumanoid43.setSegments(HAnimSegment1266)
HAnimSegment1267 = x3d.HAnimSegment()
HAnimSegment1267.setUSE("hanim_pelvis")

HAnimHumanoid43.setSegments(HAnimSegment1267)
HAnimSegment1268 = x3d.HAnimSegment()
HAnimSegment1268.setUSE("hanim_l_thigh")

HAnimHumanoid43.setSegments(HAnimSegment1268)
HAnimSegment1269 = x3d.HAnimSegment()
HAnimSegment1269.setUSE("hanim_l_calf")

HAnimHumanoid43.setSegments(HAnimSegment1269)
HAnimSegment1270 = x3d.HAnimSegment()
HAnimSegment1270.setUSE("hanim_l_talus")

HAnimHumanoid43.setSegments(HAnimSegment1270)
HAnimSegment1271 = x3d.HAnimSegment()
HAnimSegment1271.setUSE("hanim_l_metatarsal_2")

HAnimHumanoid43.setSegments(HAnimSegment1271)
HAnimSegment1272 = x3d.HAnimSegment()
HAnimSegment1272.setUSE("hanim_l_tarsal_proximal_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1272)
HAnimSegment1273 = x3d.HAnimSegment()
HAnimSegment1273.setUSE("hanim_r_thigh")

HAnimHumanoid43.setSegments(HAnimSegment1273)
HAnimSegment1274 = x3d.HAnimSegment()
HAnimSegment1274.setUSE("hanim_r_calf")

HAnimHumanoid43.setSegments(HAnimSegment1274)
HAnimSegment1275 = x3d.HAnimSegment()
HAnimSegment1275.setUSE("hanim_r_talus")

HAnimHumanoid43.setSegments(HAnimSegment1275)
HAnimSegment1276 = x3d.HAnimSegment()
HAnimSegment1276.setUSE("hanim_r_metatarsal_2")

HAnimHumanoid43.setSegments(HAnimSegment1276)
HAnimSegment1277 = x3d.HAnimSegment()
HAnimSegment1277.setUSE("hanim_r_tarsal_proximal_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1277)
HAnimSegment1278 = x3d.HAnimSegment()
HAnimSegment1278.setUSE("hanim_l5")

HAnimHumanoid43.setSegments(HAnimSegment1278)
HAnimSegment1279 = x3d.HAnimSegment()
HAnimSegment1279.setUSE("hanim_l4")

HAnimHumanoid43.setSegments(HAnimSegment1279)
HAnimSegment1280 = x3d.HAnimSegment()
HAnimSegment1280.setUSE("hanim_l3")

HAnimHumanoid43.setSegments(HAnimSegment1280)
HAnimSegment1281 = x3d.HAnimSegment()
HAnimSegment1281.setUSE("hanim_l2")

HAnimHumanoid43.setSegments(HAnimSegment1281)
HAnimSegment1282 = x3d.HAnimSegment()
HAnimSegment1282.setUSE("hanim_l1")

HAnimHumanoid43.setSegments(HAnimSegment1282)
HAnimSegment1283 = x3d.HAnimSegment()
HAnimSegment1283.setUSE("hanim_t12")

HAnimHumanoid43.setSegments(HAnimSegment1283)
HAnimSegment1284 = x3d.HAnimSegment()
HAnimSegment1284.setUSE("hanim_t11")

HAnimHumanoid43.setSegments(HAnimSegment1284)
HAnimSegment1285 = x3d.HAnimSegment()
HAnimSegment1285.setUSE("hanim_t10")

HAnimHumanoid43.setSegments(HAnimSegment1285)
HAnimSegment1286 = x3d.HAnimSegment()
HAnimSegment1286.setUSE("hanim_t9")

HAnimHumanoid43.setSegments(HAnimSegment1286)
HAnimSegment1287 = x3d.HAnimSegment()
HAnimSegment1287.setUSE("hanim_t8")

HAnimHumanoid43.setSegments(HAnimSegment1287)
HAnimSegment1288 = x3d.HAnimSegment()
HAnimSegment1288.setUSE("hanim_t7")

HAnimHumanoid43.setSegments(HAnimSegment1288)
HAnimSegment1289 = x3d.HAnimSegment()
HAnimSegment1289.setUSE("hanim_t6")

HAnimHumanoid43.setSegments(HAnimSegment1289)
HAnimSegment1290 = x3d.HAnimSegment()
HAnimSegment1290.setUSE("hanim_t5")

HAnimHumanoid43.setSegments(HAnimSegment1290)
HAnimSegment1291 = x3d.HAnimSegment()
HAnimSegment1291.setUSE("hanim_t4")

HAnimHumanoid43.setSegments(HAnimSegment1291)
HAnimSegment1292 = x3d.HAnimSegment()
HAnimSegment1292.setUSE("hanim_t3")

HAnimHumanoid43.setSegments(HAnimSegment1292)
HAnimSegment1293 = x3d.HAnimSegment()
HAnimSegment1293.setUSE("hanim_t2")

HAnimHumanoid43.setSegments(HAnimSegment1293)
HAnimSegment1294 = x3d.HAnimSegment()
HAnimSegment1294.setUSE("hanim_t1")

HAnimHumanoid43.setSegments(HAnimSegment1294)
HAnimSegment1295 = x3d.HAnimSegment()
HAnimSegment1295.setUSE("hanim_c7")

HAnimHumanoid43.setSegments(HAnimSegment1295)
HAnimSegment1296 = x3d.HAnimSegment()
HAnimSegment1296.setUSE("hanim_c6")

HAnimHumanoid43.setSegments(HAnimSegment1296)
HAnimSegment1297 = x3d.HAnimSegment()
HAnimSegment1297.setUSE("hanim_c5")

HAnimHumanoid43.setSegments(HAnimSegment1297)
HAnimSegment1298 = x3d.HAnimSegment()
HAnimSegment1298.setUSE("hanim_c4")

HAnimHumanoid43.setSegments(HAnimSegment1298)
HAnimSegment1299 = x3d.HAnimSegment()
HAnimSegment1299.setUSE("hanim_c3")

HAnimHumanoid43.setSegments(HAnimSegment1299)
HAnimSegment1300 = x3d.HAnimSegment()
HAnimSegment1300.setUSE("hanim_c2")

HAnimHumanoid43.setSegments(HAnimSegment1300)
HAnimSegment1301 = x3d.HAnimSegment()
HAnimSegment1301.setUSE("hanim_c1")

HAnimHumanoid43.setSegments(HAnimSegment1301)
HAnimSegment1302 = x3d.HAnimSegment()
HAnimSegment1302.setUSE("hanim_skull")

HAnimHumanoid43.setSegments(HAnimSegment1302)
HAnimSegment1303 = x3d.HAnimSegment()
HAnimSegment1303.setUSE("hanim_l_clavicle")

HAnimHumanoid43.setSegments(HAnimSegment1303)
HAnimSegment1304 = x3d.HAnimSegment()
HAnimSegment1304.setUSE("hanim_l_scapula")

HAnimHumanoid43.setSegments(HAnimSegment1304)
HAnimSegment1305 = x3d.HAnimSegment()
HAnimSegment1305.setUSE("hanim_l_upperarm")

HAnimHumanoid43.setSegments(HAnimSegment1305)
HAnimSegment1306 = x3d.HAnimSegment()
HAnimSegment1306.setUSE("hanim_l_forearm")

HAnimHumanoid43.setSegments(HAnimSegment1306)
HAnimSegment1307 = x3d.HAnimSegment()
HAnimSegment1307.setUSE("hanim_l_carpal")

HAnimHumanoid43.setSegments(HAnimSegment1307)
HAnimSegment1308 = x3d.HAnimSegment()
HAnimSegment1308.setUSE("hanim_l_metacarpal_1")

HAnimHumanoid43.setSegments(HAnimSegment1308)
HAnimSegment1309 = x3d.HAnimSegment()
HAnimSegment1309.setUSE("hanim_l_carpal_proximal_phalanx_1")

HAnimHumanoid43.setSegments(HAnimSegment1309)
HAnimSegment1310 = x3d.HAnimSegment()
HAnimSegment1310.setUSE("hanim_l_metacarpal_2")

HAnimHumanoid43.setSegments(HAnimSegment1310)
HAnimSegment1311 = x3d.HAnimSegment()
HAnimSegment1311.setUSE("hanim_l_carpal_proximal_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1311)
HAnimSegment1312 = x3d.HAnimSegment()
HAnimSegment1312.setUSE("hanim_l_carpal_middle_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1312)
HAnimSegment1313 = x3d.HAnimSegment()
HAnimSegment1313.setUSE("hanim_l_metacarpal_3")

HAnimHumanoid43.setSegments(HAnimSegment1313)
HAnimSegment1314 = x3d.HAnimSegment()
HAnimSegment1314.setUSE("hanim_l_carpal_proximal_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1314)
HAnimSegment1315 = x3d.HAnimSegment()
HAnimSegment1315.setUSE("hanim_l_carpal_middle_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1315)
HAnimSegment1316 = x3d.HAnimSegment()
HAnimSegment1316.setUSE("hanim_l_metacarpal_4")

HAnimHumanoid43.setSegments(HAnimSegment1316)
HAnimSegment1317 = x3d.HAnimSegment()
HAnimSegment1317.setUSE("hanim_l_carpal_proximal_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1317)
HAnimSegment1318 = x3d.HAnimSegment()
HAnimSegment1318.setUSE("hanim_l_carpal_middle_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1318)
HAnimSegment1319 = x3d.HAnimSegment()
HAnimSegment1319.setUSE("hanim_l_metacarpal_5")

HAnimHumanoid43.setSegments(HAnimSegment1319)
HAnimSegment1320 = x3d.HAnimSegment()
HAnimSegment1320.setUSE("hanim_l_carpal_proximal_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1320)
HAnimSegment1321 = x3d.HAnimSegment()
HAnimSegment1321.setUSE("hanim_l_carpal_middle_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1321)
HAnimSegment1322 = x3d.HAnimSegment()
HAnimSegment1322.setUSE("hanim_r_clavicle")

HAnimHumanoid43.setSegments(HAnimSegment1322)
HAnimSegment1323 = x3d.HAnimSegment()
HAnimSegment1323.setUSE("hanim_r_scapula")

HAnimHumanoid43.setSegments(HAnimSegment1323)
HAnimSegment1324 = x3d.HAnimSegment()
HAnimSegment1324.setUSE("hanim_r_upperarm")

HAnimHumanoid43.setSegments(HAnimSegment1324)
HAnimSegment1325 = x3d.HAnimSegment()
HAnimSegment1325.setUSE("hanim_r_forearm")

HAnimHumanoid43.setSegments(HAnimSegment1325)
HAnimSegment1326 = x3d.HAnimSegment()
HAnimSegment1326.setUSE("hanim_r_carpal")

HAnimHumanoid43.setSegments(HAnimSegment1326)
HAnimSegment1327 = x3d.HAnimSegment()
HAnimSegment1327.setUSE("hanim_r_metacarpal_1")

HAnimHumanoid43.setSegments(HAnimSegment1327)
HAnimSegment1328 = x3d.HAnimSegment()
HAnimSegment1328.setUSE("hanim_r_carpal_proximal_phalanx_1")

HAnimHumanoid43.setSegments(HAnimSegment1328)
HAnimSegment1329 = x3d.HAnimSegment()
HAnimSegment1329.setUSE("hanim_r_metacarpal_2")

HAnimHumanoid43.setSegments(HAnimSegment1329)
HAnimSegment1330 = x3d.HAnimSegment()
HAnimSegment1330.setUSE("hanim_r_carpal_proximal_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1330)
HAnimSegment1331 = x3d.HAnimSegment()
HAnimSegment1331.setUSE("hanim_r_carpal_middle_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1331)
HAnimSegment1332 = x3d.HAnimSegment()
HAnimSegment1332.setUSE("hanim_r_metacarpal_3")

HAnimHumanoid43.setSegments(HAnimSegment1332)
HAnimSegment1333 = x3d.HAnimSegment()
HAnimSegment1333.setUSE("hanim_r_carpal_proximal_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1333)
HAnimSegment1334 = x3d.HAnimSegment()
HAnimSegment1334.setUSE("hanim_r_carpal_middle_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1334)
HAnimSegment1335 = x3d.HAnimSegment()
HAnimSegment1335.setUSE("hanim_r_metacarpal_4")

HAnimHumanoid43.setSegments(HAnimSegment1335)
HAnimSegment1336 = x3d.HAnimSegment()
HAnimSegment1336.setUSE("hanim_r_carpal_proximal_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1336)
HAnimSegment1337 = x3d.HAnimSegment()
HAnimSegment1337.setUSE("hanim_r_carpal_middle_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1337)
HAnimSegment1338 = x3d.HAnimSegment()
HAnimSegment1338.setUSE("hanim_r_metacarpal_5")

HAnimHumanoid43.setSegments(HAnimSegment1338)
HAnimSegment1339 = x3d.HAnimSegment()
HAnimSegment1339.setUSE("hanim_r_carpal_proximal_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1339)
HAnimSegment1340 = x3d.HAnimSegment()
HAnimSegment1340.setUSE("hanim_r_carpal_middle_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1340)
HAnimSite1341 = x3d.HAnimSite()
HAnimSite1341.setUSE("hanim_buttocks_standing_wall_contact_point")

HAnimHumanoid43.setSites(HAnimSite1341)
HAnimSite1342 = x3d.HAnimSite()
HAnimSite1342.setUSE("hanim_crotch")

HAnimHumanoid43.setSites(HAnimSite1342)
HAnimSite1343 = x3d.HAnimSite()
HAnimSite1343.setUSE("hanim_l_asis")

HAnimHumanoid43.setSites(HAnimSite1343)
HAnimSite1344 = x3d.HAnimSite()
HAnimSite1344.setUSE("hanim_l_iliocristale")

HAnimHumanoid43.setSites(HAnimSite1344)
HAnimSite1345 = x3d.HAnimSite()
HAnimSite1345.setUSE("hanim_l_psis")

HAnimHumanoid43.setSites(HAnimSite1345)
HAnimSite1346 = x3d.HAnimSite()
HAnimSite1346.setUSE("hanim_l_trochanterion")

HAnimHumanoid43.setSites(HAnimSite1346)
HAnimSite1347 = x3d.HAnimSite()
HAnimSite1347.setUSE("hanim_r_asis")

HAnimHumanoid43.setSites(HAnimSite1347)
HAnimSite1348 = x3d.HAnimSite()
HAnimSite1348.setUSE("hanim_r_iliocristale")

HAnimHumanoid43.setSites(HAnimSite1348)
HAnimSite1349 = x3d.HAnimSite()
HAnimSite1349.setUSE("hanim_r_psis")

HAnimHumanoid43.setSites(HAnimSite1349)
HAnimSite1350 = x3d.HAnimSite()
HAnimSite1350.setUSE("hanim_r_trochanterion")

HAnimHumanoid43.setSites(HAnimSite1350)
HAnimSite1351 = x3d.HAnimSite()
HAnimSite1351.setUSE("hanim_navel")

HAnimHumanoid43.setSites(HAnimSite1351)
HAnimSite1352 = x3d.HAnimSite()
HAnimSite1352.setUSE("hanim_waist_preferred_anterior")

HAnimHumanoid43.setSites(HAnimSite1352)
HAnimSite1353 = x3d.HAnimSite()
HAnimSite1353.setUSE("hanim_waist_preferred_posterior")

HAnimHumanoid43.setSites(HAnimSite1353)
HAnimSite1354 = x3d.HAnimSite()
HAnimSite1354.setUSE("hanim_l_femoral_lateral_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1354)
HAnimSite1355 = x3d.HAnimSite()
HAnimSite1355.setUSE("hanim_l_femoral_medial_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1355)
HAnimSite1356 = x3d.HAnimSite()
HAnimSite1356.setUSE("hanim_l_knee_crease")

HAnimHumanoid43.setSites(HAnimSite1356)
HAnimSite1357 = x3d.HAnimSite()
HAnimSite1357.setUSE("hanim_l_suprapatella")

HAnimHumanoid43.setSites(HAnimSite1357)
HAnimSite1358 = x3d.HAnimSite()
HAnimSite1358.setUSE("hanim_r_femoral_lateral_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1358)
HAnimSite1359 = x3d.HAnimSite()
HAnimSite1359.setUSE("hanim_r_femoral_medial_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1359)
HAnimSite1360 = x3d.HAnimSite()
HAnimSite1360.setUSE("hanim_r_knee_crease")

HAnimHumanoid43.setSites(HAnimSite1360)
HAnimSite1361 = x3d.HAnimSite()
HAnimSite1361.setUSE("hanim_r_suprapatella")

HAnimHumanoid43.setSites(HAnimSite1361)
HAnimSite1362 = x3d.HAnimSite()
HAnimSite1362.setUSE("hanim_l_lateral_malleolus")

HAnimHumanoid43.setSites(HAnimSite1362)
HAnimSite1363 = x3d.HAnimSite()
HAnimSite1363.setUSE("hanim_l_medial_malleolus")

HAnimHumanoid43.setSites(HAnimSite1363)
HAnimSite1364 = x3d.HAnimSite()
HAnimSite1364.setUSE("hanim_l_tibiale")

HAnimHumanoid43.setSites(HAnimSite1364)
HAnimSite1365 = x3d.HAnimSite()
HAnimSite1365.setUSE("hanim_l_calcaneus_posterior")

HAnimHumanoid43.setSites(HAnimSite1365)
HAnimSite1366 = x3d.HAnimSite()
HAnimSite1366.setUSE("hanim_l_sphyrion")

HAnimHumanoid43.setSites(HAnimSite1366)
HAnimSite1367 = x3d.HAnimSite()
HAnimSite1367.setUSE("hanim_l_metatarsal_phalanx_1")

HAnimHumanoid43.setSites(HAnimSite1367)
HAnimSite1368 = x3d.HAnimSite()
HAnimSite1368.setUSE("hanim_l_metatarsal_phalanx_5")

HAnimHumanoid43.setSites(HAnimSite1368)
HAnimSite1369 = x3d.HAnimSite()
HAnimSite1369.setUSE("hanim_l_tarsal_distal_phalanx_1_tip")

HAnimHumanoid43.setSites(HAnimSite1369)
HAnimSite1370 = x3d.HAnimSite()
HAnimSite1370.setUSE("hanim_l_tarsal_distal_phalanx_2_tip")

HAnimHumanoid43.setSites(HAnimSite1370)
HAnimSite1371 = x3d.HAnimSite()
HAnimSite1371.setUSE("hanim_l_tarsal_distal_phalanx_3_tip")

HAnimHumanoid43.setSites(HAnimSite1371)
HAnimSite1372 = x3d.HAnimSite()
HAnimSite1372.setUSE("hanim_l_tarsal_distal_phalanx_4_tip")

HAnimHumanoid43.setSites(HAnimSite1372)
HAnimSite1373 = x3d.HAnimSite()
HAnimSite1373.setUSE("hanim_l_tarsal_distal_phalanx_5_tip")

HAnimHumanoid43.setSites(HAnimSite1373)
HAnimSite1374 = x3d.HAnimSite()
HAnimSite1374.setUSE("hanim_r_lateral_malleolus")

HAnimHumanoid43.setSites(HAnimSite1374)
HAnimSite1375 = x3d.HAnimSite()
HAnimSite1375.setUSE("hanim_r_medial_malleolus")

HAnimHumanoid43.setSites(HAnimSite1375)
HAnimSite1376 = x3d.HAnimSite()
HAnimSite1376.setUSE("hanim_r_tibiale")

HAnimHumanoid43.setSites(HAnimSite1376)
HAnimSite1377 = x3d.HAnimSite()
HAnimSite1377.setUSE("hanim_r_calcaneus_posterior")

HAnimHumanoid43.setSites(HAnimSite1377)
HAnimSite1378 = x3d.HAnimSite()
HAnimSite1378.setUSE("hanim_r_sphyrion")

HAnimHumanoid43.setSites(HAnimSite1378)
HAnimSite1379 = x3d.HAnimSite()
HAnimSite1379.setUSE("hanim_r_metatarsal_phalanx_1")

HAnimHumanoid43.setSites(HAnimSite1379)
HAnimSite1380 = x3d.HAnimSite()
HAnimSite1380.setUSE("hanim_r_metatarsal_phalanx_5")

HAnimHumanoid43.setSites(HAnimSite1380)
HAnimSite1381 = x3d.HAnimSite()
HAnimSite1381.setUSE("hanim_r_tarsal_distal_phalanx_1_tip")

HAnimHumanoid43.setSites(HAnimSite1381)
HAnimSite1382 = x3d.HAnimSite()
HAnimSite1382.setUSE("hanim_r_tarsal_distal_phalanx_2_tip")

HAnimHumanoid43.setSites(HAnimSite1382)
HAnimSite1383 = x3d.HAnimSite()
HAnimSite1383.setUSE("hanim_r_tarsal_distal_phalanx_3_tip")

HAnimHumanoid43.setSites(HAnimSite1383)
HAnimSite1384 = x3d.HAnimSite()
HAnimSite1384.setUSE("hanim_r_tarsal_distal_phalanx_4_tip")

HAnimHumanoid43.setSites(HAnimSite1384)
HAnimSite1385 = x3d.HAnimSite()
HAnimSite1385.setUSE("hanim_r_tarsal_distal_phalanx_5_tip")

HAnimHumanoid43.setSites(HAnimSite1385)
HAnimSite1386 = x3d.HAnimSite()
HAnimSite1386.setUSE("hanim_l_rib10")

HAnimHumanoid43.setSites(HAnimSite1386)
HAnimSite1387 = x3d.HAnimSite()
HAnimSite1387.setUSE("hanim_r_rib10")

HAnimHumanoid43.setSites(HAnimSite1387)
HAnimSite1388 = x3d.HAnimSite()
HAnimSite1388.setUSE("hanim_spine_2_middle_back")

HAnimHumanoid43.setSites(HAnimSite1388)
HAnimSite1389 = x3d.HAnimSite()
HAnimSite1389.setUSE("hanim_substernale")

HAnimHumanoid43.setSites(HAnimSite1389)
HAnimSite1390 = x3d.HAnimSite()
HAnimSite1390.setUSE("hanim_l_thelion")

HAnimHumanoid43.setSites(HAnimSite1390)
HAnimSite1391 = x3d.HAnimSite()
HAnimSite1391.setUSE("hanim_r_thelion")

HAnimHumanoid43.setSites(HAnimSite1391)
HAnimSite1392 = x3d.HAnimSite()
HAnimSite1392.setUSE("hanim_l_chest_midsagittal_plane")

HAnimHumanoid43.setSites(HAnimSite1392)
HAnimSite1393 = x3d.HAnimSite()
HAnimSite1393.setUSE("hanim_mesosternale")

HAnimHumanoid43.setSites(HAnimSite1393)
HAnimSite1394 = x3d.HAnimSite()
HAnimSite1394.setUSE("hanim_r_chest_midsagittal_plane")

HAnimHumanoid43.setSites(HAnimSite1394)
HAnimSite1395 = x3d.HAnimSite()
HAnimSite1395.setUSE("hanim_rear_center_midsagittal_plane")

HAnimHumanoid43.setSites(HAnimSite1395)
HAnimSite1396 = x3d.HAnimSite()
HAnimSite1396.setUSE("hanim_spine_1_middle_back")

HAnimHumanoid43.setSites(HAnimSite1396)
HAnimSite1397 = x3d.HAnimSite()
HAnimSite1397.setUSE("hanim_cervicale")

HAnimHumanoid43.setSites(HAnimSite1397)
HAnimSite1398 = x3d.HAnimSite()
HAnimSite1398.setUSE("hanim_suprasternale")

HAnimHumanoid43.setSites(HAnimSite1398)
HAnimSite1399 = x3d.HAnimSite()
HAnimSite1399.setUSE("hanim_l_neck_base")

HAnimHumanoid43.setSites(HAnimSite1399)
HAnimSite1400 = x3d.HAnimSite()
HAnimSite1400.setUSE("hanim_r_neck_base")

HAnimHumanoid43.setSites(HAnimSite1400)
HAnimSite1401 = x3d.HAnimSite()
HAnimSite1401.setUSE("hanim_l_acromion")

HAnimHumanoid43.setSites(HAnimSite1401)
HAnimSite1402 = x3d.HAnimSite()
HAnimSite1402.setUSE("hanim_l_axilla_distal_pt")

HAnimHumanoid43.setSites(HAnimSite1402)
HAnimSite1403 = x3d.HAnimSite()
HAnimSite1403.setUSE("hanim_l_axilla_posterior_folds")

HAnimHumanoid43.setSites(HAnimSite1403)
HAnimSite1404 = x3d.HAnimSite()
HAnimSite1404.setUSE("hanim_l_axilla_proximal")

HAnimHumanoid43.setSites(HAnimSite1404)
HAnimSite1405 = x3d.HAnimSite()
HAnimSite1405.setUSE("hanim_l_clavicale")

HAnimHumanoid43.setSites(HAnimSite1405)
HAnimSite1406 = x3d.HAnimSite()
HAnimSite1406.setUSE("hanim_r_acromion")

HAnimHumanoid43.setSites(HAnimSite1406)
HAnimSite1407 = x3d.HAnimSite()
HAnimSite1407.setUSE("hanim_r_axilla_distal_pt")

HAnimHumanoid43.setSites(HAnimSite1407)
HAnimSite1408 = x3d.HAnimSite()
HAnimSite1408.setUSE("hanim_r_axilla_posterior_folds")

HAnimHumanoid43.setSites(HAnimSite1408)
HAnimSite1409 = x3d.HAnimSite()
HAnimSite1409.setUSE("hanim_r_axilla_proximal")

HAnimHumanoid43.setSites(HAnimSite1409)
HAnimSite1410 = x3d.HAnimSite()
HAnimSite1410.setUSE("hanim_r_clavicale")

HAnimHumanoid43.setSites(HAnimSite1410)
HAnimSite1411 = x3d.HAnimSite()
HAnimSite1411.setUSE("hanim_adams_apple")

HAnimHumanoid43.setSites(HAnimSite1411)
HAnimSite1412 = x3d.HAnimSite()
HAnimSite1412.setUSE("hanim_glabella")

HAnimHumanoid43.setSites(HAnimSite1412)
HAnimSite1413 = x3d.HAnimSite()
HAnimSite1413.setUSE("hanim_l_ectocanthus")

HAnimHumanoid43.setSites(HAnimSite1413)
HAnimSite1414 = x3d.HAnimSite()
HAnimSite1414.setUSE("hanim_l_infraorbitale")

HAnimHumanoid43.setSites(HAnimSite1414)
HAnimSite1415 = x3d.HAnimSite()
HAnimSite1415.setUSE("hanim_l_tragion")

HAnimHumanoid43.setSites(HAnimSite1415)
HAnimSite1416 = x3d.HAnimSite()
HAnimSite1416.setUSE("hanim_nuchale")

HAnimHumanoid43.setSites(HAnimSite1416)
HAnimSite1417 = x3d.HAnimSite()
HAnimSite1417.setUSE("hanim_opisthocranion")

HAnimHumanoid43.setSites(HAnimSite1417)
HAnimSite1418 = x3d.HAnimSite()
HAnimSite1418.setUSE("hanim_r_ectocanthus")

HAnimHumanoid43.setSites(HAnimSite1418)
HAnimSite1419 = x3d.HAnimSite()
HAnimSite1419.setUSE("hanim_r_infraorbitale")

HAnimHumanoid43.setSites(HAnimSite1419)
HAnimSite1420 = x3d.HAnimSite()
HAnimSite1420.setUSE("hanim_r_tragion")

HAnimHumanoid43.setSites(HAnimSite1420)
HAnimSite1421 = x3d.HAnimSite()
HAnimSite1421.setUSE("hanim_sellion")

HAnimHumanoid43.setSites(HAnimSite1421)
HAnimSite1422 = x3d.HAnimSite()
HAnimSite1422.setUSE("hanim_skull_vertex")

HAnimHumanoid43.setSites(HAnimSite1422)
HAnimSite1423 = x3d.HAnimSite()
HAnimSite1423.setUSE("hanim_l_gonion")

HAnimHumanoid43.setSites(HAnimSite1423)
HAnimSite1424 = x3d.HAnimSite()
HAnimSite1424.setUSE("hanim_menton")

HAnimHumanoid43.setSites(HAnimSite1424)
HAnimSite1425 = x3d.HAnimSite()
HAnimSite1425.setUSE("hanim_r_gonion")

HAnimHumanoid43.setSites(HAnimSite1425)
HAnimSite1426 = x3d.HAnimSite()
HAnimSite1426.setUSE("hanim_supramenton")

HAnimHumanoid43.setSites(HAnimSite1426)
HAnimSite1427 = x3d.HAnimSite()
HAnimSite1427.setUSE("hanim_l_bideltoid")

HAnimHumanoid43.setSites(HAnimSite1427)
HAnimSite1428 = x3d.HAnimSite()
HAnimSite1428.setUSE("hanim_l_humeral_lateral_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1428)
HAnimSite1429 = x3d.HAnimSite()
HAnimSite1429.setUSE("hanim_l_humeral_medial_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1429)
HAnimSite1430 = x3d.HAnimSite()
HAnimSite1430.setUSE("hanim_l_olecranon")

HAnimHumanoid43.setSites(HAnimSite1430)
HAnimSite1431 = x3d.HAnimSite()
HAnimSite1431.setUSE("hanim_l_radial_styloid")

HAnimHumanoid43.setSites(HAnimSite1431)
HAnimSite1432 = x3d.HAnimSite()
HAnimSite1432.setUSE("hanim_l_radiale")

HAnimHumanoid43.setSites(HAnimSite1432)
HAnimSite1433 = x3d.HAnimSite()
HAnimSite1433.setUSE("hanim_l_ulnar_styloid")

HAnimHumanoid43.setSites(HAnimSite1433)
HAnimSite1434 = x3d.HAnimSite()
HAnimSite1434.setUSE("hanim_l_metacarpal_phalanx_2")

HAnimHumanoid43.setSites(HAnimSite1434)
HAnimSite1435 = x3d.HAnimSite()
HAnimSite1435.setUSE("hanim_l_metacarpal_phalanx_3")

HAnimHumanoid43.setSites(HAnimSite1435)
HAnimSite1436 = x3d.HAnimSite()
HAnimSite1436.setUSE("hanim_l_metacarpal_phalanx_5")

HAnimHumanoid43.setSites(HAnimSite1436)
HAnimSite1437 = x3d.HAnimSite()
HAnimSite1437.setUSE("hanim_l_carpal_distal_phalanx_1_tip")

HAnimHumanoid43.setSites(HAnimSite1437)
HAnimSite1438 = x3d.HAnimSite()
HAnimSite1438.setUSE("hanim_l_carpal_distal_phalanx_2_tip")

HAnimHumanoid43.setSites(HAnimSite1438)
HAnimSite1439 = x3d.HAnimSite()
HAnimSite1439.setUSE("hanim_l_dactylion")

HAnimHumanoid43.setSites(HAnimSite1439)
HAnimSite1440 = x3d.HAnimSite()
HAnimSite1440.setUSE("hanim_l_carpal_distal_phalanx_3_tip")

HAnimHumanoid43.setSites(HAnimSite1440)
HAnimSite1441 = x3d.HAnimSite()
HAnimSite1441.setUSE("hanim_l_carpal_distal_phalanx_4_tip")

HAnimHumanoid43.setSites(HAnimSite1441)
HAnimSite1442 = x3d.HAnimSite()
HAnimSite1442.setUSE("hanim_l_carpal_distal_phalanx_5_tip")

HAnimHumanoid43.setSites(HAnimSite1442)
HAnimSite1443 = x3d.HAnimSite()
HAnimSite1443.setUSE("hanim_r_bideltoid")

HAnimHumanoid43.setSites(HAnimSite1443)
HAnimSite1444 = x3d.HAnimSite()
HAnimSite1444.setUSE("hanim_r_humeral_lateral_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1444)
HAnimSite1445 = x3d.HAnimSite()
HAnimSite1445.setUSE("hanim_r_humeral_medial_epicondyles")

HAnimHumanoid43.setSites(HAnimSite1445)
HAnimSite1446 = x3d.HAnimSite()
HAnimSite1446.setUSE("hanim_r_olecranon")

HAnimHumanoid43.setSites(HAnimSite1446)
HAnimSite1447 = x3d.HAnimSite()
HAnimSite1447.setUSE("hanim_r_radial_styloid")

HAnimHumanoid43.setSites(HAnimSite1447)
HAnimSite1448 = x3d.HAnimSite()
HAnimSite1448.setUSE("hanim_r_radiale")

HAnimHumanoid43.setSites(HAnimSite1448)
HAnimSite1449 = x3d.HAnimSite()
HAnimSite1449.setUSE("hanim_r_ulnar_styloid")

HAnimHumanoid43.setSites(HAnimSite1449)
HAnimSite1450 = x3d.HAnimSite()
HAnimSite1450.setUSE("hanim_r_metacarpal_phalanx_2")

HAnimHumanoid43.setSites(HAnimSite1450)
HAnimSite1451 = x3d.HAnimSite()
HAnimSite1451.setUSE("hanim_r_metacarpal_phalanx_3")

HAnimHumanoid43.setSites(HAnimSite1451)
HAnimSite1452 = x3d.HAnimSite()
HAnimSite1452.setUSE("hanim_r_metacarpal_phalanx_5")

HAnimHumanoid43.setSites(HAnimSite1452)
HAnimSite1453 = x3d.HAnimSite()
HAnimSite1453.setUSE("hanim_r_carpal_distal_phalanx_1_tip")

HAnimHumanoid43.setSites(HAnimSite1453)
HAnimSite1454 = x3d.HAnimSite()
HAnimSite1454.setUSE("hanim_r_carpal_distal_phalanx_2_tip")

HAnimHumanoid43.setSites(HAnimSite1454)
HAnimSite1455 = x3d.HAnimSite()
HAnimSite1455.setUSE("hanim_r_dactylion")

HAnimHumanoid43.setSites(HAnimSite1455)
HAnimSite1456 = x3d.HAnimSite()
HAnimSite1456.setUSE("hanim_r_carpal_distal_phalanx_3_tip")

HAnimHumanoid43.setSites(HAnimSite1456)
HAnimSite1457 = x3d.HAnimSite()
HAnimSite1457.setUSE("hanim_r_carpal_distal_phalanx_4_tip")

HAnimHumanoid43.setSites(HAnimSite1457)
HAnimSite1458 = x3d.HAnimSite()
HAnimSite1458.setUSE("hanim_r_carpal_distal_phalanx_5_tip")

HAnimHumanoid43.setSites(HAnimSite1458)

Scene11.addChildren(HAnimHumanoid43)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/Humanoid3.new.python.x3d")
X3D0.toFileJSON("../data/Humanoid3.new.python.json")
