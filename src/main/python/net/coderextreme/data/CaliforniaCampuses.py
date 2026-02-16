print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "Geospatial"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "CaliforniaCampuses.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "Viewpoints and tour of California campuses"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "4 March 2010"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "20 October 2019"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "CaliforniaCampuses.kml"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "https://www.web3d.org/x3d-earth"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "http://x3d-earth.nps.edu"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "http://hamming.uc.nps.edu"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "subject"
meta12.content = "X3D Earth"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "identifier"
meta13.content = "https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampuses.x3d"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "reference"
meta14.content = "http://mmog.ern.nps.edu/California/California.x3d"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "warning"
meta15.content = "under development"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "warning"
meta16.content = "mmog.ern.nps.edu restricted to internal access within NPS firewall only"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "generator"
meta17.content = "KmlToX3dViewpoints.xslt"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "generator"
meta18.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "license"
meta19.content = "https://savage.nps.edu/Savage/license.html"

head1.children.append(meta19)

X3D0.head = head1
Scene20 = x3d.Scene()
WorldInfo21 = x3d.WorldInfo()
WorldInfo21.title = "CaliforniaCampuses.x3d"

Scene20.children.append(WorldInfo21)
Switch22 = x3d.Switch(DEF="SwitchGlobes")
Switch22.whichChoice = 0
Switch22.children.append(x3d.Comment("""Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching."""))
Inline23 = x3d.Inline()
Inline23.url = ["http://x3d-earth.nps.edu/osmdemo.x3d"]

Switch22.children.append(Inline23)
Switch22.children.append(x3d.Comment("""<Inline load='false' url='\"http://mmog.ern.nps.edu/California/California.x3d\"'/>"""))
Switch22.children.append(x3d.Comment("""<Inline load='false' url='\"http://x3d-earth.nps.edu/7_levels_plus/tiles/0/globe.x3d\"'/>"""))
Switch22.children.append(x3d.Comment("""<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/MBARI1MinuteBathy/world.x3d\"'/>"""))
Switch22.children.append(x3d.Comment("""<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/SRTM30Plus/world.x3d\"'/>"""))

Scene20.children.append(Switch22)
NavigationInfo24 = x3d.NavigationInfo()
NavigationInfo24.transitionType = ["ANIMATE"]

Scene20.children.append(NavigationInfo24)
Group25 = x3d.Group(DEF="PlacemarkGroup")
GeoViewpoint26 = x3d.GeoViewpoint(DEF="View01")
GeoViewpoint26.description = "Naval Postgraduate School"
GeoViewpoint26.orientation = [1,0,0,-1.57]
GeoViewpoint26.position = [36.595599,-121.877148,250000]

Group25.children.append(GeoViewpoint26)
GeoViewpoint27 = x3d.GeoViewpoint(DEF="View02")
GeoViewpoint27.description = "University of California Davis"
GeoViewpoint27.orientation = [1,0,0,-1.57]
GeoViewpoint27.position = [38.53650615157984,-121.7489628616831,250000]

Group25.children.append(GeoViewpoint27)
GeoViewpoint28 = x3d.GeoViewpoint(DEF="View03")
GeoViewpoint28.description = "University of California Berkeley"
GeoViewpoint28.orientation = [1,0,0,-1.57]
GeoViewpoint28.position = [37.86963434512325,-122.2593873127355,250000]

Group25.children.append(GeoViewpoint28)
GeoViewpoint29 = x3d.GeoViewpoint(DEF="View04")
GeoViewpoint29.description = "University of California San Francisco"
GeoViewpoint29.orientation = [1,0,0,-1.57]
GeoViewpoint29.position = [37.76340647188392,-122.4582475377715,250000]

Group25.children.append(GeoViewpoint29)
GeoViewpoint30 = x3d.GeoViewpoint(DEF="View05")
GeoViewpoint30.description = "University of California Santa Cruz"
GeoViewpoint30.orientation = [1,0,0,-1.57]
GeoViewpoint30.position = [36.99628443046043,-122.0534325473795,250000]

