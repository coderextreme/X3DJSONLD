print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta7.content = "Mon, 09 Feb 2026 12:22:59 GMT"

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
meta17.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta17)

X3D0.head = head1
Scene18 = x3d.Scene()
ExternProtoDeclare19 = x3d.ExternProtoDeclare()
ExternProtoDeclare19.name = "CrossHair"
ExternProtoDeclare19.appinfo = "CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point"
ExternProtoDeclare19.url = ["../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"]
field20 = x3d.field()
field20.accessType = "initializeOnly"
field20.type = "SFBool"
field20.name = "enabled"
field20.appinfo = "whether CrossHair prototype is enabled or not"

ExternProtoDeclare19.field.append(field20)
field21 = x3d.field()
field21.accessType = "inputOnly"
field21.type = "SFBool"
field21.name = "set_enabled"
field21.appinfo = "control whether enabled/disabled"

ExternProtoDeclare19.field.append(field21)
field22 = x3d.field()
field22.accessType = "inputOutput"
field22.type = "SFColor"
field22.name = "markerColor"
field22.appinfo = "color of CrossHair marker"

ExternProtoDeclare19.field.append(field22)
field23 = x3d.field()
field23.accessType = "inputOutput"
field23.type = "SFVec3f"
field23.name = "scale"
field23.appinfo = "size of CrossHair in meters"

ExternProtoDeclare19.field.append(field23)
field24 = x3d.field()
field24.accessType = "inputOutput"
field24.type = "SFVec3f"
field24.name = "positionOffsetFromCamera"
field24.appinfo = "distance in front of HUD viewpoint"

ExternProtoDeclare19.field.append(field24)

Scene18.children.append(ExternProtoDeclare19)
ExternProtoDeclare25 = x3d.ExternProtoDeclare()
ExternProtoDeclare25.name = "HeadsUpDisplay"
ExternProtoDeclare25.appinfo = "Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location"
ExternProtoDeclare25.url = ["../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"]
field26 = x3d.field()
field26.accessType = "inputOutput"
field26.type = "MFNode"
field26.name = "children"
field26.appinfo = "X3D content positioned at HUD offset"

ExternProtoDeclare25.field.append(field26)
field27 = x3d.field()
field27.accessType = "inputOutput"
field27.type = "SFVec3f"
field27.name = "screenOffset"
field27.appinfo = "offset position for HUD relative to current view location, default 0 0 -5"

ExternProtoDeclare25.field.append(field27)
field28 = x3d.field()
field28.accessType = "outputOnly"
field28.type = "SFVec3f"
field28.name = "position_changed"
field28.appinfo = "HUD position update (in world coordinates) relative to original location"

ExternProtoDeclare25.field.append(field28)
field29 = x3d.field()
field29.accessType = "outputOnly"
field29.type = "SFRotation"
field29.name = "orientation_changed"
field29.appinfo = "HUD orientation update relative to original location"

ExternProtoDeclare25.field.append(field29)

Scene18.children.append(ExternProtoDeclare25)
ExternProtoDeclare30 = x3d.ExternProtoDeclare()
ExternProtoDeclare30.name = "ViewpointSequencer"
ExternProtoDeclare30.appinfo = "Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene"
ExternProtoDeclare30.url = ["../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer"]
field31 = x3d.field()
field31.accessType = "initializeOnly"
field31.type = "MFNode"
field31.name = "viewpoints"
field31.appinfo = "Viewpoint USE nodes that are sequentially bound"

ExternProtoDeclare30.field.append(field31)
field32 = x3d.field()
field32.accessType = "inputOutput"
field32.type = "SFTime"
field32.name = "interval"
field32.appinfo = "number of seconds between viewpoint shifts"

ExternProtoDeclare30.field.append(field32)
field33 = x3d.field()
field33.accessType = "inputOutput"
field33.type = "SFBool"
field33.name = "enabled"
field33.appinfo = "whether ViewpointSequencer is enabled or not"

ExternProtoDeclare30.field.append(field33)
field34 = x3d.field()
field34.accessType = "inputOnly"
field34.type = "SFBool"
field34.name = "set_enabled"
field34.appinfo = "whether ViewpointSequencer is enabled or not"

ExternProtoDeclare30.field.append(field34)
field35 = x3d.field()
field35.accessType = "inputOnly"
field35.type = "SFBool"
field35.name = "previous"
field35.appinfo = "bind previous Viewpoint in list"

