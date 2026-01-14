import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
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
meta4.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid1.x3d")

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

Transform12.addComments(x3d.CommentsBlock("""DEF for markerfor XYZ axes"""))
Shape13 = x3d.Shape()
Shape13.setDEF("AxisLinesShape")

Shape13.addComments(x3d.CommentsBlock("""RGB lines showing XYZ axes"""))
IndexedLineSet14 = x3d.IndexedLineSet()
IndexedLineSet14.setColorIndex([0,1,2])
IndexedLineSet14.setColorPerVertex(False)
IndexedLineSet14.setCoordIndex([0,1,-1,0,2,-1,0,3,-1])
Coordinate15 = x3d.Coordinate()
Coordinate15.setPoint(x3d.doubleToFloat([0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]))

IndexedLineSet14.setCoord(Coordinate15)
Color16 = x3d.Color()
Color16.setColor(x3d.doubleToFloat([1,0,0,0,0.6,0,0,0,1]))

IndexedLineSet14.setColor(Color16)

Shape13.setGeometry(IndexedLineSet14)

Transform12.addChild(Shape13)

Scene11.addChild(Transform12)
Group17 = x3d.Group()

Group17.addComments(x3d.CommentsBlock("""DEFS for markers of skeleton joints, segments, and sites"""))
Transform18 = x3d.Transform()
Transform19 = x3d.Transform()
Transform19.setTranslation(x3d.doubleToFloat([0,2.1,0]))
Shape20 = x3d.Shape()
Shape20.setDEF("HAnimJointShape")
Sphere21 = x3d.Sphere()
Sphere21.setRadius(0.02)

Shape20.setGeometry(Sphere21)
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.setDEF("HAnimJointMaterial")
Material23.setDiffuseColor(x3d.doubleToFloat([0,0,0]))

Appearance22.setMaterial(Material23)

Shape20.setAppearance(Appearance22)

Transform19.addChild(Shape20)

Transform18.addChild(Transform19)
Transform24 = x3d.Transform()
Transform24.setTranslation(x3d.doubleToFloat([0,2.05,0]))
Shape25 = x3d.Shape()
Shape25.setDEF("HAnimSegmentLine")
LineSet26 = x3d.LineSet()
LineSet26.setVertexCount([2])
ColorRGBA27 = x3d.ColorRGBA()
ColorRGBA27.setDEF("HAnimSegmentLineColorRGBA")
ColorRGBA27.setColor(x3d.doubleToFloat([1,1,0,0,1,1,0,0]))

LineSet26.setColor(ColorRGBA27)
Coordinate28 = x3d.Coordinate()
Coordinate28.setPoint(x3d.doubleToFloat([-0.05,0,0,0.05,0,0]))

LineSet26.setCoord(Coordinate28)

Shape25.setGeometry(LineSet26)

Transform24.addChild(Shape25)

Transform18.addChild(Transform24)
Transform29 = x3d.Transform()
Transform29.setTranslation(x3d.doubleToFloat([0,2.1,0]))
Shape30 = x3d.Shape()
Shape30.setDEF("HAnimSiteShape")
IndexedFaceSet31 = x3d.IndexedFaceSet()
IndexedFaceSet31.setDEF("DiamondIFS")
IndexedFaceSet31.setCreaseAngle(0.5)
IndexedFaceSet31.setSolid(False)
IndexedFaceSet31.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
ColorRGBA32 = x3d.ColorRGBA()
ColorRGBA32.setDEF("HAnimSiteColorRGBA")
ColorRGBA32.setColor(x3d.doubleToFloat([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]))

IndexedFaceSet31.setColor(ColorRGBA32)
Coordinate33 = x3d.Coordinate()
Coordinate33.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet31.setCoord(Coordinate33)

Shape30.setGeometry(IndexedFaceSet31)
Appearance34 = x3d.Appearance()
Material35 = x3d.Material()
Material35.setDiffuseColor(x3d.doubleToFloat([1,1,1]))
Material35.setTransparency(1)

Appearance34.setMaterial(Material35)

Shape30.setAppearance(Appearance34)

Transform29.addChild(Shape30)

Transform18.addChild(Transform29)

Group17.addChild(Transform18)

Scene11.addChild(Group17)
NavigationInfo36 = x3d.NavigationInfo()
NavigationInfo36.setSpeed(1.5)

Scene11.addChild(NavigationInfo36)
Viewpoint37 = x3d.Viewpoint()
Viewpoint37.setPosition(x3d.doubleToFloat([0,1,3]))
Viewpoint37.setCenterOfRotation(x3d.doubleToFloat([0,1,0]))
Viewpoint37.setDescription("default")

Scene11.addChild(Viewpoint37)
HAnimHumanoid38 = x3d.HAnimHumanoid()
HAnimHumanoid38.setName("HAnim")
HAnimHumanoid38.setDEF("hanim_HAnim")
HAnimHumanoid38.setInfo(["humanoidVersion=2.0"])
HAnimHumanoid38.setVersion("2.0")

HAnimHumanoid38.addComments(x3d.CommentsBlock("""<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)"""))

HAnimHumanoid38.addComments(x3d.CommentsBlock("""</LOD>"""))
Shape39 = x3d.Shape()
Shape39.setDEF("SkinShape")
Shape39.setContainerFieldOverride("skin")
IndexedFaceSet40 = x3d.IndexedFaceSet()
IndexedFaceSet40.setCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1])
IndexedFaceSet40.setCreaseAngle(3.1)
Coordinate41 = x3d.Coordinate()
Coordinate41.setDEF("TheSkinCoord")
Coordinate41.setPoint(x3d.doubleToFloat([0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]))

IndexedFaceSet40.setCoord(Coordinate41)
Color42 = x3d.Color()
Color42.setColor(x3d.doubleToFloat([1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]))

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
Material45.setDiffuseColor(x3d.doubleToFloat([1,1,1]))
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
HAnimJoint47.setCenter(x3d.doubleToFloat([0,0.824,0.0277]))
HAnimJoint47.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint47.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint47.setContainerFieldOverride("skeleton")
HAnimSegment48 = x3d.HAnimSegment()
HAnimSegment48.setName("sacrum")
HAnimSegment48.setDEF("hanim_sacrum")
Transform49 = x3d.Transform()
Transform49.setTranslation(x3d.doubleToFloat([0,0.824,0.0277]))
Transform50 = x3d.Transform()

Transform50.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape51 = x3d.Shape()
Shape51.setUSE("HAnimJointShape")

Transform50.addChild(Shape51)

Transform49.addChild(Transform50)

HAnimSegment48.addChild(Transform49)
Shape52 = x3d.Shape()
LineSet53 = x3d.LineSet()
LineSet53.setVertexCount([2])
Coordinate54 = x3d.Coordinate()
Coordinate54.setPoint(x3d.doubleToFloat([0,0.824,0.0277,0,0.9149,0.0016]))

LineSet53.setCoord(Coordinate54)

LineSet53.addComments(x3d.CommentsBlock("""from humanoid_root to sacroiliac vertices 2"""))
ColorRGBA55 = x3d.ColorRGBA()
ColorRGBA55.setUSE("HAnimSegmentLineColorRGBA")

LineSet53.setColor(ColorRGBA55)

Shape52.setGeometry(LineSet53)

HAnimSegment48.addChild(Shape52)
Shape56 = x3d.Shape()
LineSet57 = x3d.LineSet()
LineSet57.setVertexCount([2])
Coordinate58 = x3d.Coordinate()
Coordinate58.setPoint(x3d.doubleToFloat([0,0.824,0.0277,0.0028,1.0568,-0.0776]))

LineSet57.setCoord(Coordinate58)

LineSet57.addComments(x3d.CommentsBlock("""from humanoid_root to vl5 vertices 2"""))
ColorRGBA59 = x3d.ColorRGBA()
ColorRGBA59.setUSE("HAnimSegmentLineColorRGBA")

LineSet57.setColor(ColorRGBA59)

Shape56.setGeometry(LineSet57)

HAnimSegment48.addChild(Shape56)

HAnimJoint47.addChild(HAnimSegment48)
HAnimJoint60 = x3d.HAnimJoint()
HAnimJoint60.setName("sacroiliac")
HAnimJoint60.setDEF("hanim_sacroiliac")
HAnimJoint60.setCenter(x3d.doubleToFloat([0,0.9149,0.0016]))
HAnimJoint60.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint60.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment61 = x3d.HAnimSegment()
HAnimSegment61.setName("pelvis")
HAnimSegment61.setDEF("hanim_pelvis")
Transform62 = x3d.Transform()
Transform62.setTranslation(x3d.doubleToFloat([0,0.9149,0.0016]))
Transform63 = x3d.Transform()

Transform63.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape64 = x3d.Shape()
Shape64.setUSE("HAnimJointShape")

Transform63.addChild(Shape64)

Transform62.addChild(Transform63)

HAnimSegment61.addChild(Transform62)
Shape65 = x3d.Shape()
LineSet66 = x3d.LineSet()
LineSet66.setVertexCount([2])
Coordinate67 = x3d.Coordinate()
Coordinate67.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,0.0961,0.9124,-0.0001]))

LineSet66.setCoord(Coordinate67)

LineSet66.addComments(x3d.CommentsBlock("""from sacroiliac to l_hip vertices 2"""))
ColorRGBA68 = x3d.ColorRGBA()
ColorRGBA68.setUSE("HAnimSegmentLineColorRGBA")

LineSet66.setColor(ColorRGBA68)

Shape65.setGeometry(LineSet66)

HAnimSegment61.addChild(Shape65)
HAnimSite69 = x3d.HAnimSite()
HAnimSite69.setName("buttocks_standing_wall_contact_point")
HAnimSite69.setDEF("hanim_buttocks_standing_wall_contact_point")
TouchSensor70 = x3d.TouchSensor()
TouchSensor70.setDescription("HAnimSite 93 buttocks_standing_wall_contact_point")

HAnimSite69.addChild(TouchSensor70)
Shape71 = x3d.Shape()
Shape71.setUSE("HAnimSiteShape")

HAnimSite69.addChild(Shape71)
Billboard72 = x3d.Billboard()
Shape73 = x3d.Shape()
Text74 = x3d.Text()
Text74.setString(["93"])
FontStyle75 = x3d.FontStyle()
FontStyle75.setSize(0.035)

Text74.setFontStyle(FontStyle75)

Shape73.setGeometry(Text74)

Billboard72.addChild(Shape73)

HAnimSite69.addChild(Billboard72)

HAnimSegment61.addChild(HAnimSite69)
HAnimSite76 = x3d.HAnimSite()
HAnimSite76.setName("crotch")
HAnimSite76.setDEF("hanim_crotch")
HAnimSite76.setTranslation(x3d.doubleToFloat([0.0034,0.8266,0.0257]))
TouchSensor77 = x3d.TouchSensor()
TouchSensor77.setDescription("HAnimSite 38 crotch")

HAnimSite76.addChild(TouchSensor77)
Shape78 = x3d.Shape()
Shape78.setUSE("HAnimSiteShape")

HAnimSite76.addChild(Shape78)
Billboard79 = x3d.Billboard()
Shape80 = x3d.Shape()
Text81 = x3d.Text()
Text81.setString(["38"])
FontStyle82 = x3d.FontStyle()
FontStyle82.setSize(0.035)

Text81.setFontStyle(FontStyle82)

Shape80.setGeometry(Text81)

Billboard79.addChild(Shape80)

HAnimSite76.addChild(Billboard79)

HAnimSegment61.addChild(HAnimSite76)
HAnimSite83 = x3d.HAnimSite()
HAnimSite83.setName("l_asis")
HAnimSite83.setDEF("hanim_l_asis")
HAnimSite83.setTranslation(x3d.doubleToFloat([0.0925,0.9983,0.1052]))
TouchSensor84 = x3d.TouchSensor()
TouchSensor84.setDescription("HAnimSite 32 l_asis")

HAnimSite83.addChild(TouchSensor84)
Shape85 = x3d.Shape()
Shape85.setUSE("HAnimSiteShape")

HAnimSite83.addChild(Shape85)
Billboard86 = x3d.Billboard()
Shape87 = x3d.Shape()
Text88 = x3d.Text()
Text88.setString(["32"])
FontStyle89 = x3d.FontStyle()
FontStyle89.setSize(0.035)

Text88.setFontStyle(FontStyle89)

Shape87.setGeometry(Text88)

Billboard86.addChild(Shape87)

HAnimSite83.addChild(Billboard86)

HAnimSegment61.addChild(HAnimSite83)
HAnimSite90 = x3d.HAnimSite()
HAnimSite90.setName("l_iliocristale")
HAnimSite90.setDEF("hanim_l_iliocristale")
HAnimSite90.setTranslation(x3d.doubleToFloat([0.1612,1.0537,0.0008]))
TouchSensor91 = x3d.TouchSensor()
TouchSensor91.setDescription("HAnimSite 33 l_iliocristale")

HAnimSite90.addChild(TouchSensor91)
Shape92 = x3d.Shape()
Shape92.setUSE("HAnimSiteShape")

HAnimSite90.addChild(Shape92)
Billboard93 = x3d.Billboard()
Shape94 = x3d.Shape()
Text95 = x3d.Text()
Text95.setString(["33"])
FontStyle96 = x3d.FontStyle()
FontStyle96.setSize(0.035)

Text95.setFontStyle(FontStyle96)

Shape94.setGeometry(Text95)

Billboard93.addChild(Shape94)

HAnimSite90.addChild(Billboard93)

HAnimSegment61.addChild(HAnimSite90)
HAnimSite97 = x3d.HAnimSite()
HAnimSite97.setName("l_psis")
HAnimSite97.setDEF("hanim_l_psis")
HAnimSite97.setTranslation(x3d.doubleToFloat([0.0774,1.019,-0.1151]))
TouchSensor98 = x3d.TouchSensor()
TouchSensor98.setDescription("HAnimSite 34 l_psis")

HAnimSite97.addChild(TouchSensor98)
Shape99 = x3d.Shape()
Shape99.setUSE("HAnimSiteShape")

HAnimSite97.addChild(Shape99)
Billboard100 = x3d.Billboard()
Shape101 = x3d.Shape()
Text102 = x3d.Text()
Text102.setString(["34"])
FontStyle103 = x3d.FontStyle()
FontStyle103.setSize(0.035)

Text102.setFontStyle(FontStyle103)

Shape101.setGeometry(Text102)

Billboard100.addChild(Shape101)

HAnimSite97.addChild(Billboard100)

HAnimSegment61.addChild(HAnimSite97)
HAnimSite104 = x3d.HAnimSite()
HAnimSite104.setName("l_trochanterion")
HAnimSite104.setDEF("hanim_l_trochanterion")
HAnimSite104.setTranslation(x3d.doubleToFloat([0.1677,0.8336,0.0303]))
TouchSensor105 = x3d.TouchSensor()
TouchSensor105.setDescription("HAnimSite 42 l_trochanterion")

HAnimSite104.addChild(TouchSensor105)
Shape106 = x3d.Shape()
Shape106.setUSE("HAnimSiteShape")

HAnimSite104.addChild(Shape106)
Billboard107 = x3d.Billboard()
Shape108 = x3d.Shape()
Text109 = x3d.Text()
Text109.setString(["42"])
FontStyle110 = x3d.FontStyle()
FontStyle110.setSize(0.035)

Text109.setFontStyle(FontStyle110)

Shape108.setGeometry(Text109)

Billboard107.addChild(Shape108)

HAnimSite104.addChild(Billboard107)

HAnimSegment61.addChild(HAnimSite104)
HAnimSite111 = x3d.HAnimSite()
HAnimSite111.setName("r_asis")
HAnimSite111.setDEF("hanim_r_asis")
HAnimSite111.setTranslation(x3d.doubleToFloat([-0.0887,1.0021,0.1112]))
TouchSensor112 = x3d.TouchSensor()
TouchSensor112.setDescription("HAnimSite 35 r_asis")

