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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='ViewpointGroupPrototype.x3d',name='title'),
    meta(content='ViewpointGroup contains Viewpoint and ViewpointGroup nodes, allowing nested lists and viewpoint scoping in viewpoint lists. This is a developmental example for potential specification improvement. It is needed because (a) currently specified rules for X3D/VRML node binding state that behavior of child Viewpoints beneath Switch/LOD/etc. is undefined, and (b) browser viewpoint list display behavior is undefined.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='29 October 2003',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='this prototype is for development purposes only, do not override native player support for ViewpointGroup',name='warning'),
    meta(content='ViewpointListViewpointGroupProse.html',name='reference'),
    meta(content='ViewpointGroupExample.x3d',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/navigation.html#Viewpoint',name='reference'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Viewpoint',name='reference'),
    meta(content='ViewpointGroup Viewpoint',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/ViewpointGroupPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ViewpointGroupPrototype.x3d'),
    ProtoDeclare(appinfo='warning: developmental prototype for X3D v3.2 node do not override native support!',name='ViewpointGroup',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='[Viewpoint | ViewpointGroup] only',name='children',type='MFNode',
          #  initialized at runtime, default is empty array of Viewpoint/ViewpointGroup nodes. 
          ),
        field(accessType='inputOutput',appinfo='Text description or navigation hint to be displayed for this ViewpointGroup.',name='description',type='SFString'),
        field(accessType='inputOutput',appinfo='Whether this ViewpointGroup description is displayed in current viewpoint list.',name='displayed',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='Position offset from origin of local coordinate system.',name='center',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',appinfo='[0..infinity) Radius in meters of Proximity box within which the ViewpointGroup is usable and displayed on the viewpoint list.',name='radius',type='SFFloat',value=10),
        field(accessType='inputOnly',appinfo='[0..infinity) Radius in meters of Proximity box within which the ViewpointGroup is usable and displayed on the viewpoint list.',name='set_radius',type='SFFloat'),
        field(accessType='inputOutput',appinfo='Whether viewpoint needs to retain (true) or rezero (false) any prior user navigation offsets from defined viewpoint position orientation.',name='retainUserOffsets',type='SFBool',value=True)]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          ProximitySensor(DEF='ProximityZone',size=(20,20,20),
            IS=IS(
              connect=[
              connect(nodeField='center',protoField='center')])),
          Switch(DEF='ViewpointsSwitch',whichChoice=0,
            children=[
            Group(
              IS=IS(
                connect=[
                connect(nodeField='children',protoField='children')]))]),
          Switch(DEF='HoldExposedFields',whichChoice=-1,
            #  WorldInfo not used because title field is accessType initializeOnly 
            children=[
            Anchor(DEF='DescriptionHolder',
              IS=IS(
                connect=[
                connect(nodeField='description',protoField='description')])),
            ProximitySensor(DEF='DisplayedHolder',
              IS=IS(
                connect=[
                connect(nodeField='enabled',protoField='displayed')]))]),
          Script(DEF='UnbindingControlScript',directOutput=True,
            field=[
            field(accessType='inputOnly',name='isActive',type='SFBool'),
            field(accessType='initializeOnly',name='ProximityZone',type='SFNode',
              children=[
              ProximitySensor(USE='ProximityZone')]),
            field(accessType='initializeOnly',appinfo='[0..infinity) Radius in meters of Proximity box within which the ViewpointGroup is usable and displayed on the viewpoint list.',name='radius',type='SFFloat'),
            field(accessType='inputOnly',appinfo='[0..infinity) Radius in meters of Proximity box within which the ViewpointGroup is usable and displayed on the viewpoint list.',name='set_radius',type='SFFloat'),
            field(accessType='initializeOnly',name='viewpointsSwitch',type='SFNode',
              children=[
              Switch(USE='ViewpointsSwitch',whichChoice=-1)]),
            #  use node holders to work around VRML 97 Script exposedField restriction 
            field(accessType='initializeOnly',name='descriptionHolder',type='SFNode',
              children=[
              Anchor(USE='DescriptionHolder')]),
            field(accessType='initializeOnly',name='displayedHolder',type='SFNode',
              children=[
              ProximitySensor(USE='DisplayedHolder')]),
            field(accessType='initializeOnly',name='description',type='SFString'),
            field(accessType='initializeOnly',name='displayed',type='SFBool',value=True),
            field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=False)],
            IS=IS(
              connect=[
              connect(nodeField='radius',protoField='radius'),
              connect(nodeField='set_radius',protoField='set_radius')])),
          ROUTE(fromField='isActive',fromNode='ProximityZone',toField='isActive',toNode='UnbindingControlScript')])])),
    #  ===============Example============== 
    NavigationInfo(type=["FLY","ANY"]),
    Anchor(description='ViewpointGroupExample',parameter=["target=_blank"],url=["ViewpointGroupExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/ViewpointGroupExample.x3d","ViewpointGroupExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/ViewpointGroupExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["ViewpointGroupPrototype","defines a prototype","","Click on this text to see","ViewpointGroupExample scene"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2))))]),
    Viewpoint(description='inside scope: ViewpointGroup',position=(0,0,5)),
    Viewpoint(description='outside scope: ViewpointGroup',position=(0,0,12))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ViewpointGroupPrototype.py")