Group25.children.append(GeoViewpoint30)
GeoViewpoint31 = x3d.GeoViewpoint(DEF="View06")
GeoViewpoint31.description = "University of California Merced"
GeoViewpoint31.orientation = [1,0,0,-1.57]
GeoViewpoint31.position = [37.365508575977,-120.4252597059142,250000]

Group25.children.append(GeoViewpoint31)
GeoViewpoint32 = x3d.GeoViewpoint(DEF="View07")
GeoViewpoint32.description = "University of California Santa Barbara"
GeoViewpoint32.orientation = [1,0,0,-1.57]
GeoViewpoint32.position = [34.41124450961521,-119.8479940053906,250000]

Group25.children.append(GeoViewpoint32)
GeoViewpoint33 = x3d.GeoViewpoint(DEF="View08")
GeoViewpoint33.description = "University of California Los Angeles"
GeoViewpoint33.orientation = [1,0,0,-1.57]
GeoViewpoint33.position = [34.07224474392262,-118.4408472225642,250000]

Group25.children.append(GeoViewpoint33)
GeoViewpoint34 = x3d.GeoViewpoint(DEF="View09")
GeoViewpoint34.description = "University of California Irvine"
GeoViewpoint34.orientation = [1,0,0,-1.57]
GeoViewpoint34.position = [33.64623283675919,-117.8427064139082,250000]

Group25.children.append(GeoViewpoint34)
GeoViewpoint35 = x3d.GeoViewpoint(DEF="View10")
GeoViewpoint35.description = "University of California Riverside"
GeoViewpoint35.orientation = [1,0,0,-1.57]
GeoViewpoint35.position = [33.97350567066717,-117.3281649569839,250000]

Group25.children.append(GeoViewpoint35)
GeoViewpoint36 = x3d.GeoViewpoint(DEF="View11")
GeoViewpoint36.description = "University of California San Diego"
GeoViewpoint36.orientation = [1,0,0,-1.57]
GeoViewpoint36.position = [32.87612136607509,-117.2367298240259,250000]

Group25.children.append(GeoViewpoint36)
GeoViewpoint37 = x3d.GeoViewpoint(DEF="View12")
GeoViewpoint37.description = "Humboldt State University"
GeoViewpoint37.orientation = [1,0,0,-1.57]
GeoViewpoint37.position = [40.87630235623448,-124.0785789217266,250000]

Group25.children.append(GeoViewpoint37)
GeoViewpoint38 = x3d.GeoViewpoint(DEF="View13")
GeoViewpoint38.description = "California State University, Chico"
GeoViewpoint38.orientation = [1,0,0,-1.57]
GeoViewpoint38.position = [39.73031527724385,-121.8453722745223,250000]

Group25.children.append(GeoViewpoint38)
GeoViewpoint39 = x3d.GeoViewpoint(DEF="View14")
GeoViewpoint39.description = "California State University Sacramento"
GeoViewpoint39.orientation = [1,0,0,-1.57]
GeoViewpoint39.position = [38.5626517618963,-121.4244636520556,250000]

Group25.children.append(GeoViewpoint39)
GeoViewpoint40 = x3d.GeoViewpoint(DEF="View15")
GeoViewpoint40.description = "Sonoma State University"
GeoViewpoint40.orientation = [1,0,0,-1.57]
GeoViewpoint40.position = [38.33922929793606,-122.6744333530031,250000]

Group25.children.append(GeoViewpoint40)
GeoViewpoint41 = x3d.GeoViewpoint(DEF="View16")
GeoViewpoint41.description = "California Maritime Academy"
GeoViewpoint41.orientation = [1,0,0,-1.57]
GeoViewpoint41.position = [38.06907065059484,-122.2309147135222,250000]