HAnimSite111.addChild(TouchSensor112)
Shape113 = x3d.Shape()
Shape113.setUSE("HAnimSiteShape")

HAnimSite111.addChild(Shape113)
Billboard114 = x3d.Billboard()
Shape115 = x3d.Shape()
Text116 = x3d.Text()
Text116.setString(["35"])
FontStyle117 = x3d.FontStyle()
FontStyle117.setSize(0.035)

Text116.setFontStyle(FontStyle117)

Shape115.setGeometry(Text116)

Billboard114.addChild(Shape115)

HAnimSite111.addChild(Billboard114)

HAnimSegment61.addChild(HAnimSite111)
HAnimSite118 = x3d.HAnimSite()
HAnimSite118.setName("r_iliocristale")
HAnimSite118.setDEF("hanim_r_iliocristale")
HAnimSite118.setTranslation(x3d.doubleToFloat([-0.1525,1.0628,0.0035]))
TouchSensor119 = x3d.TouchSensor()
TouchSensor119.setDescription("HAnimSite 36 r_iliocristale")

HAnimSite118.addChild(TouchSensor119)
Shape120 = x3d.Shape()
Shape120.setUSE("HAnimSiteShape")

HAnimSite118.addChild(Shape120)
Billboard121 = x3d.Billboard()
Shape122 = x3d.Shape()
Text123 = x3d.Text()
Text123.setString(["36"])
FontStyle124 = x3d.FontStyle()
FontStyle124.setSize(0.035)

Text123.setFontStyle(FontStyle124)

Shape122.setGeometry(Text123)

Billboard121.addChild(Shape122)

HAnimSite118.addChild(Billboard121)

HAnimSegment61.addChild(HAnimSite118)
HAnimSite125 = x3d.HAnimSite()
HAnimSite125.setName("r_psis")
HAnimSite125.setDEF("hanim_r_psis")
HAnimSite125.setTranslation(x3d.doubleToFloat([-0.0716,1.019,-0.1138]))
TouchSensor126 = x3d.TouchSensor()
TouchSensor126.setDescription("HAnimSite 37 r_psis")

HAnimSite125.addChild(TouchSensor126)
Shape127 = x3d.Shape()
Shape127.setUSE("HAnimSiteShape")

HAnimSite125.addChild(Shape127)
Billboard128 = x3d.Billboard()
Shape129 = x3d.Shape()
Text130 = x3d.Text()
Text130.setString(["37"])
FontStyle131 = x3d.FontStyle()
FontStyle131.setSize(0.035)

Text130.setFontStyle(FontStyle131)

Shape129.setGeometry(Text130)

Billboard128.addChild(Shape129)

HAnimSite125.addChild(Billboard128)

HAnimSegment61.addChild(HAnimSite125)
HAnimSite132 = x3d.HAnimSite()
HAnimSite132.setName("r_trochanterion")
HAnimSite132.setDEF("hanim_r_trochanterion")
HAnimSite132.setTranslation(x3d.doubleToFloat([-0.1689,0.8419,0.0352]))
TouchSensor133 = x3d.TouchSensor()
TouchSensor133.setDescription("HAnimSite 46 r_trochanterion")

HAnimSite132.addChild(TouchSensor133)
Shape134 = x3d.Shape()
Shape134.setUSE("HAnimSiteShape")

HAnimSite132.addChild(Shape134)
Billboard135 = x3d.Billboard()
Shape136 = x3d.Shape()
Text137 = x3d.Text()
Text137.setString(["46"])
FontStyle138 = x3d.FontStyle()
FontStyle138.setSize(0.035)

Text137.setFontStyle(FontStyle138)

Shape136.setGeometry(Text137)

Billboard135.addChild(Shape136)

HAnimSite132.addChild(Billboard135)

HAnimSegment61.addChild(HAnimSite132)
Shape139 = x3d.Shape()
LineSet140 = x3d.LineSet()
LineSet140.setVertexCount([2])
Coordinate141 = x3d.Coordinate()
Coordinate141.setPoint(x3d.doubleToFloat([0,0.9149,0.0016,-0.095,0.9171,0.0029]))

LineSet140.setCoord(Coordinate141)

LineSet140.addComments(x3d.CommentsBlock("""from sacroiliac to r_hip vertices 2"""))
ColorRGBA142 = x3d.ColorRGBA()
ColorRGBA142.setUSE("HAnimSegmentLineColorRGBA")

LineSet140.setColor(ColorRGBA142)

Shape139.setGeometry(LineSet140)

HAnimSegment61.addChild(Shape139)

HAnimJoint60.addChild(HAnimSegment61)
HAnimJoint143 = x3d.HAnimJoint()
HAnimJoint143.setName("l_hip")
HAnimJoint143.setDEF("hanim_l_hip")
HAnimJoint143.setCenter(x3d.doubleToFloat([0.0961,0.9124,-0.0001]))
HAnimJoint143.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint143.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment144 = x3d.HAnimSegment()
HAnimSegment144.setName("l_thigh")
HAnimSegment144.setDEF("hanim_l_thigh")
Transform145 = x3d.Transform()
Transform145.setTranslation(x3d.doubleToFloat([0.0961,0.9124,-0.0001]))
Transform146 = x3d.Transform()

Transform146.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape147 = x3d.Shape()
Shape147.setUSE("HAnimJointShape")

Transform146.addChild(Shape147)

Transform145.addChild(Transform146)

HAnimSegment144.addChild(Transform145)
Shape148 = x3d.Shape()
LineSet149 = x3d.LineSet()
LineSet149.setVertexCount([2])
Coordinate150 = x3d.Coordinate()
Coordinate150.setPoint(x3d.doubleToFloat([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]))

LineSet149.setCoord(Coordinate150)

LineSet149.addComments(x3d.CommentsBlock("""from l_hip to l_knee vertices 2"""))
ColorRGBA151 = x3d.ColorRGBA()
ColorRGBA151.setUSE("HAnimSegmentLineColorRGBA")

LineSet149.setColor(ColorRGBA151)

Shape148.setGeometry(LineSet149)

HAnimSegment144.addChild(Shape148)
HAnimSite152 = x3d.HAnimSite()
HAnimSite152.setName("l_femoral_lateral_epicondyles")
HAnimSite152.setDEF("hanim_l_femoral_lateral_epicondyles")
HAnimSite152.setTranslation(x3d.doubleToFloat([0.1598,0.4967,0.0297]))
TouchSensor153 = x3d.TouchSensor()
TouchSensor153.setDescription("HAnimSite 40 l_femoral_lateral_epicondyles")

HAnimSite152.addChild(TouchSensor153)
Shape154 = x3d.Shape()
Shape154.setUSE("HAnimSiteShape")

HAnimSite152.addChild(Shape154)
Billboard155 = x3d.Billboard()
Shape156 = x3d.Shape()
Text157 = x3d.Text()
Text157.setString(["40"])
FontStyle158 = x3d.FontStyle()
FontStyle158.setSize(0.035)

Text157.setFontStyle(FontStyle158)

Shape156.setGeometry(Text157)

Billboard155.addChild(Shape156)

HAnimSite152.addChild(Billboard155)

HAnimSegment144.addChild(HAnimSite152)
HAnimSite159 = x3d.HAnimSite()
HAnimSite159.setName("l_femoral_medial_epicondyles")
HAnimSite159.setDEF("hanim_l_femoral_medial_epicondyles")
HAnimSite159.setTranslation(x3d.doubleToFloat([0.0398,0.4946,0.0303]))
TouchSensor160 = x3d.TouchSensor()
TouchSensor160.setDescription("HAnimSite 39 l_femoral_medial_epicondyles")

HAnimSite159.addChild(TouchSensor160)
Shape161 = x3d.Shape()
Shape161.setUSE("HAnimSiteShape")

HAnimSite159.addChild(Shape161)
Billboard162 = x3d.Billboard()
Shape163 = x3d.Shape()
Text164 = x3d.Text()
Text164.setString(["39"])
FontStyle165 = x3d.FontStyle()
FontStyle165.setSize(0.035)

Text164.setFontStyle(FontStyle165)

Shape163.setGeometry(Text164)

Billboard162.addChild(Shape163)

HAnimSite159.addChild(Billboard162)

HAnimSegment144.addChild(HAnimSite159)
HAnimSite166 = x3d.HAnimSite()
HAnimSite166.setName("l_knee_crease")
HAnimSite166.setDEF("hanim_l_knee_crease")
HAnimSite166.setTranslation(x3d.doubleToFloat([0.0993,0.4881,-0.0309]))
TouchSensor167 = x3d.TouchSensor()
TouchSensor167.setDescription("HAnimSite 90 l_knee_crease")

HAnimSite166.addChild(TouchSensor167)
Shape168 = x3d.Shape()
Shape168.setUSE("HAnimSiteShape")

HAnimSite166.addChild(Shape168)
Billboard169 = x3d.Billboard()
Shape170 = x3d.Shape()
Text171 = x3d.Text()
Text171.setString(["90"])
FontStyle172 = x3d.FontStyle()
FontStyle172.setSize(0.035)

Text171.setFontStyle(FontStyle172)

Shape170.setGeometry(Text171)

Billboard169.addChild(Shape170)

HAnimSite166.addChild(Billboard169)

HAnimSegment144.addChild(HAnimSite166)
HAnimSite173 = x3d.HAnimSite()
HAnimSite173.setName("l_suprapatella")
HAnimSite173.setDEF("hanim_l_suprapatella")
TouchSensor174 = x3d.TouchSensor()
TouchSensor174.setDescription("HAnimSite 41 l_suprapatella")

HAnimSite173.addChild(TouchSensor174)
Shape175 = x3d.Shape()
Shape175.setUSE("HAnimSiteShape")

HAnimSite173.addChild(Shape175)
Billboard176 = x3d.Billboard()
Shape177 = x3d.Shape()
Text178 = x3d.Text()
Text178.setString(["41"])
FontStyle179 = x3d.FontStyle()
FontStyle179.setSize(0.035)

Text178.setFontStyle(FontStyle179)

Shape177.setGeometry(Text178)

Billboard176.addChild(Shape177)

HAnimSite173.addChild(Billboard176)

HAnimSegment144.addChild(HAnimSite173)

HAnimJoint143.addChild(HAnimSegment144)
HAnimJoint180 = x3d.HAnimJoint()
HAnimJoint180.setName("l_knee")
HAnimJoint180.setDEF("hanim_l_knee")
HAnimJoint180.setCenter(x3d.doubleToFloat([0.104,0.4867,0.0308]))
HAnimJoint180.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint180.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment181 = x3d.HAnimSegment()
HAnimSegment181.setName("l_calf")
HAnimSegment181.setDEF("hanim_l_calf")
Transform182 = x3d.Transform()
Transform182.setTranslation(x3d.doubleToFloat([0.104,0.4867,0.0308]))
Transform183 = x3d.Transform()

Transform183.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape184 = x3d.Shape()
Shape184.setUSE("HAnimJointShape")

Transform183.addChild(Shape184)

Transform182.addChild(Transform183)

HAnimSegment181.addChild(Transform182)
Shape185 = x3d.Shape()
LineSet186 = x3d.LineSet()
LineSet186.setVertexCount([2])
Coordinate187 = x3d.Coordinate()
Coordinate187.setPoint(x3d.doubleToFloat([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]))

LineSet186.setCoord(Coordinate187)

LineSet186.addComments(x3d.CommentsBlock("""from l_knee to l_talocrural vertices 2"""))
ColorRGBA188 = x3d.ColorRGBA()
ColorRGBA188.setUSE("HAnimSegmentLineColorRGBA")

LineSet186.setColor(ColorRGBA188)

Shape185.setGeometry(LineSet186)

HAnimSegment181.addChild(Shape185)
HAnimSite189 = x3d.HAnimSite()
HAnimSite189.setName("l_lateral_malleolus")
HAnimSite189.setDEF("hanim_l_lateral_malleolus")
HAnimSite189.setTranslation(x3d.doubleToFloat([0.1308,0.0597,-0.1032]))
TouchSensor190 = x3d.TouchSensor()
TouchSensor190.setDescription("HAnimSite 49 l_lateral_malleolus")

HAnimSite189.addChild(TouchSensor190)
Shape191 = x3d.Shape()
Shape191.setUSE("HAnimSiteShape")

HAnimSite189.addChild(Shape191)
Billboard192 = x3d.Billboard()
Shape193 = x3d.Shape()
Text194 = x3d.Text()
Text194.setString(["49"])
FontStyle195 = x3d.FontStyle()
FontStyle195.setSize(0.035)

Text194.setFontStyle(FontStyle195)

Shape193.setGeometry(Text194)

Billboard192.addChild(Shape193)

HAnimSite189.addChild(Billboard192)

HAnimSegment181.addChild(HAnimSite189)
HAnimSite196 = x3d.HAnimSite()
HAnimSite196.setName("l_medial_malleolus")
HAnimSite196.setDEF("hanim_l_medial_malleolus")
HAnimSite196.setTranslation(x3d.doubleToFloat([0.089,0.0716,-0.0881]))
TouchSensor197 = x3d.TouchSensor()
TouchSensor197.setDescription("HAnimSite 48 l_medial_malleolus")

HAnimSite196.addChild(TouchSensor197)
Shape198 = x3d.Shape()
Shape198.setUSE("HAnimSiteShape")

HAnimSite196.addChild(Shape198)
Billboard199 = x3d.Billboard()
Shape200 = x3d.Shape()
Text201 = x3d.Text()
Text201.setString(["48"])
FontStyle202 = x3d.FontStyle()
FontStyle202.setSize(0.035)

Text201.setFontStyle(FontStyle202)

Shape200.setGeometry(Text201)

Billboard199.addChild(Shape200)

HAnimSite196.addChild(Billboard199)

HAnimSegment181.addChild(HAnimSite196)
HAnimSite203 = x3d.HAnimSite()
HAnimSite203.setName("l_tibiale")
HAnimSite203.setDEF("hanim_l_tibiale")
TouchSensor204 = x3d.TouchSensor()
TouchSensor204.setDescription("HAnimSite 47 l_tibiale")

HAnimSite203.addChild(TouchSensor204)
Shape205 = x3d.Shape()
Shape205.setUSE("HAnimSiteShape")

HAnimSite203.addChild(Shape205)
Billboard206 = x3d.Billboard()
Shape207 = x3d.Shape()
Text208 = x3d.Text()
Text208.setString(["47"])
FontStyle209 = x3d.FontStyle()
FontStyle209.setSize(0.035)

Text208.setFontStyle(FontStyle209)

Shape207.setGeometry(Text208)

Billboard206.addChild(Shape207)

HAnimSite203.addChild(Billboard206)

HAnimSegment181.addChild(HAnimSite203)

HAnimJoint180.addChild(HAnimSegment181)
HAnimJoint210 = x3d.HAnimJoint()
HAnimJoint210.setName("l_talocrural")
HAnimJoint210.setDEF("hanim_l_talocrural")
HAnimJoint210.setCenter(x3d.doubleToFloat([0.1101,0.0656,-0.0736]))
HAnimJoint210.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint210.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment211 = x3d.HAnimSegment()
HAnimSegment211.setName("l_talus")
HAnimSegment211.setDEF("hanim_l_talus")
Transform212 = x3d.Transform()
Transform212.setScale(x3d.doubleToFloat([0.15,0.15,0.15]))
Transform212.setTranslation(x3d.doubleToFloat([0.08,0.06,-0.025]))
Transform212.setRotation(x3d.doubleToFloat([1,0,0,-1.57]))

Transform212.addComments(x3d.CommentsBlock("""Transform left foot"""))
Transform213 = x3d.Transform()

