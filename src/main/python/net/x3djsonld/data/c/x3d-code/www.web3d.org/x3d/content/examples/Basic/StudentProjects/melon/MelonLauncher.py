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

newModel=X3D(version='3.0',profile='Immersive',
  head=head(
    children=[
    meta(content='MelonLauncher.x3d',name='title'),
    meta(content='DIS test world for shooting a watermelon.',name='description'),
    meta(content='Andrew Wiest',name='creator'),
    meta(content='*enter name of VRML-to-X3D translator (if any) here*',name='translator'),
    meta(content='5 June 2001',name='created'),
    meta(content='9 October 2008',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/melon/MelonLauncher.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(name='license',content='../../license.html')]),
  Scene=Scene(
    # Scene graph nodes are added here 
    children=[
    Background(skyAngle=[1.57],skyColor=[(0.6,0.8,0.6),(0.6,0.6,0.6)]),
    Viewpoint(DEF='DefaultViewpoint',description='Launcher Main',orientation=(-0.140128,0.988431,0.058043,0.79366),position=(500,0,100)),
    Transform(scale=(10,10,10),
      children=[
      Inline(url=["GridXY_20x20Movable.wrl"
"/www.web3d.org/x3d/content/examples/Basic/course/GridXY_20x20Movable.wrl"
"https://www.web3d.org/x3d/content/examples/Basic/course/GridXY_20x20Movable.wrl"
"GridXY_20x20Movable.x3d"
"/www.web3d.org/x3d/content/examples/Basic/course/GridXY_20x20Movable.x3d"
"https://www.web3d.org/x3d/content/examples/Basic/course/GridXY_20x20Movable.x3d"]),
      Inline(url=["GridXZ_20x20Movable.wrl"
"/www.web3d.org/x3d/content/examples/Basic/course/GridXZ_20x20Movable.wrl"
"https://www.web3d.org/x3d/content/examples/Basic/course/GridXZ_20x20Movable.wrl"
"GridXZ_20x20Movable.x3d"
"/www.web3d.org/x3d/content/examples/Basic/course/GridXZ_20x20Movable.x3d"
"https://www.web3d.org/x3d/content/examples/Basic/course/GridXZ_20x20Movable.x3d"]),
      Inline(url=["GridYZ_20x20Movable.wrl"
"/www.web3d.org/x3d/content/examples/Basic/course/GridYZ_20x20Movable.wrl"
"https://www.web3d.org/x3d/content/examples/Basic/course/GridYZ_20x20Movable.wrl"
"GridYZ_20x20Movable.x3d"
"/www.web3d.org/x3d/content/examples/Basic/course/GridYZ_20x20Movable.x3d"
"https://www.web3d.org/x3d/content/examples/Basic/course/GridYZ_20x20Movable.x3d"])]),
    EspduTransform(DEF='MelonReceiver',address='224.2.181.145',applicationID=5,entityID=6,marking='melon',port=62040,siteID=1,writeInterval=0,
      #  traceJava="false" traceSize="5 5 5" traceOffset="0 -5 0" 
      children=[
      Transform(
        children=[
        Shape(
          geometry=Sphere(radius=2),
          appearance=Appearance(
            material=Material(diffuseColor=(0.1,0.9,0.1),shininess=.5),
            texture=ImageTexture(url=['http://faculty.nps.edu/brutzman/images/brutzman.94.gif']))),
        Viewpoint(DEF='withtheMelon',description='with the melon')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MelonLauncher.py")
