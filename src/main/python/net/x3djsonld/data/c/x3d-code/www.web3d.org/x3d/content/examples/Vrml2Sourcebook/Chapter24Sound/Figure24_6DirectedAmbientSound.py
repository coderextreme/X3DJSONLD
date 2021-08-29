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
    meta(content='Figure24_6DirectedAmbientSound.x3d',name='title'),
    meta(content='Figure 24.6, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch24/24fig06.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='3 October 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A time-varying ambient sound aimed to the right.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter24Sound/Figure24_6DirectedAmbientSound.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure24_6DirectedAmbientSound.x3d'),
    Viewpoint(description='9m off-axis distance, range circles at -2m, -1m, 5m and 10m',position=(0,1,9)),
    Viewpoint(description='5m on-axis distance, range circles at 5m and 10m',orientation=(0,1,0,1.57),position=(8,1,0)),
    NavigationInfo(type=["WALK","EXAMINE","ANY"]),
    Group(
      children=[
      Sound(maxBack=2,minFront=5,
        source=AudioClip(description='willow1',loop=True,url=["willow1.wav","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter24Sound/willow1.wav"])),
      Shape(
        geometry=Sphere(radius=0.25),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,0),emissiveColor=(1,1,1)))),
      Transform(scale=(3,2,2),translation=(2,0,0),
        children=[
        Shape(DEF='MinMarker',
          geometry=Cylinder(height=0.01,side=False),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0),emissiveColor=(1,0,0.5))))]),
      Transform(scale=(6,4,4),translation=(4,0,0),
        children=[
        Shape(DEF='MaxMarker',
          geometry=Cylinder(height=0.001,side=False),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0),emissiveColor=(0.5,0,1))))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure24_6DirectedAmbientSound.py")