Transform213.addComments(x3d.CommentsBlock("""Empty Transform left foot"""))
Shape214 = x3d.Shape()
Shape214.setUSE("HAnimJointShape")

Transform213.addChild(Shape214)

Transform212.addChild(Transform213)

HAnimSegment211.addChild(Transform212)
Shape215 = x3d.Shape()
LineSet216 = x3d.LineSet()
LineSet216.setVertexCount([2])
Coordinate217 = x3d.Coordinate()
Coordinate217.setPoint(x3d.doubleToFloat([0.1101,0.0656,-0.0736,0.0824,0.0064,-0.004]))

LineSet216.setCoord(Coordinate217)

LineSet216.addComments(x3d.CommentsBlock("""from l_talocrural to l_metatarsophalangeal_2 vertices 2"""))
ColorRGBA218 = x3d.ColorRGBA()
ColorRGBA218.setUSE("HAnimSegmentLineColorRGBA")

LineSet216.setColor(ColorRGBA218)

Shape215.setGeometry(LineSet216)

HAnimSegment211.addChild(Shape215)
HAnimSite219 = x3d.HAnimSite()
HAnimSite219.setName("l_calcaneus_posterior")
HAnimSite219.setDEF("hanim_l_calcaneus_posterior")
HAnimSite219.setTranslation(x3d.doubleToFloat([0.0974,0.0259,-0.1171]))
TouchSensor220 = x3d.TouchSensor()
TouchSensor220.setDescription("HAnimSite 58 l_calcaneus_posterior")

HAnimSite219.addChild(TouchSensor220)
Shape221 = x3d.Shape()
Shape221.setUSE("HAnimSiteShape")

HAnimSite219.addChild(Shape221)
Billboard222 = x3d.Billboard()
Shape223 = x3d.Shape()
Text224 = x3d.Text()
Text224.setString(["58"])
FontStyle225 = x3d.FontStyle()
FontStyle225.setSize(0.035)

Text224.setFontStyle(FontStyle225)

Shape223.setGeometry(Text224)

Billboard222.addChild(Shape223)

HAnimSite219.addChild(Billboard222)

HAnimSegment211.addChild(HAnimSite219)
HAnimSite226 = x3d.HAnimSite()
HAnimSite226.setName("l_sphyrion")
HAnimSite226.setDEF("hanim_l_sphyrion")
HAnimSite226.setTranslation(x3d.doubleToFloat([0.089,0.0575,-0.0943]))
TouchSensor227 = x3d.TouchSensor()
TouchSensor227.setDescription("HAnimSite 50 l_sphyrion")

HAnimSite226.addChild(TouchSensor227)
Shape228 = x3d.Shape()
Shape228.setUSE("HAnimSiteShape")

HAnimSite226.addChild(Shape228)
Billboard229 = x3d.Billboard()
Shape230 = x3d.Shape()
Text231 = x3d.Text()
Text231.setString(["50"])
FontStyle232 = x3d.FontStyle()
FontStyle232.setSize(0.035)

Text231.setFontStyle(FontStyle232)

Shape230.setGeometry(Text231)

Billboard229.addChild(Shape230)

HAnimSite226.addChild(Billboard229)

HAnimSegment211.addChild(HAnimSite226)

HAnimJoint210.addChild(HAnimSegment211)
HAnimJoint233 = x3d.HAnimJoint()
HAnimJoint233.setName("l_metatarsophalangeal_2")
HAnimJoint233.setDEF("hanim_l_metatarsophalangeal_2")
HAnimJoint233.setCenter(x3d.doubleToFloat([0.0824,0.0064,-0.004]))
HAnimJoint233.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint233.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint210.addChild(HAnimJoint233)

HAnimJoint180.addChild(HAnimJoint210)

HAnimJoint143.addChild(HAnimJoint180)

HAnimJoint60.addChild(HAnimJoint143)
HAnimJoint234 = x3d.HAnimJoint()
HAnimJoint234.setName("r_hip")
HAnimJoint234.setDEF("hanim_r_hip")
HAnimJoint234.setCenter(x3d.doubleToFloat([-0.095,0.9171,0.0029]))
HAnimJoint234.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint234.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment235 = x3d.HAnimSegment()
HAnimSegment235.setName("r_thigh")
HAnimSegment235.setDEF("hanim_r_thigh")
Transform236 = x3d.Transform()
Transform236.setTranslation(x3d.doubleToFloat([-0.095,0.9171,0.0029]))
Transform237 = x3d.Transform()

Transform237.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape238 = x3d.Shape()
Shape238.setUSE("HAnimJointShape")

Transform237.addChild(Shape238)

Transform236.addChild(Transform237)

HAnimSegment235.addChild(Transform236)
Shape239 = x3d.Shape()
LineSet240 = x3d.LineSet()
LineSet240.setVertexCount([2])
Coordinate241 = x3d.Coordinate()
Coordinate241.setPoint(x3d.doubleToFloat([-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]))

LineSet240.setCoord(Coordinate241)

LineSet240.addComments(x3d.CommentsBlock("""from r_hip to r_knee vertices 2"""))
ColorRGBA242 = x3d.ColorRGBA()
ColorRGBA242.setUSE("HAnimSegmentLineColorRGBA")

LineSet240.setColor(ColorRGBA242)

Shape239.setGeometry(LineSet240)

HAnimSegment235.addChild(Shape239)
HAnimSite243 = x3d.HAnimSite()
HAnimSite243.setName("r_femoral_lateral_epicondyles")
HAnimSite243.setDEF("hanim_r_femoral_lateral_epicondyles")
HAnimSite243.setTranslation(x3d.doubleToFloat([-0.1421,0.4992,0.031]))
TouchSensor244 = x3d.TouchSensor()
TouchSensor244.setDescription("HAnimSite 44 r_femoral_lateral_epicondyles")

HAnimSite243.addChild(TouchSensor244)
Shape245 = x3d.Shape()
Shape245.setUSE("HAnimSiteShape")

HAnimSite243.addChild(Shape245)
Billboard246 = x3d.Billboard()
Shape247 = x3d.Shape()
Text248 = x3d.Text()
Text248.setString(["44"])
FontStyle249 = x3d.FontStyle()
FontStyle249.setSize(0.035)

Text248.setFontStyle(FontStyle249)

Shape247.setGeometry(Text248)

Billboard246.addChild(Shape247)

HAnimSite243.addChild(Billboard246)

HAnimSegment235.addChild(HAnimSite243)
HAnimSite250 = x3d.HAnimSite()
HAnimSite250.setName("r_femoral_medial_epicondyles")
HAnimSite250.setDEF("hanim_r_femoral_medial_epicondyles")
HAnimSite250.setTranslation(x3d.doubleToFloat([-0.0221,0.5014,0.0289]))
TouchSensor251 = x3d.TouchSensor()
TouchSensor251.setDescription("HAnimSite 43 r_femoral_medial_epicondyles")

HAnimSite250.addChild(TouchSensor251)
Shape252 = x3d.Shape()
Shape252.setUSE("HAnimSiteShape")

HAnimSite250.addChild(Shape252)
Billboard253 = x3d.Billboard()
Shape254 = x3d.Shape()
Text255 = x3d.Text()
Text255.setString(["43"])
FontStyle256 = x3d.FontStyle()
FontStyle256.setSize(0.035)

Text255.setFontStyle(FontStyle256)

Shape254.setGeometry(Text255)

Billboard253.addChild(Shape254)

HAnimSite250.addChild(Billboard253)

HAnimSegment235.addChild(HAnimSite250)
HAnimSite257 = x3d.HAnimSite()
HAnimSite257.setName("r_knee_crease")
HAnimSite257.setDEF("hanim_r_knee_crease")
HAnimSite257.setTranslation(x3d.doubleToFloat([-0.0825,0.4932,-0.0326]))
TouchSensor258 = x3d.TouchSensor()
TouchSensor258.setDescription("HAnimSite 91 r_knee_crease")

HAnimSite257.addChild(TouchSensor258)
Shape259 = x3d.Shape()
Shape259.setUSE("HAnimSiteShape")

HAnimSite257.addChild(Shape259)
Billboard260 = x3d.Billboard()
Shape261 = x3d.Shape()
Text262 = x3d.Text()
Text262.setString(["91"])
FontStyle263 = x3d.FontStyle()
FontStyle263.setSize(0.035)

Text262.setFontStyle(FontStyle263)

Shape261.setGeometry(Text262)

Billboard260.addChild(Shape261)

HAnimSite257.addChild(Billboard260)

HAnimSegment235.addChild(HAnimSite257)
HAnimSite264 = x3d.HAnimSite()
HAnimSite264.setName("r_suprapatella")
HAnimSite264.setDEF("hanim_r_suprapatella")
TouchSensor265 = x3d.TouchSensor()
TouchSensor265.setDescription("HAnimSite 45 r_suprapatella")

HAnimSite264.addChild(TouchSensor265)
Shape266 = x3d.Shape()
Shape266.setUSE("HAnimSiteShape")

HAnimSite264.addChild(Shape266)
Billboard267 = x3d.Billboard()
Shape268 = x3d.Shape()
Text269 = x3d.Text()
Text269.setString(["45"])
FontStyle270 = x3d.FontStyle()
FontStyle270.setSize(0.035)

Text269.setFontStyle(FontStyle270)

Shape268.setGeometry(Text269)

Billboard267.addChild(Shape268)

HAnimSite264.addChild(Billboard267)

HAnimSegment235.addChild(HAnimSite264)

HAnimJoint234.addChild(HAnimSegment235)
HAnimJoint271 = x3d.HAnimJoint()
HAnimJoint271.setName("r_knee")
HAnimJoint271.setDEF("hanim_r_knee")
HAnimJoint271.setCenter(x3d.doubleToFloat([-0.0867,0.4913,0.0318]))
HAnimJoint271.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint271.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment272 = x3d.HAnimSegment()
HAnimSegment272.setName("r_calf")
HAnimSegment272.setDEF("hanim_r_calf")
Transform273 = x3d.Transform()
Transform273.setTranslation(x3d.doubleToFloat([-0.0867,0.4913,0.0318]))
Transform274 = x3d.Transform()

Transform274.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape275 = x3d.Shape()
Shape275.setUSE("HAnimJointShape")

Transform274.addChild(Shape275)

Transform273.addChild(Transform274)

HAnimSegment272.addChild(Transform273)
Shape276 = x3d.Shape()
LineSet277 = x3d.LineSet()
LineSet277.setVertexCount([2])
Coordinate278 = x3d.Coordinate()
Coordinate278.setPoint(x3d.doubleToFloat([-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]))

LineSet277.setCoord(Coordinate278)

LineSet277.addComments(x3d.CommentsBlock("""from r_knee to r_talocrural vertices 2"""))
ColorRGBA279 = x3d.ColorRGBA()
ColorRGBA279.setUSE("HAnimSegmentLineColorRGBA")

LineSet277.setColor(ColorRGBA279)

Shape276.setGeometry(LineSet277)

HAnimSegment272.addChild(Shape276)
HAnimSite280 = x3d.HAnimSite()
HAnimSite280.setName("r_lateral_malleolus")
HAnimSite280.setDEF("hanim_r_lateral_malleolus")
HAnimSite280.setTranslation(x3d.doubleToFloat([-0.1006,0.0658,-0.1075]))
TouchSensor281 = x3d.TouchSensor()
TouchSensor281.setDescription("HAnimSite 53 r_lateral_malleolus")

HAnimSite280.addChild(TouchSensor281)
Shape282 = x3d.Shape()
Shape282.setUSE("HAnimSiteShape")

HAnimSite280.addChild(Shape282)
Billboard283 = x3d.Billboard()
Shape284 = x3d.Shape()
Text285 = x3d.Text()
Text285.setString(["53"])
FontStyle286 = x3d.FontStyle()
FontStyle286.setSize(0.035)

Text285.setFontStyle(FontStyle286)

Shape284.setGeometry(Text285)

Billboard283.addChild(Shape284)

HAnimSite280.addChild(Billboard283)

HAnimSegment272.addChild(HAnimSite280)
HAnimSite287 = x3d.HAnimSite()
HAnimSite287.setName("r_medial_malleolus")
HAnimSite287.setDEF("hanim_r_medial_malleolus")
HAnimSite287.setTranslation(x3d.doubleToFloat([-0.0591,0.076,-0.0928]))
TouchSensor288 = x3d.TouchSensor()
TouchSensor288.setDescription("HAnimSite 52 r_medial_malleolus")

HAnimSite287.addChild(TouchSensor288)
Shape289 = x3d.Shape()
Shape289.setUSE("HAnimSiteShape")

HAnimSite287.addChild(Shape289)
Billboard290 = x3d.Billboard()
Shape291 = x3d.Shape()
Text292 = x3d.Text()
Text292.setString(["52"])
FontStyle293 = x3d.FontStyle()
FontStyle293.setSize(0.035)

Text292.setFontStyle(FontStyle293)

Shape291.setGeometry(Text292)

Billboard290.addChild(Shape291)

HAnimSite287.addChild(Billboard290)

HAnimSegment272.addChild(HAnimSite287)
HAnimSite294 = x3d.HAnimSite()
HAnimSite294.setName("r_tibiale")
HAnimSite294.setDEF("hanim_r_tibiale")
TouchSensor295 = x3d.TouchSensor()
TouchSensor295.setDescription("HAnimSite 51 r_tibiale")

HAnimSite294.addChild(TouchSensor295)
Shape296 = x3d.Shape()
Shape296.setUSE("HAnimSiteShape")

HAnimSite294.addChild(Shape296)
Billboard297 = x3d.Billboard()
Shape298 = x3d.Shape()
Text299 = x3d.Text()
Text299.setString(["51"])
FontStyle300 = x3d.FontStyle()
FontStyle300.setSize(0.035)

Text299.setFontStyle(FontStyle300)

Shape298.setGeometry(Text299)

Billboard297.addChild(Shape298)

HAnimSite294.addChild(Billboard297)

HAnimSegment272.addChild(HAnimSite294)

HAnimJoint271.addChild(HAnimSegment272)
HAnimJoint301 = x3d.HAnimJoint()
HAnimJoint301.setName("r_talocrural")
HAnimJoint301.setDEF("hanim_r_talocrural")
HAnimJoint301.setCenter(x3d.doubleToFloat([-0.0801,0.0712,-0.0766]))
HAnimJoint301.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint301.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment302 = x3d.HAnimSegment()
HAnimSegment302.setName("r_talus")
HAnimSegment302.setDEF("hanim_r_talus")
Transform303 = x3d.Transform()
Transform303.setScale(x3d.doubleToFloat([0.15,0.15,0.15]))
Transform303.setTranslation(x3d.doubleToFloat([-0.05,0.06,-0.025]))
Transform303.setRotation(x3d.doubleToFloat([1,0,0,-1.57]))

Transform303.addComments(x3d.CommentsBlock("""Transform right foot"""))
Transform304 = x3d.Transform()

Transform304.addComments(x3d.CommentsBlock("""Empty Transform right foot"""))
Shape305 = x3d.Shape()
Shape305.setUSE("HAnimJointShape")

Transform304.addChild(Shape305)

Transform303.addChild(Transform304)

HAnimSegment302.addChild(Transform303)
Shape306 = x3d.Shape()
LineSet307 = x3d.LineSet()
LineSet307.setVertexCount([2])
Coordinate308 = x3d.Coordinate()
Coordinate308.setPoint(x3d.doubleToFloat([-0.0801,0.0712,-0.0766,-0.0823,0.0064,-0.004]))

LineSet307.setCoord(Coordinate308)

LineSet307.addComments(x3d.CommentsBlock("""from r_talocrural to r_metatarsophalangeal_2 vertices 2"""))
ColorRGBA309 = x3d.ColorRGBA()
ColorRGBA309.setUSE("HAnimSegmentLineColorRGBA")