Group25.children.append(GeoViewpoint41)
GeoViewpoint42 = x3d.GeoViewpoint(DEF="View17")
GeoViewpoint42.description = "San Francisco State University"
GeoViewpoint42.orientation = [1,0,0,-1.57]
GeoViewpoint42.position = [37.722876,-122.4781512190666,250000]

Group25.children.append(GeoViewpoint42)
GeoViewpoint43 = x3d.GeoViewpoint(DEF="View18")
GeoViewpoint43.description = "California State University, East Bay"
GeoViewpoint43.orientation = [1,0,0,-1.57]
GeoViewpoint43.position = [37.65707914139907,-122.0569190659761,250000]

Group25.children.append(GeoViewpoint43)
GeoViewpoint44 = x3d.GeoViewpoint(DEF="View19")
GeoViewpoint44.description = "California State University Stanislaus"
GeoViewpoint44.orientation = [1,0,0,-1.57]
GeoViewpoint44.position = [37.52552478005697,-120.8563508560606,250000]

Group25.children.append(GeoViewpoint44)
GeoViewpoint45 = x3d.GeoViewpoint(DEF="View20")
GeoViewpoint45.description = "San Jose State University"
GeoViewpoint45.orientation = [1,0,0,-1.57]
GeoViewpoint45.position = [37.33580940527095,-121.8815343755784,250000]

Group25.children.append(GeoViewpoint45)
GeoViewpoint46 = x3d.GeoViewpoint(DEF="View21")
GeoViewpoint46.description = "California State University, Monterey Bay"
GeoViewpoint46.orientation = [1,0,0,-1.57]
GeoViewpoint46.position = [36.6538071781493,-121.7984465276711,250000]

Group25.children.append(GeoViewpoint46)
GeoViewpoint47 = x3d.GeoViewpoint(DEF="View22")
GeoViewpoint47.description = "Fresno State University"
GeoViewpoint47.orientation = [1,0,0,-1.57]
GeoViewpoint47.position = [36.812166,-119.7451552005852,250000]

Group25.children.append(GeoViewpoint47)
GeoViewpoint48 = x3d.GeoViewpoint(DEF="View23")
GeoViewpoint48.description = "California State University, Bakersfield"
GeoViewpoint48.orientation = [1,0,0,-1.57]
GeoViewpoint48.position = [35.350804,-119.1043226128032,250000]

Group25.children.append(GeoViewpoint48)
GeoViewpoint49 = x3d.GeoViewpoint(DEF="View24")
GeoViewpoint49.description = "California Polytechnic State University"
GeoViewpoint49.orientation = [1,0,0,-1.57]
GeoViewpoint49.position = [35.30115692599171,-120.6595761796351,250000]

Group25.children.append(GeoViewpoint49)
GeoViewpoint50 = x3d.GeoViewpoint(DEF="View25")
GeoViewpoint50.description = "California State University, Channel Islands"
GeoViewpoint50.orientation = [1,0,0,-1.57]
GeoViewpoint50.position = [34.1624126428852,-119.0425264841287,250000]

Group25.children.append(GeoViewpoint50)
GeoViewpoint51 = x3d.GeoViewpoint(DEF="View26")
GeoViewpoint51.description = "California State University, Northridge"
GeoViewpoint51.orientation = [1,0,0,-1.57]
GeoViewpoint51.position = [34.23959265263849,-118.5284272400904,250000]

Group25.children.append(GeoViewpoint51)
GeoViewpoint52 = x3d.GeoViewpoint(DEF="View27")
GeoViewpoint52.description = "California State University, Los Angeles"
GeoViewpoint52.orientation = [1,0,0,-1.57]
GeoViewpoint52.position = [34.06645996626264,-118.1682050902557,250000]

Group25.children.append(GeoViewpoint52)
GeoViewpoint53 = x3d.GeoViewpoint(DEF="View28")
GeoViewpoint53.description = "California State Polytechnic University, Pomona"
GeoViewpoint53.orientation = [1,0,0,-1.57]
GeoViewpoint53.position = [34.05727150000314,-117.8215320234812,250000]

