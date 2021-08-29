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
    meta(content='Figure09_6SphereSensorWithAxes.x3d',name='title'),
    meta(content='Figure 9.6, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch09/09fig06.htm',name='reference'),
    meta(content='Don Brutzman',name='transcriber'),
    meta(content='12 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Two shapes that rotate when the viewer drags them, with coordinate axes superimposed to show X3D/VRML directions.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter09SensingViewer/Figure09_6SphereSensorWithAxes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Click and drag to rotate shapes. Superfluous Group nodes removed. 
    children=[
    WorldInfo(title='Figure09_6SphereSensorWithAxes.x3d'),
    Transform(DEF='FIRST_TRANSFORM',translation=(-2,0,0),
      children=[
      Shape(
        geometry=Box(),
        appearance=Appearance(DEF='FIRST_APPEARANCE',
          material=Material(diffuseColor=(.9,.5,.1),emissiveColor=(.2,.1,.05)))),
      SphereSensor(DEF='FIRST_SPHERESENSOR',description='click and drag to rotate')]),
    Transform(DEF='SECOND_TRANSFORM',translation=(2,0,0),
      children=[
      Shape(
        geometry=Cone(),
        appearance=Appearance(USE='FIRST_APPEARANCE')),
      SphereSensor(DEF='SECOND_SPHERESENSOR',description='click and drag to rotate'),
      Transform(DEF='TRANSPARENT_CYLINDER_TRANSFORM',translation=(0,-.2,0),
        children=[
        Shape(
          geometry=Sphere(radius=1.3),
          appearance=Appearance(
            material=Material(diffuseColor=(.7,.7,.7),transparency=.5)))])]),
    #  Adding this Inline reference to another scene superimposes X3D/VRML coordinate system axes. 
    Transform(scale=(4,4,4),
      children=[
      Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])]),
    #  Note that we are connecting a rotation output to a rotation input in each of these ROUTEs. 
    ROUTE(fromField='rotation_changed',fromNode='FIRST_SPHERESENSOR',toField='set_rotation',toNode='FIRST_TRANSFORM'),
    ROUTE(fromField='rotation_changed',fromNode='SECOND_SPHERESENSOR',toField='set_rotation',toNode='SECOND_TRANSFORM')]
    #  Have some fun: have the first sensor route to the second transform, and vice versa. 
    )
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure09_6SphereSensorWithAxes.py")
