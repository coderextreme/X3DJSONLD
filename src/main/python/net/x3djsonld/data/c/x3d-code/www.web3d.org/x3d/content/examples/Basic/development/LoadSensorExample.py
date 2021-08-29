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
    meta(content='LoadSensorExample.x3d',name='title'),
    meta(content='LoadSensor test: default initial view means no functionality, active view means load in progress, final view means LoadSensor (and loading) success.',name='description'),
    meta(content='16 August 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Don Brutzman, Alan Hudson',name='creator'),
    meta(content='LoadSensor only supported by X3D-compliant browsers. LoadSensor is not implemented in VRML 97.',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  Do not copy this ExternProtoDeclare, it is used for providing automatic support in X3dToVrml97.xslt and X3D-Edit 
    children=[
    WorldInfo(title='LoadSensorExample.x3d'),
    ExternProtoDeclare(appinfo='LoadSensor monitors the progress and success of downloading URL elements over a network. Only nodes that contain a valid URL field (i.e. descendants of X3DUrlObject) may be specified as watchList children. Multiple nodes may be watched with a single LoadSensor.',documentation='https://www.web3d.org/specifications/ISO-IEC-19775/Part01/components/networking.html#LoadSensor',name='LoadSensor',url=["LoadSensorPrototype.wrl#LoadSensor","https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorPrototype.wrl#LoadSensor","LoadSensorPrototype.x3d#LoadSensor","https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorPrototype.x3d#LoadSensor"],
      field=[
      field(accessType='inputOutput',name='enabled',type='SFBool'),
      field(accessType='inputOutput',name='timeOut',type='SFTime'),
      field(accessType='initializeOnly',name='watchList',type='MFNode'),
      field(accessType='inputOnly',name='set_watchList',type='MFNode'),
      field(accessType='outputOnly',name='isActive',type='SFBool'),
      field(accessType='outputOnly',name='isLoaded',type='SFBool'),
      field(accessType='outputOnly',name='loadTime',type='SFTime'),
      field(accessType='outputOnly',name='progress',type='SFFloat'),
      field(accessType='initializeOnly',name='metadata',type='SFNode')]),
    Group(
      children=[
      Viewpoint(DEF='NotLoadedView',description='Not loaded texture',position=(0,0,6)),
      Viewpoint(DEF='ActiveView',description='Loading textures'),
      Viewpoint(DEF='LoadedView',description='Texture loading complete',orientation=(0,1,0,3.14159),position=(0,0,-10)),
      Group(
        children=[
        Transform(translation=(-1,0,0),
          children=[
          Shape(
            geometry=Sphere(),
            appearance=Appearance(
              texture=ImageTexture(DEF='EarthImage',url=["earth-topo.png","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"])))]),
        Transform(translation=(1,0,0),
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(
              texture=ImageTexture(DEF='JavaBoardImage',url=["JavaBoardSmileForTheCamera.jpg","https://www.web3d.org/x3d/content/examples/Basic/development/JavaBoardSmileForTheCamera.jpg"])))])]),
      LoadSensor(DEF='Loader',timeOut=4,
        children=[
        ImageTexture(USE='EarthImage')],
        children=[
        ImageTexture(USE='JavaBoardImage')]),
      ROUTE(fromField='isActive',fromNode='Loader',toField='set_bind',toNode='ActiveView'),
      ROUTE(fromField='isLoaded',fromNode='Loader',toField='set_bind',toNode='LoadedView'),
      Transform(translation=(0,0,7),
        children=[
        Shape(
          geometry=Text(string=["LoadSensor active"],
            fontStyle=FontStyle(DEF='Font',justify=["MIDDLE","MIDDLE"],size=0.5)),
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.5,0.1))))]),
      Transform(rotation=(0,1,0,3.14159),translation=(0,0,-7),
        children=[
        Shape(
          geometry=Text(string=["LoadSensor success"],
            fontStyle=FontStyle(USE='Font')),
          appearance=Appearance(
            material=Material(diffuseColor=(0.1,0.5,0.1))))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LoadSensorExample.py")
