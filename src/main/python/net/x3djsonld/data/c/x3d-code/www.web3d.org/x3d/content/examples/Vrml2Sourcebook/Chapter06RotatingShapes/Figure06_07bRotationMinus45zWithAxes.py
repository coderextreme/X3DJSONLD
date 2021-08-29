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
    meta(content='Figure06_07bRotationMinus45zWithAxes.x3d',name='title'),
    meta(content='Figure 6.7b, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch06/06fig07b.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='6 October 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Rotating -45 degrees about Z axis, with coordinate axes superimposed to show X3D/VRML directions',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter06RotatingShapes/Figure06_07bRotationMinus45zWithAxes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure06_07bRotationMinus45zWithAxes.x3d'),
    Viewpoint(description='View shape',position=(0,0,6)),
    #  -45 degrees equals -0.785 radians, 0 0 1 indicates Z axis 
    Transform(rotation=(0,0,1,-0.785),
      children=[
      Transform(translation=(0,0.8,0),
        children=[
        Shape(
          geometry=Cone(bottomRadius=0.3,height=0.6),
          appearance=Appearance(DEF='GREEN_APPEARANCE',
            material=Material(diffuseColor=(0.1,0.7,0.2))))]),
      Shape(
        geometry=Box(size=(0.25,1,0.25)),
        appearance=Appearance(USE='GREEN_APPEARANCE'))]),
    #  Adding this Inline reference to another scene superimposes X3D/VRML coordinate system axes. 
    Transform(scale=(1.5,1.5,1.5),
      children=[
      Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure06_07bRotationMinus45zWithAxes.py")
