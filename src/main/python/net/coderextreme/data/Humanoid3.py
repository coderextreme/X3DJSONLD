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
meta3.setContent("JohnBoy.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("identifier")
meta4.setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d")

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
Transform19.setTranslation([0,2.1,0])
Shape20 = x3d.Shape()
Shape20.setDEF("HAnimJointShape")
Sphere21 = x3d.Sphere()
Sphere21.setRadius(0.02)

Shape20.setGeometry(Sphere21)
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.setDEF("HAnimJointMaterial")
Material23.setDiffuseColor([0,0,0])

Appearance22.setMaterial(Material23)

Shape20.setAppearance(Appearance22)

Transform19.addChild(Shape20)

Transform18.addChildren(Transform19)
Transform24 = x3d.Transform()
Transform24.setTranslation([0,2.05,0])
Shape25 = x3d.Shape()
Shape25.setDEF("HAnimSegmentLine")
LineSet26 = x3d.LineSet()
LineSet26.setVertexCount([2])
ColorRGBA27 = x3d.ColorRGBA()
ColorRGBA27.setDEF("HAnimSegmentLineColorRGBA")
ColorRGBA27.setColor([1,1,0,0,1,1,0,0])

LineSet26.setColor(ColorRGBA27)
Coordinate28 = x3d.Coordinate()
Coordinate28.setPoint([-0.05,0,0,0.05,0,0])

LineSet26.setCoord(Coordinate28)

Shape25.setGeometry(LineSet26)

Transform24.addChild(Shape25)

Transform18.addChildren(Transform24)
Transform29 = x3d.Transform()
Transform29.setTranslation([0,2.1,0])
Shape30 = x3d.Shape()
Shape30.setDEF("HAnimSiteShape")
IndexedFaceSet31 = x3d.IndexedFaceSet()
IndexedFaceSet31.setDEF("DiamondIFS")
IndexedFaceSet31.setCreaseAngle(0.5)
IndexedFaceSet31.setSolid(False)
IndexedFaceSet31.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
ColorRGBA32 = x3d.ColorRGBA()
ColorRGBA32.setDEF("HAnimSiteColorRGBA")
ColorRGBA32.setColor([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])

IndexedFaceSet31.setColor(ColorRGBA32)
Coordinate33 = x3d.Coordinate()
Coordinate33.setPoint([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])

IndexedFaceSet31.setCoord(Coordinate33)

Shape30.setGeometry(IndexedFaceSet31)
Appearance34 = x3d.Appearance()
Material35 = x3d.Material()
Material35.setDiffuseColor([1,1,1])
Material35.setTransparency(1)

Appearance34.setMaterial(Material35)

Shape30.setAppearance(Appearance34)

Transform29.addChild(Shape30)

Transform18.addChildren(Transform29)

Group17.addChildren(Transform18)

Scene11.addChildren(Group17)
NavigationInfo36 = x3d.NavigationInfo()
NavigationInfo36.setSpeed(1.5)

Scene11.addChildren(NavigationInfo36)
Viewpoint37 = x3d.Viewpoint()
Viewpoint37.setPosition([0,1,3])
Viewpoint37.setCenterOfRotation([0,1,0])
Viewpoint37.setDescription("default")

Scene11.addChildren(Viewpoint37)
HAnimHumanoid38 = x3d.HAnimHumanoid()
HAnimHumanoid38.setName("HAnim")
HAnimHumanoid38.setDEF("hanim_HAnim")
HAnimHumanoid38.setInfo(["humanoidVersion=2.0"])
HAnimHumanoid38.setVersion("2.0")
#<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
#</LOD>
Shape39 = x3d.Shape()
Shape39.setDEF("SkinShape")
Shape39.setContainerFieldOverride("skin")
IndexedFaceSet40 = x3d.IndexedFaceSet()
IndexedFaceSet40.setCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1])
IndexedFaceSet40.setCreaseAngle(3.1)
Coordinate41 = x3d.Coordinate()
Coordinate41.setDEF("TheSkinCoord")
Coordinate41.setPoint([0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168])

IndexedFaceSet40.setCoord(Coordinate41)
Color42 = x3d.Color()
Color42.setColor([1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1])

IndexedFaceSet40.setColor(Color42)

Shape39.setGeometry(IndexedFaceSet40)
Appearance43 = x3d.Appearance()
Appearance43.setDEF("SkinAppearance")
ImageTexture44 = x3d.ImageTexture()
ImageTexture44.setDEF("zBlueSpiralBkg2")
ImageTexture44.setDescription("Blue Spiral Pattern")
ImageTexture44.setUrl(["../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"])

Appearance43.setTexture(ImageTexture44)
Material45 = x3d.Material()
Material45.setDEF("SkinMaterial")
Material45.setAmbientIntensity(0.6)
Material45.setDiffuseColor([1,1,1])
Material45.setShininess(0.6)
Material45.setTransparency(1)

Appearance43.setMaterial(Material45)

Shape39.setAppearance(Appearance43)

HAnimHumanoid38.addSkin(Shape39)
Coordinate46 = x3d.Coordinate()
Coordinate46.setContainerFieldOverride("skinCoord")
Coordinate46.setUSE("TheSkinCoord")

HAnimHumanoid38.setSkinCoord(Coordinate46)
HAnimJoint47 = x3d.HAnimJoint()
HAnimJoint47.setName("humanoid_root")
HAnimJoint47.setDEF("hanim_humanoid_root")
HAnimJoint47.setCenter([0,0.824,0.0277])
HAnimJoint47.setUlimit([0,0,0])
HAnimJoint47.setLlimit([0,0,0])
HAnimJoint47.setContainerFieldOverride("skeleton")
HAnimSegment48 = x3d.HAnimSegment()
HAnimSegment48.setName("sacrum")
HAnimSegment48.setDEF("hanim_sacrum")
Transform49 = x3d.Transform()
Transform49.setTranslation([0,0.824,0.0277])
Transform50 = x3d.Transform()
#Empty Transform
Shape51 = x3d.Shape()
Shape51.setUSE("HAnimJointShape")

Transform50.addChild(Shape51)

Transform49.addChildren(Transform50)

HAnimSegment48.addChildren(Transform49)
Shape52 = x3d.Shape()
LineSet53 = x3d.LineSet()
LineSet53.setVertexCount([2])
Coordinate54 = x3d.Coordinate()
Coordinate54.setPoint([0,0.824,0.0277,0,0.9149,0.0016])

LineSet53.setCoord(Coordinate54)
#from humanoid_root to sacroiliac vertices 2
ColorRGBA55 = x3d.ColorRGBA()
ColorRGBA55.setUSE("HAnimSegmentLineColorRGBA")

LineSet53.setColor(ColorRGBA55)

Shape52.setGeometry(LineSet53)

HAnimSegment48.addChildren(Shape52)
Shape56 = x3d.Shape()
LineSet57 = x3d.LineSet()
LineSet57.setVertexCount([2])
Coordinate58 = x3d.Coordinate()
Coordinate58.setPoint([0,0.824,0.0277,0.0028,1.0568,-0.0776])

LineSet57.setCoord(Coordinate58)
#from humanoid_root to vl5 vertices 2
ColorRGBA59 = x3d.ColorRGBA()
ColorRGBA59.setUSE("HAnimSegmentLineColorRGBA")

LineSet57.setColor(ColorRGBA59)

Shape56.setGeometry(LineSet57)

HAnimSegment48.addChildren(Shape56)

HAnimJoint47.addChildren(HAnimSegment48)
HAnimJoint60 = x3d.HAnimJoint()
HAnimJoint60.setName("sacroiliac")
HAnimJoint60.setDEF("hanim_sacroiliac")
HAnimJoint60.setCenter([0,0.9149,0.0016])
HAnimJoint60.setUlimit([0,0,0])
HAnimJoint60.setLlimit([0,0,0])
HAnimSegment61 = x3d.HAnimSegment()
HAnimSegment61.setName("pelvis")
HAnimSegment61.setDEF("hanim_pelvis")
Transform62 = x3d.Transform()
Transform62.setTranslation([0,0.9149,0.0016])
Transform63 = x3d.Transform()
#Empty Transform
Shape64 = x3d.Shape()
Shape64.setUSE("HAnimJointShape")

Transform63.addChild(Shape64)

Transform62.addChildren(Transform63)

HAnimSegment61.addChildren(Transform62)
Shape65 = x3d.Shape()
LineSet66 = x3d.LineSet()
LineSet66.setVertexCount([2])
Coordinate67 = x3d.Coordinate()
Coordinate67.setPoint([0,0.9149,0.0016,0.0961,0.9124,-0.0001])

LineSet66.setCoord(Coordinate67)
#from sacroiliac to l_hip vertices 2
ColorRGBA68 = x3d.ColorRGBA()
ColorRGBA68.setUSE("HAnimSegmentLineColorRGBA")

LineSet66.setColor(ColorRGBA68)

Shape65.setGeometry(LineSet66)

HAnimSegment61.addChildren(Shape65)
HAnimSite69 = x3d.HAnimSite()
HAnimSite69.setName("buttocks_standing_wall_contact_point")
HAnimSite69.setDEF("hanim_buttocks_standing_wall_contact_point")
TouchSensor70 = x3d.TouchSensor()
TouchSensor70.setDescription("HAnimSite 93 buttocks_standing_wall_contact_point")

HAnimSite69.addChildren(TouchSensor70)
Shape71 = x3d.Shape()
Shape71.setUSE("HAnimSiteShape")

HAnimSite69.addChildren(Shape71)
Billboard72 = x3d.Billboard()
Shape73 = x3d.Shape()
Text74 = x3d.Text()
Text74.setString(["93"])
FontStyle75 = x3d.FontStyle()
FontStyle75.setSize(0.035)

Text74.setFontStyle(FontStyle75)

Shape73.setGeometry(Text74)

Billboard72.addChildren(Shape73)

HAnimSite69.addChildren(Billboard72)

HAnimSegment61.addChildren(HAnimSite69)
HAnimSite76 = x3d.HAnimSite()
HAnimSite76.setName("crotch")
HAnimSite76.setDEF("hanim_crotch")
HAnimSite76.setTranslation([0.0034,0.8266,0.0257])
TouchSensor77 = x3d.TouchSensor()
TouchSensor77.setDescription("HAnimSite 38 crotch")

HAnimSite76.addChildren(TouchSensor77)
Shape78 = x3d.Shape()
Shape78.setUSE("HAnimSiteShape")

HAnimSite76.addChildren(Shape78)
Billboard79 = x3d.Billboard()
Shape80 = x3d.Shape()
Text81 = x3d.Text()
Text81.setString(["38"])
FontStyle82 = x3d.FontStyle()
FontStyle82.setSize(0.035)

Text81.setFontStyle(FontStyle82)

Shape80.setGeometry(Text81)

Billboard79.addChildren(Shape80)

HAnimSite76.addChildren(Billboard79)

HAnimSegment61.addChildren(HAnimSite76)
HAnimSite83 = x3d.HAnimSite()
HAnimSite83.setName("l_asis")
HAnimSite83.setDEF("hanim_l_asis")
HAnimSite83.setTranslation([0.0925,0.9983,0.1052])
TouchSensor84 = x3d.TouchSensor()
TouchSensor84.setDescription("HAnimSite 32 l_asis")

HAnimSite83.addChildren(TouchSensor84)
Shape85 = x3d.Shape()
Shape85.setUSE("HAnimSiteShape")

HAnimSite83.addChildren(Shape85)
Billboard86 = x3d.Billboard()
Shape87 = x3d.Shape()
Text88 = x3d.Text()
Text88.setString(["32"])
FontStyle89 = x3d.FontStyle()
FontStyle89.setSize(0.035)

Text88.setFontStyle(FontStyle89)

Shape87.setGeometry(Text88)

Billboard86.addChildren(Shape87)

HAnimSite83.addChildren(Billboard86)

HAnimSegment61.addChildren(HAnimSite83)
HAnimSite90 = x3d.HAnimSite()
HAnimSite90.setName("l_iliocristale")
HAnimSite90.setDEF("hanim_l_iliocristale")
HAnimSite90.setTranslation([0.1612,1.0537,0.0008])
TouchSensor91 = x3d.TouchSensor()
TouchSensor91.setDescription("HAnimSite 33 l_iliocristale")

HAnimSite90.addChildren(TouchSensor91)
Shape92 = x3d.Shape()
Shape92.setUSE("HAnimSiteShape")

HAnimSite90.addChildren(Shape92)
Billboard93 = x3d.Billboard()
Shape94 = x3d.Shape()
Text95 = x3d.Text()
Text95.setString(["33"])
FontStyle96 = x3d.FontStyle()
FontStyle96.setSize(0.035)

Text95.setFontStyle(FontStyle96)

Shape94.setGeometry(Text95)

Billboard93.addChildren(Shape94)

HAnimSite90.addChildren(Billboard93)

HAnimSegment61.addChildren(HAnimSite90)
HAnimSite97 = x3d.HAnimSite()
HAnimSite97.setName("l_psis")
HAnimSite97.setDEF("hanim_l_psis")
HAnimSite97.setTranslation([0.0774,1.019,-0.1151])
TouchSensor98 = x3d.TouchSensor()
TouchSensor98.setDescription("HAnimSite 34 l_psis")

HAnimSite97.addChildren(TouchSensor98)
Shape99 = x3d.Shape()
Shape99.setUSE("HAnimSiteShape")

HAnimSite97.addChildren(Shape99)
Billboard100 = x3d.Billboard()
Shape101 = x3d.Shape()
Text102 = x3d.Text()
Text102.setString(["34"])
FontStyle103 = x3d.FontStyle()
FontStyle103.setSize(0.035)

Text102.setFontStyle(FontStyle103)

Shape101.setGeometry(Text102)

Billboard100.addChildren(Shape101)

HAnimSite97.addChildren(Billboard100)

HAnimSegment61.addChildren(HAnimSite97)
HAnimSite104 = x3d.HAnimSite()
HAnimSite104.setName("l_trochanterion")
HAnimSite104.setDEF("hanim_l_trochanterion")
HAnimSite104.setTranslation([0.1677,0.8336,0.0303])
TouchSensor105 = x3d.TouchSensor()
TouchSensor105.setDescription("HAnimSite 42 l_trochanterion")

HAnimSite104.addChildren(TouchSensor105)
Shape106 = x3d.Shape()
Shape106.setUSE("HAnimSiteShape")

HAnimSite104.addChildren(Shape106)
Billboard107 = x3d.Billboard()
Shape108 = x3d.Shape()
Text109 = x3d.Text()
Text109.setString(["42"])
FontStyle110 = x3d.FontStyle()
FontStyle110.setSize(0.035)

Text109.setFontStyle(FontStyle110)

Shape108.setGeometry(Text109)

Billboard107.addChildren(Shape108)

HAnimSite104.addChildren(Billboard107)

HAnimSegment61.addChildren(HAnimSite104)
HAnimSite111 = x3d.HAnimSite()
HAnimSite111.setName("r_asis")
HAnimSite111.setDEF("hanim_r_asis")
HAnimSite111.setTranslation([-0.0887,1.0021,0.1112])
TouchSensor112 = x3d.TouchSensor()
TouchSensor112.setDescription("HAnimSite 35 r_asis")

HAnimSite111.addChildren(TouchSensor112)
Shape113 = x3d.Shape()
Shape113.setUSE("HAnimSiteShape")

HAnimSite111.addChildren(Shape113)
Billboard114 = x3d.Billboard()
Shape115 = x3d.Shape()
Text116 = x3d.Text()
Text116.setString(["35"])
FontStyle117 = x3d.FontStyle()
FontStyle117.setSize(0.035)

Text116.setFontStyle(FontStyle117)

Shape115.setGeometry(Text116)

Billboard114.addChildren(Shape115)

HAnimSite111.addChildren(Billboard114)

HAnimSegment61.addChildren(HAnimSite111)
HAnimSite118 = x3d.HAnimSite()
HAnimSite118.setName("r_iliocristale")
HAnimSite118.setDEF("hanim_r_iliocristale")
HAnimSite118.setTranslation([-0.1525,1.0628,0.0035])
TouchSensor119 = x3d.TouchSensor()
TouchSensor119.setDescription("HAnimSite 36 r_iliocristale")

HAnimSite118.addChildren(TouchSensor119)
Shape120 = x3d.Shape()
Shape120.setUSE("HAnimSiteShape")

HAnimSite118.addChildren(Shape120)
Billboard121 = x3d.Billboard()
Shape122 = x3d.Shape()
Text123 = x3d.Text()
Text123.setString(["36"])
FontStyle124 = x3d.FontStyle()
FontStyle124.setSize(0.035)

Text123.setFontStyle(FontStyle124)

Shape122.setGeometry(Text123)

Billboard121.addChildren(Shape122)

HAnimSite118.addChildren(Billboard121)

HAnimSegment61.addChildren(HAnimSite118)
HAnimSite125 = x3d.HAnimSite()
HAnimSite125.setName("r_psis")
HAnimSite125.setDEF("hanim_r_psis")
HAnimSite125.setTranslation([-0.0716,1.019,-0.1138])
TouchSensor126 = x3d.TouchSensor()
TouchSensor126.setDescription("HAnimSite 37 r_psis")

HAnimSite125.addChildren(TouchSensor126)
Shape127 = x3d.Shape()
Shape127.setUSE("HAnimSiteShape")

HAnimSite125.addChildren(Shape127)
Billboard128 = x3d.Billboard()
Shape129 = x3d.Shape()
Text130 = x3d.Text()
Text130.setString(["37"])
FontStyle131 = x3d.FontStyle()
FontStyle131.setSize(0.035)

Text130.setFontStyle(FontStyle131)

Shape129.setGeometry(Text130)

Billboard128.addChildren(Shape129)

HAnimSite125.addChildren(Billboard128)

HAnimSegment61.addChildren(HAnimSite125)
HAnimSite132 = x3d.HAnimSite()
HAnimSite132.setName("r_trochanterion")
HAnimSite132.setDEF("hanim_r_trochanterion")
HAnimSite132.setTranslation([-0.1689,0.8419,0.0352])
TouchSensor133 = x3d.TouchSensor()
TouchSensor133.setDescription("HAnimSite 46 r_trochanterion")

HAnimSite132.addChildren(TouchSensor133)
Shape134 = x3d.Shape()
Shape134.setUSE("HAnimSiteShape")

HAnimSite132.addChildren(Shape134)
Billboard135 = x3d.Billboard()
Shape136 = x3d.Shape()
Text137 = x3d.Text()
Text137.setString(["46"])
FontStyle138 = x3d.FontStyle()
FontStyle138.setSize(0.035)

Text137.setFontStyle(FontStyle138)

Shape136.setGeometry(Text137)

Billboard135.addChildren(Shape136)

HAnimSite132.addChildren(Billboard135)

HAnimSegment61.addChildren(HAnimSite132)
Shape139 = x3d.Shape()
LineSet140 = x3d.LineSet()
LineSet140.setVertexCount([2])
Coordinate141 = x3d.Coordinate()
Coordinate141.setPoint([0,0.9149,0.0016,-0.095,0.9171,0.0029])

LineSet140.setCoord(Coordinate141)
#from sacroiliac to r_hip vertices 2
ColorRGBA142 = x3d.ColorRGBA()
ColorRGBA142.setUSE("HAnimSegmentLineColorRGBA")

LineSet140.setColor(ColorRGBA142)

Shape139.setGeometry(LineSet140)

HAnimSegment61.addChildren(Shape139)

HAnimJoint60.addChildren(HAnimSegment61)
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
Transform145.setTranslation([0.0961,0.9124,-0.0001])
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
HAnimSite152.setName("l_femoral_lateral_epicondyles")
HAnimSite152.setDEF("hanim_l_femoral_lateral_epicondyles")
HAnimSite152.setTranslation([0.1598,0.4967,0.0297])
TouchSensor153 = x3d.TouchSensor()
TouchSensor153.setDescription("HAnimSite 40 l_femoral_lateral_epicondyles")

HAnimSite152.addChildren(TouchSensor153)
Shape154 = x3d.Shape()
Shape154.setUSE("HAnimSiteShape")

HAnimSite152.addChildren(Shape154)
Billboard155 = x3d.Billboard()
Shape156 = x3d.Shape()
Text157 = x3d.Text()
Text157.setString(["40"])
FontStyle158 = x3d.FontStyle()
FontStyle158.setSize(0.035)

Text157.setFontStyle(FontStyle158)

Shape156.setGeometry(Text157)

Billboard155.addChildren(Shape156)

HAnimSite152.addChildren(Billboard155)

HAnimSegment144.addChildren(HAnimSite152)
HAnimSite159 = x3d.HAnimSite()
HAnimSite159.setName("l_femoral_medial_epicondyles")
HAnimSite159.setDEF("hanim_l_femoral_medial_epicondyles")
HAnimSite159.setTranslation([0.0398,0.4946,0.0303])
TouchSensor160 = x3d.TouchSensor()
TouchSensor160.setDescription("HAnimSite 39 l_femoral_medial_epicondyles")

HAnimSite159.addChildren(TouchSensor160)
Shape161 = x3d.Shape()
Shape161.setUSE("HAnimSiteShape")

HAnimSite159.addChildren(Shape161)
Billboard162 = x3d.Billboard()
Shape163 = x3d.Shape()
Text164 = x3d.Text()
Text164.setString(["39"])
FontStyle165 = x3d.FontStyle()
FontStyle165.setSize(0.035)

Text164.setFontStyle(FontStyle165)

Shape163.setGeometry(Text164)

Billboard162.addChildren(Shape163)

HAnimSite159.addChildren(Billboard162)

HAnimSegment144.addChildren(HAnimSite159)
HAnimSite166 = x3d.HAnimSite()
HAnimSite166.setName("l_knee_crease")
HAnimSite166.setDEF("hanim_l_knee_crease")
HAnimSite166.setTranslation([0.0993,0.4881,-0.0309])
TouchSensor167 = x3d.TouchSensor()
TouchSensor167.setDescription("HAnimSite 90 l_knee_crease")

HAnimSite166.addChildren(TouchSensor167)
Shape168 = x3d.Shape()
Shape168.setUSE("HAnimSiteShape")

HAnimSite166.addChildren(Shape168)
Billboard169 = x3d.Billboard()
Shape170 = x3d.Shape()
Text171 = x3d.Text()
Text171.setString(["90"])
FontStyle172 = x3d.FontStyle()
FontStyle172.setSize(0.035)

Text171.setFontStyle(FontStyle172)

Shape170.setGeometry(Text171)

Billboard169.addChildren(Shape170)

HAnimSite166.addChildren(Billboard169)

HAnimSegment144.addChildren(HAnimSite166)
HAnimSite173 = x3d.HAnimSite()
HAnimSite173.setName("l_suprapatella")
HAnimSite173.setDEF("hanim_l_suprapatella")
TouchSensor174 = x3d.TouchSensor()
TouchSensor174.setDescription("HAnimSite 41 l_suprapatella")

HAnimSite173.addChildren(TouchSensor174)
Shape175 = x3d.Shape()
Shape175.setUSE("HAnimSiteShape")

HAnimSite173.addChildren(Shape175)
Billboard176 = x3d.Billboard()
Shape177 = x3d.Shape()
Text178 = x3d.Text()
Text178.setString(["41"])
FontStyle179 = x3d.FontStyle()
FontStyle179.setSize(0.035)

Text178.setFontStyle(FontStyle179)

Shape177.setGeometry(Text178)

Billboard176.addChildren(Shape177)

HAnimSite173.addChildren(Billboard176)

HAnimSegment144.addChildren(HAnimSite173)

HAnimJoint143.addChildren(HAnimSegment144)
HAnimJoint180 = x3d.HAnimJoint()
HAnimJoint180.setName("l_knee")
HAnimJoint180.setDEF("hanim_l_knee")
HAnimJoint180.setCenter([0.104,0.4867,0.0308])
HAnimJoint180.setUlimit([0,0,0])
HAnimJoint180.setLlimit([0,0,0])
HAnimSegment181 = x3d.HAnimSegment()
HAnimSegment181.setName("l_calf")
HAnimSegment181.setDEF("hanim_l_calf")
Transform182 = x3d.Transform()
Transform182.setTranslation([0.104,0.4867,0.0308])
Transform183 = x3d.Transform()
#Empty Transform
Shape184 = x3d.Shape()
Shape184.setUSE("HAnimJointShape")

Transform183.addChild(Shape184)

Transform182.addChildren(Transform183)

HAnimSegment181.addChildren(Transform182)
Shape185 = x3d.Shape()
LineSet186 = x3d.LineSet()
LineSet186.setVertexCount([2])
Coordinate187 = x3d.Coordinate()
Coordinate187.setPoint([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736])

LineSet186.setCoord(Coordinate187)
#from l_knee to l_talocrural vertices 2
ColorRGBA188 = x3d.ColorRGBA()
ColorRGBA188.setUSE("HAnimSegmentLineColorRGBA")

LineSet186.setColor(ColorRGBA188)

Shape185.setGeometry(LineSet186)

HAnimSegment181.addChildren(Shape185)
HAnimSite189 = x3d.HAnimSite()
HAnimSite189.setName("l_lateral_malleolus")
HAnimSite189.setDEF("hanim_l_lateral_malleolus")
HAnimSite189.setTranslation([0.1308,0.0597,-0.1032])
TouchSensor190 = x3d.TouchSensor()
TouchSensor190.setDescription("HAnimSite 49 l_lateral_malleolus")

HAnimSite189.addChildren(TouchSensor190)
Shape191 = x3d.Shape()
Shape191.setUSE("HAnimSiteShape")

HAnimSite189.addChildren(Shape191)
Billboard192 = x3d.Billboard()
Shape193 = x3d.Shape()
Text194 = x3d.Text()
Text194.setString(["49"])
FontStyle195 = x3d.FontStyle()
FontStyle195.setSize(0.035)

Text194.setFontStyle(FontStyle195)

Shape193.setGeometry(Text194)

Billboard192.addChildren(Shape193)

HAnimSite189.addChildren(Billboard192)

HAnimSegment181.addChildren(HAnimSite189)
HAnimSite196 = x3d.HAnimSite()
HAnimSite196.setName("l_medial_malleolus")
HAnimSite196.setDEF("hanim_l_medial_malleolus")
HAnimSite196.setTranslation([0.089,0.0716,-0.0881])
TouchSensor197 = x3d.TouchSensor()
TouchSensor197.setDescription("HAnimSite 48 l_medial_malleolus")

HAnimSite196.addChildren(TouchSensor197)
Shape198 = x3d.Shape()
Shape198.setUSE("HAnimSiteShape")

HAnimSite196.addChildren(Shape198)
Billboard199 = x3d.Billboard()
Shape200 = x3d.Shape()
Text201 = x3d.Text()
Text201.setString(["48"])
FontStyle202 = x3d.FontStyle()
FontStyle202.setSize(0.035)

Text201.setFontStyle(FontStyle202)

Shape200.setGeometry(Text201)

Billboard199.addChildren(Shape200)

HAnimSite196.addChildren(Billboard199)

HAnimSegment181.addChildren(HAnimSite196)
HAnimSite203 = x3d.HAnimSite()
HAnimSite203.setName("l_tibiale")
HAnimSite203.setDEF("hanim_l_tibiale")
TouchSensor204 = x3d.TouchSensor()
TouchSensor204.setDescription("HAnimSite 47 l_tibiale")

HAnimSite203.addChildren(TouchSensor204)
Shape205 = x3d.Shape()
Shape205.setUSE("HAnimSiteShape")

HAnimSite203.addChildren(Shape205)
Billboard206 = x3d.Billboard()
Shape207 = x3d.Shape()
Text208 = x3d.Text()
Text208.setString(["47"])
FontStyle209 = x3d.FontStyle()
FontStyle209.setSize(0.035)

Text208.setFontStyle(FontStyle209)

Shape207.setGeometry(Text208)

Billboard206.addChildren(Shape207)

HAnimSite203.addChildren(Billboard206)

HAnimSegment181.addChildren(HAnimSite203)

HAnimJoint180.addChildren(HAnimSegment181)
HAnimJoint210 = x3d.HAnimJoint()
HAnimJoint210.setName("l_talocrural")
HAnimJoint210.setDEF("hanim_l_talocrural")
HAnimJoint210.setCenter([0.1101,0.0656,-0.0736])
HAnimJoint210.setUlimit([0,0,0])
HAnimJoint210.setLlimit([0,0,0])
HAnimSegment211 = x3d.HAnimSegment()
HAnimSegment211.setName("l_talus")
HAnimSegment211.setDEF("hanim_l_talus")
Transform212 = x3d.Transform()
Transform212.setScale([0.15,0.15,0.15])
Transform212.setTranslation([0.08,0.06,-0.025])
Transform212.setRotation([1,0,0,-1.57])
#Transform left foot
Transform213 = x3d.Transform()
#Empty Transform left foot
Shape214 = x3d.Shape()
Shape214.setUSE("HAnimJointShape")

Transform213.addChild(Shape214)

Transform212.addChildren(Transform213)

HAnimSegment211.addChildren(Transform212)
Shape215 = x3d.Shape()
LineSet216 = x3d.LineSet()
LineSet216.setVertexCount([2])
Coordinate217 = x3d.Coordinate()
Coordinate217.setPoint([0.1101,0.0656,-0.0736,0.08,0.0175,-0.0608])

LineSet216.setCoord(Coordinate217)
#from l_talocrural to l_tarsometatarsal_2 vertices 2
ColorRGBA218 = x3d.ColorRGBA()
ColorRGBA218.setUSE("HAnimSegmentLineColorRGBA")

LineSet216.setColor(ColorRGBA218)

Shape215.setGeometry(LineSet216)

HAnimSegment211.addChildren(Shape215)
HAnimSite219 = x3d.HAnimSite()
HAnimSite219.setName("l_calcaneus_posterior")
HAnimSite219.setDEF("hanim_l_calcaneus_posterior")
HAnimSite219.setTranslation([0.0974,0.0259,-0.1171])
TouchSensor220 = x3d.TouchSensor()
TouchSensor220.setDescription("HAnimSite 58 l_calcaneus_posterior")

HAnimSite219.addChildren(TouchSensor220)
Shape221 = x3d.Shape()
Shape221.setUSE("HAnimSiteShape")

HAnimSite219.addChildren(Shape221)
Billboard222 = x3d.Billboard()
Shape223 = x3d.Shape()
Text224 = x3d.Text()
Text224.setString(["58"])
FontStyle225 = x3d.FontStyle()
FontStyle225.setSize(0.035)

Text224.setFontStyle(FontStyle225)

Shape223.setGeometry(Text224)

Billboard222.addChildren(Shape223)

HAnimSite219.addChildren(Billboard222)

HAnimSegment211.addChildren(HAnimSite219)
HAnimSite226 = x3d.HAnimSite()
HAnimSite226.setName("l_sphyrion")
HAnimSite226.setDEF("hanim_l_sphyrion")
HAnimSite226.setTranslation([0.089,0.0575,-0.0943])
TouchSensor227 = x3d.TouchSensor()
TouchSensor227.setDescription("HAnimSite 50 l_sphyrion")

HAnimSite226.addChildren(TouchSensor227)
Shape228 = x3d.Shape()
Shape228.setUSE("HAnimSiteShape")

HAnimSite226.addChildren(Shape228)
Billboard229 = x3d.Billboard()
Shape230 = x3d.Shape()
Text231 = x3d.Text()
Text231.setString(["50"])
FontStyle232 = x3d.FontStyle()
FontStyle232.setSize(0.035)

Text231.setFontStyle(FontStyle232)

Shape230.setGeometry(Text231)

Billboard229.addChildren(Shape230)

HAnimSite226.addChildren(Billboard229)

HAnimSegment211.addChildren(HAnimSite226)

HAnimJoint210.addChildren(HAnimSegment211)
HAnimJoint233 = x3d.HAnimJoint()
HAnimJoint233.setName("l_tarsometatarsal_2")
HAnimJoint233.setDEF("hanim_l_tarsometatarsal_2")
HAnimJoint233.setCenter([0.08,0.0175,-0.0608])
HAnimJoint233.setUlimit([0,0,0])
HAnimJoint233.setLlimit([0,0,0])
HAnimSegment234 = x3d.HAnimSegment()
HAnimSegment234.setName("l_metatarsal_2")
HAnimSegment234.setDEF("hanim_l_metatarsal_2")
Transform235 = x3d.Transform()
Transform235.setTranslation([0.08,0.0175,-0.0608])
Transform236 = x3d.Transform()
#Empty Transform
Shape237 = x3d.Shape()
Shape237.setUSE("HAnimJointShape")

Transform236.addChild(Shape237)

Transform235.addChildren(Transform236)

HAnimSegment234.addChildren(Transform235)
Shape238 = x3d.Shape()
LineSet239 = x3d.LineSet()
LineSet239.setVertexCount([2])
Coordinate240 = x3d.Coordinate()
Coordinate240.setPoint([0.08,0.0175,-0.0608,0.0824,0.0064,-0.004])

LineSet239.setCoord(Coordinate240)
#from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA241 = x3d.ColorRGBA()
ColorRGBA241.setUSE("HAnimSegmentLineColorRGBA")

LineSet239.setColor(ColorRGBA241)

Shape238.setGeometry(LineSet239)

HAnimSegment234.addChildren(Shape238)

HAnimJoint233.addChildren(HAnimSegment234)
HAnimJoint242 = x3d.HAnimJoint()
HAnimJoint242.setName("l_metatarsophalangeal_2")
HAnimJoint242.setDEF("hanim_l_metatarsophalangeal_2")
HAnimJoint242.setCenter([0.0824,0.0064,-0.004])
HAnimJoint242.setUlimit([0,0,0])
HAnimJoint242.setLlimit([0,0,0])
HAnimSegment243 = x3d.HAnimSegment()
HAnimSegment243.setName("l_tarsal_proximal_phalanx_2")
HAnimSegment243.setDEF("hanim_l_tarsal_proximal_phalanx_2")
Transform244 = x3d.Transform()
Transform244.setTranslation([0.0824,0.0064,-0.004])
Transform245 = x3d.Transform()
#Empty Transform
Shape246 = x3d.Shape()
Shape246.setUSE("HAnimJointShape")

Transform245.addChild(Shape246)

Transform244.addChildren(Transform245)

HAnimSegment243.addChildren(Transform244)
Shape247 = x3d.Shape()
LineSet248 = x3d.LineSet()
LineSet248.setVertexCount([2])
Coordinate249 = x3d.Coordinate()
Coordinate249.setPoint([0.0824,0.0064,-0.004,0.0841,0.0013,0.0216])

LineSet248.setCoord(Coordinate249)
#from l_metatarsophalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA250 = x3d.ColorRGBA()
ColorRGBA250.setUSE("HAnimSegmentLineColorRGBA")

LineSet248.setColor(ColorRGBA250)

Shape247.setGeometry(LineSet248)

HAnimSegment243.addChildren(Shape247)
HAnimSite251 = x3d.HAnimSite()
HAnimSite251.setName("l_metatarsal_phalanx_1")
HAnimSite251.setDEF("hanim_l_metatarsal_phalanx_1")
TouchSensor252 = x3d.TouchSensor()
TouchSensor252.setDescription("HAnimSite 55 l_metatarsal_phalanx_1")

HAnimSite251.addChildren(TouchSensor252)
Shape253 = x3d.Shape()
Shape253.setUSE("HAnimSiteShape")

HAnimSite251.addChildren(Shape253)
Billboard254 = x3d.Billboard()
Shape255 = x3d.Shape()
Text256 = x3d.Text()
Text256.setString(["55"])
FontStyle257 = x3d.FontStyle()
FontStyle257.setSize(0.035)

Text256.setFontStyle(FontStyle257)

Shape255.setGeometry(Text256)

Billboard254.addChildren(Shape255)

HAnimSite251.addChildren(Billboard254)

HAnimSegment243.addChildren(HAnimSite251)
HAnimSite258 = x3d.HAnimSite()
HAnimSite258.setName("l_metatarsal_phalanx_5")
HAnimSite258.setDEF("hanim_l_metatarsal_phalanx_5")
TouchSensor259 = x3d.TouchSensor()
TouchSensor259.setDescription("HAnimSite 56 l_metatarsal_phalanx_5")

HAnimSite258.addChildren(TouchSensor259)
Shape260 = x3d.Shape()
Shape260.setUSE("HAnimSiteShape")

HAnimSite258.addChildren(Shape260)
Billboard261 = x3d.Billboard()
Shape262 = x3d.Shape()
Text263 = x3d.Text()
Text263.setString(["56"])
FontStyle264 = x3d.FontStyle()
FontStyle264.setSize(0.035)

Text263.setFontStyle(FontStyle264)

Shape262.setGeometry(Text263)

Billboard261.addChildren(Shape262)

HAnimSite258.addChildren(Billboard261)

HAnimSegment243.addChildren(HAnimSite258)
HAnimSite265 = x3d.HAnimSite()
HAnimSite265.setName("l_tarsal_distal_phalanx_1_tip")
HAnimSite265.setDEF("hanim_l_tarsal_distal_phalanx_1_tip")
TouchSensor266 = x3d.TouchSensor()
TouchSensor266.setDescription("HAnimSite l_tarsal_distal_phalanx_1_tip")

HAnimSite265.addChildren(TouchSensor266)
Shape267 = x3d.Shape()
Shape267.setUSE("HAnimSiteShape")

HAnimSite265.addChildren(Shape267)
Billboard268 = x3d.Billboard()
Shape269 = x3d.Shape()
Text270 = x3d.Text()
Text270.setString([""])
FontStyle271 = x3d.FontStyle()
FontStyle271.setSize(0.035)

Text270.setFontStyle(FontStyle271)

Shape269.setGeometry(Text270)

