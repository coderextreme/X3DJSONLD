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
Coordinate466.setPoint([0.0028,1.0568,-0.0776,0.0041,1.1276,-0.0796])

LineSet465.setCoord(Coordinate466)
#from vl5 to vl3 vertices 2
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
HAnimJoint489.setName("vl3")
HAnimJoint489.setDEF("hanim_vl3")
HAnimJoint489.setCenter([0.0041,1.1276,-0.0796])
HAnimJoint489.setUlimit([0,0,0])
HAnimJoint489.setLlimit([0,0,0])
HAnimSegment490 = x3d.HAnimSegment()
HAnimSegment490.setName("l3")
HAnimSegment490.setDEF("hanim_l3")
Transform491 = x3d.Transform()
Transform491.setTranslation([0.0041,1.1276,-0.0796])
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
Coordinate496.setPoint([0.0041,1.1276,-0.0796,0.0048,1.1912,-0.0805])

LineSet495.setCoord(Coordinate496)
#from vl3 to vl1 vertices 2
ColorRGBA497 = x3d.ColorRGBA()
ColorRGBA497.setUSE("HAnimSegmentLineColorRGBA")

LineSet495.setColor(ColorRGBA497)

Shape494.setGeometry(LineSet495)

HAnimSegment490.addChildren(Shape494)
HAnimSite498 = x3d.HAnimSite()
HAnimSite498.setName("l_rib10")
HAnimSite498.setDEF("hanim_l_rib10")
HAnimSite498.setTranslation([0.0871,1.1925,0.0992])
TouchSensor499 = x3d.TouchSensor()
TouchSensor499.setDescription("HAnimSite 28 l_rib10")

HAnimSite498.addChildren(TouchSensor499)
Shape500 = x3d.Shape()
Shape500.setUSE("HAnimSiteShape")

HAnimSite498.addChildren(Shape500)
Billboard501 = x3d.Billboard()
Shape502 = x3d.Shape()
Text503 = x3d.Text()
Text503.setString(["28"])
FontStyle504 = x3d.FontStyle()
FontStyle504.setSize(0.035)

Text503.setFontStyle(FontStyle504)

Shape502.setGeometry(Text503)

Billboard501.addChildren(Shape502)

HAnimSite498.addChildren(Billboard501)

HAnimSegment490.addChildren(HAnimSite498)
HAnimSite505 = x3d.HAnimSite()
HAnimSite505.setName("r_rib10")
HAnimSite505.setDEF("hanim_r_rib10")
HAnimSite505.setTranslation([-0.0711,1.1941,0.1016])
TouchSensor506 = x3d.TouchSensor()
TouchSensor506.setDescription("HAnimSite 30 r_rib10")

HAnimSite505.addChildren(TouchSensor506)
Shape507 = x3d.Shape()
Shape507.setUSE("HAnimSiteShape")

HAnimSite505.addChildren(Shape507)
Billboard508 = x3d.Billboard()
Shape509 = x3d.Shape()
Text510 = x3d.Text()
Text510.setString(["30"])
FontStyle511 = x3d.FontStyle()
FontStyle511.setSize(0.035)

Text510.setFontStyle(FontStyle511)

Shape509.setGeometry(Text510)

Billboard508.addChildren(Shape509)

HAnimSite505.addChildren(Billboard508)

HAnimSegment490.addChildren(HAnimSite505)
HAnimSite512 = x3d.HAnimSite()
HAnimSite512.setName("spine_1_middle_back")
HAnimSite512.setDEF("hanim_spine_1_middle_back")
TouchSensor513 = x3d.TouchSensor()
TouchSensor513.setDescription("HAnimSite 24 spine_1_middle_back")

HAnimSite512.addChildren(TouchSensor513)
Shape514 = x3d.Shape()
Shape514.setUSE("HAnimSiteShape")

HAnimSite512.addChildren(Shape514)
Billboard515 = x3d.Billboard()
Shape516 = x3d.Shape()
Text517 = x3d.Text()
Text517.setString(["24"])
FontStyle518 = x3d.FontStyle()
FontStyle518.setSize(0.035)

Text517.setFontStyle(FontStyle518)

Shape516.setGeometry(Text517)

Billboard515.addChildren(Shape516)

HAnimSite512.addChildren(Billboard515)

HAnimSegment490.addChildren(HAnimSite512)
HAnimSite519 = x3d.HAnimSite()
HAnimSite519.setName("spine_2_middle_back")
HAnimSite519.setDEF("hanim_spine_2_middle_back")
TouchSensor520 = x3d.TouchSensor()
TouchSensor520.setDescription("HAnimSite spine_2_middle_back")

HAnimSite519.addChildren(TouchSensor520)
Shape521 = x3d.Shape()
Shape521.setUSE("HAnimSiteShape")

HAnimSite519.addChildren(Shape521)
Billboard522 = x3d.Billboard()
Shape523 = x3d.Shape()
Text524 = x3d.Text()
Text524.setString([""])
FontStyle525 = x3d.FontStyle()
FontStyle525.setSize(0.035)

Text524.setFontStyle(FontStyle525)

Shape523.setGeometry(Text524)

Billboard522.addChildren(Shape523)

HAnimSite519.addChildren(Billboard522)

HAnimSegment490.addChildren(HAnimSite519)

HAnimJoint489.addChildren(HAnimSegment490)
HAnimJoint526 = x3d.HAnimJoint()
HAnimJoint526.setName("vl1")
HAnimJoint526.setDEF("hanim_vl1")
HAnimJoint526.setCenter([0.0048,1.1912,-0.0805])
HAnimJoint526.setUlimit([0,0,0])
HAnimJoint526.setLlimit([0,0,0])
HAnimSegment527 = x3d.HAnimSegment()
HAnimSegment527.setName("l1")
HAnimSegment527.setDEF("hanim_l1")
Transform528 = x3d.Transform()
Transform528.setTranslation([0.0048,1.1912,-0.0805])
Transform529 = x3d.Transform()
#Empty Transform
Shape530 = x3d.Shape()
Shape530.setUSE("HAnimJointShape")

Transform529.addChild(Shape530)

Transform528.addChildren(Transform529)

HAnimSegment527.addChildren(Transform528)
Shape531 = x3d.Shape()
LineSet532 = x3d.LineSet()
LineSet532.setVertexCount([2])
Coordinate533 = x3d.Coordinate()
Coordinate533.setPoint([0.0048,1.1912,-0.0805,0.0056,1.2848,-0.0822])

LineSet532.setCoord(Coordinate533)
#from vl1 to vt10 vertices 2
ColorRGBA534 = x3d.ColorRGBA()
ColorRGBA534.setUSE("HAnimSegmentLineColorRGBA")

LineSet532.setColor(ColorRGBA534)

Shape531.setGeometry(LineSet532)

HAnimSegment527.addChildren(Shape531)

HAnimJoint526.addChildren(HAnimSegment527)
HAnimJoint535 = x3d.HAnimJoint()
HAnimJoint535.setName("vt10")
HAnimJoint535.setDEF("hanim_vt10")
HAnimJoint535.setCenter([0.0056,1.2848,-0.0822])
HAnimJoint535.setUlimit([0,0,0])
HAnimJoint535.setLlimit([0,0,0])
HAnimSegment536 = x3d.HAnimSegment()
HAnimSegment536.setName("t10")
HAnimSegment536.setDEF("hanim_t10")
Transform537 = x3d.Transform()
Transform537.setTranslation([0.0056,1.2848,-0.0822])
Transform538 = x3d.Transform()
#Empty Transform
Shape539 = x3d.Shape()
Shape539.setUSE("HAnimJointShape")

Transform538.addChild(Shape539)

Transform537.addChildren(Transform538)

HAnimSegment536.addChildren(Transform537)
Shape540 = x3d.Shape()
LineSet541 = x3d.LineSet()
LineSet541.setVertexCount([2])
Coordinate542 = x3d.Coordinate()
Coordinate542.setPoint([0.0056,1.2848,-0.0822,0.0059,1.3866,-0.08])

LineSet541.setCoord(Coordinate542)
#from vt10 to vt6 vertices 2
ColorRGBA543 = x3d.ColorRGBA()
ColorRGBA543.setUSE("HAnimSegmentLineColorRGBA")

LineSet541.setColor(ColorRGBA543)

Shape540.setGeometry(LineSet541)

HAnimSegment536.addChildren(Shape540)
HAnimSite544 = x3d.HAnimSite()
HAnimSite544.setName("l_thelion")
HAnimSite544.setDEF("hanim_l_thelion")
HAnimSite544.setTranslation([0.0918,1.3382,0.1192])
TouchSensor545 = x3d.TouchSensor()
TouchSensor545.setDescription("HAnimSite 29 l_thelion")

HAnimSite544.addChildren(TouchSensor545)
Shape546 = x3d.Shape()
Shape546.setUSE("HAnimSiteShape")

HAnimSite544.addChildren(Shape546)
Billboard547 = x3d.Billboard()
Shape548 = x3d.Shape()
Text549 = x3d.Text()
Text549.setString(["29"])
FontStyle550 = x3d.FontStyle()
FontStyle550.setSize(0.035)

Text549.setFontStyle(FontStyle550)

Shape548.setGeometry(Text549)

Billboard547.addChildren(Shape548)

HAnimSite544.addChildren(Billboard547)

HAnimSegment536.addChildren(HAnimSite544)
HAnimSite551 = x3d.HAnimSite()
HAnimSite551.setName("r_thelion")
HAnimSite551.setDEF("hanim_r_thelion")
HAnimSite551.setTranslation([-0.0736,1.3385,0.1217])
TouchSensor552 = x3d.TouchSensor()
TouchSensor552.setDescription("HAnimSite 31 r_thelion")

HAnimSite551.addChildren(TouchSensor552)
Shape553 = x3d.Shape()
Shape553.setUSE("HAnimSiteShape")

HAnimSite551.addChildren(Shape553)
Billboard554 = x3d.Billboard()
Shape555 = x3d.Shape()
Text556 = x3d.Text()
Text556.setString(["31"])
FontStyle557 = x3d.FontStyle()
FontStyle557.setSize(0.035)

Text556.setFontStyle(FontStyle557)

Shape555.setGeometry(Text556)

Billboard554.addChildren(Shape555)

HAnimSite551.addChildren(Billboard554)

HAnimSegment536.addChildren(HAnimSite551)
HAnimSite558 = x3d.HAnimSite()
HAnimSite558.setName("substernale")
HAnimSite558.setDEF("hanim_substernale")
HAnimSite558.setTranslation([0.0085,1.2995,0.1147])
TouchSensor559 = x3d.TouchSensor()
TouchSensor559.setDescription("HAnimSite 13 substernale")

HAnimSite558.addChildren(TouchSensor559)
Shape560 = x3d.Shape()
Shape560.setUSE("HAnimSiteShape")

HAnimSite558.addChildren(Shape560)
Billboard561 = x3d.Billboard()
Shape562 = x3d.Shape()
Text563 = x3d.Text()
Text563.setString(["13"])
FontStyle564 = x3d.FontStyle()
FontStyle564.setSize(0.035)

Text563.setFontStyle(FontStyle564)

Shape562.setGeometry(Text563)

Billboard561.addChildren(Shape562)

HAnimSite558.addChildren(Billboard561)

HAnimSegment536.addChildren(HAnimSite558)

HAnimJoint535.addChildren(HAnimSegment536)
HAnimJoint565 = x3d.HAnimJoint()
HAnimJoint565.setName("vt6")
HAnimJoint565.setDEF("hanim_vt6")
HAnimJoint565.setCenter([0.0059,1.3866,-0.08])
HAnimJoint565.setUlimit([0,0,0])
HAnimJoint565.setLlimit([0,0,0])
HAnimSegment566 = x3d.HAnimSegment()
HAnimSegment566.setName("t6")
HAnimSegment566.setDEF("hanim_t6")
Transform567 = x3d.Transform()
Transform567.setTranslation([0.0059,1.3866,-0.08])
Transform568 = x3d.Transform()
#Empty Transform
Shape569 = x3d.Shape()
Shape569.setUSE("HAnimJointShape")

Transform568.addChild(Shape569)

Transform567.addChildren(Transform568)

HAnimSegment566.addChildren(Transform567)
Shape570 = x3d.Shape()
LineSet571 = x3d.LineSet()
LineSet571.setVertexCount([2])
Coordinate572 = x3d.Coordinate()
Coordinate572.setPoint([0.0059,1.3866,-0.08,0.0065,1.4951,-0.0387])

LineSet571.setCoord(Coordinate572)
#from vt6 to vt1 vertices 2
ColorRGBA573 = x3d.ColorRGBA()
ColorRGBA573.setUSE("HAnimSegmentLineColorRGBA")

LineSet571.setColor(ColorRGBA573)

Shape570.setGeometry(LineSet571)

HAnimSegment566.addChildren(Shape570)
HAnimSite574 = x3d.HAnimSite()
HAnimSite574.setName("l_chest_midsagittal_plane")
HAnimSite574.setDEF("hanim_l_chest_midsagittal_plane")
TouchSensor575 = x3d.TouchSensor()
TouchSensor575.setDescription("HAnimSite 94 l_chest_midsagittal_plane")

HAnimSite574.addChildren(TouchSensor575)
Shape576 = x3d.Shape()
Shape576.setUSE("HAnimSiteShape")

HAnimSite574.addChildren(Shape576)
Billboard577 = x3d.Billboard()
Shape578 = x3d.Shape()
Text579 = x3d.Text()
Text579.setString(["94"])
FontStyle580 = x3d.FontStyle()
FontStyle580.setSize(0.035)

Text579.setFontStyle(FontStyle580)

Shape578.setGeometry(Text579)

Billboard577.addChildren(Shape578)

HAnimSite574.addChildren(Billboard577)

HAnimSegment566.addChildren(HAnimSite574)
HAnimSite581 = x3d.HAnimSite()
HAnimSite581.setName("mesosternale")
HAnimSite581.setDEF("hanim_mesosternale")
TouchSensor582 = x3d.TouchSensor()
TouchSensor582.setDescription("HAnimSite 88 mesosternale")

HAnimSite581.addChildren(TouchSensor582)
Shape583 = x3d.Shape()
Shape583.setUSE("HAnimSiteShape")

HAnimSite581.addChildren(Shape583)
Billboard584 = x3d.Billboard()
Shape585 = x3d.Shape()
Text586 = x3d.Text()
Text586.setString(["88"])
FontStyle587 = x3d.FontStyle()
FontStyle587.setSize(0.035)

Text586.setFontStyle(FontStyle587)

Shape585.setGeometry(Text586)

Billboard584.addChildren(Shape585)

HAnimSite581.addChildren(Billboard584)

HAnimSegment566.addChildren(HAnimSite581)
HAnimSite588 = x3d.HAnimSite()
HAnimSite588.setName("r_chest_midsagittal_plane")
HAnimSite588.setDEF("hanim_r_chest_midsagittal_plane")
TouchSensor589 = x3d.TouchSensor()
TouchSensor589.setDescription("HAnimSite 95 r_chest_midsagittal_plane")

HAnimSite588.addChildren(TouchSensor589)
Shape590 = x3d.Shape()
Shape590.setUSE("HAnimSiteShape")

HAnimSite588.addChildren(Shape590)
Billboard591 = x3d.Billboard()
Shape592 = x3d.Shape()
Text593 = x3d.Text()
Text593.setString(["95"])
FontStyle594 = x3d.FontStyle()
FontStyle594.setSize(0.035)

Text593.setFontStyle(FontStyle594)

Shape592.setGeometry(Text593)

Billboard591.addChildren(Shape592)

HAnimSite588.addChildren(Billboard591)

HAnimSegment566.addChildren(HAnimSite588)
HAnimSite595 = x3d.HAnimSite()
HAnimSite595.setName("rear_center_midsagittal_plane")
HAnimSite595.setDEF("hanim_rear_center_midsagittal_plane")
TouchSensor596 = x3d.TouchSensor()
TouchSensor596.setDescription("HAnimSite 92 rear_center_midsagittal_plane")

HAnimSite595.addChildren(TouchSensor596)
Shape597 = x3d.Shape()
Shape597.setUSE("HAnimSiteShape")

HAnimSite595.addChildren(Shape597)
Billboard598 = x3d.Billboard()
Shape599 = x3d.Shape()
Text600 = x3d.Text()
Text600.setString(["92"])
FontStyle601 = x3d.FontStyle()
FontStyle601.setSize(0.035)

Text600.setFontStyle(FontStyle601)

Shape599.setGeometry(Text600)

Billboard598.addChildren(Shape599)

HAnimSite595.addChildren(Billboard598)

HAnimSegment566.addChildren(HAnimSite595)

HAnimJoint565.addChildren(HAnimSegment566)
HAnimJoint602 = x3d.HAnimJoint()
HAnimJoint602.setName("vt1")
HAnimJoint602.setDEF("hanim_vt1")
HAnimJoint602.setCenter([0.0065,1.4951,-0.0387])
HAnimJoint602.setUlimit([0,0,0])
HAnimJoint602.setLlimit([0,0,0])
HAnimSegment603 = x3d.HAnimSegment()
HAnimSegment603.setName("t1")
HAnimSegment603.setDEF("hanim_t1")
Transform604 = x3d.Transform()
Transform604.setTranslation([0.0065,1.4951,-0.0387])
Transform605 = x3d.Transform()
#Empty Transform
Shape606 = x3d.Shape()
Shape606.setUSE("HAnimJointShape")

Transform605.addChild(Shape606)

Transform604.addChildren(Transform605)

HAnimSegment603.addChildren(Transform604)
Shape607 = x3d.Shape()
LineSet608 = x3d.LineSet()
LineSet608.setVertexCount([2])
Coordinate609 = x3d.Coordinate()
Coordinate609.setPoint([0.0065,1.4951,-0.0387,0.0066,1.5662,-0.0084])

LineSet608.setCoord(Coordinate609)
#from vt1 to vc4 vertices 2
ColorRGBA610 = x3d.ColorRGBA()
ColorRGBA610.setUSE("HAnimSegmentLineColorRGBA")

LineSet608.setColor(ColorRGBA610)

Shape607.setGeometry(LineSet608)

HAnimSegment603.addChildren(Shape607)
HAnimSite611 = x3d.HAnimSite()
HAnimSite611.setName("cervicale")
HAnimSite611.setDEF("hanim_cervicale")
HAnimSite611.setTranslation([0.0064,1.52,-0.0815])
TouchSensor612 = x3d.TouchSensor()
TouchSensor612.setDescription("HAnimSite 10 cervicale")

HAnimSite611.addChildren(TouchSensor612)
Shape613 = x3d.Shape()
Shape613.setUSE("HAnimSiteShape")

HAnimSite611.addChildren(Shape613)
Billboard614 = x3d.Billboard()
Shape615 = x3d.Shape()
Text616 = x3d.Text()
Text616.setString(["10"])
FontStyle617 = x3d.FontStyle()
FontStyle617.setSize(0.035)

Text616.setFontStyle(FontStyle617)

Shape615.setGeometry(Text616)

Billboard614.addChildren(Shape615)

HAnimSite611.addChildren(Billboard614)

HAnimSegment603.addChildren(HAnimSite611)
HAnimSite618 = x3d.HAnimSite()
HAnimSite618.setName("l_neck_base")
HAnimSite618.setDEF("hanim_l_neck_base")
HAnimSite618.setTranslation([0.0646,1.5141,-0.038])
TouchSensor619 = x3d.TouchSensor()
TouchSensor619.setDescription("HAnimSite 82 l_neck_base")

HAnimSite618.addChildren(TouchSensor619)
Shape620 = x3d.Shape()
Shape620.setUSE("HAnimSiteShape")

HAnimSite618.addChildren(Shape620)
Billboard621 = x3d.Billboard()
Shape622 = x3d.Shape()
Text623 = x3d.Text()
Text623.setString(["82"])
FontStyle624 = x3d.FontStyle()
FontStyle624.setSize(0.035)

Text623.setFontStyle(FontStyle624)

Shape622.setGeometry(Text623)

Billboard621.addChildren(Shape622)

HAnimSite618.addChildren(Billboard621)

HAnimSegment603.addChildren(HAnimSite618)
HAnimSite625 = x3d.HAnimSite()
HAnimSite625.setName("r_neck_base")
HAnimSite625.setDEF("hanim_r_neck_base")
HAnimSite625.setTranslation([-0.0419,1.5149,-0.022])
TouchSensor626 = x3d.TouchSensor()
TouchSensor626.setDescription("HAnimSite 83 r_neck_base")

HAnimSite625.addChildren(TouchSensor626)
Shape627 = x3d.Shape()
Shape627.setUSE("HAnimSiteShape")

HAnimSite625.addChildren(Shape627)
Billboard628 = x3d.Billboard()
Shape629 = x3d.Shape()
Text630 = x3d.Text()
Text630.setString(["83"])
FontStyle631 = x3d.FontStyle()
FontStyle631.setSize(0.035)

Text630.setFontStyle(FontStyle631)

Shape629.setGeometry(Text630)

Billboard628.addChildren(Shape629)

HAnimSite625.addChildren(Billboard628)

HAnimSegment603.addChildren(HAnimSite625)
HAnimSite632 = x3d.HAnimSite()
HAnimSite632.setName("suprasternale")
HAnimSite632.setDEF("hanim_suprasternale")
HAnimSite632.setTranslation([0.0084,1.4714,0.0551])
TouchSensor633 = x3d.TouchSensor()
TouchSensor633.setDescription("HAnimSite 12 suprasternale")

HAnimSite632.addChildren(TouchSensor633)
Shape634 = x3d.Shape()
Shape634.setUSE("HAnimSiteShape")

HAnimSite632.addChildren(Shape634)
Billboard635 = x3d.Billboard()
Shape636 = x3d.Shape()
Text637 = x3d.Text()
Text637.setString(["12"])
FontStyle638 = x3d.FontStyle()
FontStyle638.setSize(0.035)

Text637.setFontStyle(FontStyle638)

Shape636.setGeometry(Text637)

Billboard635.addChildren(Shape636)

HAnimSite632.addChildren(Billboard635)