ExternProtoDeclare30.field.append(field35)
field36 = x3d.field()
field36.accessType = "inputOnly"
field36.type = "SFBool"
field36.name = "next"
field36.appinfo = "bind next Viewpoint in list"

ExternProtoDeclare30.field.append(field36)
field37 = x3d.field()
field37.accessType = "inputOutput"
field37.type = "MFString"
field37.name = "toggleMessage"
field37.appinfo = "Select message to toggle ViewpointSequencer"

ExternProtoDeclare30.field.append(field37)
field38 = x3d.field()
field38.accessType = "initializeOnly"
field38.type = "SFFloat"
field38.name = "toggleMessageFontSize"
field38.appinfo = "Color for toggleMessage text"

ExternProtoDeclare30.field.append(field38)
field39 = x3d.field()
field39.accessType = "inputOutput"
field39.type = "SFColor"
field39.name = "toggleMessageColor"
field39.appinfo = "Color for toggleMessage text"

ExternProtoDeclare30.field.append(field39)
field40 = x3d.field()
field40.accessType = "inputOutput"
field40.type = "SFBool"
field40.name = "traceEnabled"
field40.appinfo = "enable console output"

ExternProtoDeclare30.field.append(field40)

Scene18.children.append(ExternProtoDeclare30)
ExternProtoDeclare41 = x3d.ExternProtoDeclare()
ExternProtoDeclare41.name = "ViewPositionOrientation"
ExternProtoDeclare41.appinfo = "ViewPositionOrientation provides provides console output of local position and orientation as user navigates"
ExternProtoDeclare41.url = ["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"]
field42 = x3d.field()
field42.accessType = "inputOutput"
field42.type = "SFBool"
field42.name = "enabled"
field42.appinfo = "Whether or not ViewPositionOrientation sends output to console"

ExternProtoDeclare41.field.append(field42)
field43 = x3d.field()
field43.accessType = "initializeOnly"
field43.type = "SFBool"
field43.name = "traceEnabled"
field43.appinfo = "Output internal trace messages for debugging this node, intended for developer use only"

ExternProtoDeclare41.field.append(field43)
field44 = x3d.field()
field44.accessType = "inputOnly"
field44.type = "SFBool"
field44.name = "set_traceEnabled"
field44.appinfo = "Ability to turn output tracing on/off at runtime"

ExternProtoDeclare41.field.append(field44)
field45 = x3d.field()
field45.accessType = "outputOnly"
field45.type = "SFVec3f"
field45.name = "position_changed"
field45.appinfo = "Output local position"

ExternProtoDeclare41.field.append(field45)
field46 = x3d.field()
field46.accessType = "outputOnly"
field46.type = "SFRotation"
field46.name = "orientation_changed"
field46.appinfo = "Output local orientation"

ExternProtoDeclare41.field.append(field46)
field47 = x3d.field()
field47.accessType = "outputOnly"
field47.type = "MFString"
field47.name = "outputViewpointString"
field47.appinfo = "MFString value of new Viewpoint"

ExternProtoDeclare41.field.append(field47)

Scene18.children.append(ExternProtoDeclare41)
WorldInfo48 = x3d.WorldInfo()
WorldInfo48.title = "CaliforniaCampuses.x3d"

Scene18.children.append(WorldInfo48)
Switch49 = x3d.Switch(DEF="SwitchGlobes")
Switch49.whichChoice = 0
Inline50 = x3d.Inline()
Inline50.url = ["http://x3d-earth.nps.edu/osmdemo.x3d"]

Switch49.children.append(Inline50)

Scene18.children.append(Switch49)
NavigationInfo51 = x3d.NavigationInfo()
NavigationInfo51.transitionType = ["ANIMATE"]