Billboard268.addChildren(Shape269)

HAnimSite265.addChildren(Billboard268)

HAnimSegment243.addChildren(HAnimSite265)
HAnimSite272 = x3d.HAnimSite()
HAnimSite272.setName("l_tarsal_distal_phalanx_2_tip")
HAnimSite272.setDEF("hanim_l_tarsal_distal_phalanx_2_tip")
HAnimSite272.setTranslation([0.1195,0.0079,0.1433])
TouchSensor273 = x3d.TouchSensor()
TouchSensor273.setDescription("HAnimSite l_tarsal_distal_phalanx_2_tip")

HAnimSite272.addChildren(TouchSensor273)
Shape274 = x3d.Shape()
Shape274.setUSE("HAnimSiteShape")

HAnimSite272.addChildren(Shape274)
Billboard275 = x3d.Billboard()
Shape276 = x3d.Shape()
Text277 = x3d.Text()
Text277.setString([""])
FontStyle278 = x3d.FontStyle()
FontStyle278.setSize(0.035)

Text277.setFontStyle(FontStyle278)

Shape276.setGeometry(Text277)

Billboard275.addChildren(Shape276)

HAnimSite272.addChildren(Billboard275)

HAnimSegment243.addChildren(HAnimSite272)
HAnimSite279 = x3d.HAnimSite()
HAnimSite279.setName("l_tarsal_distal_phalanx_3_tip")
HAnimSite279.setDEF("hanim_l_tarsal_distal_phalanx_3_tip")
TouchSensor280 = x3d.TouchSensor()
TouchSensor280.setDescription("HAnimSite l_tarsal_distal_phalanx_3_tip")

HAnimSite279.addChildren(TouchSensor280)
Shape281 = x3d.Shape()
Shape281.setUSE("HAnimSiteShape")

HAnimSite279.addChildren(Shape281)
Billboard282 = x3d.Billboard()
Shape283 = x3d.Shape()
Text284 = x3d.Text()
Text284.setString([""])
FontStyle285 = x3d.FontStyle()
FontStyle285.setSize(0.035)

Text284.setFontStyle(FontStyle285)

Shape283.setGeometry(Text284)

Billboard282.addChildren(Shape283)

HAnimSite279.addChildren(Billboard282)

HAnimSegment243.addChildren(HAnimSite279)
HAnimSite286 = x3d.HAnimSite()
HAnimSite286.setName("l_tarsal_distal_phalanx_4_tip")
HAnimSite286.setDEF("hanim_l_tarsal_distal_phalanx_4_tip")
TouchSensor287 = x3d.TouchSensor()
TouchSensor287.setDescription("HAnimSite l_tarsal_distal_phalanx_4_tip")

HAnimSite286.addChildren(TouchSensor287)
Shape288 = x3d.Shape()
Shape288.setUSE("HAnimSiteShape")

HAnimSite286.addChildren(Shape288)
Billboard289 = x3d.Billboard()
Shape290 = x3d.Shape()
Text291 = x3d.Text()
Text291.setString([""])
FontStyle292 = x3d.FontStyle()
FontStyle292.setSize(0.035)

Text291.setFontStyle(FontStyle292)

Shape290.setGeometry(Text291)

Billboard289.addChildren(Shape290)

HAnimSite286.addChildren(Billboard289)

HAnimSegment243.addChildren(HAnimSite286)
HAnimSite293 = x3d.HAnimSite()
HAnimSite293.setName("l_tarsal_distal_phalanx_5_tip")
HAnimSite293.setDEF("hanim_l_tarsal_distal_phalanx_5_tip")
TouchSensor294 = x3d.TouchSensor()
TouchSensor294.setDescription("HAnimSite l_tarsal_distal_phalanx_5_tip")

HAnimSite293.addChildren(TouchSensor294)
Shape295 = x3d.Shape()
Shape295.setUSE("HAnimSiteShape")

HAnimSite293.addChildren(Shape295)
Billboard296 = x3d.Billboard()
Shape297 = x3d.Shape()
Text298 = x3d.Text()
Text298.setString([""])
FontStyle299 = x3d.FontStyle()
FontStyle299.setSize(0.035)

Text298.setFontStyle(FontStyle299)

Shape297.setGeometry(Text298)

Billboard296.addChildren(Shape297)

HAnimSite293.addChildren(Billboard296)

HAnimSegment243.addChildren(HAnimSite293)