LineSet307.setColor(ColorRGBA309)

Shape306.setGeometry(LineSet307)

HAnimSegment302.addChild(Shape306)
HAnimSite310 = x3d.HAnimSite()
HAnimSite310.setName("r_calcaneus_posterior")
HAnimSite310.setDEF("hanim_r_calcaneus_posterior")
HAnimSite310.setTranslation(x3d.doubleToFloat([-0.0692,0.0297,-0.1221]))
TouchSensor311 = x3d.TouchSensor()
TouchSensor311.setDescription("HAnimSite 62 r_calcaneus_posterior")

HAnimSite310.addChild(TouchSensor311)
Shape312 = x3d.Shape()
Shape312.setUSE("HAnimSiteShape")

HAnimSite310.addChild(Shape312)
Billboard313 = x3d.Billboard()
Shape314 = x3d.Shape()
Text315 = x3d.Text()
Text315.setString(["62"])
FontStyle316 = x3d.FontStyle()
FontStyle316.setSize(0.035)

Text315.setFontStyle(FontStyle316)

Shape314.setGeometry(Text315)

Billboard313.addChild(Shape314)

HAnimSite310.addChild(Billboard313)

HAnimSegment302.addChild(HAnimSite310)
HAnimSite317 = x3d.HAnimSite()
HAnimSite317.setName("r_sphyrion")
HAnimSite317.setDEF("hanim_r_sphyrion")
HAnimSite317.setTranslation(x3d.doubleToFloat([-0.0603,0.061,-0.1002]))
TouchSensor318 = x3d.TouchSensor()
TouchSensor318.setDescription("HAnimSite 54 r_sphyrion")

HAnimSite317.addChild(TouchSensor318)
Shape319 = x3d.Shape()
Shape319.setUSE("HAnimSiteShape")

HAnimSite317.addChild(Shape319)
Billboard320 = x3d.Billboard()
Shape321 = x3d.Shape()
Text322 = x3d.Text()
Text322.setString(["54"])
FontStyle323 = x3d.FontStyle()
FontStyle323.setSize(0.035)

Text322.setFontStyle(FontStyle323)

Shape321.setGeometry(Text322)

Billboard320.addChild(Shape321)

HAnimSite317.addChild(Billboard320)

HAnimSegment302.addChild(HAnimSite317)

HAnimJoint301.addChild(HAnimSegment302)
HAnimJoint324 = x3d.HAnimJoint()
HAnimJoint324.setName("r_metatarsophalangeal_2")
HAnimJoint324.setDEF("hanim_r_metatarsophalangeal_2")
HAnimJoint324.setCenter(x3d.doubleToFloat([-0.0823,0.0064,-0.004]))
HAnimJoint324.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint324.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint301.addChild(HAnimJoint324)

HAnimJoint271.addChild(HAnimJoint301)

HAnimJoint234.addChild(HAnimJoint271)

HAnimJoint60.addChild(HAnimJoint234)

HAnimJoint47.addChild(HAnimJoint60)
HAnimJoint325 = x3d.HAnimJoint()
HAnimJoint325.setName("vl5")
HAnimJoint325.setDEF("hanim_vl5")
HAnimJoint325.setCenter(x3d.doubleToFloat([0.0028,1.0568,-0.0776]))
HAnimJoint325.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint325.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment326 = x3d.HAnimSegment()
HAnimSegment326.setName("l5")
HAnimSegment326.setDEF("hanim_l5")
Transform327 = x3d.Transform()
Transform327.setTranslation(x3d.doubleToFloat([0.0028,1.0568,-0.0776]))
Transform328 = x3d.Transform()

Transform328.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape329 = x3d.Shape()
Shape329.setUSE("HAnimJointShape")

Transform328.addChild(Shape329)

Transform327.addChild(Transform328)

HAnimSegment326.addChild(Transform327)
Shape330 = x3d.Shape()
LineSet331 = x3d.LineSet()
LineSet331.setVertexCount([2])
Coordinate332 = x3d.Coordinate()
Coordinate332.setPoint(x3d.doubleToFloat([0.0028,1.0568,-0.0776,0.0044,1.6209,0.0236]))

LineSet331.setCoord(Coordinate332)

LineSet331.addComments(x3d.CommentsBlock("""from vl5 to skullbase vertices 2"""))
ColorRGBA333 = x3d.ColorRGBA()
ColorRGBA333.setUSE("HAnimSegmentLineColorRGBA")

LineSet331.setColor(ColorRGBA333)

Shape330.setGeometry(LineSet331)

HAnimSegment326.addChild(Shape330)
HAnimSite334 = x3d.HAnimSite()
HAnimSite334.setName("adams_apple")
HAnimSite334.setDEF("hanim_adams_apple")
TouchSensor335 = x3d.TouchSensor()
TouchSensor335.setDescription("HAnimSite 11 adams_apple")

HAnimSite334.addChild(TouchSensor335)
Shape336 = x3d.Shape()
Shape336.setUSE("HAnimSiteShape")

HAnimSite334.addChild(Shape336)
Billboard337 = x3d.Billboard()
Shape338 = x3d.Shape()
Text339 = x3d.Text()
Text339.setString(["11"])
FontStyle340 = x3d.FontStyle()
FontStyle340.setSize(0.035)

Text339.setFontStyle(FontStyle340)

Shape338.setGeometry(Text339)

Billboard337.addChild(Shape338)

HAnimSite334.addChild(Billboard337)

HAnimSegment326.addChild(HAnimSite334)
HAnimSite341 = x3d.HAnimSite()
HAnimSite341.setName("cervicale")
HAnimSite341.setDEF("hanim_cervicale")
HAnimSite341.setTranslation(x3d.doubleToFloat([0.0064,1.52,-0.0815]))
TouchSensor342 = x3d.TouchSensor()
TouchSensor342.setDescription("HAnimSite 10 cervicale")

HAnimSite341.addChild(TouchSensor342)
Shape343 = x3d.Shape()
Shape343.setUSE("HAnimSiteShape")

HAnimSite341.addChild(Shape343)
Billboard344 = x3d.Billboard()
Shape345 = x3d.Shape()
Text346 = x3d.Text()
Text346.setString(["10"])
FontStyle347 = x3d.FontStyle()
FontStyle347.setSize(0.035)

Text346.setFontStyle(FontStyle347)

Shape345.setGeometry(Text346)

Billboard344.addChild(Shape345)

HAnimSite341.addChild(Billboard344)

HAnimSegment326.addChild(HAnimSite341)
HAnimSite348 = x3d.HAnimSite()
HAnimSite348.setName("l_acromion")
HAnimSite348.setDEF("hanim_l_acromion")
HAnimSite348.setTranslation(x3d.doubleToFloat([0.2032,1.476,-0.049]))
TouchSensor349 = x3d.TouchSensor()
TouchSensor349.setDescription("HAnimSite 15 l_acromion")

HAnimSite348.addChild(TouchSensor349)
Shape350 = x3d.Shape()
Shape350.setUSE("HAnimSiteShape")

HAnimSite348.addChild(Shape350)
Billboard351 = x3d.Billboard()
Shape352 = x3d.Shape()
Text353 = x3d.Text()
Text353.setString(["15"])
FontStyle354 = x3d.FontStyle()
FontStyle354.setSize(0.035)

Text353.setFontStyle(FontStyle354)

Shape352.setGeometry(Text353)

Billboard351.addChild(Shape352)

HAnimSite348.addChild(Billboard351)

HAnimSegment326.addChild(HAnimSite348)
HAnimSite355 = x3d.HAnimSite()
HAnimSite355.setName("l_axilla_distal")
HAnimSite355.setDEF("hanim_l_axilla_distal")
HAnimSite355.setTranslation(x3d.doubleToFloat([0.1706,1.4072,-0.0875]))
TouchSensor356 = x3d.TouchSensor()
TouchSensor356.setDescription("HAnimSite 17 l_axilla_distal")

HAnimSite355.addChild(TouchSensor356)
Shape357 = x3d.Shape()
Shape357.setUSE("HAnimSiteShape")

HAnimSite355.addChild(Shape357)
Billboard358 = x3d.Billboard()
Shape359 = x3d.Shape()
Text360 = x3d.Text()
Text360.setString(["17"])
FontStyle361 = x3d.FontStyle()
FontStyle361.setSize(0.035)

Text360.setFontStyle(FontStyle361)

Shape359.setGeometry(Text360)

Billboard358.addChild(Shape359)

HAnimSite355.addChild(Billboard358)

HAnimSegment326.addChild(HAnimSite355)
HAnimSite362 = x3d.HAnimSite()
HAnimSite362.setName("l_axilla_posterior_folds")
HAnimSite362.setDEF("hanim_l_axilla_posterior_folds")
TouchSensor363 = x3d.TouchSensor()
TouchSensor363.setDescription("HAnimSite 18 l_axilla_posterior_folds")

HAnimSite362.addChild(TouchSensor363)
Shape364 = x3d.Shape()
Shape364.setUSE("HAnimSiteShape")

HAnimSite362.addChild(Shape364)
Billboard365 = x3d.Billboard()
Shape366 = x3d.Shape()
Text367 = x3d.Text()
Text367.setString(["18"])
FontStyle368 = x3d.FontStyle()
FontStyle368.setSize(0.035)

Text367.setFontStyle(FontStyle368)

Shape366.setGeometry(Text367)

Billboard365.addChild(Shape366)

HAnimSite362.addChild(Billboard365)

HAnimSegment326.addChild(HAnimSite362)
HAnimSite369 = x3d.HAnimSite()
HAnimSite369.setName("l_axilla_proximal")
HAnimSite369.setDEF("hanim_l_axilla_proximal")
HAnimSite369.setTranslation(x3d.doubleToFloat([0.1777,1.4065,-0.0075]))
TouchSensor370 = x3d.TouchSensor()
TouchSensor370.setDescription("HAnimSite 16 l_axilla_proximal")

HAnimSite369.addChild(TouchSensor370)
Shape371 = x3d.Shape()
Shape371.setUSE("HAnimSiteShape")

HAnimSite369.addChild(Shape371)
Billboard372 = x3d.Billboard()
Shape373 = x3d.Shape()
Text374 = x3d.Text()
Text374.setString(["16"])
FontStyle375 = x3d.FontStyle()
FontStyle375.setSize(0.035)

Text374.setFontStyle(FontStyle375)

Shape373.setGeometry(Text374)

Billboard372.addChild(Shape373)

HAnimSite369.addChild(Billboard372)

HAnimSegment326.addChild(HAnimSite369)
HAnimSite376 = x3d.HAnimSite()
HAnimSite376.setName("l_chest_midsagittal_plane")
HAnimSite376.setDEF("hanim_l_chest_midsagittal_plane")
TouchSensor377 = x3d.TouchSensor()
TouchSensor377.setDescription("HAnimSite 94 l_chest_midsagittal_plane")

HAnimSite376.addChild(TouchSensor377)
Shape378 = x3d.Shape()
Shape378.setUSE("HAnimSiteShape")

HAnimSite376.addChild(Shape378)
Billboard379 = x3d.Billboard()
Shape380 = x3d.Shape()
Text381 = x3d.Text()
Text381.setString(["94"])
FontStyle382 = x3d.FontStyle()
FontStyle382.setSize(0.035)

Text381.setFontStyle(FontStyle382)

Shape380.setGeometry(Text381)

Billboard379.addChild(Shape380)

HAnimSite376.addChild(Billboard379)

HAnimSegment326.addChild(HAnimSite376)
HAnimSite383 = x3d.HAnimSite()
HAnimSite383.setName("l_clavicale")
HAnimSite383.setDEF("hanim_l_clavicale")
HAnimSite383.setTranslation(x3d.doubleToFloat([0.0271,1.4943,0.0394]))
TouchSensor384 = x3d.TouchSensor()
TouchSensor384.setDescription("HAnimSite 14 l_clavicale")

HAnimSite383.addChild(TouchSensor384)
Shape385 = x3d.Shape()
Shape385.setUSE("HAnimSiteShape")

HAnimSite383.addChild(Shape385)
Billboard386 = x3d.Billboard()
Shape387 = x3d.Shape()
Text388 = x3d.Text()
Text388.setString(["14"])
FontStyle389 = x3d.FontStyle()
FontStyle389.setSize(0.035)

Text388.setFontStyle(FontStyle389)

Shape387.setGeometry(Text388)

Billboard386.addChild(Shape387)

HAnimSite383.addChild(Billboard386)

HAnimSegment326.addChild(HAnimSite383)
HAnimSite390 = x3d.HAnimSite()
HAnimSite390.setName("l_neck_base")
HAnimSite390.setDEF("hanim_l_neck_base")
HAnimSite390.setTranslation(x3d.doubleToFloat([0.0646,1.5141,-0.038]))
TouchSensor391 = x3d.TouchSensor()
TouchSensor391.setDescription("HAnimSite 82 l_neck_base")

HAnimSite390.addChild(TouchSensor391)
Shape392 = x3d.Shape()
Shape392.setUSE("HAnimSiteShape")

HAnimSite390.addChild(Shape392)
Billboard393 = x3d.Billboard()
Shape394 = x3d.Shape()
Text395 = x3d.Text()
Text395.setString(["82"])
FontStyle396 = x3d.FontStyle()
FontStyle396.setSize(0.035)

Text395.setFontStyle(FontStyle396)

Shape394.setGeometry(Text395)

Billboard393.addChild(Shape394)

HAnimSite390.addChild(Billboard393)

HAnimSegment326.addChild(HAnimSite390)
HAnimSite397 = x3d.HAnimSite()
HAnimSite397.setName("l_rib10")
HAnimSite397.setDEF("hanim_l_rib10")
HAnimSite397.setTranslation(x3d.doubleToFloat([0.0871,1.1925,0.0992]))
TouchSensor398 = x3d.TouchSensor()
TouchSensor398.setDescription("HAnimSite 28 l_rib10")

HAnimSite397.addChild(TouchSensor398)
Shape399 = x3d.Shape()
Shape399.setUSE("HAnimSiteShape")

HAnimSite397.addChild(Shape399)
Billboard400 = x3d.Billboard()
Shape401 = x3d.Shape()
Text402 = x3d.Text()
Text402.setString(["28"])
FontStyle403 = x3d.FontStyle()
FontStyle403.setSize(0.035)

Text402.setFontStyle(FontStyle403)

Shape401.setGeometry(Text402)

Billboard400.addChild(Shape401)

HAnimSite397.addChild(Billboard400)

HAnimSegment326.addChild(HAnimSite397)
HAnimSite404 = x3d.HAnimSite()
HAnimSite404.setName("l_thelion")
HAnimSite404.setDEF("hanim_l_thelion")
HAnimSite404.setTranslation(x3d.doubleToFloat([0.0918,1.3382,0.1192]))
TouchSensor405 = x3d.TouchSensor()
TouchSensor405.setDescription("HAnimSite 29 l_thelion")

HAnimSite404.addChild(TouchSensor405)
Shape406 = x3d.Shape()
Shape406.setUSE("HAnimSiteShape")

HAnimSite404.addChild(Shape406)
Billboard407 = x3d.Billboard()
Shape408 = x3d.Shape()
Text409 = x3d.Text()
Text409.setString(["29"])
FontStyle410 = x3d.FontStyle()
FontStyle410.setSize(0.035)

Text409.setFontStyle(FontStyle410)

Shape408.setGeometry(Text409)

Billboard407.addChild(Shape408)

HAnimSite404.addChild(Billboard407)

HAnimSegment326.addChild(HAnimSite404)
HAnimSite411 = x3d.HAnimSite()
HAnimSite411.setName("mesosternale")
HAnimSite411.setDEF("hanim_mesosternale")
TouchSensor412 = x3d.TouchSensor()
TouchSensor412.setDescription("HAnimSite 88 mesosternale")