HAnimSegment603.addChildren(HAnimSite632)
Shape639 = x3d.Shape()
LineSet640 = x3d.LineSet()
LineSet640.setVertexCount([2])
Coordinate641 = x3d.Coordinate()
Coordinate641.setPoint([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353])

LineSet640.setCoord(Coordinate641)
#from vt1 to l_sternoclavicular vertices 2
ColorRGBA642 = x3d.ColorRGBA()
ColorRGBA642.setUSE("HAnimSegmentLineColorRGBA")

LineSet640.setColor(ColorRGBA642)

Shape639.setGeometry(LineSet640)

HAnimSegment603.addChildren(Shape639)
Shape643 = x3d.Shape()
LineSet644 = x3d.LineSet()
LineSet644.setVertexCount([2])
Coordinate645 = x3d.Coordinate()
Coordinate645.setPoint([0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033])

LineSet644.setCoord(Coordinate645)
#from vt1 to r_sternoclavicular vertices 2
ColorRGBA646 = x3d.ColorRGBA()
ColorRGBA646.setUSE("HAnimSegmentLineColorRGBA")

LineSet644.setColor(ColorRGBA646)

Shape643.setGeometry(LineSet644)

HAnimSegment603.addChildren(Shape643)

HAnimJoint602.addChildren(HAnimSegment603)
HAnimJoint647 = x3d.HAnimJoint()
HAnimJoint647.setName("vc4")
HAnimJoint647.setDEF("hanim_vc4")
HAnimJoint647.setCenter([0.0066,1.5662,-0.0084])
HAnimJoint647.setUlimit([0,0,0])
HAnimJoint647.setLlimit([0,0,0])
HAnimSegment648 = x3d.HAnimSegment()
HAnimSegment648.setName("c4")
HAnimSegment648.setDEF("hanim_c4")
Transform649 = x3d.Transform()
Transform649.setTranslation([0.0066,1.5662,-0.0084])
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
Coordinate654.setPoint([0.0066,1.5662,-0.0084,0.0066,1.5928,-0.0103])

LineSet653.setCoord(Coordinate654)
#from vc4 to vc2 vertices 2
ColorRGBA655 = x3d.ColorRGBA()
ColorRGBA655.setUSE("HAnimSegmentLineColorRGBA")

LineSet653.setColor(ColorRGBA655)

Shape652.setGeometry(LineSet653)

HAnimSegment648.addChildren(Shape652)

HAnimJoint647.addChildren(HAnimSegment648)
HAnimJoint656 = x3d.HAnimJoint()
HAnimJoint656.setName("vc2")
HAnimJoint656.setDEF("hanim_vc2")
HAnimJoint656.setCenter([0.0066,1.5928,-0.0103])
HAnimJoint656.setUlimit([0,0,0])
HAnimJoint656.setLlimit([0,0,0])
HAnimSegment657 = x3d.HAnimSegment()
HAnimSegment657.setName("c2")
HAnimSegment657.setDEF("hanim_c2")
Transform658 = x3d.Transform()
Transform658.setTranslation([0.0066,1.5928,-0.0103])
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
Coordinate663.setPoint([0.0066,1.5928,-0.0103,0.0044,1.6209,0.0236])

LineSet662.setCoord(Coordinate663)
#from vc2 to skullbase vertices 2
ColorRGBA664 = x3d.ColorRGBA()
ColorRGBA664.setUSE("HAnimSegmentLineColorRGBA")

LineSet662.setColor(ColorRGBA664)

Shape661.setGeometry(LineSet662)

HAnimSegment657.addChildren(Shape661)
HAnimSite665 = x3d.HAnimSite()
HAnimSite665.setName("adams_apple")
HAnimSite665.setDEF("hanim_adams_apple")
TouchSensor666 = x3d.TouchSensor()
TouchSensor666.setDescription("HAnimSite 11 adams_apple")

HAnimSite665.addChildren(TouchSensor666)
Shape667 = x3d.Shape()
Shape667.setUSE("HAnimSiteShape")

HAnimSite665.addChildren(Shape667)
Billboard668 = x3d.Billboard()
Shape669 = x3d.Shape()
Text670 = x3d.Text()
Text670.setString(["11"])
FontStyle671 = x3d.FontStyle()
FontStyle671.setSize(0.035)

Text670.setFontStyle(FontStyle671)

Shape669.setGeometry(Text670)

Billboard668.addChildren(Shape669)

HAnimSite665.addChildren(Billboard668)

HAnimSegment657.addChildren(HAnimSite665)

HAnimJoint656.addChildren(HAnimSegment657)
HAnimJoint672 = x3d.HAnimJoint()
HAnimJoint672.setName("skullbase")
HAnimJoint672.setDEF("hanim_skullbase")
HAnimJoint672.setCenter([0.0044,1.6209,0.0236])
HAnimJoint672.setUlimit([0,0,0])
HAnimJoint672.setLlimit([0,0,0])

HAnimJoint656.addChildren(HAnimJoint672)

HAnimJoint647.addChildren(HAnimJoint656)

HAnimJoint602.addChildren(HAnimJoint647)
HAnimJoint673 = x3d.HAnimJoint()
HAnimJoint673.setName("l_sternoclavicular")
HAnimJoint673.setDEF("hanim_l_sternoclavicular")
HAnimJoint673.setCenter([0.082,1.4488,-0.0353])
HAnimJoint673.setUlimit([0,0,0])
HAnimJoint673.setLlimit([0,0,0])
HAnimSegment674 = x3d.HAnimSegment()
HAnimSegment674.setName("l_clavicle")
HAnimSegment674.setDEF("hanim_l_clavicle")
Transform675 = x3d.Transform()
Transform675.setTranslation([0.082,1.4488,-0.0353])
Transform676 = x3d.Transform()
#Empty Transform
Shape677 = x3d.Shape()
Shape677.setUSE("HAnimJointShape")

Transform676.addChild(Shape677)

Transform675.addChildren(Transform676)

HAnimSegment674.addChildren(Transform675)
Shape678 = x3d.Shape()
LineSet679 = x3d.LineSet()
LineSet679.setVertexCount([2])
Coordinate680 = x3d.Coordinate()
Coordinate680.setPoint([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424])

LineSet679.setCoord(Coordinate680)
#from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA681 = x3d.ColorRGBA()
ColorRGBA681.setUSE("HAnimSegmentLineColorRGBA")

LineSet679.setColor(ColorRGBA681)

Shape678.setGeometry(LineSet679)

HAnimSegment674.addChildren(Shape678)
HAnimSite682 = x3d.HAnimSite()
HAnimSite682.setName("l_acromion")
HAnimSite682.setDEF("hanim_l_acromion")
HAnimSite682.setTranslation([0.2032,1.476,-0.049])
TouchSensor683 = x3d.TouchSensor()
TouchSensor683.setDescription("HAnimSite 15 l_acromion")

HAnimSite682.addChildren(TouchSensor683)
Shape684 = x3d.Shape()
Shape684.setUSE("HAnimSiteShape")

HAnimSite682.addChildren(Shape684)
Billboard685 = x3d.Billboard()
Shape686 = x3d.Shape()
Text687 = x3d.Text()
Text687.setString(["15"])
FontStyle688 = x3d.FontStyle()
FontStyle688.setSize(0.035)

Text687.setFontStyle(FontStyle688)

Shape686.setGeometry(Text687)

Billboard685.addChildren(Shape686)

HAnimSite682.addChildren(Billboard685)

HAnimSegment674.addChildren(HAnimSite682)
HAnimSite689 = x3d.HAnimSite()
HAnimSite689.setName("l_axilla_distal")
HAnimSite689.setDEF("hanim_l_axilla_distal")
HAnimSite689.setTranslation([0.1706,1.4072,-0.0875])
TouchSensor690 = x3d.TouchSensor()
TouchSensor690.setDescription("HAnimSite 17 l_axilla_distal")

HAnimSite689.addChildren(TouchSensor690)
Shape691 = x3d.Shape()
Shape691.setUSE("HAnimSiteShape")

HAnimSite689.addChildren(Shape691)
Billboard692 = x3d.Billboard()
Shape693 = x3d.Shape()
Text694 = x3d.Text()
Text694.setString(["17"])
FontStyle695 = x3d.FontStyle()
FontStyle695.setSize(0.035)

Text694.setFontStyle(FontStyle695)

Shape693.setGeometry(Text694)

Billboard692.addChildren(Shape693)

HAnimSite689.addChildren(Billboard692)

HAnimSegment674.addChildren(HAnimSite689)
HAnimSite696 = x3d.HAnimSite()
HAnimSite696.setName("l_axilla_posterior_folds")
HAnimSite696.setDEF("hanim_l_axilla_posterior_folds")
TouchSensor697 = x3d.TouchSensor()
TouchSensor697.setDescription("HAnimSite 18 l_axilla_posterior_folds")

HAnimSite696.addChildren(TouchSensor697)
Shape698 = x3d.Shape()
Shape698.setUSE("HAnimSiteShape")

HAnimSite696.addChildren(Shape698)
Billboard699 = x3d.Billboard()
Shape700 = x3d.Shape()
Text701 = x3d.Text()
Text701.setString(["18"])
FontStyle702 = x3d.FontStyle()
FontStyle702.setSize(0.035)

Text701.setFontStyle(FontStyle702)

Shape700.setGeometry(Text701)

Billboard699.addChildren(Shape700)

HAnimSite696.addChildren(Billboard699)

HAnimSegment674.addChildren(HAnimSite696)
HAnimSite703 = x3d.HAnimSite()
HAnimSite703.setName("l_axilla_proximal")
HAnimSite703.setDEF("hanim_l_axilla_proximal")
HAnimSite703.setTranslation([0.1777,1.4065,-0.0075])
TouchSensor704 = x3d.TouchSensor()
TouchSensor704.setDescription("HAnimSite 16 l_axilla_proximal")

HAnimSite703.addChildren(TouchSensor704)
Shape705 = x3d.Shape()
Shape705.setUSE("HAnimSiteShape")

HAnimSite703.addChildren(Shape705)
Billboard706 = x3d.Billboard()
Shape707 = x3d.Shape()
Text708 = x3d.Text()
Text708.setString(["16"])
FontStyle709 = x3d.FontStyle()
FontStyle709.setSize(0.035)

Text708.setFontStyle(FontStyle709)

Shape707.setGeometry(Text708)

Billboard706.addChildren(Shape707)

HAnimSite703.addChildren(Billboard706)

HAnimSegment674.addChildren(HAnimSite703)
HAnimSite710 = x3d.HAnimSite()
HAnimSite710.setName("l_clavicale")
HAnimSite710.setDEF("hanim_l_clavicale")
HAnimSite710.setTranslation([0.0271,1.4943,0.0394])
TouchSensor711 = x3d.TouchSensor()
TouchSensor711.setDescription("HAnimSite 14 l_clavicale")

HAnimSite710.addChildren(TouchSensor711)
Shape712 = x3d.Shape()
Shape712.setUSE("HAnimSiteShape")

HAnimSite710.addChildren(Shape712)
Billboard713 = x3d.Billboard()
Shape714 = x3d.Shape()
Text715 = x3d.Text()
Text715.setString(["14"])
FontStyle716 = x3d.FontStyle()
FontStyle716.setSize(0.035)

Text715.setFontStyle(FontStyle716)

Shape714.setGeometry(Text715)

Billboard713.addChildren(Shape714)

HAnimSite710.addChildren(Billboard713)

HAnimSegment674.addChildren(HAnimSite710)

HAnimJoint673.addChildren(HAnimSegment674)
HAnimJoint717 = x3d.HAnimJoint()
HAnimJoint717.setName("l_acromioclavicular")
HAnimJoint717.setDEF("hanim_l_acromioclavicular")
HAnimJoint717.setCenter([0.0962,1.4269,-0.0424])
HAnimJoint717.setUlimit([0,0,0])
HAnimJoint717.setLlimit([0,0,0])
HAnimSegment718 = x3d.HAnimSegment()
HAnimSegment718.setName("l_scapula")
HAnimSegment718.setDEF("hanim_l_scapula")
Transform719 = x3d.Transform()
Transform719.setTranslation([0.0962,1.4269,-0.0424])
Transform720 = x3d.Transform()
#Empty Transform
Shape721 = x3d.Shape()
Shape721.setUSE("HAnimJointShape")

Transform720.addChild(Shape721)

Transform719.addChildren(Transform720)

HAnimSegment718.addChildren(Transform719)
Shape722 = x3d.Shape()
LineSet723 = x3d.LineSet()
LineSet723.setVertexCount([2])
Coordinate724 = x3d.Coordinate()
Coordinate724.setPoint([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387])

LineSet723.setCoord(Coordinate724)
#from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA725 = x3d.ColorRGBA()
ColorRGBA725.setUSE("HAnimSegmentLineColorRGBA")

LineSet723.setColor(ColorRGBA725)

Shape722.setGeometry(LineSet723)

HAnimSegment718.addChildren(Shape722)

HAnimJoint717.addChildren(HAnimSegment718)
HAnimJoint726 = x3d.HAnimJoint()
HAnimJoint726.setName("l_shoulder")
HAnimJoint726.setDEF("hanim_l_shoulder")
HAnimJoint726.setCenter([0.2029,1.4376,-0.0387])
HAnimJoint726.setUlimit([0,0,0])
HAnimJoint726.setLlimit([0,0,0])
HAnimSegment727 = x3d.HAnimSegment()
HAnimSegment727.setName("l_upperarm")
HAnimSegment727.setDEF("hanim_l_upperarm")
Transform728 = x3d.Transform()
Transform728.setTranslation([0.2029,1.4376,-0.0387])
Transform729 = x3d.Transform()
#Empty Transform
Shape730 = x3d.Shape()
Shape730.setUSE("HAnimJointShape")

Transform729.addChild(Shape730)

Transform728.addChildren(Transform729)

HAnimSegment727.addChildren(Transform728)
Shape731 = x3d.Shape()
LineSet732 = x3d.LineSet()
LineSet732.setVertexCount([2])
Coordinate733 = x3d.Coordinate()
Coordinate733.setPoint([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682])

LineSet732.setCoord(Coordinate733)
#from l_shoulder to l_elbow vertices 2
ColorRGBA734 = x3d.ColorRGBA()
ColorRGBA734.setUSE("HAnimSegmentLineColorRGBA")

LineSet732.setColor(ColorRGBA734)

Shape731.setGeometry(LineSet732)

HAnimSegment727.addChildren(Shape731)
HAnimSite735 = x3d.HAnimSite()
HAnimSite735.setName("l_bideltoid")
HAnimSite735.setDEF("hanim_l_bideltoid")
TouchSensor736 = x3d.TouchSensor()
TouchSensor736.setDescription("HAnimSite 96 l_bideltoid")

HAnimSite735.addChildren(TouchSensor736)
Shape737 = x3d.Shape()
Shape737.setUSE("HAnimSiteShape")

HAnimSite735.addChildren(Shape737)
Billboard738 = x3d.Billboard()
Shape739 = x3d.Shape()
Text740 = x3d.Text()
Text740.setString(["96"])
FontStyle741 = x3d.FontStyle()
FontStyle741.setSize(0.035)

Text740.setFontStyle(FontStyle741)

Shape739.setGeometry(Text740)

Billboard738.addChildren(Shape739)

HAnimSite735.addChildren(Billboard738)

HAnimSegment727.addChildren(HAnimSite735)
HAnimSite742 = x3d.HAnimSite()
HAnimSite742.setName("l_humeral_lateral_epicondyles")
HAnimSite742.setDEF("hanim_l_humeral_lateral_epicondyles")
HAnimSite742.setTranslation([0.228,1.1482,-0.11])
TouchSensor743 = x3d.TouchSensor()
TouchSensor743.setDescription("HAnimSite 63 l_humeral_lateral_epicondyles")

HAnimSite742.addChildren(TouchSensor743)
Shape744 = x3d.Shape()
Shape744.setUSE("HAnimSiteShape")

HAnimSite742.addChildren(Shape744)
Billboard745 = x3d.Billboard()
Shape746 = x3d.Shape()
Text747 = x3d.Text()
Text747.setString(["63"])
FontStyle748 = x3d.FontStyle()
FontStyle748.setSize(0.035)

Text747.setFontStyle(FontStyle748)

Shape746.setGeometry(Text747)

Billboard745.addChildren(Shape746)

HAnimSite742.addChildren(Billboard745)

HAnimSegment727.addChildren(HAnimSite742)

HAnimJoint726.addChildren(HAnimSegment727)
HAnimJoint749 = x3d.HAnimJoint()
HAnimJoint749.setName("l_elbow")
HAnimJoint749.setDEF("hanim_l_elbow")
HAnimJoint749.setCenter([0.2014,1.1357,-0.0682])
HAnimJoint749.setUlimit([0,0,0])
HAnimJoint749.setLlimit([0,0,0])
HAnimSegment750 = x3d.HAnimSegment()
HAnimSegment750.setName("l_forearm")
HAnimSegment750.setDEF("hanim_l_forearm")
Transform751 = x3d.Transform()
Transform751.setTranslation([0.2014,1.1357,-0.0682])
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
Coordinate756.setPoint([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583])

LineSet755.setCoord(Coordinate756)
#from l_elbow to l_radiocarpal vertices 2
ColorRGBA757 = x3d.ColorRGBA()
ColorRGBA757.setUSE("HAnimSegmentLineColorRGBA")

LineSet755.setColor(ColorRGBA757)

Shape754.setGeometry(LineSet755)

HAnimSegment750.addChildren(Shape754)
HAnimSite758 = x3d.HAnimSite()
HAnimSite758.setName("l_humeral_medial_epicondyles")
HAnimSite758.setDEF("hanim_l_humeral_medial_epicondyles")
HAnimSite758.setTranslation([0.1735,1.1272,-0.1113])
TouchSensor759 = x3d.TouchSensor()
TouchSensor759.setDescription("HAnimSite 64 l_humeral_medial_epicondyles")

HAnimSite758.addChildren(TouchSensor759)
Shape760 = x3d.Shape()
Shape760.setUSE("HAnimSiteShape")

HAnimSite758.addChildren(Shape760)
Billboard761 = x3d.Billboard()
Shape762 = x3d.Shape()
Text763 = x3d.Text()
Text763.setString(["64"])
FontStyle764 = x3d.FontStyle()
FontStyle764.setSize(0.035)

Text763.setFontStyle(FontStyle764)

Shape762.setGeometry(Text763)

Billboard761.addChildren(Shape762)

HAnimSite758.addChildren(Billboard761)

HAnimSegment750.addChildren(HAnimSite758)
HAnimSite765 = x3d.HAnimSite()
HAnimSite765.setName("l_olecranon")
HAnimSite765.setDEF("hanim_l_olecranon")
HAnimSite765.setTranslation([-0.1962,1.1375,-0.1123])
TouchSensor766 = x3d.TouchSensor()
TouchSensor766.setDescription("HAnimSite 65 l_olecranon")

HAnimSite765.addChildren(TouchSensor766)
Shape767 = x3d.Shape()
Shape767.setUSE("HAnimSiteShape")

HAnimSite765.addChildren(Shape767)
Billboard768 = x3d.Billboard()
Shape769 = x3d.Shape()
Text770 = x3d.Text()
Text770.setString(["65"])
FontStyle771 = x3d.FontStyle()
FontStyle771.setSize(0.035)

Text770.setFontStyle(FontStyle771)

Shape769.setGeometry(Text770)

Billboard768.addChildren(Shape769)

HAnimSite765.addChildren(Billboard768)

HAnimSegment750.addChildren(HAnimSite765)
HAnimSite772 = x3d.HAnimSite()
HAnimSite772.setName("l_radial_styloid")
HAnimSite772.setDEF("hanim_l_radial_styloid")
HAnimSite772.setTranslation([0.1901,0.8645,-0.0415])
TouchSensor773 = x3d.TouchSensor()
TouchSensor773.setDescription("HAnimSite 71 l_radial_styloid")

HAnimSite772.addChildren(TouchSensor773)
Shape774 = x3d.Shape()
Shape774.setUSE("HAnimSiteShape")

HAnimSite772.addChildren(Shape774)
Billboard775 = x3d.Billboard()
Shape776 = x3d.Shape()
Text777 = x3d.Text()
Text777.setString(["71"])
FontStyle778 = x3d.FontStyle()
FontStyle778.setSize(0.035)

Text777.setFontStyle(FontStyle778)

Shape776.setGeometry(Text777)

Billboard775.addChildren(Shape776)

HAnimSite772.addChildren(Billboard775)

HAnimSegment750.addChildren(HAnimSite772)
HAnimSite779 = x3d.HAnimSite()
HAnimSite779.setName("l_radiale")
HAnimSite779.setDEF("hanim_l_radiale")
HAnimSite779.setTranslation([0.2182,1.1212,-0.1167])
TouchSensor780 = x3d.TouchSensor()
TouchSensor780.setDescription("HAnimSite 69 l_radiale")

HAnimSite779.addChildren(TouchSensor780)
Shape781 = x3d.Shape()
Shape781.setUSE("HAnimSiteShape")

HAnimSite779.addChildren(Shape781)
Billboard782 = x3d.Billboard()
Shape783 = x3d.Shape()
Text784 = x3d.Text()
Text784.setString(["69"])
FontStyle785 = x3d.FontStyle()
FontStyle785.setSize(0.035)

Text784.setFontStyle(FontStyle785)

Shape783.setGeometry(Text784)

Billboard782.addChildren(Shape783)

HAnimSite779.addChildren(Billboard782)

HAnimSegment750.addChildren(HAnimSite779)

HAnimJoint749.addChildren(HAnimSegment750)
HAnimJoint786 = x3d.HAnimJoint()
HAnimJoint786.setName("l_radiocarpal")
HAnimJoint786.setDEF("hanim_l_radiocarpal")
HAnimJoint786.setCenter([0.1984,0.8663,-0.0583])
HAnimJoint786.setUlimit([0,0,0])
HAnimJoint786.setLlimit([0,0,0])
HAnimSegment787 = x3d.HAnimSegment()
HAnimSegment787.setName("l_carpal")
HAnimSegment787.setDEF("hanim_l_carpal")
Transform788 = x3d.Transform()
Transform788.setScale([0.2,0.2,0.2])
Transform788.setTranslation([0.2,0.85,-0.05])
Transform788.setRotation([0,0,1,-3.14])
#Transform left hand
Transform789 = x3d.Transform()
Transform789.setRotation([0,1,0,-1.57])
#Transform left hand
Shape790 = x3d.Shape()
Shape790.setUSE("HAnimJointShape")