Group25.children.append(GeoViewpoint53)
GeoViewpoint54 = x3d.GeoViewpoint(DEF="View29")
GeoViewpoint54.description = "California State University, San Bernardino"
GeoViewpoint54.orientation = [1,0,0,-1.57]
GeoViewpoint54.position = [34.18180116432101,-117.3243676664719,250000]

Group25.children.append(GeoViewpoint54)
GeoViewpoint55 = x3d.GeoViewpoint(DEF="View30")
GeoViewpoint55.description = "California State University, Fullerton"
GeoViewpoint55.orientation = [1,0,0,-1.57]
GeoViewpoint55.position = [33.882522,-117.8868367869023,250000]

Group25.children.append(GeoViewpoint55)
GeoViewpoint56 = x3d.GeoViewpoint(DEF="View31")
GeoViewpoint56.description = "California State University Dominguez Hills"
GeoViewpoint56.orientation = [1,0,0,-1.57]
GeoViewpoint56.position = [33.86463396857103,-118.2553596272055,250000]

Group25.children.append(GeoViewpoint56)
GeoViewpoint57 = x3d.GeoViewpoint(DEF="View32")
GeoViewpoint57.description = "California State University, Long Beach"
GeoViewpoint57.orientation = [1,0,0,-1.57]
GeoViewpoint57.position = [33.78196696470824,-118.112678253688,250000]

Group25.children.append(GeoViewpoint57)
GeoViewpoint58 = x3d.GeoViewpoint(DEF="View33")
GeoViewpoint58.description = "California State University, San Marcos"
GeoViewpoint58.orientation = [1,0,0,-1.57]
GeoViewpoint58.position = [33.12837619265174,-117.1600194071002,250000]

Group25.children.append(GeoViewpoint58)
GeoViewpoint59 = x3d.GeoViewpoint(DEF="View34")
GeoViewpoint59.description = "San Diego State University"
GeoViewpoint59.orientation = [1,0,0,-1.57]
GeoViewpoint59.position = [32.77593126586385,-117.0722876242553,250000]

Group25.children.append(GeoViewpoint59)
GeoViewpoint60 = x3d.GeoViewpoint(DEF="View35")
GeoViewpoint60.description = "CENIC"
GeoViewpoint60.orientation = [1,0,0,-1.57]
GeoViewpoint60.position = [33.879947,-118.027903,250000]

Group25.children.append(GeoViewpoint60)

Scene20.children.append(Group25)
Scene20.children.append(x3d.Comment("""===================="""))
ExternProtoDeclare61 = x3d.ExternProtoDeclare()
ExternProtoDeclare61.name = "CrossHair"
ExternProtoDeclare61.appinfo = "CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point"
ExternProtoDeclare61.url = ["../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"]
field62 = x3d.field()
field62.name = "enabled"
field62.accessType = "initializeOnly"
field62.appinfo = "whether CrossHair prototype is enabled or not"
field62.type = "SFBool"

ExternProtoDeclare61.field.append(field62)
field63 = x3d.field()
field63.name = "set_enabled"
field63.accessType = "inputOnly"
field63.appinfo = "control whether enabled/disabled"
field63.type = "SFBool"

ExternProtoDeclare61.field.append(field63)
field64 = x3d.field()
field64.name = "markerColor"
field64.accessType = "inputOutput"
field64.appinfo = "color of CrossHair marker"
field64.type = "SFColor"

ExternProtoDeclare61.field.append(field64)
field65 = x3d.field()
field65.name = "scale"
field65.accessType = "inputOutput"
field65.appinfo = "size of CrossHair in meters"
field65.type = "SFVec3f"

ExternProtoDeclare61.field.append(field65)
field66 = x3d.field()
field66.name = "positionOffsetFromCamera"
field66.accessType = "inputOutput"
field66.appinfo = "distance in front of HUD viewpoint"
field66.type = "SFVec3f"