Scene18.children.append(NavigationInfo51)
Group52 = x3d.Group(DEF="PlacemarkGroup")
GeoViewpoint53 = x3d.GeoViewpoint(DEF="View01")
GeoViewpoint53.description = "Naval Postgraduate School"
GeoViewpoint53.position = [36.595599,-121.877148,250000]
GeoViewpoint53.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint53)
GeoViewpoint54 = x3d.GeoViewpoint(DEF="View02")
GeoViewpoint54.description = "University of California Davis"
GeoViewpoint54.position = [38.5365061515798,-121.748962861683,250000]
GeoViewpoint54.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint54)
GeoViewpoint55 = x3d.GeoViewpoint(DEF="View03")
GeoViewpoint55.description = "University of California Berkeley"
GeoViewpoint55.position = [37.8696343451233,-122.259387312736,250000]
GeoViewpoint55.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint55)
GeoViewpoint56 = x3d.GeoViewpoint(DEF="View04")
GeoViewpoint56.description = "University of California San Francisco"
GeoViewpoint56.position = [37.7634064718839,-122.458247537772,250000]
GeoViewpoint56.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint56)
GeoViewpoint57 = x3d.GeoViewpoint(DEF="View05")
GeoViewpoint57.description = "University of California Santa Cruz"
GeoViewpoint57.position = [36.9962844304604,-122.05343254738,250000]
GeoViewpoint57.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint57)
GeoViewpoint58 = x3d.GeoViewpoint(DEF="View06")
GeoViewpoint58.description = "University of California Merced"
GeoViewpoint58.position = [37.365508575977,-120.425259705914,250000]
GeoViewpoint58.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint58)
GeoViewpoint59 = x3d.GeoViewpoint(DEF="View07")
GeoViewpoint59.description = "University of California Santa Barbara"
GeoViewpoint59.position = [34.4112445096152,-119.847994005391,250000]
GeoViewpoint59.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint59)
GeoViewpoint60 = x3d.GeoViewpoint(DEF="View08")
GeoViewpoint60.description = "University of California Los Angeles"
GeoViewpoint60.position = [34.0722447439226,-118.440847222564,250000]
GeoViewpoint60.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint60)
GeoViewpoint61 = x3d.GeoViewpoint(DEF="View09")
GeoViewpoint61.description = "University of California Irvine"
GeoViewpoint61.position = [33.6462328367592,-117.842706413908,250000]
GeoViewpoint61.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint61)
GeoViewpoint62 = x3d.GeoViewpoint(DEF="View10")
GeoViewpoint62.description = "University of California Riverside"
GeoViewpoint62.position = [33.9735056706672,-117.328164956984,250000]
GeoViewpoint62.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint62)
GeoViewpoint63 = x3d.GeoViewpoint(DEF="View11")
GeoViewpoint63.description = "University of California San Diego"
GeoViewpoint63.position = [32.8761213660751,-117.236729824026,250000]
GeoViewpoint63.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint63)
GeoViewpoint64 = x3d.GeoViewpoint(DEF="View12")
GeoViewpoint64.description = "Humboldt State University"
GeoViewpoint64.position = [40.8763023562345,-124.078578921727,250000]
GeoViewpoint64.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint64)
GeoViewpoint65 = x3d.GeoViewpoint(DEF="View13")
GeoViewpoint65.description = "California State University, Chico"
GeoViewpoint65.position = [39.7303152772439,-121.845372274522,250000]
GeoViewpoint65.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint65)
GeoViewpoint66 = x3d.GeoViewpoint(DEF="View14")
GeoViewpoint66.description = "California State University Sacramento"
GeoViewpoint66.position = [38.5626517618963,-121.424463652056,250000]
GeoViewpoint66.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint66)
GeoViewpoint67 = x3d.GeoViewpoint(DEF="View15")
GeoViewpoint67.description = "Sonoma State University"
GeoViewpoint67.position = [38.3392292979361,-122.674433353003,250000]
GeoViewpoint67.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint67)
GeoViewpoint68 = x3d.GeoViewpoint(DEF="View16")
GeoViewpoint68.description = "California Maritime Academy"
GeoViewpoint68.position = [38.0690706505948,-122.230914713522,250000]
GeoViewpoint68.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint68)
GeoViewpoint69 = x3d.GeoViewpoint(DEF="View17")
GeoViewpoint69.description = "San Francisco State University"
GeoViewpoint69.position = [37.722876,-122.478151219067,250000]
GeoViewpoint69.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint69)
GeoViewpoint70 = x3d.GeoViewpoint(DEF="View18")
GeoViewpoint70.description = "California State University, East Bay"
GeoViewpoint70.position = [37.6570791413991,-122.056919065976,250000]
GeoViewpoint70.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint70)
GeoViewpoint71 = x3d.GeoViewpoint(DEF="View19")
GeoViewpoint71.description = "California State University Stanislaus"
GeoViewpoint71.position = [37.525524780057,-120.856350856061,250000]
GeoViewpoint71.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint71)
GeoViewpoint72 = x3d.GeoViewpoint(DEF="View20")
GeoViewpoint72.description = "San Jose State University"
GeoViewpoint72.position = [37.335809405271,-121.881534375578,250000]
GeoViewpoint72.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint72)
GeoViewpoint73 = x3d.GeoViewpoint(DEF="View21")
GeoViewpoint73.description = "California State University, Monterey Bay"
GeoViewpoint73.position = [36.6538071781493,-121.798446527671,250000]
GeoViewpoint73.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint73)
GeoViewpoint74 = x3d.GeoViewpoint(DEF="View22")
GeoViewpoint74.description = "Fresno State University"
GeoViewpoint74.position = [36.812166,-119.745155200585,250000]
GeoViewpoint74.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint74)
GeoViewpoint75 = x3d.GeoViewpoint(DEF="View23")
GeoViewpoint75.description = "California State University, Bakersfield"
GeoViewpoint75.position = [35.350804,-119.104322612803,250000]
GeoViewpoint75.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint75)
GeoViewpoint76 = x3d.GeoViewpoint(DEF="View24")
GeoViewpoint76.description = "California Polytechnic State University"
GeoViewpoint76.position = [35.3011569259917,-120.659576179635,250000]
GeoViewpoint76.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint76)
GeoViewpoint77 = x3d.GeoViewpoint(DEF="View25")
GeoViewpoint77.description = "California State University, Channel Islands"
GeoViewpoint77.position = [34.1624126428852,-119.042526484129,250000]
GeoViewpoint77.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint77)
GeoViewpoint78 = x3d.GeoViewpoint(DEF="View26")
GeoViewpoint78.description = "California State University, Northridge"
GeoViewpoint78.position = [34.2395926526385,-118.52842724009,250000]
GeoViewpoint78.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint78)
GeoViewpoint79 = x3d.GeoViewpoint(DEF="View27")
GeoViewpoint79.description = "California State University, Los Angeles"
GeoViewpoint79.position = [34.0664599662626,-118.168205090256,250000]
GeoViewpoint79.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint79)
GeoViewpoint80 = x3d.GeoViewpoint(DEF="View28")
GeoViewpoint80.description = "California State Polytechnic University, Pomona"
GeoViewpoint80.position = [34.0572715000031,-117.821532023481,250000]
GeoViewpoint80.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint80)
GeoViewpoint81 = x3d.GeoViewpoint(DEF="View29")
GeoViewpoint81.description = "California State University, San Bernardino"
GeoViewpoint81.position = [34.181801164321,-117.324367666472,250000]
GeoViewpoint81.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint81)
GeoViewpoint82 = x3d.GeoViewpoint(DEF="View30")
GeoViewpoint82.description = "California State University, Fullerton"
GeoViewpoint82.position = [33.882522,-117.886836786902,250000]
GeoViewpoint82.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint82)
GeoViewpoint83 = x3d.GeoViewpoint(DEF="View31")
GeoViewpoint83.description = "California State University Dominguez Hills"
GeoViewpoint83.position = [33.864633968571,-118.255359627206,250000]
GeoViewpoint83.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint83)
GeoViewpoint84 = x3d.GeoViewpoint(DEF="View32")
GeoViewpoint84.description = "California State University, Long Beach"
GeoViewpoint84.position = [33.7819669647082,-118.112678253688,250000]
GeoViewpoint84.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint84)
GeoViewpoint85 = x3d.GeoViewpoint(DEF="View33")
GeoViewpoint85.description = "California State University, San Marcos"
GeoViewpoint85.position = [33.1283761926517,-117.1600194071,250000]
GeoViewpoint85.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint85)
GeoViewpoint86 = x3d.GeoViewpoint(DEF="View34")
GeoViewpoint86.description = "San Diego State University"
GeoViewpoint86.position = [32.7759312658639,-117.072287624255,250000]
GeoViewpoint86.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint86)
GeoViewpoint87 = x3d.GeoViewpoint(DEF="View35")
GeoViewpoint87.description = "CENIC"
GeoViewpoint87.position = [33.879947,-118.027903,250000]
GeoViewpoint87.orientation = [1,0,0,-1.57]