HAnimSite411.addChild(TouchSensor412)
Shape413 = x3d.Shape()
Shape413.setUSE("HAnimSiteShape")

HAnimSite411.addChild(Shape413)
Billboard414 = x3d.Billboard()
Shape415 = x3d.Shape()
Text416 = x3d.Text()
Text416.setString(["88"])
FontStyle417 = x3d.FontStyle()
FontStyle417.setSize(0.035)

Text416.setFontStyle(FontStyle417)

Shape415.setGeometry(Text416)

Billboard414.addChild(Shape415)

HAnimSite411.addChild(Billboard414)

HAnimSegment326.addChild(HAnimSite411)
HAnimSite418 = x3d.HAnimSite()
HAnimSite418.setName("navel")
HAnimSite418.setDEF("hanim_navel")
HAnimSite418.setTranslation(x3d.doubleToFloat([0.0069,1.0966,0.1017]))
TouchSensor419 = x3d.TouchSensor()
TouchSensor419.setDescription("HAnimSite 84 navel")

HAnimSite418.addChild(TouchSensor419)
Shape420 = x3d.Shape()
Shape420.setUSE("HAnimSiteShape")

HAnimSite418.addChild(Shape420)
Billboard421 = x3d.Billboard()
Shape422 = x3d.Shape()
Text423 = x3d.Text()
Text423.setString(["84"])
FontStyle424 = x3d.FontStyle()
FontStyle424.setSize(0.035)

Text423.setFontStyle(FontStyle424)

Shape422.setGeometry(Text423)

Billboard421.addChild(Shape422)

HAnimSite418.addChild(Billboard421)

HAnimSegment326.addChild(HAnimSite418)
HAnimSite425 = x3d.HAnimSite()
HAnimSite425.setName("r_acromion")
HAnimSite425.setDEF("hanim_r_acromion")
HAnimSite425.setTranslation(x3d.doubleToFloat([-0.1905,1.4791,-0.0431]))
TouchSensor426 = x3d.TouchSensor()
TouchSensor426.setDescription("HAnimSite 20 r_acromion")

HAnimSite425.addChild(TouchSensor426)
Shape427 = x3d.Shape()
Shape427.setUSE("HAnimSiteShape")

HAnimSite425.addChild(Shape427)
Billboard428 = x3d.Billboard()
Shape429 = x3d.Shape()
Text430 = x3d.Text()
Text430.setString(["20"])
FontStyle431 = x3d.FontStyle()
FontStyle431.setSize(0.035)

Text430.setFontStyle(FontStyle431)

Shape429.setGeometry(Text430)

Billboard428.addChild(Shape429)

HAnimSite425.addChild(Billboard428)

HAnimSegment326.addChild(HAnimSite425)
HAnimSite432 = x3d.HAnimSite()
HAnimSite432.setName("r_axilla_distal")
HAnimSite432.setDEF("hanim_r_axilla_distal")
HAnimSite432.setTranslation(x3d.doubleToFloat([-0.1603,1.4098,-0.0826]))
TouchSensor433 = x3d.TouchSensor()
TouchSensor433.setDescription("HAnimSite 22 r_axilla_distal")

HAnimSite432.addChild(TouchSensor433)
Shape434 = x3d.Shape()
Shape434.setUSE("HAnimSiteShape")

HAnimSite432.addChild(Shape434)
Billboard435 = x3d.Billboard()
Shape436 = x3d.Shape()
Text437 = x3d.Text()
Text437.setString(["22"])
FontStyle438 = x3d.FontStyle()
FontStyle438.setSize(0.035)

Text437.setFontStyle(FontStyle438)

Shape436.setGeometry(Text437)

Billboard435.addChild(Shape436)

HAnimSite432.addChild(Billboard435)

HAnimSegment326.addChild(HAnimSite432)
HAnimSite439 = x3d.HAnimSite()
HAnimSite439.setName("r_axilla_posterior_folds")
HAnimSite439.setDEF("hanim_r_axilla_posterior_folds")
TouchSensor440 = x3d.TouchSensor()
TouchSensor440.setDescription("HAnimSite 23 r_axilla_posterior_folds")

HAnimSite439.addChild(TouchSensor440)
Shape441 = x3d.Shape()
Shape441.setUSE("HAnimSiteShape")

HAnimSite439.addChild(Shape441)
Billboard442 = x3d.Billboard()
Shape443 = x3d.Shape()
Text444 = x3d.Text()
Text444.setString(["23"])
FontStyle445 = x3d.FontStyle()
FontStyle445.setSize(0.035)

Text444.setFontStyle(FontStyle445)

Shape443.setGeometry(Text444)

Billboard442.addChild(Shape443)

HAnimSite439.addChild(Billboard442)

HAnimSegment326.addChild(HAnimSite439)
HAnimSite446 = x3d.HAnimSite()
HAnimSite446.setName("r_axilla_proximal")
HAnimSite446.setDEF("hanim_r_axilla_proximal")
HAnimSite446.setTranslation(x3d.doubleToFloat([-0.1626,1.4072,-0.0031]))
TouchSensor447 = x3d.TouchSensor()
TouchSensor447.setDescription("HAnimSite 21 r_axilla_proximal")

HAnimSite446.addChild(TouchSensor447)
Shape448 = x3d.Shape()
Shape448.setUSE("HAnimSiteShape")

HAnimSite446.addChild(Shape448)
Billboard449 = x3d.Billboard()
Shape450 = x3d.Shape()
Text451 = x3d.Text()
Text451.setString(["21"])
FontStyle452 = x3d.FontStyle()
FontStyle452.setSize(0.035)

Text451.setFontStyle(FontStyle452)

Shape450.setGeometry(Text451)

Billboard449.addChild(Shape450)

HAnimSite446.addChild(Billboard449)

HAnimSegment326.addChild(HAnimSite446)
HAnimSite453 = x3d.HAnimSite()
HAnimSite453.setName("r_chest_midsagittal_plane")
HAnimSite453.setDEF("hanim_r_chest_midsagittal_plane")
TouchSensor454 = x3d.TouchSensor()
TouchSensor454.setDescription("HAnimSite 95 r_chest_midsagittal_plane")

HAnimSite453.addChild(TouchSensor454)
Shape455 = x3d.Shape()
Shape455.setUSE("HAnimSiteShape")

HAnimSite453.addChild(Shape455)
Billboard456 = x3d.Billboard()
Shape457 = x3d.Shape()
Text458 = x3d.Text()
Text458.setString(["95"])
FontStyle459 = x3d.FontStyle()
FontStyle459.setSize(0.035)

Text458.setFontStyle(FontStyle459)

Shape457.setGeometry(Text458)

Billboard456.addChild(Shape457)

HAnimSite453.addChild(Billboard456)

HAnimSegment326.addChild(HAnimSite453)
HAnimSite460 = x3d.HAnimSite()
HAnimSite460.setName("r_clavicale")
HAnimSite460.setDEF("hanim_r_clavicale")
HAnimSite460.setTranslation(x3d.doubleToFloat([-0.0115,1.4943,0.04]))
TouchSensor461 = x3d.TouchSensor()
TouchSensor461.setDescription("HAnimSite 19 r_clavicale")

HAnimSite460.addChild(TouchSensor461)
Shape462 = x3d.Shape()
Shape462.setUSE("HAnimSiteShape")

HAnimSite460.addChild(Shape462)
Billboard463 = x3d.Billboard()
Shape464 = x3d.Shape()
Text465 = x3d.Text()
Text465.setString(["19"])
FontStyle466 = x3d.FontStyle()
FontStyle466.setSize(0.035)

Text465.setFontStyle(FontStyle466)

Shape464.setGeometry(Text465)

Billboard463.addChild(Shape464)

HAnimSite460.addChild(Billboard463)

HAnimSegment326.addChild(HAnimSite460)
HAnimSite467 = x3d.HAnimSite()
HAnimSite467.setName("r_neck_base")
HAnimSite467.setDEF("hanim_r_neck_base")
HAnimSite467.setTranslation(x3d.doubleToFloat([-0.0419,1.5149,-0.022]))
TouchSensor468 = x3d.TouchSensor()
TouchSensor468.setDescription("HAnimSite 83 r_neck_base")

HAnimSite467.addChild(TouchSensor468)
Shape469 = x3d.Shape()
Shape469.setUSE("HAnimSiteShape")

HAnimSite467.addChild(Shape469)
Billboard470 = x3d.Billboard()
Shape471 = x3d.Shape()
Text472 = x3d.Text()
Text472.setString(["83"])
FontStyle473 = x3d.FontStyle()
FontStyle473.setSize(0.035)

Text472.setFontStyle(FontStyle473)

Shape471.setGeometry(Text472)

Billboard470.addChild(Shape471)

HAnimSite467.addChild(Billboard470)

HAnimSegment326.addChild(HAnimSite467)
HAnimSite474 = x3d.HAnimSite()
HAnimSite474.setName("r_rib10")
HAnimSite474.setDEF("hanim_r_rib10")
HAnimSite474.setTranslation(x3d.doubleToFloat([-0.0711,1.1941,0.1016]))
TouchSensor475 = x3d.TouchSensor()
TouchSensor475.setDescription("HAnimSite 30 r_rib10")

HAnimSite474.addChild(TouchSensor475)
Shape476 = x3d.Shape()
Shape476.setUSE("HAnimSiteShape")

HAnimSite474.addChild(Shape476)
Billboard477 = x3d.Billboard()
Shape478 = x3d.Shape()
Text479 = x3d.Text()
Text479.setString(["30"])
FontStyle480 = x3d.FontStyle()
FontStyle480.setSize(0.035)

Text479.setFontStyle(FontStyle480)

Shape478.setGeometry(Text479)

Billboard477.addChild(Shape478)

HAnimSite474.addChild(Billboard477)

HAnimSegment326.addChild(HAnimSite474)
HAnimSite481 = x3d.HAnimSite()
HAnimSite481.setName("r_thelion")
HAnimSite481.setDEF("hanim_r_thelion")
HAnimSite481.setTranslation(x3d.doubleToFloat([-0.0736,1.3385,0.1217]))
TouchSensor482 = x3d.TouchSensor()
TouchSensor482.setDescription("HAnimSite 31 r_thelion")

HAnimSite481.addChild(TouchSensor482)
Shape483 = x3d.Shape()
Shape483.setUSE("HAnimSiteShape")

HAnimSite481.addChild(Shape483)
Billboard484 = x3d.Billboard()
Shape485 = x3d.Shape()
Text486 = x3d.Text()
Text486.setString(["31"])
FontStyle487 = x3d.FontStyle()
FontStyle487.setSize(0.035)

Text486.setFontStyle(FontStyle487)

Shape485.setGeometry(Text486)

Billboard484.addChild(Shape485)

HAnimSite481.addChild(Billboard484)

HAnimSegment326.addChild(HAnimSite481)
HAnimSite488 = x3d.HAnimSite()
HAnimSite488.setName("rear_center_midsagittal_plane")
HAnimSite488.setDEF("hanim_rear_center_midsagittal_plane")
TouchSensor489 = x3d.TouchSensor()
TouchSensor489.setDescription("HAnimSite 92 rear_center_midsagittal_plane")

HAnimSite488.addChild(TouchSensor489)
Shape490 = x3d.Shape()
Shape490.setUSE("HAnimSiteShape")

HAnimSite488.addChild(Shape490)
Billboard491 = x3d.Billboard()
Shape492 = x3d.Shape()
Text493 = x3d.Text()
Text493.setString(["92"])
FontStyle494 = x3d.FontStyle()
FontStyle494.setSize(0.035)

Text493.setFontStyle(FontStyle494)

Shape492.setGeometry(Text493)

Billboard491.addChild(Shape492)

HAnimSite488.addChild(Billboard491)

HAnimSegment326.addChild(HAnimSite488)
HAnimSite495 = x3d.HAnimSite()
HAnimSite495.setName("spine_1_middle_back")
HAnimSite495.setDEF("hanim_spine_1_middle_back")
TouchSensor496 = x3d.TouchSensor()
TouchSensor496.setDescription("HAnimSite 24 spine_1_middle_back")

HAnimSite495.addChild(TouchSensor496)
Shape497 = x3d.Shape()
Shape497.setUSE("HAnimSiteShape")

HAnimSite495.addChild(Shape497)
Billboard498 = x3d.Billboard()
Shape499 = x3d.Shape()
Text500 = x3d.Text()
Text500.setString(["24"])
FontStyle501 = x3d.FontStyle()
FontStyle501.setSize(0.035)

Text500.setFontStyle(FontStyle501)

Shape499.setGeometry(Text500)

Billboard498.addChild(Shape499)

HAnimSite495.addChild(Billboard498)

HAnimSegment326.addChild(HAnimSite495)
HAnimSite502 = x3d.HAnimSite()
HAnimSite502.setName("spine_2_middle_back")
HAnimSite502.setDEF("hanim_spine_2_middle_back")
TouchSensor503 = x3d.TouchSensor()
TouchSensor503.setDescription("HAnimSite spine_2_middle_back")

HAnimSite502.addChild(TouchSensor503)
Shape504 = x3d.Shape()
Shape504.setUSE("HAnimSiteShape")

HAnimSite502.addChild(Shape504)
Billboard505 = x3d.Billboard()
Shape506 = x3d.Shape()
Text507 = x3d.Text()
Text507.setString([""])
FontStyle508 = x3d.FontStyle()
FontStyle508.setSize(0.035)

Text507.setFontStyle(FontStyle508)

Shape506.setGeometry(Text507)

Billboard505.addChild(Shape506)

HAnimSite502.addChild(Billboard505)

HAnimSegment326.addChild(HAnimSite502)
HAnimSite509 = x3d.HAnimSite()
HAnimSite509.setName("substernale")
HAnimSite509.setDEF("hanim_substernale")
HAnimSite509.setTranslation(x3d.doubleToFloat([0.0085,1.2995,0.1147]))
TouchSensor510 = x3d.TouchSensor()
TouchSensor510.setDescription("HAnimSite 13 substernale")

HAnimSite509.addChild(TouchSensor510)
Shape511 = x3d.Shape()
Shape511.setUSE("HAnimSiteShape")

HAnimSite509.addChild(Shape511)
Billboard512 = x3d.Billboard()
Shape513 = x3d.Shape()
Text514 = x3d.Text()
Text514.setString(["13"])
FontStyle515 = x3d.FontStyle()
FontStyle515.setSize(0.035)

Text514.setFontStyle(FontStyle515)

Shape513.setGeometry(Text514)

Billboard512.addChild(Shape513)

HAnimSite509.addChild(Billboard512)

HAnimSegment326.addChild(HAnimSite509)
HAnimSite516 = x3d.HAnimSite()
HAnimSite516.setName("suprasternale")
HAnimSite516.setDEF("hanim_suprasternale")
HAnimSite516.setTranslation(x3d.doubleToFloat([0.0084,1.4714,0.0551]))
TouchSensor517 = x3d.TouchSensor()
TouchSensor517.setDescription("HAnimSite 12 suprasternale")

HAnimSite516.addChild(TouchSensor517)
Shape518 = x3d.Shape()
Shape518.setUSE("HAnimSiteShape")

HAnimSite516.addChild(Shape518)
Billboard519 = x3d.Billboard()
Shape520 = x3d.Shape()
Text521 = x3d.Text()
Text521.setString(["12"])
FontStyle522 = x3d.FontStyle()
FontStyle522.setSize(0.035)

Text521.setFontStyle(FontStyle522)

Shape520.setGeometry(Text521)

Billboard519.addChild(Shape520)

HAnimSite516.addChild(Billboard519)