ExternProtoDeclare61.field.append(field66)

Scene20.children.append(ExternProtoDeclare61)
ProtoInstance67 = x3d.ProtoInstance(DEF="CrossHairInstance")
ProtoInstance67.name = "CrossHair"
fieldValue68 = x3d.fieldValue()
fieldValue68.name = "enabled"
fieldValue68.value = "true"

ProtoInstance67.fieldValue.append(fieldValue68)
fieldValue69 = x3d.fieldValue()
fieldValue69.name = "markerColor"
fieldValue69.value = "0.1 0.8 0.1"

ProtoInstance67.fieldValue.append(fieldValue69)
fieldValue70 = x3d.fieldValue()
fieldValue70.name = "scale"
fieldValue70.value = "0.5 0.5 0.5"

ProtoInstance67.fieldValue.append(fieldValue70)
fieldValue71 = x3d.fieldValue()
fieldValue71.name = "positionOffsetFromCamera"
fieldValue71.value = "0 0 -5"

ProtoInstance67.fieldValue.append(fieldValue71)

Scene20.children.append(ProtoInstance67)
Scene20.children.append(x3d.Comment("""===================="""))
ExternProtoDeclare72 = x3d.ExternProtoDeclare()
ExternProtoDeclare72.name = "HeadsUpDisplay"
ExternProtoDeclare72.appinfo = "Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location"
ExternProtoDeclare72.url = ["../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"]
field73 = x3d.field()
field73.name = "children"
field73.accessType = "inputOutput"
field73.appinfo = "X3D content positioned at HUD offset"
field73.type = "MFNode"

ExternProtoDeclare72.field.append(field73)
field74 = x3d.field()
field74.name = "screenOffset"
field74.accessType = "inputOutput"
field74.appinfo = "offset position for HUD relative to current view location, default 0 0 -5"
field74.type = "SFVec3f"

ExternProtoDeclare72.field.append(field74)
field75 = x3d.field()
field75.name = "position_changed"
field75.accessType = "outputOnly"
field75.appinfo = "HUD position update (in world coordinates) relative to original location"
field75.type = "SFVec3f"

ExternProtoDeclare72.field.append(field75)
field76 = x3d.field()
field76.name = "orientation_changed"
field76.accessType = "outputOnly"
field76.appinfo = "HUD orientation update relative to original location"
field76.type = "SFRotation"

ExternProtoDeclare72.field.append(field76)

Scene20.children.append(ExternProtoDeclare72)
Scene20.children.append(x3d.Comment("""===================="""))
ExternProtoDeclare77 = x3d.ExternProtoDeclare()
ExternProtoDeclare77.name = "ViewpointSequencer"
ExternProtoDeclare77.appinfo = "Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene"
ExternProtoDeclare77.url = ["../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer"]
field78 = x3d.field()
field78.name = "viewpoints"
field78.accessType = "initializeOnly"
field78.appinfo = "Viewpoint USE nodes that are sequentially bound"
field78.type = "MFNode"

ExternProtoDeclare77.field.append(field78)
field79 = x3d.field()
field79.name = "interval"
field79.accessType = "inputOutput"
field79.appinfo = "number of seconds between viewpoint shifts"
field79.type = "SFTime"

ExternProtoDeclare77.field.append(field79)
field80 = x3d.field()
field80.name = "enabled"
field80.accessType = "inputOutput"
field80.appinfo = "whether ViewpointSequencer is enabled or not"
field80.type = "SFBool"

ExternProtoDeclare77.field.append(field80)
field81 = x3d.field()
field81.name = "set_enabled"
field81.accessType = "inputOnly"
field81.appinfo = "whether ViewpointSequencer is enabled or not"
field81.type = "SFBool"

ExternProtoDeclare77.field.append(field81)
field82 = x3d.field()
field82.name = "previous"
field82.accessType = "inputOnly"
field82.appinfo = "bind previous Viewpoint in list"
field82.type = "SFBool"

