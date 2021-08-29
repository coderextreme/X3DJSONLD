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
    meta(content='SphericalMinePrototype.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='26 June 2000',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='Underwater mine prototype SphericalMine. Note level of detail (LOD) transitions when seen at transition ranges.',name='description'),
    meta(content='https://savage.nps.edu/Savage/Weapons/UnderwaterMines/SphericalMinePrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  SphericalMine is a simple notional mine 
    children=[
    ProtoDeclare(appinfo='Spherical floating mine moored to bottom',name='SphericalMine',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Description for each mine contact.',name='description',type='SFString',value='10 m: Spherical Mine'),
        field(accessType='inputOutput',appinfo='Mine color can be used to indicate status (found/unknown/disabled/) tactic etc.',name='color',type='SFColor',value=(.8,.8,.8)),
        field(accessType='inputOutput',appinfo='Location of mine center in local world coordinates.',name='translation',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',appinfo='Scale factor to change spherical mine size default diameter = 1m.',name='scale',type='SFVec3f',value=(1,1,1)),
        field(accessType='initializeOnly',appinfo='Bounding box for collision detection of mine.',name='bboxCenter',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',appinfo='Top and bottom endpoints of line tether that anchors this mine to the bottom.',name='tetherPoints',type='MFVec3f',value=[(0,0,0),(0,-10,0)]),
        field(accessType='outputOnly',appinfo='proximityIsActive can be used to activate information or interaction when the viewer nears the mine.',name='proximityIsActive',type='SFBool'),
        field(accessType='inputOutput',appinfo='proximitySize provides overall box dimensions for proximity; thus (10 10 10) yields approximate radius 5 to 7 meters.',name='proximitySize',type='SFVec3f',value=(10,10,10))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='LOCATOR',
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='translation'),
            connect(nodeField='scale',protoField='scale'),
            connect(nodeField='bboxCenter',protoField='bboxCenter')]),
          children=[
          LOD(range=[100,500,5000],
            #  High resolution 
            children=[
            Group(
              children=[
              Viewpoint(DEF='UW_MINE_VIEWPOINT',
                IS=IS(
                  connect=[
                  connect(nodeField='description',protoField='description')])),
              ProximitySensor(DEF='UW_MINE_PROXIMITY',
                IS=IS(
                  connect=[
                  connect(nodeField='isActive',protoField='proximityIsActive'),
                  connect(nodeField='size',protoField='proximitySize')])),
              Shape(DEF='UW_MINE_SPHERE',
                geometry=Sphere(radius=.5),
                appearance=Appearance(DEF='UW_MINE_APPEARANCE',
                  material=Material(DEF='UW_MINE_MATERIAL',shininess=.5,
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='color')])))),
              Transform(translation=(0,.49,0),
                children=[
                Transform(DEF='SPIKE',center=(0,-.1,0),translation=(0,.1,0),
                  children=[
                  Shape(
                    geometry=Cone(bottom=False,bottomRadius=.05,height=.2),
                    appearance=Appearance(
                      material=Material(diffuseColor=(.8,.8,.8),shininess=.5,specularColor=(.2,.2,.2))))])]),
              Transform(rotation=(0,0,1,3.1416),translation=(0,-.49,0),
                children=[
                Transform(USE='SPIKE')]),
              Transform(rotation=(0,0,1,-1.57079),translation=(.49,0,0),
                children=[
                Transform(USE='SPIKE')]),
              Transform(rotation=(0,0,1,1.57079),translation=(-.49,0,0),
                children=[
                Transform(USE='SPIKE')]),
              Transform(rotation=(1,0,0,1.57079),translation=(0,0,.49),
                children=[
                Transform(USE='SPIKE')]),
              Transform(rotation=(1,0,0,-1.57079),translation=(0,0,-.49),
                children=[
                Transform(USE='SPIKE')]),
              Shape(
                geometry=IndexedLineSet(coordIndex=[0,1,-1],
                  coord=Coordinate(DEF='UW_MINE_TETHER',
                    IS=IS(
                      connect=[
                      connect(nodeField='point',protoField='tetherPoints')]))))]),
            #  Medium resolution 
            Group(
              children=[
              Viewpoint(DEF='UW_MINE_VIEWPOINT_MEDIUM',
                IS=IS(
                  connect=[
                  connect(nodeField='description',protoField='description')])),
              Shape(USE='UW_MINE_SPHERE')]),
            #  Low resolution 
            Shape(
              geometry=Box(size=(12,12,12)),
              appearance=Appearance(USE='UW_MINE_APPEARANCE')),
            #  No resolution 
            WorldInfo(info=["null geometry"])])])])),
    #  Show default geometry, in case this Prototype library is viewed directly as a scene 
    Group(DEF='ShowSphericalMines',
      children=[
      ProtoInstance(DEF='BLUE_SPHERICAL_MINE',name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='10 m: blue SphericalMine default viewpoint'),
        fieldValue(name='color',value=(0,0,.8)),
        fieldValue(name='translation',value=(0,-10,0)),
        fieldValue(name='bboxCenter',value=(1,1,1)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-10.0,0)])]),
      ProtoInstance(DEF='GREEN_SPHERICAL_MINE',name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='10 m: green SphericalMine default viewpoint'),
        fieldValue(name='color',value=(0,.8,0)),
        fieldValue(name='translation',value=(10,-10,0)),
        fieldValue(name='bboxCenter',value=(2,2,2)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-10.0,0)])]),
      Background(groundColor=[(0,.2,.2)],skyColor=[(0,.3,.3)]),
      Viewpoint(description='1 m: one closeup SphericalMine',position=(10,-10,2)),
      Viewpoint(description='10 m: two pointy SphericalMines',position=(5,-10,10)),
      Viewpoint(description='100+ m: two round SphericalMines',position=(5,-10,105)),
      Viewpoint(description='500+ m: two boxy SphericalMines',position=(5,-10,510)),
      Viewpoint(description='5000+ m: two invisible SphericalMines',position=(5,-10,5010))]),
    #  Proximity activation triggers switch in NavigationInfo mode between EXAMINE and WALK - pretty cool! 
    NavigationInfo(DEF='NAVIGATION',speed=20,type=[WALK","EXAMINE","'ANY']),
    Script(DEF='NAVIGATION_MODE',
      field=[
      field(accessType='inputOnly',name='inProximity',type='SFBool'),
      field(accessType='outputOnly',name='type',type='MFString')]),
    ROUTE(fromField='proximityIsActive',fromNode='BLUE_SPHERICAL_MINE',toField='inProximity',toNode='NAVIGATION_MODE'),
    ROUTE(fromField='proximityIsActive',fromNode='GREEN_SPHERICAL_MINE',toField='inProximity',toNode='NAVIGATION_MODE'),
    ROUTE(fromField='type',fromNode='NAVIGATION_MODE',toField='set_type',toNode='NAVIGATION')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SphericalMinePrototype.py")
