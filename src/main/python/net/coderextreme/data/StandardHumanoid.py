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
meta3.setContent("StandardHumanoid.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("identifier")
meta4.setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/StandardHumanoid.x3d")

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
Shape61 = x3d.Shape()
LineSet62 = x3d.LineSet()
LineSet62.setVertexCount([2])
Coordinate63 = x3d.Coordinate()
Coordinate63.setPoint([0,0.824,0.0277,0.0028,1.0568,-0.0776])

LineSet62.setCoord(Coordinate63)
#from humanoid_root to vl5 vertices 2
ColorRGBA64 = x3d.ColorRGBA()
ColorRGBA64.setUSE("HAnimSegmentLineColorRGBA")

LineSet62.setColor(ColorRGBA64)

Shape61.setGeometry(LineSet62)

HAnimSegment53.addChildren(Shape61)

HAnimJoint52.addChildren(HAnimSegment53)
HAnimJoint65 = x3d.HAnimJoint()
HAnimJoint65.setName("sacroiliac")
HAnimJoint65.setDEF("hanim_sacroiliac")
HAnimJoint65.setCenter([0,0.9149,0.0016])
HAnimSegment66 = x3d.HAnimSegment()
HAnimSegment66.setName("pelvis")
HAnimSegment66.setDEF("hanim_pelvis")
Transform67 = x3d.Transform()
Transform67.setTranslation([0,0.9149,0.0016])
Transform68 = x3d.Transform()
#Empty Transform
Shape69 = x3d.Shape()
Shape69.setUSE("HAnimJointShape")

Transform68.addChild(Shape69)

Transform67.addChildren(Transform68)

HAnimSegment66.addChildren(Transform67)
Shape70 = x3d.Shape()
LineSet71 = x3d.LineSet()
LineSet71.setVertexCount([2])
Coordinate72 = x3d.Coordinate()
Coordinate72.setPoint([0,0.9149,0.0016,0.0961,0.9124,-0.0001])

LineSet71.setCoord(Coordinate72)
#from sacroiliac to l_hip vertices 2
ColorRGBA73 = x3d.ColorRGBA()
ColorRGBA73.setUSE("HAnimSegmentLineColorRGBA")

LineSet71.setColor(ColorRGBA73)

Shape70.setGeometry(LineSet71)

HAnimSegment66.addChildren(Shape70)
Shape74 = x3d.Shape()
LineSet75 = x3d.LineSet()
LineSet75.setVertexCount([2])
Coordinate76 = x3d.Coordinate()
Coordinate76.setPoint([0,0.9149,0.0016,-0.095,0.9171,0.0029])

LineSet75.setCoord(Coordinate76)
#from sacroiliac to r_hip vertices 2
ColorRGBA77 = x3d.ColorRGBA()
ColorRGBA77.setUSE("HAnimSegmentLineColorRGBA")

LineSet75.setColor(ColorRGBA77)

Shape74.setGeometry(LineSet75)

HAnimSegment66.addChildren(Shape74)

HAnimJoint65.addChildren(HAnimSegment66)
HAnimJoint78 = x3d.HAnimJoint()
HAnimJoint78.setName("l_hip")
HAnimJoint78.setDEF("hanim_l_hip")
HAnimJoint78.setCenter([0.0961,0.9124,-0.0001])
HAnimSegment79 = x3d.HAnimSegment()
HAnimSegment79.setName("l_thigh")
HAnimSegment79.setDEF("hanim_l_thigh")
Transform80 = x3d.Transform()
Transform80.setTranslation([0.0961,0.9124,-0.0001])
Transform81 = x3d.Transform()
#Empty Transform
Shape82 = x3d.Shape()
Shape82.setUSE("HAnimJointShape")

Transform81.addChild(Shape82)

Transform80.addChildren(Transform81)

HAnimSegment79.addChildren(Transform80)
Shape83 = x3d.Shape()
LineSet84 = x3d.LineSet()
LineSet84.setVertexCount([2])
Coordinate85 = x3d.Coordinate()
Coordinate85.setPoint([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308])

LineSet84.setCoord(Coordinate85)
#from l_hip to l_knee vertices 2
ColorRGBA86 = x3d.ColorRGBA()
ColorRGBA86.setUSE("HAnimSegmentLineColorRGBA")

LineSet84.setColor(ColorRGBA86)

Shape83.setGeometry(LineSet84)

HAnimSegment79.addChildren(Shape83)

HAnimJoint78.addChildren(HAnimSegment79)
HAnimJoint87 = x3d.HAnimJoint()
HAnimJoint87.setName("l_knee")
HAnimJoint87.setDEF("hanim_l_knee")
HAnimJoint87.setCenter([0.104,0.4867,0.0308])
HAnimSegment88 = x3d.HAnimSegment()
HAnimSegment88.setName("l_calf")
HAnimSegment88.setDEF("hanim_l_calf")
Transform89 = x3d.Transform()
Transform89.setTranslation([0.104,0.4867,0.0308])
Transform90 = x3d.Transform()
#Empty Transform
Shape91 = x3d.Shape()
Shape91.setUSE("HAnimJointShape")

Transform90.addChild(Shape91)

Transform89.addChildren(Transform90)

HAnimSegment88.addChildren(Transform89)
Shape92 = x3d.Shape()
LineSet93 = x3d.LineSet()
LineSet93.setVertexCount([2])
Coordinate94 = x3d.Coordinate()
Coordinate94.setPoint([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736])

LineSet93.setCoord(Coordinate94)
#from l_knee to l_talocrural vertices 2
ColorRGBA95 = x3d.ColorRGBA()
ColorRGBA95.setUSE("HAnimSegmentLineColorRGBA")

LineSet93.setColor(ColorRGBA95)

Shape92.setGeometry(LineSet93)

HAnimSegment88.addChildren(Shape92)

HAnimJoint87.addChildren(HAnimSegment88)
HAnimJoint96 = x3d.HAnimJoint()
HAnimJoint96.setName("l_talocrural")
HAnimJoint96.setDEF("hanim_l_talocrural")
HAnimJoint96.setCenter([0.1101,0.0656,-0.0736])
HAnimSegment97 = x3d.HAnimSegment()
HAnimSegment97.setName("l_talus")
HAnimSegment97.setDEF("hanim_l_talus")
Transform98 = x3d.Transform()
Transform98.setScale([0.15,0.15,0.15])
Transform98.setTranslation([0.08,0.06,-0.025])
Transform98.setRotation([1,0,0,-1.57])
#Transform left foot
Transform99 = x3d.Transform()
#Empty Transform left foot
Shape100 = x3d.Shape()
Shape100.setUSE("HAnimJointShape")

Transform99.addChild(Shape100)

Transform98.addChildren(Transform99)

HAnimSegment97.addChildren(Transform98)
Shape101 = x3d.Shape()
LineSet102 = x3d.LineSet()
LineSet102.setVertexCount([2])
Coordinate103 = x3d.Coordinate()
Coordinate103.setPoint([0.1101,0.0656,-0.0736,0.0781,0.0283,-0.097])

LineSet102.setCoord(Coordinate103)
#from l_talocrural to l_talocalcaneonavicular vertices 2
ColorRGBA104 = x3d.ColorRGBA()
ColorRGBA104.setUSE("HAnimSegmentLineColorRGBA")

LineSet102.setColor(ColorRGBA104)

Shape101.setGeometry(LineSet102)

HAnimSegment97.addChildren(Shape101)
Shape105 = x3d.Shape()
LineSet106 = x3d.LineSet()
LineSet106.setVertexCount([2])
Coordinate107 = x3d.Coordinate()
Coordinate107.setPoint([0.1101,0.0656,-0.0736,0.0889,0.0494,-0.1278])

LineSet106.setCoord(Coordinate107)
#from l_talocrural to l_calcaneocuboid vertices 2
ColorRGBA108 = x3d.ColorRGBA()
ColorRGBA108.setUSE("HAnimSegmentLineColorRGBA")

LineSet106.setColor(ColorRGBA108)

Shape105.setGeometry(LineSet106)

HAnimSegment97.addChildren(Shape105)

HAnimJoint96.addChildren(HAnimSegment97)
HAnimJoint109 = x3d.HAnimJoint()
HAnimJoint109.setName("l_talocalcaneonavicular")
HAnimJoint109.setDEF("hanim_l_talocalcaneonavicular")
HAnimJoint109.setCenter([0.0781,0.0283,-0.097])
HAnimSegment110 = x3d.HAnimSegment()
HAnimSegment110.setName("l_navicular")
HAnimSegment110.setDEF("hanim_l_navicular")
Transform111 = x3d.Transform()
Transform111.setTranslation([0.0781,0.0283,-0.097])
Transform112 = x3d.Transform()
#Empty Transform
Shape113 = x3d.Shape()
Shape113.setUSE("HAnimJointShape")

Transform112.addChild(Shape113)

Transform111.addChildren(Transform112)

HAnimSegment110.addChildren(Transform111)
Shape114 = x3d.Shape()
LineSet115 = x3d.LineSet()
LineSet115.setVertexCount([2])
Coordinate116 = x3d.Coordinate()
Coordinate116.setPoint([0.0781,0.0283,-0.097,0.0672,0.0235,-0.0835])

LineSet115.setCoord(Coordinate116)
#from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
ColorRGBA117 = x3d.ColorRGBA()
ColorRGBA117.setUSE("HAnimSegmentLineColorRGBA")

LineSet115.setColor(ColorRGBA117)

Shape114.setGeometry(LineSet115)

HAnimSegment110.addChildren(Shape114)
Shape118 = x3d.Shape()
LineSet119 = x3d.LineSet()
LineSet119.setVertexCount([2])
Coordinate120 = x3d.Coordinate()
Coordinate120.setPoint([0.0781,0.0283,-0.097,0.0812,0.025,-0.0805])

LineSet119.setCoord(Coordinate120)
#from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
ColorRGBA121 = x3d.ColorRGBA()
ColorRGBA121.setUSE("HAnimSegmentLineColorRGBA")

LineSet119.setColor(ColorRGBA121)

Shape118.setGeometry(LineSet119)

HAnimSegment110.addChildren(Shape118)
Shape122 = x3d.Shape()
LineSet123 = x3d.LineSet()
LineSet123.setVertexCount([2])
Coordinate124 = x3d.Coordinate()
Coordinate124.setPoint([0.0781,0.0283,-0.097,0.0928,0.0248,-0.0821])

LineSet123.setCoord(Coordinate124)
#from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
ColorRGBA125 = x3d.ColorRGBA()
ColorRGBA125.setUSE("HAnimSegmentLineColorRGBA")

LineSet123.setColor(ColorRGBA125)

Shape122.setGeometry(LineSet123)

HAnimSegment110.addChildren(Shape122)

HAnimJoint109.addChildren(HAnimSegment110)
HAnimJoint126 = x3d.HAnimJoint()
HAnimJoint126.setName("l_cuneonavicular_1")
HAnimJoint126.setDEF("hanim_l_cuneonavicular_1")
HAnimJoint126.setCenter([0.0672,0.0235,-0.0835])
HAnimSegment127 = x3d.HAnimSegment()
HAnimSegment127.setName("l_cuneiform_1")
HAnimSegment127.setDEF("hanim_l_cuneiform_1")
Transform128 = x3d.Transform()
Transform128.setTranslation([0.0672,0.0235,-0.0835])
Transform129 = x3d.Transform()
#Empty Transform
Shape130 = x3d.Shape()
Shape130.setUSE("HAnimJointShape")

Transform129.addChild(Shape130)

Transform128.addChildren(Transform129)

HAnimSegment127.addChildren(Transform128)
Shape131 = x3d.Shape()
LineSet132 = x3d.LineSet()
LineSet132.setVertexCount([2])
Coordinate133 = x3d.Coordinate()
Coordinate133.setPoint([0.0672,0.0235,-0.0835,0.0644,0.0147,-0.0577])

LineSet132.setCoord(Coordinate133)
#from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
ColorRGBA134 = x3d.ColorRGBA()
ColorRGBA134.setUSE("HAnimSegmentLineColorRGBA")

LineSet132.setColor(ColorRGBA134)

Shape131.setGeometry(LineSet132)

HAnimSegment127.addChildren(Shape131)

HAnimJoint126.addChildren(HAnimSegment127)
HAnimJoint135 = x3d.HAnimJoint()
HAnimJoint135.setName("l_tarsometatarsal_1")
HAnimJoint135.setDEF("hanim_l_tarsometatarsal_1")
HAnimJoint135.setCenter([0.0644,0.0147,-0.0577])
HAnimSegment136 = x3d.HAnimSegment()
HAnimSegment136.setName("l_metatarsal_1")
HAnimSegment136.setDEF("hanim_l_metatarsal_1")
Transform137 = x3d.Transform()
Transform137.setTranslation([0.0644,0.0147,-0.0577])
Transform138 = x3d.Transform()
#Empty Transform
Shape139 = x3d.Shape()
Shape139.setUSE("HAnimJointShape")

Transform138.addChild(Shape139)

Transform137.addChildren(Transform138)

HAnimSegment136.addChildren(Transform137)
Shape140 = x3d.Shape()
LineSet141 = x3d.LineSet()
LineSet141.setVertexCount([2])
Coordinate142 = x3d.Coordinate()
Coordinate142.setPoint([0.0644,0.0147,-0.0577,0.0619,0.0059,-0.0083])

LineSet141.setCoord(Coordinate142)
#from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
ColorRGBA143 = x3d.ColorRGBA()
ColorRGBA143.setUSE("HAnimSegmentLineColorRGBA")

LineSet141.setColor(ColorRGBA143)

Shape140.setGeometry(LineSet141)

HAnimSegment136.addChildren(Shape140)

HAnimJoint135.addChildren(HAnimSegment136)
HAnimJoint144 = x3d.HAnimJoint()
HAnimJoint144.setName("l_metatarsophalangeal_1")
HAnimJoint144.setDEF("hanim_l_metatarsophalangeal_1")
HAnimJoint144.setCenter([0.0619,0.0059,-0.0083])
HAnimSegment145 = x3d.HAnimSegment()
HAnimSegment145.setName("l_tarsal_proximal_phalanx_1")
HAnimSegment145.setDEF("hanim_l_tarsal_proximal_phalanx_1")
Transform146 = x3d.Transform()
Transform146.setTranslation([0.0619,0.0059,-0.0083])
Transform147 = x3d.Transform()
#Empty Transform
Shape148 = x3d.Shape()
Shape148.setUSE("HAnimJointShape")

Transform147.addChild(Shape148)

Transform146.addChildren(Transform147)

HAnimSegment145.addChildren(Transform146)
Shape149 = x3d.Shape()
LineSet150 = x3d.LineSet()
LineSet150.setVertexCount([2])
Coordinate151 = x3d.Coordinate()
Coordinate151.setPoint([0.0619,0.0059,-0.0083,0.0619,0.0059,-0.0083])

LineSet150.setCoord(Coordinate151)
#from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
ColorRGBA152 = x3d.ColorRGBA()
ColorRGBA152.setUSE("HAnimSegmentLineColorRGBA")

LineSet150.setColor(ColorRGBA152)

Shape149.setGeometry(LineSet150)

HAnimSegment145.addChildren(Shape149)

HAnimJoint144.addChildren(HAnimSegment145)
HAnimJoint153 = x3d.HAnimJoint()
HAnimJoint153.setName("l_tarsal_interphalangeal_1")
HAnimJoint153.setDEF("hanim_l_tarsal_interphalangeal_1")

HAnimJoint144.addChildren(HAnimJoint153)

HAnimJoint135.addChildren(HAnimJoint144)

HAnimJoint126.addChildren(HAnimJoint135)

HAnimJoint109.addChildren(HAnimJoint126)
HAnimJoint154 = x3d.HAnimJoint()
HAnimJoint154.setName("l_cuneonavicular_2")
HAnimJoint154.setDEF("hanim_l_cuneonavicular_2")
HAnimJoint154.setCenter([0.0812,0.025,-0.0805])
HAnimSegment155 = x3d.HAnimSegment()
HAnimSegment155.setName("l_cuneiform_2")
HAnimSegment155.setDEF("hanim_l_cuneiform_2")
Transform156 = x3d.Transform()
Transform156.setTranslation([0.0812,0.025,-0.0805])
Transform157 = x3d.Transform()
#Empty Transform
Shape158 = x3d.Shape()
Shape158.setUSE("HAnimJointShape")

Transform157.addChild(Shape158)

Transform156.addChildren(Transform157)

HAnimSegment155.addChildren(Transform156)
Shape159 = x3d.Shape()
LineSet160 = x3d.LineSet()
LineSet160.setVertexCount([2])
Coordinate161 = x3d.Coordinate()
Coordinate161.setPoint([0.0812,0.025,-0.0805,0.08,0.0175,-0.0608])

LineSet160.setCoord(Coordinate161)
#from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
ColorRGBA162 = x3d.ColorRGBA()
ColorRGBA162.setUSE("HAnimSegmentLineColorRGBA")

LineSet160.setColor(ColorRGBA162)

Shape159.setGeometry(LineSet160)

HAnimSegment155.addChildren(Shape159)

HAnimJoint154.addChildren(HAnimSegment155)
HAnimJoint163 = x3d.HAnimJoint()
HAnimJoint163.setName("l_tarsometatarsal_2")
HAnimJoint163.setDEF("hanim_l_tarsometatarsal_2")
HAnimJoint163.setCenter([0.08,0.0175,-0.0608])
HAnimSegment164 = x3d.HAnimSegment()
HAnimSegment164.setName("l_metatarsal_2")
HAnimSegment164.setDEF("hanim_l_metatarsal_2")
Transform165 = x3d.Transform()
Transform165.setTranslation([0.08,0.0175,-0.0608])
Transform166 = x3d.Transform()
#Empty Transform
Shape167 = x3d.Shape()
Shape167.setUSE("HAnimJointShape")

Transform166.addChild(Shape167)

Transform165.addChildren(Transform166)

HAnimSegment164.addChildren(Transform165)
Shape168 = x3d.Shape()
LineSet169 = x3d.LineSet()
LineSet169.setVertexCount([2])
Coordinate170 = x3d.Coordinate()
Coordinate170.setPoint([0.08,0.0175,-0.0608,0.0824,0.0064,-0.004])

LineSet169.setCoord(Coordinate170)
#from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA171 = x3d.ColorRGBA()
ColorRGBA171.setUSE("HAnimSegmentLineColorRGBA")

LineSet169.setColor(ColorRGBA171)

Shape168.setGeometry(LineSet169)

HAnimSegment164.addChildren(Shape168)

HAnimJoint163.addChildren(HAnimSegment164)
HAnimJoint172 = x3d.HAnimJoint()
HAnimJoint172.setName("l_metatarsophalangeal_2")
HAnimJoint172.setDEF("hanim_l_metatarsophalangeal_2")
HAnimJoint172.setCenter([0.0824,0.0064,-0.004])
HAnimSegment173 = x3d.HAnimSegment()
HAnimSegment173.setName("l_tarsal_proximal_phalanx_2")
HAnimSegment173.setDEF("hanim_l_tarsal_proximal_phalanx_2")
Transform174 = x3d.Transform()
Transform174.setTranslation([0.0824,0.0064,-0.004])
Transform175 = x3d.Transform()
#Empty Transform
Shape176 = x3d.Shape()
Shape176.setUSE("HAnimJointShape")

Transform175.addChild(Shape176)

Transform174.addChildren(Transform175)

HAnimSegment173.addChildren(Transform174)
Shape177 = x3d.Shape()
LineSet178 = x3d.LineSet()
LineSet178.setVertexCount([2])
Coordinate179 = x3d.Coordinate()
Coordinate179.setPoint([0.0824,0.0064,-0.004,0.0841,0.0041,0.0121])

LineSet178.setCoord(Coordinate179)
#from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA180 = x3d.ColorRGBA()
ColorRGBA180.setUSE("HAnimSegmentLineColorRGBA")

LineSet178.setColor(ColorRGBA180)

Shape177.setGeometry(LineSet178)

HAnimSegment173.addChildren(Shape177)

HAnimJoint172.addChildren(HAnimSegment173)
HAnimJoint181 = x3d.HAnimJoint()
HAnimJoint181.setName("l_tarsal_proximal_interphalangeal_2")
HAnimJoint181.setDEF("hanim_l_tarsal_proximal_interphalangeal_2")
HAnimJoint181.setCenter([0.0841,0.0041,0.0121])
HAnimSegment182 = x3d.HAnimSegment()
HAnimSegment182.setName("l_tarsal_middle_phalanx_2")
HAnimSegment182.setDEF("hanim_l_tarsal_middle_phalanx_2")
Transform183 = x3d.Transform()
Transform183.setTranslation([0.0841,0.0041,0.0121])
Transform184 = x3d.Transform()
#Empty Transform
Shape185 = x3d.Shape()
Shape185.setUSE("HAnimJointShape")

Transform184.addChild(Shape185)

Transform183.addChildren(Transform184)

HAnimSegment182.addChildren(Transform183)
Shape186 = x3d.Shape()
LineSet187 = x3d.LineSet()
LineSet187.setVertexCount([2])
Coordinate188 = x3d.Coordinate()
Coordinate188.setPoint([0.0841,0.0041,0.0121,0.0841,0.0013,0.0216])

LineSet187.setCoord(Coordinate188)
#from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA189 = x3d.ColorRGBA()
ColorRGBA189.setUSE("HAnimSegmentLineColorRGBA")

LineSet187.setColor(ColorRGBA189)

Shape186.setGeometry(LineSet187)

HAnimSegment182.addChildren(Shape186)

HAnimJoint181.addChildren(HAnimSegment182)
HAnimJoint190 = x3d.HAnimJoint()
HAnimJoint190.setName("l_tarsal_distal_interphalangeal_2")
HAnimJoint190.setDEF("hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint190.setCenter([0.0841,0.0013,0.0216])

HAnimJoint181.addChildren(HAnimJoint190)

HAnimJoint172.addChildren(HAnimJoint181)

HAnimJoint163.addChildren(HAnimJoint172)

HAnimJoint154.addChildren(HAnimJoint163)

HAnimJoint109.addChildren(HAnimJoint154)
HAnimJoint191 = x3d.HAnimJoint()
HAnimJoint191.setName("l_cuneonavicular_3")
HAnimJoint191.setDEF("hanim_l_cuneonavicular_3")
HAnimJoint191.setCenter([0.0928,0.0248,-0.0821])
HAnimSegment192 = x3d.HAnimSegment()
HAnimSegment192.setName("l_cuneiform_3")
HAnimSegment192.setDEF("hanim_l_cuneiform_3")
Transform193 = x3d.Transform()
Transform193.setTranslation([0.0928,0.0248,-0.0821])
Transform194 = x3d.Transform()
#Empty Transform
Shape195 = x3d.Shape()
Shape195.setUSE("HAnimJointShape")

Transform194.addChild(Shape195)

Transform193.addChildren(Transform194)

HAnimSegment192.addChildren(Transform193)
Shape196 = x3d.Shape()
LineSet197 = x3d.LineSet()
LineSet197.setVertexCount([2])
Coordinate198 = x3d.Coordinate()
Coordinate198.setPoint([0.0928,0.0248,-0.0821,0.0944,0.0175,-0.0625])

LineSet197.setCoord(Coordinate198)
#from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
ColorRGBA199 = x3d.ColorRGBA()
ColorRGBA199.setUSE("HAnimSegmentLineColorRGBA")

LineSet197.setColor(ColorRGBA199)

Shape196.setGeometry(LineSet197)

HAnimSegment192.addChildren(Shape196)

HAnimJoint191.addChildren(HAnimSegment192)
HAnimJoint200 = x3d.HAnimJoint()
HAnimJoint200.setName("l_tarsometatarsal_3")
HAnimJoint200.setDEF("hanim_l_tarsometatarsal_3")
HAnimJoint200.setCenter([0.0944,0.0175,-0.0625])
HAnimSegment201 = x3d.HAnimSegment()
HAnimSegment201.setName("l_metatarsal_3")
HAnimSegment201.setDEF("hanim_l_metatarsal_3")
Transform202 = x3d.Transform()
Transform202.setTranslation([0.0944,0.0175,-0.0625])
Transform203 = x3d.Transform()
#Empty Transform
Shape204 = x3d.Shape()
Shape204.setUSE("HAnimJointShape")

Transform203.addChild(Shape204)

Transform202.addChildren(Transform203)

HAnimSegment201.addChildren(Transform202)
Shape205 = x3d.Shape()
LineSet206 = x3d.LineSet()
LineSet206.setVertexCount([2])
Coordinate207 = x3d.Coordinate()
Coordinate207.setPoint([0.0944,0.0175,-0.0625,0.0963,0.0065,-0.0065])

LineSet206.setCoord(Coordinate207)
#from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2
ColorRGBA208 = x3d.ColorRGBA()
ColorRGBA208.setUSE("HAnimSegmentLineColorRGBA")

LineSet206.setColor(ColorRGBA208)

Shape205.setGeometry(LineSet206)

HAnimSegment201.addChildren(Shape205)

HAnimJoint200.addChildren(HAnimSegment201)
HAnimJoint209 = x3d.HAnimJoint()
HAnimJoint209.setName("l_metatarsophalangeal_3")
HAnimJoint209.setDEF("hanim_l_metatarsophalangeal_3")
HAnimJoint209.setCenter([0.0963,0.0065,-0.0065])
HAnimSegment210 = x3d.HAnimSegment()
HAnimSegment210.setName("l_tarsal_proximal_phalanx_3")
HAnimSegment210.setDEF("hanim_l_tarsal_proximal_phalanx_3")
Transform211 = x3d.Transform()
Transform211.setTranslation([0.0963,0.0065,-0.0065])
Transform212 = x3d.Transform()
#Empty Transform
Shape213 = x3d.Shape()
Shape213.setUSE("HAnimJointShape")

Transform212.addChild(Shape213)

Transform211.addChildren(Transform212)

HAnimSegment210.addChildren(Transform211)
Shape214 = x3d.Shape()
LineSet215 = x3d.LineSet()
LineSet215.setVertexCount([2])
Coordinate216 = x3d.Coordinate()
Coordinate216.setPoint([0.0963,0.0065,-0.0065,0.0987,0.0034,0.0086])

LineSet215.setCoord(Coordinate216)
#from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA217 = x3d.ColorRGBA()
ColorRGBA217.setUSE("HAnimSegmentLineColorRGBA")

LineSet215.setColor(ColorRGBA217)

Shape214.setGeometry(LineSet215)

HAnimSegment210.addChildren(Shape214)

HAnimJoint209.addChildren(HAnimSegment210)
HAnimJoint218 = x3d.HAnimJoint()
HAnimJoint218.setName("l_tarsal_proximal_interphalangeal_3")
HAnimJoint218.setDEF("hanim_l_tarsal_proximal_interphalangeal_3")
HAnimJoint218.setCenter([0.0987,0.0034,0.0086])
HAnimSegment219 = x3d.HAnimSegment()
HAnimSegment219.setName("l_tarsal_middle_phalanx_3")
HAnimSegment219.setDEF("hanim_l_tarsal_middle_phalanx_3")
Transform220 = x3d.Transform()
Transform220.setTranslation([0.0987,0.0034,0.0086])
Transform221 = x3d.Transform()
#Empty Transform
Shape222 = x3d.Shape()
Shape222.setUSE("HAnimJointShape")

Transform221.addChild(Shape222)

Transform220.addChildren(Transform221)

HAnimSegment219.addChildren(Transform220)
Shape223 = x3d.Shape()
LineSet224 = x3d.LineSet()
LineSet224.setVertexCount([2])
Coordinate225 = x3d.Coordinate()
Coordinate225.setPoint([0.0987,0.0034,0.0086,0.1002,0.0013,0.0178])

LineSet224.setCoord(Coordinate225)
#from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA226 = x3d.ColorRGBA()
ColorRGBA226.setUSE("HAnimSegmentLineColorRGBA")

LineSet224.setColor(ColorRGBA226)

Shape223.setGeometry(LineSet224)

HAnimSegment219.addChildren(Shape223)

HAnimJoint218.addChildren(HAnimSegment219)
HAnimJoint227 = x3d.HAnimJoint()
HAnimJoint227.setName("l_tarsal_distal_interphalangeal_3")
HAnimJoint227.setDEF("hanim_l_tarsal_distal_interphalangeal_3")
HAnimJoint227.setCenter([0.1002,0.0013,0.0178])

HAnimJoint218.addChildren(HAnimJoint227)

HAnimJoint209.addChildren(HAnimJoint218)

HAnimJoint200.addChildren(HAnimJoint209)

HAnimJoint191.addChildren(HAnimJoint200)

HAnimJoint109.addChildren(HAnimJoint191)

HAnimJoint96.addChildren(HAnimJoint109)
HAnimJoint228 = x3d.HAnimJoint()
HAnimJoint228.setName("l_calcaneocuboid")
HAnimJoint228.setDEF("hanim_l_calcaneocuboid")
HAnimJoint228.setCenter([0.0889,0.0494,-0.1278])
HAnimSegment229 = x3d.HAnimSegment()
HAnimSegment229.setName("l_calcaneus")
HAnimSegment229.setDEF("hanim_l_calcaneus")
Transform230 = x3d.Transform()
Transform230.setTranslation([0.0889,0.0494,-0.1278])
Transform231 = x3d.Transform()
#Empty Transform
Shape232 = x3d.Shape()
Shape232.setUSE("HAnimJointShape")

Transform231.addChild(Shape232)

Transform230.addChildren(Transform231)

HAnimSegment229.addChildren(Transform230)
Shape233 = x3d.Shape()
LineSet234 = x3d.LineSet()
LineSet234.setVertexCount([2])
Coordinate235 = x3d.Coordinate()
Coordinate235.setPoint([0.0889,0.0494,-0.1278,0.1105,0.0267,-0.0998])

LineSet234.setCoord(Coordinate235)
#from l_calcaneocuboid to l_transversetarsal vertices 2
ColorRGBA236 = x3d.ColorRGBA()
ColorRGBA236.setUSE("HAnimSegmentLineColorRGBA")

LineSet234.setColor(ColorRGBA236)

Shape233.setGeometry(LineSet234)

HAnimSegment229.addChildren(Shape233)

HAnimJoint228.addChildren(HAnimSegment229)
HAnimJoint237 = x3d.HAnimJoint()
HAnimJoint237.setName("l_transversetarsal")
HAnimJoint237.setDEF("hanim_l_transversetarsal")
HAnimJoint237.setCenter([0.1105,0.0267,-0.0998])
HAnimSegment238 = x3d.HAnimSegment()
HAnimSegment238.setName("l_cuboid")
HAnimSegment238.setDEF("hanim_l_cuboid")
Transform239 = x3d.Transform()
Transform239.setTranslation([0.1105,0.0267,-0.0998])
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
Coordinate244.setPoint([0.1105,0.0267,-0.0998,0.1063,0.016,-0.0634])

LineSet243.setCoord(Coordinate244)
#from l_transversetarsal to l_tarsometatarsal_4 vertices 2
ColorRGBA245 = x3d.ColorRGBA()
ColorRGBA245.setUSE("HAnimSegmentLineColorRGBA")

LineSet243.setColor(ColorRGBA245)

Shape242.setGeometry(LineSet243)

HAnimSegment238.addChildren(Shape242)
Shape246 = x3d.Shape()
LineSet247 = x3d.LineSet()
LineSet247.setVertexCount([2])
Coordinate248 = x3d.Coordinate()
Coordinate248.setPoint([0.1105,0.0267,-0.0998,0.1206,0.0124,-0.0671])

LineSet247.setCoord(Coordinate248)
#from l_transversetarsal to l_tarsometatarsal_5 vertices 2
ColorRGBA249 = x3d.ColorRGBA()
ColorRGBA249.setUSE("HAnimSegmentLineColorRGBA")

LineSet247.setColor(ColorRGBA249)

Shape246.setGeometry(LineSet247)

HAnimSegment238.addChildren(Shape246)

HAnimJoint237.addChildren(HAnimSegment238)
HAnimJoint250 = x3d.HAnimJoint()
HAnimJoint250.setName("l_tarsometatarsal_4")
HAnimJoint250.setDEF("hanim_l_tarsometatarsal_4")
HAnimJoint250.setCenter([0.1063,0.016,-0.0634])
HAnimSegment251 = x3d.HAnimSegment()
HAnimSegment251.setName("l_metatarsal_4")
HAnimSegment251.setDEF("hanim_l_metatarsal_4")
Transform252 = x3d.Transform()
Transform252.setTranslation([0.1063,0.016,-0.0634])
Transform253 = x3d.Transform()
#Empty Transform
Shape254 = x3d.Shape()
Shape254.setUSE("HAnimJointShape")

Transform253.addChild(Shape254)

Transform252.addChildren(Transform253)

HAnimSegment251.addChildren(Transform252)
Shape255 = x3d.Shape()
LineSet256 = x3d.LineSet()
LineSet256.setVertexCount([2])
Coordinate257 = x3d.Coordinate()
Coordinate257.setPoint([0.1063,0.016,-0.0634,0.1097,0.0058,-0.0107])

LineSet256.setCoord(Coordinate257)
#from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
ColorRGBA258 = x3d.ColorRGBA()
ColorRGBA258.setUSE("HAnimSegmentLineColorRGBA")

LineSet256.setColor(ColorRGBA258)

Shape255.setGeometry(LineSet256)

HAnimSegment251.addChildren(Shape255)

HAnimJoint250.addChildren(HAnimSegment251)
HAnimJoint259 = x3d.HAnimJoint()
HAnimJoint259.setName("l_metatarsophalangeal_4")
HAnimJoint259.setDEF("hanim_l_metatarsophalangeal_4")
HAnimJoint259.setCenter([0.1097,0.0058,-0.0107])
HAnimSegment260 = x3d.HAnimSegment()
HAnimSegment260.setName("l_tarsal_proximal_phalanx_4")
HAnimSegment260.setDEF("hanim_l_tarsal_proximal_phalanx_4")
Transform261 = x3d.Transform()
Transform261.setTranslation([0.1097,0.0058,-0.0107])
Transform262 = x3d.Transform()
#Empty Transform
Shape263 = x3d.Shape()
Shape263.setUSE("HAnimJointShape")

Transform262.addChild(Shape263)

Transform261.addChildren(Transform262)

HAnimSegment260.addChildren(Transform261)
Shape264 = x3d.Shape()
LineSet265 = x3d.LineSet()
LineSet265.setVertexCount([2])
Coordinate266 = x3d.Coordinate()
Coordinate266.setPoint([0.1097,0.0058,-0.0107,0.114,0.0037,0.0044])

LineSet265.setCoord(Coordinate266)
#from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA267 = x3d.ColorRGBA()
ColorRGBA267.setUSE("HAnimSegmentLineColorRGBA")

LineSet265.setColor(ColorRGBA267)

Shape264.setGeometry(LineSet265)

HAnimSegment260.addChildren(Shape264)

HAnimJoint259.addChildren(HAnimSegment260)
HAnimJoint268 = x3d.HAnimJoint()
HAnimJoint268.setName("l_tarsal_proximal_interphalangeal_4")
HAnimJoint268.setDEF("hanim_l_tarsal_proximal_interphalangeal_4")
HAnimJoint268.setCenter([0.114,0.0037,0.0044])
HAnimSegment269 = x3d.HAnimSegment()
HAnimSegment269.setName("l_tarsal_middle_phalanx_4")
HAnimSegment269.setDEF("hanim_l_tarsal_middle_phalanx_4")
Transform270 = x3d.Transform()
Transform270.setTranslation([0.114,0.0037,0.0044])
Transform271 = x3d.Transform()
#Empty Transform
Shape272 = x3d.Shape()
Shape272.setUSE("HAnimJointShape")

Transform271.addChild(Shape272)

Transform270.addChildren(Transform271)

HAnimSegment269.addChildren(Transform270)
Shape273 = x3d.Shape()
LineSet274 = x3d.LineSet()
LineSet274.setVertexCount([2])
Coordinate275 = x3d.Coordinate()
Coordinate275.setPoint([0.114,0.0037,0.0044,0.1155,0.0008,0.0118])

LineSet274.setCoord(Coordinate275)
#from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA276 = x3d.ColorRGBA()
ColorRGBA276.setUSE("HAnimSegmentLineColorRGBA")

LineSet274.setColor(ColorRGBA276)

Shape273.setGeometry(LineSet274)

HAnimSegment269.addChildren(Shape273)

HAnimJoint268.addChildren(HAnimSegment269)
HAnimJoint277 = x3d.HAnimJoint()
HAnimJoint277.setName("l_tarsal_distal_interphalangeal_4")
HAnimJoint277.setDEF("hanim_l_tarsal_distal_interphalangeal_4")
HAnimJoint277.setCenter([0.1155,0.0008,0.0118])

HAnimJoint268.addChildren(HAnimJoint277)

HAnimJoint259.addChildren(HAnimJoint268)

HAnimJoint250.addChildren(HAnimJoint259)

HAnimJoint237.addChildren(HAnimJoint250)
HAnimJoint278 = x3d.HAnimJoint()
HAnimJoint278.setName("l_tarsometatarsal_5")
HAnimJoint278.setDEF("hanim_l_tarsometatarsal_5")
HAnimJoint278.setCenter([0.1206,0.0124,-0.0671])
HAnimSegment279 = x3d.HAnimSegment()
HAnimSegment279.setName("l_metatarsal_5")
HAnimSegment279.setDEF("hanim_l_metatarsal_5")
Transform280 = x3d.Transform()
Transform280.setTranslation([0.1206,0.0124,-0.0671])
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
Coordinate285.setPoint([0.1206,0.0124,-0.0671,0.1239,0.0051,-0.0153])

LineSet284.setCoord(Coordinate285)
#from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
ColorRGBA286 = x3d.ColorRGBA()
ColorRGBA286.setUSE("HAnimSegmentLineColorRGBA")

LineSet284.setColor(ColorRGBA286)

Shape283.setGeometry(LineSet284)

HAnimSegment279.addChildren(Shape283)

HAnimJoint278.addChildren(HAnimSegment279)
HAnimJoint287 = x3d.HAnimJoint()
HAnimJoint287.setName("l_metatarsophalangeal_5")
HAnimJoint287.setDEF("hanim_l_metatarsophalangeal_5")
HAnimJoint287.setCenter([0.1239,0.0051,-0.0153])
HAnimSegment288 = x3d.HAnimSegment()
HAnimSegment288.setName("l_tarsal_proximal_phalanx_5")
HAnimSegment288.setDEF("hanim_l_tarsal_proximal_phalanx_5")
Transform289 = x3d.Transform()
Transform289.setTranslation([0.1239,0.0051,-0.0153])
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
Coordinate294.setPoint([0.1239,0.0051,-0.0153,0.1262,0.0023,-0.0077])

LineSet293.setCoord(Coordinate294)
#from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA295 = x3d.ColorRGBA()
ColorRGBA295.setUSE("HAnimSegmentLineColorRGBA")

LineSet293.setColor(ColorRGBA295)

Shape292.setGeometry(LineSet293)

HAnimSegment288.addChildren(Shape292)

HAnimJoint287.addChildren(HAnimSegment288)
HAnimJoint296 = x3d.HAnimJoint()
HAnimJoint296.setName("l_tarsal_proximal_interphalangeal_5")
HAnimJoint296.setDEF("hanim_l_tarsal_proximal_interphalangeal_5")
HAnimJoint296.setCenter([0.1262,0.0023,-0.0077])
HAnimSegment297 = x3d.HAnimSegment()
HAnimSegment297.setName("l_tarsal_middle_phalanx_5")
HAnimSegment297.setDEF("hanim_l_tarsal_middle_phalanx_5")
Transform298 = x3d.Transform()
Transform298.setTranslation([0.1262,0.0023,-0.0077])
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
Coordinate303.setPoint([0.1262,0.0023,-0.0077,0.1271,0,0])

LineSet302.setCoord(Coordinate303)
#from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA304 = x3d.ColorRGBA()
ColorRGBA304.setUSE("HAnimSegmentLineColorRGBA")

LineSet302.setColor(ColorRGBA304)

Shape301.setGeometry(LineSet302)

HAnimSegment297.addChildren(Shape301)

HAnimJoint296.addChildren(HAnimSegment297)
HAnimJoint305 = x3d.HAnimJoint()
HAnimJoint305.setName("l_tarsal_distal_interphalangeal_5")
HAnimJoint305.setDEF("hanim_l_tarsal_distal_interphalangeal_5")
HAnimJoint305.setCenter([0.1271,0,0])

HAnimJoint296.addChildren(HAnimJoint305)

HAnimJoint287.addChildren(HAnimJoint296)

HAnimJoint278.addChildren(HAnimJoint287)

HAnimJoint237.addChildren(HAnimJoint278)

HAnimJoint228.addChildren(HAnimJoint237)

HAnimJoint96.addChildren(HAnimJoint228)

HAnimJoint87.addChildren(HAnimJoint96)

HAnimJoint78.addChildren(HAnimJoint87)

HAnimJoint65.addChildren(HAnimJoint78)
HAnimJoint306 = x3d.HAnimJoint()
HAnimJoint306.setName("r_hip")
HAnimJoint306.setDEF("hanim_r_hip")
HAnimJoint306.setCenter([-0.095,0.9171,0.0029])
HAnimSegment307 = x3d.HAnimSegment()
HAnimSegment307.setName("r_thigh")
HAnimSegment307.setDEF("hanim_r_thigh")
Transform308 = x3d.Transform()
Transform308.setTranslation([-0.095,0.9171,0.0029])
Transform309 = x3d.Transform()
#Empty Transform
Shape310 = x3d.Shape()
Shape310.setUSE("HAnimJointShape")

Transform309.addChild(Shape310)

Transform308.addChildren(Transform309)

HAnimSegment307.addChildren(Transform308)
Shape311 = x3d.Shape()
LineSet312 = x3d.LineSet()
LineSet312.setVertexCount([2])
Coordinate313 = x3d.Coordinate()
Coordinate313.setPoint([-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318])

LineSet312.setCoord(Coordinate313)
#from r_hip to r_knee vertices 2
ColorRGBA314 = x3d.ColorRGBA()
ColorRGBA314.setUSE("HAnimSegmentLineColorRGBA")

LineSet312.setColor(ColorRGBA314)

Shape311.setGeometry(LineSet312)

HAnimSegment307.addChildren(Shape311)

HAnimJoint306.addChildren(HAnimSegment307)
HAnimJoint315 = x3d.HAnimJoint()
HAnimJoint315.setName("r_knee")
HAnimJoint315.setDEF("hanim_r_knee")
HAnimJoint315.setCenter([-0.0867,0.4913,0.0318])
HAnimSegment316 = x3d.HAnimSegment()
HAnimSegment316.setName("r_calf")
HAnimSegment316.setDEF("hanim_r_calf")
Transform317 = x3d.Transform()
Transform317.setTranslation([-0.0867,0.4913,0.0318])
Transform318 = x3d.Transform()
#Empty Transform
Shape319 = x3d.Shape()
Shape319.setUSE("HAnimJointShape")

Transform318.addChild(Shape319)

Transform317.addChildren(Transform318)

HAnimSegment316.addChildren(Transform317)
Shape320 = x3d.Shape()
LineSet321 = x3d.LineSet()
LineSet321.setVertexCount([2])
Coordinate322 = x3d.Coordinate()
Coordinate322.setPoint([-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766])

LineSet321.setCoord(Coordinate322)
#from r_knee to r_talocrural vertices 2
ColorRGBA323 = x3d.ColorRGBA()
ColorRGBA323.setUSE("HAnimSegmentLineColorRGBA")

LineSet321.setColor(ColorRGBA323)

Shape320.setGeometry(LineSet321)

HAnimSegment316.addChildren(Shape320)

HAnimJoint315.addChildren(HAnimSegment316)
HAnimJoint324 = x3d.HAnimJoint()
HAnimJoint324.setName("r_talocrural")
HAnimJoint324.setDEF("hanim_r_talocrural")
HAnimJoint324.setCenter([-0.0801,0.0712,-0.0766])
HAnimSegment325 = x3d.HAnimSegment()
HAnimSegment325.setName("r_talus")
HAnimSegment325.setDEF("hanim_r_talus")
Transform326 = x3d.Transform()
Transform326.setScale([0.15,0.15,0.15])
Transform326.setTranslation([-0.05,0.06,-0.025])
Transform326.setRotation([1,0,0,-1.57])
#Transform right foot
Transform327 = x3d.Transform()
#Empty Transform right foot
Shape328 = x3d.Shape()
Shape328.setUSE("HAnimJointShape")

Transform327.addChild(Shape328)

Transform326.addChildren(Transform327)

HAnimSegment325.addChildren(Transform326)
Shape329 = x3d.Shape()
LineSet330 = x3d.LineSet()
LineSet330.setVertexCount([2])
Coordinate331 = x3d.Coordinate()
Coordinate331.setPoint([-0.0801,0.0712,-0.0766,-0.0781,0.0283,-0.097])

LineSet330.setCoord(Coordinate331)
#from r_talocrural to r_talocalcaneonavicular vertices 2
ColorRGBA332 = x3d.ColorRGBA()
ColorRGBA332.setUSE("HAnimSegmentLineColorRGBA")

LineSet330.setColor(ColorRGBA332)

Shape329.setGeometry(LineSet330)

HAnimSegment325.addChildren(Shape329)
Shape333 = x3d.Shape()
LineSet334 = x3d.LineSet()
LineSet334.setVertexCount([2])
Coordinate335 = x3d.Coordinate()
Coordinate335.setPoint([-0.0801,0.0712,-0.0766,-0.0889,0.0494,-0.1278])

LineSet334.setCoord(Coordinate335)
#from r_talocrural to r_calcaneocuboid vertices 2
ColorRGBA336 = x3d.ColorRGBA()
ColorRGBA336.setUSE("HAnimSegmentLineColorRGBA")

LineSet334.setColor(ColorRGBA336)

Shape333.setGeometry(LineSet334)

HAnimSegment325.addChildren(Shape333)

HAnimJoint324.addChildren(HAnimSegment325)
HAnimJoint337 = x3d.HAnimJoint()
HAnimJoint337.setName("r_talocalcaneonavicular")
HAnimJoint337.setDEF("hanim_r_talocalcaneonavicular")
HAnimJoint337.setCenter([-0.0781,0.0283,-0.097])
HAnimSegment338 = x3d.HAnimSegment()
HAnimSegment338.setName("r_navicular")
HAnimSegment338.setDEF("hanim_r_navicular")
Transform339 = x3d.Transform()
Transform339.setTranslation([-0.0781,0.0283,-0.097])
Transform340 = x3d.Transform()
#Empty Transform
Shape341 = x3d.Shape()
Shape341.setUSE("HAnimJointShape")

Transform340.addChild(Shape341)

Transform339.addChildren(Transform340)

HAnimSegment338.addChildren(Transform339)
Shape342 = x3d.Shape()
LineSet343 = x3d.LineSet()
LineSet343.setVertexCount([2])
Coordinate344 = x3d.Coordinate()
Coordinate344.setPoint([-0.0781,0.0283,-0.097,-0.0672,0.0235,-0.0835])

LineSet343.setCoord(Coordinate344)
#from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
ColorRGBA345 = x3d.ColorRGBA()
ColorRGBA345.setUSE("HAnimSegmentLineColorRGBA")

LineSet343.setColor(ColorRGBA345)

Shape342.setGeometry(LineSet343)

HAnimSegment338.addChildren(Shape342)
Shape346 = x3d.Shape()
LineSet347 = x3d.LineSet()
LineSet347.setVertexCount([2])
Coordinate348 = x3d.Coordinate()
Coordinate348.setPoint([-0.0781,0.0283,-0.097,-0.0812,0.025,-0.0805])

LineSet347.setCoord(Coordinate348)
#from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
ColorRGBA349 = x3d.ColorRGBA()
ColorRGBA349.setUSE("HAnimSegmentLineColorRGBA")

LineSet347.setColor(ColorRGBA349)

Shape346.setGeometry(LineSet347)

HAnimSegment338.addChildren(Shape346)
Shape350 = x3d.Shape()
LineSet351 = x3d.LineSet()
LineSet351.setVertexCount([2])
Coordinate352 = x3d.Coordinate()
Coordinate352.setPoint([-0.0781,0.0283,-0.097,-0.0928,0.0248,-0.0821])

LineSet351.setCoord(Coordinate352)
#from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
ColorRGBA353 = x3d.ColorRGBA()
ColorRGBA353.setUSE("HAnimSegmentLineColorRGBA")

LineSet351.setColor(ColorRGBA353)

Shape350.setGeometry(LineSet351)

HAnimSegment338.addChildren(Shape350)

HAnimJoint337.addChildren(HAnimSegment338)
HAnimJoint354 = x3d.HAnimJoint()
HAnimJoint354.setName("r_cuneonavicular_1")
HAnimJoint354.setDEF("hanim_r_cuneonavicular_1")
HAnimJoint354.setCenter([-0.0672,0.0235,-0.0835])
HAnimSegment355 = x3d.HAnimSegment()
HAnimSegment355.setName("r_cuneiform_1")
HAnimSegment355.setDEF("hanim_r_cuneiform_1")
Transform356 = x3d.Transform()
Transform356.setTranslation([-0.0672,0.0235,-0.0835])
Transform357 = x3d.Transform()
#Empty Transform
Shape358 = x3d.Shape()
Shape358.setUSE("HAnimJointShape")

Transform357.addChild(Shape358)

Transform356.addChildren(Transform357)

HAnimSegment355.addChildren(Transform356)
Shape359 = x3d.Shape()
LineSet360 = x3d.LineSet()
LineSet360.setVertexCount([2])
Coordinate361 = x3d.Coordinate()
Coordinate361.setPoint([-0.0672,0.0235,-0.0835,-0.0644,0.0147,-0.0577])

LineSet360.setCoord(Coordinate361)
#from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
ColorRGBA362 = x3d.ColorRGBA()
ColorRGBA362.setUSE("HAnimSegmentLineColorRGBA")

LineSet360.setColor(ColorRGBA362)

Shape359.setGeometry(LineSet360)

HAnimSegment355.addChildren(Shape359)

HAnimJoint354.addChildren(HAnimSegment355)
HAnimJoint363 = x3d.HAnimJoint()
HAnimJoint363.setName("r_tarsometatarsal_1")
HAnimJoint363.setDEF("hanim_r_tarsometatarsal_1")
HAnimJoint363.setCenter([-0.0644,0.0147,-0.0577])
HAnimSegment364 = x3d.HAnimSegment()
HAnimSegment364.setName("r_metatarsal_1")
HAnimSegment364.setDEF("hanim_r_metatarsal_1")
Transform365 = x3d.Transform()
Transform365.setTranslation([-0.0644,0.0147,-0.0577])
Transform366 = x3d.Transform()
#Empty Transform
Shape367 = x3d.Shape()
Shape367.setUSE("HAnimJointShape")

Transform366.addChild(Shape367)

Transform365.addChildren(Transform366)

HAnimSegment364.addChildren(Transform365)
Shape368 = x3d.Shape()
LineSet369 = x3d.LineSet()
LineSet369.setVertexCount([2])
Coordinate370 = x3d.Coordinate()
Coordinate370.setPoint([-0.0644,0.0147,-0.0577,-0.0619,0.0059,-0.0083])

LineSet369.setCoord(Coordinate370)
#from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
ColorRGBA371 = x3d.ColorRGBA()
ColorRGBA371.setUSE("HAnimSegmentLineColorRGBA")

LineSet369.setColor(ColorRGBA371)

Shape368.setGeometry(LineSet369)

HAnimSegment364.addChildren(Shape368)

HAnimJoint363.addChildren(HAnimSegment364)
HAnimJoint372 = x3d.HAnimJoint()
HAnimJoint372.setName("r_metatarsophalangeal_1")
HAnimJoint372.setDEF("hanim_r_metatarsophalangeal_1")
HAnimJoint372.setCenter([-0.0619,0.0059,-0.0083])
HAnimSegment373 = x3d.HAnimSegment()
HAnimSegment373.setName("r_tarsal_proximal_phalanx_1")
HAnimSegment373.setDEF("hanim_r_tarsal_proximal_phalanx_1")
Transform374 = x3d.Transform()
Transform374.setTranslation([-0.0619,0.0059,-0.0083])
Transform375 = x3d.Transform()
#Empty Transform
Shape376 = x3d.Shape()
Shape376.setUSE("HAnimJointShape")

Transform375.addChild(Shape376)

Transform374.addChildren(Transform375)

HAnimSegment373.addChildren(Transform374)
Shape377 = x3d.Shape()
LineSet378 = x3d.LineSet()
LineSet378.setVertexCount([2])
Coordinate379 = x3d.Coordinate()
Coordinate379.setPoint([-0.0619,0.0059,-0.0083,-0.0619,0.0059,-0.0083])

LineSet378.setCoord(Coordinate379)
#from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
ColorRGBA380 = x3d.ColorRGBA()
ColorRGBA380.setUSE("HAnimSegmentLineColorRGBA")

LineSet378.setColor(ColorRGBA380)

Shape377.setGeometry(LineSet378)

HAnimSegment373.addChildren(Shape377)

HAnimJoint372.addChildren(HAnimSegment373)
HAnimJoint381 = x3d.HAnimJoint()
HAnimJoint381.setName("r_tarsal_interphalangeal_1")
HAnimJoint381.setDEF("hanim_r_tarsal_interphalangeal_1")

HAnimJoint372.addChildren(HAnimJoint381)

HAnimJoint363.addChildren(HAnimJoint372)

HAnimJoint354.addChildren(HAnimJoint363)

HAnimJoint337.addChildren(HAnimJoint354)
HAnimJoint382 = x3d.HAnimJoint()
HAnimJoint382.setName("r_cuneonavicular_2")
HAnimJoint382.setDEF("hanim_r_cuneonavicular_2")
HAnimJoint382.setCenter([-0.0812,0.025,-0.0805])
HAnimSegment383 = x3d.HAnimSegment()
HAnimSegment383.setName("r_cuneiform_2")
HAnimSegment383.setDEF("hanim_r_cuneiform_2")
Transform384 = x3d.Transform()
Transform384.setTranslation([-0.0812,0.025,-0.0805])
Transform385 = x3d.Transform()
#Empty Transform
Shape386 = x3d.Shape()
Shape386.setUSE("HAnimJointShape")

Transform385.addChild(Shape386)

Transform384.addChildren(Transform385)

HAnimSegment383.addChildren(Transform384)
Shape387 = x3d.Shape()
LineSet388 = x3d.LineSet()
LineSet388.setVertexCount([2])
Coordinate389 = x3d.Coordinate()
Coordinate389.setPoint([-0.0812,0.025,-0.0805,-0.08,0.0175,-0.0608])

LineSet388.setCoord(Coordinate389)
#from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
ColorRGBA390 = x3d.ColorRGBA()
ColorRGBA390.setUSE("HAnimSegmentLineColorRGBA")

LineSet388.setColor(ColorRGBA390)

Shape387.setGeometry(LineSet388)

HAnimSegment383.addChildren(Shape387)

HAnimJoint382.addChildren(HAnimSegment383)
HAnimJoint391 = x3d.HAnimJoint()
HAnimJoint391.setName("r_tarsometatarsal_2")
HAnimJoint391.setDEF("hanim_r_tarsometatarsal_2")
HAnimJoint391.setCenter([-0.08,0.0175,-0.0608])
HAnimSegment392 = x3d.HAnimSegment()
HAnimSegment392.setName("r_metatarsal_2")
HAnimSegment392.setDEF("hanim_r_metatarsal_2")
Transform393 = x3d.Transform()
Transform393.setTranslation([-0.08,0.0175,-0.0608])
Transform394 = x3d.Transform()
#Empty Transform
Shape395 = x3d.Shape()
Shape395.setUSE("HAnimJointShape")

Transform394.addChild(Shape395)

Transform393.addChildren(Transform394)

HAnimSegment392.addChildren(Transform393)
Shape396 = x3d.Shape()
LineSet397 = x3d.LineSet()
LineSet397.setVertexCount([2])
Coordinate398 = x3d.Coordinate()
Coordinate398.setPoint([-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004])

LineSet397.setCoord(Coordinate398)
#from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA399 = x3d.ColorRGBA()
ColorRGBA399.setUSE("HAnimSegmentLineColorRGBA")

LineSet397.setColor(ColorRGBA399)

Shape396.setGeometry(LineSet397)

HAnimSegment392.addChildren(Shape396)

HAnimJoint391.addChildren(HAnimSegment392)
HAnimJoint400 = x3d.HAnimJoint()
HAnimJoint400.setName("r_metatarsophalangeal_2")
HAnimJoint400.setDEF("hanim_r_metatarsophalangeal_2")
HAnimJoint400.setCenter([-0.0823,0.0064,-0.004])
HAnimSegment401 = x3d.HAnimSegment()
HAnimSegment401.setName("r_tarsal_proximal_phalanx_2")
HAnimSegment401.setDEF("hanim_r_tarsal_proximal_phalanx_2")
Transform402 = x3d.Transform()
Transform402.setTranslation([-0.0823,0.0064,-0.004])
Transform403 = x3d.Transform()
#Empty Transform
Shape404 = x3d.Shape()
Shape404.setUSE("HAnimJointShape")

Transform403.addChild(Shape404)

Transform402.addChildren(Transform403)

HAnimSegment401.addChildren(Transform402)
Shape405 = x3d.Shape()
LineSet406 = x3d.LineSet()
LineSet406.setVertexCount([2])
Coordinate407 = x3d.Coordinate()
Coordinate407.setPoint([-0.0823,0.0064,-0.004,-0.0841,0.0041,0.0121])

LineSet406.setCoord(Coordinate407)
#from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA408 = x3d.ColorRGBA()
ColorRGBA408.setUSE("HAnimSegmentLineColorRGBA")

LineSet406.setColor(ColorRGBA408)

Shape405.setGeometry(LineSet406)

HAnimSegment401.addChildren(Shape405)

HAnimJoint400.addChildren(HAnimSegment401)
HAnimJoint409 = x3d.HAnimJoint()
HAnimJoint409.setName("r_tarsal_proximal_interphalangeal_2")
HAnimJoint409.setDEF("hanim_r_tarsal_proximal_interphalangeal_2")
HAnimJoint409.setCenter([-0.0841,0.0041,0.0121])
HAnimSegment410 = x3d.HAnimSegment()
HAnimSegment410.setName("r_tarsal_middle_phalanx_2")
HAnimSegment410.setDEF("hanim_r_tarsal_middle_phalanx_2")
Transform411 = x3d.Transform()
Transform411.setTranslation([-0.0841,0.0041,0.0121])
Transform412 = x3d.Transform()
#Empty Transform
Shape413 = x3d.Shape()
Shape413.setUSE("HAnimJointShape")

Transform412.addChild(Shape413)

Transform411.addChildren(Transform412)

HAnimSegment410.addChildren(Transform411)
Shape414 = x3d.Shape()
LineSet415 = x3d.LineSet()
LineSet415.setVertexCount([2])
Coordinate416 = x3d.Coordinate()
Coordinate416.setPoint([-0.0841,0.0041,0.0121,-0.0841,0.0013,0.0216])

LineSet415.setCoord(Coordinate416)
#from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA417 = x3d.ColorRGBA()
ColorRGBA417.setUSE("HAnimSegmentLineColorRGBA")

LineSet415.setColor(ColorRGBA417)

Shape414.setGeometry(LineSet415)

HAnimSegment410.addChildren(Shape414)

HAnimJoint409.addChildren(HAnimSegment410)
HAnimJoint418 = x3d.HAnimJoint()
HAnimJoint418.setName("r_tarsal_distal_interphalangeal_2")
HAnimJoint418.setDEF("hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint418.setCenter([-0.0841,0.0013,0.0216])

HAnimJoint409.addChildren(HAnimJoint418)

HAnimJoint400.addChildren(HAnimJoint409)

HAnimJoint391.addChildren(HAnimJoint400)

HAnimJoint382.addChildren(HAnimJoint391)

HAnimJoint337.addChildren(HAnimJoint382)
HAnimJoint419 = x3d.HAnimJoint()
HAnimJoint419.setName("r_cuneonavicular_3")
HAnimJoint419.setDEF("hanim_r_cuneonavicular_3")
HAnimJoint419.setCenter([-0.0928,0.0248,-0.0821])
HAnimSegment420 = x3d.HAnimSegment()
HAnimSegment420.setName("r_cuneiform_3")
HAnimSegment420.setDEF("hanim_r_cuneiform_3")
Transform421 = x3d.Transform()
Transform421.setTranslation([-0.0928,0.0248,-0.0821])
Transform422 = x3d.Transform()
#Empty Transform
Shape423 = x3d.Shape()
Shape423.setUSE("HAnimJointShape")

Transform422.addChild(Shape423)

Transform421.addChildren(Transform422)

HAnimSegment420.addChildren(Transform421)
Shape424 = x3d.Shape()
LineSet425 = x3d.LineSet()
LineSet425.setVertexCount([2])
Coordinate426 = x3d.Coordinate()
Coordinate426.setPoint([-0.0928,0.0248,-0.0821,-0.0944,0.0175,-0.0625])

LineSet425.setCoord(Coordinate426)
#from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
ColorRGBA427 = x3d.ColorRGBA()
ColorRGBA427.setUSE("HAnimSegmentLineColorRGBA")

LineSet425.setColor(ColorRGBA427)

Shape424.setGeometry(LineSet425)

HAnimSegment420.addChildren(Shape424)

HAnimJoint419.addChildren(HAnimSegment420)
HAnimJoint428 = x3d.HAnimJoint()
HAnimJoint428.setName("r_tarsometatarsal_3")
HAnimJoint428.setDEF("hanim_r_tarsometatarsal_3")
HAnimJoint428.setCenter([-0.0944,0.0175,-0.0625])
HAnimSegment429 = x3d.HAnimSegment()
HAnimSegment429.setName("r_metatarsal_3")
HAnimSegment429.setDEF("hanim_r_metatarsal_3")
Transform430 = x3d.Transform()
Transform430.setTranslation([-0.0944,0.0175,-0.0625])
Transform431 = x3d.Transform()
#Empty Transform
Shape432 = x3d.Shape()
Shape432.setUSE("HAnimJointShape")

Transform431.addChild(Shape432)

Transform430.addChildren(Transform431)

HAnimSegment429.addChildren(Transform430)
Shape433 = x3d.Shape()
LineSet434 = x3d.LineSet()
LineSet434.setVertexCount([2])
Coordinate435 = x3d.Coordinate()
Coordinate435.setPoint([-0.0944,0.0175,-0.0625,-0.0963,0.0065,-0.0065])

LineSet434.setCoord(Coordinate435)
#from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2
ColorRGBA436 = x3d.ColorRGBA()
ColorRGBA436.setUSE("HAnimSegmentLineColorRGBA")

LineSet434.setColor(ColorRGBA436)

Shape433.setGeometry(LineSet434)

HAnimSegment429.addChildren(Shape433)

HAnimJoint428.addChildren(HAnimSegment429)
HAnimJoint437 = x3d.HAnimJoint()
HAnimJoint437.setName("r_metatarsophalangeal_3")
HAnimJoint437.setDEF("hanim_r_metatarsophalangeal_3")
HAnimJoint437.setCenter([-0.0963,0.0065,-0.0065])
HAnimSegment438 = x3d.HAnimSegment()
HAnimSegment438.setName("r_tarsal_proximal_phalanx_3")
HAnimSegment438.setDEF("hanim_r_tarsal_proximal_phalanx_3")
Transform439 = x3d.Transform()
Transform439.setTranslation([-0.0963,0.0065,-0.0065])
Transform440 = x3d.Transform()
#Empty Transform
Shape441 = x3d.Shape()
Shape441.setUSE("HAnimJointShape")

Transform440.addChild(Shape441)

Transform439.addChildren(Transform440)

HAnimSegment438.addChildren(Transform439)
Shape442 = x3d.Shape()
LineSet443 = x3d.LineSet()
LineSet443.setVertexCount([2])
Coordinate444 = x3d.Coordinate()
Coordinate444.setPoint([-0.0963,0.0065,-0.0065,-0.0987,0.0034,0.0086])

LineSet443.setCoord(Coordinate444)
#from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA445 = x3d.ColorRGBA()
ColorRGBA445.setUSE("HAnimSegmentLineColorRGBA")

LineSet443.setColor(ColorRGBA445)

Shape442.setGeometry(LineSet443)

HAnimSegment438.addChildren(Shape442)

HAnimJoint437.addChildren(HAnimSegment438)
HAnimJoint446 = x3d.HAnimJoint()
HAnimJoint446.setName("r_tarsal_proximal_interphalangeal_3")
HAnimJoint446.setDEF("hanim_r_tarsal_proximal_interphalangeal_3")
HAnimJoint446.setCenter([-0.0987,0.0034,0.0086])
HAnimSegment447 = x3d.HAnimSegment()
HAnimSegment447.setName("r_tarsal_middle_phalanx_3")
HAnimSegment447.setDEF("hanim_r_tarsal_middle_phalanx_3")
Transform448 = x3d.Transform()
Transform448.setTranslation([-0.0987,0.0034,0.0086])
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
Coordinate453.setPoint([-0.0987,0.0034,0.0086,-0.1002,0.0013,0.0178])

LineSet452.setCoord(Coordinate453)
#from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA454 = x3d.ColorRGBA()
ColorRGBA454.setUSE("HAnimSegmentLineColorRGBA")

LineSet452.setColor(ColorRGBA454)

Shape451.setGeometry(LineSet452)

HAnimSegment447.addChildren(Shape451)

HAnimJoint446.addChildren(HAnimSegment447)
HAnimJoint455 = x3d.HAnimJoint()
HAnimJoint455.setName("r_tarsal_distal_interphalangeal_3")
HAnimJoint455.setDEF("hanim_r_tarsal_distal_interphalangeal_3")
HAnimJoint455.setCenter([-0.1002,0.0013,0.0178])

HAnimJoint446.addChildren(HAnimJoint455)

HAnimJoint437.addChildren(HAnimJoint446)

HAnimJoint428.addChildren(HAnimJoint437)

HAnimJoint419.addChildren(HAnimJoint428)

HAnimJoint337.addChildren(HAnimJoint419)

HAnimJoint324.addChildren(HAnimJoint337)
HAnimJoint456 = x3d.HAnimJoint()
HAnimJoint456.setName("r_calcaneocuboid")
HAnimJoint456.setDEF("hanim_r_calcaneocuboid")
HAnimJoint456.setCenter([-0.0889,0.0494,-0.1278])
HAnimSegment457 = x3d.HAnimSegment()
HAnimSegment457.setName("r_calcaneus")
HAnimSegment457.setDEF("hanim_r_calcaneus")
Transform458 = x3d.Transform()
Transform458.setTranslation([-0.0889,0.0494,-0.1278])
Transform459 = x3d.Transform()
#Empty Transform
Shape460 = x3d.Shape()
Shape460.setUSE("HAnimJointShape")

Transform459.addChild(Shape460)

Transform458.addChildren(Transform459)

HAnimSegment457.addChildren(Transform458)
Shape461 = x3d.Shape()
LineSet462 = x3d.LineSet()
LineSet462.setVertexCount([2])
Coordinate463 = x3d.Coordinate()
Coordinate463.setPoint([-0.0889,0.0494,-0.1278,-0.1105,0.0267,-0.0998])

LineSet462.setCoord(Coordinate463)
#from r_calcaneocuboid to r_transversetarsal vertices 2
ColorRGBA464 = x3d.ColorRGBA()
ColorRGBA464.setUSE("HAnimSegmentLineColorRGBA")

LineSet462.setColor(ColorRGBA464)

Shape461.setGeometry(LineSet462)

HAnimSegment457.addChildren(Shape461)

HAnimJoint456.addChildren(HAnimSegment457)
HAnimJoint465 = x3d.HAnimJoint()
HAnimJoint465.setName("r_transversetarsal")
HAnimJoint465.setDEF("hanim_r_transversetarsal")
HAnimJoint465.setCenter([-0.1105,0.0267,-0.0998])
HAnimSegment466 = x3d.HAnimSegment()
HAnimSegment466.setName("r_cuboid")
HAnimSegment466.setDEF("hanim_r_cuboid")
Transform467 = x3d.Transform()
Transform467.setTranslation([-0.1105,0.0267,-0.0998])
Transform468 = x3d.Transform()
#Empty Transform
Shape469 = x3d.Shape()
Shape469.setUSE("HAnimJointShape")

Transform468.addChild(Shape469)

Transform467.addChildren(Transform468)

HAnimSegment466.addChildren(Transform467)
Shape470 = x3d.Shape()
LineSet471 = x3d.LineSet()
LineSet471.setVertexCount([2])
Coordinate472 = x3d.Coordinate()
Coordinate472.setPoint([-0.1105,0.0267,-0.0998,-0.1063,0.016,-0.0634])

LineSet471.setCoord(Coordinate472)
#from r_transversetarsal to r_tarsometatarsal_4 vertices 2
ColorRGBA473 = x3d.ColorRGBA()
ColorRGBA473.setUSE("HAnimSegmentLineColorRGBA")

LineSet471.setColor(ColorRGBA473)

Shape470.setGeometry(LineSet471)

HAnimSegment466.addChildren(Shape470)
Shape474 = x3d.Shape()
LineSet475 = x3d.LineSet()
LineSet475.setVertexCount([2])
Coordinate476 = x3d.Coordinate()
Coordinate476.setPoint([-0.1105,0.0267,-0.0998,-0.1206,0.0124,-0.0671])

LineSet475.setCoord(Coordinate476)
#from r_transversetarsal to r_tarsometatarsal_5 vertices 2
ColorRGBA477 = x3d.ColorRGBA()
ColorRGBA477.setUSE("HAnimSegmentLineColorRGBA")

LineSet475.setColor(ColorRGBA477)

Shape474.setGeometry(LineSet475)

HAnimSegment466.addChildren(Shape474)

HAnimJoint465.addChildren(HAnimSegment466)
HAnimJoint478 = x3d.HAnimJoint()
HAnimJoint478.setName("r_tarsometatarsal_4")
HAnimJoint478.setDEF("hanim_r_tarsometatarsal_4")
HAnimJoint478.setCenter([-0.1063,0.016,-0.0634])
HAnimSegment479 = x3d.HAnimSegment()
HAnimSegment479.setName("r_metatarsal_4")
HAnimSegment479.setDEF("hanim_r_metatarsal_4")
Transform480 = x3d.Transform()
Transform480.setTranslation([-0.1063,0.016,-0.0634])
Transform481 = x3d.Transform()
#Empty Transform
Shape482 = x3d.Shape()
Shape482.setUSE("HAnimJointShape")

Transform481.addChild(Shape482)

Transform480.addChildren(Transform481)

HAnimSegment479.addChildren(Transform480)
Shape483 = x3d.Shape()
LineSet484 = x3d.LineSet()
LineSet484.setVertexCount([2])
Coordinate485 = x3d.Coordinate()
Coordinate485.setPoint([-0.1063,0.016,-0.0634,-0.1097,0.0058,-0.0107])

LineSet484.setCoord(Coordinate485)
#from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
ColorRGBA486 = x3d.ColorRGBA()
ColorRGBA486.setUSE("HAnimSegmentLineColorRGBA")

LineSet484.setColor(ColorRGBA486)

Shape483.setGeometry(LineSet484)

HAnimSegment479.addChildren(Shape483)

HAnimJoint478.addChildren(HAnimSegment479)
HAnimJoint487 = x3d.HAnimJoint()
HAnimJoint487.setName("r_metatarsophalangeal_4")
HAnimJoint487.setDEF("hanim_r_metatarsophalangeal_4")
HAnimJoint487.setCenter([-0.1097,0.0058,-0.0107])
HAnimSegment488 = x3d.HAnimSegment()
HAnimSegment488.setName("r_tarsal_proximal_phalanx_4")
HAnimSegment488.setDEF("hanim_r_tarsal_proximal_phalanx_4")
Transform489 = x3d.Transform()
Transform489.setTranslation([-0.1097,0.0058,-0.0107])
Transform490 = x3d.Transform()
#Empty Transform
Shape491 = x3d.Shape()
Shape491.setUSE("HAnimJointShape")

Transform490.addChild(Shape491)

Transform489.addChildren(Transform490)

HAnimSegment488.addChildren(Transform489)
Shape492 = x3d.Shape()
LineSet493 = x3d.LineSet()
LineSet493.setVertexCount([2])
Coordinate494 = x3d.Coordinate()
Coordinate494.setPoint([-0.1097,0.0058,-0.0107,-0.114,0.0037,0.0044])

LineSet493.setCoord(Coordinate494)
#from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA495 = x3d.ColorRGBA()
ColorRGBA495.setUSE("HAnimSegmentLineColorRGBA")

LineSet493.setColor(ColorRGBA495)

Shape492.setGeometry(LineSet493)

HAnimSegment488.addChildren(Shape492)

HAnimJoint487.addChildren(HAnimSegment488)
HAnimJoint496 = x3d.HAnimJoint()
HAnimJoint496.setName("r_tarsal_proximal_interphalangeal_4")
HAnimJoint496.setDEF("hanim_r_tarsal_proximal_interphalangeal_4")
HAnimJoint496.setCenter([-0.114,0.0037,0.0044])
HAnimSegment497 = x3d.HAnimSegment()
HAnimSegment497.setName("r_tarsal_middle_phalanx_4")
HAnimSegment497.setDEF("hanim_r_tarsal_middle_phalanx_4")
Transform498 = x3d.Transform()
Transform498.setTranslation([-0.114,0.0037,0.0044])
Transform499 = x3d.Transform()
#Empty Transform
Shape500 = x3d.Shape()
Shape500.setUSE("HAnimJointShape")

Transform499.addChild(Shape500)

Transform498.addChildren(Transform499)

HAnimSegment497.addChildren(Transform498)
Shape501 = x3d.Shape()
LineSet502 = x3d.LineSet()
LineSet502.setVertexCount([2])
Coordinate503 = x3d.Coordinate()
Coordinate503.setPoint([-0.114,0.0037,0.0044,-0.1155,0.0008,0.0118])

LineSet502.setCoord(Coordinate503)
#from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA504 = x3d.ColorRGBA()
ColorRGBA504.setUSE("HAnimSegmentLineColorRGBA")

LineSet502.setColor(ColorRGBA504)

Shape501.setGeometry(LineSet502)

HAnimSegment497.addChildren(Shape501)

HAnimJoint496.addChildren(HAnimSegment497)
HAnimJoint505 = x3d.HAnimJoint()
HAnimJoint505.setName("r_tarsal_distal_interphalangeal_4")
HAnimJoint505.setDEF("hanim_r_tarsal_distal_interphalangeal_4")
HAnimJoint505.setCenter([-0.1155,0.0008,0.0118])

HAnimJoint496.addChildren(HAnimJoint505)

HAnimJoint487.addChildren(HAnimJoint496)

HAnimJoint478.addChildren(HAnimJoint487)

HAnimJoint465.addChildren(HAnimJoint478)
HAnimJoint506 = x3d.HAnimJoint()
HAnimJoint506.setName("r_tarsometatarsal_5")
HAnimJoint506.setDEF("hanim_r_tarsometatarsal_5")
HAnimJoint506.setCenter([-0.1206,0.0124,-0.0671])
HAnimSegment507 = x3d.HAnimSegment()
HAnimSegment507.setName("r_metatarsal_5")
HAnimSegment507.setDEF("hanim_r_metatarsal_5")
Transform508 = x3d.Transform()
Transform508.setTranslation([-0.1206,0.0124,-0.0671])
Transform509 = x3d.Transform()
#Empty Transform
Shape510 = x3d.Shape()
Shape510.setUSE("HAnimJointShape")

Transform509.addChild(Shape510)

Transform508.addChildren(Transform509)

HAnimSegment507.addChildren(Transform508)
Shape511 = x3d.Shape()
LineSet512 = x3d.LineSet()
LineSet512.setVertexCount([2])
Coordinate513 = x3d.Coordinate()
Coordinate513.setPoint([-0.1206,0.0124,-0.0671,-0.1239,0.0051,-0.0153])

LineSet512.setCoord(Coordinate513)
#from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
ColorRGBA514 = x3d.ColorRGBA()
ColorRGBA514.setUSE("HAnimSegmentLineColorRGBA")

LineSet512.setColor(ColorRGBA514)

Shape511.setGeometry(LineSet512)

HAnimSegment507.addChildren(Shape511)

HAnimJoint506.addChildren(HAnimSegment507)
HAnimJoint515 = x3d.HAnimJoint()
HAnimJoint515.setName("r_metatarsophalangeal_5")
HAnimJoint515.setDEF("hanim_r_metatarsophalangeal_5")
HAnimJoint515.setCenter([-0.1239,0.0051,-0.0153])
HAnimSegment516 = x3d.HAnimSegment()
HAnimSegment516.setName("r_tarsal_proximal_phalanx_5")
HAnimSegment516.setDEF("hanim_r_tarsal_proximal_phalanx_5")
Transform517 = x3d.Transform()
Transform517.setTranslation([-0.1239,0.0051,-0.0153])
Transform518 = x3d.Transform()
#Empty Transform
Shape519 = x3d.Shape()
Shape519.setUSE("HAnimJointShape")

Transform518.addChild(Shape519)

Transform517.addChildren(Transform518)

HAnimSegment516.addChildren(Transform517)
Shape520 = x3d.Shape()
LineSet521 = x3d.LineSet()
LineSet521.setVertexCount([2])
Coordinate522 = x3d.Coordinate()
Coordinate522.setPoint([-0.1239,0.0051,-0.0153,-0.1262,0.0023,-0.0077])

LineSet521.setCoord(Coordinate522)
#from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA523 = x3d.ColorRGBA()
ColorRGBA523.setUSE("HAnimSegmentLineColorRGBA")

LineSet521.setColor(ColorRGBA523)

Shape520.setGeometry(LineSet521)

HAnimSegment516.addChildren(Shape520)

HAnimJoint515.addChildren(HAnimSegment516)
HAnimJoint524 = x3d.HAnimJoint()
HAnimJoint524.setName("r_tarsal_proximal_interphalangeal_5")
HAnimJoint524.setDEF("hanim_r_tarsal_proximal_interphalangeal_5")
HAnimJoint524.setCenter([-0.1262,0.0023,-0.0077])
HAnimSegment525 = x3d.HAnimSegment()
HAnimSegment525.setName("r_tarsal_middle_phalanx_5")
HAnimSegment525.setDEF("hanim_r_tarsal_middle_phalanx_5")
Transform526 = x3d.Transform()
Transform526.setTranslation([-0.1262,0.0023,-0.0077])
Transform527 = x3d.Transform()
#Empty Transform
Shape528 = x3d.Shape()
Shape528.setUSE("HAnimJointShape")

Transform527.addChild(Shape528)

Transform526.addChildren(Transform527)

HAnimSegment525.addChildren(Transform526)
Shape529 = x3d.Shape()
LineSet530 = x3d.LineSet()
LineSet530.setVertexCount([2])
Coordinate531 = x3d.Coordinate()
Coordinate531.setPoint([-0.1262,0.0023,-0.0077,-0.1271,0,0])

LineSet530.setCoord(Coordinate531)
#from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA532 = x3d.ColorRGBA()
ColorRGBA532.setUSE("HAnimSegmentLineColorRGBA")

LineSet530.setColor(ColorRGBA532)

Shape529.setGeometry(LineSet530)

HAnimSegment525.addChildren(Shape529)

HAnimJoint524.addChildren(HAnimSegment525)
HAnimJoint533 = x3d.HAnimJoint()
HAnimJoint533.setName("r_tarsal_distal_interphalangeal_5")
HAnimJoint533.setDEF("hanim_r_tarsal_distal_interphalangeal_5")
HAnimJoint533.setCenter([-0.1271,0,0])

HAnimJoint524.addChildren(HAnimJoint533)

HAnimJoint515.addChildren(HAnimJoint524)

HAnimJoint506.addChildren(HAnimJoint515)

HAnimJoint465.addChildren(HAnimJoint506)

HAnimJoint456.addChildren(HAnimJoint465)

HAnimJoint324.addChildren(HAnimJoint456)

HAnimJoint315.addChildren(HAnimJoint324)

HAnimJoint306.addChildren(HAnimJoint315)

HAnimJoint65.addChildren(HAnimJoint306)

HAnimJoint52.addChildren(HAnimJoint65)
HAnimJoint534 = x3d.HAnimJoint()
HAnimJoint534.setName("vl5")
HAnimJoint534.setDEF("hanim_vl5")
HAnimJoint534.setCenter([0.0028,1.0568,-0.0776])
HAnimSegment535 = x3d.HAnimSegment()
HAnimSegment535.setName("l5")
HAnimSegment535.setDEF("hanim_l5")
Transform536 = x3d.Transform()
Transform536.setTranslation([0.0028,1.0568,-0.0776])
Transform537 = x3d.Transform()
#Empty Transform
Shape538 = x3d.Shape()
Shape538.setUSE("HAnimJointShape")

Transform537.addChild(Shape538)

Transform536.addChildren(Transform537)

HAnimSegment535.addChildren(Transform536)
Shape539 = x3d.Shape()
LineSet540 = x3d.LineSet()
LineSet540.setVertexCount([2])
Coordinate541 = x3d.Coordinate()
Coordinate541.setPoint([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787])

LineSet540.setCoord(Coordinate541)
#from vl5 to vl4 vertices 2
ColorRGBA542 = x3d.ColorRGBA()
ColorRGBA542.setUSE("HAnimSegmentLineColorRGBA")

LineSet540.setColor(ColorRGBA542)

Shape539.setGeometry(LineSet540)

HAnimSegment535.addChildren(Shape539)

HAnimJoint534.addChildren(HAnimSegment535)
HAnimJoint543 = x3d.HAnimJoint()
HAnimJoint543.setName("vl4")
HAnimJoint543.setDEF("hanim_vl4")
HAnimJoint543.setCenter([0.0035,1.0925,-0.0787])
HAnimSegment544 = x3d.HAnimSegment()
HAnimSegment544.setName("l4")
HAnimSegment544.setDEF("hanim_l4")
Transform545 = x3d.Transform()
Transform545.setTranslation([0.0035,1.0925,-0.0787])
Transform546 = x3d.Transform()
#Empty Transform
Shape547 = x3d.Shape()
Shape547.setUSE("HAnimJointShape")

Transform546.addChild(Shape547)

Transform545.addChildren(Transform546)

HAnimSegment544.addChildren(Transform545)
Shape548 = x3d.Shape()
LineSet549 = x3d.LineSet()
LineSet549.setVertexCount([2])
Coordinate550 = x3d.Coordinate()
Coordinate550.setPoint([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796])

LineSet549.setCoord(Coordinate550)
#from vl4 to vl3 vertices 2
ColorRGBA551 = x3d.ColorRGBA()
ColorRGBA551.setUSE("HAnimSegmentLineColorRGBA")

LineSet549.setColor(ColorRGBA551)

Shape548.setGeometry(LineSet549)

HAnimSegment544.addChildren(Shape548)

HAnimJoint543.addChildren(HAnimSegment544)
HAnimJoint552 = x3d.HAnimJoint()
HAnimJoint552.setName("vl3")
HAnimJoint552.setDEF("hanim_vl3")
HAnimJoint552.setCenter([0.0041,1.1276,-0.0796])
HAnimSegment553 = x3d.HAnimSegment()
HAnimSegment553.setName("l3")
HAnimSegment553.setDEF("hanim_l3")
Transform554 = x3d.Transform()
Transform554.setTranslation([0.0041,1.1276,-0.0796])
Transform555 = x3d.Transform()
#Empty Transform
Shape556 = x3d.Shape()
Shape556.setUSE("HAnimJointShape")

Transform555.addChild(Shape556)

Transform554.addChildren(Transform555)

HAnimSegment553.addChildren(Transform554)
Shape557 = x3d.Shape()
LineSet558 = x3d.LineSet()
LineSet558.setVertexCount([2])
Coordinate559 = x3d.Coordinate()
Coordinate559.setPoint([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08])

LineSet558.setCoord(Coordinate559)
#from vl3 to vl2 vertices 2
ColorRGBA560 = x3d.ColorRGBA()
ColorRGBA560.setUSE("HAnimSegmentLineColorRGBA")

LineSet558.setColor(ColorRGBA560)

Shape557.setGeometry(LineSet558)

HAnimSegment553.addChildren(Shape557)

HAnimJoint552.addChildren(HAnimSegment553)
HAnimJoint561 = x3d.HAnimJoint()
HAnimJoint561.setName("vl2")
HAnimJoint561.setDEF("hanim_vl2")
HAnimJoint561.setCenter([0.0045,1.1546,-0.08])
HAnimSegment562 = x3d.HAnimSegment()
HAnimSegment562.setName("l2")
HAnimSegment562.setDEF("hanim_l2")
Transform563 = x3d.Transform()
Transform563.setTranslation([0.0045,1.1546,-0.08])
Transform564 = x3d.Transform()
#Empty Transform
Shape565 = x3d.Shape()
Shape565.setUSE("HAnimJointShape")

Transform564.addChild(Shape565)

Transform563.addChildren(Transform564)

HAnimSegment562.addChildren(Transform563)
Shape566 = x3d.Shape()
LineSet567 = x3d.LineSet()
LineSet567.setVertexCount([2])
Coordinate568 = x3d.Coordinate()
Coordinate568.setPoint([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805])

LineSet567.setCoord(Coordinate568)
#from vl2 to vl1 vertices 2
ColorRGBA569 = x3d.ColorRGBA()
ColorRGBA569.setUSE("HAnimSegmentLineColorRGBA")

LineSet567.setColor(ColorRGBA569)

Shape566.setGeometry(LineSet567)

HAnimSegment562.addChildren(Shape566)

HAnimJoint561.addChildren(HAnimSegment562)
HAnimJoint570 = x3d.HAnimJoint()
HAnimJoint570.setName("vl1")
HAnimJoint570.setDEF("hanim_vl1")
HAnimJoint570.setCenter([0.0048,1.1912,-0.0805])
HAnimSegment571 = x3d.HAnimSegment()
HAnimSegment571.setName("l1")
HAnimSegment571.setDEF("hanim_l1")
Transform572 = x3d.Transform()
Transform572.setTranslation([0.0048,1.1912,-0.0805])
Transform573 = x3d.Transform()
#Empty Transform
Shape574 = x3d.Shape()
Shape574.setUSE("HAnimJointShape")

Transform573.addChild(Shape574)

Transform572.addChildren(Transform573)

HAnimSegment571.addChildren(Transform572)
Shape575 = x3d.Shape()
LineSet576 = x3d.LineSet()
LineSet576.setVertexCount([2])
Coordinate577 = x3d.Coordinate()
Coordinate577.setPoint([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808])

LineSet576.setCoord(Coordinate577)
#from vl1 to vt12 vertices 2
ColorRGBA578 = x3d.ColorRGBA()
ColorRGBA578.setUSE("HAnimSegmentLineColorRGBA")

LineSet576.setColor(ColorRGBA578)

Shape575.setGeometry(LineSet576)

HAnimSegment571.addChildren(Shape575)

HAnimJoint570.addChildren(HAnimSegment571)
HAnimJoint579 = x3d.HAnimJoint()
HAnimJoint579.setName("vt12")
HAnimJoint579.setDEF("hanim_vt12")
HAnimJoint579.setCenter([0.0051,1.2278,-0.0808])
HAnimSegment580 = x3d.HAnimSegment()
HAnimSegment580.setName("t12")
HAnimSegment580.setDEF("hanim_t12")
Transform581 = x3d.Transform()
Transform581.setTranslation([0.0051,1.2278,-0.0808])
Transform582 = x3d.Transform()
#Empty Transform
Shape583 = x3d.Shape()
Shape583.setUSE("HAnimJointShape")

Transform582.addChild(Shape583)

Transform581.addChildren(Transform582)

HAnimSegment580.addChildren(Transform581)
Shape584 = x3d.Shape()
LineSet585 = x3d.LineSet()
LineSet585.setVertexCount([2])
Coordinate586 = x3d.Coordinate()
Coordinate586.setPoint([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081])

LineSet585.setCoord(Coordinate586)
#from vt12 to vt11 vertices 2
ColorRGBA587 = x3d.ColorRGBA()
ColorRGBA587.setUSE("HAnimSegmentLineColorRGBA")

LineSet585.setColor(ColorRGBA587)

Shape584.setGeometry(LineSet585)

HAnimSegment580.addChildren(Shape584)

HAnimJoint579.addChildren(HAnimSegment580)
HAnimJoint588 = x3d.HAnimJoint()
HAnimJoint588.setName("vt11")
HAnimJoint588.setDEF("hanim_vt11")
HAnimJoint588.setCenter([0.0053,1.2679,-0.081])
HAnimSegment589 = x3d.HAnimSegment()
HAnimSegment589.setName("t11")
HAnimSegment589.setDEF("hanim_t11")
Transform590 = x3d.Transform()
Transform590.setTranslation([0.0053,1.2679,-0.081])
Transform591 = x3d.Transform()
#Empty Transform
Shape592 = x3d.Shape()
Shape592.setUSE("HAnimJointShape")

Transform591.addChild(Shape592)

Transform590.addChildren(Transform591)

HAnimSegment589.addChildren(Transform590)
Shape593 = x3d.Shape()
LineSet594 = x3d.LineSet()
LineSet594.setVertexCount([2])
Coordinate595 = x3d.Coordinate()
Coordinate595.setPoint([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822])

LineSet594.setCoord(Coordinate595)
#from vt11 to vt10 vertices 2
ColorRGBA596 = x3d.ColorRGBA()
ColorRGBA596.setUSE("HAnimSegmentLineColorRGBA")

LineSet594.setColor(ColorRGBA596)

Shape593.setGeometry(LineSet594)

HAnimSegment589.addChildren(Shape593)

HAnimJoint588.addChildren(HAnimSegment589)
HAnimJoint597 = x3d.HAnimJoint()
HAnimJoint597.setName("vt10")
HAnimJoint597.setDEF("hanim_vt10")
HAnimJoint597.setCenter([0.0056,1.2848,-0.0822])
HAnimSegment598 = x3d.HAnimSegment()
HAnimSegment598.setName("t10")
HAnimSegment598.setDEF("hanim_t10")
Transform599 = x3d.Transform()
Transform599.setTranslation([0.0056,1.2848,-0.0822])
Transform600 = x3d.Transform()
#Empty Transform
Shape601 = x3d.Shape()
Shape601.setUSE("HAnimJointShape")

Transform600.addChild(Shape601)

Transform599.addChildren(Transform600)

HAnimSegment598.addChildren(Transform599)
Shape602 = x3d.Shape()
LineSet603 = x3d.LineSet()
LineSet603.setVertexCount([2])
Coordinate604 = x3d.Coordinate()
Coordinate604.setPoint([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838])

LineSet603.setCoord(Coordinate604)
#from vt10 to vt9 vertices 2
ColorRGBA605 = x3d.ColorRGBA()
ColorRGBA605.setUSE("HAnimSegmentLineColorRGBA")

LineSet603.setColor(ColorRGBA605)

Shape602.setGeometry(LineSet603)

HAnimSegment598.addChildren(Shape602)

HAnimJoint597.addChildren(HAnimSegment598)
HAnimJoint606 = x3d.HAnimJoint()
HAnimJoint606.setName("vt9")
HAnimJoint606.setDEF("hanim_vt9")
HAnimJoint606.setCenter([0.0057,1.3126,-0.0838])
HAnimSegment607 = x3d.HAnimSegment()
HAnimSegment607.setName("t9")
HAnimSegment607.setDEF("hanim_t9")
Transform608 = x3d.Transform()
Transform608.setTranslation([0.0057,1.3126,-0.0838])
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
Coordinate613.setPoint([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845])

LineSet612.setCoord(Coordinate613)
#from vt9 to vt8 vertices 2
ColorRGBA614 = x3d.ColorRGBA()
ColorRGBA614.setUSE("HAnimSegmentLineColorRGBA")

LineSet612.setColor(ColorRGBA614)

Shape611.setGeometry(LineSet612)

HAnimSegment607.addChildren(Shape611)

HAnimJoint606.addChildren(HAnimSegment607)
HAnimJoint615 = x3d.HAnimJoint()
HAnimJoint615.setName("vt8")
HAnimJoint615.setDEF("hanim_vt8")
HAnimJoint615.setCenter([0.0057,1.3382,-0.0845])
HAnimSegment616 = x3d.HAnimSegment()
HAnimSegment616.setName("t8")
HAnimSegment616.setDEF("hanim_t8")
Transform617 = x3d.Transform()
Transform617.setTranslation([0.0057,1.3382,-0.0845])
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
Coordinate622.setPoint([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833])

LineSet621.setCoord(Coordinate622)
#from vt8 to vt7 vertices 2
ColorRGBA623 = x3d.ColorRGBA()
ColorRGBA623.setUSE("HAnimSegmentLineColorRGBA")

LineSet621.setColor(ColorRGBA623)

Shape620.setGeometry(LineSet621)

HAnimSegment616.addChildren(Shape620)

HAnimJoint615.addChildren(HAnimSegment616)
HAnimJoint624 = x3d.HAnimJoint()
HAnimJoint624.setName("vt7")
HAnimJoint624.setDEF("hanim_vt7")
HAnimJoint624.setCenter([0.0058,1.3625,-0.0833])
HAnimSegment625 = x3d.HAnimSegment()
HAnimSegment625.setName("t7")
HAnimSegment625.setDEF("hanim_t7")
Transform626 = x3d.Transform()
Transform626.setTranslation([0.0058,1.3625,-0.0833])
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
Coordinate631.setPoint([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08])

LineSet630.setCoord(Coordinate631)
#from vt7 to vt6 vertices 2
ColorRGBA632 = x3d.ColorRGBA()
ColorRGBA632.setUSE("HAnimSegmentLineColorRGBA")

LineSet630.setColor(ColorRGBA632)

Shape629.setGeometry(LineSet630)

HAnimSegment625.addChildren(Shape629)

HAnimJoint624.addChildren(HAnimSegment625)
HAnimJoint633 = x3d.HAnimJoint()
HAnimJoint633.setName("vt6")
HAnimJoint633.setDEF("hanim_vt6")
HAnimJoint633.setCenter([0.0059,1.3866,-0.08])
HAnimSegment634 = x3d.HAnimSegment()
HAnimSegment634.setName("t6")
HAnimSegment634.setDEF("hanim_t6")
Transform635 = x3d.Transform()
Transform635.setTranslation([0.0059,1.3866,-0.08])
Transform636 = x3d.Transform()
#Empty Transform
Shape637 = x3d.Shape()
Shape637.setUSE("HAnimJointShape")

Transform636.addChild(Shape637)

Transform635.addChildren(Transform636)

HAnimSegment634.addChildren(Transform635)
Shape638 = x3d.Shape()
LineSet639 = x3d.LineSet()
LineSet639.setVertexCount([2])
Coordinate640 = x3d.Coordinate()
Coordinate640.setPoint([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745])

LineSet639.setCoord(Coordinate640)
#from vt6 to vt5 vertices 2
ColorRGBA641 = x3d.ColorRGBA()
ColorRGBA641.setUSE("HAnimSegmentLineColorRGBA")

LineSet639.setColor(ColorRGBA641)

Shape638.setGeometry(LineSet639)

HAnimSegment634.addChildren(Shape638)

HAnimJoint633.addChildren(HAnimSegment634)
HAnimJoint642 = x3d.HAnimJoint()
HAnimJoint642.setName("vt5")
HAnimJoint642.setDEF("hanim_vt5")
HAnimJoint642.setCenter([0.006,1.4102,-0.0745])
HAnimSegment643 = x3d.HAnimSegment()
HAnimSegment643.setName("t5")
HAnimSegment643.setDEF("hanim_t5")
Transform644 = x3d.Transform()
Transform644.setTranslation([0.006,1.4102,-0.0745])
Transform645 = x3d.Transform()
#Empty Transform
Shape646 = x3d.Shape()
Shape646.setUSE("HAnimJointShape")

Transform645.addChild(Shape646)

Transform644.addChildren(Transform645)

HAnimSegment643.addChildren(Transform644)
Shape647 = x3d.Shape()
LineSet648 = x3d.LineSet()
LineSet648.setVertexCount([2])
Coordinate649 = x3d.Coordinate()
Coordinate649.setPoint([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675])

LineSet648.setCoord(Coordinate649)
#from vt5 to vt4 vertices 2
ColorRGBA650 = x3d.ColorRGBA()
ColorRGBA650.setUSE("HAnimSegmentLineColorRGBA")

LineSet648.setColor(ColorRGBA650)

Shape647.setGeometry(LineSet648)

HAnimSegment643.addChildren(Shape647)

HAnimJoint642.addChildren(HAnimSegment643)
HAnimJoint651 = x3d.HAnimJoint()
HAnimJoint651.setName("vt4")
HAnimJoint651.setDEF("hanim_vt4")
HAnimJoint651.setCenter([0.0061,1.432,-0.0675])
HAnimSegment652 = x3d.HAnimSegment()
HAnimSegment652.setName("t4")
HAnimSegment652.setDEF("hanim_t4")
Transform653 = x3d.Transform()
Transform653.setTranslation([0.0061,1.432,-0.0675])
Transform654 = x3d.Transform()
#Empty Transform
Shape655 = x3d.Shape()
Shape655.setUSE("HAnimJointShape")

Transform654.addChild(Shape655)

Transform653.addChildren(Transform654)

HAnimSegment652.addChildren(Transform653)
Shape656 = x3d.Shape()
LineSet657 = x3d.LineSet()
LineSet657.setVertexCount([2])
Coordinate658 = x3d.Coordinate()
Coordinate658.setPoint([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057])

LineSet657.setCoord(Coordinate658)
#from vt4 to vt3 vertices 2
ColorRGBA659 = x3d.ColorRGBA()
ColorRGBA659.setUSE("HAnimSegmentLineColorRGBA")

LineSet657.setColor(ColorRGBA659)

Shape656.setGeometry(LineSet657)

HAnimSegment652.addChildren(Shape656)

HAnimJoint651.addChildren(HAnimSegment652)
HAnimJoint660 = x3d.HAnimJoint()
HAnimJoint660.setName("vt3")
HAnimJoint660.setDEF("hanim_vt3")
HAnimJoint660.setCenter([0.0062,1.4583,-0.057])
HAnimSegment661 = x3d.HAnimSegment()
HAnimSegment661.setName("t3")
HAnimSegment661.setDEF("hanim_t3")
Transform662 = x3d.Transform()
Transform662.setTranslation([0.0062,1.4583,-0.057])
Transform663 = x3d.Transform()
#Empty Transform
Shape664 = x3d.Shape()
Shape664.setUSE("HAnimJointShape")

Transform663.addChild(Shape664)

Transform662.addChildren(Transform663)

HAnimSegment661.addChildren(Transform662)
Shape665 = x3d.Shape()
LineSet666 = x3d.LineSet()
LineSet666.setVertexCount([2])
Coordinate667 = x3d.Coordinate()
Coordinate667.setPoint([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484])

LineSet666.setCoord(Coordinate667)
#from vt3 to vt2 vertices 2
ColorRGBA668 = x3d.ColorRGBA()
ColorRGBA668.setUSE("HAnimSegmentLineColorRGBA")

LineSet666.setColor(ColorRGBA668)

Shape665.setGeometry(LineSet666)

HAnimSegment661.addChildren(Shape665)

HAnimJoint660.addChildren(HAnimSegment661)
HAnimJoint669 = x3d.HAnimJoint()
HAnimJoint669.setName("vt2")
HAnimJoint669.setDEF("hanim_vt2")
HAnimJoint669.setCenter([0.0063,1.4761,-0.0484])
HAnimSegment670 = x3d.HAnimSegment()
HAnimSegment670.setName("t2")
HAnimSegment670.setDEF("hanim_t2")
Transform671 = x3d.Transform()
Transform671.setTranslation([0.0063,1.4761,-0.0484])
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
Coordinate676.setPoint([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387])

LineSet675.setCoord(Coordinate676)
#from vt2 to vt1 vertices 2
ColorRGBA677 = x3d.ColorRGBA()
ColorRGBA677.setUSE("HAnimSegmentLineColorRGBA")

LineSet675.setColor(ColorRGBA677)

Shape674.setGeometry(LineSet675)

HAnimSegment670.addChildren(Shape674)

HAnimJoint669.addChildren(HAnimSegment670)
HAnimJoint678 = x3d.HAnimJoint()
HAnimJoint678.setName("vt1")
HAnimJoint678.setDEF("hanim_vt1")
HAnimJoint678.setCenter([0.0065,1.4951,-0.0387])
HAnimSegment679 = x3d.HAnimSegment()
HAnimSegment679.setName("t1")
HAnimSegment679.setDEF("hanim_t1")
Transform680 = x3d.Transform()
Transform680.setTranslation([0.0065,1.4951,-0.0387])
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
Coordinate685.setPoint([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301])

LineSet684.setCoord(Coordinate685)
#from vt1 to vc7 vertices 2
ColorRGBA686 = x3d.ColorRGBA()
ColorRGBA686.setUSE("HAnimSegmentLineColorRGBA")

LineSet684.setColor(ColorRGBA686)

Shape683.setGeometry(LineSet684)

HAnimSegment679.addChildren(Shape683)
Shape687 = x3d.Shape()
LineSet688 = x3d.LineSet()
LineSet688.setVertexCount([2])
Coordinate689 = x3d.Coordinate()
Coordinate689.setPoint([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353])

LineSet688.setCoord(Coordinate689)
#from vt1 to l_sternoclavicular vertices 2
ColorRGBA690 = x3d.ColorRGBA()
ColorRGBA690.setUSE("HAnimSegmentLineColorRGBA")

LineSet688.setColor(ColorRGBA690)

Shape687.setGeometry(LineSet688)

HAnimSegment679.addChildren(Shape687)
Shape691 = x3d.Shape()
LineSet692 = x3d.LineSet()
LineSet692.setVertexCount([2])
Coordinate693 = x3d.Coordinate()
Coordinate693.setPoint([0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033])

LineSet692.setCoord(Coordinate693)
#from vt1 to r_sternoclavicular vertices 2
ColorRGBA694 = x3d.ColorRGBA()
ColorRGBA694.setUSE("HAnimSegmentLineColorRGBA")

LineSet692.setColor(ColorRGBA694)

Shape691.setGeometry(LineSet692)

HAnimSegment679.addChildren(Shape691)

HAnimJoint678.addChildren(HAnimSegment679)
HAnimJoint695 = x3d.HAnimJoint()
HAnimJoint695.setName("vc7")
HAnimJoint695.setDEF("hanim_vc7")
HAnimJoint695.setCenter([0.0066,1.5132,-0.0301])
HAnimSegment696 = x3d.HAnimSegment()
HAnimSegment696.setName("c7")
HAnimSegment696.setDEF("hanim_c7")
Transform697 = x3d.Transform()
Transform697.setTranslation([0.0066,1.5132,-0.0301])
Transform698 = x3d.Transform()
#Empty Transform
Shape699 = x3d.Shape()
Shape699.setUSE("HAnimJointShape")

Transform698.addChild(Shape699)

Transform697.addChildren(Transform698)

HAnimSegment696.addChildren(Transform697)
Shape700 = x3d.Shape()
LineSet701 = x3d.LineSet()
LineSet701.setVertexCount([2])
Coordinate702 = x3d.Coordinate()
Coordinate702.setPoint([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143])

LineSet701.setCoord(Coordinate702)
#from vc7 to vc6 vertices 2
ColorRGBA703 = x3d.ColorRGBA()
ColorRGBA703.setUSE("HAnimSegmentLineColorRGBA")

LineSet701.setColor(ColorRGBA703)

Shape700.setGeometry(LineSet701)

HAnimSegment696.addChildren(Shape700)

HAnimJoint695.addChildren(HAnimSegment696)
HAnimJoint704 = x3d.HAnimJoint()
HAnimJoint704.setName("vc6")
HAnimJoint704.setDEF("hanim_vc6")
HAnimJoint704.setCenter([0.0066,1.5357,-0.0143])
HAnimSegment705 = x3d.HAnimSegment()
HAnimSegment705.setName("c6")
HAnimSegment705.setDEF("hanim_c6")
Transform706 = x3d.Transform()
Transform706.setTranslation([0.0066,1.5357,-0.0143])
Transform707 = x3d.Transform()
#Empty Transform
Shape708 = x3d.Shape()
Shape708.setUSE("HAnimJointShape")

Transform707.addChild(Shape708)

Transform706.addChildren(Transform707)

HAnimSegment705.addChildren(Transform706)
Shape709 = x3d.Shape()
LineSet710 = x3d.LineSet()
LineSet710.setVertexCount([2])
Coordinate711 = x3d.Coordinate()
Coordinate711.setPoint([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082])

LineSet710.setCoord(Coordinate711)
#from vc6 to vc5 vertices 2
ColorRGBA712 = x3d.ColorRGBA()
ColorRGBA712.setUSE("HAnimSegmentLineColorRGBA")

LineSet710.setColor(ColorRGBA712)

Shape709.setGeometry(LineSet710)

HAnimSegment705.addChildren(Shape709)

HAnimJoint704.addChildren(HAnimSegment705)
HAnimJoint713 = x3d.HAnimJoint()
HAnimJoint713.setName("vc5")
HAnimJoint713.setDEF("hanim_vc5")
HAnimJoint713.setCenter([0.0066,1.552,-0.0082])
HAnimSegment714 = x3d.HAnimSegment()
HAnimSegment714.setName("c5")
HAnimSegment714.setDEF("hanim_c5")
Transform715 = x3d.Transform()
Transform715.setTranslation([0.0066,1.552,-0.0082])
Transform716 = x3d.Transform()
#Empty Transform
Shape717 = x3d.Shape()
Shape717.setUSE("HAnimJointShape")

Transform716.addChild(Shape717)

Transform715.addChildren(Transform716)

HAnimSegment714.addChildren(Transform715)
Shape718 = x3d.Shape()
LineSet719 = x3d.LineSet()
LineSet719.setVertexCount([2])
Coordinate720 = x3d.Coordinate()
Coordinate720.setPoint([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084])

LineSet719.setCoord(Coordinate720)
#from vc5 to vc4 vertices 2
ColorRGBA721 = x3d.ColorRGBA()
ColorRGBA721.setUSE("HAnimSegmentLineColorRGBA")

LineSet719.setColor(ColorRGBA721)

Shape718.setGeometry(LineSet719)

HAnimSegment714.addChildren(Shape718)

HAnimJoint713.addChildren(HAnimSegment714)
HAnimJoint722 = x3d.HAnimJoint()
HAnimJoint722.setName("vc4")
HAnimJoint722.setDEF("hanim_vc4")
HAnimJoint722.setCenter([0.0066,1.5662,-0.0084])
HAnimSegment723 = x3d.HAnimSegment()
HAnimSegment723.setName("c4")
HAnimSegment723.setDEF("hanim_c4")
Transform724 = x3d.Transform()
Transform724.setTranslation([0.0066,1.5662,-0.0084])
Transform725 = x3d.Transform()
#Empty Transform
Shape726 = x3d.Shape()
Shape726.setUSE("HAnimJointShape")

Transform725.addChild(Shape726)

Transform724.addChildren(Transform725)

HAnimSegment723.addChildren(Transform724)
Shape727 = x3d.Shape()
LineSet728 = x3d.LineSet()
LineSet728.setVertexCount([2])
Coordinate729 = x3d.Coordinate()
Coordinate729.setPoint([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103])

LineSet728.setCoord(Coordinate729)
#from vc4 to vc3 vertices 2
ColorRGBA730 = x3d.ColorRGBA()
ColorRGBA730.setUSE("HAnimSegmentLineColorRGBA")

LineSet728.setColor(ColorRGBA730)

Shape727.setGeometry(LineSet728)

HAnimSegment723.addChildren(Shape727)

HAnimJoint722.addChildren(HAnimSegment723)
HAnimJoint731 = x3d.HAnimJoint()
HAnimJoint731.setName("vc3")
HAnimJoint731.setDEF("hanim_vc3")
HAnimJoint731.setCenter([0.0066,1.58,-0.0103])
HAnimSegment732 = x3d.HAnimSegment()
HAnimSegment732.setName("c3")
HAnimSegment732.setDEF("hanim_c3")
Transform733 = x3d.Transform()
Transform733.setTranslation([0.0066,1.58,-0.0103])
Transform734 = x3d.Transform()
#Empty Transform
Shape735 = x3d.Shape()
Shape735.setUSE("HAnimJointShape")

Transform734.addChild(Shape735)

Transform733.addChildren(Transform734)

HAnimSegment732.addChildren(Transform733)
Shape736 = x3d.Shape()
LineSet737 = x3d.LineSet()
LineSet737.setVertexCount([2])
Coordinate738 = x3d.Coordinate()
Coordinate738.setPoint([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103])

LineSet737.setCoord(Coordinate738)
#from vc3 to vc2 vertices 2
ColorRGBA739 = x3d.ColorRGBA()
ColorRGBA739.setUSE("HAnimSegmentLineColorRGBA")

LineSet737.setColor(ColorRGBA739)

Shape736.setGeometry(LineSet737)

HAnimSegment732.addChildren(Shape736)

HAnimJoint731.addChildren(HAnimSegment732)
HAnimJoint740 = x3d.HAnimJoint()
HAnimJoint740.setName("vc2")
HAnimJoint740.setDEF("hanim_vc2")
HAnimJoint740.setCenter([0.0066,1.5928,-0.0103])
HAnimSegment741 = x3d.HAnimSegment()
HAnimSegment741.setName("c2")
HAnimSegment741.setDEF("hanim_c2")
Transform742 = x3d.Transform()
Transform742.setTranslation([0.0066,1.5928,-0.0103])
Transform743 = x3d.Transform()
#Empty Transform
Shape744 = x3d.Shape()
Shape744.setUSE("HAnimJointShape")

Transform743.addChild(Shape744)

Transform742.addChildren(Transform743)

HAnimSegment741.addChildren(Transform742)
Shape745 = x3d.Shape()
LineSet746 = x3d.LineSet()
LineSet746.setVertexCount([2])
Coordinate747 = x3d.Coordinate()
Coordinate747.setPoint([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034])

LineSet746.setCoord(Coordinate747)
#from vc2 to vc1 vertices 2
ColorRGBA748 = x3d.ColorRGBA()
ColorRGBA748.setUSE("HAnimSegmentLineColorRGBA")

LineSet746.setColor(ColorRGBA748)

Shape745.setGeometry(LineSet746)

HAnimSegment741.addChildren(Shape745)

HAnimJoint740.addChildren(HAnimSegment741)
HAnimJoint749 = x3d.HAnimJoint()
HAnimJoint749.setName("vc1")
HAnimJoint749.setDEF("hanim_vc1")
HAnimJoint749.setCenter([0.0066,1.6144,-0.0034])
HAnimSegment750 = x3d.HAnimSegment()
HAnimSegment750.setName("c1")
HAnimSegment750.setDEF("hanim_c1")
Transform751 = x3d.Transform()
Transform751.setTranslation([0.0066,1.6144,-0.0034])
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
Coordinate756.setPoint([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236])

LineSet755.setCoord(Coordinate756)
#from vc1 to skullbase vertices 2
ColorRGBA757 = x3d.ColorRGBA()
ColorRGBA757.setUSE("HAnimSegmentLineColorRGBA")

LineSet755.setColor(ColorRGBA757)

Shape754.setGeometry(LineSet755)

HAnimSegment750.addChildren(Shape754)

HAnimJoint749.addChildren(HAnimSegment750)
HAnimJoint758 = x3d.HAnimJoint()
HAnimJoint758.setName("skullbase")
HAnimJoint758.setDEF("hanim_skullbase")
HAnimJoint758.setCenter([0.0044,1.6209,0.0236])
HAnimSegment759 = x3d.HAnimSegment()
HAnimSegment759.setName("skull")
HAnimSegment759.setDEF("hanim_skull")
Transform760 = x3d.Transform()
Transform760.setTranslation([0.0044,1.6209,0.0236])
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
Coordinate765.setPoint([0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689])

LineSet764.setCoord(Coordinate765)
#from skullbase to l_eyelid_joint vertices 2
ColorRGBA766 = x3d.ColorRGBA()
ColorRGBA766.setUSE("HAnimSegmentLineColorRGBA")

LineSet764.setColor(ColorRGBA766)

Shape763.setGeometry(LineSet764)

HAnimSegment759.addChildren(Shape763)
Shape767 = x3d.Shape()
LineSet768 = x3d.LineSet()
LineSet768.setVertexCount([2])
Coordinate769 = x3d.Coordinate()
Coordinate769.setPoint([0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689])

LineSet768.setCoord(Coordinate769)
#from skullbase to r_eyelid_joint vertices 2
ColorRGBA770 = x3d.ColorRGBA()
ColorRGBA770.setUSE("HAnimSegmentLineColorRGBA")

LineSet768.setColor(ColorRGBA770)

Shape767.setGeometry(LineSet768)

HAnimSegment759.addChildren(Shape767)
Shape771 = x3d.Shape()
LineSet772 = x3d.LineSet()
LineSet772.setVertexCount([2])
Coordinate773 = x3d.Coordinate()
Coordinate773.setPoint([0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188])

LineSet772.setCoord(Coordinate773)
#from skullbase to l_eyeball_joint vertices 2
ColorRGBA774 = x3d.ColorRGBA()
ColorRGBA774.setUSE("HAnimSegmentLineColorRGBA")

LineSet772.setColor(ColorRGBA774)

Shape771.setGeometry(LineSet772)

HAnimSegment759.addChildren(Shape771)
Shape775 = x3d.Shape()
LineSet776 = x3d.LineSet()
LineSet776.setVertexCount([2])
Coordinate777 = x3d.Coordinate()
Coordinate777.setPoint([0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188])

LineSet776.setCoord(Coordinate777)
#from skullbase to r_eyeball_joint vertices 2
ColorRGBA778 = x3d.ColorRGBA()
ColorRGBA778.setUSE("HAnimSegmentLineColorRGBA")

LineSet776.setColor(ColorRGBA778)

Shape775.setGeometry(LineSet776)

HAnimSegment759.addChildren(Shape775)
Shape779 = x3d.Shape()
LineSet780 = x3d.LineSet()
LineSet780.setVertexCount([2])
Coordinate781 = x3d.Coordinate()
Coordinate781.setPoint([0.0044,1.6209,0.0236,0.0216,1.4053,0.0051])

LineSet780.setCoord(Coordinate781)
#from skullbase to l_eyebrow_joint vertices 2
ColorRGBA782 = x3d.ColorRGBA()
ColorRGBA782.setUSE("HAnimSegmentLineColorRGBA")

LineSet780.setColor(ColorRGBA782)

Shape779.setGeometry(LineSet780)

HAnimSegment759.addChildren(Shape779)
Shape783 = x3d.Shape()
LineSet784 = x3d.LineSet()
LineSet784.setVertexCount([2])
Coordinate785 = x3d.Coordinate()
Coordinate785.setPoint([0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051])

LineSet784.setCoord(Coordinate785)
#from skullbase to r_eyebrow_joint vertices 2
ColorRGBA786 = x3d.ColorRGBA()
ColorRGBA786.setUSE("HAnimSegmentLineColorRGBA")

LineSet784.setColor(ColorRGBA786)

Shape783.setGeometry(LineSet784)

HAnimSegment759.addChildren(Shape783)
Shape787 = x3d.Shape()
LineSet788 = x3d.LineSet()
LineSet788.setVertexCount([2])
Coordinate789 = x3d.Coordinate()
Coordinate789.setPoint([0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865])

LineSet788.setCoord(Coordinate789)
#from skullbase to temporomandibular vertices 2
ColorRGBA790 = x3d.ColorRGBA()
ColorRGBA790.setUSE("HAnimSegmentLineColorRGBA")

LineSet788.setColor(ColorRGBA790)

Shape787.setGeometry(LineSet788)

HAnimSegment759.addChildren(Shape787)

HAnimJoint758.addChildren(HAnimSegment759)
HAnimJoint791 = x3d.HAnimJoint()
HAnimJoint791.setName("l_eyelid_joint")
HAnimJoint791.setDEF("hanim_l_eyelid_joint")
HAnimJoint791.setCenter([0.0503,1.4157,-0.0689])

HAnimJoint758.addChildren(HAnimJoint791)
HAnimJoint792 = x3d.HAnimJoint()
HAnimJoint792.setName("r_eyelid_joint")
HAnimJoint792.setDEF("hanim_r_eyelid_joint")
HAnimJoint792.setCenter([-0.0507,1.4157,-0.0689])

HAnimJoint758.addChildren(HAnimJoint792)
HAnimJoint793 = x3d.HAnimJoint()
HAnimJoint793.setName("l_eyeball_joint")
HAnimJoint793.setDEF("hanim_l_eyeball_joint")
HAnimJoint793.setCenter([0.0479,1.3963,-0.0188])

HAnimJoint758.addChildren(HAnimJoint793)
HAnimJoint794 = x3d.HAnimJoint()
HAnimJoint794.setName("r_eyeball_joint")
HAnimJoint794.setDEF("hanim_r_eyeball_joint")
HAnimJoint794.setCenter([-0.0483,1.3963,-0.0188])

HAnimJoint758.addChildren(HAnimJoint794)
HAnimJoint795 = x3d.HAnimJoint()
HAnimJoint795.setName("l_eyebrow_joint")
HAnimJoint795.setDEF("hanim_l_eyebrow_joint")
HAnimJoint795.setCenter([0.0216,1.4053,0.0051])

HAnimJoint758.addChildren(HAnimJoint795)
HAnimJoint796 = x3d.HAnimJoint()
HAnimJoint796.setName("r_eyebrow_joint")
HAnimJoint796.setDEF("hanim_r_eyebrow_joint")
HAnimJoint796.setCenter([-0.0219,1.4053,0.0051])

HAnimJoint758.addChildren(HAnimJoint796)
HAnimJoint797 = x3d.HAnimJoint()
HAnimJoint797.setName("temporomandibular")
HAnimJoint797.setDEF("hanim_temporomandibular")
HAnimJoint797.setCenter([-0.0002,1.3043,-0.0865])

HAnimJoint758.addChildren(HAnimJoint797)

HAnimJoint749.addChildren(HAnimJoint758)

HAnimJoint740.addChildren(HAnimJoint749)

HAnimJoint731.addChildren(HAnimJoint740)

HAnimJoint722.addChildren(HAnimJoint731)

HAnimJoint713.addChildren(HAnimJoint722)

HAnimJoint704.addChildren(HAnimJoint713)

HAnimJoint695.addChildren(HAnimJoint704)

HAnimJoint678.addChildren(HAnimJoint695)
HAnimJoint798 = x3d.HAnimJoint()
HAnimJoint798.setName("l_sternoclavicular")
HAnimJoint798.setDEF("hanim_l_sternoclavicular")
HAnimJoint798.setCenter([0.082,1.4488,-0.0353])
HAnimSegment799 = x3d.HAnimSegment()
HAnimSegment799.setName("l_clavicle")
HAnimSegment799.setDEF("hanim_l_clavicle")
Transform800 = x3d.Transform()
Transform800.setTranslation([0.082,1.4488,-0.0353])
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
Coordinate805.setPoint([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424])

LineSet804.setCoord(Coordinate805)
#from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA806 = x3d.ColorRGBA()
ColorRGBA806.setUSE("HAnimSegmentLineColorRGBA")

LineSet804.setColor(ColorRGBA806)

Shape803.setGeometry(LineSet804)

HAnimSegment799.addChildren(Shape803)

HAnimJoint798.addChildren(HAnimSegment799)
HAnimJoint807 = x3d.HAnimJoint()
HAnimJoint807.setName("l_acromioclavicular")
HAnimJoint807.setDEF("hanim_l_acromioclavicular")
HAnimJoint807.setCenter([0.0962,1.4269,-0.0424])
HAnimSegment808 = x3d.HAnimSegment()
HAnimSegment808.setName("l_scapula")
HAnimSegment808.setDEF("hanim_l_scapula")
Transform809 = x3d.Transform()
Transform809.setTranslation([0.0962,1.4269,-0.0424])
Transform810 = x3d.Transform()
#Empty Transform
Shape811 = x3d.Shape()
Shape811.setUSE("HAnimJointShape")

Transform810.addChild(Shape811)

Transform809.addChildren(Transform810)

HAnimSegment808.addChildren(Transform809)
Shape812 = x3d.Shape()
LineSet813 = x3d.LineSet()
LineSet813.setVertexCount([2])
Coordinate814 = x3d.Coordinate()
Coordinate814.setPoint([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387])

LineSet813.setCoord(Coordinate814)
#from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA815 = x3d.ColorRGBA()
ColorRGBA815.setUSE("HAnimSegmentLineColorRGBA")

LineSet813.setColor(ColorRGBA815)

Shape812.setGeometry(LineSet813)

HAnimSegment808.addChildren(Shape812)

HAnimJoint807.addChildren(HAnimSegment808)
HAnimJoint816 = x3d.HAnimJoint()
HAnimJoint816.setName("l_shoulder")
HAnimJoint816.setDEF("hanim_l_shoulder")
HAnimJoint816.setCenter([0.2029,1.4376,-0.0387])
HAnimSegment817 = x3d.HAnimSegment()
HAnimSegment817.setName("l_upperarm")
HAnimSegment817.setDEF("hanim_l_upperarm")
Transform818 = x3d.Transform()
Transform818.setTranslation([0.2029,1.4376,-0.0387])
Transform819 = x3d.Transform()
#Empty Transform
Shape820 = x3d.Shape()
Shape820.setUSE("HAnimJointShape")

Transform819.addChild(Shape820)

Transform818.addChildren(Transform819)

HAnimSegment817.addChildren(Transform818)
Shape821 = x3d.Shape()
LineSet822 = x3d.LineSet()
LineSet822.setVertexCount([2])
Coordinate823 = x3d.Coordinate()
Coordinate823.setPoint([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682])

LineSet822.setCoord(Coordinate823)
#from l_shoulder to l_elbow vertices 2
ColorRGBA824 = x3d.ColorRGBA()
ColorRGBA824.setUSE("HAnimSegmentLineColorRGBA")

LineSet822.setColor(ColorRGBA824)

Shape821.setGeometry(LineSet822)

HAnimSegment817.addChildren(Shape821)

HAnimJoint816.addChildren(HAnimSegment817)
HAnimJoint825 = x3d.HAnimJoint()
HAnimJoint825.setName("l_elbow")
HAnimJoint825.setDEF("hanim_l_elbow")
HAnimJoint825.setCenter([0.2014,1.1357,-0.0682])
HAnimSegment826 = x3d.HAnimSegment()
HAnimSegment826.setName("l_forearm")
HAnimSegment826.setDEF("hanim_l_forearm")
Transform827 = x3d.Transform()
Transform827.setTranslation([0.2014,1.1357,-0.0682])
Transform828 = x3d.Transform()
#Empty Transform
Shape829 = x3d.Shape()
Shape829.setUSE("HAnimJointShape")

Transform828.addChild(Shape829)

Transform827.addChildren(Transform828)

HAnimSegment826.addChildren(Transform827)
Shape830 = x3d.Shape()
LineSet831 = x3d.LineSet()
LineSet831.setVertexCount([2])
Coordinate832 = x3d.Coordinate()
Coordinate832.setPoint([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583])

LineSet831.setCoord(Coordinate832)
#from l_elbow to l_radiocarpal vertices 2
ColorRGBA833 = x3d.ColorRGBA()
ColorRGBA833.setUSE("HAnimSegmentLineColorRGBA")

LineSet831.setColor(ColorRGBA833)

Shape830.setGeometry(LineSet831)

HAnimSegment826.addChildren(Shape830)

HAnimJoint825.addChildren(HAnimSegment826)
HAnimJoint834 = x3d.HAnimJoint()
HAnimJoint834.setName("l_radiocarpal")
HAnimJoint834.setDEF("hanim_l_radiocarpal")
HAnimJoint834.setCenter([0.1984,0.8663,-0.0583])
HAnimSegment835 = x3d.HAnimSegment()
HAnimSegment835.setName("l_carpal")
HAnimSegment835.setDEF("hanim_l_carpal")
Transform836 = x3d.Transform()
Transform836.setScale([0.2,0.2,0.2])
Transform836.setTranslation([0.2,0.85,-0.05])
Transform836.setRotation([0,0,1,-3.14])
#Transform left hand
Transform837 = x3d.Transform()
Transform837.setRotation([0,1,0,-1.57])
#Transform left hand
Shape838 = x3d.Shape()
Shape838.setUSE("HAnimJointShape")

Transform837.addChild(Shape838)

Transform836.addChildren(Transform837)

HAnimSegment835.addChildren(Transform836)
Shape839 = x3d.Shape()
LineSet840 = x3d.LineSet()
LineSet840.setVertexCount([2])
Coordinate841 = x3d.Coordinate()
Coordinate841.setPoint([0.1984,0.8663,-0.0583,0.1811,0.6975,-0.0826])

LineSet840.setCoord(Coordinate841)
#from l_radiocarpal to l_midcarpal_1 vertices 2
ColorRGBA842 = x3d.ColorRGBA()
ColorRGBA842.setUSE("HAnimSegmentLineColorRGBA")

LineSet840.setColor(ColorRGBA842)

Shape839.setGeometry(LineSet840)

HAnimSegment835.addChildren(Shape839)
Shape843 = x3d.Shape()
LineSet844 = x3d.LineSet()
LineSet844.setVertexCount([2])
Coordinate845 = x3d.Coordinate()
Coordinate845.setPoint([0.1984,0.8663,-0.0583,0.1811,0.6984,-0.0935])

LineSet844.setCoord(Coordinate845)
#from l_radiocarpal to l_midcarpal_2 vertices 2
ColorRGBA846 = x3d.ColorRGBA()
ColorRGBA846.setUSE("HAnimSegmentLineColorRGBA")

LineSet844.setColor(ColorRGBA846)

Shape843.setGeometry(LineSet844)

HAnimSegment835.addChildren(Shape843)
Shape847 = x3d.Shape()
LineSet848 = x3d.LineSet()
LineSet848.setVertexCount([2])
Coordinate849 = x3d.Coordinate()
Coordinate849.setPoint([0.1984,0.8663,-0.0583,0.1809,0.7,-0.1067])

LineSet848.setCoord(Coordinate849)
#from l_radiocarpal to l_midcarpal_3 vertices 2
ColorRGBA850 = x3d.ColorRGBA()
ColorRGBA850.setUSE("HAnimSegmentLineColorRGBA")

LineSet848.setColor(ColorRGBA850)

Shape847.setGeometry(LineSet848)

HAnimSegment835.addChildren(Shape847)
Shape851 = x3d.Shape()
LineSet852 = x3d.LineSet()
LineSet852.setVertexCount([2])
Coordinate853 = x3d.Coordinate()
Coordinate853.setPoint([0.1984,0.8663,-0.0583,0.1809,0.6973,-0.1276])

LineSet852.setCoord(Coordinate853)
#from l_radiocarpal to l_midcarpal_4_5 vertices 2
ColorRGBA854 = x3d.ColorRGBA()
ColorRGBA854.setUSE("HAnimSegmentLineColorRGBA")

LineSet852.setColor(ColorRGBA854)

Shape851.setGeometry(LineSet852)

HAnimSegment835.addChildren(Shape851)

HAnimJoint834.addChildren(HAnimSegment835)
HAnimJoint855 = x3d.HAnimJoint()
HAnimJoint855.setName("l_midcarpal_1")
HAnimJoint855.setDEF("hanim_l_midcarpal_1")
HAnimJoint855.setCenter([0.1811,0.6975,-0.0826])
HAnimSegment856 = x3d.HAnimSegment()
HAnimSegment856.setName("l_trapezium")
HAnimSegment856.setDEF("hanim_l_trapezium")
Transform857 = x3d.Transform()
Transform857.setTranslation([0.1811,0.6975,-0.0826])
Transform858 = x3d.Transform()
#Empty Transform
Shape859 = x3d.Shape()
Shape859.setUSE("HAnimJointShape")

Transform858.addChild(Shape859)

Transform857.addChildren(Transform858)

HAnimSegment856.addChildren(Transform857)
Shape860 = x3d.Shape()
LineSet861 = x3d.LineSet()
LineSet861.setVertexCount([2])
Coordinate862 = x3d.Coordinate()
Coordinate862.setPoint([0.1811,0.6975,-0.0826,0.1924,0.8472,-0.0534])

LineSet861.setCoord(Coordinate862)
#from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
ColorRGBA863 = x3d.ColorRGBA()
ColorRGBA863.setUSE("HAnimSegmentLineColorRGBA")

LineSet861.setColor(ColorRGBA863)

Shape860.setGeometry(LineSet861)

HAnimSegment856.addChildren(Shape860)

HAnimJoint855.addChildren(HAnimSegment856)
HAnimJoint864 = x3d.HAnimJoint()
HAnimJoint864.setName("l_carpometacarpal_1")
HAnimJoint864.setDEF("hanim_l_carpometacarpal_1")
HAnimJoint864.setCenter([0.1924,0.8472,-0.0534])
HAnimSegment865 = x3d.HAnimSegment()
HAnimSegment865.setName("l_metacarpal_1")
HAnimSegment865.setDEF("hanim_l_metacarpal_1")
Transform866 = x3d.Transform()
Transform866.setTranslation([0.1924,0.8472,-0.0534])
Transform867 = x3d.Transform()
#Empty Transform
Shape868 = x3d.Shape()
Shape868.setUSE("HAnimJointShape")

Transform867.addChild(Shape868)

Transform866.addChildren(Transform867)

HAnimSegment865.addChildren(Transform866)
Shape869 = x3d.Shape()
LineSet870 = x3d.LineSet()
LineSet870.setVertexCount([2])
Coordinate871 = x3d.Coordinate()
Coordinate871.setPoint([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246])

LineSet870.setCoord(Coordinate871)
#from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA872 = x3d.ColorRGBA()
ColorRGBA872.setUSE("HAnimSegmentLineColorRGBA")

LineSet870.setColor(ColorRGBA872)

Shape869.setGeometry(LineSet870)

HAnimSegment865.addChildren(Shape869)

HAnimJoint864.addChildren(HAnimSegment865)
HAnimJoint873 = x3d.HAnimJoint()
HAnimJoint873.setName("l_metacarpophalangeal_1")
HAnimJoint873.setDEF("hanim_l_metacarpophalangeal_1")
HAnimJoint873.setCenter([0.1951,0.8226,0.0246])
HAnimSegment874 = x3d.HAnimSegment()
HAnimSegment874.setName("l_carpal_proximal_phalanx_1")
HAnimSegment874.setDEF("hanim_l_carpal_proximal_phalanx_1")
Transform875 = x3d.Transform()
Transform875.setTranslation([0.1951,0.8226,0.0246])
Transform876 = x3d.Transform()
#Empty Transform
Shape877 = x3d.Shape()
Shape877.setUSE("HAnimJointShape")

Transform876.addChild(Shape877)

Transform875.addChildren(Transform876)

HAnimSegment874.addChildren(Transform875)
Shape878 = x3d.Shape()
LineSet879 = x3d.LineSet()
LineSet879.setVertexCount([2])
Coordinate880 = x3d.Coordinate()
Coordinate880.setPoint([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464])

LineSet879.setCoord(Coordinate880)
#from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA881 = x3d.ColorRGBA()
ColorRGBA881.setUSE("HAnimSegmentLineColorRGBA")

LineSet879.setColor(ColorRGBA881)

Shape878.setGeometry(LineSet879)

HAnimSegment874.addChildren(Shape878)

HAnimJoint873.addChildren(HAnimSegment874)
HAnimJoint882 = x3d.HAnimJoint()
HAnimJoint882.setName("l_carpal_interphalangeal_1")
HAnimJoint882.setDEF("hanim_l_carpal_interphalangeal_1")
HAnimJoint882.setCenter([0.1955,0.8159,0.0464])

HAnimJoint873.addChildren(HAnimJoint882)

HAnimJoint864.addChildren(HAnimJoint873)

HAnimJoint855.addChildren(HAnimJoint864)

HAnimJoint834.addChildren(HAnimJoint855)
HAnimJoint883 = x3d.HAnimJoint()
HAnimJoint883.setName("l_midcarpal_2")
HAnimJoint883.setDEF("hanim_l_midcarpal_2")
HAnimJoint883.setCenter([0.1811,0.6984,-0.0935])
HAnimSegment884 = x3d.HAnimSegment()
HAnimSegment884.setName("l_trapezoid")
HAnimSegment884.setDEF("hanim_l_trapezoid")
Transform885 = x3d.Transform()
Transform885.setTranslation([0.1811,0.6984,-0.0935])
Transform886 = x3d.Transform()
#Empty Transform
Shape887 = x3d.Shape()
Shape887.setUSE("HAnimJointShape")

Transform886.addChild(Shape887)

Transform885.addChildren(Transform886)

HAnimSegment884.addChildren(Transform885)
Shape888 = x3d.Shape()
LineSet889 = x3d.LineSet()
LineSet889.setVertexCount([2])
Coordinate890 = x3d.Coordinate()
Coordinate890.setPoint([0.1811,0.6984,-0.0935,0.1983,0.8024,-0.028])

LineSet889.setCoord(Coordinate890)
#from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
ColorRGBA891 = x3d.ColorRGBA()
ColorRGBA891.setUSE("HAnimSegmentLineColorRGBA")

LineSet889.setColor(ColorRGBA891)

Shape888.setGeometry(LineSet889)

HAnimSegment884.addChildren(Shape888)

HAnimJoint883.addChildren(HAnimSegment884)
HAnimJoint892 = x3d.HAnimJoint()
HAnimJoint892.setName("l_carpometacarpal_2")
HAnimJoint892.setDEF("hanim_l_carpometacarpal_2")
HAnimJoint892.setCenter([0.1983,0.8024,-0.028])
HAnimSegment893 = x3d.HAnimSegment()
HAnimSegment893.setName("l_metacarpal_2")
HAnimSegment893.setDEF("hanim_l_metacarpal_2")
Transform894 = x3d.Transform()
Transform894.setTranslation([0.1983,0.8024,-0.028])
Transform895 = x3d.Transform()
#Empty Transform
Shape896 = x3d.Shape()
Shape896.setUSE("HAnimJointShape")

Transform895.addChild(Shape896)

Transform894.addChildren(Transform895)

HAnimSegment893.addChildren(Transform894)
Shape897 = x3d.Shape()
LineSet898 = x3d.LineSet()
LineSet898.setVertexCount([2])
Coordinate899 = x3d.Coordinate()
Coordinate899.setPoint([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028])

LineSet898.setCoord(Coordinate899)
#from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA900 = x3d.ColorRGBA()
ColorRGBA900.setUSE("HAnimSegmentLineColorRGBA")

LineSet898.setColor(ColorRGBA900)

Shape897.setGeometry(LineSet898)

HAnimSegment893.addChildren(Shape897)

HAnimJoint892.addChildren(HAnimSegment893)
HAnimJoint901 = x3d.HAnimJoint()
HAnimJoint901.setName("l_metacarpophalangeal_2")
HAnimJoint901.setDEF("hanim_l_metacarpophalangeal_2")
HAnimJoint901.setCenter([0.1983,0.7815,-0.028])
HAnimSegment902 = x3d.HAnimSegment()
HAnimSegment902.setName("l_carpal_proximal_phalanx_2")
HAnimSegment902.setDEF("hanim_l_carpal_proximal_phalanx_2")
Transform903 = x3d.Transform()
Transform903.setTranslation([0.1983,0.7815,-0.028])
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
Coordinate908.setPoint([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248])

LineSet907.setCoord(Coordinate908)
#from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA909 = x3d.ColorRGBA()
ColorRGBA909.setUSE("HAnimSegmentLineColorRGBA")

LineSet907.setColor(ColorRGBA909)

Shape906.setGeometry(LineSet907)

HAnimSegment902.addChildren(Shape906)

HAnimJoint901.addChildren(HAnimSegment902)
HAnimJoint910 = x3d.HAnimJoint()
HAnimJoint910.setName("l_carpal_proximal_interphalangeal_2")
HAnimJoint910.setDEF("hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint910.setCenter([0.2017,0.7363,-0.0248])
HAnimSegment911 = x3d.HAnimSegment()
HAnimSegment911.setName("l_carpal_middle_phalanx_2")
HAnimSegment911.setDEF("hanim_l_carpal_middle_phalanx_2")
Transform912 = x3d.Transform()
Transform912.setTranslation([0.2017,0.7363,-0.0248])
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
Coordinate917.setPoint([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236])

LineSet916.setCoord(Coordinate917)
#from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA918 = x3d.ColorRGBA()
ColorRGBA918.setUSE("HAnimSegmentLineColorRGBA")

LineSet916.setColor(ColorRGBA918)

Shape915.setGeometry(LineSet916)

HAnimSegment911.addChildren(Shape915)

HAnimJoint910.addChildren(HAnimSegment911)
HAnimJoint919 = x3d.HAnimJoint()
HAnimJoint919.setName("l_carpal_distal_interphalangeal_2")
HAnimJoint919.setDEF("hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint919.setCenter([0.2028,0.7139,-0.0236])

HAnimJoint910.addChildren(HAnimJoint919)

HAnimJoint901.addChildren(HAnimJoint910)

HAnimJoint892.addChildren(HAnimJoint901)

HAnimJoint883.addChildren(HAnimJoint892)

HAnimJoint834.addChildren(HAnimJoint883)
HAnimJoint920 = x3d.HAnimJoint()
HAnimJoint920.setName("l_midcarpal_3")
HAnimJoint920.setDEF("hanim_l_midcarpal_3")
HAnimJoint920.setCenter([0.1809,0.7,-0.1067])
HAnimSegment921 = x3d.HAnimSegment()
HAnimSegment921.setName("l_capitate")
HAnimSegment921.setDEF("hanim_l_capitate")
Transform922 = x3d.Transform()
Transform922.setTranslation([0.1809,0.7,-0.1067])
Transform923 = x3d.Transform()
#Empty Transform
Shape924 = x3d.Shape()
Shape924.setUSE("HAnimJointShape")

Transform923.addChild(Shape924)

Transform922.addChildren(Transform923)

HAnimSegment921.addChildren(Transform922)
Shape925 = x3d.Shape()
LineSet926 = x3d.LineSet()
LineSet926.setVertexCount([2])
Coordinate927 = x3d.Coordinate()
Coordinate927.setPoint([0.1809,0.7,-0.1067,0.1987,0.8029,-0.053])

LineSet926.setCoord(Coordinate927)
#from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
ColorRGBA928 = x3d.ColorRGBA()
ColorRGBA928.setUSE("HAnimSegmentLineColorRGBA")

LineSet926.setColor(ColorRGBA928)

Shape925.setGeometry(LineSet926)

HAnimSegment921.addChildren(Shape925)

HAnimJoint920.addChildren(HAnimSegment921)
HAnimJoint929 = x3d.HAnimJoint()
HAnimJoint929.setName("l_carpometacarpal_3")
HAnimJoint929.setDEF("hanim_l_carpometacarpal_3")
HAnimJoint929.setCenter([0.1987,0.8029,-0.053])
HAnimSegment930 = x3d.HAnimSegment()
HAnimSegment930.setName("l_metacarpal_3")
HAnimSegment930.setDEF("hanim_l_metacarpal_3")
Transform931 = x3d.Transform()
Transform931.setTranslation([0.1987,0.8029,-0.053])
Transform932 = x3d.Transform()
#Empty Transform
Shape933 = x3d.Shape()
Shape933.setUSE("HAnimJointShape")

Transform932.addChild(Shape933)

Transform931.addChildren(Transform932)

HAnimSegment930.addChildren(Transform931)
Shape934 = x3d.Shape()
LineSet935 = x3d.LineSet()
LineSet935.setVertexCount([2])
Coordinate936 = x3d.Coordinate()
Coordinate936.setPoint([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053])

LineSet935.setCoord(Coordinate936)
#from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA937 = x3d.ColorRGBA()
ColorRGBA937.setUSE("HAnimSegmentLineColorRGBA")

LineSet935.setColor(ColorRGBA937)

Shape934.setGeometry(LineSet935)

HAnimSegment930.addChildren(Shape934)

HAnimJoint929.addChildren(HAnimSegment930)
HAnimJoint938 = x3d.HAnimJoint()
HAnimJoint938.setName("l_metacarpophalangeal_3")
HAnimJoint938.setDEF("hanim_l_metacarpophalangeal_3")
HAnimJoint938.setCenter([0.1987,0.7818,-0.053])
HAnimSegment939 = x3d.HAnimSegment()
HAnimSegment939.setName("l_carpal_proximal_phalanx_3")
HAnimSegment939.setDEF("hanim_l_carpal_proximal_phalanx_3")
Transform940 = x3d.Transform()
Transform940.setTranslation([0.1987,0.7818,-0.053])
Transform941 = x3d.Transform()
#Empty Transform
Shape942 = x3d.Shape()
Shape942.setUSE("HAnimJointShape")

Transform941.addChild(Shape942)

Transform940.addChildren(Transform941)

HAnimSegment939.addChildren(Transform940)
Shape943 = x3d.Shape()
LineSet944 = x3d.LineSet()
LineSet944.setVertexCount([2])
Coordinate945 = x3d.Coordinate()
Coordinate945.setPoint([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503])

LineSet944.setCoord(Coordinate945)
#from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA946 = x3d.ColorRGBA()
ColorRGBA946.setUSE("HAnimSegmentLineColorRGBA")

LineSet944.setColor(ColorRGBA946)

Shape943.setGeometry(LineSet944)

HAnimSegment939.addChildren(Shape943)

HAnimJoint938.addChildren(HAnimSegment939)
HAnimJoint947 = x3d.HAnimJoint()
HAnimJoint947.setName("l_carpal_proximal_interphalangeal_3")
HAnimJoint947.setDEF("hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint947.setCenter([0.2013,0.7273,-0.0503])
HAnimSegment948 = x3d.HAnimSegment()
HAnimSegment948.setName("l_carpal_middle_phalanx_3")
HAnimSegment948.setDEF("hanim_l_carpal_middle_phalanx_3")
Transform949 = x3d.Transform()
Transform949.setTranslation([0.2013,0.7273,-0.0503])
Transform950 = x3d.Transform()
#Empty Transform
Shape951 = x3d.Shape()
Shape951.setUSE("HAnimJointShape")

Transform950.addChild(Shape951)

Transform949.addChildren(Transform950)

HAnimSegment948.addChildren(Transform949)
Shape952 = x3d.Shape()
LineSet953 = x3d.LineSet()
LineSet953.setVertexCount([2])
Coordinate954 = x3d.Coordinate()
Coordinate954.setPoint([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494])

LineSet953.setCoord(Coordinate954)
#from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA955 = x3d.ColorRGBA()
ColorRGBA955.setUSE("HAnimSegmentLineColorRGBA")

LineSet953.setColor(ColorRGBA955)

Shape952.setGeometry(LineSet953)

HAnimSegment948.addChildren(Shape952)

HAnimJoint947.addChildren(HAnimSegment948)
HAnimJoint956 = x3d.HAnimJoint()
HAnimJoint956.setName("l_carpal_distal_interphalangeal_3")
HAnimJoint956.setDEF("hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint956.setCenter([0.2026,0.7011,-0.0494])

HAnimJoint947.addChildren(HAnimJoint956)

HAnimJoint938.addChildren(HAnimJoint947)

HAnimJoint929.addChildren(HAnimJoint938)

HAnimJoint920.addChildren(HAnimJoint929)

HAnimJoint834.addChildren(HAnimJoint920)
HAnimJoint957 = x3d.HAnimJoint()
HAnimJoint957.setName("l_midcarpal_4_5")
HAnimJoint957.setDEF("hanim_l_midcarpal_4_5")
HAnimJoint957.setCenter([0.1809,0.6973,-0.1276])
HAnimSegment958 = x3d.HAnimSegment()
HAnimSegment958.setName("l_hamate")
HAnimSegment958.setDEF("hanim_l_hamate")
Transform959 = x3d.Transform()
Transform959.setTranslation([0.1809,0.6973,-0.1276])
Transform960 = x3d.Transform()
#Empty Transform
Shape961 = x3d.Shape()
Shape961.setUSE("HAnimJointShape")

Transform960.addChild(Shape961)

Transform959.addChildren(Transform960)

HAnimSegment958.addChildren(Transform959)
Shape962 = x3d.Shape()
LineSet963 = x3d.LineSet()
LineSet963.setVertexCount([2])
Coordinate964 = x3d.Coordinate()
Coordinate964.setPoint([0.1809,0.6973,-0.1276,0.1956,0.8019,-0.0794])

LineSet963.setCoord(Coordinate964)
#from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
ColorRGBA965 = x3d.ColorRGBA()
ColorRGBA965.setUSE("HAnimSegmentLineColorRGBA")

LineSet963.setColor(ColorRGBA965)

Shape962.setGeometry(LineSet963)

HAnimSegment958.addChildren(Shape962)
Shape966 = x3d.Shape()
LineSet967 = x3d.LineSet()
LineSet967.setVertexCount([2])
Coordinate968 = x3d.Coordinate()
Coordinate968.setPoint([0.1809,0.6973,-0.1276,0.1925,0.8066,-0.1036])

LineSet967.setCoord(Coordinate968)
#from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
ColorRGBA969 = x3d.ColorRGBA()
ColorRGBA969.setUSE("HAnimSegmentLineColorRGBA")

LineSet967.setColor(ColorRGBA969)

Shape966.setGeometry(LineSet967)

HAnimSegment958.addChildren(Shape966)

HAnimJoint957.addChildren(HAnimSegment958)
HAnimJoint970 = x3d.HAnimJoint()
HAnimJoint970.setName("l_carpometacarpal_4")
HAnimJoint970.setDEF("hanim_l_carpometacarpal_4")
HAnimJoint970.setCenter([0.1956,0.8019,-0.0794])
HAnimSegment971 = x3d.HAnimSegment()
HAnimSegment971.setName("l_metacarpal_4")
HAnimSegment971.setDEF("hanim_l_metacarpal_4")
Transform972 = x3d.Transform()
Transform972.setTranslation([0.1956,0.8019,-0.0794])
Transform973 = x3d.Transform()
#Empty Transform
Shape974 = x3d.Shape()
Shape974.setUSE("HAnimJointShape")

Transform973.addChild(Shape974)

Transform972.addChildren(Transform973)

HAnimSegment971.addChildren(Transform972)
Shape975 = x3d.Shape()
LineSet976 = x3d.LineSet()
LineSet976.setVertexCount([2])
Coordinate977 = x3d.Coordinate()
Coordinate977.setPoint([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794])

LineSet976.setCoord(Coordinate977)
#from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA978 = x3d.ColorRGBA()
ColorRGBA978.setUSE("HAnimSegmentLineColorRGBA")

LineSet976.setColor(ColorRGBA978)

Shape975.setGeometry(LineSet976)

HAnimSegment971.addChildren(Shape975)

HAnimJoint970.addChildren(HAnimSegment971)
HAnimJoint979 = x3d.HAnimJoint()
HAnimJoint979.setName("l_metacarpophalangeal_4")
HAnimJoint979.setDEF("hanim_l_metacarpophalangeal_4")
HAnimJoint979.setCenter([0.1956,0.7815,-0.0794])
HAnimSegment980 = x3d.HAnimSegment()
HAnimSegment980.setName("l_carpal_proximal_phalanx_4")
HAnimSegment980.setDEF("hanim_l_carpal_proximal_phalanx_4")
Transform981 = x3d.Transform()
Transform981.setTranslation([0.1956,0.7815,-0.0794])
Transform982 = x3d.Transform()
#Empty Transform
Shape983 = x3d.Shape()
Shape983.setUSE("HAnimJointShape")

Transform982.addChild(Shape983)

Transform981.addChildren(Transform982)

HAnimSegment980.addChildren(Transform981)
Shape984 = x3d.Shape()
LineSet985 = x3d.LineSet()
LineSet985.setVertexCount([2])
Coordinate986 = x3d.Coordinate()
Coordinate986.setPoint([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777])

LineSet985.setCoord(Coordinate986)
#from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA987 = x3d.ColorRGBA()
ColorRGBA987.setUSE("HAnimSegmentLineColorRGBA")

LineSet985.setColor(ColorRGBA987)

Shape984.setGeometry(LineSet985)

HAnimSegment980.addChildren(Shape984)

HAnimJoint979.addChildren(HAnimSegment980)
HAnimJoint988 = x3d.HAnimJoint()
HAnimJoint988.setName("l_carpal_proximal_interphalangeal_4")
HAnimJoint988.setDEF("hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint988.setCenter([0.1973,0.7287,-0.0777])
HAnimSegment989 = x3d.HAnimSegment()
HAnimSegment989.setName("l_carpal_middle_phalanx_4")
HAnimSegment989.setDEF("hanim_l_carpal_middle_phalanx_4")
Transform990 = x3d.Transform()
Transform990.setTranslation([0.1973,0.7287,-0.0777])
Transform991 = x3d.Transform()
#Empty Transform
Shape992 = x3d.Shape()
Shape992.setUSE("HAnimJointShape")

Transform991.addChild(Shape992)

Transform990.addChildren(Transform991)

HAnimSegment989.addChildren(Transform990)
Shape993 = x3d.Shape()
LineSet994 = x3d.LineSet()
LineSet994.setVertexCount([2])
Coordinate995 = x3d.Coordinate()
Coordinate995.setPoint([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767])

LineSet994.setCoord(Coordinate995)
#from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA996 = x3d.ColorRGBA()
ColorRGBA996.setUSE("HAnimSegmentLineColorRGBA")

LineSet994.setColor(ColorRGBA996)

Shape993.setGeometry(LineSet994)

HAnimSegment989.addChildren(Shape993)

HAnimJoint988.addChildren(HAnimSegment989)
HAnimJoint997 = x3d.HAnimJoint()
HAnimJoint997.setName("l_carpal_distal_interphalangeal_4")
HAnimJoint997.setDEF("hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint997.setCenter([0.1983,0.7045,-0.0767])

HAnimJoint988.addChildren(HAnimJoint997)

HAnimJoint979.addChildren(HAnimJoint988)

HAnimJoint970.addChildren(HAnimJoint979)

HAnimJoint957.addChildren(HAnimJoint970)
HAnimJoint998 = x3d.HAnimJoint()
HAnimJoint998.setName("l_carpometacarpal_5")
HAnimJoint998.setDEF("hanim_l_carpometacarpal_5")
HAnimJoint998.setCenter([0.1925,0.8066,-0.1036])
HAnimSegment999 = x3d.HAnimSegment()
HAnimSegment999.setName("l_metacarpal_5")
HAnimSegment999.setDEF("hanim_l_metacarpal_5")
Transform1000 = x3d.Transform()
Transform1000.setTranslation([0.1925,0.8066,-0.1036])
Transform1001 = x3d.Transform()
#Empty Transform
Shape1002 = x3d.Shape()
Shape1002.setUSE("HAnimJointShape")

Transform1001.addChild(Shape1002)

Transform1000.addChildren(Transform1001)

HAnimSegment999.addChildren(Transform1000)
Shape1003 = x3d.Shape()
LineSet1004 = x3d.LineSet()
LineSet1004.setVertexCount([2])
Coordinate1005 = x3d.Coordinate()
Coordinate1005.setPoint([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036])

LineSet1004.setCoord(Coordinate1005)
#from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA1006 = x3d.ColorRGBA()
ColorRGBA1006.setUSE("HAnimSegmentLineColorRGBA")

LineSet1004.setColor(ColorRGBA1006)

Shape1003.setGeometry(LineSet1004)

HAnimSegment999.addChildren(Shape1003)

HAnimJoint998.addChildren(HAnimSegment999)
HAnimJoint1007 = x3d.HAnimJoint()
HAnimJoint1007.setName("l_metacarpophalangeal_5")
HAnimJoint1007.setDEF("hanim_l_metacarpophalangeal_5")
HAnimJoint1007.setCenter([0.1925,0.7866,-0.1036])
HAnimSegment1008 = x3d.HAnimSegment()
HAnimSegment1008.setName("l_carpal_proximal_phalanx_5")
HAnimSegment1008.setDEF("hanim_l_carpal_proximal_phalanx_5")
Transform1009 = x3d.Transform()
Transform1009.setTranslation([0.1925,0.7866,-0.1036])
Transform1010 = x3d.Transform()
#Empty Transform
Shape1011 = x3d.Shape()
Shape1011.setUSE("HAnimJointShape")

Transform1010.addChild(Shape1011)

Transform1009.addChildren(Transform1010)

HAnimSegment1008.addChildren(Transform1009)
Shape1012 = x3d.Shape()
LineSet1013 = x3d.LineSet()
LineSet1013.setVertexCount([2])
Coordinate1014 = x3d.Coordinate()
Coordinate1014.setPoint([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024])

LineSet1013.setCoord(Coordinate1014)
#from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA1015 = x3d.ColorRGBA()
ColorRGBA1015.setUSE("HAnimSegmentLineColorRGBA")

LineSet1013.setColor(ColorRGBA1015)

Shape1012.setGeometry(LineSet1013)

HAnimSegment1008.addChildren(Shape1012)

HAnimJoint1007.addChildren(HAnimSegment1008)
HAnimJoint1016 = x3d.HAnimJoint()
HAnimJoint1016.setName("l_carpal_proximal_interphalangeal_5")
HAnimJoint1016.setDEF("hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint1016.setCenter([0.1938,0.7452,-0.1024])
HAnimSegment1017 = x3d.HAnimSegment()
HAnimSegment1017.setName("l_carpal_middle_phalanx_5")
HAnimSegment1017.setDEF("hanim_l_carpal_middle_phalanx_5")
Transform1018 = x3d.Transform()
Transform1018.setTranslation([0.1938,0.7452,-0.1024])
Transform1019 = x3d.Transform()
#Empty Transform
Shape1020 = x3d.Shape()
Shape1020.setUSE("HAnimJointShape")

Transform1019.addChild(Shape1020)

Transform1018.addChildren(Transform1019)

HAnimSegment1017.addChildren(Transform1018)
Shape1021 = x3d.Shape()
LineSet1022 = x3d.LineSet()
LineSet1022.setVertexCount([2])
Coordinate1023 = x3d.Coordinate()
Coordinate1023.setPoint([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017])

LineSet1022.setCoord(Coordinate1023)
#from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA1024 = x3d.ColorRGBA()
ColorRGBA1024.setUSE("HAnimSegmentLineColorRGBA")

LineSet1022.setColor(ColorRGBA1024)

Shape1021.setGeometry(LineSet1022)

HAnimSegment1017.addChildren(Shape1021)

HAnimJoint1016.addChildren(HAnimSegment1017)
HAnimJoint1025 = x3d.HAnimJoint()
HAnimJoint1025.setName("l_carpal_distal_interphalangeal_5")
HAnimJoint1025.setDEF("hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint1025.setCenter([0.1948,0.7277,-0.1017])

HAnimJoint1016.addChildren(HAnimJoint1025)

HAnimJoint1007.addChildren(HAnimJoint1016)

HAnimJoint998.addChildren(HAnimJoint1007)

HAnimJoint957.addChildren(HAnimJoint998)

HAnimJoint834.addChildren(HAnimJoint957)

HAnimJoint825.addChildren(HAnimJoint834)

HAnimJoint816.addChildren(HAnimJoint825)

HAnimJoint807.addChildren(HAnimJoint816)

HAnimJoint798.addChildren(HAnimJoint807)

HAnimJoint678.addChildren(HAnimJoint798)
HAnimJoint1026 = x3d.HAnimJoint()
HAnimJoint1026.setName("r_sternoclavicular")
HAnimJoint1026.setDEF("hanim_r_sternoclavicular")
HAnimJoint1026.setCenter([-0.0694,1.46,-0.033])
HAnimSegment1027 = x3d.HAnimSegment()
HAnimSegment1027.setName("r_clavicle")
HAnimSegment1027.setDEF("hanim_r_clavicle")
Transform1028 = x3d.Transform()
Transform1028.setTranslation([-0.0694,1.46,-0.033])
Transform1029 = x3d.Transform()
#Empty Transform
Shape1030 = x3d.Shape()
Shape1030.setUSE("HAnimJointShape")

Transform1029.addChild(Shape1030)

Transform1028.addChildren(Transform1029)

HAnimSegment1027.addChildren(Transform1028)
Shape1031 = x3d.Shape()
LineSet1032 = x3d.LineSet()
LineSet1032.setVertexCount([2])
Coordinate1033 = x3d.Coordinate()
Coordinate1033.setPoint([-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401])

LineSet1032.setCoord(Coordinate1033)
#from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA1034 = x3d.ColorRGBA()
ColorRGBA1034.setUSE("HAnimSegmentLineColorRGBA")

LineSet1032.setColor(ColorRGBA1034)

Shape1031.setGeometry(LineSet1032)

HAnimSegment1027.addChildren(Shape1031)

HAnimJoint1026.addChildren(HAnimSegment1027)
HAnimJoint1035 = x3d.HAnimJoint()
HAnimJoint1035.setName("r_acromioclavicular")
HAnimJoint1035.setDEF("hanim_r_acromioclavicular")
HAnimJoint1035.setCenter([-0.0836,1.4281,-0.0401])
HAnimSegment1036 = x3d.HAnimSegment()
HAnimSegment1036.setName("r_scapula")
HAnimSegment1036.setDEF("hanim_r_scapula")
Transform1037 = x3d.Transform()
Transform1037.setTranslation([-0.0836,1.4281,-0.0401])
Transform1038 = x3d.Transform()
#Empty Transform
Shape1039 = x3d.Shape()
Shape1039.setUSE("HAnimJointShape")

Transform1038.addChild(Shape1039)

Transform1037.addChildren(Transform1038)

HAnimSegment1036.addChildren(Transform1037)
Shape1040 = x3d.Shape()
LineSet1041 = x3d.LineSet()
LineSet1041.setVertexCount([2])
Coordinate1042 = x3d.Coordinate()
Coordinate1042.setPoint([-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325])

LineSet1041.setCoord(Coordinate1042)
#from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA1043 = x3d.ColorRGBA()
ColorRGBA1043.setUSE("HAnimSegmentLineColorRGBA")

LineSet1041.setColor(ColorRGBA1043)

Shape1040.setGeometry(LineSet1041)

HAnimSegment1036.addChildren(Shape1040)

HAnimJoint1035.addChildren(HAnimSegment1036)
HAnimJoint1044 = x3d.HAnimJoint()
HAnimJoint1044.setName("r_shoulder")
HAnimJoint1044.setDEF("hanim_r_shoulder")
HAnimJoint1044.setCenter([-0.1907,1.4407,-0.0325])
HAnimSegment1045 = x3d.HAnimSegment()
HAnimSegment1045.setName("r_upperarm")
HAnimSegment1045.setDEF("hanim_r_upperarm")
Transform1046 = x3d.Transform()
Transform1046.setTranslation([-0.1907,1.4407,-0.0325])
Transform1047 = x3d.Transform()
#Empty Transform
Shape1048 = x3d.Shape()
Shape1048.setUSE("HAnimJointShape")

Transform1047.addChild(Shape1048)

Transform1046.addChildren(Transform1047)

HAnimSegment1045.addChildren(Transform1046)
Shape1049 = x3d.Shape()
LineSet1050 = x3d.LineSet()
LineSet1050.setVertexCount([2])
Coordinate1051 = x3d.Coordinate()
Coordinate1051.setPoint([-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062])

LineSet1050.setCoord(Coordinate1051)
#from r_shoulder to r_elbow vertices 2
ColorRGBA1052 = x3d.ColorRGBA()
ColorRGBA1052.setUSE("HAnimSegmentLineColorRGBA")

LineSet1050.setColor(ColorRGBA1052)

Shape1049.setGeometry(LineSet1050)

HAnimSegment1045.addChildren(Shape1049)

HAnimJoint1044.addChildren(HAnimSegment1045)
HAnimJoint1053 = x3d.HAnimJoint()
HAnimJoint1053.setName("r_elbow")
HAnimJoint1053.setDEF("hanim_r_elbow")
HAnimJoint1053.setCenter([-0.1949,1.1388,-0.062])
HAnimSegment1054 = x3d.HAnimSegment()
HAnimSegment1054.setName("r_forearm")
HAnimSegment1054.setDEF("hanim_r_forearm")
Transform1055 = x3d.Transform()
Transform1055.setTranslation([-0.1949,1.1388,-0.062])
Transform1056 = x3d.Transform()
#Empty Transform
Shape1057 = x3d.Shape()
Shape1057.setUSE("HAnimJointShape")

Transform1056.addChild(Shape1057)

Transform1055.addChildren(Transform1056)

HAnimSegment1054.addChildren(Transform1055)
Shape1058 = x3d.Shape()
LineSet1059 = x3d.LineSet()
LineSet1059.setVertexCount([2])
Coordinate1060 = x3d.Coordinate()
Coordinate1060.setPoint([-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521])

LineSet1059.setCoord(Coordinate1060)
#from r_elbow to r_radiocarpal vertices 2
ColorRGBA1061 = x3d.ColorRGBA()
ColorRGBA1061.setUSE("HAnimSegmentLineColorRGBA")

LineSet1059.setColor(ColorRGBA1061)

Shape1058.setGeometry(LineSet1059)

HAnimSegment1054.addChildren(Shape1058)

HAnimJoint1053.addChildren(HAnimSegment1054)
HAnimJoint1062 = x3d.HAnimJoint()
HAnimJoint1062.setName("r_radiocarpal")
HAnimJoint1062.setDEF("hanim_r_radiocarpal")
HAnimJoint1062.setCenter([-0.1959,0.8694,-0.0521])
HAnimSegment1063 = x3d.HAnimSegment()
HAnimSegment1063.setName("r_carpal")
HAnimSegment1063.setDEF("hanim_r_carpal")
Transform1064 = x3d.Transform()
Transform1064.setScale([0.2,0.2,0.2])
Transform1064.setTranslation([-0.2,0.85,-0.05])
Transform1064.setRotation([0,0,1,-3.14])
#Transform right hand
Transform1065 = x3d.Transform()
Transform1065.setRotation([0,1,0,1.57])
#Transform right hand
Shape1066 = x3d.Shape()
Shape1066.setUSE("HAnimJointShape")

Transform1065.addChild(Shape1066)

Transform1064.addChildren(Transform1065)

HAnimSegment1063.addChildren(Transform1064)
Shape1067 = x3d.Shape()
LineSet1068 = x3d.LineSet()
LineSet1068.setVertexCount([2])
Coordinate1069 = x3d.Coordinate()
Coordinate1069.setPoint([-0.1959,0.8694,-0.0521,-0.1811,0.6975,-0.0826])

LineSet1068.setCoord(Coordinate1069)
#from r_radiocarpal to r_midcarpal_1 vertices 2
ColorRGBA1070 = x3d.ColorRGBA()
ColorRGBA1070.setUSE("HAnimSegmentLineColorRGBA")

LineSet1068.setColor(ColorRGBA1070)

Shape1067.setGeometry(LineSet1068)

HAnimSegment1063.addChildren(Shape1067)
Shape1071 = x3d.Shape()
LineSet1072 = x3d.LineSet()
LineSet1072.setVertexCount([2])
Coordinate1073 = x3d.Coordinate()
Coordinate1073.setPoint([-0.1959,0.8694,-0.0521,-0.1811,0.6984,-0.0935])

LineSet1072.setCoord(Coordinate1073)
#from r_radiocarpal to r_midcarpal_2 vertices 2
ColorRGBA1074 = x3d.ColorRGBA()
ColorRGBA1074.setUSE("HAnimSegmentLineColorRGBA")

LineSet1072.setColor(ColorRGBA1074)

Shape1071.setGeometry(LineSet1072)

HAnimSegment1063.addChildren(Shape1071)
Shape1075 = x3d.Shape()
LineSet1076 = x3d.LineSet()
LineSet1076.setVertexCount([2])
Coordinate1077 = x3d.Coordinate()
Coordinate1077.setPoint([-0.1959,0.8694,-0.0521,-0.1809,0.7,-0.1067])

LineSet1076.setCoord(Coordinate1077)
#from r_radiocarpal to r_midcarpal_3 vertices 2
ColorRGBA1078 = x3d.ColorRGBA()
ColorRGBA1078.setUSE("HAnimSegmentLineColorRGBA")

LineSet1076.setColor(ColorRGBA1078)

Shape1075.setGeometry(LineSet1076)

HAnimSegment1063.addChildren(Shape1075)
Shape1079 = x3d.Shape()
LineSet1080 = x3d.LineSet()
LineSet1080.setVertexCount([2])
Coordinate1081 = x3d.Coordinate()
Coordinate1081.setPoint([-0.1959,0.8694,-0.0521,-0.1809,0.6973,-0.1276])

LineSet1080.setCoord(Coordinate1081)
#from r_radiocarpal to r_midcarpal_4_5 vertices 2
ColorRGBA1082 = x3d.ColorRGBA()
ColorRGBA1082.setUSE("HAnimSegmentLineColorRGBA")

LineSet1080.setColor(ColorRGBA1082)

Shape1079.setGeometry(LineSet1080)

HAnimSegment1063.addChildren(Shape1079)

HAnimJoint1062.addChildren(HAnimSegment1063)
HAnimJoint1083 = x3d.HAnimJoint()
HAnimJoint1083.setName("r_midcarpal_1")
HAnimJoint1083.setDEF("hanim_r_midcarpal_1")
HAnimJoint1083.setCenter([-0.1811,0.6975,-0.0826])
HAnimSegment1084 = x3d.HAnimSegment()
HAnimSegment1084.setName("r_trapezium")
HAnimSegment1084.setDEF("hanim_r_trapezium")
Transform1085 = x3d.Transform()
Transform1085.setTranslation([-0.1811,0.6975,-0.0826])
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
Coordinate1090.setPoint([-0.1811,0.6975,-0.0826,-0.1899,0.8502,-0.0473])

LineSet1089.setCoord(Coordinate1090)
#from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
ColorRGBA1091 = x3d.ColorRGBA()
ColorRGBA1091.setUSE("HAnimSegmentLineColorRGBA")

LineSet1089.setColor(ColorRGBA1091)

Shape1088.setGeometry(LineSet1089)

HAnimSegment1084.addChildren(Shape1088)

HAnimJoint1083.addChildren(HAnimSegment1084)
HAnimJoint1092 = x3d.HAnimJoint()
HAnimJoint1092.setName("r_carpometacarpal_1")
HAnimJoint1092.setDEF("hanim_r_carpometacarpal_1")
HAnimJoint1092.setCenter([-0.1899,0.8502,-0.0473])
HAnimSegment1093 = x3d.HAnimSegment()
HAnimSegment1093.setName("r_metacarpal_1")
HAnimSegment1093.setDEF("hanim_r_metacarpal_1")
Transform1094 = x3d.Transform()
Transform1094.setTranslation([-0.1899,0.8502,-0.0473])
Transform1095 = x3d.Transform()
#Empty Transform
Shape1096 = x3d.Shape()
Shape1096.setUSE("HAnimJointShape")

Transform1095.addChild(Shape1096)

Transform1094.addChildren(Transform1095)

HAnimSegment1093.addChildren(Transform1094)
Shape1097 = x3d.Shape()
LineSet1098 = x3d.LineSet()
LineSet1098.setVertexCount([2])
Coordinate1099 = x3d.Coordinate()
Coordinate1099.setPoint([-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306])

LineSet1098.setCoord(Coordinate1099)
#from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA1100 = x3d.ColorRGBA()
ColorRGBA1100.setUSE("HAnimSegmentLineColorRGBA")

LineSet1098.setColor(ColorRGBA1100)

Shape1097.setGeometry(LineSet1098)

HAnimSegment1093.addChildren(Shape1097)

HAnimJoint1092.addChildren(HAnimSegment1093)
HAnimJoint1101 = x3d.HAnimJoint()
HAnimJoint1101.setName("r_metacarpophalangeal_1")
HAnimJoint1101.setDEF("hanim_r_metacarpophalangeal_1")
HAnimJoint1101.setCenter([-0.1874,0.8256,0.0306])
HAnimSegment1102 = x3d.HAnimSegment()
HAnimSegment1102.setName("r_carpal_proximal_phalanx_1")
HAnimSegment1102.setDEF("hanim_r_carpal_proximal_phalanx_1")
Transform1103 = x3d.Transform()
Transform1103.setTranslation([-0.1874,0.8256,0.0306])
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
Coordinate1108.setPoint([-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506])

LineSet1107.setCoord(Coordinate1108)
#from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA1109 = x3d.ColorRGBA()
ColorRGBA1109.setUSE("HAnimSegmentLineColorRGBA")

LineSet1107.setColor(ColorRGBA1109)

Shape1106.setGeometry(LineSet1107)

HAnimSegment1102.addChildren(Shape1106)

HAnimJoint1101.addChildren(HAnimSegment1102)
HAnimJoint1110 = x3d.HAnimJoint()
HAnimJoint1110.setName("r_carpal_interphalangeal_1")
HAnimJoint1110.setDEF("hanim_r_carpal_interphalangeal_1")
HAnimJoint1110.setCenter([-0.1864,0.819,0.0506])

HAnimJoint1101.addChildren(HAnimJoint1110)

HAnimJoint1092.addChildren(HAnimJoint1101)

HAnimJoint1083.addChildren(HAnimJoint1092)

HAnimJoint1062.addChildren(HAnimJoint1083)
HAnimJoint1111 = x3d.HAnimJoint()
HAnimJoint1111.setName("r_midcarpal_2")
HAnimJoint1111.setDEF("hanim_r_midcarpal_2")
HAnimJoint1111.setCenter([-0.1811,0.6984,-0.0935])
HAnimSegment1112 = x3d.HAnimSegment()
HAnimSegment1112.setName("r_trapezoid")
HAnimSegment1112.setDEF("hanim_r_trapezoid")
Transform1113 = x3d.Transform()
Transform1113.setTranslation([-0.1811,0.6984,-0.0935])
Transform1114 = x3d.Transform()
#Empty Transform
Shape1115 = x3d.Shape()
Shape1115.setUSE("HAnimJointShape")

Transform1114.addChild(Shape1115)

Transform1113.addChildren(Transform1114)

HAnimSegment1112.addChildren(Transform1113)
Shape1116 = x3d.Shape()
LineSet1117 = x3d.LineSet()
LineSet1117.setVertexCount([2])
Coordinate1118 = x3d.Coordinate()
Coordinate1118.setPoint([-0.1811,0.6984,-0.0935,-0.1961,0.8055,-0.0218])

LineSet1117.setCoord(Coordinate1118)
#from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
ColorRGBA1119 = x3d.ColorRGBA()
ColorRGBA1119.setUSE("HAnimSegmentLineColorRGBA")

LineSet1117.setColor(ColorRGBA1119)

Shape1116.setGeometry(LineSet1117)

HAnimSegment1112.addChildren(Shape1116)

HAnimJoint1111.addChildren(HAnimSegment1112)
HAnimJoint1120 = x3d.HAnimJoint()
HAnimJoint1120.setName("r_carpometacarpal_2")
HAnimJoint1120.setDEF("hanim_r_carpometacarpal_2")
HAnimJoint1120.setCenter([-0.1961,0.8055,-0.0218])
HAnimSegment1121 = x3d.HAnimSegment()
HAnimSegment1121.setName("r_metacarpal_2")
HAnimSegment1121.setDEF("hanim_r_metacarpal_2")
Transform1122 = x3d.Transform()
Transform1122.setTranslation([-0.1961,0.8055,-0.0218])
Transform1123 = x3d.Transform()
#Empty Transform
Shape1124 = x3d.Shape()
Shape1124.setUSE("HAnimJointShape")

Transform1123.addChild(Shape1124)

Transform1122.addChildren(Transform1123)

HAnimSegment1121.addChildren(Transform1122)
Shape1125 = x3d.Shape()
LineSet1126 = x3d.LineSet()
LineSet1126.setVertexCount([2])
Coordinate1127 = x3d.Coordinate()
Coordinate1127.setPoint([-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218])

LineSet1126.setCoord(Coordinate1127)
#from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA1128 = x3d.ColorRGBA()
ColorRGBA1128.setUSE("HAnimSegmentLineColorRGBA")

LineSet1126.setColor(ColorRGBA1128)

Shape1125.setGeometry(LineSet1126)

HAnimSegment1121.addChildren(Shape1125)

HAnimJoint1120.addChildren(HAnimSegment1121)
HAnimJoint1129 = x3d.HAnimJoint()
HAnimJoint1129.setName("r_metacarpophalangeal_2")
HAnimJoint1129.setDEF("hanim_r_metacarpophalangeal_2")
HAnimJoint1129.setCenter([-0.1961,0.7846,-0.0218])
HAnimSegment1130 = x3d.HAnimSegment()
HAnimSegment1130.setName("r_carpal_proximal_phalanx_2")
HAnimSegment1130.setDEF("hanim_r_carpal_proximal_phalanx_2")
Transform1131 = x3d.Transform()
Transform1131.setTranslation([-0.1961,0.7846,-0.0218])
Transform1132 = x3d.Transform()
#Empty Transform
Shape1133 = x3d.Shape()
Shape1133.setUSE("HAnimJointShape")

Transform1132.addChild(Shape1133)

Transform1131.addChildren(Transform1132)

HAnimSegment1130.addChildren(Transform1131)
Shape1134 = x3d.Shape()
LineSet1135 = x3d.LineSet()
LineSet1135.setVertexCount([2])
Coordinate1136 = x3d.Coordinate()
Coordinate1136.setPoint([-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185])

LineSet1135.setCoord(Coordinate1136)
#from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA1137 = x3d.ColorRGBA()
ColorRGBA1137.setUSE("HAnimSegmentLineColorRGBA")

LineSet1135.setColor(ColorRGBA1137)

Shape1134.setGeometry(LineSet1135)

HAnimSegment1130.addChildren(Shape1134)

HAnimJoint1129.addChildren(HAnimSegment1130)
HAnimJoint1138 = x3d.HAnimJoint()
HAnimJoint1138.setName("r_carpal_proximal_interphalangeal_2")
HAnimJoint1138.setDEF("hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint1138.setCenter([-0.1954,0.7393,-0.0185])
HAnimSegment1139 = x3d.HAnimSegment()
HAnimSegment1139.setName("r_carpal_middle_phalanx_2")
HAnimSegment1139.setDEF("hanim_r_carpal_middle_phalanx_2")
Transform1140 = x3d.Transform()
Transform1140.setTranslation([-0.1954,0.7393,-0.0185])
Transform1141 = x3d.Transform()
#Empty Transform
Shape1142 = x3d.Shape()
Shape1142.setUSE("HAnimJointShape")

Transform1141.addChild(Shape1142)

Transform1140.addChildren(Transform1141)

HAnimSegment1139.addChildren(Transform1140)
Shape1143 = x3d.Shape()
LineSet1144 = x3d.LineSet()
LineSet1144.setVertexCount([2])
Coordinate1145 = x3d.Coordinate()
Coordinate1145.setPoint([-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173])

LineSet1144.setCoord(Coordinate1145)
#from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA1146 = x3d.ColorRGBA()
ColorRGBA1146.setUSE("HAnimSegmentLineColorRGBA")

LineSet1144.setColor(ColorRGBA1146)

Shape1143.setGeometry(LineSet1144)

HAnimSegment1139.addChildren(Shape1143)

HAnimJoint1138.addChildren(HAnimSegment1139)
HAnimJoint1147 = x3d.HAnimJoint()
HAnimJoint1147.setName("r_carpal_distal_interphalangeal_2")
HAnimJoint1147.setDEF("hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint1147.setCenter([-0.1945,0.7169,-0.0173])

HAnimJoint1138.addChildren(HAnimJoint1147)

HAnimJoint1129.addChildren(HAnimJoint1138)

HAnimJoint1120.addChildren(HAnimJoint1129)

HAnimJoint1111.addChildren(HAnimJoint1120)

HAnimJoint1062.addChildren(HAnimJoint1111)
HAnimJoint1148 = x3d.HAnimJoint()
HAnimJoint1148.setName("r_midcarpal_3")
HAnimJoint1148.setDEF("hanim_r_midcarpal_3")
HAnimJoint1148.setCenter([-0.1809,0.7,-0.1067])
HAnimSegment1149 = x3d.HAnimSegment()
HAnimSegment1149.setName("r_capitate")
HAnimSegment1149.setDEF("hanim_r_capitate")
Transform1150 = x3d.Transform()
Transform1150.setTranslation([-0.1809,0.7,-0.1067])
Transform1151 = x3d.Transform()
#Empty Transform
Shape1152 = x3d.Shape()
Shape1152.setUSE("HAnimJointShape")

Transform1151.addChild(Shape1152)

Transform1150.addChildren(Transform1151)

HAnimSegment1149.addChildren(Transform1150)
Shape1153 = x3d.Shape()
LineSet1154 = x3d.LineSet()
LineSet1154.setVertexCount([2])
Coordinate1155 = x3d.Coordinate()
Coordinate1155.setPoint([-0.1809,0.7,-0.1067,-0.1972,0.806,-0.0468])

LineSet1154.setCoord(Coordinate1155)
#from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
ColorRGBA1156 = x3d.ColorRGBA()
ColorRGBA1156.setUSE("HAnimSegmentLineColorRGBA")

LineSet1154.setColor(ColorRGBA1156)

Shape1153.setGeometry(LineSet1154)

HAnimSegment1149.addChildren(Shape1153)

HAnimJoint1148.addChildren(HAnimSegment1149)
HAnimJoint1157 = x3d.HAnimJoint()
HAnimJoint1157.setName("r_carpometacarpal_3")
HAnimJoint1157.setDEF("hanim_r_carpometacarpal_3")
HAnimJoint1157.setCenter([-0.1972,0.806,-0.0468])
HAnimSegment1158 = x3d.HAnimSegment()
HAnimSegment1158.setName("r_metacarpal_3")
HAnimSegment1158.setDEF("hanim_r_metacarpal_3")
Transform1159 = x3d.Transform()
Transform1159.setTranslation([-0.1972,0.806,-0.0468])
Transform1160 = x3d.Transform()
#Empty Transform
Shape1161 = x3d.Shape()
Shape1161.setUSE("HAnimJointShape")

Transform1160.addChild(Shape1161)

Transform1159.addChildren(Transform1160)

HAnimSegment1158.addChildren(Transform1159)
Shape1162 = x3d.Shape()
LineSet1163 = x3d.LineSet()
LineSet1163.setVertexCount([2])
Coordinate1164 = x3d.Coordinate()
Coordinate1164.setPoint([-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468])

LineSet1163.setCoord(Coordinate1164)
#from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA1165 = x3d.ColorRGBA()
ColorRGBA1165.setUSE("HAnimSegmentLineColorRGBA")

LineSet1163.setColor(ColorRGBA1165)

Shape1162.setGeometry(LineSet1163)

HAnimSegment1158.addChildren(Shape1162)

HAnimJoint1157.addChildren(HAnimSegment1158)
HAnimJoint1166 = x3d.HAnimJoint()
HAnimJoint1166.setName("r_metacarpophalangeal_3")
HAnimJoint1166.setDEF("hanim_r_metacarpophalangeal_3")
HAnimJoint1166.setCenter([-0.1972,0.7849,-0.0468])
HAnimSegment1167 = x3d.HAnimSegment()
HAnimSegment1167.setName("r_carpal_proximal_phalanx_3")
HAnimSegment1167.setDEF("hanim_r_carpal_proximal_phalanx_3")
Transform1168 = x3d.Transform()
Transform1168.setTranslation([-0.1972,0.7849,-0.0468])
Transform1169 = x3d.Transform()
#Empty Transform
Shape1170 = x3d.Shape()
Shape1170.setUSE("HAnimJointShape")

Transform1169.addChild(Shape1170)

Transform1168.addChildren(Transform1169)

HAnimSegment1167.addChildren(Transform1168)
Shape1171 = x3d.Shape()
LineSet1172 = x3d.LineSet()
LineSet1172.setVertexCount([2])
Coordinate1173 = x3d.Coordinate()
Coordinate1173.setPoint([-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441])

LineSet1172.setCoord(Coordinate1173)
#from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA1174 = x3d.ColorRGBA()
ColorRGBA1174.setUSE("HAnimSegmentLineColorRGBA")

LineSet1172.setColor(ColorRGBA1174)

Shape1171.setGeometry(LineSet1172)

HAnimSegment1167.addChildren(Shape1171)

HAnimJoint1166.addChildren(HAnimSegment1167)
HAnimJoint1175 = x3d.HAnimJoint()
HAnimJoint1175.setName("r_carpal_proximal_interphalangeal_3")
HAnimJoint1175.setDEF("hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint1175.setCenter([-0.195,0.7304,-0.0441])
HAnimSegment1176 = x3d.HAnimSegment()
HAnimSegment1176.setName("r_carpal_middle_phalanx_3")
HAnimSegment1176.setDEF("hanim_r_carpal_middle_phalanx_3")
Transform1177 = x3d.Transform()
Transform1177.setTranslation([-0.195,0.7304,-0.0441])
Transform1178 = x3d.Transform()
#Empty Transform
Shape1179 = x3d.Shape()
Shape1179.setUSE("HAnimJointShape")

Transform1178.addChild(Shape1179)

Transform1177.addChildren(Transform1178)

HAnimSegment1176.addChildren(Transform1177)
Shape1180 = x3d.Shape()
LineSet1181 = x3d.LineSet()
LineSet1181.setVertexCount([2])
Coordinate1182 = x3d.Coordinate()
Coordinate1182.setPoint([-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432])

LineSet1181.setCoord(Coordinate1182)
#from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA1183 = x3d.ColorRGBA()
ColorRGBA1183.setUSE("HAnimSegmentLineColorRGBA")

LineSet1181.setColor(ColorRGBA1183)

Shape1180.setGeometry(LineSet1181)

HAnimSegment1176.addChildren(Shape1180)

HAnimJoint1175.addChildren(HAnimSegment1176)
HAnimJoint1184 = x3d.HAnimJoint()
HAnimJoint1184.setName("r_carpal_distal_interphalangeal_3")
HAnimJoint1184.setDEF("hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint1184.setCenter([-0.1939,0.7042,-0.0432])

HAnimJoint1175.addChildren(HAnimJoint1184)

HAnimJoint1166.addChildren(HAnimJoint1175)

HAnimJoint1157.addChildren(HAnimJoint1166)

HAnimJoint1148.addChildren(HAnimJoint1157)

HAnimJoint1062.addChildren(HAnimJoint1148)
HAnimJoint1185 = x3d.HAnimJoint()
HAnimJoint1185.setName("r_midcarpal_4_5")
HAnimJoint1185.setDEF("hanim_r_midcarpal_4_5")
HAnimJoint1185.setCenter([-0.1809,0.6973,-0.1276])
HAnimSegment1186 = x3d.HAnimSegment()
HAnimSegment1186.setName("r_hamate")
HAnimSegment1186.setDEF("hanim_r_hamate")
Transform1187 = x3d.Transform()
Transform1187.setTranslation([-0.1809,0.6973,-0.1276])
Transform1188 = x3d.Transform()
#Empty Transform
Shape1189 = x3d.Shape()
Shape1189.setUSE("HAnimJointShape")

Transform1188.addChild(Shape1189)

Transform1187.addChildren(Transform1188)

HAnimSegment1186.addChildren(Transform1187)
Shape1190 = x3d.Shape()
LineSet1191 = x3d.LineSet()
LineSet1191.setVertexCount([2])
Coordinate1192 = x3d.Coordinate()
Coordinate1192.setPoint([-0.1809,0.6973,-0.1276,-0.1951,0.8049,-0.0732])

LineSet1191.setCoord(Coordinate1192)
#from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
ColorRGBA1193 = x3d.ColorRGBA()
ColorRGBA1193.setUSE("HAnimSegmentLineColorRGBA")

LineSet1191.setColor(ColorRGBA1193)

Shape1190.setGeometry(LineSet1191)

HAnimSegment1186.addChildren(Shape1190)
Shape1194 = x3d.Shape()
LineSet1195 = x3d.LineSet()
LineSet1195.setVertexCount([2])
Coordinate1196 = x3d.Coordinate()
Coordinate1196.setPoint([-0.1809,0.6973,-0.1276,-0.1926,0.8096,-0.0975])

LineSet1195.setCoord(Coordinate1196)
#from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
ColorRGBA1197 = x3d.ColorRGBA()
ColorRGBA1197.setUSE("HAnimSegmentLineColorRGBA")

LineSet1195.setColor(ColorRGBA1197)

Shape1194.setGeometry(LineSet1195)

HAnimSegment1186.addChildren(Shape1194)

HAnimJoint1185.addChildren(HAnimSegment1186)
HAnimJoint1198 = x3d.HAnimJoint()
HAnimJoint1198.setName("r_carpometacarpal_4")
HAnimJoint1198.setDEF("hanim_r_carpometacarpal_4")
HAnimJoint1198.setCenter([-0.1951,0.8049,-0.0732])
HAnimSegment1199 = x3d.HAnimSegment()
HAnimSegment1199.setName("r_metacarpal_4")
HAnimSegment1199.setDEF("hanim_r_metacarpal_4")
Transform1200 = x3d.Transform()
Transform1200.setTranslation([-0.1951,0.8049,-0.0732])
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
Coordinate1205.setPoint([-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732])

LineSet1204.setCoord(Coordinate1205)
#from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA1206 = x3d.ColorRGBA()
ColorRGBA1206.setUSE("HAnimSegmentLineColorRGBA")

LineSet1204.setColor(ColorRGBA1206)

Shape1203.setGeometry(LineSet1204)

HAnimSegment1199.addChildren(Shape1203)

HAnimJoint1198.addChildren(HAnimSegment1199)
HAnimJoint1207 = x3d.HAnimJoint()
HAnimJoint1207.setName("r_metacarpophalangeal_4")
HAnimJoint1207.setDEF("hanim_r_metacarpophalangeal_4")
HAnimJoint1207.setCenter([-0.1951,0.7845,-0.0732])
HAnimSegment1208 = x3d.HAnimSegment()
HAnimSegment1208.setName("r_carpal_proximal_phalanx_4")
HAnimSegment1208.setDEF("hanim_r_carpal_proximal_phalanx_4")
Transform1209 = x3d.Transform()
Transform1209.setTranslation([-0.1951,0.7845,-0.0732])
Transform1210 = x3d.Transform()
#Empty Transform
Shape1211 = x3d.Shape()
Shape1211.setUSE("HAnimJointShape")

Transform1210.addChild(Shape1211)

Transform1209.addChildren(Transform1210)

HAnimSegment1208.addChildren(Transform1209)
Shape1212 = x3d.Shape()
LineSet1213 = x3d.LineSet()
LineSet1213.setVertexCount([2])
Coordinate1214 = x3d.Coordinate()
Coordinate1214.setPoint([-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716])

LineSet1213.setCoord(Coordinate1214)
#from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA1215 = x3d.ColorRGBA()
ColorRGBA1215.setUSE("HAnimSegmentLineColorRGBA")

LineSet1213.setColor(ColorRGBA1215)

Shape1212.setGeometry(LineSet1213)

HAnimSegment1208.addChildren(Shape1212)

HAnimJoint1207.addChildren(HAnimSegment1208)
HAnimJoint1216 = x3d.HAnimJoint()
HAnimJoint1216.setName("r_carpal_proximal_interphalangeal_4")
HAnimJoint1216.setDEF("hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint1216.setCenter([-0.192,0.7318,-0.0716])
HAnimSegment1217 = x3d.HAnimSegment()
HAnimSegment1217.setName("r_carpal_middle_phalanx_4")
HAnimSegment1217.setDEF("hanim_r_carpal_middle_phalanx_4")
Transform1218 = x3d.Transform()
Transform1218.setTranslation([-0.192,0.7318,-0.0716])
Transform1219 = x3d.Transform()
#Empty Transform
Shape1220 = x3d.Shape()
Shape1220.setUSE("HAnimJointShape")

Transform1219.addChild(Shape1220)

Transform1218.addChildren(Transform1219)

HAnimSegment1217.addChildren(Transform1218)
Shape1221 = x3d.Shape()
LineSet1222 = x3d.LineSet()
LineSet1222.setVertexCount([2])
Coordinate1223 = x3d.Coordinate()
Coordinate1223.setPoint([-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706])

LineSet1222.setCoord(Coordinate1223)
#from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA1224 = x3d.ColorRGBA()
ColorRGBA1224.setUSE("HAnimSegmentLineColorRGBA")

LineSet1222.setColor(ColorRGBA1224)

Shape1221.setGeometry(LineSet1222)

HAnimSegment1217.addChildren(Shape1221)

HAnimJoint1216.addChildren(HAnimSegment1217)
HAnimJoint1225 = x3d.HAnimJoint()
HAnimJoint1225.setName("r_carpal_distal_interphalangeal_4")
HAnimJoint1225.setDEF("hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint1225.setCenter([-0.1908,0.7077,-0.0706])

HAnimJoint1216.addChildren(HAnimJoint1225)

HAnimJoint1207.addChildren(HAnimJoint1216)

HAnimJoint1198.addChildren(HAnimJoint1207)

HAnimJoint1185.addChildren(HAnimJoint1198)
HAnimJoint1226 = x3d.HAnimJoint()
HAnimJoint1226.setName("r_carpometacarpal_5")
HAnimJoint1226.setDEF("hanim_r_carpometacarpal_5")
HAnimJoint1226.setCenter([-0.1926,0.8096,-0.0975])
HAnimSegment1227 = x3d.HAnimSegment()
HAnimSegment1227.setName("r_metacarpal_5")
HAnimSegment1227.setDEF("hanim_r_metacarpal_5")
Transform1228 = x3d.Transform()
Transform1228.setTranslation([-0.1926,0.8096,-0.0975])
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
Coordinate1233.setPoint([-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975])

LineSet1232.setCoord(Coordinate1233)
#from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA1234 = x3d.ColorRGBA()
ColorRGBA1234.setUSE("HAnimSegmentLineColorRGBA")

LineSet1232.setColor(ColorRGBA1234)

Shape1231.setGeometry(LineSet1232)

HAnimSegment1227.addChildren(Shape1231)

HAnimJoint1226.addChildren(HAnimSegment1227)
HAnimJoint1235 = x3d.HAnimJoint()
HAnimJoint1235.setName("r_metacarpophalangeal_5")
HAnimJoint1235.setDEF("hanim_r_metacarpophalangeal_5")
HAnimJoint1235.setCenter([-0.1926,0.7896,-0.0975])
HAnimSegment1236 = x3d.HAnimSegment()
HAnimSegment1236.setName("r_carpal_proximal_phalanx_5")
HAnimSegment1236.setDEF("hanim_r_carpal_proximal_phalanx_5")
Transform1237 = x3d.Transform()
Transform1237.setTranslation([-0.1926,0.7896,-0.0975])
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
Coordinate1242.setPoint([-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963])

LineSet1241.setCoord(Coordinate1242)
#from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA1243 = x3d.ColorRGBA()
ColorRGBA1243.setUSE("HAnimSegmentLineColorRGBA")

LineSet1241.setColor(ColorRGBA1243)

Shape1240.setGeometry(LineSet1241)

HAnimSegment1236.addChildren(Shape1240)

HAnimJoint1235.addChildren(HAnimSegment1236)
HAnimJoint1244 = x3d.HAnimJoint()
HAnimJoint1244.setName("r_carpal_proximal_interphalangeal_5")
HAnimJoint1244.setDEF("hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint1244.setCenter([-0.1902,0.7483,-0.0963])
HAnimSegment1245 = x3d.HAnimSegment()
HAnimSegment1245.setName("r_carpal_middle_phalanx_5")
HAnimSegment1245.setDEF("hanim_r_carpal_middle_phalanx_5")
Transform1246 = x3d.Transform()
Transform1246.setTranslation([-0.1902,0.7483,-0.0963])
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
Coordinate1251.setPoint([-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096])

LineSet1250.setCoord(Coordinate1251)
#from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA1252 = x3d.ColorRGBA()
ColorRGBA1252.setUSE("HAnimSegmentLineColorRGBA")

LineSet1250.setColor(ColorRGBA1252)

Shape1249.setGeometry(LineSet1250)

HAnimSegment1245.addChildren(Shape1249)

HAnimJoint1244.addChildren(HAnimSegment1245)
HAnimJoint1253 = x3d.HAnimJoint()
HAnimJoint1253.setName("r_carpal_distal_interphalangeal_5")
HAnimJoint1253.setDEF("hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint1253.setCenter([-0.1908,0.754,-0.096])

HAnimJoint1244.addChildren(HAnimJoint1253)

HAnimJoint1235.addChildren(HAnimJoint1244)

HAnimJoint1226.addChildren(HAnimJoint1235)

HAnimJoint1185.addChildren(HAnimJoint1226)

HAnimJoint1062.addChildren(HAnimJoint1185)

HAnimJoint1053.addChildren(HAnimJoint1062)

HAnimJoint1044.addChildren(HAnimJoint1053)

HAnimJoint1035.addChildren(HAnimJoint1044)

HAnimJoint1026.addChildren(HAnimJoint1035)

HAnimJoint678.addChildren(HAnimJoint1026)

HAnimJoint669.addChildren(HAnimJoint678)

HAnimJoint660.addChildren(HAnimJoint669)

HAnimJoint651.addChildren(HAnimJoint660)

HAnimJoint642.addChildren(HAnimJoint651)

HAnimJoint633.addChildren(HAnimJoint642)

HAnimJoint624.addChildren(HAnimJoint633)

HAnimJoint615.addChildren(HAnimJoint624)

HAnimJoint606.addChildren(HAnimJoint615)

HAnimJoint597.addChildren(HAnimJoint606)

HAnimJoint588.addChildren(HAnimJoint597)

HAnimJoint579.addChildren(HAnimJoint588)

HAnimJoint570.addChildren(HAnimJoint579)

HAnimJoint561.addChildren(HAnimJoint570)

HAnimJoint552.addChildren(HAnimJoint561)

HAnimJoint543.addChildren(HAnimJoint552)

HAnimJoint534.addChildren(HAnimJoint543)

HAnimJoint52.addChildren(HAnimJoint534)

HAnimHumanoid43.setSkeleton(HAnimJoint52)
HAnimJoint1254 = x3d.HAnimJoint()
HAnimJoint1254.setUSE("hanim_humanoid_root")

HAnimHumanoid43.addJoints(HAnimJoint1254)
HAnimJoint1255 = x3d.HAnimJoint()
HAnimJoint1255.setUSE("hanim_sacroiliac")

HAnimHumanoid43.addJoints(HAnimJoint1255)
HAnimJoint1256 = x3d.HAnimJoint()
HAnimJoint1256.setUSE("hanim_l_hip")

HAnimHumanoid43.addJoints(HAnimJoint1256)
HAnimJoint1257 = x3d.HAnimJoint()
HAnimJoint1257.setUSE("hanim_l_knee")

HAnimHumanoid43.addJoints(HAnimJoint1257)
HAnimJoint1258 = x3d.HAnimJoint()
HAnimJoint1258.setUSE("hanim_l_talocrural")

HAnimHumanoid43.addJoints(HAnimJoint1258)
HAnimJoint1259 = x3d.HAnimJoint()
HAnimJoint1259.setUSE("hanim_l_talocalcaneonavicular")

HAnimHumanoid43.addJoints(HAnimJoint1259)
HAnimJoint1260 = x3d.HAnimJoint()
HAnimJoint1260.setUSE("hanim_l_cuneonavicular_1")

HAnimHumanoid43.addJoints(HAnimJoint1260)
HAnimJoint1261 = x3d.HAnimJoint()
HAnimJoint1261.setUSE("hanim_l_tarsometatarsal_1")

HAnimHumanoid43.addJoints(HAnimJoint1261)
HAnimJoint1262 = x3d.HAnimJoint()
HAnimJoint1262.setUSE("hanim_l_metatarsophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1262)
HAnimJoint1263 = x3d.HAnimJoint()
HAnimJoint1263.setUSE("hanim_l_tarsal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1263)
HAnimJoint1264 = x3d.HAnimJoint()
HAnimJoint1264.setUSE("hanim_l_cuneonavicular_2")

HAnimHumanoid43.addJoints(HAnimJoint1264)
HAnimJoint1265 = x3d.HAnimJoint()
HAnimJoint1265.setUSE("hanim_l_tarsometatarsal_2")

HAnimHumanoid43.addJoints(HAnimJoint1265)
HAnimJoint1266 = x3d.HAnimJoint()
HAnimJoint1266.setUSE("hanim_l_metatarsophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1266)
HAnimJoint1267 = x3d.HAnimJoint()
HAnimJoint1267.setUSE("hanim_l_tarsal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1267)
HAnimJoint1268 = x3d.HAnimJoint()
HAnimJoint1268.setUSE("hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1268)
HAnimJoint1269 = x3d.HAnimJoint()
HAnimJoint1269.setUSE("hanim_l_cuneonavicular_3")

HAnimHumanoid43.addJoints(HAnimJoint1269)
HAnimJoint1270 = x3d.HAnimJoint()
HAnimJoint1270.setUSE("hanim_l_tarsometatarsal_3")

HAnimHumanoid43.addJoints(HAnimJoint1270)
HAnimJoint1271 = x3d.HAnimJoint()
HAnimJoint1271.setUSE("hanim_l_metatarsophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1271)
HAnimJoint1272 = x3d.HAnimJoint()
HAnimJoint1272.setUSE("hanim_l_tarsal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1272)
HAnimJoint1273 = x3d.HAnimJoint()
HAnimJoint1273.setUSE("hanim_l_tarsal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1273)
HAnimJoint1274 = x3d.HAnimJoint()
HAnimJoint1274.setUSE("hanim_l_calcaneocuboid")

HAnimHumanoid43.addJoints(HAnimJoint1274)
HAnimJoint1275 = x3d.HAnimJoint()
HAnimJoint1275.setUSE("hanim_l_transversetarsal")

HAnimHumanoid43.addJoints(HAnimJoint1275)
HAnimJoint1276 = x3d.HAnimJoint()
HAnimJoint1276.setUSE("hanim_l_tarsometatarsal_4")

HAnimHumanoid43.addJoints(HAnimJoint1276)
HAnimJoint1277 = x3d.HAnimJoint()
HAnimJoint1277.setUSE("hanim_l_metatarsophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1277)
HAnimJoint1278 = x3d.HAnimJoint()
HAnimJoint1278.setUSE("hanim_l_tarsal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1278)
HAnimJoint1279 = x3d.HAnimJoint()
HAnimJoint1279.setUSE("hanim_l_tarsal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1279)
HAnimJoint1280 = x3d.HAnimJoint()
HAnimJoint1280.setUSE("hanim_l_tarsometatarsal_5")

HAnimHumanoid43.addJoints(HAnimJoint1280)
HAnimJoint1281 = x3d.HAnimJoint()
HAnimJoint1281.setUSE("hanim_l_metatarsophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1281)
HAnimJoint1282 = x3d.HAnimJoint()
HAnimJoint1282.setUSE("hanim_l_tarsal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1282)
HAnimJoint1283 = x3d.HAnimJoint()
HAnimJoint1283.setUSE("hanim_l_tarsal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1283)
HAnimJoint1284 = x3d.HAnimJoint()
HAnimJoint1284.setUSE("hanim_r_hip")

HAnimHumanoid43.addJoints(HAnimJoint1284)
HAnimJoint1285 = x3d.HAnimJoint()
HAnimJoint1285.setUSE("hanim_r_knee")

HAnimHumanoid43.addJoints(HAnimJoint1285)
HAnimJoint1286 = x3d.HAnimJoint()
HAnimJoint1286.setUSE("hanim_r_talocrural")

HAnimHumanoid43.addJoints(HAnimJoint1286)
HAnimJoint1287 = x3d.HAnimJoint()
HAnimJoint1287.setUSE("hanim_r_talocalcaneonavicular")

HAnimHumanoid43.addJoints(HAnimJoint1287)
HAnimJoint1288 = x3d.HAnimJoint()
HAnimJoint1288.setUSE("hanim_r_cuneonavicular_1")

HAnimHumanoid43.addJoints(HAnimJoint1288)
HAnimJoint1289 = x3d.HAnimJoint()
HAnimJoint1289.setUSE("hanim_r_tarsometatarsal_1")

HAnimHumanoid43.addJoints(HAnimJoint1289)
HAnimJoint1290 = x3d.HAnimJoint()
HAnimJoint1290.setUSE("hanim_r_metatarsophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1290)
HAnimJoint1291 = x3d.HAnimJoint()
HAnimJoint1291.setUSE("hanim_r_tarsal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1291)
HAnimJoint1292 = x3d.HAnimJoint()
HAnimJoint1292.setUSE("hanim_r_cuneonavicular_2")

HAnimHumanoid43.addJoints(HAnimJoint1292)
HAnimJoint1293 = x3d.HAnimJoint()
HAnimJoint1293.setUSE("hanim_r_tarsometatarsal_2")

HAnimHumanoid43.addJoints(HAnimJoint1293)
HAnimJoint1294 = x3d.HAnimJoint()
HAnimJoint1294.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1294)
HAnimJoint1295 = x3d.HAnimJoint()
HAnimJoint1295.setUSE("hanim_r_tarsal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1295)
HAnimJoint1296 = x3d.HAnimJoint()
HAnimJoint1296.setUSE("hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1296)
HAnimJoint1297 = x3d.HAnimJoint()
HAnimJoint1297.setUSE("hanim_r_cuneonavicular_3")

HAnimHumanoid43.addJoints(HAnimJoint1297)
HAnimJoint1298 = x3d.HAnimJoint()
HAnimJoint1298.setUSE("hanim_r_tarsometatarsal_3")

HAnimHumanoid43.addJoints(HAnimJoint1298)
HAnimJoint1299 = x3d.HAnimJoint()
HAnimJoint1299.setUSE("hanim_r_metatarsophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1299)
HAnimJoint1300 = x3d.HAnimJoint()
HAnimJoint1300.setUSE("hanim_r_tarsal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1300)
HAnimJoint1301 = x3d.HAnimJoint()
HAnimJoint1301.setUSE("hanim_r_tarsal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1301)
HAnimJoint1302 = x3d.HAnimJoint()
HAnimJoint1302.setUSE("hanim_r_calcaneocuboid")

HAnimHumanoid43.addJoints(HAnimJoint1302)
HAnimJoint1303 = x3d.HAnimJoint()
HAnimJoint1303.setUSE("hanim_r_transversetarsal")

HAnimHumanoid43.addJoints(HAnimJoint1303)
HAnimJoint1304 = x3d.HAnimJoint()
HAnimJoint1304.setUSE("hanim_r_tarsometatarsal_4")

HAnimHumanoid43.addJoints(HAnimJoint1304)
HAnimJoint1305 = x3d.HAnimJoint()
HAnimJoint1305.setUSE("hanim_r_metatarsophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1305)
HAnimJoint1306 = x3d.HAnimJoint()
HAnimJoint1306.setUSE("hanim_r_tarsal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1306)
HAnimJoint1307 = x3d.HAnimJoint()
HAnimJoint1307.setUSE("hanim_r_tarsal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1307)
HAnimJoint1308 = x3d.HAnimJoint()
HAnimJoint1308.setUSE("hanim_r_tarsometatarsal_5")

HAnimHumanoid43.addJoints(HAnimJoint1308)
HAnimJoint1309 = x3d.HAnimJoint()
HAnimJoint1309.setUSE("hanim_r_metatarsophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1309)
HAnimJoint1310 = x3d.HAnimJoint()
HAnimJoint1310.setUSE("hanim_r_tarsal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1310)
HAnimJoint1311 = x3d.HAnimJoint()
HAnimJoint1311.setUSE("hanim_r_tarsal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1311)
HAnimJoint1312 = x3d.HAnimJoint()
HAnimJoint1312.setUSE("hanim_vl5")

HAnimHumanoid43.addJoints(HAnimJoint1312)
HAnimJoint1313 = x3d.HAnimJoint()
HAnimJoint1313.setUSE("hanim_vl4")

HAnimHumanoid43.addJoints(HAnimJoint1313)
HAnimJoint1314 = x3d.HAnimJoint()
HAnimJoint1314.setUSE("hanim_vl3")

HAnimHumanoid43.addJoints(HAnimJoint1314)
HAnimJoint1315 = x3d.HAnimJoint()
HAnimJoint1315.setUSE("hanim_vl2")

HAnimHumanoid43.addJoints(HAnimJoint1315)
HAnimJoint1316 = x3d.HAnimJoint()
HAnimJoint1316.setUSE("hanim_vl1")

HAnimHumanoid43.addJoints(HAnimJoint1316)
HAnimJoint1317 = x3d.HAnimJoint()
HAnimJoint1317.setUSE("hanim_vt12")

HAnimHumanoid43.addJoints(HAnimJoint1317)
HAnimJoint1318 = x3d.HAnimJoint()
HAnimJoint1318.setUSE("hanim_vt11")

HAnimHumanoid43.addJoints(HAnimJoint1318)
HAnimJoint1319 = x3d.HAnimJoint()
HAnimJoint1319.setUSE("hanim_vt10")

HAnimHumanoid43.addJoints(HAnimJoint1319)
HAnimJoint1320 = x3d.HAnimJoint()
HAnimJoint1320.setUSE("hanim_vt9")

HAnimHumanoid43.addJoints(HAnimJoint1320)
HAnimJoint1321 = x3d.HAnimJoint()
HAnimJoint1321.setUSE("hanim_vt8")

HAnimHumanoid43.addJoints(HAnimJoint1321)
HAnimJoint1322 = x3d.HAnimJoint()
HAnimJoint1322.setUSE("hanim_vt7")

HAnimHumanoid43.addJoints(HAnimJoint1322)
HAnimJoint1323 = x3d.HAnimJoint()
HAnimJoint1323.setUSE("hanim_vt6")

HAnimHumanoid43.addJoints(HAnimJoint1323)
HAnimJoint1324 = x3d.HAnimJoint()
HAnimJoint1324.setUSE("hanim_vt5")

HAnimHumanoid43.addJoints(HAnimJoint1324)
HAnimJoint1325 = x3d.HAnimJoint()
HAnimJoint1325.setUSE("hanim_vt4")

HAnimHumanoid43.addJoints(HAnimJoint1325)
HAnimJoint1326 = x3d.HAnimJoint()
HAnimJoint1326.setUSE("hanim_vt3")

HAnimHumanoid43.addJoints(HAnimJoint1326)
HAnimJoint1327 = x3d.HAnimJoint()
HAnimJoint1327.setUSE("hanim_vt2")

HAnimHumanoid43.addJoints(HAnimJoint1327)
HAnimJoint1328 = x3d.HAnimJoint()
HAnimJoint1328.setUSE("hanim_vt1")

HAnimHumanoid43.addJoints(HAnimJoint1328)
HAnimJoint1329 = x3d.HAnimJoint()
HAnimJoint1329.setUSE("hanim_vc7")

HAnimHumanoid43.addJoints(HAnimJoint1329)
HAnimJoint1330 = x3d.HAnimJoint()
HAnimJoint1330.setUSE("hanim_vc6")

HAnimHumanoid43.addJoints(HAnimJoint1330)
HAnimJoint1331 = x3d.HAnimJoint()
HAnimJoint1331.setUSE("hanim_vc5")

HAnimHumanoid43.addJoints(HAnimJoint1331)
HAnimJoint1332 = x3d.HAnimJoint()
HAnimJoint1332.setUSE("hanim_vc4")

HAnimHumanoid43.addJoints(HAnimJoint1332)
HAnimJoint1333 = x3d.HAnimJoint()
HAnimJoint1333.setUSE("hanim_vc3")

HAnimHumanoid43.addJoints(HAnimJoint1333)
HAnimJoint1334 = x3d.HAnimJoint()
HAnimJoint1334.setUSE("hanim_vc2")

HAnimHumanoid43.addJoints(HAnimJoint1334)
HAnimJoint1335 = x3d.HAnimJoint()
HAnimJoint1335.setUSE("hanim_vc1")

HAnimHumanoid43.addJoints(HAnimJoint1335)
HAnimJoint1336 = x3d.HAnimJoint()
HAnimJoint1336.setUSE("hanim_skullbase")

HAnimHumanoid43.addJoints(HAnimJoint1336)
HAnimJoint1337 = x3d.HAnimJoint()
HAnimJoint1337.setUSE("hanim_l_eyelid_joint")

HAnimHumanoid43.addJoints(HAnimJoint1337)
HAnimJoint1338 = x3d.HAnimJoint()
HAnimJoint1338.setUSE("hanim_r_eyelid_joint")

HAnimHumanoid43.addJoints(HAnimJoint1338)
HAnimJoint1339 = x3d.HAnimJoint()
HAnimJoint1339.setUSE("hanim_l_eyeball_joint")

HAnimHumanoid43.addJoints(HAnimJoint1339)
HAnimJoint1340 = x3d.HAnimJoint()
HAnimJoint1340.setUSE("hanim_r_eyeball_joint")

HAnimHumanoid43.addJoints(HAnimJoint1340)
HAnimJoint1341 = x3d.HAnimJoint()
HAnimJoint1341.setUSE("hanim_l_eyebrow_joint")

HAnimHumanoid43.addJoints(HAnimJoint1341)
HAnimJoint1342 = x3d.HAnimJoint()
HAnimJoint1342.setUSE("hanim_r_eyebrow_joint")

HAnimHumanoid43.addJoints(HAnimJoint1342)
HAnimJoint1343 = x3d.HAnimJoint()
HAnimJoint1343.setUSE("hanim_temporomandibular")

HAnimHumanoid43.addJoints(HAnimJoint1343)
HAnimJoint1344 = x3d.HAnimJoint()
HAnimJoint1344.setUSE("hanim_l_sternoclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1344)
HAnimJoint1345 = x3d.HAnimJoint()
HAnimJoint1345.setUSE("hanim_l_acromioclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1345)
HAnimJoint1346 = x3d.HAnimJoint()
HAnimJoint1346.setUSE("hanim_l_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint1346)
HAnimJoint1347 = x3d.HAnimJoint()
HAnimJoint1347.setUSE("hanim_l_elbow")

HAnimHumanoid43.addJoints(HAnimJoint1347)
HAnimJoint1348 = x3d.HAnimJoint()
HAnimJoint1348.setUSE("hanim_l_radiocarpal")

HAnimHumanoid43.addJoints(HAnimJoint1348)
HAnimJoint1349 = x3d.HAnimJoint()
HAnimJoint1349.setUSE("hanim_l_midcarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1349)
HAnimJoint1350 = x3d.HAnimJoint()
HAnimJoint1350.setUSE("hanim_l_carpometacarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1350)
HAnimJoint1351 = x3d.HAnimJoint()
HAnimJoint1351.setUSE("hanim_l_metacarpophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1351)
HAnimJoint1352 = x3d.HAnimJoint()
HAnimJoint1352.setUSE("hanim_l_carpal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1352)
HAnimJoint1353 = x3d.HAnimJoint()
HAnimJoint1353.setUSE("hanim_l_midcarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1353)
HAnimJoint1354 = x3d.HAnimJoint()
HAnimJoint1354.setUSE("hanim_l_carpometacarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1354)
HAnimJoint1355 = x3d.HAnimJoint()
HAnimJoint1355.setUSE("hanim_l_metacarpophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1355)
HAnimJoint1356 = x3d.HAnimJoint()
HAnimJoint1356.setUSE("hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1356)
HAnimJoint1357 = x3d.HAnimJoint()
HAnimJoint1357.setUSE("hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1357)
HAnimJoint1358 = x3d.HAnimJoint()
HAnimJoint1358.setUSE("hanim_l_midcarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1358)
HAnimJoint1359 = x3d.HAnimJoint()
HAnimJoint1359.setUSE("hanim_l_carpometacarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1359)
HAnimJoint1360 = x3d.HAnimJoint()
HAnimJoint1360.setUSE("hanim_l_metacarpophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1360)
HAnimJoint1361 = x3d.HAnimJoint()
HAnimJoint1361.setUSE("hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1361)
HAnimJoint1362 = x3d.HAnimJoint()
HAnimJoint1362.setUSE("hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1362)
HAnimJoint1363 = x3d.HAnimJoint()
HAnimJoint1363.setUSE("hanim_l_midcarpal_4_5")

HAnimHumanoid43.addJoints(HAnimJoint1363)
HAnimJoint1364 = x3d.HAnimJoint()
HAnimJoint1364.setUSE("hanim_l_carpometacarpal_4")

HAnimHumanoid43.addJoints(HAnimJoint1364)
HAnimJoint1365 = x3d.HAnimJoint()
HAnimJoint1365.setUSE("hanim_l_metacarpophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1365)
HAnimJoint1366 = x3d.HAnimJoint()
HAnimJoint1366.setUSE("hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1366)
HAnimJoint1367 = x3d.HAnimJoint()
HAnimJoint1367.setUSE("hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1367)
HAnimJoint1368 = x3d.HAnimJoint()
HAnimJoint1368.setUSE("hanim_l_carpometacarpal_5")

HAnimHumanoid43.addJoints(HAnimJoint1368)
HAnimJoint1369 = x3d.HAnimJoint()
HAnimJoint1369.setUSE("hanim_l_metacarpophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1369)
HAnimJoint1370 = x3d.HAnimJoint()
HAnimJoint1370.setUSE("hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1370)
HAnimJoint1371 = x3d.HAnimJoint()
HAnimJoint1371.setUSE("hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1371)
HAnimJoint1372 = x3d.HAnimJoint()
HAnimJoint1372.setUSE("hanim_r_sternoclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1372)
HAnimJoint1373 = x3d.HAnimJoint()
HAnimJoint1373.setUSE("hanim_r_acromioclavicular")

HAnimHumanoid43.addJoints(HAnimJoint1373)
HAnimJoint1374 = x3d.HAnimJoint()
HAnimJoint1374.setUSE("hanim_r_shoulder")

HAnimHumanoid43.addJoints(HAnimJoint1374)
HAnimJoint1375 = x3d.HAnimJoint()
HAnimJoint1375.setUSE("hanim_r_elbow")

HAnimHumanoid43.addJoints(HAnimJoint1375)
HAnimJoint1376 = x3d.HAnimJoint()
HAnimJoint1376.setUSE("hanim_r_radiocarpal")

HAnimHumanoid43.addJoints(HAnimJoint1376)
HAnimJoint1377 = x3d.HAnimJoint()
HAnimJoint1377.setUSE("hanim_r_midcarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1377)
HAnimJoint1378 = x3d.HAnimJoint()
HAnimJoint1378.setUSE("hanim_r_carpometacarpal_1")

HAnimHumanoid43.addJoints(HAnimJoint1378)
HAnimJoint1379 = x3d.HAnimJoint()
HAnimJoint1379.setUSE("hanim_r_metacarpophalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1379)
HAnimJoint1380 = x3d.HAnimJoint()
HAnimJoint1380.setUSE("hanim_r_carpal_interphalangeal_1")

HAnimHumanoid43.addJoints(HAnimJoint1380)
HAnimJoint1381 = x3d.HAnimJoint()
HAnimJoint1381.setUSE("hanim_r_midcarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1381)
HAnimJoint1382 = x3d.HAnimJoint()
HAnimJoint1382.setUSE("hanim_r_carpometacarpal_2")

HAnimHumanoid43.addJoints(HAnimJoint1382)
HAnimJoint1383 = x3d.HAnimJoint()
HAnimJoint1383.setUSE("hanim_r_metacarpophalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1383)
HAnimJoint1384 = x3d.HAnimJoint()
HAnimJoint1384.setUSE("hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1384)
HAnimJoint1385 = x3d.HAnimJoint()
HAnimJoint1385.setUSE("hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid43.addJoints(HAnimJoint1385)
HAnimJoint1386 = x3d.HAnimJoint()
HAnimJoint1386.setUSE("hanim_r_midcarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1386)
HAnimJoint1387 = x3d.HAnimJoint()
HAnimJoint1387.setUSE("hanim_r_carpometacarpal_3")

HAnimHumanoid43.addJoints(HAnimJoint1387)
HAnimJoint1388 = x3d.HAnimJoint()
HAnimJoint1388.setUSE("hanim_r_metacarpophalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1388)
HAnimJoint1389 = x3d.HAnimJoint()
HAnimJoint1389.setUSE("hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1389)
HAnimJoint1390 = x3d.HAnimJoint()
HAnimJoint1390.setUSE("hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid43.addJoints(HAnimJoint1390)
HAnimJoint1391 = x3d.HAnimJoint()
HAnimJoint1391.setUSE("hanim_r_midcarpal_4_5")

HAnimHumanoid43.addJoints(HAnimJoint1391)
HAnimJoint1392 = x3d.HAnimJoint()
HAnimJoint1392.setUSE("hanim_r_carpometacarpal_4")

HAnimHumanoid43.addJoints(HAnimJoint1392)
HAnimJoint1393 = x3d.HAnimJoint()
HAnimJoint1393.setUSE("hanim_r_metacarpophalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1393)
HAnimJoint1394 = x3d.HAnimJoint()
HAnimJoint1394.setUSE("hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1394)
HAnimJoint1395 = x3d.HAnimJoint()
HAnimJoint1395.setUSE("hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid43.addJoints(HAnimJoint1395)
HAnimJoint1396 = x3d.HAnimJoint()
HAnimJoint1396.setUSE("hanim_r_carpometacarpal_5")

HAnimHumanoid43.addJoints(HAnimJoint1396)
HAnimJoint1397 = x3d.HAnimJoint()
HAnimJoint1397.setUSE("hanim_r_metacarpophalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1397)
HAnimJoint1398 = x3d.HAnimJoint()
HAnimJoint1398.setUSE("hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1398)
HAnimJoint1399 = x3d.HAnimJoint()
HAnimJoint1399.setUSE("hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid43.addJoints(HAnimJoint1399)
HAnimSegment1400 = x3d.HAnimSegment()
HAnimSegment1400.setUSE("hanim_sacrum")

HAnimHumanoid43.setSegments(HAnimSegment1400)
HAnimSegment1401 = x3d.HAnimSegment()
HAnimSegment1401.setUSE("hanim_pelvis")

HAnimHumanoid43.setSegments(HAnimSegment1401)
HAnimSegment1402 = x3d.HAnimSegment()
HAnimSegment1402.setUSE("hanim_l_thigh")

HAnimHumanoid43.setSegments(HAnimSegment1402)
HAnimSegment1403 = x3d.HAnimSegment()
HAnimSegment1403.setUSE("hanim_l_calf")

HAnimHumanoid43.setSegments(HAnimSegment1403)
HAnimSegment1404 = x3d.HAnimSegment()
HAnimSegment1404.setUSE("hanim_l_talus")

HAnimHumanoid43.setSegments(HAnimSegment1404)
HAnimSegment1405 = x3d.HAnimSegment()
HAnimSegment1405.setUSE("hanim_l_navicular")

HAnimHumanoid43.setSegments(HAnimSegment1405)
HAnimSegment1406 = x3d.HAnimSegment()
HAnimSegment1406.setUSE("hanim_l_cuneiform_1")

HAnimHumanoid43.setSegments(HAnimSegment1406)
HAnimSegment1407 = x3d.HAnimSegment()
HAnimSegment1407.setUSE("hanim_l_metatarsal_1")

HAnimHumanoid43.setSegments(HAnimSegment1407)
HAnimSegment1408 = x3d.HAnimSegment()
HAnimSegment1408.setUSE("hanim_l_tarsal_proximal_phalanx_1")

HAnimHumanoid43.setSegments(HAnimSegment1408)
HAnimSegment1409 = x3d.HAnimSegment()
HAnimSegment1409.setUSE("hanim_l_cuneiform_2")

HAnimHumanoid43.setSegments(HAnimSegment1409)
HAnimSegment1410 = x3d.HAnimSegment()
HAnimSegment1410.setUSE("hanim_l_metatarsal_2")

HAnimHumanoid43.setSegments(HAnimSegment1410)
HAnimSegment1411 = x3d.HAnimSegment()
HAnimSegment1411.setUSE("hanim_l_tarsal_proximal_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1411)
HAnimSegment1412 = x3d.HAnimSegment()
HAnimSegment1412.setUSE("hanim_l_tarsal_middle_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1412)
HAnimSegment1413 = x3d.HAnimSegment()
HAnimSegment1413.setUSE("hanim_l_cuneiform_3")

HAnimHumanoid43.setSegments(HAnimSegment1413)
HAnimSegment1414 = x3d.HAnimSegment()
HAnimSegment1414.setUSE("hanim_l_metatarsal_3")

HAnimHumanoid43.setSegments(HAnimSegment1414)
HAnimSegment1415 = x3d.HAnimSegment()
HAnimSegment1415.setUSE("hanim_l_tarsal_proximal_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1415)
HAnimSegment1416 = x3d.HAnimSegment()
HAnimSegment1416.setUSE("hanim_l_tarsal_middle_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1416)
HAnimSegment1417 = x3d.HAnimSegment()
HAnimSegment1417.setUSE("hanim_l_calcaneus")

HAnimHumanoid43.setSegments(HAnimSegment1417)
HAnimSegment1418 = x3d.HAnimSegment()
HAnimSegment1418.setUSE("hanim_l_cuboid")

HAnimHumanoid43.setSegments(HAnimSegment1418)
HAnimSegment1419 = x3d.HAnimSegment()
HAnimSegment1419.setUSE("hanim_l_metatarsal_4")

HAnimHumanoid43.setSegments(HAnimSegment1419)
HAnimSegment1420 = x3d.HAnimSegment()
HAnimSegment1420.setUSE("hanim_l_tarsal_proximal_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1420)
HAnimSegment1421 = x3d.HAnimSegment()
HAnimSegment1421.setUSE("hanim_l_tarsal_middle_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1421)
HAnimSegment1422 = x3d.HAnimSegment()
HAnimSegment1422.setUSE("hanim_l_metatarsal_5")

HAnimHumanoid43.setSegments(HAnimSegment1422)
HAnimSegment1423 = x3d.HAnimSegment()
HAnimSegment1423.setUSE("hanim_l_tarsal_proximal_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1423)
HAnimSegment1424 = x3d.HAnimSegment()
HAnimSegment1424.setUSE("hanim_l_tarsal_middle_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1424)
HAnimSegment1425 = x3d.HAnimSegment()
HAnimSegment1425.setUSE("hanim_r_thigh")

HAnimHumanoid43.setSegments(HAnimSegment1425)
HAnimSegment1426 = x3d.HAnimSegment()
HAnimSegment1426.setUSE("hanim_r_calf")

HAnimHumanoid43.setSegments(HAnimSegment1426)
HAnimSegment1427 = x3d.HAnimSegment()
HAnimSegment1427.setUSE("hanim_r_talus")

HAnimHumanoid43.setSegments(HAnimSegment1427)
HAnimSegment1428 = x3d.HAnimSegment()
HAnimSegment1428.setUSE("hanim_r_navicular")

HAnimHumanoid43.setSegments(HAnimSegment1428)
HAnimSegment1429 = x3d.HAnimSegment()
HAnimSegment1429.setUSE("hanim_r_cuneiform_1")

HAnimHumanoid43.setSegments(HAnimSegment1429)
HAnimSegment1430 = x3d.HAnimSegment()
HAnimSegment1430.setUSE("hanim_r_metatarsal_1")

HAnimHumanoid43.setSegments(HAnimSegment1430)
HAnimSegment1431 = x3d.HAnimSegment()
HAnimSegment1431.setUSE("hanim_r_tarsal_proximal_phalanx_1")

HAnimHumanoid43.setSegments(HAnimSegment1431)
HAnimSegment1432 = x3d.HAnimSegment()
HAnimSegment1432.setUSE("hanim_r_cuneiform_2")

HAnimHumanoid43.setSegments(HAnimSegment1432)
HAnimSegment1433 = x3d.HAnimSegment()
HAnimSegment1433.setUSE("hanim_r_metatarsal_2")

HAnimHumanoid43.setSegments(HAnimSegment1433)
HAnimSegment1434 = x3d.HAnimSegment()
HAnimSegment1434.setUSE("hanim_r_tarsal_proximal_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1434)
HAnimSegment1435 = x3d.HAnimSegment()
HAnimSegment1435.setUSE("hanim_r_tarsal_middle_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1435)
HAnimSegment1436 = x3d.HAnimSegment()
HAnimSegment1436.setUSE("hanim_r_cuneiform_3")

HAnimHumanoid43.setSegments(HAnimSegment1436)
HAnimSegment1437 = x3d.HAnimSegment()
HAnimSegment1437.setUSE("hanim_r_metatarsal_3")

HAnimHumanoid43.setSegments(HAnimSegment1437)
HAnimSegment1438 = x3d.HAnimSegment()
HAnimSegment1438.setUSE("hanim_r_tarsal_proximal_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1438)
HAnimSegment1439 = x3d.HAnimSegment()
HAnimSegment1439.setUSE("hanim_r_tarsal_middle_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1439)
HAnimSegment1440 = x3d.HAnimSegment()
HAnimSegment1440.setUSE("hanim_r_calcaneus")

HAnimHumanoid43.setSegments(HAnimSegment1440)
HAnimSegment1441 = x3d.HAnimSegment()
HAnimSegment1441.setUSE("hanim_r_cuboid")

HAnimHumanoid43.setSegments(HAnimSegment1441)
HAnimSegment1442 = x3d.HAnimSegment()
HAnimSegment1442.setUSE("hanim_r_metatarsal_4")

HAnimHumanoid43.setSegments(HAnimSegment1442)
HAnimSegment1443 = x3d.HAnimSegment()
HAnimSegment1443.setUSE("hanim_r_tarsal_proximal_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1443)
HAnimSegment1444 = x3d.HAnimSegment()
HAnimSegment1444.setUSE("hanim_r_tarsal_middle_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1444)
HAnimSegment1445 = x3d.HAnimSegment()
HAnimSegment1445.setUSE("hanim_r_metatarsal_5")

HAnimHumanoid43.setSegments(HAnimSegment1445)
HAnimSegment1446 = x3d.HAnimSegment()
HAnimSegment1446.setUSE("hanim_r_tarsal_proximal_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1446)
HAnimSegment1447 = x3d.HAnimSegment()
HAnimSegment1447.setUSE("hanim_r_tarsal_middle_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1447)
HAnimSegment1448 = x3d.HAnimSegment()
HAnimSegment1448.setUSE("hanim_l5")

HAnimHumanoid43.setSegments(HAnimSegment1448)
HAnimSegment1449 = x3d.HAnimSegment()
HAnimSegment1449.setUSE("hanim_l4")

HAnimHumanoid43.setSegments(HAnimSegment1449)
HAnimSegment1450 = x3d.HAnimSegment()
HAnimSegment1450.setUSE("hanim_l3")

HAnimHumanoid43.setSegments(HAnimSegment1450)
HAnimSegment1451 = x3d.HAnimSegment()
HAnimSegment1451.setUSE("hanim_l2")

HAnimHumanoid43.setSegments(HAnimSegment1451)
HAnimSegment1452 = x3d.HAnimSegment()
HAnimSegment1452.setUSE("hanim_l1")

HAnimHumanoid43.setSegments(HAnimSegment1452)
HAnimSegment1453 = x3d.HAnimSegment()
HAnimSegment1453.setUSE("hanim_t12")

HAnimHumanoid43.setSegments(HAnimSegment1453)
HAnimSegment1454 = x3d.HAnimSegment()
HAnimSegment1454.setUSE("hanim_t11")

HAnimHumanoid43.setSegments(HAnimSegment1454)
HAnimSegment1455 = x3d.HAnimSegment()
HAnimSegment1455.setUSE("hanim_t10")

HAnimHumanoid43.setSegments(HAnimSegment1455)
HAnimSegment1456 = x3d.HAnimSegment()
HAnimSegment1456.setUSE("hanim_t9")

HAnimHumanoid43.setSegments(HAnimSegment1456)
HAnimSegment1457 = x3d.HAnimSegment()
HAnimSegment1457.setUSE("hanim_t8")

HAnimHumanoid43.setSegments(HAnimSegment1457)
HAnimSegment1458 = x3d.HAnimSegment()
HAnimSegment1458.setUSE("hanim_t7")

HAnimHumanoid43.setSegments(HAnimSegment1458)
HAnimSegment1459 = x3d.HAnimSegment()
HAnimSegment1459.setUSE("hanim_t6")

HAnimHumanoid43.setSegments(HAnimSegment1459)
HAnimSegment1460 = x3d.HAnimSegment()
HAnimSegment1460.setUSE("hanim_t5")

HAnimHumanoid43.setSegments(HAnimSegment1460)
HAnimSegment1461 = x3d.HAnimSegment()
HAnimSegment1461.setUSE("hanim_t4")

HAnimHumanoid43.setSegments(HAnimSegment1461)
HAnimSegment1462 = x3d.HAnimSegment()
HAnimSegment1462.setUSE("hanim_t3")

HAnimHumanoid43.setSegments(HAnimSegment1462)
HAnimSegment1463 = x3d.HAnimSegment()
HAnimSegment1463.setUSE("hanim_t2")

HAnimHumanoid43.setSegments(HAnimSegment1463)
HAnimSegment1464 = x3d.HAnimSegment()
HAnimSegment1464.setUSE("hanim_t1")

HAnimHumanoid43.setSegments(HAnimSegment1464)
HAnimSegment1465 = x3d.HAnimSegment()
HAnimSegment1465.setUSE("hanim_c7")

HAnimHumanoid43.setSegments(HAnimSegment1465)
HAnimSegment1466 = x3d.HAnimSegment()
HAnimSegment1466.setUSE("hanim_c6")

HAnimHumanoid43.setSegments(HAnimSegment1466)
HAnimSegment1467 = x3d.HAnimSegment()
HAnimSegment1467.setUSE("hanim_c5")

HAnimHumanoid43.setSegments(HAnimSegment1467)
HAnimSegment1468 = x3d.HAnimSegment()
HAnimSegment1468.setUSE("hanim_c4")

HAnimHumanoid43.setSegments(HAnimSegment1468)
HAnimSegment1469 = x3d.HAnimSegment()
HAnimSegment1469.setUSE("hanim_c3")

HAnimHumanoid43.setSegments(HAnimSegment1469)
HAnimSegment1470 = x3d.HAnimSegment()
HAnimSegment1470.setUSE("hanim_c2")

HAnimHumanoid43.setSegments(HAnimSegment1470)
HAnimSegment1471 = x3d.HAnimSegment()
HAnimSegment1471.setUSE("hanim_c1")

HAnimHumanoid43.setSegments(HAnimSegment1471)
HAnimSegment1472 = x3d.HAnimSegment()
HAnimSegment1472.setUSE("hanim_skull")

HAnimHumanoid43.setSegments(HAnimSegment1472)
HAnimSegment1473 = x3d.HAnimSegment()
HAnimSegment1473.setUSE("hanim_l_clavicle")

HAnimHumanoid43.setSegments(HAnimSegment1473)
HAnimSegment1474 = x3d.HAnimSegment()
HAnimSegment1474.setUSE("hanim_l_scapula")

HAnimHumanoid43.setSegments(HAnimSegment1474)
HAnimSegment1475 = x3d.HAnimSegment()
HAnimSegment1475.setUSE("hanim_l_upperarm")

HAnimHumanoid43.setSegments(HAnimSegment1475)
HAnimSegment1476 = x3d.HAnimSegment()
HAnimSegment1476.setUSE("hanim_l_forearm")

HAnimHumanoid43.setSegments(HAnimSegment1476)
HAnimSegment1477 = x3d.HAnimSegment()
HAnimSegment1477.setUSE("hanim_l_carpal")

HAnimHumanoid43.setSegments(HAnimSegment1477)
HAnimSegment1478 = x3d.HAnimSegment()
HAnimSegment1478.setUSE("hanim_l_trapezium")

HAnimHumanoid43.setSegments(HAnimSegment1478)
HAnimSegment1479 = x3d.HAnimSegment()
HAnimSegment1479.setUSE("hanim_l_metacarpal_1")

HAnimHumanoid43.setSegments(HAnimSegment1479)
HAnimSegment1480 = x3d.HAnimSegment()
HAnimSegment1480.setUSE("hanim_l_carpal_proximal_phalanx_1")

HAnimHumanoid43.setSegments(HAnimSegment1480)
HAnimSegment1481 = x3d.HAnimSegment()
HAnimSegment1481.setUSE("hanim_l_trapezoid")

HAnimHumanoid43.setSegments(HAnimSegment1481)
HAnimSegment1482 = x3d.HAnimSegment()
HAnimSegment1482.setUSE("hanim_l_metacarpal_2")

HAnimHumanoid43.setSegments(HAnimSegment1482)
HAnimSegment1483 = x3d.HAnimSegment()
HAnimSegment1483.setUSE("hanim_l_carpal_proximal_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1483)
HAnimSegment1484 = x3d.HAnimSegment()
HAnimSegment1484.setUSE("hanim_l_carpal_middle_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1484)
HAnimSegment1485 = x3d.HAnimSegment()
HAnimSegment1485.setUSE("hanim_l_capitate")

HAnimHumanoid43.setSegments(HAnimSegment1485)
HAnimSegment1486 = x3d.HAnimSegment()
HAnimSegment1486.setUSE("hanim_l_metacarpal_3")

HAnimHumanoid43.setSegments(HAnimSegment1486)
HAnimSegment1487 = x3d.HAnimSegment()
HAnimSegment1487.setUSE("hanim_l_carpal_proximal_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1487)
HAnimSegment1488 = x3d.HAnimSegment()
HAnimSegment1488.setUSE("hanim_l_carpal_middle_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1488)
HAnimSegment1489 = x3d.HAnimSegment()
HAnimSegment1489.setUSE("hanim_l_hamate")

HAnimHumanoid43.setSegments(HAnimSegment1489)
HAnimSegment1490 = x3d.HAnimSegment()
HAnimSegment1490.setUSE("hanim_l_metacarpal_4")

HAnimHumanoid43.setSegments(HAnimSegment1490)
HAnimSegment1491 = x3d.HAnimSegment()
HAnimSegment1491.setUSE("hanim_l_carpal_proximal_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1491)
HAnimSegment1492 = x3d.HAnimSegment()
HAnimSegment1492.setUSE("hanim_l_carpal_middle_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1492)
HAnimSegment1493 = x3d.HAnimSegment()
HAnimSegment1493.setUSE("hanim_l_metacarpal_5")

HAnimHumanoid43.setSegments(HAnimSegment1493)
HAnimSegment1494 = x3d.HAnimSegment()
HAnimSegment1494.setUSE("hanim_l_carpal_proximal_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1494)
HAnimSegment1495 = x3d.HAnimSegment()
HAnimSegment1495.setUSE("hanim_l_carpal_middle_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1495)
HAnimSegment1496 = x3d.HAnimSegment()
HAnimSegment1496.setUSE("hanim_r_clavicle")

HAnimHumanoid43.setSegments(HAnimSegment1496)
HAnimSegment1497 = x3d.HAnimSegment()
HAnimSegment1497.setUSE("hanim_r_scapula")

HAnimHumanoid43.setSegments(HAnimSegment1497)
HAnimSegment1498 = x3d.HAnimSegment()
HAnimSegment1498.setUSE("hanim_r_upperarm")

HAnimHumanoid43.setSegments(HAnimSegment1498)
HAnimSegment1499 = x3d.HAnimSegment()
HAnimSegment1499.setUSE("hanim_r_forearm")

HAnimHumanoid43.setSegments(HAnimSegment1499)
HAnimSegment1500 = x3d.HAnimSegment()
HAnimSegment1500.setUSE("hanim_r_carpal")

HAnimHumanoid43.setSegments(HAnimSegment1500)
HAnimSegment1501 = x3d.HAnimSegment()
HAnimSegment1501.setUSE("hanim_r_trapezium")

HAnimHumanoid43.setSegments(HAnimSegment1501)
HAnimSegment1502 = x3d.HAnimSegment()
HAnimSegment1502.setUSE("hanim_r_metacarpal_1")

HAnimHumanoid43.setSegments(HAnimSegment1502)
HAnimSegment1503 = x3d.HAnimSegment()
HAnimSegment1503.setUSE("hanim_r_carpal_proximal_phalanx_1")

HAnimHumanoid43.setSegments(HAnimSegment1503)
HAnimSegment1504 = x3d.HAnimSegment()
HAnimSegment1504.setUSE("hanim_r_trapezoid")

HAnimHumanoid43.setSegments(HAnimSegment1504)
HAnimSegment1505 = x3d.HAnimSegment()
HAnimSegment1505.setUSE("hanim_r_metacarpal_2")

HAnimHumanoid43.setSegments(HAnimSegment1505)
HAnimSegment1506 = x3d.HAnimSegment()
HAnimSegment1506.setUSE("hanim_r_carpal_proximal_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1506)
HAnimSegment1507 = x3d.HAnimSegment()
HAnimSegment1507.setUSE("hanim_r_carpal_middle_phalanx_2")

HAnimHumanoid43.setSegments(HAnimSegment1507)
HAnimSegment1508 = x3d.HAnimSegment()
HAnimSegment1508.setUSE("hanim_r_capitate")

HAnimHumanoid43.setSegments(HAnimSegment1508)
HAnimSegment1509 = x3d.HAnimSegment()
HAnimSegment1509.setUSE("hanim_r_metacarpal_3")

HAnimHumanoid43.setSegments(HAnimSegment1509)
HAnimSegment1510 = x3d.HAnimSegment()
HAnimSegment1510.setUSE("hanim_r_carpal_proximal_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1510)
HAnimSegment1511 = x3d.HAnimSegment()
HAnimSegment1511.setUSE("hanim_r_carpal_middle_phalanx_3")

HAnimHumanoid43.setSegments(HAnimSegment1511)
HAnimSegment1512 = x3d.HAnimSegment()
HAnimSegment1512.setUSE("hanim_r_hamate")

HAnimHumanoid43.setSegments(HAnimSegment1512)
HAnimSegment1513 = x3d.HAnimSegment()
HAnimSegment1513.setUSE("hanim_r_metacarpal_4")

HAnimHumanoid43.setSegments(HAnimSegment1513)
HAnimSegment1514 = x3d.HAnimSegment()
HAnimSegment1514.setUSE("hanim_r_carpal_proximal_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1514)
HAnimSegment1515 = x3d.HAnimSegment()
HAnimSegment1515.setUSE("hanim_r_carpal_middle_phalanx_4")

HAnimHumanoid43.setSegments(HAnimSegment1515)
HAnimSegment1516 = x3d.HAnimSegment()
HAnimSegment1516.setUSE("hanim_r_metacarpal_5")

HAnimHumanoid43.setSegments(HAnimSegment1516)
HAnimSegment1517 = x3d.HAnimSegment()
HAnimSegment1517.setUSE("hanim_r_carpal_proximal_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1517)
HAnimSegment1518 = x3d.HAnimSegment()
HAnimSegment1518.setUSE("hanim_r_carpal_middle_phalanx_5")

HAnimHumanoid43.setSegments(HAnimSegment1518)

Scene11.addChildren(HAnimHumanoid43)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/StandardHumanoid.new.python.x3d")
X3D0.toFileJSON("../data/StandardHumanoid.new.python.json")