ExternProtoDeclare77.field.append(field82)
field83 = x3d.field()
field83.name = "next"
field83.accessType = "inputOnly"
field83.appinfo = "bind next Viewpoint in list"
field83.type = "SFBool"

ExternProtoDeclare77.field.append(field83)
field84 = x3d.field()
field84.name = "toggleMessage"
field84.accessType = "inputOutput"
field84.appinfo = "Select message to toggle ViewpointSequencer"
field84.type = "MFString"

ExternProtoDeclare77.field.append(field84)
field85 = x3d.field()
field85.name = "toggleMessageFontSize"
field85.accessType = "initializeOnly"
field85.appinfo = "Color for toggleMessage text"
field85.type = "SFFloat"

ExternProtoDeclare77.field.append(field85)
field86 = x3d.field()
field86.name = "toggleMessageColor"
field86.accessType = "inputOutput"
field86.appinfo = "Color for toggleMessage text"
field86.type = "SFColor"

ExternProtoDeclare77.field.append(field86)
field87 = x3d.field()
field87.name = "traceEnabled"
field87.accessType = "inputOutput"
field87.appinfo = "enable console output"
field87.type = "SFBool"

ExternProtoDeclare77.field.append(field87)

Scene20.children.append(ExternProtoDeclare77)
ProtoInstance88 = x3d.ProtoInstance(DEF="ViewpointTour")
ProtoInstance88.name = "ViewpointSequencer"
fieldValue89 = x3d.fieldValue()
fieldValue89.name = "interval"
fieldValue89.value = "30"

ProtoInstance88.fieldValue.append(fieldValue89)
fieldValue90 = x3d.fieldValue()
fieldValue90.name = "enabled"
fieldValue90.value = "true"

ProtoInstance88.fieldValue.append(fieldValue90)
fieldValue91 = x3d.fieldValue()
fieldValue91.name = "toggleMessage"
fieldValue91.value = "\"ViewpointSequencer tour\""

ProtoInstance88.fieldValue.append(fieldValue91)
fieldValue92 = x3d.fieldValue()
fieldValue92.name = "viewpoints"
GeoViewpoint93 = x3d.GeoViewpoint(USE="View01")

fieldValue92.children.append(GeoViewpoint93)
GeoViewpoint94 = x3d.GeoViewpoint(USE="View02")

fieldValue92.children.append(GeoViewpoint94)
GeoViewpoint95 = x3d.GeoViewpoint(USE="View03")

fieldValue92.children.append(GeoViewpoint95)
GeoViewpoint96 = x3d.GeoViewpoint(USE="View04")

fieldValue92.children.append(GeoViewpoint96)
GeoViewpoint97 = x3d.GeoViewpoint(USE="View05")

fieldValue92.children.append(GeoViewpoint97)
GeoViewpoint98 = x3d.GeoViewpoint(USE="View06")

fieldValue92.children.append(GeoViewpoint98)
GeoViewpoint99 = x3d.GeoViewpoint(USE="View07")

fieldValue92.children.append(GeoViewpoint99)
GeoViewpoint100 = x3d.GeoViewpoint(USE="View08")

fieldValue92.children.append(GeoViewpoint100)
GeoViewpoint101 = x3d.GeoViewpoint(USE="View09")

fieldValue92.children.append(GeoViewpoint101)
GeoViewpoint102 = x3d.GeoViewpoint(USE="View10")

fieldValue92.children.append(GeoViewpoint102)
GeoViewpoint103 = x3d.GeoViewpoint(USE="View11")

fieldValue92.children.append(GeoViewpoint103)
GeoViewpoint104 = x3d.GeoViewpoint(USE="View12")

fieldValue92.children.append(GeoViewpoint104)
GeoViewpoint105 = x3d.GeoViewpoint(USE="View13")

fieldValue92.children.append(GeoViewpoint105)
GeoViewpoint106 = x3d.GeoViewpoint(USE="View14")

