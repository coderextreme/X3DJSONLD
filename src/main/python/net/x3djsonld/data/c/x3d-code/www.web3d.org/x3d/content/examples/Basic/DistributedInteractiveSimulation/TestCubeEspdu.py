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
    meta(content='TestCubeEspdu.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='19 January 2009',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='DIS-enabled test shape for DIS ESPDU test panel.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/TestCubeEspdu.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TestCubeEspdu.x3d'),
    Background(skyColor=[(0,0.509804,0.580392)]),
    Viewpoint(description='ESPDU test cube',orientation=(-0.4335,0.8831,0.1796,0.8772),position=(25,15,25)),
    EspduTransform(DEF='TestCubeTransform',address='239.1.2.3',entityID=2,marking='TestCube',networkMode='networkReader',port=62040,
      children=[
      Viewpoint(description='local (moving) view',orientation=(-0.4335,0.8831,0.1796,0.8772),position=(10,6,10)),
      Switch(whichChoice=0,
        children=[
        Inline(url=["TestCube.x3d","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/TestCube.x3d"]),
        #  alternate object to view 
        Transform(DEF='ShrinkHeloToToySize',scale=(0.25,0.25,0.25),
          children=[
          Inline(url=["../StudentProjects/StealthHelo.x3d","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/StealthHelo.x3d","../StudentProjects/StealthHelo.wrl","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/StealthHelo.wrl"])])])]),
    #  provide visual context with axes and grid 
    Transform(scale=(10,10,10),
      children=[
      Inline(url=["CoordinateAxesX3dDIS.x3d","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/CoordinateAxesX3dDIS.x3d","CoordinateAxesX3dDIS.wrl","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/CoordinateAxesX3dDIS.wrl"])]),
    Inline(DEF='GridXY_20x20Fixed',url=["../../Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","../../Savage/Tools/Authoring/GridXZ_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TestCubeEspdu.py")
