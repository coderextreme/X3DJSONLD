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
    meta(content='PortHuenemePiers.x3d',name='title'),
    meta(content='Basic layout of pier structure at Port Hueneme California.',name='description'),
    meta(content='James Harney',name='creator'),
    meta(content='29 January 2002',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='NIMA Chart 18725 Port Hueneme to Santa Barbara',name='reference'),
    meta(content='http://www.mapquest.com',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/PortHuenemeCalifornia/PortHuenemePiers.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='ViewPositionOrientation provides provides console output of local position and orientation as user navigates',name='ViewPositionOrientation',url=["ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../../Basic/course/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","../../../Basic/course/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"],
      field=[
      field(accessType='inputOutput',appinfo='Whether or not ViewPositionOrientation sends output to console.',name='enabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Output internal trace messages for debugging this node - developer use only can be ignored.',name='traceEnabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='Ability to turn output tracing on/off at runtime.',name='set_traceEnabled',type='SFBool'),
      field(accessType='outputOnly',appinfo='Output local position.',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='Output local orientation.',name='orientation_changed',type='SFRotation'),
      field(accessType='outputOnly',appinfo='MFString value of new Viewpoint',name='outputViewpointString',type='MFString')]),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    NavigationInfo(avatarSize=[2,1.6,.75],speed=10,type=["EXAMINE","FLY","ANY"],visibilityLimit=8000),
    Viewpoint(description='View Of Piers',orientation=(.542,.653,.529,4.2716),position=(221.4,1904.9,668)),
    DirectionalLight(ambientIntensity=.3,direction=(.8,-.2,-.2)),
    ProtoInstance(name='ViewPositionOrientation',
      fieldValue=[
      fieldValue(name='enabled',value=True)]),
    Transform(DEF='WaterTransform',translation=(0,-2,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,.5686,.796))),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,0,-1],solid=False,
          coord=Coordinate(point=[(-2000,0,-2000),(-2000,0,2000),(1250,0,2000),(1250,0,-2000)])))]),
    Transform(DEF='PierTransform',translation=(0,1,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.6509,.6392,.5726))),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,36,38,40,42,44,3,4,5,6,7,8,9,10,11,23,22,21,20,19,18,17,16,15,45,43,41,39,37,14,13,12,-1,23,24,21,22,23,-1,21,20,19,25,24,21,-1,19,18,17,19,-1,17,25,19,17,-1,15,25,17,16,15,-1,37,26,12,13,14,37,-1,23,27,28,29,23,-1,23,11,32,33,34,29,28,27,23,-1,29,24,30,34,29,-1,24,25,35,30,24,-1,25,26,31,35,25,-1,26,12,0,31,26,-1,37,26,39,37,-1,39,41,43,45,39,-1,39,25,15,45,39,-1],solid=False,
          coord=Coordinate(point=[(0,-11,0),(340,-11,260),(790,-11,260),(880,-11,460),(700,-11,460),(700,-11,660),(360,-11,660),(360,-11,1020),(300,-11,1020),(220,-11,940),(220,-11,300),(-20,-11,100),(0,3,0),(340,3,260),(790,3,260),(880,3,460),(700,3,460),(700,3,660),(360,3,660),(360,3,1020),(300,3,1020),(220,3,940),(220,3,300),(-20,3,100),(-20,3,1100),(900,3,1100),(900,3,0),(-220,3,190),(-150,3,400),(-20,3,600),(-20,-11,1100),(900,-11,0),(-220,-11,190),(-150,-11,400),(-20,-11,600),(900,-11,1100),(880,-11,150),(880,3,150),(900,-11,190),(900,3,190),(850,-11,260),(850,3,260),(850,-11,290),(850,3,290),(880,-11,290),(880,3,290)])))]),
    Transform(DEF='OtherGeo',translation=(0,-1,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.4745,.4667,.3804))),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,0,-1,0,1,14,13,0,-1,1,2,15,14,-1,2,3,16,15,-1,3,4,17,16,3,-1,4,5,18,17,4,-1,5,6,19,18,5,-1,6,7,20,19,6,-1,7,8,21,20,7,-1,8,9,22,21,8,-1,9,10,23,22,9,-1,10,11,24,23,10,-1,11,12,25,24,11,-1,26,12,27,28,29,30,26,-1,31,24,32,33,34,35,31,-1,26,12,24,31,26,-1,12,27,32,24,12,-1,27,28,33,32,27,-1,28,29,34,33,28,-1,29,30,35,34,29,-1],solid=False,
          coord=Coordinate(point=[(0,3,0),(50,3,-125),(50,3,-215),(50,3,-300),(-50,3,-375),(-250,3,-450),(-100,3,-525),(0,3,-650),(-25,3,-500),(0,3,-475),(150,3,-525),(1250,3,-1220),(1250,3,0),(0,-11,0),(50,-11,-125),(50,-11,-215),(50,-11,-300),(-50,-11,-375),(-250,-11,-450),(-100,-11,-525),(0,-11,-650),(-25,-11,-500),(0,-11,-475),(150,-11,-525),(1250,-11,-1220),(1250,-11,0),(900,3,0),(1250,3,1500),(-20,3,1500),(-20,3,1100),(900,3,1100),(900,-11,0),(1250,-11,1500),(-20,-11,1500),(-20,-11,1100),(900,-11,1100),(1250,-11,0),(1250,3,0),(1250,-11,-30),(1250,3,30)])))]),
    Transform(DEF='Warehouse1',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=IndexedFaceSet(coordIndex=[0,1,6,7,0,-1,1,2,5,6,1,-1,2,3,4,5,2,-1,7,6,5,4,7,-1,0,7,4,3,0,-1],solid=False,
          coord=Coordinate(point=[(770,3,485),(770,3,585),(740,3,585),(740,3,485),(740,8,485),(740,8,585),(770,8,585),(770,8,485),(748,3,485),(749,3,485),(749,5,485),(748,5,485)])))]),
    Transform(DEF='Warehouse2',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=IndexedFaceSet(coordIndex=[0,1,6,7,0,-1,1,2,5,6,1,-1,2,3,4,5,2,-1,7,6,5,4,7,-1,3,8,11,10,9,0,7,4,3,-1],solid=False,
          coord=Coordinate(point=[(840,3,475),(840,3,525),(820,3,525),(820,3,475),(820,8,475),(820,8,525),(840,8,525),(840,8,475),(828,3,475),(829,3,475),(829,5,475),(828,5,475)])))]),
    Transform(DEF='Warehouse3',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=IndexedFaceSet(coordIndex=[0,1,6,7,0,-1,1,2,5,6,1,-1,2,3,4,5,2,-1,7,6,5,4,7,-1,0,7,4,3,0,-1],solid=False,
          coord=Coordinate(point=[(565,3,705),(565,3,735),(480,3,735),(480,3,705),(480,8,705),(480,8,735),(565,8,735),(565,8,705)])))]),
    Transform(DEF='Warehouse4',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=IndexedFaceSet(coordIndex=[0,1,6,7,0,-1,1,2,5,6,1,-1,2,3,4,5,2,-1,7,6,5,4,7,-1,0,7,4,3,0,-1],solid=False,
          coord=Coordinate(point=[(480,3,760),(480,3,790),(400,3,790),(400,3,760),(400,8,760),(400,8,790),(480,8,790),(480,8,760)])))]),
    Transform(DEF='Warehouse5',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=IndexedFaceSet(coordIndex=[0,1,6,7,0,-1,1,2,5,6,1,-1,2,3,4,5,2,-1,7,6,5,4,7,-1,0,7,4,3,0,-1],solid=False,
          coord=Coordinate(point=[(200,3,870),(200,3,920),(170,3,920),(170,3,870),(170,8,870),(170,8,920),(200,8,920),(200,8,870)])))]),
    Transform(DEF='Warehouse6',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=IndexedFaceSet(coordIndex=[0,1,6,7,0,-1,1,2,5,6,1,-1,2,3,4,5,2,-1,7,6,5,4,7,-1,0,7,4,3,0,-1],solid=False,
          coord=Coordinate(point=[(190,3,715),(190,3,810),(165,3,810),(165,3,715),(165,8,715),(165,8,810),(190,8,810),(190,8,715)])))]),
    Transform(DEF='Warehouse7',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=IndexedFaceSet(coordIndex=[0,1,6,7,0,-1,1,2,5,6,1,-1,2,3,4,5,2,-1,7,6,5,4,7,-1,0,7,4,3,0,-1],solid=False,
          coord=Coordinate(point=[(200,3,540),(200,3,690),(140,3,690),(140,3,540),(140,8,540),(140,8,690),(200,8,690),(200,8,540)])))]),
    Transform(DEF='Warehouse8',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=IndexedFaceSet(coordIndex=[0,1,6,7,0,-1,1,2,5,6,1,-1,2,3,4,5,2,-1,7,6,5,4,7,-1,0,7,4,3,0,-1],solid=False,
          coord=Coordinate(point=[(200,3,312),(200,3,530),(140,3,530),(140,3,312),(140,8,312),(140,8,530),(200,8,530),(200,8,312)])))]),
    Transform(DEF='Warehouse9',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=IndexedFaceSet(coordIndex=[0,1,6,7,0,-1,1,2,5,6,1,-1,2,3,4,5,2,-1,7,6,5,4,7,-1,0,7,4,3,0,-1],solid=False,
          coord=Coordinate(point=[(770,3,210),(770,3,240),(540,3,240),(540,3,210),(540,8,210),(540,8,240),(770,8,240),(770,8,210)])))]),
    Transform(DEF='Warehouse10',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=IndexedFaceSet(coordIndex=[0,1,6,7,0,-1,1,2,5,6,1,-1,2,3,4,5,2,-1,7,6,5,4,7,-1,0,7,4,3,0,-1],solid=False,
          coord=Coordinate(point=[(500,3,210),(500,3,240),(360,3,240),(360,3,210),(360,8,210),(360,8,240),(500,8,240),(500,8,210)])))]),
    Transform(DEF='Warehouse11',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=IndexedFaceSet(coordIndex=[0,1,6,7,0,-1,1,2,5,6,1,-1,2,3,4,5,2,-1,7,6,5,4,7,-1,0,7,4,3,0,-1],solid=False,
          coord=Coordinate(point=[(350,3,210),(350,3,240),(335,3,240),(335,3,210),(335,8,210),(335,8,240),(350,8,240),(350,8,210)])))]),
    Transform(DEF='Warehouse12',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=IndexedFaceSet(coordIndex=[0,1,6,7,0,-1,1,2,5,6,1,-1,2,3,4,5,2,-1,7,6,5,4,7,-1,0,7,4,3,0,-1],solid=False,
          coord=Coordinate(point=[(640,3,110),(640,3,150),(350,3,150),(350,3,110),(350,12,110),(350,12,150),(640,12,150),(640,12,110)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PortHuenemePiers.py")