Group52.children.append(GeoViewpoint87)

Scene18.children.append(Group52)
ProtoInstance88 = x3d.ProtoInstance(DEF="CrossHairInstance")
ProtoInstance88.name = "CrossHair"
fieldValue89 = x3d.fieldValue()
fieldValue89.name = "enabled"
fieldValue89.value = "true"

ProtoInstance88.fieldValue.append(fieldValue89)
fieldValue90 = x3d.fieldValue()
fieldValue90.name = "markerColor"
fieldValue90.value = "0.1 0.8 0.1"

ProtoInstance88.fieldValue.append(fieldValue90)
fieldValue91 = x3d.fieldValue()
fieldValue91.name = "scale"
fieldValue91.value = "0.5 0.5 0.5"

ProtoInstance88.fieldValue.append(fieldValue91)
fieldValue92 = x3d.fieldValue()
fieldValue92.name = "positionOffsetFromCamera"
fieldValue92.value = "0 0 -5"

ProtoInstance88.fieldValue.append(fieldValue92)

Scene18.children.append(ProtoInstance88)
ProtoInstance93 = x3d.ProtoInstance(DEF="ViewpointTour")
ProtoInstance93.name = "ViewpointSequencer"
fieldValue94 = x3d.fieldValue()
fieldValue94.name = "viewpoints"
GeoViewpoint95 = x3d.GeoViewpoint(USE="View01")

