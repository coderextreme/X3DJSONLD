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
meta3.setContent("Humanoid4.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("identifier")
meta4.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4.x3d")

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
Coordinate217.setPoint(x3d.doubleToFloat([0.1101,0.0656,-0.0736,0.0781,0.0283,-0.097]))

LineSet216.setCoord(Coordinate217)

LineSet216.addComments(x3d.CommentsBlock("""from l_talocrural to l_talocalcaneonavicular vertices 2"""))
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
Shape233 = x3d.Shape()
LineSet234 = x3d.LineSet()
LineSet234.setVertexCount([2])
Coordinate235 = x3d.Coordinate()
Coordinate235.setPoint(x3d.doubleToFloat([0.1101,0.0656,-0.0736,0.0889,0.0494,-0.1278]))

LineSet234.setCoord(Coordinate235)

LineSet234.addComments(x3d.CommentsBlock("""from l_talocrural to l_calcaneocuboid vertices 2"""))
ColorRGBA236 = x3d.ColorRGBA()
ColorRGBA236.setUSE("HAnimSegmentLineColorRGBA")

LineSet234.setColor(ColorRGBA236)

Shape233.setGeometry(LineSet234)

HAnimSegment211.addChild(Shape233)

HAnimJoint210.addChild(HAnimSegment211)
HAnimJoint237 = x3d.HAnimJoint()
HAnimJoint237.setName("l_talocalcaneonavicular")
HAnimJoint237.setDEF("hanim_l_talocalcaneonavicular")
HAnimJoint237.setCenter(x3d.doubleToFloat([0.0781,0.0283,-0.097]))
HAnimJoint237.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint237.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment238 = x3d.HAnimSegment()
HAnimSegment238.setName("l_navicular")
HAnimSegment238.setDEF("hanim_l_navicular")
Transform239 = x3d.Transform()
Transform239.setTranslation(x3d.doubleToFloat([0.0781,0.0283,-0.097]))
Transform240 = x3d.Transform()

Transform240.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape241 = x3d.Shape()
Shape241.setUSE("HAnimJointShape")

Transform240.addChild(Shape241)

Transform239.addChild(Transform240)

HAnimSegment238.addChild(Transform239)
Shape242 = x3d.Shape()
LineSet243 = x3d.LineSet()
LineSet243.setVertexCount([2])
Coordinate244 = x3d.Coordinate()
Coordinate244.setPoint(x3d.doubleToFloat([0.0781,0.0283,-0.097,0.0672,0.0235,-0.0835]))

LineSet243.setCoord(Coordinate244)

LineSet243.addComments(x3d.CommentsBlock("""from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2"""))
ColorRGBA245 = x3d.ColorRGBA()
ColorRGBA245.setUSE("HAnimSegmentLineColorRGBA")

LineSet243.setColor(ColorRGBA245)

Shape242.setGeometry(LineSet243)

HAnimSegment238.addChild(Shape242)
Shape246 = x3d.Shape()
LineSet247 = x3d.LineSet()
LineSet247.setVertexCount([2])
Coordinate248 = x3d.Coordinate()
Coordinate248.setPoint(x3d.doubleToFloat([0.0781,0.0283,-0.097,0.0812,0.025,-0.0805]))

LineSet247.setCoord(Coordinate248)

LineSet247.addComments(x3d.CommentsBlock("""from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2"""))
ColorRGBA249 = x3d.ColorRGBA()
ColorRGBA249.setUSE("HAnimSegmentLineColorRGBA")

LineSet247.setColor(ColorRGBA249)

Shape246.setGeometry(LineSet247)

HAnimSegment238.addChild(Shape246)
Shape250 = x3d.Shape()
LineSet251 = x3d.LineSet()
LineSet251.setVertexCount([2])
Coordinate252 = x3d.Coordinate()
Coordinate252.setPoint(x3d.doubleToFloat([0.0781,0.0283,-0.097,0.0928,0.0248,-0.0821]))

LineSet251.setCoord(Coordinate252)

LineSet251.addComments(x3d.CommentsBlock("""from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2"""))
ColorRGBA253 = x3d.ColorRGBA()
ColorRGBA253.setUSE("HAnimSegmentLineColorRGBA")

LineSet251.setColor(ColorRGBA253)

Shape250.setGeometry(LineSet251)

HAnimSegment238.addChild(Shape250)

HAnimJoint237.addChild(HAnimSegment238)
HAnimJoint254 = x3d.HAnimJoint()
HAnimJoint254.setName("l_cuneonavicular_1")
HAnimJoint254.setDEF("hanim_l_cuneonavicular_1")
HAnimJoint254.setCenter(x3d.doubleToFloat([0.0672,0.0235,-0.0835]))
HAnimJoint254.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint254.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment255 = x3d.HAnimSegment()
HAnimSegment255.setName("l_cuneiform_1")
HAnimSegment255.setDEF("hanim_l_cuneiform_1")
Transform256 = x3d.Transform()
Transform256.setTranslation(x3d.doubleToFloat([0.0672,0.0235,-0.0835]))
Transform257 = x3d.Transform()

Transform257.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape258 = x3d.Shape()
Shape258.setUSE("HAnimJointShape")

Transform257.addChild(Shape258)

Transform256.addChild(Transform257)

HAnimSegment255.addChild(Transform256)
Shape259 = x3d.Shape()
LineSet260 = x3d.LineSet()
LineSet260.setVertexCount([2])
Coordinate261 = x3d.Coordinate()
Coordinate261.setPoint(x3d.doubleToFloat([0.0672,0.0235,-0.0835,0.0644,0.0147,-0.0577]))

LineSet260.setCoord(Coordinate261)

LineSet260.addComments(x3d.CommentsBlock("""from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2"""))
ColorRGBA262 = x3d.ColorRGBA()
ColorRGBA262.setUSE("HAnimSegmentLineColorRGBA")

LineSet260.setColor(ColorRGBA262)

Shape259.setGeometry(LineSet260)

HAnimSegment255.addChild(Shape259)

HAnimJoint254.addChild(HAnimSegment255)
HAnimJoint263 = x3d.HAnimJoint()
HAnimJoint263.setName("l_tarsometatarsal_1")
HAnimJoint263.setDEF("hanim_l_tarsometatarsal_1")
HAnimJoint263.setCenter(x3d.doubleToFloat([0.0644,0.0147,-0.0577]))
HAnimJoint263.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint263.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment264 = x3d.HAnimSegment()
HAnimSegment264.setName("l_metatarsal_1")
HAnimSegment264.setDEF("hanim_l_metatarsal_1")
Transform265 = x3d.Transform()
Transform265.setTranslation(x3d.doubleToFloat([0.0644,0.0147,-0.0577]))
Transform266 = x3d.Transform()

Transform266.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape267 = x3d.Shape()
Shape267.setUSE("HAnimJointShape")

Transform266.addChild(Shape267)

Transform265.addChild(Transform266)

HAnimSegment264.addChild(Transform265)
Shape268 = x3d.Shape()
LineSet269 = x3d.LineSet()
LineSet269.setVertexCount([2])
Coordinate270 = x3d.Coordinate()
Coordinate270.setPoint(x3d.doubleToFloat([0.0644,0.0147,-0.0577,0.0619,0.0059,-0.0083]))

LineSet269.setCoord(Coordinate270)

LineSet269.addComments(x3d.CommentsBlock("""from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2"""))
ColorRGBA271 = x3d.ColorRGBA()
ColorRGBA271.setUSE("HAnimSegmentLineColorRGBA")

LineSet269.setColor(ColorRGBA271)

Shape268.setGeometry(LineSet269)

HAnimSegment264.addChild(Shape268)

HAnimJoint263.addChild(HAnimSegment264)
HAnimJoint272 = x3d.HAnimJoint()
HAnimJoint272.setName("l_metatarsophalangeal_1")
HAnimJoint272.setDEF("hanim_l_metatarsophalangeal_1")
HAnimJoint272.setCenter(x3d.doubleToFloat([0.0619,0.0059,-0.0083]))
HAnimJoint272.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint272.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment273 = x3d.HAnimSegment()
HAnimSegment273.setName("l_tarsal_proximal_phalanx_1")
HAnimSegment273.setDEF("hanim_l_tarsal_proximal_phalanx_1")
Transform274 = x3d.Transform()
Transform274.setTranslation(x3d.doubleToFloat([0.0619,0.0059,-0.0083]))
Transform275 = x3d.Transform()

Transform275.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape276 = x3d.Shape()
Shape276.setUSE("HAnimJointShape")

Transform275.addChild(Shape276)

Transform274.addChild(Transform275)

HAnimSegment273.addChild(Transform274)
Shape277 = x3d.Shape()
LineSet278 = x3d.LineSet()
LineSet278.setVertexCount([2])
Coordinate279 = x3d.Coordinate()
Coordinate279.setPoint(x3d.doubleToFloat([0.0619,0.0059,-0.0083,0.0619,0.0059,-0.0083]))

LineSet278.setCoord(Coordinate279)

LineSet278.addComments(x3d.CommentsBlock("""from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2"""))
ColorRGBA280 = x3d.ColorRGBA()
ColorRGBA280.setUSE("HAnimSegmentLineColorRGBA")

LineSet278.setColor(ColorRGBA280)

Shape277.setGeometry(LineSet278)

HAnimSegment273.addChild(Shape277)
HAnimSite281 = x3d.HAnimSite()
HAnimSite281.setName("l_metatarsal_phalanx_1")
HAnimSite281.setDEF("hanim_l_metatarsal_phalanx_1")
TouchSensor282 = x3d.TouchSensor()
TouchSensor282.setDescription("HAnimSite 55 l_metatarsal_phalanx_1")

HAnimSite281.addChild(TouchSensor282)
Shape283 = x3d.Shape()
Shape283.setUSE("HAnimSiteShape")

HAnimSite281.addChild(Shape283)
Billboard284 = x3d.Billboard()
Shape285 = x3d.Shape()
Text286 = x3d.Text()
Text286.setString(["55"])
FontStyle287 = x3d.FontStyle()
FontStyle287.setSize(0.035)

Text286.setFontStyle(FontStyle287)

Shape285.setGeometry(Text286)

Billboard284.addChild(Shape285)

HAnimSite281.addChild(Billboard284)

HAnimSegment273.addChild(HAnimSite281)

HAnimJoint272.addChild(HAnimSegment273)
HAnimJoint288 = x3d.HAnimJoint()
HAnimJoint288.setName("l_tarsal_interphalangeal_1")
HAnimJoint288.setDEF("hanim_l_tarsal_interphalangeal_1")
HAnimJoint288.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint288.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint272.addChild(HAnimJoint288)

HAnimJoint263.addChild(HAnimJoint272)

HAnimJoint254.addChild(HAnimJoint263)

HAnimJoint237.addChild(HAnimJoint254)
HAnimJoint289 = x3d.HAnimJoint()
HAnimJoint289.setName("l_cuneonavicular_2")
HAnimJoint289.setDEF("hanim_l_cuneonavicular_2")
HAnimJoint289.setCenter(x3d.doubleToFloat([0.0812,0.025,-0.0805]))
HAnimJoint289.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint289.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment290 = x3d.HAnimSegment()
HAnimSegment290.setName("l_cuneiform_2")
HAnimSegment290.setDEF("hanim_l_cuneiform_2")
Transform291 = x3d.Transform()
Transform291.setTranslation(x3d.doubleToFloat([0.0812,0.025,-0.0805]))
Transform292 = x3d.Transform()

Transform292.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape293 = x3d.Shape()
Shape293.setUSE("HAnimJointShape")

Transform292.addChild(Shape293)

Transform291.addChild(Transform292)

HAnimSegment290.addChild(Transform291)
Shape294 = x3d.Shape()
LineSet295 = x3d.LineSet()
LineSet295.setVertexCount([2])
Coordinate296 = x3d.Coordinate()
Coordinate296.setPoint(x3d.doubleToFloat([0.0812,0.025,-0.0805,0.08,0.0175,-0.0608]))

LineSet295.setCoord(Coordinate296)

LineSet295.addComments(x3d.CommentsBlock("""from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2"""))
ColorRGBA297 = x3d.ColorRGBA()
ColorRGBA297.setUSE("HAnimSegmentLineColorRGBA")

LineSet295.setColor(ColorRGBA297)

Shape294.setGeometry(LineSet295)

HAnimSegment290.addChild(Shape294)

HAnimJoint289.addChild(HAnimSegment290)
HAnimJoint298 = x3d.HAnimJoint()
HAnimJoint298.setName("l_tarsometatarsal_2")
HAnimJoint298.setDEF("hanim_l_tarsometatarsal_2")
HAnimJoint298.setCenter(x3d.doubleToFloat([0.08,0.0175,-0.0608]))
HAnimJoint298.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint298.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment299 = x3d.HAnimSegment()
HAnimSegment299.setName("l_metatarsal_2")
HAnimSegment299.setDEF("hanim_l_metatarsal_2")
Transform300 = x3d.Transform()
Transform300.setTranslation(x3d.doubleToFloat([0.08,0.0175,-0.0608]))
Transform301 = x3d.Transform()

Transform301.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape302 = x3d.Shape()
Shape302.setUSE("HAnimJointShape")

Transform301.addChild(Shape302)

Transform300.addChild(Transform301)

HAnimSegment299.addChild(Transform300)
Shape303 = x3d.Shape()
LineSet304 = x3d.LineSet()
LineSet304.setVertexCount([2])
Coordinate305 = x3d.Coordinate()
Coordinate305.setPoint(x3d.doubleToFloat([0.08,0.0175,-0.0608,0.0824,0.0064,-0.004]))

LineSet304.setCoord(Coordinate305)

LineSet304.addComments(x3d.CommentsBlock("""from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2"""))
ColorRGBA306 = x3d.ColorRGBA()
ColorRGBA306.setUSE("HAnimSegmentLineColorRGBA")

LineSet304.setColor(ColorRGBA306)

Shape303.setGeometry(LineSet304)

HAnimSegment299.addChild(Shape303)

HAnimJoint298.addChild(HAnimSegment299)
HAnimJoint307 = x3d.HAnimJoint()
HAnimJoint307.setName("l_metatarsophalangeal_2")
HAnimJoint307.setDEF("hanim_l_metatarsophalangeal_2")
HAnimJoint307.setCenter(x3d.doubleToFloat([0.0824,0.0064,-0.004]))
HAnimJoint307.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint307.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment308 = x3d.HAnimSegment()
HAnimSegment308.setName("l_tarsal_proximal_phalanx_2")
HAnimSegment308.setDEF("hanim_l_tarsal_proximal_phalanx_2")
Transform309 = x3d.Transform()
Transform309.setTranslation(x3d.doubleToFloat([0.0824,0.0064,-0.004]))
Transform310 = x3d.Transform()

Transform310.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape311 = x3d.Shape()
Shape311.setUSE("HAnimJointShape")

Transform310.addChild(Shape311)

Transform309.addChild(Transform310)

HAnimSegment308.addChild(Transform309)
Shape312 = x3d.Shape()
LineSet313 = x3d.LineSet()
LineSet313.setVertexCount([2])
Coordinate314 = x3d.Coordinate()
Coordinate314.setPoint(x3d.doubleToFloat([0.0824,0.0064,-0.004,0.0841,0.0041,0.0121]))

LineSet313.setCoord(Coordinate314)

LineSet313.addComments(x3d.CommentsBlock("""from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2"""))
ColorRGBA315 = x3d.ColorRGBA()
ColorRGBA315.setUSE("HAnimSegmentLineColorRGBA")

LineSet313.setColor(ColorRGBA315)

Shape312.setGeometry(LineSet313)

HAnimSegment308.addChild(Shape312)

HAnimJoint307.addChild(HAnimSegment308)
HAnimJoint316 = x3d.HAnimJoint()
HAnimJoint316.setName("l_tarsal_proximal_interphalangeal_2")
HAnimJoint316.setDEF("hanim_l_tarsal_proximal_interphalangeal_2")
HAnimJoint316.setCenter(x3d.doubleToFloat([0.0841,0.0041,0.0121]))
HAnimJoint316.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint316.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment317 = x3d.HAnimSegment()
HAnimSegment317.setName("l_tarsal_middle_phalanx_2")
HAnimSegment317.setDEF("hanim_l_tarsal_middle_phalanx_2")
Transform318 = x3d.Transform()
Transform318.setTranslation(x3d.doubleToFloat([0.0841,0.0041,0.0121]))
Transform319 = x3d.Transform()

Transform319.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape320 = x3d.Shape()
Shape320.setUSE("HAnimJointShape")

Transform319.addChild(Shape320)

Transform318.addChild(Transform319)

HAnimSegment317.addChild(Transform318)
Shape321 = x3d.Shape()
LineSet322 = x3d.LineSet()
LineSet322.setVertexCount([2])
Coordinate323 = x3d.Coordinate()
Coordinate323.setPoint(x3d.doubleToFloat([0.0841,0.0041,0.0121,0.0841,0.0013,0.0216]))

LineSet322.setCoord(Coordinate323)

LineSet322.addComments(x3d.CommentsBlock("""from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2"""))
ColorRGBA324 = x3d.ColorRGBA()
ColorRGBA324.setUSE("HAnimSegmentLineColorRGBA")

LineSet322.setColor(ColorRGBA324)

Shape321.setGeometry(LineSet322)

HAnimSegment317.addChild(Shape321)

HAnimJoint316.addChild(HAnimSegment317)
HAnimJoint325 = x3d.HAnimJoint()
HAnimJoint325.setName("l_tarsal_distal_interphalangeal_2")
HAnimJoint325.setDEF("hanim_l_tarsal_distal_interphalangeal_2")
HAnimJoint325.setCenter(x3d.doubleToFloat([0.0841,0.0013,0.0216]))
HAnimJoint325.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint325.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint316.addChild(HAnimJoint325)

HAnimJoint307.addChild(HAnimJoint316)

HAnimJoint298.addChild(HAnimJoint307)

HAnimJoint289.addChild(HAnimJoint298)

HAnimJoint237.addChild(HAnimJoint289)
HAnimJoint326 = x3d.HAnimJoint()
HAnimJoint326.setName("l_cuneonavicular_3")
HAnimJoint326.setDEF("hanim_l_cuneonavicular_3")
HAnimJoint326.setCenter(x3d.doubleToFloat([0.0928,0.0248,-0.0821]))
HAnimJoint326.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint326.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment327 = x3d.HAnimSegment()
HAnimSegment327.setName("l_cuneiform_3")
HAnimSegment327.setDEF("hanim_l_cuneiform_3")
Transform328 = x3d.Transform()
Transform328.setTranslation(x3d.doubleToFloat([0.0928,0.0248,-0.0821]))
Transform329 = x3d.Transform()

Transform329.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape330 = x3d.Shape()
Shape330.setUSE("HAnimJointShape")

Transform329.addChild(Shape330)

Transform328.addChild(Transform329)

HAnimSegment327.addChild(Transform328)
Shape331 = x3d.Shape()
LineSet332 = x3d.LineSet()
LineSet332.setVertexCount([2])
Coordinate333 = x3d.Coordinate()
Coordinate333.setPoint(x3d.doubleToFloat([0.0928,0.0248,-0.0821,0.0944,0.0175,-0.0625]))

LineSet332.setCoord(Coordinate333)

LineSet332.addComments(x3d.CommentsBlock("""from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2"""))
ColorRGBA334 = x3d.ColorRGBA()
ColorRGBA334.setUSE("HAnimSegmentLineColorRGBA")

LineSet332.setColor(ColorRGBA334)

Shape331.setGeometry(LineSet332)

HAnimSegment327.addChild(Shape331)

HAnimJoint326.addChild(HAnimSegment327)
HAnimJoint335 = x3d.HAnimJoint()
HAnimJoint335.setName("l_tarsometatarsal_3")
HAnimJoint335.setDEF("hanim_l_tarsometatarsal_3")
HAnimJoint335.setCenter(x3d.doubleToFloat([0.0944,0.0175,-0.0625]))
HAnimJoint335.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint335.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment336 = x3d.HAnimSegment()
HAnimSegment336.setName("l_metatarsal_3")
HAnimSegment336.setDEF("hanim_l_metatarsal_3")
Transform337 = x3d.Transform()
Transform337.setTranslation(x3d.doubleToFloat([0.0944,0.0175,-0.0625]))
Transform338 = x3d.Transform()

Transform338.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape339 = x3d.Shape()
Shape339.setUSE("HAnimJointShape")

Transform338.addChild(Shape339)

Transform337.addChild(Transform338)

HAnimSegment336.addChild(Transform337)
Shape340 = x3d.Shape()
LineSet341 = x3d.LineSet()
LineSet341.setVertexCount([2])
Coordinate342 = x3d.Coordinate()
Coordinate342.setPoint(x3d.doubleToFloat([0.0944,0.0175,-0.0625,0.0963,0.0065,-0.0065]))

LineSet341.setCoord(Coordinate342)

LineSet341.addComments(x3d.CommentsBlock("""from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 2"""))
ColorRGBA343 = x3d.ColorRGBA()
ColorRGBA343.setUSE("HAnimSegmentLineColorRGBA")

LineSet341.setColor(ColorRGBA343)

Shape340.setGeometry(LineSet341)

HAnimSegment336.addChild(Shape340)

HAnimJoint335.addChild(HAnimSegment336)
HAnimJoint344 = x3d.HAnimJoint()
HAnimJoint344.setName("l_metatarsophalangeal_3")
HAnimJoint344.setDEF("hanim_l_metatarsophalangeal_3")
HAnimJoint344.setCenter(x3d.doubleToFloat([0.0963,0.0065,-0.0065]))
HAnimJoint344.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint344.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment345 = x3d.HAnimSegment()
HAnimSegment345.setName("l_tarsal_proximal_phalanx_3")
HAnimSegment345.setDEF("hanim_l_tarsal_proximal_phalanx_3")
Transform346 = x3d.Transform()
Transform346.setTranslation(x3d.doubleToFloat([0.0963,0.0065,-0.0065]))
Transform347 = x3d.Transform()

Transform347.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape348 = x3d.Shape()
Shape348.setUSE("HAnimJointShape")

Transform347.addChild(Shape348)

Transform346.addChild(Transform347)

HAnimSegment345.addChild(Transform346)
Shape349 = x3d.Shape()
LineSet350 = x3d.LineSet()
LineSet350.setVertexCount([2])
Coordinate351 = x3d.Coordinate()
Coordinate351.setPoint(x3d.doubleToFloat([0.0963,0.0065,-0.0065,0.0987,0.0034,0.0086]))

LineSet350.setCoord(Coordinate351)

LineSet350.addComments(x3d.CommentsBlock("""from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2"""))
ColorRGBA352 = x3d.ColorRGBA()
ColorRGBA352.setUSE("HAnimSegmentLineColorRGBA")

LineSet350.setColor(ColorRGBA352)

Shape349.setGeometry(LineSet350)

HAnimSegment345.addChild(Shape349)

HAnimJoint344.addChild(HAnimSegment345)
HAnimJoint353 = x3d.HAnimJoint()
HAnimJoint353.setName("l_tarsal_proximal_interphalangeal_3")
HAnimJoint353.setDEF("hanim_l_tarsal_proximal_interphalangeal_3")
HAnimJoint353.setCenter(x3d.doubleToFloat([0.0987,0.0034,0.0086]))
HAnimJoint353.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint353.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment354 = x3d.HAnimSegment()
HAnimSegment354.setName("l_tarsal_middle_phalanx_3")
HAnimSegment354.setDEF("hanim_l_tarsal_middle_phalanx_3")
Transform355 = x3d.Transform()
Transform355.setTranslation(x3d.doubleToFloat([0.0987,0.0034,0.0086]))
Transform356 = x3d.Transform()

Transform356.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape357 = x3d.Shape()
Shape357.setUSE("HAnimJointShape")

Transform356.addChild(Shape357)

Transform355.addChild(Transform356)

HAnimSegment354.addChild(Transform355)
Shape358 = x3d.Shape()
LineSet359 = x3d.LineSet()
LineSet359.setVertexCount([2])
Coordinate360 = x3d.Coordinate()
Coordinate360.setPoint(x3d.doubleToFloat([0.0987,0.0034,0.0086,0.1002,0.0013,0.0178]))

LineSet359.setCoord(Coordinate360)

LineSet359.addComments(x3d.CommentsBlock("""from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2"""))
ColorRGBA361 = x3d.ColorRGBA()
ColorRGBA361.setUSE("HAnimSegmentLineColorRGBA")

LineSet359.setColor(ColorRGBA361)

Shape358.setGeometry(LineSet359)

HAnimSegment354.addChild(Shape358)

HAnimJoint353.addChild(HAnimSegment354)
HAnimJoint362 = x3d.HAnimJoint()
HAnimJoint362.setName("l_tarsal_distal_interphalangeal_3")
HAnimJoint362.setDEF("hanim_l_tarsal_distal_interphalangeal_3")
HAnimJoint362.setCenter(x3d.doubleToFloat([0.1002,0.0013,0.0178]))
HAnimJoint362.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint362.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint353.addChild(HAnimJoint362)

HAnimJoint344.addChild(HAnimJoint353)

HAnimJoint335.addChild(HAnimJoint344)

HAnimJoint326.addChild(HAnimJoint335)

HAnimJoint237.addChild(HAnimJoint326)

HAnimJoint210.addChild(HAnimJoint237)
HAnimJoint363 = x3d.HAnimJoint()
HAnimJoint363.setName("l_calcaneocuboid")
HAnimJoint363.setDEF("hanim_l_calcaneocuboid")
HAnimJoint363.setCenter(x3d.doubleToFloat([0.0889,0.0494,-0.1278]))
HAnimJoint363.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint363.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment364 = x3d.HAnimSegment()
HAnimSegment364.setName("l_calcaneus")
HAnimSegment364.setDEF("hanim_l_calcaneus")
Transform365 = x3d.Transform()
Transform365.setTranslation(x3d.doubleToFloat([0.0889,0.0494,-0.1278]))
Transform366 = x3d.Transform()

Transform366.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape367 = x3d.Shape()
Shape367.setUSE("HAnimJointShape")

Transform366.addChild(Shape367)

Transform365.addChild(Transform366)

HAnimSegment364.addChild(Transform365)
Shape368 = x3d.Shape()
LineSet369 = x3d.LineSet()
LineSet369.setVertexCount([2])
Coordinate370 = x3d.Coordinate()
Coordinate370.setPoint(x3d.doubleToFloat([0.0889,0.0494,-0.1278,0.1105,0.0267,-0.0998]))

LineSet369.setCoord(Coordinate370)

LineSet369.addComments(x3d.CommentsBlock("""from l_calcaneocuboid to l_transversetarsal vertices 2"""))
ColorRGBA371 = x3d.ColorRGBA()
ColorRGBA371.setUSE("HAnimSegmentLineColorRGBA")

LineSet369.setColor(ColorRGBA371)

Shape368.setGeometry(LineSet369)

HAnimSegment364.addChild(Shape368)

HAnimJoint363.addChild(HAnimSegment364)
HAnimJoint372 = x3d.HAnimJoint()
HAnimJoint372.setName("l_transversetarsal")
HAnimJoint372.setDEF("hanim_l_transversetarsal")
HAnimJoint372.setCenter(x3d.doubleToFloat([0.1105,0.0267,-0.0998]))
HAnimJoint372.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint372.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment373 = x3d.HAnimSegment()
HAnimSegment373.setName("l_cuboid")
HAnimSegment373.setDEF("hanim_l_cuboid")
Transform374 = x3d.Transform()
Transform374.setTranslation(x3d.doubleToFloat([0.1105,0.0267,-0.0998]))
Transform375 = x3d.Transform()

Transform375.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape376 = x3d.Shape()
Shape376.setUSE("HAnimJointShape")

Transform375.addChild(Shape376)

Transform374.addChild(Transform375)

HAnimSegment373.addChild(Transform374)
Shape377 = x3d.Shape()
LineSet378 = x3d.LineSet()
LineSet378.setVertexCount([2])
Coordinate379 = x3d.Coordinate()
Coordinate379.setPoint(x3d.doubleToFloat([0.1105,0.0267,-0.0998,0.1063,0.016,-0.0634]))

LineSet378.setCoord(Coordinate379)

LineSet378.addComments(x3d.CommentsBlock("""from l_transversetarsal to l_tarsometatarsal_4 vertices 2"""))
ColorRGBA380 = x3d.ColorRGBA()
ColorRGBA380.setUSE("HAnimSegmentLineColorRGBA")

LineSet378.setColor(ColorRGBA380)

Shape377.setGeometry(LineSet378)

HAnimSegment373.addChild(Shape377)
Shape381 = x3d.Shape()
LineSet382 = x3d.LineSet()
LineSet382.setVertexCount([2])
Coordinate383 = x3d.Coordinate()
Coordinate383.setPoint(x3d.doubleToFloat([0.1105,0.0267,-0.0998,0.1206,0.0124,-0.0671]))

LineSet382.setCoord(Coordinate383)

LineSet382.addComments(x3d.CommentsBlock("""from l_transversetarsal to l_tarsometatarsal_5 vertices 2"""))
ColorRGBA384 = x3d.ColorRGBA()
ColorRGBA384.setUSE("HAnimSegmentLineColorRGBA")

LineSet382.setColor(ColorRGBA384)

Shape381.setGeometry(LineSet382)

HAnimSegment373.addChild(Shape381)

HAnimJoint372.addChild(HAnimSegment373)
HAnimJoint385 = x3d.HAnimJoint()
HAnimJoint385.setName("l_tarsometatarsal_4")
HAnimJoint385.setDEF("hanim_l_tarsometatarsal_4")
HAnimJoint385.setCenter(x3d.doubleToFloat([0.1063,0.016,-0.0634]))
HAnimJoint385.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint385.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment386 = x3d.HAnimSegment()
HAnimSegment386.setName("l_metatarsal_4")
HAnimSegment386.setDEF("hanim_l_metatarsal_4")
Transform387 = x3d.Transform()
Transform387.setTranslation(x3d.doubleToFloat([0.1063,0.016,-0.0634]))
Transform388 = x3d.Transform()

Transform388.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape389 = x3d.Shape()
Shape389.setUSE("HAnimJointShape")

Transform388.addChild(Shape389)

Transform387.addChild(Transform388)

HAnimSegment386.addChild(Transform387)
Shape390 = x3d.Shape()
LineSet391 = x3d.LineSet()
LineSet391.setVertexCount([2])
Coordinate392 = x3d.Coordinate()
Coordinate392.setPoint(x3d.doubleToFloat([0.1063,0.016,-0.0634,0.1097,0.0058,-0.0107]))

LineSet391.setCoord(Coordinate392)

LineSet391.addComments(x3d.CommentsBlock("""from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2"""))
ColorRGBA393 = x3d.ColorRGBA()
ColorRGBA393.setUSE("HAnimSegmentLineColorRGBA")

LineSet391.setColor(ColorRGBA393)

Shape390.setGeometry(LineSet391)

HAnimSegment386.addChild(Shape390)

HAnimJoint385.addChild(HAnimSegment386)
HAnimJoint394 = x3d.HAnimJoint()
HAnimJoint394.setName("l_metatarsophalangeal_4")
HAnimJoint394.setDEF("hanim_l_metatarsophalangeal_4")
HAnimJoint394.setCenter(x3d.doubleToFloat([0.1097,0.0058,-0.0107]))
HAnimJoint394.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint394.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment395 = x3d.HAnimSegment()
HAnimSegment395.setName("l_tarsal_proximal_phalanx_4")
HAnimSegment395.setDEF("hanim_l_tarsal_proximal_phalanx_4")
Transform396 = x3d.Transform()
Transform396.setTranslation(x3d.doubleToFloat([0.1097,0.0058,-0.0107]))
Transform397 = x3d.Transform()

Transform397.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape398 = x3d.Shape()
Shape398.setUSE("HAnimJointShape")

Transform397.addChild(Shape398)

Transform396.addChild(Transform397)

HAnimSegment395.addChild(Transform396)
Shape399 = x3d.Shape()
LineSet400 = x3d.LineSet()
LineSet400.setVertexCount([2])
Coordinate401 = x3d.Coordinate()
Coordinate401.setPoint(x3d.doubleToFloat([0.1097,0.0058,-0.0107,0.114,0.0037,0.0044]))

LineSet400.setCoord(Coordinate401)

LineSet400.addComments(x3d.CommentsBlock("""from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2"""))
ColorRGBA402 = x3d.ColorRGBA()
ColorRGBA402.setUSE("HAnimSegmentLineColorRGBA")

LineSet400.setColor(ColorRGBA402)

Shape399.setGeometry(LineSet400)

HAnimSegment395.addChild(Shape399)

HAnimJoint394.addChild(HAnimSegment395)
HAnimJoint403 = x3d.HAnimJoint()
HAnimJoint403.setName("l_tarsal_proximal_interphalangeal_4")
HAnimJoint403.setDEF("hanim_l_tarsal_proximal_interphalangeal_4")
HAnimJoint403.setCenter(x3d.doubleToFloat([0.114,0.0037,0.0044]))
HAnimJoint403.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint403.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment404 = x3d.HAnimSegment()
HAnimSegment404.setName("l_tarsal_middle_phalanx_4")
HAnimSegment404.setDEF("hanim_l_tarsal_middle_phalanx_4")
Transform405 = x3d.Transform()
Transform405.setTranslation(x3d.doubleToFloat([0.114,0.0037,0.0044]))
Transform406 = x3d.Transform()

Transform406.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape407 = x3d.Shape()
Shape407.setUSE("HAnimJointShape")

Transform406.addChild(Shape407)

Transform405.addChild(Transform406)

HAnimSegment404.addChild(Transform405)
Shape408 = x3d.Shape()
LineSet409 = x3d.LineSet()
LineSet409.setVertexCount([2])
Coordinate410 = x3d.Coordinate()
Coordinate410.setPoint(x3d.doubleToFloat([0.114,0.0037,0.0044,0.1155,0.0008,0.0118]))

LineSet409.setCoord(Coordinate410)

LineSet409.addComments(x3d.CommentsBlock("""from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2"""))
ColorRGBA411 = x3d.ColorRGBA()
ColorRGBA411.setUSE("HAnimSegmentLineColorRGBA")

LineSet409.setColor(ColorRGBA411)

Shape408.setGeometry(LineSet409)

HAnimSegment404.addChild(Shape408)

HAnimJoint403.addChild(HAnimSegment404)
HAnimJoint412 = x3d.HAnimJoint()
HAnimJoint412.setName("l_tarsal_distal_interphalangeal_4")
HAnimJoint412.setDEF("hanim_l_tarsal_distal_interphalangeal_4")
HAnimJoint412.setCenter(x3d.doubleToFloat([0.1155,0.0008,0.0118]))
HAnimJoint412.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint412.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint403.addChild(HAnimJoint412)

HAnimJoint394.addChild(HAnimJoint403)

HAnimJoint385.addChild(HAnimJoint394)

HAnimJoint372.addChild(HAnimJoint385)
HAnimJoint413 = x3d.HAnimJoint()
HAnimJoint413.setName("l_tarsometatarsal_5")
HAnimJoint413.setDEF("hanim_l_tarsometatarsal_5")
HAnimJoint413.setCenter(x3d.doubleToFloat([0.1206,0.0124,-0.0671]))
HAnimJoint413.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint413.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment414 = x3d.HAnimSegment()
HAnimSegment414.setName("l_metatarsal_5")
HAnimSegment414.setDEF("hanim_l_metatarsal_5")
Transform415 = x3d.Transform()
Transform415.setTranslation(x3d.doubleToFloat([0.1206,0.0124,-0.0671]))
Transform416 = x3d.Transform()

Transform416.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape417 = x3d.Shape()
Shape417.setUSE("HAnimJointShape")

Transform416.addChild(Shape417)

Transform415.addChild(Transform416)

HAnimSegment414.addChild(Transform415)
Shape418 = x3d.Shape()
LineSet419 = x3d.LineSet()
LineSet419.setVertexCount([2])
Coordinate420 = x3d.Coordinate()
Coordinate420.setPoint(x3d.doubleToFloat([0.1206,0.0124,-0.0671,0.1239,0.0051,-0.0153]))

LineSet419.setCoord(Coordinate420)

LineSet419.addComments(x3d.CommentsBlock("""from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2"""))
ColorRGBA421 = x3d.ColorRGBA()
ColorRGBA421.setUSE("HAnimSegmentLineColorRGBA")

LineSet419.setColor(ColorRGBA421)

Shape418.setGeometry(LineSet419)

HAnimSegment414.addChild(Shape418)

HAnimJoint413.addChild(HAnimSegment414)
HAnimJoint422 = x3d.HAnimJoint()
HAnimJoint422.setName("l_metatarsophalangeal_5")
HAnimJoint422.setDEF("hanim_l_metatarsophalangeal_5")
HAnimJoint422.setCenter(x3d.doubleToFloat([0.1239,0.0051,-0.0153]))
HAnimJoint422.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint422.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment423 = x3d.HAnimSegment()
HAnimSegment423.setName("l_tarsal_proximal_phalanx_5")
HAnimSegment423.setDEF("hanim_l_tarsal_proximal_phalanx_5")
Transform424 = x3d.Transform()
Transform424.setTranslation(x3d.doubleToFloat([0.1239,0.0051,-0.0153]))
Transform425 = x3d.Transform()

Transform425.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape426 = x3d.Shape()
Shape426.setUSE("HAnimJointShape")

Transform425.addChild(Shape426)

Transform424.addChild(Transform425)

HAnimSegment423.addChild(Transform424)
Shape427 = x3d.Shape()
LineSet428 = x3d.LineSet()
LineSet428.setVertexCount([2])
Coordinate429 = x3d.Coordinate()
Coordinate429.setPoint(x3d.doubleToFloat([0.1239,0.0051,-0.0153,0.1262,0.0023,-0.0077]))

LineSet428.setCoord(Coordinate429)

LineSet428.addComments(x3d.CommentsBlock("""from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2"""))
ColorRGBA430 = x3d.ColorRGBA()
ColorRGBA430.setUSE("HAnimSegmentLineColorRGBA")

LineSet428.setColor(ColorRGBA430)

Shape427.setGeometry(LineSet428)

HAnimSegment423.addChild(Shape427)
HAnimSite431 = x3d.HAnimSite()
HAnimSite431.setName("l_metatarsal_phalanx_5")
HAnimSite431.setDEF("hanim_l_metatarsal_phalanx_5")
TouchSensor432 = x3d.TouchSensor()
TouchSensor432.setDescription("HAnimSite 56 l_metatarsal_phalanx_5")

HAnimSite431.addChild(TouchSensor432)
Shape433 = x3d.Shape()
Shape433.setUSE("HAnimSiteShape")

HAnimSite431.addChild(Shape433)
Billboard434 = x3d.Billboard()
Shape435 = x3d.Shape()
Text436 = x3d.Text()
Text436.setString(["56"])
FontStyle437 = x3d.FontStyle()
FontStyle437.setSize(0.035)

Text436.setFontStyle(FontStyle437)

Shape435.setGeometry(Text436)

Billboard434.addChild(Shape435)

HAnimSite431.addChild(Billboard434)

HAnimSegment423.addChild(HAnimSite431)

HAnimJoint422.addChild(HAnimSegment423)
HAnimJoint438 = x3d.HAnimJoint()
HAnimJoint438.setName("l_tarsal_proximal_interphalangeal_5")
HAnimJoint438.setDEF("hanim_l_tarsal_proximal_interphalangeal_5")
HAnimJoint438.setCenter(x3d.doubleToFloat([0.1262,0.0023,-0.0077]))
HAnimJoint438.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint438.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment439 = x3d.HAnimSegment()
HAnimSegment439.setName("l_tarsal_middle_phalanx_5")
HAnimSegment439.setDEF("hanim_l_tarsal_middle_phalanx_5")
Transform440 = x3d.Transform()
Transform440.setTranslation(x3d.doubleToFloat([0.1262,0.0023,-0.0077]))
Transform441 = x3d.Transform()

Transform441.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape442 = x3d.Shape()
Shape442.setUSE("HAnimJointShape")

Transform441.addChild(Shape442)

Transform440.addChild(Transform441)

HAnimSegment439.addChild(Transform440)
Shape443 = x3d.Shape()
LineSet444 = x3d.LineSet()
LineSet444.setVertexCount([2])
Coordinate445 = x3d.Coordinate()
Coordinate445.setPoint(x3d.doubleToFloat([0.1262,0.0023,-0.0077,0.1271,0,0]))

LineSet444.setCoord(Coordinate445)

LineSet444.addComments(x3d.CommentsBlock("""from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2"""))
ColorRGBA446 = x3d.ColorRGBA()
ColorRGBA446.setUSE("HAnimSegmentLineColorRGBA")

LineSet444.setColor(ColorRGBA446)

Shape443.setGeometry(LineSet444)

HAnimSegment439.addChild(Shape443)

HAnimJoint438.addChild(HAnimSegment439)
HAnimJoint447 = x3d.HAnimJoint()
HAnimJoint447.setName("l_tarsal_distal_interphalangeal_5")
HAnimJoint447.setDEF("hanim_l_tarsal_distal_interphalangeal_5")
HAnimJoint447.setCenter(x3d.doubleToFloat([0.1271,0,0]))
HAnimJoint447.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint447.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint438.addChild(HAnimJoint447)

HAnimJoint422.addChild(HAnimJoint438)

HAnimJoint413.addChild(HAnimJoint422)

HAnimJoint372.addChild(HAnimJoint413)

HAnimJoint363.addChild(HAnimJoint372)

HAnimJoint210.addChild(HAnimJoint363)

HAnimJoint180.addChild(HAnimJoint210)

HAnimJoint143.addChild(HAnimJoint180)

HAnimJoint60.addChild(HAnimJoint143)
HAnimJoint448 = x3d.HAnimJoint()
HAnimJoint448.setName("r_hip")
HAnimJoint448.setDEF("hanim_r_hip")
HAnimJoint448.setCenter(x3d.doubleToFloat([-0.095,0.9171,0.0029]))
HAnimJoint448.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint448.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment449 = x3d.HAnimSegment()
HAnimSegment449.setName("r_thigh")
HAnimSegment449.setDEF("hanim_r_thigh")
Transform450 = x3d.Transform()
Transform450.setTranslation(x3d.doubleToFloat([-0.095,0.9171,0.0029]))
Transform451 = x3d.Transform()

Transform451.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape452 = x3d.Shape()
Shape452.setUSE("HAnimJointShape")

Transform451.addChild(Shape452)

Transform450.addChild(Transform451)

HAnimSegment449.addChild(Transform450)
Shape453 = x3d.Shape()
LineSet454 = x3d.LineSet()
LineSet454.setVertexCount([2])
Coordinate455 = x3d.Coordinate()
Coordinate455.setPoint(x3d.doubleToFloat([-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]))

LineSet454.setCoord(Coordinate455)

LineSet454.addComments(x3d.CommentsBlock("""from r_hip to r_knee vertices 2"""))
ColorRGBA456 = x3d.ColorRGBA()
ColorRGBA456.setUSE("HAnimSegmentLineColorRGBA")

LineSet454.setColor(ColorRGBA456)

Shape453.setGeometry(LineSet454)

HAnimSegment449.addChild(Shape453)
HAnimSite457 = x3d.HAnimSite()
HAnimSite457.setName("r_femoral_lateral_epicondyles")
HAnimSite457.setDEF("hanim_r_femoral_lateral_epicondyles")
HAnimSite457.setTranslation(x3d.doubleToFloat([-0.1421,0.4992,0.031]))
TouchSensor458 = x3d.TouchSensor()
TouchSensor458.setDescription("HAnimSite 44 r_femoral_lateral_epicondyles")

HAnimSite457.addChild(TouchSensor458)
Shape459 = x3d.Shape()
Shape459.setUSE("HAnimSiteShape")

HAnimSite457.addChild(Shape459)
Billboard460 = x3d.Billboard()
Shape461 = x3d.Shape()
Text462 = x3d.Text()
Text462.setString(["44"])
FontStyle463 = x3d.FontStyle()
FontStyle463.setSize(0.035)

Text462.setFontStyle(FontStyle463)

Shape461.setGeometry(Text462)

Billboard460.addChild(Shape461)

HAnimSite457.addChild(Billboard460)

HAnimSegment449.addChild(HAnimSite457)
HAnimSite464 = x3d.HAnimSite()
HAnimSite464.setName("r_femoral_medial_epicondyles")
HAnimSite464.setDEF("hanim_r_femoral_medial_epicondyles")
HAnimSite464.setTranslation(x3d.doubleToFloat([-0.0221,0.5014,0.0289]))
TouchSensor465 = x3d.TouchSensor()
TouchSensor465.setDescription("HAnimSite 43 r_femoral_medial_epicondyles")

HAnimSite464.addChild(TouchSensor465)
Shape466 = x3d.Shape()
Shape466.setUSE("HAnimSiteShape")

HAnimSite464.addChild(Shape466)
Billboard467 = x3d.Billboard()
Shape468 = x3d.Shape()
Text469 = x3d.Text()
Text469.setString(["43"])
FontStyle470 = x3d.FontStyle()
FontStyle470.setSize(0.035)

Text469.setFontStyle(FontStyle470)

Shape468.setGeometry(Text469)

Billboard467.addChild(Shape468)

HAnimSite464.addChild(Billboard467)

HAnimSegment449.addChild(HAnimSite464)
HAnimSite471 = x3d.HAnimSite()
HAnimSite471.setName("r_knee_crease")
HAnimSite471.setDEF("hanim_r_knee_crease")
HAnimSite471.setTranslation(x3d.doubleToFloat([-0.0825,0.4932,-0.0326]))
TouchSensor472 = x3d.TouchSensor()
TouchSensor472.setDescription("HAnimSite 91 r_knee_crease")

HAnimSite471.addChild(TouchSensor472)
Shape473 = x3d.Shape()
Shape473.setUSE("HAnimSiteShape")

HAnimSite471.addChild(Shape473)
Billboard474 = x3d.Billboard()
Shape475 = x3d.Shape()
Text476 = x3d.Text()
Text476.setString(["91"])
FontStyle477 = x3d.FontStyle()
FontStyle477.setSize(0.035)

Text476.setFontStyle(FontStyle477)

Shape475.setGeometry(Text476)

Billboard474.addChild(Shape475)

HAnimSite471.addChild(Billboard474)

HAnimSegment449.addChild(HAnimSite471)
HAnimSite478 = x3d.HAnimSite()
HAnimSite478.setName("r_suprapatella")
HAnimSite478.setDEF("hanim_r_suprapatella")
TouchSensor479 = x3d.TouchSensor()
TouchSensor479.setDescription("HAnimSite 45 r_suprapatella")

HAnimSite478.addChild(TouchSensor479)
Shape480 = x3d.Shape()
Shape480.setUSE("HAnimSiteShape")

HAnimSite478.addChild(Shape480)
Billboard481 = x3d.Billboard()
Shape482 = x3d.Shape()
Text483 = x3d.Text()
Text483.setString(["45"])
FontStyle484 = x3d.FontStyle()
FontStyle484.setSize(0.035)

Text483.setFontStyle(FontStyle484)

Shape482.setGeometry(Text483)

Billboard481.addChild(Shape482)

HAnimSite478.addChild(Billboard481)

HAnimSegment449.addChild(HAnimSite478)

HAnimJoint448.addChild(HAnimSegment449)
HAnimJoint485 = x3d.HAnimJoint()
HAnimJoint485.setName("r_knee")
HAnimJoint485.setDEF("hanim_r_knee")
HAnimJoint485.setCenter(x3d.doubleToFloat([-0.0867,0.4913,0.0318]))
HAnimJoint485.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint485.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment486 = x3d.HAnimSegment()
HAnimSegment486.setName("r_calf")
HAnimSegment486.setDEF("hanim_r_calf")
Transform487 = x3d.Transform()
Transform487.setTranslation(x3d.doubleToFloat([-0.0867,0.4913,0.0318]))
Transform488 = x3d.Transform()

Transform488.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape489 = x3d.Shape()
Shape489.setUSE("HAnimJointShape")

Transform488.addChild(Shape489)

Transform487.addChild(Transform488)

HAnimSegment486.addChild(Transform487)
Shape490 = x3d.Shape()
LineSet491 = x3d.LineSet()
LineSet491.setVertexCount([2])
Coordinate492 = x3d.Coordinate()
Coordinate492.setPoint(x3d.doubleToFloat([-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]))

LineSet491.setCoord(Coordinate492)

LineSet491.addComments(x3d.CommentsBlock("""from r_knee to r_talocrural vertices 2"""))
ColorRGBA493 = x3d.ColorRGBA()
ColorRGBA493.setUSE("HAnimSegmentLineColorRGBA")

LineSet491.setColor(ColorRGBA493)

Shape490.setGeometry(LineSet491)

HAnimSegment486.addChild(Shape490)
HAnimSite494 = x3d.HAnimSite()
HAnimSite494.setName("r_lateral_malleolus")
HAnimSite494.setDEF("hanim_r_lateral_malleolus")
HAnimSite494.setTranslation(x3d.doubleToFloat([-0.1006,0.0658,-0.1075]))
TouchSensor495 = x3d.TouchSensor()
TouchSensor495.setDescription("HAnimSite 53 r_lateral_malleolus")

HAnimSite494.addChild(TouchSensor495)
Shape496 = x3d.Shape()
Shape496.setUSE("HAnimSiteShape")

HAnimSite494.addChild(Shape496)
Billboard497 = x3d.Billboard()
Shape498 = x3d.Shape()
Text499 = x3d.Text()
Text499.setString(["53"])
FontStyle500 = x3d.FontStyle()
FontStyle500.setSize(0.035)

Text499.setFontStyle(FontStyle500)

Shape498.setGeometry(Text499)

Billboard497.addChild(Shape498)

HAnimSite494.addChild(Billboard497)

HAnimSegment486.addChild(HAnimSite494)
HAnimSite501 = x3d.HAnimSite()
HAnimSite501.setName("r_medial_malleolus")
HAnimSite501.setDEF("hanim_r_medial_malleolus")
HAnimSite501.setTranslation(x3d.doubleToFloat([-0.0591,0.076,-0.0928]))
TouchSensor502 = x3d.TouchSensor()
TouchSensor502.setDescription("HAnimSite 52 r_medial_malleolus")

HAnimSite501.addChild(TouchSensor502)
Shape503 = x3d.Shape()
Shape503.setUSE("HAnimSiteShape")

HAnimSite501.addChild(Shape503)
Billboard504 = x3d.Billboard()
Shape505 = x3d.Shape()
Text506 = x3d.Text()
Text506.setString(["52"])
FontStyle507 = x3d.FontStyle()
FontStyle507.setSize(0.035)

Text506.setFontStyle(FontStyle507)

Shape505.setGeometry(Text506)

Billboard504.addChild(Shape505)

HAnimSite501.addChild(Billboard504)

HAnimSegment486.addChild(HAnimSite501)
HAnimSite508 = x3d.HAnimSite()
HAnimSite508.setName("r_tibiale")
HAnimSite508.setDEF("hanim_r_tibiale")
TouchSensor509 = x3d.TouchSensor()
TouchSensor509.setDescription("HAnimSite 51 r_tibiale")

HAnimSite508.addChild(TouchSensor509)
Shape510 = x3d.Shape()
Shape510.setUSE("HAnimSiteShape")

HAnimSite508.addChild(Shape510)
Billboard511 = x3d.Billboard()
Shape512 = x3d.Shape()
Text513 = x3d.Text()
Text513.setString(["51"])
FontStyle514 = x3d.FontStyle()
FontStyle514.setSize(0.035)

Text513.setFontStyle(FontStyle514)

Shape512.setGeometry(Text513)

Billboard511.addChild(Shape512)

HAnimSite508.addChild(Billboard511)

HAnimSegment486.addChild(HAnimSite508)

HAnimJoint485.addChild(HAnimSegment486)
HAnimJoint515 = x3d.HAnimJoint()
HAnimJoint515.setName("r_talocrural")
HAnimJoint515.setDEF("hanim_r_talocrural")
HAnimJoint515.setCenter(x3d.doubleToFloat([-0.0801,0.0712,-0.0766]))
HAnimJoint515.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint515.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment516 = x3d.HAnimSegment()
HAnimSegment516.setName("r_talus")
HAnimSegment516.setDEF("hanim_r_talus")
Transform517 = x3d.Transform()
Transform517.setScale(x3d.doubleToFloat([0.15,0.15,0.15]))
Transform517.setTranslation(x3d.doubleToFloat([-0.05,0.06,-0.025]))
Transform517.setRotation(x3d.doubleToFloat([1,0,0,-1.57]))

Transform517.addComments(x3d.CommentsBlock("""Transform right foot"""))
Transform518 = x3d.Transform()

Transform518.addComments(x3d.CommentsBlock("""Empty Transform right foot"""))
Shape519 = x3d.Shape()
Shape519.setUSE("HAnimJointShape")

Transform518.addChild(Shape519)

Transform517.addChild(Transform518)

HAnimSegment516.addChild(Transform517)
Shape520 = x3d.Shape()
LineSet521 = x3d.LineSet()
LineSet521.setVertexCount([2])
Coordinate522 = x3d.Coordinate()
Coordinate522.setPoint(x3d.doubleToFloat([-0.0801,0.0712,-0.0766,-0.0781,0.0283,-0.097]))

LineSet521.setCoord(Coordinate522)

LineSet521.addComments(x3d.CommentsBlock("""from r_talocrural to r_talocalcaneonavicular vertices 2"""))
ColorRGBA523 = x3d.ColorRGBA()
ColorRGBA523.setUSE("HAnimSegmentLineColorRGBA")

LineSet521.setColor(ColorRGBA523)

Shape520.setGeometry(LineSet521)

HAnimSegment516.addChild(Shape520)
HAnimSite524 = x3d.HAnimSite()
HAnimSite524.setName("r_calcaneus_posterior")
HAnimSite524.setDEF("hanim_r_calcaneus_posterior")
HAnimSite524.setTranslation(x3d.doubleToFloat([-0.0692,0.0297,-0.1221]))
TouchSensor525 = x3d.TouchSensor()
TouchSensor525.setDescription("HAnimSite 62 r_calcaneus_posterior")

HAnimSite524.addChild(TouchSensor525)
Shape526 = x3d.Shape()
Shape526.setUSE("HAnimSiteShape")

HAnimSite524.addChild(Shape526)
Billboard527 = x3d.Billboard()
Shape528 = x3d.Shape()
Text529 = x3d.Text()
Text529.setString(["62"])
FontStyle530 = x3d.FontStyle()
FontStyle530.setSize(0.035)

Text529.setFontStyle(FontStyle530)

Shape528.setGeometry(Text529)

Billboard527.addChild(Shape528)

HAnimSite524.addChild(Billboard527)

HAnimSegment516.addChild(HAnimSite524)
HAnimSite531 = x3d.HAnimSite()
HAnimSite531.setName("r_sphyrion")
HAnimSite531.setDEF("hanim_r_sphyrion")
HAnimSite531.setTranslation(x3d.doubleToFloat([-0.0603,0.061,-0.1002]))
TouchSensor532 = x3d.TouchSensor()
TouchSensor532.setDescription("HAnimSite 54 r_sphyrion")

HAnimSite531.addChild(TouchSensor532)
Shape533 = x3d.Shape()
Shape533.setUSE("HAnimSiteShape")

HAnimSite531.addChild(Shape533)
Billboard534 = x3d.Billboard()
Shape535 = x3d.Shape()
Text536 = x3d.Text()
Text536.setString(["54"])
FontStyle537 = x3d.FontStyle()
FontStyle537.setSize(0.035)

Text536.setFontStyle(FontStyle537)

Shape535.setGeometry(Text536)

Billboard534.addChild(Shape535)

HAnimSite531.addChild(Billboard534)

HAnimSegment516.addChild(HAnimSite531)
Shape538 = x3d.Shape()
LineSet539 = x3d.LineSet()
LineSet539.setVertexCount([2])
Coordinate540 = x3d.Coordinate()
Coordinate540.setPoint(x3d.doubleToFloat([-0.0801,0.0712,-0.0766,-0.0889,0.0494,-0.1278]))

LineSet539.setCoord(Coordinate540)

LineSet539.addComments(x3d.CommentsBlock("""from r_talocrural to r_calcaneocuboid vertices 2"""))
ColorRGBA541 = x3d.ColorRGBA()
ColorRGBA541.setUSE("HAnimSegmentLineColorRGBA")

LineSet539.setColor(ColorRGBA541)

Shape538.setGeometry(LineSet539)

HAnimSegment516.addChild(Shape538)

HAnimJoint515.addChild(HAnimSegment516)
HAnimJoint542 = x3d.HAnimJoint()
HAnimJoint542.setName("r_talocalcaneonavicular")
HAnimJoint542.setDEF("hanim_r_talocalcaneonavicular")
HAnimJoint542.setCenter(x3d.doubleToFloat([-0.0781,0.0283,-0.097]))
HAnimJoint542.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint542.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment543 = x3d.HAnimSegment()
HAnimSegment543.setName("r_navicular")
HAnimSegment543.setDEF("hanim_r_navicular")
Transform544 = x3d.Transform()
Transform544.setTranslation(x3d.doubleToFloat([-0.0781,0.0283,-0.097]))
Transform545 = x3d.Transform()

Transform545.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape546 = x3d.Shape()
Shape546.setUSE("HAnimJointShape")

Transform545.addChild(Shape546)

Transform544.addChild(Transform545)

HAnimSegment543.addChild(Transform544)
Shape547 = x3d.Shape()
LineSet548 = x3d.LineSet()
LineSet548.setVertexCount([2])
Coordinate549 = x3d.Coordinate()
Coordinate549.setPoint(x3d.doubleToFloat([-0.0781,0.0283,-0.097,-0.0672,0.0235,-0.0835]))

LineSet548.setCoord(Coordinate549)

LineSet548.addComments(x3d.CommentsBlock("""from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2"""))
ColorRGBA550 = x3d.ColorRGBA()
ColorRGBA550.setUSE("HAnimSegmentLineColorRGBA")

LineSet548.setColor(ColorRGBA550)

Shape547.setGeometry(LineSet548)

HAnimSegment543.addChild(Shape547)
Shape551 = x3d.Shape()
LineSet552 = x3d.LineSet()
LineSet552.setVertexCount([2])
Coordinate553 = x3d.Coordinate()
Coordinate553.setPoint(x3d.doubleToFloat([-0.0781,0.0283,-0.097,-0.0812,0.025,-0.0805]))

LineSet552.setCoord(Coordinate553)

LineSet552.addComments(x3d.CommentsBlock("""from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2"""))
ColorRGBA554 = x3d.ColorRGBA()
ColorRGBA554.setUSE("HAnimSegmentLineColorRGBA")

LineSet552.setColor(ColorRGBA554)

Shape551.setGeometry(LineSet552)

HAnimSegment543.addChild(Shape551)
Shape555 = x3d.Shape()
LineSet556 = x3d.LineSet()
LineSet556.setVertexCount([2])
Coordinate557 = x3d.Coordinate()
Coordinate557.setPoint(x3d.doubleToFloat([-0.0781,0.0283,-0.097,-0.0928,0.0248,-0.0821]))

LineSet556.setCoord(Coordinate557)

LineSet556.addComments(x3d.CommentsBlock("""from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2"""))
ColorRGBA558 = x3d.ColorRGBA()
ColorRGBA558.setUSE("HAnimSegmentLineColorRGBA")

LineSet556.setColor(ColorRGBA558)

Shape555.setGeometry(LineSet556)

HAnimSegment543.addChild(Shape555)

HAnimJoint542.addChild(HAnimSegment543)
HAnimJoint559 = x3d.HAnimJoint()
HAnimJoint559.setName("r_cuneonavicular_1")
HAnimJoint559.setDEF("hanim_r_cuneonavicular_1")
HAnimJoint559.setCenter(x3d.doubleToFloat([-0.0672,0.0235,-0.0835]))
HAnimJoint559.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint559.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment560 = x3d.HAnimSegment()
HAnimSegment560.setName("r_cuneiform_1")
HAnimSegment560.setDEF("hanim_r_cuneiform_1")
Transform561 = x3d.Transform()
Transform561.setTranslation(x3d.doubleToFloat([-0.0672,0.0235,-0.0835]))
Transform562 = x3d.Transform()

Transform562.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape563 = x3d.Shape()
Shape563.setUSE("HAnimJointShape")

Transform562.addChild(Shape563)

Transform561.addChild(Transform562)

HAnimSegment560.addChild(Transform561)
Shape564 = x3d.Shape()
LineSet565 = x3d.LineSet()
LineSet565.setVertexCount([2])
Coordinate566 = x3d.Coordinate()
Coordinate566.setPoint(x3d.doubleToFloat([-0.0672,0.0235,-0.0835,-0.0644,0.0147,-0.0577]))

LineSet565.setCoord(Coordinate566)

LineSet565.addComments(x3d.CommentsBlock("""from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2"""))
ColorRGBA567 = x3d.ColorRGBA()
ColorRGBA567.setUSE("HAnimSegmentLineColorRGBA")

LineSet565.setColor(ColorRGBA567)

Shape564.setGeometry(LineSet565)

HAnimSegment560.addChild(Shape564)

HAnimJoint559.addChild(HAnimSegment560)
HAnimJoint568 = x3d.HAnimJoint()
HAnimJoint568.setName("r_tarsometatarsal_1")
HAnimJoint568.setDEF("hanim_r_tarsometatarsal_1")
HAnimJoint568.setCenter(x3d.doubleToFloat([-0.0644,0.0147,-0.0577]))
HAnimJoint568.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint568.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment569 = x3d.HAnimSegment()
HAnimSegment569.setName("r_metatarsal_1")
HAnimSegment569.setDEF("hanim_r_metatarsal_1")
Transform570 = x3d.Transform()
Transform570.setTranslation(x3d.doubleToFloat([-0.0644,0.0147,-0.0577]))
Transform571 = x3d.Transform()

Transform571.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape572 = x3d.Shape()
Shape572.setUSE("HAnimJointShape")

Transform571.addChild(Shape572)

Transform570.addChild(Transform571)

HAnimSegment569.addChild(Transform570)
Shape573 = x3d.Shape()
LineSet574 = x3d.LineSet()
LineSet574.setVertexCount([2])
Coordinate575 = x3d.Coordinate()
Coordinate575.setPoint(x3d.doubleToFloat([-0.0644,0.0147,-0.0577,-0.0619,0.0059,-0.0083]))

LineSet574.setCoord(Coordinate575)

LineSet574.addComments(x3d.CommentsBlock("""from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2"""))
ColorRGBA576 = x3d.ColorRGBA()
ColorRGBA576.setUSE("HAnimSegmentLineColorRGBA")

LineSet574.setColor(ColorRGBA576)

Shape573.setGeometry(LineSet574)

HAnimSegment569.addChild(Shape573)

HAnimJoint568.addChild(HAnimSegment569)
HAnimJoint577 = x3d.HAnimJoint()
HAnimJoint577.setName("r_metatarsophalangeal_1")
HAnimJoint577.setDEF("hanim_r_metatarsophalangeal_1")
HAnimJoint577.setCenter(x3d.doubleToFloat([-0.0619,0.0059,-0.0083]))
HAnimJoint577.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint577.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment578 = x3d.HAnimSegment()
HAnimSegment578.setName("r_tarsal_proximal_phalanx_1")
HAnimSegment578.setDEF("hanim_r_tarsal_proximal_phalanx_1")
Transform579 = x3d.Transform()
Transform579.setTranslation(x3d.doubleToFloat([-0.0619,0.0059,-0.0083]))
Transform580 = x3d.Transform()

Transform580.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape581 = x3d.Shape()
Shape581.setUSE("HAnimJointShape")

Transform580.addChild(Shape581)

Transform579.addChild(Transform580)

HAnimSegment578.addChild(Transform579)
Shape582 = x3d.Shape()
LineSet583 = x3d.LineSet()
LineSet583.setVertexCount([2])
Coordinate584 = x3d.Coordinate()
Coordinate584.setPoint(x3d.doubleToFloat([-0.0619,0.0059,-0.0083,-0.0619,0.0059,-0.0083]))

LineSet583.setCoord(Coordinate584)

LineSet583.addComments(x3d.CommentsBlock("""from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2"""))
ColorRGBA585 = x3d.ColorRGBA()
ColorRGBA585.setUSE("HAnimSegmentLineColorRGBA")

LineSet583.setColor(ColorRGBA585)

Shape582.setGeometry(LineSet583)

HAnimSegment578.addChild(Shape582)
HAnimSite586 = x3d.HAnimSite()
HAnimSite586.setName("r_metatarsal_phalanx_1")
HAnimSite586.setDEF("hanim_r_metatarsal_phalanx_1")
TouchSensor587 = x3d.TouchSensor()
TouchSensor587.setDescription("HAnimSite 59 r_metatarsal_phalanx_1")

HAnimSite586.addChild(TouchSensor587)
Shape588 = x3d.Shape()
Shape588.setUSE("HAnimSiteShape")

HAnimSite586.addChild(Shape588)
Billboard589 = x3d.Billboard()
Shape590 = x3d.Shape()
Text591 = x3d.Text()
Text591.setString(["59"])
FontStyle592 = x3d.FontStyle()
FontStyle592.setSize(0.035)

Text591.setFontStyle(FontStyle592)

Shape590.setGeometry(Text591)

Billboard589.addChild(Shape590)

HAnimSite586.addChild(Billboard589)

HAnimSegment578.addChild(HAnimSite586)

HAnimJoint577.addChild(HAnimSegment578)
HAnimJoint593 = x3d.HAnimJoint()
HAnimJoint593.setName("r_tarsal_interphalangeal_1")
HAnimJoint593.setDEF("hanim_r_tarsal_interphalangeal_1")
HAnimJoint593.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint593.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint577.addChild(HAnimJoint593)

HAnimJoint568.addChild(HAnimJoint577)

HAnimJoint559.addChild(HAnimJoint568)

HAnimJoint542.addChild(HAnimJoint559)
HAnimJoint594 = x3d.HAnimJoint()
HAnimJoint594.setName("r_cuneonavicular_2")
HAnimJoint594.setDEF("hanim_r_cuneonavicular_2")
HAnimJoint594.setCenter(x3d.doubleToFloat([-0.0812,0.025,-0.0805]))
HAnimJoint594.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint594.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment595 = x3d.HAnimSegment()
HAnimSegment595.setName("r_cuneiform_2")
HAnimSegment595.setDEF("hanim_r_cuneiform_2")
Transform596 = x3d.Transform()
Transform596.setTranslation(x3d.doubleToFloat([-0.0812,0.025,-0.0805]))
Transform597 = x3d.Transform()

Transform597.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape598 = x3d.Shape()
Shape598.setUSE("HAnimJointShape")

Transform597.addChild(Shape598)

Transform596.addChild(Transform597)

HAnimSegment595.addChild(Transform596)
Shape599 = x3d.Shape()
LineSet600 = x3d.LineSet()
LineSet600.setVertexCount([2])
Coordinate601 = x3d.Coordinate()
Coordinate601.setPoint(x3d.doubleToFloat([-0.0812,0.025,-0.0805,-0.08,0.0175,-0.0608]))

LineSet600.setCoord(Coordinate601)

LineSet600.addComments(x3d.CommentsBlock("""from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2"""))
ColorRGBA602 = x3d.ColorRGBA()
ColorRGBA602.setUSE("HAnimSegmentLineColorRGBA")

LineSet600.setColor(ColorRGBA602)

Shape599.setGeometry(LineSet600)

HAnimSegment595.addChild(Shape599)

HAnimJoint594.addChild(HAnimSegment595)
HAnimJoint603 = x3d.HAnimJoint()
HAnimJoint603.setName("r_tarsometatarsal_2")
HAnimJoint603.setDEF("hanim_r_tarsometatarsal_2")
HAnimJoint603.setCenter(x3d.doubleToFloat([-0.08,0.0175,-0.0608]))
HAnimJoint603.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint603.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment604 = x3d.HAnimSegment()
HAnimSegment604.setName("r_metatarsal_2")
HAnimSegment604.setDEF("hanim_r_metatarsal_2")
Transform605 = x3d.Transform()
Transform605.setTranslation(x3d.doubleToFloat([-0.08,0.0175,-0.0608]))
Transform606 = x3d.Transform()

Transform606.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape607 = x3d.Shape()
Shape607.setUSE("HAnimJointShape")

Transform606.addChild(Shape607)

Transform605.addChild(Transform606)

HAnimSegment604.addChild(Transform605)
Shape608 = x3d.Shape()
LineSet609 = x3d.LineSet()
LineSet609.setVertexCount([2])
Coordinate610 = x3d.Coordinate()
Coordinate610.setPoint(x3d.doubleToFloat([-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004]))

LineSet609.setCoord(Coordinate610)

LineSet609.addComments(x3d.CommentsBlock("""from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2"""))
ColorRGBA611 = x3d.ColorRGBA()
ColorRGBA611.setUSE("HAnimSegmentLineColorRGBA")

LineSet609.setColor(ColorRGBA611)

Shape608.setGeometry(LineSet609)

HAnimSegment604.addChild(Shape608)

HAnimJoint603.addChild(HAnimSegment604)
HAnimJoint612 = x3d.HAnimJoint()
HAnimJoint612.setName("r_metatarsophalangeal_2")
HAnimJoint612.setDEF("hanim_r_metatarsophalangeal_2")
HAnimJoint612.setCenter(x3d.doubleToFloat([-0.0823,0.0064,-0.004]))
HAnimJoint612.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint612.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment613 = x3d.HAnimSegment()
HAnimSegment613.setName("r_tarsal_proximal_phalanx_2")
HAnimSegment613.setDEF("hanim_r_tarsal_proximal_phalanx_2")
Transform614 = x3d.Transform()
Transform614.setTranslation(x3d.doubleToFloat([-0.0823,0.0064,-0.004]))
Transform615 = x3d.Transform()

Transform615.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape616 = x3d.Shape()
Shape616.setUSE("HAnimJointShape")

Transform615.addChild(Shape616)

Transform614.addChild(Transform615)

HAnimSegment613.addChild(Transform614)
Shape617 = x3d.Shape()
LineSet618 = x3d.LineSet()
LineSet618.setVertexCount([2])
Coordinate619 = x3d.Coordinate()
Coordinate619.setPoint(x3d.doubleToFloat([-0.0823,0.0064,-0.004,-0.0841,0.0041,0.0121]))

LineSet618.setCoord(Coordinate619)

LineSet618.addComments(x3d.CommentsBlock("""from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2"""))
ColorRGBA620 = x3d.ColorRGBA()
ColorRGBA620.setUSE("HAnimSegmentLineColorRGBA")

LineSet618.setColor(ColorRGBA620)

Shape617.setGeometry(LineSet618)

HAnimSegment613.addChild(Shape617)

HAnimJoint612.addChild(HAnimSegment613)
HAnimJoint621 = x3d.HAnimJoint()
HAnimJoint621.setName("r_tarsal_proximal_interphalangeal_2")
HAnimJoint621.setDEF("hanim_r_tarsal_proximal_interphalangeal_2")
HAnimJoint621.setCenter(x3d.doubleToFloat([-0.0841,0.0041,0.0121]))
HAnimJoint621.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint621.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment622 = x3d.HAnimSegment()
HAnimSegment622.setName("r_tarsal_middle_phalanx_2")
HAnimSegment622.setDEF("hanim_r_tarsal_middle_phalanx_2")
Transform623 = x3d.Transform()
Transform623.setTranslation(x3d.doubleToFloat([-0.0841,0.0041,0.0121]))
Transform624 = x3d.Transform()

Transform624.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape625 = x3d.Shape()
Shape625.setUSE("HAnimJointShape")

Transform624.addChild(Shape625)

Transform623.addChild(Transform624)

HAnimSegment622.addChild(Transform623)
Shape626 = x3d.Shape()
LineSet627 = x3d.LineSet()
LineSet627.setVertexCount([2])
Coordinate628 = x3d.Coordinate()
Coordinate628.setPoint(x3d.doubleToFloat([-0.0841,0.0041,0.0121,-0.0841,0.0013,0.0216]))

LineSet627.setCoord(Coordinate628)

LineSet627.addComments(x3d.CommentsBlock("""from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2"""))
ColorRGBA629 = x3d.ColorRGBA()
ColorRGBA629.setUSE("HAnimSegmentLineColorRGBA")

LineSet627.setColor(ColorRGBA629)

Shape626.setGeometry(LineSet627)

HAnimSegment622.addChild(Shape626)

HAnimJoint621.addChild(HAnimSegment622)
HAnimJoint630 = x3d.HAnimJoint()
HAnimJoint630.setName("r_tarsal_distal_interphalangeal_2")
HAnimJoint630.setDEF("hanim_r_tarsal_distal_interphalangeal_2")
HAnimJoint630.setCenter(x3d.doubleToFloat([-0.0841,0.0013,0.0216]))
HAnimJoint630.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint630.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint621.addChild(HAnimJoint630)

HAnimJoint612.addChild(HAnimJoint621)

HAnimJoint603.addChild(HAnimJoint612)

HAnimJoint594.addChild(HAnimJoint603)

HAnimJoint542.addChild(HAnimJoint594)
HAnimJoint631 = x3d.HAnimJoint()
HAnimJoint631.setName("r_cuneonavicular_3")
HAnimJoint631.setDEF("hanim_r_cuneonavicular_3")
HAnimJoint631.setCenter(x3d.doubleToFloat([-0.0928,0.0248,-0.0821]))
HAnimJoint631.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint631.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment632 = x3d.HAnimSegment()
HAnimSegment632.setName("r_cuneiform_3")
HAnimSegment632.setDEF("hanim_r_cuneiform_3")
Transform633 = x3d.Transform()
Transform633.setTranslation(x3d.doubleToFloat([-0.0928,0.0248,-0.0821]))
Transform634 = x3d.Transform()

Transform634.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape635 = x3d.Shape()
Shape635.setUSE("HAnimJointShape")

Transform634.addChild(Shape635)

Transform633.addChild(Transform634)

HAnimSegment632.addChild(Transform633)
Shape636 = x3d.Shape()
LineSet637 = x3d.LineSet()
LineSet637.setVertexCount([2])
Coordinate638 = x3d.Coordinate()
Coordinate638.setPoint(x3d.doubleToFloat([-0.0928,0.0248,-0.0821,-0.0944,0.0175,-0.0625]))

LineSet637.setCoord(Coordinate638)

LineSet637.addComments(x3d.CommentsBlock("""from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2"""))
ColorRGBA639 = x3d.ColorRGBA()
ColorRGBA639.setUSE("HAnimSegmentLineColorRGBA")

LineSet637.setColor(ColorRGBA639)

Shape636.setGeometry(LineSet637)

HAnimSegment632.addChild(Shape636)

HAnimJoint631.addChild(HAnimSegment632)
HAnimJoint640 = x3d.HAnimJoint()
HAnimJoint640.setName("r_tarsometatarsal_3")
HAnimJoint640.setDEF("hanim_r_tarsometatarsal_3")
HAnimJoint640.setCenter(x3d.doubleToFloat([-0.0944,0.0175,-0.0625]))
HAnimJoint640.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint640.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment641 = x3d.HAnimSegment()
HAnimSegment641.setName("r_metatarsal_3")
HAnimSegment641.setDEF("hanim_r_metatarsal_3")
Transform642 = x3d.Transform()
Transform642.setTranslation(x3d.doubleToFloat([-0.0944,0.0175,-0.0625]))
Transform643 = x3d.Transform()

Transform643.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape644 = x3d.Shape()
Shape644.setUSE("HAnimJointShape")

Transform643.addChild(Shape644)

Transform642.addChild(Transform643)

HAnimSegment641.addChild(Transform642)
Shape645 = x3d.Shape()
LineSet646 = x3d.LineSet()
LineSet646.setVertexCount([2])
Coordinate647 = x3d.Coordinate()
Coordinate647.setPoint(x3d.doubleToFloat([-0.0944,0.0175,-0.0625,-0.0963,0.0065,-0.0065]))

LineSet646.setCoord(Coordinate647)

LineSet646.addComments(x3d.CommentsBlock("""from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 2"""))
ColorRGBA648 = x3d.ColorRGBA()
ColorRGBA648.setUSE("HAnimSegmentLineColorRGBA")

LineSet646.setColor(ColorRGBA648)

Shape645.setGeometry(LineSet646)

HAnimSegment641.addChild(Shape645)

HAnimJoint640.addChild(HAnimSegment641)
HAnimJoint649 = x3d.HAnimJoint()
HAnimJoint649.setName("r_metatarsophalangeal_3")
HAnimJoint649.setDEF("hanim_r_metatarsophalangeal_3")
HAnimJoint649.setCenter(x3d.doubleToFloat([-0.0963,0.0065,-0.0065]))
HAnimJoint649.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint649.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment650 = x3d.HAnimSegment()
HAnimSegment650.setName("r_tarsal_proximal_phalanx_3")
HAnimSegment650.setDEF("hanim_r_tarsal_proximal_phalanx_3")
Transform651 = x3d.Transform()
Transform651.setTranslation(x3d.doubleToFloat([-0.0963,0.0065,-0.0065]))
Transform652 = x3d.Transform()

Transform652.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape653 = x3d.Shape()
Shape653.setUSE("HAnimJointShape")

Transform652.addChild(Shape653)

Transform651.addChild(Transform652)

HAnimSegment650.addChild(Transform651)
Shape654 = x3d.Shape()
LineSet655 = x3d.LineSet()
LineSet655.setVertexCount([2])
Coordinate656 = x3d.Coordinate()
Coordinate656.setPoint(x3d.doubleToFloat([-0.0963,0.0065,-0.0065,-0.0987,0.0034,0.0086]))

LineSet655.setCoord(Coordinate656)

LineSet655.addComments(x3d.CommentsBlock("""from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2"""))
ColorRGBA657 = x3d.ColorRGBA()
ColorRGBA657.setUSE("HAnimSegmentLineColorRGBA")

LineSet655.setColor(ColorRGBA657)

Shape654.setGeometry(LineSet655)

HAnimSegment650.addChild(Shape654)

HAnimJoint649.addChild(HAnimSegment650)
HAnimJoint658 = x3d.HAnimJoint()
HAnimJoint658.setName("r_tarsal_proximal_interphalangeal_3")
HAnimJoint658.setDEF("hanim_r_tarsal_proximal_interphalangeal_3")
HAnimJoint658.setCenter(x3d.doubleToFloat([-0.0987,0.0034,0.0086]))
HAnimJoint658.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint658.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment659 = x3d.HAnimSegment()
HAnimSegment659.setName("r_tarsal_middle_phalanx_3")
HAnimSegment659.setDEF("hanim_r_tarsal_middle_phalanx_3")
Transform660 = x3d.Transform()
Transform660.setTranslation(x3d.doubleToFloat([-0.0987,0.0034,0.0086]))
Transform661 = x3d.Transform()

Transform661.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape662 = x3d.Shape()
Shape662.setUSE("HAnimJointShape")

Transform661.addChild(Shape662)

Transform660.addChild(Transform661)

HAnimSegment659.addChild(Transform660)
Shape663 = x3d.Shape()
LineSet664 = x3d.LineSet()
LineSet664.setVertexCount([2])
Coordinate665 = x3d.Coordinate()
Coordinate665.setPoint(x3d.doubleToFloat([-0.0987,0.0034,0.0086,-0.1002,0.0013,0.0178]))

LineSet664.setCoord(Coordinate665)

LineSet664.addComments(x3d.CommentsBlock("""from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2"""))
ColorRGBA666 = x3d.ColorRGBA()
ColorRGBA666.setUSE("HAnimSegmentLineColorRGBA")

LineSet664.setColor(ColorRGBA666)

Shape663.setGeometry(LineSet664)

HAnimSegment659.addChild(Shape663)

HAnimJoint658.addChild(HAnimSegment659)
HAnimJoint667 = x3d.HAnimJoint()
HAnimJoint667.setName("r_tarsal_distal_interphalangeal_3")
HAnimJoint667.setDEF("hanim_r_tarsal_distal_interphalangeal_3")
HAnimJoint667.setCenter(x3d.doubleToFloat([-0.1002,0.0013,0.0178]))
HAnimJoint667.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint667.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint658.addChild(HAnimJoint667)

HAnimJoint649.addChild(HAnimJoint658)

HAnimJoint640.addChild(HAnimJoint649)

HAnimJoint631.addChild(HAnimJoint640)

HAnimJoint542.addChild(HAnimJoint631)

HAnimJoint515.addChild(HAnimJoint542)
HAnimJoint668 = x3d.HAnimJoint()
HAnimJoint668.setName("r_calcaneocuboid")
HAnimJoint668.setDEF("hanim_r_calcaneocuboid")
HAnimJoint668.setCenter(x3d.doubleToFloat([-0.0889,0.0494,-0.1278]))
HAnimJoint668.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint668.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment669 = x3d.HAnimSegment()
HAnimSegment669.setName("r_calcaneus")
HAnimSegment669.setDEF("hanim_r_calcaneus")
Transform670 = x3d.Transform()
Transform670.setTranslation(x3d.doubleToFloat([-0.0889,0.0494,-0.1278]))
Transform671 = x3d.Transform()

Transform671.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape672 = x3d.Shape()
Shape672.setUSE("HAnimJointShape")

Transform671.addChild(Shape672)

Transform670.addChild(Transform671)

HAnimSegment669.addChild(Transform670)
Shape673 = x3d.Shape()
LineSet674 = x3d.LineSet()
LineSet674.setVertexCount([2])
Coordinate675 = x3d.Coordinate()
Coordinate675.setPoint(x3d.doubleToFloat([-0.0889,0.0494,-0.1278,-0.1105,0.0267,-0.0998]))

LineSet674.setCoord(Coordinate675)

LineSet674.addComments(x3d.CommentsBlock("""from r_calcaneocuboid to r_transversetarsal vertices 2"""))
ColorRGBA676 = x3d.ColorRGBA()
ColorRGBA676.setUSE("HAnimSegmentLineColorRGBA")

LineSet674.setColor(ColorRGBA676)

Shape673.setGeometry(LineSet674)

HAnimSegment669.addChild(Shape673)

HAnimJoint668.addChild(HAnimSegment669)
HAnimJoint677 = x3d.HAnimJoint()
HAnimJoint677.setName("r_transversetarsal")
HAnimJoint677.setDEF("hanim_r_transversetarsal")
HAnimJoint677.setCenter(x3d.doubleToFloat([-0.1105,0.0267,-0.0998]))
HAnimJoint677.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint677.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment678 = x3d.HAnimSegment()
HAnimSegment678.setName("r_cuboid")
HAnimSegment678.setDEF("hanim_r_cuboid")
Transform679 = x3d.Transform()
Transform679.setTranslation(x3d.doubleToFloat([-0.1105,0.0267,-0.0998]))
Transform680 = x3d.Transform()

Transform680.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape681 = x3d.Shape()
Shape681.setUSE("HAnimJointShape")

Transform680.addChild(Shape681)

Transform679.addChild(Transform680)

HAnimSegment678.addChild(Transform679)
Shape682 = x3d.Shape()
LineSet683 = x3d.LineSet()
LineSet683.setVertexCount([2])
Coordinate684 = x3d.Coordinate()
Coordinate684.setPoint(x3d.doubleToFloat([-0.1105,0.0267,-0.0998,-0.1063,0.016,-0.0634]))

LineSet683.setCoord(Coordinate684)

LineSet683.addComments(x3d.CommentsBlock("""from r_transversetarsal to r_tarsometatarsal_4 vertices 2"""))
ColorRGBA685 = x3d.ColorRGBA()
ColorRGBA685.setUSE("HAnimSegmentLineColorRGBA")

LineSet683.setColor(ColorRGBA685)

Shape682.setGeometry(LineSet683)

HAnimSegment678.addChild(Shape682)
Shape686 = x3d.Shape()
LineSet687 = x3d.LineSet()
LineSet687.setVertexCount([2])
Coordinate688 = x3d.Coordinate()
Coordinate688.setPoint(x3d.doubleToFloat([-0.1105,0.0267,-0.0998,-0.1206,0.0124,-0.0671]))

LineSet687.setCoord(Coordinate688)

LineSet687.addComments(x3d.CommentsBlock("""from r_transversetarsal to r_tarsometatarsal_5 vertices 2"""))
ColorRGBA689 = x3d.ColorRGBA()
ColorRGBA689.setUSE("HAnimSegmentLineColorRGBA")

LineSet687.setColor(ColorRGBA689)

Shape686.setGeometry(LineSet687)

HAnimSegment678.addChild(Shape686)

HAnimJoint677.addChild(HAnimSegment678)
HAnimJoint690 = x3d.HAnimJoint()
HAnimJoint690.setName("r_tarsometatarsal_4")
HAnimJoint690.setDEF("hanim_r_tarsometatarsal_4")
HAnimJoint690.setCenter(x3d.doubleToFloat([-0.1063,0.016,-0.0634]))
HAnimJoint690.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint690.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment691 = x3d.HAnimSegment()
HAnimSegment691.setName("r_metatarsal_4")
HAnimSegment691.setDEF("hanim_r_metatarsal_4")
Transform692 = x3d.Transform()
Transform692.setTranslation(x3d.doubleToFloat([-0.1063,0.016,-0.0634]))
Transform693 = x3d.Transform()

Transform693.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape694 = x3d.Shape()
Shape694.setUSE("HAnimJointShape")

Transform693.addChild(Shape694)

Transform692.addChild(Transform693)

HAnimSegment691.addChild(Transform692)
Shape695 = x3d.Shape()
LineSet696 = x3d.LineSet()
LineSet696.setVertexCount([2])
Coordinate697 = x3d.Coordinate()
Coordinate697.setPoint(x3d.doubleToFloat([-0.1063,0.016,-0.0634,-0.1097,0.0058,-0.0107]))

LineSet696.setCoord(Coordinate697)

LineSet696.addComments(x3d.CommentsBlock("""from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2"""))
ColorRGBA698 = x3d.ColorRGBA()
ColorRGBA698.setUSE("HAnimSegmentLineColorRGBA")

LineSet696.setColor(ColorRGBA698)

Shape695.setGeometry(LineSet696)

HAnimSegment691.addChild(Shape695)

HAnimJoint690.addChild(HAnimSegment691)
HAnimJoint699 = x3d.HAnimJoint()
HAnimJoint699.setName("r_metatarsophalangeal_4")
HAnimJoint699.setDEF("hanim_r_metatarsophalangeal_4")
HAnimJoint699.setCenter(x3d.doubleToFloat([-0.1097,0.0058,-0.0107]))
HAnimJoint699.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint699.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment700 = x3d.HAnimSegment()
HAnimSegment700.setName("r_tarsal_proximal_phalanx_4")
HAnimSegment700.setDEF("hanim_r_tarsal_proximal_phalanx_4")
Transform701 = x3d.Transform()
Transform701.setTranslation(x3d.doubleToFloat([-0.1097,0.0058,-0.0107]))
Transform702 = x3d.Transform()

Transform702.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape703 = x3d.Shape()
Shape703.setUSE("HAnimJointShape")

Transform702.addChild(Shape703)

Transform701.addChild(Transform702)

HAnimSegment700.addChild(Transform701)
Shape704 = x3d.Shape()
LineSet705 = x3d.LineSet()
LineSet705.setVertexCount([2])
Coordinate706 = x3d.Coordinate()
Coordinate706.setPoint(x3d.doubleToFloat([-0.1097,0.0058,-0.0107,-0.114,0.0037,0.0044]))

LineSet705.setCoord(Coordinate706)

LineSet705.addComments(x3d.CommentsBlock("""from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2"""))
ColorRGBA707 = x3d.ColorRGBA()
ColorRGBA707.setUSE("HAnimSegmentLineColorRGBA")

LineSet705.setColor(ColorRGBA707)

Shape704.setGeometry(LineSet705)

HAnimSegment700.addChild(Shape704)

HAnimJoint699.addChild(HAnimSegment700)
HAnimJoint708 = x3d.HAnimJoint()
HAnimJoint708.setName("r_tarsal_proximal_interphalangeal_4")
HAnimJoint708.setDEF("hanim_r_tarsal_proximal_interphalangeal_4")
HAnimJoint708.setCenter(x3d.doubleToFloat([-0.114,0.0037,0.0044]))
HAnimJoint708.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint708.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment709 = x3d.HAnimSegment()
HAnimSegment709.setName("r_tarsal_middle_phalanx_4")
HAnimSegment709.setDEF("hanim_r_tarsal_middle_phalanx_4")
Transform710 = x3d.Transform()
Transform710.setTranslation(x3d.doubleToFloat([-0.114,0.0037,0.0044]))
Transform711 = x3d.Transform()

Transform711.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape712 = x3d.Shape()
Shape712.setUSE("HAnimJointShape")

Transform711.addChild(Shape712)

Transform710.addChild(Transform711)

HAnimSegment709.addChild(Transform710)
Shape713 = x3d.Shape()
LineSet714 = x3d.LineSet()
LineSet714.setVertexCount([2])
Coordinate715 = x3d.Coordinate()
Coordinate715.setPoint(x3d.doubleToFloat([-0.114,0.0037,0.0044,-0.1155,0.0008,0.0118]))

LineSet714.setCoord(Coordinate715)

LineSet714.addComments(x3d.CommentsBlock("""from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2"""))
ColorRGBA716 = x3d.ColorRGBA()
ColorRGBA716.setUSE("HAnimSegmentLineColorRGBA")

LineSet714.setColor(ColorRGBA716)

Shape713.setGeometry(LineSet714)

HAnimSegment709.addChild(Shape713)

HAnimJoint708.addChild(HAnimSegment709)
HAnimJoint717 = x3d.HAnimJoint()
HAnimJoint717.setName("r_tarsal_distal_interphalangeal_4")
HAnimJoint717.setDEF("hanim_r_tarsal_distal_interphalangeal_4")
HAnimJoint717.setCenter(x3d.doubleToFloat([-0.1155,0.0008,0.0118]))
HAnimJoint717.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint717.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint708.addChild(HAnimJoint717)

HAnimJoint699.addChild(HAnimJoint708)

HAnimJoint690.addChild(HAnimJoint699)

HAnimJoint677.addChild(HAnimJoint690)
HAnimJoint718 = x3d.HAnimJoint()
HAnimJoint718.setName("r_tarsometatarsal_5")
HAnimJoint718.setDEF("hanim_r_tarsometatarsal_5")
HAnimJoint718.setCenter(x3d.doubleToFloat([-0.1206,0.0124,-0.0671]))
HAnimJoint718.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint718.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment719 = x3d.HAnimSegment()
HAnimSegment719.setName("r_metatarsal_5")
HAnimSegment719.setDEF("hanim_r_metatarsal_5")
Transform720 = x3d.Transform()
Transform720.setTranslation(x3d.doubleToFloat([-0.1206,0.0124,-0.0671]))
Transform721 = x3d.Transform()

Transform721.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape722 = x3d.Shape()
Shape722.setUSE("HAnimJointShape")

Transform721.addChild(Shape722)

Transform720.addChild(Transform721)

HAnimSegment719.addChild(Transform720)
Shape723 = x3d.Shape()
LineSet724 = x3d.LineSet()
LineSet724.setVertexCount([2])
Coordinate725 = x3d.Coordinate()
Coordinate725.setPoint(x3d.doubleToFloat([-0.1206,0.0124,-0.0671,-0.1239,0.0051,-0.0153]))

LineSet724.setCoord(Coordinate725)

LineSet724.addComments(x3d.CommentsBlock("""from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2"""))
ColorRGBA726 = x3d.ColorRGBA()
ColorRGBA726.setUSE("HAnimSegmentLineColorRGBA")

LineSet724.setColor(ColorRGBA726)

Shape723.setGeometry(LineSet724)

HAnimSegment719.addChild(Shape723)

HAnimJoint718.addChild(HAnimSegment719)
HAnimJoint727 = x3d.HAnimJoint()
HAnimJoint727.setName("r_metatarsophalangeal_5")
HAnimJoint727.setDEF("hanim_r_metatarsophalangeal_5")
HAnimJoint727.setCenter(x3d.doubleToFloat([-0.1239,0.0051,-0.0153]))
HAnimJoint727.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint727.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment728 = x3d.HAnimSegment()
HAnimSegment728.setName("r_tarsal_proximal_phalanx_5")
HAnimSegment728.setDEF("hanim_r_tarsal_proximal_phalanx_5")
Transform729 = x3d.Transform()
Transform729.setTranslation(x3d.doubleToFloat([-0.1239,0.0051,-0.0153]))
Transform730 = x3d.Transform()

Transform730.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape731 = x3d.Shape()
Shape731.setUSE("HAnimJointShape")

Transform730.addChild(Shape731)

Transform729.addChild(Transform730)

HAnimSegment728.addChild(Transform729)
Shape732 = x3d.Shape()
LineSet733 = x3d.LineSet()
LineSet733.setVertexCount([2])
Coordinate734 = x3d.Coordinate()
Coordinate734.setPoint(x3d.doubleToFloat([-0.1239,0.0051,-0.0153,-0.1262,0.0023,-0.0077]))

LineSet733.setCoord(Coordinate734)

LineSet733.addComments(x3d.CommentsBlock("""from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2"""))
ColorRGBA735 = x3d.ColorRGBA()
ColorRGBA735.setUSE("HAnimSegmentLineColorRGBA")

LineSet733.setColor(ColorRGBA735)

Shape732.setGeometry(LineSet733)

HAnimSegment728.addChild(Shape732)
HAnimSite736 = x3d.HAnimSite()
HAnimSite736.setName("r_metatarsal_phalanx_5")
HAnimSite736.setDEF("hanim_r_metatarsal_phalanx_5")
TouchSensor737 = x3d.TouchSensor()
TouchSensor737.setDescription("HAnimSite 60 r_metatarsal_phalanx_5")

HAnimSite736.addChild(TouchSensor737)
Shape738 = x3d.Shape()
Shape738.setUSE("HAnimSiteShape")

HAnimSite736.addChild(Shape738)
Billboard739 = x3d.Billboard()
Shape740 = x3d.Shape()
Text741 = x3d.Text()
Text741.setString(["60"])
FontStyle742 = x3d.FontStyle()
FontStyle742.setSize(0.035)

Text741.setFontStyle(FontStyle742)

Shape740.setGeometry(Text741)

Billboard739.addChild(Shape740)

HAnimSite736.addChild(Billboard739)

HAnimSegment728.addChild(HAnimSite736)

HAnimJoint727.addChild(HAnimSegment728)
HAnimJoint743 = x3d.HAnimJoint()
HAnimJoint743.setName("r_tarsal_proximal_interphalangeal_5")
HAnimJoint743.setDEF("hanim_r_tarsal_proximal_interphalangeal_5")
HAnimJoint743.setCenter(x3d.doubleToFloat([-0.1262,0.0023,-0.0077]))
HAnimJoint743.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint743.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment744 = x3d.HAnimSegment()
HAnimSegment744.setName("r_tarsal_middle_phalanx_5")
HAnimSegment744.setDEF("hanim_r_tarsal_middle_phalanx_5")
Transform745 = x3d.Transform()
Transform745.setTranslation(x3d.doubleToFloat([-0.1262,0.0023,-0.0077]))
Transform746 = x3d.Transform()

Transform746.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape747 = x3d.Shape()
Shape747.setUSE("HAnimJointShape")

Transform746.addChild(Shape747)

Transform745.addChild(Transform746)

HAnimSegment744.addChild(Transform745)
Shape748 = x3d.Shape()
LineSet749 = x3d.LineSet()
LineSet749.setVertexCount([2])
Coordinate750 = x3d.Coordinate()
Coordinate750.setPoint(x3d.doubleToFloat([-0.1262,0.0023,-0.0077,-0.1271,0,0]))

LineSet749.setCoord(Coordinate750)

LineSet749.addComments(x3d.CommentsBlock("""from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2"""))
ColorRGBA751 = x3d.ColorRGBA()
ColorRGBA751.setUSE("HAnimSegmentLineColorRGBA")

LineSet749.setColor(ColorRGBA751)

Shape748.setGeometry(LineSet749)

HAnimSegment744.addChild(Shape748)

HAnimJoint743.addChild(HAnimSegment744)
HAnimJoint752 = x3d.HAnimJoint()
HAnimJoint752.setName("r_tarsal_distal_interphalangeal_5")
HAnimJoint752.setDEF("hanim_r_tarsal_distal_interphalangeal_5")
HAnimJoint752.setCenter(x3d.doubleToFloat([-0.1271,0,0]))
HAnimJoint752.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint752.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint743.addChild(HAnimJoint752)

HAnimJoint727.addChild(HAnimJoint743)

HAnimJoint718.addChild(HAnimJoint727)

HAnimJoint677.addChild(HAnimJoint718)

HAnimJoint668.addChild(HAnimJoint677)

HAnimJoint515.addChild(HAnimJoint668)

HAnimJoint485.addChild(HAnimJoint515)

HAnimJoint448.addChild(HAnimJoint485)

HAnimJoint60.addChild(HAnimJoint448)

HAnimJoint47.addChild(HAnimJoint60)
HAnimJoint753 = x3d.HAnimJoint()
HAnimJoint753.setName("vl5")
HAnimJoint753.setDEF("hanim_vl5")
HAnimJoint753.setCenter(x3d.doubleToFloat([0.0028,1.0568,-0.0776]))
HAnimJoint753.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint753.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment754 = x3d.HAnimSegment()
HAnimSegment754.setName("l5")
HAnimSegment754.setDEF("hanim_l5")
Transform755 = x3d.Transform()
Transform755.setTranslation(x3d.doubleToFloat([0.0028,1.0568,-0.0776]))
Transform756 = x3d.Transform()

Transform756.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape757 = x3d.Shape()
Shape757.setUSE("HAnimJointShape")

Transform756.addChild(Shape757)

Transform755.addChild(Transform756)

HAnimSegment754.addChild(Transform755)
Shape758 = x3d.Shape()
LineSet759 = x3d.LineSet()
LineSet759.setVertexCount([2])
Coordinate760 = x3d.Coordinate()
Coordinate760.setPoint(x3d.doubleToFloat([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]))

LineSet759.setCoord(Coordinate760)

LineSet759.addComments(x3d.CommentsBlock("""from vl5 to vl4 vertices 2"""))
ColorRGBA761 = x3d.ColorRGBA()
ColorRGBA761.setUSE("HAnimSegmentLineColorRGBA")

LineSet759.setColor(ColorRGBA761)

Shape758.setGeometry(LineSet759)

HAnimSegment754.addChild(Shape758)
HAnimSite762 = x3d.HAnimSite()
HAnimSite762.setName("navel")
HAnimSite762.setDEF("hanim_navel")
HAnimSite762.setTranslation(x3d.doubleToFloat([0.0069,1.0966,0.1017]))
TouchSensor763 = x3d.TouchSensor()
TouchSensor763.setDescription("HAnimSite 84 navel")

HAnimSite762.addChild(TouchSensor763)
Shape764 = x3d.Shape()
Shape764.setUSE("HAnimSiteShape")

HAnimSite762.addChild(Shape764)
Billboard765 = x3d.Billboard()
Shape766 = x3d.Shape()
Text767 = x3d.Text()
Text767.setString(["84"])
FontStyle768 = x3d.FontStyle()
FontStyle768.setSize(0.035)

Text767.setFontStyle(FontStyle768)

Shape766.setGeometry(Text767)

Billboard765.addChild(Shape766)

HAnimSite762.addChild(Billboard765)

HAnimSegment754.addChild(HAnimSite762)
HAnimSite769 = x3d.HAnimSite()
HAnimSite769.setName("waist_preferred_anterior")
HAnimSite769.setDEF("hanim_waist_preferred_anterior")
TouchSensor770 = x3d.TouchSensor()
TouchSensor770.setDescription("HAnimSite 26 waist_preferred_anterior")

HAnimSite769.addChild(TouchSensor770)
Shape771 = x3d.Shape()
Shape771.setUSE("HAnimSiteShape")

HAnimSite769.addChild(Shape771)
Billboard772 = x3d.Billboard()
Shape773 = x3d.Shape()
Text774 = x3d.Text()
Text774.setString(["26"])
FontStyle775 = x3d.FontStyle()
FontStyle775.setSize(0.035)

Text774.setFontStyle(FontStyle775)

Shape773.setGeometry(Text774)

Billboard772.addChild(Shape773)

HAnimSite769.addChild(Billboard772)

HAnimSegment754.addChild(HAnimSite769)
HAnimSite776 = x3d.HAnimSite()
HAnimSite776.setName("waist_preferred_posterior")
HAnimSite776.setDEF("hanim_waist_preferred_posterior")
HAnimSite776.setTranslation(x3d.doubleToFloat([0.29,1.0915,-0.1091]))
TouchSensor777 = x3d.TouchSensor()
TouchSensor777.setDescription("HAnimSite 27 waist_preferred_posterior")

HAnimSite776.addChild(TouchSensor777)
Shape778 = x3d.Shape()
Shape778.setUSE("HAnimSiteShape")

HAnimSite776.addChild(Shape778)
Billboard779 = x3d.Billboard()
Shape780 = x3d.Shape()
Text781 = x3d.Text()
Text781.setString(["27"])
FontStyle782 = x3d.FontStyle()
FontStyle782.setSize(0.035)

Text781.setFontStyle(FontStyle782)

Shape780.setGeometry(Text781)

Billboard779.addChild(Shape780)

HAnimSite776.addChild(Billboard779)

HAnimSegment754.addChild(HAnimSite776)

HAnimJoint753.addChild(HAnimSegment754)
HAnimJoint783 = x3d.HAnimJoint()
HAnimJoint783.setName("vl4")
HAnimJoint783.setDEF("hanim_vl4")
HAnimJoint783.setCenter(x3d.doubleToFloat([0.0035,1.0925,-0.0787]))
HAnimJoint783.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint783.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment784 = x3d.HAnimSegment()
HAnimSegment784.setName("l4")
HAnimSegment784.setDEF("hanim_l4")
Transform785 = x3d.Transform()
Transform785.setTranslation(x3d.doubleToFloat([0.0035,1.0925,-0.0787]))
Transform786 = x3d.Transform()

Transform786.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape787 = x3d.Shape()
Shape787.setUSE("HAnimJointShape")

Transform786.addChild(Shape787)

Transform785.addChild(Transform786)

HAnimSegment784.addChild(Transform785)
Shape788 = x3d.Shape()
LineSet789 = x3d.LineSet()
LineSet789.setVertexCount([2])
Coordinate790 = x3d.Coordinate()
Coordinate790.setPoint(x3d.doubleToFloat([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]))

LineSet789.setCoord(Coordinate790)

LineSet789.addComments(x3d.CommentsBlock("""from vl4 to vl3 vertices 2"""))
ColorRGBA791 = x3d.ColorRGBA()
ColorRGBA791.setUSE("HAnimSegmentLineColorRGBA")

LineSet789.setColor(ColorRGBA791)

Shape788.setGeometry(LineSet789)

HAnimSegment784.addChild(Shape788)

HAnimJoint783.addChild(HAnimSegment784)
HAnimJoint792 = x3d.HAnimJoint()
HAnimJoint792.setName("vl3")
HAnimJoint792.setDEF("hanim_vl3")
HAnimJoint792.setCenter(x3d.doubleToFloat([0.0041,1.1276,-0.0796]))
HAnimJoint792.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint792.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment793 = x3d.HAnimSegment()
HAnimSegment793.setName("l3")
HAnimSegment793.setDEF("hanim_l3")
Transform794 = x3d.Transform()
Transform794.setTranslation(x3d.doubleToFloat([0.0041,1.1276,-0.0796]))
Transform795 = x3d.Transform()

Transform795.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape796 = x3d.Shape()
Shape796.setUSE("HAnimJointShape")

Transform795.addChild(Shape796)

Transform794.addChild(Transform795)

HAnimSegment793.addChild(Transform794)
Shape797 = x3d.Shape()
LineSet798 = x3d.LineSet()
LineSet798.setVertexCount([2])
Coordinate799 = x3d.Coordinate()
Coordinate799.setPoint(x3d.doubleToFloat([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]))

LineSet798.setCoord(Coordinate799)

LineSet798.addComments(x3d.CommentsBlock("""from vl3 to vl2 vertices 2"""))
ColorRGBA800 = x3d.ColorRGBA()
ColorRGBA800.setUSE("HAnimSegmentLineColorRGBA")

LineSet798.setColor(ColorRGBA800)

Shape797.setGeometry(LineSet798)

HAnimSegment793.addChild(Shape797)

HAnimJoint792.addChild(HAnimSegment793)
HAnimJoint801 = x3d.HAnimJoint()
HAnimJoint801.setName("vl2")
HAnimJoint801.setDEF("hanim_vl2")
HAnimJoint801.setCenter(x3d.doubleToFloat([0.0045,1.1546,-0.08]))
HAnimJoint801.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint801.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment802 = x3d.HAnimSegment()
HAnimSegment802.setName("l2")
HAnimSegment802.setDEF("hanim_l2")
Transform803 = x3d.Transform()
Transform803.setTranslation(x3d.doubleToFloat([0.0045,1.1546,-0.08]))
Transform804 = x3d.Transform()

Transform804.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape805 = x3d.Shape()
Shape805.setUSE("HAnimJointShape")

Transform804.addChild(Shape805)

Transform803.addChild(Transform804)

HAnimSegment802.addChild(Transform803)
Shape806 = x3d.Shape()
LineSet807 = x3d.LineSet()
LineSet807.setVertexCount([2])
Coordinate808 = x3d.Coordinate()
Coordinate808.setPoint(x3d.doubleToFloat([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]))

LineSet807.setCoord(Coordinate808)

LineSet807.addComments(x3d.CommentsBlock("""from vl2 to vl1 vertices 2"""))
ColorRGBA809 = x3d.ColorRGBA()
ColorRGBA809.setUSE("HAnimSegmentLineColorRGBA")

LineSet807.setColor(ColorRGBA809)

Shape806.setGeometry(LineSet807)

HAnimSegment802.addChild(Shape806)
HAnimSite810 = x3d.HAnimSite()
HAnimSite810.setName("l_rib10")
HAnimSite810.setDEF("hanim_l_rib10")
HAnimSite810.setTranslation(x3d.doubleToFloat([0.0871,1.1925,0.0992]))
TouchSensor811 = x3d.TouchSensor()
TouchSensor811.setDescription("HAnimSite 28 l_rib10")

HAnimSite810.addChild(TouchSensor811)
Shape812 = x3d.Shape()
Shape812.setUSE("HAnimSiteShape")

HAnimSite810.addChild(Shape812)
Billboard813 = x3d.Billboard()
Shape814 = x3d.Shape()
Text815 = x3d.Text()
Text815.setString(["28"])
FontStyle816 = x3d.FontStyle()
FontStyle816.setSize(0.035)

Text815.setFontStyle(FontStyle816)

Shape814.setGeometry(Text815)

Billboard813.addChild(Shape814)

HAnimSite810.addChild(Billboard813)

HAnimSegment802.addChild(HAnimSite810)
HAnimSite817 = x3d.HAnimSite()
HAnimSite817.setName("r_rib10")
HAnimSite817.setDEF("hanim_r_rib10")
HAnimSite817.setTranslation(x3d.doubleToFloat([-0.0711,1.1941,0.1016]))
TouchSensor818 = x3d.TouchSensor()
TouchSensor818.setDescription("HAnimSite 30 r_rib10")

HAnimSite817.addChild(TouchSensor818)
Shape819 = x3d.Shape()
Shape819.setUSE("HAnimSiteShape")

HAnimSite817.addChild(Shape819)
Billboard820 = x3d.Billboard()
Shape821 = x3d.Shape()
Text822 = x3d.Text()
Text822.setString(["30"])
FontStyle823 = x3d.FontStyle()
FontStyle823.setSize(0.035)

Text822.setFontStyle(FontStyle823)

Shape821.setGeometry(Text822)

Billboard820.addChild(Shape821)

HAnimSite817.addChild(Billboard820)

HAnimSegment802.addChild(HAnimSite817)
HAnimSite824 = x3d.HAnimSite()
HAnimSite824.setName("spine_2_middle_back")
HAnimSite824.setDEF("hanim_spine_2_middle_back")
TouchSensor825 = x3d.TouchSensor()
TouchSensor825.setDescription("HAnimSite spine_2_middle_back")

HAnimSite824.addChild(TouchSensor825)
Shape826 = x3d.Shape()
Shape826.setUSE("HAnimSiteShape")

HAnimSite824.addChild(Shape826)
Billboard827 = x3d.Billboard()
Shape828 = x3d.Shape()
Text829 = x3d.Text()
Text829.setString([""])
FontStyle830 = x3d.FontStyle()
FontStyle830.setSize(0.035)

Text829.setFontStyle(FontStyle830)

Shape828.setGeometry(Text829)

Billboard827.addChild(Shape828)

HAnimSite824.addChild(Billboard827)

HAnimSegment802.addChild(HAnimSite824)

HAnimJoint801.addChild(HAnimSegment802)
HAnimJoint831 = x3d.HAnimJoint()
HAnimJoint831.setName("vl1")
HAnimJoint831.setDEF("hanim_vl1")
HAnimJoint831.setCenter(x3d.doubleToFloat([0.0048,1.1912,-0.0805]))
HAnimJoint831.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint831.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment832 = x3d.HAnimSegment()
HAnimSegment832.setName("l1")
HAnimSegment832.setDEF("hanim_l1")
Transform833 = x3d.Transform()
Transform833.setTranslation(x3d.doubleToFloat([0.0048,1.1912,-0.0805]))
Transform834 = x3d.Transform()

Transform834.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape835 = x3d.Shape()
Shape835.setUSE("HAnimJointShape")

Transform834.addChild(Shape835)

Transform833.addChild(Transform834)

HAnimSegment832.addChild(Transform833)
Shape836 = x3d.Shape()
LineSet837 = x3d.LineSet()
LineSet837.setVertexCount([2])
Coordinate838 = x3d.Coordinate()
Coordinate838.setPoint(x3d.doubleToFloat([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]))

LineSet837.setCoord(Coordinate838)

LineSet837.addComments(x3d.CommentsBlock("""from vl1 to vt12 vertices 2"""))
ColorRGBA839 = x3d.ColorRGBA()
ColorRGBA839.setUSE("HAnimSegmentLineColorRGBA")

LineSet837.setColor(ColorRGBA839)

Shape836.setGeometry(LineSet837)

HAnimSegment832.addChild(Shape836)

HAnimJoint831.addChild(HAnimSegment832)
HAnimJoint840 = x3d.HAnimJoint()
HAnimJoint840.setName("vt12")
HAnimJoint840.setDEF("hanim_vt12")
HAnimJoint840.setCenter(x3d.doubleToFloat([0.0051,1.2278,-0.0808]))
HAnimJoint840.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint840.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment841 = x3d.HAnimSegment()
HAnimSegment841.setName("t12")
HAnimSegment841.setDEF("hanim_t12")
Transform842 = x3d.Transform()
Transform842.setTranslation(x3d.doubleToFloat([0.0051,1.2278,-0.0808]))
Transform843 = x3d.Transform()

Transform843.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape844 = x3d.Shape()
Shape844.setUSE("HAnimJointShape")

Transform843.addChild(Shape844)

Transform842.addChild(Transform843)

HAnimSegment841.addChild(Transform842)
Shape845 = x3d.Shape()
LineSet846 = x3d.LineSet()
LineSet846.setVertexCount([2])
Coordinate847 = x3d.Coordinate()
Coordinate847.setPoint(x3d.doubleToFloat([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]))

LineSet846.setCoord(Coordinate847)

LineSet846.addComments(x3d.CommentsBlock("""from vt12 to vt11 vertices 2"""))
ColorRGBA848 = x3d.ColorRGBA()
ColorRGBA848.setUSE("HAnimSegmentLineColorRGBA")

LineSet846.setColor(ColorRGBA848)

Shape845.setGeometry(LineSet846)

HAnimSegment841.addChild(Shape845)

HAnimJoint840.addChild(HAnimSegment841)
HAnimJoint849 = x3d.HAnimJoint()
HAnimJoint849.setName("vt11")
HAnimJoint849.setDEF("hanim_vt11")
HAnimJoint849.setCenter(x3d.doubleToFloat([0.0053,1.2679,-0.081]))
HAnimJoint849.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint849.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment850 = x3d.HAnimSegment()
HAnimSegment850.setName("t11")
HAnimSegment850.setDEF("hanim_t11")
Transform851 = x3d.Transform()
Transform851.setTranslation(x3d.doubleToFloat([0.0053,1.2679,-0.081]))
Transform852 = x3d.Transform()

Transform852.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape853 = x3d.Shape()
Shape853.setUSE("HAnimJointShape")

Transform852.addChild(Shape853)

Transform851.addChild(Transform852)

HAnimSegment850.addChild(Transform851)
Shape854 = x3d.Shape()
LineSet855 = x3d.LineSet()
LineSet855.setVertexCount([2])
Coordinate856 = x3d.Coordinate()
Coordinate856.setPoint(x3d.doubleToFloat([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]))

LineSet855.setCoord(Coordinate856)

LineSet855.addComments(x3d.CommentsBlock("""from vt11 to vt10 vertices 2"""))
ColorRGBA857 = x3d.ColorRGBA()
ColorRGBA857.setUSE("HAnimSegmentLineColorRGBA")

LineSet855.setColor(ColorRGBA857)

Shape854.setGeometry(LineSet855)

HAnimSegment850.addChild(Shape854)

HAnimJoint849.addChild(HAnimSegment850)
HAnimJoint858 = x3d.HAnimJoint()
HAnimJoint858.setName("vt10")
HAnimJoint858.setDEF("hanim_vt10")
HAnimJoint858.setCenter(x3d.doubleToFloat([0.0056,1.2848,-0.0822]))
HAnimJoint858.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint858.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment859 = x3d.HAnimSegment()
HAnimSegment859.setName("t10")
HAnimSegment859.setDEF("hanim_t10")
Transform860 = x3d.Transform()
Transform860.setTranslation(x3d.doubleToFloat([0.0056,1.2848,-0.0822]))
Transform861 = x3d.Transform()

Transform861.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape862 = x3d.Shape()
Shape862.setUSE("HAnimJointShape")

Transform861.addChild(Shape862)

Transform860.addChild(Transform861)

HAnimSegment859.addChild(Transform860)
Shape863 = x3d.Shape()
LineSet864 = x3d.LineSet()
LineSet864.setVertexCount([2])
Coordinate865 = x3d.Coordinate()
Coordinate865.setPoint(x3d.doubleToFloat([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]))

LineSet864.setCoord(Coordinate865)

LineSet864.addComments(x3d.CommentsBlock("""from vt10 to vt9 vertices 2"""))
ColorRGBA866 = x3d.ColorRGBA()
ColorRGBA866.setUSE("HAnimSegmentLineColorRGBA")

LineSet864.setColor(ColorRGBA866)

Shape863.setGeometry(LineSet864)

HAnimSegment859.addChild(Shape863)
HAnimSite867 = x3d.HAnimSite()
HAnimSite867.setName("substernale")
HAnimSite867.setDEF("hanim_substernale")
HAnimSite867.setTranslation(x3d.doubleToFloat([0.0085,1.2995,0.1147]))
TouchSensor868 = x3d.TouchSensor()
TouchSensor868.setDescription("HAnimSite 13 substernale")

HAnimSite867.addChild(TouchSensor868)
Shape869 = x3d.Shape()
Shape869.setUSE("HAnimSiteShape")

HAnimSite867.addChild(Shape869)
Billboard870 = x3d.Billboard()
Shape871 = x3d.Shape()
Text872 = x3d.Text()
Text872.setString(["13"])
FontStyle873 = x3d.FontStyle()
FontStyle873.setSize(0.035)

Text872.setFontStyle(FontStyle873)

Shape871.setGeometry(Text872)

Billboard870.addChild(Shape871)

HAnimSite867.addChild(Billboard870)

HAnimSegment859.addChild(HAnimSite867)

HAnimJoint858.addChild(HAnimSegment859)
HAnimJoint874 = x3d.HAnimJoint()
HAnimJoint874.setName("vt9")
HAnimJoint874.setDEF("hanim_vt9")
HAnimJoint874.setCenter(x3d.doubleToFloat([0.0057,1.3126,-0.0838]))
HAnimJoint874.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint874.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment875 = x3d.HAnimSegment()
HAnimSegment875.setName("t9")
HAnimSegment875.setDEF("hanim_t9")
Transform876 = x3d.Transform()
Transform876.setTranslation(x3d.doubleToFloat([0.0057,1.3126,-0.0838]))
Transform877 = x3d.Transform()

Transform877.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape878 = x3d.Shape()
Shape878.setUSE("HAnimJointShape")

Transform877.addChild(Shape878)

Transform876.addChild(Transform877)

HAnimSegment875.addChild(Transform876)
Shape879 = x3d.Shape()
LineSet880 = x3d.LineSet()
LineSet880.setVertexCount([2])
Coordinate881 = x3d.Coordinate()
Coordinate881.setPoint(x3d.doubleToFloat([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]))

LineSet880.setCoord(Coordinate881)

LineSet880.addComments(x3d.CommentsBlock("""from vt9 to vt8 vertices 2"""))
ColorRGBA882 = x3d.ColorRGBA()
ColorRGBA882.setUSE("HAnimSegmentLineColorRGBA")

LineSet880.setColor(ColorRGBA882)

Shape879.setGeometry(LineSet880)

HAnimSegment875.addChild(Shape879)
HAnimSite883 = x3d.HAnimSite()
HAnimSite883.setName("l_thelion")
HAnimSite883.setDEF("hanim_l_thelion")
HAnimSite883.setTranslation(x3d.doubleToFloat([0.0918,1.3382,0.1192]))
TouchSensor884 = x3d.TouchSensor()
TouchSensor884.setDescription("HAnimSite 29 l_thelion")

HAnimSite883.addChild(TouchSensor884)
Shape885 = x3d.Shape()
Shape885.setUSE("HAnimSiteShape")

HAnimSite883.addChild(Shape885)
Billboard886 = x3d.Billboard()
Shape887 = x3d.Shape()
Text888 = x3d.Text()
Text888.setString(["29"])
FontStyle889 = x3d.FontStyle()
FontStyle889.setSize(0.035)

Text888.setFontStyle(FontStyle889)

Shape887.setGeometry(Text888)

Billboard886.addChild(Shape887)

HAnimSite883.addChild(Billboard886)

HAnimSegment875.addChild(HAnimSite883)
HAnimSite890 = x3d.HAnimSite()
HAnimSite890.setName("r_thelion")
HAnimSite890.setDEF("hanim_r_thelion")
HAnimSite890.setTranslation(x3d.doubleToFloat([-0.0736,1.3385,0.1217]))
TouchSensor891 = x3d.TouchSensor()
TouchSensor891.setDescription("HAnimSite 31 r_thelion")

HAnimSite890.addChild(TouchSensor891)
Shape892 = x3d.Shape()
Shape892.setUSE("HAnimSiteShape")

HAnimSite890.addChild(Shape892)
Billboard893 = x3d.Billboard()
Shape894 = x3d.Shape()
Text895 = x3d.Text()
Text895.setString(["31"])
FontStyle896 = x3d.FontStyle()
FontStyle896.setSize(0.035)

Text895.setFontStyle(FontStyle896)

Shape894.setGeometry(Text895)

Billboard893.addChild(Shape894)

HAnimSite890.addChild(Billboard893)

HAnimSegment875.addChild(HAnimSite890)

HAnimJoint874.addChild(HAnimSegment875)
HAnimJoint897 = x3d.HAnimJoint()
HAnimJoint897.setName("vt8")
HAnimJoint897.setDEF("hanim_vt8")
HAnimJoint897.setCenter(x3d.doubleToFloat([0.0057,1.3382,-0.0845]))
HAnimJoint897.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint897.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment898 = x3d.HAnimSegment()
HAnimSegment898.setName("t8")
HAnimSegment898.setDEF("hanim_t8")
Transform899 = x3d.Transform()
Transform899.setTranslation(x3d.doubleToFloat([0.0057,1.3382,-0.0845]))
Transform900 = x3d.Transform()

Transform900.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape901 = x3d.Shape()
Shape901.setUSE("HAnimJointShape")

Transform900.addChild(Shape901)

Transform899.addChild(Transform900)

HAnimSegment898.addChild(Transform899)
Shape902 = x3d.Shape()
LineSet903 = x3d.LineSet()
LineSet903.setVertexCount([2])
Coordinate904 = x3d.Coordinate()
Coordinate904.setPoint(x3d.doubleToFloat([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]))

LineSet903.setCoord(Coordinate904)

LineSet903.addComments(x3d.CommentsBlock("""from vt8 to vt7 vertices 2"""))
ColorRGBA905 = x3d.ColorRGBA()
ColorRGBA905.setUSE("HAnimSegmentLineColorRGBA")

LineSet903.setColor(ColorRGBA905)

Shape902.setGeometry(LineSet903)

HAnimSegment898.addChild(Shape902)

HAnimJoint897.addChild(HAnimSegment898)
HAnimJoint906 = x3d.HAnimJoint()
HAnimJoint906.setName("vt7")
HAnimJoint906.setDEF("hanim_vt7")
HAnimJoint906.setCenter(x3d.doubleToFloat([0.0058,1.3625,-0.0833]))
HAnimJoint906.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint906.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment907 = x3d.HAnimSegment()
HAnimSegment907.setName("t7")
HAnimSegment907.setDEF("hanim_t7")
Transform908 = x3d.Transform()
Transform908.setTranslation(x3d.doubleToFloat([0.0058,1.3625,-0.0833]))
Transform909 = x3d.Transform()

Transform909.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape910 = x3d.Shape()
Shape910.setUSE("HAnimJointShape")

Transform909.addChild(Shape910)

Transform908.addChild(Transform909)

HAnimSegment907.addChild(Transform908)
Shape911 = x3d.Shape()
LineSet912 = x3d.LineSet()
LineSet912.setVertexCount([2])
Coordinate913 = x3d.Coordinate()
Coordinate913.setPoint(x3d.doubleToFloat([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]))

LineSet912.setCoord(Coordinate913)

LineSet912.addComments(x3d.CommentsBlock("""from vt7 to vt6 vertices 2"""))
ColorRGBA914 = x3d.ColorRGBA()
ColorRGBA914.setUSE("HAnimSegmentLineColorRGBA")

LineSet912.setColor(ColorRGBA914)

Shape911.setGeometry(LineSet912)

HAnimSegment907.addChild(Shape911)

HAnimJoint906.addChild(HAnimSegment907)
HAnimJoint915 = x3d.HAnimJoint()
HAnimJoint915.setName("vt6")
HAnimJoint915.setDEF("hanim_vt6")
HAnimJoint915.setCenter(x3d.doubleToFloat([0.0059,1.3866,-0.08]))
HAnimJoint915.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint915.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment916 = x3d.HAnimSegment()
HAnimSegment916.setName("t6")
HAnimSegment916.setDEF("hanim_t6")
Transform917 = x3d.Transform()
Transform917.setTranslation(x3d.doubleToFloat([0.0059,1.3866,-0.08]))
Transform918 = x3d.Transform()

Transform918.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape919 = x3d.Shape()
Shape919.setUSE("HAnimJointShape")

Transform918.addChild(Shape919)

Transform917.addChild(Transform918)

HAnimSegment916.addChild(Transform917)
Shape920 = x3d.Shape()
LineSet921 = x3d.LineSet()
LineSet921.setVertexCount([2])
Coordinate922 = x3d.Coordinate()
Coordinate922.setPoint(x3d.doubleToFloat([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]))

LineSet921.setCoord(Coordinate922)

LineSet921.addComments(x3d.CommentsBlock("""from vt6 to vt5 vertices 2"""))
ColorRGBA923 = x3d.ColorRGBA()
ColorRGBA923.setUSE("HAnimSegmentLineColorRGBA")

LineSet921.setColor(ColorRGBA923)

Shape920.setGeometry(LineSet921)

HAnimSegment916.addChild(Shape920)
HAnimSite924 = x3d.HAnimSite()
HAnimSite924.setName("l_chest_midsagittal_plane")
HAnimSite924.setDEF("hanim_l_chest_midsagittal_plane")
TouchSensor925 = x3d.TouchSensor()
TouchSensor925.setDescription("HAnimSite 94 l_chest_midsagittal_plane")

HAnimSite924.addChild(TouchSensor925)
Shape926 = x3d.Shape()
Shape926.setUSE("HAnimSiteShape")

HAnimSite924.addChild(Shape926)
Billboard927 = x3d.Billboard()
Shape928 = x3d.Shape()
Text929 = x3d.Text()
Text929.setString(["94"])
FontStyle930 = x3d.FontStyle()
FontStyle930.setSize(0.035)

Text929.setFontStyle(FontStyle930)

Shape928.setGeometry(Text929)

Billboard927.addChild(Shape928)

HAnimSite924.addChild(Billboard927)

HAnimSegment916.addChild(HAnimSite924)
HAnimSite931 = x3d.HAnimSite()
HAnimSite931.setName("mesosternale")
HAnimSite931.setDEF("hanim_mesosternale")
TouchSensor932 = x3d.TouchSensor()
TouchSensor932.setDescription("HAnimSite 88 mesosternale")

HAnimSite931.addChild(TouchSensor932)
Shape933 = x3d.Shape()
Shape933.setUSE("HAnimSiteShape")

HAnimSite931.addChild(Shape933)
Billboard934 = x3d.Billboard()
Shape935 = x3d.Shape()
Text936 = x3d.Text()
Text936.setString(["88"])
FontStyle937 = x3d.FontStyle()
FontStyle937.setSize(0.035)

Text936.setFontStyle(FontStyle937)

Shape935.setGeometry(Text936)

Billboard934.addChild(Shape935)

HAnimSite931.addChild(Billboard934)

HAnimSegment916.addChild(HAnimSite931)
HAnimSite938 = x3d.HAnimSite()
HAnimSite938.setName("r_chest_midsagittal_plane")
HAnimSite938.setDEF("hanim_r_chest_midsagittal_plane")
TouchSensor939 = x3d.TouchSensor()
TouchSensor939.setDescription("HAnimSite 95 r_chest_midsagittal_plane")

HAnimSite938.addChild(TouchSensor939)
Shape940 = x3d.Shape()
Shape940.setUSE("HAnimSiteShape")

HAnimSite938.addChild(Shape940)
Billboard941 = x3d.Billboard()
Shape942 = x3d.Shape()
Text943 = x3d.Text()
Text943.setString(["95"])
FontStyle944 = x3d.FontStyle()
FontStyle944.setSize(0.035)

Text943.setFontStyle(FontStyle944)

Shape942.setGeometry(Text943)

Billboard941.addChild(Shape942)

HAnimSite938.addChild(Billboard941)

HAnimSegment916.addChild(HAnimSite938)
HAnimSite945 = x3d.HAnimSite()
HAnimSite945.setName("rear_center_midsagittal_plane")
HAnimSite945.setDEF("hanim_rear_center_midsagittal_plane")
TouchSensor946 = x3d.TouchSensor()
TouchSensor946.setDescription("HAnimSite 92 rear_center_midsagittal_plane")

HAnimSite945.addChild(TouchSensor946)
Shape947 = x3d.Shape()
Shape947.setUSE("HAnimSiteShape")

HAnimSite945.addChild(Shape947)
Billboard948 = x3d.Billboard()
Shape949 = x3d.Shape()
Text950 = x3d.Text()
Text950.setString(["92"])
FontStyle951 = x3d.FontStyle()
FontStyle951.setSize(0.035)

Text950.setFontStyle(FontStyle951)

Shape949.setGeometry(Text950)

Billboard948.addChild(Shape949)

HAnimSite945.addChild(Billboard948)

HAnimSegment916.addChild(HAnimSite945)

HAnimJoint915.addChild(HAnimSegment916)
HAnimJoint952 = x3d.HAnimJoint()
HAnimJoint952.setName("vt5")
HAnimJoint952.setDEF("hanim_vt5")
HAnimJoint952.setCenter(x3d.doubleToFloat([0.006,1.4102,-0.0745]))
HAnimJoint952.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint952.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment953 = x3d.HAnimSegment()
HAnimSegment953.setName("t5")
HAnimSegment953.setDEF("hanim_t5")
Transform954 = x3d.Transform()
Transform954.setTranslation(x3d.doubleToFloat([0.006,1.4102,-0.0745]))
Transform955 = x3d.Transform()

Transform955.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape956 = x3d.Shape()
Shape956.setUSE("HAnimJointShape")

Transform955.addChild(Shape956)

Transform954.addChild(Transform955)

HAnimSegment953.addChild(Transform954)
Shape957 = x3d.Shape()
LineSet958 = x3d.LineSet()
LineSet958.setVertexCount([2])
Coordinate959 = x3d.Coordinate()
Coordinate959.setPoint(x3d.doubleToFloat([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]))

LineSet958.setCoord(Coordinate959)

LineSet958.addComments(x3d.CommentsBlock("""from vt5 to vt4 vertices 2"""))
ColorRGBA960 = x3d.ColorRGBA()
ColorRGBA960.setUSE("HAnimSegmentLineColorRGBA")

LineSet958.setColor(ColorRGBA960)

Shape957.setGeometry(LineSet958)

HAnimSegment953.addChild(Shape957)
HAnimSite961 = x3d.HAnimSite()
HAnimSite961.setName("spine_1_middle_back")
HAnimSite961.setDEF("hanim_spine_1_middle_back")
TouchSensor962 = x3d.TouchSensor()
TouchSensor962.setDescription("HAnimSite 24 spine_1_middle_back")

HAnimSite961.addChild(TouchSensor962)
Shape963 = x3d.Shape()
Shape963.setUSE("HAnimSiteShape")

HAnimSite961.addChild(Shape963)
Billboard964 = x3d.Billboard()
Shape965 = x3d.Shape()
Text966 = x3d.Text()
Text966.setString(["24"])
FontStyle967 = x3d.FontStyle()
FontStyle967.setSize(0.035)

Text966.setFontStyle(FontStyle967)

Shape965.setGeometry(Text966)

Billboard964.addChild(Shape965)

HAnimSite961.addChild(Billboard964)

HAnimSegment953.addChild(HAnimSite961)

HAnimJoint952.addChild(HAnimSegment953)
HAnimJoint968 = x3d.HAnimJoint()
HAnimJoint968.setName("vt4")
HAnimJoint968.setDEF("hanim_vt4")
HAnimJoint968.setCenter(x3d.doubleToFloat([0.0061,1.432,-0.0675]))
HAnimJoint968.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint968.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment969 = x3d.HAnimSegment()
HAnimSegment969.setName("t4")
HAnimSegment969.setDEF("hanim_t4")
Transform970 = x3d.Transform()
Transform970.setTranslation(x3d.doubleToFloat([0.0061,1.432,-0.0675]))
Transform971 = x3d.Transform()

Transform971.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape972 = x3d.Shape()
Shape972.setUSE("HAnimJointShape")

Transform971.addChild(Shape972)

Transform970.addChild(Transform971)

HAnimSegment969.addChild(Transform970)
Shape973 = x3d.Shape()
LineSet974 = x3d.LineSet()
LineSet974.setVertexCount([2])
Coordinate975 = x3d.Coordinate()
Coordinate975.setPoint(x3d.doubleToFloat([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]))

LineSet974.setCoord(Coordinate975)

LineSet974.addComments(x3d.CommentsBlock("""from vt4 to vt3 vertices 2"""))
ColorRGBA976 = x3d.ColorRGBA()
ColorRGBA976.setUSE("HAnimSegmentLineColorRGBA")

LineSet974.setColor(ColorRGBA976)

Shape973.setGeometry(LineSet974)

HAnimSegment969.addChild(Shape973)

HAnimJoint968.addChild(HAnimSegment969)
HAnimJoint977 = x3d.HAnimJoint()
HAnimJoint977.setName("vt3")
HAnimJoint977.setDEF("hanim_vt3")
HAnimJoint977.setCenter(x3d.doubleToFloat([0.0062,1.4583,-0.057]))
HAnimJoint977.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint977.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment978 = x3d.HAnimSegment()
HAnimSegment978.setName("t3")
HAnimSegment978.setDEF("hanim_t3")
Transform979 = x3d.Transform()
Transform979.setTranslation(x3d.doubleToFloat([0.0062,1.4583,-0.057]))
Transform980 = x3d.Transform()

Transform980.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape981 = x3d.Shape()
Shape981.setUSE("HAnimJointShape")

Transform980.addChild(Shape981)

Transform979.addChild(Transform980)

HAnimSegment978.addChild(Transform979)
Shape982 = x3d.Shape()
LineSet983 = x3d.LineSet()
LineSet983.setVertexCount([2])
Coordinate984 = x3d.Coordinate()
Coordinate984.setPoint(x3d.doubleToFloat([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]))

LineSet983.setCoord(Coordinate984)

LineSet983.addComments(x3d.CommentsBlock("""from vt3 to vt2 vertices 2"""))
ColorRGBA985 = x3d.ColorRGBA()
ColorRGBA985.setUSE("HAnimSegmentLineColorRGBA")

LineSet983.setColor(ColorRGBA985)

Shape982.setGeometry(LineSet983)

HAnimSegment978.addChild(Shape982)

HAnimJoint977.addChild(HAnimSegment978)
HAnimJoint986 = x3d.HAnimJoint()
HAnimJoint986.setName("vt2")
HAnimJoint986.setDEF("hanim_vt2")
HAnimJoint986.setCenter(x3d.doubleToFloat([0.0063,1.4761,-0.0484]))
HAnimJoint986.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint986.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment987 = x3d.HAnimSegment()
HAnimSegment987.setName("t2")
HAnimSegment987.setDEF("hanim_t2")
Transform988 = x3d.Transform()
Transform988.setTranslation(x3d.doubleToFloat([0.0063,1.4761,-0.0484]))
Transform989 = x3d.Transform()

Transform989.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape990 = x3d.Shape()
Shape990.setUSE("HAnimJointShape")

Transform989.addChild(Shape990)

Transform988.addChild(Transform989)

HAnimSegment987.addChild(Transform988)
Shape991 = x3d.Shape()
LineSet992 = x3d.LineSet()
LineSet992.setVertexCount([2])
Coordinate993 = x3d.Coordinate()
Coordinate993.setPoint(x3d.doubleToFloat([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]))

LineSet992.setCoord(Coordinate993)

LineSet992.addComments(x3d.CommentsBlock("""from vt2 to vt1 vertices 2"""))
ColorRGBA994 = x3d.ColorRGBA()
ColorRGBA994.setUSE("HAnimSegmentLineColorRGBA")

LineSet992.setColor(ColorRGBA994)

Shape991.setGeometry(LineSet992)

HAnimSegment987.addChild(Shape991)

HAnimJoint986.addChild(HAnimSegment987)
HAnimJoint995 = x3d.HAnimJoint()
HAnimJoint995.setName("vt1")
HAnimJoint995.setDEF("hanim_vt1")
HAnimJoint995.setCenter(x3d.doubleToFloat([0.0065,1.4951,-0.0387]))
HAnimJoint995.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint995.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment996 = x3d.HAnimSegment()
HAnimSegment996.setName("t1")
HAnimSegment996.setDEF("hanim_t1")
Transform997 = x3d.Transform()
Transform997.setTranslation(x3d.doubleToFloat([0.0065,1.4951,-0.0387]))
Transform998 = x3d.Transform()

Transform998.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape999 = x3d.Shape()
Shape999.setUSE("HAnimJointShape")

Transform998.addChild(Shape999)

Transform997.addChild(Transform998)

HAnimSegment996.addChild(Transform997)
Shape1000 = x3d.Shape()
LineSet1001 = x3d.LineSet()
LineSet1001.setVertexCount([2])
Coordinate1002 = x3d.Coordinate()
Coordinate1002.setPoint(x3d.doubleToFloat([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]))

LineSet1001.setCoord(Coordinate1002)

LineSet1001.addComments(x3d.CommentsBlock("""from vt1 to vc7 vertices 2"""))
ColorRGBA1003 = x3d.ColorRGBA()
ColorRGBA1003.setUSE("HAnimSegmentLineColorRGBA")

LineSet1001.setColor(ColorRGBA1003)

Shape1000.setGeometry(LineSet1001)

HAnimSegment996.addChild(Shape1000)
HAnimSite1004 = x3d.HAnimSite()
HAnimSite1004.setName("cervicale")
HAnimSite1004.setDEF("hanim_cervicale")
HAnimSite1004.setTranslation(x3d.doubleToFloat([0.0064,1.52,-0.0815]))
TouchSensor1005 = x3d.TouchSensor()
TouchSensor1005.setDescription("HAnimSite 10 cervicale")

HAnimSite1004.addChild(TouchSensor1005)
Shape1006 = x3d.Shape()
Shape1006.setUSE("HAnimSiteShape")

HAnimSite1004.addChild(Shape1006)
Billboard1007 = x3d.Billboard()
Shape1008 = x3d.Shape()
Text1009 = x3d.Text()
Text1009.setString(["10"])
FontStyle1010 = x3d.FontStyle()
FontStyle1010.setSize(0.035)

Text1009.setFontStyle(FontStyle1010)

Shape1008.setGeometry(Text1009)

Billboard1007.addChild(Shape1008)

HAnimSite1004.addChild(Billboard1007)

HAnimSegment996.addChild(HAnimSite1004)
HAnimSite1011 = x3d.HAnimSite()
HAnimSite1011.setName("suprasternale")
HAnimSite1011.setDEF("hanim_suprasternale")
HAnimSite1011.setTranslation(x3d.doubleToFloat([0.0084,1.4714,0.0551]))
TouchSensor1012 = x3d.TouchSensor()
TouchSensor1012.setDescription("HAnimSite 12 suprasternale")

HAnimSite1011.addChild(TouchSensor1012)
Shape1013 = x3d.Shape()
Shape1013.setUSE("HAnimSiteShape")

HAnimSite1011.addChild(Shape1013)
Billboard1014 = x3d.Billboard()
Shape1015 = x3d.Shape()
Text1016 = x3d.Text()
Text1016.setString(["12"])
FontStyle1017 = x3d.FontStyle()
FontStyle1017.setSize(0.035)

Text1016.setFontStyle(FontStyle1017)

Shape1015.setGeometry(Text1016)

Billboard1014.addChild(Shape1015)

HAnimSite1011.addChild(Billboard1014)

HAnimSegment996.addChild(HAnimSite1011)
Shape1018 = x3d.Shape()
LineSet1019 = x3d.LineSet()
LineSet1019.setVertexCount([2])
Coordinate1020 = x3d.Coordinate()
Coordinate1020.setPoint(x3d.doubleToFloat([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]))

LineSet1019.setCoord(Coordinate1020)

LineSet1019.addComments(x3d.CommentsBlock("""from vt1 to l_sternoclavicular vertices 2"""))
ColorRGBA1021 = x3d.ColorRGBA()
ColorRGBA1021.setUSE("HAnimSegmentLineColorRGBA")

LineSet1019.setColor(ColorRGBA1021)

Shape1018.setGeometry(LineSet1019)

HAnimSegment996.addChild(Shape1018)
Shape1022 = x3d.Shape()
LineSet1023 = x3d.LineSet()
LineSet1023.setVertexCount([2])
Coordinate1024 = x3d.Coordinate()
Coordinate1024.setPoint(x3d.doubleToFloat([0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]))

LineSet1023.setCoord(Coordinate1024)

LineSet1023.addComments(x3d.CommentsBlock("""from vt1 to r_sternoclavicular vertices 2"""))
ColorRGBA1025 = x3d.ColorRGBA()
ColorRGBA1025.setUSE("HAnimSegmentLineColorRGBA")

LineSet1023.setColor(ColorRGBA1025)

Shape1022.setGeometry(LineSet1023)

HAnimSegment996.addChild(Shape1022)

HAnimJoint995.addChild(HAnimSegment996)
HAnimJoint1026 = x3d.HAnimJoint()
HAnimJoint1026.setName("vc7")
HAnimJoint1026.setDEF("hanim_vc7")
HAnimJoint1026.setCenter(x3d.doubleToFloat([0.0066,1.5132,-0.0301]))
HAnimJoint1026.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1026.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1027 = x3d.HAnimSegment()
HAnimSegment1027.setName("c7")
HAnimSegment1027.setDEF("hanim_c7")
Transform1028 = x3d.Transform()
Transform1028.setTranslation(x3d.doubleToFloat([0.0066,1.5132,-0.0301]))
Transform1029 = x3d.Transform()

Transform1029.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1030 = x3d.Shape()
Shape1030.setUSE("HAnimJointShape")

Transform1029.addChild(Shape1030)

Transform1028.addChild(Transform1029)

HAnimSegment1027.addChild(Transform1028)
Shape1031 = x3d.Shape()
LineSet1032 = x3d.LineSet()
LineSet1032.setVertexCount([2])
Coordinate1033 = x3d.Coordinate()
Coordinate1033.setPoint(x3d.doubleToFloat([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]))

LineSet1032.setCoord(Coordinate1033)

LineSet1032.addComments(x3d.CommentsBlock("""from vc7 to vc6 vertices 2"""))
ColorRGBA1034 = x3d.ColorRGBA()
ColorRGBA1034.setUSE("HAnimSegmentLineColorRGBA")

LineSet1032.setColor(ColorRGBA1034)

Shape1031.setGeometry(LineSet1032)

HAnimSegment1027.addChild(Shape1031)
HAnimSite1035 = x3d.HAnimSite()
HAnimSite1035.setName("l_neck_base")
HAnimSite1035.setDEF("hanim_l_neck_base")
HAnimSite1035.setTranslation(x3d.doubleToFloat([0.0646,1.5141,-0.038]))
TouchSensor1036 = x3d.TouchSensor()
TouchSensor1036.setDescription("HAnimSite 82 l_neck_base")

HAnimSite1035.addChild(TouchSensor1036)
Shape1037 = x3d.Shape()
Shape1037.setUSE("HAnimSiteShape")

HAnimSite1035.addChild(Shape1037)
Billboard1038 = x3d.Billboard()
Shape1039 = x3d.Shape()
Text1040 = x3d.Text()
Text1040.setString(["82"])
FontStyle1041 = x3d.FontStyle()
FontStyle1041.setSize(0.035)

Text1040.setFontStyle(FontStyle1041)

Shape1039.setGeometry(Text1040)

Billboard1038.addChild(Shape1039)

HAnimSite1035.addChild(Billboard1038)

HAnimSegment1027.addChild(HAnimSite1035)
HAnimSite1042 = x3d.HAnimSite()
HAnimSite1042.setName("r_neck_base")
HAnimSite1042.setDEF("hanim_r_neck_base")
HAnimSite1042.setTranslation(x3d.doubleToFloat([-0.0419,1.5149,-0.022]))
TouchSensor1043 = x3d.TouchSensor()
TouchSensor1043.setDescription("HAnimSite 83 r_neck_base")

HAnimSite1042.addChild(TouchSensor1043)
Shape1044 = x3d.Shape()
Shape1044.setUSE("HAnimSiteShape")

HAnimSite1042.addChild(Shape1044)
Billboard1045 = x3d.Billboard()
Shape1046 = x3d.Shape()
Text1047 = x3d.Text()
Text1047.setString(["83"])
FontStyle1048 = x3d.FontStyle()
FontStyle1048.setSize(0.035)

Text1047.setFontStyle(FontStyle1048)

Shape1046.setGeometry(Text1047)

Billboard1045.addChild(Shape1046)

HAnimSite1042.addChild(Billboard1045)

HAnimSegment1027.addChild(HAnimSite1042)

HAnimJoint1026.addChild(HAnimSegment1027)
HAnimJoint1049 = x3d.HAnimJoint()
HAnimJoint1049.setName("vc6")
HAnimJoint1049.setDEF("hanim_vc6")
HAnimJoint1049.setCenter(x3d.doubleToFloat([0.0066,1.5357,-0.0143]))
HAnimJoint1049.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1049.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1050 = x3d.HAnimSegment()
HAnimSegment1050.setName("c6")
HAnimSegment1050.setDEF("hanim_c6")
Transform1051 = x3d.Transform()
Transform1051.setTranslation(x3d.doubleToFloat([0.0066,1.5357,-0.0143]))
Transform1052 = x3d.Transform()

Transform1052.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1053 = x3d.Shape()
Shape1053.setUSE("HAnimJointShape")

Transform1052.addChild(Shape1053)

Transform1051.addChild(Transform1052)

HAnimSegment1050.addChild(Transform1051)
Shape1054 = x3d.Shape()
LineSet1055 = x3d.LineSet()
LineSet1055.setVertexCount([2])
Coordinate1056 = x3d.Coordinate()
Coordinate1056.setPoint(x3d.doubleToFloat([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]))

LineSet1055.setCoord(Coordinate1056)

LineSet1055.addComments(x3d.CommentsBlock("""from vc6 to vc5 vertices 2"""))
ColorRGBA1057 = x3d.ColorRGBA()
ColorRGBA1057.setUSE("HAnimSegmentLineColorRGBA")

LineSet1055.setColor(ColorRGBA1057)

Shape1054.setGeometry(LineSet1055)

HAnimSegment1050.addChild(Shape1054)

HAnimJoint1049.addChild(HAnimSegment1050)
HAnimJoint1058 = x3d.HAnimJoint()
HAnimJoint1058.setName("vc5")
HAnimJoint1058.setDEF("hanim_vc5")
HAnimJoint1058.setCenter(x3d.doubleToFloat([0.0066,1.552,-0.0082]))
HAnimJoint1058.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1058.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1059 = x3d.HAnimSegment()
HAnimSegment1059.setName("c5")
HAnimSegment1059.setDEF("hanim_c5")
Transform1060 = x3d.Transform()
Transform1060.setTranslation(x3d.doubleToFloat([0.0066,1.552,-0.0082]))
Transform1061 = x3d.Transform()

Transform1061.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1062 = x3d.Shape()
Shape1062.setUSE("HAnimJointShape")

Transform1061.addChild(Shape1062)

Transform1060.addChild(Transform1061)

HAnimSegment1059.addChild(Transform1060)
Shape1063 = x3d.Shape()
LineSet1064 = x3d.LineSet()
LineSet1064.setVertexCount([2])
Coordinate1065 = x3d.Coordinate()
Coordinate1065.setPoint(x3d.doubleToFloat([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]))

LineSet1064.setCoord(Coordinate1065)

LineSet1064.addComments(x3d.CommentsBlock("""from vc5 to vc4 vertices 2"""))
ColorRGBA1066 = x3d.ColorRGBA()
ColorRGBA1066.setUSE("HAnimSegmentLineColorRGBA")

LineSet1064.setColor(ColorRGBA1066)

Shape1063.setGeometry(LineSet1064)

HAnimSegment1059.addChild(Shape1063)

HAnimJoint1058.addChild(HAnimSegment1059)
HAnimJoint1067 = x3d.HAnimJoint()
HAnimJoint1067.setName("vc4")
HAnimJoint1067.setDEF("hanim_vc4")
HAnimJoint1067.setCenter(x3d.doubleToFloat([0.0066,1.5662,-0.0084]))
HAnimJoint1067.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1067.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1068 = x3d.HAnimSegment()
HAnimSegment1068.setName("c4")
HAnimSegment1068.setDEF("hanim_c4")
Transform1069 = x3d.Transform()
Transform1069.setTranslation(x3d.doubleToFloat([0.0066,1.5662,-0.0084]))
Transform1070 = x3d.Transform()

Transform1070.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1071 = x3d.Shape()
Shape1071.setUSE("HAnimJointShape")

Transform1070.addChild(Shape1071)

Transform1069.addChild(Transform1070)

HAnimSegment1068.addChild(Transform1069)
Shape1072 = x3d.Shape()
LineSet1073 = x3d.LineSet()
LineSet1073.setVertexCount([2])
Coordinate1074 = x3d.Coordinate()
Coordinate1074.setPoint(x3d.doubleToFloat([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]))

LineSet1073.setCoord(Coordinate1074)

LineSet1073.addComments(x3d.CommentsBlock("""from vc4 to vc3 vertices 2"""))
ColorRGBA1075 = x3d.ColorRGBA()
ColorRGBA1075.setUSE("HAnimSegmentLineColorRGBA")

LineSet1073.setColor(ColorRGBA1075)

Shape1072.setGeometry(LineSet1073)

HAnimSegment1068.addChild(Shape1072)

HAnimJoint1067.addChild(HAnimSegment1068)
HAnimJoint1076 = x3d.HAnimJoint()
HAnimJoint1076.setName("vc3")
HAnimJoint1076.setDEF("hanim_vc3")
HAnimJoint1076.setCenter(x3d.doubleToFloat([0.0066,1.58,-0.0103]))
HAnimJoint1076.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1076.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1077 = x3d.HAnimSegment()
HAnimSegment1077.setName("c3")
HAnimSegment1077.setDEF("hanim_c3")
Transform1078 = x3d.Transform()
Transform1078.setTranslation(x3d.doubleToFloat([0.0066,1.58,-0.0103]))
Transform1079 = x3d.Transform()

Transform1079.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1080 = x3d.Shape()
Shape1080.setUSE("HAnimJointShape")

Transform1079.addChild(Shape1080)

Transform1078.addChild(Transform1079)

HAnimSegment1077.addChild(Transform1078)
Shape1081 = x3d.Shape()
LineSet1082 = x3d.LineSet()
LineSet1082.setVertexCount([2])
Coordinate1083 = x3d.Coordinate()
Coordinate1083.setPoint(x3d.doubleToFloat([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]))

LineSet1082.setCoord(Coordinate1083)

LineSet1082.addComments(x3d.CommentsBlock("""from vc3 to vc2 vertices 2"""))
ColorRGBA1084 = x3d.ColorRGBA()
ColorRGBA1084.setUSE("HAnimSegmentLineColorRGBA")

LineSet1082.setColor(ColorRGBA1084)

Shape1081.setGeometry(LineSet1082)

HAnimSegment1077.addChild(Shape1081)

HAnimJoint1076.addChild(HAnimSegment1077)
HAnimJoint1085 = x3d.HAnimJoint()
HAnimJoint1085.setName("vc2")
HAnimJoint1085.setDEF("hanim_vc2")
HAnimJoint1085.setCenter(x3d.doubleToFloat([0.0066,1.5928,-0.0103]))
HAnimJoint1085.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1085.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1086 = x3d.HAnimSegment()
HAnimSegment1086.setName("c2")
HAnimSegment1086.setDEF("hanim_c2")
Transform1087 = x3d.Transform()
Transform1087.setTranslation(x3d.doubleToFloat([0.0066,1.5928,-0.0103]))
Transform1088 = x3d.Transform()

Transform1088.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1089 = x3d.Shape()
Shape1089.setUSE("HAnimJointShape")

Transform1088.addChild(Shape1089)

Transform1087.addChild(Transform1088)

HAnimSegment1086.addChild(Transform1087)
Shape1090 = x3d.Shape()
LineSet1091 = x3d.LineSet()
LineSet1091.setVertexCount([2])
Coordinate1092 = x3d.Coordinate()
Coordinate1092.setPoint(x3d.doubleToFloat([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]))

LineSet1091.setCoord(Coordinate1092)

LineSet1091.addComments(x3d.CommentsBlock("""from vc2 to vc1 vertices 2"""))
ColorRGBA1093 = x3d.ColorRGBA()
ColorRGBA1093.setUSE("HAnimSegmentLineColorRGBA")

LineSet1091.setColor(ColorRGBA1093)

Shape1090.setGeometry(LineSet1091)

HAnimSegment1086.addChild(Shape1090)
HAnimSite1094 = x3d.HAnimSite()
HAnimSite1094.setName("adams_apple")
HAnimSite1094.setDEF("hanim_adams_apple")
TouchSensor1095 = x3d.TouchSensor()
TouchSensor1095.setDescription("HAnimSite 11 adams_apple")

HAnimSite1094.addChild(TouchSensor1095)
Shape1096 = x3d.Shape()
Shape1096.setUSE("HAnimSiteShape")

HAnimSite1094.addChild(Shape1096)
Billboard1097 = x3d.Billboard()
Shape1098 = x3d.Shape()
Text1099 = x3d.Text()
Text1099.setString(["11"])
FontStyle1100 = x3d.FontStyle()
FontStyle1100.setSize(0.035)

Text1099.setFontStyle(FontStyle1100)

Shape1098.setGeometry(Text1099)

Billboard1097.addChild(Shape1098)

HAnimSite1094.addChild(Billboard1097)

HAnimSegment1086.addChild(HAnimSite1094)

HAnimJoint1085.addChild(HAnimSegment1086)
HAnimJoint1101 = x3d.HAnimJoint()
HAnimJoint1101.setName("vc1")
HAnimJoint1101.setDEF("hanim_vc1")
HAnimJoint1101.setCenter(x3d.doubleToFloat([0.0066,1.6144,-0.0034]))
HAnimJoint1101.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1101.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1102 = x3d.HAnimSegment()
HAnimSegment1102.setName("c1")
HAnimSegment1102.setDEF("hanim_c1")
Transform1103 = x3d.Transform()
Transform1103.setTranslation(x3d.doubleToFloat([0.0066,1.6144,-0.0034]))
Transform1104 = x3d.Transform()

Transform1104.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1105 = x3d.Shape()
Shape1105.setUSE("HAnimJointShape")

Transform1104.addChild(Shape1105)

Transform1103.addChild(Transform1104)

HAnimSegment1102.addChild(Transform1103)
Shape1106 = x3d.Shape()
LineSet1107 = x3d.LineSet()
LineSet1107.setVertexCount([2])
Coordinate1108 = x3d.Coordinate()
Coordinate1108.setPoint(x3d.doubleToFloat([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]))

LineSet1107.setCoord(Coordinate1108)

LineSet1107.addComments(x3d.CommentsBlock("""from vc1 to skullbase vertices 2"""))
ColorRGBA1109 = x3d.ColorRGBA()
ColorRGBA1109.setUSE("HAnimSegmentLineColorRGBA")

LineSet1107.setColor(ColorRGBA1109)

Shape1106.setGeometry(LineSet1107)

HAnimSegment1102.addChild(Shape1106)

HAnimJoint1101.addChild(HAnimSegment1102)
HAnimJoint1110 = x3d.HAnimJoint()
HAnimJoint1110.setName("skullbase")
HAnimJoint1110.setDEF("hanim_skullbase")
HAnimJoint1110.setCenter(x3d.doubleToFloat([0.0044,1.6209,0.0236]))
HAnimJoint1110.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1110.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1111 = x3d.HAnimSegment()
HAnimSegment1111.setName("skull")
HAnimSegment1111.setDEF("hanim_skull")
Transform1112 = x3d.Transform()
Transform1112.setTranslation(x3d.doubleToFloat([0.0044,1.6209,0.0236]))
Transform1113 = x3d.Transform()

Transform1113.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1114 = x3d.Shape()
Shape1114.setUSE("HAnimJointShape")

Transform1113.addChild(Shape1114)

Transform1112.addChild(Transform1113)

HAnimSegment1111.addChild(Transform1112)
Shape1115 = x3d.Shape()
LineSet1116 = x3d.LineSet()
LineSet1116.setVertexCount([2])
Coordinate1117 = x3d.Coordinate()
Coordinate1117.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689]))

LineSet1116.setCoord(Coordinate1117)

LineSet1116.addComments(x3d.CommentsBlock("""from skullbase to l_eyelid_joint vertices 2"""))
ColorRGBA1118 = x3d.ColorRGBA()
ColorRGBA1118.setUSE("HAnimSegmentLineColorRGBA")

LineSet1116.setColor(ColorRGBA1118)

Shape1115.setGeometry(LineSet1116)

HAnimSegment1111.addChild(Shape1115)
HAnimSite1119 = x3d.HAnimSite()
HAnimSite1119.setName("glabella")
HAnimSite1119.setDEF("hanim_glabella")
TouchSensor1120 = x3d.TouchSensor()
TouchSensor1120.setDescription("HAnimSite 1 glabella")

HAnimSite1119.addChild(TouchSensor1120)
Shape1121 = x3d.Shape()
Shape1121.setUSE("HAnimSiteShape")

HAnimSite1119.addChild(Shape1121)
Billboard1122 = x3d.Billboard()
Shape1123 = x3d.Shape()
Text1124 = x3d.Text()
Text1124.setString(["1"])
FontStyle1125 = x3d.FontStyle()
FontStyle1125.setSize(0.035)

Text1124.setFontStyle(FontStyle1125)

Shape1123.setGeometry(Text1124)

Billboard1122.addChild(Shape1123)

HAnimSite1119.addChild(Billboard1122)

HAnimSegment1111.addChild(HAnimSite1119)
HAnimSite1126 = x3d.HAnimSite()
HAnimSite1126.setName("l_ectocanthus")
HAnimSite1126.setDEF("hanim_l_ectocanthus")
TouchSensor1127 = x3d.TouchSensor()
TouchSensor1127.setDescription("HAnimSite 85 l_ectocanthus")

HAnimSite1126.addChild(TouchSensor1127)
Shape1128 = x3d.Shape()
Shape1128.setUSE("HAnimSiteShape")

HAnimSite1126.addChild(Shape1128)
Billboard1129 = x3d.Billboard()
Shape1130 = x3d.Shape()
Text1131 = x3d.Text()
Text1131.setString(["85"])
FontStyle1132 = x3d.FontStyle()
FontStyle1132.setSize(0.035)

Text1131.setFontStyle(FontStyle1132)

Shape1130.setGeometry(Text1131)

Billboard1129.addChild(Shape1130)

HAnimSite1126.addChild(Billboard1129)

HAnimSegment1111.addChild(HAnimSite1126)
HAnimSite1133 = x3d.HAnimSite()
HAnimSite1133.setName("l_infraorbitale")
HAnimSite1133.setDEF("hanim_l_infraorbitale")
HAnimSite1133.setTranslation(x3d.doubleToFloat([0.0341,1.6171,0.0752]))
TouchSensor1134 = x3d.TouchSensor()
TouchSensor1134.setDescription("HAnimSite 3 l_infraorbitale")

HAnimSite1133.addChild(TouchSensor1134)
Shape1135 = x3d.Shape()
Shape1135.setUSE("HAnimSiteShape")

HAnimSite1133.addChild(Shape1135)
Billboard1136 = x3d.Billboard()
Shape1137 = x3d.Shape()
Text1138 = x3d.Text()
Text1138.setString(["3"])
FontStyle1139 = x3d.FontStyle()
FontStyle1139.setSize(0.035)

Text1138.setFontStyle(FontStyle1139)

Shape1137.setGeometry(Text1138)

Billboard1136.addChild(Shape1137)

HAnimSite1133.addChild(Billboard1136)

HAnimSegment1111.addChild(HAnimSite1133)
HAnimSite1140 = x3d.HAnimSite()
HAnimSite1140.setName("l_tragion")
HAnimSite1140.setDEF("hanim_l_tragion")
HAnimSite1140.setTranslation(x3d.doubleToFloat([0.0739,1.6348,0.0282]))
TouchSensor1141 = x3d.TouchSensor()
TouchSensor1141.setDescription("HAnimSite 4 l_tragion")

HAnimSite1140.addChild(TouchSensor1141)
Shape1142 = x3d.Shape()
Shape1142.setUSE("HAnimSiteShape")

HAnimSite1140.addChild(Shape1142)
Billboard1143 = x3d.Billboard()
Shape1144 = x3d.Shape()
Text1145 = x3d.Text()
Text1145.setString(["4"])
FontStyle1146 = x3d.FontStyle()
FontStyle1146.setSize(0.035)

Text1145.setFontStyle(FontStyle1146)

Shape1144.setGeometry(Text1145)

Billboard1143.addChild(Shape1144)

HAnimSite1140.addChild(Billboard1143)

HAnimSegment1111.addChild(HAnimSite1140)
HAnimSite1147 = x3d.HAnimSite()
HAnimSite1147.setName("nuchale")
HAnimSite1147.setDEF("hanim_nuchale")
HAnimSite1147.setTranslation(x3d.doubleToFloat([0.0039,1.5972,-0.0796]))
TouchSensor1148 = x3d.TouchSensor()
TouchSensor1148.setDescription("HAnimSite 81 nuchale")

HAnimSite1147.addChild(TouchSensor1148)
Shape1149 = x3d.Shape()
Shape1149.setUSE("HAnimSiteShape")

HAnimSite1147.addChild(Shape1149)
Billboard1150 = x3d.Billboard()
Shape1151 = x3d.Shape()
Text1152 = x3d.Text()
Text1152.setString(["81"])
FontStyle1153 = x3d.FontStyle()
FontStyle1153.setSize(0.035)

Text1152.setFontStyle(FontStyle1153)

Shape1151.setGeometry(Text1152)

Billboard1150.addChild(Shape1151)

HAnimSite1147.addChild(Billboard1150)

HAnimSegment1111.addChild(HAnimSite1147)
HAnimSite1154 = x3d.HAnimSite()
HAnimSite1154.setName("opisthocranion")
HAnimSite1154.setDEF("hanim_opisthocranion")
TouchSensor1155 = x3d.TouchSensor()
TouchSensor1155.setDescription("HAnimSite 89 opisthocranion")

HAnimSite1154.addChild(TouchSensor1155)
Shape1156 = x3d.Shape()
Shape1156.setUSE("HAnimSiteShape")

HAnimSite1154.addChild(Shape1156)
Billboard1157 = x3d.Billboard()
Shape1158 = x3d.Shape()
Text1159 = x3d.Text()
Text1159.setString(["89"])
FontStyle1160 = x3d.FontStyle()
FontStyle1160.setSize(0.035)

Text1159.setFontStyle(FontStyle1160)

Shape1158.setGeometry(Text1159)

Billboard1157.addChild(Shape1158)

HAnimSite1154.addChild(Billboard1157)

HAnimSegment1111.addChild(HAnimSite1154)
HAnimSite1161 = x3d.HAnimSite()
HAnimSite1161.setName("r_ectocanthus")
HAnimSite1161.setDEF("hanim_r_ectocanthus")
TouchSensor1162 = x3d.TouchSensor()
TouchSensor1162.setDescription("HAnimSite 86 r_ectocanthus")

HAnimSite1161.addChild(TouchSensor1162)
Shape1163 = x3d.Shape()
Shape1163.setUSE("HAnimSiteShape")

HAnimSite1161.addChild(Shape1163)
Billboard1164 = x3d.Billboard()
Shape1165 = x3d.Shape()
Text1166 = x3d.Text()
Text1166.setString(["86"])
FontStyle1167 = x3d.FontStyle()
FontStyle1167.setSize(0.035)

Text1166.setFontStyle(FontStyle1167)

Shape1165.setGeometry(Text1166)

Billboard1164.addChild(Shape1165)

HAnimSite1161.addChild(Billboard1164)

HAnimSegment1111.addChild(HAnimSite1161)
HAnimSite1168 = x3d.HAnimSite()
HAnimSite1168.setName("r_infraorbitale")
HAnimSite1168.setDEF("hanim_r_infraorbitale")
HAnimSite1168.setTranslation(x3d.doubleToFloat([-0.0237,1.6171,0.0752]))
TouchSensor1169 = x3d.TouchSensor()
TouchSensor1169.setDescription("HAnimSite 6 r_infraorbitale")

HAnimSite1168.addChild(TouchSensor1169)
Shape1170 = x3d.Shape()
Shape1170.setUSE("HAnimSiteShape")

HAnimSite1168.addChild(Shape1170)
Billboard1171 = x3d.Billboard()
Shape1172 = x3d.Shape()
Text1173 = x3d.Text()
Text1173.setString(["6"])
FontStyle1174 = x3d.FontStyle()
FontStyle1174.setSize(0.035)

Text1173.setFontStyle(FontStyle1174)

Shape1172.setGeometry(Text1173)

Billboard1171.addChild(Shape1172)

HAnimSite1168.addChild(Billboard1171)

HAnimSegment1111.addChild(HAnimSite1168)
HAnimSite1175 = x3d.HAnimSite()
HAnimSite1175.setName("r_tragion")
HAnimSite1175.setDEF("hanim_r_tragion")
HAnimSite1175.setTranslation(x3d.doubleToFloat([-0.0646,1.6347,0.0302]))
TouchSensor1176 = x3d.TouchSensor()
TouchSensor1176.setDescription("HAnimSite 7 r_tragion")

HAnimSite1175.addChild(TouchSensor1176)
Shape1177 = x3d.Shape()
Shape1177.setUSE("HAnimSiteShape")

HAnimSite1175.addChild(Shape1177)
Billboard1178 = x3d.Billboard()
Shape1179 = x3d.Shape()
Text1180 = x3d.Text()
Text1180.setString(["7"])
FontStyle1181 = x3d.FontStyle()
FontStyle1181.setSize(0.035)

Text1180.setFontStyle(FontStyle1181)

Shape1179.setGeometry(Text1180)

Billboard1178.addChild(Shape1179)

HAnimSite1175.addChild(Billboard1178)

HAnimSegment1111.addChild(HAnimSite1175)
HAnimSite1182 = x3d.HAnimSite()
HAnimSite1182.setName("sellion")
HAnimSite1182.setDEF("hanim_sellion")
HAnimSite1182.setTranslation(x3d.doubleToFloat([0.0058,1.6316,0.0852]))
TouchSensor1183 = x3d.TouchSensor()
TouchSensor1183.setDescription("HAnimSite 2 sellion")

HAnimSite1182.addChild(TouchSensor1183)
Shape1184 = x3d.Shape()
Shape1184.setUSE("HAnimSiteShape")

HAnimSite1182.addChild(Shape1184)
Billboard1185 = x3d.Billboard()
Shape1186 = x3d.Shape()
Text1187 = x3d.Text()
Text1187.setString(["2"])
FontStyle1188 = x3d.FontStyle()
FontStyle1188.setSize(0.035)

Text1187.setFontStyle(FontStyle1188)

Shape1186.setGeometry(Text1187)

Billboard1185.addChild(Shape1186)

HAnimSite1182.addChild(Billboard1185)

HAnimSegment1111.addChild(HAnimSite1182)
HAnimSite1189 = x3d.HAnimSite()
HAnimSite1189.setName("skull_vertex")
HAnimSite1189.setDEF("hanim_skull_vertex")
HAnimSite1189.setTranslation(x3d.doubleToFloat([0.005,1.7504,0.0055]))
TouchSensor1190 = x3d.TouchSensor()
TouchSensor1190.setDescription("HAnimSite 0 skull_vertex")

HAnimSite1189.addChild(TouchSensor1190)
Shape1191 = x3d.Shape()
Shape1191.setUSE("HAnimSiteShape")

HAnimSite1189.addChild(Shape1191)
Billboard1192 = x3d.Billboard()
Shape1193 = x3d.Shape()
Text1194 = x3d.Text()
Text1194.setString(["0"])
FontStyle1195 = x3d.FontStyle()
FontStyle1195.setSize(0.035)

Text1194.setFontStyle(FontStyle1195)

Shape1193.setGeometry(Text1194)

Billboard1192.addChild(Shape1193)

HAnimSite1189.addChild(Billboard1192)

HAnimSegment1111.addChild(HAnimSite1189)
Shape1196 = x3d.Shape()
LineSet1197 = x3d.LineSet()
LineSet1197.setVertexCount([2])
Coordinate1198 = x3d.Coordinate()
Coordinate1198.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689]))

LineSet1197.setCoord(Coordinate1198)

LineSet1197.addComments(x3d.CommentsBlock("""from skullbase to r_eyelid_joint vertices 2"""))
ColorRGBA1199 = x3d.ColorRGBA()
ColorRGBA1199.setUSE("HAnimSegmentLineColorRGBA")

LineSet1197.setColor(ColorRGBA1199)

Shape1196.setGeometry(LineSet1197)

HAnimSegment1111.addChild(Shape1196)
Shape1200 = x3d.Shape()
LineSet1201 = x3d.LineSet()
LineSet1201.setVertexCount([2])
Coordinate1202 = x3d.Coordinate()
Coordinate1202.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188]))

LineSet1201.setCoord(Coordinate1202)

LineSet1201.addComments(x3d.CommentsBlock("""from skullbase to l_eyeball_joint vertices 2"""))
ColorRGBA1203 = x3d.ColorRGBA()
ColorRGBA1203.setUSE("HAnimSegmentLineColorRGBA")

LineSet1201.setColor(ColorRGBA1203)

Shape1200.setGeometry(LineSet1201)

HAnimSegment1111.addChild(Shape1200)
Shape1204 = x3d.Shape()
LineSet1205 = x3d.LineSet()
LineSet1205.setVertexCount([2])
Coordinate1206 = x3d.Coordinate()
Coordinate1206.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188]))

LineSet1205.setCoord(Coordinate1206)

LineSet1205.addComments(x3d.CommentsBlock("""from skullbase to r_eyeball_joint vertices 2"""))
ColorRGBA1207 = x3d.ColorRGBA()
ColorRGBA1207.setUSE("HAnimSegmentLineColorRGBA")

LineSet1205.setColor(ColorRGBA1207)

Shape1204.setGeometry(LineSet1205)

HAnimSegment1111.addChild(Shape1204)
Shape1208 = x3d.Shape()
LineSet1209 = x3d.LineSet()
LineSet1209.setVertexCount([2])
Coordinate1210 = x3d.Coordinate()
Coordinate1210.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,0.0216,1.4053,0.0051]))

LineSet1209.setCoord(Coordinate1210)

LineSet1209.addComments(x3d.CommentsBlock("""from skullbase to l_eyebrow_joint vertices 2"""))
ColorRGBA1211 = x3d.ColorRGBA()
ColorRGBA1211.setUSE("HAnimSegmentLineColorRGBA")

LineSet1209.setColor(ColorRGBA1211)

Shape1208.setGeometry(LineSet1209)

HAnimSegment1111.addChild(Shape1208)
Shape1212 = x3d.Shape()
LineSet1213 = x3d.LineSet()
LineSet1213.setVertexCount([2])
Coordinate1214 = x3d.Coordinate()
Coordinate1214.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051]))

LineSet1213.setCoord(Coordinate1214)

LineSet1213.addComments(x3d.CommentsBlock("""from skullbase to r_eyebrow_joint vertices 2"""))
ColorRGBA1215 = x3d.ColorRGBA()
ColorRGBA1215.setUSE("HAnimSegmentLineColorRGBA")

LineSet1213.setColor(ColorRGBA1215)

Shape1212.setGeometry(LineSet1213)

HAnimSegment1111.addChild(Shape1212)
Shape1216 = x3d.Shape()
LineSet1217 = x3d.LineSet()
LineSet1217.setVertexCount([2])
Coordinate1218 = x3d.Coordinate()
Coordinate1218.setPoint(x3d.doubleToFloat([0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865]))

LineSet1217.setCoord(Coordinate1218)

LineSet1217.addComments(x3d.CommentsBlock("""from skullbase to temporomandibular vertices 2"""))
ColorRGBA1219 = x3d.ColorRGBA()
ColorRGBA1219.setUSE("HAnimSegmentLineColorRGBA")

LineSet1217.setColor(ColorRGBA1219)

Shape1216.setGeometry(LineSet1217)

HAnimSegment1111.addChild(Shape1216)

HAnimJoint1110.addChild(HAnimSegment1111)
HAnimJoint1220 = x3d.HAnimJoint()
HAnimJoint1220.setName("l_eyelid_joint")
HAnimJoint1220.setDEF("hanim_l_eyelid_joint")
HAnimJoint1220.setCenter(x3d.doubleToFloat([0.0503,1.4157,-0.0689]))
HAnimJoint1220.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1220.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint1110.addChild(HAnimJoint1220)
HAnimJoint1221 = x3d.HAnimJoint()
HAnimJoint1221.setName("r_eyelid_joint")
HAnimJoint1221.setDEF("hanim_r_eyelid_joint")
HAnimJoint1221.setCenter(x3d.doubleToFloat([-0.0507,1.4157,-0.0689]))
HAnimJoint1221.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1221.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint1110.addChild(HAnimJoint1221)
HAnimJoint1222 = x3d.HAnimJoint()
HAnimJoint1222.setName("l_eyeball_joint")
HAnimJoint1222.setDEF("hanim_l_eyeball_joint")
HAnimJoint1222.setCenter(x3d.doubleToFloat([0.0479,1.3963,-0.0188]))
HAnimJoint1222.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1222.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint1110.addChild(HAnimJoint1222)
HAnimJoint1223 = x3d.HAnimJoint()
HAnimJoint1223.setName("r_eyeball_joint")
HAnimJoint1223.setDEF("hanim_r_eyeball_joint")
HAnimJoint1223.setCenter(x3d.doubleToFloat([-0.0483,1.3963,-0.0188]))
HAnimJoint1223.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1223.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint1110.addChild(HAnimJoint1223)
HAnimJoint1224 = x3d.HAnimJoint()
HAnimJoint1224.setName("l_eyebrow_joint")
HAnimJoint1224.setDEF("hanim_l_eyebrow_joint")
HAnimJoint1224.setCenter(x3d.doubleToFloat([0.0216,1.4053,0.0051]))
HAnimJoint1224.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1224.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint1110.addChild(HAnimJoint1224)
HAnimJoint1225 = x3d.HAnimJoint()
HAnimJoint1225.setName("r_eyebrow_joint")
HAnimJoint1225.setDEF("hanim_r_eyebrow_joint")
HAnimJoint1225.setCenter(x3d.doubleToFloat([-0.0219,1.4053,0.0051]))
HAnimJoint1225.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1225.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint1110.addChild(HAnimJoint1225)
HAnimJoint1226 = x3d.HAnimJoint()
HAnimJoint1226.setName("temporomandibular")
HAnimJoint1226.setDEF("hanim_temporomandibular")
HAnimJoint1226.setCenter(x3d.doubleToFloat([-0.0002,1.3043,-0.0865]))
HAnimJoint1226.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1226.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint1110.addChild(HAnimJoint1226)

HAnimJoint1101.addChild(HAnimJoint1110)

HAnimJoint1085.addChild(HAnimJoint1101)

HAnimJoint1076.addChild(HAnimJoint1085)

HAnimJoint1067.addChild(HAnimJoint1076)

HAnimJoint1058.addChild(HAnimJoint1067)

HAnimJoint1049.addChild(HAnimJoint1058)

HAnimJoint1026.addChild(HAnimJoint1049)

HAnimJoint995.addChild(HAnimJoint1026)
HAnimJoint1227 = x3d.HAnimJoint()
HAnimJoint1227.setName("l_sternoclavicular")
HAnimJoint1227.setDEF("hanim_l_sternoclavicular")
HAnimJoint1227.setCenter(x3d.doubleToFloat([0.082,1.4488,-0.0353]))
HAnimJoint1227.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1227.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1228 = x3d.HAnimSegment()
HAnimSegment1228.setName("l_clavicle")
HAnimSegment1228.setDEF("hanim_l_clavicle")
Transform1229 = x3d.Transform()
Transform1229.setTranslation(x3d.doubleToFloat([0.082,1.4488,-0.0353]))
Transform1230 = x3d.Transform()

Transform1230.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1231 = x3d.Shape()
Shape1231.setUSE("HAnimJointShape")

Transform1230.addChild(Shape1231)

Transform1229.addChild(Transform1230)

HAnimSegment1228.addChild(Transform1229)
Shape1232 = x3d.Shape()
LineSet1233 = x3d.LineSet()
LineSet1233.setVertexCount([2])
Coordinate1234 = x3d.Coordinate()
Coordinate1234.setPoint(x3d.doubleToFloat([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]))

LineSet1233.setCoord(Coordinate1234)

LineSet1233.addComments(x3d.CommentsBlock("""from l_sternoclavicular to l_acromioclavicular vertices 2"""))
ColorRGBA1235 = x3d.ColorRGBA()
ColorRGBA1235.setUSE("HAnimSegmentLineColorRGBA")

LineSet1233.setColor(ColorRGBA1235)

Shape1232.setGeometry(LineSet1233)

HAnimSegment1228.addChild(Shape1232)
HAnimSite1236 = x3d.HAnimSite()
HAnimSite1236.setName("l_acromion")
HAnimSite1236.setDEF("hanim_l_acromion")
HAnimSite1236.setTranslation(x3d.doubleToFloat([0.2032,1.476,-0.049]))
TouchSensor1237 = x3d.TouchSensor()
TouchSensor1237.setDescription("HAnimSite 15 l_acromion")

HAnimSite1236.addChild(TouchSensor1237)
Shape1238 = x3d.Shape()
Shape1238.setUSE("HAnimSiteShape")

HAnimSite1236.addChild(Shape1238)
Billboard1239 = x3d.Billboard()
Shape1240 = x3d.Shape()
Text1241 = x3d.Text()
Text1241.setString(["15"])
FontStyle1242 = x3d.FontStyle()
FontStyle1242.setSize(0.035)

Text1241.setFontStyle(FontStyle1242)

Shape1240.setGeometry(Text1241)

Billboard1239.addChild(Shape1240)

HAnimSite1236.addChild(Billboard1239)

HAnimSegment1228.addChild(HAnimSite1236)
HAnimSite1243 = x3d.HAnimSite()
HAnimSite1243.setName("l_axilla_distal")
HAnimSite1243.setDEF("hanim_l_axilla_distal")
HAnimSite1243.setTranslation(x3d.doubleToFloat([0.1706,1.4072,-0.0875]))
TouchSensor1244 = x3d.TouchSensor()
TouchSensor1244.setDescription("HAnimSite 17 l_axilla_distal")

HAnimSite1243.addChild(TouchSensor1244)
Shape1245 = x3d.Shape()
Shape1245.setUSE("HAnimSiteShape")

HAnimSite1243.addChild(Shape1245)
Billboard1246 = x3d.Billboard()
Shape1247 = x3d.Shape()
Text1248 = x3d.Text()
Text1248.setString(["17"])
FontStyle1249 = x3d.FontStyle()
FontStyle1249.setSize(0.035)

Text1248.setFontStyle(FontStyle1249)

Shape1247.setGeometry(Text1248)

Billboard1246.addChild(Shape1247)

HAnimSite1243.addChild(Billboard1246)

HAnimSegment1228.addChild(HAnimSite1243)
HAnimSite1250 = x3d.HAnimSite()
HAnimSite1250.setName("l_axilla_posterior_folds")
HAnimSite1250.setDEF("hanim_l_axilla_posterior_folds")
TouchSensor1251 = x3d.TouchSensor()
TouchSensor1251.setDescription("HAnimSite 18 l_axilla_posterior_folds")

HAnimSite1250.addChild(TouchSensor1251)
Shape1252 = x3d.Shape()
Shape1252.setUSE("HAnimSiteShape")

HAnimSite1250.addChild(Shape1252)
Billboard1253 = x3d.Billboard()
Shape1254 = x3d.Shape()
Text1255 = x3d.Text()
Text1255.setString(["18"])
FontStyle1256 = x3d.FontStyle()
FontStyle1256.setSize(0.035)

Text1255.setFontStyle(FontStyle1256)

Shape1254.setGeometry(Text1255)

Billboard1253.addChild(Shape1254)

HAnimSite1250.addChild(Billboard1253)

HAnimSegment1228.addChild(HAnimSite1250)
HAnimSite1257 = x3d.HAnimSite()
HAnimSite1257.setName("l_axilla_proximal")
HAnimSite1257.setDEF("hanim_l_axilla_proximal")
HAnimSite1257.setTranslation(x3d.doubleToFloat([0.1777,1.4065,-0.0075]))
TouchSensor1258 = x3d.TouchSensor()
TouchSensor1258.setDescription("HAnimSite 16 l_axilla_proximal")

HAnimSite1257.addChild(TouchSensor1258)
Shape1259 = x3d.Shape()
Shape1259.setUSE("HAnimSiteShape")

HAnimSite1257.addChild(Shape1259)
Billboard1260 = x3d.Billboard()
Shape1261 = x3d.Shape()
Text1262 = x3d.Text()
Text1262.setString(["16"])
FontStyle1263 = x3d.FontStyle()
FontStyle1263.setSize(0.035)

Text1262.setFontStyle(FontStyle1263)

Shape1261.setGeometry(Text1262)

Billboard1260.addChild(Shape1261)

HAnimSite1257.addChild(Billboard1260)

HAnimSegment1228.addChild(HAnimSite1257)
HAnimSite1264 = x3d.HAnimSite()
HAnimSite1264.setName("l_clavicale")
HAnimSite1264.setDEF("hanim_l_clavicale")
HAnimSite1264.setTranslation(x3d.doubleToFloat([0.0271,1.4943,0.0394]))
TouchSensor1265 = x3d.TouchSensor()
TouchSensor1265.setDescription("HAnimSite 14 l_clavicale")

HAnimSite1264.addChild(TouchSensor1265)
Shape1266 = x3d.Shape()
Shape1266.setUSE("HAnimSiteShape")

HAnimSite1264.addChild(Shape1266)
Billboard1267 = x3d.Billboard()
Shape1268 = x3d.Shape()
Text1269 = x3d.Text()
Text1269.setString(["14"])
FontStyle1270 = x3d.FontStyle()
FontStyle1270.setSize(0.035)

Text1269.setFontStyle(FontStyle1270)

Shape1268.setGeometry(Text1269)

Billboard1267.addChild(Shape1268)

HAnimSite1264.addChild(Billboard1267)

HAnimSegment1228.addChild(HAnimSite1264)

HAnimJoint1227.addChild(HAnimSegment1228)
HAnimJoint1271 = x3d.HAnimJoint()
HAnimJoint1271.setName("l_acromioclavicular")
HAnimJoint1271.setDEF("hanim_l_acromioclavicular")
HAnimJoint1271.setCenter(x3d.doubleToFloat([0.0962,1.4269,-0.0424]))
HAnimJoint1271.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1271.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1272 = x3d.HAnimSegment()
HAnimSegment1272.setName("l_scapula")
HAnimSegment1272.setDEF("hanim_l_scapula")
Transform1273 = x3d.Transform()
Transform1273.setTranslation(x3d.doubleToFloat([0.0962,1.4269,-0.0424]))
Transform1274 = x3d.Transform()

Transform1274.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1275 = x3d.Shape()
Shape1275.setUSE("HAnimJointShape")

Transform1274.addChild(Shape1275)

Transform1273.addChild(Transform1274)

HAnimSegment1272.addChild(Transform1273)
Shape1276 = x3d.Shape()
LineSet1277 = x3d.LineSet()
LineSet1277.setVertexCount([2])
Coordinate1278 = x3d.Coordinate()
Coordinate1278.setPoint(x3d.doubleToFloat([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]))

LineSet1277.setCoord(Coordinate1278)

LineSet1277.addComments(x3d.CommentsBlock("""from l_acromioclavicular to l_shoulder vertices 2"""))
ColorRGBA1279 = x3d.ColorRGBA()
ColorRGBA1279.setUSE("HAnimSegmentLineColorRGBA")

LineSet1277.setColor(ColorRGBA1279)

Shape1276.setGeometry(LineSet1277)

HAnimSegment1272.addChild(Shape1276)

HAnimJoint1271.addChild(HAnimSegment1272)
HAnimJoint1280 = x3d.HAnimJoint()
HAnimJoint1280.setName("l_shoulder")
HAnimJoint1280.setDEF("hanim_l_shoulder")
HAnimJoint1280.setCenter(x3d.doubleToFloat([0.2029,1.4376,-0.0387]))
HAnimJoint1280.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1280.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1281 = x3d.HAnimSegment()
HAnimSegment1281.setName("l_upperarm")
HAnimSegment1281.setDEF("hanim_l_upperarm")
Transform1282 = x3d.Transform()
Transform1282.setTranslation(x3d.doubleToFloat([0.2029,1.4376,-0.0387]))
Transform1283 = x3d.Transform()

Transform1283.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1284 = x3d.Shape()
Shape1284.setUSE("HAnimJointShape")

Transform1283.addChild(Shape1284)

Transform1282.addChild(Transform1283)

HAnimSegment1281.addChild(Transform1282)
Shape1285 = x3d.Shape()
LineSet1286 = x3d.LineSet()
LineSet1286.setVertexCount([2])
Coordinate1287 = x3d.Coordinate()
Coordinate1287.setPoint(x3d.doubleToFloat([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]))

LineSet1286.setCoord(Coordinate1287)

LineSet1286.addComments(x3d.CommentsBlock("""from l_shoulder to l_elbow vertices 2"""))
ColorRGBA1288 = x3d.ColorRGBA()
ColorRGBA1288.setUSE("HAnimSegmentLineColorRGBA")

LineSet1286.setColor(ColorRGBA1288)

Shape1285.setGeometry(LineSet1286)

HAnimSegment1281.addChild(Shape1285)
HAnimSite1289 = x3d.HAnimSite()
HAnimSite1289.setName("l_bideltoid")
HAnimSite1289.setDEF("hanim_l_bideltoid")
TouchSensor1290 = x3d.TouchSensor()
TouchSensor1290.setDescription("HAnimSite 96 l_bideltoid")

HAnimSite1289.addChild(TouchSensor1290)
Shape1291 = x3d.Shape()
Shape1291.setUSE("HAnimSiteShape")

HAnimSite1289.addChild(Shape1291)
Billboard1292 = x3d.Billboard()
Shape1293 = x3d.Shape()
Text1294 = x3d.Text()
Text1294.setString(["96"])
FontStyle1295 = x3d.FontStyle()
FontStyle1295.setSize(0.035)

Text1294.setFontStyle(FontStyle1295)

Shape1293.setGeometry(Text1294)

Billboard1292.addChild(Shape1293)

HAnimSite1289.addChild(Billboard1292)

HAnimSegment1281.addChild(HAnimSite1289)
HAnimSite1296 = x3d.HAnimSite()
HAnimSite1296.setName("l_humeral_lateral_epicondyles")
HAnimSite1296.setDEF("hanim_l_humeral_lateral_epicondyles")
HAnimSite1296.setTranslation(x3d.doubleToFloat([0.228,1.1482,-0.11]))
TouchSensor1297 = x3d.TouchSensor()
TouchSensor1297.setDescription("HAnimSite 63 l_humeral_lateral_epicondyles")

HAnimSite1296.addChild(TouchSensor1297)
Shape1298 = x3d.Shape()
Shape1298.setUSE("HAnimSiteShape")

HAnimSite1296.addChild(Shape1298)
Billboard1299 = x3d.Billboard()
Shape1300 = x3d.Shape()
Text1301 = x3d.Text()
Text1301.setString(["63"])
FontStyle1302 = x3d.FontStyle()
FontStyle1302.setSize(0.035)

Text1301.setFontStyle(FontStyle1302)

Shape1300.setGeometry(Text1301)

Billboard1299.addChild(Shape1300)

HAnimSite1296.addChild(Billboard1299)

HAnimSegment1281.addChild(HAnimSite1296)

HAnimJoint1280.addChild(HAnimSegment1281)
HAnimJoint1303 = x3d.HAnimJoint()
HAnimJoint1303.setName("l_elbow")
HAnimJoint1303.setDEF("hanim_l_elbow")
HAnimJoint1303.setCenter(x3d.doubleToFloat([0.2014,1.1357,-0.0682]))
HAnimJoint1303.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1303.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1304 = x3d.HAnimSegment()
HAnimSegment1304.setName("l_forearm")
HAnimSegment1304.setDEF("hanim_l_forearm")
Transform1305 = x3d.Transform()
Transform1305.setTranslation(x3d.doubleToFloat([0.2014,1.1357,-0.0682]))
Transform1306 = x3d.Transform()

Transform1306.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1307 = x3d.Shape()
Shape1307.setUSE("HAnimJointShape")

Transform1306.addChild(Shape1307)

Transform1305.addChild(Transform1306)

HAnimSegment1304.addChild(Transform1305)
Shape1308 = x3d.Shape()
LineSet1309 = x3d.LineSet()
LineSet1309.setVertexCount([2])
Coordinate1310 = x3d.Coordinate()
Coordinate1310.setPoint(x3d.doubleToFloat([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]))

LineSet1309.setCoord(Coordinate1310)

LineSet1309.addComments(x3d.CommentsBlock("""from l_elbow to l_radiocarpal vertices 2"""))
ColorRGBA1311 = x3d.ColorRGBA()
ColorRGBA1311.setUSE("HAnimSegmentLineColorRGBA")

LineSet1309.setColor(ColorRGBA1311)

Shape1308.setGeometry(LineSet1309)

HAnimSegment1304.addChild(Shape1308)
HAnimSite1312 = x3d.HAnimSite()
HAnimSite1312.setName("l_humeral_medial_epicondyles")
HAnimSite1312.setDEF("hanim_l_humeral_medial_epicondyles")
HAnimSite1312.setTranslation(x3d.doubleToFloat([0.1735,1.1272,-0.1113]))
TouchSensor1313 = x3d.TouchSensor()
TouchSensor1313.setDescription("HAnimSite 64 l_humeral_medial_epicondyles")

HAnimSite1312.addChild(TouchSensor1313)
Shape1314 = x3d.Shape()
Shape1314.setUSE("HAnimSiteShape")

HAnimSite1312.addChild(Shape1314)
Billboard1315 = x3d.Billboard()
Shape1316 = x3d.Shape()
Text1317 = x3d.Text()
Text1317.setString(["64"])
FontStyle1318 = x3d.FontStyle()
FontStyle1318.setSize(0.035)

Text1317.setFontStyle(FontStyle1318)

Shape1316.setGeometry(Text1317)

Billboard1315.addChild(Shape1316)

HAnimSite1312.addChild(Billboard1315)

HAnimSegment1304.addChild(HAnimSite1312)
HAnimSite1319 = x3d.HAnimSite()
HAnimSite1319.setName("l_olecranon")
HAnimSite1319.setDEF("hanim_l_olecranon")
HAnimSite1319.setTranslation(x3d.doubleToFloat([-0.1962,1.1375,-0.1123]))
TouchSensor1320 = x3d.TouchSensor()
TouchSensor1320.setDescription("HAnimSite 65 l_olecranon")

HAnimSite1319.addChild(TouchSensor1320)
Shape1321 = x3d.Shape()
Shape1321.setUSE("HAnimSiteShape")

HAnimSite1319.addChild(Shape1321)
Billboard1322 = x3d.Billboard()
Shape1323 = x3d.Shape()
Text1324 = x3d.Text()
Text1324.setString(["65"])
FontStyle1325 = x3d.FontStyle()
FontStyle1325.setSize(0.035)

Text1324.setFontStyle(FontStyle1325)

Shape1323.setGeometry(Text1324)

Billboard1322.addChild(Shape1323)

HAnimSite1319.addChild(Billboard1322)

HAnimSegment1304.addChild(HAnimSite1319)
HAnimSite1326 = x3d.HAnimSite()
HAnimSite1326.setName("l_radial_styloid")
HAnimSite1326.setDEF("hanim_l_radial_styloid")
HAnimSite1326.setTranslation(x3d.doubleToFloat([0.1901,0.8645,-0.0415]))
TouchSensor1327 = x3d.TouchSensor()
TouchSensor1327.setDescription("HAnimSite 71 l_radial_styloid")

HAnimSite1326.addChild(TouchSensor1327)
Shape1328 = x3d.Shape()
Shape1328.setUSE("HAnimSiteShape")

HAnimSite1326.addChild(Shape1328)
Billboard1329 = x3d.Billboard()
Shape1330 = x3d.Shape()
Text1331 = x3d.Text()
Text1331.setString(["71"])
FontStyle1332 = x3d.FontStyle()
FontStyle1332.setSize(0.035)

Text1331.setFontStyle(FontStyle1332)

Shape1330.setGeometry(Text1331)

Billboard1329.addChild(Shape1330)

HAnimSite1326.addChild(Billboard1329)

HAnimSegment1304.addChild(HAnimSite1326)
HAnimSite1333 = x3d.HAnimSite()
HAnimSite1333.setName("l_radiale")
HAnimSite1333.setDEF("hanim_l_radiale")
HAnimSite1333.setTranslation(x3d.doubleToFloat([0.2182,1.1212,-0.1167]))
TouchSensor1334 = x3d.TouchSensor()
TouchSensor1334.setDescription("HAnimSite 69 l_radiale")

HAnimSite1333.addChild(TouchSensor1334)
Shape1335 = x3d.Shape()
Shape1335.setUSE("HAnimSiteShape")

HAnimSite1333.addChild(Shape1335)
Billboard1336 = x3d.Billboard()
Shape1337 = x3d.Shape()
Text1338 = x3d.Text()
Text1338.setString(["69"])
FontStyle1339 = x3d.FontStyle()
FontStyle1339.setSize(0.035)

Text1338.setFontStyle(FontStyle1339)

Shape1337.setGeometry(Text1338)

Billboard1336.addChild(Shape1337)

HAnimSite1333.addChild(Billboard1336)

HAnimSegment1304.addChild(HAnimSite1333)

HAnimJoint1303.addChild(HAnimSegment1304)
HAnimJoint1340 = x3d.HAnimJoint()
HAnimJoint1340.setName("l_radiocarpal")
HAnimJoint1340.setDEF("hanim_l_radiocarpal")
HAnimJoint1340.setCenter(x3d.doubleToFloat([0.1984,0.8663,-0.0583]))
HAnimJoint1340.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1340.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1341 = x3d.HAnimSegment()
HAnimSegment1341.setName("l_carpal")
HAnimSegment1341.setDEF("hanim_l_carpal")
Transform1342 = x3d.Transform()
Transform1342.setScale(x3d.doubleToFloat([0.2,0.2,0.2]))
Transform1342.setTranslation(x3d.doubleToFloat([0.2,0.85,-0.05]))
Transform1342.setRotation(x3d.doubleToFloat([0,0,1,-3.14]))

Transform1342.addComments(x3d.CommentsBlock("""Transform left hand"""))
Transform1343 = x3d.Transform()
Transform1343.setRotation(x3d.doubleToFloat([0,1,0,-1.57]))

Transform1343.addComments(x3d.CommentsBlock("""Transform left hand"""))
Shape1344 = x3d.Shape()
Shape1344.setUSE("HAnimJointShape")

Transform1343.addChild(Shape1344)

Transform1342.addChild(Transform1343)

HAnimSegment1341.addChild(Transform1342)
Shape1345 = x3d.Shape()
LineSet1346 = x3d.LineSet()
LineSet1346.setVertexCount([2])
Coordinate1347 = x3d.Coordinate()
Coordinate1347.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.1811,0.6975,-0.0826]))

LineSet1346.setCoord(Coordinate1347)

LineSet1346.addComments(x3d.CommentsBlock("""from l_radiocarpal to l_midcarpal_1 vertices 2"""))
ColorRGBA1348 = x3d.ColorRGBA()
ColorRGBA1348.setUSE("HAnimSegmentLineColorRGBA")

LineSet1346.setColor(ColorRGBA1348)

Shape1345.setGeometry(LineSet1346)

HAnimSegment1341.addChild(Shape1345)
HAnimSite1349 = x3d.HAnimSite()
HAnimSite1349.setName("l_ulnar_styloid")
HAnimSite1349.setDEF("hanim_l_ulnar_styloid")
HAnimSite1349.setTranslation(x3d.doubleToFloat([-0.2142,0.8529,-0.0648]))
TouchSensor1350 = x3d.TouchSensor()
TouchSensor1350.setDescription("HAnimSite 70 l_ulnar_styloid")

HAnimSite1349.addChild(TouchSensor1350)
Shape1351 = x3d.Shape()
Shape1351.setUSE("HAnimSiteShape")

HAnimSite1349.addChild(Shape1351)
Billboard1352 = x3d.Billboard()
Shape1353 = x3d.Shape()
Text1354 = x3d.Text()
Text1354.setString(["70"])
FontStyle1355 = x3d.FontStyle()
FontStyle1355.setSize(0.035)

Text1354.setFontStyle(FontStyle1355)

Shape1353.setGeometry(Text1354)

Billboard1352.addChild(Shape1353)

HAnimSite1349.addChild(Billboard1352)

HAnimSegment1341.addChild(HAnimSite1349)
Shape1356 = x3d.Shape()
LineSet1357 = x3d.LineSet()
LineSet1357.setVertexCount([2])
Coordinate1358 = x3d.Coordinate()
Coordinate1358.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.1811,0.6984,-0.0935]))

LineSet1357.setCoord(Coordinate1358)

LineSet1357.addComments(x3d.CommentsBlock("""from l_radiocarpal to l_midcarpal_2 vertices 2"""))
ColorRGBA1359 = x3d.ColorRGBA()
ColorRGBA1359.setUSE("HAnimSegmentLineColorRGBA")

LineSet1357.setColor(ColorRGBA1359)

Shape1356.setGeometry(LineSet1357)

HAnimSegment1341.addChild(Shape1356)
Shape1360 = x3d.Shape()
LineSet1361 = x3d.LineSet()
LineSet1361.setVertexCount([2])
Coordinate1362 = x3d.Coordinate()
Coordinate1362.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.1809,0.7,-0.1067]))

LineSet1361.setCoord(Coordinate1362)

LineSet1361.addComments(x3d.CommentsBlock("""from l_radiocarpal to l_midcarpal_3 vertices 2"""))
ColorRGBA1363 = x3d.ColorRGBA()
ColorRGBA1363.setUSE("HAnimSegmentLineColorRGBA")

LineSet1361.setColor(ColorRGBA1363)

Shape1360.setGeometry(LineSet1361)

HAnimSegment1341.addChild(Shape1360)
Shape1364 = x3d.Shape()
LineSet1365 = x3d.LineSet()
LineSet1365.setVertexCount([2])
Coordinate1366 = x3d.Coordinate()
Coordinate1366.setPoint(x3d.doubleToFloat([0.1984,0.8663,-0.0583,0.1809,0.6973,-0.1276]))

LineSet1365.setCoord(Coordinate1366)

LineSet1365.addComments(x3d.CommentsBlock("""from l_radiocarpal to l_midcarpal_4_5 vertices 2"""))
ColorRGBA1367 = x3d.ColorRGBA()
ColorRGBA1367.setUSE("HAnimSegmentLineColorRGBA")

LineSet1365.setColor(ColorRGBA1367)

Shape1364.setGeometry(LineSet1365)

HAnimSegment1341.addChild(Shape1364)

HAnimJoint1340.addChild(HAnimSegment1341)
HAnimJoint1368 = x3d.HAnimJoint()
HAnimJoint1368.setName("l_midcarpal_1")
HAnimJoint1368.setDEF("hanim_l_midcarpal_1")
HAnimJoint1368.setCenter(x3d.doubleToFloat([0.1811,0.6975,-0.0826]))
HAnimJoint1368.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1368.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1369 = x3d.HAnimSegment()
HAnimSegment1369.setName("l_trapezium")
HAnimSegment1369.setDEF("hanim_l_trapezium")
Transform1370 = x3d.Transform()
Transform1370.setTranslation(x3d.doubleToFloat([0.1811,0.6975,-0.0826]))
Transform1371 = x3d.Transform()

Transform1371.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1372 = x3d.Shape()
Shape1372.setUSE("HAnimJointShape")

Transform1371.addChild(Shape1372)

Transform1370.addChild(Transform1371)

HAnimSegment1369.addChild(Transform1370)
Shape1373 = x3d.Shape()
LineSet1374 = x3d.LineSet()
LineSet1374.setVertexCount([2])
Coordinate1375 = x3d.Coordinate()
Coordinate1375.setPoint(x3d.doubleToFloat([0.1811,0.6975,-0.0826,0.1924,0.8472,-0.0534]))

LineSet1374.setCoord(Coordinate1375)

LineSet1374.addComments(x3d.CommentsBlock("""from l_midcarpal_1 to l_carpometacarpal_1 vertices 2"""))
ColorRGBA1376 = x3d.ColorRGBA()
ColorRGBA1376.setUSE("HAnimSegmentLineColorRGBA")

LineSet1374.setColor(ColorRGBA1376)

Shape1373.setGeometry(LineSet1374)

HAnimSegment1369.addChild(Shape1373)

HAnimJoint1368.addChild(HAnimSegment1369)
HAnimJoint1377 = x3d.HAnimJoint()
HAnimJoint1377.setName("l_carpometacarpal_1")
HAnimJoint1377.setDEF("hanim_l_carpometacarpal_1")
HAnimJoint1377.setCenter(x3d.doubleToFloat([0.1924,0.8472,-0.0534]))
HAnimJoint1377.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1377.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1378 = x3d.HAnimSegment()
HAnimSegment1378.setName("l_metacarpal_1")
HAnimSegment1378.setDEF("hanim_l_metacarpal_1")
Transform1379 = x3d.Transform()
Transform1379.setTranslation(x3d.doubleToFloat([0.1924,0.8472,-0.0534]))
Transform1380 = x3d.Transform()

Transform1380.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1381 = x3d.Shape()
Shape1381.setUSE("HAnimJointShape")

Transform1380.addChild(Shape1381)

Transform1379.addChild(Transform1380)

HAnimSegment1378.addChild(Transform1379)
Shape1382 = x3d.Shape()
LineSet1383 = x3d.LineSet()
LineSet1383.setVertexCount([2])
Coordinate1384 = x3d.Coordinate()
Coordinate1384.setPoint(x3d.doubleToFloat([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]))

LineSet1383.setCoord(Coordinate1384)

LineSet1383.addComments(x3d.CommentsBlock("""from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2"""))
ColorRGBA1385 = x3d.ColorRGBA()
ColorRGBA1385.setUSE("HAnimSegmentLineColorRGBA")

LineSet1383.setColor(ColorRGBA1385)

Shape1382.setGeometry(LineSet1383)

HAnimSegment1378.addChild(Shape1382)

HAnimJoint1377.addChild(HAnimSegment1378)
HAnimJoint1386 = x3d.HAnimJoint()
HAnimJoint1386.setName("l_metacarpophalangeal_1")
HAnimJoint1386.setDEF("hanim_l_metacarpophalangeal_1")
HAnimJoint1386.setCenter(x3d.doubleToFloat([0.1951,0.8226,0.0246]))
HAnimJoint1386.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1386.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1387 = x3d.HAnimSegment()
HAnimSegment1387.setName("l_carpal_proximal_phalanx_1")
HAnimSegment1387.setDEF("hanim_l_carpal_proximal_phalanx_1")
Transform1388 = x3d.Transform()
Transform1388.setTranslation(x3d.doubleToFloat([0.1951,0.8226,0.0246]))
Transform1389 = x3d.Transform()

Transform1389.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1390 = x3d.Shape()
Shape1390.setUSE("HAnimJointShape")

Transform1389.addChild(Shape1390)

Transform1388.addChild(Transform1389)

HAnimSegment1387.addChild(Transform1388)
Shape1391 = x3d.Shape()
LineSet1392 = x3d.LineSet()
LineSet1392.setVertexCount([2])
Coordinate1393 = x3d.Coordinate()
Coordinate1393.setPoint(x3d.doubleToFloat([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]))

LineSet1392.setCoord(Coordinate1393)

LineSet1392.addComments(x3d.CommentsBlock("""from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2"""))
ColorRGBA1394 = x3d.ColorRGBA()
ColorRGBA1394.setUSE("HAnimSegmentLineColorRGBA")

LineSet1392.setColor(ColorRGBA1394)

Shape1391.setGeometry(LineSet1392)

HAnimSegment1387.addChild(Shape1391)

HAnimJoint1386.addChild(HAnimSegment1387)
HAnimJoint1395 = x3d.HAnimJoint()
HAnimJoint1395.setName("l_carpal_interphalangeal_1")
HAnimJoint1395.setDEF("hanim_l_carpal_interphalangeal_1")
HAnimJoint1395.setCenter(x3d.doubleToFloat([0.1955,0.8159,0.0464]))
HAnimJoint1395.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1395.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint1386.addChild(HAnimJoint1395)

HAnimJoint1377.addChild(HAnimJoint1386)

HAnimJoint1368.addChild(HAnimJoint1377)

HAnimJoint1340.addChild(HAnimJoint1368)
HAnimJoint1396 = x3d.HAnimJoint()
HAnimJoint1396.setName("l_midcarpal_2")
HAnimJoint1396.setDEF("hanim_l_midcarpal_2")
HAnimJoint1396.setCenter(x3d.doubleToFloat([0.1811,0.6984,-0.0935]))
HAnimJoint1396.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1396.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1397 = x3d.HAnimSegment()
HAnimSegment1397.setName("l_trapezoid")
HAnimSegment1397.setDEF("hanim_l_trapezoid")
Transform1398 = x3d.Transform()
Transform1398.setTranslation(x3d.doubleToFloat([0.1811,0.6984,-0.0935]))
Transform1399 = x3d.Transform()

Transform1399.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1400 = x3d.Shape()
Shape1400.setUSE("HAnimJointShape")

Transform1399.addChild(Shape1400)

Transform1398.addChild(Transform1399)

HAnimSegment1397.addChild(Transform1398)
Shape1401 = x3d.Shape()
LineSet1402 = x3d.LineSet()
LineSet1402.setVertexCount([2])
Coordinate1403 = x3d.Coordinate()
Coordinate1403.setPoint(x3d.doubleToFloat([0.1811,0.6984,-0.0935,0.1983,0.8024,-0.028]))

LineSet1402.setCoord(Coordinate1403)

LineSet1402.addComments(x3d.CommentsBlock("""from l_midcarpal_2 to l_carpometacarpal_2 vertices 2"""))
ColorRGBA1404 = x3d.ColorRGBA()
ColorRGBA1404.setUSE("HAnimSegmentLineColorRGBA")

LineSet1402.setColor(ColorRGBA1404)

Shape1401.setGeometry(LineSet1402)

HAnimSegment1397.addChild(Shape1401)

HAnimJoint1396.addChild(HAnimSegment1397)
HAnimJoint1405 = x3d.HAnimJoint()
HAnimJoint1405.setName("l_carpometacarpal_2")
HAnimJoint1405.setDEF("hanim_l_carpometacarpal_2")
HAnimJoint1405.setCenter(x3d.doubleToFloat([0.1983,0.8024,-0.028]))
HAnimJoint1405.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1405.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1406 = x3d.HAnimSegment()
HAnimSegment1406.setName("l_metacarpal_2")
HAnimSegment1406.setDEF("hanim_l_metacarpal_2")
Transform1407 = x3d.Transform()
Transform1407.setTranslation(x3d.doubleToFloat([0.1983,0.8024,-0.028]))
Transform1408 = x3d.Transform()

Transform1408.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1409 = x3d.Shape()
Shape1409.setUSE("HAnimJointShape")

Transform1408.addChild(Shape1409)

Transform1407.addChild(Transform1408)

HAnimSegment1406.addChild(Transform1407)
Shape1410 = x3d.Shape()
LineSet1411 = x3d.LineSet()
LineSet1411.setVertexCount([2])
Coordinate1412 = x3d.Coordinate()
Coordinate1412.setPoint(x3d.doubleToFloat([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]))

LineSet1411.setCoord(Coordinate1412)

LineSet1411.addComments(x3d.CommentsBlock("""from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2"""))
ColorRGBA1413 = x3d.ColorRGBA()
ColorRGBA1413.setUSE("HAnimSegmentLineColorRGBA")

LineSet1411.setColor(ColorRGBA1413)

Shape1410.setGeometry(LineSet1411)

HAnimSegment1406.addChild(Shape1410)
HAnimSite1414 = x3d.HAnimSite()
HAnimSite1414.setName("l_metacarpal_phalanx_2")
HAnimSite1414.setDEF("hanim_l_metacarpal_phalanx_2")
HAnimSite1414.setTranslation(x3d.doubleToFloat([0.2009,0.8139,-0.0237]))
TouchSensor1415 = x3d.TouchSensor()
TouchSensor1415.setDescription("HAnimSite 75 l_metacarpal_phalanx_2")

HAnimSite1414.addChild(TouchSensor1415)
Shape1416 = x3d.Shape()
Shape1416.setUSE("HAnimSiteShape")

HAnimSite1414.addChild(Shape1416)
Billboard1417 = x3d.Billboard()
Shape1418 = x3d.Shape()
Text1419 = x3d.Text()
Text1419.setString(["75"])
FontStyle1420 = x3d.FontStyle()
FontStyle1420.setSize(0.035)

Text1419.setFontStyle(FontStyle1420)

Shape1418.setGeometry(Text1419)

Billboard1417.addChild(Shape1418)

HAnimSite1414.addChild(Billboard1417)

HAnimSegment1406.addChild(HAnimSite1414)

HAnimJoint1405.addChild(HAnimSegment1406)
HAnimJoint1421 = x3d.HAnimJoint()
HAnimJoint1421.setName("l_metacarpophalangeal_2")
HAnimJoint1421.setDEF("hanim_l_metacarpophalangeal_2")
HAnimJoint1421.setCenter(x3d.doubleToFloat([0.1983,0.7815,-0.028]))
HAnimJoint1421.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1421.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1422 = x3d.HAnimSegment()
HAnimSegment1422.setName("l_carpal_proximal_phalanx_2")
HAnimSegment1422.setDEF("hanim_l_carpal_proximal_phalanx_2")
Transform1423 = x3d.Transform()
Transform1423.setTranslation(x3d.doubleToFloat([0.1983,0.7815,-0.028]))
Transform1424 = x3d.Transform()

Transform1424.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1425 = x3d.Shape()
Shape1425.setUSE("HAnimJointShape")

Transform1424.addChild(Shape1425)

Transform1423.addChild(Transform1424)

HAnimSegment1422.addChild(Transform1423)
Shape1426 = x3d.Shape()
LineSet1427 = x3d.LineSet()
LineSet1427.setVertexCount([2])
Coordinate1428 = x3d.Coordinate()
Coordinate1428.setPoint(x3d.doubleToFloat([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]))

LineSet1427.setCoord(Coordinate1428)

LineSet1427.addComments(x3d.CommentsBlock("""from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2"""))
ColorRGBA1429 = x3d.ColorRGBA()
ColorRGBA1429.setUSE("HAnimSegmentLineColorRGBA")

LineSet1427.setColor(ColorRGBA1429)

Shape1426.setGeometry(LineSet1427)

HAnimSegment1422.addChild(Shape1426)

HAnimJoint1421.addChild(HAnimSegment1422)
HAnimJoint1430 = x3d.HAnimJoint()
HAnimJoint1430.setName("l_carpal_proximal_interphalangeal_2")
HAnimJoint1430.setDEF("hanim_l_carpal_proximal_interphalangeal_2")
HAnimJoint1430.setCenter(x3d.doubleToFloat([0.2017,0.7363,-0.0248]))
HAnimJoint1430.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1430.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1431 = x3d.HAnimSegment()
HAnimSegment1431.setName("l_carpal_middle_phalanx_2")
HAnimSegment1431.setDEF("hanim_l_carpal_middle_phalanx_2")
Transform1432 = x3d.Transform()
Transform1432.setTranslation(x3d.doubleToFloat([0.2017,0.7363,-0.0248]))
Transform1433 = x3d.Transform()

Transform1433.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1434 = x3d.Shape()
Shape1434.setUSE("HAnimJointShape")

Transform1433.addChild(Shape1434)

Transform1432.addChild(Transform1433)

HAnimSegment1431.addChild(Transform1432)
Shape1435 = x3d.Shape()
LineSet1436 = x3d.LineSet()
LineSet1436.setVertexCount([2])
Coordinate1437 = x3d.Coordinate()
Coordinate1437.setPoint(x3d.doubleToFloat([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]))

LineSet1436.setCoord(Coordinate1437)

LineSet1436.addComments(x3d.CommentsBlock("""from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2"""))
ColorRGBA1438 = x3d.ColorRGBA()
ColorRGBA1438.setUSE("HAnimSegmentLineColorRGBA")

LineSet1436.setColor(ColorRGBA1438)

Shape1435.setGeometry(LineSet1436)

HAnimSegment1431.addChild(Shape1435)

HAnimJoint1430.addChild(HAnimSegment1431)
HAnimJoint1439 = x3d.HAnimJoint()
HAnimJoint1439.setName("l_carpal_distal_interphalangeal_2")
HAnimJoint1439.setDEF("hanim_l_carpal_distal_interphalangeal_2")
HAnimJoint1439.setCenter(x3d.doubleToFloat([0.2028,0.7139,-0.0236]))
HAnimJoint1439.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1439.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint1430.addChild(HAnimJoint1439)

HAnimJoint1421.addChild(HAnimJoint1430)

HAnimJoint1405.addChild(HAnimJoint1421)

HAnimJoint1396.addChild(HAnimJoint1405)

HAnimJoint1340.addChild(HAnimJoint1396)
HAnimJoint1440 = x3d.HAnimJoint()
HAnimJoint1440.setName("l_midcarpal_3")
HAnimJoint1440.setDEF("hanim_l_midcarpal_3")
HAnimJoint1440.setCenter(x3d.doubleToFloat([0.1809,0.7,-0.1067]))
HAnimJoint1440.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1440.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1441 = x3d.HAnimSegment()
HAnimSegment1441.setName("l_capitate")
HAnimSegment1441.setDEF("hanim_l_capitate")
Transform1442 = x3d.Transform()
Transform1442.setTranslation(x3d.doubleToFloat([0.1809,0.7,-0.1067]))
Transform1443 = x3d.Transform()

Transform1443.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1444 = x3d.Shape()
Shape1444.setUSE("HAnimJointShape")

Transform1443.addChild(Shape1444)

Transform1442.addChild(Transform1443)

HAnimSegment1441.addChild(Transform1442)
Shape1445 = x3d.Shape()
LineSet1446 = x3d.LineSet()
LineSet1446.setVertexCount([2])
Coordinate1447 = x3d.Coordinate()
Coordinate1447.setPoint(x3d.doubleToFloat([0.1809,0.7,-0.1067,0.1987,0.8029,-0.053]))

LineSet1446.setCoord(Coordinate1447)

LineSet1446.addComments(x3d.CommentsBlock("""from l_midcarpal_3 to l_carpometacarpal_3 vertices 2"""))
ColorRGBA1448 = x3d.ColorRGBA()
ColorRGBA1448.setUSE("HAnimSegmentLineColorRGBA")

LineSet1446.setColor(ColorRGBA1448)

Shape1445.setGeometry(LineSet1446)

HAnimSegment1441.addChild(Shape1445)

HAnimJoint1440.addChild(HAnimSegment1441)
HAnimJoint1449 = x3d.HAnimJoint()
HAnimJoint1449.setName("l_carpometacarpal_3")
HAnimJoint1449.setDEF("hanim_l_carpometacarpal_3")
HAnimJoint1449.setCenter(x3d.doubleToFloat([0.1987,0.8029,-0.053]))
HAnimJoint1449.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1449.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1450 = x3d.HAnimSegment()
HAnimSegment1450.setName("l_metacarpal_3")
HAnimSegment1450.setDEF("hanim_l_metacarpal_3")
Transform1451 = x3d.Transform()
Transform1451.setTranslation(x3d.doubleToFloat([0.1987,0.8029,-0.053]))
Transform1452 = x3d.Transform()

Transform1452.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1453 = x3d.Shape()
Shape1453.setUSE("HAnimJointShape")

Transform1452.addChild(Shape1453)

Transform1451.addChild(Transform1452)

HAnimSegment1450.addChild(Transform1451)
Shape1454 = x3d.Shape()
LineSet1455 = x3d.LineSet()
LineSet1455.setVertexCount([2])
Coordinate1456 = x3d.Coordinate()
Coordinate1456.setPoint(x3d.doubleToFloat([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]))

LineSet1455.setCoord(Coordinate1456)

LineSet1455.addComments(x3d.CommentsBlock("""from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2"""))
ColorRGBA1457 = x3d.ColorRGBA()
ColorRGBA1457.setUSE("HAnimSegmentLineColorRGBA")

LineSet1455.setColor(ColorRGBA1457)

Shape1454.setGeometry(LineSet1455)

HAnimSegment1450.addChild(Shape1454)
HAnimSite1458 = x3d.HAnimSite()
HAnimSite1458.setName("l_metacarpal_phalanx_3")
HAnimSite1458.setDEF("hanim_l_metacarpal_phalanx_3")
TouchSensor1459 = x3d.TouchSensor()
TouchSensor1459.setDescription("HAnimSite 76 l_metacarpal_phalanx_3")

HAnimSite1458.addChild(TouchSensor1459)
Shape1460 = x3d.Shape()
Shape1460.setUSE("HAnimSiteShape")

HAnimSite1458.addChild(Shape1460)
Billboard1461 = x3d.Billboard()
Shape1462 = x3d.Shape()
Text1463 = x3d.Text()
Text1463.setString(["76"])
FontStyle1464 = x3d.FontStyle()
FontStyle1464.setSize(0.035)

Text1463.setFontStyle(FontStyle1464)

Shape1462.setGeometry(Text1463)

Billboard1461.addChild(Shape1462)

HAnimSite1458.addChild(Billboard1461)

HAnimSegment1450.addChild(HAnimSite1458)

HAnimJoint1449.addChild(HAnimSegment1450)
HAnimJoint1465 = x3d.HAnimJoint()
HAnimJoint1465.setName("l_metacarpophalangeal_3")
HAnimJoint1465.setDEF("hanim_l_metacarpophalangeal_3")
HAnimJoint1465.setCenter(x3d.doubleToFloat([0.1987,0.7818,-0.053]))
HAnimJoint1465.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1465.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1466 = x3d.HAnimSegment()
HAnimSegment1466.setName("l_carpal_proximal_phalanx_3")
HAnimSegment1466.setDEF("hanim_l_carpal_proximal_phalanx_3")
Transform1467 = x3d.Transform()
Transform1467.setTranslation(x3d.doubleToFloat([0.1987,0.7818,-0.053]))
Transform1468 = x3d.Transform()

Transform1468.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1469 = x3d.Shape()
Shape1469.setUSE("HAnimJointShape")

Transform1468.addChild(Shape1469)

Transform1467.addChild(Transform1468)

HAnimSegment1466.addChild(Transform1467)
Shape1470 = x3d.Shape()
LineSet1471 = x3d.LineSet()
LineSet1471.setVertexCount([2])
Coordinate1472 = x3d.Coordinate()
Coordinate1472.setPoint(x3d.doubleToFloat([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]))

LineSet1471.setCoord(Coordinate1472)

LineSet1471.addComments(x3d.CommentsBlock("""from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2"""))
ColorRGBA1473 = x3d.ColorRGBA()
ColorRGBA1473.setUSE("HAnimSegmentLineColorRGBA")

LineSet1471.setColor(ColorRGBA1473)

Shape1470.setGeometry(LineSet1471)

HAnimSegment1466.addChild(Shape1470)

HAnimJoint1465.addChild(HAnimSegment1466)
HAnimJoint1474 = x3d.HAnimJoint()
HAnimJoint1474.setName("l_carpal_proximal_interphalangeal_3")
HAnimJoint1474.setDEF("hanim_l_carpal_proximal_interphalangeal_3")
HAnimJoint1474.setCenter(x3d.doubleToFloat([0.2013,0.7273,-0.0503]))
HAnimJoint1474.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1474.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1475 = x3d.HAnimSegment()
HAnimSegment1475.setName("l_carpal_middle_phalanx_3")
HAnimSegment1475.setDEF("hanim_l_carpal_middle_phalanx_3")
Transform1476 = x3d.Transform()
Transform1476.setTranslation(x3d.doubleToFloat([0.2013,0.7273,-0.0503]))
Transform1477 = x3d.Transform()

Transform1477.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1478 = x3d.Shape()
Shape1478.setUSE("HAnimJointShape")

Transform1477.addChild(Shape1478)

Transform1476.addChild(Transform1477)

HAnimSegment1475.addChild(Transform1476)
Shape1479 = x3d.Shape()
LineSet1480 = x3d.LineSet()
LineSet1480.setVertexCount([2])
Coordinate1481 = x3d.Coordinate()
Coordinate1481.setPoint(x3d.doubleToFloat([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]))

LineSet1480.setCoord(Coordinate1481)

LineSet1480.addComments(x3d.CommentsBlock("""from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2"""))
ColorRGBA1482 = x3d.ColorRGBA()
ColorRGBA1482.setUSE("HAnimSegmentLineColorRGBA")

LineSet1480.setColor(ColorRGBA1482)

Shape1479.setGeometry(LineSet1480)

HAnimSegment1475.addChild(Shape1479)

HAnimJoint1474.addChild(HAnimSegment1475)
HAnimJoint1483 = x3d.HAnimJoint()
HAnimJoint1483.setName("l_carpal_distal_interphalangeal_3")
HAnimJoint1483.setDEF("hanim_l_carpal_distal_interphalangeal_3")
HAnimJoint1483.setCenter(x3d.doubleToFloat([0.2026,0.7011,-0.0494]))
HAnimJoint1483.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1483.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint1474.addChild(HAnimJoint1483)

HAnimJoint1465.addChild(HAnimJoint1474)

HAnimJoint1449.addChild(HAnimJoint1465)

HAnimJoint1440.addChild(HAnimJoint1449)

HAnimJoint1340.addChild(HAnimJoint1440)
HAnimJoint1484 = x3d.HAnimJoint()
HAnimJoint1484.setName("l_midcarpal_4_5")
HAnimJoint1484.setDEF("hanim_l_midcarpal_4_5")
HAnimJoint1484.setCenter(x3d.doubleToFloat([0.1809,0.6973,-0.1276]))
HAnimJoint1484.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1484.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1485 = x3d.HAnimSegment()
HAnimSegment1485.setName("l_hamate")
HAnimSegment1485.setDEF("hanim_l_hamate")
Transform1486 = x3d.Transform()
Transform1486.setTranslation(x3d.doubleToFloat([0.1809,0.6973,-0.1276]))
Transform1487 = x3d.Transform()

Transform1487.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1488 = x3d.Shape()
Shape1488.setUSE("HAnimJointShape")

Transform1487.addChild(Shape1488)

Transform1486.addChild(Transform1487)

HAnimSegment1485.addChild(Transform1486)
Shape1489 = x3d.Shape()
LineSet1490 = x3d.LineSet()
LineSet1490.setVertexCount([2])
Coordinate1491 = x3d.Coordinate()
Coordinate1491.setPoint(x3d.doubleToFloat([0.1809,0.6973,-0.1276,0.1956,0.8019,-0.0794]))

LineSet1490.setCoord(Coordinate1491)

LineSet1490.addComments(x3d.CommentsBlock("""from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2"""))
ColorRGBA1492 = x3d.ColorRGBA()
ColorRGBA1492.setUSE("HAnimSegmentLineColorRGBA")

LineSet1490.setColor(ColorRGBA1492)

Shape1489.setGeometry(LineSet1490)

HAnimSegment1485.addChild(Shape1489)
Shape1493 = x3d.Shape()
LineSet1494 = x3d.LineSet()
LineSet1494.setVertexCount([2])
Coordinate1495 = x3d.Coordinate()
Coordinate1495.setPoint(x3d.doubleToFloat([0.1809,0.6973,-0.1276,0.1925,0.8066,-0.1036]))

LineSet1494.setCoord(Coordinate1495)

LineSet1494.addComments(x3d.CommentsBlock("""from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2"""))
ColorRGBA1496 = x3d.ColorRGBA()
ColorRGBA1496.setUSE("HAnimSegmentLineColorRGBA")

LineSet1494.setColor(ColorRGBA1496)

Shape1493.setGeometry(LineSet1494)

HAnimSegment1485.addChild(Shape1493)

HAnimJoint1484.addChild(HAnimSegment1485)
HAnimJoint1497 = x3d.HAnimJoint()
HAnimJoint1497.setName("l_carpometacarpal_4")
HAnimJoint1497.setDEF("hanim_l_carpometacarpal_4")
HAnimJoint1497.setCenter(x3d.doubleToFloat([0.1956,0.8019,-0.0794]))
HAnimJoint1497.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1497.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1498 = x3d.HAnimSegment()
HAnimSegment1498.setName("l_metacarpal_4")
HAnimSegment1498.setDEF("hanim_l_metacarpal_4")
Transform1499 = x3d.Transform()
Transform1499.setTranslation(x3d.doubleToFloat([0.1956,0.8019,-0.0794]))
Transform1500 = x3d.Transform()

Transform1500.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1501 = x3d.Shape()
Shape1501.setUSE("HAnimJointShape")

Transform1500.addChild(Shape1501)

Transform1499.addChild(Transform1500)

HAnimSegment1498.addChild(Transform1499)
Shape1502 = x3d.Shape()
LineSet1503 = x3d.LineSet()
LineSet1503.setVertexCount([2])
Coordinate1504 = x3d.Coordinate()
Coordinate1504.setPoint(x3d.doubleToFloat([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]))

LineSet1503.setCoord(Coordinate1504)

LineSet1503.addComments(x3d.CommentsBlock("""from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2"""))
ColorRGBA1505 = x3d.ColorRGBA()
ColorRGBA1505.setUSE("HAnimSegmentLineColorRGBA")

LineSet1503.setColor(ColorRGBA1505)

Shape1502.setGeometry(LineSet1503)

HAnimSegment1498.addChild(Shape1502)

HAnimJoint1497.addChild(HAnimSegment1498)
HAnimJoint1506 = x3d.HAnimJoint()
HAnimJoint1506.setName("l_metacarpophalangeal_4")
HAnimJoint1506.setDEF("hanim_l_metacarpophalangeal_4")
HAnimJoint1506.setCenter(x3d.doubleToFloat([0.1956,0.7815,-0.0794]))
HAnimJoint1506.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1506.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1507 = x3d.HAnimSegment()
HAnimSegment1507.setName("l_carpal_proximal_phalanx_4")
HAnimSegment1507.setDEF("hanim_l_carpal_proximal_phalanx_4")
Transform1508 = x3d.Transform()
Transform1508.setTranslation(x3d.doubleToFloat([0.1956,0.7815,-0.0794]))
Transform1509 = x3d.Transform()

Transform1509.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1510 = x3d.Shape()
Shape1510.setUSE("HAnimJointShape")

Transform1509.addChild(Shape1510)

Transform1508.addChild(Transform1509)

HAnimSegment1507.addChild(Transform1508)
Shape1511 = x3d.Shape()
LineSet1512 = x3d.LineSet()
LineSet1512.setVertexCount([2])
Coordinate1513 = x3d.Coordinate()
Coordinate1513.setPoint(x3d.doubleToFloat([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]))

LineSet1512.setCoord(Coordinate1513)

LineSet1512.addComments(x3d.CommentsBlock("""from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2"""))
ColorRGBA1514 = x3d.ColorRGBA()
ColorRGBA1514.setUSE("HAnimSegmentLineColorRGBA")

LineSet1512.setColor(ColorRGBA1514)

Shape1511.setGeometry(LineSet1512)

HAnimSegment1507.addChild(Shape1511)

HAnimJoint1506.addChild(HAnimSegment1507)
HAnimJoint1515 = x3d.HAnimJoint()
HAnimJoint1515.setName("l_carpal_proximal_interphalangeal_4")
HAnimJoint1515.setDEF("hanim_l_carpal_proximal_interphalangeal_4")
HAnimJoint1515.setCenter(x3d.doubleToFloat([0.1973,0.7287,-0.0777]))
HAnimJoint1515.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1515.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1516 = x3d.HAnimSegment()
HAnimSegment1516.setName("l_carpal_middle_phalanx_4")
HAnimSegment1516.setDEF("hanim_l_carpal_middle_phalanx_4")
Transform1517 = x3d.Transform()
Transform1517.setTranslation(x3d.doubleToFloat([0.1973,0.7287,-0.0777]))
Transform1518 = x3d.Transform()

Transform1518.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1519 = x3d.Shape()
Shape1519.setUSE("HAnimJointShape")

Transform1518.addChild(Shape1519)

Transform1517.addChild(Transform1518)

HAnimSegment1516.addChild(Transform1517)
Shape1520 = x3d.Shape()
LineSet1521 = x3d.LineSet()
LineSet1521.setVertexCount([2])
Coordinate1522 = x3d.Coordinate()
Coordinate1522.setPoint(x3d.doubleToFloat([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]))

LineSet1521.setCoord(Coordinate1522)

LineSet1521.addComments(x3d.CommentsBlock("""from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2"""))
ColorRGBA1523 = x3d.ColorRGBA()
ColorRGBA1523.setUSE("HAnimSegmentLineColorRGBA")

LineSet1521.setColor(ColorRGBA1523)

Shape1520.setGeometry(LineSet1521)

HAnimSegment1516.addChild(Shape1520)

HAnimJoint1515.addChild(HAnimSegment1516)
HAnimJoint1524 = x3d.HAnimJoint()
HAnimJoint1524.setName("l_carpal_distal_interphalangeal_4")
HAnimJoint1524.setDEF("hanim_l_carpal_distal_interphalangeal_4")
HAnimJoint1524.setCenter(x3d.doubleToFloat([0.1983,0.7045,-0.0767]))
HAnimJoint1524.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1524.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint1515.addChild(HAnimJoint1524)

HAnimJoint1506.addChild(HAnimJoint1515)

HAnimJoint1497.addChild(HAnimJoint1506)

HAnimJoint1484.addChild(HAnimJoint1497)
HAnimJoint1525 = x3d.HAnimJoint()
HAnimJoint1525.setName("l_carpometacarpal_5")
HAnimJoint1525.setDEF("hanim_l_carpometacarpal_5")
HAnimJoint1525.setCenter(x3d.doubleToFloat([0.1925,0.8066,-0.1036]))
HAnimJoint1525.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1525.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1526 = x3d.HAnimSegment()
HAnimSegment1526.setName("l_metacarpal_5")
HAnimSegment1526.setDEF("hanim_l_metacarpal_5")
Transform1527 = x3d.Transform()
Transform1527.setTranslation(x3d.doubleToFloat([0.1925,0.8066,-0.1036]))
Transform1528 = x3d.Transform()

Transform1528.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1529 = x3d.Shape()
Shape1529.setUSE("HAnimJointShape")

Transform1528.addChild(Shape1529)

Transform1527.addChild(Transform1528)

HAnimSegment1526.addChild(Transform1527)
Shape1530 = x3d.Shape()
LineSet1531 = x3d.LineSet()
LineSet1531.setVertexCount([2])
Coordinate1532 = x3d.Coordinate()
Coordinate1532.setPoint(x3d.doubleToFloat([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]))

LineSet1531.setCoord(Coordinate1532)

LineSet1531.addComments(x3d.CommentsBlock("""from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2"""))
ColorRGBA1533 = x3d.ColorRGBA()
ColorRGBA1533.setUSE("HAnimSegmentLineColorRGBA")

LineSet1531.setColor(ColorRGBA1533)

Shape1530.setGeometry(LineSet1531)

HAnimSegment1526.addChild(Shape1530)
HAnimSite1534 = x3d.HAnimSite()
HAnimSite1534.setName("l_metacarpal_phalanx_5")
HAnimSite1534.setDEF("hanim_l_metacarpal_phalanx_5")
HAnimSite1534.setTranslation(x3d.doubleToFloat([0.1929,0.786,-0.1122]))
TouchSensor1535 = x3d.TouchSensor()
TouchSensor1535.setDescription("HAnimSite 77 l_metacarpal_phalanx_5")

HAnimSite1534.addChild(TouchSensor1535)
Shape1536 = x3d.Shape()
Shape1536.setUSE("HAnimSiteShape")

HAnimSite1534.addChild(Shape1536)
Billboard1537 = x3d.Billboard()
Shape1538 = x3d.Shape()
Text1539 = x3d.Text()
Text1539.setString(["77"])
FontStyle1540 = x3d.FontStyle()
FontStyle1540.setSize(0.035)

Text1539.setFontStyle(FontStyle1540)

Shape1538.setGeometry(Text1539)

Billboard1537.addChild(Shape1538)

HAnimSite1534.addChild(Billboard1537)

HAnimSegment1526.addChild(HAnimSite1534)

HAnimJoint1525.addChild(HAnimSegment1526)
HAnimJoint1541 = x3d.HAnimJoint()
HAnimJoint1541.setName("l_metacarpophalangeal_5")
HAnimJoint1541.setDEF("hanim_l_metacarpophalangeal_5")
HAnimJoint1541.setCenter(x3d.doubleToFloat([0.1925,0.7866,-0.1036]))
HAnimJoint1541.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1541.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1542 = x3d.HAnimSegment()
HAnimSegment1542.setName("l_carpal_proximal_phalanx_5")
HAnimSegment1542.setDEF("hanim_l_carpal_proximal_phalanx_5")
Transform1543 = x3d.Transform()
Transform1543.setTranslation(x3d.doubleToFloat([0.1925,0.7866,-0.1036]))
Transform1544 = x3d.Transform()

Transform1544.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1545 = x3d.Shape()
Shape1545.setUSE("HAnimJointShape")

Transform1544.addChild(Shape1545)

Transform1543.addChild(Transform1544)

HAnimSegment1542.addChild(Transform1543)
Shape1546 = x3d.Shape()
LineSet1547 = x3d.LineSet()
LineSet1547.setVertexCount([2])
Coordinate1548 = x3d.Coordinate()
Coordinate1548.setPoint(x3d.doubleToFloat([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]))

LineSet1547.setCoord(Coordinate1548)

LineSet1547.addComments(x3d.CommentsBlock("""from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2"""))
ColorRGBA1549 = x3d.ColorRGBA()
ColorRGBA1549.setUSE("HAnimSegmentLineColorRGBA")

LineSet1547.setColor(ColorRGBA1549)

Shape1546.setGeometry(LineSet1547)

HAnimSegment1542.addChild(Shape1546)

HAnimJoint1541.addChild(HAnimSegment1542)
HAnimJoint1550 = x3d.HAnimJoint()
HAnimJoint1550.setName("l_carpal_proximal_interphalangeal_5")
HAnimJoint1550.setDEF("hanim_l_carpal_proximal_interphalangeal_5")
HAnimJoint1550.setCenter(x3d.doubleToFloat([0.1938,0.7452,-0.1024]))
HAnimJoint1550.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1550.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1551 = x3d.HAnimSegment()
HAnimSegment1551.setName("l_carpal_middle_phalanx_5")
HAnimSegment1551.setDEF("hanim_l_carpal_middle_phalanx_5")
Transform1552 = x3d.Transform()
Transform1552.setTranslation(x3d.doubleToFloat([0.1938,0.7452,-0.1024]))
Transform1553 = x3d.Transform()

Transform1553.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1554 = x3d.Shape()
Shape1554.setUSE("HAnimJointShape")

Transform1553.addChild(Shape1554)

Transform1552.addChild(Transform1553)

HAnimSegment1551.addChild(Transform1552)
Shape1555 = x3d.Shape()
LineSet1556 = x3d.LineSet()
LineSet1556.setVertexCount([2])
Coordinate1557 = x3d.Coordinate()
Coordinate1557.setPoint(x3d.doubleToFloat([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]))

LineSet1556.setCoord(Coordinate1557)

LineSet1556.addComments(x3d.CommentsBlock("""from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2"""))
ColorRGBA1558 = x3d.ColorRGBA()
ColorRGBA1558.setUSE("HAnimSegmentLineColorRGBA")

LineSet1556.setColor(ColorRGBA1558)

Shape1555.setGeometry(LineSet1556)

HAnimSegment1551.addChild(Shape1555)

HAnimJoint1550.addChild(HAnimSegment1551)
HAnimJoint1559 = x3d.HAnimJoint()
HAnimJoint1559.setName("l_carpal_distal_interphalangeal_5")
HAnimJoint1559.setDEF("hanim_l_carpal_distal_interphalangeal_5")
HAnimJoint1559.setCenter(x3d.doubleToFloat([0.1948,0.7277,-0.1017]))
HAnimJoint1559.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1559.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint1550.addChild(HAnimJoint1559)

HAnimJoint1541.addChild(HAnimJoint1550)

HAnimJoint1525.addChild(HAnimJoint1541)

HAnimJoint1484.addChild(HAnimJoint1525)

HAnimJoint1340.addChild(HAnimJoint1484)

HAnimJoint1303.addChild(HAnimJoint1340)

HAnimJoint1280.addChild(HAnimJoint1303)

HAnimJoint1271.addChild(HAnimJoint1280)

HAnimJoint1227.addChild(HAnimJoint1271)

HAnimJoint995.addChild(HAnimJoint1227)
HAnimJoint1560 = x3d.HAnimJoint()
HAnimJoint1560.setName("r_sternoclavicular")
HAnimJoint1560.setDEF("hanim_r_sternoclavicular")
HAnimJoint1560.setCenter(x3d.doubleToFloat([-0.0694,1.46,-0.033]))
HAnimJoint1560.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1560.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1561 = x3d.HAnimSegment()
HAnimSegment1561.setName("r_clavicle")
HAnimSegment1561.setDEF("hanim_r_clavicle")
Transform1562 = x3d.Transform()
Transform1562.setTranslation(x3d.doubleToFloat([-0.0694,1.46,-0.033]))
Transform1563 = x3d.Transform()

Transform1563.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1564 = x3d.Shape()
Shape1564.setUSE("HAnimJointShape")

Transform1563.addChild(Shape1564)

Transform1562.addChild(Transform1563)

HAnimSegment1561.addChild(Transform1562)
Shape1565 = x3d.Shape()
LineSet1566 = x3d.LineSet()
LineSet1566.setVertexCount([2])
Coordinate1567 = x3d.Coordinate()
Coordinate1567.setPoint(x3d.doubleToFloat([-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]))

LineSet1566.setCoord(Coordinate1567)

LineSet1566.addComments(x3d.CommentsBlock("""from r_sternoclavicular to r_acromioclavicular vertices 2"""))
ColorRGBA1568 = x3d.ColorRGBA()
ColorRGBA1568.setUSE("HAnimSegmentLineColorRGBA")

LineSet1566.setColor(ColorRGBA1568)

Shape1565.setGeometry(LineSet1566)

HAnimSegment1561.addChild(Shape1565)
HAnimSite1569 = x3d.HAnimSite()
HAnimSite1569.setName("r_acromion")
HAnimSite1569.setDEF("hanim_r_acromion")
HAnimSite1569.setTranslation(x3d.doubleToFloat([-0.1905,1.4791,-0.0431]))
TouchSensor1570 = x3d.TouchSensor()
TouchSensor1570.setDescription("HAnimSite 20 r_acromion")

HAnimSite1569.addChild(TouchSensor1570)
Shape1571 = x3d.Shape()
Shape1571.setUSE("HAnimSiteShape")

HAnimSite1569.addChild(Shape1571)
Billboard1572 = x3d.Billboard()
Shape1573 = x3d.Shape()
Text1574 = x3d.Text()
Text1574.setString(["20"])
FontStyle1575 = x3d.FontStyle()
FontStyle1575.setSize(0.035)

Text1574.setFontStyle(FontStyle1575)

Shape1573.setGeometry(Text1574)

Billboard1572.addChild(Shape1573)

HAnimSite1569.addChild(Billboard1572)

HAnimSegment1561.addChild(HAnimSite1569)
HAnimSite1576 = x3d.HAnimSite()
HAnimSite1576.setName("r_axilla_distal")
HAnimSite1576.setDEF("hanim_r_axilla_distal")
HAnimSite1576.setTranslation(x3d.doubleToFloat([-0.1603,1.4098,-0.0826]))
TouchSensor1577 = x3d.TouchSensor()
TouchSensor1577.setDescription("HAnimSite 22 r_axilla_distal")

HAnimSite1576.addChild(TouchSensor1577)
Shape1578 = x3d.Shape()
Shape1578.setUSE("HAnimSiteShape")

HAnimSite1576.addChild(Shape1578)
Billboard1579 = x3d.Billboard()
Shape1580 = x3d.Shape()
Text1581 = x3d.Text()
Text1581.setString(["22"])
FontStyle1582 = x3d.FontStyle()
FontStyle1582.setSize(0.035)

Text1581.setFontStyle(FontStyle1582)

Shape1580.setGeometry(Text1581)

Billboard1579.addChild(Shape1580)

HAnimSite1576.addChild(Billboard1579)

HAnimSegment1561.addChild(HAnimSite1576)
HAnimSite1583 = x3d.HAnimSite()
HAnimSite1583.setName("r_axilla_posterior_folds")
HAnimSite1583.setDEF("hanim_r_axilla_posterior_folds")
TouchSensor1584 = x3d.TouchSensor()
TouchSensor1584.setDescription("HAnimSite 23 r_axilla_posterior_folds")

HAnimSite1583.addChild(TouchSensor1584)
Shape1585 = x3d.Shape()
Shape1585.setUSE("HAnimSiteShape")

HAnimSite1583.addChild(Shape1585)
Billboard1586 = x3d.Billboard()
Shape1587 = x3d.Shape()
Text1588 = x3d.Text()
Text1588.setString(["23"])
FontStyle1589 = x3d.FontStyle()
FontStyle1589.setSize(0.035)

Text1588.setFontStyle(FontStyle1589)

Shape1587.setGeometry(Text1588)

Billboard1586.addChild(Shape1587)

HAnimSite1583.addChild(Billboard1586)

HAnimSegment1561.addChild(HAnimSite1583)
HAnimSite1590 = x3d.HAnimSite()
HAnimSite1590.setName("r_axilla_proximal")
HAnimSite1590.setDEF("hanim_r_axilla_proximal")
HAnimSite1590.setTranslation(x3d.doubleToFloat([-0.1626,1.4072,-0.0031]))
TouchSensor1591 = x3d.TouchSensor()
TouchSensor1591.setDescription("HAnimSite 21 r_axilla_proximal")

HAnimSite1590.addChild(TouchSensor1591)
Shape1592 = x3d.Shape()
Shape1592.setUSE("HAnimSiteShape")

HAnimSite1590.addChild(Shape1592)
Billboard1593 = x3d.Billboard()
Shape1594 = x3d.Shape()
Text1595 = x3d.Text()
Text1595.setString(["21"])
FontStyle1596 = x3d.FontStyle()
FontStyle1596.setSize(0.035)

Text1595.setFontStyle(FontStyle1596)

Shape1594.setGeometry(Text1595)

Billboard1593.addChild(Shape1594)

HAnimSite1590.addChild(Billboard1593)

HAnimSegment1561.addChild(HAnimSite1590)
HAnimSite1597 = x3d.HAnimSite()
HAnimSite1597.setName("r_clavicale")
HAnimSite1597.setDEF("hanim_r_clavicale")
HAnimSite1597.setTranslation(x3d.doubleToFloat([-0.0115,1.4943,0.04]))
TouchSensor1598 = x3d.TouchSensor()
TouchSensor1598.setDescription("HAnimSite 19 r_clavicale")

HAnimSite1597.addChild(TouchSensor1598)
Shape1599 = x3d.Shape()
Shape1599.setUSE("HAnimSiteShape")

HAnimSite1597.addChild(Shape1599)
Billboard1600 = x3d.Billboard()
Shape1601 = x3d.Shape()
Text1602 = x3d.Text()
Text1602.setString(["19"])
FontStyle1603 = x3d.FontStyle()
FontStyle1603.setSize(0.035)

Text1602.setFontStyle(FontStyle1603)

Shape1601.setGeometry(Text1602)

Billboard1600.addChild(Shape1601)

HAnimSite1597.addChild(Billboard1600)

HAnimSegment1561.addChild(HAnimSite1597)

HAnimJoint1560.addChild(HAnimSegment1561)
HAnimJoint1604 = x3d.HAnimJoint()
HAnimJoint1604.setName("r_acromioclavicular")
HAnimJoint1604.setDEF("hanim_r_acromioclavicular")
HAnimJoint1604.setCenter(x3d.doubleToFloat([-0.0836,1.4281,-0.0401]))
HAnimJoint1604.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1604.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1605 = x3d.HAnimSegment()
HAnimSegment1605.setName("r_scapula")
HAnimSegment1605.setDEF("hanim_r_scapula")
Transform1606 = x3d.Transform()
Transform1606.setTranslation(x3d.doubleToFloat([-0.0836,1.4281,-0.0401]))
Transform1607 = x3d.Transform()

Transform1607.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1608 = x3d.Shape()
Shape1608.setUSE("HAnimJointShape")

Transform1607.addChild(Shape1608)

Transform1606.addChild(Transform1607)

HAnimSegment1605.addChild(Transform1606)
Shape1609 = x3d.Shape()
LineSet1610 = x3d.LineSet()
LineSet1610.setVertexCount([2])
Coordinate1611 = x3d.Coordinate()
Coordinate1611.setPoint(x3d.doubleToFloat([-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]))

LineSet1610.setCoord(Coordinate1611)

LineSet1610.addComments(x3d.CommentsBlock("""from r_acromioclavicular to r_shoulder vertices 2"""))
ColorRGBA1612 = x3d.ColorRGBA()
ColorRGBA1612.setUSE("HAnimSegmentLineColorRGBA")

LineSet1610.setColor(ColorRGBA1612)

Shape1609.setGeometry(LineSet1610)

HAnimSegment1605.addChild(Shape1609)

HAnimJoint1604.addChild(HAnimSegment1605)
HAnimJoint1613 = x3d.HAnimJoint()
HAnimJoint1613.setName("r_shoulder")
HAnimJoint1613.setDEF("hanim_r_shoulder")
HAnimJoint1613.setCenter(x3d.doubleToFloat([-0.1907,1.4407,-0.0325]))
HAnimJoint1613.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1613.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1614 = x3d.HAnimSegment()
HAnimSegment1614.setName("r_upperarm")
HAnimSegment1614.setDEF("hanim_r_upperarm")
Transform1615 = x3d.Transform()
Transform1615.setTranslation(x3d.doubleToFloat([-0.1907,1.4407,-0.0325]))
Transform1616 = x3d.Transform()

Transform1616.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1617 = x3d.Shape()
Shape1617.setUSE("HAnimJointShape")

Transform1616.addChild(Shape1617)

Transform1615.addChild(Transform1616)

HAnimSegment1614.addChild(Transform1615)
Shape1618 = x3d.Shape()
LineSet1619 = x3d.LineSet()
LineSet1619.setVertexCount([2])
Coordinate1620 = x3d.Coordinate()
Coordinate1620.setPoint(x3d.doubleToFloat([-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]))

LineSet1619.setCoord(Coordinate1620)

LineSet1619.addComments(x3d.CommentsBlock("""from r_shoulder to r_elbow vertices 2"""))
ColorRGBA1621 = x3d.ColorRGBA()
ColorRGBA1621.setUSE("HAnimSegmentLineColorRGBA")

LineSet1619.setColor(ColorRGBA1621)

Shape1618.setGeometry(LineSet1619)

HAnimSegment1614.addChild(Shape1618)
HAnimSite1622 = x3d.HAnimSite()
HAnimSite1622.setName("r_bideltoid")
HAnimSite1622.setDEF("hanim_r_bideltoid")
TouchSensor1623 = x3d.TouchSensor()
TouchSensor1623.setDescription("HAnimSite 97 r_bideltoid")

HAnimSite1622.addChild(TouchSensor1623)
Shape1624 = x3d.Shape()
Shape1624.setUSE("HAnimSiteShape")

HAnimSite1622.addChild(Shape1624)
Billboard1625 = x3d.Billboard()
Shape1626 = x3d.Shape()
Text1627 = x3d.Text()
Text1627.setString(["97"])
FontStyle1628 = x3d.FontStyle()
FontStyle1628.setSize(0.035)

Text1627.setFontStyle(FontStyle1628)

Shape1626.setGeometry(Text1627)

Billboard1625.addChild(Shape1626)

HAnimSite1622.addChild(Billboard1625)

HAnimSegment1614.addChild(HAnimSite1622)
HAnimSite1629 = x3d.HAnimSite()
HAnimSite1629.setName("r_humeral_lateral_epicondyles")
HAnimSite1629.setDEF("hanim_r_humeral_lateral_epicondyles")
HAnimSite1629.setTranslation(x3d.doubleToFloat([-0.2224,1.1517,-0.1033]))
TouchSensor1630 = x3d.TouchSensor()
TouchSensor1630.setDescription("HAnimSite 66 r_humeral_lateral_epicondyles")

HAnimSite1629.addChild(TouchSensor1630)
Shape1631 = x3d.Shape()
Shape1631.setUSE("HAnimSiteShape")

HAnimSite1629.addChild(Shape1631)
Billboard1632 = x3d.Billboard()
Shape1633 = x3d.Shape()
Text1634 = x3d.Text()
Text1634.setString(["66"])
FontStyle1635 = x3d.FontStyle()
FontStyle1635.setSize(0.035)

Text1634.setFontStyle(FontStyle1635)

Shape1633.setGeometry(Text1634)

Billboard1632.addChild(Shape1633)

HAnimSite1629.addChild(Billboard1632)

HAnimSegment1614.addChild(HAnimSite1629)

HAnimJoint1613.addChild(HAnimSegment1614)
HAnimJoint1636 = x3d.HAnimJoint()
HAnimJoint1636.setName("r_elbow")
HAnimJoint1636.setDEF("hanim_r_elbow")
HAnimJoint1636.setCenter(x3d.doubleToFloat([-0.1949,1.1388,-0.062]))
HAnimJoint1636.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1636.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1637 = x3d.HAnimSegment()
HAnimSegment1637.setName("r_forearm")
HAnimSegment1637.setDEF("hanim_r_forearm")
Transform1638 = x3d.Transform()
Transform1638.setTranslation(x3d.doubleToFloat([-0.1949,1.1388,-0.062]))
Transform1639 = x3d.Transform()

Transform1639.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1640 = x3d.Shape()
Shape1640.setUSE("HAnimJointShape")

Transform1639.addChild(Shape1640)

Transform1638.addChild(Transform1639)

HAnimSegment1637.addChild(Transform1638)
Shape1641 = x3d.Shape()
LineSet1642 = x3d.LineSet()
LineSet1642.setVertexCount([2])
Coordinate1643 = x3d.Coordinate()
Coordinate1643.setPoint(x3d.doubleToFloat([-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]))

LineSet1642.setCoord(Coordinate1643)

LineSet1642.addComments(x3d.CommentsBlock("""from r_elbow to r_radiocarpal vertices 2"""))
ColorRGBA1644 = x3d.ColorRGBA()
ColorRGBA1644.setUSE("HAnimSegmentLineColorRGBA")

LineSet1642.setColor(ColorRGBA1644)

Shape1641.setGeometry(LineSet1642)

HAnimSegment1637.addChild(Shape1641)
HAnimSite1645 = x3d.HAnimSite()
HAnimSite1645.setName("r_humeral_medial_epicondyles")
HAnimSite1645.setDEF("hanim_r_humeral_medial_epicondyles")
HAnimSite1645.setTranslation(x3d.doubleToFloat([-0.168,1.1298,-0.1062]))
TouchSensor1646 = x3d.TouchSensor()
TouchSensor1646.setDescription("HAnimSite 67 r_humeral_medial_epicondyles")

HAnimSite1645.addChild(TouchSensor1646)
Shape1647 = x3d.Shape()
Shape1647.setUSE("HAnimSiteShape")

HAnimSite1645.addChild(Shape1647)
Billboard1648 = x3d.Billboard()
Shape1649 = x3d.Shape()
Text1650 = x3d.Text()
Text1650.setString(["67"])
FontStyle1651 = x3d.FontStyle()
FontStyle1651.setSize(0.035)

Text1650.setFontStyle(FontStyle1651)

Shape1649.setGeometry(Text1650)

Billboard1648.addChild(Shape1649)

HAnimSite1645.addChild(Billboard1648)

HAnimSegment1637.addChild(HAnimSite1645)
HAnimSite1652 = x3d.HAnimSite()
HAnimSite1652.setName("r_olecranon")
HAnimSite1652.setDEF("hanim_r_olecranon")
HAnimSite1652.setTranslation(x3d.doubleToFloat([-0.1907,1.1405,-0.1065]))
TouchSensor1653 = x3d.TouchSensor()
TouchSensor1653.setDescription("HAnimSite 68 r_olecranon")

HAnimSite1652.addChild(TouchSensor1653)
Shape1654 = x3d.Shape()
Shape1654.setUSE("HAnimSiteShape")

HAnimSite1652.addChild(Shape1654)
Billboard1655 = x3d.Billboard()
Shape1656 = x3d.Shape()
Text1657 = x3d.Text()
Text1657.setString(["68"])
FontStyle1658 = x3d.FontStyle()
FontStyle1658.setSize(0.035)

Text1657.setFontStyle(FontStyle1658)

Shape1656.setGeometry(Text1657)

Billboard1655.addChild(Shape1656)

HAnimSite1652.addChild(Billboard1655)

HAnimSegment1637.addChild(HAnimSite1652)
HAnimSite1659 = x3d.HAnimSite()
HAnimSite1659.setName("r_radial_styloid")
HAnimSite1659.setDEF("hanim_r_radial_styloid")
HAnimSite1659.setTranslation(x3d.doubleToFloat([-0.1884,0.8676,-0.036]))
TouchSensor1660 = x3d.TouchSensor()
TouchSensor1660.setDescription("HAnimSite 74 r_radial_styloid")

HAnimSite1659.addChild(TouchSensor1660)
Shape1661 = x3d.Shape()
Shape1661.setUSE("HAnimSiteShape")

HAnimSite1659.addChild(Shape1661)
Billboard1662 = x3d.Billboard()
Shape1663 = x3d.Shape()
Text1664 = x3d.Text()
Text1664.setString(["74"])
FontStyle1665 = x3d.FontStyle()
FontStyle1665.setSize(0.035)

Text1664.setFontStyle(FontStyle1665)

Shape1663.setGeometry(Text1664)

Billboard1662.addChild(Shape1663)

HAnimSite1659.addChild(Billboard1662)

HAnimSegment1637.addChild(HAnimSite1659)
HAnimSite1666 = x3d.HAnimSite()
HAnimSite1666.setName("r_radiale")
HAnimSite1666.setDEF("hanim_r_radiale")
HAnimSite1666.setTranslation(x3d.doubleToFloat([-0.213,1.1305,-0.1091]))
TouchSensor1667 = x3d.TouchSensor()
TouchSensor1667.setDescription("HAnimSite 72 r_radiale")

HAnimSite1666.addChild(TouchSensor1667)
Shape1668 = x3d.Shape()
Shape1668.setUSE("HAnimSiteShape")

HAnimSite1666.addChild(Shape1668)
Billboard1669 = x3d.Billboard()
Shape1670 = x3d.Shape()
Text1671 = x3d.Text()
Text1671.setString(["72"])
FontStyle1672 = x3d.FontStyle()
FontStyle1672.setSize(0.035)

Text1671.setFontStyle(FontStyle1672)

Shape1670.setGeometry(Text1671)

Billboard1669.addChild(Shape1670)

HAnimSite1666.addChild(Billboard1669)

HAnimSegment1637.addChild(HAnimSite1666)

HAnimJoint1636.addChild(HAnimSegment1637)
HAnimJoint1673 = x3d.HAnimJoint()
HAnimJoint1673.setName("r_radiocarpal")
HAnimJoint1673.setDEF("hanim_r_radiocarpal")
HAnimJoint1673.setCenter(x3d.doubleToFloat([-0.1959,0.8694,-0.0521]))
HAnimJoint1673.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1673.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1674 = x3d.HAnimSegment()
HAnimSegment1674.setName("r_carpal")
HAnimSegment1674.setDEF("hanim_r_carpal")
Transform1675 = x3d.Transform()
Transform1675.setScale(x3d.doubleToFloat([0.2,0.2,0.2]))
Transform1675.setTranslation(x3d.doubleToFloat([-0.2,0.85,-0.05]))
Transform1675.setRotation(x3d.doubleToFloat([0,0,1,-3.14]))

Transform1675.addComments(x3d.CommentsBlock("""Transform right hand"""))
Transform1676 = x3d.Transform()
Transform1676.setRotation(x3d.doubleToFloat([0,1,0,1.57]))

Transform1676.addComments(x3d.CommentsBlock("""Transform right hand"""))
Shape1677 = x3d.Shape()
Shape1677.setUSE("HAnimJointShape")

Transform1676.addChild(Shape1677)

Transform1675.addChild(Transform1676)

HAnimSegment1674.addChild(Transform1675)
Shape1678 = x3d.Shape()
LineSet1679 = x3d.LineSet()
LineSet1679.setVertexCount([2])
Coordinate1680 = x3d.Coordinate()
Coordinate1680.setPoint(x3d.doubleToFloat([-0.1959,0.8694,-0.0521,-0.1811,0.6975,-0.0826]))

LineSet1679.setCoord(Coordinate1680)

LineSet1679.addComments(x3d.CommentsBlock("""from r_radiocarpal to r_midcarpal_1 vertices 2"""))
ColorRGBA1681 = x3d.ColorRGBA()
ColorRGBA1681.setUSE("HAnimSegmentLineColorRGBA")

LineSet1679.setColor(ColorRGBA1681)

Shape1678.setGeometry(LineSet1679)

HAnimSegment1674.addChild(Shape1678)
HAnimSite1682 = x3d.HAnimSite()
HAnimSite1682.setName("r_ulnar_styloid")
HAnimSite1682.setDEF("hanim_r_ulnar_styloid")
HAnimSite1682.setTranslation(x3d.doubleToFloat([-0.2117,0.8562,-0.0584]))
TouchSensor1683 = x3d.TouchSensor()
TouchSensor1683.setDescription("HAnimSite 73 r_ulnar_styloid")

HAnimSite1682.addChild(TouchSensor1683)
Shape1684 = x3d.Shape()
Shape1684.setUSE("HAnimSiteShape")

HAnimSite1682.addChild(Shape1684)
Billboard1685 = x3d.Billboard()
Shape1686 = x3d.Shape()
Text1687 = x3d.Text()
Text1687.setString(["73"])
FontStyle1688 = x3d.FontStyle()
FontStyle1688.setSize(0.035)

Text1687.setFontStyle(FontStyle1688)

Shape1686.setGeometry(Text1687)

Billboard1685.addChild(Shape1686)

HAnimSite1682.addChild(Billboard1685)

HAnimSegment1674.addChild(HAnimSite1682)
Shape1689 = x3d.Shape()
LineSet1690 = x3d.LineSet()
LineSet1690.setVertexCount([2])
Coordinate1691 = x3d.Coordinate()
Coordinate1691.setPoint(x3d.doubleToFloat([-0.1959,0.8694,-0.0521,-0.1811,0.6984,-0.0935]))

LineSet1690.setCoord(Coordinate1691)

LineSet1690.addComments(x3d.CommentsBlock("""from r_radiocarpal to r_midcarpal_2 vertices 2"""))
ColorRGBA1692 = x3d.ColorRGBA()
ColorRGBA1692.setUSE("HAnimSegmentLineColorRGBA")

LineSet1690.setColor(ColorRGBA1692)

Shape1689.setGeometry(LineSet1690)

HAnimSegment1674.addChild(Shape1689)
Shape1693 = x3d.Shape()
LineSet1694 = x3d.LineSet()
LineSet1694.setVertexCount([2])
Coordinate1695 = x3d.Coordinate()
Coordinate1695.setPoint(x3d.doubleToFloat([-0.1959,0.8694,-0.0521,-0.1809,0.7,-0.1067]))

LineSet1694.setCoord(Coordinate1695)

LineSet1694.addComments(x3d.CommentsBlock("""from r_radiocarpal to r_midcarpal_3 vertices 2"""))
ColorRGBA1696 = x3d.ColorRGBA()
ColorRGBA1696.setUSE("HAnimSegmentLineColorRGBA")

LineSet1694.setColor(ColorRGBA1696)

Shape1693.setGeometry(LineSet1694)

HAnimSegment1674.addChild(Shape1693)
Shape1697 = x3d.Shape()
LineSet1698 = x3d.LineSet()
LineSet1698.setVertexCount([2])
Coordinate1699 = x3d.Coordinate()
Coordinate1699.setPoint(x3d.doubleToFloat([-0.1959,0.8694,-0.0521,-0.1809,0.6973,-0.1276]))

LineSet1698.setCoord(Coordinate1699)

LineSet1698.addComments(x3d.CommentsBlock("""from r_radiocarpal to r_midcarpal_4_5 vertices 2"""))
ColorRGBA1700 = x3d.ColorRGBA()
ColorRGBA1700.setUSE("HAnimSegmentLineColorRGBA")

LineSet1698.setColor(ColorRGBA1700)

Shape1697.setGeometry(LineSet1698)

HAnimSegment1674.addChild(Shape1697)

HAnimJoint1673.addChild(HAnimSegment1674)
HAnimJoint1701 = x3d.HAnimJoint()
HAnimJoint1701.setName("r_midcarpal_1")
HAnimJoint1701.setDEF("hanim_r_midcarpal_1")
HAnimJoint1701.setCenter(x3d.doubleToFloat([-0.1811,0.6975,-0.0826]))
HAnimJoint1701.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1701.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1702 = x3d.HAnimSegment()
HAnimSegment1702.setName("r_trapezium")
HAnimSegment1702.setDEF("hanim_r_trapezium")
Transform1703 = x3d.Transform()
Transform1703.setTranslation(x3d.doubleToFloat([-0.1811,0.6975,-0.0826]))
Transform1704 = x3d.Transform()

Transform1704.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1705 = x3d.Shape()
Shape1705.setUSE("HAnimJointShape")

Transform1704.addChild(Shape1705)

Transform1703.addChild(Transform1704)

HAnimSegment1702.addChild(Transform1703)
Shape1706 = x3d.Shape()
LineSet1707 = x3d.LineSet()
LineSet1707.setVertexCount([2])
Coordinate1708 = x3d.Coordinate()
Coordinate1708.setPoint(x3d.doubleToFloat([-0.1811,0.6975,-0.0826,-0.1899,0.8502,-0.0473]))

LineSet1707.setCoord(Coordinate1708)

LineSet1707.addComments(x3d.CommentsBlock("""from r_midcarpal_1 to r_carpometacarpal_1 vertices 2"""))
ColorRGBA1709 = x3d.ColorRGBA()
ColorRGBA1709.setUSE("HAnimSegmentLineColorRGBA")

LineSet1707.setColor(ColorRGBA1709)

Shape1706.setGeometry(LineSet1707)

HAnimSegment1702.addChild(Shape1706)

HAnimJoint1701.addChild(HAnimSegment1702)
HAnimJoint1710 = x3d.HAnimJoint()
HAnimJoint1710.setName("r_carpometacarpal_1")
HAnimJoint1710.setDEF("hanim_r_carpometacarpal_1")
HAnimJoint1710.setCenter(x3d.doubleToFloat([-0.1899,0.8502,-0.0473]))
HAnimJoint1710.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1710.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1711 = x3d.HAnimSegment()
HAnimSegment1711.setName("r_metacarpal_1")
HAnimSegment1711.setDEF("hanim_r_metacarpal_1")
Transform1712 = x3d.Transform()
Transform1712.setTranslation(x3d.doubleToFloat([-0.1899,0.8502,-0.0473]))
Transform1713 = x3d.Transform()

Transform1713.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1714 = x3d.Shape()
Shape1714.setUSE("HAnimJointShape")

Transform1713.addChild(Shape1714)

Transform1712.addChild(Transform1713)

HAnimSegment1711.addChild(Transform1712)
Shape1715 = x3d.Shape()
LineSet1716 = x3d.LineSet()
LineSet1716.setVertexCount([2])
Coordinate1717 = x3d.Coordinate()
Coordinate1717.setPoint(x3d.doubleToFloat([-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]))

LineSet1716.setCoord(Coordinate1717)

LineSet1716.addComments(x3d.CommentsBlock("""from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2"""))
ColorRGBA1718 = x3d.ColorRGBA()
ColorRGBA1718.setUSE("HAnimSegmentLineColorRGBA")

LineSet1716.setColor(ColorRGBA1718)

Shape1715.setGeometry(LineSet1716)

HAnimSegment1711.addChild(Shape1715)

HAnimJoint1710.addChild(HAnimSegment1711)
HAnimJoint1719 = x3d.HAnimJoint()
HAnimJoint1719.setName("r_metacarpophalangeal_1")
HAnimJoint1719.setDEF("hanim_r_metacarpophalangeal_1")
HAnimJoint1719.setCenter(x3d.doubleToFloat([-0.1874,0.8256,0.0306]))
HAnimJoint1719.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1719.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1720 = x3d.HAnimSegment()
HAnimSegment1720.setName("r_carpal_proximal_phalanx_1")
HAnimSegment1720.setDEF("hanim_r_carpal_proximal_phalanx_1")
Transform1721 = x3d.Transform()
Transform1721.setTranslation(x3d.doubleToFloat([-0.1874,0.8256,0.0306]))
Transform1722 = x3d.Transform()

Transform1722.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1723 = x3d.Shape()
Shape1723.setUSE("HAnimJointShape")

Transform1722.addChild(Shape1723)

Transform1721.addChild(Transform1722)

HAnimSegment1720.addChild(Transform1721)
Shape1724 = x3d.Shape()
LineSet1725 = x3d.LineSet()
LineSet1725.setVertexCount([2])
Coordinate1726 = x3d.Coordinate()
Coordinate1726.setPoint(x3d.doubleToFloat([-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]))

LineSet1725.setCoord(Coordinate1726)

LineSet1725.addComments(x3d.CommentsBlock("""from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2"""))
ColorRGBA1727 = x3d.ColorRGBA()
ColorRGBA1727.setUSE("HAnimSegmentLineColorRGBA")

LineSet1725.setColor(ColorRGBA1727)

Shape1724.setGeometry(LineSet1725)

HAnimSegment1720.addChild(Shape1724)

HAnimJoint1719.addChild(HAnimSegment1720)
HAnimJoint1728 = x3d.HAnimJoint()
HAnimJoint1728.setName("r_carpal_interphalangeal_1")
HAnimJoint1728.setDEF("hanim_r_carpal_interphalangeal_1")
HAnimJoint1728.setCenter(x3d.doubleToFloat([-0.1864,0.819,0.0506]))
HAnimJoint1728.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1728.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint1719.addChild(HAnimJoint1728)

HAnimJoint1710.addChild(HAnimJoint1719)

HAnimJoint1701.addChild(HAnimJoint1710)

HAnimJoint1673.addChild(HAnimJoint1701)
HAnimJoint1729 = x3d.HAnimJoint()
HAnimJoint1729.setName("r_midcarpal_2")
HAnimJoint1729.setDEF("hanim_r_midcarpal_2")
HAnimJoint1729.setCenter(x3d.doubleToFloat([-0.1811,0.6984,-0.0935]))
HAnimJoint1729.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1729.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1730 = x3d.HAnimSegment()
HAnimSegment1730.setName("r_trapezoid")
HAnimSegment1730.setDEF("hanim_r_trapezoid")
Transform1731 = x3d.Transform()
Transform1731.setTranslation(x3d.doubleToFloat([-0.1811,0.6984,-0.0935]))
Transform1732 = x3d.Transform()

Transform1732.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1733 = x3d.Shape()
Shape1733.setUSE("HAnimJointShape")

Transform1732.addChild(Shape1733)

Transform1731.addChild(Transform1732)

HAnimSegment1730.addChild(Transform1731)
Shape1734 = x3d.Shape()
LineSet1735 = x3d.LineSet()
LineSet1735.setVertexCount([2])
Coordinate1736 = x3d.Coordinate()
Coordinate1736.setPoint(x3d.doubleToFloat([-0.1811,0.6984,-0.0935,-0.1961,0.8055,-0.0218]))

LineSet1735.setCoord(Coordinate1736)

LineSet1735.addComments(x3d.CommentsBlock("""from r_midcarpal_2 to r_carpometacarpal_2 vertices 2"""))
ColorRGBA1737 = x3d.ColorRGBA()
ColorRGBA1737.setUSE("HAnimSegmentLineColorRGBA")

LineSet1735.setColor(ColorRGBA1737)

Shape1734.setGeometry(LineSet1735)

HAnimSegment1730.addChild(Shape1734)

HAnimJoint1729.addChild(HAnimSegment1730)
HAnimJoint1738 = x3d.HAnimJoint()
HAnimJoint1738.setName("r_carpometacarpal_2")
HAnimJoint1738.setDEF("hanim_r_carpometacarpal_2")
HAnimJoint1738.setCenter(x3d.doubleToFloat([-0.1961,0.8055,-0.0218]))
HAnimJoint1738.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1738.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1739 = x3d.HAnimSegment()
HAnimSegment1739.setName("r_metacarpal_2")
HAnimSegment1739.setDEF("hanim_r_metacarpal_2")
Transform1740 = x3d.Transform()
Transform1740.setTranslation(x3d.doubleToFloat([-0.1961,0.8055,-0.0218]))
Transform1741 = x3d.Transform()

Transform1741.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1742 = x3d.Shape()
Shape1742.setUSE("HAnimJointShape")

Transform1741.addChild(Shape1742)

Transform1740.addChild(Transform1741)

HAnimSegment1739.addChild(Transform1740)
Shape1743 = x3d.Shape()
LineSet1744 = x3d.LineSet()
LineSet1744.setVertexCount([2])
Coordinate1745 = x3d.Coordinate()
Coordinate1745.setPoint(x3d.doubleToFloat([-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]))

LineSet1744.setCoord(Coordinate1745)

LineSet1744.addComments(x3d.CommentsBlock("""from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2"""))
ColorRGBA1746 = x3d.ColorRGBA()
ColorRGBA1746.setUSE("HAnimSegmentLineColorRGBA")

LineSet1744.setColor(ColorRGBA1746)

Shape1743.setGeometry(LineSet1744)

HAnimSegment1739.addChild(Shape1743)
HAnimSite1747 = x3d.HAnimSite()
HAnimSite1747.setName("r_metacarpal_phalanx_2")
HAnimSite1747.setDEF("hanim_r_metacarpal_phalanx_2")
HAnimSite1747.setTranslation(x3d.doubleToFloat([-0.1977,0.8169,-0.0177]))
TouchSensor1748 = x3d.TouchSensor()
TouchSensor1748.setDescription("HAnimSite 78 r_metacarpal_phalanx_2")

HAnimSite1747.addChild(TouchSensor1748)
Shape1749 = x3d.Shape()
Shape1749.setUSE("HAnimSiteShape")

HAnimSite1747.addChild(Shape1749)
Billboard1750 = x3d.Billboard()
Shape1751 = x3d.Shape()
Text1752 = x3d.Text()
Text1752.setString(["78"])
FontStyle1753 = x3d.FontStyle()
FontStyle1753.setSize(0.035)

Text1752.setFontStyle(FontStyle1753)

Shape1751.setGeometry(Text1752)

Billboard1750.addChild(Shape1751)

HAnimSite1747.addChild(Billboard1750)

HAnimSegment1739.addChild(HAnimSite1747)

HAnimJoint1738.addChild(HAnimSegment1739)
HAnimJoint1754 = x3d.HAnimJoint()
HAnimJoint1754.setName("r_metacarpophalangeal_2")
HAnimJoint1754.setDEF("hanim_r_metacarpophalangeal_2")
HAnimJoint1754.setCenter(x3d.doubleToFloat([-0.1961,0.7846,-0.0218]))
HAnimJoint1754.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1754.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1755 = x3d.HAnimSegment()
HAnimSegment1755.setName("r_carpal_proximal_phalanx_2")
HAnimSegment1755.setDEF("hanim_r_carpal_proximal_phalanx_2")
Transform1756 = x3d.Transform()
Transform1756.setTranslation(x3d.doubleToFloat([-0.1961,0.7846,-0.0218]))
Transform1757 = x3d.Transform()

Transform1757.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1758 = x3d.Shape()
Shape1758.setUSE("HAnimJointShape")

Transform1757.addChild(Shape1758)

Transform1756.addChild(Transform1757)

HAnimSegment1755.addChild(Transform1756)
Shape1759 = x3d.Shape()
LineSet1760 = x3d.LineSet()
LineSet1760.setVertexCount([2])
Coordinate1761 = x3d.Coordinate()
Coordinate1761.setPoint(x3d.doubleToFloat([-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]))

LineSet1760.setCoord(Coordinate1761)

LineSet1760.addComments(x3d.CommentsBlock("""from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2"""))
ColorRGBA1762 = x3d.ColorRGBA()
ColorRGBA1762.setUSE("HAnimSegmentLineColorRGBA")

LineSet1760.setColor(ColorRGBA1762)

Shape1759.setGeometry(LineSet1760)

HAnimSegment1755.addChild(Shape1759)

HAnimJoint1754.addChild(HAnimSegment1755)
HAnimJoint1763 = x3d.HAnimJoint()
HAnimJoint1763.setName("r_carpal_proximal_interphalangeal_2")
HAnimJoint1763.setDEF("hanim_r_carpal_proximal_interphalangeal_2")
HAnimJoint1763.setCenter(x3d.doubleToFloat([-0.1954,0.7393,-0.0185]))
HAnimJoint1763.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1763.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1764 = x3d.HAnimSegment()
HAnimSegment1764.setName("r_carpal_middle_phalanx_2")
HAnimSegment1764.setDEF("hanim_r_carpal_middle_phalanx_2")
Transform1765 = x3d.Transform()
Transform1765.setTranslation(x3d.doubleToFloat([-0.1954,0.7393,-0.0185]))
Transform1766 = x3d.Transform()

Transform1766.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1767 = x3d.Shape()
Shape1767.setUSE("HAnimJointShape")

Transform1766.addChild(Shape1767)

Transform1765.addChild(Transform1766)

HAnimSegment1764.addChild(Transform1765)
Shape1768 = x3d.Shape()
LineSet1769 = x3d.LineSet()
LineSet1769.setVertexCount([2])
Coordinate1770 = x3d.Coordinate()
Coordinate1770.setPoint(x3d.doubleToFloat([-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]))

LineSet1769.setCoord(Coordinate1770)

LineSet1769.addComments(x3d.CommentsBlock("""from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2"""))
ColorRGBA1771 = x3d.ColorRGBA()
ColorRGBA1771.setUSE("HAnimSegmentLineColorRGBA")

LineSet1769.setColor(ColorRGBA1771)

Shape1768.setGeometry(LineSet1769)

HAnimSegment1764.addChild(Shape1768)

HAnimJoint1763.addChild(HAnimSegment1764)
HAnimJoint1772 = x3d.HAnimJoint()
HAnimJoint1772.setName("r_carpal_distal_interphalangeal_2")
HAnimJoint1772.setDEF("hanim_r_carpal_distal_interphalangeal_2")
HAnimJoint1772.setCenter(x3d.doubleToFloat([-0.1945,0.7169,-0.0173]))
HAnimJoint1772.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1772.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint1763.addChild(HAnimJoint1772)

HAnimJoint1754.addChild(HAnimJoint1763)

HAnimJoint1738.addChild(HAnimJoint1754)

HAnimJoint1729.addChild(HAnimJoint1738)

HAnimJoint1673.addChild(HAnimJoint1729)
HAnimJoint1773 = x3d.HAnimJoint()
HAnimJoint1773.setName("r_midcarpal_3")
HAnimJoint1773.setDEF("hanim_r_midcarpal_3")
HAnimJoint1773.setCenter(x3d.doubleToFloat([-0.1809,0.7,-0.1067]))
HAnimJoint1773.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1773.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1774 = x3d.HAnimSegment()
HAnimSegment1774.setName("r_capitate")
HAnimSegment1774.setDEF("hanim_r_capitate")
Transform1775 = x3d.Transform()
Transform1775.setTranslation(x3d.doubleToFloat([-0.1809,0.7,-0.1067]))
Transform1776 = x3d.Transform()

Transform1776.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1777 = x3d.Shape()
Shape1777.setUSE("HAnimJointShape")

Transform1776.addChild(Shape1777)

Transform1775.addChild(Transform1776)

HAnimSegment1774.addChild(Transform1775)
Shape1778 = x3d.Shape()
LineSet1779 = x3d.LineSet()
LineSet1779.setVertexCount([2])
Coordinate1780 = x3d.Coordinate()
Coordinate1780.setPoint(x3d.doubleToFloat([-0.1809,0.7,-0.1067,-0.1972,0.806,-0.0468]))

LineSet1779.setCoord(Coordinate1780)

LineSet1779.addComments(x3d.CommentsBlock("""from r_midcarpal_3 to r_carpometacarpal_3 vertices 2"""))
ColorRGBA1781 = x3d.ColorRGBA()
ColorRGBA1781.setUSE("HAnimSegmentLineColorRGBA")

LineSet1779.setColor(ColorRGBA1781)

Shape1778.setGeometry(LineSet1779)

HAnimSegment1774.addChild(Shape1778)

HAnimJoint1773.addChild(HAnimSegment1774)
HAnimJoint1782 = x3d.HAnimJoint()
HAnimJoint1782.setName("r_carpometacarpal_3")
HAnimJoint1782.setDEF("hanim_r_carpometacarpal_3")
HAnimJoint1782.setCenter(x3d.doubleToFloat([-0.1972,0.806,-0.0468]))
HAnimJoint1782.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1782.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1783 = x3d.HAnimSegment()
HAnimSegment1783.setName("r_metacarpal_3")
HAnimSegment1783.setDEF("hanim_r_metacarpal_3")
Transform1784 = x3d.Transform()
Transform1784.setTranslation(x3d.doubleToFloat([-0.1972,0.806,-0.0468]))
Transform1785 = x3d.Transform()

Transform1785.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1786 = x3d.Shape()
Shape1786.setUSE("HAnimJointShape")

Transform1785.addChild(Shape1786)

Transform1784.addChild(Transform1785)

HAnimSegment1783.addChild(Transform1784)
Shape1787 = x3d.Shape()
LineSet1788 = x3d.LineSet()
LineSet1788.setVertexCount([2])
Coordinate1789 = x3d.Coordinate()
Coordinate1789.setPoint(x3d.doubleToFloat([-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]))

LineSet1788.setCoord(Coordinate1789)

LineSet1788.addComments(x3d.CommentsBlock("""from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2"""))
ColorRGBA1790 = x3d.ColorRGBA()
ColorRGBA1790.setUSE("HAnimSegmentLineColorRGBA")

LineSet1788.setColor(ColorRGBA1790)

Shape1787.setGeometry(LineSet1788)

HAnimSegment1783.addChild(Shape1787)
HAnimSite1791 = x3d.HAnimSite()
HAnimSite1791.setName("r_metacarpal_phalanx_3")
HAnimSite1791.setDEF("hanim_r_metacarpal_phalanx_3")
TouchSensor1792 = x3d.TouchSensor()
TouchSensor1792.setDescription("HAnimSite 79 r_metacarpal_phalanx_3")

HAnimSite1791.addChild(TouchSensor1792)
Shape1793 = x3d.Shape()
Shape1793.setUSE("HAnimSiteShape")

HAnimSite1791.addChild(Shape1793)
Billboard1794 = x3d.Billboard()
Shape1795 = x3d.Shape()
Text1796 = x3d.Text()
Text1796.setString(["79"])
FontStyle1797 = x3d.FontStyle()
FontStyle1797.setSize(0.035)

Text1796.setFontStyle(FontStyle1797)

Shape1795.setGeometry(Text1796)

Billboard1794.addChild(Shape1795)

HAnimSite1791.addChild(Billboard1794)

HAnimSegment1783.addChild(HAnimSite1791)

HAnimJoint1782.addChild(HAnimSegment1783)
HAnimJoint1798 = x3d.HAnimJoint()
HAnimJoint1798.setName("r_metacarpophalangeal_3")
HAnimJoint1798.setDEF("hanim_r_metacarpophalangeal_3")
HAnimJoint1798.setCenter(x3d.doubleToFloat([-0.1972,0.7849,-0.0468]))
HAnimJoint1798.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1798.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1799 = x3d.HAnimSegment()
HAnimSegment1799.setName("r_carpal_proximal_phalanx_3")
HAnimSegment1799.setDEF("hanim_r_carpal_proximal_phalanx_3")
Transform1800 = x3d.Transform()
Transform1800.setTranslation(x3d.doubleToFloat([-0.1972,0.7849,-0.0468]))
Transform1801 = x3d.Transform()

Transform1801.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1802 = x3d.Shape()
Shape1802.setUSE("HAnimJointShape")

Transform1801.addChild(Shape1802)

Transform1800.addChild(Transform1801)

HAnimSegment1799.addChild(Transform1800)
Shape1803 = x3d.Shape()
LineSet1804 = x3d.LineSet()
LineSet1804.setVertexCount([2])
Coordinate1805 = x3d.Coordinate()
Coordinate1805.setPoint(x3d.doubleToFloat([-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]))

LineSet1804.setCoord(Coordinate1805)

LineSet1804.addComments(x3d.CommentsBlock("""from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2"""))
ColorRGBA1806 = x3d.ColorRGBA()
ColorRGBA1806.setUSE("HAnimSegmentLineColorRGBA")

LineSet1804.setColor(ColorRGBA1806)

Shape1803.setGeometry(LineSet1804)

HAnimSegment1799.addChild(Shape1803)

HAnimJoint1798.addChild(HAnimSegment1799)
HAnimJoint1807 = x3d.HAnimJoint()
HAnimJoint1807.setName("r_carpal_proximal_interphalangeal_3")
HAnimJoint1807.setDEF("hanim_r_carpal_proximal_interphalangeal_3")
HAnimJoint1807.setCenter(x3d.doubleToFloat([-0.195,0.7304,-0.0441]))
HAnimJoint1807.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1807.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1808 = x3d.HAnimSegment()
HAnimSegment1808.setName("r_carpal_middle_phalanx_3")
HAnimSegment1808.setDEF("hanim_r_carpal_middle_phalanx_3")
Transform1809 = x3d.Transform()
Transform1809.setTranslation(x3d.doubleToFloat([-0.195,0.7304,-0.0441]))
Transform1810 = x3d.Transform()

Transform1810.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1811 = x3d.Shape()
Shape1811.setUSE("HAnimJointShape")

Transform1810.addChild(Shape1811)

Transform1809.addChild(Transform1810)

HAnimSegment1808.addChild(Transform1809)
Shape1812 = x3d.Shape()
LineSet1813 = x3d.LineSet()
LineSet1813.setVertexCount([2])
Coordinate1814 = x3d.Coordinate()
Coordinate1814.setPoint(x3d.doubleToFloat([-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]))

LineSet1813.setCoord(Coordinate1814)

LineSet1813.addComments(x3d.CommentsBlock("""from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2"""))
ColorRGBA1815 = x3d.ColorRGBA()
ColorRGBA1815.setUSE("HAnimSegmentLineColorRGBA")

LineSet1813.setColor(ColorRGBA1815)

Shape1812.setGeometry(LineSet1813)

HAnimSegment1808.addChild(Shape1812)

HAnimJoint1807.addChild(HAnimSegment1808)
HAnimJoint1816 = x3d.HAnimJoint()
HAnimJoint1816.setName("r_carpal_distal_interphalangeal_3")
HAnimJoint1816.setDEF("hanim_r_carpal_distal_interphalangeal_3")
HAnimJoint1816.setCenter(x3d.doubleToFloat([-0.1939,0.7042,-0.0432]))
HAnimJoint1816.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1816.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint1807.addChild(HAnimJoint1816)

HAnimJoint1798.addChild(HAnimJoint1807)

HAnimJoint1782.addChild(HAnimJoint1798)

HAnimJoint1773.addChild(HAnimJoint1782)

HAnimJoint1673.addChild(HAnimJoint1773)
HAnimJoint1817 = x3d.HAnimJoint()
HAnimJoint1817.setName("r_midcarpal_4_5")
HAnimJoint1817.setDEF("hanim_r_midcarpal_4_5")
HAnimJoint1817.setCenter(x3d.doubleToFloat([-0.1809,0.6973,-0.1276]))
HAnimJoint1817.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1817.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1818 = x3d.HAnimSegment()
HAnimSegment1818.setName("r_hamate")
HAnimSegment1818.setDEF("hanim_r_hamate")
Transform1819 = x3d.Transform()
Transform1819.setTranslation(x3d.doubleToFloat([-0.1809,0.6973,-0.1276]))
Transform1820 = x3d.Transform()

Transform1820.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1821 = x3d.Shape()
Shape1821.setUSE("HAnimJointShape")

Transform1820.addChild(Shape1821)

Transform1819.addChild(Transform1820)

HAnimSegment1818.addChild(Transform1819)
Shape1822 = x3d.Shape()
LineSet1823 = x3d.LineSet()
LineSet1823.setVertexCount([2])
Coordinate1824 = x3d.Coordinate()
Coordinate1824.setPoint(x3d.doubleToFloat([-0.1809,0.6973,-0.1276,-0.1951,0.8049,-0.0732]))

LineSet1823.setCoord(Coordinate1824)

LineSet1823.addComments(x3d.CommentsBlock("""from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2"""))
ColorRGBA1825 = x3d.ColorRGBA()
ColorRGBA1825.setUSE("HAnimSegmentLineColorRGBA")

LineSet1823.setColor(ColorRGBA1825)

Shape1822.setGeometry(LineSet1823)

HAnimSegment1818.addChild(Shape1822)
Shape1826 = x3d.Shape()
LineSet1827 = x3d.LineSet()
LineSet1827.setVertexCount([2])
Coordinate1828 = x3d.Coordinate()
Coordinate1828.setPoint(x3d.doubleToFloat([-0.1809,0.6973,-0.1276,-0.1926,0.8096,-0.0975]))

LineSet1827.setCoord(Coordinate1828)

LineSet1827.addComments(x3d.CommentsBlock("""from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2"""))
ColorRGBA1829 = x3d.ColorRGBA()
ColorRGBA1829.setUSE("HAnimSegmentLineColorRGBA")

LineSet1827.setColor(ColorRGBA1829)

Shape1826.setGeometry(LineSet1827)

HAnimSegment1818.addChild(Shape1826)

HAnimJoint1817.addChild(HAnimSegment1818)
HAnimJoint1830 = x3d.HAnimJoint()
HAnimJoint1830.setName("r_carpometacarpal_4")
HAnimJoint1830.setDEF("hanim_r_carpometacarpal_4")
HAnimJoint1830.setCenter(x3d.doubleToFloat([-0.1951,0.8049,-0.0732]))
HAnimJoint1830.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1830.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1831 = x3d.HAnimSegment()
HAnimSegment1831.setName("r_metacarpal_4")
HAnimSegment1831.setDEF("hanim_r_metacarpal_4")
Transform1832 = x3d.Transform()
Transform1832.setTranslation(x3d.doubleToFloat([-0.1951,0.8049,-0.0732]))
Transform1833 = x3d.Transform()

Transform1833.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1834 = x3d.Shape()
Shape1834.setUSE("HAnimJointShape")

Transform1833.addChild(Shape1834)

Transform1832.addChild(Transform1833)

HAnimSegment1831.addChild(Transform1832)
Shape1835 = x3d.Shape()
LineSet1836 = x3d.LineSet()
LineSet1836.setVertexCount([2])
Coordinate1837 = x3d.Coordinate()
Coordinate1837.setPoint(x3d.doubleToFloat([-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]))

LineSet1836.setCoord(Coordinate1837)

LineSet1836.addComments(x3d.CommentsBlock("""from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2"""))
ColorRGBA1838 = x3d.ColorRGBA()
ColorRGBA1838.setUSE("HAnimSegmentLineColorRGBA")

LineSet1836.setColor(ColorRGBA1838)

Shape1835.setGeometry(LineSet1836)

HAnimSegment1831.addChild(Shape1835)

HAnimJoint1830.addChild(HAnimSegment1831)
HAnimJoint1839 = x3d.HAnimJoint()
HAnimJoint1839.setName("r_metacarpophalangeal_4")
HAnimJoint1839.setDEF("hanim_r_metacarpophalangeal_4")
HAnimJoint1839.setCenter(x3d.doubleToFloat([-0.1951,0.7845,-0.0732]))
HAnimJoint1839.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1839.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1840 = x3d.HAnimSegment()
HAnimSegment1840.setName("r_carpal_proximal_phalanx_4")
HAnimSegment1840.setDEF("hanim_r_carpal_proximal_phalanx_4")
Transform1841 = x3d.Transform()
Transform1841.setTranslation(x3d.doubleToFloat([-0.1951,0.7845,-0.0732]))
Transform1842 = x3d.Transform()

Transform1842.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1843 = x3d.Shape()
Shape1843.setUSE("HAnimJointShape")

Transform1842.addChild(Shape1843)

Transform1841.addChild(Transform1842)

HAnimSegment1840.addChild(Transform1841)
Shape1844 = x3d.Shape()
LineSet1845 = x3d.LineSet()
LineSet1845.setVertexCount([2])
Coordinate1846 = x3d.Coordinate()
Coordinate1846.setPoint(x3d.doubleToFloat([-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]))

LineSet1845.setCoord(Coordinate1846)

LineSet1845.addComments(x3d.CommentsBlock("""from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2"""))
ColorRGBA1847 = x3d.ColorRGBA()
ColorRGBA1847.setUSE("HAnimSegmentLineColorRGBA")

LineSet1845.setColor(ColorRGBA1847)

Shape1844.setGeometry(LineSet1845)

HAnimSegment1840.addChild(Shape1844)

HAnimJoint1839.addChild(HAnimSegment1840)
HAnimJoint1848 = x3d.HAnimJoint()
HAnimJoint1848.setName("r_carpal_proximal_interphalangeal_4")
HAnimJoint1848.setDEF("hanim_r_carpal_proximal_interphalangeal_4")
HAnimJoint1848.setCenter(x3d.doubleToFloat([-0.192,0.7318,-0.0716]))
HAnimJoint1848.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1848.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1849 = x3d.HAnimSegment()
HAnimSegment1849.setName("r_carpal_middle_phalanx_4")
HAnimSegment1849.setDEF("hanim_r_carpal_middle_phalanx_4")
Transform1850 = x3d.Transform()
Transform1850.setTranslation(x3d.doubleToFloat([-0.192,0.7318,-0.0716]))
Transform1851 = x3d.Transform()

Transform1851.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1852 = x3d.Shape()
Shape1852.setUSE("HAnimJointShape")

Transform1851.addChild(Shape1852)

Transform1850.addChild(Transform1851)

HAnimSegment1849.addChild(Transform1850)
Shape1853 = x3d.Shape()
LineSet1854 = x3d.LineSet()
LineSet1854.setVertexCount([2])
Coordinate1855 = x3d.Coordinate()
Coordinate1855.setPoint(x3d.doubleToFloat([-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]))

LineSet1854.setCoord(Coordinate1855)

LineSet1854.addComments(x3d.CommentsBlock("""from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2"""))
ColorRGBA1856 = x3d.ColorRGBA()
ColorRGBA1856.setUSE("HAnimSegmentLineColorRGBA")

LineSet1854.setColor(ColorRGBA1856)

Shape1853.setGeometry(LineSet1854)

HAnimSegment1849.addChild(Shape1853)

HAnimJoint1848.addChild(HAnimSegment1849)
HAnimJoint1857 = x3d.HAnimJoint()
HAnimJoint1857.setName("r_carpal_distal_interphalangeal_4")
HAnimJoint1857.setDEF("hanim_r_carpal_distal_interphalangeal_4")
HAnimJoint1857.setCenter(x3d.doubleToFloat([-0.1908,0.7077,-0.0706]))
HAnimJoint1857.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1857.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint1848.addChild(HAnimJoint1857)

HAnimJoint1839.addChild(HAnimJoint1848)

HAnimJoint1830.addChild(HAnimJoint1839)

HAnimJoint1817.addChild(HAnimJoint1830)
HAnimJoint1858 = x3d.HAnimJoint()
HAnimJoint1858.setName("r_carpometacarpal_5")
HAnimJoint1858.setDEF("hanim_r_carpometacarpal_5")
HAnimJoint1858.setCenter(x3d.doubleToFloat([-0.1926,0.8096,-0.0975]))
HAnimJoint1858.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1858.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1859 = x3d.HAnimSegment()
HAnimSegment1859.setName("r_metacarpal_5")
HAnimSegment1859.setDEF("hanim_r_metacarpal_5")
Transform1860 = x3d.Transform()
Transform1860.setTranslation(x3d.doubleToFloat([-0.1926,0.8096,-0.0975]))
Transform1861 = x3d.Transform()

Transform1861.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1862 = x3d.Shape()
Shape1862.setUSE("HAnimJointShape")

Transform1861.addChild(Shape1862)

Transform1860.addChild(Transform1861)

HAnimSegment1859.addChild(Transform1860)
Shape1863 = x3d.Shape()
LineSet1864 = x3d.LineSet()
LineSet1864.setVertexCount([2])
Coordinate1865 = x3d.Coordinate()
Coordinate1865.setPoint(x3d.doubleToFloat([-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]))

LineSet1864.setCoord(Coordinate1865)

LineSet1864.addComments(x3d.CommentsBlock("""from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2"""))
ColorRGBA1866 = x3d.ColorRGBA()
ColorRGBA1866.setUSE("HAnimSegmentLineColorRGBA")

LineSet1864.setColor(ColorRGBA1866)

Shape1863.setGeometry(LineSet1864)

HAnimSegment1859.addChild(Shape1863)
HAnimSite1867 = x3d.HAnimSite()
HAnimSite1867.setName("r_metacarpal_phalanx_5")
HAnimSite1867.setDEF("hanim_r_metacarpal_phalanx_5")
HAnimSite1867.setTranslation(x3d.doubleToFloat([-0.1929,0.789,-0.1064]))
TouchSensor1868 = x3d.TouchSensor()
TouchSensor1868.setDescription("HAnimSite 80 r_metacarpal_phalanx_5")

HAnimSite1867.addChild(TouchSensor1868)
Shape1869 = x3d.Shape()
Shape1869.setUSE("HAnimSiteShape")

HAnimSite1867.addChild(Shape1869)
Billboard1870 = x3d.Billboard()
Shape1871 = x3d.Shape()
Text1872 = x3d.Text()
Text1872.setString(["80"])
FontStyle1873 = x3d.FontStyle()
FontStyle1873.setSize(0.035)

Text1872.setFontStyle(FontStyle1873)

Shape1871.setGeometry(Text1872)

Billboard1870.addChild(Shape1871)

HAnimSite1867.addChild(Billboard1870)

HAnimSegment1859.addChild(HAnimSite1867)

HAnimJoint1858.addChild(HAnimSegment1859)
HAnimJoint1874 = x3d.HAnimJoint()
HAnimJoint1874.setName("r_metacarpophalangeal_5")
HAnimJoint1874.setDEF("hanim_r_metacarpophalangeal_5")
HAnimJoint1874.setCenter(x3d.doubleToFloat([-0.1926,0.7896,-0.0975]))
HAnimJoint1874.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1874.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1875 = x3d.HAnimSegment()
HAnimSegment1875.setName("r_carpal_proximal_phalanx_5")
HAnimSegment1875.setDEF("hanim_r_carpal_proximal_phalanx_5")
Transform1876 = x3d.Transform()
Transform1876.setTranslation(x3d.doubleToFloat([-0.1926,0.7896,-0.0975]))
Transform1877 = x3d.Transform()

Transform1877.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1878 = x3d.Shape()
Shape1878.setUSE("HAnimJointShape")

Transform1877.addChild(Shape1878)

Transform1876.addChild(Transform1877)

HAnimSegment1875.addChild(Transform1876)
Shape1879 = x3d.Shape()
LineSet1880 = x3d.LineSet()
LineSet1880.setVertexCount([2])
Coordinate1881 = x3d.Coordinate()
Coordinate1881.setPoint(x3d.doubleToFloat([-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]))

LineSet1880.setCoord(Coordinate1881)

LineSet1880.addComments(x3d.CommentsBlock("""from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2"""))
ColorRGBA1882 = x3d.ColorRGBA()
ColorRGBA1882.setUSE("HAnimSegmentLineColorRGBA")

LineSet1880.setColor(ColorRGBA1882)

Shape1879.setGeometry(LineSet1880)

HAnimSegment1875.addChild(Shape1879)

HAnimJoint1874.addChild(HAnimSegment1875)
HAnimJoint1883 = x3d.HAnimJoint()
HAnimJoint1883.setName("r_carpal_proximal_interphalangeal_5")
HAnimJoint1883.setDEF("hanim_r_carpal_proximal_interphalangeal_5")
HAnimJoint1883.setCenter(x3d.doubleToFloat([-0.1902,0.7483,-0.0963]))
HAnimJoint1883.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1883.setLlimit(x3d.doubleToFloat([0,0,0]))
HAnimSegment1884 = x3d.HAnimSegment()
HAnimSegment1884.setName("r_carpal_middle_phalanx_5")
HAnimSegment1884.setDEF("hanim_r_carpal_middle_phalanx_5")
Transform1885 = x3d.Transform()
Transform1885.setTranslation(x3d.doubleToFloat([-0.1902,0.7483,-0.0963]))
Transform1886 = x3d.Transform()

Transform1886.addComments(x3d.CommentsBlock("""Empty Transform"""))
Shape1887 = x3d.Shape()
Shape1887.setUSE("HAnimJointShape")

Transform1886.addChild(Shape1887)

Transform1885.addChild(Transform1886)

HAnimSegment1884.addChild(Transform1885)
Shape1888 = x3d.Shape()
LineSet1889 = x3d.LineSet()
LineSet1889.setVertexCount([2])
Coordinate1890 = x3d.Coordinate()
Coordinate1890.setPoint(x3d.doubleToFloat([-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]))

LineSet1889.setCoord(Coordinate1890)

LineSet1889.addComments(x3d.CommentsBlock("""from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2"""))
ColorRGBA1891 = x3d.ColorRGBA()
ColorRGBA1891.setUSE("HAnimSegmentLineColorRGBA")

LineSet1889.setColor(ColorRGBA1891)

Shape1888.setGeometry(LineSet1889)

HAnimSegment1884.addChild(Shape1888)

HAnimJoint1883.addChild(HAnimSegment1884)
HAnimJoint1892 = x3d.HAnimJoint()
HAnimJoint1892.setName("r_carpal_distal_interphalangeal_5")
HAnimJoint1892.setDEF("hanim_r_carpal_distal_interphalangeal_5")
HAnimJoint1892.setCenter(x3d.doubleToFloat([-0.1908,0.754,-0.096]))
HAnimJoint1892.setUlimit(x3d.doubleToFloat([0,0,0]))
HAnimJoint1892.setLlimit(x3d.doubleToFloat([0,0,0]))

HAnimJoint1883.addChild(HAnimJoint1892)

HAnimJoint1874.addChild(HAnimJoint1883)

HAnimJoint1858.addChild(HAnimJoint1874)

HAnimJoint1817.addChild(HAnimJoint1858)

HAnimJoint1673.addChild(HAnimJoint1817)

HAnimJoint1636.addChild(HAnimJoint1673)

HAnimJoint1613.addChild(HAnimJoint1636)

HAnimJoint1604.addChild(HAnimJoint1613)

HAnimJoint1560.addChild(HAnimJoint1604)

HAnimJoint995.addChild(HAnimJoint1560)

HAnimJoint986.addChild(HAnimJoint995)

HAnimJoint977.addChild(HAnimJoint986)

HAnimJoint968.addChild(HAnimJoint977)

HAnimJoint952.addChild(HAnimJoint968)

HAnimJoint915.addChild(HAnimJoint952)

HAnimJoint906.addChild(HAnimJoint915)

HAnimJoint897.addChild(HAnimJoint906)

HAnimJoint874.addChild(HAnimJoint897)

HAnimJoint858.addChild(HAnimJoint874)

HAnimJoint849.addChild(HAnimJoint858)

HAnimJoint840.addChild(HAnimJoint849)

HAnimJoint831.addChild(HAnimJoint840)

HAnimJoint801.addChild(HAnimJoint831)

HAnimJoint792.addChild(HAnimJoint801)

HAnimJoint783.addChild(HAnimJoint792)

HAnimJoint753.addChild(HAnimJoint783)

HAnimJoint47.addChild(HAnimJoint753)

HAnimHumanoid38.addSkeleton(HAnimJoint47)
HAnimJoint1893 = x3d.HAnimJoint()
HAnimJoint1893.setContainerFieldOverride("joints")
HAnimJoint1893.setUSE("hanim_humanoid_root")

HAnimHumanoid38.addJoints(HAnimJoint1893)
HAnimJoint1894 = x3d.HAnimJoint()
HAnimJoint1894.setContainerFieldOverride("joints")
HAnimJoint1894.setUSE("hanim_sacroiliac")

HAnimHumanoid38.addJoints(HAnimJoint1894)
HAnimJoint1895 = x3d.HAnimJoint()
HAnimJoint1895.setContainerFieldOverride("joints")
HAnimJoint1895.setUSE("hanim_l_hip")

HAnimHumanoid38.addJoints(HAnimJoint1895)
HAnimJoint1896 = x3d.HAnimJoint()
HAnimJoint1896.setContainerFieldOverride("joints")
HAnimJoint1896.setUSE("hanim_l_knee")

HAnimHumanoid38.addJoints(HAnimJoint1896)
HAnimJoint1897 = x3d.HAnimJoint()
HAnimJoint1897.setContainerFieldOverride("joints")
HAnimJoint1897.setUSE("hanim_l_talocrural")

HAnimHumanoid38.addJoints(HAnimJoint1897)
HAnimJoint1898 = x3d.HAnimJoint()
HAnimJoint1898.setContainerFieldOverride("joints")
HAnimJoint1898.setUSE("hanim_l_talocalcaneonavicular")

HAnimHumanoid38.addJoints(HAnimJoint1898)
HAnimJoint1899 = x3d.HAnimJoint()
HAnimJoint1899.setContainerFieldOverride("joints")
HAnimJoint1899.setUSE("hanim_l_cuneonavicular_1")

HAnimHumanoid38.addJoints(HAnimJoint1899)
HAnimJoint1900 = x3d.HAnimJoint()
HAnimJoint1900.setContainerFieldOverride("joints")
HAnimJoint1900.setUSE("hanim_l_tarsometatarsal_1")

HAnimHumanoid38.addJoints(HAnimJoint1900)
HAnimJoint1901 = x3d.HAnimJoint()
HAnimJoint1901.setContainerFieldOverride("joints")
HAnimJoint1901.setUSE("hanim_l_metatarsophalangeal_1")

HAnimHumanoid38.addJoints(HAnimJoint1901)
HAnimJoint1902 = x3d.HAnimJoint()
HAnimJoint1902.setContainerFieldOverride("joints")
HAnimJoint1902.setUSE("hanim_l_tarsal_interphalangeal_1")

HAnimHumanoid38.addJoints(HAnimJoint1902)
HAnimJoint1903 = x3d.HAnimJoint()
HAnimJoint1903.setContainerFieldOverride("joints")
HAnimJoint1903.setUSE("hanim_l_cuneonavicular_2")

HAnimHumanoid38.addJoints(HAnimJoint1903)
HAnimJoint1904 = x3d.HAnimJoint()
HAnimJoint1904.setContainerFieldOverride("joints")
HAnimJoint1904.setUSE("hanim_l_tarsometatarsal_2")

HAnimHumanoid38.addJoints(HAnimJoint1904)
HAnimJoint1905 = x3d.HAnimJoint()
HAnimJoint1905.setContainerFieldOverride("joints")
HAnimJoint1905.setUSE("hanim_l_metatarsophalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1905)
HAnimJoint1906 = x3d.HAnimJoint()
HAnimJoint1906.setContainerFieldOverride("joints")
HAnimJoint1906.setUSE("hanim_l_tarsal_proximal_interphalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1906)
HAnimJoint1907 = x3d.HAnimJoint()
HAnimJoint1907.setContainerFieldOverride("joints")
HAnimJoint1907.setUSE("hanim_l_tarsal_distal_interphalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1907)
HAnimJoint1908 = x3d.HAnimJoint()
HAnimJoint1908.setContainerFieldOverride("joints")
HAnimJoint1908.setUSE("hanim_l_cuneonavicular_3")

HAnimHumanoid38.addJoints(HAnimJoint1908)
HAnimJoint1909 = x3d.HAnimJoint()
HAnimJoint1909.setContainerFieldOverride("joints")
HAnimJoint1909.setUSE("hanim_l_tarsometatarsal_3")

HAnimHumanoid38.addJoints(HAnimJoint1909)
HAnimJoint1910 = x3d.HAnimJoint()
HAnimJoint1910.setContainerFieldOverride("joints")
HAnimJoint1910.setUSE("hanim_l_metatarsophalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint1910)
HAnimJoint1911 = x3d.HAnimJoint()
HAnimJoint1911.setContainerFieldOverride("joints")
HAnimJoint1911.setUSE("hanim_l_tarsal_proximal_interphalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint1911)
HAnimJoint1912 = x3d.HAnimJoint()
HAnimJoint1912.setContainerFieldOverride("joints")
HAnimJoint1912.setUSE("hanim_l_tarsal_distal_interphalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint1912)
HAnimJoint1913 = x3d.HAnimJoint()
HAnimJoint1913.setContainerFieldOverride("joints")
HAnimJoint1913.setUSE("hanim_l_calcaneocuboid")

HAnimHumanoid38.addJoints(HAnimJoint1913)
HAnimJoint1914 = x3d.HAnimJoint()
HAnimJoint1914.setContainerFieldOverride("joints")
HAnimJoint1914.setUSE("hanim_l_transversetarsal")

HAnimHumanoid38.addJoints(HAnimJoint1914)
HAnimJoint1915 = x3d.HAnimJoint()
HAnimJoint1915.setContainerFieldOverride("joints")
HAnimJoint1915.setUSE("hanim_l_tarsometatarsal_4")

HAnimHumanoid38.addJoints(HAnimJoint1915)
HAnimJoint1916 = x3d.HAnimJoint()
HAnimJoint1916.setContainerFieldOverride("joints")
HAnimJoint1916.setUSE("hanim_l_metatarsophalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint1916)
HAnimJoint1917 = x3d.HAnimJoint()
HAnimJoint1917.setContainerFieldOverride("joints")
HAnimJoint1917.setUSE("hanim_l_tarsal_proximal_interphalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint1917)
HAnimJoint1918 = x3d.HAnimJoint()
HAnimJoint1918.setContainerFieldOverride("joints")
HAnimJoint1918.setUSE("hanim_l_tarsal_distal_interphalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint1918)
HAnimJoint1919 = x3d.HAnimJoint()
HAnimJoint1919.setContainerFieldOverride("joints")
HAnimJoint1919.setUSE("hanim_l_tarsometatarsal_5")

HAnimHumanoid38.addJoints(HAnimJoint1919)
HAnimJoint1920 = x3d.HAnimJoint()
HAnimJoint1920.setContainerFieldOverride("joints")
HAnimJoint1920.setUSE("hanim_l_metatarsophalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint1920)
HAnimJoint1921 = x3d.HAnimJoint()
HAnimJoint1921.setContainerFieldOverride("joints")
HAnimJoint1921.setUSE("hanim_l_tarsal_proximal_interphalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint1921)
HAnimJoint1922 = x3d.HAnimJoint()
HAnimJoint1922.setContainerFieldOverride("joints")
HAnimJoint1922.setUSE("hanim_l_tarsal_distal_interphalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint1922)
HAnimJoint1923 = x3d.HAnimJoint()
HAnimJoint1923.setContainerFieldOverride("joints")
HAnimJoint1923.setUSE("hanim_r_hip")

HAnimHumanoid38.addJoints(HAnimJoint1923)
HAnimJoint1924 = x3d.HAnimJoint()
HAnimJoint1924.setContainerFieldOverride("joints")
HAnimJoint1924.setUSE("hanim_r_knee")

HAnimHumanoid38.addJoints(HAnimJoint1924)
HAnimJoint1925 = x3d.HAnimJoint()
HAnimJoint1925.setContainerFieldOverride("joints")
HAnimJoint1925.setUSE("hanim_r_talocrural")

HAnimHumanoid38.addJoints(HAnimJoint1925)
HAnimJoint1926 = x3d.HAnimJoint()
HAnimJoint1926.setContainerFieldOverride("joints")
HAnimJoint1926.setUSE("hanim_r_talocalcaneonavicular")

HAnimHumanoid38.addJoints(HAnimJoint1926)
HAnimJoint1927 = x3d.HAnimJoint()
HAnimJoint1927.setContainerFieldOverride("joints")
HAnimJoint1927.setUSE("hanim_r_cuneonavicular_1")

HAnimHumanoid38.addJoints(HAnimJoint1927)
HAnimJoint1928 = x3d.HAnimJoint()
HAnimJoint1928.setContainerFieldOverride("joints")
HAnimJoint1928.setUSE("hanim_r_tarsometatarsal_1")

HAnimHumanoid38.addJoints(HAnimJoint1928)
HAnimJoint1929 = x3d.HAnimJoint()
HAnimJoint1929.setContainerFieldOverride("joints")
HAnimJoint1929.setUSE("hanim_r_metatarsophalangeal_1")

HAnimHumanoid38.addJoints(HAnimJoint1929)
HAnimJoint1930 = x3d.HAnimJoint()
HAnimJoint1930.setContainerFieldOverride("joints")
HAnimJoint1930.setUSE("hanim_r_tarsal_interphalangeal_1")

HAnimHumanoid38.addJoints(HAnimJoint1930)
HAnimJoint1931 = x3d.HAnimJoint()
HAnimJoint1931.setContainerFieldOverride("joints")
HAnimJoint1931.setUSE("hanim_r_cuneonavicular_2")

HAnimHumanoid38.addJoints(HAnimJoint1931)
HAnimJoint1932 = x3d.HAnimJoint()
HAnimJoint1932.setContainerFieldOverride("joints")
HAnimJoint1932.setUSE("hanim_r_tarsometatarsal_2")

HAnimHumanoid38.addJoints(HAnimJoint1932)
HAnimJoint1933 = x3d.HAnimJoint()
HAnimJoint1933.setContainerFieldOverride("joints")
HAnimJoint1933.setUSE("hanim_r_metatarsophalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1933)
HAnimJoint1934 = x3d.HAnimJoint()
HAnimJoint1934.setContainerFieldOverride("joints")
HAnimJoint1934.setUSE("hanim_r_tarsal_proximal_interphalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1934)
HAnimJoint1935 = x3d.HAnimJoint()
HAnimJoint1935.setContainerFieldOverride("joints")
HAnimJoint1935.setUSE("hanim_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1935)
HAnimJoint1936 = x3d.HAnimJoint()
HAnimJoint1936.setContainerFieldOverride("joints")
HAnimJoint1936.setUSE("hanim_r_cuneonavicular_3")

HAnimHumanoid38.addJoints(HAnimJoint1936)
HAnimJoint1937 = x3d.HAnimJoint()
HAnimJoint1937.setContainerFieldOverride("joints")
HAnimJoint1937.setUSE("hanim_r_tarsometatarsal_3")

HAnimHumanoid38.addJoints(HAnimJoint1937)
HAnimJoint1938 = x3d.HAnimJoint()
HAnimJoint1938.setContainerFieldOverride("joints")
HAnimJoint1938.setUSE("hanim_r_metatarsophalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint1938)
HAnimJoint1939 = x3d.HAnimJoint()
HAnimJoint1939.setContainerFieldOverride("joints")
HAnimJoint1939.setUSE("hanim_r_tarsal_proximal_interphalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint1939)
HAnimJoint1940 = x3d.HAnimJoint()
HAnimJoint1940.setContainerFieldOverride("joints")
HAnimJoint1940.setUSE("hanim_r_tarsal_distal_interphalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint1940)
HAnimJoint1941 = x3d.HAnimJoint()
HAnimJoint1941.setContainerFieldOverride("joints")
HAnimJoint1941.setUSE("hanim_r_calcaneocuboid")

HAnimHumanoid38.addJoints(HAnimJoint1941)
HAnimJoint1942 = x3d.HAnimJoint()
HAnimJoint1942.setContainerFieldOverride("joints")
HAnimJoint1942.setUSE("hanim_r_transversetarsal")

HAnimHumanoid38.addJoints(HAnimJoint1942)
HAnimJoint1943 = x3d.HAnimJoint()
HAnimJoint1943.setContainerFieldOverride("joints")
HAnimJoint1943.setUSE("hanim_r_tarsometatarsal_4")

HAnimHumanoid38.addJoints(HAnimJoint1943)
HAnimJoint1944 = x3d.HAnimJoint()
HAnimJoint1944.setContainerFieldOverride("joints")
HAnimJoint1944.setUSE("hanim_r_metatarsophalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint1944)
HAnimJoint1945 = x3d.HAnimJoint()
HAnimJoint1945.setContainerFieldOverride("joints")
HAnimJoint1945.setUSE("hanim_r_tarsal_proximal_interphalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint1945)
HAnimJoint1946 = x3d.HAnimJoint()
HAnimJoint1946.setContainerFieldOverride("joints")
HAnimJoint1946.setUSE("hanim_r_tarsal_distal_interphalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint1946)
HAnimJoint1947 = x3d.HAnimJoint()
HAnimJoint1947.setContainerFieldOverride("joints")
HAnimJoint1947.setUSE("hanim_r_tarsometatarsal_5")

HAnimHumanoid38.addJoints(HAnimJoint1947)
HAnimJoint1948 = x3d.HAnimJoint()
HAnimJoint1948.setContainerFieldOverride("joints")
HAnimJoint1948.setUSE("hanim_r_metatarsophalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint1948)
HAnimJoint1949 = x3d.HAnimJoint()
HAnimJoint1949.setContainerFieldOverride("joints")
HAnimJoint1949.setUSE("hanim_r_tarsal_proximal_interphalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint1949)
HAnimJoint1950 = x3d.HAnimJoint()
HAnimJoint1950.setContainerFieldOverride("joints")
HAnimJoint1950.setUSE("hanim_r_tarsal_distal_interphalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint1950)
HAnimJoint1951 = x3d.HAnimJoint()
HAnimJoint1951.setContainerFieldOverride("joints")
HAnimJoint1951.setUSE("hanim_vl5")

HAnimHumanoid38.addJoints(HAnimJoint1951)
HAnimJoint1952 = x3d.HAnimJoint()
HAnimJoint1952.setContainerFieldOverride("joints")
HAnimJoint1952.setUSE("hanim_vl4")

HAnimHumanoid38.addJoints(HAnimJoint1952)
HAnimJoint1953 = x3d.HAnimJoint()
HAnimJoint1953.setContainerFieldOverride("joints")
HAnimJoint1953.setUSE("hanim_vl3")

HAnimHumanoid38.addJoints(HAnimJoint1953)
HAnimJoint1954 = x3d.HAnimJoint()
HAnimJoint1954.setContainerFieldOverride("joints")
HAnimJoint1954.setUSE("hanim_vl2")

HAnimHumanoid38.addJoints(HAnimJoint1954)
HAnimJoint1955 = x3d.HAnimJoint()
HAnimJoint1955.setContainerFieldOverride("joints")
HAnimJoint1955.setUSE("hanim_vl1")

HAnimHumanoid38.addJoints(HAnimJoint1955)
HAnimJoint1956 = x3d.HAnimJoint()
HAnimJoint1956.setContainerFieldOverride("joints")
HAnimJoint1956.setUSE("hanim_vt12")

HAnimHumanoid38.addJoints(HAnimJoint1956)
HAnimJoint1957 = x3d.HAnimJoint()
HAnimJoint1957.setContainerFieldOverride("joints")
HAnimJoint1957.setUSE("hanim_vt11")

HAnimHumanoid38.addJoints(HAnimJoint1957)
HAnimJoint1958 = x3d.HAnimJoint()
HAnimJoint1958.setContainerFieldOverride("joints")
HAnimJoint1958.setUSE("hanim_vt10")

HAnimHumanoid38.addJoints(HAnimJoint1958)
HAnimJoint1959 = x3d.HAnimJoint()
HAnimJoint1959.setContainerFieldOverride("joints")
HAnimJoint1959.setUSE("hanim_vt9")

HAnimHumanoid38.addJoints(HAnimJoint1959)
HAnimJoint1960 = x3d.HAnimJoint()
HAnimJoint1960.setContainerFieldOverride("joints")
HAnimJoint1960.setUSE("hanim_vt8")

HAnimHumanoid38.addJoints(HAnimJoint1960)
HAnimJoint1961 = x3d.HAnimJoint()
HAnimJoint1961.setContainerFieldOverride("joints")
HAnimJoint1961.setUSE("hanim_vt7")

HAnimHumanoid38.addJoints(HAnimJoint1961)
HAnimJoint1962 = x3d.HAnimJoint()
HAnimJoint1962.setContainerFieldOverride("joints")
HAnimJoint1962.setUSE("hanim_vt6")

HAnimHumanoid38.addJoints(HAnimJoint1962)
HAnimJoint1963 = x3d.HAnimJoint()
HAnimJoint1963.setContainerFieldOverride("joints")
HAnimJoint1963.setUSE("hanim_vt5")

HAnimHumanoid38.addJoints(HAnimJoint1963)
HAnimJoint1964 = x3d.HAnimJoint()
HAnimJoint1964.setContainerFieldOverride("joints")
HAnimJoint1964.setUSE("hanim_vt4")

HAnimHumanoid38.addJoints(HAnimJoint1964)
HAnimJoint1965 = x3d.HAnimJoint()
HAnimJoint1965.setContainerFieldOverride("joints")
HAnimJoint1965.setUSE("hanim_vt3")

HAnimHumanoid38.addJoints(HAnimJoint1965)
HAnimJoint1966 = x3d.HAnimJoint()
HAnimJoint1966.setContainerFieldOverride("joints")
HAnimJoint1966.setUSE("hanim_vt2")

HAnimHumanoid38.addJoints(HAnimJoint1966)
HAnimJoint1967 = x3d.HAnimJoint()
HAnimJoint1967.setContainerFieldOverride("joints")
HAnimJoint1967.setUSE("hanim_vt1")

HAnimHumanoid38.addJoints(HAnimJoint1967)
HAnimJoint1968 = x3d.HAnimJoint()
HAnimJoint1968.setContainerFieldOverride("joints")
HAnimJoint1968.setUSE("hanim_vc7")

HAnimHumanoid38.addJoints(HAnimJoint1968)
HAnimJoint1969 = x3d.HAnimJoint()
HAnimJoint1969.setContainerFieldOverride("joints")
HAnimJoint1969.setUSE("hanim_vc6")

HAnimHumanoid38.addJoints(HAnimJoint1969)
HAnimJoint1970 = x3d.HAnimJoint()
HAnimJoint1970.setContainerFieldOverride("joints")
HAnimJoint1970.setUSE("hanim_vc5")

HAnimHumanoid38.addJoints(HAnimJoint1970)
HAnimJoint1971 = x3d.HAnimJoint()
HAnimJoint1971.setContainerFieldOverride("joints")
HAnimJoint1971.setUSE("hanim_vc4")

HAnimHumanoid38.addJoints(HAnimJoint1971)
HAnimJoint1972 = x3d.HAnimJoint()
HAnimJoint1972.setContainerFieldOverride("joints")
HAnimJoint1972.setUSE("hanim_vc3")

HAnimHumanoid38.addJoints(HAnimJoint1972)
HAnimJoint1973 = x3d.HAnimJoint()
HAnimJoint1973.setContainerFieldOverride("joints")
HAnimJoint1973.setUSE("hanim_vc2")

HAnimHumanoid38.addJoints(HAnimJoint1973)
HAnimJoint1974 = x3d.HAnimJoint()
HAnimJoint1974.setContainerFieldOverride("joints")
HAnimJoint1974.setUSE("hanim_vc1")

HAnimHumanoid38.addJoints(HAnimJoint1974)
HAnimJoint1975 = x3d.HAnimJoint()
HAnimJoint1975.setContainerFieldOverride("joints")
HAnimJoint1975.setUSE("hanim_skullbase")

HAnimHumanoid38.addJoints(HAnimJoint1975)
HAnimJoint1976 = x3d.HAnimJoint()
HAnimJoint1976.setContainerFieldOverride("joints")
HAnimJoint1976.setUSE("hanim_l_eyelid_joint")

HAnimHumanoid38.addJoints(HAnimJoint1976)
HAnimJoint1977 = x3d.HAnimJoint()
HAnimJoint1977.setContainerFieldOverride("joints")
HAnimJoint1977.setUSE("hanim_r_eyelid_joint")

HAnimHumanoid38.addJoints(HAnimJoint1977)
HAnimJoint1978 = x3d.HAnimJoint()
HAnimJoint1978.setContainerFieldOverride("joints")
HAnimJoint1978.setUSE("hanim_l_eyeball_joint")

HAnimHumanoid38.addJoints(HAnimJoint1978)
HAnimJoint1979 = x3d.HAnimJoint()
HAnimJoint1979.setContainerFieldOverride("joints")
HAnimJoint1979.setUSE("hanim_r_eyeball_joint")

HAnimHumanoid38.addJoints(HAnimJoint1979)
HAnimJoint1980 = x3d.HAnimJoint()
HAnimJoint1980.setContainerFieldOverride("joints")
HAnimJoint1980.setUSE("hanim_l_eyebrow_joint")

HAnimHumanoid38.addJoints(HAnimJoint1980)
HAnimJoint1981 = x3d.HAnimJoint()
HAnimJoint1981.setContainerFieldOverride("joints")
HAnimJoint1981.setUSE("hanim_r_eyebrow_joint")

HAnimHumanoid38.addJoints(HAnimJoint1981)
HAnimJoint1982 = x3d.HAnimJoint()
HAnimJoint1982.setContainerFieldOverride("joints")
HAnimJoint1982.setUSE("hanim_temporomandibular")

HAnimHumanoid38.addJoints(HAnimJoint1982)
HAnimJoint1983 = x3d.HAnimJoint()
HAnimJoint1983.setContainerFieldOverride("joints")
HAnimJoint1983.setUSE("hanim_l_sternoclavicular")

HAnimHumanoid38.addJoints(HAnimJoint1983)
HAnimJoint1984 = x3d.HAnimJoint()
HAnimJoint1984.setContainerFieldOverride("joints")
HAnimJoint1984.setUSE("hanim_l_acromioclavicular")

HAnimHumanoid38.addJoints(HAnimJoint1984)
HAnimJoint1985 = x3d.HAnimJoint()
HAnimJoint1985.setContainerFieldOverride("joints")
HAnimJoint1985.setUSE("hanim_l_shoulder")

HAnimHumanoid38.addJoints(HAnimJoint1985)
HAnimJoint1986 = x3d.HAnimJoint()
HAnimJoint1986.setContainerFieldOverride("joints")
HAnimJoint1986.setUSE("hanim_l_elbow")

HAnimHumanoid38.addJoints(HAnimJoint1986)
HAnimJoint1987 = x3d.HAnimJoint()
HAnimJoint1987.setContainerFieldOverride("joints")
HAnimJoint1987.setUSE("hanim_l_radiocarpal")

HAnimHumanoid38.addJoints(HAnimJoint1987)
HAnimJoint1988 = x3d.HAnimJoint()
HAnimJoint1988.setContainerFieldOverride("joints")
HAnimJoint1988.setUSE("hanim_l_midcarpal_1")

HAnimHumanoid38.addJoints(HAnimJoint1988)
HAnimJoint1989 = x3d.HAnimJoint()
HAnimJoint1989.setContainerFieldOverride("joints")
HAnimJoint1989.setUSE("hanim_l_carpometacarpal_1")

HAnimHumanoid38.addJoints(HAnimJoint1989)
HAnimJoint1990 = x3d.HAnimJoint()
HAnimJoint1990.setContainerFieldOverride("joints")
HAnimJoint1990.setUSE("hanim_l_metacarpophalangeal_1")

HAnimHumanoid38.addJoints(HAnimJoint1990)
HAnimJoint1991 = x3d.HAnimJoint()
HAnimJoint1991.setContainerFieldOverride("joints")
HAnimJoint1991.setUSE("hanim_l_carpal_interphalangeal_1")

HAnimHumanoid38.addJoints(HAnimJoint1991)
HAnimJoint1992 = x3d.HAnimJoint()
HAnimJoint1992.setContainerFieldOverride("joints")
HAnimJoint1992.setUSE("hanim_l_midcarpal_2")

HAnimHumanoid38.addJoints(HAnimJoint1992)
HAnimJoint1993 = x3d.HAnimJoint()
HAnimJoint1993.setContainerFieldOverride("joints")
HAnimJoint1993.setUSE("hanim_l_carpometacarpal_2")

HAnimHumanoid38.addJoints(HAnimJoint1993)
HAnimJoint1994 = x3d.HAnimJoint()
HAnimJoint1994.setContainerFieldOverride("joints")
HAnimJoint1994.setUSE("hanim_l_metacarpophalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1994)
HAnimJoint1995 = x3d.HAnimJoint()
HAnimJoint1995.setContainerFieldOverride("joints")
HAnimJoint1995.setUSE("hanim_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1995)
HAnimJoint1996 = x3d.HAnimJoint()
HAnimJoint1996.setContainerFieldOverride("joints")
HAnimJoint1996.setUSE("hanim_l_carpal_distal_interphalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint1996)
HAnimJoint1997 = x3d.HAnimJoint()
HAnimJoint1997.setContainerFieldOverride("joints")
HAnimJoint1997.setUSE("hanim_l_midcarpal_3")

HAnimHumanoid38.addJoints(HAnimJoint1997)
HAnimJoint1998 = x3d.HAnimJoint()
HAnimJoint1998.setContainerFieldOverride("joints")
HAnimJoint1998.setUSE("hanim_l_carpometacarpal_3")

HAnimHumanoid38.addJoints(HAnimJoint1998)
HAnimJoint1999 = x3d.HAnimJoint()
HAnimJoint1999.setContainerFieldOverride("joints")
HAnimJoint1999.setUSE("hanim_l_metacarpophalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint1999)
HAnimJoint2000 = x3d.HAnimJoint()
HAnimJoint2000.setContainerFieldOverride("joints")
HAnimJoint2000.setUSE("hanim_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint2000)
HAnimJoint2001 = x3d.HAnimJoint()
HAnimJoint2001.setContainerFieldOverride("joints")
HAnimJoint2001.setUSE("hanim_l_carpal_distal_interphalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint2001)
HAnimJoint2002 = x3d.HAnimJoint()
HAnimJoint2002.setContainerFieldOverride("joints")
HAnimJoint2002.setUSE("hanim_l_midcarpal_4_5")

HAnimHumanoid38.addJoints(HAnimJoint2002)
HAnimJoint2003 = x3d.HAnimJoint()
HAnimJoint2003.setContainerFieldOverride("joints")
HAnimJoint2003.setUSE("hanim_l_carpometacarpal_4")

HAnimHumanoid38.addJoints(HAnimJoint2003)
HAnimJoint2004 = x3d.HAnimJoint()
HAnimJoint2004.setContainerFieldOverride("joints")
HAnimJoint2004.setUSE("hanim_l_metacarpophalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint2004)
HAnimJoint2005 = x3d.HAnimJoint()
HAnimJoint2005.setContainerFieldOverride("joints")
HAnimJoint2005.setUSE("hanim_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint2005)
HAnimJoint2006 = x3d.HAnimJoint()
HAnimJoint2006.setContainerFieldOverride("joints")
HAnimJoint2006.setUSE("hanim_l_carpal_distal_interphalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint2006)
HAnimJoint2007 = x3d.HAnimJoint()
HAnimJoint2007.setContainerFieldOverride("joints")
HAnimJoint2007.setUSE("hanim_l_carpometacarpal_5")

HAnimHumanoid38.addJoints(HAnimJoint2007)
HAnimJoint2008 = x3d.HAnimJoint()
HAnimJoint2008.setContainerFieldOverride("joints")
HAnimJoint2008.setUSE("hanim_l_metacarpophalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint2008)
HAnimJoint2009 = x3d.HAnimJoint()
HAnimJoint2009.setContainerFieldOverride("joints")
HAnimJoint2009.setUSE("hanim_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint2009)
HAnimJoint2010 = x3d.HAnimJoint()
HAnimJoint2010.setContainerFieldOverride("joints")
HAnimJoint2010.setUSE("hanim_l_carpal_distal_interphalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint2010)
HAnimJoint2011 = x3d.HAnimJoint()
HAnimJoint2011.setContainerFieldOverride("joints")
HAnimJoint2011.setUSE("hanim_r_sternoclavicular")

HAnimHumanoid38.addJoints(HAnimJoint2011)
HAnimJoint2012 = x3d.HAnimJoint()
HAnimJoint2012.setContainerFieldOverride("joints")
HAnimJoint2012.setUSE("hanim_r_acromioclavicular")

HAnimHumanoid38.addJoints(HAnimJoint2012)
HAnimJoint2013 = x3d.HAnimJoint()
HAnimJoint2013.setContainerFieldOverride("joints")
HAnimJoint2013.setUSE("hanim_r_shoulder")

HAnimHumanoid38.addJoints(HAnimJoint2013)
HAnimJoint2014 = x3d.HAnimJoint()
HAnimJoint2014.setContainerFieldOverride("joints")
HAnimJoint2014.setUSE("hanim_r_elbow")

HAnimHumanoid38.addJoints(HAnimJoint2014)
HAnimJoint2015 = x3d.HAnimJoint()
HAnimJoint2015.setContainerFieldOverride("joints")
HAnimJoint2015.setUSE("hanim_r_radiocarpal")

HAnimHumanoid38.addJoints(HAnimJoint2015)
HAnimJoint2016 = x3d.HAnimJoint()
HAnimJoint2016.setContainerFieldOverride("joints")
HAnimJoint2016.setUSE("hanim_r_midcarpal_1")

HAnimHumanoid38.addJoints(HAnimJoint2016)
HAnimJoint2017 = x3d.HAnimJoint()
HAnimJoint2017.setContainerFieldOverride("joints")
HAnimJoint2017.setUSE("hanim_r_carpometacarpal_1")

HAnimHumanoid38.addJoints(HAnimJoint2017)
HAnimJoint2018 = x3d.HAnimJoint()
HAnimJoint2018.setContainerFieldOverride("joints")
HAnimJoint2018.setUSE("hanim_r_metacarpophalangeal_1")

HAnimHumanoid38.addJoints(HAnimJoint2018)
HAnimJoint2019 = x3d.HAnimJoint()
HAnimJoint2019.setContainerFieldOverride("joints")
HAnimJoint2019.setUSE("hanim_r_carpal_interphalangeal_1")

HAnimHumanoid38.addJoints(HAnimJoint2019)
HAnimJoint2020 = x3d.HAnimJoint()
HAnimJoint2020.setContainerFieldOverride("joints")
HAnimJoint2020.setUSE("hanim_r_midcarpal_2")

HAnimHumanoid38.addJoints(HAnimJoint2020)
HAnimJoint2021 = x3d.HAnimJoint()
HAnimJoint2021.setContainerFieldOverride("joints")
HAnimJoint2021.setUSE("hanim_r_carpometacarpal_2")

HAnimHumanoid38.addJoints(HAnimJoint2021)
HAnimJoint2022 = x3d.HAnimJoint()
HAnimJoint2022.setContainerFieldOverride("joints")
HAnimJoint2022.setUSE("hanim_r_metacarpophalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint2022)
HAnimJoint2023 = x3d.HAnimJoint()
HAnimJoint2023.setContainerFieldOverride("joints")
HAnimJoint2023.setUSE("hanim_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint2023)
HAnimJoint2024 = x3d.HAnimJoint()
HAnimJoint2024.setContainerFieldOverride("joints")
HAnimJoint2024.setUSE("hanim_r_carpal_distal_interphalangeal_2")

HAnimHumanoid38.addJoints(HAnimJoint2024)
HAnimJoint2025 = x3d.HAnimJoint()
HAnimJoint2025.setContainerFieldOverride("joints")
HAnimJoint2025.setUSE("hanim_r_midcarpal_3")

HAnimHumanoid38.addJoints(HAnimJoint2025)
HAnimJoint2026 = x3d.HAnimJoint()
HAnimJoint2026.setContainerFieldOverride("joints")
HAnimJoint2026.setUSE("hanim_r_carpometacarpal_3")

HAnimHumanoid38.addJoints(HAnimJoint2026)
HAnimJoint2027 = x3d.HAnimJoint()
HAnimJoint2027.setContainerFieldOverride("joints")
HAnimJoint2027.setUSE("hanim_r_metacarpophalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint2027)
HAnimJoint2028 = x3d.HAnimJoint()
HAnimJoint2028.setContainerFieldOverride("joints")
HAnimJoint2028.setUSE("hanim_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint2028)
HAnimJoint2029 = x3d.HAnimJoint()
HAnimJoint2029.setContainerFieldOverride("joints")
HAnimJoint2029.setUSE("hanim_r_carpal_distal_interphalangeal_3")

HAnimHumanoid38.addJoints(HAnimJoint2029)
HAnimJoint2030 = x3d.HAnimJoint()
HAnimJoint2030.setContainerFieldOverride("joints")
HAnimJoint2030.setUSE("hanim_r_midcarpal_4_5")

HAnimHumanoid38.addJoints(HAnimJoint2030)
HAnimJoint2031 = x3d.HAnimJoint()
HAnimJoint2031.setContainerFieldOverride("joints")
HAnimJoint2031.setUSE("hanim_r_carpometacarpal_4")

HAnimHumanoid38.addJoints(HAnimJoint2031)
HAnimJoint2032 = x3d.HAnimJoint()
HAnimJoint2032.setContainerFieldOverride("joints")
HAnimJoint2032.setUSE("hanim_r_metacarpophalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint2032)
HAnimJoint2033 = x3d.HAnimJoint()
HAnimJoint2033.setContainerFieldOverride("joints")
HAnimJoint2033.setUSE("hanim_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint2033)
HAnimJoint2034 = x3d.HAnimJoint()
HAnimJoint2034.setContainerFieldOverride("joints")
HAnimJoint2034.setUSE("hanim_r_carpal_distal_interphalangeal_4")

HAnimHumanoid38.addJoints(HAnimJoint2034)
HAnimJoint2035 = x3d.HAnimJoint()
HAnimJoint2035.setContainerFieldOverride("joints")
HAnimJoint2035.setUSE("hanim_r_carpometacarpal_5")

HAnimHumanoid38.addJoints(HAnimJoint2035)
HAnimJoint2036 = x3d.HAnimJoint()
HAnimJoint2036.setContainerFieldOverride("joints")
HAnimJoint2036.setUSE("hanim_r_metacarpophalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint2036)
HAnimJoint2037 = x3d.HAnimJoint()
HAnimJoint2037.setContainerFieldOverride("joints")
HAnimJoint2037.setUSE("hanim_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint2037)
HAnimJoint2038 = x3d.HAnimJoint()
HAnimJoint2038.setContainerFieldOverride("joints")
HAnimJoint2038.setUSE("hanim_r_carpal_distal_interphalangeal_5")

HAnimHumanoid38.addJoints(HAnimJoint2038)

Scene11.addChild(HAnimHumanoid38)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/Humanoid4.new.graalpy.x3d")
X3D0.toFileJSON("../data/Humanoid4.new.graalpy.x3dj")