HAnimJoint242.addChildren(HAnimSegment243)
HAnimJoint300 = x3d.HAnimJoint()
HAnimJoint300.setName("l_tarsal_distal_interphalangeal_2")
HAnimJoint300.setDEF("hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint300.setCenter([0.0841,0.0013,0.0216])
HAnimJoint300.setUlimit([0,0,0])
HAnimJoint300.setLlimit([0,0,0])

HAnimJoint242.addChildren(HAnimJoint300)

HAnimJoint233.addChildren(HAnimJoint242)

HAnimJoint210.addChildren(HAnimJoint233)

HAnimJoint180.addChildren(HAnimJoint210)

HAnimJoint143.addChildren(HAnimJoint180)

HAnimJoint60.addChildren(HAnimJoint143)
HAnimJoint301 = x3d.HAnimJoint()
HAnimJoint301.setName("r_hip")
HAnimJoint301.setDEF("hanim_r_hip")
HAnimJoint301.setCenter([-0.095,0.9171,0.0029])
HAnimJoint301.setUlimit([0,0,0])
HAnimJoint301.setLlimit([0,0,0])
HAnimSegment302 = x3d.HAnimSegment()
HAnimSegment302.setName("r_thigh")
HAnimSegment302.setDEF("hanim_r_thigh")
Transform303 = x3d.Transform()
Transform303.setTranslation([-0.095,0.9171,0.0029])
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
Coordinate308.setPoint([-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318])

LineSet307.setCoord(Coordinate308)
#from r_hip to r_knee vertices 2
ColorRGBA309 = x3d.ColorRGBA()
ColorRGBA309.setUSE("HAnimSegmentLineColorRGBA")

LineSet307.setColor(ColorRGBA309)

Shape306.setGeometry(LineSet307)

HAnimSegment302.addChildren(Shape306)
HAnimSite310 = x3d.HAnimSite()
HAnimSite310.setName("r_femoral_lateral_epicondyles")
HAnimSite310.setDEF("hanim_r_femoral_lateral_epicondyles")
HAnimSite310.setTranslation([-0.1421,0.4992,0.031])
TouchSensor311 = x3d.TouchSensor()
TouchSensor311.setDescription("HAnimSite 44 r_femoral_lateral_epicondyles")

HAnimSite310.addChildren(TouchSensor311)
Shape312 = x3d.Shape()
Shape312.setUSE("HAnimSiteShape")

HAnimSite310.addChildren(Shape312)
Billboard313 = x3d.Billboard()
Shape314 = x3d.Shape()
Text315 = x3d.Text()
Text315.setString(["44"])
FontStyle316 = x3d.FontStyle()
FontStyle316.setSize(0.035)

Text315.setFontStyle(FontStyle316)

Shape314.setGeometry(Text315)

Billboard313.addChildren(Shape314)

HAnimSite310.addChildren(Billboard313)

HAnimSegment302.addChildren(HAnimSite310)
HAnimSite317 = x3d.HAnimSite()
HAnimSite317.setName("r_femoral_medial_epicondyles")
HAnimSite317.setDEF("hanim_r_femoral_medial_epicondyles")
HAnimSite317.setTranslation([-0.0221,0.5014,0.0289])
TouchSensor318 = x3d.TouchSensor()
TouchSensor318.setDescription("HAnimSite 43 r_femoral_medial_epicondyles")

HAnimSite317.addChildren(TouchSensor318)
Shape319 = x3d.Shape()
Shape319.setUSE("HAnimSiteShape")

HAnimSite317.addChildren(Shape319)
Billboard320 = x3d.Billboard()
Shape321 = x3d.Shape()
Text322 = x3d.Text()
Text322.setString(["43"])
FontStyle323 = x3d.FontStyle()
FontStyle323.setSize(0.035)

Text322.setFontStyle(FontStyle323)

Shape321.setGeometry(Text322)

Billboard320.addChildren(Shape321)

HAnimSite317.addChildren(Billboard320)

HAnimSegment302.addChildren(HAnimSite317)
HAnimSite324 = x3d.HAnimSite()
HAnimSite324.setName("r_knee_crease")
HAnimSite324.setDEF("hanim_r_knee_crease")
HAnimSite324.setTranslation([-0.0825,0.4932,-0.0326])
TouchSensor325 = x3d.TouchSensor()
TouchSensor325.setDescription("HAnimSite 91 r_knee_crease")

HAnimSite324.addChildren(TouchSensor325)
Shape326 = x3d.Shape()
Shape326.setUSE("HAnimSiteShape")

HAnimSite324.addChildren(Shape326)
Billboard327 = x3d.Billboard()
Shape328 = x3d.Shape()
Text329 = x3d.Text()
Text329.setString(["91"])
FontStyle330 = x3d.FontStyle()
FontStyle330.setSize(0.035)

Text329.setFontStyle(FontStyle330)

Shape328.setGeometry(Text329)

Billboard327.addChildren(Shape328)

HAnimSite324.addChildren(Billboard327)

HAnimSegment302.addChildren(HAnimSite324)
HAnimSite331 = x3d.HAnimSite()
HAnimSite331.setName("r_suprapatella")
HAnimSite331.setDEF("hanim_r_suprapatella")
TouchSensor332 = x3d.TouchSensor()
TouchSensor332.setDescription("HAnimSite 45 r_suprapatella")

HAnimSite331.addChildren(TouchSensor332)
Shape333 = x3d.Shape()
Shape333.setUSE("HAnimSiteShape")

HAnimSite331.addChildren(Shape333)
Billboard334 = x3d.Billboard()
Shape335 = x3d.Shape()
Text336 = x3d.Text()
Text336.setString(["45"])
FontStyle337 = x3d.FontStyle()
FontStyle337.setSize(0.035)

Text336.setFontStyle(FontStyle337)

Shape335.setGeometry(Text336)

Billboard334.addChildren(Shape335)

HAnimSite331.addChildren(Billboard334)

HAnimSegment302.addChildren(HAnimSite331)

HAnimJoint301.addChildren(HAnimSegment302)
HAnimJoint338 = x3d.HAnimJoint()
HAnimJoint338.setName("r_knee")
HAnimJoint338.setDEF("hanim_r_knee")
HAnimJoint338.setCenter([-0.0867,0.4913,0.0318])
HAnimJoint338.setUlimit([0,0,0])
HAnimJoint338.setLlimit([0,0,0])
HAnimSegment339 = x3d.HAnimSegment()
HAnimSegment339.setName("r_calf")
HAnimSegment339.setDEF("hanim_r_calf")
Transform340 = x3d.Transform()
Transform340.setTranslation([-0.0867,0.4913,0.0318])
Transform341 = x3d.Transform()
#Empty Transform
Shape342 = x3d.Shape()
Shape342.setUSE("HAnimJointShape")

Transform341.addChild(Shape342)

Transform340.addChildren(Transform341)

HAnimSegment339.addChildren(Transform340)
Shape343 = x3d.Shape()
LineSet344 = x3d.LineSet()
LineSet344.setVertexCount([2])
Coordinate345 = x3d.Coordinate()
Coordinate345.setPoint([-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766])

LineSet344.setCoord(Coordinate345)
#from r_knee to r_talocrural vertices 2
ColorRGBA346 = x3d.ColorRGBA()
ColorRGBA346.setUSE("HAnimSegmentLineColorRGBA")

LineSet344.setColor(ColorRGBA346)

Shape343.setGeometry(LineSet344)

HAnimSegment339.addChildren(Shape343)
HAnimSite347 = x3d.HAnimSite()
HAnimSite347.setName("r_lateral_malleolus")
HAnimSite347.setDEF("hanim_r_lateral_malleolus")
HAnimSite347.setTranslation([-0.1006,0.0658,-0.1075])
TouchSensor348 = x3d.TouchSensor()
TouchSensor348.setDescription("HAnimSite 53 r_lateral_malleolus")

HAnimSite347.addChildren(TouchSensor348)
Shape349 = x3d.Shape()
Shape349.setUSE("HAnimSiteShape")

HAnimSite347.addChildren(Shape349)
Billboard350 = x3d.Billboard()
Shape351 = x3d.Shape()
Text352 = x3d.Text()
Text352.setString(["53"])
FontStyle353 = x3d.FontStyle()
FontStyle353.setSize(0.035)

Text352.setFontStyle(FontStyle353)

Shape351.setGeometry(Text352)

Billboard350.addChildren(Shape351)

HAnimSite347.addChildren(Billboard350)

HAnimSegment339.addChildren(HAnimSite347)
HAnimSite354 = x3d.HAnimSite()
HAnimSite354.setName("r_medial_malleolus")
HAnimSite354.setDEF("hanim_r_medial_malleolus")
HAnimSite354.setTranslation([-0.0591,0.076,-0.0928])
TouchSensor355 = x3d.TouchSensor()
TouchSensor355.setDescription("HAnimSite 52 r_medial_malleolus")

HAnimSite354.addChildren(TouchSensor355)
Shape356 = x3d.Shape()
Shape356.setUSE("HAnimSiteShape")

HAnimSite354.addChildren(Shape356)
Billboard357 = x3d.Billboard()
Shape358 = x3d.Shape()
Text359 = x3d.Text()
Text359.setString(["52"])
FontStyle360 = x3d.FontStyle()
FontStyle360.setSize(0.035)

Text359.setFontStyle(FontStyle360)

Shape358.setGeometry(Text359)

Billboard357.addChildren(Shape358)

HAnimSite354.addChildren(Billboard357)

HAnimSegment339.addChildren(HAnimSite354)
HAnimSite361 = x3d.HAnimSite()
HAnimSite361.setName("r_tibiale")
HAnimSite361.setDEF("hanim_r_tibiale")
TouchSensor362 = x3d.TouchSensor()
TouchSensor362.setDescription("HAnimSite 51 r_tibiale")

HAnimSite361.addChildren(TouchSensor362)
Shape363 = x3d.Shape()
Shape363.setUSE("HAnimSiteShape")

HAnimSite361.addChildren(Shape363)
Billboard364 = x3d.Billboard()
Shape365 = x3d.Shape()
Text366 = x3d.Text()
Text366.setString(["51"])
FontStyle367 = x3d.FontStyle()
FontStyle367.setSize(0.035)

Text366.setFontStyle(FontStyle367)

Shape365.setGeometry(Text366)

Billboard364.addChildren(Shape365)

HAnimSite361.addChildren(Billboard364)

HAnimSegment339.addChildren(HAnimSite361)

HAnimJoint338.addChildren(HAnimSegment339)
HAnimJoint368 = x3d.HAnimJoint()
HAnimJoint368.setName("r_talocrural")
HAnimJoint368.setDEF("hanim_r_talocrural")
HAnimJoint368.setCenter([-0.0801,0.0712,-0.0766])
HAnimJoint368.setUlimit([0,0,0])
HAnimJoint368.setLlimit([0,0,0])
HAnimSegment369 = x3d.HAnimSegment()
HAnimSegment369.setName("r_talus")
HAnimSegment369.setDEF("hanim_r_talus")
Transform370 = x3d.Transform()
Transform370.setScale([0.15,0.15,0.15])
Transform370.setTranslation([-0.05,0.06,-0.025])
Transform370.setRotation([1,0,0,-1.57])
#Transform right foot
Transform371 = x3d.Transform()
#Empty Transform right foot
Shape372 = x3d.Shape()
Shape372.setUSE("HAnimJointShape")

Transform371.addChild(Shape372)

Transform370.addChildren(Transform371)

HAnimSegment369.addChildren(Transform370)
Shape373 = x3d.Shape()
LineSet374 = x3d.LineSet()
LineSet374.setVertexCount([2])
Coordinate375 = x3d.Coordinate()
Coordinate375.setPoint([-0.0801,0.0712,-0.0766,-0.08,0.0175,-0.0608])

LineSet374.setCoord(Coordinate375)
#from r_talocrural to r_tarsometatarsal_2 vertices 2
ColorRGBA376 = x3d.ColorRGBA()
ColorRGBA376.setUSE("HAnimSegmentLineColorRGBA")

LineSet374.setColor(ColorRGBA376)

Shape373.setGeometry(LineSet374)

HAnimSegment369.addChildren(Shape373)
HAnimSite377 = x3d.HAnimSite()
HAnimSite377.setName("r_calcaneus_posterior")
HAnimSite377.setDEF("hanim_r_calcaneus_posterior")
HAnimSite377.setTranslation([-0.0692,0.0297,-0.1221])
TouchSensor378 = x3d.TouchSensor()
TouchSensor378.setDescription("HAnimSite 62 r_calcaneus_posterior")

HAnimSite377.addChildren(TouchSensor378)
Shape379 = x3d.Shape()
Shape379.setUSE("HAnimSiteShape")

HAnimSite377.addChildren(Shape379)
Billboard380 = x3d.Billboard()
Shape381 = x3d.Shape()
Text382 = x3d.Text()
Text382.setString(["62"])
FontStyle383 = x3d.FontStyle()
FontStyle383.setSize(0.035)

Text382.setFontStyle(FontStyle383)

Shape381.setGeometry(Text382)

Billboard380.addChildren(Shape381)

HAnimSite377.addChildren(Billboard380)

HAnimSegment369.addChildren(HAnimSite377)
HAnimSite384 = x3d.HAnimSite()
HAnimSite384.setName("r_sphyrion")
HAnimSite384.setDEF("hanim_r_sphyrion")
HAnimSite384.setTranslation([-0.0603,0.061,-0.1002])
TouchSensor385 = x3d.TouchSensor()
TouchSensor385.setDescription("HAnimSite 54 r_sphyrion")

HAnimSite384.addChildren(TouchSensor385)
Shape386 = x3d.Shape()
Shape386.setUSE("HAnimSiteShape")

HAnimSite384.addChildren(Shape386)
Billboard387 = x3d.Billboard()
Shape388 = x3d.Shape()
Text389 = x3d.Text()
Text389.setString(["54"])
FontStyle390 = x3d.FontStyle()
FontStyle390.setSize(0.035)

Text389.setFontStyle(FontStyle390)

Shape388.setGeometry(Text389)

Billboard387.addChildren(Shape388)

HAnimSite384.addChildren(Billboard387)

HAnimSegment369.addChildren(HAnimSite384)

HAnimJoint368.addChildren(HAnimSegment369)
HAnimJoint391 = x3d.HAnimJoint()
HAnimJoint391.setName("r_tarsometatarsal_2")
HAnimJoint391.setDEF("hanim_r_tarsometatarsal_2")
HAnimJoint391.setCenter([-0.08,0.0175,-0.0608])
HAnimJoint391.setUlimit([0,0,0])
HAnimJoint391.setLlimit([0,0,0])
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
HAnimJoint400.setUlimit([0,0,0])
HAnimJoint400.setLlimit([0,0,0])
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
Coordinate407.setPoint([-0.0823,0.0064,-0.004,-0.0841,0.0013,0.0216])

LineSet406.setCoord(Coordinate407)
#from r_metatarsophalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA408 = x3d.ColorRGBA()
ColorRGBA408.setUSE("HAnimSegmentLineColorRGBA")

LineSet406.setColor(ColorRGBA408)

Shape405.setGeometry(LineSet406)

HAnimSegment401.addChildren(Shape405)
HAnimSite409 = x3d.HAnimSite()
HAnimSite409.setName("r_metatarsal_phalanx_1")
HAnimSite409.setDEF("hanim_r_metatarsal_phalanx_1")
TouchSensor410 = x3d.TouchSensor()
TouchSensor410.setDescription("HAnimSite 59 r_metatarsal_phalanx_1")

HAnimSite409.addChildren(TouchSensor410)
Shape411 = x3d.Shape()
Shape411.setUSE("HAnimSiteShape")

HAnimSite409.addChildren(Shape411)
Billboard412 = x3d.Billboard()
Shape413 = x3d.Shape()
Text414 = x3d.Text()
Text414.setString(["59"])
FontStyle415 = x3d.FontStyle()
FontStyle415.setSize(0.035)

Text414.setFontStyle(FontStyle415)

Shape413.setGeometry(Text414)

Billboard412.addChildren(Shape413)

HAnimSite409.addChildren(Billboard412)

HAnimSegment401.addChildren(HAnimSite409)
HAnimSite416 = x3d.HAnimSite()
HAnimSite416.setName("r_metatarsal_phalanx_5")
HAnimSite416.setDEF("hanim_r_metatarsal_phalanx_5")
TouchSensor417 = x3d.TouchSensor()
TouchSensor417.setDescription("HAnimSite 60 r_metatarsal_phalanx_5")

HAnimSite416.addChildren(TouchSensor417)
Shape418 = x3d.Shape()
Shape418.setUSE("HAnimSiteShape")

HAnimSite416.addChildren(Shape418)
Billboard419 = x3d.Billboard()
Shape420 = x3d.Shape()
Text421 = x3d.Text()
Text421.setString(["60"])
FontStyle422 = x3d.FontStyle()
FontStyle422.setSize(0.035)

Text421.setFontStyle(FontStyle422)

Shape420.setGeometry(Text421)

Billboard419.addChildren(Shape420)

HAnimSite416.addChildren(Billboard419)

HAnimSegment401.addChildren(HAnimSite416)
HAnimSite423 = x3d.HAnimSite()
HAnimSite423.setName("r_tarsal_distal_phalanx_1_tip")
HAnimSite423.setDEF("hanim_r_tarsal_distal_phalanx_1_tip")
TouchSensor424 = x3d.TouchSensor()
TouchSensor424.setDescription("HAnimSite r_tarsal_distal_phalanx_1_tip")

HAnimSite423.addChildren(TouchSensor424)
Shape425 = x3d.Shape()
Shape425.setUSE("HAnimSiteShape")

HAnimSite423.addChildren(Shape425)
Billboard426 = x3d.Billboard()
Shape427 = x3d.Shape()
Text428 = x3d.Text()
Text428.setString([""])
FontStyle429 = x3d.FontStyle()
FontStyle429.setSize(0.035)

Text428.setFontStyle(FontStyle429)

Shape427.setGeometry(Text428)

Billboard426.addChildren(Shape427)

HAnimSite423.addChildren(Billboard426)

HAnimSegment401.addChildren(HAnimSite423)
HAnimSite430 = x3d.HAnimSite()
HAnimSite430.setName("r_tarsal_distal_phalanx_2_tip")
HAnimSite430.setDEF("hanim_r_tarsal_distal_phalanx_2_tip")
HAnimSite430.setTranslation([-0.0883,0.0134,0.1383])
TouchSensor431 = x3d.TouchSensor()
TouchSensor431.setDescription("HAnimSite r_tarsal_distal_phalanx_2_tip")

HAnimSite430.addChildren(TouchSensor431)
Shape432 = x3d.Shape()
Shape432.setUSE("HAnimSiteShape")

HAnimSite430.addChildren(Shape432)
Billboard433 = x3d.Billboard()
Shape434 = x3d.Shape()
Text435 = x3d.Text()
Text435.setString([""])
FontStyle436 = x3d.FontStyle()
FontStyle436.setSize(0.035)

Text435.setFontStyle(FontStyle436)

Shape434.setGeometry(Text435)

Billboard433.addChildren(Shape434)

HAnimSite430.addChildren(Billboard433)

HAnimSegment401.addChildren(HAnimSite430)
HAnimSite437 = x3d.HAnimSite()
HAnimSite437.setName("r_tarsal_distal_phalanx_3_tip")
HAnimSite437.setDEF("hanim_r_tarsal_distal_phalanx_3_tip")
TouchSensor438 = x3d.TouchSensor()
TouchSensor438.setDescription("HAnimSite r_tarsal_distal_phalanx_3_tip")

HAnimSite437.addChildren(TouchSensor438)
Shape439 = x3d.Shape()
Shape439.setUSE("HAnimSiteShape")

HAnimSite437.addChildren(Shape439)
Billboard440 = x3d.Billboard()
Shape441 = x3d.Shape()
Text442 = x3d.Text()
Text442.setString([""])
FontStyle443 = x3d.FontStyle()
FontStyle443.setSize(0.035)

Text442.setFontStyle(FontStyle443)

Shape441.setGeometry(Text442)

Billboard440.addChildren(Shape441)

HAnimSite437.addChildren(Billboard440)

HAnimSegment401.addChildren(HAnimSite437)
HAnimSite444 = x3d.HAnimSite()
HAnimSite444.setName("r_tarsal_distal_phalanx_4_tip")
HAnimSite444.setDEF("hanim_r_tarsal_distal_phalanx_4_tip")
TouchSensor445 = x3d.TouchSensor()
TouchSensor445.setDescription("HAnimSite r_tarsal_distal_phalanx_4_tip")

HAnimSite444.addChildren(TouchSensor445)
Shape446 = x3d.Shape()
Shape446.setUSE("HAnimSiteShape")

HAnimSite444.addChildren(Shape446)
Billboard447 = x3d.Billboard()
Shape448 = x3d.Shape()
Text449 = x3d.Text()
Text449.setString([""])
FontStyle450 = x3d.FontStyle()
FontStyle450.setSize(0.035)

Text449.setFontStyle(FontStyle450)

Shape448.setGeometry(Text449)

Billboard447.addChildren(Shape448)

HAnimSite444.addChildren(Billboard447)

HAnimSegment401.addChildren(HAnimSite444)
HAnimSite451 = x3d.HAnimSite()
HAnimSite451.setName("r_tarsal_distal_phalanx_5_tip")
HAnimSite451.setDEF("hanim_r_tarsal_distal_phalanx_5_tip")
TouchSensor452 = x3d.TouchSensor()
TouchSensor452.setDescription("HAnimSite r_tarsal_distal_phalanx_5_tip")

HAnimSite451.addChildren(TouchSensor452)
Shape453 = x3d.Shape()
Shape453.setUSE("HAnimSiteShape")

HAnimSite451.addChildren(Shape453)
Billboard454 = x3d.Billboard()
Shape455 = x3d.Shape()
Text456 = x3d.Text()
Text456.setString([""])
FontStyle457 = x3d.FontStyle()
FontStyle457.setSize(0.035)

Text456.setFontStyle(FontStyle457)

Shape455.setGeometry(Text456)

Billboard454.addChildren(Shape455)

HAnimSite451.addChildren(Billboard454)

HAnimSegment401.addChildren(HAnimSite451)

HAnimJoint400.addChildren(HAnimSegment401)
HAnimJoint458 = x3d.HAnimJoint()
HAnimJoint458.setName("r_tarsal_distal_interphalangeal_2")
HAnimJoint458.setDEF("hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint458.setCenter([-0.0841,0.0013,0.0216])
HAnimJoint458.setUlimit([0,0,0])
HAnimJoint458.setLlimit([0,0,0])

HAnimJoint400.addChildren(HAnimJoint458)

HAnimJoint391.addChildren(HAnimJoint400)

HAnimJoint368.addChildren(HAnimJoint391)

HAnimJoint338.addChildren(HAnimJoint368)

HAnimJoint301.addChildren(HAnimJoint338)

HAnimJoint60.addChildren(HAnimJoint301)

HAnimJoint47.addChildren(HAnimJoint60)
HAnimJoint459 = x3d.HAnimJoint()
HAnimJoint459.setName("vl5")
HAnimJoint459.setDEF("hanim_vl5")
HAnimJoint459.setCenter([0.0028,1.0568,-0.0776])
HAnimJoint459.setUlimit([0,0,0])
HAnimJoint459.setLlimit([0,0,0])
HAnimSegment460 = x3d.HAnimSegment()
HAnimSegment460.setName("l5")
HAnimSegment460.setDEF("hanim_l5")
Transform461 = x3d.Transform()
Transform461.setTranslation([0.0028,1.0568,-0.0776])
Transform462 = x3d.Transform()
#Empty Transform
Shape463 = x3d.Shape()
Shape463.setUSE("HAnimJointShape")

Transform462.addChild(Shape463)

Transform461.addChildren(Transform462)

HAnimSegment460.addChildren(Transform461)
Shape464 = x3d.Shape()
LineSet465 = x3d.LineSet()
LineSet465.setVertexCount([2])
Coordinate466 = x3d.Coordinate()
Coordinate466.setPoint([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787])

LineSet465.setCoord(Coordinate466)
#from vl5 to vl4 vertices 2
ColorRGBA467 = x3d.ColorRGBA()
ColorRGBA467.setUSE("HAnimSegmentLineColorRGBA")

LineSet465.setColor(ColorRGBA467)

Shape464.setGeometry(LineSet465)

HAnimSegment460.addChildren(Shape464)
HAnimSite468 = x3d.HAnimSite()
HAnimSite468.setName("navel")
HAnimSite468.setDEF("hanim_navel")
HAnimSite468.setTranslation([0.0069,1.0966,0.1017])
TouchSensor469 = x3d.TouchSensor()
TouchSensor469.setDescription("HAnimSite 84 navel")

HAnimSite468.addChildren(TouchSensor469)
Shape470 = x3d.Shape()
Shape470.setUSE("HAnimSiteShape")

HAnimSite468.addChildren(Shape470)
Billboard471 = x3d.Billboard()
Shape472 = x3d.Shape()
Text473 = x3d.Text()
Text473.setString(["84"])
FontStyle474 = x3d.FontStyle()
FontStyle474.setSize(0.035)

Text473.setFontStyle(FontStyle474)

Shape472.setGeometry(Text473)

Billboard471.addChildren(Shape472)

HAnimSite468.addChildren(Billboard471)

HAnimSegment460.addChildren(HAnimSite468)
HAnimSite475 = x3d.HAnimSite()
HAnimSite475.setName("waist_preferred_anterior")
HAnimSite475.setDEF("hanim_waist_preferred_anterior")
TouchSensor476 = x3d.TouchSensor()
TouchSensor476.setDescription("HAnimSite 26 waist_preferred_anterior")

HAnimSite475.addChildren(TouchSensor476)
Shape477 = x3d.Shape()
Shape477.setUSE("HAnimSiteShape")

HAnimSite475.addChildren(Shape477)
Billboard478 = x3d.Billboard()
Shape479 = x3d.Shape()
Text480 = x3d.Text()
Text480.setString(["26"])
FontStyle481 = x3d.FontStyle()
FontStyle481.setSize(0.035)

Text480.setFontStyle(FontStyle481)

Shape479.setGeometry(Text480)

Billboard478.addChildren(Shape479)

HAnimSite475.addChildren(Billboard478)

HAnimSegment460.addChildren(HAnimSite475)
HAnimSite482 = x3d.HAnimSite()
HAnimSite482.setName("waist_preferred_posterior")
HAnimSite482.setDEF("hanim_waist_preferred_posterior")
HAnimSite482.setTranslation([0.29,1.0915,-0.1091])
TouchSensor483 = x3d.TouchSensor()
TouchSensor483.setDescription("HAnimSite 27 waist_preferred_posterior")

HAnimSite482.addChildren(TouchSensor483)
Shape484 = x3d.Shape()
Shape484.setUSE("HAnimSiteShape")

HAnimSite482.addChildren(Shape484)
Billboard485 = x3d.Billboard()
Shape486 = x3d.Shape()
Text487 = x3d.Text()
Text487.setString(["27"])
FontStyle488 = x3d.FontStyle()
FontStyle488.setSize(0.035)

Text487.setFontStyle(FontStyle488)

Shape486.setGeometry(Text487)

Billboard485.addChildren(Shape486)

HAnimSite482.addChildren(Billboard485)

HAnimSegment460.addChildren(HAnimSite482)

HAnimJoint459.addChildren(HAnimSegment460)
HAnimJoint489 = x3d.HAnimJoint()
HAnimJoint489.setName("vl4")
HAnimJoint489.setDEF("hanim_vl4")
HAnimJoint489.setCenter([0.0035,1.0925,-0.0787])
HAnimJoint489.setUlimit([0,0,0])
HAnimJoint489.setLlimit([0,0,0])
HAnimSegment490 = x3d.HAnimSegment()
HAnimSegment490.setName("l4")
HAnimSegment490.setDEF("hanim_l4")
Transform491 = x3d.Transform()
Transform491.setTranslation([0.0035,1.0925,-0.0787])
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
Coordinate496.setPoint([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796])

LineSet495.setCoord(Coordinate496)
#from vl4 to vl3 vertices 2
ColorRGBA497 = x3d.ColorRGBA()
ColorRGBA497.setUSE("HAnimSegmentLineColorRGBA")

LineSet495.setColor(ColorRGBA497)

Shape494.setGeometry(LineSet495)

HAnimSegment490.addChildren(Shape494)

HAnimJoint489.addChildren(HAnimSegment490)
HAnimJoint498 = x3d.HAnimJoint()
HAnimJoint498.setName("vl3")
HAnimJoint498.setDEF("hanim_vl3")
HAnimJoint498.setCenter([0.0041,1.1276,-0.0796])
HAnimJoint498.setUlimit([0,0,0])
HAnimJoint498.setLlimit([0,0,0])
HAnimSegment499 = x3d.HAnimSegment()
HAnimSegment499.setName("l3")
HAnimSegment499.setDEF("hanim_l3")
Transform500 = x3d.Transform()
Transform500.setTranslation([0.0041,1.1276,-0.0796])
Transform501 = x3d.Transform()
#Empty Transform
Shape502 = x3d.Shape()
Shape502.setUSE("HAnimJointShape")

Transform501.addChild(Shape502)

Transform500.addChildren(Transform501)

HAnimSegment499.addChildren(Transform500)
Shape503 = x3d.Shape()
LineSet504 = x3d.LineSet()
LineSet504.setVertexCount([2])
Coordinate505 = x3d.Coordinate()
Coordinate505.setPoint([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08])

LineSet504.setCoord(Coordinate505)
#from vl3 to vl2 vertices 2
ColorRGBA506 = x3d.ColorRGBA()
ColorRGBA506.setUSE("HAnimSegmentLineColorRGBA")

LineSet504.setColor(ColorRGBA506)

Shape503.setGeometry(LineSet504)

HAnimSegment499.addChildren(Shape503)

HAnimJoint498.addChildren(HAnimSegment499)
HAnimJoint507 = x3d.HAnimJoint()
HAnimJoint507.setName("vl2")
HAnimJoint507.setDEF("hanim_vl2")
HAnimJoint507.setCenter([0.0045,1.1546,-0.08])
HAnimJoint507.setUlimit([0,0,0])
HAnimJoint507.setLlimit([0,0,0])
HAnimSegment508 = x3d.HAnimSegment()
HAnimSegment508.setName("l2")
HAnimSegment508.setDEF("hanim_l2")
Transform509 = x3d.Transform()
Transform509.setTranslation([0.0045,1.1546,-0.08])
Transform510 = x3d.Transform()
#Empty Transform
Shape511 = x3d.Shape()
Shape511.setUSE("HAnimJointShape")

Transform510.addChild(Shape511)

Transform509.addChildren(Transform510)

HAnimSegment508.addChildren(Transform509)
Shape512 = x3d.Shape()
LineSet513 = x3d.LineSet()
LineSet513.setVertexCount([2])
Coordinate514 = x3d.Coordinate()
Coordinate514.setPoint([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805])

LineSet513.setCoord(Coordinate514)
#from vl2 to vl1 vertices 2
ColorRGBA515 = x3d.ColorRGBA()
ColorRGBA515.setUSE("HAnimSegmentLineColorRGBA")

LineSet513.setColor(ColorRGBA515)

Shape512.setGeometry(LineSet513)

HAnimSegment508.addChildren(Shape512)
HAnimSite516 = x3d.HAnimSite()
HAnimSite516.setName("l_rib10")
HAnimSite516.setDEF("hanim_l_rib10")
HAnimSite516.setTranslation([0.0871,1.1925,0.0992])
TouchSensor517 = x3d.TouchSensor()
TouchSensor517.setDescription("HAnimSite 28 l_rib10")

HAnimSite516.addChildren(TouchSensor517)
Shape518 = x3d.Shape()
Shape518.setUSE("HAnimSiteShape")

HAnimSite516.addChildren(Shape518)
Billboard519 = x3d.Billboard()
Shape520 = x3d.Shape()
Text521 = x3d.Text()
Text521.setString(["28"])
FontStyle522 = x3d.FontStyle()
FontStyle522.setSize(0.035)

Text521.setFontStyle(FontStyle522)

Shape520.setGeometry(Text521)

Billboard519.addChildren(Shape520)

HAnimSite516.addChildren(Billboard519)

HAnimSegment508.addChildren(HAnimSite516)
HAnimSite523 = x3d.HAnimSite()
HAnimSite523.setName("r_rib10")
HAnimSite523.setDEF("hanim_r_rib10")
HAnimSite523.setTranslation([-0.0711,1.1941,0.1016])
TouchSensor524 = x3d.TouchSensor()
TouchSensor524.setDescription("HAnimSite 30 r_rib10")

HAnimSite523.addChildren(TouchSensor524)
Shape525 = x3d.Shape()
Shape525.setUSE("HAnimSiteShape")

HAnimSite523.addChildren(Shape525)
Billboard526 = x3d.Billboard()
Shape527 = x3d.Shape()
Text528 = x3d.Text()
Text528.setString(["30"])
FontStyle529 = x3d.FontStyle()
FontStyle529.setSize(0.035)

Text528.setFontStyle(FontStyle529)

Shape527.setGeometry(Text528)

Billboard526.addChildren(Shape527)

HAnimSite523.addChildren(Billboard526)

HAnimSegment508.addChildren(HAnimSite523)
HAnimSite530 = x3d.HAnimSite()
HAnimSite530.setName("spine_2_middle_back")
HAnimSite530.setDEF("hanim_spine_2_middle_back")
TouchSensor531 = x3d.TouchSensor()
TouchSensor531.setDescription("HAnimSite spine_2_middle_back")

HAnimSite530.addChildren(TouchSensor531)
Shape532 = x3d.Shape()
Shape532.setUSE("HAnimSiteShape")

HAnimSite530.addChildren(Shape532)
Billboard533 = x3d.Billboard()
Shape534 = x3d.Shape()
Text535 = x3d.Text()
Text535.setString([""])
FontStyle536 = x3d.FontStyle()
FontStyle536.setSize(0.035)

Text535.setFontStyle(FontStyle536)

Shape534.setGeometry(Text535)

Billboard533.addChildren(Shape534)

HAnimSite530.addChildren(Billboard533)

HAnimSegment508.addChildren(HAnimSite530)

HAnimJoint507.addChildren(HAnimSegment508)
HAnimJoint537 = x3d.HAnimJoint()
HAnimJoint537.setName("vl1")
HAnimJoint537.setDEF("hanim_vl1")
HAnimJoint537.setCenter([0.0048,1.1912,-0.0805])
HAnimJoint537.setUlimit([0,0,0])
HAnimJoint537.setLlimit([0,0,0])
HAnimSegment538 = x3d.HAnimSegment()
HAnimSegment538.setName("l1")
HAnimSegment538.setDEF("hanim_l1")
Transform539 = x3d.Transform()
Transform539.setTranslation([0.0048,1.1912,-0.0805])
Transform540 = x3d.Transform()
#Empty Transform
Shape541 = x3d.Shape()
Shape541.setUSE("HAnimJointShape")

Transform540.addChild(Shape541)

Transform539.addChildren(Transform540)

HAnimSegment538.addChildren(Transform539)
Shape542 = x3d.Shape()
LineSet543 = x3d.LineSet()
LineSet543.setVertexCount([2])
Coordinate544 = x3d.Coordinate()
Coordinate544.setPoint([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808])

LineSet543.setCoord(Coordinate544)
#from vl1 to vt12 vertices 2
ColorRGBA545 = x3d.ColorRGBA()
ColorRGBA545.setUSE("HAnimSegmentLineColorRGBA")

LineSet543.setColor(ColorRGBA545)

Shape542.setGeometry(LineSet543)

HAnimSegment538.addChildren(Shape542)

HAnimJoint537.addChildren(HAnimSegment538)
HAnimJoint546 = x3d.HAnimJoint()
HAnimJoint546.setName("vt12")
HAnimJoint546.setDEF("hanim_vt12")
HAnimJoint546.setCenter([0.0051,1.2278,-0.0808])
HAnimJoint546.setUlimit([0,0,0])
HAnimJoint546.setLlimit([0,0,0])
HAnimSegment547 = x3d.HAnimSegment()
HAnimSegment547.setName("t12")
HAnimSegment547.setDEF("hanim_t12")
Transform548 = x3d.Transform()
Transform548.setTranslation([0.0051,1.2278,-0.0808])
Transform549 = x3d.Transform()
#Empty Transform
Shape550 = x3d.Shape()
Shape550.setUSE("HAnimJointShape")

Transform549.addChild(Shape550)

Transform548.addChildren(Transform549)

HAnimSegment547.addChildren(Transform548)
Shape551 = x3d.Shape()
LineSet552 = x3d.LineSet()
LineSet552.setVertexCount([2])
Coordinate553 = x3d.Coordinate()
Coordinate553.setPoint([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081])

LineSet552.setCoord(Coordinate553)
#from vt12 to vt11 vertices 2
ColorRGBA554 = x3d.ColorRGBA()
ColorRGBA554.setUSE("HAnimSegmentLineColorRGBA")

LineSet552.setColor(ColorRGBA554)

Shape551.setGeometry(LineSet552)

HAnimSegment547.addChildren(Shape551)

HAnimJoint546.addChildren(HAnimSegment547)
HAnimJoint555 = x3d.HAnimJoint()
HAnimJoint555.setName("vt11")
HAnimJoint555.setDEF("hanim_vt11")
HAnimJoint555.setCenter([0.0053,1.2679,-0.081])
HAnimJoint555.setUlimit([0,0,0])
HAnimJoint555.setLlimit([0,0,0])
HAnimSegment556 = x3d.HAnimSegment()
HAnimSegment556.setName("t11")
HAnimSegment556.setDEF("hanim_t11")
Transform557 = x3d.Transform()
Transform557.setTranslation([0.0053,1.2679,-0.081])
Transform558 = x3d.Transform()
#Empty Transform
Shape559 = x3d.Shape()
Shape559.setUSE("HAnimJointShape")

Transform558.addChild(Shape559)

Transform557.addChildren(Transform558)

HAnimSegment556.addChildren(Transform557)
Shape560 = x3d.Shape()
LineSet561 = x3d.LineSet()
LineSet561.setVertexCount([2])
Coordinate562 = x3d.Coordinate()
Coordinate562.setPoint([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822])

LineSet561.setCoord(Coordinate562)
#from vt11 to vt10 vertices 2
ColorRGBA563 = x3d.ColorRGBA()
ColorRGBA563.setUSE("HAnimSegmentLineColorRGBA")

LineSet561.setColor(ColorRGBA563)

Shape560.setGeometry(LineSet561)

HAnimSegment556.addChildren(Shape560)

HAnimJoint555.addChildren(HAnimSegment556)
HAnimJoint564 = x3d.HAnimJoint()
HAnimJoint564.setName("vt10")
HAnimJoint564.setDEF("hanim_vt10")
HAnimJoint564.setCenter([0.0056,1.2848,-0.0822])
HAnimJoint564.setUlimit([0,0,0])
HAnimJoint564.setLlimit([0,0,0])
HAnimSegment565 = x3d.HAnimSegment()
HAnimSegment565.setName("t10")
HAnimSegment565.setDEF("hanim_t10")
Transform566 = x3d.Transform()
Transform566.setTranslation([0.0056,1.2848,-0.0822])
Transform567 = x3d.Transform()
#Empty Transform
Shape568 = x3d.Shape()
Shape568.setUSE("HAnimJointShape")

Transform567.addChild(Shape568)

Transform566.addChildren(Transform567)

HAnimSegment565.addChildren(Transform566)
Shape569 = x3d.Shape()
LineSet570 = x3d.LineSet()
LineSet570.setVertexCount([2])
Coordinate571 = x3d.Coordinate()
Coordinate571.setPoint([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838])

LineSet570.setCoord(Coordinate571)
#from vt10 to vt9 vertices 2
ColorRGBA572 = x3d.ColorRGBA()
ColorRGBA572.setUSE("HAnimSegmentLineColorRGBA")

LineSet570.setColor(ColorRGBA572)

Shape569.setGeometry(LineSet570)

HAnimSegment565.addChildren(Shape569)
HAnimSite573 = x3d.HAnimSite()
HAnimSite573.setName("substernale")
HAnimSite573.setDEF("hanim_substernale")
HAnimSite573.setTranslation([0.0085,1.2995,0.1147])
TouchSensor574 = x3d.TouchSensor()
TouchSensor574.setDescription("HAnimSite 13 substernale")

HAnimSite573.addChildren(TouchSensor574)
Shape575 = x3d.Shape()
Shape575.setUSE("HAnimSiteShape")

HAnimSite573.addChildren(Shape575)
Billboard576 = x3d.Billboard()
Shape577 = x3d.Shape()
Text578 = x3d.Text()
Text578.setString(["13"])
FontStyle579 = x3d.FontStyle()
FontStyle579.setSize(0.035)

Text578.setFontStyle(FontStyle579)

Shape577.setGeometry(Text578)

Billboard576.addChildren(Shape577)

HAnimSite573.addChildren(Billboard576)

HAnimSegment565.addChildren(HAnimSite573)

HAnimJoint564.addChildren(HAnimSegment565)
HAnimJoint580 = x3d.HAnimJoint()
HAnimJoint580.setName("vt9")
HAnimJoint580.setDEF("hanim_vt9")
HAnimJoint580.setCenter([0.0057,1.3126,-0.0838])
HAnimJoint580.setUlimit([0,0,0])
HAnimJoint580.setLlimit([0,0,0])
HAnimSegment581 = x3d.HAnimSegment()
HAnimSegment581.setName("t9")
HAnimSegment581.setDEF("hanim_t9")
Transform582 = x3d.Transform()
Transform582.setTranslation([0.0057,1.3126,-0.0838])
Transform583 = x3d.Transform()
#Empty Transform
Shape584 = x3d.Shape()
Shape584.setUSE("HAnimJointShape")

Transform583.addChild(Shape584)

Transform582.addChildren(Transform583)

HAnimSegment581.addChildren(Transform582)
Shape585 = x3d.Shape()
LineSet586 = x3d.LineSet()
LineSet586.setVertexCount([2])
Coordinate587 = x3d.Coordinate()
Coordinate587.setPoint([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845])

LineSet586.setCoord(Coordinate587)
#from vt9 to vt8 vertices 2
ColorRGBA588 = x3d.ColorRGBA()
ColorRGBA588.setUSE("HAnimSegmentLineColorRGBA")

LineSet586.setColor(ColorRGBA588)

Shape585.setGeometry(LineSet586)

HAnimSegment581.addChildren(Shape585)
HAnimSite589 = x3d.HAnimSite()
HAnimSite589.setName("l_thelion")
HAnimSite589.setDEF("hanim_l_thelion")
HAnimSite589.setTranslation([0.0918,1.3382,0.1192])
TouchSensor590 = x3d.TouchSensor()
TouchSensor590.setDescription("HAnimSite 29 l_thelion")

HAnimSite589.addChildren(TouchSensor590)
Shape591 = x3d.Shape()
Shape591.setUSE("HAnimSiteShape")

HAnimSite589.addChildren(Shape591)
Billboard592 = x3d.Billboard()
Shape593 = x3d.Shape()
Text594 = x3d.Text()
Text594.setString(["29"])
FontStyle595 = x3d.FontStyle()
FontStyle595.setSize(0.035)

Text594.setFontStyle(FontStyle595)

Shape593.setGeometry(Text594)

Billboard592.addChildren(Shape593)

HAnimSite589.addChildren(Billboard592)

HAnimSegment581.addChildren(HAnimSite589)
HAnimSite596 = x3d.HAnimSite()
HAnimSite596.setName("r_thelion")
HAnimSite596.setDEF("hanim_r_thelion")
HAnimSite596.setTranslation([-0.0736,1.3385,0.1217])
TouchSensor597 = x3d.TouchSensor()
TouchSensor597.setDescription("HAnimSite 31 r_thelion")

HAnimSite596.addChildren(TouchSensor597)
Shape598 = x3d.Shape()
Shape598.setUSE("HAnimSiteShape")

HAnimSite596.addChildren(Shape598)
Billboard599 = x3d.Billboard()
Shape600 = x3d.Shape()
Text601 = x3d.Text()
Text601.setString(["31"])
FontStyle602 = x3d.FontStyle()
FontStyle602.setSize(0.035)

Text601.setFontStyle(FontStyle602)

Shape600.setGeometry(Text601)

Billboard599.addChildren(Shape600)

HAnimSite596.addChildren(Billboard599)

HAnimSegment581.addChildren(HAnimSite596)

HAnimJoint580.addChildren(HAnimSegment581)
HAnimJoint603 = x3d.HAnimJoint()
HAnimJoint603.setName("vt8")
HAnimJoint603.setDEF("hanim_vt8")
HAnimJoint603.setCenter([0.0057,1.3382,-0.0845])
HAnimJoint603.setUlimit([0,0,0])
HAnimJoint603.setLlimit([0,0,0])
HAnimSegment604 = x3d.HAnimSegment()
HAnimSegment604.setName("t8")
HAnimSegment604.setDEF("hanim_t8")
Transform605 = x3d.Transform()
Transform605.setTranslation([0.0057,1.3382,-0.0845])
Transform606 = x3d.Transform()
#Empty Transform
Shape607 = x3d.Shape()
Shape607.setUSE("HAnimJointShape")

Transform606.addChild(Shape607)

Transform605.addChildren(Transform606)

HAnimSegment604.addChildren(Transform605)
Shape608 = x3d.Shape()
LineSet609 = x3d.LineSet()
LineSet609.setVertexCount([2])
Coordinate610 = x3d.Coordinate()
Coordinate610.setPoint([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833])

LineSet609.setCoord(Coordinate610)
#from vt8 to vt7 vertices 2
ColorRGBA611 = x3d.ColorRGBA()
ColorRGBA611.setUSE("HAnimSegmentLineColorRGBA")

LineSet609.setColor(ColorRGBA611)

Shape608.setGeometry(LineSet609)

HAnimSegment604.addChildren(Shape608)

HAnimJoint603.addChildren(HAnimSegment604)
HAnimJoint612 = x3d.HAnimJoint()
HAnimJoint612.setName("vt7")
HAnimJoint612.setDEF("hanim_vt7")
HAnimJoint612.setCenter([0.0058,1.3625,-0.0833])
HAnimJoint612.setUlimit([0,0,0])
HAnimJoint612.setLlimit([0,0,0])
HAnimSegment613 = x3d.HAnimSegment()
HAnimSegment613.setName("t7")
HAnimSegment613.setDEF("hanim_t7")
Transform614 = x3d.Transform()
Transform614.setTranslation([0.0058,1.3625,-0.0833])
Transform615 = x3d.Transform()
#Empty Transform
Shape616 = x3d.Shape()
Shape616.setUSE("HAnimJointShape")

Transform615.addChild(Shape616)

Transform614.addChildren(Transform615)

HAnimSegment613.addChildren(Transform614)
Shape617 = x3d.Shape()
LineSet618 = x3d.LineSet()
LineSet618.setVertexCount([2])
Coordinate619 = x3d.Coordinate()
Coordinate619.setPoint([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08])

LineSet618.setCoord(Coordinate619)
#from vt7 to vt6 vertices 2
ColorRGBA620 = x3d.ColorRGBA()
ColorRGBA620.setUSE("HAnimSegmentLineColorRGBA")

LineSet618.setColor(ColorRGBA620)

Shape617.setGeometry(LineSet618)

HAnimSegment613.addChildren(Shape617)

HAnimJoint612.addChildren(HAnimSegment613)
HAnimJoint621 = x3d.HAnimJoint()
HAnimJoint621.setName("vt6")
HAnimJoint621.setDEF("hanim_vt6")
HAnimJoint621.setCenter([0.0059,1.3866,-0.08])
HAnimJoint621.setUlimit([0,0,0])
HAnimJoint621.setLlimit([0,0,0])
HAnimSegment622 = x3d.HAnimSegment()
HAnimSegment622.setName("t6")
HAnimSegment622.setDEF("hanim_t6")
Transform623 = x3d.Transform()
Transform623.setTranslation([0.0059,1.3866,-0.08])
Transform624 = x3d.Transform()
#Empty Transform
Shape625 = x3d.Shape()
Shape625.setUSE("HAnimJointShape")

Transform624.addChild(Shape625)

Transform623.addChildren(Transform624)

HAnimSegment622.addChildren(Transform623)
Shape626 = x3d.Shape()
LineSet627 = x3d.LineSet()
LineSet627.setVertexCount([2])
Coordinate628 = x3d.Coordinate()
Coordinate628.setPoint([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745])

LineSet627.setCoord(Coordinate628)
#from vt6 to vt5 vertices 2
ColorRGBA629 = x3d.ColorRGBA()
ColorRGBA629.setUSE("HAnimSegmentLineColorRGBA")

LineSet627.setColor(ColorRGBA629)

Shape626.setGeometry(LineSet627)

HAnimSegment622.addChildren(Shape626)
HAnimSite630 = x3d.HAnimSite()
HAnimSite630.setName("l_chest_midsagittal_plane")
HAnimSite630.setDEF("hanim_l_chest_midsagittal_plane")
TouchSensor631 = x3d.TouchSensor()
TouchSensor631.setDescription("HAnimSite 94 l_chest_midsagittal_plane")

HAnimSite630.addChildren(TouchSensor631)
Shape632 = x3d.Shape()
Shape632.setUSE("HAnimSiteShape")

HAnimSite630.addChildren(Shape632)
Billboard633 = x3d.Billboard()
Shape634 = x3d.Shape()
Text635 = x3d.Text()
Text635.setString(["94"])
FontStyle636 = x3d.FontStyle()
FontStyle636.setSize(0.035)

Text635.setFontStyle(FontStyle636)

Shape634.setGeometry(Text635)

Billboard633.addChildren(Shape634)

HAnimSite630.addChildren(Billboard633)

HAnimSegment622.addChildren(HAnimSite630)
HAnimSite637 = x3d.HAnimSite()
HAnimSite637.setName("mesosternale")
HAnimSite637.setDEF("hanim_mesosternale")
TouchSensor638 = x3d.TouchSensor()
TouchSensor638.setDescription("HAnimSite 88 mesosternale")

HAnimSite637.addChildren(TouchSensor638)
Shape639 = x3d.Shape()
Shape639.setUSE("HAnimSiteShape")

HAnimSite637.addChildren(Shape639)
Billboard640 = x3d.Billboard()
Shape641 = x3d.Shape()
Text642 = x3d.Text()
Text642.setString(["88"])
FontStyle643 = x3d.FontStyle()
FontStyle643.setSize(0.035)

Text642.setFontStyle(FontStyle643)

Shape641.setGeometry(Text642)

Billboard640.addChildren(Shape641)

HAnimSite637.addChildren(Billboard640)

HAnimSegment622.addChildren(HAnimSite637)
HAnimSite644 = x3d.HAnimSite()
HAnimSite644.setName("r_chest_midsagittal_plane")
HAnimSite644.setDEF("hanim_r_chest_midsagittal_plane")
TouchSensor645 = x3d.TouchSensor()
TouchSensor645.setDescription("HAnimSite 95 r_chest_midsagittal_plane")

HAnimSite644.addChildren(TouchSensor645)
Shape646 = x3d.Shape()
Shape646.setUSE("HAnimSiteShape")

HAnimSite644.addChildren(Shape646)
Billboard647 = x3d.Billboard()
Shape648 = x3d.Shape()
Text649 = x3d.Text()
Text649.setString(["95"])
FontStyle650 = x3d.FontStyle()
FontStyle650.setSize(0.035)

Text649.setFontStyle(FontStyle650)

Shape648.setGeometry(Text649)

Billboard647.addChildren(Shape648)

HAnimSite644.addChildren(Billboard647)

HAnimSegment622.addChildren(HAnimSite644)
HAnimSite651 = x3d.HAnimSite()
HAnimSite651.setName("rear_center_midsagittal_plane")
HAnimSite651.setDEF("hanim_rear_center_midsagittal_plane")
TouchSensor652 = x3d.TouchSensor()
TouchSensor652.setDescription("HAnimSite 92 rear_center_midsagittal_plane")

HAnimSite651.addChildren(TouchSensor652)
Shape653 = x3d.Shape()
Shape653.setUSE("HAnimSiteShape")

HAnimSite651.addChildren(Shape653)
Billboard654 = x3d.Billboard()
Shape655 = x3d.Shape()
Text656 = x3d.Text()
Text656.setString(["92"])
FontStyle657 = x3d.FontStyle()
FontStyle657.setSize(0.035)

Text656.setFontStyle(FontStyle657)

Shape655.setGeometry(Text656)

Billboard654.addChildren(Shape655)

HAnimSite651.addChildren(Billboard654)

HAnimSegment622.addChildren(HAnimSite651)

HAnimJoint621.addChildren(HAnimSegment622)
HAnimJoint658 = x3d.HAnimJoint()
HAnimJoint658.setName("vt5")
HAnimJoint658.setDEF("hanim_vt5")
HAnimJoint658.setCenter([0.006,1.4102,-0.0745])
HAnimJoint658.setUlimit([0,0,0])
HAnimJoint658.setLlimit([0,0,0])
HAnimSegment659 = x3d.HAnimSegment()
HAnimSegment659.setName("t5")
HAnimSegment659.setDEF("hanim_t5")
Transform660 = x3d.Transform()
Transform660.setTranslation([0.006,1.4102,-0.0745])
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
Coordinate665.setPoint([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675])

LineSet664.setCoord(Coordinate665)
#from vt5 to vt4 vertices 2
ColorRGBA666 = x3d.ColorRGBA()
ColorRGBA666.setUSE("HAnimSegmentLineColorRGBA")

LineSet664.setColor(ColorRGBA666)

Shape663.setGeometry(LineSet664)

HAnimSegment659.addChildren(Shape663)
HAnimSite667 = x3d.HAnimSite()
HAnimSite667.setName("spine_1_middle_back")
HAnimSite667.setDEF("hanim_spine_1_middle_back")
TouchSensor668 = x3d.TouchSensor()
TouchSensor668.setDescription("HAnimSite 24 spine_1_middle_back")

HAnimSite667.addChildren(TouchSensor668)
Shape669 = x3d.Shape()
Shape669.setUSE("HAnimSiteShape")

HAnimSite667.addChildren(Shape669)
Billboard670 = x3d.Billboard()
Shape671 = x3d.Shape()
Text672 = x3d.Text()
Text672.setString(["24"])
FontStyle673 = x3d.FontStyle()
FontStyle673.setSize(0.035)

Text672.setFontStyle(FontStyle673)

Shape671.setGeometry(Text672)

Billboard670.addChildren(Shape671)

HAnimSite667.addChildren(Billboard670)

HAnimSegment659.addChildren(HAnimSite667)

HAnimJoint658.addChildren(HAnimSegment659)
HAnimJoint674 = x3d.HAnimJoint()
HAnimJoint674.setName("vt4")
HAnimJoint674.setDEF("hanim_vt4")
HAnimJoint674.setCenter([0.0061,1.432,-0.0675])
HAnimJoint674.setUlimit([0,0,0])
HAnimJoint674.setLlimit([0,0,0])
HAnimSegment675 = x3d.HAnimSegment()
HAnimSegment675.setName("t4")
HAnimSegment675.setDEF("hanim_t4")
Transform676 = x3d.Transform()
Transform676.setTranslation([0.0061,1.432,-0.0675])
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
Coordinate681.setPoint([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057])

LineSet680.setCoord(Coordinate681)
#from vt4 to vt3 vertices 2
ColorRGBA682 = x3d.ColorRGBA()
ColorRGBA682.setUSE("HAnimSegmentLineColorRGBA")

LineSet680.setColor(ColorRGBA682)

Shape679.setGeometry(LineSet680)

HAnimSegment675.addChildren(Shape679)

HAnimJoint674.addChildren(HAnimSegment675)
HAnimJoint683 = x3d.HAnimJoint()
HAnimJoint683.setName("vt3")
HAnimJoint683.setDEF("hanim_vt3")
HAnimJoint683.setCenter([0.0062,1.4583,-0.057])
HAnimJoint683.setUlimit([0,0,0])
HAnimJoint683.setLlimit([0,0,0])
HAnimSegment684 = x3d.HAnimSegment()
HAnimSegment684.setName("t3")
HAnimSegment684.setDEF("hanim_t3")
Transform685 = x3d.Transform()
Transform685.setTranslation([0.0062,1.4583,-0.057])
Transform686 = x3d.Transform()
#Empty Transform
Shape687 = x3d.Shape()
Shape687.setUSE("HAnimJointShape")

Transform686.addChild(Shape687)

Transform685.addChildren(Transform686)

HAnimSegment684.addChildren(Transform685)
Shape688 = x3d.Shape()
LineSet689 = x3d.LineSet()
LineSet689.setVertexCount([2])
Coordinate690 = x3d.Coordinate()
Coordinate690.setPoint([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484])

LineSet689.setCoord(Coordinate690)
#from vt3 to vt2 vertices 2
ColorRGBA691 = x3d.ColorRGBA()
ColorRGBA691.setUSE("HAnimSegmentLineColorRGBA")

LineSet689.setColor(ColorRGBA691)

Shape688.setGeometry(LineSet689)

HAnimSegment684.addChildren(Shape688)

HAnimJoint683.addChildren(HAnimSegment684)
HAnimJoint692 = x3d.HAnimJoint()
HAnimJoint692.setName("vt2")
HAnimJoint692.setDEF("hanim_vt2")
HAnimJoint692.setCenter([0.0063,1.4761,-0.0484])
HAnimJoint692.setUlimit([0,0,0])
HAnimJoint692.setLlimit([0,0,0])
HAnimSegment693 = x3d.HAnimSegment()
HAnimSegment693.setName("t2")
HAnimSegment693.setDEF("hanim_t2")
Transform694 = x3d.Transform()
Transform694.setTranslation([0.0063,1.4761,-0.0484])
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
Coordinate699.setPoint([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387])

LineSet698.setCoord(Coordinate699)
#from vt2 to vt1 vertices 2
ColorRGBA700 = x3d.ColorRGBA()
ColorRGBA700.setUSE("HAnimSegmentLineColorRGBA")

LineSet698.setColor(ColorRGBA700)

Shape697.setGeometry(LineSet698)

HAnimSegment693.addChildren(Shape697)

HAnimJoint692.addChildren(HAnimSegment693)
HAnimJoint701 = x3d.HAnimJoint()
HAnimJoint701.setName("vt1")
HAnimJoint701.setDEF("hanim_vt1")
HAnimJoint701.setCenter([0.0065,1.4951,-0.0387])
HAnimJoint701.setUlimit([0,0,0])
HAnimJoint701.setLlimit([0,0,0])
HAnimSegment702 = x3d.HAnimSegment()
HAnimSegment702.setName("t1")
HAnimSegment702.setDEF("hanim_t1")
Transform703 = x3d.Transform()
Transform703.setTranslation([0.0065,1.4951,-0.0387])
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
Coordinate708.setPoint([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301])

LineSet707.setCoord(Coordinate708)
#from vt1 to vc7 vertices 2
ColorRGBA709 = x3d.ColorRGBA()
ColorRGBA709.setUSE("HAnimSegmentLineColorRGBA")

LineSet707.setColor(ColorRGBA709)

Shape706.setGeometry(LineSet707)

HAnimSegment702.addChildren(Shape706)
HAnimSite710 = x3d.HAnimSite()
HAnimSite710.setName("cervicale")
HAnimSite710.setDEF("hanim_cervicale")
HAnimSite710.setTranslation([0.0064,1.52,-0.0815])
TouchSensor711 = x3d.TouchSensor()
TouchSensor711.setDescription("HAnimSite 10 cervicale")

HAnimSite710.addChildren(TouchSensor711)
Shape712 = x3d.Shape()
Shape712.setUSE("HAnimSiteShape")

HAnimSite710.addChildren(Shape712)
Billboard713 = x3d.Billboard()
Shape714 = x3d.Shape()
Text715 = x3d.Text()
Text715.setString(["10"])
FontStyle716 = x3d.FontStyle()
FontStyle716.setSize(0.035)

Text715.setFontStyle(FontStyle716)

Shape714.setGeometry(Text715)

Billboard713.addChildren(Shape714)

HAnimSite710.addChildren(Billboard713)

HAnimSegment702.addChildren(HAnimSite710)
HAnimSite717 = x3d.HAnimSite()
HAnimSite717.setName("suprasternale")
HAnimSite717.setDEF("hanim_suprasternale")
HAnimSite717.setTranslation([0.0084,1.4714,0.0551])
TouchSensor718 = x3d.TouchSensor()
TouchSensor718.setDescription("HAnimSite 12 suprasternale")

HAnimSite717.addChildren(TouchSensor718)
Shape719 = x3d.Shape()
Shape719.setUSE("HAnimSiteShape")

HAnimSite717.addChildren(Shape719)
Billboard720 = x3d.Billboard()
Shape721 = x3d.Shape()
Text722 = x3d.Text()
Text722.setString(["12"])
FontStyle723 = x3d.FontStyle()
FontStyle723.setSize(0.035)

Text722.setFontStyle(FontStyle723)

Shape721.setGeometry(Text722)

Billboard720.addChildren(Shape721)

HAnimSite717.addChildren(Billboard720)

HAnimSegment702.addChildren(HAnimSite717)
Shape724 = x3d.Shape()
LineSet725 = x3d.LineSet()
LineSet725.setVertexCount([2])
Coordinate726 = x3d.Coordinate()
Coordinate726.setPoint([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353])

LineSet725.setCoord(Coordinate726)
#from vt1 to l_sternoclavicular vertices 2
ColorRGBA727 = x3d.ColorRGBA()
ColorRGBA727.setUSE("HAnimSegmentLineColorRGBA")

LineSet725.setColor(ColorRGBA727)

Shape724.setGeometry(LineSet725)

HAnimSegment702.addChildren(Shape724)
Shape728 = x3d.Shape()
LineSet729 = x3d.LineSet()
LineSet729.setVertexCount([2])
Coordinate730 = x3d.Coordinate()
Coordinate730.setPoint([0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033])

LineSet729.setCoord(Coordinate730)
#from vt1 to r_sternoclavicular vertices 2
ColorRGBA731 = x3d.ColorRGBA()
ColorRGBA731.setUSE("HAnimSegmentLineColorRGBA")

LineSet729.setColor(ColorRGBA731)

Shape728.setGeometry(LineSet729)

HAnimSegment702.addChildren(Shape728)

HAnimJoint701.addChildren(HAnimSegment702)
HAnimJoint732 = x3d.HAnimJoint()
HAnimJoint732.setName("vc7")
HAnimJoint732.setDEF("hanim_vc7")
HAnimJoint732.setCenter([0.0066,1.5132,-0.0301])
HAnimJoint732.setUlimit([0,0,0])
HAnimJoint732.setLlimit([0,0,0])
HAnimSegment733 = x3d.HAnimSegment()
HAnimSegment733.setName("c7")
HAnimSegment733.setDEF("hanim_c7")
Transform734 = x3d.Transform()
Transform734.setTranslation([0.0066,1.5132,-0.0301])
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
Coordinate739.setPoint([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143])

LineSet738.setCoord(Coordinate739)
#from vc7 to vc6 vertices 2
ColorRGBA740 = x3d.ColorRGBA()
ColorRGBA740.setUSE("HAnimSegmentLineColorRGBA")

LineSet738.setColor(ColorRGBA740)

Shape737.setGeometry(LineSet738)

HAnimSegment733.addChildren(Shape737)
HAnimSite741 = x3d.HAnimSite()
HAnimSite741.setName("l_neck_base")
HAnimSite741.setDEF("hanim_l_neck_base")
HAnimSite741.setTranslation([0.0646,1.5141,-0.038])
TouchSensor742 = x3d.TouchSensor()
TouchSensor742.setDescription("HAnimSite 82 l_neck_base")

HAnimSite741.addChildren(TouchSensor742)
Shape743 = x3d.Shape()
Shape743.setUSE("HAnimSiteShape")

HAnimSite741.addChildren(Shape743)
Billboard744 = x3d.Billboard()
Shape745 = x3d.Shape()
Text746 = x3d.Text()
Text746.setString(["82"])
FontStyle747 = x3d.FontStyle()
FontStyle747.setSize(0.035)

Text746.setFontStyle(FontStyle747)

Shape745.setGeometry(Text746)

Billboard744.addChildren(Shape745)

HAnimSite741.addChildren(Billboard744)

HAnimSegment733.addChildren(HAnimSite741)
HAnimSite748 = x3d.HAnimSite()
HAnimSite748.setName("r_neck_base")
HAnimSite748.setDEF("hanim_r_neck_base")
HAnimSite748.setTranslation([-0.0419,1.5149,-0.022])
TouchSensor749 = x3d.TouchSensor()
TouchSensor749.setDescription("HAnimSite 83 r_neck_base")

HAnimSite748.addChildren(TouchSensor749)
Shape750 = x3d.Shape()
Shape750.setUSE("HAnimSiteShape")

HAnimSite748.addChildren(Shape750)
Billboard751 = x3d.Billboard()
Shape752 = x3d.Shape()
Text753 = x3d.Text()
Text753.setString(["83"])
FontStyle754 = x3d.FontStyle()
FontStyle754.setSize(0.035)

Text753.setFontStyle(FontStyle754)

Shape752.setGeometry(Text753)

Billboard751.addChildren(Shape752)

HAnimSite748.addChildren(Billboard751)

HAnimSegment733.addChildren(HAnimSite748)

HAnimJoint732.addChildren(HAnimSegment733)
HAnimJoint755 = x3d.HAnimJoint()
HAnimJoint755.setName("vc6")
HAnimJoint755.setDEF("hanim_vc6")
HAnimJoint755.setCenter([0.0066,1.5357,-0.0143])
HAnimJoint755.setUlimit([0,0,0])
HAnimJoint755.setLlimit([0,0,0])
HAnimSegment756 = x3d.HAnimSegment()
HAnimSegment756.setName("c6")
HAnimSegment756.setDEF("hanim_c6")
Transform757 = x3d.Transform()
Transform757.setTranslation([0.0066,1.5357,-0.0143])
Transform758 = x3d.Transform()
#Empty Transform
Shape759 = x3d.Shape()
Shape759.setUSE("HAnimJointShape")

Transform758.addChild(Shape759)

Transform757.addChildren(Transform758)

HAnimSegment756.addChildren(Transform757)
Shape760 = x3d.Shape()
LineSet761 = x3d.LineSet()
LineSet761.setVertexCount([2])
Coordinate762 = x3d.Coordinate()
Coordinate762.setPoint([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082])

LineSet761.setCoord(Coordinate762)
#from vc6 to vc5 vertices 2
ColorRGBA763 = x3d.ColorRGBA()
ColorRGBA763.setUSE("HAnimSegmentLineColorRGBA")

LineSet761.setColor(ColorRGBA763)

Shape760.setGeometry(LineSet761)

HAnimSegment756.addChildren(Shape760)

HAnimJoint755.addChildren(HAnimSegment756)
HAnimJoint764 = x3d.HAnimJoint()
HAnimJoint764.setName("vc5")
HAnimJoint764.setDEF("hanim_vc5")
HAnimJoint764.setCenter([0.0066,1.552,-0.0082])
HAnimJoint764.setUlimit([0,0,0])
HAnimJoint764.setLlimit([0,0,0])
HAnimSegment765 = x3d.HAnimSegment()
HAnimSegment765.setName("c5")
HAnimSegment765.setDEF("hanim_c5")
Transform766 = x3d.Transform()
Transform766.setTranslation([0.0066,1.552,-0.0082])
Transform767 = x3d.Transform()
#Empty Transform
Shape768 = x3d.Shape()
Shape768.setUSE("HAnimJointShape")

Transform767.addChild(Shape768)

Transform766.addChildren(Transform767)

HAnimSegment765.addChildren(Transform766)
Shape769 = x3d.Shape()
LineSet770 = x3d.LineSet()
LineSet770.setVertexCount([2])
Coordinate771 = x3d.Coordinate()
Coordinate771.setPoint([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084])

LineSet770.setCoord(Coordinate771)
#from vc5 to vc4 vertices 2
ColorRGBA772 = x3d.ColorRGBA()
ColorRGBA772.setUSE("HAnimSegmentLineColorRGBA")

LineSet770.setColor(ColorRGBA772)

Shape769.setGeometry(LineSet770)

HAnimSegment765.addChildren(Shape769)

HAnimJoint764.addChildren(HAnimSegment765)
HAnimJoint773 = x3d.HAnimJoint()
HAnimJoint773.setName("vc4")
HAnimJoint773.setDEF("hanim_vc4")
HAnimJoint773.setCenter([0.0066,1.5662,-0.0084])
HAnimJoint773.setUlimit([0,0,0])
HAnimJoint773.setLlimit([0,0,0])
HAnimSegment774 = x3d.HAnimSegment()
HAnimSegment774.setName("c4")
HAnimSegment774.setDEF("hanim_c4")
Transform775 = x3d.Transform()
Transform775.setTranslation([0.0066,1.5662,-0.0084])
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
Coordinate780.setPoint([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103])

LineSet779.setCoord(Coordinate780)
#from vc4 to vc3 vertices 2
ColorRGBA781 = x3d.ColorRGBA()
ColorRGBA781.setUSE("HAnimSegmentLineColorRGBA")

LineSet779.setColor(ColorRGBA781)

Shape778.setGeometry(LineSet779)

HAnimSegment774.addChildren(Shape778)

HAnimJoint773.addChildren(HAnimSegment774)
HAnimJoint782 = x3d.HAnimJoint()
HAnimJoint782.setName("vc3")
HAnimJoint782.setDEF("hanim_vc3")
HAnimJoint782.setCenter([0.0066,1.58,-0.0103])
HAnimJoint782.setUlimit([0,0,0])
HAnimJoint782.setLlimit([0,0,0])
HAnimSegment783 = x3d.HAnimSegment()
HAnimSegment783.setName("c3")
HAnimSegment783.setDEF("hanim_c3")
Transform784 = x3d.Transform()
Transform784.setTranslation([0.0066,1.58,-0.0103])
Transform785 = x3d.Transform()
#Empty Transform
Shape786 = x3d.Shape()
Shape786.setUSE("HAnimJointShape")

Transform785.addChild(Shape786)

Transform784.addChildren(Transform785)

HAnimSegment783.addChildren(Transform784)
Shape787 = x3d.Shape()
LineSet788 = x3d.LineSet()
LineSet788.setVertexCount([2])
Coordinate789 = x3d.Coordinate()
Coordinate789.setPoint([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103])

LineSet788.setCoord(Coordinate789)
#from vc3 to vc2 vertices 2
ColorRGBA790 = x3d.ColorRGBA()
ColorRGBA790.setUSE("HAnimSegmentLineColorRGBA")

LineSet788.setColor(ColorRGBA790)

Shape787.setGeometry(LineSet788)

HAnimSegment783.addChildren(Shape787)

HAnimJoint782.addChildren(HAnimSegment783)
HAnimJoint791 = x3d.HAnimJoint()
HAnimJoint791.setName("vc2")
HAnimJoint791.setDEF("hanim_vc2")
HAnimJoint791.setCenter([0.0066,1.5928,-0.0103])
HAnimJoint791.setUlimit([0,0,0])
HAnimJoint791.setLlimit([0,0,0])
HAnimSegment792 = x3d.HAnimSegment()
HAnimSegment792.setName("c2")
HAnimSegment792.setDEF("hanim_c2")
Transform793 = x3d.Transform()
Transform793.setTranslation([0.0066,1.5928,-0.0103])
Transform794 = x3d.Transform()
#Empty Transform
Shape795 = x3d.Shape()
Shape795.setUSE("HAnimJointShape")

Transform794.addChild(Shape795)

Transform793.addChildren(Transform794)

HAnimSegment792.addChildren(Transform793)
Shape796 = x3d.Shape()
LineSet797 = x3d.LineSet()
LineSet797.setVertexCount([2])
Coordinate798 = x3d.Coordinate()
Coordinate798.setPoint([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034])

LineSet797.setCoord(Coordinate798)
#from vc2 to vc1 vertices 2
ColorRGBA799 = x3d.ColorRGBA()
ColorRGBA799.setUSE("HAnimSegmentLineColorRGBA")

LineSet797.setColor(ColorRGBA799)

Shape796.setGeometry(LineSet797)

HAnimSegment792.addChildren(Shape796)
HAnimSite800 = x3d.HAnimSite()
HAnimSite800.setName("adams_apple")
HAnimSite800.setDEF("hanim_adams_apple")
TouchSensor801 = x3d.TouchSensor()
TouchSensor801.setDescription("HAnimSite 11 adams_apple")

HAnimSite800.addChildren(TouchSensor801)
Shape802 = x3d.Shape()
Shape802.setUSE("HAnimSiteShape")

HAnimSite800.addChildren(Shape802)
Billboard803 = x3d.Billboard()
Shape804 = x3d.Shape()
Text805 = x3d.Text()
Text805.setString(["11"])
FontStyle806 = x3d.FontStyle()
FontStyle806.setSize(0.035)

Text805.setFontStyle(FontStyle806)

Shape804.setGeometry(Text805)

Billboard803.addChildren(Shape804)

HAnimSite800.addChildren(Billboard803)

HAnimSegment792.addChildren(HAnimSite800)

HAnimJoint791.addChildren(HAnimSegment792)
HAnimJoint807 = x3d.HAnimJoint()
HAnimJoint807.setName("vc1")
HAnimJoint807.setDEF("hanim_vc1")
HAnimJoint807.setCenter([0.0066,1.6144,-0.0034])
HAnimJoint807.setUlimit([0,0,0])
HAnimJoint807.setLlimit([0,0,0])
HAnimSegment808 = x3d.HAnimSegment()
HAnimSegment808.setName("c1")
HAnimSegment808.setDEF("hanim_c1")
Transform809 = x3d.Transform()
Transform809.setTranslation([0.0066,1.6144,-0.0034])
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
Coordinate814.setPoint([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236])

LineSet813.setCoord(Coordinate814)
#from vc1 to skullbase vertices 2
ColorRGBA815 = x3d.ColorRGBA()
ColorRGBA815.setUSE("HAnimSegmentLineColorRGBA")

LineSet813.setColor(ColorRGBA815)

Shape812.setGeometry(LineSet813)

HAnimSegment808.addChildren(Shape812)

HAnimJoint807.addChildren(HAnimSegment808)
HAnimJoint816 = x3d.HAnimJoint()
HAnimJoint816.setName("skullbase")
HAnimJoint816.setDEF("hanim_skullbase")
HAnimJoint816.setCenter([0.0044,1.6209,0.0236])
HAnimJoint816.setUlimit([0,0,0])
HAnimJoint816.setLlimit([0,0,0])
HAnimSegment817 = x3d.HAnimSegment()
HAnimSegment817.setName("skull")
HAnimSegment817.setDEF("hanim_skull")
Transform818 = x3d.Transform()
Transform818.setTranslation([0.0044,1.6209,0.0236])
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
Coordinate823.setPoint([0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689])

LineSet822.setCoord(Coordinate823)
#from skullbase to l_eyelid_joint vertices 2
ColorRGBA824 = x3d.ColorRGBA()
ColorRGBA824.setUSE("HAnimSegmentLineColorRGBA")

LineSet822.setColor(ColorRGBA824)

Shape821.setGeometry(LineSet822)

HAnimSegment817.addChildren(Shape821)
HAnimSite825 = x3d.HAnimSite()
HAnimSite825.setName("glabella")
HAnimSite825.setDEF("hanim_glabella")
TouchSensor826 = x3d.TouchSensor()
TouchSensor826.setDescription("HAnimSite 1 glabella")

HAnimSite825.addChildren(TouchSensor826)
Shape827 = x3d.Shape()
Shape827.setUSE("HAnimSiteShape")

HAnimSite825.addChildren(Shape827)
Billboard828 = x3d.Billboard()
Shape829 = x3d.Shape()
Text830 = x3d.Text()
Text830.setString(["1"])
FontStyle831 = x3d.FontStyle()
FontStyle831.setSize(0.035)

Text830.setFontStyle(FontStyle831)

Shape829.setGeometry(Text830)

Billboard828.addChildren(Shape829)

HAnimSite825.addChildren(Billboard828)

HAnimSegment817.addChildren(HAnimSite825)
HAnimSite832 = x3d.HAnimSite()
HAnimSite832.setName("l_ectocanthus")
HAnimSite832.setDEF("hanim_l_ectocanthus")
TouchSensor833 = x3d.TouchSensor()
TouchSensor833.setDescription("HAnimSite 85 l_ectocanthus")

HAnimSite832.addChildren(TouchSensor833)
Shape834 = x3d.Shape()
Shape834.setUSE("HAnimSiteShape")

HAnimSite832.addChildren(Shape834)
Billboard835 = x3d.Billboard()
Shape836 = x3d.Shape()
Text837 = x3d.Text()
Text837.setString(["85"])
FontStyle838 = x3d.FontStyle()
FontStyle838.setSize(0.035)

Text837.setFontStyle(FontStyle838)

Shape836.setGeometry(Text837)

Billboard835.addChildren(Shape836)

HAnimSite832.addChildren(Billboard835)

HAnimSegment817.addChildren(HAnimSite832)
HAnimSite839 = x3d.HAnimSite()
HAnimSite839.setName("l_infraorbitale")
HAnimSite839.setDEF("hanim_l_infraorbitale")
HAnimSite839.setTranslation([0.0341,1.6171,0.0752])
TouchSensor840 = x3d.TouchSensor()
TouchSensor840.setDescription("HAnimSite 3 l_infraorbitale")

HAnimSite839.addChildren(TouchSensor840)
Shape841 = x3d.Shape()
Shape841.setUSE("HAnimSiteShape")

HAnimSite839.addChildren(Shape841)
Billboard842 = x3d.Billboard()
Shape843 = x3d.Shape()
Text844 = x3d.Text()
Text844.setString(["3"])
FontStyle845 = x3d.FontStyle()
FontStyle845.setSize(0.035)

Text844.setFontStyle(FontStyle845)

Shape843.setGeometry(Text844)

Billboard842.addChildren(Shape843)

HAnimSite839.addChildren(Billboard842)

HAnimSegment817.addChildren(HAnimSite839)
HAnimSite846 = x3d.HAnimSite()
HAnimSite846.setName("l_tragion")
HAnimSite846.setDEF("hanim_l_tragion")
HAnimSite846.setTranslation([0.0739,1.6348,0.0282])
TouchSensor847 = x3d.TouchSensor()
TouchSensor847.setDescription("HAnimSite 4 l_tragion")

HAnimSite846.addChildren(TouchSensor847)
Shape848 = x3d.Shape()
Shape848.setUSE("HAnimSiteShape")

HAnimSite846.addChildren(Shape848)
Billboard849 = x3d.Billboard()
Shape850 = x3d.Shape()
Text851 = x3d.Text()
Text851.setString(["4"])
FontStyle852 = x3d.FontStyle()
FontStyle852.setSize(0.035)

Text851.setFontStyle(FontStyle852)

Shape850.setGeometry(Text851)

Billboard849.addChildren(Shape850)

HAnimSite846.addChildren(Billboard849)

HAnimSegment817.addChildren(HAnimSite846)
HAnimSite853 = x3d.HAnimSite()
HAnimSite853.setName("nuchale")
HAnimSite853.setDEF("hanim_nuchale")
HAnimSite853.setTranslation([0.0039,1.5972,-0.0796])
TouchSensor854 = x3d.TouchSensor()
TouchSensor854.setDescription("HAnimSite 81 nuchale")

HAnimSite853.addChildren(TouchSensor854)
Shape855 = x3d.Shape()
Shape855.setUSE("HAnimSiteShape")

HAnimSite853.addChildren(Shape855)
Billboard856 = x3d.Billboard()
Shape857 = x3d.Shape()
Text858 = x3d.Text()
Text858.setString(["81"])
FontStyle859 = x3d.FontStyle()
FontStyle859.setSize(0.035)

Text858.setFontStyle(FontStyle859)

Shape857.setGeometry(Text858)

Billboard856.addChildren(Shape857)

HAnimSite853.addChildren(Billboard856)

HAnimSegment817.addChildren(HAnimSite853)
HAnimSite860 = x3d.HAnimSite()
HAnimSite860.setName("opisthocranion")
HAnimSite860.setDEF("hanim_opisthocranion")
TouchSensor861 = x3d.TouchSensor()
TouchSensor861.setDescription("HAnimSite 89 opisthocranion")

HAnimSite860.addChildren(TouchSensor861)
Shape862 = x3d.Shape()
Shape862.setUSE("HAnimSiteShape")

HAnimSite860.addChildren(Shape862)
Billboard863 = x3d.Billboard()
Shape864 = x3d.Shape()
Text865 = x3d.Text()
Text865.setString(["89"])
FontStyle866 = x3d.FontStyle()
FontStyle866.setSize(0.035)

Text865.setFontStyle(FontStyle866)

Shape864.setGeometry(Text865)

Billboard863.addChildren(Shape864)

HAnimSite860.addChildren(Billboard863)

HAnimSegment817.addChildren(HAnimSite860)
HAnimSite867 = x3d.HAnimSite()
HAnimSite867.setName("r_ectocanthus")
HAnimSite867.setDEF("hanim_r_ectocanthus")
TouchSensor868 = x3d.TouchSensor()
TouchSensor868.setDescription("HAnimSite 86 r_ectocanthus")

HAnimSite867.addChildren(TouchSensor868)
Shape869 = x3d.Shape()
Shape869.setUSE("HAnimSiteShape")

HAnimSite867.addChildren(Shape869)
Billboard870 = x3d.Billboard()
Shape871 = x3d.Shape()
Text872 = x3d.Text()
Text872.setString(["86"])
FontStyle873 = x3d.FontStyle()
FontStyle873.setSize(0.035)

Text872.setFontStyle(FontStyle873)

Shape871.setGeometry(Text872)

Billboard870.addChildren(Shape871)

HAnimSite867.addChildren(Billboard870)

HAnimSegment817.addChildren(HAnimSite867)
HAnimSite874 = x3d.HAnimSite()
HAnimSite874.setName("r_infraorbitale")
HAnimSite874.setDEF("hanim_r_infraorbitale")
HAnimSite874.setTranslation([-0.0237,1.6171,0.0752])
TouchSensor875 = x3d.TouchSensor()
TouchSensor875.setDescription("HAnimSite 6 r_infraorbitale")

HAnimSite874.addChildren(TouchSensor875)
Shape876 = x3d.Shape()
Shape876.setUSE("HAnimSiteShape")

HAnimSite874.addChildren(Shape876)
Billboard877 = x3d.Billboard()
Shape878 = x3d.Shape()
Text879 = x3d.Text()
Text879.setString(["6"])
FontStyle880 = x3d.FontStyle()
FontStyle880.setSize(0.035)

Text879.setFontStyle(FontStyle880)

Shape878.setGeometry(Text879)

Billboard877.addChildren(Shape878)

HAnimSite874.addChildren(Billboard877)

HAnimSegment817.addChildren(HAnimSite874)
HAnimSite881 = x3d.HAnimSite()
HAnimSite881.setName("r_tragion")
HAnimSite881.setDEF("hanim_r_tragion")
HAnimSite881.setTranslation([-0.0646,1.6347,0.0302])
TouchSensor882 = x3d.TouchSensor()
TouchSensor882.setDescription("HAnimSite 7 r_tragion")

HAnimSite881.addChildren(TouchSensor882)
Shape883 = x3d.Shape()
Shape883.setUSE("HAnimSiteShape")

HAnimSite881.addChildren(Shape883)
Billboard884 = x3d.Billboard()
Shape885 = x3d.Shape()
Text886 = x3d.Text()
Text886.setString(["7"])
FontStyle887 = x3d.FontStyle()
FontStyle887.setSize(0.035)

Text886.setFontStyle(FontStyle887)

Shape885.setGeometry(Text886)

Billboard884.addChildren(Shape885)

HAnimSite881.addChildren(Billboard884)

HAnimSegment817.addChildren(HAnimSite881)
HAnimSite888 = x3d.HAnimSite()
HAnimSite888.setName("sellion")
HAnimSite888.setDEF("hanim_sellion")
HAnimSite888.setTranslation([0.0058,1.6316,0.0852])
TouchSensor889 = x3d.TouchSensor()
TouchSensor889.setDescription("HAnimSite 2 sellion")

HAnimSite888.addChildren(TouchSensor889)
Shape890 = x3d.Shape()
Shape890.setUSE("HAnimSiteShape")

HAnimSite888.addChildren(Shape890)
Billboard891 = x3d.Billboard()
Shape892 = x3d.Shape()
Text893 = x3d.Text()
Text893.setString(["2"])
FontStyle894 = x3d.FontStyle()
FontStyle894.setSize(0.035)

Text893.setFontStyle(FontStyle894)

Shape892.setGeometry(Text893)

Billboard891.addChildren(Shape892)

HAnimSite888.addChildren(Billboard891)

HAnimSegment817.addChildren(HAnimSite888)
HAnimSite895 = x3d.HAnimSite()
HAnimSite895.setName("skull_vertex")
HAnimSite895.setDEF("hanim_skull_vertex")
HAnimSite895.setTranslation([0.005,1.7504,0.0055])
TouchSensor896 = x3d.TouchSensor()
TouchSensor896.setDescription("HAnimSite 0 skull_vertex")

HAnimSite895.addChildren(TouchSensor896)
Shape897 = x3d.Shape()
Shape897.setUSE("HAnimSiteShape")

HAnimSite895.addChildren(Shape897)
Billboard898 = x3d.Billboard()
Shape899 = x3d.Shape()
Text900 = x3d.Text()
Text900.setString(["0"])
FontStyle901 = x3d.FontStyle()
FontStyle901.setSize(0.035)

Text900.setFontStyle(FontStyle901)

Shape899.setGeometry(Text900)

Billboard898.addChildren(Shape899)

HAnimSite895.addChildren(Billboard898)

HAnimSegment817.addChildren(HAnimSite895)
Shape902 = x3d.Shape()
LineSet903 = x3d.LineSet()
LineSet903.setVertexCount([2])
Coordinate904 = x3d.Coordinate()
Coordinate904.setPoint([0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689])

LineSet903.setCoord(Coordinate904)
#from skullbase to r_eyelid_joint vertices 2
ColorRGBA905 = x3d.ColorRGBA()
ColorRGBA905.setUSE("HAnimSegmentLineColorRGBA")

LineSet903.setColor(ColorRGBA905)

Shape902.setGeometry(LineSet903)

HAnimSegment817.addChildren(Shape902)
Shape906 = x3d.Shape()
LineSet907 = x3d.LineSet()
LineSet907.setVertexCount([2])
Coordinate908 = x3d.Coordinate()
Coordinate908.setPoint([0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188])

LineSet907.setCoord(Coordinate908)
#from skullbase to l_eyeball_joint vertices 2
ColorRGBA909 = x3d.ColorRGBA()
ColorRGBA909.setUSE("HAnimSegmentLineColorRGBA")

LineSet907.setColor(ColorRGBA909)

Shape906.setGeometry(LineSet907)

HAnimSegment817.addChildren(Shape906)
Shape910 = x3d.Shape()
LineSet911 = x3d.LineSet()
LineSet911.setVertexCount([2])
Coordinate912 = x3d.Coordinate()
Coordinate912.setPoint([0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188])

LineSet911.setCoord(Coordinate912)
#from skullbase to r_eyeball_joint vertices 2
ColorRGBA913 = x3d.ColorRGBA()
ColorRGBA913.setUSE("HAnimSegmentLineColorRGBA")

LineSet911.setColor(ColorRGBA913)

Shape910.setGeometry(LineSet911)

HAnimSegment817.addChildren(Shape910)
Shape914 = x3d.Shape()
LineSet915 = x3d.LineSet()
LineSet915.setVertexCount([2])
Coordinate916 = x3d.Coordinate()
Coordinate916.setPoint([0.0044,1.6209,0.0236,0.0216,1.4053,0.0051])

LineSet915.setCoord(Coordinate916)
#from skullbase to l_eyebrow_joint vertices 2
ColorRGBA917 = x3d.ColorRGBA()
ColorRGBA917.setUSE("HAnimSegmentLineColorRGBA")

LineSet915.setColor(ColorRGBA917)

Shape914.setGeometry(LineSet915)

HAnimSegment817.addChildren(Shape914)
Shape918 = x3d.Shape()
LineSet919 = x3d.LineSet()
LineSet919.setVertexCount([2])
Coordinate920 = x3d.Coordinate()
Coordinate920.setPoint([0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051])

LineSet919.setCoord(Coordinate920)
#from skullbase to r_eyebrow_joint vertices 2
ColorRGBA921 = x3d.ColorRGBA()
ColorRGBA921.setUSE("HAnimSegmentLineColorRGBA")

LineSet919.setColor(ColorRGBA921)

Shape918.setGeometry(LineSet919)

HAnimSegment817.addChildren(Shape918)
Shape922 = x3d.Shape()
LineSet923 = x3d.LineSet()
LineSet923.setVertexCount([2])
Coordinate924 = x3d.Coordinate()
Coordinate924.setPoint([0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865])

LineSet923.setCoord(Coordinate924)
#from skullbase to temporomandibular vertices 2
ColorRGBA925 = x3d.ColorRGBA()
ColorRGBA925.setUSE("HAnimSegmentLineColorRGBA")

LineSet923.setColor(ColorRGBA925)

Shape922.setGeometry(LineSet923)

HAnimSegment817.addChildren(Shape922)

HAnimJoint816.addChildren(HAnimSegment817)
HAnimJoint926 = x3d.HAnimJoint()
HAnimJoint926.setName("l_eyelid_joint")
HAnimJoint926.setDEF("hanim_l_eyelid_joint")
HAnimJoint926.setCenter([0.0503,1.4157,-0.0689])
HAnimJoint926.setUlimit([0,0,0])
HAnimJoint926.setLlimit([0,0,0])

HAnimJoint816.addChildren(HAnimJoint926)
HAnimJoint927 = x3d.HAnimJoint()
HAnimJoint927.setName("r_eyelid_joint")
HAnimJoint927.setDEF("hanim_r_eyelid_joint")
HAnimJoint927.setCenter([-0.0507,1.4157,-0.0689])
HAnimJoint927.setUlimit([0,0,0])
HAnimJoint927.setLlimit([0,0,0])

HAnimJoint816.addChildren(HAnimJoint927)
HAnimJoint928 = x3d.HAnimJoint()
HAnimJoint928.setName("l_eyeball_joint")
HAnimJoint928.setDEF("hanim_l_eyeball_joint")
HAnimJoint928.setCenter([0.0479,1.3963,-0.0188])
HAnimJoint928.setUlimit([0,0,0])
HAnimJoint928.setLlimit([0,0,0])

HAnimJoint816.addChildren(HAnimJoint928)
HAnimJoint929 = x3d.HAnimJoint()
HAnimJoint929.setName("r_eyeball_joint")
HAnimJoint929.setDEF("hanim_r_eyeball_joint")
HAnimJoint929.setCenter([-0.0483,1.3963,-0.0188])
HAnimJoint929.setUlimit([0,0,0])
HAnimJoint929.setLlimit([0,0,0])

HAnimJoint816.addChildren(HAnimJoint929)
HAnimJoint930 = x3d.HAnimJoint()
HAnimJoint930.setName("l_eyebrow_joint")
HAnimJoint930.setDEF("hanim_l_eyebrow_joint")
HAnimJoint930.setCenter([0.0216,1.4053,0.0051])
HAnimJoint930.setUlimit([0,0,0])
HAnimJoint930.setLlimit([0,0,0])

HAnimJoint816.addChildren(HAnimJoint930)
HAnimJoint931 = x3d.HAnimJoint()
HAnimJoint931.setName("r_eyebrow_joint")
HAnimJoint931.setDEF("hanim_r_eyebrow_joint")
HAnimJoint931.setCenter([-0.0219,1.4053,0.0051])
HAnimJoint931.setUlimit([0,0,0])
HAnimJoint931.setLlimit([0,0,0])

HAnimJoint816.addChildren(HAnimJoint931)
HAnimJoint932 = x3d.HAnimJoint()
HAnimJoint932.setName("temporomandibular")
HAnimJoint932.setDEF("hanim_temporomandibular")
HAnimJoint932.setCenter([-0.0002,1.3043,-0.0865])
HAnimJoint932.setUlimit([0,0,0])
HAnimJoint932.setLlimit([0,0,0])

HAnimJoint816.addChildren(HAnimJoint932)

HAnimJoint807.addChildren(HAnimJoint816)

HAnimJoint791.addChildren(HAnimJoint807)

HAnimJoint782.addChildren(HAnimJoint791)

HAnimJoint773.addChildren(HAnimJoint782)

HAnimJoint764.addChildren(HAnimJoint773)

HAnimJoint755.addChildren(HAnimJoint764)

HAnimJoint732.addChildren(HAnimJoint755)

HAnimJoint701.addChildren(HAnimJoint732)
HAnimJoint933 = x3d.HAnimJoint()
HAnimJoint933.setName("l_sternoclavicular")
HAnimJoint933.setDEF("hanim_l_sternoclavicular")
HAnimJoint933.setCenter([0.082,1.4488,-0.0353])
HAnimJoint933.setUlimit([0,0,0])
HAnimJoint933.setLlimit([0,0,0])
HAnimSegment934 = x3d.HAnimSegment()
HAnimSegment934.setName("l_clavicle")
HAnimSegment934.setDEF("hanim_l_clavicle")
Transform935 = x3d.Transform()
Transform935.setTranslation([0.082,1.4488,-0.0353])
Transform936 = x3d.Transform()
#Empty Transform
Shape937 = x3d.Shape()
Shape937.setUSE("HAnimJointShape")

Transform936.addChild(Shape937)

Transform935.addChildren(Transform936)

HAnimSegment934.addChildren(Transform935)
Shape938 = x3d.Shape()
LineSet939 = x3d.LineSet()
LineSet939.setVertexCount([2])
Coordinate940 = x3d.Coordinate()
Coordinate940.setPoint([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424])

LineSet939.setCoord(Coordinate940)
#from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA941 = x3d.ColorRGBA()
ColorRGBA941.setUSE("HAnimSegmentLineColorRGBA")

LineSet939.setColor(ColorRGBA941)

Shape938.setGeometry(LineSet939)

HAnimSegment934.addChildren(Shape938)
HAnimSite942 = x3d.HAnimSite()
HAnimSite942.setName("l_acromion")
HAnimSite942.setDEF("hanim_l_acromion")
HAnimSite942.setTranslation([0.2032,1.476,-0.049])
TouchSensor943 = x3d.TouchSensor()
TouchSensor943.setDescription("HAnimSite 15 l_acromion")

HAnimSite942.addChildren(TouchSensor943)
Shape944 = x3d.Shape()
Shape944.setUSE("HAnimSiteShape")

HAnimSite942.addChildren(Shape944)
Billboard945 = x3d.Billboard()
Shape946 = x3d.Shape()
Text947 = x3d.Text()
Text947.setString(["15"])
FontStyle948 = x3d.FontStyle()
FontStyle948.setSize(0.035)

Text947.setFontStyle(FontStyle948)

Shape946.setGeometry(Text947)

Billboard945.addChildren(Shape946)

HAnimSite942.addChildren(Billboard945)

HAnimSegment934.addChildren(HAnimSite942)
HAnimSite949 = x3d.HAnimSite()
HAnimSite949.setName("l_axilla_distal")
HAnimSite949.setDEF("hanim_l_axilla_distal")
HAnimSite949.setTranslation([0.1706,1.4072,-0.0875])
TouchSensor950 = x3d.TouchSensor()
TouchSensor950.setDescription("HAnimSite 17 l_axilla_distal")

HAnimSite949.addChildren(TouchSensor950)
Shape951 = x3d.Shape()
Shape951.setUSE("HAnimSiteShape")

HAnimSite949.addChildren(Shape951)
Billboard952 = x3d.Billboard()
Shape953 = x3d.Shape()
Text954 = x3d.Text()
Text954.setString(["17"])
FontStyle955 = x3d.FontStyle()
FontStyle955.setSize(0.035)

Text954.setFontStyle(FontStyle955)

Shape953.setGeometry(Text954)

Billboard952.addChildren(Shape953)

HAnimSite949.addChildren(Billboard952)

HAnimSegment934.addChildren(HAnimSite949)
HAnimSite956 = x3d.HAnimSite()
HAnimSite956.setName("l_axilla_posterior_folds")
HAnimSite956.setDEF("hanim_l_axilla_posterior_folds")
TouchSensor957 = x3d.TouchSensor()
TouchSensor957.setDescription("HAnimSite 18 l_axilla_posterior_folds")

HAnimSite956.addChildren(TouchSensor957)
Shape958 = x3d.Shape()
Shape958.setUSE("HAnimSiteShape")

HAnimSite956.addChildren(Shape958)
Billboard959 = x3d.Billboard()
Shape960 = x3d.Shape()
Text961 = x3d.Text()
Text961.setString(["18"])
FontStyle962 = x3d.FontStyle()
FontStyle962.setSize(0.035)

Text961.setFontStyle(FontStyle962)

Shape960.setGeometry(Text961)

Billboard959.addChildren(Shape960)

HAnimSite956.addChildren(Billboard959)

HAnimSegment934.addChildren(HAnimSite956)
HAnimSite963 = x3d.HAnimSite()
HAnimSite963.setName("l_axilla_proximal")
HAnimSite963.setDEF("hanim_l_axilla_proximal")
HAnimSite963.setTranslation([0.1777,1.4065,-0.0075])
TouchSensor964 = x3d.TouchSensor()
TouchSensor964.setDescription("HAnimSite 16 l_axilla_proximal")

HAnimSite963.addChildren(TouchSensor964)
Shape965 = x3d.Shape()
Shape965.setUSE("HAnimSiteShape")

HAnimSite963.addChildren(Shape965)
Billboard966 = x3d.Billboard()
Shape967 = x3d.Shape()
Text968 = x3d.Text()
Text968.setString(["16"])
FontStyle969 = x3d.FontStyle()
FontStyle969.setSize(0.035)

Text968.setFontStyle(FontStyle969)

Shape967.setGeometry(Text968)

Billboard966.addChildren(Shape967)

HAnimSite963.addChildren(Billboard966)

HAnimSegment934.addChildren(HAnimSite963)
HAnimSite970 = x3d.HAnimSite()
HAnimSite970.setName("l_clavicale")
HAnimSite970.setDEF("hanim_l_clavicale")
HAnimSite970.setTranslation([0.0271,1.4943,0.0394])
TouchSensor971 = x3d.TouchSensor()
TouchSensor971.setDescription("HAnimSite 14 l_clavicale")

HAnimSite970.addChildren(TouchSensor971)
Shape972 = x3d.Shape()
Shape972.setUSE("HAnimSiteShape")

HAnimSite970.addChildren(Shape972)
Billboard973 = x3d.Billboard()
Shape974 = x3d.Shape()
Text975 = x3d.Text()
Text975.setString(["14"])
FontStyle976 = x3d.FontStyle()
FontStyle976.setSize(0.035)

Text975.setFontStyle(FontStyle976)

Shape974.setGeometry(Text975)

Billboard973.addChildren(Shape974)

HAnimSite970.addChildren(Billboard973)

HAnimSegment934.addChildren(HAnimSite970)

HAnimJoint933.addChildren(HAnimSegment934)
HAnimJoint977 = x3d.HAnimJoint()
HAnimJoint977.setName("l_acromioclavicular")
HAnimJoint977.setDEF("hanim_l_acromioclavicular")
HAnimJoint977.setCenter([0.0962,1.4269,-0.0424])
HAnimJoint977.setUlimit([0,0,0])
HAnimJoint977.setLlimit([0,0,0])
HAnimSegment978 = x3d.HAnimSegment()
HAnimSegment978.setName("l_scapula")
HAnimSegment978.setDEF("hanim_l_scapula")
Transform979 = x3d.Transform()
Transform979.setTranslation([0.0962,1.4269,-0.0424])
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
Coordinate984.setPoint([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387])

LineSet983.setCoord(Coordinate984)
#from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA985 = x3d.ColorRGBA()
ColorRGBA985.setUSE("HAnimSegmentLineColorRGBA")

LineSet983.setColor(ColorRGBA985)

Shape982.setGeometry(LineSet983)

HAnimSegment978.addChildren(Shape982)

HAnimJoint977.addChildren(HAnimSegment978)
HAnimJoint986 = x3d.HAnimJoint()
HAnimJoint986.setName("l_shoulder")
HAnimJoint986.setDEF("hanim_l_shoulder")
HAnimJoint986.setCenter([0.2029,1.4376,-0.0387])
HAnimJoint986.setUlimit([0,0,0])
HAnimJoint986.setLlimit([0,0,0])
HAnimSegment987 = x3d.HAnimSegment()
HAnimSegment987.setName("l_upperarm")
HAnimSegment987.setDEF("hanim_l_upperarm")
Transform988 = x3d.Transform()
Transform988.setTranslation([0.2029,1.4376,-0.0387])
Transform989 = x3d.Transform()
#Empty Transform
Shape990 = x3d.Shape()
Shape990.setUSE("HAnimJointShape")

Transform989.addChild(Shape990)

Transform988.addChildren(Transform989)

HAnimSegment987.addChildren(Transform988)
Shape991 = x3d.Shape()
LineSet992 = x3d.LineSet()
LineSet992.setVertexCount([2])
Coordinate993 = x3d.Coordinate()
Coordinate993.setPoint([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682])

LineSet992.setCoord(Coordinate993)
#from l_shoulder to l_elbow vertices 2
ColorRGBA994 = x3d.ColorRGBA()
ColorRGBA994.setUSE("HAnimSegmentLineColorRGBA")

LineSet992.setColor(ColorRGBA994)

Shape991.setGeometry(LineSet992)

HAnimSegment987.addChildren(Shape991)
HAnimSite995 = x3d.HAnimSite()
HAnimSite995.setName("l_bideltoid")
HAnimSite995.setDEF("hanim_l_bideltoid")
TouchSensor996 = x3d.TouchSensor()
TouchSensor996.setDescription("HAnimSite 96 l_bideltoid")

HAnimSite995.addChildren(TouchSensor996)
Shape997 = x3d.Shape()
Shape997.setUSE("HAnimSiteShape")

HAnimSite995.addChildren(Shape997)
Billboard998 = x3d.Billboard()
Shape999 = x3d.Shape()
Text1000 = x3d.Text()
Text1000.setString(["96"])
FontStyle1001 = x3d.FontStyle()
FontStyle1001.setSize(0.035)

Text1000.setFontStyle(FontStyle1001)

Shape999.setGeometry(Text1000)

Billboard998.addChildren(Shape999)

HAnimSite995.addChildren(Billboard998)

HAnimSegment987.addChildren(HAnimSite995)
HAnimSite1002 = x3d.HAnimSite()
HAnimSite1002.setName("l_humeral_lateral_epicondyles")
HAnimSite1002.setDEF("hanim_l_humeral_lateral_epicondyles")
HAnimSite1002.setTranslation([0.228,1.1482,-0.11])
TouchSensor1003 = x3d.TouchSensor()
TouchSensor1003.setDescription("HAnimSite 63 l_humeral_lateral_epicondyles")

HAnimSite1002.addChildren(TouchSensor1003)
Shape1004 = x3d.Shape()
Shape1004.setUSE("HAnimSiteShape")

HAnimSite1002.addChildren(Shape1004)
Billboard1005 = x3d.Billboard()
Shape1006 = x3d.Shape()
Text1007 = x3d.Text()
Text1007.setString(["63"])
FontStyle1008 = x3d.FontStyle()
FontStyle1008.setSize(0.035)

Text1007.setFontStyle(FontStyle1008)

Shape1006.setGeometry(Text1007)

Billboard1005.addChildren(Shape1006)

HAnimSite1002.addChildren(Billboard1005)

HAnimSegment987.addChildren(HAnimSite1002)

HAnimJoint986.addChildren(HAnimSegment987)
HAnimJoint1009 = x3d.HAnimJoint()
HAnimJoint1009.setName("l_elbow")
HAnimJoint1009.setDEF("hanim_l_elbow")
HAnimJoint1009.setCenter([0.2014,1.1357,-0.0682])
HAnimJoint1009.setUlimit([0,0,0])
HAnimJoint1009.setLlimit([0,0,0])
HAnimSegment1010 = x3d.HAnimSegment()
HAnimSegment1010.setName("l_forearm")
HAnimSegment1010.setDEF("hanim_l_forearm")
Transform1011 = x3d.Transform()
Transform1011.setTranslation([0.2014,1.1357,-0.0682])
Transform1012 = x3d.Transform()
#Empty Transform
Shape1013 = x3d.Shape()
Shape1013.setUSE("HAnimJointShape")

Transform1012.addChild(Shape1013)

Transform1011.addChildren(Transform1012)

HAnimSegment1010.addChildren(Transform1011)
Shape1014 = x3d.Shape()
LineSet1015 = x3d.LineSet()
LineSet1015.setVertexCount([2])
Coordinate1016 = x3d.Coordinate()
Coordinate1016.setPoint([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583])

LineSet1015.setCoord(Coordinate1016)
#from l_elbow to l_radiocarpal vertices 2
ColorRGBA1017 = x3d.ColorRGBA()
ColorRGBA1017.setUSE("HAnimSegmentLineColorRGBA")

LineSet1015.setColor(ColorRGBA1017)

Shape1014.setGeometry(LineSet1015)

HAnimSegment1010.addChildren(Shape1014)
HAnimSite1018 = x3d.HAnimSite()
HAnimSite1018.setName("l_humeral_medial_epicondyles")
HAnimSite1018.setDEF("hanim_l_humeral_medial_epicondyles")
HAnimSite1018.setTranslation([0.1735,1.1272,-0.1113])
TouchSensor1019 = x3d.TouchSensor()
TouchSensor1019.setDescription("HAnimSite 64 l_humeral_medial_epicondyles")

HAnimSite1018.addChildren(TouchSensor1019)
Shape1020 = x3d.Shape()
Shape1020.setUSE("HAnimSiteShape")

HAnimSite1018.addChildren(Shape1020)
Billboard1021 = x3d.Billboard()
Shape1022 = x3d.Shape()
Text1023 = x3d.Text()
Text1023.setString(["64"])
FontStyle1024 = x3d.FontStyle()
FontStyle1024.setSize(0.035)

Text1023.setFontStyle(FontStyle1024)

Shape1022.setGeometry(Text1023)

Billboard1021.addChildren(Shape1022)

HAnimSite1018.addChildren(Billboard1021)

HAnimSegment1010.addChildren(HAnimSite1018)
HAnimSite1025 = x3d.HAnimSite()
HAnimSite1025.setName("l_olecranon")
HAnimSite1025.setDEF("hanim_l_olecranon")
HAnimSite1025.setTranslation([-0.1962,1.1375,-0.1123])
TouchSensor1026 = x3d.TouchSensor()
TouchSensor1026.setDescription("HAnimSite 65 l_olecranon")

HAnimSite1025.addChildren(TouchSensor1026)
Shape1027 = x3d.Shape()
Shape1027.setUSE("HAnimSiteShape")

HAnimSite1025.addChildren(Shape1027)
Billboard1028 = x3d.Billboard()
Shape1029 = x3d.Shape()
Text1030 = x3d.Text()
Text1030.setString(["65"])
FontStyle1031 = x3d.FontStyle()
FontStyle1031.setSize(0.035)

Text1030.setFontStyle(FontStyle1031)

Shape1029.setGeometry(Text1030)

Billboard1028.addChildren(Shape1029)

HAnimSite1025.addChildren(Billboard1028)

HAnimSegment1010.addChildren(HAnimSite1025)
HAnimSite1032 = x3d.HAnimSite()
HAnimSite1032.setName("l_radial_styloid")
HAnimSite1032.setDEF("hanim_l_radial_styloid")
HAnimSite1032.setTranslation([0.1901,0.8645,-0.0415])
TouchSensor1033 = x3d.TouchSensor()
TouchSensor1033.setDescription("HAnimSite 71 l_radial_styloid")

HAnimSite1032.addChildren(TouchSensor1033)
Shape1034 = x3d.Shape()
Shape1034.setUSE("HAnimSiteShape")

HAnimSite1032.addChildren(Shape1034)
Billboard1035 = x3d.Billboard()
Shape1036 = x3d.Shape()
Text1037 = x3d.Text()
Text1037.setString(["71"])
FontStyle1038 = x3d.FontStyle()
FontStyle1038.setSize(0.035)

Text1037.setFontStyle(FontStyle1038)

Shape1036.setGeometry(Text1037)

Billboard1035.addChildren(Shape1036)

HAnimSite1032.addChildren(Billboard1035)

HAnimSegment1010.addChildren(HAnimSite1032)
HAnimSite1039 = x3d.HAnimSite()
HAnimSite1039.setName("l_radiale")
HAnimSite1039.setDEF("hanim_l_radiale")
HAnimSite1039.setTranslation([0.2182,1.1212,-0.1167])
TouchSensor1040 = x3d.TouchSensor()
TouchSensor1040.setDescription("HAnimSite 69 l_radiale")

HAnimSite1039.addChildren(TouchSensor1040)
Shape1041 = x3d.Shape()
Shape1041.setUSE("HAnimSiteShape")

HAnimSite1039.addChildren(Shape1041)
Billboard1042 = x3d.Billboard()
Shape1043 = x3d.Shape()
Text1044 = x3d.Text()
Text1044.setString(["69"])
FontStyle1045 = x3d.FontStyle()
FontStyle1045.setSize(0.035)

Text1044.setFontStyle(FontStyle1045)

Shape1043.setGeometry(Text1044)

Billboard1042.addChildren(Shape1043)

HAnimSite1039.addChildren(Billboard1042)

HAnimSegment1010.addChildren(HAnimSite1039)

HAnimJoint1009.addChildren(HAnimSegment1010)
HAnimJoint1046 = x3d.HAnimJoint()
HAnimJoint1046.setName("l_radiocarpal")
HAnimJoint1046.setDEF("hanim_l_radiocarpal")
HAnimJoint1046.setCenter([0.1984,0.8663,-0.0583])
HAnimJoint1046.setUlimit([0,0,0])
HAnimJoint1046.setLlimit([0,0,0])
HAnimSegment1047 = x3d.HAnimSegment()
HAnimSegment1047.setName("l_carpal")
HAnimSegment1047.setDEF("hanim_l_carpal")
Transform1048 = x3d.Transform()
Transform1048.setScale([0.2,0.2,0.2])
Transform1048.setTranslation([0.2,0.85,-0.05])
Transform1048.setRotation([0,0,1,-3.14])
#Transform left hand
Transform1049 = x3d.Transform()
Transform1049.setRotation([0,1,0,-1.57])
#Transform left hand
Shape1050 = x3d.Shape()
Shape1050.setUSE("HAnimJointShape")

Transform1049.addChild(Shape1050)

Transform1048.addChildren(Transform1049)

HAnimSegment1047.addChildren(Transform1048)
Shape1051 = x3d.Shape()
LineSet1052 = x3d.LineSet()
LineSet1052.setVertexCount([2])
Coordinate1053 = x3d.Coordinate()
Coordinate1053.setPoint([0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534])

LineSet1052.setCoord(Coordinate1053)
#from l_radiocarpal to l_carpometacarpal_1 vertices 2
ColorRGBA1054 = x3d.ColorRGBA()
ColorRGBA1054.setUSE("HAnimSegmentLineColorRGBA")

LineSet1052.setColor(ColorRGBA1054)

Shape1051.setGeometry(LineSet1052)

HAnimSegment1047.addChildren(Shape1051)
HAnimSite1055 = x3d.HAnimSite()
HAnimSite1055.setName("l_ulnar_styloid")
HAnimSite1055.setDEF("hanim_l_ulnar_styloid")
HAnimSite1055.setTranslation([-0.2142,0.8529,-0.0648])
TouchSensor1056 = x3d.TouchSensor()
TouchSensor1056.setDescription("HAnimSite 70 l_ulnar_styloid")

HAnimSite1055.addChildren(TouchSensor1056)
Shape1057 = x3d.Shape()
Shape1057.setUSE("HAnimSiteShape")

HAnimSite1055.addChildren(Shape1057)
Billboard1058 = x3d.Billboard()
Shape1059 = x3d.Shape()
Text1060 = x3d.Text()
Text1060.setString(["70"])
FontStyle1061 = x3d.FontStyle()
FontStyle1061.setSize(0.035)

Text1060.setFontStyle(FontStyle1061)

Shape1059.setGeometry(Text1060)

Billboard1058.addChildren(Shape1059)

HAnimSite1055.addChildren(Billboard1058)

HAnimSegment1047.addChildren(HAnimSite1055)
Shape1062 = x3d.Shape()
LineSet1063 = x3d.LineSet()
LineSet1063.setVertexCount([2])
Coordinate1064 = x3d.Coordinate()
Coordinate1064.setPoint([0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028])

LineSet1063.setCoord(Coordinate1064)
#from l_radiocarpal to l_carpometacarpal_2 vertices 2
ColorRGBA1065 = x3d.ColorRGBA()
ColorRGBA1065.setUSE("HAnimSegmentLineColorRGBA")

LineSet1063.setColor(ColorRGBA1065)

Shape1062.setGeometry(LineSet1063)

HAnimSegment1047.addChildren(Shape1062)
Shape1066 = x3d.Shape()
LineSet1067 = x3d.LineSet()
LineSet1067.setVertexCount([2])
Coordinate1068 = x3d.Coordinate()
Coordinate1068.setPoint([0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053])

LineSet1067.setCoord(Coordinate1068)
#from l_radiocarpal to l_carpometacarpal_3 vertices 2
ColorRGBA1069 = x3d.ColorRGBA()
ColorRGBA1069.setUSE("HAnimSegmentLineColorRGBA")

LineSet1067.setColor(ColorRGBA1069)

Shape1066.setGeometry(LineSet1067)

HAnimSegment1047.addChildren(Shape1066)
Shape1070 = x3d.Shape()
LineSet1071 = x3d.LineSet()
LineSet1071.setVertexCount([2])
Coordinate1072 = x3d.Coordinate()
Coordinate1072.setPoint([0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794])

LineSet1071.setCoord(Coordinate1072)
#from l_radiocarpal to l_carpometacarpal_4 vertices 2
ColorRGBA1073 = x3d.ColorRGBA()
ColorRGBA1073.setUSE("HAnimSegmentLineColorRGBA")

LineSet1071.setColor(ColorRGBA1073)

Shape1070.setGeometry(LineSet1071)

HAnimSegment1047.addChildren(Shape1070)
Shape1074 = x3d.Shape()
LineSet1075 = x3d.LineSet()
LineSet1075.setVertexCount([2])
Coordinate1076 = x3d.Coordinate()
Coordinate1076.setPoint([0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036])

LineSet1075.setCoord(Coordinate1076)
#from l_radiocarpal to l_carpometacarpal_5 vertices 2
ColorRGBA1077 = x3d.ColorRGBA()
ColorRGBA1077.setUSE("HAnimSegmentLineColorRGBA")

LineSet1075.setColor(ColorRGBA1077)

Shape1074.setGeometry(LineSet1075)

HAnimSegment1047.addChildren(Shape1074)

HAnimJoint1046.addChildren(HAnimSegment1047)
HAnimJoint1078 = x3d.HAnimJoint()
HAnimJoint1078.setName("l_carpometacarpal_1")
HAnimJoint1078.setDEF("hanim_l_carpometacarpal_1")
HAnimJoint1078.setCenter([0.1924,0.8472,-0.0534])
HAnimJoint1078.setUlimit([0,0,0])
HAnimJoint1078.setLlimit([0,0,0])
HAnimSegment1079 = x3d.HAnimSegment()
HAnimSegment1079.setName("l_metacarpal_1")
HAnimSegment1079.setDEF("hanim_l_metacarpal_1")
Transform1080 = x3d.Transform()
Transform1080.setTranslation([0.1924,0.8472,-0.0534])
Transform1081 = x3d.Transform()
#Empty Transform
Shape1082 = x3d.Shape()
Shape1082.setUSE("HAnimJointShape")

Transform1081.addChild(Shape1082)

Transform1080.addChildren(Transform1081)

HAnimSegment1079.addChildren(Transform1080)
Shape1083 = x3d.Shape()
LineSet1084 = x3d.LineSet()
LineSet1084.setVertexCount([2])
Coordinate1085 = x3d.Coordinate()
Coordinate1085.setPoint([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246])

LineSet1084.setCoord(Coordinate1085)
#from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA1086 = x3d.ColorRGBA()
ColorRGBA1086.setUSE("HAnimSegmentLineColorRGBA")

LineSet1084.setColor(ColorRGBA1086)

Shape1083.setGeometry(LineSet1084)

HAnimSegment1079.addChildren(Shape1083)

HAnimJoint1078.addChildren(HAnimSegment1079)
HAnimJoint1087 = x3d.HAnimJoint()
HAnimJoint1087.setName("l_metacarpophalangeal_1")
HAnimJoint1087.setDEF("hanim_l_metacarpophalangeal_1")
HAnimJoint1087.setCenter([0.1951,0.8226,0.0246])
HAnimJoint1087.setUlimit([0,0,0])
HAnimJoint1087.setLlimit([0,0,0])
HAnimSegment1088 = x3d.HAnimSegment()
HAnimSegment1088.setName("l_carpal_proximal_phalanx_1")
HAnimSegment1088.setDEF("hanim_l_carpal_proximal_phalanx_1")
Transform1089 = x3d.Transform()
Transform1089.setTranslation([0.1951,0.8226,0.0246])
Transform1090 = x3d.Transform()
#Empty Transform
Shape1091 = x3d.Shape()
Shape1091.setUSE("HAnimJointShape")

Transform1090.addChild(Shape1091)

Transform1089.addChildren(Transform1090)

HAnimSegment1088.addChildren(Transform1089)
Shape1092 = x3d.Shape()
LineSet1093 = x3d.LineSet()
LineSet1093.setVertexCount([2])
Coordinate1094 = x3d.Coordinate()
Coordinate1094.setPoint([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464])

LineSet1093.setCoord(Coordinate1094)
#from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA1095 = x3d.ColorRGBA()
ColorRGBA1095.setUSE("HAnimSegmentLineColorRGBA")

LineSet1093.setColor(ColorRGBA1095)

Shape1092.setGeometry(LineSet1093)

HAnimSegment1088.addChildren(Shape1092)

HAnimJoint1087.addChildren(HAnimSegment1088)
HAnimJoint1096 = x3d.HAnimJoint()
HAnimJoint1096.setName("l_carpal_interphalangeal_1")
HAnimJoint1096.setDEF("hanim_l_carpal_interphalangeal_1")
HAnimJoint1096.setCenter([0.1955,0.8159,0.0464])
HAnimJoint1096.setUlimit([0,0,0])
HAnimJoint1096.setLlimit([0,0,0])

HAnimJoint1087.addChildren(HAnimJoint1096)

HAnimJoint1078.addChildren(HAnimJoint1087)

HAnimJoint1046.addChildren(HAnimJoint1078)
HAnimJoint1097 = x3d.HAnimJoint()
HAnimJoint1097.setName("l_carpometacarpal_2")
HAnimJoint1097.setDEF("hanim_l_carpometacarpal_2")
HAnimJoint1097.setCenter([0.1983,0.8024,-0.028])
HAnimJoint1097.setUlimit([0,0,0])
HAnimJoint1097.setLlimit([0,0,0])
HAnimSegment1098 = x3d.HAnimSegment()
HAnimSegment1098.setName("l_metacarpal_2")
HAnimSegment1098.setDEF("hanim_l_metacarpal_2")
Transform1099 = x3d.Transform()
Transform1099.setTranslation([0.1983,0.8024,-0.028])
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
Coordinate1104.setPoint([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028])

LineSet1103.setCoord(Coordinate1104)
#from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA1105 = x3d.ColorRGBA()
ColorRGBA1105.setUSE("HAnimSegmentLineColorRGBA")

LineSet1103.setColor(ColorRGBA1105)

Shape1102.setGeometry(LineSet1103)

HAnimSegment1098.addChildren(Shape1102)
HAnimSite1106 = x3d.HAnimSite()
HAnimSite1106.setName("l_metacarpal_phalanx_2")
HAnimSite1106.setDEF("hanim_l_metacarpal_phalanx_2")
HAnimSite1106.setTranslation([0.2009,0.8139,-0.0237])
TouchSensor1107 = x3d.TouchSensor()
TouchSensor1107.setDescription("HAnimSite 75 l_metacarpal_phalanx_2")

HAnimSite1106.addChildren(TouchSensor1107)
Shape1108 = x3d.Shape()
Shape1108.setUSE("HAnimSiteShape")

HAnimSite1106.addChildren(Shape1108)
Billboard1109 = x3d.Billboard()
Shape1110 = x3d.Shape()
Text1111 = x3d.Text()
Text1111.setString(["75"])
FontStyle1112 = x3d.FontStyle()
FontStyle1112.setSize(0.035)

Text1111.setFontStyle(FontStyle1112)

Shape1110.setGeometry(Text1111)

Billboard1109.addChildren(Shape1110)

HAnimSite1106.addChildren(Billboard1109)

HAnimSegment1098.addChildren(HAnimSite1106)

HAnimJoint1097.addChildren(HAnimSegment1098)
HAnimJoint1113 = x3d.HAnimJoint()
HAnimJoint1113.setName("l_metacarpophalangeal_2")
HAnimJoint1113.setDEF("hanim_l_metacarpophalangeal_2")
HAnimJoint1113.setCenter([0.1983,0.7815,-0.028])
HAnimJoint1113.setUlimit([0,0,0])
HAnimJoint1113.setLlimit([0,0,0])
HAnimSegment1114 = x3d.HAnimSegment()
HAnimSegment1114.setName("l_carpal_proximal_phalanx_2")
HAnimSegment1114.setDEF("hanim_l_carpal_proximal_phalanx_2")
Transform1115 = x3d.Transform()
Transform1115.setTranslation([0.1983,0.7815,-0.028])
Transform1116 = x3d.Transform()
#Empty Transform
Shape1117 = x3d.Shape()
Shape1117.setUSE("HAnimJointShape")

Transform1116.addChild(Shape1117)

Transform1115.addChildren(Transform1116)

HAnimSegment1114.addChildren(Transform1115)
Shape1118 = x3d.Shape()
LineSet1119 = x3d.LineSet()
LineSet1119.setVertexCount([2])
Coordinate1120 = x3d.Coordinate()
Coordinate1120.setPoint([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248])

LineSet1119.setCoord(Coordinate1120)
#from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA1121 = x3d.ColorRGBA()
ColorRGBA1121.setUSE("HAnimSegmentLineColorRGBA")

LineSet1119.setColor(ColorRGBA1121)

Shape1118.setGeometry(LineSet1119)

HAnimSegment1114.addChildren(Shape1118)

HAnimJoint1113.addChildren(HAnimSegment1114)
HAnimJoint1122 = x3d.HAnimJoint()
HAnimJoint1122.setName("l_carpal_proximal_interphalangeal_2")
HAnimJoint1122.setDEF("hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint1122.setCenter([0.2017,0.7363,-0.0248])
HAnimJoint1122.setUlimit([0,0,0])
HAnimJoint1122.setLlimit([0,0,0])
HAnimSegment1123 = x3d.HAnimSegment()
HAnimSegment1123.setName("l_carpal_middle_phalanx_2")
HAnimSegment1123.setDEF("hanim_l_carpal_middle_phalanx_2")
Transform1124 = x3d.Transform()
Transform1124.setTranslation([0.2017,0.7363,-0.0248])
Transform1125 = x3d.Transform()
#Empty Transform
Shape1126 = x3d.Shape()
Shape1126.setUSE("HAnimJointShape")

Transform1125.addChild(Shape1126)

Transform1124.addChildren(Transform1125)

HAnimSegment1123.addChildren(Transform1124)
Shape1127 = x3d.Shape()
LineSet1128 = x3d.LineSet()
LineSet1128.setVertexCount([2])
Coordinate1129 = x3d.Coordinate()
Coordinate1129.setPoint([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236])

LineSet1128.setCoord(Coordinate1129)
#from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA1130 = x3d.ColorRGBA()
ColorRGBA1130.setUSE("HAnimSegmentLineColorRGBA")

LineSet1128.setColor(ColorRGBA1130)

Shape1127.setGeometry(LineSet1128)

HAnimSegment1123.addChildren(Shape1127)

HAnimJoint1122.addChildren(HAnimSegment1123)
HAnimJoint1131 = x3d.HAnimJoint()
HAnimJoint1131.setName("l_carpal_distal_interphalangeal_2")
HAnimJoint1131.setDEF("hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint1131.setCenter([0.2028,0.7139,-0.0236])
HAnimJoint1131.setUlimit([0,0,0])
HAnimJoint1131.setLlimit([0,0,0])

HAnimJoint1122.addChildren(HAnimJoint1131)

HAnimJoint1113.addChildren(HAnimJoint1122)

HAnimJoint1097.addChildren(HAnimJoint1113)

HAnimJoint1046.addChildren(HAnimJoint1097)
HAnimJoint1132 = x3d.HAnimJoint()
HAnimJoint1132.setName("l_carpometacarpal_3")
HAnimJoint1132.setDEF("hanim_l_carpometacarpal_3")
HAnimJoint1132.setCenter([0.1987,0.8029,-0.053])
HAnimJoint1132.setUlimit([0,0,0])
HAnimJoint1132.setLlimit([0,0,0])
HAnimSegment1133 = x3d.HAnimSegment()
HAnimSegment1133.setName("l_metacarpal_3")
HAnimSegment1133.setDEF("hanim_l_metacarpal_3")
Transform1134 = x3d.Transform()
Transform1134.setTranslation([0.1987,0.8029,-0.053])
Transform1135 = x3d.Transform()
#Empty Transform
Shape1136 = x3d.Shape()
Shape1136.setUSE("HAnimJointShape")

Transform1135.addChild(Shape1136)

Transform1134.addChildren(Transform1135)

HAnimSegment1133.addChildren(Transform1134)
Shape1137 = x3d.Shape()
LineSet1138 = x3d.LineSet()
LineSet1138.setVertexCount([2])
Coordinate1139 = x3d.Coordinate()
Coordinate1139.setPoint([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053])

LineSet1138.setCoord(Coordinate1139)
#from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA1140 = x3d.ColorRGBA()
ColorRGBA1140.setUSE("HAnimSegmentLineColorRGBA")

LineSet1138.setColor(ColorRGBA1140)

Shape1137.setGeometry(LineSet1138)

HAnimSegment1133.addChildren(Shape1137)
HAnimSite1141 = x3d.HAnimSite()
HAnimSite1141.setName("l_metacarpal_phalanx_3")
HAnimSite1141.setDEF("hanim_l_metacarpal_phalanx_3")
TouchSensor1142 = x3d.TouchSensor()
TouchSensor1142.setDescription("HAnimSite 76 l_metacarpal_phalanx_3")

HAnimSite1141.addChildren(TouchSensor1142)
Shape1143 = x3d.Shape()
Shape1143.setUSE("HAnimSiteShape")

HAnimSite1141.addChildren(Shape1143)
Billboard1144 = x3d.Billboard()
Shape1145 = x3d.Shape()
Text1146 = x3d.Text()
Text1146.setString(["76"])
FontStyle1147 = x3d.FontStyle()
FontStyle1147.setSize(0.035)

Text1146.setFontStyle(FontStyle1147)

Shape1145.setGeometry(Text1146)

Billboard1144.addChildren(Shape1145)

HAnimSite1141.addChildren(Billboard1144)

HAnimSegment1133.addChildren(HAnimSite1141)

HAnimJoint1132.addChildren(HAnimSegment1133)
HAnimJoint1148 = x3d.HAnimJoint()
HAnimJoint1148.setName("l_metacarpophalangeal_3")
HAnimJoint1148.setDEF("hanim_l_metacarpophalangeal_3")
HAnimJoint1148.setCenter([0.1987,0.7818,-0.053])
HAnimJoint1148.setUlimit([0,0,0])
HAnimJoint1148.setLlimit([0,0,0])
HAnimSegment1149 = x3d.HAnimSegment()
HAnimSegment1149.setName("l_carpal_proximal_phalanx_3")
HAnimSegment1149.setDEF("hanim_l_carpal_proximal_phalanx_3")
Transform1150 = x3d.Transform()
Transform1150.setTranslation([0.1987,0.7818,-0.053])
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
Coordinate1155.setPoint([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503])

LineSet1154.setCoord(Coordinate1155)
#from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA1156 = x3d.ColorRGBA()
ColorRGBA1156.setUSE("HAnimSegmentLineColorRGBA")

LineSet1154.setColor(ColorRGBA1156)

Shape1153.setGeometry(LineSet1154)

HAnimSegment1149.addChildren(Shape1153)

HAnimJoint1148.addChildren(HAnimSegment1149)
HAnimJoint1157 = x3d.HAnimJoint()
HAnimJoint1157.setName("l_carpal_proximal_interphalangeal_3")
HAnimJoint1157.setDEF("hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint1157.setCenter([0.2013,0.7273,-0.0503])
HAnimJoint1157.setUlimit([0,0,0])
HAnimJoint1157.setLlimit([0,0,0])
HAnimSegment1158 = x3d.HAnimSegment()
HAnimSegment1158.setName("l_carpal_middle_phalanx_3")
HAnimSegment1158.setDEF("hanim_l_carpal_middle_phalanx_3")
Transform1159 = x3d.Transform()
Transform1159.setTranslation([0.2013,0.7273,-0.0503])
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
Coordinate1164.setPoint([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494])

LineSet1163.setCoord(Coordinate1164)
#from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA1165 = x3d.ColorRGBA()
ColorRGBA1165.setUSE("HAnimSegmentLineColorRGBA")

LineSet1163.setColor(ColorRGBA1165)

Shape1162.setGeometry(LineSet1163)

HAnimSegment1158.addChildren(Shape1162)

HAnimJoint1157.addChildren(HAnimSegment1158)
HAnimJoint1166 = x3d.HAnimJoint()
HAnimJoint1166.setName("l_carpal_distal_interphalangeal_3")
HAnimJoint1166.setDEF("hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint1166.setCenter([0.2026,0.7011,-0.0494])
HAnimJoint1166.setUlimit([0,0,0])
HAnimJoint1166.setLlimit([0,0,0])

HAnimJoint1157.addChildren(HAnimJoint1166)

HAnimJoint1148.addChildren(HAnimJoint1157)

HAnimJoint1132.addChildren(HAnimJoint1148)

HAnimJoint1046.addChildren(HAnimJoint1132)
HAnimJoint1167 = x3d.HAnimJoint()
HAnimJoint1167.setName("l_carpometacarpal_4")
HAnimJoint1167.setDEF("hanim_l_carpometacarpal_4")
HAnimJoint1167.setCenter([0.1956,0.8019,-0.0794])
HAnimJoint1167.setUlimit([0,0,0])
HAnimJoint1167.setLlimit([0,0,0])
HAnimSegment1168 = x3d.HAnimSegment()
HAnimSegment1168.setName("l_metacarpal_4")
HAnimSegment1168.setDEF("hanim_l_metacarpal_4")
Transform1169 = x3d.Transform()
Transform1169.setTranslation([0.1956,0.8019,-0.0794])
Transform1170 = x3d.Transform()
#Empty Transform
Shape1171 = x3d.Shape()
Shape1171.setUSE("HAnimJointShape")

Transform1170.addChild(Shape1171)

Transform1169.addChildren(Transform1170)

HAnimSegment1168.addChildren(Transform1169)
Shape1172 = x3d.Shape()
LineSet1173 = x3d.LineSet()
LineSet1173.setVertexCount([2])
Coordinate1174 = x3d.Coordinate()
Coordinate1174.setPoint([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794])

LineSet1173.setCoord(Coordinate1174)
#from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA1175 = x3d.ColorRGBA()
ColorRGBA1175.setUSE("HAnimSegmentLineColorRGBA")

LineSet1173.setColor(ColorRGBA1175)

Shape1172.setGeometry(LineSet1173)

HAnimSegment1168.addChildren(Shape1172)

HAnimJoint1167.addChildren(HAnimSegment1168)
HAnimJoint1176 = x3d.HAnimJoint()
HAnimJoint1176.setName("l_metacarpophalangeal_4")
HAnimJoint1176.setDEF("hanim_l_metacarpophalangeal_4")
HAnimJoint1176.setCenter([0.1956,0.7815,-0.0794])
HAnimJoint1176.setUlimit([0,0,0])
HAnimJoint1176.setLlimit([0,0,0])
HAnimSegment1177 = x3d.HAnimSegment()
HAnimSegment1177.setName("l_carpal_proximal_phalanx_4")
HAnimSegment1177.setDEF("hanim_l_carpal_proximal_phalanx_4")
Transform1178 = x3d.Transform()
Transform1178.setTranslation([0.1956,0.7815,-0.0794])
Transform1179 = x3d.Transform()
#Empty Transform
Shape1180 = x3d.Shape()
Shape1180.setUSE("HAnimJointShape")

Transform1179.addChild(Shape1180)

Transform1178.addChildren(Transform1179)

HAnimSegment1177.addChildren(Transform1178)
Shape1181 = x3d.Shape()
LineSet1182 = x3d.LineSet()
LineSet1182.setVertexCount([2])
Coordinate1183 = x3d.Coordinate()
Coordinate1183.setPoint([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777])

LineSet1182.setCoord(Coordinate1183)
#from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA1184 = x3d.ColorRGBA()
ColorRGBA1184.setUSE("HAnimSegmentLineColorRGBA")

LineSet1182.setColor(ColorRGBA1184)

Shape1181.setGeometry(LineSet1182)

HAnimSegment1177.addChildren(Shape1181)

HAnimJoint1176.addChildren(HAnimSegment1177)
HAnimJoint1185 = x3d.HAnimJoint()
HAnimJoint1185.setName("l_carpal_proximal_interphalangeal_4")
HAnimJoint1185.setDEF("hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint1185.setCenter([0.1973,0.7287,-0.0777])
HAnimJoint1185.setUlimit([0,0,0])
HAnimJoint1185.setLlimit([0,0,0])
HAnimSegment1186 = x3d.HAnimSegment()
HAnimSegment1186.setName("l_carpal_middle_phalanx_4")
HAnimSegment1186.setDEF("hanim_l_carpal_middle_phalanx_4")
Transform1187 = x3d.Transform()
Transform1187.setTranslation([0.1973,0.7287,-0.0777])
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
Coordinate1192.setPoint([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767])

LineSet1191.setCoord(Coordinate1192)
#from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA1193 = x3d.ColorRGBA()
ColorRGBA1193.setUSE("HAnimSegmentLineColorRGBA")

LineSet1191.setColor(ColorRGBA1193)

Shape1190.setGeometry(LineSet1191)

HAnimSegment1186.addChildren(Shape1190)

HAnimJoint1185.addChildren(HAnimSegment1186)
HAnimJoint1194 = x3d.HAnimJoint()
HAnimJoint1194.setName("l_carpal_distal_interphalangeal_4")
HAnimJoint1194.setDEF("hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint1194.setCenter([0.1983,0.7045,-0.0767])
HAnimJoint1194.setUlimit([0,0,0])
HAnimJoint1194.setLlimit([0,0,0])

HAnimJoint1185.addChildren(HAnimJoint1194)

HAnimJoint1176.addChildren(HAnimJoint1185)

HAnimJoint1167.addChildren(HAnimJoint1176)

HAnimJoint1046.addChildren(HAnimJoint1167)
HAnimJoint1195 = x3d.HAnimJoint()
HAnimJoint1195.setName("l_carpometacarpal_5")
HAnimJoint1195.setDEF("hanim_l_carpometacarpal_5")
HAnimJoint1195.setCenter([0.1925,0.8066,-0.1036])
HAnimJoint1195.setUlimit([0,0,0])
HAnimJoint1195.setLlimit([0,0,0])
HAnimSegment1196 = x3d.HAnimSegment()
HAnimSegment1196.setName("l_metacarpal_5")
HAnimSegment1196.setDEF("hanim_l_metacarpal_5")
Transform1197 = x3d.Transform()
Transform1197.setTranslation([0.1925,0.8066,-0.1036])
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
Coordinate1202.setPoint([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036])

LineSet1201.setCoord(Coordinate1202)
#from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA1203 = x3d.ColorRGBA()
ColorRGBA1203.setUSE("HAnimSegmentLineColorRGBA")

LineSet1201.setColor(ColorRGBA1203)

Shape1200.setGeometry(LineSet1201)

HAnimSegment1196.addChildren(Shape1200)
HAnimSite1204 = x3d.HAnimSite()
HAnimSite1204.setName("l_metacarpal_phalanx_5")
HAnimSite1204.setDEF("hanim_l_metacarpal_phalanx_5")
HAnimSite1204.setTranslation([0.1929,0.786,-0.1122])
TouchSensor1205 = x3d.TouchSensor()
TouchSensor1205.setDescription("HAnimSite 77 l_metacarpal_phalanx_5")

HAnimSite1204.addChildren(TouchSensor1205)
Shape1206 = x3d.Shape()
Shape1206.setUSE("HAnimSiteShape")

HAnimSite1204.addChildren(Shape1206)
Billboard1207 = x3d.Billboard()
Shape1208 = x3d.Shape()
Text1209 = x3d.Text()
Text1209.setString(["77"])
FontStyle1210 = x3d.FontStyle()
FontStyle1210.setSize(0.035)

Text1209.setFontStyle(FontStyle1210)

Shape1208.setGeometry(Text1209)

Billboard1207.addChildren(Shape1208)

HAnimSite1204.addChildren(Billboard1207)

HAnimSegment1196.addChildren(HAnimSite1204)

HAnimJoint1195.addChildren(HAnimSegment1196)
HAnimJoint1211 = x3d.HAnimJoint()
HAnimJoint1211.setName("l_metacarpophalangeal_5")
HAnimJoint1211.setDEF("hanim_l_metacarpophalangeal_5")
HAnimJoint1211.setCenter([0.1925,0.7866,-0.1036])
HAnimJoint1211.setUlimit([0,0,0])
HAnimJoint1211.setLlimit([0,0,0])
HAnimSegment1212 = x3d.HAnimSegment()
HAnimSegment1212.setName("l_carpal_proximal_phalanx_5")
HAnimSegment1212.setDEF("hanim_l_carpal_proximal_phalanx_5")
Transform1213 = x3d.Transform()
Transform1213.setTranslation([0.1925,0.7866,-0.1036])
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
Coordinate1218.setPoint([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024])

LineSet1217.setCoord(Coordinate1218)
#from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA1219 = x3d.ColorRGBA()
ColorRGBA1219.setUSE("HAnimSegmentLineColorRGBA")

LineSet1217.setColor(ColorRGBA1219)

Shape1216.setGeometry(LineSet1217)

HAnimSegment1212.addChildren(Shape1216)

HAnimJoint1211.addChildren(HAnimSegment1212)
HAnimJoint1220 = x3d.HAnimJoint()
HAnimJoint1220.setName("l_carpal_proximal_interphalangeal_5")
HAnimJoint1220.setDEF("hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint1220.setCenter([0.1938,0.7452,-0.1024])
HAnimJoint1220.setUlimit([0,0,0])
HAnimJoint1220.setLlimit([0,0,0])
HAnimSegment1221 = x3d.HAnimSegment()
HAnimSegment1221.setName("l_carpal_middle_phalanx_5")
HAnimSegment1221.setDEF("hanim_l_carpal_middle_phalanx_5")
Transform1222 = x3d.Transform()
Transform1222.setTranslation([0.1938,0.7452,-0.1024])
Transform1223 = x3d.Transform()
#Empty Transform
Shape1224 = x3d.Shape()
Shape1224.setUSE("HAnimJointShape")

Transform1223.addChild(Shape1224)

Transform1222.addChildren(Transform1223)

HAnimSegment1221.addChildren(Transform1222)
Shape1225 = x3d.Shape()
LineSet1226 = x3d.LineSet()
LineSet1226.setVertexCount([2])
Coordinate1227 = x3d.Coordinate()
Coordinate1227.setPoint([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017])

LineSet1226.setCoord(Coordinate1227)
#from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA1228 = x3d.ColorRGBA()
ColorRGBA1228.setUSE("HAnimSegmentLineColorRGBA")

LineSet1226.setColor(ColorRGBA1228)

Shape1225.setGeometry(LineSet1226)

HAnimSegment1221.addChildren(Shape1225)

HAnimJoint1220.addChildren(HAnimSegment1221)
HAnimJoint1229 = x3d.HAnimJoint()
HAnimJoint1229.setName("l_carpal_distal_interphalangeal_5")
HAnimJoint1229.setDEF("hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint1229.setCenter([0.1948,0.7277,-0.1017])
HAnimJoint1229.setUlimit([0,0,0])
HAnimJoint1229.setLlimit([0,0,0])

HAnimJoint1220.addChildren(HAnimJoint1229)

HAnimJoint1211.addChildren(HAnimJoint1220)

HAnimJoint1195.addChildren(HAnimJoint1211)

HAnimJoint1046.addChildren(HAnimJoint1195)

HAnimJoint1009.addChildren(HAnimJoint1046)

HAnimJoint986.addChildren(HAnimJoint1009)

HAnimJoint977.addChildren(HAnimJoint986)

HAnimJoint933.addChildren(HAnimJoint977)

HAnimJoint701.addChildren(HAnimJoint933)
HAnimJoint1230 = x3d.HAnimJoint()
HAnimJoint1230.setName("r_sternoclavicular")
HAnimJoint1230.setDEF("hanim_r_sternoclavicular")
HAnimJoint1230.setCenter([-0.0694,1.46,-0.033])
HAnimJoint1230.setUlimit([0,0,0])
HAnimJoint1230.setLlimit([0,0,0])
HAnimSegment1231 = x3d.HAnimSegment()
HAnimSegment1231.setName("r_clavicle")
HAnimSegment1231.setDEF("hanim_r_clavicle")
Transform1232 = x3d.Transform()
Transform1232.setTranslation([-0.0694,1.46,-0.033])
Transform1233 = x3d.Transform()
#Empty Transform
Shape1234 = x3d.Shape()
Shape1234.setUSE("HAnimJointShape")

Transform1233.addChild(Shape1234)

Transform1232.addChildren(Transform1233)

HAnimSegment1231.addChildren(Transform1232)
Shape1235 = x3d.Shape()
LineSet1236 = x3d.LineSet()
LineSet1236.setVertexCount([2])
Coordinate1237 = x3d.Coordinate()
Coordinate1237.setPoint([-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401])

LineSet1236.setCoord(Coordinate1237)
#from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA1238 = x3d.ColorRGBA()
ColorRGBA1238.setUSE("HAnimSegmentLineColorRGBA")

LineSet1236.setColor(ColorRGBA1238)

Shape1235.setGeometry(LineSet1236)

HAnimSegment1231.addChildren(Shape1235)
HAnimSite1239 = x3d.HAnimSite()
HAnimSite1239.setName("r_acromion")
HAnimSite1239.setDEF("hanim_r_acromion")
HAnimSite1239.setTranslation([-0.1905,1.4791,-0.0431])
TouchSensor1240 = x3d.TouchSensor()
TouchSensor1240.setDescription("HAnimSite 20 r_acromion")

HAnimSite1239.addChildren(TouchSensor1240)
Shape1241 = x3d.Shape()
Shape1241.setUSE("HAnimSiteShape")

HAnimSite1239.addChildren(Shape1241)
Billboard1242 = x3d.Billboard()
Shape1243 = x3d.Shape()
Text1244 = x3d.Text()
Text1244.setString(["20"])
FontStyle1245 = x3d.FontStyle()
FontStyle1245.setSize(0.035)

Text1244.setFontStyle(FontStyle1245)

Shape1243.setGeometry(Text1244)

Billboard1242.addChildren(Shape1243)

HAnimSite1239.addChildren(Billboard1242)

HAnimSegment1231.addChildren(HAnimSite1239)
HAnimSite1246 = x3d.HAnimSite()
HAnimSite1246.setName("r_axilla_distal")
HAnimSite1246.setDEF("hanim_r_axilla_distal")
HAnimSite1246.setTranslation([-0.1603,1.4098,-0.0826])
TouchSensor1247 = x3d.TouchSensor()
TouchSensor1247.setDescription("HAnimSite 22 r_axilla_distal")

HAnimSite1246.addChildren(TouchSensor1247)
Shape1248 = x3d.Shape()
Shape1248.setUSE("HAnimSiteShape")

HAnimSite1246.addChildren(Shape1248)
Billboard1249 = x3d.Billboard()
Shape1250 = x3d.Shape()
Text1251 = x3d.Text()
Text1251.setString(["22"])
FontStyle1252 = x3d.FontStyle()
FontStyle1252.setSize(0.035)

Text1251.setFontStyle(FontStyle1252)

Shape1250.setGeometry(Text1251)

Billboard1249.addChildren(Shape1250)

HAnimSite1246.addChildren(Billboard1249)

HAnimSegment1231.addChildren(HAnimSite1246)
HAnimSite1253 = x3d.HAnimSite()
HAnimSite1253.setName("r_axilla_posterior_folds")
HAnimSite1253.setDEF("hanim_r_axilla_posterior_folds")
TouchSensor1254 = x3d.TouchSensor()
TouchSensor1254.setDescription("HAnimSite 23 r_axilla_posterior_folds")

HAnimSite1253.addChildren(TouchSensor1254)
Shape1255 = x3d.Shape()
Shape1255.setUSE("HAnimSiteShape")

HAnimSite1253.addChildren(Shape1255)
Billboard1256 = x3d.Billboard()
Shape1257 = x3d.Shape()
Text1258 = x3d.Text()
Text1258.setString(["23"])
FontStyle1259 = x3d.FontStyle()
FontStyle1259.setSize(0.035)

Text1258.setFontStyle(FontStyle1259)

Shape1257.setGeometry(Text1258)

Billboard1256.addChildren(Shape1257)

HAnimSite1253.addChildren(Billboard1256)

HAnimSegment1231.addChildren(HAnimSite1253)
HAnimSite1260 = x3d.HAnimSite()
HAnimSite1260.setName("r_axilla_proximal")
HAnimSite1260.setDEF("hanim_r_axilla_proximal")
HAnimSite1260.setTranslation([-0.1626,1.4072,-0.0031])
TouchSensor1261 = x3d.TouchSensor()
TouchSensor1261.setDescription("HAnimSite 21 r_axilla_proximal")

HAnimSite1260.addChildren(TouchSensor1261)
Shape1262 = x3d.Shape()
Shape1262.setUSE("HAnimSiteShape")

HAnimSite1260.addChildren(Shape1262)
Billboard1263 = x3d.Billboard()
Shape1264 = x3d.Shape()
Text1265 = x3d.Text()
Text1265.setString(["21"])
FontStyle1266 = x3d.FontStyle()
FontStyle1266.setSize(0.035)

Text1265.setFontStyle(FontStyle1266)

Shape1264.setGeometry(Text1265)

Billboard1263.addChildren(Shape1264)

HAnimSite1260.addChildren(Billboard1263)

HAnimSegment1231.addChildren(HAnimSite1260)
HAnimSite1267 = x3d.HAnimSite()
HAnimSite1267.setName("r_clavicale")
HAnimSite1267.setDEF("hanim_r_clavicale")
HAnimSite1267.setTranslation([-0.0115,1.4943,0.04])
TouchSensor1268 = x3d.TouchSensor()
TouchSensor1268.setDescription("HAnimSite 19 r_clavicale")

HAnimSite1267.addChildren(TouchSensor1268)
Shape1269 = x3d.Shape()
Shape1269.setUSE("HAnimSiteShape")

HAnimSite1267.addChildren(Shape1269)
Billboard1270 = x3d.Billboard()
Shape1271 = x3d.Shape()
Text1272 = x3d.Text()
Text1272.setString(["19"])
FontStyle1273 = x3d.FontStyle()
FontStyle1273.setSize(0.035)

Text1272.setFontStyle(FontStyle1273)

Shape1271.setGeometry(Text1272)

Billboard1270.addChildren(Shape1271)

HAnimSite1267.addChildren(Billboard1270)

HAnimSegment1231.addChildren(HAnimSite1267)

HAnimJoint1230.addChildren(HAnimSegment1231)
HAnimJoint1274 = x3d.HAnimJoint()
HAnimJoint1274.setName("r_acromioclavicular")
HAnimJoint1274.setDEF("hanim_r_acromioclavicular")
HAnimJoint1274.setCenter([-0.0836,1.4281,-0.0401])
HAnimJoint1274.setUlimit([0,0,0])
HAnimJoint1274.setLlimit([0,0,0])
HAnimSegment1275 = x3d.HAnimSegment()
HAnimSegment1275.setName("r_scapula")
HAnimSegment1275.setDEF("hanim_r_scapula")
Transform1276 = x3d.Transform()
Transform1276.setTranslation([-0.0836,1.4281,-0.0401])
Transform1277 = x3d.Transform()
#Empty Transform
Shape1278 = x3d.Shape()
Shape1278.setUSE("HAnimJointShape")

Transform1277.addChild(Shape1278)

Transform1276.addChildren(Transform1277)

HAnimSegment1275.addChildren(Transform1276)
Shape1279 = x3d.Shape()
LineSet1280 = x3d.LineSet()
LineSet1280.setVertexCount([2])
Coordinate1281 = x3d.Coordinate()
Coordinate1281.setPoint([-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325])

LineSet1280.setCoord(Coordinate1281)
#from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA1282 = x3d.ColorRGBA()
ColorRGBA1282.setUSE("HAnimSegmentLineColorRGBA")

LineSet1280.setColor(ColorRGBA1282)

Shape1279.setGeometry(LineSet1280)

HAnimSegment1275.addChildren(Shape1279)

HAnimJoint1274.addChildren(HAnimSegment1275)
HAnimJoint1283 = x3d.HAnimJoint()
HAnimJoint1283.setName("r_shoulder")
HAnimJoint1283.setDEF("hanim_r_shoulder")
HAnimJoint1283.setCenter([-0.1907,1.4407,-0.0325])
HAnimJoint1283.setUlimit([0,0,0])
HAnimJoint1283.setLlimit([0,0,0])
HAnimSegment1284 = x3d.HAnimSegment()
HAnimSegment1284.setName("r_upperarm")
HAnimSegment1284.setDEF("hanim_r_upperarm")
Transform1285 = x3d.Transform()
Transform1285.setTranslation([-0.1907,1.4407,-0.0325])
Transform1286 = x3d.Transform()
#Empty Transform
Shape1287 = x3d.Shape()
Shape1287.setUSE("HAnimJointShape")

Transform1286.addChild(Shape1287)

Transform1285.addChildren(Transform1286)

HAnimSegment1284.addChildren(Transform1285)
Shape1288 = x3d.Shape()
LineSet1289 = x3d.LineSet()
LineSet1289.setVertexCount([2])
Coordinate1290 = x3d.Coordinate()
Coordinate1290.setPoint([-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062])

LineSet1289.setCoord(Coordinate1290)
#from r_shoulder to r_elbow vertices 2
ColorRGBA1291 = x3d.ColorRGBA()
ColorRGBA1291.setUSE("HAnimSegmentLineColorRGBA")

LineSet1289.setColor(ColorRGBA1291)

Shape1288.setGeometry(LineSet1289)

HAnimSegment1284.addChildren(Shape1288)
HAnimSite1292 = x3d.HAnimSite()
HAnimSite1292.setName("r_bideltoid")
HAnimSite1292.setDEF("hanim_r_bideltoid")
TouchSensor1293 = x3d.TouchSensor()
TouchSensor1293.setDescription("HAnimSite 97 r_bideltoid")

HAnimSite1292.addChildren(TouchSensor1293)
Shape1294 = x3d.Shape()
Shape1294.setUSE("HAnimSiteShape")

HAnimSite1292.addChildren(Shape1294)
Billboard1295 = x3d.Billboard()
Shape1296 = x3d.Shape()
Text1297 = x3d.Text()
Text1297.setString(["97"])
FontStyle1298 = x3d.FontStyle()
FontStyle1298.setSize(0.035)

Text1297.setFontStyle(FontStyle1298)

Shape1296.setGeometry(Text1297)

Billboard1295.addChildren(Shape1296)

HAnimSite1292.addChildren(Billboard1295)

HAnimSegment1284.addChildren(HAnimSite1292)
HAnimSite1299 = x3d.HAnimSite()
HAnimSite1299.setName("r_humeral_lateral_epicondyles")
HAnimSite1299.setDEF("hanim_r_humeral_lateral_epicondyles")
HAnimSite1299.setTranslation([-0.2224,1.1517,-0.1033])
TouchSensor1300 = x3d.TouchSensor()
TouchSensor1300.setDescription("HAnimSite 66 r_humeral_lateral_epicondyles")

HAnimSite1299.addChildren(TouchSensor1300)
Shape1301 = x3d.Shape()
Shape1301.setUSE("HAnimSiteShape")

HAnimSite1299.addChildren(Shape1301)
Billboard1302 = x3d.Billboard()
Shape1303 = x3d.Shape()
Text1304 = x3d.Text()
Text1304.setString(["66"])
FontStyle1305 = x3d.FontStyle()
FontStyle1305.setSize(0.035)

Text1304.setFontStyle(FontStyle1305)

Shape1303.setGeometry(Text1304)

Billboard1302.addChildren(Shape1303)

HAnimSite1299.addChildren(Billboard1302)

HAnimSegment1284.addChildren(HAnimSite1299)

HAnimJoint1283.addChildren(HAnimSegment1284)
HAnimJoint1306 = x3d.HAnimJoint()
HAnimJoint1306.setName("r_elbow")
HAnimJoint1306.setDEF("hanim_r_elbow")
HAnimJoint1306.setCenter([-0.1949,1.1388,-0.062])
HAnimJoint1306.setUlimit([0,0,0])
HAnimJoint1306.setLlimit([0,0,0])
HAnimSegment1307 = x3d.HAnimSegment()
HAnimSegment1307.setName("r_forearm")
HAnimSegment1307.setDEF("hanim_r_forearm")
Transform1308 = x3d.Transform()
Transform1308.setTranslation([-0.1949,1.1388,-0.062])
Transform1309 = x3d.Transform()
#Empty Transform
Shape1310 = x3d.Shape()
Shape1310.setUSE("HAnimJointShape")

Transform1309.addChild(Shape1310)

Transform1308.addChildren(Transform1309)

HAnimSegment1307.addChildren(Transform1308)
Shape1311 = x3d.Shape()
LineSet1312 = x3d.LineSet()
LineSet1312.setVertexCount([2])
Coordinate1313 = x3d.Coordinate()
Coordinate1313.setPoint([-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521])

LineSet1312.setCoord(Coordinate1313)
#from r_elbow to r_radiocarpal vertices 2
ColorRGBA1314 = x3d.ColorRGBA()
ColorRGBA1314.setUSE("HAnimSegmentLineColorRGBA")

LineSet1312.setColor(ColorRGBA1314)

Shape1311.setGeometry(LineSet1312)

HAnimSegment1307.addChildren(Shape1311)
HAnimSite1315 = x3d.HAnimSite()
HAnimSite1315.setName("r_humeral_medial_epicondyles")
HAnimSite1315.setDEF("hanim_r_humeral_medial_epicondyles")
HAnimSite1315.setTranslation([-0.168,1.1298,-0.1062])
TouchSensor1316 = x3d.TouchSensor()
TouchSensor1316.setDescription("HAnimSite 67 r_humeral_medial_epicondyles")

HAnimSite1315.addChildren(TouchSensor1316)
Shape1317 = x3d.Shape()
Shape1317.setUSE("HAnimSiteShape")

HAnimSite1315.addChildren(Shape1317)
Billboard1318 = x3d.Billboard()
Shape1319 = x3d.Shape()
Text1320 = x3d.Text()
Text1320.setString(["67"])
FontStyle1321 = x3d.FontStyle()
FontStyle1321.setSize(0.035)

Text1320.setFontStyle(FontStyle1321)

Shape1319.setGeometry(Text1320)

Billboard1318.addChildren(Shape1319)

HAnimSite1315.addChildren(Billboard1318)

HAnimSegment1307.addChildren(HAnimSite1315)
HAnimSite1322 = x3d.HAnimSite()
HAnimSite1322.setName("r_olecranon")
HAnimSite1322.setDEF("hanim_r_olecranon")
HAnimSite1322.setTranslation([-0.1907,1.1405,-0.1065])
TouchSensor1323 = x3d.TouchSensor()
TouchSensor1323.setDescription("HAnimSite 68 r_olecranon")

HAnimSite1322.addChildren(TouchSensor1323)
Shape1324 = x3d.Shape()
Shape1324.setUSE("HAnimSiteShape")

HAnimSite1322.addChildren(Shape1324)
Billboard1325 = x3d.Billboard()
Shape1326 = x3d.Shape()
Text1327 = x3d.Text()
Text1327.setString(["68"])
FontStyle1328 = x3d.FontStyle()
FontStyle1328.setSize(0.035)

Text1327.setFontStyle(FontStyle1328)

Shape1326.setGeometry(Text1327)

Billboard1325.addChildren(Shape1326)

HAnimSite1322.addChildren(Billboard1325)

HAnimSegment1307.addChildren(HAnimSite1322)
HAnimSite1329 = x3d.HAnimSite()
HAnimSite1329.setName("r_radial_styloid")
HAnimSite1329.setDEF("hanim_r_radial_styloid")
HAnimSite1329.setTranslation([-0.1884,0.8676,-0.036])
TouchSensor1330 = x3d.TouchSensor()
TouchSensor1330.setDescription("HAnimSite 74 r_radial_styloid")

HAnimSite1329.addChildren(TouchSensor1330)
Shape1331 = x3d.Shape()
Shape1331.setUSE("HAnimSiteShape")

HAnimSite1329.addChildren(Shape1331)
Billboard1332 = x3d.Billboard()
Shape1333 = x3d.Shape()
Text1334 = x3d.Text()
Text1334.setString(["74"])
FontStyle1335 = x3d.FontStyle()
FontStyle1335.setSize(0.035)

Text1334.setFontStyle(FontStyle1335)

Shape1333.setGeometry(Text1334)

Billboard1332.addChildren(Shape1333)

HAnimSite1329.addChildren(Billboard1332)

HAnimSegment1307.addChildren(HAnimSite1329)
HAnimSite1336 = x3d.HAnimSite()
HAnimSite1336.setName("r_radiale")
HAnimSite1336.setDEF("hanim_r_radiale")
HAnimSite1336.setTranslation([-0.213,1.1305,-0.1091])
TouchSensor1337 = x3d.TouchSensor()
TouchSensor1337.setDescription("HAnimSite 72 r_radiale")

HAnimSite1336.addChildren(TouchSensor1337)
Shape1338 = x3d.Shape()
Shape1338.setUSE("HAnimSiteShape")

HAnimSite1336.addChildren(Shape1338)
Billboard1339 = x3d.Billboard()
Shape1340 = x3d.Shape()
Text1341 = x3d.Text()
Text1341.setString(["72"])
FontStyle1342 = x3d.FontStyle()
FontStyle1342.setSize(0.035)

Text1341.setFontStyle(FontStyle1342)

Shape1340.setGeometry(Text1341)

Billboard1339.addChildren(Shape1340)

HAnimSite1336.addChildren(Billboard1339)

HAnimSegment1307.addChildren(HAnimSite1336)

HAnimJoint1306.addChildren(HAnimSegment1307)
HAnimJoint1343 = x3d.HAnimJoint()
HAnimJoint1343.setName("r_radiocarpal")
HAnimJoint1343.setDEF("hanim_r_radiocarpal")
HAnimJoint1343.setCenter([-0.1959,0.8694,-0.0521])
HAnimJoint1343.setUlimit([0,0,0])
HAnimJoint1343.setLlimit([0,0,0])
HAnimSegment1344 = x3d.HAnimSegment()
HAnimSegment1344.setName("r_carpal")
HAnimSegment1344.setDEF("hanim_r_carpal")
Transform1345 = x3d.Transform()
Transform1345.setScale([0.2,0.2,0.2])
Transform1345.setTranslation([-0.2,0.85,-0.05])
Transform1345.setRotation([0,0,1,-3.14])
#Transform right hand
Transform1346 = x3d.Transform()
Transform1346.setRotation([0,1,0,1.57])
#Transform right hand
Shape1347 = x3d.Shape()
Shape1347.setUSE("HAnimJointShape")

Transform1346.addChild(Shape1347)

Transform1345.addChildren(Transform1346)

HAnimSegment1344.addChildren(Transform1345)
Shape1348 = x3d.Shape()
LineSet1349 = x3d.LineSet()
LineSet1349.setVertexCount([2])
Coordinate1350 = x3d.Coordinate()
Coordinate1350.setPoint([-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473])

LineSet1349.setCoord(Coordinate1350)
#from r_radiocarpal to r_carpometacarpal_1 vertices 2
ColorRGBA1351 = x3d.ColorRGBA()
ColorRGBA1351.setUSE("HAnimSegmentLineColorRGBA")

LineSet1349.setColor(ColorRGBA1351)

Shape1348.setGeometry(LineSet1349)

HAnimSegment1344.addChildren(Shape1348)
HAnimSite1352 = x3d.HAnimSite()
HAnimSite1352.setName("r_ulnar_styloid")
HAnimSite1352.setDEF("hanim_r_ulnar_styloid")
HAnimSite1352.setTranslation([-0.2117,0.8562,-0.0584])
TouchSensor1353 = x3d.TouchSensor()
TouchSensor1353.setDescription("HAnimSite 73 r_ulnar_styloid")

HAnimSite1352.addChildren(TouchSensor1353)
Shape1354 = x3d.Shape()
Shape1354.setUSE("HAnimSiteShape")

HAnimSite1352.addChildren(Shape1354)
Billboard1355 = x3d.Billboard()
Shape1356 = x3d.Shape()
Text1357 = x3d.Text()
Text1357.setString(["73"])
FontStyle1358 = x3d.FontStyle()
FontStyle1358.setSize(0.035)

Text1357.setFontStyle(FontStyle1358)

Shape1356.setGeometry(Text1357)

Billboard1355.addChildren(Shape1356)

HAnimSite1352.addChildren(Billboard1355)

HAnimSegment1344.addChildren(HAnimSite1352)
Shape1359 = x3d.Shape()
LineSet1360 = x3d.LineSet()
LineSet1360.setVertexCount([2])
Coordinate1361 = x3d.Coordinate()
Coordinate1361.setPoint([-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218])

LineSet1360.setCoord(Coordinate1361)
#from r_radiocarpal to r_carpometacarpal_2 vertices 2
ColorRGBA1362 = x3d.ColorRGBA()
ColorRGBA1362.setUSE("HAnimSegmentLineColorRGBA")

LineSet1360.setColor(ColorRGBA1362)

Shape1359.setGeometry(LineSet1360)

HAnimSegment1344.addChildren(Shape1359)
Shape1363 = x3d.Shape()
LineSet1364 = x3d.LineSet()
LineSet1364.setVertexCount([2])
Coordinate1365 = x3d.Coordinate()
Coordinate1365.setPoint([-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468])

LineSet1364.setCoord(Coordinate1365)
#from r_radiocarpal to r_carpometacarpal_3 vertices 2
ColorRGBA1366 = x3d.ColorRGBA()
ColorRGBA1366.setUSE("HAnimSegmentLineColorRGBA")

LineSet1364.setColor(ColorRGBA1366)

Shape1363.setGeometry(LineSet1364)

HAnimSegment1344.addChildren(Shape1363)
Shape1367 = x3d.Shape()
LineSet1368 = x3d.LineSet()
LineSet1368.setVertexCount([2])
Coordinate1369 = x3d.Coordinate()
Coordinate1369.setPoint([-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732])

LineSet1368.setCoord(Coordinate1369)
#from r_radiocarpal to r_carpometacarpal_4 vertices 2
ColorRGBA1370 = x3d.ColorRGBA()
ColorRGBA1370.setUSE("HAnimSegmentLineColorRGBA")

LineSet1368.setColor(ColorRGBA1370)

Shape1367.setGeometry(LineSet1368)

HAnimSegment1344.addChildren(Shape1367)
Shape1371 = x3d.Shape()
LineSet1372 = x3d.LineSet()
LineSet1372.setVertexCount([2])
Coordinate1373 = x3d.Coordinate()
Coordinate1373.setPoint([-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975])

LineSet1372.setCoord(Coordinate1373)
#from r_radiocarpal to r_carpometacarpal_5 vertices 2
ColorRGBA1374 = x3d.ColorRGBA()
ColorRGBA1374.setUSE("HAnimSegmentLineColorRGBA")

LineSet1372.setColor(ColorRGBA1374)

Shape1371.setGeometry(LineSet1372)

HAnimSegment1344.addChildren(Shape1371)

HAnimJoint1343.addChildren(HAnimSegment1344)
HAnimJoint1375 = x3d.HAnimJoint()
HAnimJoint1375.setName("r_carpometacarpal_1")
HAnimJoint1375.setDEF("hanim_r_carpometacarpal_1")
HAnimJoint1375.setCenter([-0.1899,0.8502,-0.0473])
HAnimJoint1375.setUlimit([0,0,0])
HAnimJoint1375.setLlimit([0,0,0])
HAnimSegment1376 = x3d.HAnimSegment()
HAnimSegment1376.setName("r_metacarpal_1")
HAnimSegment1376.setDEF("hanim_r_metacarpal_1")
Transform1377 = x3d.Transform()
Transform1377.setTranslation([-0.1899,0.8502,-0.0473])
Transform1378 = x3d.Transform()
#Empty Transform
Shape1379 = x3d.Shape()
Shape1379.setUSE("HAnimJointShape")

Transform1378.addChild(Shape1379)

Transform1377.addChildren(Transform1378)

HAnimSegment1376.addChildren(Transform1377)
Shape1380 = x3d.Shape()
LineSet1381 = x3d.LineSet()
LineSet1381.setVertexCount([2])
Coordinate1382 = x3d.Coordinate()
Coordinate1382.setPoint([-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306])

LineSet1381.setCoord(Coordinate1382)
#from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA1383 = x3d.ColorRGBA()
ColorRGBA1383.setUSE("HAnimSegmentLineColorRGBA")

LineSet1381.setColor(ColorRGBA1383)

Shape1380.setGeometry(LineSet1381)

HAnimSegment1376.addChildren(Shape1380)

HAnimJoint1375.addChildren(HAnimSegment1376)
HAnimJoint1384 = x3d.HAnimJoint()
HAnimJoint1384.setName("r_metacarpophalangeal_1")
HAnimJoint1384.setDEF("hanim_r_metacarpophalangeal_1")
HAnimJoint1384.setCenter([-0.1874,0.8256,0.0306])
HAnimJoint1384.setUlimit([0,0,0])
HAnimJoint1384.setLlimit([0,0,0])
HAnimSegment1385 = x3d.HAnimSegment()
HAnimSegment1385.setName("r_carpal_proximal_phalanx_1")
HAnimSegment1385.setDEF("hanim_r_carpal_proximal_phalanx_1")
Transform1386 = x3d.Transform()
Transform1386.setTranslation([-0.1874,0.8256,0.0306])
Transform1387 = x3d.Transform()
#Empty Transform
Shape1388 = x3d.Shape()
Shape1388.setUSE("HAnimJointShape")

Transform1387.addChild(Shape1388)

Transform1386.addChildren(Transform1387)

HAnimSegment1385.addChildren(Transform1386)
Shape1389 = x3d.Shape()
LineSet1390 = x3d.LineSet()
LineSet1390.setVertexCount([2])
Coordinate1391 = x3d.Coordinate()
Coordinate1391.setPoint([-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506])

LineSet1390.setCoord(Coordinate1391)
#from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA1392 = x3d.ColorRGBA()
ColorRGBA1392.setUSE("HAnimSegmentLineColorRGBA")

LineSet1390.setColor(ColorRGBA1392)

Shape1389.setGeometry(LineSet1390)

HAnimSegment1385.addChildren(Shape1389)

HAnimJoint1384.addChildren(HAnimSegment1385)
HAnimJoint1393 = x3d.HAnimJoint()
HAnimJoint1393.setName("r_carpal_interphalangeal_1")
HAnimJoint1393.setDEF("hanim_r_carpal_interphalangeal_1")
HAnimJoint1393.setCenter([-0.1864,0.819,0.0506])
HAnimJoint1393.setUlimit([0,0,0])
HAnimJoint1393.setLlimit([0,0,0])

HAnimJoint1384.addChildren(HAnimJoint1393)

HAnimJoint1375.addChildren(HAnimJoint1384)

HAnimJoint1343.addChildren(HAnimJoint1375)
HAnimJoint1394 = x3d.HAnimJoint()
HAnimJoint1394.setName("r_carpometacarpal_2")
HAnimJoint1394.setDEF("hanim_r_carpometacarpal_2")
HAnimJoint1394.setCenter([-0.1961,0.8055,-0.0218])
HAnimJoint1394.setUlimit([0,0,0])
HAnimJoint1394.setLlimit([0,0,0])
HAnimSegment1395 = x3d.HAnimSegment()
HAnimSegment1395.setName("r_metacarpal_2")
HAnimSegment1395.setDEF("hanim_r_metacarpal_2")
Transform1396 = x3d.Transform()
Transform1396.setTranslation([-0.1961,0.8055,-0.0218])
Transform1397 = x3d.Transform()
#Empty Transform
Shape1398 = x3d.Shape()
Shape1398.setUSE("HAnimJointShape")

Transform1397.addChild(Shape1398)

Transform1396.addChildren(Transform1397)

HAnimSegment1395.addChildren(Transform1396)
Shape1399 = x3d.Shape()
LineSet1400 = x3d.LineSet()
LineSet1400.setVertexCount([2])
Coordinate1401 = x3d.Coordinate()
Coordinate1401.setPoint([-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218])

LineSet1400.setCoord(Coordinate1401)
#from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA1402 = x3d.ColorRGBA()
ColorRGBA1402.setUSE("HAnimSegmentLineColorRGBA")

LineSet1400.setColor(ColorRGBA1402)

Shape1399.setGeometry(LineSet1400)

HAnimSegment1395.addChildren(Shape1399)
HAnimSite1403 = x3d.HAnimSite()
HAnimSite1403.setName("r_metacarpal_phalanx_2")
HAnimSite1403.setDEF("hanim_r_metacarpal_phalanx_2")
HAnimSite1403.setTranslation([-0.1977,0.8169,-0.0177])
TouchSensor1404 = x3d.TouchSensor()
TouchSensor1404.setDescription("HAnimSite 78 r_metacarpal_phalanx_2")

HAnimSite1403.addChildren(TouchSensor1404)
Shape1405 = x3d.Shape()
Shape1405.setUSE("HAnimSiteShape")

HAnimSite1403.addChildren(Shape1405)
Billboard1406 = x3d.Billboard()
Shape1407 = x3d.Shape()
Text1408 = x3d.Text()
Text1408.setString(["78"])
FontStyle1409 = x3d.FontStyle()
FontStyle1409.setSize(0.035)

Text1408.setFontStyle(FontStyle1409)

Shape1407.setGeometry(Text1408)

Billboard1406.addChildren(Shape1407)

HAnimSite1403.addChildren(Billboard1406)

HAnimSegment1395.addChildren(HAnimSite1403)

HAnimJoint1394.addChildren(HAnimSegment1395)
HAnimJoint1410 = x3d.HAnimJoint()
HAnimJoint1410.setName("r_metacarpophalangeal_2")
HAnimJoint1410.setDEF("hanim_r_metacarpophalangeal_2")
HAnimJoint1410.setCenter([-0.1961,0.7846,-0.0218])
HAnimJoint1410.setUlimit([0,0,0])
HAnimJoint1410.setLlimit([0,0,0])
HAnimSegment1411 = x3d.HAnimSegment()
HAnimSegment1411.setName("r_carpal_proximal_phalanx_2")
HAnimSegment1411.setDEF("hanim_r_carpal_proximal_phalanx_2")
Transform1412 = x3d.Transform()
Transform1412.setTranslation([-0.1961,0.7846,-0.0218])
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
Coordinate1417.setPoint([-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185])

LineSet1416.setCoord(Coordinate1417)
#from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA1418 = x3d.ColorRGBA()
ColorRGBA1418.setUSE("HAnimSegmentLineColorRGBA")

LineSet1416.setColor(ColorRGBA1418)

Shape1415.setGeometry(LineSet1416)

HAnimSegment1411.addChildren(Shape1415)

HAnimJoint1410.addChildren(HAnimSegment1411)
HAnimJoint1419 = x3d.HAnimJoint()
HAnimJoint1419.setName("r_carpal_proximal_interphalangeal_2")
HAnimJoint1419.setDEF("hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint1419.setCenter([-0.1954,0.7393,-0.0185])
HAnimJoint1419.setUlimit([0,0,0])
HAnimJoint1419.setLlimit([0,0,0])
HAnimSegment1420 = x3d.HAnimSegment()
HAnimSegment1420.setName("r_carpal_middle_phalanx_2")
HAnimSegment1420.setDEF("hanim_r_carpal_middle_phalanx_2")
Transform1421 = x3d.Transform()
Transform1421.setTranslation([-0.1954,0.7393,-0.0185])
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
Coordinate1426.setPoint([-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173])

LineSet1425.setCoord(Coordinate1426)
#from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA1427 = x3d.ColorRGBA()
ColorRGBA1427.setUSE("HAnimSegmentLineColorRGBA")

LineSet1425.setColor(ColorRGBA1427)

Shape1424.setGeometry(LineSet1425)

HAnimSegment1420.addChildren(Shape1424)

HAnimJoint1419.addChildren(HAnimSegment1420)
HAnimJoint1428 = x3d.HAnimJoint()
HAnimJoint1428.setName("r_carpal_distal_interphalangeal_2")
HAnimJoint1428.setDEF("hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint1428.setCenter([-0.1945,0.7169,-0.0173])
HAnimJoint1428.setUlimit([0,0,0])
HAnimJoint1428.setLlimit([0,0,0])

HAnimJoint1419.addChildren(HAnimJoint1428)

HAnimJoint1410.addChildren(HAnimJoint1419)

HAnimJoint1394.addChildren(HAnimJoint1410)

HAnimJoint1343.addChildren(HAnimJoint1394)
HAnimJoint1429 = x3d.HAnimJoint()
HAnimJoint1429.setName("r_carpometacarpal_3")
HAnimJoint1429.setDEF("hanim_r_carpometacarpal_3")
HAnimJoint1429.setCenter([-0.1972,0.806,-0.0468])
HAnimJoint1429.setUlimit([0,0,0])
HAnimJoint1429.setLlimit([0,0,0])
HAnimSegment1430 = x3d.HAnimSegment()
HAnimSegment1430.setName("r_metacarpal_3")
HAnimSegment1430.setDEF("hanim_r_metacarpal_3")
Transform1431 = x3d.Transform()
Transform1431.setTranslation([-0.1972,0.806,-0.0468])
Transform1432 = x3d.Transform()
#Empty Transform
Shape1433 = x3d.Shape()
Shape1433.setUSE("HAnimJointShape")

Transform1432.addChild(Shape1433)

Transform1431.addChildren(Transform1432)

HAnimSegment1430.addChildren(Transform1431)
Shape1434 = x3d.Shape()
LineSet1435 = x3d.LineSet()
LineSet1435.setVertexCount([2])
Coordinate1436 = x3d.Coordinate()
Coordinate1436.setPoint([-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468])

LineSet1435.setCoord(Coordinate1436)
#from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA1437 = x3d.ColorRGBA()
ColorRGBA1437.setUSE("HAnimSegmentLineColorRGBA")

LineSet1435.setColor(ColorRGBA1437)

Shape1434.setGeometry(LineSet1435)

HAnimSegment1430.addChildren(Shape1434)
HAnimSite1438 = x3d.HAnimSite()
HAnimSite1438.setName("r_metacarpal_phalanx_3")
HAnimSite1438.setDEF("hanim_r_metacarpal_phalanx_3")
TouchSensor1439 = x3d.TouchSensor()
TouchSensor1439.setDescription("HAnimSite 79 r_metacarpal_phalanx_3")

HAnimSite1438.addChildren(TouchSensor1439)
Shape1440 = x3d.Shape()
Shape1440.setUSE("HAnimSiteShape")

HAnimSite1438.addChildren(Shape1440)
Billboard1441 = x3d.Billboard()
Shape1442 = x3d.Shape()
Text1443 = x3d.Text()
Text1443.setString(["79"])
FontStyle1444 = x3d.FontStyle()
FontStyle1444.setSize(0.035)

Text1443.setFontStyle(FontStyle1444)

Shape1442.setGeometry(Text1443)

Billboard1441.addChildren(Shape1442)

HAnimSite1438.addChildren(Billboard1441)

HAnimSegment1430.addChildren(HAnimSite1438)

HAnimJoint1429.addChildren(HAnimSegment1430)
HAnimJoint1445 = x3d.HAnimJoint()
HAnimJoint1445.setName("r_metacarpophalangeal_3")
HAnimJoint1445.setDEF("hanim_r_metacarpophalangeal_3")
HAnimJoint1445.setCenter([-0.1972,0.7849,-0.0468])
HAnimJoint1445.setUlimit([0,0,0])
HAnimJoint1445.setLlimit([0,0,0])
HAnimSegment1446 = x3d.HAnimSegment()
HAnimSegment1446.setName("r_carpal_proximal_phalanx_3")
HAnimSegment1446.setDEF("hanim_r_carpal_proximal_phalanx_3")
Transform1447 = x3d.Transform()
Transform1447.setTranslation([-0.1972,0.7849,-0.0468])
Transform1448 = x3d.Transform()
#Empty Transform
Shape1449 = x3d.Shape()
Shape1449.setUSE("HAnimJointShape")

Transform1448.addChild(Shape1449)

Transform1447.addChildren(Transform1448)

HAnimSegment1446.addChildren(Transform1447)
Shape1450 = x3d.Shape()
LineSet1451 = x3d.LineSet()
LineSet1451.setVertexCount([2])
Coordinate1452 = x3d.Coordinate()
Coordinate1452.setPoint([-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441])

LineSet1451.setCoord(Coordinate1452)
#from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA1453 = x3d.ColorRGBA()
ColorRGBA1453.setUSE("HAnimSegmentLineColorRGBA")

LineSet1451.setColor(ColorRGBA1453)

Shape1450.setGeometry(LineSet1451)

HAnimSegment1446.addChildren(Shape1450)

HAnimJoint1445.addChildren(HAnimSegment1446)
HAnimJoint1454 = x3d.HAnimJoint()
HAnimJoint1454.setName("r_carpal_proximal_interphalangeal_3")
HAnimJoint1454.setDEF("hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint1454.setCenter([-0.195,0.7304,-0.0441])
HAnimJoint1454.setUlimit([0,0,0])
HAnimJoint1454.setLlimit([0,0,0])
HAnimSegment1455 = x3d.HAnimSegment()
HAnimSegment1455.setName("r_carpal_middle_phalanx_3")
HAnimSegment1455.setDEF("hanim_r_carpal_middle_phalanx_3")
Transform1456 = x3d.Transform()
Transform1456.setTranslation([-0.195,0.7304,-0.0441])
Transform1457 = x3d.Transform()
#Empty Transform
Shape1458 = x3d.Shape()
Shape1458.setUSE("HAnimJointShape")

Transform1457.addChild(Shape1458)

Transform1456.addChildren(Transform1457)

HAnimSegment1455.addChildren(Transform1456)
Shape1459 = x3d.Shape()
LineSet1460 = x3d.LineSet()
LineSet1460.setVertexCount([2])
Coordinate1461 = x3d.Coordinate()
Coordinate1461.setPoint([-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432])

LineSet1460.setCoord(Coordinate1461)
#from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA1462 = x3d.ColorRGBA()
ColorRGBA1462.setUSE("HAnimSegmentLineColorRGBA")

LineSet1460.setColor(ColorRGBA1462)

Shape1459.setGeometry(LineSet1460)

HAnimSegment1455.addChildren(Shape1459)

HAnimJoint1454.addChildren(HAnimSegment1455)
HAnimJoint1463 = x3d.HAnimJoint()
HAnimJoint1463.setName("r_carpal_distal_interphalangeal_3")
HAnimJoint1463.setDEF("hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint1463.setCenter([-0.1939,0.7042,-0.0432])
HAnimJoint1463.setUlimit([0,0,0])
HAnimJoint1463.setLlimit([0,0,0])

HAnimJoint1454.addChildren(HAnimJoint1463)

HAnimJoint1445.addChildren(HAnimJoint1454)

HAnimJoint1429.addChildren(HAnimJoint1445)

HAnimJoint1343.addChildren(HAnimJoint1429)
HAnimJoint1464 = x3d.HAnimJoint()
HAnimJoint1464.setName("r_carpometacarpal_4")
HAnimJoint1464.setDEF("hanim_r_carpometacarpal_4")
HAnimJoint1464.setCenter([-0.1951,0.8049,-0.0732])
HAnimJoint1464.setUlimit([0,0,0])
HAnimJoint1464.setLlimit([0,0,0])
HAnimSegment1465 = x3d.HAnimSegment()
HAnimSegment1465.setName("r_metacarpal_4")
HAnimSegment1465.setDEF("hanim_r_metacarpal_4")
Transform1466 = x3d.Transform()
Transform1466.setTranslation([-0.1951,0.8049,-0.0732])
Transform1467 = x3d.Transform()
#Empty Transform
Shape1468 = x3d.Shape()
Shape1468.setUSE("HAnimJointShape")

Transform1467.addChild(Shape1468)

Transform1466.addChildren(Transform1467)

HAnimSegment1465.addChildren(Transform1466)
Shape1469 = x3d.Shape()
LineSet1470 = x3d.LineSet()
LineSet1470.setVertexCount([2])
Coordinate1471 = x3d.Coordinate()
Coordinate1471.setPoint([-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732])

LineSet1470.setCoord(Coordinate1471)
#from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA1472 = x3d.ColorRGBA()
ColorRGBA1472.setUSE("HAnimSegmentLineColorRGBA")

LineSet1470.setColor(ColorRGBA1472)

Shape1469.setGeometry(LineSet1470)

HAnimSegment1465.addChildren(Shape1469)

HAnimJoint1464.addChildren(HAnimSegment1465)
HAnimJoint1473 = x3d.HAnimJoint()
HAnimJoint1473.setName("r_metacarpophalangeal_4")
HAnimJoint1473.setDEF("hanim_r_metacarpophalangeal_4")
HAnimJoint1473.setCenter([-0.1951,0.7845,-0.0732])
HAnimJoint1473.setUlimit([0,0,0])
HAnimJoint1473.setLlimit([0,0,0])
HAnimSegment1474 = x3d.HAnimSegment()
HAnimSegment1474.setName("r_carpal_proximal_phalanx_4")
HAnimSegment1474.setDEF("hanim_r_carpal_proximal_phalanx_4")
Transform1475 = x3d.Transform()
Transform1475.setTranslation([-0.1951,0.7845,-0.0732])
Transform1476 = x3d.Transform()
#Empty Transform
Shape1477 = x3d.Shape()
Shape1477.setUSE("HAnimJointShape")

Transform1476.addChild(Shape1477)

Transform1475.addChildren(Transform1476)

HAnimSegment1474.addChildren(Transform1475)
Shape1478 = x3d.Shape()
LineSet1479 = x3d.LineSet()
LineSet1479.setVertexCount([2])
Coordinate1480 = x3d.Coordinate()
Coordinate1480.setPoint([-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716])

LineSet1479.setCoord(Coordinate1480)
#from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA1481 = x3d.ColorRGBA()
ColorRGBA1481.setUSE("HAnimSegmentLineColorRGBA")

LineSet1479.setColor(ColorRGBA1481)

Shape1478.setGeometry(LineSet1479)

HAnimSegment1474.addChildren(Shape1478)

HAnimJoint1473.addChildren(HAnimSegment1474)
HAnimJoint1482 = x3d.HAnimJoint()
HAnimJoint1482.setName("r_carpal_proximal_interphalangeal_4")
HAnimJoint1482.setDEF("hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint1482.setCenter([-0.192,0.7318,-0.0716])
HAnimJoint1482.setUlimit([0,0,0])
HAnimJoint1482.setLlimit([0,0,0])
HAnimSegment1483 = x3d.HAnimSegment()
HAnimSegment1483.setName("r_carpal_middle_phalanx_4")
HAnimSegment1483.setDEF("hanim_r_carpal_middle_phalanx_4")
Transform1484 = x3d.Transform()
Transform1484.setTranslation([-0.192,0.7318,-0.0716])
Transform1485 = x3d.Transform()
#Empty Transform
Shape1486 = x3d.Shape()
Shape1486.setUSE("HAnimJointShape")

Transform1485.addChild(Shape1486)

Transform1484.addChildren(Transform1485)

HAnimSegment1483.addChildren(Transform1484)
Shape1487 = x3d.Shape()
LineSet1488 = x3d.LineSet()
LineSet1488.setVertexCount([2])
Coordinate1489 = x3d.Coordinate()
Coordinate1489.setPoint([-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706])

LineSet1488.setCoord(Coordinate1489)
#from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA1490 = x3d.ColorRGBA()
ColorRGBA1490.setUSE("HAnimSegmentLineColorRGBA")

LineSet1488.setColor(ColorRGBA1490)

Shape1487.setGeometry(LineSet1488)

HAnimSegment1483.addChildren(Shape1487)

HAnimJoint1482.addChildren(HAnimSegment1483)
HAnimJoint1491 = x3d.HAnimJoint()
HAnimJoint1491.setName("r_carpal_distal_interphalangeal_4")
HAnimJoint1491.setDEF("hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint1491.setCenter([-0.1908,0.7077,-0.0706])
HAnimJoint1491.setUlimit([0,0,0])
HAnimJoint1491.setLlimit([0,0,0])

HAnimJoint1482.addChildren(HAnimJoint1491)

HAnimJoint1473.addChildren(HAnimJoint1482)

HAnimJoint1464.addChildren(HAnimJoint1473)

HAnimJoint1343.addChildren(HAnimJoint1464)
HAnimJoint1492 = x3d.HAnimJoint()
HAnimJoint1492.setName("r_carpometacarpal_5")
HAnimJoint1492.setDEF("hanim_r_carpometacarpal_5")
HAnimJoint1492.setCenter([-0.1926,0.8096,-0.0975])
HAnimJoint1492.setUlimit([0,0,0])
HAnimJoint1492.setLlimit([0,0,0])
HAnimSegment1493 = x3d.HAnimSegment()
HAnimSegment1493.setName("r_metacarpal_5")
HAnimSegment1493.setDEF("hanim_r_metacarpal_5")
Transform1494 = x3d.Transform()
Transform1494.setTranslation([-0.1926,0.8096,-0.0975])
Transform1495 = x3d.Transform()
#Empty Transform
Shape1496 = x3d.Shape()
Shape1496.setUSE("HAnimJointShape")

Transform1495.addChild(Shape1496)

Transform1494.addChildren(Transform1495)

HAnimSegment1493.addChildren(Transform1494)
Shape1497 = x3d.Shape()
LineSet1498 = x3d.LineSet()
LineSet1498.setVertexCount([2])
Coordinate1499 = x3d.Coordinate()
Coordinate1499.setPoint([-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975])

LineSet1498.setCoord(Coordinate1499)
#from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA1500 = x3d.ColorRGBA()
ColorRGBA1500.setUSE("HAnimSegmentLineColorRGBA")

LineSet1498.setColor(ColorRGBA1500)

Shape1497.setGeometry(LineSet1498)

HAnimSegment1493.addChildren(Shape1497)
HAnimSite1501 = x3d.HAnimSite()
HAnimSite1501.setName("r_metacarpal_phalanx_5")
HAnimSite1501.setDEF("hanim_r_metacarpal_phalanx_5")
HAnimSite1501.setTranslation([-0.1929,0.789,-0.1064])
TouchSensor1502 = x3d.TouchSensor()
TouchSensor1502.setDescription("HAnimSite 80 r_metacarpal_phalanx_5")

HAnimSite1501.addChildren(TouchSensor1502)
Shape1503 = x3d.Shape()
Shape1503.setUSE("HAnimSiteShape")

HAnimSite1501.addChildren(Shape1503)
Billboard1504 = x3d.Billboard()
Shape1505 = x3d.Shape()
Text1506 = x3d.Text()
Text1506.setString(["80"])
FontStyle1507 = x3d.FontStyle()
FontStyle1507.setSize(0.035)

Text1506.setFontStyle(FontStyle1507)

Shape1505.setGeometry(Text1506)

Billboard1504.addChildren(Shape1505)

HAnimSite1501.addChildren(Billboard1504)

HAnimSegment1493.addChildren(HAnimSite1501)

HAnimJoint1492.addChildren(HAnimSegment1493)
HAnimJoint1508 = x3d.HAnimJoint()
HAnimJoint1508.setName("r_metacarpophalangeal_5")
HAnimJoint1508.setDEF("hanim_r_metacarpophalangeal_5")
HAnimJoint1508.setCenter([-0.1926,0.7896,-0.0975])
HAnimJoint1508.setUlimit([0,0,0])
HAnimJoint1508.setLlimit([0,0,0])
HAnimSegment1509 = x3d.HAnimSegment()
HAnimSegment1509.setName("r_carpal_proximal_phalanx_5")
HAnimSegment1509.setDEF("hanim_r_carpal_proximal_phalanx_5")
Transform1510 = x3d.Transform()
Transform1510.setTranslation([-0.1926,0.7896,-0.0975])
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
Coordinate1515.setPoint([-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963])

LineSet1514.setCoord(Coordinate1515)
#from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA1516 = x3d.ColorRGBA()
ColorRGBA1516.setUSE("HAnimSegmentLineColorRGBA")

LineSet1514.setColor(ColorRGBA1516)

Shape1513.setGeometry(LineSet1514)

HAnimSegment1509.addChildren(Shape1513)

HAnimJoint1508.addChildren(HAnimSegment1509)
HAnimJoint1517 = x3d.HAnimJoint()
HAnimJoint1517.setName("r_carpal_proximal_interphalangeal_5")
HAnimJoint1517.setDEF("hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint1517.setCenter([-0.1902,0.7483,-0.0963])
HAnimJoint1517.setUlimit([0,0,0])
HAnimJoint1517.setLlimit([0,0,0])
HAnimSegment1518 = x3d.HAnimSegment()
HAnimSegment1518.setName("r_carpal_middle_phalanx_5")
HAnimSegment1518.setDEF("hanim_r_carpal_middle_phalanx_5")
Transform1519 = x3d.Transform()
Transform1519.setTranslation([-0.1902,0.7483,-0.0963])
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
Coordinate1524.setPoint([-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096])

LineSet1523.setCoord(Coordinate1524)
#from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA1525 = x3d.ColorRGBA()
ColorRGBA1525.setUSE("HAnimSegmentLineColorRGBA")

LineSet1523.setColor(ColorRGBA1525)

Shape1522.setGeometry(LineSet1523)

HAnimSegment1518.addChildren(Shape1522)

HAnimJoint1517.addChildren(HAnimSegment1518)
HAnimJoint1526 = x3d.HAnimJoint()
HAnimJoint1526.setName("r_carpal_distal_interphalangeal_5")
HAnimJoint1526.setDEF("hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint1526.setCenter([-0.1908,0.754,-0.096])
HAnimJoint1526.setUlimit([0,0,0])
HAnimJoint1526.setLlimit([0,0,0])

HAnimJoint1517.addChildren(HAnimJoint1526)

HAnimJoint1508.addChildren(HAnimJoint1517)

HAnimJoint1492.addChildren(HAnimJoint1508)

HAnimJoint1343.addChildren(HAnimJoint1492)

HAnimJoint1306.addChildren(HAnimJoint1343)

HAnimJoint1283.addChildren(HAnimJoint1306)

HAnimJoint1274.addChildren(HAnimJoint1283)

HAnimJoint1230.addChildren(HAnimJoint1274)

HAnimJoint701.addChildren(HAnimJoint1230)

HAnimJoint692.addChildren(HAnimJoint701)

HAnimJoint683.addChildren(HAnimJoint692)

HAnimJoint674.addChildren(HAnimJoint683)

HAnimJoint658.addChildren(HAnimJoint674)

HAnimJoint621.addChildren(HAnimJoint658)

HAnimJoint612.addChildren(HAnimJoint621)

HAnimJoint603.addChildren(HAnimJoint612)

HAnimJoint580.addChildren(HAnimJoint603)

HAnimJoint564.addChildren(HAnimJoint580)

HAnimJoint555.addChildren(HAnimJoint564)

HAnimJoint546.addChildren(HAnimJoint555)

HAnimJoint537.addChildren(HAnimJoint546)

HAnimJoint507.addChildren(HAnimJoint537)

HAnimJoint498.addChildren(HAnimJoint507)

HAnimJoint489.addChildren(HAnimJoint498)

HAnimJoint459.addChildren(HAnimJoint489)

HAnimJoint47.addChildren(HAnimJoint459)

HAnimHumanoid38.addSkeleton(HAnimJoint47)
HAnimJoint1527 = x3d.HAnimJoint()
HAnimJoint1527.setContainerFieldOverride("joints")
HAnimJoint1527.setUSE("hanim_humanoid_root")

HAnimHumanoid38.addJoints(HAnimJoint1527)
HAnimJoint1528 = x3d.HAnimJoint()
HAnimJoint1528.setContainerFieldOverride("joints")
HAnimJoint1528.setUSE("hanim_sacroiliac")

HAnimHumanoid38.addJoints(HAnimJoint1528)
HAnimJoint1529 = x3d.HAnimJoint()
HAnimJoint1529.setContainerFieldOverride("joints")
HAnimJoint1529.setUSE("hanim_l_hip")

HAnimHumanoid38.addJoints(HAnimJoint1529)
HAnimJoint1530 = x3d.HAnimJoint()
HAnimJoint1530.setContainerFieldOverride("joints")
HAnimJoint1530.setUSE("hanim_l_knee")

HAnimHumanoid38.addJoints(HAnimJoint1530)
HAnimJoint1531 = x3d.HAnimJoint()
HAnimJoint1531.setContainerFieldOverride("joints")
HAnimJoint1531.setUSE("hanim_l_talocrural")

HAnimHumanoid38.addJoints(HAnimJoint1531)
HAnimJoint1532 = x3d.HAnimJoint()
HAnimJoint1532.setContainerFieldOverride("joints")
HAnimJoint1532.setUSE("hanim_l_tarsometatarsal_2")

HAnimHumanoid38.addJoints(HAnimJoint1532)
HAnimJoint1533 = x3d.HAnimJoint()
HAnimJoint1533.setContainerFieldOverride("joints")
HAnimJoint1533.setUSE("hanim_l_metatarsophalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1533)
HAnimJoint1534 = x3d.HAnimJoint()
HAnimJoint1534.setContainerFieldOverride("joints")
HAnimJoint1534.setUSE("hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1534)
HAnimJoint1535 = x3d.HAnimJoint()
HAnimJoint1535.setContainerFieldOverride("joints")
HAnimJoint1535.setUSE("hanim_r_hip")

HAnimHumanoid38.addJoints(HAnimJoint1535)
HAnimJoint1536 = x3d.HAnimJoint()
HAnimJoint1536.setContainerFieldOverride("joints")
HAnimJoint1536.setUSE("hanim_r_knee")

HAnimHumanoid38.addJoints(HAnimJoint1536)
HAnimJoint1537 = x3d.HAnimJoint()
HAnimJoint1537.setContainerFieldOverride("joints")
HAnimJoint1537.setUSE("hanim_r_talocrural")

HAnimHumanoid38.addJoints(HAnimJoint1537)
HAnimJoint1538 = x3d.HAnimJoint()
HAnimJoint1538.setContainerFieldOverride("joints")
HAnimJoint1538.setUSE("hanim_r_tarsometatarsal_2")

HAnimHumanoid38.addJoints(HAnimJoint1538)
HAnimJoint1539 = x3d.HAnimJoint()
HAnimJoint1539.setContainerFieldOverride("joints")
HAnimJoint1539.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1539)
HAnimJoint1540 = x3d.HAnimJoint()
HAnimJoint1540.setContainerFieldOverride("joints")
HAnimJoint1540.setUSE("hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1540)
HAnimJoint1541 = x3d.HAnimJoint()
HAnimJoint1541.setContainerFieldOverride("joints")
HAnimJoint1541.setUSE("hanim_vl5")

HAnimHumanoid38.addJoints(HAnimJoint1541)
HAnimJoint1542 = x3d.HAnimJoint()
HAnimJoint1542.setContainerFieldOverride("joints")
HAnimJoint1542.setUSE("hanim_vl4")

HAnimHumanoid38.addJoints(HAnimJoint1542)
HAnimJoint1543 = x3d.HAnimJoint()
HAnimJoint1543.setContainerFieldOverride("joints")
HAnimJoint1543.setUSE("hanim_vl3")

HAnimHumanoid38.addJoints(HAnimJoint1543)
HAnimJoint1544 = x3d.HAnimJoint()
HAnimJoint1544.setContainerFieldOverride("joints")
HAnimJoint1544.setUSE("hanim_vl2")

HAnimHumanoid38.addJoints(HAnimJoint1544)
HAnimJoint1545 = x3d.HAnimJoint()
HAnimJoint1545.setContainerFieldOverride("joints")
HAnimJoint1545.setUSE("hanim_vl1")

HAnimHumanoid38.addJoints(HAnimJoint1545)
HAnimJoint1546 = x3d.HAnimJoint()
HAnimJoint1546.setContainerFieldOverride("joints")
HAnimJoint1546.setUSE("hanim_vt12")

HAnimHumanoid38.addJoints(HAnimJoint1546)
HAnimJoint1547 = x3d.HAnimJoint()
HAnimJoint1547.setContainerFieldOverride("joints")
HAnimJoint1547.setUSE("hanim_vt11")

HAnimHumanoid38.addJoints(HAnimJoint1547)
HAnimJoint1548 = x3d.HAnimJoint()
HAnimJoint1548.setContainerFieldOverride("joints")
HAnimJoint1548.setUSE("hanim_vt10")

HAnimHumanoid38.addJoints(HAnimJoint1548)
HAnimJoint1549 = x3d.HAnimJoint()
HAnimJoint1549.setContainerFieldOverride("joints")
HAnimJoint1549.setUSE("hanim_vt9")

HAnimHumanoid38.addJoints(HAnimJoint1549)
HAnimJoint1550 = x3d.HAnimJoint()
HAnimJoint1550.setContainerFieldOverride("joints")
HAnimJoint1550.setUSE("hanim_vt8")

HAnimHumanoid38.addJoints(HAnimJoint1550)
HAnimJoint1551 = x3d.HAnimJoint()
HAnimJoint1551.setContainerFieldOverride("joints")
HAnimJoint1551.setUSE("hanim_vt7")

HAnimHumanoid38.addJoints(HAnimJoint1551)
HAnimJoint1552 = x3d.HAnimJoint()
HAnimJoint1552.setContainerFieldOverride("joints")
HAnimJoint1552.setUSE("hanim_vt6")

HAnimHumanoid38.addJoints(HAnimJoint1552)
HAnimJoint1553 = x3d.HAnimJoint()
HAnimJoint1553.setContainerFieldOverride("joints")
HAnimJoint1553.setUSE("hanim_vt5")

HAnimHumanoid38.addJoints(HAnimJoint1553)
HAnimJoint1554 = x3d.HAnimJoint()
HAnimJoint1554.setContainerFieldOverride("joints")
HAnimJoint1554.setUSE("hanim_vt4")

HAnimHumanoid38.addJoints(HAnimJoint1554)
HAnimJoint1555 = x3d.HAnimJoint()
HAnimJoint1555.setContainerFieldOverride("joints")
HAnimJoint1555.setUSE("hanim_vt3")

HAnimHumanoid38.addJoints(HAnimJoint1555)
HAnimJoint1556 = x3d.HAnimJoint()
HAnimJoint1556.setContainerFieldOverride("joints")
HAnimJoint1556.setUSE("hanim_vt2")

HAnimHumanoid38.addJoints(HAnimJoint1556)
HAnimJoint1557 = x3d.HAnimJoint()
HAnimJoint1557.setContainerFieldOverride("joints")
HAnimJoint1557.setUSE("hanim_vt1")

HAnimHumanoid38.addJoints(HAnimJoint1557)
HAnimJoint1558 = x3d.HAnimJoint()
HAnimJoint1558.setContainerFieldOverride("joints")
HAnimJoint1558.setUSE("hanim_vc7")

HAnimHumanoid38.addJoints(HAnimJoint1558)
HAnimJoint1559 = x3d.HAnimJoint()
HAnimJoint1559.setContainerFieldOverride("joints")
HAnimJoint1559.setUSE("hanim_vc6")

HAnimHumanoid38.addJoints(HAnimJoint1559)
HAnimJoint1560 = x3d.HAnimJoint()
HAnimJoint1560.setContainerFieldOverride("joints")
HAnimJoint1560.setUSE("hanim_vc5")

HAnimHumanoid38.addJoints(HAnimJoint1560)
HAnimJoint1561 = x3d.HAnimJoint()
HAnimJoint1561.setContainerFieldOverride("joints")
HAnimJoint1561.setUSE("hanim_vc4")

HAnimHumanoid38.addJoints(HAnimJoint1561)
HAnimJoint1562 = x3d.HAnimJoint()
HAnimJoint1562.setContainerFieldOverride("joints")
HAnimJoint1562.setUSE("hanim_vc3")

HAnimHumanoid38.addJoints(HAnimJoint1562)
HAnimJoint1563 = x3d.HAnimJoint()
HAnimJoint1563.setContainerFieldOverride("joints")
HAnimJoint1563.setUSE("hanim_vc2")

HAnimHumanoid38.addJoints(HAnimJoint1563)
HAnimJoint1564 = x3d.HAnimJoint()
HAnimJoint1564.setContainerFieldOverride("joints")
HAnimJoint1564.setUSE("hanim_vc1")

HAnimHumanoid38.addJoints(HAnimJoint1564)
HAnimJoint1565 = x3d.HAnimJoint()
HAnimJoint1565.setContainerFieldOverride("joints")
HAnimJoint1565.setUSE("hanim_skullbase")

HAnimHumanoid38.addJoints(HAnimJoint1565)
HAnimJoint1566 = x3d.HAnimJoint()
HAnimJoint1566.setContainerFieldOverride("joints")
HAnimJoint1566.setUSE("hanim_l_eyelid_joint")

HAnimHumanoid38.addJoints(HAnimJoint1566)
HAnimJoint1567 = x3d.HAnimJoint()
HAnimJoint1567.setContainerFieldOverride("joints")
HAnimJoint1567.setUSE("hanim_r_eyelid_joint")

HAnimHumanoid38.addJoints(HAnimJoint1567)
HAnimJoint1568 = x3d.HAnimJoint()
HAnimJoint1568.setContainerFieldOverride("joints")
HAnimJoint1568.setUSE("hanim_l_eyeball_joint")

HAnimHumanoid38.addJoints(HAnimJoint1568)
HAnimJoint1569 = x3d.HAnimJoint()
HAnimJoint1569.setContainerFieldOverride("joints")
HAnimJoint1569.setUSE("hanim_r_eyeball_joint")

HAnimHumanoid38.addJoints(HAnimJoint1569)
HAnimJoint1570 = x3d.HAnimJoint()
HAnimJoint1570.setContainerFieldOverride("joints")
HAnimJoint1570.setUSE("hanim_l_eyebrow_joint")

HAnimHumanoid38.addJoints(HAnimJoint1570)
HAnimJoint1571 = x3d.HAnimJoint()
HAnimJoint1571.setContainerFieldOverride("joints")
HAnimJoint1571.setUSE("hanim_r_eyebrow_joint")

HAnimHumanoid38.addJoints(HAnimJoint1571)
HAnimJoint1572 = x3d.HAnimJoint()
HAnimJoint1572.setContainerFieldOverride("joints")
HAnimJoint1572.setUSE("hanim_temporomandibular")

HAnimHumanoid38.addJoints(HAnimJoint1572)
HAnimJoint1573 = x3d.HAnimJoint()
HAnimJoint1573.setContainerFieldOverride("joints")
HAnimJoint1573.setUSE("hanim_l_sternoclavicular")

HAnimHumanoid38.addJoints(HAnimJoint1573)
HAnimJoint1574 = x3d.HAnimJoint()
HAnimJoint1574.setContainerFieldOverride("joints")
HAnimJoint1574.setUSE("hanim_l_acromioclavicular")

HAnimHumanoid38.addJoints(HAnimJoint1574)
HAnimJoint1575 = x3d.HAnimJoint()
HAnimJoint1575.setContainerFieldOverride("joints")
HAnimJoint1575.setUSE("hanim_l_shoulder")

HAnimHumanoid38.addJoints(HAnimJoint1575)
HAnimJoint1576 = x3d.HAnimJoint()
HAnimJoint1576.setContainerFieldOverride("joints")
HAnimJoint1576.setUSE("hanim_l_elbow")

HAnimHumanoid38.addJoints(HAnimJoint1576)
HAnimJoint1577 = x3d.HAnimJoint()
HAnimJoint1577.setContainerFieldOverride("joints")
HAnimJoint1577.setUSE("hanim_l_radiocarpal")

HAnimHumanoid38.addJoints(HAnimJoint1577)
HAnimJoint1578 = x3d.HAnimJoint()
HAnimJoint1578.setContainerFieldOverride("joints")
HAnimJoint1578.setUSE("hanim_l_carpometacarpal_1")

HAnimHumanoid38.addJoints(HAnimJoint1578)
HAnimJoint1579 = x3d.HAnimJoint()
HAnimJoint1579.setContainerFieldOverride("joints")
HAnimJoint1579.setUSE("hanim_l_metacarpophalangeal_1")

HAnimHumanoid38.addJoints(HAnimJoint1579)
HAnimJoint1580 = x3d.HAnimJoint()
HAnimJoint1580.setContainerFieldOverride("joints")
HAnimJoint1580.setUSE("hanim_l_carpal_interphalangeal_1")

HAnimHumanoid38.addJoints(HAnimJoint1580)
HAnimJoint1581 = x3d.HAnimJoint()
HAnimJoint1581.setContainerFieldOverride("joints")
HAnimJoint1581.setUSE("hanim_l_carpometacarpal_2")

HAnimHumanoid38.addJoints(HAnimJoint1581)
HAnimJoint1582 = x3d.HAnimJoint()
HAnimJoint1582.setContainerFieldOverride("joints")
HAnimJoint1582.setUSE("hanim_l_metacarpophalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1582)
HAnimJoint1583 = x3d.HAnimJoint()
HAnimJoint1583.setContainerFieldOverride("joints")
HAnimJoint1583.setUSE("hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1583)
HAnimJoint1584 = x3d.HAnimJoint()
HAnimJoint1584.setContainerFieldOverride("joints")
HAnimJoint1584.setUSE("hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1584)
HAnimJoint1585 = x3d.HAnimJoint()
HAnimJoint1585.setContainerFieldOverride("joints")
HAnimJoint1585.setUSE("hanim_l_carpometacarpal_3")

HAnimHumanoid38.addJoints(HAnimJoint1585)
HAnimJoint1586 = x3d.HAnimJoint()
HAnimJoint1586.setContainerFieldOverride("joints")
HAnimJoint1586.setUSE("hanim_l_metacarpophalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint1586)
HAnimJoint1587 = x3d.HAnimJoint()
HAnimJoint1587.setContainerFieldOverride("joints")
HAnimJoint1587.setUSE("hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint1587)
HAnimJoint1588 = x3d.HAnimJoint()
HAnimJoint1588.setContainerFieldOverride("joints")
HAnimJoint1588.setUSE("hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint1588)
HAnimJoint1589 = x3d.HAnimJoint()
HAnimJoint1589.setContainerFieldOverride("joints")
HAnimJoint1589.setUSE("hanim_l_carpometacarpal_4")

HAnimHumanoid38.addJoints(HAnimJoint1589)
HAnimJoint1590 = x3d.HAnimJoint()
HAnimJoint1590.setContainerFieldOverride("joints")
HAnimJoint1590.setUSE("hanim_l_metacarpophalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint1590)
HAnimJoint1591 = x3d.HAnimJoint()
HAnimJoint1591.setContainerFieldOverride("joints")
HAnimJoint1591.setUSE("hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint1591)
HAnimJoint1592 = x3d.HAnimJoint()
HAnimJoint1592.setContainerFieldOverride("joints")
HAnimJoint1592.setUSE("hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint1592)
HAnimJoint1593 = x3d.HAnimJoint()
HAnimJoint1593.setContainerFieldOverride("joints")
HAnimJoint1593.setUSE("hanim_l_carpometacarpal_5")

HAnimHumanoid38.addJoints(HAnimJoint1593)
HAnimJoint1594 = x3d.HAnimJoint()
HAnimJoint1594.setContainerFieldOverride("joints")
HAnimJoint1594.setUSE("hanim_l_metacarpophalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint1594)
HAnimJoint1595 = x3d.HAnimJoint()
HAnimJoint1595.setContainerFieldOverride("joints")
HAnimJoint1595.setUSE("hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint1595)
HAnimJoint1596 = x3d.HAnimJoint()
HAnimJoint1596.setContainerFieldOverride("joints")
HAnimJoint1596.setUSE("hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint1596)
HAnimJoint1597 = x3d.HAnimJoint()
HAnimJoint1597.setContainerFieldOverride("joints")
HAnimJoint1597.setUSE("hanim_r_sternoclavicular")

HAnimHumanoid38.addJoints(HAnimJoint1597)
HAnimJoint1598 = x3d.HAnimJoint()
HAnimJoint1598.setContainerFieldOverride("joints")
HAnimJoint1598.setUSE("hanim_r_acromioclavicular")

HAnimHumanoid38.addJoints(HAnimJoint1598)
HAnimJoint1599 = x3d.HAnimJoint()
HAnimJoint1599.setContainerFieldOverride("joints")
HAnimJoint1599.setUSE("hanim_r_shoulder")

HAnimHumanoid38.addJoints(HAnimJoint1599)
HAnimJoint1600 = x3d.HAnimJoint()
HAnimJoint1600.setContainerFieldOverride("joints")
HAnimJoint1600.setUSE("hanim_r_elbow")

HAnimHumanoid38.addJoints(HAnimJoint1600)
HAnimJoint1601 = x3d.HAnimJoint()
HAnimJoint1601.setContainerFieldOverride("joints")
HAnimJoint1601.setUSE("hanim_r_radiocarpal")

HAnimHumanoid38.addJoints(HAnimJoint1601)
HAnimJoint1602 = x3d.HAnimJoint()
HAnimJoint1602.setContainerFieldOverride("joints")
HAnimJoint1602.setUSE("hanim_r_carpometacarpal_1")

HAnimHumanoid38.addJoints(HAnimJoint1602)
HAnimJoint1603 = x3d.HAnimJoint()
HAnimJoint1603.setContainerFieldOverride("joints")
HAnimJoint1603.setUSE("hanim_r_metacarpophalangeal_1")

HAnimHumanoid38.addJoints(HAnimJoint1603)
HAnimJoint1604 = x3d.HAnimJoint()
HAnimJoint1604.setContainerFieldOverride("joints")
HAnimJoint1604.setUSE("hanim_r_carpal_interphalangeal_1")

HAnimHumanoid38.addJoints(HAnimJoint1604)
HAnimJoint1605 = x3d.HAnimJoint()
HAnimJoint1605.setContainerFieldOverride("joints")
HAnimJoint1605.setUSE("hanim_r_carpometacarpal_2")

HAnimHumanoid38.addJoints(HAnimJoint1605)
HAnimJoint1606 = x3d.HAnimJoint()
HAnimJoint1606.setContainerFieldOverride("joints")
HAnimJoint1606.setUSE("hanim_r_metacarpophalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1606)
HAnimJoint1607 = x3d.HAnimJoint()
HAnimJoint1607.setContainerFieldOverride("joints")
HAnimJoint1607.setUSE("hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1607)
HAnimJoint1608 = x3d.HAnimJoint()
HAnimJoint1608.setContainerFieldOverride("joints")
HAnimJoint1608.setUSE("hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1608)
HAnimJoint1609 = x3d.HAnimJoint()
HAnimJoint1609.setContainerFieldOverride("joints")
HAnimJoint1609.setUSE("hanim_r_carpometacarpal_3")

HAnimHumanoid38.addJoints(HAnimJoint1609)
HAnimJoint1610 = x3d.HAnimJoint()
HAnimJoint1610.setContainerFieldOverride("joints")
HAnimJoint1610.setUSE("hanim_r_metacarpophalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint1610)
HAnimJoint1611 = x3d.HAnimJoint()
HAnimJoint1611.setContainerFieldOverride("joints")
HAnimJoint1611.setUSE("hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint1611)
HAnimJoint1612 = x3d.HAnimJoint()
HAnimJoint1612.setContainerFieldOverride("joints")
HAnimJoint1612.setUSE("hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint1612)
HAnimJoint1613 = x3d.HAnimJoint()
HAnimJoint1613.setContainerFieldOverride("joints")
HAnimJoint1613.setUSE("hanim_r_carpometacarpal_4")

HAnimHumanoid38.addJoints(HAnimJoint1613)
HAnimJoint1614 = x3d.HAnimJoint()
HAnimJoint1614.setContainerFieldOverride("joints")
HAnimJoint1614.setUSE("hanim_r_metacarpophalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint1614)
HAnimJoint1615 = x3d.HAnimJoint()
HAnimJoint1615.setContainerFieldOverride("joints")
HAnimJoint1615.setUSE("hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint1615)
HAnimJoint1616 = x3d.HAnimJoint()
HAnimJoint1616.setContainerFieldOverride("joints")
HAnimJoint1616.setUSE("hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint1616)
HAnimJoint1617 = x3d.HAnimJoint()
HAnimJoint1617.setContainerFieldOverride("joints")
HAnimJoint1617.setUSE("hanim_r_carpometacarpal_5")

HAnimHumanoid38.addJoints(HAnimJoint1617)
HAnimJoint1618 = x3d.HAnimJoint()
HAnimJoint1618.setContainerFieldOverride("joints")
HAnimJoint1618.setUSE("hanim_r_metacarpophalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint1618)
HAnimJoint1619 = x3d.HAnimJoint()
HAnimJoint1619.setContainerFieldOverride("joints")
HAnimJoint1619.setUSE("hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint1619)
HAnimJoint1620 = x3d.HAnimJoint()
HAnimJoint1620.setContainerFieldOverride("joints")
HAnimJoint1620.setUSE("hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint1620)
HAnimSegment1621 = x3d.HAnimSegment()
HAnimSegment1621.setContainerFieldOverride("segments")
HAnimSegment1621.setUSE("hanim_sacrum")

HAnimHumanoid38.addSegments(HAnimSegment1621)
HAnimSegment1622 = x3d.HAnimSegment()
HAnimSegment1622.setContainerFieldOverride("segments")
HAnimSegment1622.setUSE("hanim_pelvis")

HAnimHumanoid38.addSegments(HAnimSegment1622)
HAnimSegment1623 = x3d.HAnimSegment()
HAnimSegment1623.setContainerFieldOverride("segments")
HAnimSegment1623.setUSE("hanim_l_thigh")

HAnimHumanoid38.addSegments(HAnimSegment1623)
HAnimSegment1624 = x3d.HAnimSegment()
HAnimSegment1624.setContainerFieldOverride("segments")
HAnimSegment1624.setUSE("hanim_l_calf")

HAnimHumanoid38.addSegments(HAnimSegment1624)
HAnimSegment1625 = x3d.HAnimSegment()
HAnimSegment1625.setContainerFieldOverride("segments")
HAnimSegment1625.setUSE("hanim_l_talus")

HAnimHumanoid38.addSegments(HAnimSegment1625)
HAnimSegment1626 = x3d.HAnimSegment()
HAnimSegment1626.setContainerFieldOverride("segments")
HAnimSegment1626.setUSE("hanim_l_metatarsal_2")

HAnimHumanoid38.addSegments(HAnimSegment1626)
HAnimSegment1627 = x3d.HAnimSegment()
HAnimSegment1627.setContainerFieldOverride("segments")
HAnimSegment1627.setUSE("hanim_l_tarsal_proximal_phalanx_2")

HAnimHumanoid38.addSegments(HAnimSegment1627)
HAnimSegment1628 = x3d.HAnimSegment()
HAnimSegment1628.setContainerFieldOverride("segments")
HAnimSegment1628.setUSE("hanim_r_thigh")

HAnimHumanoid38.addSegments(HAnimSegment1628)
HAnimSegment1629 = x3d.HAnimSegment()
HAnimSegment1629.setContainerFieldOverride("segments")
HAnimSegment1629.setUSE("hanim_r_calf")

HAnimHumanoid38.addSegments(HAnimSegment1629)
HAnimSegment1630 = x3d.HAnimSegment()
HAnimSegment1630.setContainerFieldOverride("segments")
HAnimSegment1630.setUSE("hanim_r_talus")

HAnimHumanoid38.addSegments(HAnimSegment1630)
HAnimSegment1631 = x3d.HAnimSegment()
HAnimSegment1631.setContainerFieldOverride("segments")
HAnimSegment1631.setUSE("hanim_r_metatarsal_2")

HAnimHumanoid38.addSegments(HAnimSegment1631)
HAnimSegment1632 = x3d.HAnimSegment()
HAnimSegment1632.setContainerFieldOverride("segments")
HAnimSegment1632.setUSE("hanim_r_tarsal_proximal_phalanx_2")

HAnimHumanoid38.addSegments(HAnimSegment1632)
HAnimSegment1633 = x3d.HAnimSegment()
HAnimSegment1633.setContainerFieldOverride("segments")
HAnimSegment1633.setUSE("hanim_l5")

HAnimHumanoid38.addSegments(HAnimSegment1633)
HAnimSegment1634 = x3d.HAnimSegment()
HAnimSegment1634.setContainerFieldOverride("segments")
HAnimSegment1634.setUSE("hanim_l4")

HAnimHumanoid38.addSegments(HAnimSegment1634)
HAnimSegment1635 = x3d.HAnimSegment()
HAnimSegment1635.setContainerFieldOverride("segments")
HAnimSegment1635.setUSE("hanim_l3")

HAnimHumanoid38.addSegments(HAnimSegment1635)
HAnimSegment1636 = x3d.HAnimSegment()
HAnimSegment1636.setContainerFieldOverride("segments")
HAnimSegment1636.setUSE("hanim_l2")

HAnimHumanoid38.addSegments(HAnimSegment1636)
HAnimSegment1637 = x3d.HAnimSegment()
HAnimSegment1637.setContainerFieldOverride("segments")
HAnimSegment1637.setUSE("hanim_l1")

HAnimHumanoid38.addSegments(HAnimSegment1637)
HAnimSegment1638 = x3d.HAnimSegment()
HAnimSegment1638.setContainerFieldOverride("segments")
HAnimSegment1638.setUSE("hanim_t12")

HAnimHumanoid38.addSegments(HAnimSegment1638)
HAnimSegment1639 = x3d.HAnimSegment()
HAnimSegment1639.setContainerFieldOverride("segments")
HAnimSegment1639.setUSE("hanim_t11")

HAnimHumanoid38.addSegments(HAnimSegment1639)
HAnimSegment1640 = x3d.HAnimSegment()
HAnimSegment1640.setContainerFieldOverride("segments")
HAnimSegment1640.setUSE("hanim_t10")

HAnimHumanoid38.addSegments(HAnimSegment1640)
HAnimSegment1641 = x3d.HAnimSegment()
HAnimSegment1641.setContainerFieldOverride("segments")
HAnimSegment1641.setUSE("hanim_t9")

HAnimHumanoid38.addSegments(HAnimSegment1641)
HAnimSegment1642 = x3d.HAnimSegment()
HAnimSegment1642.setContainerFieldOverride("segments")
HAnimSegment1642.setUSE("hanim_t8")

HAnimHumanoid38.addSegments(HAnimSegment1642)
HAnimSegment1643 = x3d.HAnimSegment()
HAnimSegment1643.setContainerFieldOverride("segments")
HAnimSegment1643.setUSE("hanim_t7")

HAnimHumanoid38.addSegments(HAnimSegment1643)
HAnimSegment1644 = x3d.HAnimSegment()
HAnimSegment1644.setContainerFieldOverride("segments")
HAnimSegment1644.setUSE("hanim_t6")

HAnimHumanoid38.addSegments(HAnimSegment1644)
HAnimSegment1645 = x3d.HAnimSegment()
HAnimSegment1645.setContainerFieldOverride("segments")
HAnimSegment1645.setUSE("hanim_t5")

HAnimHumanoid38.addSegments(HAnimSegment1645)
HAnimSegment1646 = x3d.HAnimSegment()
HAnimSegment1646.setContainerFieldOverride("segments")
HAnimSegment1646.setUSE("hanim_t4")

HAnimHumanoid38.addSegments(HAnimSegment1646)
HAnimSegment1647 = x3d.HAnimSegment()
HAnimSegment1647.setContainerFieldOverride("segments")
HAnimSegment1647.setUSE("hanim_t3")

HAnimHumanoid38.addSegments(HAnimSegment1647)
HAnimSegment1648 = x3d.HAnimSegment()
HAnimSegment1648.setContainerFieldOverride("segments")
HAnimSegment1648.setUSE("hanim_t2")

HAnimHumanoid38.addSegments(HAnimSegment1648)
HAnimSegment1649 = x3d.HAnimSegment()
HAnimSegment1649.setContainerFieldOverride("segments")
HAnimSegment1649.setUSE("hanim_t1")

HAnimHumanoid38.addSegments(HAnimSegment1649)
HAnimSegment1650 = x3d.HAnimSegment()
HAnimSegment1650.setContainerFieldOverride("segments")
HAnimSegment1650.setUSE("hanim_c7")

HAnimHumanoid38.addSegments(HAnimSegment1650)
HAnimSegment1651 = x3d.HAnimSegment()
HAnimSegment1651.setContainerFieldOverride("segments")
HAnimSegment1651.setUSE("hanim_c6")

HAnimHumanoid38.addSegments(HAnimSegment1651)
HAnimSegment1652 = x3d.HAnimSegment()
HAnimSegment1652.setContainerFieldOverride("segments")
HAnimSegment1652.setUSE("hanim_c5")

HAnimHumanoid38.addSegments(HAnimSegment1652)
HAnimSegment1653 = x3d.HAnimSegment()
HAnimSegment1653.setContainerFieldOverride("segments")
HAnimSegment1653.setUSE("hanim_c4")

HAnimHumanoid38.addSegments(HAnimSegment1653)
HAnimSegment1654 = x3d.HAnimSegment()
HAnimSegment1654.setContainerFieldOverride("segments")
HAnimSegment1654.setUSE("hanim_c3")

HAnimHumanoid38.addSegments(HAnimSegment1654)
HAnimSegment1655 = x3d.HAnimSegment()
HAnimSegment1655.setContainerFieldOverride("segments")
HAnimSegment1655.setUSE("hanim_c2")

HAnimHumanoid38.addSegments(HAnimSegment1655)
HAnimSegment1656 = x3d.HAnimSegment()
HAnimSegment1656.setContainerFieldOverride("segments")
HAnimSegment1656.setUSE("hanim_c1")

HAnimHumanoid38.addSegments(HAnimSegment1656)
HAnimSegment1657 = x3d.HAnimSegment()
HAnimSegment1657.setContainerFieldOverride("segments")
HAnimSegment1657.setUSE("hanim_skull")

HAnimHumanoid38.addSegments(HAnimSegment1657)
HAnimSegment1658 = x3d.HAnimSegment()
HAnimSegment1658.setContainerFieldOverride("segments")
HAnimSegment1658.setUSE("hanim_l_clavicle")

HAnimHumanoid38.addSegments(HAnimSegment1658)
HAnimSegment1659 = x3d.HAnimSegment()
HAnimSegment1659.setContainerFieldOverride("segments")
HAnimSegment1659.setUSE("hanim_l_scapula")

HAnimHumanoid38.addSegments(HAnimSegment1659)
HAnimSegment1660 = x3d.HAnimSegment()
HAnimSegment1660.setContainerFieldOverride("segments")
HAnimSegment1660.setUSE("hanim_l_upperarm")

HAnimHumanoid38.addSegments(HAnimSegment1660)
HAnimSegment1661 = x3d.HAnimSegment()
HAnimSegment1661.setContainerFieldOverride("segments")
HAnimSegment1661.setUSE("hanim_l_forearm")

HAnimHumanoid38.addSegments(HAnimSegment1661)
HAnimSegment1662 = x3d.HAnimSegment()
HAnimSegment1662.setContainerFieldOverride("segments")
HAnimSegment1662.setUSE("hanim_l_carpal")

HAnimHumanoid38.addSegments(HAnimSegment1662)
HAnimSegment1663 = x3d.HAnimSegment()
HAnimSegment1663.setContainerFieldOverride("segments")
HAnimSegment1663.setUSE("hanim_l_metacarpal_1")

HAnimHumanoid38.addSegments(HAnimSegment1663)
HAnimSegment1664 = x3d.HAnimSegment()
HAnimSegment1664.setContainerFieldOverride("segments")
HAnimSegment1664.setUSE("hanim_l_carpal_proximal_phalanx_1")

HAnimHumanoid38.addSegments(HAnimSegment1664)
HAnimSegment1665 = x3d.HAnimSegment()
HAnimSegment1665.setContainerFieldOverride("segments")
HAnimSegment1665.setUSE("hanim_l_metacarpal_2")

HAnimHumanoid38.addSegments(HAnimSegment1665)
HAnimSegment1666 = x3d.HAnimSegment()
HAnimSegment1666.setContainerFieldOverride("segments")
HAnimSegment1666.setUSE("hanim_l_carpal_proximal_phalanx_2")

HAnimHumanoid38.addSegments(HAnimSegment1666)
HAnimSegment1667 = x3d.HAnimSegment()
HAnimSegment1667.setContainerFieldOverride("segments")
HAnimSegment1667.setUSE("hanim_l_carpal_middle_phalanx_2")

HAnimHumanoid38.addSegments(HAnimSegment1667)
HAnimSegment1668 = x3d.HAnimSegment()
HAnimSegment1668.setContainerFieldOverride("segments")
HAnimSegment1668.setUSE("hanim_l_metacarpal_3")

HAnimHumanoid38.addSegments(HAnimSegment1668)
HAnimSegment1669 = x3d.HAnimSegment()
HAnimSegment1669.setContainerFieldOverride("segments")
HAnimSegment1669.setUSE("hanim_l_carpal_proximal_phalanx_3")

HAnimHumanoid38.addSegments(HAnimSegment1669)
HAnimSegment1670 = x3d.HAnimSegment()
HAnimSegment1670.setContainerFieldOverride("segments")
HAnimSegment1670.setUSE("hanim_l_carpal_middle_phalanx_3")

HAnimHumanoid38.addSegments(HAnimSegment1670)
HAnimSegment1671 = x3d.HAnimSegment()
HAnimSegment1671.setContainerFieldOverride("segments")
HAnimSegment1671.setUSE("hanim_l_metacarpal_4")

HAnimHumanoid38.addSegments(HAnimSegment1671)
HAnimSegment1672 = x3d.HAnimSegment()
HAnimSegment1672.setContainerFieldOverride("segments")
HAnimSegment1672.setUSE("hanim_l_carpal_proximal_phalanx_4")

HAnimHumanoid38.addSegments(HAnimSegment1672)
HAnimSegment1673 = x3d.HAnimSegment()
HAnimSegment1673.setContainerFieldOverride("segments")
HAnimSegment1673.setUSE("hanim_l_carpal_middle_phalanx_4")

HAnimHumanoid38.addSegments(HAnimSegment1673)
HAnimSegment1674 = x3d.HAnimSegment()
HAnimSegment1674.setContainerFieldOverride("segments")
HAnimSegment1674.setUSE("hanim_l_metacarpal_5")

HAnimHumanoid38.addSegments(HAnimSegment1674)
HAnimSegment1675 = x3d.HAnimSegment()
HAnimSegment1675.setContainerFieldOverride("segments")
HAnimSegment1675.setUSE("hanim_l_carpal_proximal_phalanx_5")

HAnimHumanoid38.addSegments(HAnimSegment1675)
HAnimSegment1676 = x3d.HAnimSegment()
HAnimSegment1676.setContainerFieldOverride("segments")
HAnimSegment1676.setUSE("hanim_l_carpal_middle_phalanx_5")

HAnimHumanoid38.addSegments(HAnimSegment1676)
HAnimSegment1677 = x3d.HAnimSegment()
HAnimSegment1677.setContainerFieldOverride("segments")
HAnimSegment1677.setUSE("hanim_r_clavicle")

HAnimHumanoid38.addSegments(HAnimSegment1677)
HAnimSegment1678 = x3d.HAnimSegment()
HAnimSegment1678.setContainerFieldOverride("segments")
HAnimSegment1678.setUSE("hanim_r_scapula")

HAnimHumanoid38.addSegments(HAnimSegment1678)
HAnimSegment1679 = x3d.HAnimSegment()
HAnimSegment1679.setContainerFieldOverride("segments")
HAnimSegment1679.setUSE("hanim_r_upperarm")

HAnimHumanoid38.addSegments(HAnimSegment1679)
HAnimSegment1680 = x3d.HAnimSegment()
HAnimSegment1680.setContainerFieldOverride("segments")
HAnimSegment1680.setUSE("hanim_r_forearm")

HAnimHumanoid38.addSegments(HAnimSegment1680)
HAnimSegment1681 = x3d.HAnimSegment()
HAnimSegment1681.setContainerFieldOverride("segments")
HAnimSegment1681.setUSE("hanim_r_carpal")

HAnimHumanoid38.addSegments(HAnimSegment1681)
HAnimSegment1682 = x3d.HAnimSegment()
HAnimSegment1682.setContainerFieldOverride("segments")
HAnimSegment1682.setUSE("hanim_r_metacarpal_1")

HAnimHumanoid38.addSegments(HAnimSegment1682)
HAnimSegment1683 = x3d.HAnimSegment()
HAnimSegment1683.setContainerFieldOverride("segments")
HAnimSegment1683.setUSE("hanim_r_carpal_proximal_phalanx_1")

HAnimHumanoid38.addSegments(HAnimSegment1683)
HAnimSegment1684 = x3d.HAnimSegment()
HAnimSegment1684.setContainerFieldOverride("segments")
HAnimSegment1684.setUSE("hanim_r_metacarpal_2")

HAnimHumanoid38.addSegments(HAnimSegment1684)
HAnimSegment1685 = x3d.HAnimSegment()
HAnimSegment1685.setContainerFieldOverride("segments")
HAnimSegment1685.setUSE("hanim_r_carpal_proximal_phalanx_2")

HAnimHumanoid38.addSegments(HAnimSegment1685)
HAnimSegment1686 = x3d.HAnimSegment()
HAnimSegment1686.setContainerFieldOverride("segments")
HAnimSegment1686.setUSE("hanim_r_carpal_middle_phalanx_2")

HAnimHumanoid38.addSegments(HAnimSegment1686)
HAnimSegment1687 = x3d.HAnimSegment()
HAnimSegment1687.setContainerFieldOverride("segments")
HAnimSegment1687.setUSE("hanim_r_metacarpal_3")

HAnimHumanoid38.addSegments(HAnimSegment1687)
HAnimSegment1688 = x3d.HAnimSegment()
HAnimSegment1688.setContainerFieldOverride("segments")
HAnimSegment1688.setUSE("hanim_r_carpal_proximal_phalanx_3")

HAnimHumanoid38.addSegments(HAnimSegment1688)
HAnimSegment1689 = x3d.HAnimSegment()
HAnimSegment1689.setContainerFieldOverride("segments")
HAnimSegment1689.setUSE("hanim_r_carpal_middle_phalanx_3")

HAnimHumanoid38.addSegments(HAnimSegment1689)
HAnimSegment1690 = x3d.HAnimSegment()
HAnimSegment1690.setContainerFieldOverride("segments")
HAnimSegment1690.setUSE("hanim_r_metacarpal_4")

HAnimHumanoid38.addSegments(HAnimSegment1690)
HAnimSegment1691 = x3d.HAnimSegment()
HAnimSegment1691.setContainerFieldOverride("segments")
HAnimSegment1691.setUSE("hanim_r_carpal_proximal_phalanx_4")

HAnimHumanoid38.addSegments(HAnimSegment1691)
HAnimSegment1692 = x3d.HAnimSegment()
HAnimSegment1692.setContainerFieldOverride("segments")
HAnimSegment1692.setUSE("hanim_r_carpal_middle_phalanx_4")

HAnimHumanoid38.addSegments(HAnimSegment1692)
HAnimSegment1693 = x3d.HAnimSegment()
HAnimSegment1693.setContainerFieldOverride("segments")
HAnimSegment1693.setUSE("hanim_r_metacarpal_5")

HAnimHumanoid38.addSegments(HAnimSegment1693)
HAnimSegment1694 = x3d.HAnimSegment()
HAnimSegment1694.setContainerFieldOverride("segments")
HAnimSegment1694.setUSE("hanim_r_carpal_proximal_phalanx_5")

HAnimHumanoid38.addSegments(HAnimSegment1694)
HAnimSegment1695 = x3d.HAnimSegment()
HAnimSegment1695.setContainerFieldOverride("segments")
HAnimSegment1695.setUSE("hanim_r_carpal_middle_phalanx_5")

HAnimHumanoid38.addSegments(HAnimSegment1695)
HAnimSite1696 = x3d.HAnimSite()
HAnimSite1696.setContainerFieldOverride("sites")
HAnimSite1696.setUSE("hanim_buttocks_standing_wall_contact_point")

HAnimHumanoid38.addSites(HAnimSite1696)
HAnimSite1697 = x3d.HAnimSite()
HAnimSite1697.setContainerFieldOverride("sites")
HAnimSite1697.setUSE("hanim_crotch")

HAnimHumanoid38.addSites(HAnimSite1697)
HAnimSite1698 = x3d.HAnimSite()
HAnimSite1698.setContainerFieldOverride("sites")
HAnimSite1698.setUSE("hanim_l_asis")

HAnimHumanoid38.addSites(HAnimSite1698)
HAnimSite1699 = x3d.HAnimSite()
HAnimSite1699.setContainerFieldOverride("sites")
HAnimSite1699.setUSE("hanim_l_iliocristale")

HAnimHumanoid38.addSites(HAnimSite1699)
HAnimSite1700 = x3d.HAnimSite()
HAnimSite1700.setContainerFieldOverride("sites")
HAnimSite1700.setUSE("hanim_l_psis")

HAnimHumanoid38.addSites(HAnimSite1700)
HAnimSite1701 = x3d.HAnimSite()
HAnimSite1701.setContainerFieldOverride("sites")
HAnimSite1701.setUSE("hanim_l_trochanterion")

HAnimHumanoid38.addSites(HAnimSite1701)
HAnimSite1702 = x3d.HAnimSite()
HAnimSite1702.setContainerFieldOverride("sites")
HAnimSite1702.setUSE("hanim_r_asis")

HAnimHumanoid38.addSites(HAnimSite1702)
HAnimSite1703 = x3d.HAnimSite()
HAnimSite1703.setContainerFieldOverride("sites")
HAnimSite1703.setUSE("hanim_r_iliocristale")

HAnimHumanoid38.addSites(HAnimSite1703)
HAnimSite1704 = x3d.HAnimSite()
HAnimSite1704.setContainerFieldOverride("sites")
HAnimSite1704.setUSE("hanim_r_psis")

HAnimHumanoid38.addSites(HAnimSite1704)
HAnimSite1705 = x3d.HAnimSite()
HAnimSite1705.setContainerFieldOverride("sites")
HAnimSite1705.setUSE("hanim_r_trochanterion")

HAnimHumanoid38.addSites(HAnimSite1705)
HAnimSite1706 = x3d.HAnimSite()
HAnimSite1706.setContainerFieldOverride("sites")
HAnimSite1706.setUSE("hanim_l_femoral_lateral_epicondyles")

HAnimHumanoid38.addSites(HAnimSite1706)
HAnimSite1707 = x3d.HAnimSite()
HAnimSite1707.setContainerFieldOverride("sites")
HAnimSite1707.setUSE("hanim_l_femoral_medial_epicondyles")

HAnimHumanoid38.addSites(HAnimSite1707)
HAnimSite1708 = x3d.HAnimSite()
HAnimSite1708.setContainerFieldOverride("sites")
HAnimSite1708.setUSE("hanim_l_knee_crease")

HAnimHumanoid38.addSites(HAnimSite1708)
HAnimSite1709 = x3d.HAnimSite()
HAnimSite1709.setContainerFieldOverride("sites")
HAnimSite1709.setUSE("hanim_l_suprapatella")

HAnimHumanoid38.addSites(HAnimSite1709)
HAnimSite1710 = x3d.HAnimSite()
HAnimSite1710.setContainerFieldOverride("sites")
HAnimSite1710.setUSE("hanim_l_lateral_malleolus")

HAnimHumanoid38.addSites(HAnimSite1710)
HAnimSite1711 = x3d.HAnimSite()
HAnimSite1711.setContainerFieldOverride("sites")
HAnimSite1711.setUSE("hanim_l_medial_malleolus")

HAnimHumanoid38.addSites(HAnimSite1711)
HAnimSite1712 = x3d.HAnimSite()
HAnimSite1712.setContainerFieldOverride("sites")
HAnimSite1712.setUSE("hanim_l_tibiale")

HAnimHumanoid38.addSites(HAnimSite1712)
HAnimSite1713 = x3d.HAnimSite()
HAnimSite1713.setContainerFieldOverride("sites")
HAnimSite1713.setUSE("hanim_l_calcaneus_posterior")

HAnimHumanoid38.addSites(HAnimSite1713)
HAnimSite1714 = x3d.HAnimSite()
HAnimSite1714.setContainerFieldOverride("sites")
HAnimSite1714.setUSE("hanim_l_sphyrion")

HAnimHumanoid38.addSites(HAnimSite1714)
HAnimSite1715 = x3d.HAnimSite()
HAnimSite1715.setContainerFieldOverride("sites")
HAnimSite1715.setUSE("hanim_l_metatarsal_phalanx_1")

HAnimHumanoid38.addSites(HAnimSite1715)
HAnimSite1716 = x3d.HAnimSite()
HAnimSite1716.setContainerFieldOverride("sites")
HAnimSite1716.setUSE("hanim_l_metatarsal_phalanx_5")

HAnimHumanoid38.addSites(HAnimSite1716)
HAnimSite1717 = x3d.HAnimSite()
HAnimSite1717.setContainerFieldOverride("sites")
HAnimSite1717.setUSE("hanim_l_tarsal_distal_phalanx_1_tip")

HAnimHumanoid38.addSites(HAnimSite1717)
HAnimSite1718 = x3d.HAnimSite()
HAnimSite1718.setContainerFieldOverride("sites")
HAnimSite1718.setUSE("hanim_l_tarsal_distal_phalanx_2_tip")

HAnimHumanoid38.addSites(HAnimSite1718)
HAnimSite1719 = x3d.HAnimSite()
HAnimSite1719.setContainerFieldOverride("sites")
HAnimSite1719.setUSE("hanim_l_tarsal_distal_phalanx_3_tip")

HAnimHumanoid38.addSites(HAnimSite1719)
HAnimSite1720 = x3d.HAnimSite()
HAnimSite1720.setContainerFieldOverride("sites")
HAnimSite1720.setUSE("hanim_l_tarsal_distal_phalanx_4_tip")

HAnimHumanoid38.addSites(HAnimSite1720)
HAnimSite1721 = x3d.HAnimSite()
HAnimSite1721.setContainerFieldOverride("sites")
HAnimSite1721.setUSE("hanim_l_tarsal_distal_phalanx_5_tip")

HAnimHumanoid38.addSites(HAnimSite1721)
HAnimSite1722 = x3d.HAnimSite()
HAnimSite1722.setContainerFieldOverride("sites")
HAnimSite1722.setUSE("hanim_r_femoral_lateral_epicondyles")

HAnimHumanoid38.addSites(HAnimSite1722)
HAnimSite1723 = x3d.HAnimSite()
HAnimSite1723.setContainerFieldOverride("sites")
HAnimSite1723.setUSE("hanim_r_femoral_medial_epicondyles")

HAnimHumanoid38.addSites(HAnimSite1723)
HAnimSite1724 = x3d.HAnimSite()
HAnimSite1724.setContainerFieldOverride("sites")
HAnimSite1724.setUSE("hanim_r_knee_crease")

HAnimHumanoid38.addSites(HAnimSite1724)
HAnimSite1725 = x3d.HAnimSite()
HAnimSite1725.setContainerFieldOverride("sites")
HAnimSite1725.setUSE("hanim_r_suprapatella")

HAnimHumanoid38.addSites(HAnimSite1725)
HAnimSite1726 = x3d.HAnimSite()
HAnimSite1726.setContainerFieldOverride("sites")
HAnimSite1726.setUSE("hanim_r_lateral_malleolus")

HAnimHumanoid38.addSites(HAnimSite1726)
HAnimSite1727 = x3d.HAnimSite()
HAnimSite1727.setContainerFieldOverride("sites")
HAnimSite1727.setUSE("hanim_r_medial_malleolus")

HAnimHumanoid38.addSites(HAnimSite1727)
HAnimSite1728 = x3d.HAnimSite()
HAnimSite1728.setContainerFieldOverride("sites")
HAnimSite1728.setUSE("hanim_r_tibiale")

HAnimHumanoid38.addSites(HAnimSite1728)
HAnimSite1729 = x3d.HAnimSite()
HAnimSite1729.setContainerFieldOverride("sites")
HAnimSite1729.setUSE("hanim_r_calcaneus_posterior")

HAnimHumanoid38.addSites(HAnimSite1729)
HAnimSite1730 = x3d.HAnimSite()
HAnimSite1730.setContainerFieldOverride("sites")
HAnimSite1730.setUSE("hanim_r_sphyrion")

HAnimHumanoid38.addSites(HAnimSite1730)
HAnimSite1731 = x3d.HAnimSite()
HAnimSite1731.setContainerFieldOverride("sites")
HAnimSite1731.setUSE("hanim_r_metatarsal_phalanx_1")

HAnimHumanoid38.addSites(HAnimSite1731)
HAnimSite1732 = x3d.HAnimSite()
HAnimSite1732.setContainerFieldOverride("sites")
HAnimSite1732.setUSE("hanim_r_metatarsal_phalanx_5")

HAnimHumanoid38.addSites(HAnimSite1732)
HAnimSite1733 = x3d.HAnimSite()
HAnimSite1733.setContainerFieldOverride("sites")
HAnimSite1733.setUSE("hanim_r_tarsal_distal_phalanx_1_tip")

HAnimHumanoid38.addSites(HAnimSite1733)
HAnimSite1734 = x3d.HAnimSite()
HAnimSite1734.setContainerFieldOverride("sites")
HAnimSite1734.setUSE("hanim_r_tarsal_distal_phalanx_2_tip")

HAnimHumanoid38.addSites(HAnimSite1734)
HAnimSite1735 = x3d.HAnimSite()
HAnimSite1735.setContainerFieldOverride("sites")
HAnimSite1735.setUSE("hanim_r_tarsal_distal_phalanx_3_tip")

HAnimHumanoid38.addSites(HAnimSite1735)
HAnimSite1736 = x3d.HAnimSite()
HAnimSite1736.setContainerFieldOverride("sites")
HAnimSite1736.setUSE("hanim_r_tarsal_distal_phalanx_4_tip")

HAnimHumanoid38.addSites(HAnimSite1736)
HAnimSite1737 = x3d.HAnimSite()
HAnimSite1737.setContainerFieldOverride("sites")
HAnimSite1737.setUSE("hanim_r_tarsal_distal_phalanx_5_tip")

HAnimHumanoid38.addSites(HAnimSite1737)
HAnimSite1738 = x3d.HAnimSite()
HAnimSite1738.setContainerFieldOverride("sites")
HAnimSite1738.setUSE("hanim_navel")

HAnimHumanoid38.addSites(HAnimSite1738)
HAnimSite1739 = x3d.HAnimSite()
HAnimSite1739.setContainerFieldOverride("sites")
HAnimSite1739.setUSE("hanim_waist_preferred_anterior")

HAnimHumanoid38.addSites(HAnimSite1739)
HAnimSite1740 = x3d.HAnimSite()
HAnimSite1740.setContainerFieldOverride("sites")
HAnimSite1740.setUSE("hanim_waist_preferred_posterior")

HAnimHumanoid38.addSites(HAnimSite1740)
HAnimSite1741 = x3d.HAnimSite()
HAnimSite1741.setContainerFieldOverride("sites")
HAnimSite1741.setUSE("hanim_l_rib10")

HAnimHumanoid38.addSites(HAnimSite1741)
HAnimSite1742 = x3d.HAnimSite()
HAnimSite1742.setContainerFieldOverride("sites")
HAnimSite1742.setUSE("hanim_r_rib10")

HAnimHumanoid38.addSites(HAnimSite1742)
HAnimSite1743 = x3d.HAnimSite()
HAnimSite1743.setContainerFieldOverride("sites")
HAnimSite1743.setUSE("hanim_spine_2_middle_back")

HAnimHumanoid38.addSites(HAnimSite1743)
HAnimSite1744 = x3d.HAnimSite()
HAnimSite1744.setContainerFieldOverride("sites")
HAnimSite1744.setUSE("hanim_substernale")

HAnimHumanoid38.addSites(HAnimSite1744)
HAnimSite1745 = x3d.HAnimSite()
HAnimSite1745.setContainerFieldOverride("sites")
HAnimSite1745.setUSE("hanim_l_thelion")

HAnimHumanoid38.addSites(HAnimSite1745)
HAnimSite1746 = x3d.HAnimSite()
HAnimSite1746.setContainerFieldOverride("sites")
HAnimSite1746.setUSE("hanim_r_thelion")

HAnimHumanoid38.addSites(HAnimSite1746)
HAnimSite1747 = x3d.HAnimSite()
HAnimSite1747.setContainerFieldOverride("sites")
HAnimSite1747.setUSE("hanim_l_chest_midsagittal_plane")

HAnimHumanoid38.addSites(HAnimSite1747)
HAnimSite1748 = x3d.HAnimSite()
HAnimSite1748.setContainerFieldOverride("sites")
HAnimSite1748.setUSE("hanim_mesosternale")

HAnimHumanoid38.addSites(HAnimSite1748)
HAnimSite1749 = x3d.HAnimSite()
HAnimSite1749.setContainerFieldOverride("sites")
HAnimSite1749.setUSE("hanim_r_chest_midsagittal_plane")

HAnimHumanoid38.addSites(HAnimSite1749)
HAnimSite1750 = x3d.HAnimSite()
HAnimSite1750.setContainerFieldOverride("sites")
HAnimSite1750.setUSE("hanim_rear_center_midsagittal_plane")

HAnimHumanoid38.addSites(HAnimSite1750)
HAnimSite1751 = x3d.HAnimSite()
HAnimSite1751.setContainerFieldOverride("sites")
HAnimSite1751.setUSE("hanim_spine_1_middle_back")

HAnimHumanoid38.addSites(HAnimSite1751)
HAnimSite1752 = x3d.HAnimSite()
HAnimSite1752.setContainerFieldOverride("sites")
HAnimSite1752.setUSE("hanim_cervicale")

HAnimHumanoid38.addSites(HAnimSite1752)
HAnimSite1753 = x3d.HAnimSite()
HAnimSite1753.setContainerFieldOverride("sites")
HAnimSite1753.setUSE("hanim_suprasternale")

HAnimHumanoid38.addSites(HAnimSite1753)
HAnimSite1754 = x3d.HAnimSite()
HAnimSite1754.setContainerFieldOverride("sites")
HAnimSite1754.setUSE("hanim_l_neck_base")

HAnimHumanoid38.addSites(HAnimSite1754)
HAnimSite1755 = x3d.HAnimSite()
HAnimSite1755.setContainerFieldOverride("sites")
HAnimSite1755.setUSE("hanim_r_neck_base")

HAnimHumanoid38.addSites(HAnimSite1755)
HAnimSite1756 = x3d.HAnimSite()
HAnimSite1756.setContainerFieldOverride("sites")
HAnimSite1756.setUSE("hanim_adams_apple")

HAnimHumanoid38.addSites(HAnimSite1756)
HAnimSite1757 = x3d.HAnimSite()
HAnimSite1757.setContainerFieldOverride("sites")
HAnimSite1757.setUSE("hanim_glabella")

HAnimHumanoid38.addSites(HAnimSite1757)
HAnimSite1758 = x3d.HAnimSite()
HAnimSite1758.setContainerFieldOverride("sites")
HAnimSite1758.setUSE("hanim_l_ectocanthus")

HAnimHumanoid38.addSites(HAnimSite1758)
HAnimSite1759 = x3d.HAnimSite()
HAnimSite1759.setContainerFieldOverride("sites")
HAnimSite1759.setUSE("hanim_l_infraorbitale")

HAnimHumanoid38.addSites(HAnimSite1759)
HAnimSite1760 = x3d.HAnimSite()
HAnimSite1760.setContainerFieldOverride("sites")
HAnimSite1760.setUSE("hanim_l_tragion")

HAnimHumanoid38.addSites(HAnimSite1760)
HAnimSite1761 = x3d.HAnimSite()
HAnimSite1761.setContainerFieldOverride("sites")
HAnimSite1761.setUSE("hanim_nuchale")

HAnimHumanoid38.addSites(HAnimSite1761)
HAnimSite1762 = x3d.HAnimSite()
HAnimSite1762.setContainerFieldOverride("sites")
HAnimSite1762.setUSE("hanim_opisthocranion")

HAnimHumanoid38.addSites(HAnimSite1762)
HAnimSite1763 = x3d.HAnimSite()
HAnimSite1763.setContainerFieldOverride("sites")
HAnimSite1763.setUSE("hanim_r_ectocanthus")

HAnimHumanoid38.addSites(HAnimSite1763)
HAnimSite1764 = x3d.HAnimSite()
HAnimSite1764.setContainerFieldOverride("sites")
HAnimSite1764.setUSE("hanim_r_infraorbitale")

HAnimHumanoid38.addSites(HAnimSite1764)
HAnimSite1765 = x3d.HAnimSite()
HAnimSite1765.setContainerFieldOverride("sites")
HAnimSite1765.setUSE("hanim_r_tragion")

HAnimHumanoid38.addSites(HAnimSite1765)
HAnimSite1766 = x3d.HAnimSite()
HAnimSite1766.setContainerFieldOverride("sites")
HAnimSite1766.setUSE("hanim_sellion")

HAnimHumanoid38.addSites(HAnimSite1766)
HAnimSite1767 = x3d.HAnimSite()
HAnimSite1767.setContainerFieldOverride("sites")
HAnimSite1767.setUSE("hanim_skull_vertex")

HAnimHumanoid38.addSites(HAnimSite1767)
HAnimSite1768 = x3d.HAnimSite()
HAnimSite1768.setContainerFieldOverride("sites")
HAnimSite1768.setUSE("hanim_l_acromion")

HAnimHumanoid38.addSites(HAnimSite1768)
HAnimSite1769 = x3d.HAnimSite()
HAnimSite1769.setContainerFieldOverride("sites")
HAnimSite1769.setUSE("hanim_l_axilla_distal")

HAnimHumanoid38.addSites(HAnimSite1769)
HAnimSite1770 = x3d.HAnimSite()
HAnimSite1770.setContainerFieldOverride("sites")
HAnimSite1770.setUSE("hanim_l_axilla_posterior_folds")

HAnimHumanoid38.addSites(HAnimSite1770)
HAnimSite1771 = x3d.HAnimSite()
HAnimSite1771.setContainerFieldOverride("sites")
HAnimSite1771.setUSE("hanim_l_axilla_proximal")

HAnimHumanoid38.addSites(HAnimSite1771)
HAnimSite1772 = x3d.HAnimSite()
HAnimSite1772.setContainerFieldOverride("sites")
HAnimSite1772.setUSE("hanim_l_clavicale")

HAnimHumanoid38.addSites(HAnimSite1772)
HAnimSite1773 = x3d.HAnimSite()
HAnimSite1773.setContainerFieldOverride("sites")
HAnimSite1773.setUSE("hanim_l_bideltoid")

HAnimHumanoid38.addSites(HAnimSite1773)
HAnimSite1774 = x3d.HAnimSite()
HAnimSite1774.setContainerFieldOverride("sites")
HAnimSite1774.setUSE("hanim_l_humeral_lateral_epicondyles")

HAnimHumanoid38.addSites(HAnimSite1774)
HAnimSite1775 = x3d.HAnimSite()
HAnimSite1775.setContainerFieldOverride("sites")
HAnimSite1775.setUSE("hanim_l_humeral_medial_epicondyles")

HAnimHumanoid38.addSites(HAnimSite1775)
HAnimSite1776 = x3d.HAnimSite()
HAnimSite1776.setContainerFieldOverride("sites")
HAnimSite1776.setUSE("hanim_l_olecranon")

HAnimHumanoid38.addSites(HAnimSite1776)
HAnimSite1777 = x3d.HAnimSite()
HAnimSite1777.setContainerFieldOverride("sites")
HAnimSite1777.setUSE("hanim_l_radial_styloid")

HAnimHumanoid38.addSites(HAnimSite1777)
HAnimSite1778 = x3d.HAnimSite()
HAnimSite1778.setContainerFieldOverride("sites")
HAnimSite1778.setUSE("hanim_l_radiale")

HAnimHumanoid38.addSites(HAnimSite1778)
HAnimSite1779 = x3d.HAnimSite()
HAnimSite1779.setContainerFieldOverride("sites")
HAnimSite1779.setUSE("hanim_l_ulnar_styloid")

HAnimHumanoid38.addSites(HAnimSite1779)
HAnimSite1780 = x3d.HAnimSite()
HAnimSite1780.setContainerFieldOverride("sites")
HAnimSite1780.setUSE("hanim_l_metacarpal_phalanx_2")

HAnimHumanoid38.addSites(HAnimSite1780)
HAnimSite1781 = x3d.HAnimSite()
HAnimSite1781.setContainerFieldOverride("sites")
HAnimSite1781.setUSE("hanim_l_metacarpal_phalanx_3")

HAnimHumanoid38.addSites(HAnimSite1781)
HAnimSite1782 = x3d.HAnimSite()
HAnimSite1782.setContainerFieldOverride("sites")
HAnimSite1782.setUSE("hanim_l_metacarpal_phalanx_5")

HAnimHumanoid38.addSites(HAnimSite1782)
HAnimSite1783 = x3d.HAnimSite()
HAnimSite1783.setContainerFieldOverride("sites")
HAnimSite1783.setUSE("hanim_r_acromion")

HAnimHumanoid38.addSites(HAnimSite1783)
HAnimSite1784 = x3d.HAnimSite()
HAnimSite1784.setContainerFieldOverride("sites")
HAnimSite1784.setUSE("hanim_r_axilla_distal")

HAnimHumanoid38.addSites(HAnimSite1784)
HAnimSite1785 = x3d.HAnimSite()
HAnimSite1785.setContainerFieldOverride("sites")
HAnimSite1785.setUSE("hanim_r_axilla_posterior_folds")

HAnimHumanoid38.addSites(HAnimSite1785)
HAnimSite1786 = x3d.HAnimSite()
HAnimSite1786.setContainerFieldOverride("sites")
HAnimSite1786.setUSE("hanim_r_axilla_proximal")

HAnimHumanoid38.addSites(HAnimSite1786)
HAnimSite1787 = x3d.HAnimSite()
HAnimSite1787.setContainerFieldOverride("sites")
HAnimSite1787.setUSE("hanim_r_clavicale")

HAnimHumanoid38.addSites(HAnimSite1787)
HAnimSite1788 = x3d.HAnimSite()
HAnimSite1788.setContainerFieldOverride("sites")
HAnimSite1788.setUSE("hanim_r_bideltoid")

HAnimHumanoid38.addSites(HAnimSite1788)
HAnimSite1789 = x3d.HAnimSite()
HAnimSite1789.setContainerFieldOverride("sites")
HAnimSite1789.setUSE("hanim_r_humeral_lateral_epicondyles")

HAnimHumanoid38.addSites(HAnimSite1789)
HAnimSite1790 = x3d.HAnimSite()
HAnimSite1790.setContainerFieldOverride("sites")
HAnimSite1790.setUSE("hanim_r_humeral_medial_epicondyles")

HAnimHumanoid38.addSites(HAnimSite1790)
HAnimSite1791 = x3d.HAnimSite()
HAnimSite1791.setContainerFieldOverride("sites")
HAnimSite1791.setUSE("hanim_r_olecranon")

HAnimHumanoid38.addSites(HAnimSite1791)
HAnimSite1792 = x3d.HAnimSite()
HAnimSite1792.setContainerFieldOverride("sites")
HAnimSite1792.setUSE("hanim_r_radial_styloid")

HAnimHumanoid38.addSites(HAnimSite1792)
HAnimSite1793 = x3d.HAnimSite()
HAnimSite1793.setContainerFieldOverride("sites")
HAnimSite1793.setUSE("hanim_r_radiale")

HAnimHumanoid38.addSites(HAnimSite1793)
HAnimSite1794 = x3d.HAnimSite()
HAnimSite1794.setContainerFieldOverride("sites")
HAnimSite1794.setUSE("hanim_r_ulnar_styloid")

HAnimHumanoid38.addSites(HAnimSite1794)
HAnimSite1795 = x3d.HAnimSite()
HAnimSite1795.setContainerFieldOverride("sites")
HAnimSite1795.setUSE("hanim_r_metacarpal_phalanx_2")

HAnimHumanoid38.addSites(HAnimSite1795)
HAnimSite1796 = x3d.HAnimSite()
HAnimSite1796.setContainerFieldOverride("sites")
HAnimSite1796.setUSE("hanim_r_metacarpal_phalanx_3")

HAnimHumanoid38.addSites(HAnimSite1796)
HAnimSite1797 = x3d.HAnimSite()
HAnimSite1797.setContainerFieldOverride("sites")
HAnimSite1797.setUSE("hanim_r_metacarpal_phalanx_5")

HAnimHumanoid38.addSites(HAnimSite1797)

Scene11.addChildren(HAnimHumanoid38)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/Humanoid3.new.python.x3d")
X3D0.toFileJSON("../data/Humanoid3.new.python.json")