fieldValue92.children.append(GeoViewpoint106)
GeoViewpoint107 = x3d.GeoViewpoint(USE="View15")

fieldValue92.children.append(GeoViewpoint107)
GeoViewpoint108 = x3d.GeoViewpoint(USE="View16")

fieldValue92.children.append(GeoViewpoint108)
GeoViewpoint109 = x3d.GeoViewpoint(USE="View17")

fieldValue92.children.append(GeoViewpoint109)
GeoViewpoint110 = x3d.GeoViewpoint(USE="View18")

fieldValue92.children.append(GeoViewpoint110)
GeoViewpoint111 = x3d.GeoViewpoint(USE="View19")

fieldValue92.children.append(GeoViewpoint111)
GeoViewpoint112 = x3d.GeoViewpoint(USE="View20")

fieldValue92.children.append(GeoViewpoint112)
GeoViewpoint113 = x3d.GeoViewpoint(USE="View21")

fieldValue92.children.append(GeoViewpoint113)
GeoViewpoint114 = x3d.GeoViewpoint(USE="View22")

fieldValue92.children.append(GeoViewpoint114)
GeoViewpoint115 = x3d.GeoViewpoint(USE="View23")

fieldValue92.children.append(GeoViewpoint115)
GeoViewpoint116 = x3d.GeoViewpoint(USE="View24")

fieldValue92.children.append(GeoViewpoint116)
GeoViewpoint117 = x3d.GeoViewpoint(USE="View25")

fieldValue92.children.append(GeoViewpoint117)
GeoViewpoint118 = x3d.GeoViewpoint(USE="View26")

fieldValue92.children.append(GeoViewpoint118)
GeoViewpoint119 = x3d.GeoViewpoint(USE="View27")

fieldValue92.children.append(GeoViewpoint119)
GeoViewpoint120 = x3d.GeoViewpoint(USE="View28")

fieldValue92.children.append(GeoViewpoint120)
GeoViewpoint121 = x3d.GeoViewpoint(USE="View29")

fieldValue92.children.append(GeoViewpoint121)
GeoViewpoint122 = x3d.GeoViewpoint(USE="View30")

fieldValue92.children.append(GeoViewpoint122)
GeoViewpoint123 = x3d.GeoViewpoint(USE="View31")

fieldValue92.children.append(GeoViewpoint123)
GeoViewpoint124 = x3d.GeoViewpoint(USE="View32")

fieldValue92.children.append(GeoViewpoint124)
GeoViewpoint125 = x3d.GeoViewpoint(USE="View33")

fieldValue92.children.append(GeoViewpoint125)
GeoViewpoint126 = x3d.GeoViewpoint(USE="View34")

fieldValue92.children.append(GeoViewpoint126)
GeoViewpoint127 = x3d.GeoViewpoint(USE="View35")

fieldValue92.children.append(GeoViewpoint127)
Viewpoint128 = x3d.Viewpoint(DEF="View4")
Viewpoint128.description = "View four (-X axis)"
Viewpoint128.orientation = [0,1,0,-1.57]
Viewpoint128.position = [-10,0,0]

fieldValue92.children.append(Viewpoint128)

ProtoInstance88.fieldValue.append(fieldValue92)
ProtoInstance88.children.append(x3d.Comment("""initially enabled is off, scene provides selectable text to activate"""))

Scene20.children.append(ProtoInstance88)
Scene20.children.append(x3d.Comment("""===================="""))
GeoLocation129 = x3d.GeoLocation()
GeoLocation129.geoCoords = [36.595599,-121.877148,624990]
Billboard130 = x3d.Billboard()
Billboard130.axisOfRotation = [0,0,0]
Shape131 = x3d.Shape()
Text132 = x3d.Text()
Text132.string = ["ViewpointSequencer tour"]
FontStyle133 = x3d.FontStyle()
FontStyle133.justify = ["MIDDLE","MIDDLE"]

Text132.fontStyle = FontStyle133