HAnimSegment326.addChild(HAnimSite516)
HAnimSite523 = x3d.HAnimSite()
HAnimSite523.setName("waist_preferred_anterior")
HAnimSite523.setDEF("hanim_waist_preferred_anterior")
TouchSensor524 = x3d.TouchSensor()
TouchSensor524.setDescription("HAnimSite 26 waist_preferred_anterior")

HAnimSite523.addChild(TouchSensor524)
Shape525 = x3d.Shape()
Shape525.setUSE("HAnimSiteShape")

HAnimSite523.addChild(Shape525)
Billboard526 = x3d.Billboard()
Shape527 = x3d.Shape()
Text528 = x3d.Text()
Text528.setString(["26"])
FontStyle529 = x3d.FontStyle()
FontStyle529.setSize(0.035)

Text528.setFontStyle(FontStyle529)

Shape527.setGeometry(Text528)

Billboard526.addChild(Shape527)

HAnimSite523.addChild(Billboard526)

HAnimSegment326.addChild(HAnimSite523)
HAnimSite530 = x3d.HAnimSite()
HAnimSite530.setName("waist_preferred_posterior")
HAnimSite530.setDEF("hanim_waist_preferred_posterior")
HAnimSite530.setTranslation(x3d.doubleToFloat([0.29,1.0915,-0.1091]))
TouchSensor531 = x3d.TouchSensor()
TouchSensor531.setDescription("HAnimSite 27 waist_preferred_posterior")

HAnimSite530.addChild(TouchSensor531)
Shape532 = x3d.Shape()
Shape532.setUSE("HAnimSiteShape")

HAnimSite530.addChild(Shape532)
Billboard533 = x3d.Billboard()
Shape534 = x3d.Shape()
Text535 = x3d.Text()
Text535.setString(["27"])
FontStyle536 = x3d.FontStyle()
FontStyle536.setSize(0.035)

Text535.setFontStyle(FontStyle536)

Shape534.setGeometry(Text535)

Billboard533.addChild(Shape534)

HAnimSite530.addChild(Billboard533)

HAnimSegment326.addChild(HAnimSite530)
Shape537 = x3d.Shape()
LineSet538 = x3d.LineSet()
LineSet538.setVertexCount([2])
Coordinate539 = x3d.Coordinate()
Coordinate539.setPoint(x3d.doubleToFloat([0.0028,1.0568,-0.0776,0.2029,1.4376,-0.0387]))

LineSet538.setCoord(Coordinate539)

LineSet538.addComments(x3d.CommentsBlock("""from vl5 to l_shoulder vertices 2"""))
ColorRGBA540 = x3d.ColorRGBA()
ColorRGBA540.setUSE("HAnimSegmentLineColorRGBA")

LineSet538.setColor(ColorRGBA540)

Shape537.setGeometry(LineSet538)

HAnimSegment326.addChild(Shape537)
Shape541 = x3d.Shape()
LineSet542 = x3d.LineSet()
LineSet542.setVertexCount([2])
Coordinate543 = x3d.Coordinate()
Coordinate543.setPoint(x3d.doubleToFloat([0.0028,1.0568,-0.0776,-0.1907,1.4407,-0.0325]))

LineSet542.setCoord(Coordinate543)

LineSet542.addComments(x3d.CommentsBlock("""from vl5 to r_shoulder vertices 2"""))
ColorRGBA544 = x3d.ColorRGBA()
ColorRGBA544.setUSE("HAnimSegmentLineColorRGBA")

LineSet542.setColor(ColorRGBA544)

Shape541.setGeometry(LineSet542)

HAnimSegment326.addChild(Shape541)

HAnimJoint325.addChild(HAnimSegment326)
HAnimJoint545 = x3d.HAnimJoint()
HAnimJoint545.setName("skullbase")
HAnimJoint545.setDEF("hanim_skullbase")
HAnimJoint545.setCenter(x3d.doubleToFloat([0.0044,1.6209,0.0236]))
HAnimJoint545.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint545.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint325.addChild(HAnimJoint545)
HAnimJoint546 = x3d.HAnimJoint()
HAnimJoint546.setName("l_shoulder")
HAnimJoint546.setDEF("hanim_l_shoulder")
HAnimJoint546.setCenter(x3d.doubleToFloat([0.2029,1.4376,-0.0387]))
HAnimJoint546.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint546.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment547 = x3d.HAnimSegment()
HAnimSegment547.setName("l_upperarm")
HAnimSegment547.setDEF("hanim_l_upperarm")
Transform548 = x3d.Transform()
Transform548.setTranslation(x3d.doubleToFloat([0.2029,1.4376,-0.0387]))
Transform549 = x3d.Transform()

Transform549.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape550 = x3d.Shape()
Shape550.setUSE("HAnimJointShape")

Transform549.addChild(Shape550)

Transform548.addChild(Transform549)

HAnimSegment547.addChild(Transform548)
Shape551 = x3d.Shape()
LineSet552 = x3d.LineSet()
LineSet552.setVertexCount([2])
Coordinate553 = x3d.Coordinate()
Coordinate553.setPoint(x3d.doubleToFloat([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]))

LineSet552.setCoord(Coordinate553)

LineSet552.addComments(x3d.CommentsBlock("""from l_shoulder to l_elbow vertices 2"""))
ColorRGBA554 = x3d.ColorRGBA()
ColorRGBA554.setUSE("HAnimSegmentLineColorRGBA")

LineSet552.setColor(ColorRGBA554)

Shape551.setGeometry(LineSet552)

HAnimSegment547.addChild(Shape551)
HAnimSite555 = x3d.HAnimSite()
HAnimSite555.setName("l_bideltoid")
HAnimSite555.setDEF("hanim_l_bideltoid")
TouchSensor556 = x3d.TouchSensor()
TouchSensor556.setDescription("HAnimSite 96 l_bideltoid")

HAnimSite555.addChild(TouchSensor556)
Shape557 = x3d.Shape()
Shape557.setUSE("HAnimSiteShape")

HAnimSite555.addChild(Shape557)
Billboard558 = x3d.Billboard()
Shape559 = x3d.Shape()
Text560 = x3d.Text()
Text560.setString(["96"])
FontStyle561 = x3d.FontStyle()
FontStyle561.setSize(0.035)

Text560.setFontStyle(FontStyle561)

Shape559.setGeometry(Text560)

Billboard558.addChild(Shape559)

HAnimSite555.addChild(Billboard558)

HAnimSegment547.addChild(HAnimSite555)
HAnimSite562 = x3d.HAnimSite()
HAnimSite562.setName("l_humeral_lateral_epicondyles")
HAnimSite562.setDEF("hanim_l_humeral_lateral_epicondyles")
HAnimSite562.setTranslation(x3d.doubleToFloat([0.228,1.1482,-0.11]))
TouchSensor563 = x3d.TouchSensor()
TouchSensor563.setDescription("HAnimSite 63 l_humeral_lateral_epicondyles")

HAnimSite562.addChild(TouchSensor563)
Shape564 = x3d.Shape()
Shape564.setUSE("HAnimSiteShape")

HAnimSite562.addChild(Shape564)
Billboard565 = x3d.Billboard()
Shape566 = x3d.Shape()
Text567 = x3d.Text()
Text567.setString(["63"])
FontStyle568 = x3d.FontStyle()
FontStyle568.setSize(0.035)

Text567.setFontStyle(FontStyle568)

Shape566.setGeometry(Text567)

Billboard565.addChild(Shape566)

HAnimSite562.addChild(Billboard565)

HAnimSegment547.addChild(HAnimSite562)

HAnimJoint546.addChild(HAnimSegment547)
HAnimJoint569 = x3d.HAnimJoint()
HAnimJoint569.setName("l_elbow")
HAnimJoint569.setDEF("hanim_l_elbow")
HAnimJoint569.setCenter(x3d.doubleToFloat([0.2014,1.1357,-0.0682]))
HAnimJoint569.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint569.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment570 = x3d.HAnimSegment()
HAnimSegment570.setName("l_forearm")
HAnimSegment570.setDEF("hanim_l_forearm")
Transform571 = x3d.Transform()
Transform571.setTranslation(x3d.doubleToFloat([0.2014,1.1357,-0.0682]))
Transform572 = x3d.Transform()

Transform572.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape573 = x3d.Shape()
Shape573.setUSE("HAnimJointShape")

Transform572.addChild(Shape573)

Transform571.addChild(Transform572)

HAnimSegment570.addChild(Transform571)
Shape574 = x3d.Shape()
LineSet575 = x3d.LineSet()
LineSet575.setVertexCount([2])
Coordinate576 = x3d.Coordinate()
Coordinate576.setPoint(x3d.doubleToFloat([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]))

LineSet575.setCoord(Coordinate576)

LineSet575.addComments(x3d.CommentsBlock("""from l_elbow to l_radiocarpal vertices 2"""))
ColorRGBA577 = x3d.ColorRGBA()
ColorRGBA577.setUSE("HAnimSegmentLineColorRGBA")

LineSet575.setColor(ColorRGBA577)

Shape574.setGeometry(LineSet575)

HAnimSegment570.addChild(Shape574)
HAnimSite578 = x3d.HAnimSite()
HAnimSite578.setName("l_humeral_medial_epicondyles")
HAnimSite578.setDEF("hanim_l_humeral_medial_epicondyles")
HAnimSite578.setTranslation(x3d.doubleToFloat([0.1735,1.1272,-0.1113]))
TouchSensor579 = x3d.TouchSensor()
TouchSensor579.setDescription("HAnimSite 64 l_humeral_medial_epicondyles")

HAnimSite578.addChild(TouchSensor579)
Shape580 = x3d.Shape()
Shape580.setUSE("HAnimSiteShape")

HAnimSite578.addChild(Shape580)
Billboard581 = x3d.Billboard()
Shape582 = x3d.Shape()
Text583 = x3d.Text()
Text583.setString(["64"])
FontStyle584 = x3d.FontStyle()
FontStyle584.setSize(0.035)

Text583.setFontStyle(FontStyle584)

Shape582.setGeometry(Text583)

Billboard581.addChild(Shape582)

HAnimSite578.addChild(Billboard581)

HAnimSegment570.addChild(HAnimSite578)
HAnimSite585 = x3d.HAnimSite()
HAnimSite585.setName("l_olecranon")
HAnimSite585.setDEF("hanim_l_olecranon")
HAnimSite585.setTranslation(x3d.doubleToFloat([-0.1962,1.1375,-0.1123]))
TouchSensor586 = x3d.TouchSensor()
TouchSensor586.setDescription("HAnimSite 65 l_olecranon")

HAnimSite585.addChild(TouchSensor586)
Shape587 = x3d.Shape()
Shape587.setUSE("HAnimSiteShape")

HAnimSite585.addChild(Shape587)
Billboard588 = x3d.Billboard()
Shape589 = x3d.Shape()
Text590 = x3d.Text()
Text590.setString(["65"])
FontStyle591 = x3d.FontStyle()
FontStyle591.setSize(0.035)

Text590.setFontStyle(FontStyle591)

Shape589.setGeometry(Text590)

Billboard588.addChild(Shape589)

HAnimSite585.addChild(Billboard588)

HAnimSegment570.addChild(HAnimSite585)
HAnimSite592 = x3d.HAnimSite()
HAnimSite592.setName("l_radial_styloid")
HAnimSite592.setDEF("hanim_l_radial_styloid")
HAnimSite592.setTranslation(x3d.doubleToFloat([0.1901,0.8645,-0.0415]))
TouchSensor593 = x3d.TouchSensor()
TouchSensor593.setDescription("HAnimSite 71 l_radial_styloid")

HAnimSite592.addChild(TouchSensor593)
Shape594 = x3d.Shape()
Shape594.setUSE("HAnimSiteShape")

HAnimSite592.addChild(Shape594)
Billboard595 = x3d.Billboard()
Shape596 = x3d.Shape()
Text597 = x3d.Text()
Text597.setString(["71"])
FontStyle598 = x3d.FontStyle()
FontStyle598.setSize(0.035)

Text597.setFontStyle(FontStyle598)

Shape596.setGeometry(Text597)

Billboard595.addChild(Shape596)

HAnimSite592.addChild(Billboard595)

HAnimSegment570.addChild(HAnimSite592)
HAnimSite599 = x3d.HAnimSite()
HAnimSite599.setName("l_radiale")
HAnimSite599.setDEF("hanim_l_radiale")
HAnimSite599.setTranslation(x3d.doubleToFloat([0.2182,1.1212,-0.1167]))
TouchSensor600 = x3d.TouchSensor()
TouchSensor600.setDescription("HAnimSite 69 l_radiale")

HAnimSite599.addChild(TouchSensor600)
Shape601 = x3d.Shape()
Shape601.setUSE("HAnimSiteShape")

HAnimSite599.addChild(Shape601)
Billboard602 = x3d.Billboard()
Shape603 = x3d.Shape()
Text604 = x3d.Text()
Text604.setString(["69"])
FontStyle605 = x3d.FontStyle()
FontStyle605.setSize(0.035)

Text604.setFontStyle(FontStyle605)

Shape603.setGeometry(Text604)

Billboard602.addChild(Shape603)

HAnimSite599.addChild(Billboard602)

HAnimSegment570.addChild(HAnimSite599)

HAnimJoint569.addChild(HAnimSegment570)
HAnimJoint606 = x3d.HAnimJoint()
HAnimJoint606.setName("l_radiocarpal")
HAnimJoint606.setDEF("hanim_l_radiocarpal")
HAnimJoint606.setCenter(x3d.doubleToFloat([0.1984,0.8663,-0.0583]))
HAnimJoint606.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint606.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint569.addChild(HAnimJoint606)

HAnimJoint546.addChild(HAnimJoint569)

HAnimJoint325.addChild(HAnimJoint546)
HAnimJoint607 = x3d.HAnimJoint()
HAnimJoint607.setName("r_shoulder")
HAnimJoint607.setDEF("hanim_r_shoulder")
HAnimJoint607.setCenter(x3d.doubleToFloat([-0.1907,1.4407,-0.0325]))
HAnimJoint607.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint607.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment608 = x3d.HAnimSegment()
HAnimSegment608.setName("r_upperarm")
HAnimSegment608.setDEF("hanim_r_upperarm")
Transform609 = x3d.Transform()
Transform609.setTranslation(x3d.doubleToFloat([-0.1907,1.4407,-0.0325]))
Transform610 = x3d.Transform()

Transform610.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape611 = x3d.Shape()
Shape611.setUSE("HAnimJointShape")

Transform610.addChild(Shape611)

Transform609.addChild(Transform610)

HAnimSegment608.addChild(Transform609)
Shape612 = x3d.Shape()
LineSet613 = x3d.LineSet()
LineSet613.setVertexCount([2])
Coordinate614 = x3d.Coordinate()
Coordinate614.setPoint(x3d.doubleToFloat([-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]))

LineSet613.setCoord(Coordinate614)

LineSet613.addComments(x3d.CommentsBlock("""from r_shoulder to r_elbow vertices 2"""))
ColorRGBA615 = x3d.ColorRGBA()
ColorRGBA615.setUSE("HAnimSegmentLineColorRGBA")

LineSet613.setColor(ColorRGBA615)

Shape612.setGeometry(LineSet613)

HAnimSegment608.addChild(Shape612)
HAnimSite616 = x3d.HAnimSite()
HAnimSite616.setName("r_bideltoid")
HAnimSite616.setDEF("hanim_r_bideltoid")
TouchSensor617 = x3d.TouchSensor()
TouchSensor617.setDescription("HAnimSite 97 r_bideltoid")

HAnimSite616.addChild(TouchSensor617)
Shape618 = x3d.Shape()
Shape618.setUSE("HAnimSiteShape")