fieldValue94.children.append(GeoViewpoint95)
GeoViewpoint96 = x3d.GeoViewpoint(USE="View02")

fieldValue94.children.append(GeoViewpoint96)
GeoViewpoint97 = x3d.GeoViewpoint(USE="View03")

fieldValue94.children.append(GeoViewpoint97)
GeoViewpoint98 = x3d.GeoViewpoint(USE="View04")

fieldValue94.children.append(GeoViewpoint98)
GeoViewpoint99 = x3d.GeoViewpoint(USE="View05")

fieldValue94.children.append(GeoViewpoint99)
GeoViewpoint100 = x3d.GeoViewpoint(USE="View06")

fieldValue94.children.append(GeoViewpoint100)
GeoViewpoint101 = x3d.GeoViewpoint(USE="View07")

fieldValue94.children.append(GeoViewpoint101)
GeoViewpoint102 = x3d.GeoViewpoint(USE="View08")

fieldValue94.children.append(GeoViewpoint102)
GeoViewpoint103 = x3d.GeoViewpoint(USE="View09")

fieldValue94.children.append(GeoViewpoint103)
GeoViewpoint104 = x3d.GeoViewpoint(USE="View10")

fieldValue94.children.append(GeoViewpoint104)
GeoViewpoint105 = x3d.GeoViewpoint(USE="View11")

fieldValue94.children.append(GeoViewpoint105)
GeoViewpoint106 = x3d.GeoViewpoint(USE="View12")

fieldValue94.children.append(GeoViewpoint106)
GeoViewpoint107 = x3d.GeoViewpoint(USE="View13")

fieldValue94.children.append(GeoViewpoint107)
GeoViewpoint108 = x3d.GeoViewpoint(USE="View14")

fieldValue94.children.append(GeoViewpoint108)
GeoViewpoint109 = x3d.GeoViewpoint(USE="View15")

fieldValue94.children.append(GeoViewpoint109)
GeoViewpoint110 = x3d.GeoViewpoint(USE="View16")

fieldValue94.children.append(GeoViewpoint110)
GeoViewpoint111 = x3d.GeoViewpoint(USE="View17")

fieldValue94.children.append(GeoViewpoint111)
GeoViewpoint112 = x3d.GeoViewpoint(USE="View18")

fieldValue94.children.append(GeoViewpoint112)
GeoViewpoint113 = x3d.GeoViewpoint(USE="View19")

fieldValue94.children.append(GeoViewpoint113)
GeoViewpoint114 = x3d.GeoViewpoint(USE="View20")

fieldValue94.children.append(GeoViewpoint114)
GeoViewpoint115 = x3d.GeoViewpoint(USE="View21")

fieldValue94.children.append(GeoViewpoint115)
GeoViewpoint116 = x3d.GeoViewpoint(USE="View22")

fieldValue94.children.append(GeoViewpoint116)
GeoViewpoint117 = x3d.GeoViewpoint(USE="View23")

fieldValue94.children.append(GeoViewpoint117)
GeoViewpoint118 = x3d.GeoViewpoint(USE="View24")

fieldValue94.children.append(GeoViewpoint118)
GeoViewpoint119 = x3d.GeoViewpoint(USE="View25")

fieldValue94.children.append(GeoViewpoint119)
GeoViewpoint120 = x3d.GeoViewpoint(USE="View26")

fieldValue94.children.append(GeoViewpoint120)
GeoViewpoint121 = x3d.GeoViewpoint(USE="View27")

fieldValue94.children.append(GeoViewpoint121)
GeoViewpoint122 = x3d.GeoViewpoint(USE="View28")

