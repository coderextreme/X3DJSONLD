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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    component(level=1,name='DIS'),
    meta(content='OpenOceanOpArea.x3d',name='title'),
    meta(content='Operations area top-level scene for open ocean, used by the AUV Workbench to build scenarios using unmanned vehicles.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='25 August 2009',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='more viewpoints NSEW, also axes',name='TODO'),
    meta(content='https://savage.nps.edu/Savage/AuvWorkbench/OperatingAreas/OpenOceanOpArea.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Not geospatially oriented 
    children=[
    Background(DEF='DeepBottom',groundAngle=[0.05,1.52,1.56,1.57],groundColor=[(0,0,0),(0.05,0.1,0.2),(0.075,0.2,0.3),(0.1,0.3,0.4),(0,0.2,0.4)],skyAngle=[0.05,0.1,1.309,1.57],skyColor=[(0.8,0.8,0.2),(0.1,0.1,0.6),(0.1,0.1,0.6),(0.1,0.25,0.8),(0.6,0.6,0.9)]),
    #  <Background DEF='SandyShallowBottom' groundAngle='0.05 1.52 1.56 1.570796' groundColor='0.2 0.2 0 0.3 0.3 0 0.5 0.5 0.3 0.1 0.3 0.4 0 0.2 0.4' skyAngle='0.05 0.1 1.309 1.571' skyColor='0.8 0.8 0.2 0.1 0.1 0.6 0.1 0.1 0.6 0.1 0.25 0.8 0.6 0.6 0.9'/> 
    #  <DirectionalLight ambientIntensity='0.1' direction='-3 -3 0'/> 
    #  OverheadViewpoint ROUTE: [from isBound to FastNI.set_bind ] 
    Viewpoint(DEF='OverheadViewpoint',description='Open Ocean Operations Area, 1000m up',fieldOfView=1,orientation=(1,0,0,-1.57079),position=(0,1000,0)),
    Viewpoint(DEF='SouthViewpoint',description='Open Ocean OpArea from South',orientation=(1,0,0,-0.3805),position=(0,400,1000)),
    Viewpoint(DEF='EastViewpoint',description='Open Ocean OpArea from East',orientation=(-0.1858,0.9649,0.1858,1.6066),position=(1000,400,0)),
    Viewpoint(DEF='NorthViewpoint',description='Open Ocean OpArea from North',orientation=(0,0.982,0.1891,3.1416),position=(0,400,-1000)),
    Viewpoint(DEF='WestViewpoint',description='Open Ocean OpArea from West',orientation=(0.1858,0.9649,0.1858,-1.6066),position=(-1000,400,0)),
    NavigationInfo(DEF='SlowNI',speed=100.0,transitionType=["ANIMATE"]),
    #  FastNI ROUTE: [from OverheadViewpoint.isBound to set_bind ] 
    NavigationInfo(DEF='FastNI',speed=1000.0,transitionType=["ANIMATE"],type=["FLY","ANY"]),
    ROUTE(fromField='isBound',fromNode='OverheadViewpoint',toField='set_bind',toNode='FastNI'),
    ExternProtoDeclare(name='GridXZ',url=["../../../Savage/Tools/Authoring/GridXZPrototype.x3d#GridXZ","https://savage.nps.edu/Savage/Tools/Authoring/GridXZPrototype.x3d#GridXZ","../../../Savage/Tools/Authoring/GridXZPrototype.wrl#GridXZ","https://savage.nps.edu/Savage/Tools/Authoring/GridXZPrototype.wrl#GridXZ"],
      field=[
      field(accessType='initializeOnly',name='description',type='SFString'),
      field(accessType='inputOutput',name='labelColor',type='SFColor'),
      field(accessType='inputOutput',name='scale',type='SFVec3f'),
      field(accessType='inputOutput',name='originLabel',type='MFString'),
      field(accessType='inputOutput',name='WestLabel',type='MFString'),
      field(accessType='inputOutput',name='NorthWestLabel',type='MFString'),
      field(accessType='inputOutput',name='NorthLabel',type='MFString'),
      field(accessType='inputOutput',name='NorthEastLabel',type='MFString'),
      field(accessType='inputOutput',name='EastLabel',type='MFString'),
      field(accessType='inputOutput',name='SouthEastLabel',type='MFString'),
      field(accessType='inputOutput',name='SouthLabel',type='MFString'),
      field(accessType='inputOutput',name='SouthWestLabel',type='MFString')]),
    ProtoInstance(name='GridXZ',
      fieldValue=[
      fieldValue(name='description',value='GridXZ for AUV in Open Ocean'),
      fieldValue(name='labelColor',value=(1.0,1.0,1.0)),
      fieldValue(name='scale',value=(50.0,50.0,50.0)),
      fieldValue(name='originLabel',value=["origin","0 0 0"]),
      fieldValue(name='WestLabel',value=["West","-Y"]),
      fieldValue(name='NorthWestLabel',value=["1000 0 -500"]),
      fieldValue(name='NorthLabel',value=["North","+X"]),
      fieldValue(name='NorthEastLabel',value=["500 0 500"]),
      fieldValue(name='EastLabel',value=["East","+Y"]),
      fieldValue(name='SouthEastLabel',value=["-500 0 500"]),
      fieldValue(name='SouthLabel',value=["South","-X"]),
      fieldValue(name='SouthWestLabel',value=["-500 0 -500"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for OpenOceanOpArea.py")
