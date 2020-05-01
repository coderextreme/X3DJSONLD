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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='qq3.x3d',name='title'),
    meta(content='John Carlson',name='creator'),
    meta(content='John Carlson',name='translator'),
    meta(content='11 Jan 2015',name='created'),
    meta(content='05 May 2017',name='modified'),
    meta(content='12 extrusions to test prototype expander',name='description'),
    meta(content='https://coderextreme.net/x3d/qq3.x3d',name='identifier'),
    meta(content='manual',name='generator')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='Process',
      ProtoBody=ProtoBody(
        children=[
        Group(
          #  left 
          children=[
          Transform(scale=(0.5,0.5,0.5),
            children=[
            Shape(DEF='ShapeLeftDown',
              appearance=Appearance(
                material=Material(diffuseColor=(0.7,1,0))),
              geometry=Extrusion(spine=[(-2.5,0,0),(-1.5,0,0)],creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)]))]),
          #  right 
          Transform(scale=(0.5,0.5,0.5),
            children=[
            Shape(DEF='ShapeUpRight',
              appearance=Appearance(
                material=Material(diffuseColor=(0,0.7,1))),
              geometry=Extrusion(spine=[(1.5,0,0),(2.5,0,0)],creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)]))]),
          #  up 
          Transform(scale=(0.5,0.5,0.5),
            children=[
            Shape(USE='ShapeUpRight')]),
          #  down 
          Transform(scale=(0.5,0.5,0.5),
            children=[
            Shape(USE='ShapeLeftDown')])])])),
    Viewpoint(description='Process pipes',orientation=(1,0,0,-0.4),position=(0,5,12)),
    Transform(translation=(0,-2.5,0),
      children=[
      ProtoInstance(name='Process')]),
    Transform(
      children=[
      ProtoInstance(name='Process')]),
    Transform(translation=(0,2.5,0),
      children=[
      ProtoInstance(name='Process')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for qq3.py")