Transform789.addChild(Shape790)

Transform788.addChildren(Transform789)

HAnimSegment787.addChildren(Transform788)
Shape791 = x3d.Shape()
LineSet792 = x3d.LineSet()
LineSet792.setVertexCount([2])
Coordinate793 = x3d.Coordinate()
Coordinate793.setPoint([0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534])

LineSet792.setCoord(Coordinate793)
#from l_radiocarpal to l_carpometacarpal_1 vertices 2
ColorRGBA794 = x3d.ColorRGBA()
ColorRGBA794.setUSE("HAnimSegmentLineColorRGBA")

LineSet792.setColor(ColorRGBA794)

Shape791.setGeometry(LineSet792)

HAnimSegment787.addChildren(Shape791)
HAnimSite795 = x3d.HAnimSite()
HAnimSite795.setName("l_ulnar_styloid")
HAnimSite795.setDEF("hanim_l_ulnar_styloid")
HAnimSite795.setTranslation([-0.2142,0.8529,-0.0648])
TouchSensor796 = x3d.TouchSensor()
TouchSensor796.setDescription("HAnimSite 70 l_ulnar_styloid")

HAnimSite795.addChildren(TouchSensor796)
Shape797 = x3d.Shape()
Shape797.setUSE("HAnimSiteShape")

HAnimSite795.addChildren(Shape797)
Billboard798 = x3d.Billboard()
Shape799 = x3d.Shape()
Text800 = x3d.Text()
Text800.setString(["70"])
FontStyle801 = x3d.FontStyle()
FontStyle801.setSize(0.035)

Text800.setFontStyle(FontStyle801)

Shape799.setGeometry(Text800)

Billboard798.addChildren(Shape799)

HAnimSite795.addChildren(Billboard798)

HAnimSegment787.addChildren(HAnimSite795)
Shape802 = x3d.Shape()
LineSet803 = x3d.LineSet()
LineSet803.setVertexCount([2])
Coordinate804 = x3d.Coordinate()
Coordinate804.setPoint([0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028])

LineSet803.setCoord(Coordinate804)
#from l_radiocarpal to l_carpometacarpal_2 vertices 2
ColorRGBA805 = x3d.ColorRGBA()
ColorRGBA805.setUSE("HAnimSegmentLineColorRGBA")

LineSet803.setColor(ColorRGBA805)

Shape802.setGeometry(LineSet803)

HAnimSegment787.addChildren(Shape802)
Shape806 = x3d.Shape()
LineSet807 = x3d.LineSet()
LineSet807.setVertexCount([2])
Coordinate808 = x3d.Coordinate()
Coordinate808.setPoint([0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053])

LineSet807.setCoord(Coordinate808)
#from l_radiocarpal to l_carpometacarpal_3 vertices 2
ColorRGBA809 = x3d.ColorRGBA()
ColorRGBA809.setUSE("HAnimSegmentLineColorRGBA")

LineSet807.setColor(ColorRGBA809)

Shape806.setGeometry(LineSet807)

HAnimSegment787.addChildren(Shape806)
Shape810 = x3d.Shape()
LineSet811 = x3d.LineSet()
LineSet811.setVertexCount([2])
Coordinate812 = x3d.Coordinate()
Coordinate812.setPoint([0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794])

LineSet811.setCoord(Coordinate812)
#from l_radiocarpal to l_carpometacarpal_4 vertices 2
ColorRGBA813 = x3d.ColorRGBA()
ColorRGBA813.setUSE("HAnimSegmentLineColorRGBA")

LineSet811.setColor(ColorRGBA813)

Shape810.setGeometry(LineSet811)

HAnimSegment787.addChildren(Shape810)
Shape814 = x3d.Shape()
LineSet815 = x3d.LineSet()
LineSet815.setVertexCount([2])
Coordinate816 = x3d.Coordinate()
Coordinate816.setPoint([0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036])

LineSet815.setCoord(Coordinate816)
#from l_radiocarpal to l_carpometacarpal_5 vertices 2
ColorRGBA817 = x3d.ColorRGBA()
ColorRGBA817.setUSE("HAnimSegmentLineColorRGBA")

LineSet815.setColor(ColorRGBA817)

Shape814.setGeometry(LineSet815)

HAnimSegment787.addChildren(Shape814)

HAnimJoint786.addChildren(HAnimSegment787)
HAnimJoint818 = x3d.HAnimJoint()
HAnimJoint818.setName("l_carpometacarpal_1")
HAnimJoint818.setDEF("hanim_l_carpometacarpal_1")
HAnimJoint818.setCenter([0.1924,0.8472,-0.0534])
HAnimJoint818.setUlimit([0,0,0])
HAnimJoint818.setLlimit([0,0,0])
HAnimSegment819 = x3d.HAnimSegment()
HAnimSegment819.setName("l_metacarpal_1")
HAnimSegment819.setDEF("hanim_l_metacarpal_1")
Transform820 = x3d.Transform()
Transform820.setTranslation([0.1924,0.8472,-0.0534])
Transform821 = x3d.Transform()
#Empty Transform
Shape822 = x3d.Shape()
Shape822.setUSE("HAnimJointShape")

Transform821.addChild(Shape822)

Transform820.addChildren(Transform821)

HAnimSegment819.addChildren(Transform820)
Shape823 = x3d.Shape()
LineSet824 = x3d.LineSet()
LineSet824.setVertexCount([2])
Coordinate825 = x3d.Coordinate()
Coordinate825.setPoint([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246])

LineSet824.setCoord(Coordinate825)
#from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA826 = x3d.ColorRGBA()
ColorRGBA826.setUSE("HAnimSegmentLineColorRGBA")

LineSet824.setColor(ColorRGBA826)

Shape823.setGeometry(LineSet824)

HAnimSegment819.addChildren(Shape823)

HAnimJoint818.addChildren(HAnimSegment819)
HAnimJoint827 = x3d.HAnimJoint()
HAnimJoint827.setName("l_metacarpophalangeal_1")
HAnimJoint827.setDEF("hanim_l_metacarpophalangeal_1")
HAnimJoint827.setCenter([0.1951,0.8226,0.0246])
HAnimJoint827.setUlimit([0,0,0])
HAnimJoint827.setLlimit([0,0,0])
HAnimSegment828 = x3d.HAnimSegment()
HAnimSegment828.setName("l_carpal_proximal_phalanx_1")
HAnimSegment828.setDEF("hanim_l_carpal_proximal_phalanx_1")
Transform829 = x3d.Transform()
Transform829.setTranslation([0.1951,0.8226,0.0246])
Transform830 = x3d.Transform()
#Empty Transform
Shape831 = x3d.Shape()
Shape831.setUSE("HAnimJointShape")

Transform830.addChild(Shape831)

Transform829.addChildren(Transform830)

HAnimSegment828.addChildren(Transform829)
Shape832 = x3d.Shape()
LineSet833 = x3d.LineSet()
LineSet833.setVertexCount([2])
Coordinate834 = x3d.Coordinate()
Coordinate834.setPoint([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464])

LineSet833.setCoord(Coordinate834)
#from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA835 = x3d.ColorRGBA()
ColorRGBA835.setUSE("HAnimSegmentLineColorRGBA")

LineSet833.setColor(ColorRGBA835)

Shape832.setGeometry(LineSet833)

HAnimSegment828.addChildren(Shape832)

HAnimJoint827.addChildren(HAnimSegment828)
HAnimJoint836 = x3d.HAnimJoint()
HAnimJoint836.setName("l_carpal_interphalangeal_1")
HAnimJoint836.setDEF("hanim_l_carpal_interphalangeal_1")
HAnimJoint836.setCenter([0.1955,0.8159,0.0464])
HAnimJoint836.setUlimit([0,0,0])
HAnimJoint836.setLlimit([0,0,0])

HAnimJoint827.addChildren(HAnimJoint836)

HAnimJoint818.addChildren(HAnimJoint827)

HAnimJoint786.addChildren(HAnimJoint818)
HAnimJoint837 = x3d.HAnimJoint()
HAnimJoint837.setName("l_carpometacarpal_2")
HAnimJoint837.setDEF("hanim_l_carpometacarpal_2")
HAnimJoint837.setCenter([0.1983,0.8024,-0.028])
HAnimJoint837.setUlimit([0,0,0])
HAnimJoint837.setLlimit([0,0,0])
HAnimSegment838 = x3d.HAnimSegment()
HAnimSegment838.setName("l_metacarpal_2")
HAnimSegment838.setDEF("hanim_l_metacarpal_2")
Transform839 = x3d.Transform()
Transform839.setTranslation([0.1983,0.8024,-0.028])
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
Coordinate844.setPoint([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028])

LineSet843.setCoord(Coordinate844)
#from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA845 = x3d.ColorRGBA()
ColorRGBA845.setUSE("HAnimSegmentLineColorRGBA")

LineSet843.setColor(ColorRGBA845)

Shape842.setGeometry(LineSet843)

HAnimSegment838.addChildren(Shape842)
HAnimSite846 = x3d.HAnimSite()
HAnimSite846.setName("l_metacarpal_phalanx_2")
HAnimSite846.setDEF("hanim_l_metacarpal_phalanx_2")
HAnimSite846.setTranslation([0.2009,0.8139,-0.0237])
TouchSensor847 = x3d.TouchSensor()
TouchSensor847.setDescription("HAnimSite 75 l_metacarpal_phalanx_2")

HAnimSite846.addChildren(TouchSensor847)
Shape848 = x3d.Shape()
Shape848.setUSE("HAnimSiteShape")

HAnimSite846.addChildren(Shape848)
Billboard849 = x3d.Billboard()
Shape850 = x3d.Shape()
Text851 = x3d.Text()
Text851.setString(["75"])
FontStyle852 = x3d.FontStyle()
FontStyle852.setSize(0.035)

Text851.setFontStyle(FontStyle852)

Shape850.setGeometry(Text851)

Billboard849.addChildren(Shape850)

HAnimSite846.addChildren(Billboard849)

HAnimSegment838.addChildren(HAnimSite846)

HAnimJoint837.addChildren(HAnimSegment838)
HAnimJoint853 = x3d.HAnimJoint()
HAnimJoint853.setName("l_metacarpophalangeal_2")
HAnimJoint853.setDEF("hanim_l_metacarpophalangeal_2")
HAnimJoint853.setCenter([0.1983,0.7815,-0.028])
HAnimJoint853.setUlimit([0,0,0])
HAnimJoint853.setLlimit([0,0,0])
HAnimSegment854 = x3d.HAnimSegment()
HAnimSegment854.setName("l_carpal_proximal_phalanx_2")
HAnimSegment854.setDEF("hanim_l_carpal_proximal_phalanx_2")
Transform855 = x3d.Transform()
Transform855.setTranslation([0.1983,0.7815,-0.028])
Transform856 = x3d.Transform()
#Empty Transform
Shape857 = x3d.Shape()
Shape857.setUSE("HAnimJointShape")

Transform856.addChild(Shape857)

Transform855.addChildren(Transform856)

HAnimSegment854.addChildren(Transform855)
Shape858 = x3d.Shape()
LineSet859 = x3d.LineSet()
LineSet859.setVertexCount([2])
Coordinate860 = x3d.Coordinate()
Coordinate860.setPoint([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248])

LineSet859.setCoord(Coordinate860)
#from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA861 = x3d.ColorRGBA()
ColorRGBA861.setUSE("HAnimSegmentLineColorRGBA")

LineSet859.setColor(ColorRGBA861)

Shape858.setGeometry(LineSet859)

HAnimSegment854.addChildren(Shape858)