HAnimSite616.addChild(Shape618)
Billboard619 = x3d.Billboard()
Shape620 = x3d.Shape()
Text621 = x3d.Text()
Text621.setString(["97"])
FontStyle622 = x3d.FontStyle()
FontStyle622.setSize(0.035)

Text621.setFontStyle(FontStyle622)

Shape620.setGeometry(Text621)

Billboard619.addChild(Shape620)

HAnimSite616.addChild(Billboard619)

HAnimSegment608.addChild(HAnimSite616)
HAnimSite623 = x3d.HAnimSite()
HAnimSite623.setName("r_humeral_lateral_epicondyles")
HAnimSite623.setDEF("hanim_r_humeral_lateral_epicondyles")
HAnimSite623.setTranslation(x3d.doubleToFloat([-0.2224,1.1517,-0.1033]))
TouchSensor624 = x3d.TouchSensor()
TouchSensor624.setDescription("HAnimSite 66 r_humeral_lateral_epicondyles")

HAnimSite623.addChild(TouchSensor624)
Shape625 = x3d.Shape()
Shape625.setUSE("HAnimSiteShape")

HAnimSite623.addChild(Shape625)
Billboard626 = x3d.Billboard()
Shape627 = x3d.Shape()
Text628 = x3d.Text()
Text628.setString(["66"])
FontStyle629 = x3d.FontStyle()
FontStyle629.setSize(0.035)

Text628.setFontStyle(FontStyle629)

Shape627.setGeometry(Text628)

Billboard626.addChild(Shape627)

HAnimSite623.addChild(Billboard626)

HAnimSegment608.addChild(HAnimSite623)

HAnimJoint607.addChild(HAnimSegment608)
HAnimJoint630 = x3d.HAnimJoint()
HAnimJoint630.setName("r_elbow")
HAnimJoint630.setDEF("hanim_r_elbow")
HAnimJoint630.setCenter(x3d.doubleToFloat([-0.1949,1.1388,-0.062]))
HAnimJoint630.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint630.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment631 = x3d.HAnimSegment()
HAnimSegment631.setName("r_forearm")
HAnimSegment631.setDEF("hanim_r_forearm")
Transform632 = x3d.Transform()
Transform632.setTranslation(x3d.doubleToFloat([-0.1949,1.1388,-0.062]))
Transform633 = x3d.Transform()

Transform633.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape634 = x3d.Shape()
Shape634.setUSE("HAnimJointShape")

Transform633.addChild(Shape634)

Transform632.addChild(Transform633)

HAnimSegment631.addChild(Transform632)
Shape635 = x3d.Shape()
LineSet636 = x3d.LineSet()
LineSet636.setVertexCount([2])
Coordinate637 = x3d.Coordinate()
Coordinate637.setPoint(x3d.doubleToFloat([-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]))

LineSet636.setCoord(Coordinate637)

LineSet636.addComments(x3d.CommentsBlock("""from r_elbow to r_radiocarpal vertices 2"""))
ColorRGBA638 = x3d.ColorRGBA()
ColorRGBA638.setUSE("HAnimSegmentLineColorRGBA")

LineSet636.setColor(ColorRGBA638)

Shape635.setGeometry(LineSet636)

HAnimSegment631.addChild(Shape635)
HAnimSite639 = x3d.HAnimSite()
HAnimSite639.setName("r_humeral_medial_epicondyles")
HAnimSite639.setDEF("hanim_r_humeral_medial_epicondyles")
HAnimSite639.setTranslation(x3d.doubleToFloat([-0.168,1.1298,-0.1062]))
TouchSensor640 = x3d.TouchSensor()
TouchSensor640.setDescription("HAnimSite 67 r_humeral_medial_epicondyles")

HAnimSite639.addChild(TouchSensor640)
Shape641 = x3d.Shape()
Shape641.setUSE("HAnimSiteShape")

HAnimSite639.addChild(Shape641)
Billboard642 = x3d.Billboard()
Shape643 = x3d.Shape()
Text644 = x3d.Text()
Text644.setString(["67"])
FontStyle645 = x3d.FontStyle()
FontStyle645.setSize(0.035)

Text644.setFontStyle(FontStyle645)

Shape643.setGeometry(Text644)

Billboard642.addChild(Shape643)

HAnimSite639.addChild(Billboard642)

HAnimSegment631.addChild(HAnimSite639)
HAnimSite646 = x3d.HAnimSite()
HAnimSite646.setName("r_olecranon")
HAnimSite646.setDEF("hanim_r_olecranon")
HAnimSite646.setTranslation(x3d.doubleToFloat([-0.1907,1.1405,-0.1065]))
TouchSensor647 = x3d.TouchSensor()
TouchSensor647.setDescription("HAnimSite 68 r_olecranon")

HAnimSite646.addChild(TouchSensor647)
Shape648 = x3d.Shape()
Shape648.setUSE("HAnimSiteShape")

HAnimSite646.addChild(Shape648)
Billboard649 = x3d.Billboard()
Shape650 = x3d.Shape()
Text651 = x3d.Text()
Text651.setString(["68"])
FontStyle652 = x3d.FontStyle()
FontStyle652.setSize(0.035)

Text651.setFontStyle(FontStyle652)

Shape650.setGeometry(Text651)

Billboard649.addChild(Shape650)

HAnimSite646.addChild(Billboard649)

HAnimSegment631.addChild(HAnimSite646)
HAnimSite653 = x3d.HAnimSite()
HAnimSite653.setName("r_radial_styloid")
HAnimSite653.setDEF("hanim_r_radial_styloid")
HAnimSite653.setTranslation(x3d.doubleToFloat([-0.1884,0.8676,-0.036]))
TouchSensor654 = x3d.TouchSensor()
TouchSensor654.setDescription("HAnimSite 74 r_radial_styloid")

HAnimSite653.addChild(TouchSensor654)
Shape655 = x3d.Shape()
Shape655.setUSE("HAnimSiteShape")

HAnimSite653.addChild(Shape655)
Billboard656 = x3d.Billboard()
Shape657 = x3d.Shape()
Text658 = x3d.Text()
Text658.setString(["74"])
FontStyle659 = x3d.FontStyle()
FontStyle659.setSize(0.035)

Text658.setFontStyle(FontStyle659)

Shape657.setGeometry(Text658)

Billboard656.addChild(Shape657)

HAnimSite653.addChild(Billboard656)

HAnimSegment631.addChild(HAnimSite653)
HAnimSite660 = x3d.HAnimSite()
HAnimSite660.setName("r_radiale")
HAnimSite660.setDEF("hanim_r_radiale")
HAnimSite660.setTranslation(x3d.doubleToFloat([-0.213,1.1305,-0.1091]))
TouchSensor661 = x3d.TouchSensor()
TouchSensor661.setDescription("HAnimSite 72 r_radiale")

HAnimSite660.addChild(TouchSensor661)
Shape662 = x3d.Shape()
Shape662.setUSE("HAnimSiteShape")

HAnimSite660.addChild(Shape662)
Billboard663 = x3d.Billboard()
Shape664 = x3d.Shape()
Text665 = x3d.Text()
Text665.setString(["72"])
FontStyle666 = x3d.FontStyle()
FontStyle666.setSize(0.035)

Text665.setFontStyle(FontStyle666)

Shape664.setGeometry(Text665)

Billboard663.addChild(Shape664)

HAnimSite660.addChild(Billboard663)

HAnimSegment631.addChild(HAnimSite660)

HAnimJoint630.addChild(HAnimSegment631)
HAnimJoint667 = x3d.HAnimJoint()
HAnimJoint667.setName("r_radiocarpal")
HAnimJoint667.setDEF("hanim_r_radiocarpal")
HAnimJoint667.setCenter(x3d.doubleToFloat([-0.1959,0.8694,-0.0521]))
HAnimJoint667.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint667.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint630.addChild(HAnimJoint667)

HAnimJoint607.addChild(HAnimJoint630)

HAnimJoint325.addChild(HAnimJoint607)

HAnimJoint47.addChild(HAnimJoint325)

HAnimHumanoid38.addSkeleton(HAnimJoint47)
HAnimJoint668 = x3d.HAnimJoint()
HAnimJoint668.setContainerFieldOverride("joints")
HAnimJoint668.setUSE("hanim_humanoid_root")

HAnimHumanoid38.addJoints(HAnimJoint668)
HAnimJoint669 = x3d.HAnimJoint()
HAnimJoint669.setContainerFieldOverride("joints")
HAnimJoint669.setUSE("hanim_sacroiliac")

HAnimHumanoid38.addJoints(HAnimJoint669)
HAnimJoint670 = x3d.HAnimJoint()
HAnimJoint670.setContainerFieldOverride("joints")
HAnimJoint670.setUSE("hanim_l_hip")

HAnimHumanoid38.addJoints(HAnimJoint670)
HAnimJoint671 = x3d.HAnimJoint()
HAnimJoint671.setContainerFieldOverride("joints")
HAnimJoint671.setUSE("hanim_l_knee")

HAnimHumanoid38.addJoints(HAnimJoint671)
HAnimJoint672 = x3d.HAnimJoint()
HAnimJoint672.setContainerFieldOverride("joints")
HAnimJoint672.setUSE("hanim_l_talocrural")

HAnimHumanoid38.addJoints(HAnimJoint672)
HAnimJoint673 = x3d.HAnimJoint()
HAnimJoint673.setContainerFieldOverride("joints")
HAnimJoint673.setUSE("hanim_l_metatarsophalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint673)
HAnimJoint674 = x3d.HAnimJoint()
HAnimJoint674.setContainerFieldOverride("joints")
HAnimJoint674.setUSE("hanim_r_hip")

HAnimHumanoid38.addJoints(HAnimJoint674)
HAnimJoint675 = x3d.HAnimJoint()
HAnimJoint675.setContainerFieldOverride("joints")
HAnimJoint675.setUSE("hanim_r_knee")

HAnimHumanoid38.addJoints(HAnimJoint675)
HAnimJoint676 = x3d.HAnimJoint()
HAnimJoint676.setContainerFieldOverride("joints")
HAnimJoint676.setUSE("hanim_r_talocrural")

HAnimHumanoid38.addJoints(HAnimJoint676)
HAnimJoint677 = x3d.HAnimJoint()
HAnimJoint677.setContainerFieldOverride("joints")
HAnimJoint677.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint677)
HAnimJoint678 = x3d.HAnimJoint()
HAnimJoint678.setContainerFieldOverride("joints")
HAnimJoint678.setUSE("hanim_vl5")

HAnimHumanoid38.addJoints(HAnimJoint678)
HAnimJoint679 = x3d.HAnimJoint()
HAnimJoint679.setContainerFieldOverride("joints")
HAnimJoint679.setUSE("hanim_skullbase")

HAnimHumanoid38.addJoints(HAnimJoint679)
HAnimJoint680 = x3d.HAnimJoint()
HAnimJoint680.setContainerFieldOverride("joints")
HAnimJoint680.setUSE("hanim_l_shoulder")

HAnimHumanoid38.addJoints(HAnimJoint680)
HAnimJoint681 = x3d.HAnimJoint()
HAnimJoint681.setContainerFieldOverride("joints")
HAnimJoint681.setUSE("hanim_l_elbow")

HAnimHumanoid38.addJoints(HAnimJoint681)
HAnimJoint682 = x3d.HAnimJoint()
HAnimJoint682.setContainerFieldOverride("joints")
HAnimJoint682.setUSE("hanim_l_radiocarpal")

HAnimHumanoid38.addJoints(HAnimJoint682)
HAnimJoint683 = x3d.HAnimJoint()
HAnimJoint683.setContainerFieldOverride("joints")
HAnimJoint683.setUSE("hanim_r_shoulder")

HAnimHumanoid38.addJoints(HAnimJoint683)
HAnimJoint684 = x3d.HAnimJoint()
HAnimJoint684.setContainerFieldOverride("joints")
HAnimJoint684.setUSE("hanim_r_elbow")

HAnimHumanoid38.addJoints(HAnimJoint684)
HAnimJoint685 = x3d.HAnimJoint()
HAnimJoint685.setContainerFieldOverride("joints")
HAnimJoint685.setUSE("hanim_r_radiocarpal")

HAnimHumanoid38.addJoints(HAnimJoint685)
HAnimSegment686 = x3d.HAnimSegment()
HAnimSegment686.setContainerFieldOverride("segments")
HAnimSegment686.setUSE("hanim_sacrum")

HAnimHumanoid38.addSegments(HAnimSegment686)
HAnimSegment687 = x3d.HAnimSegment()
HAnimSegment687.setContainerFieldOverride("segments")
HAnimSegment687.setUSE("hanim_pelvis")

HAnimHumanoid38.addSegments(HAnimSegment687)
HAnimSegment688 = x3d.HAnimSegment()
HAnimSegment688.setContainerFieldOverride("segments")
HAnimSegment688.setUSE("hanim_l_thigh")

HAnimHumanoid38.addSegments(HAnimSegment688)
HAnimSegment689 = x3d.HAnimSegment()
HAnimSegment689.setContainerFieldOverride("segments")
HAnimSegment689.setUSE("hanim_l_calf")

HAnimHumanoid38.addSegments(HAnimSegment689)
HAnimSegment690 = x3d.HAnimSegment()
HAnimSegment690.setContainerFieldOverride("segments")
HAnimSegment690.setUSE("hanim_l_talus")

HAnimHumanoid38.addSegments(HAnimSegment690)
HAnimSegment691 = x3d.HAnimSegment()
HAnimSegment691.setContainerFieldOverride("segments")
HAnimSegment691.setUSE("hanim_r_thigh")

HAnimHumanoid38.addSegments(HAnimSegment691)
HAnimSegment692 = x3d.HAnimSegment()
HAnimSegment692.setContainerFieldOverride("segments")
HAnimSegment692.setUSE("hanim_r_calf")

HAnimHumanoid38.addSegments(HAnimSegment692)
HAnimSegment693 = x3d.HAnimSegment()
HAnimSegment693.setContainerFieldOverride("segments")
HAnimSegment693.setUSE("hanim_r_talus")

HAnimHumanoid38.addSegments(HAnimSegment693)
HAnimSegment694 = x3d.HAnimSegment()
HAnimSegment694.setContainerFieldOverride("segments")
HAnimSegment694.setUSE("hanim_l5")

HAnimHumanoid38.addSegments(HAnimSegment694)
HAnimSegment695 = x3d.HAnimSegment()
HAnimSegment695.setContainerFieldOverride("segments")
HAnimSegment695.setUSE("hanim_l_upperarm")

HAnimHumanoid38.addSegments(HAnimSegment695)
HAnimSegment696 = x3d.HAnimSegment()
HAnimSegment696.setContainerFieldOverride("segments")
HAnimSegment696.setUSE("hanim_l_forearm")

HAnimHumanoid38.addSegments(HAnimSegment696)
HAnimSegment697 = x3d.HAnimSegment()
HAnimSegment697.setContainerFieldOverride("segments")
HAnimSegment697.setUSE("hanim_r_upperarm")

HAnimHumanoid38.addSegments(HAnimSegment697)
HAnimSegment698 = x3d.HAnimSegment()
HAnimSegment698.setContainerFieldOverride("segments")
HAnimSegment698.setUSE("hanim_r_forearm")

HAnimHumanoid38.addSegments(HAnimSegment698)
HAnimSite699 = x3d.HAnimSite()
HAnimSite699.setContainerFieldOverride("sites")
HAnimSite699.setUSE("hanim_buttocks_standing_wall_contact_point")

HAnimHumanoid38.addSites(HAnimSite699)
HAnimSite700 = x3d.HAnimSite()
HAnimSite700.setContainerFieldOverride("sites")
HAnimSite700.setUSE("hanim_crotch")

