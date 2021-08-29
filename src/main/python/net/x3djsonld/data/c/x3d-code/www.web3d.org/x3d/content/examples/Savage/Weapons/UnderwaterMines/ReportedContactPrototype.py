###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='ReportedContactPrototype.x3d',name='title'),
    meta(content='Example instance of prototype for a reported mine-like contact.',name='description'),
    meta(content='Don Brutzman, Jeff Weekley, Frederic Roussille and Jane Wu',name='creator'),
    meta(content='15 October 2001',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='/ads/src/mil/navy/nps/ads/x3dArchive/DataArchiver.java',name='reference'),
    meta(content='/ads/doc/mil/navy/nps/ads/x3dArchive/DataArchiver.html',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Weapons/UnderwaterMines/ReportedContactPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='PDM-1 underwater mine',name='Pdm1BottomMine',url=["Pdm1BottomMinePrototype.x3d#Pdm1BottomMine","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/Pdm1BottomMinePrototype.x3d#Pdm1BottomMine","Pdm1BottomMinePrototype.wrl#Pdm1BottomMine","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/Pdm1BottomMinePrototype.wrl#Pdm1BottomMine"],
      field=[
      field(accessType='initializeOnly',appinfo='customize to match each instance',name='viewpointDescription',type='SFString'),
      field(accessType='inputOutput',appinfo='useful for classification',name='mineColor',type='SFColor')]),
    ExternProtoDeclare(appinfo='Manta underwater mine',name='MantaMine',url=["MantaMinePrototype.x3d#MantaMine","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/MantaMinePrototype.x3d#MantaMine","MantaMinePrototype.wrl#MantaMine","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/MantaMinePrototype.wrl#MantaMine"],
      field=[
      field(accessType='inputOutput',appinfo='useful for visual classification',name='MineColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='describe each instance',name='viewpointDescription',type='SFString')]),
    ExternProtoDeclare(appinfo='Spherical floating mine moored to bottom',name='SphericalMine',url=["SphericalMinePrototype.x3d#SphericalMine","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/SphericalMinePrototype.x3d#SphericalMine","SphericalMinePrototype.wrl#SphericalMine","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/SphericalMinePrototype.wrl#SphericalMine"],
      field=[
      field(accessType='initializeOnly',appinfo='Description for each mine contact.',name='description',type='SFString'),
      field(accessType='inputOutput',appinfo='Mine color can be used to indicate status (found/unknown/disabled/) tactic etc.',name='color',type='SFColor'),
      field(accessType='inputOutput',appinfo='Location of mine center in local world coordinates.',name='translation',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='Scale factor to change spherical mine size default diameter = 1m.',name='scale',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='Bounding box for collision detection of mine.',name='bboxCenter',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='Top and bottom endpoints of line tether that anchors this mine to the bottom.',name='tetherPoints',type='MFVec3f'),
      field(accessType='outputOnly',appinfo='proximityIsActive can be used to activate information or interaction when the viewer nears the mine.',name='proximityIsActive',type='SFBool'),
      field(accessType='inputOutput',appinfo='proximitySize provides overall box dimensions for proximity; thus (10 10 10) yields approximate radius 5 to 7 meters.',name='proximitySize',type='SFVec3f')]),
    ProtoDeclare(appinfo='Provide icon and contact information for a reported contact. Position ProtoInstances using the depth and location where found.',name='ReportedContact',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='name',type='MFString'),
        field(accessType='initializeOnly',name='aboveViewpointLabel',type='SFString',value='Reported Contact (100m above)'),
        field(accessType='initializeOnly',name='closeViewpointLabel',type='SFString',value='Reported Contact (10m closeup)'),
        field(accessType='inputOutput',name='description',type='MFString'),
        field(accessType='inputOutput',appinfo='Latitude and longitude (or local coordinates) for display purposes.',name='reportedPosition',type='MFString'),
        field(accessType='initializeOnly',name='classificationCode',type='SFInt32',value=-1),
        field(accessType='inputOutput',appinfo='"provide filename and url of contact image as separate quoted strings"',name='imageUrl',type='MFString'),
        field(accessType='inputOutput',appinfo='Aspect-ratio x-y scale of image icon (keep z=1)',name='imageScale',type='SFVec3f',value=(1.00,1.00,1)),
        field(accessType='inputOutput',appinfo='Relative position of image icon',name='imageOffset',type='SFVec3f',value=(0,2.5,0)),
        field(accessType='inputOutput',name='textColor',type='SFColor',value=(0.4,0.4,0)),
        field(accessType='inputOutput',appinfo='Relative position of image icon',name='textOffset',type='SFVec3f',value=(0,0,0))]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Viewpoint(DEF='SeenFromAboveViewpoint',description='100m above contact (overridden by field viewpointLabel)',orientation=(1,0,0,-1.57),position=(0,100,0),
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='aboveViewpointLabel')])),
          Viewpoint(DEF='ContactCloseupViewpoint',description='10m next to contact (overridden by closeViewpointLabel)',
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='closeViewpointLabel')])),
          LOD(range=[150,10000],
            #  close range 
            children=[
            Group(
              children=[
              Transform(DEF='TextOffset',
                IS=IS(
                  connect=[
                  connect(nodeField='translation',protoField='textOffset')]),
                children=[
                Billboard(
                  children=[
                  Transform(translation=(0,-0.25,0),
                    children=[
                    Shape(
                      geometry=Text(DEF='PositionText',
                        IS=IS(
                          connect=[
                          connect(nodeField='string',protoField='reportedPosition')]),
                        fontStyle=FontStyle(DEF='SmallFont',justify=["MIDDLE","MIDDLE"],size=0.75)),
                      appearance=Appearance(DEF='IconAppearance',
                        material=Material(DEF='IconMaterial',
                          IS=IS(
                            connect=[
                            connect(nodeField='diffuseColor',protoField='textColor')]))))]),
                  Transform(translation=(0,-1.5,0),
                    children=[
                    Shape(
                      geometry=Text(DEF='DescriptionText',
                        IS=IS(
                          connect=[
                          connect(nodeField='string',protoField='description')]),
                        fontStyle=FontStyle(DEF='SmallerFont',justify=["MIDDLE","MIDDLE"],size=0.6)),
                      appearance=Appearance(USE='IconAppearance'))])])]),
              Transform(DEF='ImageOffset',
                IS=IS(
                  connect=[
                  connect(nodeField='translation',protoField='imageOffset')]),
                children=[
                Billboard(axisOfRotation=(0,0,0),
                  children=[
                  Anchor(DEF='BillBoardAnchor',description='click image to popup image viewer',parameter=["target=_blank"],
                    IS=IS(
                      connect=[
                      connect(nodeField='url',protoField='imageUrl')]),
                    children=[
                    Transform(DEF='ImageFit',
                      IS=IS(
                        connect=[
                        connect(nodeField='scale',protoField='imageScale')]),
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(USE='IconMaterial'),
                          texture=ImageTexture(DEF='ContactImage',
                            IS=IS(
                              connect=[
                              connect(nodeField='url',protoField='imageUrl')]))),
                        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,0,-1],
                          coord=Coordinate(DEF='TwoByTwoSquare',point=[(-1,-1,0),(1,-1,0),(1,1,0),(-1,1,0)])))])]),
                  #  Unfortunately the anchor link connects to the viewpoint DEF name, which can't be overridden at runtime. This means that multiple use of the prototype will not resolve properly. 
                  Anchor(DEF='ViewpointAnchor',description='click text for Contact Closeup Viewpoint',url=["#ContactCloseupViewpoint"],
                    #  TODO Add children nodes here 
                    ),
                  Group(
                    children=[
                    Transform(translation=(0,-2,0),
                      children=[
                      Shape(
                        geometry=Text(DEF='NameText',
                          IS=IS(
                            connect=[
                            connect(nodeField='string',protoField='name')]),
                          fontStyle=FontStyle(DEF='LargeFont',justify=["MIDDLE","MIDDLE"])),
                        appearance=Appearance(USE='IconAppearance'))]),
                    TouchSensor(DEF='CloseUpTouchSensor',description='bind closeup Viewpoint')]),
                  Script(DEF='BindViewpointFilter',
                    field=[
                    field(accessType='inputOnly',name='touched',type='SFBool'),
                    field(accessType='outputOnly',name='activate',type='SFBool')]),
                  ROUTE(fromField='isActive',fromNode='CloseUpTouchSensor',toField='touched',toNode='BindViewpointFilter'),
                  ROUTE(fromField='activate',fromNode='BindViewpointFilter',toField='set_bind',toNode='ContactCloseupViewpoint')])]),
              Transform(translation=(0,-3,0),
                children=[
                Switch(DEF='MineModelSwitch',whichChoice=-1,
                  IS=IS(
                    connect=[
                    connect(nodeField='whichChoice',protoField='classificationCode')]),
                  #  Mine code enumerations appear in ADS.src.mil.navy.nps.ads.x3dArchive.DataArchiver.java 
                  children=[
                  Shape(DEF='UnknownContact',
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.3,0.8,0))),
                    geometry=Box(size=(1,1,1))),
                  ProtoInstance(name='Pdm1BottomMine'),
                  ProtoInstance(name='MantaMine',
                    fieldValue=[
                    fieldValue(name='viewpointDescription',value='Manta mine 10m')]),
                  Inline(DEF='RockanContact',url=["Rockan.x3d","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/Rockan.x3d","Rockan.wrl","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/Rockan.wrl"]),
                  ProtoInstance(name='SphericalMine',
                    fieldValue=[
                    fieldValue(name='description',value='Spherical Mine'),
                    fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
                  Inline(DEF='SonarDeflectorDecoyBox',url=["SonarReflectorDecoyBox.x3d","../../Weapons/UnderwaterMines/SonarReflectorDecoyBox.x3d","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/SonarReflectorDecoyBox.x3d","../../Weapons/UnderwaterMines/SonarReflectorDecoyBox.wrl","SonarReflectorDecoyBox.wrl","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/SonarReflectorDecoyBox.wrl"])])])]),
            #  intermediate range 
            Transform(USE='ImageOffset'),
            #  far range: might place a self-scaling icon billboard here for long-distance map-like appearance 
            WorldInfo(info=["null node"])])])])),
    #  ==================== 
    #  Example scene starts here, in case this prototype is examined. 
    Anchor(description='ReportedContactExample',parameter=["target=_blank"],url=["ReportedContactExample.x3d","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/ReportedContactExample.x3d","ReportedContactExample.wrl","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/ReportedContactExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["ReportedContactPrototype","is a prototype definition file","","Click this text to see","ReportedContactExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(0.6,0.8,0.4))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ReportedContactPrototype.py")