HAnimJoint853.addChildren(HAnimSegment854)
HAnimJoint862 = x3d.HAnimJoint()
HAnimJoint862.setName("l_carpal_proximal_interphalangeal_2")
HAnimJoint862.setDEF("hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint862.setCenter([0.2017,0.7363,-0.0248])
HAnimJoint862.setUlimit([0,0,0])
HAnimJoint862.setLlimit([0,0,0])
HAnimSegment863 = x3d.HAnimSegment()
HAnimSegment863.setName("l_carpal_middle_phalanx_2")
HAnimSegment863.setDEF("hanim_l_carpal_middle_phalanx_2")
Transform864 = x3d.Transform()
Transform864.setTranslation([0.2017,0.7363,-0.0248])
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
Coordinate869.setPoint([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236])

LineSet868.setCoord(Coordinate869)
#from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA870 = x3d.ColorRGBA()
ColorRGBA870.setUSE("HAnimSegmentLineColorRGBA")

LineSet868.setColor(ColorRGBA870)

Shape867.setGeometry(LineSet868)

HAnimSegment863.addChildren(Shape867)

HAnimJoint862.addChildren(HAnimSegment863)
HAnimJoint871 = x3d.HAnimJoint()
HAnimJoint871.setName("l_carpal_distal_interphalangeal_2")
HAnimJoint871.setDEF("hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint871.setCenter([0.2028,0.7139,-0.0236])
HAnimJoint871.setUlimit([0,0,0])
HAnimJoint871.setLlimit([0,0,0])

HAnimJoint862.addChildren(HAnimJoint871)

HAnimJoint853.addChildren(HAnimJoint862)

HAnimJoint837.addChildren(HAnimJoint853)

HAnimJoint786.addChildren(HAnimJoint837)
HAnimJoint872 = x3d.HAnimJoint()
HAnimJoint872.setName("l_carpometacarpal_3")
HAnimJoint872.setDEF("hanim_l_carpometacarpal_3")
HAnimJoint872.setCenter([0.1987,0.8029,-0.053])
HAnimJoint872.setUlimit([0,0,0])
HAnimJoint872.setLlimit([0,0,0])
HAnimSegment873 = x3d.HAnimSegment()
HAnimSegment873.setName("l_metacarpal_3")
HAnimSegment873.setDEF("hanim_l_metacarpal_3")
Transform874 = x3d.Transform()
Transform874.setTranslation([0.1987,0.8029,-0.053])
Transform875 = x3d.Transform()
#Empty Transform
Shape876 = x3d.Shape()
Shape876.setUSE("HAnimJointShape")

Transform875.addChild(Shape876)

Transform874.addChildren(Transform875)

HAnimSegment873.addChildren(Transform874)
Shape877 = x3d.Shape()
LineSet878 = x3d.LineSet()
LineSet878.setVertexCount([2])
Coordinate879 = x3d.Coordinate()
Coordinate879.setPoint([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053])

LineSet878.setCoord(Coordinate879)
#from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA880 = x3d.ColorRGBA()
ColorRGBA880.setUSE("HAnimSegmentLineColorRGBA")

LineSet878.setColor(ColorRGBA880)

Shape877.setGeometry(LineSet878)

HAnimSegment873.addChildren(Shape877)
HAnimSite881 = x3d.HAnimSite()
HAnimSite881.setName("l_metacarpal_phalanx_3")
HAnimSite881.setDEF("hanim_l_metacarpal_phalanx_3")
TouchSensor882 = x3d.TouchSensor()
TouchSensor882.setDescription("HAnimSite 76 l_metacarpal_phalanx_3")

HAnimSite881.addChildren(TouchSensor882)
Shape883 = x3d.Shape()
Shape883.setUSE("HAnimSiteShape")

HAnimSite881.addChildren(Shape883)
Billboard884 = x3d.Billboard()
Shape885 = x3d.Shape()
Text886 = x3d.Text()
Text886.setString(["76"])
FontStyle887 = x3d.FontStyle()
FontStyle887.setSize(0.035)

Text886.setFontStyle(FontStyle887)

Shape885.setGeometry(Text886)

Billboard884.addChildren(Shape885)

HAnimSite881.addChildren(Billboard884)

HAnimSegment873.addChildren(HAnimSite881)

HAnimJoint872.addChildren(HAnimSegment873)
HAnimJoint888 = x3d.HAnimJoint()
HAnimJoint888.setName("l_metacarpophalangeal_3")
HAnimJoint888.setDEF("hanim_l_metacarpophalangeal_3")
HAnimJoint888.setCenter([0.1987,0.7818,-0.053])
HAnimJoint888.setUlimit([0,0,0])
HAnimJoint888.setLlimit([0,0,0])
HAnimSegment889 = x3d.HAnimSegment()
HAnimSegment889.setName("l_carpal_proximal_phalanx_3")
HAnimSegment889.setDEF("hanim_l_carpal_proximal_phalanx_3")
Transform890 = x3d.Transform()
Transform890.setTranslation([0.1987,0.7818,-0.053])
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
Coordinate895.setPoint([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503])

LineSet894.setCoord(Coordinate895)
#from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA896 = x3d.ColorRGBA()
ColorRGBA896.setUSE("HAnimSegmentLineColorRGBA")

LineSet894.setColor(ColorRGBA896)

Shape893.setGeometry(LineSet894)

HAnimSegment889.addChildren(Shape893)

HAnimJoint888.addChildren(HAnimSegment889)
HAnimJoint897 = x3d.HAnimJoint()
HAnimJoint897.setName("l_carpal_proximal_interphalangeal_3")
HAnimJoint897.setDEF("hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint897.setCenter([0.2013,0.7273,-0.0503])
HAnimJoint897.setUlimit([0,0,0])
HAnimJoint897.setLlimit([0,0,0])
HAnimSegment898 = x3d.HAnimSegment()
HAnimSegment898.setName("l_carpal_middle_phalanx_3")
HAnimSegment898.setDEF("hanim_l_carpal_middle_phalanx_3")
Transform899 = x3d.Transform()
Transform899.setTranslation([0.2013,0.7273,-0.0503])
Transform900 = x3d.Transform()
#Empty Transform
Shape901 = x3d.Shape()
Shape901.setUSE("HAnimJointShape")

Transform900.addChild(Shape901)

Transform899.addChildren(Transform900)

HAnimSegment898.addChildren(Transform899)
Shape902 = x3d.Shape()
LineSet903 = x3d.LineSet()
LineSet903.setVertexCount([2])
Coordinate904 = x3d.Coordinate()
Coordinate904.setPoint([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494])

LineSet903.setCoord(Coordinate904)
#from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA905 = x3d.ColorRGBA()
ColorRGBA905.setUSE("HAnimSegmentLineColorRGBA")

LineSet903.setColor(ColorRGBA905)

Shape902.setGeometry(LineSet903)

HAnimSegment898.addChildren(Shape902)

HAnimJoint897.addChildren(HAnimSegment898)
HAnimJoint906 = x3d.HAnimJoint()
HAnimJoint906.setName("l_carpal_distal_interphalangeal_3")
HAnimJoint906.setDEF("hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint906.setCenter([0.2026,0.7011,-0.0494])
HAnimJoint906.setUlimit([0,0,0])
HAnimJoint906.setLlimit([0,0,0])

HAnimJoint897.addChildren(HAnimJoint906)

HAnimJoint888.addChildren(HAnimJoint897)

HAnimJoint872.addChildren(HAnimJoint888)

HAnimJoint786.addChildren(HAnimJoint872)
HAnimJoint907 = x3d.HAnimJoint()
HAnimJoint907.setName("l_carpometacarpal_4")
HAnimJoint907.setDEF("hanim_l_carpometacarpal_4")
HAnimJoint907.setCenter([0.1956,0.8019,-0.0794])
HAnimJoint907.setUlimit([0,0,0])
HAnimJoint907.setLlimit([0,0,0])
HAnimSegment908 = x3d.HAnimSegment()
HAnimSegment908.setName("l_metacarpal_4")
HAnimSegment908.setDEF("hanim_l_metacarpal_4")
Transform909 = x3d.Transform()
Transform909.setTranslation([0.1956,0.8019,-0.0794])
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
Coordinate914.setPoint([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794])

LineSet913.setCoord(Coordinate914)
#from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA915 = x3d.ColorRGBA()
ColorRGBA915.setUSE("HAnimSegmentLineColorRGBA")

LineSet913.setColor(ColorRGBA915)

Shape912.setGeometry(LineSet913)

HAnimSegment908.addChildren(Shape912)

HAnimJoint907.addChildren(HAnimSegment908)
HAnimJoint916 = x3d.HAnimJoint()
HAnimJoint916.setName("l_metacarpophalangeal_4")
HAnimJoint916.setDEF("hanim_l_metacarpophalangeal_4")
HAnimJoint916.setCenter([0.1956,0.7815,-0.0794])
HAnimJoint916.setUlimit([0,0,0])
HAnimJoint916.setLlimit([0,0,0])
HAnimSegment917 = x3d.HAnimSegment()
HAnimSegment917.setName("l_carpal_proximal_phalanx_4")
HAnimSegment917.setDEF("hanim_l_carpal_proximal_phalanx_4")
Transform918 = x3d.Transform()
Transform918.setTranslation([0.1956,0.7815,-0.0794])
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
Coordinate923.setPoint([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777])

LineSet922.setCoord(Coordinate923)
#from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA924 = x3d.ColorRGBA()
ColorRGBA924.setUSE("HAnimSegmentLineColorRGBA")

LineSet922.setColor(ColorRGBA924)

Shape921.setGeometry(LineSet922)

HAnimSegment917.addChildren(Shape921)

HAnimJoint916.addChildren(HAnimSegment917)
HAnimJoint925 = x3d.HAnimJoint()
HAnimJoint925.setName("l_carpal_proximal_interphalangeal_4")
HAnimJoint925.setDEF("hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint925.setCenter([0.1973,0.7287,-0.0777])
HAnimJoint925.setUlimit([0,0,0])
HAnimJoint925.setLlimit([0,0,0])
HAnimSegment926 = x3d.HAnimSegment()
HAnimSegment926.setName("l_carpal_middle_phalanx_4")
HAnimSegment926.setDEF("hanim_l_carpal_middle_phalanx_4")
Transform927 = x3d.Transform()
Transform927.setTranslation([0.1973,0.7287,-0.0777])
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
Coordinate932.setPoint([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767])

LineSet931.setCoord(Coordinate932)
#from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA933 = x3d.ColorRGBA()
ColorRGBA933.setUSE("HAnimSegmentLineColorRGBA")

LineSet931.setColor(ColorRGBA933)

Shape930.setGeometry(LineSet931)

HAnimSegment926.addChildren(Shape930)

HAnimJoint925.addChildren(HAnimSegment926)
HAnimJoint934 = x3d.HAnimJoint()
HAnimJoint934.setName("l_carpal_distal_interphalangeal_4")
HAnimJoint934.setDEF("hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint934.setCenter([0.1983,0.7045,-0.0767])
HAnimJoint934.setUlimit([0,0,0])
HAnimJoint934.setLlimit([0,0,0])

HAnimJoint925.addChildren(HAnimJoint934)

HAnimJoint916.addChildren(HAnimJoint925)

HAnimJoint907.addChildren(HAnimJoint916)

HAnimJoint786.addChildren(HAnimJoint907)
HAnimJoint935 = x3d.HAnimJoint()
HAnimJoint935.setName("l_carpometacarpal_5")
HAnimJoint935.setDEF("hanim_l_carpometacarpal_5")
HAnimJoint935.setCenter([0.1925,0.8066,-0.1036])
HAnimJoint935.setUlimit([0,0,0])
HAnimJoint935.setLlimit([0,0,0])
HAnimSegment936 = x3d.HAnimSegment()
HAnimSegment936.setName("l_metacarpal_5")
HAnimSegment936.setDEF("hanim_l_metacarpal_5")
Transform937 = x3d.Transform()
Transform937.setTranslation([0.1925,0.8066,-0.1036])
Transform938 = x3d.Transform()
#Empty Transform
Shape939 = x3d.Shape()
Shape939.setUSE("HAnimJointShape")

Transform938.addChild(Shape939)

Transform937.addChildren(Transform938)

HAnimSegment936.addChildren(Transform937)
Shape940 = x3d.Shape()
LineSet941 = x3d.LineSet()
LineSet941.setVertexCount([2])
Coordinate942 = x3d.Coordinate()
Coordinate942.setPoint([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036])

LineSet941.setCoord(Coordinate942)
#from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA943 = x3d.ColorRGBA()
ColorRGBA943.setUSE("HAnimSegmentLineColorRGBA")

LineSet941.setColor(ColorRGBA943)

Shape940.setGeometry(LineSet941)

HAnimSegment936.addChildren(Shape940)
HAnimSite944 = x3d.HAnimSite()
HAnimSite944.setName("l_metacarpal_phalanx_5")
HAnimSite944.setDEF("hanim_l_metacarpal_phalanx_5")
HAnimSite944.setTranslation([0.1929,0.786,-0.1122])
TouchSensor945 = x3d.TouchSensor()
TouchSensor945.setDescription("HAnimSite 77 l_metacarpal_phalanx_5")

HAnimSite944.addChildren(TouchSensor945)
Shape946 = x3d.Shape()
Shape946.setUSE("HAnimSiteShape")

HAnimSite944.addChildren(Shape946)
Billboard947 = x3d.Billboard()
Shape948 = x3d.Shape()
Text949 = x3d.Text()
Text949.setString(["77"])
FontStyle950 = x3d.FontStyle()
FontStyle950.setSize(0.035)

Text949.setFontStyle(FontStyle950)

Shape948.setGeometry(Text949)

Billboard947.addChildren(Shape948)

HAnimSite944.addChildren(Billboard947)

HAnimSegment936.addChildren(HAnimSite944)

HAnimJoint935.addChildren(HAnimSegment936)
HAnimJoint951 = x3d.HAnimJoint()
HAnimJoint951.setName("l_metacarpophalangeal_5")
HAnimJoint951.setDEF("hanim_l_metacarpophalangeal_5")
HAnimJoint951.setCenter([0.1925,0.7866,-0.1036])
HAnimJoint951.setUlimit([0,0,0])
HAnimJoint951.setLlimit([0,0,0])
HAnimSegment952 = x3d.HAnimSegment()
HAnimSegment952.setName("l_carpal_proximal_phalanx_5")
HAnimSegment952.setDEF("hanim_l_carpal_proximal_phalanx_5")
Transform953 = x3d.Transform()
Transform953.setTranslation([0.1925,0.7866,-0.1036])
Transform954 = x3d.Transform()
#Empty Transform
Shape955 = x3d.Shape()
Shape955.setUSE("HAnimJointShape")

Transform954.addChild(Shape955)

Transform953.addChildren(Transform954)

HAnimSegment952.addChildren(Transform953)
Shape956 = x3d.Shape()
LineSet957 = x3d.LineSet()
LineSet957.setVertexCount([2])
Coordinate958 = x3d.Coordinate()
Coordinate958.setPoint([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024])

LineSet957.setCoord(Coordinate958)
#from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA959 = x3d.ColorRGBA()
ColorRGBA959.setUSE("HAnimSegmentLineColorRGBA")

LineSet957.setColor(ColorRGBA959)

Shape956.setGeometry(LineSet957)

HAnimSegment952.addChildren(Shape956)

HAnimJoint951.addChildren(HAnimSegment952)
HAnimJoint960 = x3d.HAnimJoint()
HAnimJoint960.setName("l_carpal_proximal_interphalangeal_5")
HAnimJoint960.setDEF("hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint960.setCenter([0.1938,0.7452,-0.1024])
HAnimJoint960.setUlimit([0,0,0])
HAnimJoint960.setLlimit([0,0,0])
HAnimSegment961 = x3d.HAnimSegment()
HAnimSegment961.setName("l_carpal_middle_phalanx_5")
HAnimSegment961.setDEF("hanim_l_carpal_middle_phalanx_5")
Transform962 = x3d.Transform()
Transform962.setTranslation([0.1938,0.7452,-0.1024])
Transform963 = x3d.Transform()
#Empty Transform
Shape964 = x3d.Shape()
Shape964.setUSE("HAnimJointShape")

Transform963.addChild(Shape964)

Transform962.addChildren(Transform963)

HAnimSegment961.addChildren(Transform962)
Shape965 = x3d.Shape()
LineSet966 = x3d.LineSet()
LineSet966.setVertexCount([2])
Coordinate967 = x3d.Coordinate()
Coordinate967.setPoint([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017])

LineSet966.setCoord(Coordinate967)
#from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA968 = x3d.ColorRGBA()
ColorRGBA968.setUSE("HAnimSegmentLineColorRGBA")

LineSet966.setColor(ColorRGBA968)

Shape965.setGeometry(LineSet966)

HAnimSegment961.addChildren(Shape965)

HAnimJoint960.addChildren(HAnimSegment961)
HAnimJoint969 = x3d.HAnimJoint()
HAnimJoint969.setName("l_carpal_distal_interphalangeal_5")
HAnimJoint969.setDEF("hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint969.setCenter([0.1948,0.7277,-0.1017])
HAnimJoint969.setUlimit([0,0,0])
HAnimJoint969.setLlimit([0,0,0])

HAnimJoint960.addChildren(HAnimJoint969)

HAnimJoint951.addChildren(HAnimJoint960)

HAnimJoint935.addChildren(HAnimJoint951)

HAnimJoint786.addChildren(HAnimJoint935)

HAnimJoint749.addChildren(HAnimJoint786)

HAnimJoint726.addChildren(HAnimJoint749)

HAnimJoint717.addChildren(HAnimJoint726)

HAnimJoint673.addChildren(HAnimJoint717)

HAnimJoint602.addChildren(HAnimJoint673)
HAnimJoint970 = x3d.HAnimJoint()
HAnimJoint970.setName("r_sternoclavicular")
HAnimJoint970.setDEF("hanim_r_sternoclavicular")
HAnimJoint970.setCenter([-0.0694,1.46,-0.033])
HAnimJoint970.setUlimit([0,0,0])
HAnimJoint970.setLlimit([0,0,0])
HAnimSegment971 = x3d.HAnimSegment()
HAnimSegment971.setName("r_clavicle")
HAnimSegment971.setDEF("hanim_r_clavicle")
Transform972 = x3d.Transform()
Transform972.setTranslation([-0.0694,1.46,-0.033])
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
Coordinate977.setPoint([-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401])

LineSet976.setCoord(Coordinate977)
#from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA978 = x3d.ColorRGBA()
ColorRGBA978.setUSE("HAnimSegmentLineColorRGBA")

LineSet976.setColor(ColorRGBA978)

Shape975.setGeometry(LineSet976)

HAnimSegment971.addChildren(Shape975)
HAnimSite979 = x3d.HAnimSite()
HAnimSite979.setName("r_acromion")
HAnimSite979.setDEF("hanim_r_acromion")
HAnimSite979.setTranslation([-0.1905,1.4791,-0.0431])
TouchSensor980 = x3d.TouchSensor()
TouchSensor980.setDescription("HAnimSite 20 r_acromion")

HAnimSite979.addChildren(TouchSensor980)
Shape981 = x3d.Shape()
Shape981.setUSE("HAnimSiteShape")

HAnimSite979.addChildren(Shape981)
Billboard982 = x3d.Billboard()
Shape983 = x3d.Shape()
Text984 = x3d.Text()
Text984.setString(["20"])
FontStyle985 = x3d.FontStyle()
FontStyle985.setSize(0.035)

Text984.setFontStyle(FontStyle985)

Shape983.setGeometry(Text984)

Billboard982.addChildren(Shape983)

HAnimSite979.addChildren(Billboard982)

HAnimSegment971.addChildren(HAnimSite979)
HAnimSite986 = x3d.HAnimSite()
HAnimSite986.setName("r_axilla_distal")
HAnimSite986.setDEF("hanim_r_axilla_distal")
HAnimSite986.setTranslation([-0.1603,1.4098,-0.0826])
TouchSensor987 = x3d.TouchSensor()
TouchSensor987.setDescription("HAnimSite 22 r_axilla_distal")

HAnimSite986.addChildren(TouchSensor987)
Shape988 = x3d.Shape()
Shape988.setUSE("HAnimSiteShape")

HAnimSite986.addChildren(Shape988)
Billboard989 = x3d.Billboard()
Shape990 = x3d.Shape()
Text991 = x3d.Text()
Text991.setString(["22"])
FontStyle992 = x3d.FontStyle()
FontStyle992.setSize(0.035)

Text991.setFontStyle(FontStyle992)

Shape990.setGeometry(Text991)

Billboard989.addChildren(Shape990)

HAnimSite986.addChildren(Billboard989)

HAnimSegment971.addChildren(HAnimSite986)
HAnimSite993 = x3d.HAnimSite()
HAnimSite993.setName("r_axilla_posterior_folds")
HAnimSite993.setDEF("hanim_r_axilla_posterior_folds")
TouchSensor994 = x3d.TouchSensor()
TouchSensor994.setDescription("HAnimSite 23 r_axilla_posterior_folds")

HAnimSite993.addChildren(TouchSensor994)
Shape995 = x3d.Shape()
Shape995.setUSE("HAnimSiteShape")

HAnimSite993.addChildren(Shape995)
Billboard996 = x3d.Billboard()
Shape997 = x3d.Shape()
Text998 = x3d.Text()
Text998.setString(["23"])
FontStyle999 = x3d.FontStyle()
FontStyle999.setSize(0.035)

Text998.setFontStyle(FontStyle999)

Shape997.setGeometry(Text998)

Billboard996.addChildren(Shape997)

HAnimSite993.addChildren(Billboard996)

HAnimSegment971.addChildren(HAnimSite993)
HAnimSite1000 = x3d.HAnimSite()
HAnimSite1000.setName("r_axilla_proximal")
HAnimSite1000.setDEF("hanim_r_axilla_proximal")
HAnimSite1000.setTranslation([-0.1626,1.4072,-0.0031])
TouchSensor1001 = x3d.TouchSensor()
TouchSensor1001.setDescription("HAnimSite 21 r_axilla_proximal")

HAnimSite1000.addChildren(TouchSensor1001)
Shape1002 = x3d.Shape()
Shape1002.setUSE("HAnimSiteShape")

HAnimSite1000.addChildren(Shape1002)
Billboard1003 = x3d.Billboard()
Shape1004 = x3d.Shape()
Text1005 = x3d.Text()
Text1005.setString(["21"])
FontStyle1006 = x3d.FontStyle()
FontStyle1006.setSize(0.035)

Text1005.setFontStyle(FontStyle1006)

Shape1004.setGeometry(Text1005)

Billboard1003.addChildren(Shape1004)

HAnimSite1000.addChildren(Billboard1003)

HAnimSegment971.addChildren(HAnimSite1000)
HAnimSite1007 = x3d.HAnimSite()
HAnimSite1007.setName("r_clavicale")
HAnimSite1007.setDEF("hanim_r_clavicale")
HAnimSite1007.setTranslation([-0.0115,1.4943,0.04])
TouchSensor1008 = x3d.TouchSensor()
TouchSensor1008.setDescription("HAnimSite 19 r_clavicale")

HAnimSite1007.addChildren(TouchSensor1008)
Shape1009 = x3d.Shape()
Shape1009.setUSE("HAnimSiteShape")

HAnimSite1007.addChildren(Shape1009)
Billboard1010 = x3d.Billboard()
Shape1011 = x3d.Shape()
Text1012 = x3d.Text()
Text1012.setString(["19"])
FontStyle1013 = x3d.FontStyle()
FontStyle1013.setSize(0.035)

Text1012.setFontStyle(FontStyle1013)

Shape1011.setGeometry(Text1012)

Billboard1010.addChildren(Shape1011)

HAnimSite1007.addChildren(Billboard1010)

HAnimSegment971.addChildren(HAnimSite1007)

HAnimJoint970.addChildren(HAnimSegment971)
HAnimJoint1014 = x3d.HAnimJoint()
HAnimJoint1014.setName("r_acromioclavicular")
HAnimJoint1014.setDEF("hanim_r_acromioclavicular")
HAnimJoint1014.setCenter([-0.0836,1.4281,-0.0401])
HAnimJoint1014.setUlimit([0,0,0])
HAnimJoint1014.setLlimit([0,0,0])
HAnimSegment1015 = x3d.HAnimSegment()
HAnimSegment1015.setName("r_scapula")
HAnimSegment1015.setDEF("hanim_r_scapula")
Transform1016 = x3d.Transform()
Transform1016.setTranslation([-0.0836,1.4281,-0.0401])
Transform1017 = x3d.Transform()
#Empty Transform
Shape1018 = x3d.Shape()
Shape1018.setUSE("HAnimJointShape")

Transform1017.addChild(Shape1018)

Transform1016.addChildren(Transform1017)

HAnimSegment1015.addChildren(Transform1016)
Shape1019 = x3d.Shape()
LineSet1020 = x3d.LineSet()
LineSet1020.setVertexCount([2])
Coordinate1021 = x3d.Coordinate()
Coordinate1021.setPoint([-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325])

LineSet1020.setCoord(Coordinate1021)
#from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA1022 = x3d.ColorRGBA()
ColorRGBA1022.setUSE("HAnimSegmentLineColorRGBA")

LineSet1020.setColor(ColorRGBA1022)

Shape1019.setGeometry(LineSet1020)

HAnimSegment1015.addChildren(Shape1019)

HAnimJoint1014.addChildren(HAnimSegment1015)
HAnimJoint1023 = x3d.HAnimJoint()
HAnimJoint1023.setName("r_shoulder")
HAnimJoint1023.setDEF("hanim_r_shoulder")
HAnimJoint1023.setCenter([-0.1907,1.4407,-0.0325])
HAnimJoint1023.setUlimit([0,0,0])
HAnimJoint1023.setLlimit([0,0,0])
HAnimSegment1024 = x3d.HAnimSegment()
HAnimSegment1024.setName("r_upperarm")
HAnimSegment1024.setDEF("hanim_r_upperarm")
Transform1025 = x3d.Transform()
Transform1025.setTranslation([-0.1907,1.4407,-0.0325])
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
Coordinate1030.setPoint([-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062])

LineSet1029.setCoord(Coordinate1030)
#from r_shoulder to r_elbow vertices 2
ColorRGBA1031 = x3d.ColorRGBA()
ColorRGBA1031.setUSE("HAnimSegmentLineColorRGBA")

LineSet1029.setColor(ColorRGBA1031)

Shape1028.setGeometry(LineSet1029)

HAnimSegment1024.addChildren(Shape1028)
HAnimSite1032 = x3d.HAnimSite()
HAnimSite1032.setName("r_bideltoid")
HAnimSite1032.setDEF("hanim_r_bideltoid")
TouchSensor1033 = x3d.TouchSensor()
TouchSensor1033.setDescription("HAnimSite 97 r_bideltoid")

HAnimSite1032.addChildren(TouchSensor1033)
Shape1034 = x3d.Shape()
Shape1034.setUSE("HAnimSiteShape")

HAnimSite1032.addChildren(Shape1034)
Billboard1035 = x3d.Billboard()
Shape1036 = x3d.Shape()
Text1037 = x3d.Text()
Text1037.setString(["97"])
FontStyle1038 = x3d.FontStyle()
FontStyle1038.setSize(0.035)

Text1037.setFontStyle(FontStyle1038)

Shape1036.setGeometry(Text1037)

Billboard1035.addChildren(Shape1036)

HAnimSite1032.addChildren(Billboard1035)

HAnimSegment1024.addChildren(HAnimSite1032)
HAnimSite1039 = x3d.HAnimSite()
HAnimSite1039.setName("r_humeral_lateral_epicondyles")
HAnimSite1039.setDEF("hanim_r_humeral_lateral_epicondyles")
HAnimSite1039.setTranslation([-0.2224,1.1517,-0.1033])
TouchSensor1040 = x3d.TouchSensor()
TouchSensor1040.setDescription("HAnimSite 66 r_humeral_lateral_epicondyles")

HAnimSite1039.addChildren(TouchSensor1040)
Shape1041 = x3d.Shape()
Shape1041.setUSE("HAnimSiteShape")

HAnimSite1039.addChildren(Shape1041)
Billboard1042 = x3d.Billboard()
Shape1043 = x3d.Shape()
Text1044 = x3d.Text()
Text1044.setString(["66"])
FontStyle1045 = x3d.FontStyle()
FontStyle1045.setSize(0.035)

Text1044.setFontStyle(FontStyle1045)

Shape1043.setGeometry(Text1044)

Billboard1042.addChildren(Shape1043)

HAnimSite1039.addChildren(Billboard1042)

HAnimSegment1024.addChildren(HAnimSite1039)

HAnimJoint1023.addChildren(HAnimSegment1024)
HAnimJoint1046 = x3d.HAnimJoint()
HAnimJoint1046.setName("r_elbow")
HAnimJoint1046.setDEF("hanim_r_elbow")
HAnimJoint1046.setCenter([-0.1949,1.1388,-0.062])
HAnimJoint1046.setUlimit([0,0,0])
HAnimJoint1046.setLlimit([0,0,0])
HAnimSegment1047 = x3d.HAnimSegment()
HAnimSegment1047.setName("r_forearm")
HAnimSegment1047.setDEF("hanim_r_forearm")
Transform1048 = x3d.Transform()
Transform1048.setTranslation([-0.1949,1.1388,-0.062])
Transform1049 = x3d.Transform()
#Empty Transform
Shape1050 = x3d.Shape()
Shape1050.setUSE("HAnimJointShape")

Transform1049.addChild(Shape1050)

Transform1048.addChildren(Transform1049)

HAnimSegment1047.addChildren(Transform1048)
Shape1051 = x3d.Shape()
LineSet1052 = x3d.LineSet()
LineSet1052.setVertexCount([2])
Coordinate1053 = x3d.Coordinate()
Coordinate1053.setPoint([-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521])

LineSet1052.setCoord(Coordinate1053)
#from r_elbow to r_radiocarpal vertices 2
ColorRGBA1054 = x3d.ColorRGBA()
ColorRGBA1054.setUSE("HAnimSegmentLineColorRGBA")

LineSet1052.setColor(ColorRGBA1054)

Shape1051.setGeometry(LineSet1052)

HAnimSegment1047.addChildren(Shape1051)
HAnimSite1055 = x3d.HAnimSite()
HAnimSite1055.setName("r_humeral_medial_epicondyles")
HAnimSite1055.setDEF("hanim_r_humeral_medial_epicondyles")
HAnimSite1055.setTranslation([-0.168,1.1298,-0.1062])
TouchSensor1056 = x3d.TouchSensor()
TouchSensor1056.setDescription("HAnimSite 67 r_humeral_medial_epicondyles")

HAnimSite1055.addChildren(TouchSensor1056)
Shape1057 = x3d.Shape()
Shape1057.setUSE("HAnimSiteShape")

HAnimSite1055.addChildren(Shape1057)
Billboard1058 = x3d.Billboard()
Shape1059 = x3d.Shape()
Text1060 = x3d.Text()
Text1060.setString(["67"])
FontStyle1061 = x3d.FontStyle()
FontStyle1061.setSize(0.035)

Text1060.setFontStyle(FontStyle1061)

Shape1059.setGeometry(Text1060)

Billboard1058.addChildren(Shape1059)

HAnimSite1055.addChildren(Billboard1058)

HAnimSegment1047.addChildren(HAnimSite1055)
HAnimSite1062 = x3d.HAnimSite()
HAnimSite1062.setName("r_olecranon")
HAnimSite1062.setDEF("hanim_r_olecranon")
HAnimSite1062.setTranslation([-0.1907,1.1405,-0.1065])
TouchSensor1063 = x3d.TouchSensor()
TouchSensor1063.setDescription("HAnimSite 68 r_olecranon")

HAnimSite1062.addChildren(TouchSensor1063)
Shape1064 = x3d.Shape()
Shape1064.setUSE("HAnimSiteShape")

HAnimSite1062.addChildren(Shape1064)
Billboard1065 = x3d.Billboard()
Shape1066 = x3d.Shape()
Text1067 = x3d.Text()
Text1067.setString(["68"])
FontStyle1068 = x3d.FontStyle()
FontStyle1068.setSize(0.035)

Text1067.setFontStyle(FontStyle1068)

Shape1066.setGeometry(Text1067)

Billboard1065.addChildren(Shape1066)

HAnimSite1062.addChildren(Billboard1065)

HAnimSegment1047.addChildren(HAnimSite1062)
HAnimSite1069 = x3d.HAnimSite()
HAnimSite1069.setName("r_radial_styloid")
HAnimSite1069.setDEF("hanim_r_radial_styloid")
HAnimSite1069.setTranslation([-0.1884,0.8676,-0.036])
TouchSensor1070 = x3d.TouchSensor()
TouchSensor1070.setDescription("HAnimSite 74 r_radial_styloid")

HAnimSite1069.addChildren(TouchSensor1070)
Shape1071 = x3d.Shape()
Shape1071.setUSE("HAnimSiteShape")

HAnimSite1069.addChildren(Shape1071)
Billboard1072 = x3d.Billboard()
Shape1073 = x3d.Shape()
Text1074 = x3d.Text()
Text1074.setString(["74"])
FontStyle1075 = x3d.FontStyle()
FontStyle1075.setSize(0.035)

Text1074.setFontStyle(FontStyle1075)

Shape1073.setGeometry(Text1074)

Billboard1072.addChildren(Shape1073)

HAnimSite1069.addChildren(Billboard1072)

HAnimSegment1047.addChildren(HAnimSite1069)
HAnimSite1076 = x3d.HAnimSite()
HAnimSite1076.setName("r_radiale")
HAnimSite1076.setDEF("hanim_r_radiale")
HAnimSite1076.setTranslation([-0.213,1.1305,-0.1091])
TouchSensor1077 = x3d.TouchSensor()
TouchSensor1077.setDescription("HAnimSite 72 r_radiale")

HAnimSite1076.addChildren(TouchSensor1077)
Shape1078 = x3d.Shape()
Shape1078.setUSE("HAnimSiteShape")

HAnimSite1076.addChildren(Shape1078)
Billboard1079 = x3d.Billboard()
Shape1080 = x3d.Shape()
Text1081 = x3d.Text()
Text1081.setString(["72"])
FontStyle1082 = x3d.FontStyle()
FontStyle1082.setSize(0.035)

Text1081.setFontStyle(FontStyle1082)

Shape1080.setGeometry(Text1081)

Billboard1079.addChildren(Shape1080)

HAnimSite1076.addChildren(Billboard1079)

HAnimSegment1047.addChildren(HAnimSite1076)

HAnimJoint1046.addChildren(HAnimSegment1047)
HAnimJoint1083 = x3d.HAnimJoint()
HAnimJoint1083.setName("r_radiocarpal")
HAnimJoint1083.setDEF("hanim_r_radiocarpal")
HAnimJoint1083.setCenter([-0.1959,0.8694,-0.0521])
HAnimJoint1083.setUlimit([0,0,0])
HAnimJoint1083.setLlimit([0,0,0])
HAnimSegment1084 = x3d.HAnimSegment()
HAnimSegment1084.setName("r_carpal")
HAnimSegment1084.setDEF("hanim_r_carpal")
Transform1085 = x3d.Transform()
Transform1085.setScale([0.2,0.2,0.2])
Transform1085.setTranslation([-0.2,0.85,-0.05])
Transform1085.setRotation([0,0,1,-3.14])
#Transform right hand
Transform1086 = x3d.Transform()
Transform1086.setRotation([0,1,0,1.57])
#Transform right hand
Shape1087 = x3d.Shape()
Shape1087.setUSE("HAnimJointShape")

Transform1086.addChild(Shape1087)

Transform1085.addChildren(Transform1086)

HAnimSegment1084.addChildren(Transform1085)
Shape1088 = x3d.Shape()
LineSet1089 = x3d.LineSet()
LineSet1089.setVertexCount([2])
Coordinate1090 = x3d.Coordinate()
Coordinate1090.setPoint([-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473])

LineSet1089.setCoord(Coordinate1090)
#from r_radiocarpal to r_carpometacarpal_1 vertices 2
ColorRGBA1091 = x3d.ColorRGBA()
ColorRGBA1091.setUSE("HAnimSegmentLineColorRGBA")

LineSet1089.setColor(ColorRGBA1091)

Shape1088.setGeometry(LineSet1089)

HAnimSegment1084.addChildren(Shape1088)
HAnimSite1092 = x3d.HAnimSite()
HAnimSite1092.setName("r_ulnar_styloid")
HAnimSite1092.setDEF("hanim_r_ulnar_styloid")
HAnimSite1092.setTranslation([-0.2117,0.8562,-0.0584])
TouchSensor1093 = x3d.TouchSensor()
TouchSensor1093.setDescription("HAnimSite 73 r_ulnar_styloid")

HAnimSite1092.addChildren(TouchSensor1093)
Shape1094 = x3d.Shape()
Shape1094.setUSE("HAnimSiteShape")

HAnimSite1092.addChildren(Shape1094)
Billboard1095 = x3d.Billboard()
Shape1096 = x3d.Shape()
Text1097 = x3d.Text()
Text1097.setString(["73"])
FontStyle1098 = x3d.FontStyle()
FontStyle1098.setSize(0.035)

Text1097.setFontStyle(FontStyle1098)

Shape1096.setGeometry(Text1097)

Billboard1095.addChildren(Shape1096)

HAnimSite1092.addChildren(Billboard1095)

HAnimSegment1084.addChildren(HAnimSite1092)
Shape1099 = x3d.Shape()
LineSet1100 = x3d.LineSet()
LineSet1100.setVertexCount([2])
Coordinate1101 = x3d.Coordinate()
Coordinate1101.setPoint([-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218])

LineSet1100.setCoord(Coordinate1101)
#from r_radiocarpal to r_carpometacarpal_2 vertices 2
ColorRGBA1102 = x3d.ColorRGBA()
ColorRGBA1102.setUSE("HAnimSegmentLineColorRGBA")

LineSet1100.setColor(ColorRGBA1102)

Shape1099.setGeometry(LineSet1100)

HAnimSegment1084.addChildren(Shape1099)
Shape1103 = x3d.Shape()
LineSet1104 = x3d.LineSet()
LineSet1104.setVertexCount([2])
Coordinate1105 = x3d.Coordinate()
Coordinate1105.setPoint([-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468])

LineSet1104.setCoord(Coordinate1105)
#from r_radiocarpal to r_carpometacarpal_3 vertices 2
ColorRGBA1106 = x3d.ColorRGBA()
ColorRGBA1106.setUSE("HAnimSegmentLineColorRGBA")

LineSet1104.setColor(ColorRGBA1106)

Shape1103.setGeometry(LineSet1104)

HAnimSegment1084.addChildren(Shape1103)
Shape1107 = x3d.Shape()
LineSet1108 = x3d.LineSet()
LineSet1108.setVertexCount([2])
Coordinate1109 = x3d.Coordinate()
Coordinate1109.setPoint([-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732])

LineSet1108.setCoord(Coordinate1109)
#from r_radiocarpal to r_carpometacarpal_4 vertices 2
ColorRGBA1110 = x3d.ColorRGBA()
ColorRGBA1110.setUSE("HAnimSegmentLineColorRGBA")

LineSet1108.setColor(ColorRGBA1110)

Shape1107.setGeometry(LineSet1108)

HAnimSegment1084.addChildren(Shape1107)
Shape1111 = x3d.Shape()
LineSet1112 = x3d.LineSet()
LineSet1112.setVertexCount([2])
Coordinate1113 = x3d.Coordinate()
Coordinate1113.setPoint([-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975])

LineSet1112.setCoord(Coordinate1113)
#from r_radiocarpal to r_carpometacarpal_5 vertices 2
ColorRGBA1114 = x3d.ColorRGBA()
ColorRGBA1114.setUSE("HAnimSegmentLineColorRGBA")

LineSet1112.setColor(ColorRGBA1114)

Shape1111.setGeometry(LineSet1112)

HAnimSegment1084.addChildren(Shape1111)

HAnimJoint1083.addChildren(HAnimSegment1084)
HAnimJoint1115 = x3d.HAnimJoint()
HAnimJoint1115.setName("r_carpometacarpal_1")
HAnimJoint1115.setDEF("hanim_r_carpometacarpal_1")
HAnimJoint1115.setCenter([-0.1899,0.8502,-0.0473])
HAnimJoint1115.setUlimit([0,0,0])
HAnimJoint1115.setLlimit([0,0,0])
HAnimSegment1116 = x3d.HAnimSegment()
HAnimSegment1116.setName("r_metacarpal_1")
HAnimSegment1116.setDEF("hanim_r_metacarpal_1")
Transform1117 = x3d.Transform()
Transform1117.setTranslation([-0.1899,0.8502,-0.0473])
Transform1118 = x3d.Transform()
#Empty Transform
Shape1119 = x3d.Shape()
Shape1119.setUSE("HAnimJointShape")

Transform1118.addChild(Shape1119)

Transform1117.addChildren(Transform1118)

HAnimSegment1116.addChildren(Transform1117)
Shape1120 = x3d.Shape()
LineSet1121 = x3d.LineSet()
LineSet1121.setVertexCount([2])
Coordinate1122 = x3d.Coordinate()
Coordinate1122.setPoint([-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306])

LineSet1121.setCoord(Coordinate1122)
#from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA1123 = x3d.ColorRGBA()
ColorRGBA1123.setUSE("HAnimSegmentLineColorRGBA")

LineSet1121.setColor(ColorRGBA1123)

Shape1120.setGeometry(LineSet1121)

HAnimSegment1116.addChildren(Shape1120)

HAnimJoint1115.addChildren(HAnimSegment1116)
HAnimJoint1124 = x3d.HAnimJoint()
HAnimJoint1124.setName("r_metacarpophalangeal_1")
HAnimJoint1124.setDEF("hanim_r_metacarpophalangeal_1")
HAnimJoint1124.setCenter([-0.1874,0.8256,0.0306])
HAnimJoint1124.setUlimit([0,0,0])
HAnimJoint1124.setLlimit([0,0,0])
HAnimSegment1125 = x3d.HAnimSegment()
HAnimSegment1125.setName("r_carpal_proximal_phalanx_1")
HAnimSegment1125.setDEF("hanim_r_carpal_proximal_phalanx_1")
Transform1126 = x3d.Transform()
Transform1126.setTranslation([-0.1874,0.8256,0.0306])
Transform1127 = x3d.Transform()
#Empty Transform
Shape1128 = x3d.Shape()
Shape1128.setUSE("HAnimJointShape")

Transform1127.addChild(Shape1128)

Transform1126.addChildren(Transform1127)

HAnimSegment1125.addChildren(Transform1126)
Shape1129 = x3d.Shape()
LineSet1130 = x3d.LineSet()
LineSet1130.setVertexCount([2])
Coordinate1131 = x3d.Coordinate()
Coordinate1131.setPoint([-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506])

LineSet1130.setCoord(Coordinate1131)
#from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA1132 = x3d.ColorRGBA()
ColorRGBA1132.setUSE("HAnimSegmentLineColorRGBA")

LineSet1130.setColor(ColorRGBA1132)

Shape1129.setGeometry(LineSet1130)

HAnimSegment1125.addChildren(Shape1129)

HAnimJoint1124.addChildren(HAnimSegment1125)
HAnimJoint1133 = x3d.HAnimJoint()
HAnimJoint1133.setName("r_carpal_interphalangeal_1")
HAnimJoint1133.setDEF("hanim_r_carpal_interphalangeal_1")
HAnimJoint1133.setCenter([-0.1864,0.819,0.0506])
HAnimJoint1133.setUlimit([0,0,0])
HAnimJoint1133.setLlimit([0,0,0])

HAnimJoint1124.addChildren(HAnimJoint1133)

HAnimJoint1115.addChildren(HAnimJoint1124)

HAnimJoint1083.addChildren(HAnimJoint1115)
HAnimJoint1134 = x3d.HAnimJoint()
HAnimJoint1134.setName("r_carpometacarpal_2")
HAnimJoint1134.setDEF("hanim_r_carpometacarpal_2")
HAnimJoint1134.setCenter([-0.1961,0.8055,-0.0218])
HAnimJoint1134.setUlimit([0,0,0])
HAnimJoint1134.setLlimit([0,0,0])
HAnimSegment1135 = x3d.HAnimSegment()
HAnimSegment1135.setName("r_metacarpal_2")
HAnimSegment1135.setDEF("hanim_r_metacarpal_2")
Transform1136 = x3d.Transform()
Transform1136.setTranslation([-0.1961,0.8055,-0.0218])
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
Coordinate1141.setPoint([-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218])

LineSet1140.setCoord(Coordinate1141)
#from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA1142 = x3d.ColorRGBA()
ColorRGBA1142.setUSE("HAnimSegmentLineColorRGBA")

LineSet1140.setColor(ColorRGBA1142)

Shape1139.setGeometry(LineSet1140)

HAnimSegment1135.addChildren(Shape1139)
HAnimSite1143 = x3d.HAnimSite()
HAnimSite1143.setName("r_metacarpal_phalanx_2")
HAnimSite1143.setDEF("hanim_r_metacarpal_phalanx_2")
HAnimSite1143.setTranslation([-0.1977,0.8169,-0.0177])
TouchSensor1144 = x3d.TouchSensor()
TouchSensor1144.setDescription("HAnimSite 78 r_metacarpal_phalanx_2")

HAnimSite1143.addChildren(TouchSensor1144)
Shape1145 = x3d.Shape()
Shape1145.setUSE("HAnimSiteShape")

HAnimSite1143.addChildren(Shape1145)
Billboard1146 = x3d.Billboard()
Shape1147 = x3d.Shape()
Text1148 = x3d.Text()
Text1148.setString(["78"])
FontStyle1149 = x3d.FontStyle()
FontStyle1149.setSize(0.035)

Text1148.setFontStyle(FontStyle1149)

Shape1147.setGeometry(Text1148)

Billboard1146.addChildren(Shape1147)

HAnimSite1143.addChildren(Billboard1146)

HAnimSegment1135.addChildren(HAnimSite1143)

HAnimJoint1134.addChildren(HAnimSegment1135)
HAnimJoint1150 = x3d.HAnimJoint()
HAnimJoint1150.setName("r_metacarpophalangeal_2")
HAnimJoint1150.setDEF("hanim_r_metacarpophalangeal_2")
HAnimJoint1150.setCenter([-0.1961,0.7846,-0.0218])
HAnimJoint1150.setUlimit([0,0,0])
HAnimJoint1150.setLlimit([0,0,0])
HAnimSegment1151 = x3d.HAnimSegment()
HAnimSegment1151.setName("r_carpal_proximal_phalanx_2")
HAnimSegment1151.setDEF("hanim_r_carpal_proximal_phalanx_2")
Transform1152 = x3d.Transform()
Transform1152.setTranslation([-0.1961,0.7846,-0.0218])
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
Coordinate1157.setPoint([-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185])

LineSet1156.setCoord(Coordinate1157)
#from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA1158 = x3d.ColorRGBA()
ColorRGBA1158.setUSE("HAnimSegmentLineColorRGBA")

LineSet1156.setColor(ColorRGBA1158)

Shape1155.setGeometry(LineSet1156)

HAnimSegment1151.addChildren(Shape1155)

HAnimJoint1150.addChildren(HAnimSegment1151)
HAnimJoint1159 = x3d.HAnimJoint()
HAnimJoint1159.setName("r_carpal_proximal_interphalangeal_2")
HAnimJoint1159.setDEF("hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint1159.setCenter([-0.1954,0.7393,-0.0185])
HAnimJoint1159.setUlimit([0,0,0])
HAnimJoint1159.setLlimit([0,0,0])
HAnimSegment1160 = x3d.HAnimSegment()
HAnimSegment1160.setName("r_carpal_middle_phalanx_2")
HAnimSegment1160.setDEF("hanim_r_carpal_middle_phalanx_2")
Transform1161 = x3d.Transform()
Transform1161.setTranslation([-0.1954,0.7393,-0.0185])
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
Coordinate1166.setPoint([-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173])

LineSet1165.setCoord(Coordinate1166)
#from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA1167 = x3d.ColorRGBA()
ColorRGBA1167.setUSE("HAnimSegmentLineColorRGBA")

LineSet1165.setColor(ColorRGBA1167)

Shape1164.setGeometry(LineSet1165)

HAnimSegment1160.addChildren(Shape1164)

HAnimJoint1159.addChildren(HAnimSegment1160)
HAnimJoint1168 = x3d.HAnimJoint()
HAnimJoint1168.setName("r_carpal_distal_interphalangeal_2")
HAnimJoint1168.setDEF("hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint1168.setCenter([-0.1945,0.7169,-0.0173])
HAnimJoint1168.setUlimit([0,0,0])
HAnimJoint1168.setLlimit([0,0,0])

HAnimJoint1159.addChildren(HAnimJoint1168)

HAnimJoint1150.addChildren(HAnimJoint1159)

HAnimJoint1134.addChildren(HAnimJoint1150)

HAnimJoint1083.addChildren(HAnimJoint1134)
HAnimJoint1169 = x3d.HAnimJoint()
HAnimJoint1169.setName("r_carpometacarpal_3")
HAnimJoint1169.setDEF("hanim_r_carpometacarpal_3")
HAnimJoint1169.setCenter([-0.1972,0.806,-0.0468])
HAnimJoint1169.setUlimit([0,0,0])
HAnimJoint1169.setLlimit([0,0,0])
HAnimSegment1170 = x3d.HAnimSegment()
HAnimSegment1170.setName("r_metacarpal_3")
HAnimSegment1170.setDEF("hanim_r_metacarpal_3")
Transform1171 = x3d.Transform()
Transform1171.setTranslation([-0.1972,0.806,-0.0468])
Transform1172 = x3d.Transform()
#Empty Transform
Shape1173 = x3d.Shape()
Shape1173.setUSE("HAnimJointShape")

Transform1172.addChild(Shape1173)

Transform1171.addChildren(Transform1172)

HAnimSegment1170.addChildren(Transform1171)
Shape1174 = x3d.Shape()
LineSet1175 = x3d.LineSet()
LineSet1175.setVertexCount([2])
Coordinate1176 = x3d.Coordinate()
Coordinate1176.setPoint([-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468])

LineSet1175.setCoord(Coordinate1176)
#from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA1177 = x3d.ColorRGBA()
ColorRGBA1177.setUSE("HAnimSegmentLineColorRGBA")

LineSet1175.setColor(ColorRGBA1177)

Shape1174.setGeometry(LineSet1175)

HAnimSegment1170.addChildren(Shape1174)
HAnimSite1178 = x3d.HAnimSite()
HAnimSite1178.setName("r_metacarpal_phalanx_3")
HAnimSite1178.setDEF("hanim_r_metacarpal_phalanx_3")
TouchSensor1179 = x3d.TouchSensor()
TouchSensor1179.setDescription("HAnimSite 79 r_metacarpal_phalanx_3")

HAnimSite1178.addChildren(TouchSensor1179)
Shape1180 = x3d.Shape()
Shape1180.setUSE("HAnimSiteShape")

HAnimSite1178.addChildren(Shape1180)
Billboard1181 = x3d.Billboard()
Shape1182 = x3d.Shape()
Text1183 = x3d.Text()
Text1183.setString(["79"])
FontStyle1184 = x3d.FontStyle()
FontStyle1184.setSize(0.035)

Text1183.setFontStyle(FontStyle1184)

Shape1182.setGeometry(Text1183)

Billboard1181.addChildren(Shape1182)

HAnimSite1178.addChildren(Billboard1181)

HAnimSegment1170.addChildren(HAnimSite1178)

HAnimJoint1169.addChildren(HAnimSegment1170)
HAnimJoint1185 = x3d.HAnimJoint()
HAnimJoint1185.setName("r_metacarpophalangeal_3")
HAnimJoint1185.setDEF("hanim_r_metacarpophalangeal_3")
HAnimJoint1185.setCenter([-0.1972,0.7849,-0.0468])
HAnimJoint1185.setUlimit([0,0,0])
HAnimJoint1185.setLlimit([0,0,0])
HAnimSegment1186 = x3d.HAnimSegment()
HAnimSegment1186.setName("r_carpal_proximal_phalanx_3")
HAnimSegment1186.setDEF("hanim_r_carpal_proximal_phalanx_3")
Transform1187 = x3d.Transform()
Transform1187.setTranslation([-0.1972,0.7849,-0.0468])
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
Coordinate1192.setPoint([-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441])

LineSet1191.setCoord(Coordinate1192)
#from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA1193 = x3d.ColorRGBA()
ColorRGBA1193.setUSE("HAnimSegmentLineColorRGBA")

LineSet1191.setColor(ColorRGBA1193)

Shape1190.setGeometry(LineSet1191)

HAnimSegment1186.addChildren(Shape1190)

HAnimJoint1185.addChildren(HAnimSegment1186)
HAnimJoint1194 = x3d.HAnimJoint()
HAnimJoint1194.setName("r_carpal_proximal_interphalangeal_3")
HAnimJoint1194.setDEF("hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint1194.setCenter([-0.195,0.7304,-0.0441])
HAnimJoint1194.setUlimit([0,0,0])
HAnimJoint1194.setLlimit([0,0,0])
HAnimSegment1195 = x3d.HAnimSegment()
HAnimSegment1195.setName("r_carpal_middle_phalanx_3")
HAnimSegment1195.setDEF("hanim_r_carpal_middle_phalanx_3")
Transform1196 = x3d.Transform()
Transform1196.setTranslation([-0.195,0.7304,-0.0441])
Transform1197 = x3d.Transform()
#Empty Transform
Shape1198 = x3d.Shape()
Shape1198.setUSE("HAnimJointShape")

Transform1197.addChild(Shape1198)

Transform1196.addChildren(Transform1197)

HAnimSegment1195.addChildren(Transform1196)
Shape1199 = x3d.Shape()
LineSet1200 = x3d.LineSet()
LineSet1200.setVertexCount([2])
Coordinate1201 = x3d.Coordinate()
Coordinate1201.setPoint([-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432])

LineSet1200.setCoord(Coordinate1201)
#from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA1202 = x3d.ColorRGBA()
ColorRGBA1202.setUSE("HAnimSegmentLineColorRGBA")

LineSet1200.setColor(ColorRGBA1202)

Shape1199.setGeometry(LineSet1200)

HAnimSegment1195.addChildren(Shape1199)

HAnimJoint1194.addChildren(HAnimSegment1195)
HAnimJoint1203 = x3d.HAnimJoint()
HAnimJoint1203.setName("r_carpal_distal_interphalangeal_3")
HAnimJoint1203.setDEF("hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint1203.setCenter([-0.1939,0.7042,-0.0432])
HAnimJoint1203.setUlimit([0,0,0])
HAnimJoint1203.setLlimit([0,0,0])

HAnimJoint1194.addChildren(HAnimJoint1203)

HAnimJoint1185.addChildren(HAnimJoint1194)

HAnimJoint1169.addChildren(HAnimJoint1185)

HAnimJoint1083.addChildren(HAnimJoint1169)
HAnimJoint1204 = x3d.HAnimJoint()
HAnimJoint1204.setName("r_carpometacarpal_4")
HAnimJoint1204.setDEF("hanim_r_carpometacarpal_4")
HAnimJoint1204.setCenter([-0.1951,0.8049,-0.0732])
HAnimJoint1204.setUlimit([0,0,0])
HAnimJoint1204.setLlimit([0,0,0])
HAnimSegment1205 = x3d.HAnimSegment()
HAnimSegment1205.setName("r_metacarpal_4")
HAnimSegment1205.setDEF("hanim_r_metacarpal_4")
Transform1206 = x3d.Transform()
Transform1206.setTranslation([-0.1951,0.8049,-0.0732])
Transform1207 = x3d.Transform()
#Empty Transform
Shape1208 = x3d.Shape()
Shape1208.setUSE("HAnimJointShape")

Transform1207.addChild(Shape1208)

Transform1206.addChildren(Transform1207)

HAnimSegment1205.addChildren(Transform1206)
Shape1209 = x3d.Shape()
LineSet1210 = x3d.LineSet()
LineSet1210.setVertexCount([2])
Coordinate1211 = x3d.Coordinate()
Coordinate1211.setPoint([-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732])

LineSet1210.setCoord(Coordinate1211)
#from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA1212 = x3d.ColorRGBA()
ColorRGBA1212.setUSE("HAnimSegmentLineColorRGBA")

LineSet1210.setColor(ColorRGBA1212)

Shape1209.setGeometry(LineSet1210)

HAnimSegment1205.addChildren(Shape1209)

HAnimJoint1204.addChildren(HAnimSegment1205)
HAnimJoint1213 = x3d.HAnimJoint()
HAnimJoint1213.setName("r_metacarpophalangeal_4")
HAnimJoint1213.setDEF("hanim_r_metacarpophalangeal_4")
HAnimJoint1213.setCenter([-0.1951,0.7845,-0.0732])
HAnimJoint1213.setUlimit([0,0,0])
HAnimJoint1213.setLlimit([0,0,0])
HAnimSegment1214 = x3d.HAnimSegment()
HAnimSegment1214.setName("r_carpal_proximal_phalanx_4")
HAnimSegment1214.setDEF("hanim_r_carpal_proximal_phalanx_4")
Transform1215 = x3d.Transform()
Transform1215.setTranslation([-0.1951,0.7845,-0.0732])
Transform1216 = x3d.Transform()
#Empty Transform
Shape1217 = x3d.Shape()
Shape1217.setUSE("HAnimJointShape")

Transform1216.addChild(Shape1217)

Transform1215.addChildren(Transform1216)

HAnimSegment1214.addChildren(Transform1215)
Shape1218 = x3d.Shape()
LineSet1219 = x3d.LineSet()
LineSet1219.setVertexCount([2])
Coordinate1220 = x3d.Coordinate()
Coordinate1220.setPoint([-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716])

LineSet1219.setCoord(Coordinate1220)
#from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA1221 = x3d.ColorRGBA()
ColorRGBA1221.setUSE("HAnimSegmentLineColorRGBA")

LineSet1219.setColor(ColorRGBA1221)

Shape1218.setGeometry(LineSet1219)

HAnimSegment1214.addChildren(Shape1218)

HAnimJoint1213.addChildren(HAnimSegment1214)
HAnimJoint1222 = x3d.HAnimJoint()
HAnimJoint1222.setName("r_carpal_proximal_interphalangeal_4")
HAnimJoint1222.setDEF("hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint1222.setCenter([-0.192,0.7318,-0.0716])
HAnimJoint1222.setUlimit([0,0,0])
HAnimJoint1222.setLlimit([0,0,0])
HAnimSegment1223 = x3d.HAnimSegment()
HAnimSegment1223.setName("r_carpal_middle_phalanx_4")
HAnimSegment1223.setDEF("hanim_r_carpal_middle_phalanx_4")
Transform1224 = x3d.Transform()
Transform1224.setTranslation([-0.192,0.7318,-0.0716])
Transform1225 = x3d.Transform()
#Empty Transform
Shape1226 = x3d.Shape()
Shape1226.setUSE("HAnimJointShape")

Transform1225.addChild(Shape1226)

Transform1224.addChildren(Transform1225)

HAnimSegment1223.addChildren(Transform1224)
Shape1227 = x3d.Shape()
LineSet1228 = x3d.LineSet()
LineSet1228.setVertexCount([2])
Coordinate1229 = x3d.Coordinate()
Coordinate1229.setPoint([-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706])

LineSet1228.setCoord(Coordinate1229)
#from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA1230 = x3d.ColorRGBA()
ColorRGBA1230.setUSE("HAnimSegmentLineColorRGBA")

LineSet1228.setColor(ColorRGBA1230)

Shape1227.setGeometry(LineSet1228)

HAnimSegment1223.addChildren(Shape1227)

HAnimJoint1222.addChildren(HAnimSegment1223)
HAnimJoint1231 = x3d.HAnimJoint()
HAnimJoint1231.setName("r_carpal_distal_interphalangeal_4")
HAnimJoint1231.setDEF("hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint1231.setCenter([-0.1908,0.7077,-0.0706])
HAnimJoint1231.setUlimit([0,0,0])
HAnimJoint1231.setLlimit([0,0,0])

HAnimJoint1222.addChildren(HAnimJoint1231)

HAnimJoint1213.addChildren(HAnimJoint1222)

HAnimJoint1204.addChildren(HAnimJoint1213)

HAnimJoint1083.addChildren(HAnimJoint1204)
HAnimJoint1232 = x3d.HAnimJoint()
HAnimJoint1232.setName("r_carpometacarpal_5")
HAnimJoint1232.setDEF("hanim_r_carpometacarpal_5")
HAnimJoint1232.setCenter([-0.1926,0.8096,-0.0975])
HAnimJoint1232.setUlimit([0,0,0])
HAnimJoint1232.setLlimit([0,0,0])
HAnimSegment1233 = x3d.HAnimSegment()
HAnimSegment1233.setName("r_metacarpal_5")
HAnimSegment1233.setDEF("hanim_r_metacarpal_5")
Transform1234 = x3d.Transform()
Transform1234.setTranslation([-0.1926,0.8096,-0.0975])
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
Coordinate1239.setPoint([-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975])

LineSet1238.setCoord(Coordinate1239)
#from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA1240 = x3d.ColorRGBA()
ColorRGBA1240.setUSE("HAnimSegmentLineColorRGBA")

LineSet1238.setColor(ColorRGBA1240)

Shape1237.setGeometry(LineSet1238)

HAnimSegment1233.addChildren(Shape1237)
HAnimSite1241 = x3d.HAnimSite()
HAnimSite1241.setName("r_metacarpal_phalanx_5")
HAnimSite1241.setDEF("hanim_r_metacarpal_phalanx_5")
HAnimSite1241.setTranslation([-0.1929,0.789,-0.1064])
TouchSensor1242 = x3d.TouchSensor()
TouchSensor1242.setDescription("HAnimSite 80 r_metacarpal_phalanx_5")

HAnimSite1241.addChildren(TouchSensor1242)
Shape1243 = x3d.Shape()
Shape1243.setUSE("HAnimSiteShape")

HAnimSite1241.addChildren(Shape1243)
Billboard1244 = x3d.Billboard()
Shape1245 = x3d.Shape()
Text1246 = x3d.Text()
Text1246.setString(["80"])
FontStyle1247 = x3d.FontStyle()
FontStyle1247.setSize(0.035)

Text1246.setFontStyle(FontStyle1247)

Shape1245.setGeometry(Text1246)

Billboard1244.addChildren(Shape1245)

HAnimSite1241.addChildren(Billboard1244)

HAnimSegment1233.addChildren(HAnimSite1241)

HAnimJoint1232.addChildren(HAnimSegment1233)
HAnimJoint1248 = x3d.HAnimJoint()
HAnimJoint1248.setName("r_metacarpophalangeal_5")
HAnimJoint1248.setDEF("hanim_r_metacarpophalangeal_5")
HAnimJoint1248.setCenter([-0.1926,0.7896,-0.0975])
HAnimJoint1248.setUlimit([0,0,0])
HAnimJoint1248.setLlimit([0,0,0])
HAnimSegment1249 = x3d.HAnimSegment()
HAnimSegment1249.setName("r_carpal_proximal_phalanx_5")
HAnimSegment1249.setDEF("hanim_r_carpal_proximal_phalanx_5")
Transform1250 = x3d.Transform()
Transform1250.setTranslation([-0.1926,0.7896,-0.0975])
Transform1251 = x3d.Transform()
#Empty Transform
Shape1252 = x3d.Shape()
Shape1252.setUSE("HAnimJointShape")

Transform1251.addChild(Shape1252)

Transform1250.addChildren(Transform1251)

HAnimSegment1249.addChildren(Transform1250)
Shape1253 = x3d.Shape()
LineSet1254 = x3d.LineSet()
LineSet1254.setVertexCount([2])
Coordinate1255 = x3d.Coordinate()
Coordinate1255.setPoint([-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963])

LineSet1254.setCoord(Coordinate1255)
#from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA1256 = x3d.ColorRGBA()
ColorRGBA1256.setUSE("HAnimSegmentLineColorRGBA")

LineSet1254.setColor(ColorRGBA1256)

Shape1253.setGeometry(LineSet1254)

HAnimSegment1249.addChildren(Shape1253)

HAnimJoint1248.addChildren(HAnimSegment1249)
HAnimJoint1257 = x3d.HAnimJoint()
HAnimJoint1257.setName("r_carpal_proximal_interphalangeal_5")
HAnimJoint1257.setDEF("hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint1257.setCenter([-0.1902,0.7483,-0.0963])
HAnimJoint1257.setUlimit([0,0,0])
HAnimJoint1257.setLlimit([0,0,0])
HAnimSegment1258 = x3d.HAnimSegment()
HAnimSegment1258.setName("r_carpal_middle_phalanx_5")
HAnimSegment1258.setDEF("hanim_r_carpal_middle_phalanx_5")
Transform1259 = x3d.Transform()
Transform1259.setTranslation([-0.1902,0.7483,-0.0963])
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
Coordinate1264.setPoint([-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096])

LineSet1263.setCoord(Coordinate1264)
#from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA1265 = x3d.ColorRGBA()
ColorRGBA1265.setUSE("HAnimSegmentLineColorRGBA")

LineSet1263.setColor(ColorRGBA1265)

Shape1262.setGeometry(LineSet1263)

HAnimSegment1258.addChildren(Shape1262)

HAnimJoint1257.addChildren(HAnimSegment1258)
HAnimJoint1266 = x3d.HAnimJoint()
HAnimJoint1266.setName("r_carpal_distal_interphalangeal_5")
HAnimJoint1266.setDEF("hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint1266.setCenter([-0.1908,0.754,-0.096])
HAnimJoint1266.setUlimit([0,0,0])
HAnimJoint1266.setLlimit([0,0,0])

HAnimJoint1257.addChildren(HAnimJoint1266)

HAnimJoint1248.addChildren(HAnimJoint1257)

HAnimJoint1232.addChildren(HAnimJoint1248)

HAnimJoint1083.addChildren(HAnimJoint1232)

HAnimJoint1046.addChildren(HAnimJoint1083)

HAnimJoint1023.addChildren(HAnimJoint1046)

HAnimJoint1014.addChildren(HAnimJoint1023)

HAnimJoint970.addChildren(HAnimJoint1014)

HAnimJoint602.addChildren(HAnimJoint970)

HAnimJoint565.addChildren(HAnimJoint602)

HAnimJoint535.addChildren(HAnimJoint565)

HAnimJoint526.addChildren(HAnimJoint535)

HAnimJoint489.addChildren(HAnimJoint526)

HAnimJoint459.addChildren(HAnimJoint489)

HAnimJoint47.addChildren(HAnimJoint459)

HAnimHumanoid38.addSkeleton(HAnimJoint47)
HAnimJoint1267 = x3d.HAnimJoint()
HAnimJoint1267.setContainerFieldOverride("joints")
HAnimJoint1267.setUSE("hanim_humanoid_root")

HAnimHumanoid38.addJoints(HAnimJoint1267)
HAnimJoint1268 = x3d.HAnimJoint()
HAnimJoint1268.setContainerFieldOverride("joints")
HAnimJoint1268.setUSE("hanim_sacroiliac")

HAnimHumanoid38.addJoints(HAnimJoint1268)
HAnimJoint1269 = x3d.HAnimJoint()
HAnimJoint1269.setContainerFieldOverride("joints")
HAnimJoint1269.setUSE("hanim_l_hip")

HAnimHumanoid38.addJoints(HAnimJoint1269)
HAnimJoint1270 = x3d.HAnimJoint()
HAnimJoint1270.setContainerFieldOverride("joints")
HAnimJoint1270.setUSE("hanim_l_knee")

HAnimHumanoid38.addJoints(HAnimJoint1270)
HAnimJoint1271 = x3d.HAnimJoint()
HAnimJoint1271.setContainerFieldOverride("joints")
HAnimJoint1271.setUSE("hanim_l_talocrural")

HAnimHumanoid38.addJoints(HAnimJoint1271)
HAnimJoint1272 = x3d.HAnimJoint()
HAnimJoint1272.setContainerFieldOverride("joints")
HAnimJoint1272.setUSE("hanim_l_tarsometatarsal_2")

HAnimHumanoid38.addJoints(HAnimJoint1272)
HAnimJoint1273 = x3d.HAnimJoint()
HAnimJoint1273.setContainerFieldOverride("joints")
HAnimJoint1273.setUSE("hanim_l_metatarsophalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1273)
HAnimJoint1274 = x3d.HAnimJoint()
HAnimJoint1274.setContainerFieldOverride("joints")
HAnimJoint1274.setUSE("hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1274)
HAnimJoint1275 = x3d.HAnimJoint()
HAnimJoint1275.setContainerFieldOverride("joints")
HAnimJoint1275.setUSE("hanim_r_hip")

HAnimHumanoid38.addJoints(HAnimJoint1275)
HAnimJoint1276 = x3d.HAnimJoint()
HAnimJoint1276.setContainerFieldOverride("joints")
HAnimJoint1276.setUSE("hanim_r_knee")

HAnimHumanoid38.addJoints(HAnimJoint1276)
HAnimJoint1277 = x3d.HAnimJoint()
HAnimJoint1277.setContainerFieldOverride("joints")
HAnimJoint1277.setUSE("hanim_r_talocrural")

HAnimHumanoid38.addJoints(HAnimJoint1277)
HAnimJoint1278 = x3d.HAnimJoint()
HAnimJoint1278.setContainerFieldOverride("joints")
HAnimJoint1278.setUSE("hanim_r_tarsometatarsal_2")

HAnimHumanoid38.addJoints(HAnimJoint1278)
HAnimJoint1279 = x3d.HAnimJoint()
HAnimJoint1279.setContainerFieldOverride("joints")
HAnimJoint1279.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1279)
HAnimJoint1280 = x3d.HAnimJoint()
HAnimJoint1280.setContainerFieldOverride("joints")
HAnimJoint1280.setUSE("hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1280)
HAnimJoint1281 = x3d.HAnimJoint()
HAnimJoint1281.setContainerFieldOverride("joints")
HAnimJoint1281.setUSE("hanim_vl5")

HAnimHumanoid38.addJoints(HAnimJoint1281)
HAnimJoint1282 = x3d.HAnimJoint()
HAnimJoint1282.setContainerFieldOverride("joints")
HAnimJoint1282.setUSE("hanim_vl3")

HAnimHumanoid38.addJoints(HAnimJoint1282)
HAnimJoint1283 = x3d.HAnimJoint()
HAnimJoint1283.setContainerFieldOverride("joints")
HAnimJoint1283.setUSE("hanim_vl1")

HAnimHumanoid38.addJoints(HAnimJoint1283)
HAnimJoint1284 = x3d.HAnimJoint()
HAnimJoint1284.setContainerFieldOverride("joints")
HAnimJoint1284.setUSE("hanim_vt10")

HAnimHumanoid38.addJoints(HAnimJoint1284)
HAnimJoint1285 = x3d.HAnimJoint()
HAnimJoint1285.setContainerFieldOverride("joints")
HAnimJoint1285.setUSE("hanim_vt6")

HAnimHumanoid38.addJoints(HAnimJoint1285)
HAnimJoint1286 = x3d.HAnimJoint()
HAnimJoint1286.setContainerFieldOverride("joints")
HAnimJoint1286.setUSE("hanim_vt1")

HAnimHumanoid38.addJoints(HAnimJoint1286)
HAnimJoint1287 = x3d.HAnimJoint()
HAnimJoint1287.setContainerFieldOverride("joints")
HAnimJoint1287.setUSE("hanim_vc4")

HAnimHumanoid38.addJoints(HAnimJoint1287)
HAnimJoint1288 = x3d.HAnimJoint()
HAnimJoint1288.setContainerFieldOverride("joints")
HAnimJoint1288.setUSE("hanim_vc2")

HAnimHumanoid38.addJoints(HAnimJoint1288)
HAnimJoint1289 = x3d.HAnimJoint()
HAnimJoint1289.setContainerFieldOverride("joints")
HAnimJoint1289.setUSE("hanim_skullbase")

HAnimHumanoid38.addJoints(HAnimJoint1289)
HAnimJoint1290 = x3d.HAnimJoint()
HAnimJoint1290.setContainerFieldOverride("joints")
HAnimJoint1290.setUSE("hanim_l_sternoclavicular")

HAnimHumanoid38.addJoints(HAnimJoint1290)
HAnimJoint1291 = x3d.HAnimJoint()
HAnimJoint1291.setContainerFieldOverride("joints")
HAnimJoint1291.setUSE("hanim_l_acromioclavicular")

HAnimHumanoid38.addJoints(HAnimJoint1291)
HAnimJoint1292 = x3d.HAnimJoint()
HAnimJoint1292.setContainerFieldOverride("joints")
HAnimJoint1292.setUSE("hanim_l_shoulder")

HAnimHumanoid38.addJoints(HAnimJoint1292)
HAnimJoint1293 = x3d.HAnimJoint()
HAnimJoint1293.setContainerFieldOverride("joints")
HAnimJoint1293.setUSE("hanim_l_elbow")

HAnimHumanoid38.addJoints(HAnimJoint1293)
HAnimJoint1294 = x3d.HAnimJoint()
HAnimJoint1294.setContainerFieldOverride("joints")
HAnimJoint1294.setUSE("hanim_l_radiocarpal")

HAnimHumanoid38.addJoints(HAnimJoint1294)
HAnimJoint1295 = x3d.HAnimJoint()
HAnimJoint1295.setContainerFieldOverride("joints")
HAnimJoint1295.setUSE("hanim_l_carpometacarpal_1")

HAnimHumanoid38.addJoints(HAnimJoint1295)
HAnimJoint1296 = x3d.HAnimJoint()
HAnimJoint1296.setContainerFieldOverride("joints")
HAnimJoint1296.setUSE("hanim_l_metacarpophalangeal_1")

HAnimHumanoid38.addJoints(HAnimJoint1296)
HAnimJoint1297 = x3d.HAnimJoint()
HAnimJoint1297.setContainerFieldOverride("joints")
HAnimJoint1297.setUSE("hanim_l_carpal_interphalangeal_1")

HAnimHumanoid38.addJoints(HAnimJoint1297)
HAnimJoint1298 = x3d.HAnimJoint()
HAnimJoint1298.setContainerFieldOverride("joints")
HAnimJoint1298.setUSE("hanim_l_carpometacarpal_2")

HAnimHumanoid38.addJoints(HAnimJoint1298)
HAnimJoint1299 = x3d.HAnimJoint()
HAnimJoint1299.setContainerFieldOverride("joints")
HAnimJoint1299.setUSE("hanim_l_metacarpophalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1299)
HAnimJoint1300 = x3d.HAnimJoint()
HAnimJoint1300.setContainerFieldOverride("joints")
HAnimJoint1300.setUSE("hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1300)
HAnimJoint1301 = x3d.HAnimJoint()
HAnimJoint1301.setContainerFieldOverride("joints")
HAnimJoint1301.setUSE("hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1301)
HAnimJoint1302 = x3d.HAnimJoint()
HAnimJoint1302.setContainerFieldOverride("joints")
HAnimJoint1302.setUSE("hanim_l_carpometacarpal_3")

HAnimHumanoid38.addJoints(HAnimJoint1302)
HAnimJoint1303 = x3d.HAnimJoint()
HAnimJoint1303.setContainerFieldOverride("joints")
HAnimJoint1303.setUSE("hanim_l_metacarpophalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint1303)
HAnimJoint1304 = x3d.HAnimJoint()
HAnimJoint1304.setContainerFieldOverride("joints")
HAnimJoint1304.setUSE("hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint1304)
HAnimJoint1305 = x3d.HAnimJoint()
HAnimJoint1305.setContainerFieldOverride("joints")
HAnimJoint1305.setUSE("hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint1305)
HAnimJoint1306 = x3d.HAnimJoint()
HAnimJoint1306.setContainerFieldOverride("joints")
HAnimJoint1306.setUSE("hanim_l_carpometacarpal_4")

HAnimHumanoid38.addJoints(HAnimJoint1306)
HAnimJoint1307 = x3d.HAnimJoint()
HAnimJoint1307.setContainerFieldOverride("joints")
HAnimJoint1307.setUSE("hanim_l_metacarpophalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint1307)
HAnimJoint1308 = x3d.HAnimJoint()
HAnimJoint1308.setContainerFieldOverride("joints")
HAnimJoint1308.setUSE("hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint1308)
HAnimJoint1309 = x3d.HAnimJoint()
HAnimJoint1309.setContainerFieldOverride("joints")
HAnimJoint1309.setUSE("hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint1309)
HAnimJoint1310 = x3d.HAnimJoint()
HAnimJoint1310.setContainerFieldOverride("joints")
HAnimJoint1310.setUSE("hanim_l_carpometacarpal_5")

HAnimHumanoid38.addJoints(HAnimJoint1310)
HAnimJoint1311 = x3d.HAnimJoint()
HAnimJoint1311.setContainerFieldOverride("joints")
HAnimJoint1311.setUSE("hanim_l_metacarpophalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint1311)
HAnimJoint1312 = x3d.HAnimJoint()
HAnimJoint1312.setContainerFieldOverride("joints")
HAnimJoint1312.setUSE("hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint1312)
HAnimJoint1313 = x3d.HAnimJoint()
HAnimJoint1313.setContainerFieldOverride("joints")
HAnimJoint1313.setUSE("hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint1313)
HAnimJoint1314 = x3d.HAnimJoint()
HAnimJoint1314.setContainerFieldOverride("joints")
HAnimJoint1314.setUSE("hanim_r_sternoclavicular")

HAnimHumanoid38.addJoints(HAnimJoint1314)
HAnimJoint1315 = x3d.HAnimJoint()
HAnimJoint1315.setContainerFieldOverride("joints")
HAnimJoint1315.setUSE("hanim_r_acromioclavicular")

HAnimHumanoid38.addJoints(HAnimJoint1315)
HAnimJoint1316 = x3d.HAnimJoint()
HAnimJoint1316.setContainerFieldOverride("joints")
HAnimJoint1316.setUSE("hanim_r_shoulder")

HAnimHumanoid38.addJoints(HAnimJoint1316)
HAnimJoint1317 = x3d.HAnimJoint()
HAnimJoint1317.setContainerFieldOverride("joints")
HAnimJoint1317.setUSE("hanim_r_elbow")

HAnimHumanoid38.addJoints(HAnimJoint1317)
HAnimJoint1318 = x3d.HAnimJoint()
HAnimJoint1318.setContainerFieldOverride("joints")
HAnimJoint1318.setUSE("hanim_r_radiocarpal")

HAnimHumanoid38.addJoints(HAnimJoint1318)
HAnimJoint1319 = x3d.HAnimJoint()
HAnimJoint1319.setContainerFieldOverride("joints")
HAnimJoint1319.setUSE("hanim_r_carpometacarpal_1")

HAnimHumanoid38.addJoints(HAnimJoint1319)
HAnimJoint1320 = x3d.HAnimJoint()
HAnimJoint1320.setContainerFieldOverride("joints")
HAnimJoint1320.setUSE("hanim_r_metacarpophalangeal_1")

HAnimHumanoid38.addJoints(HAnimJoint1320)
HAnimJoint1321 = x3d.HAnimJoint()
HAnimJoint1321.setContainerFieldOverride("joints")
HAnimJoint1321.setUSE("hanim_r_carpal_interphalangeal_1")

HAnimHumanoid38.addJoints(HAnimJoint1321)
HAnimJoint1322 = x3d.HAnimJoint()
HAnimJoint1322.setContainerFieldOverride("joints")
HAnimJoint1322.setUSE("hanim_r_carpometacarpal_2")

HAnimHumanoid38.addJoints(HAnimJoint1322)
HAnimJoint1323 = x3d.HAnimJoint()
HAnimJoint1323.setContainerFieldOverride("joints")
HAnimJoint1323.setUSE("hanim_r_metacarpophalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1323)
HAnimJoint1324 = x3d.HAnimJoint()
HAnimJoint1324.setContainerFieldOverride("joints")
HAnimJoint1324.setUSE("hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1324)
HAnimJoint1325 = x3d.HAnimJoint()
HAnimJoint1325.setContainerFieldOverride("joints")
HAnimJoint1325.setUSE("hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1325)
HAnimJoint1326 = x3d.HAnimJoint()
HAnimJoint1326.setContainerFieldOverride("joints")
HAnimJoint1326.setUSE("hanim_r_carpometacarpal_3")

HAnimHumanoid38.addJoints(HAnimJoint1326)
HAnimJoint1327 = x3d.HAnimJoint()
HAnimJoint1327.setContainerFieldOverride("joints")
HAnimJoint1327.setUSE("hanim_r_metacarpophalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint1327)
HAnimJoint1328 = x3d.HAnimJoint()
HAnimJoint1328.setContainerFieldOverride("joints")
HAnimJoint1328.setUSE("hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint1328)
HAnimJoint1329 = x3d.HAnimJoint()
HAnimJoint1329.setContainerFieldOverride("joints")
HAnimJoint1329.setUSE("hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint1329)
HAnimJoint1330 = x3d.HAnimJoint()
HAnimJoint1330.setContainerFieldOverride("joints")
HAnimJoint1330.setUSE("hanim_r_carpometacarpal_4")

HAnimHumanoid38.addJoints(HAnimJoint1330)
HAnimJoint1331 = x3d.HAnimJoint()
HAnimJoint1331.setContainerFieldOverride("joints")
HAnimJoint1331.setUSE("hanim_r_metacarpophalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint1331)
HAnimJoint1332 = x3d.HAnimJoint()
HAnimJoint1332.setContainerFieldOverride("joints")
HAnimJoint1332.setUSE("hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint1332)
HAnimJoint1333 = x3d.HAnimJoint()
HAnimJoint1333.setContainerFieldOverride("joints")
HAnimJoint1333.setUSE("hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint1333)
HAnimJoint1334 = x3d.HAnimJoint()
HAnimJoint1334.setContainerFieldOverride("joints")
HAnimJoint1334.setUSE("hanim_r_carpometacarpal_5")

HAnimHumanoid38.addJoints(HAnimJoint1334)
HAnimJoint1335 = x3d.HAnimJoint()
HAnimJoint1335.setContainerFieldOverride("joints")
HAnimJoint1335.setUSE("hanim_r_metacarpophalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint1335)
HAnimJoint1336 = x3d.HAnimJoint()
HAnimJoint1336.setContainerFieldOverride("joints")
HAnimJoint1336.setUSE("hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint1336)
HAnimJoint1337 = x3d.HAnimJoint()
HAnimJoint1337.setContainerFieldOverride("joints")
HAnimJoint1337.setUSE("hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint1337)
HAnimSegment1338 = x3d.HAnimSegment()
HAnimSegment1338.setContainerFieldOverride("segments")
HAnimSegment1338.setUSE("hanim_sacrum")

HAnimHumanoid38.addSegments(HAnimSegment1338)
HAnimSegment1339 = x3d.HAnimSegment()
HAnimSegment1339.setContainerFieldOverride("segments")
HAnimSegment1339.setUSE("hanim_pelvis")

HAnimHumanoid38.addSegments(HAnimSegment1339)
HAnimSegment1340 = x3d.HAnimSegment()
HAnimSegment1340.setContainerFieldOverride("segments")
HAnimSegment1340.setUSE("hanim_l_thigh")

HAnimHumanoid38.addSegments(HAnimSegment1340)
HAnimSegment1341 = x3d.HAnimSegment()
HAnimSegment1341.setContainerFieldOverride("segments")
HAnimSegment1341.setUSE("hanim_l_calf")

HAnimHumanoid38.addSegments(HAnimSegment1341)
HAnimSegment1342 = x3d.HAnimSegment()
HAnimSegment1342.setContainerFieldOverride("segments")
HAnimSegment1342.setUSE("hanim_l_talus")

HAnimHumanoid38.addSegments(HAnimSegment1342)
HAnimSegment1343 = x3d.HAnimSegment()
HAnimSegment1343.setContainerFieldOverride("segments")
HAnimSegment1343.setUSE("hanim_l_metatarsal_2")

HAnimHumanoid38.addSegments(HAnimSegment1343)
HAnimSegment1344 = x3d.HAnimSegment()
HAnimSegment1344.setContainerFieldOverride("segments")
HAnimSegment1344.setUSE("hanim_l_tarsal_proximal_phalanx_2")

HAnimHumanoid38.addSegments(HAnimSegment1344)
HAnimSegment1345 = x3d.HAnimSegment()
HAnimSegment1345.setContainerFieldOverride("segments")
HAnimSegment1345.setUSE("hanim_r_thigh")

HAnimHumanoid38.addSegments(HAnimSegment1345)
HAnimSegment1346 = x3d.HAnimSegment()
HAnimSegment1346.setContainerFieldOverride("segments")
HAnimSegment1346.setUSE("hanim_r_calf")

HAnimHumanoid38.addSegments(HAnimSegment1346)
HAnimSegment1347 = x3d.HAnimSegment()
HAnimSegment1347.setContainerFieldOverride("segments")
HAnimSegment1347.setUSE("hanim_r_talus")

HAnimHumanoid38.addSegments(HAnimSegment1347)
HAnimSegment1348 = x3d.HAnimSegment()
HAnimSegment1348.setContainerFieldOverride("segments")
HAnimSegment1348.setUSE("hanim_r_metatarsal_2")

HAnimHumanoid38.addSegments(HAnimSegment1348)
HAnimSegment1349 = x3d.HAnimSegment()
HAnimSegment1349.setContainerFieldOverride("segments")
HAnimSegment1349.setUSE("hanim_r_tarsal_proximal_phalanx_2")

HAnimHumanoid38.addSegments(HAnimSegment1349)
HAnimSegment1350 = x3d.HAnimSegment()
HAnimSegment1350.setContainerFieldOverride("segments")
HAnimSegment1350.setUSE("hanim_l5")

HAnimHumanoid38.addSegments(HAnimSegment1350)
HAnimSegment1351 = x3d.HAnimSegment()
HAnimSegment1351.setContainerFieldOverride("segments")
HAnimSegment1351.setUSE("hanim_l3")

HAnimHumanoid38.addSegments(HAnimSegment1351)
HAnimSegment1352 = x3d.HAnimSegment()
HAnimSegment1352.setContainerFieldOverride("segments")
HAnimSegment1352.setUSE("hanim_l1")

HAnimHumanoid38.addSegments(HAnimSegment1352)
HAnimSegment1353 = x3d.HAnimSegment()
HAnimSegment1353.setContainerFieldOverride("segments")
HAnimSegment1353.setUSE("hanim_t10")

HAnimHumanoid38.addSegments(HAnimSegment1353)
HAnimSegment1354 = x3d.HAnimSegment()
HAnimSegment1354.setContainerFieldOverride("segments")
HAnimSegment1354.setUSE("hanim_t6")

HAnimHumanoid38.addSegments(HAnimSegment1354)
HAnimSegment1355 = x3d.HAnimSegment()
HAnimSegment1355.setContainerFieldOverride("segments")
HAnimSegment1355.setUSE("hanim_t1")

HAnimHumanoid38.addSegments(HAnimSegment1355)
HAnimSegment1356 = x3d.HAnimSegment()
HAnimSegment1356.setContainerFieldOverride("segments")
HAnimSegment1356.setUSE("hanim_c4")

HAnimHumanoid38.addSegments(HAnimSegment1356)
HAnimSegment1357 = x3d.HAnimSegment()
HAnimSegment1357.setContainerFieldOverride("segments")
HAnimSegment1357.setUSE("hanim_c2")

HAnimHumanoid38.addSegments(HAnimSegment1357)
HAnimSegment1358 = x3d.HAnimSegment()
HAnimSegment1358.setContainerFieldOverride("segments")
HAnimSegment1358.setUSE("hanim_l_clavicle")

HAnimHumanoid38.addSegments(HAnimSegment1358)
HAnimSegment1359 = x3d.HAnimSegment()
HAnimSegment1359.setContainerFieldOverride("segments")
HAnimSegment1359.setUSE("hanim_l_scapula")

HAnimHumanoid38.addSegments(HAnimSegment1359)
HAnimSegment1360 = x3d.HAnimSegment()
HAnimSegment1360.setContainerFieldOverride("segments")
HAnimSegment1360.setUSE("hanim_l_upperarm")

HAnimHumanoid38.addSegments(HAnimSegment1360)
HAnimSegment1361 = x3d.HAnimSegment()
HAnimSegment1361.setContainerFieldOverride("segments")
HAnimSegment1361.setUSE("hanim_l_forearm")

HAnimHumanoid38.addSegments(HAnimSegment1361)
HAnimSegment1362 = x3d.HAnimSegment()
HAnimSegment1362.setContainerFieldOverride("segments")
HAnimSegment1362.setUSE("hanim_l_carpal")

HAnimHumanoid38.addSegments(HAnimSegment1362)
HAnimSegment1363 = x3d.HAnimSegment()
HAnimSegment1363.setContainerFieldOverride("segments")
HAnimSegment1363.setUSE("hanim_l_metacarpal_1")

HAnimHumanoid38.addSegments(HAnimSegment1363)
HAnimSegment1364 = x3d.HAnimSegment()
HAnimSegment1364.setContainerFieldOverride("segments")
HAnimSegment1364.setUSE("hanim_l_carpal_proximal_phalanx_1")

HAnimHumanoid38.addSegments(HAnimSegment1364)
HAnimSegment1365 = x3d.HAnimSegment()
HAnimSegment1365.setContainerFieldOverride("segments")
HAnimSegment1365.setUSE("hanim_l_metacarpal_2")

HAnimHumanoid38.addSegments(HAnimSegment1365)
HAnimSegment1366 = x3d.HAnimSegment()
HAnimSegment1366.setContainerFieldOverride("segments")
HAnimSegment1366.setUSE("hanim_l_carpal_proximal_phalanx_2")

HAnimHumanoid38.addSegments(HAnimSegment1366)
HAnimSegment1367 = x3d.HAnimSegment()
HAnimSegment1367.setContainerFieldOverride("segments")
HAnimSegment1367.setUSE("hanim_l_carpal_middle_phalanx_2")

HAnimHumanoid38.addSegments(HAnimSegment1367)
HAnimSegment1368 = x3d.HAnimSegment()
HAnimSegment1368.setContainerFieldOverride("segments")
HAnimSegment1368.setUSE("hanim_l_metacarpal_3")

HAnimHumanoid38.addSegments(HAnimSegment1368)
HAnimSegment1369 = x3d.HAnimSegment()
HAnimSegment1369.setContainerFieldOverride("segments")
HAnimSegment1369.setUSE("hanim_l_carpal_proximal_phalanx_3")

HAnimHumanoid38.addSegments(HAnimSegment1369)
HAnimSegment1370 = x3d.HAnimSegment()
HAnimSegment1370.setContainerFieldOverride("segments")
HAnimSegment1370.setUSE("hanim_l_carpal_middle_phalanx_3")

HAnimHumanoid38.addSegments(HAnimSegment1370)
HAnimSegment1371 = x3d.HAnimSegment()
HAnimSegment1371.setContainerFieldOverride("segments")
HAnimSegment1371.setUSE("hanim_l_metacarpal_4")

HAnimHumanoid38.addSegments(HAnimSegment1371)
HAnimSegment1372 = x3d.HAnimSegment()
HAnimSegment1372.setContainerFieldOverride("segments")
HAnimSegment1372.setUSE("hanim_l_carpal_proximal_phalanx_4")

HAnimHumanoid38.addSegments(HAnimSegment1372)
HAnimSegment1373 = x3d.HAnimSegment()
HAnimSegment1373.setContainerFieldOverride("segments")
HAnimSegment1373.setUSE("hanim_l_carpal_middle_phalanx_4")

HAnimHumanoid38.addSegments(HAnimSegment1373)
HAnimSegment1374 = x3d.HAnimSegment()
HAnimSegment1374.setContainerFieldOverride("segments")
HAnimSegment1374.setUSE("hanim_l_metacarpal_5")

HAnimHumanoid38.addSegments(HAnimSegment1374)
HAnimSegment1375 = x3d.HAnimSegment()
HAnimSegment1375.setContainerFieldOverride("segments")
HAnimSegment1375.setUSE("hanim_l_carpal_proximal_phalanx_5")

HAnimHumanoid38.addSegments(HAnimSegment1375)
HAnimSegment1376 = x3d.HAnimSegment()
HAnimSegment1376.setContainerFieldOverride("segments")
HAnimSegment1376.setUSE("hanim_l_carpal_middle_phalanx_5")

HAnimHumanoid38.addSegments(HAnimSegment1376)
HAnimSegment1377 = x3d.HAnimSegment()
HAnimSegment1377.setContainerFieldOverride("segments")
HAnimSegment1377.setUSE("hanim_r_clavicle")

HAnimHumanoid38.addSegments(HAnimSegment1377)
HAnimSegment1378 = x3d.HAnimSegment()
HAnimSegment1378.setContainerFieldOverride("segments")
HAnimSegment1378.setUSE("hanim_r_scapula")

HAnimHumanoid38.addSegments(HAnimSegment1378)
HAnimSegment1379 = x3d.HAnimSegment()
HAnimSegment1379.setContainerFieldOverride("segments")
HAnimSegment1379.setUSE("hanim_r_upperarm")

HAnimHumanoid38.addSegments(HAnimSegment1379)
HAnimSegment1380 = x3d.HAnimSegment()
HAnimSegment1380.setContainerFieldOverride("segments")
HAnimSegment1380.setUSE("hanim_r_forearm")

HAnimHumanoid38.addSegments(HAnimSegment1380)
HAnimSegment1381 = x3d.HAnimSegment()
HAnimSegment1381.setContainerFieldOverride("segments")
HAnimSegment1381.setUSE("hanim_r_carpal")

HAnimHumanoid38.addSegments(HAnimSegment1381)
HAnimSegment1382 = x3d.HAnimSegment()
HAnimSegment1382.setContainerFieldOverride("segments")
HAnimSegment1382.setUSE("hanim_r_metacarpal_1")

HAnimHumanoid38.addSegments(HAnimSegment1382)
HAnimSegment1383 = x3d.HAnimSegment()
HAnimSegment1383.setContainerFieldOverride("segments")
HAnimSegment1383.setUSE("hanim_r_carpal_proximal_phalanx_1")

HAnimHumanoid38.addSegments(HAnimSegment1383)
HAnimSegment1384 = x3d.HAnimSegment()
HAnimSegment1384.setContainerFieldOverride("segments")
HAnimSegment1384.setUSE("hanim_r_metacarpal_2")

HAnimHumanoid38.addSegments(HAnimSegment1384)
HAnimSegment1385 = x3d.HAnimSegment()
HAnimSegment1385.setContainerFieldOverride("segments")
HAnimSegment1385.setUSE("hanim_r_carpal_proximal_phalanx_2")

HAnimHumanoid38.addSegments(HAnimSegment1385)
HAnimSegment1386 = x3d.HAnimSegment()
HAnimSegment1386.setContainerFieldOverride("segments")
HAnimSegment1386.setUSE("hanim_r_carpal_middle_phalanx_2")

HAnimHumanoid38.addSegments(HAnimSegment1386)
HAnimSegment1387 = x3d.HAnimSegment()
HAnimSegment1387.setContainerFieldOverride("segments")
HAnimSegment1387.setUSE("hanim_r_metacarpal_3")

HAnimHumanoid38.addSegments(HAnimSegment1387)
HAnimSegment1388 = x3d.HAnimSegment()
HAnimSegment1388.setContainerFieldOverride("segments")
HAnimSegment1388.setUSE("hanim_r_carpal_proximal_phalanx_3")

HAnimHumanoid38.addSegments(HAnimSegment1388)
HAnimSegment1389 = x3d.HAnimSegment()
HAnimSegment1389.setContainerFieldOverride("segments")
HAnimSegment1389.setUSE("hanim_r_carpal_middle_phalanx_3")

HAnimHumanoid38.addSegments(HAnimSegment1389)
HAnimSegment1390 = x3d.HAnimSegment()
HAnimSegment1390.setContainerFieldOverride("segments")
HAnimSegment1390.setUSE("hanim_r_metacarpal_4")

HAnimHumanoid38.addSegments(HAnimSegment1390)
HAnimSegment1391 = x3d.HAnimSegment()
HAnimSegment1391.setContainerFieldOverride("segments")
HAnimSegment1391.setUSE("hanim_r_carpal_proximal_phalanx_4")

HAnimHumanoid38.addSegments(HAnimSegment1391)
HAnimSegment1392 = x3d.HAnimSegment()
HAnimSegment1392.setContainerFieldOverride("segments")
HAnimSegment1392.setUSE("hanim_r_carpal_middle_phalanx_4")

HAnimHumanoid38.addSegments(HAnimSegment1392)
HAnimSegment1393 = x3d.HAnimSegment()
HAnimSegment1393.setContainerFieldOverride("segments")
HAnimSegment1393.setUSE("hanim_r_metacarpal_5")

HAnimHumanoid38.addSegments(HAnimSegment1393)
HAnimSegment1394 = x3d.HAnimSegment()
HAnimSegment1394.setContainerFieldOverride("segments")
HAnimSegment1394.setUSE("hanim_r_carpal_proximal_phalanx_5")

HAnimHumanoid38.addSegments(HAnimSegment1394)
HAnimSegment1395 = x3d.HAnimSegment()
HAnimSegment1395.setContainerFieldOverride("segments")
HAnimSegment1395.setUSE("hanim_r_carpal_middle_phalanx_5")

HAnimHumanoid38.addSegments(HAnimSegment1395)
HAnimSite1396 = x3d.HAnimSite()
HAnimSite1396.setContainerFieldOverride("sites")
HAnimSite1396.setUSE("hanim_buttocks_standing_wall_contact_point")

HAnimHumanoid38.addSites(HAnimSite1396)
HAnimSite1397 = x3d.HAnimSite()
HAnimSite1397.setContainerFieldOverride("sites")
HAnimSite1397.setUSE("hanim_crotch")

HAnimHumanoid38.addSites(HAnimSite1397)
HAnimSite1398 = x3d.HAnimSite()
HAnimSite1398.setContainerFieldOverride("sites")
HAnimSite1398.setUSE("hanim_l_asis")

HAnimHumanoid38.addSites(HAnimSite1398)
HAnimSite1399 = x3d.HAnimSite()
HAnimSite1399.setContainerFieldOverride("sites")
HAnimSite1399.setUSE("hanim_l_iliocristale")

HAnimHumanoid38.addSites(HAnimSite1399)
HAnimSite1400 = x3d.HAnimSite()
HAnimSite1400.setContainerFieldOverride("sites")
HAnimSite1400.setUSE("hanim_l_psis")

HAnimHumanoid38.addSites(HAnimSite1400)
HAnimSite1401 = x3d.HAnimSite()
HAnimSite1401.setContainerFieldOverride("sites")
HAnimSite1401.setUSE("hanim_l_trochanterion")

HAnimHumanoid38.addSites(HAnimSite1401)
HAnimSite1402 = x3d.HAnimSite()
HAnimSite1402.setContainerFieldOverride("sites")
HAnimSite1402.setUSE("hanim_r_asis")

HAnimHumanoid38.addSites(HAnimSite1402)
HAnimSite1403 = x3d.HAnimSite()
HAnimSite1403.setContainerFieldOverride("sites")
HAnimSite1403.setUSE("hanim_r_iliocristale")

HAnimHumanoid38.addSites(HAnimSite1403)
HAnimSite1404 = x3d.HAnimSite()
HAnimSite1404.setContainerFieldOverride("sites")
HAnimSite1404.setUSE("hanim_r_psis")

HAnimHumanoid38.addSites(HAnimSite1404)
HAnimSite1405 = x3d.HAnimSite()
HAnimSite1405.setContainerFieldOverride("sites")
HAnimSite1405.setUSE("hanim_r_trochanterion")

HAnimHumanoid38.addSites(HAnimSite1405)
HAnimSite1406 = x3d.HAnimSite()
HAnimSite1406.setContainerFieldOverride("sites")
HAnimSite1406.setUSE("hanim_l_femoral_lateral_epicondyles")

HAnimHumanoid38.addSites(HAnimSite1406)
HAnimSite1407 = x3d.HAnimSite()
HAnimSite1407.setContainerFieldOverride("sites")
HAnimSite1407.setUSE("hanim_l_femoral_medial_epicondyles")

HAnimHumanoid38.addSites(HAnimSite1407)
HAnimSite1408 = x3d.HAnimSite()
HAnimSite1408.setContainerFieldOverride("sites")
HAnimSite1408.setUSE("hanim_l_knee_crease")

HAnimHumanoid38.addSites(HAnimSite1408)
HAnimSite1409 = x3d.HAnimSite()
HAnimSite1409.setContainerFieldOverride("sites")
HAnimSite1409.setUSE("hanim_l_suprapatella")

HAnimHumanoid38.addSites(HAnimSite1409)
HAnimSite1410 = x3d.HAnimSite()
HAnimSite1410.setContainerFieldOverride("sites")
HAnimSite1410.setUSE("hanim_l_lateral_malleolus")

HAnimHumanoid38.addSites(HAnimSite1410)
HAnimSite1411 = x3d.HAnimSite()
HAnimSite1411.setContainerFieldOverride("sites")
HAnimSite1411.setUSE("hanim_l_medial_malleolus")

HAnimHumanoid38.addSites(HAnimSite1411)
HAnimSite1412 = x3d.HAnimSite()
HAnimSite1412.setContainerFieldOverride("sites")
HAnimSite1412.setUSE("hanim_l_tibiale")

HAnimHumanoid38.addSites(HAnimSite1412)
HAnimSite1413 = x3d.HAnimSite()
HAnimSite1413.setContainerFieldOverride("sites")
HAnimSite1413.setUSE("hanim_l_calcaneus_posterior")

HAnimHumanoid38.addSites(HAnimSite1413)
HAnimSite1414 = x3d.HAnimSite()
HAnimSite1414.setContainerFieldOverride("sites")
HAnimSite1414.setUSE("hanim_l_sphyrion")

HAnimHumanoid38.addSites(HAnimSite1414)
HAnimSite1415 = x3d.HAnimSite()
HAnimSite1415.setContainerFieldOverride("sites")
HAnimSite1415.setUSE("hanim_l_metatarsal_phalanx_1")

HAnimHumanoid38.addSites(HAnimSite1415)
HAnimSite1416 = x3d.HAnimSite()
HAnimSite1416.setContainerFieldOverride("sites")
HAnimSite1416.setUSE("hanim_l_metatarsal_phalanx_5")

HAnimHumanoid38.addSites(HAnimSite1416)
HAnimSite1417 = x3d.HAnimSite()
HAnimSite1417.setContainerFieldOverride("sites")
HAnimSite1417.setUSE("hanim_l_tarsal_distal_phalanx_1_tip")

HAnimHumanoid38.addSites(HAnimSite1417)
HAnimSite1418 = x3d.HAnimSite()
HAnimSite1418.setContainerFieldOverride("sites")
HAnimSite1418.setUSE("hanim_l_tarsal_distal_phalanx_2_tip")

HAnimHumanoid38.addSites(HAnimSite1418)
HAnimSite1419 = x3d.HAnimSite()
HAnimSite1419.setContainerFieldOverride("sites")
HAnimSite1419.setUSE("hanim_l_tarsal_distal_phalanx_3_tip")

HAnimHumanoid38.addSites(HAnimSite1419)
HAnimSite1420 = x3d.HAnimSite()
HAnimSite1420.setContainerFieldOverride("sites")
HAnimSite1420.setUSE("hanim_l_tarsal_distal_phalanx_4_tip")

HAnimHumanoid38.addSites(HAnimSite1420)
HAnimSite1421 = x3d.HAnimSite()
HAnimSite1421.setContainerFieldOverride("sites")
HAnimSite1421.setUSE("hanim_l_tarsal_distal_phalanx_5_tip")

HAnimHumanoid38.addSites(HAnimSite1421)
HAnimSite1422 = x3d.HAnimSite()
HAnimSite1422.setContainerFieldOverride("sites")
HAnimSite1422.setUSE("hanim_r_femoral_lateral_epicondyles")

HAnimHumanoid38.addSites(HAnimSite1422)
HAnimSite1423 = x3d.HAnimSite()
HAnimSite1423.setContainerFieldOverride("sites")
HAnimSite1423.setUSE("hanim_r_femoral_medial_epicondyles")

HAnimHumanoid38.addSites(HAnimSite1423)
HAnimSite1424 = x3d.HAnimSite()
HAnimSite1424.setContainerFieldOverride("sites")
HAnimSite1424.setUSE("hanim_r_knee_crease")

HAnimHumanoid38.addSites(HAnimSite1424)
HAnimSite1425 = x3d.HAnimSite()
HAnimSite1425.setContainerFieldOverride("sites")
HAnimSite1425.setUSE("hanim_r_suprapatella")

HAnimHumanoid38.addSites(HAnimSite1425)
HAnimSite1426 = x3d.HAnimSite()
HAnimSite1426.setContainerFieldOverride("sites")
HAnimSite1426.setUSE("hanim_r_lateral_malleolus")

HAnimHumanoid38.addSites(HAnimSite1426)
HAnimSite1427 = x3d.HAnimSite()
HAnimSite1427.setContainerFieldOverride("sites")
HAnimSite1427.setUSE("hanim_r_medial_malleolus")

HAnimHumanoid38.addSites(HAnimSite1427)
HAnimSite1428 = x3d.HAnimSite()
HAnimSite1428.setContainerFieldOverride("sites")
HAnimSite1428.setUSE("hanim_r_tibiale")

HAnimHumanoid38.addSites(HAnimSite1428)
HAnimSite1429 = x3d.HAnimSite()
HAnimSite1429.setContainerFieldOverride("sites")
HAnimSite1429.setUSE("hanim_r_calcaneus_posterior")

HAnimHumanoid38.addSites(HAnimSite1429)
HAnimSite1430 = x3d.HAnimSite()
HAnimSite1430.setContainerFieldOverride("sites")
HAnimSite1430.setUSE("hanim_r_sphyrion")

HAnimHumanoid38.addSites(HAnimSite1430)
HAnimSite1431 = x3d.HAnimSite()
HAnimSite1431.setContainerFieldOverride("sites")
HAnimSite1431.setUSE("hanim_r_metatarsal_phalanx_1")

HAnimHumanoid38.addSites(HAnimSite1431)
HAnimSite1432 = x3d.HAnimSite()
HAnimSite1432.setContainerFieldOverride("sites")
HAnimSite1432.setUSE("hanim_r_metatarsal_phalanx_5")

HAnimHumanoid38.addSites(HAnimSite1432)
HAnimSite1433 = x3d.HAnimSite()
HAnimSite1433.setContainerFieldOverride("sites")
HAnimSite1433.setUSE("hanim_r_tarsal_distal_phalanx_1_tip")

HAnimHumanoid38.addSites(HAnimSite1433)
HAnimSite1434 = x3d.HAnimSite()
HAnimSite1434.setContainerFieldOverride("sites")
HAnimSite1434.setUSE("hanim_r_tarsal_distal_phalanx_2_tip")

HAnimHumanoid38.addSites(HAnimSite1434)
HAnimSite1435 = x3d.HAnimSite()
HAnimSite1435.setContainerFieldOverride("sites")
HAnimSite1435.setUSE("hanim_r_tarsal_distal_phalanx_3_tip")

HAnimHumanoid38.addSites(HAnimSite1435)
HAnimSite1436 = x3d.HAnimSite()
HAnimSite1436.setContainerFieldOverride("sites")
HAnimSite1436.setUSE("hanim_r_tarsal_distal_phalanx_4_tip")

HAnimHumanoid38.addSites(HAnimSite1436)
HAnimSite1437 = x3d.HAnimSite()
HAnimSite1437.setContainerFieldOverride("sites")
HAnimSite1437.setUSE("hanim_r_tarsal_distal_phalanx_5_tip")

HAnimHumanoid38.addSites(HAnimSite1437)
HAnimSite1438 = x3d.HAnimSite()
HAnimSite1438.setContainerFieldOverride("sites")
HAnimSite1438.setUSE("hanim_navel")

HAnimHumanoid38.addSites(HAnimSite1438)
HAnimSite1439 = x3d.HAnimSite()
HAnimSite1439.setContainerFieldOverride("sites")
HAnimSite1439.setUSE("hanim_waist_preferred_anterior")

HAnimHumanoid38.addSites(HAnimSite1439)
HAnimSite1440 = x3d.HAnimSite()
HAnimSite1440.setContainerFieldOverride("sites")
HAnimSite1440.setUSE("hanim_waist_preferred_posterior")

HAnimHumanoid38.addSites(HAnimSite1440)
HAnimSite1441 = x3d.HAnimSite()
HAnimSite1441.setContainerFieldOverride("sites")
HAnimSite1441.setUSE("hanim_l_rib10")

HAnimHumanoid38.addSites(HAnimSite1441)
HAnimSite1442 = x3d.HAnimSite()
HAnimSite1442.setContainerFieldOverride("sites")
HAnimSite1442.setUSE("hanim_r_rib10")

HAnimHumanoid38.addSites(HAnimSite1442)
HAnimSite1443 = x3d.HAnimSite()
HAnimSite1443.setContainerFieldOverride("sites")
HAnimSite1443.setUSE("hanim_spine_1_middle_back")

HAnimHumanoid38.addSites(HAnimSite1443)
HAnimSite1444 = x3d.HAnimSite()
HAnimSite1444.setContainerFieldOverride("sites")
HAnimSite1444.setUSE("hanim_spine_2_middle_back")

HAnimHumanoid38.addSites(HAnimSite1444)
HAnimSite1445 = x3d.HAnimSite()
HAnimSite1445.setContainerFieldOverride("sites")
HAnimSite1445.setUSE("hanim_l_thelion")

HAnimHumanoid38.addSites(HAnimSite1445)
HAnimSite1446 = x3d.HAnimSite()
HAnimSite1446.setContainerFieldOverride("sites")
HAnimSite1446.setUSE("hanim_r_thelion")

HAnimHumanoid38.addSites(HAnimSite1446)
HAnimSite1447 = x3d.HAnimSite()
HAnimSite1447.setContainerFieldOverride("sites")
HAnimSite1447.setUSE("hanim_substernale")

HAnimHumanoid38.addSites(HAnimSite1447)
HAnimSite1448 = x3d.HAnimSite()
HAnimSite1448.setContainerFieldOverride("sites")
HAnimSite1448.setUSE("hanim_l_chest_midsagittal_plane")

HAnimHumanoid38.addSites(HAnimSite1448)
HAnimSite1449 = x3d.HAnimSite()
HAnimSite1449.setContainerFieldOverride("sites")
HAnimSite1449.setUSE("hanim_mesosternale")

HAnimHumanoid38.addSites(HAnimSite1449)
HAnimSite1450 = x3d.HAnimSite()
HAnimSite1450.setContainerFieldOverride("sites")
HAnimSite1450.setUSE("hanim_r_chest_midsagittal_plane")

HAnimHumanoid38.addSites(HAnimSite1450)
HAnimSite1451 = x3d.HAnimSite()
HAnimSite1451.setContainerFieldOverride("sites")
HAnimSite1451.setUSE("hanim_rear_center_midsagittal_plane")

HAnimHumanoid38.addSites(HAnimSite1451)
HAnimSite1452 = x3d.HAnimSite()
HAnimSite1452.setContainerFieldOverride("sites")
HAnimSite1452.setUSE("hanim_cervicale")

HAnimHumanoid38.addSites(HAnimSite1452)
HAnimSite1453 = x3d.HAnimSite()
HAnimSite1453.setContainerFieldOverride("sites")
HAnimSite1453.setUSE("hanim_l_neck_base")

HAnimHumanoid38.addSites(HAnimSite1453)
HAnimSite1454 = x3d.HAnimSite()
HAnimSite1454.setContainerFieldOverride("sites")
HAnimSite1454.setUSE("hanim_r_neck_base")

HAnimHumanoid38.addSites(HAnimSite1454)
HAnimSite1455 = x3d.HAnimSite()
HAnimSite1455.setContainerFieldOverride("sites")
HAnimSite1455.setUSE("hanim_suprasternale")

HAnimHumanoid38.addSites(HAnimSite1455)
HAnimSite1456 = x3d.HAnimSite()
HAnimSite1456.setContainerFieldOverride("sites")
HAnimSite1456.setUSE("hanim_adams_apple")

HAnimHumanoid38.addSites(HAnimSite1456)
HAnimSite1457 = x3d.HAnimSite()
HAnimSite1457.setContainerFieldOverride("sites")
HAnimSite1457.setUSE("hanim_l_acromion")

HAnimHumanoid38.addSites(HAnimSite1457)
HAnimSite1458 = x3d.HAnimSite()
HAnimSite1458.setContainerFieldOverride("sites")
HAnimSite1458.setUSE("hanim_l_axilla_distal")

HAnimHumanoid38.addSites(HAnimSite1458)
HAnimSite1459 = x3d.HAnimSite()
HAnimSite1459.setContainerFieldOverride("sites")
HAnimSite1459.setUSE("hanim_l_axilla_posterior_folds")

HAnimHumanoid38.addSites(HAnimSite1459)
HAnimSite1460 = x3d.HAnimSite()
HAnimSite1460.setContainerFieldOverride("sites")
HAnimSite1460.setUSE("hanim_l_axilla_proximal")

HAnimHumanoid38.addSites(HAnimSite1460)
HAnimSite1461 = x3d.HAnimSite()
HAnimSite1461.setContainerFieldOverride("sites")
HAnimSite1461.setUSE("hanim_l_clavicale")

HAnimHumanoid38.addSites(HAnimSite1461)
HAnimSite1462 = x3d.HAnimSite()
HAnimSite1462.setContainerFieldOverride("sites")
HAnimSite1462.setUSE("hanim_l_bideltoid")

HAnimHumanoid38.addSites(HAnimSite1462)
HAnimSite1463 = x3d.HAnimSite()
HAnimSite1463.setContainerFieldOverride("sites")
HAnimSite1463.setUSE("hanim_l_humeral_lateral_epicondyles")

HAnimHumanoid38.addSites(HAnimSite1463)
HAnimSite1464 = x3d.HAnimSite()
HAnimSite1464.setContainerFieldOverride("sites")
HAnimSite1464.setUSE("hanim_l_humeral_medial_epicondyles")

HAnimHumanoid38.addSites(HAnimSite1464)
HAnimSite1465 = x3d.HAnimSite()
HAnimSite1465.setContainerFieldOverride("sites")
HAnimSite1465.setUSE("hanim_l_olecranon")

HAnimHumanoid38.addSites(HAnimSite1465)
HAnimSite1466 = x3d.HAnimSite()
HAnimSite1466.setContainerFieldOverride("sites")
HAnimSite1466.setUSE("hanim_l_radial_styloid")

HAnimHumanoid38.addSites(HAnimSite1466)
HAnimSite1467 = x3d.HAnimSite()
HAnimSite1467.setContainerFieldOverride("sites")
HAnimSite1467.setUSE("hanim_l_radiale")

HAnimHumanoid38.addSites(HAnimSite1467)
HAnimSite1468 = x3d.HAnimSite()
HAnimSite1468.setContainerFieldOverride("sites")
HAnimSite1468.setUSE("hanim_l_ulnar_styloid")

HAnimHumanoid38.addSites(HAnimSite1468)
HAnimSite1469 = x3d.HAnimSite()
HAnimSite1469.setContainerFieldOverride("sites")
HAnimSite1469.setUSE("hanim_l_metacarpal_phalanx_2")

HAnimHumanoid38.addSites(HAnimSite1469)
HAnimSite1470 = x3d.HAnimSite()
HAnimSite1470.setContainerFieldOverride("sites")
HAnimSite1470.setUSE("hanim_l_metacarpal_phalanx_3")

HAnimHumanoid38.addSites(HAnimSite1470)
HAnimSite1471 = x3d.HAnimSite()
HAnimSite1471.setContainerFieldOverride("sites")
HAnimSite1471.setUSE("hanim_l_metacarpal_phalanx_5")

HAnimHumanoid38.addSites(HAnimSite1471)
HAnimSite1472 = x3d.HAnimSite()
HAnimSite1472.setContainerFieldOverride("sites")
HAnimSite1472.setUSE("hanim_r_acromion")

HAnimHumanoid38.addSites(HAnimSite1472)
HAnimSite1473 = x3d.HAnimSite()
HAnimSite1473.setContainerFieldOverride("sites")
HAnimSite1473.setUSE("hanim_r_axilla_distal")

HAnimHumanoid38.addSites(HAnimSite1473)
HAnimSite1474 = x3d.HAnimSite()
HAnimSite1474.setContainerFieldOverride("sites")
HAnimSite1474.setUSE("hanim_r_axilla_posterior_folds")

HAnimHumanoid38.addSites(HAnimSite1474)
HAnimSite1475 = x3d.HAnimSite()
HAnimSite1475.setContainerFieldOverride("sites")
HAnimSite1475.setUSE("hanim_r_axilla_proximal")

HAnimHumanoid38.addSites(HAnimSite1475)
HAnimSite1476 = x3d.HAnimSite()
HAnimSite1476.setContainerFieldOverride("sites")
HAnimSite1476.setUSE("hanim_r_clavicale")

HAnimHumanoid38.addSites(HAnimSite1476)
HAnimSite1477 = x3d.HAnimSite()
HAnimSite1477.setContainerFieldOverride("sites")
HAnimSite1477.setUSE("hanim_r_bideltoid")

HAnimHumanoid38.addSites(HAnimSite1477)
HAnimSite1478 = x3d.HAnimSite()
HAnimSite1478.setContainerFieldOverride("sites")
HAnimSite1478.setUSE("hanim_r_humeral_lateral_epicondyles")

HAnimHumanoid38.addSites(HAnimSite1478)
HAnimSite1479 = x3d.HAnimSite()
HAnimSite1479.setContainerFieldOverride("sites")
HAnimSite1479.setUSE("hanim_r_humeral_medial_epicondyles")

HAnimHumanoid38.addSites(HAnimSite1479)
HAnimSite1480 = x3d.HAnimSite()
HAnimSite1480.setContainerFieldOverride("sites")
HAnimSite1480.setUSE("hanim_r_olecranon")

HAnimHumanoid38.addSites(HAnimSite1480)
HAnimSite1481 = x3d.HAnimSite()
HAnimSite1481.setContainerFieldOverride("sites")
HAnimSite1481.setUSE("hanim_r_radial_styloid")

HAnimHumanoid38.addSites(HAnimSite1481)
HAnimSite1482 = x3d.HAnimSite()
HAnimSite1482.setContainerFieldOverride("sites")
HAnimSite1482.setUSE("hanim_r_radiale")

HAnimHumanoid38.addSites(HAnimSite1482)
HAnimSite1483 = x3d.HAnimSite()
HAnimSite1483.setContainerFieldOverride("sites")
HAnimSite1483.setUSE("hanim_r_ulnar_styloid")

HAnimHumanoid38.addSites(HAnimSite1483)
HAnimSite1484 = x3d.HAnimSite()
HAnimSite1484.setContainerFieldOverride("sites")
HAnimSite1484.setUSE("hanim_r_metacarpal_phalanx_2")

HAnimHumanoid38.addSites(HAnimSite1484)
HAnimSite1485 = x3d.HAnimSite()
HAnimSite1485.setContainerFieldOverride("sites")
HAnimSite1485.setUSE("hanim_r_metacarpal_phalanx_3")

HAnimHumanoid38.addSites(HAnimSite1485)
HAnimSite1486 = x3d.HAnimSite()
HAnimSite1486.setContainerFieldOverride("sites")
HAnimSite1486.setUSE("hanim_r_metacarpal_phalanx_5")

HAnimHumanoid38.addSites(HAnimSite1486)

Scene11.addChildren(HAnimHumanoid38)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/Humanoid2.new.python.x3d")
X3D0.toFileJSON("../data/Humanoid2.new.python.json")