HAnimHumanoid38.addSites(HAnimSite700)
HAnimSite701 = x3d.HAnimSite()
HAnimSite701.setContainerFieldOverride("sites")
HAnimSite701.setUSE("hanim_l_asis")

HAnimHumanoid38.addSites(HAnimSite701)
HAnimSite702 = x3d.HAnimSite()
HAnimSite702.setContainerFieldOverride("sites")
HAnimSite702.setUSE("hanim_l_iliocristale")

HAnimHumanoid38.addSites(HAnimSite702)
HAnimSite703 = x3d.HAnimSite()
HAnimSite703.setContainerFieldOverride("sites")
HAnimSite703.setUSE("hanim_l_psis")

HAnimHumanoid38.addSites(HAnimSite703)
HAnimSite704 = x3d.HAnimSite()
HAnimSite704.setContainerFieldOverride("sites")
HAnimSite704.setUSE("hanim_l_trochanterion")

HAnimHumanoid38.addSites(HAnimSite704)
HAnimSite705 = x3d.HAnimSite()
HAnimSite705.setContainerFieldOverride("sites")
HAnimSite705.setUSE("hanim_r_asis")

HAnimHumanoid38.addSites(HAnimSite705)
HAnimSite706 = x3d.HAnimSite()
HAnimSite706.setContainerFieldOverride("sites")
HAnimSite706.setUSE("hanim_r_iliocristale")

HAnimHumanoid38.addSites(HAnimSite706)
HAnimSite707 = x3d.HAnimSite()
HAnimSite707.setContainerFieldOverride("sites")
HAnimSite707.setUSE("hanim_r_psis")

HAnimHumanoid38.addSites(HAnimSite707)
HAnimSite708 = x3d.HAnimSite()
HAnimSite708.setContainerFieldOverride("sites")
HAnimSite708.setUSE("hanim_r_trochanterion")

HAnimHumanoid38.addSites(HAnimSite708)
HAnimSite709 = x3d.HAnimSite()
HAnimSite709.setContainerFieldOverride("sites")
HAnimSite709.setUSE("hanim_l_femoral_lateral_epicondyles")

HAnimHumanoid38.addSites(HAnimSite709)
HAnimSite710 = x3d.HAnimSite()
HAnimSite710.setContainerFieldOverride("sites")
HAnimSite710.setUSE("hanim_l_femoral_medial_epicondyles")

HAnimHumanoid38.addSites(HAnimSite710)
HAnimSite711 = x3d.HAnimSite()
HAnimSite711.setContainerFieldOverride("sites")
HAnimSite711.setUSE("hanim_l_knee_crease")

HAnimHumanoid38.addSites(HAnimSite711)
HAnimSite712 = x3d.HAnimSite()
HAnimSite712.setContainerFieldOverride("sites")
HAnimSite712.setUSE("hanim_l_suprapatella")

HAnimHumanoid38.addSites(HAnimSite712)
HAnimSite713 = x3d.HAnimSite()
HAnimSite713.setContainerFieldOverride("sites")
HAnimSite713.setUSE("hanim_l_lateral_malleolus")

HAnimHumanoid38.addSites(HAnimSite713)
HAnimSite714 = x3d.HAnimSite()
HAnimSite714.setContainerFieldOverride("sites")
HAnimSite714.setUSE("hanim_l_medial_malleolus")

HAnimHumanoid38.addSites(HAnimSite714)
HAnimSite715 = x3d.HAnimSite()
HAnimSite715.setContainerFieldOverride("sites")
HAnimSite715.setUSE("hanim_l_tibiale")

HAnimHumanoid38.addSites(HAnimSite715)
HAnimSite716 = x3d.HAnimSite()
HAnimSite716.setContainerFieldOverride("sites")
HAnimSite716.setUSE("hanim_l_calcaneus_posterior")

HAnimHumanoid38.addSites(HAnimSite716)
HAnimSite717 = x3d.HAnimSite()
HAnimSite717.setContainerFieldOverride("sites")
HAnimSite717.setUSE("hanim_l_sphyrion")

HAnimHumanoid38.addSites(HAnimSite717)
HAnimSite718 = x3d.HAnimSite()
HAnimSite718.setContainerFieldOverride("sites")
HAnimSite718.setUSE("hanim_r_femoral_lateral_epicondyles")

HAnimHumanoid38.addSites(HAnimSite718)
HAnimSite719 = x3d.HAnimSite()
HAnimSite719.setContainerFieldOverride("sites")
HAnimSite719.setUSE("hanim_r_femoral_medial_epicondyles")

HAnimHumanoid38.addSites(HAnimSite719)
HAnimSite720 = x3d.HAnimSite()
HAnimSite720.setContainerFieldOverride("sites")
HAnimSite720.setUSE("hanim_r_knee_crease")

HAnimHumanoid38.addSites(HAnimSite720)
HAnimSite721 = x3d.HAnimSite()
HAnimSite721.setContainerFieldOverride("sites")
HAnimSite721.setUSE("hanim_r_suprapatella")

HAnimHumanoid38.addSites(HAnimSite721)
HAnimSite722 = x3d.HAnimSite()
HAnimSite722.setContainerFieldOverride("sites")
HAnimSite722.setUSE("hanim_r_lateral_malleolus")

HAnimHumanoid38.addSites(HAnimSite722)
HAnimSite723 = x3d.HAnimSite()
HAnimSite723.setContainerFieldOverride("sites")
HAnimSite723.setUSE("hanim_r_medial_malleolus")

HAnimHumanoid38.addSites(HAnimSite723)
HAnimSite724 = x3d.HAnimSite()
HAnimSite724.setContainerFieldOverride("sites")
HAnimSite724.setUSE("hanim_r_tibiale")

HAnimHumanoid38.addSites(HAnimSite724)
HAnimSite725 = x3d.HAnimSite()
HAnimSite725.setContainerFieldOverride("sites")
HAnimSite725.setUSE("hanim_r_calcaneus_posterior")

HAnimHumanoid38.addSites(HAnimSite725)
HAnimSite726 = x3d.HAnimSite()
HAnimSite726.setContainerFieldOverride("sites")
HAnimSite726.setUSE("hanim_r_sphyrion")

HAnimHumanoid38.addSites(HAnimSite726)
HAnimSite727 = x3d.HAnimSite()
HAnimSite727.setContainerFieldOverride("sites")
HAnimSite727.setUSE("hanim_adams_apple")

HAnimHumanoid38.addSites(HAnimSite727)
HAnimSite728 = x3d.HAnimSite()
HAnimSite728.setContainerFieldOverride("sites")
HAnimSite728.setUSE("hanim_cervicale")

HAnimHumanoid38.addSites(HAnimSite728)
HAnimSite729 = x3d.HAnimSite()
HAnimSite729.setContainerFieldOverride("sites")
HAnimSite729.setUSE("hanim_l_acromion")

HAnimHumanoid38.addSites(HAnimSite729)
HAnimSite730 = x3d.HAnimSite()
HAnimSite730.setContainerFieldOverride("sites")
HAnimSite730.setUSE("hanim_l_axilla_distal")

HAnimHumanoid38.addSites(HAnimSite730)
HAnimSite731 = x3d.HAnimSite()
HAnimSite731.setContainerFieldOverride("sites")
HAnimSite731.setUSE("hanim_l_axilla_posterior_folds")

HAnimHumanoid38.addSites(HAnimSite731)
HAnimSite732 = x3d.HAnimSite()
HAnimSite732.setContainerFieldOverride("sites")
HAnimSite732.setUSE("hanim_l_axilla_proximal")

HAnimHumanoid38.addSites(HAnimSite732)
HAnimSite733 = x3d.HAnimSite()
HAnimSite733.setContainerFieldOverride("sites")
HAnimSite733.setUSE("hanim_l_chest_midsagittal_plane")

HAnimHumanoid38.addSites(HAnimSite733)
HAnimSite734 = x3d.HAnimSite()
HAnimSite734.setContainerFieldOverride("sites")
HAnimSite734.setUSE("hanim_l_clavicale")

HAnimHumanoid38.addSites(HAnimSite734)
HAnimSite735 = x3d.HAnimSite()
HAnimSite735.setContainerFieldOverride("sites")
HAnimSite735.setUSE("hanim_l_neck_base")

HAnimHumanoid38.addSites(HAnimSite735)
HAnimSite736 = x3d.HAnimSite()
HAnimSite736.setContainerFieldOverride("sites")
HAnimSite736.setUSE("hanim_l_rib10")

HAnimHumanoid38.addSites(HAnimSite736)
HAnimSite737 = x3d.HAnimSite()
HAnimSite737.setContainerFieldOverride("sites")
HAnimSite737.setUSE("hanim_l_thelion")

HAnimHumanoid38.addSites(HAnimSite737)
HAnimSite738 = x3d.HAnimSite()
HAnimSite738.setContainerFieldOverride("sites")
HAnimSite738.setUSE("hanim_mesosternale")

HAnimHumanoid38.addSites(HAnimSite738)
HAnimSite739 = x3d.HAnimSite()
HAnimSite739.setContainerFieldOverride("sites")
HAnimSite739.setUSE("hanim_navel")

HAnimHumanoid38.addSites(HAnimSite739)
HAnimSite740 = x3d.HAnimSite()
HAnimSite740.setContainerFieldOverride("sites")
HAnimSite740.setUSE("hanim_r_acromion")

HAnimHumanoid38.addSites(HAnimSite740)
HAnimSite741 = x3d.HAnimSite()
HAnimSite741.setContainerFieldOverride("sites")
HAnimSite741.setUSE("hanim_r_axilla_distal")

HAnimHumanoid38.addSites(HAnimSite741)
HAnimSite742 = x3d.HAnimSite()
HAnimSite742.setContainerFieldOverride("sites")
HAnimSite742.setUSE("hanim_r_axilla_posterior_folds")

HAnimHumanoid38.addSites(HAnimSite742)
HAnimSite743 = x3d.HAnimSite()
HAnimSite743.setContainerFieldOverride("sites")
HAnimSite743.setUSE("hanim_r_axilla_proximal")

HAnimHumanoid38.addSites(HAnimSite743)
HAnimSite744 = x3d.HAnimSite()
HAnimSite744.setContainerFieldOverride("sites")
HAnimSite744.setUSE("hanim_r_chest_midsagittal_plane")

HAnimHumanoid38.addSites(HAnimSite744)
HAnimSite745 = x3d.HAnimSite()
HAnimSite745.setContainerFieldOverride("sites")
HAnimSite745.setUSE("hanim_r_clavicale")

HAnimHumanoid38.addSites(HAnimSite745)
HAnimSite746 = x3d.HAnimSite()
HAnimSite746.setContainerFieldOverride("sites")
HAnimSite746.setUSE("hanim_r_neck_base")

HAnimHumanoid38.addSites(HAnimSite746)
HAnimSite747 = x3d.HAnimSite()
HAnimSite747.setContainerFieldOverride("sites")
HAnimSite747.setUSE("hanim_r_rib10")

HAnimHumanoid38.addSites(HAnimSite747)
HAnimSite748 = x3d.HAnimSite()
HAnimSite748.setContainerFieldOverride("sites")
HAnimSite748.setUSE("hanim_r_thelion")

HAnimHumanoid38.addSites(HAnimSite748)
HAnimSite749 = x3d.HAnimSite()
HAnimSite749.setContainerFieldOverride("sites")
HAnimSite749.setUSE("hanim_rear_center_midsagittal_plane")

HAnimHumanoid38.addSites(HAnimSite749)
HAnimSite750 = x3d.HAnimSite()
HAnimSite750.setContainerFieldOverride("sites")
HAnimSite750.setUSE("hanim_spine_1_middle_back")

HAnimHumanoid38.addSites(HAnimSite750)
HAnimSite751 = x3d.HAnimSite()
HAnimSite751.setContainerFieldOverride("sites")
HAnimSite751.setUSE("hanim_spine_2_middle_back")

HAnimHumanoid38.addSites(HAnimSite751)
HAnimSite752 = x3d.HAnimSite()
HAnimSite752.setContainerFieldOverride("sites")
HAnimSite752.setUSE("hanim_substernale")

HAnimHumanoid38.addSites(HAnimSite752)
HAnimSite753 = x3d.HAnimSite()
HAnimSite753.setContainerFieldOverride("sites")
HAnimSite753.setUSE("hanim_suprasternale")

HAnimHumanoid38.addSites(HAnimSite753)
HAnimSite754 = x3d.HAnimSite()
HAnimSite754.setContainerFieldOverride("sites")
HAnimSite754.setUSE("hanim_waist_preferred_anterior")

HAnimHumanoid38.addSites(HAnimSite754)
HAnimSite755 = x3d.HAnimSite()
HAnimSite755.setContainerFieldOverride("sites")
HAnimSite755.setUSE("hanim_waist_preferred_posterior")

HAnimHumanoid38.addSites(HAnimSite755)
HAnimSite756 = x3d.HAnimSite()
HAnimSite756.setContainerFieldOverride("sites")
HAnimSite756.setUSE("hanim_l_bideltoid")

HAnimHumanoid38.addSites(HAnimSite756)
HAnimSite757 = x3d.HAnimSite()
HAnimSite757.setContainerFieldOverride("sites")
HAnimSite757.setUSE("hanim_l_humeral_lateral_epicondyles")

HAnimHumanoid38.addSites(HAnimSite757)
HAnimSite758 = x3d.HAnimSite()
HAnimSite758.setContainerFieldOverride("sites")
HAnimSite758.setUSE("hanim_l_humeral_medial_epicondyles")

HAnimHumanoid38.addSites(HAnimSite758)
HAnimSite759 = x3d.HAnimSite()
HAnimSite759.setContainerFieldOverride("sites")
HAnimSite759.setUSE("hanim_l_olecranon")

HAnimHumanoid38.addSites(HAnimSite759)
HAnimSite760 = x3d.HAnimSite()
HAnimSite760.setContainerFieldOverride("sites")
HAnimSite760.setUSE("hanim_l_radial_styloid")

HAnimHumanoid38.addSites(HAnimSite760)
HAnimSite761 = x3d.HAnimSite()
HAnimSite761.setContainerFieldOverride("sites")
HAnimSite761.setUSE("hanim_l_radiale")

HAnimHumanoid38.addSites(HAnimSite761)
HAnimSite762 = x3d.HAnimSite()
HAnimSite762.setContainerFieldOverride("sites")
HAnimSite762.setUSE("hanim_r_bideltoid")

HAnimHumanoid38.addSites(HAnimSite762)
HAnimSite763 = x3d.HAnimSite()
HAnimSite763.setContainerFieldOverride("sites")
HAnimSite763.setUSE("hanim_r_humeral_lateral_epicondyles")

HAnimHumanoid38.addSites(HAnimSite763)
HAnimSite764 = x3d.HAnimSite()
HAnimSite764.setContainerFieldOverride("sites")
HAnimSite764.setUSE("hanim_r_humeral_medial_epicondyles")

HAnimHumanoid38.addSites(HAnimSite764)
HAnimSite765 = x3d.HAnimSite()
HAnimSite765.setContainerFieldOverride("sites")
HAnimSite765.setUSE("hanim_r_olecranon")

HAnimHumanoid38.addSites(HAnimSite765)
HAnimSite766 = x3d.HAnimSite()
HAnimSite766.setContainerFieldOverride("sites")
HAnimSite766.setUSE("hanim_r_radial_styloid")

HAnimHumanoid38.addSites(HAnimSite766)
HAnimSite767 = x3d.HAnimSite()
HAnimSite767.setContainerFieldOverride("sites")
HAnimSite767.setUSE("hanim_r_radiale")

HAnimHumanoid38.addSites(HAnimSite767)

Scene11.addChild(HAnimHumanoid38)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/Humanoid1.new.graalpy.x3d")
X3D0.toFileJSON("../data/Humanoid1.new.graalpy.x3dj")