Shape131.geometry = Text132
Appearance134 = x3d.Appearance()
Material135 = x3d.Material()
Material135.ambientIntensity = 0.25
Material135.diffuseColor = [0.795918,0.505869,0.093315]
Material135.shininess = 0.39
Material135.specularColor = [0.923469,0.428866,0.006369]

Appearance134.material = Material135

Shape131.appearance = Appearance134

Billboard130.children.append(Shape131)

GeoLocation129.children.append(Billboard130)
TouchSensor136 = x3d.TouchSensor(DEF="TourTouch")
TouchSensor136.description = "Touch text to turn tour on/off"

GeoLocation129.children.append(TouchSensor136)
BooleanToggle137 = x3d.BooleanToggle(DEF="TourToggle")

GeoLocation129.children.append(BooleanToggle137)
ROUTE138 = x3d.ROUTE()
ROUTE138.fromField = "isActive"
ROUTE138.fromNode = "TourTouch"
ROUTE138.toField = "set_boolean"
ROUTE138.toNode = "TourToggle"

GeoLocation129.children.append(ROUTE138)
ROUTE139 = x3d.ROUTE()
ROUTE139.fromField = "toggle"
ROUTE139.fromNode = "TourToggle"
ROUTE139.toField = "set_enabled"
ROUTE139.toNode = "ViewpointTour"

GeoLocation129.children.append(ROUTE139)

Scene20.children.append(GeoLocation129)
Scene20.children.append(x3d.Comment("""===================="""))
ExternProtoDeclare140 = x3d.ExternProtoDeclare()
ExternProtoDeclare140.name = "ViewPositionOrientation"
ExternProtoDeclare140.appinfo = "ViewPositionOrientation provides provides console output of local position and orientation as user navigates"
ExternProtoDeclare140.url = ["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"]
field141 = x3d.field()
field141.name = "enabled"
field141.accessType = "inputOutput"
field141.appinfo = "Whether or not ViewPositionOrientation sends output to console"
field141.type = "SFBool"

ExternProtoDeclare140.field.append(field141)
field142 = x3d.field()
field142.name = "traceEnabled"
field142.accessType = "initializeOnly"
field142.appinfo = "Output internal trace messages for debugging this node, intended for developer use only"
field142.type = "SFBool"

ExternProtoDeclare140.field.append(field142)
field143 = x3d.field()
field143.name = "set_traceEnabled"
field143.accessType = "inputOnly"
field143.appinfo = "Ability to turn output tracing on/off at runtime"
field143.type = "SFBool"

ExternProtoDeclare140.field.append(field143)
field144 = x3d.field()
field144.name = "position_changed"
field144.accessType = "outputOnly"
field144.appinfo = "Output local position"
field144.type = "SFVec3f"

ExternProtoDeclare140.field.append(field144)
field145 = x3d.field()
field145.name = "orientation_changed"
field145.accessType = "outputOnly"
field145.appinfo = "Output local orientation"
field145.type = "SFRotation"

ExternProtoDeclare140.field.append(field145)
field146 = x3d.field()
field146.name = "outputViewpointString"
field146.accessType = "outputOnly"
field146.appinfo = "MFString value of new Viewpoint"
field146.type = "MFString"

ExternProtoDeclare140.field.append(field146)

Scene20.children.append(ExternProtoDeclare140)
ProtoInstance147 = x3d.ProtoInstance(DEF="ExampleViewPositionOrientation")
ProtoInstance147.name = "ViewPositionOrientation"
fieldValue148 = x3d.fieldValue()
fieldValue148.name = "enabled"
fieldValue148.value = "false"

ProtoInstance147.fieldValue.append(fieldValue148)

Scene20.children.append(ProtoInstance147)
Scene20.children.append(x3d.Comment("""===================="""))

X3D0.Scene = Scene20
f = open("../data/CaliforniaCampuses.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/CaliforniaCampuses.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/CaliforniaCampuses.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
