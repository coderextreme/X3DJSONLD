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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='TopEdge.x3d',name='title'),
    meta(content='Another sketch of top edge',name='description'),
    meta(content='1 September 2004',name='created'),
    meta(content='18 October 2004',name='modified'),
    meta(content='Tay Yeong Kiang Winston',name='creator'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/HovercraftSnr6Singapore/TopEdge.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='Front',
      children=[
      Group(DEF='CFront',
        children=[
        Transform(translation=(0,1.25,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=0.240602,diffuseColor=(0.526888,0.525905,0.603564),shininess=0.636364,specularColor=(0.651092,0.441837,0.42173),transparency=0.285714)),
            geometry=Box(size=(1.9,2.4,0.1)))]),
        Shape(DEF='BFrame',
          appearance=Appearance(
            material=Material(ambientIntensity=0.25,diffuseColor=(0.315152,0.07457,0.0),shininess=0.036364,specularColor=(0.508861,0.684007,0.326263))),
          geometry=Box(size=(2,0.4,0.4))),
        Transform(translation=(0,2.5,0),
          children=[
          Shape(USE='BFrame')]),
        Transform(translation=(0.8,1.25,0),
          children=[
          Shape(DEF='RFrame',
            appearance=Appearance(
              material=Material(ambientIntensity=0.25,diffuseColor=(0.315152,0.07457,0.0),shininess=0.036364,specularColor=(0.508861,0.684007,0.326263))),
            geometry=Box(size=(0.4,2.5,0.4)))]),
        Transform(translation=(-0.8,1.25,0),
          children=[
          Shape(USE='RFrame')])]),
      Transform(translation=(2,0,0),
        children=[
        Group(USE='CFront')]),
      Transform(translation=(-2,0,0),
        children=[
        Group(USE='CFront')])]),
    Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TopEdge.py")