fieldValue94.children.append(GeoViewpoint122)
GeoViewpoint123 = x3d.GeoViewpoint(USE="View29")

fieldValue94.children.append(GeoViewpoint123)
GeoViewpoint124 = x3d.GeoViewpoint(USE="View30")

fieldValue94.children.append(GeoViewpoint124)
GeoViewpoint125 = x3d.GeoViewpoint(USE="View31")

fieldValue94.children.append(GeoViewpoint125)
GeoViewpoint126 = x3d.GeoViewpoint(USE="View32")

fieldValue94.children.append(GeoViewpoint126)
GeoViewpoint127 = x3d.GeoViewpoint(USE="View33")

fieldValue94.children.append(GeoViewpoint127)
GeoViewpoint128 = x3d.GeoViewpoint(USE="View34")

fieldValue94.children.append(GeoViewpoint128)
GeoViewpoint129 = x3d.GeoViewpoint(USE="View35")

fieldValue94.children.append(GeoViewpoint129)
Viewpoint130 = x3d.Viewpoint(DEF="View4")
Viewpoint130.description = "View four (-X axis)"
Viewpoint130.position = [-10,0,0]
Viewpoint130.orientation = [0,1,0,-1.57]

fieldValue94.children.append(Viewpoint130)

ProtoInstance93.fieldValue.append(fieldValue94)
fieldValue131 = x3d.fieldValue()
fieldValue131.name = "interval"
fieldValue131.value = "30"

ProtoInstance93.fieldValue.append(fieldValue131)
fieldValue132 = x3d.fieldValue()
fieldValue132.name = "enabled"
fieldValue132.value = "true"

ProtoInstance93.fieldValue.append(fieldValue132)
fieldValue133 = x3d.fieldValue()
fieldValue133.name = "toggleMessage"
fieldValue133.value = "\"ViewpointSequencer tour\""

ProtoInstance93.fieldValue.append(fieldValue133)

Scene18.children.append(ProtoInstance93)
GeoLocation134 = x3d.GeoLocation()
GeoLocation134.geoCoords = [36.595599,-121.877148,624990]
Billboard135 = x3d.Billboard()
Billboard135.axisOfRotation = [0,0,0]
Shape136 = x3d.Shape()
Appearance137 = x3d.Appearance()
Material138 = x3d.Material()
Material138.ambientIntensity = 0.25
Material138.diffuseColor = [0.795918,0.505869,0.093315]
Material138.specularColor = [0.923469,0.428866,0.006369]
Material138.shininess = 0.39

Appearance137.material = Material138

Shape136.appearance = Appearance137
Text139 = x3d.Text()
Text139.string = ["ViewpointSequencer tour"]
FontStyle140 = x3d.FontStyle()
FontStyle140.justify = ["MIDDLE","MIDDLE"]

Text139.fontStyle = FontStyle140

Shape136.geometry = Text139

Billboard135.children.append(Shape136)

GeoLocation134.children.append(Billboard135)
TouchSensor141 = x3d.TouchSensor(DEF="TourTouch")
TouchSensor141.description = "Touch text to turn tour on/off"

GeoLocation134.children.append(TouchSensor141)
BooleanToggle142 = x3d.BooleanToggle(DEF="TourToggle")

GeoLocation134.children.append(BooleanToggle142)

Scene18.children.append(GeoLocation134)
ProtoInstance143 = x3d.ProtoInstance(DEF="ExampleViewPositionOrientation")
ProtoInstance143.name = "ViewPositionOrientation"
fieldValue144 = x3d.fieldValue()
fieldValue144.name = "enabled"
fieldValue144.value = "false"

ProtoInstance143.fieldValue.append(fieldValue144)

Scene18.children.append(ProtoInstance143)
ROUTE145 = x3d.ROUTE()
ROUTE145.fromNode = "TourTouch"
ROUTE145.fromField = "isActive"
ROUTE145.toNode = "TourToggle"
ROUTE145.toField = "set_boolean"

Scene18.children.append(ROUTE145)
ROUTE146 = x3d.ROUTE()
ROUTE146.fromNode = "TourToggle"
ROUTE146.fromField = "toggle_changed"
ROUTE146.toNode = "ViewpointTour"
ROUTE146.toField = "set_enabled"

Scene18.children.append(ROUTE146)

X3D0.Scene = Scene18
f = open("../data/CaliforniaCampuses.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/CaliforniaCampuses.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/CaliforniaCampuses.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
